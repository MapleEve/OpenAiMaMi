// win 1.2.3 delta | model_reasoning_effort @ 0x1404b5a10 | changelog ③推理层级
// [FULL hexrays 10935B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_1404B5A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  void *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r12
  void *v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rcx
  _BYTE *v33; // r15
  void *v34; // rax
  __int64 v35; // r12
  __int64 v36; // rcx
  _BYTE *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 v47; // r15
  void *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int128 v51; // xmm0
  _QWORD v52[2]; // [rsp+40h] [rbp-40h] BYREF
  __m256i v53; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v54; // [rsp+70h] [rbp-10h] BYREF
  __int64 v55; // [rsp+78h] [rbp-8h]
  __m256i v56; // [rsp+80h] [rbp+0h] BYREF
  __int128 v57; // [rsp+A0h] [rbp+20h]
  __int128 v58; // [rsp+B0h] [rbp+30h]
  __int128 v59; // [rsp+C0h] [rbp+40h]
  __int128 v60; // [rsp+D0h] [rbp+50h]
  __int64 v61; // [rsp+E8h] [rbp+68h]
  __int64 v62; // [rsp+F0h] [rbp+70h]
  __int64 v63; // [rsp+F8h] [rbp+78h]
  _BYTE v64[31]; // [rsp+100h] [rbp+80h] BYREF
  __m256i v65; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v66; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v67; // [rsp+160h] [rbp+E0h]
  __int128 v68; // [rsp+170h] [rbp+F0h]
  __int128 v69; // [rsp+180h] [rbp+100h]
  __int128 v70; // [rsp+190h] [rbp+110h]
  __int64 v71; // [rsp+1A8h] [rbp+128h]
  __int64 v72; // [rsp+1B0h] [rbp+130h]
  __int128 v73; // [rsp+1B8h] [rbp+138h]
  __int8 v74; // [rsp+1CEh] [rbp+14Eh]
  char v75; // [rsp+1CFh] [rbp+14Fh]
  __int64 v76; // [rsp+1D0h] [rbp+150h]

  v76 = -2;
  sub_141486710(&v66, a2, a3);
  if ( v66.m256i_i32[0] == 2 )
  {
    v56.m256i_i64[1] = v66.m256i_i64[1];
    v56.m256i_i64[0] = 2;
LABEL_4:
    result = (void *)sub_140018650(&v56.m256i_u64[1]);
    *(_QWORD *)a1 = -1;
    return result;
  }
  v56 = v66;
  *(_QWORD *)&v60 = v70;
  v59 = v69;
  v58 = v68;
  v57 = v67;
  if ( v66.m256i_i64[0] == 2 )
    goto LABEL_4;
  sub_1404B5240(&v56);
  if ( v56.m256i_i32[0] != -1 )
  {
    v70 = v60;
    v69 = v59;
    v68 = v58;
    v67 = v57;
    v66 = v56;
    v53.m256i_i64[0] = (__int64)&v66;
    v53.m256i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v65, &unk_141757D0A, &v53);
    sub_14043E650(&v66);
    result = (void *)v65.m256i_i64[1];
    v13 = v65.m256i_i64[0];
    v14 = v65.m256i_i64[2];
LABEL_7:
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v14;
    *(_QWORD *)a1 = -2;
    return result;
  }
  if ( v56.m256i_i64[1] == -1 )
  {
    nullsub_1(v12);
    v13 = 20;
    result = (void *)sub_140001650(20, 1);
    if ( !result )
      sub_1416C2D4B(1, 20);
    qmemcpy(result, "session_meta missing", 20);
    v14 = 20;
    goto LABEL_7;
  }
  v55 = v56.m256i_i64[1];
  v15 = v56.m256i_i64[3];
  *(_OWORD *)v66.m256i_i8 = *(_OWORD *)&v56.m256i_u64[2];
  *(_OWORD *)&v66.m256i_u64[2] = 0;
  v61 = v56.m256i_i64[2];
  v67 = *(_OWORD *)&v56.m256i_u64[2];
  v75 = 0;
  sub_1408A6200(&v56, &v66);
  if ( v56.m256i_i8[0] == -1 )
  {
    v54 = (__int64 *)v56.m256i_i64[1];
    v52[0] = &v54;
    v52[1] = sub_14142D3F0;
    sub_14149C0F0(&v66, &unk_141757D20, v52);
    v20 = *v54;
    v21 = *v54 == 1;
    v72 = (__int64)v54;
    if ( v21 )
    {
      sub_140018650(v54 + 1);
    }
    else if ( !v20 )
    {
      v22 = *(_QWORD *)(v72 + 16);
      if ( v22 )
        sub_140001660(*(_QWORD *)(v72 + 8), v22, 1);
    }
    sub_140001660(v72, 40, 8);
    result = (void *)v66.m256i_i64[2];
    *(__int64 *)((char *)&v65.m256i_i64[2] + 7) = v66.m256i_i64[2];
    v24 = *(_OWORD *)v66.m256i_i8;
    *(_OWORD *)((char *)&v65.m256i_u32[1] + 3) = *(_OWORD *)v66.m256i_i8;
    *(_OWORD *)&v64[7] = *(_OWORD *)v66.m256i_i8;
    *(_QWORD *)&v64[23] = v66.m256i_i64[2];
    *(_QWORD *)(a1 + 24) = v66.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = v24;
    *(_QWORD *)a1 = -2;
    goto LABEL_74;
  }
  *(_OWORD *)((char *)&v65.m256i_u64[1] + 7) = *(_OWORD *)&v56.m256i_u64[2];
  *(_OWORD *)v65.m256i_i8 = *(_OWORD *)&v56.m256i_i8[1];
  *(_OWORD *)v64 = *(_OWORD *)&v56.m256i_i8[1];
  *(_OWORD *)&v64[15] = *(_OWORD *)((char *)&v65.m256i_u64[1] + 7);
  *(_OWORD *)&v53.m256i_i8[1] = *(_OWORD *)v64;
  *(_OWORD *)&v53.m256i_u64[2] = *(_OWORD *)((char *)&v65.m256i_u64[1] + 7);
  v53.m256i_i8[0] = v56.m256i_i8[0];
  v16 = sub_14142E200(&v53, aPayloadModelPr, 23);
  if ( v16 && *(_BYTE *)v16 == 3 )
  {
    a5 = *(_QWORD *)(v16 + 24);
    a4 = *(_QWORD *)(v16 + 16);
  }
  if ( a5 < 0 )
  {
    v19 = 0;
    goto LABEL_16;
  }
  v72 = a5;
  if ( a5 )
  {
    nullsub_1(v17);
    v19 = 1;
    v23 = sub_140001650(a5, 1);
    if ( !v23 )
LABEL_16:
      sub_1416C2D4B(v19, a5);
    v62 = v23;
    sub_141684120(v23, a4, a5);
  }
  else
  {
    v62 = 1;
  }
  v25 = sub_14142E200(&v53, aPayloadModelRe, 31);
  v27 = 6;
  v28 = &unk_14175BF4D;
  if ( v25 && *(_BYTE *)v25 == 3 )
  {
    v27 = *(_QWORD *)(v25 + 24);
    if ( v27 < 0 )
    {
      v29 = 0;
      goto LABEL_33;
    }
    if ( !v27 )
    {
      v63 = 1;
      LOBYTE(v28) = 1;
      v71 = 0;
      goto LABEL_39;
    }
    v28 = *(void **)(v25 + 16);
  }
  nullsub_1(v26);
  v29 = 1;
  v30 = sub_140001650(v27, 1);
  if ( !v30 )
LABEL_33:
    sub_1416C2D4B(v29, v27);
  v63 = v30;
  v71 = v27;
  sub_141684120(v30, v28, v27);
  LODWORD(v28) = 0;
LABEL_39:
  v66.m256i_i64[0] = v61;
  v66.m256i_i64[1] = v15;
  *(_OWORD *)&v66.m256i_u64[2] = 0;
  *(_QWORD *)&v67 = v61;
  *((_QWORD *)&v67 + 1) = v15;
  sub_1408A6200(&v56, &v66);
  if ( v56.m256i_i8[0] == -1 )
  {
    *(_QWORD *)&v73 = v56.m256i_i64[1];
    v47 = 3;
LABEL_67:
    v38 = 30;
LABEL_68:
    v66.m256i_i64[0] = v47;
    *(_OWORD *)&v66.m256i_u64[1] = v73;
    v66.m256i_i64[3] = v38;
    v65.m256i_i64[0] = (__int64)&v66;
    v65.m256i_i64[1] = (__int64)sub_140B036A0;
    sub_14149C0F0(&v56, &unk_141757D3C, &v65);
    sub_14043E650(&v66);
    v49 = v56.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v56.m256i_i8;
    *(_QWORD *)(a1 + 24) = v49;
    *(_QWORD *)a1 = -2;
LABEL_69:
    v50 = v72;
    if ( v71 )
      sub_140001660(v63, v71, 1);
    if ( v50 )
      sub_140001660(v62, v50, 1);
    v75 = 0;
    result = (void *)sub_1400104F0(&v53);
LABEL_74:
    if ( v55 )
      return (void *)sub_140001660(v61, v55, 1);
    return result;
  }
  LODWORD(v73) = (_DWORD)v28;
  v65 = v56;
  v31 = (_BYTE *)sub_141433D50(aPayload, 7, &v65);
  v33 = v31;
  if ( !v31 || *v31 != 5 )
  {
    nullsub_1(v32);
    *(_QWORD *)&v73 = 30;
    v48 = (void *)sub_140001650(30, 1);
    if ( !v48 )
      sub_1416C2D4B(1, 30);
    *((_QWORD *)&v73 + 1) = v48;
    qmemcpy(v48, "session_meta payload not found", 30);
    v47 = 9;
    sub_1400104F0(&v65);
    goto LABEL_67;
  }
  nullsub_1(v32);
  v34 = (void *)sub_140001650(14, 1);
  if ( !v34 )
    sub_1416C2D4B(1, 14);
  qmemcpy(v34, "model_provider", 14);
  *(_QWORD *)v64 = 14;
  *(_QWORD *)&v64[8] = v34;
  *(_QWORD *)&v64[16] = 14;
  v35 = v72;
  sub_140388B60((unsigned int)&v66, v72, 0, 1, 1);
  v36 = v66.m256i_i64[1];
  v74 = v66.m256i_i8[0];
  if ( v66.m256i_i8[0] )
    sub_1416C2D4B(v66.m256i_i64[1], v66.m256i_i64[2]);
  v37 = v33 + 8;
  v38 = v66.m256i_i64[2];
  if ( v35 )
  {
    *((_QWORD *)&v73 + 1) = v66.m256i_i64[1];
    sub_141684120(v66.m256i_i64[2], v62, v35);
    v36 = *((_QWORD *)&v73 + 1);
  }
  v66.m256i_i64[1] = v36;
  v66.m256i_i64[2] = v38;
  v66.m256i_i64[3] = v35;
  v66.m256i_i8[0] = 3;
  sub_140307860(&v56, v37, v64, &v66);
  if ( v56.m256i_i8[0] != -1 )
    sub_1400104F0(&v56);
  if ( sub_1402B3A40(v37, aModel_1, 5) )
  {
    nullsub_1(v39);
    v40 = sub_140001650(5, 1);
    if ( !v40 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v40 + 4) = 108;
    *(_DWORD *)v40 = 1701080941;
    *(_QWORD *)v64 = 5;
    *(_QWORD *)&v64[8] = v40;
    *(_QWORD *)&v64[16] = 5;
    sub_140388B60((unsigned int)&v66, a7, 0, 1, 1);
    v41 = v66.m256i_i64[1];
    BYTE8(v73) = v66.m256i_i8[0];
    if ( v66.m256i_i8[0] )
      sub_1416C2D4B(v66.m256i_i64[1], v66.m256i_i64[2]);
    v38 = v66.m256i_i64[2];
    v42 = a7;
    if ( a7 )
    {
      sub_141684120(v66.m256i_i64[2], a6, a7);
      v42 = a7;
    }
    v66.m256i_i64[1] = v41;
    v66.m256i_i64[2] = v38;
    v66.m256i_i64[3] = v42;
    v66.m256i_i8[0] = 3;
    sub_140307860(&v56, v37, v64, &v66);
    if ( v56.m256i_i8[0] != -1 )
      sub_1400104F0(&v56);
  }
  if ( sub_1402B3A40(v37, aModelReasoning, 22) )
  {
    nullsub_1(v43);
    v44 = sub_140001650(22, 1);
    if ( !v44 )
      sub_1416C2D4B(1, 22);
    *(_OWORD *)v44 = *(_OWORD *)aModelReasoning;
    *(_QWORD *)(v44 + 14) = 0x74726F6666655F67LL;
    *(_QWORD *)v64 = 22;
    *(_QWORD *)&v64[8] = v44;
    *(_QWORD *)&v64[16] = 22;
    sub_140388B60((unsigned int)&v66, v71, 0, 1, 1);
    v45 = v66.m256i_i64[1];
    BYTE8(v73) = v66.m256i_i8[0];
    if ( v66.m256i_i8[0] )
      sub_1416C2D4B(v66.m256i_i64[1], v66.m256i_i64[2]);
    v38 = v66.m256i_i64[2];
    if ( !(_BYTE)v73 )
      sub_141684120(v66.m256i_i64[2], v63, v71);
    v66.m256i_i64[1] = v45;
    v66.m256i_i64[2] = v38;
    v66.m256i_i64[3] = v71;
    v66.m256i_i8[0] = 3;
    sub_140307860(&v56, v37, v64, &v66);
    if ( v56.m256i_i8[0] != -1 )
      sub_1400104F0(&v56);
  }
  sub_140441D80(&v66, &v65);
  *((_QWORD *)&v73 + 1) = v66.m256i_i64[1];
  v46 = v66.m256i_i64[0];
  if ( v66.m256i_i64[0] == -1 )
  {
    v47 = 3;
    *(_QWORD *)&v73 = v66.m256i_i64[1];
  }
  else
  {
    v38 = v66.m256i_i64[2];
    v47 = -1;
    *(_QWORD *)&v73 = v66.m256i_i64[0];
  }
  sub_1400104F0(&v65);
  if ( v46 == -1 )
    goto LABEL_68;
  sub_1404B9880((unsigned int)&v56, a2, a3, DWORD2(v73), v38, v61, v15);
  if ( v56.m256i_i32[0] != -1 )
  {
    v70 = v60;
    v69 = v59;
    v68 = v58;
    v67 = v57;
    v66 = v56;
    sub_14046B940(&v65, &v66);
    *(_QWORD *)(a1 + 24) = v65.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v65.m256i_i8;
    *(_QWORD *)a1 = -2;
    if ( (_QWORD)v73 )
      sub_140001660(*((_QWORD *)&v73 + 1), v73, 1);
    goto LABEL_69;
  }
  sub_1414734D0(&v66, a2, a3);
  v51 = *(_OWORD *)v66.m256i_i8;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v66.m256i_u64[2];
  *(_OWORD *)a1 = v51;
  *(_QWORD *)(a1 + 32) = v55;
  *(_QWORD *)(a1 + 40) = v61;
  *(_QWORD *)(a1 + 48) = v15;
  *(_OWORD *)(a1 + 56) = v73;
  *(_QWORD *)(a1 + 72) = v38;
  if ( v71 )
    sub_140001660(v63, v71, 1);
  if ( v72 )
    sub_140001660(v62, v72, 1);
  v75 = 1;
  return (void *)sub_1400104F0(&v53);
}
