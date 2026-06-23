# Interfaces / DTO — clear_custom_instruction_block
## AiMaMi 1.1.1 / macOS ARM64

### argKeys
- `[]` (zero-arity; no input parameters)
- Frontend wrapper: `clearCustomInstructionBlock:()=>ne("clear_custom_instruction_block")`
- argObject: null (no args passed)

### Response fields
- `null` / undefined — backend handler is absent; no registered response contract exists in 1.1.1 binary.
- At runtime, Tauri would return an unregistered-command error if invoked against AiMaMi 1.1.1 backend.
- C5 implementation should treat as frontend-only: clear UI state without backend round-trip, or handle the invoke result as a no-op/error.

### Error surface
- No upstream error envelope defined (no backend handler).
- Runtime error: Tauri command-not-registered (if frontend invokes and AiMaMi is the backend).
- C5 implementation boundary: do not rely on upstream backend error shape; implement own error handling.

### Side effects
- **Backend**: none (no handler registered, no persistence, no fs/http/process side effects).
- **Frontend**: clears custom instruction block UI state (JavaScript-only, not persisted via this command).

### Platform diff (macOS vs Windows)
- macOS 1.1.1: backend ABSENT (confirmed this session)
- Windows 1.1.1: **Unknown** — not analyzed; Windows 1.0.9 was also absent (sha=a5822387), but Windows 1.1.1 must be independently confirmed via <逆向工具通道>.

### Baseline (1.0.9 macos)
- sha256: 1db044e8efab3b9eba8668b5a008f4952194ec0dd6a70a10725a5e7ad0350482
- status: accepted_ready_absent_backend_orphan_ida_direct
- gate: readyToImplement
- accepted_substitute: same_platform_ida_backend_absence_for_frontend_orphan_command
- No behavior delta in 1.1.1: argKeys=[], response=none, side-effects=none — identical.
