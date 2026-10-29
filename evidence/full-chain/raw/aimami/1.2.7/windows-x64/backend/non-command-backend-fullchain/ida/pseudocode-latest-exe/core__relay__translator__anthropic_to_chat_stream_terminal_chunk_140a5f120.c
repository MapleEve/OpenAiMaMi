// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a5f120 | successor of pre-update 0x140e4bbb0 | session <审计会话>
// match evidence: {"body_sim": 0.43, "str_ov": 0.0, "anchor": 0.448, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
void __fastcall anthropic_to_chat_stream_terminal_chunk(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int128 v51; // xmm0
  _QWORD v52[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  void *v55; // [rsp+68h] [rbp-18h]
  __int128 v56; // [rsp+70h] [rbp-10h] BYREF
  __int64 v57; // [rsp+80h] [rbp+0h]
  __int128 v58; // [rsp+88h] [rbp+8h] BYREF
  __int64 v59; // [rsp+98h] [rbp+18h]
  __int64 v60; // [rsp+A0h] [rbp+20h]
  _QWORD v61[4]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v62; // [rsp+C8h] [rbp+48h] BYREF
  _WORD *v63; // [rsp+D0h] [rbp+50h]
  __int64 v64; // [rsp+D8h] [rbp+58h]
  _BYTE *v65; // [rsp+E0h] [rbp+60h]
  __m256i v66; // [rsp+E8h] [rbp+68h] BYREF
  char v67; // [rsp+10Dh] [rbp+8Dh]
  char v68; // [rsp+10Eh] [rbp+8Eh]
  char v69; // [rsp+10Fh] [rbp+8Fh]
  __int64 v70; // [rsp+110h] [rbp+90h]

  v70 = -2;
  if ( *(_BYTE *)(a2 + 101) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return;
  }
  v53 = a3;
  *(_QWORD *)&v58 = 0;
  v59 = 0;
  nullsub_1(a1, a2);
  v7 = (_WORD *)sub_140001650(2, 1);
  if ( !v7 )
    sub_14196B2DB(1, 2);
  *v7 = 25705;
  v62 = 2;
  v63 = v7;
  v64 = 2;
  v10 = *(_QWORD *)(a2 + 40);
  v65 = v7;
  if ( v10 < 0 )
  {
    v11 = 0;
    goto LABEL_6;
  }
  if ( v10 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    nullsub_1(v9, v8);
    v11 = 1;
    v13 = sub_140001650(v10, 1);
    if ( !v13 )
    {
LABEL_6:
      v68 = 1;
      sub_14196B2DB(v11, v10);
    }
    v14 = v13;
    sub_1419234B0(v13, v12, v10);
  }
  else
  {
    v14 = 1;
  }
  v66.m256i_i8[0] = 3;
  v66.m256i_i64[1] = v10;
  v66.m256i_i64[2] = v14;
  v66.m256i_i64[3] = v10;
  v68 = 0;
  sub_140A68320(v61, &v58, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  nullsub_1(v16, v15);
  v17 = sub_140001650(6, 1);
  if ( !v17 )
    sub_14196B2DB(1, 6);
  *(_WORD *)(v17 + 4) = 29795;
  *(_DWORD *)v17 = 1701470831;
  v62 = 6;
  v60 = v17;
  v63 = (_WORD *)v17;
  v64 = 6;
  nullsub_1(v19, v18);
  v20 = sub_140001650(21, 1);
  v65 = (_BYTE *)v20;
  if ( !v20 )
    sub_14196B2DB(1, 21);
  *(_OWORD *)v20 = *(_OWORD *)"chat.completion.chunk";
  *(_QWORD *)(v20 + 13) = 0x6B6E7568632E6E6FLL;
  v66.m256i_i8[0] = 3;
  v66.m256i_i64[1] = 21;
  v66.m256i_i64[2] = v20;
  v66.m256i_i64[3] = 21;
  sub_140A68320(v61, &v58, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  nullsub_1(v22, v21);
  v23 = sub_140001650(5, 1);
  if ( !v23 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v23 + 4) = 108;
  *(_DWORD *)v23 = 1701080941;
  v62 = 5;
  v63 = (_WORD *)v23;
  v64 = 5;
  v26 = *(_QWORD *)(a2 + 16);
  v65 = (_BYTE *)v23;
  if ( v26 < 0 )
  {
    v27 = 0;
    goto LABEL_20;
  }
  if ( v26 )
  {
    v28 = *(_QWORD *)(a2 + 8);
    nullsub_1(v25, v24);
    v27 = 1;
    v29 = sub_140001650(v26, 1);
    if ( !v29 )
    {
LABEL_20:
      v67 = 1;
      sub_14196B2DB(v27, v26);
    }
    v30 = v29;
    sub_1419234B0(v29, v28, v26);
  }
  else
  {
    v30 = 1;
  }
  v66.m256i_i8[0] = 3;
  v66.m256i_i64[1] = v26;
  v66.m256i_i64[2] = v30;
  v66.m256i_i64[3] = v26;
  v67 = 0;
  sub_140A68320(v61, &v58, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  nullsub_1(v32, v31);
  v33 = (_DWORD *)sub_140001650(7, 1);
  if ( !v33 )
    sub_14196B2DB(1, 7);
  v36 = v33;
  *(_DWORD *)((char *)v33 + 3) = 1936024425;
  *v33 = 1768908899;
  v52[0] = 7;
  v52[1] = v33;
  v52[2] = 7;
  nullsub_1(v35, v34);
  v37 = sub_140001650(32, 8);
  v60 = (__int64)v36;
  if ( !v37 )
  {
    v69 = 1;
    sub_14196B2C1(8, 32);
  }
  v65 = (_BYTE *)v37;
  *(_QWORD *)&v56 = 0;
  v57 = 0;
  nullsub_1(v39, v38);
  v40 = sub_140001650(5, 1);
  if ( !v40 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v40 + 4) = 120;
  *(_DWORD *)v40 = 1701080681;
  v62 = 5;
  v63 = (_WORD *)v40;
  v64 = 5;
  v66.m256i_i8[0] = 2;
  *(_OWORD *)&v66.m256i_u64[1] = 0;
  sub_140A68320(v61, &v56, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  nullsub_1(v42, v41);
  v43 = sub_140001650(5, 1);
  if ( !v43 )
    sub_14196B2DB(1, 5);
  *(_BYTE *)(v43 + 4) = 97;
  *(_DWORD *)v43 = 1953260900;
  v62 = 5;
  v63 = (_WORD *)v43;
  v64 = 5;
  v66.m256i_i64[1] = 0;
  v66.m256i_i64[3] = 0;
  v66.m256i_i8[0] = 5;
  sub_140A68320(v61, &v56, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  nullsub_1(v45, v44);
  v46 = (void *)sub_140001650(13, 1);
  if ( !v46 )
    sub_14196B2DB(1, 13);
  qmemcpy(v46, "finish_reason", 13);
  v62 = 13;
  v55 = v46;
  v63 = v46;
  v64 = 13;
  nullsub_1(0x725F6873696E6966LL, v47);
  v48 = sub_140001650(a4, 1);
  v54 = v48;
  if ( !v48 )
    sub_14196B2DB(1, a4);
  v49 = v48;
  sub_1419234B0(v48, v53, a4);
  v66.m256i_i8[0] = 3;
  v66.m256i_i64[1] = a4;
  v66.m256i_i64[2] = v49;
  v66.m256i_i64[3] = a4;
  sub_140A68320(v61, &v56, &v62, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  *(_OWORD *)((char *)&v66.m256i_u32[1] + 3) = v56;
  *(__int64 *)((char *)&v66.m256i_i64[2] + 7) = v57;
  v50 = (__int64)v65;
  *v65 = 5;
  v51 = *(_OWORD *)v66.m256i_i8;
  *(_OWORD *)(v50 + 16) = *(_OWORD *)((char *)&v66.m256i_u64[1] + 7);
  *(_OWORD *)(v50 + 1) = v51;
  v66.m256i_i64[1] = 1;
  v66.m256i_i64[2] = v50;
  v66.m256i_i64[3] = 1;
  v66.m256i_i8[0] = 4;
  v69 = 0;
  sub_140A68320(v61, &v58, v52, &v66);
  if ( LOBYTE(v61[0]) != 0xFF )
    sub_140A192F0(v61);
  *(_OWORD *)&v66.m256i_u64[1] = v58;
  v66.m256i_i64[3] = v59;
  v66.m256i_i8[0] = 5;
  v61[0] = &v66;
  v61[1] = sub_14166C3A0;
  sub_1416DAFA0(a1, &unk_141A6B0E8, v61);
  sub_140A192F0(&v66);
}
