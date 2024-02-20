using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Reddit_app;
using Reddit_app.Services;
using shared;

namespace Reddit_app
{
    public class Program
    {
        public static async Task Main(string[] args)
        {
            var builder = WebAssemblyHostBuilder.CreateDefault(args);
            builder.RootComponents.Add<App>("#app");
            builder.RootComponents.Add<HeadOutlet>("head::after");

            builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

            //Adding services for usage in razor pages. This creates an instance of blogpostservice when it is instantiated in my code
            builder.Services.AddScoped<BlogPostService>();

            await builder.Build().RunAsync();
        }
    }
}