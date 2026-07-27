// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x141491c20
// name: sub_141491C20
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141491C20(void **a1, __int64 a2, LARGE_INTEGER a3)
{
  void *v3; // rcx
  DWORD v4; // r9d
  union _LARGE_INTEGER NewFilePointer; // [rsp+28h] [rbp-8h] BYREF

  v3 = *a1;
  v4 = dword_141A3D1E0[a2];
  NewFilePointer.QuadPart = 0;
  if ( SetFilePointerEx(v3, a3, &NewFilePointer, v4) )
    return 0;
  GetLastError();
  return 1;
}