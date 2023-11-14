namespace Phishing.WASM
{
    public class ClientAppInfo
    {
        private readonly IConfiguration config;
        private readonly string appPath;
        private readonly string env;

        public ClientAppInfo(IConfiguration config)
        {
            this.config = config;
            appPath = config.GetValue<string>("ClientAppInfo: UIAppPath")!;
            env = config["ClientAppInfo:Env"]!;
        }

        public string AppPath { get { return appPath; } }
        public string Env { get { return env; } }
    }
}
