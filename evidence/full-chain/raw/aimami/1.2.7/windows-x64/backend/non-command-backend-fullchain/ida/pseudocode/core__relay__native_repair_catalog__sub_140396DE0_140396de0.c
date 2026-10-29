// win 1.2.7 | module src/core/relay/native_repair_catalog.rs | ea 0x140396de0 | name sub_140396DE0
// win 1.2.7 | module src/core/relay/native_repair_catalog.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140396DE0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int128 *v5; // r15
  __int64 *v6; // rax
  __int128 *v7; // rbx
  __int64 v8; // r9
  const __m128i *v9; // r10
  signed __int64 v10; // rdi
  __int64 v11; // rdx
  signed __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r12
  bool v16; // zf
  int v17; // r8d
  char v18; // al
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  __m128i *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  void *v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r14
  __m128i *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  void *v42; // rax
  unsigned __int64 v43; // r14
  __int64 v44; // rdi
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdi
  _BYTE *v50; // rax
  _BYTE v52[31]; // [rsp+29h] [rbp-57h]
  char v53; // [rsp+D9h] [rbp+59h]
  _QWORD v54[3]; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+78h]
  __int128 v56; // [rsp+100h] [rbp+80h] BYREF
  __int64 v57; // [rsp+110h] [rbp+90h]
  _DWORD *v58; // [rsp+118h] [rbp+98h]
  __int64 *v59; // [rsp+120h] [rbp+A0h]
  __int64 v60; // [rsp+128h] [rbp+A8h]
  __int64 v61; // [rsp+130h] [rbp+B0h]
  unsigned __int64 v62; // [rsp+138h] [rbp+B8h]
  __int64 v63; // [rsp+140h] [rbp+C0h]
  __int64 v64; // [rsp+148h] [rbp+C8h]
  __int128 v65; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v66; // [rsp+160h] [rbp+E0h]
  _BYTE v67[7]; // [rsp+168h] [rbp+E8h]
  __int64 v68; // [rsp+170h] [rbp+F0h]
  __int64 v69; // [rsp+178h] [rbp+F8h]
  const __m128i *v70; // [rsp+180h] [rbp+100h]
  _BYTE *v71; // [rsp+188h] [rbp+108h]
  __int128 v72; // [rsp+190h] [rbp+110h] BYREF
  __int128 v73; // [rsp+1A0h] [rbp+120h]
  __int128 v74; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v75; // [rsp+1C0h] [rbp+140h]
  const __m128i *v76; // [rsp+1D0h] [rbp+150h]
  _DWORD *v77; // [rsp+1D8h] [rbp+158h]
  __int128 v78; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v79; // [rsp+1F0h] [rbp+170h] BYREF
  char v80; // [rsp+1FAh] [rbp+17Ah]
  char v81; // [rsp+1FBh] [rbp+17Bh]
  char v82; // [rsp+1FCh] [rbp+17Ch]
  char v83; // [rsp+1FDh] [rbp+17Dh]
  char v84; // [rsp+1FEh] [rbp+17Eh]
  char v85; // [rsp+1FFh] [rbp+17Fh]
  __int64 v86; // [rsp+200h] [rbp+180h]

  v86 = -2;
  v71 = a3;
  v63 = a2;
  v59 = *(__int64 **)(a4 + 24);
  v5 = &v74;
  while ( 1 )
  {
    v6 = *(__int64 **)(a1 + 8);
    if ( v6 == *(__int64 **)(a1 + 24) )
      return v63;
    v7 = v5;
    v8 = *v6;
    v9 = (const __m128i *)v6[1];
    v10 = v6[2];
    v11 = v6[3];
    v76 = (const __m128i *)v6[4];
    v12 = v6[5];
    v13 = v6[6];
    v14 = v6[7];
    v15 = v6[8];
    v16 = (v6[9] & 1) == 0;
    v17 = *(_DWORD *)((char *)v6 + 73);
    *(_DWORD *)&v67[3] = *((_DWORD *)v6 + 19);
    *(_DWORD *)v67 = v17;
    *(_QWORD *)(a1 + 8) = v6 + 10;
    v69 = v11;
    if ( !v16
      || (unsigned __int64)v10 >= 0xD
      && !(v9->m128i_i64[0] ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v9->m128i_i64 + 5) ^ 0x5F79616C65725F69LL) )
    {
      goto LABEL_10;
    }
    v68 = v8;
    v62 = v15;
    v61 = v13;
    v60 = v14;
    v83 = 1;
    v70 = v9;
    v18 = sub_1403FCA40(asc_1419ECA58, 2, v9, v10);
    v14 = v60;
    v13 = v61;
    v15 = v62;
    v11 = v69;
    v8 = v68;
    v9 = v70;
    if ( !v18 )
    {
      v53 = v67[0];
      v21 = *v59;
      *(_QWORD *)&v65 = 0;
      v66 = 0;
      nullsub_1(*(unsigned int *)&v67[3]);
      v22 = (_DWORD *)sub_140001650(4, 1);
      if ( !v22 )
      {
        v85 = 1;
        sub_141938D2B(1, 4);
      }
      *v22 = 1735748723;
      *(_QWORD *)&v78 = 4;
      *((_QWORD *)&v78 + 1) = v22;
      v79 = 4;
      if ( v10 < 0 )
      {
        v24 = 0;
LABEL_68:
        v82 = 1;
        sub_141938D2B(v24, v10);
      }
      if ( v10 )
      {
        nullsub_1(v23);
        v24 = 1;
        v25 = (__m128i *)sub_140001650(v10, 1);
        if ( !v25 )
          goto LABEL_68;
        v26 = (__int64)v25;
        sub_1418F44E0(v25, v70, v10);
      }
      else
      {
        v26 = 1;
      }
      LOBYTE(v74) = 3;
      *((_QWORD *)&v74 + 1) = v10;
      *(_QWORD *)&v75 = v26;
      *((_QWORD *)&v75 + 1) = v10;
      v82 = 0;
      v5 = v7;
      sub_140E72AA0(&v72, &v65, &v78, v7);
      if ( (_BYTE)v72 != 0xFF )
      {
        v85 = 1;
        sub_1403880E0(&v72);
      }
      nullsub_1(v27);
      v28 = (void *)sub_140001650(10, 1);
      if ( !v28 )
      {
        v85 = 1;
        sub_141938D2B(1, 10);
      }
      qmemcpy(v28, "visibility", 10);
      *(_QWORD *)&v78 = 10;
      *((_QWORD *)&v78 + 1) = v28;
      v79 = 10;
      nullsub_1(0x696C696269736976LL);
      v29 = (_DWORD *)sub_140001650(4, 1);
      v77 = v29;
      if ( !v29 )
        sub_141938D2B(1, 4);
      *v29 = 1953720684;
      LOBYTE(v74) = 3;
      *((_QWORD *)&v74 + 1) = 4;
      *(_QWORD *)&v75 = v29;
      *((_QWORD *)&v75 + 1) = 4;
      sub_140E72AA0(&v72, &v65, &v78, v7);
      if ( (_BYTE)v72 != 0xFF )
      {
        v85 = 1;
        sub_1403880E0(&v72);
      }
      nullsub_1(v30);
      v31 = (_OWORD *)sub_140001650(16, 1);
      if ( !v31 )
      {
        v85 = 1;
        sub_141938D2B(1, 16);
      }
      *v31 = xmmword_1419ECAA0;
      *(_QWORD *)&v78 = 16;
      *((_QWORD *)&v78 + 1) = v31;
      v79 = 16;
      LOWORD(v74) = 257;
      v85 = 1;
      sub_140E72AA0(&v72, &v65, &v78, v7);
      if ( (_BYTE)v72 != 0xFF )
      {
        v85 = 1;
        sub_1403880E0(&v72);
      }
      nullsub_1(v32);
      v33 = (_QWORD *)sub_140001650(8, 1);
      if ( !v33 )
      {
        v85 = 1;
        sub_141938D2B(1, 8);
      }
      *v33 = 0x797469726F697270LL;
      *(_QWORD *)&v78 = 8;
      *((_QWORD *)&v78 + 1) = v33;
      v34 = v21 + 1;
      v79 = 8;
      v35 = 0;
      if ( !v53 )
        v35 = v34;
      LOBYTE(v74) = 2;
      *((_QWORD *)&v74 + 1) = 0;
      *(_QWORD *)&v75 = v35;
      v85 = 1;
      sub_140E72AA0(&v72, &v65, &v78, v7);
      if ( (_BYTE)v72 != 0xFF )
      {
        v85 = 1;
        sub_1403880E0(&v72);
      }
      nullsub_1(v36);
      v37 = sub_140001650(23, 1);
      if ( !v37 )
      {
        v85 = 1;
        sub_141938D2B(1, 23);
      }
      *(_OWORD *)v37 = *(_OWORD *)aDefaultReasoni;
      *(_QWORD *)(v37 + 15) = 0x6C6576656C5F676ELL;
      *(_QWORD *)&v78 = 23;
      *((_QWORD *)&v78 + 1) = v37;
      v79 = 23;
      if ( v12 < 0 )
      {
        v38 = 0;
LABEL_70:
        v81 = 1;
        sub_141938D2B(v38, v12);
      }
      if ( v12 )
      {
        nullsub_1(0x6C6576656C5F676ELL);
        v38 = 1;
        v39 = (__m128i *)sub_140001650(v12, 1);
        if ( !v39 )
          goto LABEL_70;
        v40 = (__int64)v39;
        sub_1418F44E0(v39, v76, v12);
      }
      else
      {
        v40 = 1;
      }
      LOBYTE(v74) = 3;
      *((_QWORD *)&v74 + 1) = v12;
      *(_QWORD *)&v75 = v40;
      *((_QWORD *)&v75 + 1) = v12;
      v81 = 0;
      sub_140E72AA0(&v72, &v65, &v78, v7);
      if ( (_BYTE)v72 != 0xFF )
      {
        v85 = 1;
        sub_1403880E0(&v72);
      }
      nullsub_1(v41);
      v42 = (void *)sub_140001650(26, 1);
      if ( !v42 )
      {
        v85 = 1;
        sub_141938D2B(1, 26);
      }
      qmemcpy(v42, "supported_reasoning_levels", 26);
      v54[0] = 26;
      v54[1] = v42;
      v54[2] = 26;
      v43 = v62;
      *(_QWORD *)&v74 = v60;
      *((_QWORD *)&v74 + 1) = v60;
      *(_QWORD *)&v75 = v61;
      *((_QWORD *)&v75 + 1) = v60 + 24 * v62;
      v77 = v42;
      if ( v62 >> 58 )
      {
        v45 = 0;
        v44 = v55;
LABEL_73:
        v80 = 1;
        sub_141938D2B(v45, v44);
      }
      if ( v62 )
      {
        v44 = 32 * v62;
        nullsub_1(0);
        v45 = 8;
        v46 = sub_140001650(32 * v43, 8);
        if ( !v46 )
          goto LABEL_73;
        v47 = v46;
        v5 = v7;
      }
      else
      {
        v47 = 8;
      }
      *(_QWORD *)&v78 = v43;
      *((_QWORD *)&v78 + 1) = v47;
      v79 = 0;
      v72 = (unsigned __int64)&v79;
      v55 = v47;
      *(_QWORD *)&v73 = v47;
      sub_140397EE0(v5, &v72);
      v56 = v78;
      v57 = v79;
      v84 = 1;
      sub_140C0FE40(v5, &v56);
      if ( (_BYTE)v74 == 0xFF )
      {
        *(_QWORD *)&v72 = *((_QWORD *)&v74 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_5,
          43,
          (unsigned int)&v72,
          (unsigned int)&off_1419ED3F8,
          (__int64)&off_1419ECA88);
      }
      v73 = v75;
      v72 = v74;
      v84 = 0;
      sub_140E72AA0(v5, &v65, v54, &v72);
      if ( (_BYTE)v74 != 0xFF )
        sub_1403880E0(v5);
      v48 = *((_QWORD *)&v56 + 1);
      v58 = (_DWORD *)v57;
      v64 = *((_QWORD *)&v56 + 1);
      v77 = nullptr;
      while ( v58 != v77 )
      {
        v77 = (_DWORD *)((char *)v77 + 1);
        v49 = v48 + 32;
        sub_1403880E0(v48);
        v48 = v49;
      }
      if ( (_QWORD)v56 )
        sub_140001660(v64, 32 * v56, 8);
      *(_QWORD *)&v52[23] = v66;
      *(_OWORD *)&v52[7] = v65;
      if ( v68 )
        sub_140001660(v70, v68, 1);
      if ( v69 )
        sub_140001660(v76, v69, 1);
      v50 = v71;
      *v71 = 5;
      *(_OWORD *)(v50 + 1) = *(_OWORD *)v52;
      *((_OWORD *)v50 + 1) = *(_OWORD *)&v52[15];
      v71 = v50 + 32;
      ++*v59;
    }
    else
    {
LABEL_10:
      if ( v8 )
      {
        sub_140001660(v9, v8, 1);
        v11 = v69;
      }
      if ( v11 )
        sub_140001660(v76, v11, 1);
      if ( v15 )
      {
        v19 = (_QWORD *)(v14 + 8);
        do
        {
          v20 = *(v19 - 1);
          if ( v20 )
            sub_140001660(*v19, v20, 1);
          v19 += 3;
          --v15;
        }
        while ( v15 );
      }
      if ( v13 )
        sub_140001660(v14, 24 * v13, 8);
      v5 = v7;
    }
  }
}
