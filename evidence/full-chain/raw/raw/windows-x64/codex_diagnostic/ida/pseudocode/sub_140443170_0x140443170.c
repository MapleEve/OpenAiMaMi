// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140443170
// name: sub_140443170
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_140443170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int128 v11; // kr00_16
  __int128 v12; // kr10_16
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // kr20_16
  __int128 v17; // kr30_16
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // r15
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // r13
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // r13
  __int64 v32; // r12
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int64 v40; // r12
  __int64 v41; // rbx
  _QWORD *v42; // r14
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v46; // rdi
  __int128 v47; // [rsp+40h] [rbp-40h]
  __int128 v48; // [rsp+50h] [rbp-30h]
  __int128 v49; // [rsp+60h] [rbp-20h]
  __int128 v50; // [rsp+70h] [rbp-10h]
  __int128 v51; // [rsp+80h] [rbp+0h]
  __int128 v52; // [rsp+98h] [rbp+18h] BYREF
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __int128 v54; // [rsp+B0h] [rbp+30h]
  char v55; // [rsp+C0h] [rbp+40h]
  char v56; // [rsp+C1h] [rbp+41h]
  __int128 v57; // [rsp+C8h] [rbp+48h]
  __int64 v58; // [rsp+D8h] [rbp+58h]
  __int64 v59; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v60; // [rsp+E8h] [rbp+68h]
  __int128 v61; // [rsp+F8h] [rbp+78h]
  __int128 v62; // [rsp+108h] [rbp+88h] BYREF
  __int128 v63; // [rsp+118h] [rbp+98h]
  __int128 v64; // [rsp+128h] [rbp+A8h]
  __int64 v65; // [rsp+138h] [rbp+B8h]
  __int64 v66; // [rsp+140h] [rbp+C0h]
  __int64 v67; // [rsp+148h] [rbp+C8h]
  __int128 v68; // [rsp+150h] [rbp+D0h]
  __int64 v69; // [rsp+160h] [rbp+E0h]
  __int64 v70; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v71; // [rsp+178h] [rbp+F8h]
  __int64 v72; // [rsp+180h] [rbp+100h]
  __m256i v73; // [rsp+188h] [rbp+108h] BYREF
  __int128 v74; // [rsp+1A8h] [rbp+128h]
  __int128 v75; // [rsp+1B8h] [rbp+138h]
  __int128 v76; // [rsp+1C8h] [rbp+148h]
  __int128 v77; // [rsp+1D8h] [rbp+158h]
  __int64 v78; // [rsp+1E8h] [rbp+168h]
  __int64 v79; // [rsp+1F0h] [rbp+170h]
  __int64 v80; // [rsp+1F8h] [rbp+178h]
  __int64 v81; // [rsp+200h] [rbp+180h]
  __int64 v82; // [rsp+208h] [rbp+188h]
  __int64 v83; // [rsp+210h] [rbp+190h]
  __int64 v84; // [rsp+218h] [rbp+198h]
  __int64 v85; // [rsp+220h] [rbp+1A0h]
  __int64 v86; // [rsp+228h] [rbp+1A8h]

  v86 = -2;
  find_session_meta_anchors((__int64)&v73, a2, a3);
  v10 = v73.m256i_i64[1];
  v47 = *(_OWORD *)&v73.m256i_u64[2];
  v48 = v74;
  v49 = v75;
  v50 = v76;
  v51 = v77;
  if ( v73.m256i_i32[0] == 1 )
  {
    *(_QWORD *)(a1 + 88) = v78;
    *(_OWORD *)(a1 + 72) = v51;
    *(_OWORD *)(a1 + 56) = v50;
    *(_OWORD *)(a1 + 40) = v49;
    *(_OWORD *)(a1 + 24) = v48;
    *(_OWORD *)(a1 + 8) = v47;
    *(_QWORD *)a1 = v10;
    return a1;
  }
  if ( v73.m256i_i64[1] == -1 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v59 = v73.m256i_i64[1];
  v60 = *(_OWORD *)&v73.m256i_u64[2];
  v61 = v74;
  v62 = v75;
  v63 = v76;
  v64 = v77;
  v65 = v78;
  sub_1404A4580(
    &v73,
    (__int128 *)v73.m256i_i64[2],
    (__int64 (__fastcall *)())v73.m256i_i64[3],
    a2,
    a3,
    (__int128 *)aFirstlast);
  v11 = *(_OWORD *)v73.m256i_i8;
  v12 = *(_OWORD *)&v73.m256i_u64[2];
  if ( v73.m256i_i64[0] != -1 )
  {
    v13 = v74;
    v14 = v75;
    v15 = v76;
    *(_OWORD *)(a1 + 80) = v77;
    *(_OWORD *)(a1 + 64) = v15;
    *(_OWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 32) = v13;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v11 + 1);
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = v11;
LABEL_40:
    if ( v10 )
      sub_140001660(v60, v10, 1);
    if ( *((_QWORD *)&v62 + 1) )
      sub_140001660(v63, *((_QWORD *)&v62 + 1), 1);
    return a1;
  }
  v84 = v73.m256i_i64[2];
  v79 = v73.m256i_i64[1];
  sub_1404A4580(&v73, (__int128 *)v63, *((__int64 (__fastcall **)())&v63 + 1), a2, a3, (__int128 *)&aFirstlast[5]);
  v16 = *(_OWORD *)v73.m256i_i8;
  v17 = *(_OWORD *)&v73.m256i_u64[2];
  if ( v73.m256i_i64[0] != -1 )
  {
    v18 = v74;
    v19 = v75;
    v20 = v76;
    *(_OWORD *)(a1 + 80) = v77;
    *(_OWORD *)(a1 + 64) = v20;
    *(_OWORD *)(a1 + 48) = v19;
    *(_OWORD *)(a1 + 32) = v18;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v16 + 1);
    *(_OWORD *)(a1 + 16) = v17;
    *(_QWORD *)a1 = v16;
    v21 = v84;
LABEL_38:
    if ( v79 )
      sub_140001660(v21, v79, 1);
    goto LABEL_40;
  }
  v83 = v73.m256i_i64[2];
  v80 = v73.m256i_i64[1];
  nullsub_1(v73.m256i_i64[1]);
  v22 = sub_140001650(144, 8);
  if ( !v22 )
    sub_1416C2D4B(8, 144);
  v70 = 2;
  v71 = v22;
  v72 = 0;
  if ( (unsigned __int8)sub_140788930(v84, *((_QWORD *)&v12 + 1), a6) )
  {
    sub_14149C500(&v73, &v59);
    v23 = v61;
    v24 = v61;
    LOBYTE(v66) = BYTE1(v62);
    LOBYTE(v81) = v62;
    v85 = v73.m256i_i64[1];
    v82 = v73.m256i_i64[0];
    v67 = v73.m256i_i64[2];
    sub_1404BC810(v73.m256i_i64, v60, *((__int64 *)&v60 + 1), a4, a5);
    v25 = v73.m256i_i64[0];
    v68 = *(_OWORD *)&v73.m256i_u64[1];
    v69 = v73.m256i_i64[3];
    if ( v73.m256i_i64[0] != -1 )
    {
      v26 = v74;
      v27 = v75;
      v28 = v76;
      *(_OWORD *)(a1 + 80) = v77;
      *(_OWORD *)(a1 + 64) = v28;
      *(_OWORD *)(a1 + 48) = v27;
      *(_OWORD *)(a1 + 32) = v26;
      *(_QWORD *)(a1 + 24) = v69;
      *(_OWORD *)(a1 + 8) = v68;
      *(_QWORD *)a1 = v25;
      v29 = v82;
      if ( v82 )
      {
        v30 = v85;
LABEL_21:
        sub_140001660(v30, v29, 1);
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v57 = v68;
    v58 = v69;
    *(_QWORD *)&v52 = v82;
    *((_QWORD *)&v52 + 1) = v85;
    v53 = v67;
    v54 = v23;
    v55 = v81;
    v56 = v66;
    sub_14047B3F0(&v70, &v52);
  }
  else
  {
    v24 = v61;
  }
  v82 = v64;
  if ( (_QWORD)v64 != v24 && (unsigned __int8)sub_140788930(v83, *((_QWORD *)&v17 + 1), a6) )
  {
    sub_14149C500(&v73, (char *)&v62 + 8);
    v66 = *((_QWORD *)&v64 + 1);
    LOBYTE(v67) = BYTE1(v65);
    v31 = v65;
    v81 = v73.m256i_i64[1];
    v85 = v73.m256i_i64[0];
    v32 = v73.m256i_i64[2];
    sub_1404BC810(v73.m256i_i64, v63, *((__int64 *)&v63 + 1), a4, a5);
    v33 = v73.m256i_i64[0];
    v68 = *(_OWORD *)&v73.m256i_u64[1];
    v69 = v73.m256i_i64[3];
    if ( v73.m256i_i64[0] != -1 )
    {
      v34 = v74;
      v35 = v75;
      v36 = v76;
      *(_OWORD *)(a1 + 80) = v77;
      *(_OWORD *)(a1 + 64) = v36;
      *(_OWORD *)(a1 + 48) = v35;
      *(_OWORD *)(a1 + 32) = v34;
      *(_QWORD *)(a1 + 24) = v69;
      *(_OWORD *)(a1 + 8) = v68;
      *(_QWORD *)a1 = v33;
      v29 = v85;
      if ( v85 )
      {
        v30 = v81;
        goto LABEL_21;
      }
LABEL_27:
      v21 = v84;
      v40 = v83;
      v41 = v72;
      if ( v72 )
      {
        v42 = (_QWORD *)(v71 + 56);
        do
        {
          v43 = *(v42 - 7);
          if ( v43 )
            sub_140001660(*(v42 - 6), v43, 1);
          v44 = *(v42 - 1);
          if ( v44 )
            sub_140001660(*v42, v44, 1);
          v42 += 9;
          --v41;
        }
        while ( v41 );
      }
      if ( v70 )
        sub_140001660(v71, 72 * v70, 8);
      if ( v80 )
        sub_140001660(v40, v80, 1);
      goto LABEL_38;
    }
    v57 = v68;
    v58 = v69;
    *(_QWORD *)&v52 = v85;
    *((_QWORD *)&v52 + 1) = v81;
    v53 = v32;
    *(_QWORD *)&v54 = v82;
    *((_QWORD *)&v54 + 1) = v66;
    v55 = v31;
    v56 = v67;
    sub_14047B3F0(&v70, &v52);
  }
  if ( !v72 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    goto LABEL_27;
  }
  sub_1404A5FF0((__int64)&v73, a2, a3, v71, v72);
  if ( v73.m256i_i32[0] != -1 )
  {
    *(_OWORD *)(a1 + 80) = v77;
    *(_OWORD *)(a1 + 64) = v76;
    v37 = *(_OWORD *)v73.m256i_i8;
    v38 = *(_OWORD *)&v73.m256i_u64[2];
    v39 = v74;
    *(_OWORD *)(a1 + 48) = v75;
    *(_OWORD *)(a1 + 32) = v39;
    *(_OWORD *)(a1 + 16) = v38;
    *(_OWORD *)a1 = v37;
    goto LABEL_27;
  }
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = -1;
  sub_14043B770(&v70);
  v46 = v84;
  if ( v80 )
    sub_140001660(v83, v80, 1);
  if ( v79 )
    sub_140001660(v46, v79, 1);
  sub_14043F1F0(&v59);
  return a1;
}