// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x14063cf10 | name sub_14063CF10
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int128 *__fastcall sub_14063CF10(__int128 *a1, __int64 *a2)
{
  __int128 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  unsigned __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  __int128 *v18; // [rsp+68h] [rbp-8h]
  __int64 v19; // [rsp+70h] [rbp+0h]

  v19 = -2;
  v2 = a1;
  v3 = a2[2];
  v4 = *a2;
  v14 = a2[1];
  v15 = v14;
  v16 = v4;
  v17 = v14 + 32 * v3;
  sub_140FD5B20(a1, &v14);
  v5 = v15;
  v6 = v17;
  if ( *(_QWORD *)v2 != -1 )
  {
    v11 = *((_QWORD *)v2 + 2);
    v10 = *v2;
    v6 = v15;
    if ( v17 != v15 )
    {
      v18 = v2;
      v9 = sub_1419120F0(v3, &off_141A17DA8, &unk_141A17DB8);
      v2 = v18;
      *((_QWORD *)v18 + 1) = v9;
      *(_QWORD *)v2 = -1;
      sub_1401901C0(&v10);
      v5 = v15;
      v6 = v17;
    }
  }
  v13 = (unsigned __int64)(v6 - v5) >> 5;
  v18 = nullptr;
  v12 = v5;
  while ( (__int128 *)v13 != v18 )
  {
    v18 = (__int128 *)((char *)v18 + 1);
    v7 = v5 + 32;
    sub_1403880E0(v5);
    v5 = v7;
  }
  if ( v16 )
    sub_140001660(v14, 32 * v16, 8);
  return v2;
}
