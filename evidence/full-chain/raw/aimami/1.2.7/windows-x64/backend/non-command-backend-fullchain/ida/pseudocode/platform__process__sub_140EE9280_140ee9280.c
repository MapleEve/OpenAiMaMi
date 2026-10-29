// win 1.2.7 | module src/platform/process.rs | ea 0x140ee9280 | name sub_140EE9280
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EE9280(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int128 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdi
  __m256i *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int32 v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // r12
  __m256i *v28; // rbx
  __int64 v29; // rsi
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 i; // r15
  __int64 v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+28h] [rbp-58h]
  __int64 v36; // [rsp+30h] [rbp-50h]
  __int64 v37; // [rsp+38h] [rbp-48h]
  __m256i v38; // [rsp+40h] [rbp-40h] BYREF
  __int128 v39; // [rsp+60h] [rbp-20h]
  __m256i v40; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v41[4]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v42; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v43; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+E8h] [rbp+68h]
  __int64 v45; // [rsp+F0h] [rbp+70h]
  char v46; // [rsp+FFh] [rbp+7Fh]
  __int64 v47; // [rsp+100h] [rbp+80h]

  v47 = -2;
  sub_140EE8460((__int64)&v40);
  result = v40.m256i_i64[0];
  *(_OWORD *)v38.m256i_i8 = *(_OWORD *)&v40.m256i_u64[1];
  v38.m256i_i64[2] = v40.m256i_i64[3];
  if ( v40.m256i_i64[0] == -1 )
  {
    v42 = *(_OWORD *)v38.m256i_i8;
    v6 = v38.m256i_i64[2];
    v43 = v38.m256i_i64[2];
    v7 = v38.m256i_i64[1];
    v8 = sub_14167F170(v40.m256i_i64[3]);
    v13 = v8;
    v35 = a1;
    if ( *(_BYTE *)(v8 + 16) == 1 )
    {
      v14 = *(_OWORD *)v8;
    }
    else
    {
      *(_QWORD *)&v14 = sub_141696260(v10, v9, v11, v12);
      *(_OWORD *)v13 = v14;
      *(_BYTE *)(v13 + 16) = 1;
    }
    *(_QWORD *)v13 = v14 + 1;
    v40 = off_141A56DB0;
    v41[0] = v14;
    if ( v6 )
    {
      LOBYTE(v12) = 1;
      sub_141909110(&v40, v6, v41, v12);
      for ( i = 0; i != v6; ++i )
        sub_1403AD8D0((__int64)&v40, *(_DWORD *)(v7 + 32 * i));
    }
    v39 = v41[0];
    v38 = v40;
    sub_140EEDA50(&v40);
    v16 = v40.m256i_i64[1];
    v15 = v40.m256i_i64[0];
    v17 = 32 * v40.m256i_i64[2];
    v18 = v40.m256i_i64[1] + 32 * v40.m256i_i64[2];
    v40.m256i_i64[0] = v40.m256i_i64[1];
    v36 = v15;
    v40.m256i_i64[2] = v15;
    v40.m256i_i64[3] = v18;
    v19 = v17 - 32;
    v20 = (_QWORD *)(v40.m256i_i64[1] + 48);
    v21 = &v38;
    v37 = v40.m256i_i64[1];
    v34 = v18;
    while ( v16 != v18 )
    {
      v24 = v16;
      v16 += 32;
      v40.m256i_i64[1] = v16;
      if ( *(_QWORD *)(v24 + 8) == -1 )
      {
        if ( v18 != v16 )
        {
          v30 = v19 >> 5;
          do
          {
            v31 = *(v20 - 1);
            if ( v31 )
              sub_140001660(*v20, v31, 1);
            v20 += 4;
            --v30;
          }
          while ( v30 );
        }
        break;
      }
      v45 = *(_QWORD *)(v24 + 8);
      v25 = *(_DWORD *)v24;
      v26 = *(_QWORD *)(v24 + 16);
      v27 = *(_QWORD *)(v24 + 24);
      v46 = 1;
      v44 = v26;
      if ( (unsigned __int8)sub_140EF1920(v26) && (v46 = 1, !(unsigned __int8)sub_1403AD8D0((__int64)v21, v25)) )
      {
        v28 = v21;
        v29 = v43;
        if ( v43 == (_QWORD)v42 )
          sub_14190F570(&v42);
        v22 = *((_QWORD *)&v42 + 1);
        v23 = 32 * v29;
        *(_DWORD *)(*((_QWORD *)&v42 + 1) + v23) = v25;
        *(_QWORD *)(v22 + v23 + 8) = v45;
        *(_QWORD *)(v22 + v23 + 16) = v44;
        *(_QWORD *)(v22 + v23 + 24) = v27;
        v43 = v29 + 1;
        v21 = v28;
        v18 = v34;
      }
      else if ( v45 )
      {
        sub_140001660(v44, v45, 1);
      }
      v19 -= 32LL;
      v20 += 4;
    }
    if ( v36 )
      sub_140001660(v37, 32 * v36, 8);
    if ( v38.m256i_i64[1] )
    {
      v32 = (4 * v38.m256i_i64[1] + 19) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v32 + v38.m256i_i64[1] != -17 )
        sub_140001660(v38.m256i_i64[0] - v32, v32 + v38.m256i_i64[1] + 17, 16);
    }
    result = v43;
    *(_QWORD *)(v35 + 24) = v43;
    *(_OWORD *)(v35 + 8) = v42;
    *(_QWORD *)v35 = -1;
  }
  else
  {
    v3 = v41[0];
    v4 = v41[1];
    v5 = v41[2];
    *(_OWORD *)(a1 + 80) = v41[3];
    *(_OWORD *)(a1 + 64) = v5;
    *(_OWORD *)(a1 + 48) = v4;
    *(_OWORD *)(a1 + 32) = v3;
    *(_QWORD *)(a1 + 24) = v38.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v38.m256i_i8;
    *(_QWORD *)a1 = result;
  }
  return result;
}
