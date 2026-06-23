// test_relay_draft_stream — Tauri command signature (reconstructed)
// session: <审计会话>
// Evidence: IPC channel vtable at 0x1013ae7c0, closure chain analysis

use tauri::ipc::Channel;

/// Tauri async command registered as "test_relay_draft_stream"
/// New in 1.1.1: replaces test_relay_draft (non-streaming)
/// Streams relay test results back via SSE-like Channel events
#[tauri::command]
pub async fn test_relay_draft_stream(
    app: tauri::AppHandle,
    input: RelayDraftTestInput,
    on_event: Channel<RelayStreamEvent>,
) -> Result<(), String> {
    // Delegates to RelayManager::test_draft_stream
    // Fires POST to input.base_url + path (determined by wire_api/model)
    // Streams chunks via on_event.send(RelayStreamEvent::Chunk(text))
    // Terminates with on_event.send(RelayStreamEvent::Done)
    // On error: on_event.send(RelayStreamEvent::Error(msg)) or Err(String)
}

/// Stream event type sent via Channel
/// (discriminant structure inferred from vtable; exact variant names inferred)
#[derive(Serialize, Clone)]
#[serde(tag = "type", content = "data")]
pub enum RelayStreamEvent {
    Chunk(String),
    Done,
    Error(String),
}
