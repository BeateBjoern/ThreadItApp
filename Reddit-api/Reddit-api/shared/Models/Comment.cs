
using System.ComponentModel.DataAnnotations;


namespace shared.Models
{
    public class Comment
    {
        public Comment() { }    

        public Comment(string title, string text,  string author)
        {

            this.Title = title;
            this.Text = text;
            this.CommentDate = DateTime.UtcNow;
            this.Author = author;
            this.VoteValue = 0;
            
        }
    
        public int Id { get; set; }

        [Required]
        public string Title { get; set; }

        [Required]
        public string Text { get; set; }

        public DateTime CommentDate { get; set; } = DateTime.UtcNow;

        [Required]
        public string Author { get; set; }

        public int VoteValue { get; set; } 


    }
}
