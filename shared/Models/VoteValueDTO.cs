using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.Json;
using System.Threading.Tasks;

namespace shared.Models
{
    public class VoteValueDTO
    {

        public int PostId { get; set; }
        public int Value { get; set; }

        public int CommentId { get; set; }

    }
}
