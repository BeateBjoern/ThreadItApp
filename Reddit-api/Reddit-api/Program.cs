
using Reddit_api.Services;
using Reddit_app.Data;
using Npgsql.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Design;
using Microsoft.EntityFrameworkCore.Sqlite;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using Microsoft.AspNetCore.Builder;
using shared.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Configuration;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;


namespace Reddit_api
{
    public class Program
    {
        public static void Main(string[] args)
        {
            var builder = WebApplication.CreateBuilder(args);
            

            //Applying CORS policy, allowing any origin and all headers + methods
            var AllowCORS = "_AllowCORS";
            builder.Services.AddCors(options =>
            {
                options.AddPolicy(name: AllowCORS, builder => {
                    builder.AllowAnyOrigin()
                           .AllowAnyHeader()
                           .AllowAnyMethod();
                });
            });



            // Add services to the container.
            builder.Services.AddControllers();
            // Learn more about configuring Swagger/OpenAPI at https://aka.ms/aspnetcore/swashbuckle
            builder.Services.AddEndpointsApiExplorer();
            builder.Services.AddSwaggerGen();
            builder.Services.AddControllers();

            // string connectionString = Environment.GetEnvironmentVariable("PG_DB_CONNECTION");
            /*
            string connectionString = builder.Configuration.GetConnectionString("PG_DB_ConnectionString");
            */
            
            //Getting connectonstring from configs(appsettings.json) 
            string cs = builder.Configuration.GetConnectionString("SQlite_ConnectionString");
            
            //Adding a db context service using RedditDbContext --> using SQLITE + connectionstring
            builder.Services.AddDbContext<RedditDbContext>(options => options.UseSqlite(cs));
       
           
            

            //Adding the dbContext instance, setting type (postgres) and connectionstring +  certificate rules (DB has access limitation)
            // builder.Services.AddDbContext<RedditDbContext>(options =>
            // options.UseNpgsql(connectionString, builder =>
            // {
            //     builder.RemoteCertificateValidationCallback((s, c, chain, sslPolicyErrors) =>
            //     {
            //          if (sslPolicyErrors == SslPolicyErrors.None)
            //             return true; 
            //          // if (sslPolicyErrors != SslPolicyErrors.RemoteCertificateChainErrors)
            //         //     return false;
            //         if (chain.ChainStatus.Length != 1)
            //              return false;
            //         if (chain.ChainStatus[0].Status != X509ChainStatusFlags.UntrustedRoot)
            //              return false;
            //
            //         X509Certificate2 caCert = new X509Certificate2("/certs/ca-certificate.crt");
            //         int lastIndex = chain.ChainElements.Count - 1;
            //         return chain.ChainElements[lastIndex].Certificate.Equals(caCert);
            //     });
            //
            //     builder.ProvideClientCertificatesCallback(clientCerts =>
            //     {
            //         X509Certificate2 caCert = new X509Certificate2("/certs/ca-certificate.crt");
            //         clientCerts.Add(caCert);
            //     });
            // }
            // ));


            //Adding the blogpostservice to be accessible with endpoints 
            builder.Services.AddScoped<BlogPostService>();

            var app = builder.Build();



            // Configure the HTTP request pipeline.
            if (app.Environment.IsDevelopment())
            {
                app.UseSwagger();
                app.UseSwaggerUI(c =>
                {
                    c.SwaggerEndpoint("/swagger/v1/swagger.json", "My reddit api");
                    
                });
            }

            app.Use(async (context, next) =>
            {
                context.Response.ContentType = "application/json; charset=utf-8";
                await next(context);
            });



            /*app.UseHttpsRedirection();*/

            app.UseCors(AllowCORS);

            app.UseAuthorization();

            app.MapControllers();



            //Blogpost endpoints

            app.MapGet("/api/blogposts", (BlogPostService service) =>
            {
                return service.GetBlogPosts();
            });


            app.MapGet("/api/blogposts/{id}", (BlogPostService service, int id) =>
            {
                return service.GetBlogPostById(id);
            });


            app.MapPost("/api/blogposts", (BlogPostService service, BlogPost blogPost) =>
            {
                return service.CreatePost(blogPost);
            });


            app.MapPut("/api/blogposts/vote", (BlogPostService service,  [FromBody] VoteValueDTO dto) =>
            {  
                service.VotePost(dto);

            });

            app.MapDelete("/api/blogposts/{id}", (BlogPostService service, int id) =>
            {
                service.DeleteBlogPost(id);
            });



            //Comment endpoints

            app.MapGet("/api/blogposts/{id}/comments", (BlogPostService service, int id) =>
            {
                return service.GetCommentsByBlogPostId(id);
            });



            app.MapPost("/api/blogposts/{id}/comments", (BlogPostService service, int id, Comment comment) =>
            {
                service.CreateComment(id, comment);
            });


            app.MapPut("/api/blogposts/{postId}/comments/{commentId}/vote", (BlogPostService service, VoteValueDTO dto) =>
            {
                service.VoteComment(dto);
            });


          


            app.Run();
        }
    }
}