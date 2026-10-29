// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x1402a8520 | name sub_1402A8520
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_1402A8520(__m128i **a1, __int64 a2)
{
  __m128i *v2; // r14
  char *v3; // r12
  __int64 v4; // r8
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  __m128i *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rcx
  __m128i *v12; // rbx
  const __m128i *v13; // r13
  __int64 v14; // r14
  __m128i *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __m128i *v21; // r13
  const __m128i *v22; // r14
  char v23; // r12
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // al
  __int64 v33; // rcx
  __int64 v34; // rcx
  __m128i *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  _QWORD *result; // rax
  __int64 v39; // [rsp+20h] [rbp-60h]
  _BYTE v40[31]; // [rsp+29h] [rbp-57h]
  __int128 v41; // [rsp+90h] [rbp+10h]
  _BYTE v42[23]; // [rsp+A0h] [rbp+20h]
  __int128 v43; // [rsp+C0h] [rbp+40h]
  _BYTE v44[23]; // [rsp+D0h] [rbp+50h]
  _QWORD v45[3]; // [rsp+E8h] [rbp+68h] BYREF
  __m128i *v46; // [rsp+100h] [rbp+80h]
  __m128i *v47; // [rsp+108h] [rbp+88h]
  __m128i **v48; // [rsp+110h] [rbp+90h]
  unsigned __int64 v49; // [rsp+118h] [rbp+98h]
  __int64 v50; // [rsp+120h] [rbp+A0h]
  __int64 v51; // [rsp+128h] [rbp+A8h] BYREF
  __m128i *v52; // [rsp+130h] [rbp+B0h]
  _BYTE v53[17]; // [rsp+138h] [rbp+B8h]
  _BYTE v54[23]; // [rsp+149h] [rbp+C9h]
  __int16 v55; // [rsp+160h] [rbp+E0h]
  char v56; // [rsp+162h] [rbp+E2h]
  __int64 v57; // [rsp+168h] [rbp+E8h]
  _QWORD *v58; // [rsp+170h] [rbp+F0h]
  __int64 v59; // [rsp+178h] [rbp+F8h] BYREF
  const __m128i *v60; // [rsp+180h] [rbp+100h] BYREF
  _BYTE v61[17]; // [rsp+188h] [rbp+108h]
  _BYTE v62[23]; // [rsp+199h] [rbp+119h]
  __int64 v63; // [rsp+1B0h] [rbp+130h]
  __int128 v64; // [rsp+1D0h] [rbp+150h] BYREF
  _BYTE v65[17]; // [rsp+1E0h] [rbp+160h]
  _BYTE v66[23]; // [rsp+1F1h] [rbp+171h]
  __int16 v67; // [rsp+208h] [rbp+188h]
  char v68; // [rsp+20Ah] [rbp+18Ah]
  __int128 v69; // [rsp+210h] [rbp+190h] BYREF
  __int64 v70; // [rsp+220h] [rbp+1A0h]
  __m128i *v71; // [rsp+228h] [rbp+1A8h]
  __int128 v72; // [rsp+230h] [rbp+1B0h] BYREF
  _BYTE v73[17]; // [rsp+240h] [rbp+1C0h]
  _BYTE v74[23]; // [rsp+251h] [rbp+1D1h]
  __int16 v75; // [rsp+268h] [rbp+1E8h]
  char v76; // [rsp+26Ah] [rbp+1EAh]
  const __m128i *v77; // [rsp+270h] [rbp+1F0h]
  char v78; // [rsp+27Bh] [rbp+1FBh]
  char v79; // [rsp+27Ch] [rbp+1FCh]
  char v80; // [rsp+27Dh] [rbp+1FDh]
  char v81; // [rsp+27Eh] [rbp+1FEh]
  char v82; // [rsp+27Fh] [rbp+1FFh]
  __int64 v83; // [rsp+280h] [rbp+200h]

  v83 = -2;
  v2 = *a1;
  v3 = (char *)a1[1];
  v58 = *(_QWORD **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v2 != (__m128i *)v3 )
  {
    v48 = *(__m128i ***)(a2 + 16);
    v46 = a1[2];
    v47 = a1[3];
    v5 = (unsigned __int64)(v3 - (char *)v2) >> 5;
    v6 = 0;
    while ( 1 )
    {
      v57 = v4;
      *(_QWORD *)&v69 = 0;
      v70 = 0;
      nullsub_1(a1);
      v7 = (__m128i *)sub_140001650(4, 1);
      if ( !v7 )
        sub_141938D2B(1, 4);
      v7->m128i_i32[0] = 1752457584;
      v51 = 4;
      v71 = v7;
      v52 = v7;
      *(_QWORD *)v53 = 4;
      v8 = v2[2 * v6].m128i_i64[1];
      v9 = v2[2 * v6 + 1].m128i_i64[0];
      sub_1416AB5A0(&v59, v8, v9);
      v10 = v46->m128i_i64[1];
      v39 = v46[1].m128i_i64[0];
      v77 = v60;
      sub_14021D340((__int64)&v72, v60, *(__int64 *)v61, v10, v39);
      if ( v59 > 0 )
        sub_140001660(v77, v59, 1);
      v12 = &v2[2 * v6];
      v77 = *((const __m128i **)&v72 + 1);
      v13 = *(const __m128i **)v73;
      if ( *(__int64 *)v73 < 0 )
      {
        v14 = 0;
LABEL_56:
        v78 = 1;
        sub_141938D2B(v14, v13);
      }
      v49 = v5;
      v71 = v2;
      if ( *(_QWORD *)v73 )
      {
        nullsub_1(v11);
        v14 = 1;
        v15 = (__m128i *)sub_140001650(v13, 1);
        if ( !v15 )
          goto LABEL_56;
        v16 = (__int64)v15;
        sub_1418F44E0(v15, v77, (unsigned __int64)v13);
      }
      else
      {
        v16 = 1;
      }
      LOBYTE(v59) = 3;
      v60 = v13;
      *(_QWORD *)v61 = v16;
      *(_QWORD *)&v61[8] = v13;
      v78 = 0;
      sub_140E72AA0(&v64, &v69, &v51, &v59);
      if ( (_BYTE)v64 != 0xFF )
        sub_14002F9D0(&v64);
      if ( (_QWORD)v72 )
        sub_140001660(v77, v72, 1);
      nullsub_1(v17);
      v18 = sub_140001650(6, 1);
      if ( !v18 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v18 + 4) = 25974;
      *(_DWORD *)v18 = 1769235297;
      v45[0] = 6;
      v45[1] = v18;
      v45[2] = 6;
      v19 = v47->m128i_i64[1];
      v20 = v47[1].m128i_i64[0];
      v82 = 1;
      sub_141681AF0(&v51, v8, v9);
      v82 = 1;
      sub_141681AF0(&v72, v19, v20);
      v21 = v52;
      v22 = *((const __m128i **)&v72 + 1);
      if ( v52 != *((__m128i **)&v72 + 1) )
        break;
      v23 = v53[0];
      if ( (_BYTE)v55 != (_BYTE)v75
        || HIBYTE(v55) != 2
        || HIBYTE(v75) != 2
        || v53[0] < 3u != v73[0] < 3u
        || (unsigned int)sub_1418F4B70(v51, v72) )
      {
        goto LABEL_24;
      }
      v24 = 1;
LABEL_29:
      LOBYTE(v59) = 1;
      BYTE1(v59) = v24;
      v82 = 0;
      sub_140E72AA0(&v64, &v69, v45, &v59);
      v2 = v71;
      v5 = v49;
      if ( (_BYTE)v64 != 0xFF )
        sub_14002F9D0(&v64);
      nullsub_1(v25);
      v26 = sub_140001650(6, 1);
      if ( !v26 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v26 + 4) = 29556;
      *(_DWORD *)v26 = 1936291941;
      *(_QWORD *)&v72 = 6;
      *((_QWORD *)&v72 + 1) = v26;
      *(_QWORD *)v73 = 6;
      v80 = 1;
      sub_141695A00(&v59, v8, v9);
      if ( (_DWORD)v59 == 2 )
      {
        if ( ((unsigned __int8)v60 & 3u) - 2 >= 2 && ((unsigned __int8)v60 & 3) != 0 )
        {
          v60 = (const __m128i *)((char *)v60 - 1);
          LOBYTE(v59) = 3;
          v80 = 1;
          sub_1416BCB00(&v60);
        }
        v27 = 0;
      }
      else
      {
        v27 = 1;
      }
      LOBYTE(v59) = 1;
      BYTE1(v59) = v27;
      v80 = 0;
      sub_140E72AA0(&v64, &v69, &v72, &v59);
      if ( (_BYTE)v64 != 0xFF )
        sub_14002F9D0(&v64);
      nullsub_1(v28);
      v29 = sub_140001650(5, 1);
      if ( !v29 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v29 + 4) = 115;
      *(_DWORD *)v29 = 1702132066;
      *(_QWORD *)&v72 = 5;
      *((_QWORD *)&v72 + 1) = v29;
      *(_QWORD *)v73 = 5;
      v30 = v12->m128i_i64[1];
      v31 = v12[1].m128i_i64[0];
      v79 = 1;
      sub_141695A00(&v59, v30, v31);
      if ( (_DWORD)v59 == 2 )
      {
        if ( ((unsigned __int8)v60 & 3u) - 2 >= 2 && ((unsigned __int8)v60 & 3) != 0 )
        {
          v60 = (const __m128i *)((char *)v60 - 1);
          LOBYTE(v59) = 3;
          v79 = 1;
          sub_1416BCB00(&v60);
        }
        v32 = 0;
        v33 = v50;
      }
      else
      {
        v33 = v63;
        v32 = 2;
      }
      LOBYTE(v59) = v32;
      v60 = nullptr;
      v50 = v33;
      *(_QWORD *)v61 = v33;
      v79 = 0;
      sub_140E72AA0(&v64, &v69, &v72, &v59);
      if ( (_BYTE)v64 != 0xFF )
        sub_14002F9D0(&v64);
      nullsub_1(v34);
      v35 = (__m128i *)sub_140001650(12, 1);
      if ( !v35 )
        sub_141938D2B(1, 12);
      qmemcpy(v35, "threadsTable", 12);
      v51 = 12;
      v77 = v35;
      v52 = v35;
      *(_QWORD *)v53 = 12;
      sub_140C32F60(&v59, v8, v9);
      v81 = 1;
      sub_140412420(&v64, &v59);
      if ( (_BYTE)v64 == 0xFF )
      {
        *(_QWORD *)&v72 = *((_QWORD *)&v64 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_2,
          43,
          (unsigned int)&v72,
          (unsigned int)&off_1419E6A30,
          (__int64)&off_1419E5C28);
      }
      *(_OWORD *)v73 = *(_OWORD *)v65;
      v72 = v64;
      v81 = 0;
      sub_140E72AA0(&v64, &v69, &v51, &v72);
      if ( (_BYTE)v64 != 0xFF )
        sub_14002F9D0(&v64);
      sub_14002F9D0(&v59);
      *(_QWORD *)&v40[23] = v70;
      *(_OWORD *)&v40[7] = v69;
      v36 = v57;
      v37 = 4 * v57;
      a1 = v48;
      LOBYTE(v48[v37]) = 5;
      *(_OWORD *)((char *)&a1[v37] + 1) = *(_OWORD *)v40;
      *(_OWORD *)&a1[v37 + 2] = *(_OWORD *)&v40[15];
      v4 = v36 + 1;
      if ( ++v6 == v5 )
        goto LABEL_54;
    }
    v23 = v53[0];
LABEL_24:
    if ( v23 != -1 )
    {
      *(_QWORD *)&v44[15] = *(_QWORD *)&v54[15];
      *(_OWORD *)v44 = *(_OWORD *)v54;
      v43 = *(_OWORD *)&v53[1];
    }
    *(_QWORD *)&v64 = v51;
    *((_QWORD *)&v64 + 1) = v21;
    v65[0] = v23;
    *(_QWORD *)&v66[15] = *(_QWORD *)&v44[15];
    *(_OWORD *)v66 = *(_OWORD *)v44;
    *(_OWORD *)&v65[1] = v43;
    v67 = v55;
    v68 = v56;
    if ( v73[0] != 0xFF )
    {
      *(_QWORD *)&v42[15] = *(_QWORD *)&v74[15];
      *(_OWORD *)v42 = *(_OWORD *)v74;
      v41 = *(_OWORD *)&v73[1];
    }
    v59 = v72;
    v60 = v22;
    v61[0] = v73[0];
    *(_QWORD *)&v62[15] = *(_QWORD *)&v42[15];
    *(_OWORD *)v62 = *(_OWORD *)v42;
    *(_OWORD *)&v61[1] = v41;
    LOWORD(v63) = v75;
    BYTE2(v63) = v76;
    v82 = 1;
    v24 = sub_140D2A460(&v64, &v59);
    goto LABEL_29;
  }
LABEL_54:
  result = v58;
  *v58 = v4;
  return result;
}
