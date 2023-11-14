using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using Phishing.WASM;
using Phishing.WASM.Services;
using Phishing.WASM.Services.Generic;

namespace Phishing.WASM
{
    public class Program
    {
        public static async Task Main(string[] args)
        {
            var builder = WebAssemblyHostBuilder.CreateDefault(args);
            builder.RootComponents.Add<App>("#app");
            builder.RootComponents.Add<HeadOutlet>("head::after");

            builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });

            builder.Services.AddHttpClient("Phishing.API", client =>
                            client.BaseAddress = new Uri(builder.HostEnvironment.BaseAddress));

            builder.Services.AddScoped<ClientAppInfo>();
            builder.Services.AddScoped<IPhishingService, PhishingService>();

            await builder.Build().RunAsync();
        }
    }
}

