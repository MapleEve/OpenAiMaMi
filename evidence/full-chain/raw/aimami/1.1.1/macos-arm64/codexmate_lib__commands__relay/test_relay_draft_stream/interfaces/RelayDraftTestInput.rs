// RelayDraftTestInput — reconstructed from serde_json Deserialize impl visitor (VA 0x100566900)
// and string constant at 0x101148783 ("struct RelayDraftTestInput with 8 elements")
// session: <审计会话>

#[derive(Debug, Deserialize, Serialize)]
#[serde(rename_all = "camelCase")]
pub struct RelayDraftTestInput {
    /// Field index 0, key len=10: "providerId"
    pub provider_id: String,
    /// Field index 1, key len=3: "ide" — likely bool (0=false) based on type inference
    pub ide: bool,
    /// Field index 2, key len=4: "atMs" — timestamp in milliseconds
    pub at_ms: u64,
    /// Field index 3, key len=7: "baseUrl" — provider base URL
    pub base_url: String,
    /// Field index 4, key len=6: "apiKey" — provider API key
    pub api_key: String,
    /// Field index 5, key len=5: "model" — requested model name
    pub model: String,
    /// Field index 6, key len=7: "wireApi" — wire protocol discriminant ("openai"/"anthropic"/"responses"/"codex_cli_rs"/"embeddings")
    pub wire_api: String,
    /// Field index 7, key len=12: "extraHeaders" — additional HTTP headers to inject
    pub extra_headers: Option<std::collections::HashMap<String, String>>,
}
