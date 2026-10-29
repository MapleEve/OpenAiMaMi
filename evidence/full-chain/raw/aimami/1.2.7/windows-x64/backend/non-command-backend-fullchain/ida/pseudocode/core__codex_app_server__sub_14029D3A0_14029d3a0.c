// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x14029d3a0 | name sub_14029D3A0
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14029D3A0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-20h]
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h]
  _QWORD *v20; // [rsp+38h] [rbp-8h]

  v2 = a1[2];
  if ( v2 )
    sub_140001660(a1[3], v2, 1);
  v3 = a1[5];
  if ( v3 )
    sub_140001660(a1[6], v3, 1);
  v4 = a1[14];
  if ( v4 != -1 && v4 )
    sub_140001660(a1[15], v4, 1);
  v5 = a1[17];
  if ( v5 != -1 && v5 )
    sub_140001660(a1[18], v5, 1);
  v6 = a1[8];
  if ( v6 )
    sub_140001660(a1[9], v6, 1);
  v20 = a1;
  sub_14002F9D0(a1 + 38);
  v7 = a1[20];
  if ( v7 != -1 && v7 )
    sub_140001660(a1[21], v7, 1);
  v8 = a1[23];
  if ( v8 != -1 && v8 )
    sub_140001660(a1[24], v8, 1);
  v9 = a1[26];
  if ( v9 != -1 && v9 )
    sub_140001660(a1[27], v9, 1);
  v10 = a1[29];
  if ( v10 != -1 && v10 )
    sub_140001660(a1[30], v10, 1);
  v11 = a1[32];
  if ( v11 != -1 && v11 )
    sub_140001660(a1[33], v11, 1);
  v12 = a1[35];
  if ( v12 <= 0xFFFFFFFFFFFFFFFDuLL && v12 )
    sub_140001660(a1[36], v12, 1);
  v13 = a1[12];
  v17 = a1[13];
  v18 = 0;
  v19 = v13;
  while ( v17 != v18 )
  {
    ++v18;
    v14 = v13 + 32;
    sub_1403880E0(v13);
    v13 = v14;
  }
  result = (__int64)v20;
  v16 = v20[11];
  if ( v16 )
    return sub_140001660(v19, 32 * v16, 8);
  return result;
}
