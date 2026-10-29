// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140191fb0 | name sub_140191FB0
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
BOOL __fastcall sub_140191FB0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-10h] BYREF
  __int64 v5; // [rsp+38h] [rbp-8h]
  __int64 v6; // [rsp+40h] [rbp+0h]

  v6 = -2;
  v1 = a1;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v5 = a1;
    v2 = sub_140C20D70(a1);
    v1 = v5;
    if ( v2 )
    {
      if ( (unsigned int)(v2 & 3) - 2 >= 2 && (v2 & 3) != 0 )
      {
        v4 = v2 - 1;
        sub_1416BCB00(&v4);
      }
      v1 = v5;
    }
  }
  if ( *(_QWORD *)v1 )
    sub_140001660(*(_QWORD *)(v1 + 8), *(_QWORD *)v1, 1);
  return CloseHandle(*(HANDLE *)(v1 + 32));
}
