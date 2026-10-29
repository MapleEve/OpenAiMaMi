// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d1ccf0 | name sub_140D1CCF0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D1CCF0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-10h]

  v19 = a1[14];
  v20 = 0;
  v22 = a1[13];
  v1 = v22;
  while ( v19 != v20 )
  {
    ++v20;
    v2 = v1 + 256;
    sub_14038CFC0(v1);
    v1 = v2;
  }
  v3 = a1[12];
  if ( v3 )
    sub_140001660(v22, v3 << 8, 8);
  v4 = a1[16];
  v5 = a1[17];
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 8);
    do
    {
      v7 = *(v6 - 1);
      if ( v7 )
        sub_140001660(*v6, v7, 1);
      v6 += 3;
      --v5;
    }
    while ( v5 );
  }
  v8 = a1[15];
  if ( v8 )
    sub_140001660(v4, 24 * v8, 8);
  v9 = a1[19];
  v10 = a1[20];
  if ( v10 )
  {
    v11 = (_QWORD *)(v9 + 56);
    do
    {
      v12 = *(v11 - 7);
      if ( v12 )
        sub_140001660(*(v11 - 6), v12, 1);
      v13 = *(v11 - 4);
      if ( v13 )
        sub_140001660(*(v11 - 3), v13, 1);
      v14 = *(v11 - 1);
      if ( v14 != -1 && v14 )
        sub_140001660(*v11, v14, 1);
      v11 += 9;
      --v10;
    }
    while ( v10 );
  }
  result = a1[18];
  if ( result )
    result = sub_140001660(v9, 72 * result, 8);
  v16 = *a1;
  if ( *a1 != -1 )
  {
    v17 = a1[8];
    if ( v17 )
      result = sub_140001660(a1[9], v17, 1);
    if ( (_DWORD)v16 != 2 )
    {
      v18 = a1[2];
      if ( v18 )
        return sub_140001660(a1[3], v18, 1);
    }
  }
  return result;
}
