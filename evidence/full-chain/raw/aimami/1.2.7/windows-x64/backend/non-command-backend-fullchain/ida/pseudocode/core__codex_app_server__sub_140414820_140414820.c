// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140414820 | name sub_140414820
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140414820(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  char v4[8]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  char v7; // [rsp+4Eh] [rbp-2h] BYREF
  char v8; // [rsp+4Fh] [rbp-1h]
  __int64 v9; // [rsp+50h] [rbp+0h]

  v9 = -2;
  if ( *(_BYTE *)a1 != 2 )
  {
    v8 = *(_BYTE *)a1;
    v6 = a1;
    sub_14190A750(a1, &v7, &unk_1419EFCA8);
    sub_140409B40(v6);
    return 1;
  }
  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      v8 = 2;
      v6 = a1;
      v5 = v2;
      v4[0] = 3;
      sub_141934D90(v4, &v7, &unk_141A6CA20);
      return 1;
    }
  }
  else if ( v2 < 0 )
  {
    v8 = 2;
    v6 = a1;
    v5 = v2;
    v4[0] = 1;
    sub_141934E00(v4, &v7, &unk_141A3AA90);
    return 1;
  }
  return 0;
}
