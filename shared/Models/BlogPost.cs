
using System.ComponentModel.DataAnnotations;


namespace shared.Models
{
    public class BlogPost
    {
        //Setting empty constructor enabling object creation without inital parameters 
        public BlogPost() { }

        //Setting constructor with parameters 
        public BlogPost(string title, string text, string author)
        {
            this.Text = text;
            this.Author = author;   
            this.VoteValue = 0;
            this.Title = title;
            this.RegDate = DateTime.UtcNow;
        }
        public int Id {  get; set; }

        [Required]
        public string Title { get; set; }

        [Required]
        public string Text { get; set; }

        [Required]
        public string Author { get; set; }

        public int VoteValue { get; set; } = 0;

        public DateTime RegDate { get; set; } = DateTime.UtcNow;

        public List<Comment> Comments { get; set; } = new List<Comment>(); 
    }
}
