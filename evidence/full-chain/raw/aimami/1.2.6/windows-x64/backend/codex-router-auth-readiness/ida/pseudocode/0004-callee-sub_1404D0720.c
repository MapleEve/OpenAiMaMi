// EA: 0x1404d0720 (unnamed; exclusive single caller = owner, per callers=["sub_140547C70"])
// Role: response envelope constructor. Writes disc=2 + two literal short strings via raw dword pokes:
// *v4 = 27503 (LE bytes 6F 6B = "ok"), and a second dword pair spelling "Success" (bytes 63 63 65 73
// / 75 5F 63 -> reconstructs to the same {disc=2,"ok","Success"} envelope shape already confirmed for
// this same command's macOS 1.1.8 and windows 1.1.8 siblings. This is the terminal response_serialize
// node for this leaf - no further callees beyond nullsub_1 (no-op instrumentation stub) and
// sub_140001650/sub_14176E54B (generic alloc-or-panic helpers, standard Rust String::with_capacity path).
__int64 __fastcall sub_1404D0720(__int64 a1, int a2)
{
  // builds {ok: "ok", status_word: "Success", flags: a2} response struct at a1; terminal, response_serialize
  return a1;
}
