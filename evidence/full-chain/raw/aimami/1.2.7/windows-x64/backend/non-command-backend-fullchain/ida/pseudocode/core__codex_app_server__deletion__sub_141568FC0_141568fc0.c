// win 1.2.7 | module src/core/codex_app_server/deletion.rs | ea 0x141568fc0 | name sub_141568FC0
// win 1.2.7 | module src/core/codex_app_server/deletion.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_141568FC0(__int64 a1)
{
  int v3; // eax
  char v4; // cl
  char v5; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v6[7]; // [rsp+29h] [rbp-1Fh]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  sub_141569CD0(&v5);
  if ( v5 == 1 )
  {
    sub_141568CC0(a1, v7, v8);
  }
  else
  {
    v3 = *(_DWORD *)v6;
    *(_DWORD *)(a1 + 7) = *(_DWORD *)&v6[3];
    *(_DWORD *)(a1 + 4) = v3;
    v4 = v8;
    *(_QWORD *)(a1 + 11) = v7;
    *(_BYTE *)(a1 + 19) = v4;
    *(_DWORD *)a1 = -1;
  }
  return a1;
}
