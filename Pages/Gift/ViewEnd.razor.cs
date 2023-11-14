using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;
using Phishing.WASM.Services.Generic;

namespace Phishing.WASM.Pages.Gift
{
    public partial class ViewEnd
    {
        [Parameter]
        public string number { get; set; }
        [Inject]
        private IJSRuntime? js_runtime { get; set; }
        [Inject]
        private NavigationManager navMan { get; set; }

        protected async Task End() {
            Thread.Sleep(1000);
            navMan.NavigateTo($"/{number}/ThankYou");
        }
    }
}
