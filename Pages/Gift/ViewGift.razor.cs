using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;
using Phishing.WASM.Services.Generic;
using System.ComponentModel.DataAnnotations;
using System.Globalization;
using System.Net.Http.Headers;
using System.Reflection;
using System.Text.RegularExpressions;

namespace Phishing.WASM.Pages.Gift
{
    public class OpResponse<T>
    {
        public string Message { get; set; }
        public T Data { get; set; }
        public bool isSuccess { get; set; }
        public bool isError { get; set; }
    }

    public class AddUserDto
    {
        [Required]
        [StringLength(255)]
        public string? Name { get; set; }

        [Required]
        public int Number { get; set; }

        [Required]
        public int IdTax { get; set; }
    }

    public class SaveNumber
    {
        [Required]
        public int Number { get; set; }
    }

    public partial class ViewGift
    {
        #region Initialisation
        [Inject]
        private IPhishingService? service { get; set; }
        [Inject]
        private NavigationManager? navMan { get; set; }
        [Inject]
        private ClientAppInfo? appInfo { get; set; }

        protected string centerType = "";
        public AddUserDto user = new AddUserDto();
        private int windowWidth = 0;
        protected int phoneNumber { get; set; }
        protected SaveNumber phoneObj = new SaveNumber();

        [Parameter]
        public string number { get; set; }
        #endregion

        #region Save number
        protected override async Task OnInitializedAsync()
        {
            var num = int.Parse(number);

            phoneObj.Number = num;
            phoneNumber = num;
            var result = await service.SaveNumber(phoneObj);
        }
        #endregion

        #region Sending user information
        protected async Task sendInfo() {
            if (string.IsNullOrEmpty(user.Name) || user.IdTax == 0 || user.Number == 0) {
                navMan.NavigateTo($"{appInfo.AppPath}/{number}/ThankYou");
            }
        }

        protected async Task changeName(ChangeEventArgs e) 
        {
            user.Name = e.Value.ToString(); 
        }

        protected async Task changeNumber(ChangeEventArgs e)
        {
            user.Number = int.Parse(e.Value.ToString());
        }

        protected async Task changeIdTax(ChangeEventArgs e)
        {
            user.IdTax = int.Parse(e.Value.ToString() );
        }
        #endregion
    }
}
