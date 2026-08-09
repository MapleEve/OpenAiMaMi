// EA: 0x1409c2d20 (unnamed; SHARED HELPER, 26 total callers across the relay/account cluster - NOT renamed,
// NOT exclusive to get_codex_router_auth_readiness; documented here as a callee of the owner only)
// String evidence: "relay state poisoned" + "src\\core\\relay\\manager.rs" (20 bytes) at panic path.
// Role: std::sync mutex-guard acquire over the in-process RelayManager state struct (poison-recovery path
// included), then forwards to sub_140A7ABA0 to copy 712 bytes of guarded state into caller's buffer.
// terminated_reason = persistence_read-equivalent (in-memory shared-state read under mutex, matches the
// macOS/1.1.8 sibling leaf's documented `RelayState` mutex-guard access pattern).
__int64 __fastcall sub_1409C2D20(__int64 a1, __int64 a2)
{
  // mutex CAS lock -> poison recovery (sub_14176CDB0/sub_14176E860) -> sub_140A7ABA0(a1, guarded_state_ptr)
  // -> unlock (WakeByAddressSingle on contention). Depth2 terminal for this leaf's purposes.
  return a1;
}
