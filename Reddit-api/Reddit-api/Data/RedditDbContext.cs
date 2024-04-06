
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using shared.Models;


namespace Reddit_app.Data
{
    public class RedditDbContext : DbContext
    {

        public DbSet<BlogPost> BlogPosts { get; set; }

    

        public RedditDbContext(DbContextOptions<RedditDbContext> options) : base(options) 
        {
        }

     
        
        //Overriding the modelcreating (from migration) with specific configuration 
        /*protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<BlogPost>().ToTable("BlogPosts", schema: "redditDb"); //Specifying the DB schema 
            modelBuilder.Entity<Comment>().ToTable("Comments", schema: "redditDb");
        }*/

    }
}
