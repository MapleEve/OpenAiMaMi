// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e25810 | name sub_140E25810
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E25810(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _WORD *v9; // rax
  __int64 v10; // rcx
  signed __int64 v11; // rbx
  __int64 v12; // r12
  const __m128i *v13; // r15
  __m128i *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  void *v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 v30; // rbx
  __int64 v31; // r12
  const __m128i *v32; // r15
  __m128i *v33; // rax
  __int64 v34; // r14
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm0
  _OWORD *v38; // rax
  const __m128i *v39; // r14
  signed __int64 v40; // rdx
  signed __int64 v41; // rbx
  __int64 v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r12
  __m128i *v46; // rax
  __int64 v47; // r15
  __int64 v48; // rcx
  _QWORD *v49; // rax
  const __m128i *v50; // r12
  unsigned __int64 v51; // rbx
  __int64 v52; // r14
  __int64 *v53; // r15
  __int64 v54; // rdx
  _OWORD v55[2]; // [rsp+30h] [rbp-50h] BYREF
  __m256i *v56; // [rsp+50h] [rbp-30h] BYREF
  __int128 v57; // [rsp+58h] [rbp-28h] BYREF
  __int64 v58; // [rsp+68h] [rbp-18h]
  __int64 v59; // [rsp+70h] [rbp-10h]
  __int128 v60; // [rsp+78h] [rbp-8h] BYREF
  __int64 v61; // [rsp+88h] [rbp+8h]
  __int64 *v62; // [rsp+90h] [rbp+10h]
  __int128 v63; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v64; // [rsp+A8h] [rbp+28h]
  __int64 v65; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v66; // [rsp+B8h] [rbp+38h]
  unsigned __int64 v67; // [rsp+C8h] [rbp+48h]
  __m256i v68; // [rsp+D0h] [rbp+50h] BYREF
  __m256i v69; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v70; // [rsp+110h] [rbp+90h]
  char v71; // [rsp+11Ah] [rbp+9Ah]
  char v72; // [rsp+11Bh] [rbp+9Bh]
  char v73; // [rsp+11Ch] [rbp+9Ch]
  char v74; // [rsp+11Dh] [rbp+9Dh]
  char v75; // [rsp+11Eh] [rbp+9Eh]
  char v76; // [rsp+11Fh] [rbp+9Fh]
  __int64 v77; // [rsp+120h] [rbp+A0h]

  v77 = -2;
  if ( *(_BYTE *)(a2 + 477) )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    v4 = *a3;
    result = 0x8000000000000002uLL;
    if ( *a3 >= (__int64)0x8000000000000002uLL )
    {
      if ( v4 )
        return sub_140001660(a3[1], v4, 1);
    }
    return result;
  }
  v62 = a3;
  *(_QWORD *)&v60 = 0;
  *((_QWORD *)&v60 + 1) = 1;
  v61 = 0;
  sub_140E24770(a2, &v60);
  sub_140E334F0(a2, &v60);
  sub_140E30B70(a2, &v60);
  sub_140E267F0(a2, &v60);
  LOBYTE(v7) = __OFSUB__(0, *v62);
  sub_140E28DF0(a2, &v60, v7);
  *(_QWORD *)&v63 = 0;
  v64 = 0;
  nullsub_1(v8);
  v9 = (_WORD *)sub_140001650(2, 1);
  if ( !v9 )
    sub_141938D2B(1, 2);
  *v9 = 25705;
  v65 = 2;
  *(_QWORD *)&v66 = v9;
  *((_QWORD *)&v66 + 1) = 2;
  v11 = *(_QWORD *)(a2 + 120);
  v70 = (__int64)v9;
  if ( v11 < 0 )
  {
    v12 = 0;
    goto LABEL_8;
  }
  if ( v11 )
  {
    v13 = *(const __m128i **)(a2 + 112);
    nullsub_1(v10);
    v12 = 1;
    v14 = (__m128i *)sub_140001650(v11, 1);
    if ( !v14 )
    {
LABEL_8:
      v74 = 1;
      sub_141938D2B(v12, v11);
    }
    v15 = (__int64)v14;
    sub_1418F44E0(v14, v13, v11);
  }
  else
  {
    v15 = 1;
  }
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = v11;
  v69.m256i_i64[2] = v15;
  v69.m256i_i64[3] = v11;
  v74 = 0;
  sub_140E72AA0(&v68, &v63, &v65, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v16);
  v17 = sub_140001650(6, 1);
  if ( !v17 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v17 + 4) = 29795;
  *(_DWORD *)v17 = 1701470831;
  v65 = 6;
  v59 = v17;
  *(_QWORD *)&v66 = v17;
  *((_QWORD *)&v66 + 1) = 6;
  nullsub_1(v18);
  v19 = (_QWORD *)sub_140001650(8, 1);
  v70 = (__int64)v19;
  if ( !v19 )
    sub_141938D2B(1, 8);
  *v19 = 0x65736E6F70736572LL;
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = 8;
  v69.m256i_i64[2] = (__int64)v19;
  v69.m256i_i64[3] = 8;
  sub_140E72AA0(&v68, &v63, &v65, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v20);
  v21 = (void *)sub_140001650(10, 1);
  if ( !v21 )
    sub_141938D2B(1, 10);
  qmemcpy(v21, "created_at", 10);
  v65 = 10;
  *(_QWORD *)&v66 = v21;
  *((_QWORD *)&v66 + 1) = 10;
  v22 = *(_QWORD *)(a2 + 464);
  v69.m256i_i8[0] = 2;
  v69.m256i_i64[1] = v22 >> 63;
  v69.m256i_i64[2] = v22;
  sub_140E72AA0(&v68, &v63, &v65, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v23);
  v24 = sub_140001650(6, 1);
  if ( !v24 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v24 + 4) = 29557;
  *(_DWORD *)v24 = 1952543859;
  v65 = 6;
  v59 = v24;
  *(_QWORD *)&v66 = v24;
  *((_QWORD *)&v66 + 1) = 6;
  nullsub_1(v25);
  v26 = sub_140001650(9, 1);
  v70 = v26;
  if ( !v26 )
    sub_141938D2B(1, 9);
  *(_QWORD *)v26 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v26 + 8) = 100;
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = 9;
  v69.m256i_i64[2] = v26;
  v69.m256i_i64[3] = 9;
  sub_140E72AA0(&v68, &v63, &v65, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v27);
  v28 = sub_140001650(5, 1);
  if ( !v28 )
    sub_141938D2B(1, 5);
  *(_BYTE *)(v28 + 4) = 108;
  *(_DWORD *)v28 = 1701080941;
  v65 = 5;
  *(_QWORD *)&v66 = v28;
  *((_QWORD *)&v66 + 1) = 5;
  v30 = *(_QWORD *)(a2 + 96);
  v70 = v28;
  if ( v30 < 0 )
  {
    v31 = 0;
    goto LABEL_29;
  }
  if ( v30 )
  {
    v32 = *(const __m128i **)(a2 + 88);
    nullsub_1(v29);
    v31 = 1;
    v33 = (__m128i *)sub_140001650(v30, 1);
    if ( !v33 )
    {
LABEL_29:
      v73 = 1;
      sub_141938D2B(v31, v30);
    }
    v34 = (__int64)v33;
    sub_1418F44E0(v33, v32, v30);
  }
  else
  {
    v34 = 1;
  }
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = v30;
  v69.m256i_i64[2] = v34;
  v69.m256i_i64[3] = v30;
  v73 = 0;
  sub_140E72AA0(&v68, &v63, &v65, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v35);
  v36 = sub_140001650(6, 1);
  if ( !v36 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v36 + 4) = 29813;
  *(_DWORD *)v36 = 1886680431;
  v65 = 6;
  v70 = v36;
  *(_QWORD *)&v66 = v36;
  *((_QWORD *)&v66 + 1) = 6;
  v76 = 1;
  sub_140C0FE40(&v69, a2 + 128);
  if ( v69.m256i_i8[0] == -1 )
  {
    v68.m256i_i64[0] = v69.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v68,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A53470);
  }
  v68 = v69;
  v76 = 0;
  sub_140E72AA0(&v69, &v63, &v65, &v68);
  if ( v69.m256i_i8[0] != -1 )
    sub_140DF44E0(&v69);
  v66 = v63;
  v67 = v64;
  LOBYTE(v65) = 5;
  sub_140C17E70(v55, (__int64 *)a2);
  if ( LOBYTE(v55[0]) != 0xFF )
  {
    v72 = 1;
    v70 = sub_141641AF0(aUsage_5, 5, &v65);
    sub_140DF44E0(v70);
    v37 = v55[0];
    v38 = (_OWORD *)v70;
    *(_OWORD *)(v70 + 16) = v55[1];
    *v38 = v37;
  }
  v39 = (const __m128i *)sub_140164630((__int64)v62, (__int64)&v65);
  v41 = v40;
  *(_QWORD *)&v57 = 0;
  v58 = 0;
  nullsub_1(v42);
  v43 = (_DWORD *)sub_140001650(4, 1);
  if ( !v43 )
    sub_141938D2B(1, 4);
  *v43 = 1701869940;
  *(_QWORD *)&v63 = 4;
  *((_QWORD *)&v63 + 1) = v43;
  v64 = 4;
  v70 = (__int64)v43;
  if ( v41 < 0 )
  {
    v45 = 0;
    goto LABEL_45;
  }
  if ( v41 )
  {
    nullsub_1(v44);
    v45 = 1;
    v46 = (__m128i *)sub_140001650(v41, 1);
    if ( !v46 )
    {
LABEL_45:
      v71 = 1;
      sub_141938D2B(v45, v41);
    }
    v47 = (__int64)v46;
    sub_1418F44E0(v46, v39, v41);
  }
  else
  {
    v47 = 1;
  }
  v69.m256i_i8[0] = 3;
  v69.m256i_i64[1] = v41;
  v69.m256i_i64[2] = v47;
  v69.m256i_i64[3] = v41;
  v71 = 0;
  sub_140E72AA0(&v68, &v57, &v63, &v69);
  if ( v68.m256i_i8[0] != -1 )
    sub_140DF44E0(&v68);
  nullsub_1(v48);
  v49 = (_QWORD *)sub_140001650(8, 1);
  if ( !v49 )
    sub_141938D2B(1, 8);
  *v49 = 0x65736E6F70736572LL;
  *(_QWORD *)&v63 = 8;
  v70 = (__int64)v49;
  *((_QWORD *)&v63 + 1) = v49;
  v64 = 8;
  v75 = 1;
  sub_140412420(&v69, &v65);
  if ( v69.m256i_i8[0] == -1 )
  {
    v68.m256i_i64[0] = v69.m256i_i64[1];
    sub_141939040(
      (unsigned int)aCalledResultUn_16,
      43,
      (unsigned int)&v68,
      (unsigned int)&off_141A52FE8,
      (__int64)&off_141A534A0);
  }
  v68 = v69;
  v75 = 0;
  sub_140E72AA0(&v69, &v57, &v63, &v68);
  if ( v69.m256i_i8[0] != -1 )
    sub_140DF44E0(&v69);
  *(_OWORD *)&v68.m256i_u64[1] = v57;
  v68.m256i_i64[3] = v58;
  v68.m256i_i8[0] = 5;
  *(_QWORD *)&v57 = v39;
  *((_QWORD *)&v57 + 1) = v41;
  v56 = &v68;
  v69.m256i_i64[0] = (__int64)&v57;
  v69.m256i_i64[1] = (__int64)sub_140186EE0;
  v69.m256i_i64[2] = (__int64)&v56;
  v69.m256i_i64[3] = (__int64)sub_1404806B0;
  sub_1416ABFD0(&v63, &unk_141A548D8, &v69);
  sub_140DF44E0(&v65);
  sub_140DF44E0(&v68);
  v50 = *((const __m128i **)&v63 + 1);
  v51 = v64;
  v52 = v61;
  if ( v64 > (__int64)v60 - v61 )
  {
    v70 = *((_QWORD *)&v63 + 1);
    sub_14190D590((unsigned int)&v60, v61, v64, 1, 1);
    v52 = v61;
    v53 = v62;
    v50 = (const __m128i *)v70;
    goto LABEL_58;
  }
  v53 = v62;
  if ( v64 )
LABEL_58:
    sub_1418F44E0((__m128i *)(v52 + *((_QWORD *)&v60 + 1)), v50, v51);
  v61 = v51 + v52;
  if ( (_QWORD)v63 )
    sub_140001660(v50, v63, 1);
  *(_BYTE *)(a2 + 477) = 1;
  a1[2] = v61;
  *(_OWORD *)a1 = v60;
  v54 = *v53;
  result = 0x8000000000000002uLL;
  if ( *v53 >= (__int64)0x8000000000000002uLL && v54 )
    return sub_140001660(v53[1], v54, 1);
  return result;
}
