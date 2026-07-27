// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404bd470
// name: sub_1404BD470
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1404BD470(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edi
  int v7; // ebx
  __int128 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rdx
  __int128 v17; // xmm0
  _BYTE *v18; // rax
  __int64 v19; // rcx
  _BYTE *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _BYTE *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int128 v40; // [rsp+40h] [rbp-40h]
  __int128 v41; // [rsp+50h] [rbp-30h]
  __int64 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+70h] [rbp-10h] BYREF
  __int128 v44; // [rsp+78h] [rbp-8h]
  __int128 v45; // [rsp+88h] [rbp+8h]
  __int64 v46; // [rsp+98h] [rbp+18h]
  __m256i v47; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v48; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+58h]
  _QWORD v50[3]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v51; // [rsp+F8h] [rbp+78h]
  __m256i v52; // [rsp+100h] [rbp+80h] BYREF
  __int128 v53; // [rsp+120h] [rbp+A0h]
  _BYTE v54[48]; // [rsp+130h] [rbp+B0h]
  __int128 v55; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v56; // [rsp+170h] [rbp+F0h]
  __int128 v57; // [rsp+180h] [rbp+100h] BYREF
  __int128 v58; // [rsp+190h] [rbp+110h]
  __int128 v59; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v60; // [rsp+1B0h] [rbp+130h]
  _QWORD *v61; // [rsp+1C0h] [rbp+140h]
  char v62; // [rsp+1CEh] [rbp+14Eh]
  char v63; // [rsp+1CFh] [rbp+14Fh]
  __int64 v64; // [rsp+1D0h] [rbp+150h]

  v64 = -2;
  v6 = a3;
  v7 = a2;
  find_first_session_meta_line(&v52, a2, a3);
  v9 = *(_OWORD *)v52.m256i_i8;
  v40 = *(_OWORD *)&v52.m256i_u64[2];
  v41 = v53;
  v42 = *(_QWORD *)v54;
  if ( v52.m256i_i64[0] != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v54[40];
    v10 = *(_OWORD *)&v54[8];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v54[24];
    *(_OWORD *)(a1 + 56) = v10;
    *(_QWORD *)(a1 + 48) = v42;
    *(_OWORD *)(a1 + 32) = v41;
    *(_OWORD *)(a1 + 16) = v40;
    *(_OWORD *)a1 = v9;
    return v9;
  }
  if ( v52.m256i_i64[1] == -1 )
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = -1;
    return v9;
  }
  v46 = *(_QWORD *)v54;
  v45 = v53;
  v44 = *(_OWORD *)&v52.m256i_u64[2];
  v51 = v52.m256i_i64[1];
  v43 = v52.m256i_i64[1];
  *(_OWORD *)v52.m256i_i8 = *(_OWORD *)&v52.m256i_u64[2];
  *(_OWORD *)&v52.m256i_u64[2] = 0;
  v53 = v40;
  sub_1408A6200(&v57, &v52);
  if ( (_BYTE)v57 == 0xFF )
  {
    v50[0] = *((_QWORD *)&v57 + 1);
    v52.m256i_i64[0] = (__int64)v50;
    v52.m256i_i64[1] = (__int64)sub_14142D3F0;
    sub_14149C0F0(&v48, &unk_141757E89, &v52);
    v52.m256i_i64[2] = v49;
    *(_OWORD *)v52.m256i_i8 = v48;
    v14 = *(_QWORD *)v50[0];
    v15 = *(_QWORD *)v50[0] == 1;
    v61 = (_QWORD *)v50[0];
    if ( v15 )
    {
      sub_140018650(v50[0] + 8LL);
    }
    else if ( !v14 )
    {
      v16 = v61[2];
      if ( v16 )
        sub_140001660(v61[1], v16, 1);
    }
    *(_QWORD *)&v9 = sub_140001660(v61, 40, 8);
    v17 = *(_OWORD *)v52.m256i_i8;
    v59 = *(_OWORD *)v52.m256i_i8;
    v47 = v52;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v52.m256i_u64[2];
    *(_OWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = 10;
    goto LABEL_61;
  }
  v55 = v57;
  v56 = v58;
  v11 = sub_141433D50(aPayload, 7, &v55);
  if ( v11 )
  {
    v12 = sub_141433D50(aBaseInstructio, 17, v11);
    if ( v12 )
    {
      v13 = sub_141433D50(aText_4, 4, v12);
      if ( v13 )
      {
        if ( *(_BYTE *)v13 == 3 && *(_QWORD *)(v13 + 24) )
        {
          *(_BYTE *)(a1 + 8) = 0;
          *(_QWORD *)a1 = -1;
          goto LABEL_57;
        }
      }
    }
  }
  switch ( (char)v55 )
  {
    case 0:
      LOBYTE(v59) = 0;
      break;
    case 1:
    case 2:
      v60 = v56;
      v59 = v55;
      break;
    case 3:
      sub_14149C500((char *)&v59 + 8, (char *)&v55 + 8);
      LOBYTE(v59) = 3;
      break;
    case 4:
      sub_1402CE260((char *)&v59 + 8, v56, *((_QWORD *)&v56 + 1));
      LOBYTE(v59) = 4;
      break;
    case 5:
      if ( *((_QWORD *)&v56 + 1) )
      {
        if ( !*((_QWORD *)&v55 + 1) )
          sub_1416C3040(&off_141747358);
        sub_1402CCD80((char *)&v59 + 8, *((_QWORD *)&v55 + 1), v56);
      }
      else
      {
        *((_QWORD *)&v59 + 1) = 0;
        *((_QWORD *)&v60 + 1) = 0;
      }
      LOBYTE(v59) = 5;
      break;
  }
  v18 = (_BYTE *)sub_141433D50(aPayload, 7, &v59);
  v20 = v18;
  if ( v18 && *v18 == 5 )
  {
    nullsub_1(v19);
    v21 = sub_140001650(17, 1);
    if ( !v21 )
      sub_1416C2D4B(1, 17);
    *(_OWORD *)v21 = *(_OWORD *)aBaseInstructio;
    *(_BYTE *)(v21 + 16) = 115;
    v50[0] = 17;
    v50[1] = v21;
    v50[2] = 17;
    *(_QWORD *)&v48 = 0;
    v49 = 0;
    nullsub_1(v22);
    v23 = (_DWORD *)sub_140001650(4, 1);
    if ( !v23 )
      sub_1416C2D4B(1, 4);
    v25 = a5;
    v26 = v20 + 8;
    *v23 = 1954047348;
    v47.m256i_i64[0] = 4;
    v47.m256i_i64[1] = (__int64)v23;
    v47.m256i_i64[2] = 4;
    if ( a5 < 0 )
    {
      v27 = 0;
      goto LABEL_35;
    }
    if ( a5 )
    {
      nullsub_1(v24);
      v27 = 1;
      v28 = sub_140001650(a5, 1);
      v25 = a5;
      if ( !v28 )
      {
LABEL_35:
        v63 = 1;
        sub_1416C2D4B(v27, v25);
      }
      v29 = v28;
      sub_141684120(v28, a4, a5);
      v25 = a5;
    }
    else
    {
      v29 = 1;
    }
    v52.m256i_i8[0] = 3;
    v52.m256i_i64[1] = v25;
    v52.m256i_i64[2] = v29;
    v52.m256i_i64[3] = v25;
    v63 = 0;
    sub_140307860(&v57, &v48, &v47, &v52);
    if ( (_BYTE)v57 != 0xFF )
      sub_1400104F0(&v57);
    *(_OWORD *)&v52.m256i_u64[1] = v48;
    v52.m256i_i64[3] = v49;
    v52.m256i_i8[0] = 5;
    v62 = 0;
    sub_140307860(&v57, v26, v50, &v52);
    if ( (_BYTE)v57 != 0xFF )
      sub_1400104F0(&v57);
  }
  nullsub_1(v19);
  v30 = sub_140001650(128, 1);
  if ( !v30 )
    sub_1416C2D4B(1, 128);
  v52.m256i_i64[0] = 128;
  *(_OWORD *)&v52.m256i_u64[1] = (unsigned __int64)v30;
  v47.m256i_i64[0] = (__int64)&v52;
  sub_140444020(&v59, &v47);
  v31 = v52.m256i_i64[1];
  if ( v52.m256i_i64[0] == -1 )
  {
    v33 = (_QWORD *)v52.m256i_i64[1];
    v52.m256i_i64[0] = v52.m256i_i64[1];
    sub_14149C500(&v57, &v43);
    v34 = *v33;
    v15 = *v33 == 1;
    v61 = v33;
    if ( v15 )
    {
      sub_140018650(v33 + 1);
    }
    else if ( !v34 )
    {
      v35 = v61[2];
      if ( v35 )
        sub_140001660(v61[1], v35, 1);
    }
    sub_140001660(v61, 40, 8);
    v31 = *((_QWORD *)&v57 + 1);
    v32 = v58;
  }
  else
  {
    v32 = v52.m256i_i64[2];
    *(_QWORD *)&v57 = v52.m256i_i64[0];
  }
  v61 = (_QWORD *)v31;
  sub_1404B9880((unsigned int)&v52, v7, v6, v31, v32, v44, *((__int64 *)&v44 + 1));
  if ( v52.m256i_i32[0] == -1 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    *(_QWORD *)a1 = -1;
    if ( (_QWORD)v57 )
      sub_140001660(v61, v57, 1);
    sub_1400104F0(&v59);
    *(_QWORD *)&v9 = sub_1400104F0(&v55);
    goto LABEL_61;
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v54[32];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v54[16];
  v36 = *(_OWORD *)v52.m256i_i8;
  v37 = *(_OWORD *)&v52.m256i_u64[2];
  v38 = v53;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v54;
  *(_OWORD *)(a1 + 32) = v38;
  *(_OWORD *)(a1 + 16) = v37;
  *(_OWORD *)a1 = v36;
  if ( (_QWORD)v57 )
    sub_140001660(v61, v57, 1);
  sub_1400104F0(&v59);
LABEL_57:
  *(_QWORD *)&v9 = sub_1400104F0(&v55);
LABEL_61:
  if ( v51 )
    *(_QWORD *)&v9 = sub_140001660(v44, v51, 1);
  return v9;
}