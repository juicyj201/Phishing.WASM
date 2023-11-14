using Phishing.WASM.Pages.Gift;
using Phishing.WASM.Services.Generic;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Net.Http.Json;

namespace Phishing.WASM.Services
{
    public class PhishingService : IPhishingService
    {
        private readonly HttpClient client;
        private readonly IConfiguration config;
        private string url;

        public PhishingService(HttpClient client, IConfiguration config)
        {
            this.client = client;
            this.config = config;
            url = config["ApiUrl:Url"]!;
        }

        /// <summary>
        /// Automatically saves the user's number once the link has been clicked
        /// </summary>
        /// <param name="number"></param>
        /// <returns></returns>
        public async Task<OpResponse<SaveNumber>> SaveNumber(SaveNumber number)
        {
            try
            {
                var response = await client.PostAsJsonAsync($"{url}User/Save", number);
                var opresponse = new OpResponse<SaveNumber>();

                if (response.IsSuccessStatusCode)
                {
                    return await response.Content.ReadFromJsonAsync<OpResponse<SaveNumber>>()!;
                }

                return new OpResponse<SaveNumber>()
                {
                    isError = true,
                    isSuccess = false,
                    Message = "Request unsuccessful"
                };
            }
            catch (Exception e)
            {
                return new OpResponse<SaveNumber>()
                {
                    isError = true,
                    isSuccess = false,
                    Message = e.Message
                };
            }
        }

        /// <summary>
        /// Unused microservice. Will save information if user clicks on submit/send
        /// </summary>
        /// <param name="createDto"></param>
        /// <returns></returns>
        public async Task<OpResponse<AddUserDto>> CreateUserRecord(AddUserDto createDto)
        {
            try
            {
                var response = await client.PostAsJsonAsync($"{url}User", createDto);
                var opresponse = new OpResponse<AddUserDto>();

                if (response.IsSuccessStatusCode)
                {
                    return await response.Content.ReadFromJsonAsync<OpResponse<AddUserDto>>()!;
                }

                return new OpResponse<AddUserDto>()
                {
                    isError = true,
                    isSuccess = false,
                    Message = "Request unsuccessful"
                };
            }
            catch (Exception e)
            {
                return new OpResponse<AddUserDto>()
                {
                    isError = true,
                    isSuccess = false,
                    Message = e.Message
                };
            }
        }
    }
}
