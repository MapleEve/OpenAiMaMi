// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1403ec7b0 | name sub_1403EC7B0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1403EC7B0(unsigned __int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int64 v21; // [rsp+48h] [rbp-28h]
  unsigned __int64 v22; // [rsp+50h] [rbp-20h]
  unsigned __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  unsigned __int64 v25; // [rsp+68h] [rbp-8h]
  __int64 v26; // [rsp+70h] [rbp+0h]

  v26 = -2;
  v4 = a2[2];
  if ( v4 )
  {
    v5 = a2[1];
    v6 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v5 - *a2) >> 3);
    v7 = v6;
    if ( v4 < v6 )
      v7 = a2[2];
    if ( v7 > 0x555555555555555LL )
    {
      v8 = 0;
      goto LABEL_6;
    }
    if ( v5 == *a2 )
    {
      v12 = 8;
    }
    else
    {
      v11 = a2;
      v2 = 24 * v7;
      nullsub_1(v5);
      v12 = sub_140001650(24 * v7, 8);
      v8 = 8;
      if ( !v12 )
LABEL_6:
        sub_141938D2B(v8, v2);
      a2 = v11;
    }
    v23 = v7;
    v24 = v12;
    v25 = 0;
    v13 = *a2;
    v14 = a2[1];
    v15 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v14 - *a2) >> 3);
    if ( v4 < v15 )
      v15 = v4;
    if ( v6 < v15 )
    {
      sub_14190D590((unsigned int)&v23, 0, v15, 8, 24);
      v12 = v24;
      v9 = v25;
    }
    else
    {
      v9 = 0;
      if ( v14 == v13 )
        goto LABEL_8;
    }
    v16 = -(__int64)v15;
    v22 = v9;
    v17 = v12 + 24 * v9;
    v18 = 0;
    do
    {
      v21 = v18;
      sub_1416AC440(&v19, v13);
      *(_QWORD *)(v17 + 16) = v20;
      *(_OWORD *)v17 = v19;
      v18 = v21 - 1;
      v13 += 24;
      v17 += 24;
    }
    while ( v16 != v21 - 1 );
    v9 = v22 - v18;
  }
  else
  {
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v9 = 0;
  }
LABEL_8:
  v25 = v9;
  a1[2] = v9;
  *a1 = v23;
  a1[1] = v24;
  return a1;
}
