using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Reddit_app.Data;
using shared.Models;

namespace Reddit_api.Services
{
    public class BlogPostService
    {

        //Dbcontext instance
        public RedditDbContext DbContext { get; }


        //Constructor which passes the dbcontext on creation of service instance 
        public BlogPostService(RedditDbContext dbContext)
        {
            this.DbContext = dbContext;
        }


        //BlogPost methods

        public async Task<List<BlogPost>> GetBlogPosts()
        {
            try
            {
                var result = await DbContext.BlogPosts.Include(p => p.Comments).ToListAsync();
                foreach (var b in result)
                {
                    Console.WriteLine(b.Title);
                }
                return result;
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return null;
            }
        }


        public async Task<BlogPost> GetBlogPostById(int id)
        {
            try
            {
                var result = await DbContext.BlogPosts.FirstOrDefaultAsync(post => post.Id == id);
                return result;
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return null;
            }
        }

        public async Task<BlogPost> CreatePost(BlogPost newPost)
        {
            try
            {
                DbContext.Add(newPost);
                await DbContext.SaveChangesAsync();
                return newPost;
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                return null;
            }         
        }



        public void VotePost(VoteValueDTO dto)
        {

            var result = DbContext.BlogPosts.FirstOrDefault(post => post.Id == dto.PostId);
            try
            {
                result.VoteValue = result.VoteValue + dto.Value;
                DbContext.SaveChanges();
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                
            }                        
        }


        public void DeleteBlogPost(int id)
        {
            var result = DbContext.BlogPosts.FirstOrDefault(p => p.Id == id);

            try
            {
                if (result != null) // 
                {
                    DbContext.Remove(result);
                    DbContext.SaveChanges();
                }
                else
                {
                    Console.WriteLine("Blog post not found.");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }



        //Comment methods 
        public async Task<List<Comment>> GetCommentsByBlogPostId(int id)
        {
            try
            {
                var result = await DbContext.BlogPosts
                    .Include(post => post.Comments)
                    .FirstOrDefaultAsync(p => p.Id == id);

                if (result != null)
                {
                    return result.Comments?.ToList();
                }
                else
                {

                    Console.WriteLine("Blog post not found.");
                    return new List<Comment>();
                }
            }
            catch (Exception ex)
            {
                return null;
            }
        }



        public void CreateComment(int id, Comment comment)
        {

            try
            {
                var post = DbContext.BlogPosts.Include(post => post.Comments).FirstOrDefault(p => p.Id == id);
                post.Comments.Add(comment);
                DbContext.SaveChanges();

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }

        }

        public void VoteComment(VoteValueDTO dto)
        {

            try
            {
                var post= DbContext.BlogPosts.Include(post => post.Comments).FirstOrDefault(p => p.Id == dto.PostId);
                if (post != null)
                {

                    var comment = post.Comments.Find(c => c.Id == dto.CommentId);
                    comment.VoteValue = comment.VoteValue + dto.Value;

                    DbContext.SaveChanges();
                }
              
                
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                
            }
        }

    }
}
