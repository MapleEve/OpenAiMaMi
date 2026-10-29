// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e322d0 | name sub_140E322D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E322D0(__int64 a1, const __m128i *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v7; // r15
  __int64 v8; // rcx
  __m128i *v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rax
  __int64 v19; // rcx
  __m128i *v20; // rax
  __m128i *v21; // rbx
  const __m128i *v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v26; // rcx
  signed __int64 v27; // r15
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  __m128i *v34; // rax
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _WORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r12
  __m128i *v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rcx
  _DWORD *v46; // rax
  const __m128i *v47; // rbx
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rax
  _QWORD v51[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v52; // [rsp+48h] [rbp-38h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h]
  const __m128i *v54; // [rsp+60h] [rbp-20h]
  __int64 v55; // [rsp+68h] [rbp-18h]
  _WORD *v56; // [rsp+70h] [rbp-10h]
  __m128i *v57; // [rsp+78h] [rbp-8h]
  const __m128i *v58; // [rsp+80h] [rbp+0h]
  char v59; // [rsp+8Fh] [rbp+Fh] BYREF
  __int128 v60; // [rsp+90h] [rbp+10h] BYREF
  __int64 v61; // [rsp+A0h] [rbp+20h]
  const __m128i *v62; // [rsp+A8h] [rbp+28h]
  const __m128i *v63; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v64; // [rsp+B8h] [rbp+38h]
  __int64 v65; // [rsp+C8h] [rbp+48h]
  __int128 v66; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v67; // [rsp+E0h] [rbp+60h]
  _BYTE v68[24]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v69; // [rsp+100h] [rbp+80h]
  char v70; // [rsp+10Dh] [rbp+8Dh]
  char v71; // [rsp+10Eh] [rbp+8Eh]
  char v72; // [rsp+10Fh] [rbp+8Fh]
  __int64 v73; // [rsp+110h] [rbp+90h]

  v73 = -2;
  v54 = a2;
  if ( *(_QWORD *)(a1 + 184) != -1 )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( a3 <= *(_QWORD *)(a1 + 208) - v7 )
      goto LABEL_3;
    goto LABEL_64;
  }
  v57 = (__m128i *)*(unsigned int *)(a1 + 472);
  *(_DWORD *)(a1 + 472) = (_DWORD)v57 + 1;
  sub_141568C20(v68);
  v66 = *(_OWORD *)v68;
  v63 = nullptr;
  v64 = 1u;
  *(_QWORD *)&v68[16] = 1610612768;
  *(_QWORD *)v68 = &v63;
  *(_QWORD *)&v68[8] = &off_141A54A20;
  if ( (unsigned __int8)sub_141569DC0(&v66, v68) )
    sub_141939040(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v59,
      (unsigned int)&unk_141A53038,
      (__int64)&off_141A54AD8);
  v62 = v63;
  v55 = v64;
  if ( *((_QWORD *)&v64 + 1) <= 0xCu )
  {
    if ( *((_QWORD *)&v64 + 1) != 12 )
LABEL_26:
      sub_141938F40(v64, DWORD2(v64), 0, 12, (__int64)&off_141A537D8);
  }
  else if ( *(char *)(v64 + 12) < -64 )
  {
    goto LABEL_26;
  }
  *(_QWORD *)&v60 = v64;
  *((_QWORD *)&v60 + 1) = 12;
  v63 = (const __m128i *)&v60;
  *(_QWORD *)&v64 = sub_140186EE0;
  sub_1416ABFD0(v68, &unk_141A537F0, &v63);
  if ( v62 )
    sub_140001660(v55, v62, 1);
  v62 = *(const __m128i **)&v68[8];
  v55 = *(_QWORD *)v68;
  v27 = *(_QWORD *)&v68[16];
  *(_QWORD *)&v52 = 0;
  v53 = 0;
  nullsub_1(v26);
  v28 = (_DWORD *)sub_140001650(4, 1);
  if ( !v28 )
    sub_141938D2B(1, 4);
  *v28 = 1701869940;
  *(_QWORD *)&v66 = 4;
  v56 = v28;
  *((_QWORD *)&v66 + 1) = v28;
  v67 = 4;
  nullsub_1(v29);
  v30 = (__m128i *)sub_140001650(26, 1);
  v58 = v30;
  if ( !v30 )
    sub_141938D2B(1, 26);
  qmemcpy(v30, "response.output_item.added", 26);
  v68[0] = 3;
  *(_QWORD *)&v68[8] = 26;
  *(_QWORD *)&v68[16] = v30;
  v69 = 26;
  sub_140E72AA0(&v63, &v52, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v31);
  v32 = (void *)sub_140001650(12, 1);
  if ( !v32 )
    sub_141938D2B(1, 12);
  qmemcpy(v32, "output_index", 12);
  *(_QWORD *)&v66 = 12;
  *((_QWORD *)&v66 + 1) = v32;
  v67 = 12;
  v68[0] = 2;
  *(_QWORD *)&v68[8] = 0;
  *(_QWORD *)&v68[16] = v57;
  sub_140E72AA0(&v63, &v52, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v33);
  v34 = (__m128i *)sub_140001650(4, 1);
  if ( !v34 )
    sub_141938D2B(1, 4);
  v34->m128i_i32[0] = 1835365481;
  v51[0] = 4;
  v58 = v34;
  v51[1] = v34;
  v51[2] = 4;
  *(_QWORD *)&v60 = 0;
  v61 = 0;
  nullsub_1(v35);
  v36 = (_DWORD *)sub_140001650(4, 1);
  if ( !v36 )
    sub_141938D2B(1, 4);
  *v36 = 1701869940;
  *(_QWORD *)&v66 = 4;
  *((_QWORD *)&v66 + 1) = v36;
  v67 = 4;
  nullsub_1(v37);
  v38 = sub_140001650(9, 1);
  v56 = (_WORD *)v38;
  if ( !v38 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v38 = 0x6E696E6F73616572LL;
  *(_BYTE *)(v38 + 8) = 103;
  v68[0] = 3;
  *(_QWORD *)&v68[8] = 9;
  *(_QWORD *)&v68[16] = v38;
  v69 = 9;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v39);
  v40 = (_WORD *)sub_140001650(2, 1);
  if ( !v40 )
    sub_141938D2B(1, 2);
  *v40 = 25705;
  *(_QWORD *)&v66 = 2;
  *((_QWORD *)&v66 + 1) = v40;
  v67 = 2;
  v56 = v40;
  if ( v27 < 0 )
  {
    v42 = 0;
    goto LABEL_45;
  }
  if ( v27 )
  {
    nullsub_1(v41);
    v42 = 1;
    v43 = (__m128i *)sub_140001650(v27, 1);
    if ( !v43 )
    {
LABEL_45:
      v71 = 1;
      sub_141938D2B(v42, v27);
    }
    v44 = (__int64)v43;
    sub_1418F44E0(v43, v62, v27);
  }
  else
  {
    v44 = 1;
  }
  v68[0] = 3;
  *(_QWORD *)&v68[8] = v27;
  *(_QWORD *)&v68[16] = v44;
  v69 = v27;
  v71 = 0;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v45);
  v46 = (_DWORD *)sub_140001650(7, 1);
  if ( !v46 )
    sub_141938D2B(1, 7);
  *(_DWORD *)((char *)v46 + 3) = 2037539181;
  *v46 = 1835890035;
  *(_QWORD *)&v66 = 7;
  *((_QWORD *)&v66 + 1) = v46;
  v67 = 7;
  *(_QWORD *)&v68[8] = 0;
  *(_QWORD *)&v68[16] = 8;
  v69 = 0;
  v68[0] = 4;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  *(_OWORD *)&v68[8] = v60;
  v69 = v61;
  v68[0] = 5;
  v70 = 0;
  sub_140E72AA0(&v63, &v52, v51, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  v64 = v52;
  v65 = v53;
  LOBYTE(v63) = 5;
  *(_QWORD *)&v60 = &xmmword_141A536B0;
  *((_QWORD *)&v60 + 1) = 26;
  v51[0] = &v63;
  *(_QWORD *)v68 = &v60;
  *(_QWORD *)&v68[8] = sub_140186EE0;
  *(_QWORD *)&v68[16] = v51;
  v69 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v66, &unk_141A548D8, v68);
  v47 = *((const __m128i **)&v66 + 1);
  v48 = v67;
  v49 = a4[2];
  if ( v67 > *a4 - v49 )
  {
    v58 = *((const __m128i **)&v66 + 1);
    sub_14190D590((_DWORD)a4, v49, v67, 1, 1);
    v49 = a4[2];
    v47 = v58;
  }
  else if ( !v67 )
  {
    goto LABEL_60;
  }
  sub_1418F44E0((__m128i *)(v49 + a4[1]), v47, v48);
LABEL_60:
  a4[2] = v48 + v49;
  if ( (_QWORD)v66 )
    sub_140001660(v47, v66, 1);
  v72 = 1;
  sub_140DF44E0(&v63);
  v50 = v55;
  *(_QWORD *)(a1 + 184) = v55;
  *(_QWORD *)(a1 + 192) = v62;
  *(_QWORD *)(a1 + 200) = v27;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 232) = (_DWORD)v57;
  if ( v50 == -1 )
  {
    v72 = 0;
    sub_141938FE0(&unk_141A53710, 8, &off_141A537F8);
  }
  v7 = 0;
  if ( a3 )
  {
LABEL_64:
    sub_14190D590(a1 + 208, v7, a3, 1, 1);
    v7 = *(_QWORD *)(a1 + 224);
  }
LABEL_3:
  sub_1418F44E0((__m128i *)(v7 + *(_QWORD *)(a1 + 216)), v54, a3);
  *(_QWORD *)(a1 + 224) = a3 + v7;
  *(_QWORD *)&v60 = 0;
  v61 = 0;
  nullsub_1(v8);
  v9 = (__m128i *)sub_140001650(4, 1);
  if ( !v9 )
    sub_141938D2B(1, 4);
  v9->m128i_i32[0] = 1701869940;
  *(_QWORD *)&v66 = 4;
  v62 = v9;
  *((_QWORD *)&v66 + 1) = v9;
  v67 = 4;
  nullsub_1(v10);
  v11 = (__m128i *)sub_140001650(37, 1);
  v57 = v11;
  if ( !v11 )
    sub_141938D2B(1, 37);
  qmemcpy(v11, "response.reasoning_summary_text.delta", 37);
  v68[0] = 3;
  *(_QWORD *)&v68[8] = 37;
  *(_QWORD *)&v68[16] = v11;
  v69 = 37;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v12);
  v13 = (void *)sub_140001650(12, 1);
  if ( !v13 )
    sub_141938D2B(1, 12);
  qmemcpy(v13, "output_index", 12);
  *(_QWORD *)&v66 = 12;
  *((_QWORD *)&v66 + 1) = v13;
  v67 = 12;
  v14 = *(unsigned int *)(a1 + 232);
  v68[0] = 2;
  *(_QWORD *)&v68[8] = 0;
  *(_QWORD *)&v68[16] = v14;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v15);
  v16 = (void *)sub_140001650(13, 1);
  if ( !v16 )
    sub_141938D2B(1, 13);
  qmemcpy(v16, "summary_index", 13);
  *(_QWORD *)&v66 = 13;
  *((_QWORD *)&v66 + 1) = v16;
  v67 = 13;
  v68[0] = 2;
  *(_OWORD *)&v68[8] = 0;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  nullsub_1(v17);
  v18 = (__m128i *)sub_140001650(5, 1);
  if ( !v18 )
    sub_141938D2B(1, 5);
  v18->m128i_i8[4] = 97;
  v18->m128i_i32[0] = 1953260900;
  *(_QWORD *)&v66 = 5;
  v62 = v18;
  *((_QWORD *)&v66 + 1) = v18;
  v67 = 5;
  nullsub_1(v19);
  v20 = (__m128i *)sub_140001650(a3, 1);
  v57 = v20;
  if ( !v20 )
    sub_141938D2B(1, a3);
  v21 = v20;
  sub_1418F44E0(v20, v54, a3);
  v68[0] = 3;
  *(_QWORD *)&v68[8] = a3;
  *(_QWORD *)&v68[16] = v21;
  v69 = a3;
  sub_140E72AA0(&v63, &v60, &v66, v68);
  if ( (_BYTE)v63 != 0xFF )
    sub_140DF44E0(&v63);
  v64 = v60;
  v65 = v61;
  LOBYTE(v63) = 5;
  *(_QWORD *)&v60 = &xmmword_141A53810;
  *((_QWORD *)&v60 + 1) = 37;
  v51[0] = &v63;
  *(_QWORD *)v68 = &v60;
  *(_QWORD *)&v68[8] = sub_140186EE0;
  *(_QWORD *)&v68[16] = v51;
  v69 = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v66, &unk_141A548D8, v68);
  v22 = *((const __m128i **)&v66 + 1);
  v23 = v67;
  v24 = a4[2];
  if ( v67 > *a4 - v24 )
  {
    v54 = *((const __m128i **)&v66 + 1);
    sub_14190D590((_DWORD)a4, v24, v67, 1, 1);
    v24 = a4[2];
    v22 = v54;
  }
  else if ( !v67 )
  {
    goto LABEL_20;
  }
  sub_1418F44E0((__m128i *)(v24 + a4[1]), v22, v23);
LABEL_20:
  a4[2] = v23 + v24;
  if ( (_QWORD)v66 )
    sub_140001660(v22, v66, 1);
  return sub_140DF44E0(&v63);
}
