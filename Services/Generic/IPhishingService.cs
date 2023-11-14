using Phishing.WASM.Pages.Gift;

namespace Phishing.WASM.Services.Generic
{
    public interface IPhishingService
    {
        public Task<OpResponse<SaveNumber>> SaveNumber(SaveNumber number);
        public Task<OpResponse<AddUserDto>> CreateUserRecord(AddUserDto createDto);
    }
}
