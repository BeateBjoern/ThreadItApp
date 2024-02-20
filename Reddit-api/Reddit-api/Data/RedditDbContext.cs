
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Infrastructure;
using shared.Models;


namespace Reddit_app.Data
{
    public class RedditDbContext : DbContext
    {

        public DbSet<BlogPost> BlogPosts { get; set; }

        // Note to self: Setting dbcontext constructor  options setting ek.s connectionstring 
        //. This parameter is used to configure various options for the DbContext, such as the database provider, connection string, and other related settings.
        //: base(options) is the constructor call to the BASE class constructor (DbContext).
        //It passes the options parameter from config(program.cs)  to the base class (DbContext) constructor, allowing the base class to be initialized with the specified options.

        //The base keyword is used to call a constructor of the base class. In this case, 
        //it's passing the options to the base class constructor so that the DbContext can be properly
        //initialized with the provided configuration.

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
