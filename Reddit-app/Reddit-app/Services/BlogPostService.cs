using Microsoft.Extensions.Configuration;
using shared.Models;
using System.Net.Http.Json;
using System.Text.Json;
using System.Runtime.CompilerServices;
using System.Text.Json.Serialization;

namespace Reddit_app.Services
{
    public class BlogPostService
    {

        private readonly HttpClient http;

        private readonly IConfiguration configuration;

        private readonly string baseAPI = "";

        //Constructor with injected dependency of httpclient 
        public BlogPostService(HttpClient http, IConfiguration configuration)
        {
            this.http = http;
            this.configuration = configuration;
            this.baseAPI = configuration["ApiSettings:BASE_API_URL"]; // Fetching the Api url from config settings in appsettings.json 
      
        }


        //Blogpost methods
        public async Task<List<BlogPost>> GetBlogPosts()
        {

            var blogPosts = await http.GetFromJsonAsync<List<BlogPost>>($"{baseAPI}");
            return blogPosts.OrderByDescending(p => p.RegDate).ToList();
            
        }


        public async Task<BlogPost> GetBlogPostById(int id)
        {
           var result = await http.GetFromJsonAsync<BlogPost>($"{baseAPI}/{id}");
           return result;
        }


        public async Task<BlogPost> CreatePost(BlogPost blogPost)
        {

            HttpResponseMessage response = await http.PostAsJsonAsync($"{baseAPI}", blogPost);
            string responseMsg = response.Content.ReadAsStringAsync().Result;
            if (response.IsSuccessStatusCode)
            {
                

                Console.WriteLine("Http response message: " + response.StatusCode + "\n" + responseMsg);

                BlogPost? newBlogPost = JsonSerializer.Deserialize<BlogPost>(responseMsg, new JsonSerializerOptions
                {
                    PropertyNameCaseInsensitive = true
                });

                return newBlogPost;
            }
            else
            {
                Console.WriteLine("Error " + responseMsg);
                return null;
            }

        }


        public async Task VotePost(int id, int value)
        {
            var vDTO = new VoteValueDTO { PostId = id, Value = value };
            await http.PutAsJsonAsync($"{baseAPI}/vote", vDTO);
        }


        public async Task DeleteBlogPost(int id)
        {
            await http.DeleteAsync($"{baseAPI}/{id}");

        }


        // Comment methods 

        public async Task<List<Comment>> GetCommentsByBlogPostId(int id)
        {
            var result = await http.GetFromJsonAsync<List<Comment>>($"{baseAPI}/{id}/comments");
            return result.OrderBy(c => c.CommentDate).ToList();
        }


        public async Task CreateComment(int id, Comment comment)
        {

            await http.PostAsJsonAsync($"{baseAPI}/{id}/comments", comment);

        }

        public async Task VoteComment(int postId, int commentId, int value)
        {

            var dto = new VoteValueDTO { PostId = postId, CommentId = commentId, Value = value };
            await http.PutAsJsonAsync($"{baseAPI}/{postId}/comments/{commentId}/vote", dto);

        }







       

    }
}
