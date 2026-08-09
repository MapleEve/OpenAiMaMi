// win 1.2.3 delta | session_meta_rewrite_2 @ 0x1404bb500 | changelog ③模型协议
// [FULL hexrays 14480B]
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404BB500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int128 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // r15
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdi
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // [rsp+40h] [rbp-40h]
  _QWORD v35[2]; // [rsp+70h] [rbp-10h] BYREF
  _BYTE v36[104]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v37; // [rsp+E8h] [rbp+68h]
  __int128 v38; // [rsp+F8h] [rbp+78h]
  __int128 v39; // [rsp+108h] [rbp+88h]
  __int128 v40; // [rsp+118h] [rbp+98h]
  __int128 v41; // [rsp+128h] [rbp+A8h]
  __int128 v42; // [rsp+138h] [rbp+B8h]
  __int128 v43; // [rsp+150h] [rbp+D0h] BYREF
  __m256i v44; // [rsp+160h] [rbp+E0h]
  __int128 v45; // [rsp+188h] [rbp+108h] BYREF
  __int64 v46; // [rsp+198h] [rbp+118h]
  __int128 v47; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v48; // [rsp+1B0h] [rbp+130h] BYREF
  __m256i v49; // [rsp+1C0h] [rbp+140h]
  __int128 v50; // [rsp+1E0h] [rbp+160h]
  _BYTE v51[104]; // [rsp+1F0h] [rbp+170h]
  __int64 v52; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v53; // [rsp+260h] [rbp+1E0h]
  __int64 v54; // [rsp+268h] [rbp+1E8h]
  _BYTE v55[56]; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v56; // [rsp+2A8h] [rbp+228h]
  __int128 v57; // [rsp+2B8h] [rbp+238h]
  __int64 v58; // [rsp+2C8h] [rbp+248h]
  __int64 v59; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v60; // [rsp+2D8h] [rbp+258h]
  __int64 v61; // [rsp+2E0h] [rbp+260h]
  __int64 v62; // [rsp+2E8h] [rbp+268h] BYREF
  __int128 v63; // [rsp+2F0h] [rbp+270h]
  __int64 v64; // [rsp+300h] [rbp+280h]
  __int64 v65; // [rsp+308h] [rbp+288h]
  __int64 v66; // [rsp+310h] [rbp+290h]
  __int64 v67; // [rsp+318h] [rbp+298h]
  _BYTE v68[24]; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v69; // [rsp+338h] [rbp+2B8h]
  __int128 v70; // [rsp+340h] [rbp+2C0h] BYREF
  __m256i v71; // [rsp+350h] [rbp+2D0h]
  _BYTE v72[128]; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 v73; // [rsp+3F0h] [rbp+370h]
  __int64 v74; // [rsp+3F8h] [rbp+378h]
  __int64 v75; // [rsp+400h] [rbp+380h]
  __int64 v76; // [rsp+408h] [rbp+388h]
  __int64 v77; // [rsp+410h] [rbp+390h]
  __int64 v78; // [rsp+418h] [rbp+398h]
  __int64 v79; // [rsp+420h] [rbp+3A0h]
  char v80; // [rsp+42Eh] [rbp+3AEh]
  char v81; // [rsp+42Fh] [rbp+3AFh]
  __int64 v82; // [rsp+430h] [rbp+3B0h]
  __m256i v83; // 0:^50.32

  v82 = -2;
  v35[0] = a3;
  v35[1] = a4;
  if ( *(_QWORD *)(a2 + 48) != -1 )
  {
    v7 = *(_OWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 56);
    v64 = a2;
    v9 = *(_QWORD *)(a2 + 64);
    v47 = v7;
    sub_1404A4C00((__int64)v36, v8, v9);
    if ( *(_DWORD *)v36 == 1 )
    {
      *(_OWORD *)&v72[80] = *(_OWORD *)&v36[88];
      *(_OWORD *)&v72[64] = *(_OWORD *)&v36[72];
      *(_OWORD *)&v72[48] = *(_OWORD *)&v36[56];
      *(_OWORD *)&v72[32] = *(_OWORD *)&v36[40];
      *(_OWORD *)&v72[16] = *(_OWORD *)&v36[24];
      *(_OWORD *)v72 = *(_OWORD *)&v36[8];
      *(_QWORD *)&v70 = &v47;
      *((_QWORD *)&v70 + 1) = sub_14041F680;
      v71.m256i_i64[0] = (__int64)v72;
      v71.m256i_i64[1] = (__int64)sub_140B036A0;
      sub_14149C0F0(&v48, &unk_141757C2A, &v70);
      *(_OWORD *)&v36[16] = v48;
      *(_QWORD *)&v36[32] = v49.m256i_i64[0];
      sub_14043E650(v72);
      v11 = *(_QWORD *)&v36[24];
      result = *(_QWORD *)&v36[16];
      v13 = *(_QWORD *)&v36[40];
      v12 = *(_QWORD *)&v36[32];
      v14 = *(_QWORD *)&v36[48];
      v50 = *(_OWORD *)&v36[56];
      *(_OWORD *)v51 = *(_OWORD *)&v36[72];
      *(_OWORD *)&v51[16] = *(_OWORD *)&v36[88];
      v15 = 10;
LABEL_49:
      *(_QWORD *)(a1 + 16) = result;
      *(_QWORD *)(a1 + 24) = v11;
      *(_QWORD *)(a1 + 32) = v12;
      v32 = *(_OWORD *)v51;
      v33 = *(_OWORD *)&v51[16];
      *(_OWORD *)(a1 + 56) = v50;
      *(_OWORD *)(a1 + 72) = v32;
      *(_OWORD *)(a1 + 88) = v33;
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)(a1 + 40) = v13;
      *(_QWORD *)(a1 + 48) = v14;
      goto LABEL_50;
    }
    if ( *(_QWORD *)&v36[8] == -1 )
    {
      *(_QWORD *)&v70 = &v47;
      *((_QWORD *)&v70 + 1) = sub_14041F680;
      sub_14149C0F0(&v72[8], &unk_141757C4E, &v70);
      result = *(_QWORD *)&v72[8];
      v12 = *(_QWORD *)&v72[24];
      v11 = *(_QWORD *)&v72[16];
      v14 = *(_QWORD *)&v72[40];
      v13 = *(_QWORD *)&v72[32];
      v50 = *(_OWORD *)&v72[48];
      *(_OWORD *)v51 = *(_OWORD *)&v72[64];
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80];
      v15 = 9;
      goto LABEL_49;
    }
    v58 = *(_QWORD *)&v36[96];
    v57 = *(_OWORD *)&v36[80];
    v56 = *(_OWORD *)&v36[64];
    *(_OWORD *)&v55[40] = *(_OWORD *)&v36[48];
    *(_OWORD *)&v55[24] = *(_OWORD *)&v36[32];
    *(_OWORD *)&v55[8] = *(_OWORD *)&v36[16];
    v73 = *(_QWORD *)&v36[8];
    *(_QWORD *)v55 = *(_QWORD *)&v36[8];
    sub_1404A4580((__int64)v72, *(__int128 **)&v36[16]);
    v15 = *(_QWORD *)v72;
    v74 = *(_QWORD *)&v72[24];
    v77 = *(_QWORD *)&v72[16];
    v16 = v73;
    if ( *(_QWORD *)v72 != -1 )
    {
      v14 = *(_QWORD *)&v72[40];
      v13 = *(_QWORD *)&v72[32];
      v50 = *(_OWORD *)&v72[48];
      *(_OWORD *)v51 = *(_OWORD *)&v72[64];
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80];
      v17 = -1;
      v79 = *(_QWORD *)&v72[8];
      v11 = v77;
      v12 = v74;
      if ( !v73 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v78 = *(_QWORD *)&v72[8];
    sub_1404A4580((__int64)v72, (__int128 *)v56);
    *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[8];
    v15 = *(_QWORD *)v72;
    if ( *(_QWORD *)v72 != -1 )
    {
      v79 = *(_QWORD *)&v72[8];
      v14 = *(_QWORD *)&v72[40];
      v13 = *(_QWORD *)&v72[32];
      v50 = *(_OWORD *)&v72[48];
      *(_OWORD *)v51 = *(_OWORD *)&v72[64];
      *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80];
      v17 = -1;
      v12 = *(_QWORD *)&v72[24];
      v11 = *(_QWORD *)&v72[16];
      if ( v78 )
        sub_140001660(v77, v78, 1);
LABEL_45:
      v16 = v73;
      if ( !v73 )
      {
LABEL_9:
        if ( *(_QWORD *)&v55[48] )
          sub_140001660(v56, *(_QWORD *)&v55[48], 1);
        v18 = v64;
        if ( v17 != -1 )
          goto LABEL_12;
        goto LABEL_48;
      }
LABEL_8:
      sub_140001660(*(_QWORD *)&v55[8], v16, 1);
      goto LABEL_9;
    }
    v62 = *(_QWORD *)&v72[8];
    v69 = *(_QWORD *)&v72[16];
    v63 = *(_OWORD *)&v72[16];
    v76 = *(_QWORD *)&v72[24];
    v59 = v78;
    v60 = v77;
    v61 = v74;
    if ( !(unsigned __int8)sub_1404B58C0(v77, v74, v19) || !(unsigned __int8)sub_1404B58C0(v69, v76, v21) )
    {
      v14 = -1;
      if ( *(_QWORD *)off_141EC8D80 >= 3u )
      {
        *(_QWORD *)v72 = &v47;
        *(_QWORD *)&v72[8] = sub_14041F680;
        *(_QWORD *)&v72[16] = &v59;
        *(_QWORD *)&v72[24] = sub_1400015F0;
        *(_QWORD *)&v72[32] = &v62;
        *(_QWORD *)&v72[40] = sub_1400015F0;
        *(_QWORD *)&v70 = aCodexmateLibCo_0;
        *((_QWORD *)&v70 + 1) = 51;
        v71.m256i_i64[0] = (__int64)aCodexmateLibCo_0;
        v71.m256i_i64[1] = 51;
        v71.m256i_i64[2] = (__int64)&off_14175B6B8;
        v80 = 1;
        sub_140985BA0(&unk_14175B650, v72, 3, &v70);
        v17 = v59;
        v15 = v60;
        v79 = v61;
        v11 = v62;
        v13 = *((_QWORD *)&v63 + 1);
        v12 = v63;
        goto LABEL_45;
      }
      v15 = v77;
      v11 = *((_QWORD *)&v20 + 1);
      v79 = v74;
      v12 = v69;
      goto LABEL_44;
    }
    nullsub_1(v22);
    v23 = sub_140001650(144, 8);
    if ( !v23 )
    {
      v80 = 1;
      sub_1416C2D4B(8, 144);
    }
    v52 = 2;
    v53 = v23;
    v54 = 0;
    *(_QWORD *)&v43 = -1;
    *(_QWORD *)&v48 = -1;
    v79 = *((_QWORD *)&v20 + 1);
    if ( v74 == a4 && !(unsigned int)sub_1416847B0(v77, a3, a4) )
    {
      v28 = *(_QWORD *)&v55[24];
    }
    else
    {
      v81 = 1;
      sub_1404BC810((unsigned int)v72, *(_DWORD *)&v55[8], *(_DWORD *)&v55[16], a3, a4);
      v20 = *(_OWORD *)&v72[8];
      v15 = *(_QWORD *)v72;
      if ( *(_QWORD *)v72 != -1 )
      {
        v12 = *(_QWORD *)&v72[24];
        v14 = *(_QWORD *)&v72[40];
        v76 = *(_QWORD *)&v72[32];
        v50 = *(_OWORD *)&v72[48];
        *(_OWORD *)v51 = *(_OWORD *)&v72[64];
        *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80];
        v24 = 1;
        v78 = -1;
        v25 = *(_QWORD *)&v72[8];
LABEL_41:
        sub_140009030(&v48);
        sub_140009030(&v43);
        sub_14043B770(&v52);
        if ( v24 )
          sub_1402C34C0(&v59);
        v11 = *((_QWORD *)&v20 + 1);
        v79 = v25;
LABEL_44:
        v13 = v76;
        v17 = v78;
        goto LABEL_45;
      }
      *(_OWORD *)v68 = *(_OWORD *)&v72[8];
      *(_QWORD *)&v68[16] = *(_QWORD *)&v72[24];
      v26 = *(_QWORD *)&v72[8];
      v67 = *(_QWORD *)&v72[8];
      sub_14149C500(&v70, v55);
      *((_QWORD *)&v20 + 1) = v79;
      v75 = v26;
      v65 = *(_QWORD *)&v55[24];
      *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)&v55[24];
      v71.m256i_i16[12] = *(_WORD *)&v55[40];
      sub_14149C500(&v45, v68);
      *(__m256i *)&v72[16] = v71;
      *(_OWORD *)v72 = v70;
      *(_OWORD *)&v72[48] = v45;
      *(_QWORD *)&v72[64] = v46;
      v27 = v75;
      v67 = v75;
      sub_14047B3F0(&v52, v72);
      v67 = v27;
      sub_14149C500(&v70, v55);
      *(_QWORD *)&v72[40] = *(_QWORD *)&v68[16];
      *(_OWORD *)&v72[24] = *(_OWORD *)v68;
      *(_QWORD *)&v72[16] = v71.m256i_i64[0];
      *(_OWORD *)&v71.m256i_u64[1] = *(_OWORD *)v68;
      v71.m256i_i64[3] = *(_QWORD *)&v68[16];
      sub_140009030(&v43);
      v44 = v71;
      v43 = v70;
      v28 = v65;
    }
    v29 = v57;
    *(_QWORD *)&v20 = v69;
    if ( (_QWORD)v57 != v28 )
    {
      if ( v76 != a4 || (v30 = sub_1416847B0(v69, a3, a4), *(_QWORD *)&v20 = v69, v30) )
      {
        v65 = v29;
        v81 = 1;
        sub_1404BC810((unsigned int)v72, v56, DWORD2(v56), a3, a4);
        v25 = *(_QWORD *)&v72[8];
        v15 = *(_QWORD *)v72;
        *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[16];
        if ( *(_QWORD *)v72 != -1 )
        {
          v12 = *(_QWORD *)&v72[24];
LABEL_39:
          v14 = *(_QWORD *)&v72[40];
          v76 = *(_QWORD *)&v72[32];
          v50 = *(_OWORD *)&v72[48];
          *(_OWORD *)v51 = *(_OWORD *)&v72[64];
          *(_OWORD *)&v51[16] = *(_OWORD *)&v72[80];
          v24 = 1;
          v78 = -1;
          goto LABEL_41;
        }
        *(_QWORD *)v68 = *(_QWORD *)&v72[8];
        *(_OWORD *)&v68[8] = *(_OWORD *)&v72[16];
        v66 = *(_QWORD *)&v72[8];
        sub_14149C500(&v70, &v55[48]);
        *((_QWORD *)&v20 + 1) = v79;
        v75 = v25;
        v71.m256i_i64[1] = v65;
        v71.m256i_i64[2] = *((_QWORD *)&v57 + 1);
        v71.m256i_i16[12] = v58;
        sub_14149C500(&v45, v68);
        *(__m256i *)&v72[16] = v71;
        *(_OWORD *)v72 = v70;
        *(_OWORD *)&v72[48] = v45;
        *(_QWORD *)&v72[64] = v46;
        v31 = v75;
        v66 = v75;
        sub_14047B3F0(&v52, v72);
        v66 = v31;
        sub_14149C500(v72, &v55[48]);
        v83.m256i_i64[3] = *(_QWORD *)&v68[16];
        *(_OWORD *)&v83.m256i_u64[1] = *(_OWORD *)v68;
        v34 = *(_OWORD *)v72;
        v83.m256i_i64[0] = *(_QWORD *)&v72[16];
        sub_140009030(&v48);
        v49 = v83;
        v48 = v34;
        *(_QWORD *)&v20 = v69;
      }
    }
    if ( !v54 )
    {
      v14 = -1;
      v24 = 0;
      v25 = v74;
      v12 = v20;
      v15 = v77;
      goto LABEL_41;
    }
    v81 = 1;
    sub_1404A5FF0((unsigned int)v72, v8, v9, v53, v54);
    v15 = *(_QWORD *)v72;
    if ( *(_QWORD *)v72 == -1 )
    {
      v17 = v59;
      v15 = v60;
      v79 = v61;
      v77 = v62;
      v13 = *((_QWORD *)&v63 + 1);
      v74 = v63;
      sub_1414734D0(v72, v8, v9);
      *(__m256i *)&v51[24] = v44;
      *(_OWORD *)&v51[8] = v43;
      *(_OWORD *)&v51[56] = v48;
      *(__m256i *)&v51[72] = v49;
      v14 = *(_QWORD *)v72;
      v50 = *(_OWORD *)&v72[8];
      *(_QWORD *)v51 = *(_QWORD *)&v72[24];
      sub_14043B770(&v52);
      sub_14043F1F0(v55);
      v18 = v64;
      v11 = v77;
      v12 = v74;
      if ( v17 != -1 )
      {
LABEL_12:
        *(_QWORD *)&v55[16] = v79;
        *(_QWORD *)&v55[24] = v11;
        *(_QWORD *)&v55[32] = v12;
        *(_QWORD *)&v72[120] = *(_QWORD *)&v51[96];
        *(_OWORD *)&v72[104] = *(_OWORD *)&v51[80];
        *(_OWORD *)&v72[88] = *(_OWORD *)&v51[64];
        *(_OWORD *)&v72[72] = *(_OWORD *)&v51[48];
        *(_OWORD *)&v72[56] = *(_OWORD *)&v51[32];
        *(_OWORD *)&v72[40] = *(_OWORD *)&v51[16];
        *(_OWORD *)&v72[24] = *(_OWORD *)v51;
        *(_OWORD *)&v72[8] = v50;
        *(_QWORD *)v55 = v17;
        *(_QWORD *)&v55[8] = v15;
        *(_QWORD *)&v55[40] = v13;
        *(_QWORD *)v72 = v14;
        sub_14149C500(&v70, v18);
        *(_OWORD *)&v36[56] = *(_OWORD *)&v55[32];
        *(_OWORD *)&v36[40] = *(_OWORD *)&v55[16];
        *(_OWORD *)&v36[24] = *(_OWORD *)v55;
        *(_OWORD *)&v36[72] = *(_OWORD *)v72;
        *(_OWORD *)&v36[88] = *(_OWORD *)&v72[16];
        v37 = *(_OWORD *)&v72[32];
        v38 = *(_OWORD *)&v72[48];
        v39 = *(_OWORD *)&v72[64];
        v40 = *(_OWORD *)&v72[80];
        v41 = *(_OWORD *)&v72[96];
        v42 = *(_OWORD *)&v72[112];
        *(_QWORD *)&v36[16] = v71.m256i_i64[0];
        *(_OWORD *)v36 = v70;
        return sub_141684120(a1, v36, 200);
      }
LABEL_48:
      result = v79;
      goto LABEL_49;
    }
    v25 = *(_QWORD *)&v72[8];
    v12 = *(_QWORD *)&v72[24];
    *((_QWORD *)&v20 + 1) = *(_QWORD *)&v72[16];
    goto LABEL_39;
  }
  *(_QWORD *)v72 = a2;
  *(_QWORD *)&v72[8] = sub_1400015F0;
  *(_QWORD *)&v72[16] = v35;
  *(_QWORD *)&v72[24] = sub_14041F680;
  sub_14149C0F0(&v36[8], &unk_141757E4B, v72);
  result = *(_QWORD *)&v36[8];
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v36[80];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v36[64];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v36[48];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v36[32];
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v36[16];
  *(_QWORD *)(a1 + 8) = 10;
  *(_QWORD *)(a1 + 16) = result;
LABEL_50:
  *(_QWORD *)a1 = -1;
  return result;
}
