// EA: 0x140547c70  (renamed get_codex_router_auth_readiness_owner_sys)
// Exclusive owner of IPC command `get_codex_router_auth_readiness` for AiMaMi 1.2.6 windows-x64.
// Located via: string "get_codex_router_auth_readiness" @0x14177aa2e -> xrefs_to -> single hit inside
// shared tracing::instrument dispatcher sub_140174120 (size 0x6606) at inline match-arm call site 0x140174bd6.
// analyze_function/callers confirms this function's ONLY caller is sub_140174120 (exclusive owner, not shared).
__int64 __fastcall get_codex_router_auth_readiness_owner_sys(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  int v5; // edi
  _BYTE v7[352]; // [rsp+28h] [rbp-160h] BYREF

  v4 = sub_140BF9190(*a2 + 16LL); /*0x140547c8e*/         // depth1: repository/oauth-availability check (see 0002)
  sub_1409C2D20(v7, a2); /*0x140547c9b*/                  // depth1: shared RelayManager mutex-guard state read (see 0003), 26 total callers
  v5 = 256;
  if ( !v7[317] ) /*0x140547cb4*/
    v5 = v4 & 0xFF00;
  sub_14049F620(v7); /*0x140547cba*/                       // drop/cleanup of the guarded RelayManager snapshot
  sub_1404D0720(a1, v5 | v4 & 0xFFFF00FF); /*0x140547ccc*/ // depth1: response envelope builder (see 0004), terminal, response_serialize
  return a1;
}
