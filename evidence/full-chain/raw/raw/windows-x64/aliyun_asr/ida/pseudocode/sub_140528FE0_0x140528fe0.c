// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140528fe0
// name: sub_140528FE0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140528FE0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r15
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v34; // r12
  __int64 v35; // rdx
  _QWORD *v36; // r12
  __int64 v37; // rdx
  __int64 v38; // [rsp+28h] [rbp-18h]
  __int64 v39; // [rsp+28h] [rbp-18h]
  __int64 v40; // [rsp+30h] [rbp-10h]
  __int64 v41; // [rsp+30h] [rbp-10h]

  v38 = a1[2];
  v40 = a1[3];
  if ( *(_QWORD *)v40 )
    (*(void (__fastcall **)(__int64))v40)(v38);
  v1 = *(_QWORD *)(v40 + 8);
  if ( v1 )
    sub_140001660(v38, v1, *(_QWORD *)(v40 + 16));
  v39 = a1[4];
  v41 = a1[5];
  if ( *(_QWORD *)v41 )
    (*(void (__fastcall **)(__int64))v41)(v39);
  v2 = *(_QWORD *)(v41 + 8);
  if ( v2 )
    sub_140001660(v39, v2, *(_QWORD *)(v41 + 16));
  v3 = a1[91];
  if ( v3 != -1 && v3 )
    sub_140001660(a1[92], v3, 1);
  v4 = a1[94];
  if ( v4 != -1 )
  {
    v5 = a1[96];
    if ( v5 )
    {
      v6 = (_QWORD *)(a1[95] + 8LL);
      do
      {
        v7 = *(v6 - 1);
        if ( v7 != -1 && v7 )
          sub_140001660(*v6, v7, 1);
        v6 += 3;
        --v5;
      }
      while ( v5 );
      v4 = a1[94];
    }
    if ( v4 )
      sub_140001660(a1[95], 24 * v4, 8);
  }
  v8 = a1[15];
  if ( v8 )
  {
    v9 = a1[14];
    v10 = a1[12];
    v11 = a1[13];
    v12 = v10;
    if ( v9 < v10 )
      v12 = 0;
    v13 = v10 - (v9 - v12);
    v14 = v9 - v12 + v8;
    v15 = v8 - v13;
    if ( v8 < v13 )
      v15 = 0;
    if ( v8 > v13 )
      v14 = a1[12];
    v16 = v14 - (v9 - v12);
    if ( v16 )
    {
      v34 = (_QWORD *)(24 * v9 - 24 * v12 + v11 + 8);
      do
      {
        v35 = *(v34 - 1);
        if ( v35 )
          sub_140001660(*v34, v35, 1);
        v34 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 < v8 )
    {
      v17 = (_QWORD *)(v11 + 8);
      do
      {
        v18 = *(v17 - 1);
        if ( v18 )
          sub_140001660(*v17, v18, 1);
        v17 += 3;
        --v15;
      }
      while ( v15 );
    }
  }
  v19 = a1[12];
  if ( v19 )
    sub_140001660(a1[13], 24 * v19, 8);
  v20 = a1[22];
  if ( v20 )
  {
    v21 = a1[21];
    v22 = a1[19];
    v23 = a1[20];
    v24 = v22;
    if ( v21 < v22 )
      v24 = 0;
    v25 = v22 - (v21 - v24);
    v26 = v21 - v24 + v20;
    v27 = v20 - v25;
    if ( v20 < v25 )
      v27 = 0;
    if ( v20 > v25 )
      v26 = a1[19];
    v28 = v26 - (v21 - v24);
    if ( v28 )
    {
      v36 = (_QWORD *)(24 * v21 - 24 * v24 + v23 + 8);
      do
      {
        v37 = *(v36 - 1);
        if ( v37 )
          sub_140001660(*v36, v37, 1);
        v36 += 3;
        --v28;
      }
      while ( v28 );
    }
    if ( v25 < v20 )
    {
      v29 = (_QWORD *)(v23 + 8);
      do
      {
        v30 = *(v29 - 1);
        if ( v30 )
          sub_140001660(*v29, v30, 1);
        v29 += 3;
        --v27;
      }
      while ( v27 );
    }
  }
  v31 = a1[19];
  if ( v31 )
    sub_140001660(a1[20], 24 * v31, 8);
  v32 = a1[97];
  if ( v32 != -1 && v32 )
    sub_140001660(a1[98], v32, 1);
  return sub_1405294C0(a1 + 24);
}