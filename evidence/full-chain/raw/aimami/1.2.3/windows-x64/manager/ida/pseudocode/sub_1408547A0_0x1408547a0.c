// module: codexmate_lib/core/relay/manager
// addr: 0x1408547a0
// name: sub_1408547A0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1408547A0(__int64 a1, __int64 *a2, __int128 *a3, __int64 **a4, char a5)
{
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int128 v12; // kr10_16
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int128 v17; // kr40_16
  unsigned __int64 v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  _QWORD *v22; // r12
  __int64 v23; // rdx
  _QWORD *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  void *v31; // rax
  unsigned __int128 v33; // kr00_16
  __int64 v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+58h] [rbp-28h] BYREF
  __m256i v36; // [rsp+60h] [rbp-20h]
  __int128 v37; // [rsp+80h] [rbp+0h]
  __int128 v38; // [rsp+90h] [rbp+10h]
  unsigned __int128 v39; // [rsp+A0h] [rbp+20h]
  __int128 v40; // [rsp+B0h] [rbp+30h]
  char v41[888]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v42[292]; // [rsp+438h] [rbp+3B8h] BYREF
  unsigned __int8 v43; // [rsp+55Ch] [rbp+4DCh]
  __int64 v44; // [rsp+560h] [rbp+4E0h] BYREF
  __m256i v45; // [rsp+568h] [rbp+4E8h]
  __int128 v46; // [rsp+588h] [rbp+508h]
  __int128 v47; // [rsp+598h] [rbp+518h]
  unsigned __int128 v48; // [rsp+5A8h] [rbp+528h]
  __int128 v49; // [rsp+5B8h] [rbp+538h]
  char v50[888]; // [rsp+5C8h] [rbp+548h] BYREF
  __int64 v51[3]; // [rsp+940h] [rbp+8C0h] BYREF
  _QWORD v52[2]; // [rsp+958h] [rbp+8D8h] BYREF
  __int64 v53; // [rsp+968h] [rbp+8E8h]
  __m256i v54; // [rsp+970h] [rbp+8F0h] BYREF
  __int128 v55; // [rsp+990h] [rbp+910h]
  __int128 v56; // [rsp+9A0h] [rbp+920h]
  unsigned __int128 v57; // [rsp+9B0h] [rbp+930h]
  __int128 v58; // [rsp+9C0h] [rbp+940h]
  __int64 v59; // [rsp+9D0h] [rbp+950h]
  __int64 v60; // [rsp+9D8h] [rbp+958h]
  __int64 v61; // [rsp+9E0h] [rbp+960h]
  char v62; // [rsp+9EFh] [rbp+96Fh] BYREF
  __int64 v63; // [rsp+9F0h] [rbp+970h]

  v63 = -2;
  v52[0] = a3;
  v52[1] = a4;
  sub_14085A1E0((__int64)v42, (__int64)a2);
  transition_paths((__int64)&v44, *a2);
  v9 = v44;
  v54 = v45;
  v55 = v46;
  v56 = v47;
  v57 = v48;
  v58 = v49;
  if ( v44 != -1 )
  {
    sub_141684120(v41, v50, 888);
    v36 = v54;
    v37 = v55;
    v38 = v56;
    v39 = v57;
    v40 = v58;
    v35 = v9;
    v62 = v43 ^ 1;
    v51[0] = (__int64)v52;
    v51[1] = (__int64)a2;
    v51[2] = (__int64)&v35;
    v54.m256i_i64[0] = (__int64)a2;
    v54.m256i_i64[1] = (__int64)&v35;
    v54.m256i_i64[2] = (__int64)&v62;
    LOBYTE(v34) = a5;
    sub_1406E79D0((__int64)&v44, (__int128 *)&v35, v43 ^ 1u, 0, v34, a3, a4, v51, (__int64)&v54, (unsigned __int8 *)a2);
    v10 = v45.m256i_i64[1];
    v11 = v45.m256i_i64[0];
    v12 = *(_OWORD *)&v45.m256i_u64[2];
    v14 = *((_QWORD *)&v46 + 1);
    v13 = v46;
    v16 = *((_QWORD *)&v47 + 1);
    v15 = v47;
    v17 = v48;
    v18 = v49;
    if ( v44 != -1 )
    {
      *(_QWORD *)a1 = v44;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 16) = v10;
      *(_OWORD *)(a1 + 24) = v12;
      *(_QWORD *)(a1 + 40) = v13;
      *(_QWORD *)(a1 + 48) = v14;
      *(_QWORD *)(a1 + 56) = v15;
      *(_QWORD *)(a1 + 64) = v16;
      *(_OWORD *)(a1 + 72) = v17;
      *(_QWORD *)(a1 + 88) = v18;
LABEL_29:
      sub_140016620(&v35);
      return sub_140018740(v42);
    }
    if ( v45.m256i_i64[0] == 2 )
    {
      v18 = 0;
      v61 = *((_QWORD *)&v46 + 1);
      v14 = v47;
      v17 = __PAIR128__(8, 0);
    }
    else
    {
      v61 = v46;
      v13 = v45.m256i_i64[3];
      v16 = v47;
      v10 = v45.m256i_i64[0];
      v12 = *(_OWORD *)&v45.m256i_u64[1];
    }
    v60 = v17 >> 64;
    v53 = v17;
    v59 = v12 >> 64;
    v54.m256i_i64[0] = v12;
    v54.m256i_i64[1] = *((_QWORD *)&v12 + 1);
    v54.m256i_i64[2] = v13;
    if ( v10 == 1 )
    {
      if ( v16 )
      {
        v22 = (_QWORD *)(v14 + 8);
        do
        {
          v23 = *(v22 - 1);
          if ( v23 )
            sub_140001660(*v22, v23, 1);
          v22 += 3;
          --v16;
        }
        while ( v16 );
      }
    }
    else if ( v16 )
    {
      v24 = (_QWORD *)(v14 + 8);
      do
      {
        v25 = *(v24 - 1);
        if ( v25 )
          sub_140001660(*v24, v25, 1);
        v24 += 3;
        --v16;
      }
      while ( v16 );
    }
    if ( v61 )
      sub_140001660(v14, 24 * v61, 8);
    v26 = v60;
    v44 = v60;
    v27 = v53;
    v45.m256i_i64[1] = v53;
    v45.m256i_i64[0] = v60;
    v45.m256i_i64[2] = v60 + 24 * v18;
    if ( v18 > (__int64)v12 - v13 )
    {
      sub_141688D30((unsigned int)&v54, v13, v18, 8, 24);
      v33 = *(_OWORD *)&v54.m256i_u64[1];
      v13 = v33 >> 64;
      v59 = v33;
    }
    else if ( !v18 )
    {
LABEL_24:
      v54.m256i_i64[2] = v18 + v13;
      if ( v27 )
        sub_140001660(v26, 24 * v27, 8);
      nullsub_1(v11);
      v28 = sub_140001650(24, 8);
      if ( !v28 )
        sub_1416C2D31(8, 24);
      v30 = (_QWORD *)v28;
      nullsub_1(v29);
      v31 = (void *)sub_140001650(20, 1);
      if ( !v31 )
      {
        v60 = (__int64)v30;
        sub_1416C2D4B(1, 20);
      }
      qmemcpy(v31, "router_postcondition", 20);
      *v30 = 20;
      v30[1] = v31;
      v30[2] = 20;
      *(_OWORD *)(a1 + 56) = *(_OWORD *)v54.m256i_i8;
      *(_QWORD *)(a1 + 72) = v54.m256i_i64[2];
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = v30;
      *(_QWORD *)(a1 + 24) = 1;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)a1 = -1;
      goto LABEL_29;
    }
    sub_141684120(v59 + 24 * v13, v26, 24 * v18);
    goto LABEL_24;
  }
  *(_OWORD *)(a1 + 80) = v58;
  *(_OWORD *)(a1 + 64) = v57;
  v19 = *(_OWORD *)v54.m256i_i8;
  v20 = *(_OWORD *)&v54.m256i_u64[2];
  v21 = v55;
  *(_OWORD *)(a1 + 48) = v56;
  *(_OWORD *)(a1 + 32) = v21;
  *(_OWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v19;
  return sub_140018740(v42);
}