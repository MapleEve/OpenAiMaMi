// win 1.2.1 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::build_catalog_bytes | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall build_catalog_bytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r15
  bool v20; // si
  __int64 v21; // rdx
  bool v22; // zf
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r12
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int128 v36; // kr00_16
  unsigned __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  _BYTE *v43; // rax
  unsigned __int64 v44; // r9
  __int64 v45; // rdi
  char v46; // cl
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r14
  bool v49; // dl
  unsigned __int64 v50; // rbx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // rax
  __int64 v59; // r15
  _QWORD *v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // r14
  unsigned __int64 v65; // r15
  __int64 i; // r13
  __int64 v67; // rdi
  __int64 v68; // rdx
  _QWORD *v69; // r8
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v78; // [rsp+38h] [rbp-48h]
  __int64 v80; // [rsp+48h] [rbp-38h]
  __m256i v81; // [rsp+50h] [rbp-30h] BYREF
  __int128 v82; // [rsp+70h] [rbp-10h]
  __int128 v83; // [rsp+80h] [rbp+0h]
  __int128 v84; // [rsp+90h] [rbp+10h]
  __int64 v85; // [rsp+A0h] [rbp+20h]
  unsigned __int128 v86; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v87; // [rsp+C0h] [rbp+40h]
  __int64 v88; // [rsp+C8h] [rbp+48h]
  _BYTE v89[40]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v90; // [rsp+F8h] [rbp+78h]
  __int128 v91; // [rsp+108h] [rbp+88h]
  __int128 v92; // [rsp+118h] [rbp+98h]
  __int64 v93; // [rsp+128h] [rbp+A8h]
  __int64 v94; // [rsp+130h] [rbp+B0h]
  __int64 v95; // [rsp+138h] [rbp+B8h]
  __int64 v96; // [rsp+140h] [rbp+C0h]
  __int128 v97; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v98; // [rsp+158h] [rbp+D8h]
  __int64 v99; // [rsp+160h] [rbp+E0h]
  __int64 v100; // [rsp+168h] [rbp+E8h]
  __int64 *v101; // [rsp+170h] [rbp+F0h]
  __int64 v102; // [rsp+178h] [rbp+F8h]
  __int128 v103; // [rsp+180h] [rbp+100h] BYREF
  __int128 v104; // [rsp+190h] [rbp+110h]
  unsigned __int128 v105; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v106; // [rsp+1B0h] [rbp+130h]
  __int64 v107; // [rsp+1C0h] [rbp+140h]
  char v108; // [rsp+1CEh] [rbp+14Eh]
  __int64 v109; // [rsp+1D0h] [rbp+150h]

  v109 = -2; /*0x140a4ab6b*/
  v95 = a1; /*0x140a4ab7d*/
  load_official_models(&v86, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16)); /*0x140a4aba1*/
  *(_QWORD *)&v105 = 0; /*0x140a4abae*/
  *((_QWORD *)&v105 + 1) = 8; /*0x140a4abb9*/
  v106 = 0; /*0x140a4abc4*/
  v88 = a5; /*0x140a4abd3*/
  v78 = a4; /*0x140a4abdf*/
  LODWORD(v8) = 232 * a4; /*0x140a4abe3*/
  v80 = 232 * a4; /*0x140a4abea*/
  v96 = v87; /*0x140a4abee*/
  v102 = *((_QWORD *)&v86 + 1); /*0x140a4abf9*/
  v9 = *((_QWORD *)&v86 + 1) + 32 * v87; /*0x140a4ac00*/
  v100 = v9; /*0x140a4ac03*/
LABEL_3:
  while ( 1 ) /*0x140a4ac1d*/
  {
    v10 = v88; /*0x140a4ac1d*/
    if ( v88 == a5 + 24 * a6 ) /*0x140a4ac25*/
      break; /*0x140a4ac25*/
    LODWORD(v8) = v88 + 24; /*0x140a4ac2b*/
    v88 += 24; /*0x140a4ac2f*/
    if ( v78 ) /*0x140a4ac38*/
    {
      v11 = *(_QWORD *)(v10 + 16); /*0x140a4ac3a*/
      v12 = v80; /*0x140a4ac3e*/
      v13 = a3; /*0x140a4ac42*/
      while ( 1 ) /*0x140a4ac60*/
      {
        if ( *(_QWORD *)(v13 + 16) == v11 ) /*0x140a4ac64*/
        {
          LODWORD(v8) = sub_1416847B0(*(_QWORD *)(v13 + 8), *(_QWORD *)(v10 + 8), v11); /*0x140a4ac71*/
          if ( !(_DWORD)v8 ) /*0x140a4ac78*/
            break; /*0x140a4ac78*/
        }
        v13 += 232; /*0x140a4ac50*/
        v12 -= 232; /*0x140a4ac57*/
        if ( !v12 ) /*0x140a4ac5e*/
          goto LABEL_3; /*0x140a4ac5e*/
      }
      sub_140AC8E60(v89, v13); /*0x140a4ac81*/
      v14 = *(__int64 **)&v89[8]; /*0x140a4ac8b*/
      *(_QWORD *)&v97 = *(_QWORD *)&v89[8]; /*0x140a4ac9e*/
      *((_QWORD *)&v97 + 1) = *(_QWORD *)&v89[8]; /*0x140a4aca5*/
      v98 = *(_QWORD *)v89; /*0x140a4acac*/
      v94 = *(_QWORD *)&v89[8] + 96LL * *(_QWORD *)&v89[16]; /*0x140a4acb3*/
      v99 = v94; /*0x140a4acba*/
      v15 = v102; /*0x140a4acc1*/
LABEL_11:
      if ( v14 == (__int64 *)v94 ) /*0x140a4acde*/
        goto LABEL_2; /*0x140a4acde*/
      v101 = v14 + 12; /*0x140a4ace8*/
      *((_QWORD *)&v97 + 1) = v14 + 12; /*0x140a4acef*/
      v16 = *v14; /*0x140a4acf6*/
      v85 = v14[11]; /*0x140a4acfd*/
      v84 = *(_OWORD *)(v14 + 9); /*0x140a4ad05*/
      v83 = *(_OWORD *)(v14 + 7); /*0x140a4ad0d*/
      v82 = *(_OWORD *)(v14 + 5); /*0x140a4ad15*/
      v81 = *(__m256i *)(v14 + 1); /*0x140a4ad1d*/
      if ( v16 == 2 ) /*0x140a4ad2d*/
      {
LABEL_2:
        v8 = sub_1402BB160(&v97); /*0x140a4ac17*/
        continue; /*0x140a4ac17*/
      }
      *(_QWORD *)v89 = v16; /*0x140a4ad33*/
      v93 = v85; /*0x140a4ad3f*/
      v92 = v84; /*0x140a4ad47*/
      v91 = v83; /*0x140a4ad5b*/
      v90 = v82; /*0x140a4ad5f*/
      *(__m256i *)&v89[8] = v81; /*0x140a4ad63*/
      if ( v96 ) /*0x140a4ad7a*/
      {
        v17 = v15; /*0x140a4ad7c*/
        while ( 1 ) /*0x140a4ada8*/
        {
          v18 = sub_141433D50(aSlug, 4, v17); /*0x140a4ada8*/
          if ( v18 ) /*0x140a4adb1*/
          {
            if ( *(_BYTE *)v18 == 3 /*0x140a4adc8*/
              && *(_QWORD *)(v18 + 24) == v81.m256i_i64[3]
              && !(unsigned int)sub_1416847B0(*(_QWORD *)(v18 + 16), v81.m256i_i64[2], v81.m256i_i64[3]) )
            {
              break; /*0x140a4adc8*/
            }
          }
          v17 += 32; /*0x140a4ad90*/
          if ( v17 == v9 ) /*0x140a4ad97*/
            goto LABEL_21; /*0x140a4ad97*/
        }
        v19 = v17; /*0x140a4add1*/
        goto LABEL_38; /*0x140a4add4*/
      }
LABEL_21:
      sub_140A4A810(&v103, v81.m256i_i64[2], v81.m256i_i64[3]); /*0x140a4ade0*/
      if ( (_QWORD)v104 == 7 ) /*0x140a4ae05*/
      {
        if ( !(**((_DWORD **)&v103 + 1) ^ 0x2D747067 | *(_DWORD *)(*((_QWORD *)&v103 + 1) + 3LL) ^ 0x362E352D) ) /*0x140a4ae1c*/
        {
          if ( (_QWORD)v103 ) /*0x140a4ae2a*/
            sub_140001660(*((_QWORD *)&v103 + 1), v103, 1); /*0x140a4ae32*/
LABEL_29:
          sub_140A4A810(&v103, v81.m256i_i64[2], v81.m256i_i64[3]); /*0x140a4ae6f*/
          if ( v96 ) /*0x140a4ae8a*/
          {
            v107 = *((_QWORD *)&v103 + 1); /*0x140a4ae93*/
            v23 = v104; /*0x140a4ae9a*/
            v24 = v15; /*0x140a4aea1*/
            while ( 1 ) /*0x140a4aebd*/
            {
              v25 = sub_14099BDE0(v107, v23, v24); /*0x140a4aebd*/
              v19 = v26; /*0x140a4aec3*/
              v24 += 32; /*0x140a4aec6*/
              if ( v26 ) /*0x140a4aecd*/
                break; /*0x140a4aecd*/
              if ( v24 == v100 ) /*0x140a4aeda*/
                goto LABEL_33; /*0x140a4aeda*/
            }
            if ( v24 != v100 ) /*0x140a4b020*/
            {
              v31 = v25; /*0x140a4b026*/
              v32 = (unsigned __int64)(v100 - v24) >> 5; /*0x140a4b02c*/
              v33 = 0; /*0x140a4b030*/
              do /*0x140a4b046*/
              {
                v34 = sub_14099BDE0(v107, v23, v24 + 32 * v33); /*0x140a4b060*/
                if ( v35 && v31 <= v34 ) /*0x140a4b06e*/
                {
                  v31 = v34; /*0x140a4b06e*/
                  v19 = v35; /*0x140a4b072*/
                }
                ++v33; /*0x140a4b040*/
              }
              while ( v33 != v32 ); /*0x140a4b046*/
            }
          }
          else
          {
LABEL_33:
            v19 = 0; /*0x140a4aedc*/
          }
          if ( (_QWORD)v103 ) /*0x140a4aee9*/
            sub_140001660(*((_QWORD *)&v103 + 1), v103, 1); /*0x140a4aef8*/
          LODWORD(v17) = 0; /*0x140a4aefd*/
          v9 = v100; /*0x140a4aeff*/
          goto LABEL_38; /*0x140a4af06*/
        }
LABEL_26:
        v20 = 0; /*0x140a4ae46*/
        v21 = v103; /*0x140a4ae48*/
        if ( (_QWORD)v103 ) /*0x140a4ae52*/
          goto LABEL_27; /*0x140a4ae52*/
      }
      else
      {
        if ( (unsigned __int64)v104 <= 7 ) /*0x140a4ae40*/
          goto LABEL_26; /*0x140a4ae40*/
        v20 = **((_QWORD **)&v103 + 1) == 0x2D362E352D747067LL; /*0x140a4affd*/
        v21 = v103; /*0x140a4b001*/
        if ( (_QWORD)v103 ) /*0x140a4b00b*/
LABEL_27:
          sub_140001660(*((_QWORD *)&v103 + 1), v21, 1); /*0x140a4ae54*/
      }
      v22 = !v20; /*0x140a4ae5f*/
      v15 = v102; /*0x140a4ae62*/
      if ( !v22 ) /*0x140a4ae69*/
        goto LABEL_29; /*0x140a4ae69*/
      LODWORD(v17) = 0; /*0x140a4af10*/
      v19 = 0; /*0x140a4af12*/
LABEL_38:
      make_relay_model_info((unsigned int)&v103, v13, (unsigned int)v89, v17, v19); /*0x140a4af15*/
      v27 = v106; /*0x140a4af31*/
      if ( v106 == (_QWORD)v105 ) /*0x140a4af3f*/
        sub_1416890A0(&v105); /*0x140a4af48*/
      v28 = *((_QWORD *)&v105 + 1); /*0x140a4af4e*/
      v29 = 32 * v27; /*0x140a4af58*/
      v30 = v103; /*0x140a4af5c*/
      *(_OWORD *)(*((_QWORD *)&v105 + 1) + v29 + 16) = v104; /*0x140a4af6a*/
      *(_OWORD *)(v28 + v29) = v30; /*0x140a4af6f*/
      v106 = v27 + 1; /*0x140a4af76*/
      if ( *(_QWORD *)&v89[16] ) /*0x140a4af84*/
        sub_140001660(*(_QWORD *)&v89[24], *(_QWORD *)&v89[16], 1); /*0x140a4af90*/
      v15 = v102; /*0x140a4afa0*/
      if ( *((_QWORD *)&v91 + 1) != -1 && *((_QWORD *)&v91 + 1) ) /*0x140a4afac*/
        sub_140001660(v92, *((_QWORD *)&v91 + 1), 1); /*0x140a4afbb*/
      if ( (_QWORD)v90 ) /*0x140a4afc7*/
        sub_140001660(*((_QWORD *)&v90 + 1), v90, 1); /*0x140a4afda*/
      v14 = v101; /*0x140a4acd0*/
      goto LABEL_11; /*0x140a4acd0*/
    }
  }
  v36 = v105; /*0x140a4b07f*/
  v37 = v106; /*0x140a4b086*/
  if ( a7 ) /*0x140a4b094*/
  {
    v105 = v86; /*0x140a4b09a*/
    v38 = v87; /*0x140a4b0a1*/
    v106 = v87; /*0x140a4b0a5*/
    LODWORD(v101) = 0; /*0x140a4b0ac*/
    v39 = v86; /*0x140a4b0b6*/
  }
  else
  {
    *(_QWORD *)&v105 = 0; /*0x140a4b0bf*/
    *((_QWORD *)&v105 + 1) = 8; /*0x140a4b0ca*/
    v106 = 0; /*0x140a4b0d5*/
    LOBYTE(v8) = 1; /*0x140a4b0e0*/
    LODWORD(v101) = v8; /*0x140a4b0e2*/
    v39 = 0; /*0x140a4b0e8*/
    v38 = 0; /*0x140a4b0ea*/
  }
  v40 = *((_QWORD *)&v36 + 1) + 32 * v37; /*0x140a4b0f4*/
  *(_QWORD *)v89 = *((_QWORD *)&v36 + 1); /*0x140a4b0f8*/
  *(_QWORD *)&v89[8] = v36 >> 64; /*0x140a4b100*/
  *(_QWORD *)&v89[16] = v36; /*0x140a4b100*/
  *(_QWORD *)&v89[24] = v40; /*0x140a4b104*/
  if ( v37 > v39 - v38 ) /*0x140a4b10e*/
  {
    sub_141688D30((unsigned int)&v105, v38, v37, 8, 32); /*0x140a4b82f*/
    v38 = v106; /*0x140a4b835*/
    goto LABEL_61; /*0x140a4b83c*/
  }
  if ( v37 ) /*0x140a4b117*/
LABEL_61:
    sub_141684120(*((_QWORD *)&v105 + 1) + 32 * v38, *((_QWORD *)&v36 + 1), 32 * v37); /*0x140a4b119*/
  v106 = v37 + v38; /*0x140a4b132*/
  if ( (_QWORD)v36 ) /*0x140a4b13f*/
    sub_140001660(*((_QWORD *)&v36 + 1), 32 * v36, 8); /*0x140a4b151*/
  *(_QWORD *)&v97 = 0; /*0x140a4b156*/
  v98 = 0; /*0x140a4b161*/
  nullsub_1(v40); /*0x140a4b16c*/
  v41 = sub_140001650(6, 1); /*0x140a4b17b*/
  if ( !v41 ) /*0x140a4b183*/
    sub_1416C2D4B(1, 6); /*0x140a4b914*/
  *(_WORD *)(v41 + 4) = 29548; /*0x140a4b189*/
  *(_DWORD *)v41 = 1701080941; /*0x140a4b18f*/
  *(_QWORD *)&v103 = 6; /*0x140a4b195*/
  *((_QWORD *)&v103 + 1) = v41; /*0x140a4b1a0*/
  *(_QWORD *)&v104 = 6; /*0x140a4b1a7*/
  v108 = 1; /*0x140a4b1b2*/
  sub_140467C90(v89, &v105); /*0x140a4b1c4*/
  if ( v89[0] == 0xFF ) /*0x140a4b1ce*/
  {
    v81.m256i_i64[0] = *(_QWORD *)&v89[8]; /*0x140a4b845*/
    sub_1416C3060( /*0x140a4b86c*/
      (unsigned int)aCalledResultUn_15,
      43,
      (unsigned int)&v81,
      (unsigned int)&off_1417A5560,
      (__int64)&off_1417A8AD8);
  }
  v81 = *(__m256i *)v89; /*0x140a4b1dc*/
  v108 = 0; /*0x140a4b1e4*/
  sub_140307860(v89, &v97, &v103, &v81); /*0x140a4b207*/
  if ( v89[0] != 0xFF ) /*0x140a4b211*/
    sub_1400104F0(v89); /*0x140a4b217*/
  *(_OWORD *)&v81.m256i_u64[1] = v97; /*0x140a4b224*/
  v81.m256i_i64[3] = v98; /*0x140a4b22f*/
  v81.m256i_i8[0] = 5; /*0x140a4b233*/
  nullsub_1(v42); /*0x140a4b237*/
  v43 = (_BYTE *)sub_140001650(128, 1); /*0x140a4b246*/
  if ( !v43 ) /*0x140a4b24e*/
    sub_1416C2D4B(1, 128); /*0x140a4b926*/
  *(_QWORD *)&v103 = 128; /*0x140a4b254*/
  *((_QWORD *)&v103 + 1) = v43; /*0x140a4b25f*/
  *(_QWORD *)v89 = &v103; /*0x140a4b266*/
  *(_QWORD *)&v89[8] = asc_1417A3BD8; /*0x140a4b271*/
  *(_QWORD *)&v89[16] = 2; /*0x140a4b275*/
  v45 = v81.m256i_i64[3]; /*0x140a4b27d*/
  *(_QWORD *)&v89[24] = 1; /*0x140a4b281*/
  v89[32] = 0; /*0x140a4b289*/
  *v43 = 123; /*0x140a4b28d*/
  *(_QWORD *)&v104 = 1; /*0x140a4b290*/
  v46 = 1; /*0x140a4b29b*/
  if ( !v45 ) /*0x140a4b2a0*/
  {
    *(_QWORD *)&v89[24] = 0; /*0x140a4b2a2*/
    v43[1] = 125; /*0x140a4b2aa*/
    *(_QWORD *)&v104 = 2; /*0x140a4b2ae*/
    v46 = 0; /*0x140a4b2b9*/
  }
  LOBYTE(v97) = 0; /*0x140a4b2bb*/
  BYTE1(v97) = v46; /*0x140a4b2c2*/
  *((_QWORD *)&v97 + 1) = v89; /*0x140a4b2c8*/
  v48 = v81.m256i_u64[2]; /*0x140a4b2d3*/
  v47 = v81.m256i_u64[1]; /*0x140a4b2d3*/
  v49 = v81.m256i_i64[1] != 0; /*0x140a4b2da*/
  if ( !v81.m256i_i64[1] ) /*0x140a4b2dd*/
    v45 = 0; /*0x140a4b2dd*/
  v50 = 0; /*0x140a4b2e1*/
  while ( v45-- != 0 ) /*0x140a4b2f0*/
  {
    if ( !v49 ) /*0x140a4b2fd*/
      sub_1416C3040(&off_1417477D8); /*0x140a4b902*/
    if ( v50 ) /*0x140a4b306*/
    {
      if ( v48 < *(unsigned __int16 *)(v50 + 626) ) /*0x140a4b312*/
        goto LABEL_78; /*0x140a4b312*/
      goto LABEL_89; /*0x140a4b312*/
    }
    if ( !v48 ) /*0x140a4b333*/
    {
      v50 = v47; /*0x140a4b36d*/
      goto LABEL_88; /*0x140a4b370*/
    }
    v50 = v47; /*0x140a4b338*/
    if ( (v48 & 7) == 0 ) /*0x140a4b33f*/
    {
      v55 = v48; /*0x140a4b372*/
      if ( v48 < 8 ) /*0x140a4b379*/
        goto LABEL_88; /*0x140a4b379*/
      do /*0x140a4b3bc*/
      {
LABEL_87:
        v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 632) /*0x140a4b380*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v55 -= 8LL; /*0x140a4b3b8*/
      }
      while ( v55 ); /*0x140a4b3bc*/
      goto LABEL_88; /*0x140a4b3bc*/
    }
    v54 = 0; /*0x140a4b341*/
    do /*0x140a4b35d*/
    {
      v50 = *(_QWORD *)(v50 + 632); /*0x140a4b350*/
      ++v54; /*0x140a4b357*/
    }
    while ( (v48 & 7) != v54 ); /*0x140a4b35d*/
    v55 = v48 - v54; /*0x140a4b362*/
    if ( v48 >= 8 ) /*0x140a4b369*/
      goto LABEL_87; /*0x140a4b369*/
LABEL_88:
    v48 = 0; /*0x140a4b3be*/
    v47 = 0; /*0x140a4b3c1*/
    if ( *(_WORD *)(v50 + 626) ) /*0x140a4b3c3*/
    {
LABEL_78:
      v52 = v50; /*0x140a4b318*/
      v53 = v48; /*0x140a4b31b*/
      goto LABEL_91; /*0x140a4b31e*/
    }
    do /*0x140a4b406*/
    {
LABEL_89:
      v52 = *(_QWORD *)(v50 + 352); /*0x140a4b3e0*/
      if ( !v52 ) /*0x140a4b3ea*/
        sub_1416C3040(&off_141746158); /*0x140a4b89c*/
      ++v47; /*0x140a4b3f0*/
      v53 = *(unsigned __int16 *)(v50 + 624); /*0x140a4b3f3*/
      v50 = *(_QWORD *)(v50 + 352); /*0x140a4b3fb*/
    }
    while ( (unsigned __int16)v53 >= *(_WORD *)(v52 + 626) ); /*0x140a4b406*/
LABEL_91:
    if ( !v47 ) /*0x140a4b40b*/
    {
      v48 = v53 + 1; /*0x140a4b4a0*/
      v50 = v52; /*0x140a4b4a4*/
      goto LABEL_99; /*0x140a4b4a4*/
    }
    v56 = v52 + 8 * v53 + 640; /*0x140a4b415*/
    if ( (v47 & 7) != 0 ) /*0x140a4b423*/
    {
      v57 = 0; /*0x140a4b429*/
      do /*0x140a4b440*/
      {
        v50 = *(_QWORD *)v56; /*0x140a4b430*/
        v56 = *(_QWORD *)v56 + 632LL; /*0x140a4b433*/
        ++v57; /*0x140a4b43a*/
      }
      while ( (v47 & 7) != v57 ); /*0x140a4b440*/
      v44 = v47 - v57; /*0x140a4b445*/
      if ( v47 < 8 ) /*0x140a4b44c*/
        goto LABEL_97; /*0x140a4b44c*/
      do /*0x140a4b48f*/
      {
LABEL_96:
        v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v56 + 632LL) /*0x140a4b450*/
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v56 = v50 + 632; /*0x140a4b484*/
        v44 -= 8LL; /*0x140a4b48b*/
      }
      while ( v44 ); /*0x140a4b48f*/
      goto LABEL_97; /*0x140a4b48f*/
    }
    v44 = v47; /*0x140a4b4e0*/
    if ( v47 >= 8 ) /*0x140a4b4e7*/
      goto LABEL_96; /*0x140a4b4e7*/
LABEL_97:
    v48 = 0; /*0x140a4b491*/
LABEL_99:
    v58 = sub_14044C040(&v97, v52 + 24 * v53 + 360, v52 + 32 * v53, v44); /*0x140a4b4a7*/
    v49 = 1; /*0x140a4b4c6*/
    v47 = 0; /*0x140a4b4c8*/
    if ( v58 ) /*0x140a4b4d0*/
    {
      if ( (_QWORD)v103 ) /*0x140a4b5c1*/
      {
        v67 = v58; /*0x140a4b5d0*/
        sub_140001660(*((_QWORD *)&v103 + 1), v103, 1); /*0x140a4b5d3*/
        v58 = v67; /*0x140a4b5d8*/
      }
LABEL_124:
      *(_QWORD *)&v97 = v58; /*0x140a4b633*/
      *(_QWORD *)&v103 = &v97; /*0x140a4b63a*/
      *((_QWORD *)&v103 + 1) = sub_14142D3F0; /*0x140a4b648*/
      sub_14149C0F0(v89, &unk_1417A5057, &v103); /*0x140a4b661*/
      *(_QWORD *)&v104 = *(_QWORD *)&v89[16]; /*0x140a4b66b*/
      v103 = *(_OWORD *)v89; /*0x140a4b676*/
      v70 = *(_QWORD *)v97; /*0x140a4b684*/
      v22 = *(_QWORD *)v97 == 1; /*0x140a4b687*/
      v107 = v97; /*0x140a4b68b*/
      if ( v22 ) /*0x140a4b692*/
      {
        sub_140018650(v97 + 8); /*0x140a4b6c5*/
      }
      else if ( !v70 ) /*0x140a4b697*/
      {
        v71 = *(_QWORD *)(v107 + 16); /*0x140a4b6a0*/
        if ( v71 ) /*0x140a4b6a7*/
          sub_140001660(*(_QWORD *)(v107 + 8), v71, 1); /*0x140a4b6ba*/
      }
      sub_140001660(v107, 40, 8); /*0x140a4b6dd*/
      v72 = v95; /*0x140a4b6e2*/
      *(_QWORD *)v95 = 10; /*0x140a4b6e9*/
      *(_OWORD *)(v72 + 8) = v103; /*0x140a4b6f7*/
      *(_QWORD *)(v72 + 24) = v104; /*0x140a4b702*/
      goto LABEL_130; /*0x140a4b702*/
    }
  }
  if ( (_BYTE)v97 == 1 ) /*0x140a4b4f5*/
    sub_1416C32A0(aInternalErrorE_6, 40, &off_1417A9AC8); /*0x140a4b88a*/
  if ( BYTE1(v97) ) /*0x140a4b502*/
  {
    v59 = *((_QWORD *)&v97 + 1); /*0x140a4b508*/
    v60 = **((_QWORD ***)&v97 + 1); /*0x140a4b50f*/
    v61 = *(_QWORD *)(*((_QWORD *)&v97 + 1) + 24LL) - 1LL; /*0x140a4b516*/
    *(_QWORD *)(*((_QWORD *)&v97 + 1) + 24LL) = v61; /*0x140a4b519*/
    if ( *(_BYTE *)(v59 + 32) ) /*0x140a4b51d*/
    {
      v62 = v60[2]; /*0x140a4b528*/
      if ( *v60 == v62 ) /*0x140a4b52f*/
      {
        sub_141688D30((_DWORD)v60, v62, 1, 1, 1); /*0x140a4b8ec*/
        v62 = v60[2]; /*0x140a4b8f2*/
      }
      *(_BYTE *)(v60[1] + v62) = 10; /*0x140a4b539*/
      v63 = v62 + 1; /*0x140a4b53d*/
      v60[2] = v63; /*0x140a4b540*/
      if ( v61 ) /*0x140a4b547*/
      {
        v64 = *(_QWORD *)(v59 + 8); /*0x140a4b54d*/
        v65 = *(_QWORD *)(v59 + 16); /*0x140a4b551*/
        for ( i = 0; i != v61; ++i ) /*0x140a4b555*/
        {
          if ( v65 > *v60 - v63 ) /*0x140a4b58a*/
          {
            sub_141688D30((_DWORD)v60, v63, v65, 1, 1); /*0x140a4b5ab*/
            v63 = v60[2]; /*0x140a4b5b1*/
          }
          else if ( !v65 ) /*0x140a4b58f*/
          {
            goto LABEL_111; /*0x140a4b58f*/
          }
          sub_141684120(v63 + v60[1], v64, v65); /*0x140a4b56d*/
LABEL_111:
          v63 += v65; /*0x140a4b572*/
          v60[2] = v63; /*0x140a4b575*/
        }
      }
    }
    else
    {
      v63 = v60[2]; /*0x140a4b5dd*/
    }
    if ( *v60 == v63 ) /*0x140a4b5e4*/
    {
      sub_141688D30((_DWORD)v60, v63, 1, 1, 1); /*0x140a4b8c2*/
      v63 = v60[2]; /*0x140a4b8c8*/
    }
    *(_BYTE *)(v60[1] + v63) = 125; /*0x140a4b5ee*/
    v60[2] = v63 + 1; /*0x140a4b5f5*/
  }
  v58 = *((_QWORD *)&v103 + 1); /*0x140a4b600*/
  if ( (_QWORD)v103 == -1 ) /*0x140a4b60b*/
    goto LABEL_124; /*0x140a4b60b*/
  v68 = v104; /*0x140a4b60d*/
  v69 = (_QWORD *)v95; /*0x140a4b614*/
  *(_OWORD *)(v95 + 8) = v103; /*0x140a4b61b*/
  v69[3] = v68; /*0x140a4b623*/
  *v69 = -1; /*0x140a4b627*/
LABEL_130:
  sub_1400104F0(&v81); /*0x140a4b706*/
  v73 = *((_QWORD *)&v105 + 1); /*0x140a4b710*/
  v100 = v106; /*0x140a4b71e*/
  v107 = 0; /*0x140a4b725*/
  v94 = *((_QWORD *)&v105 + 1); /*0x140a4b730*/
  while ( v100 != v107 ) /*0x140a4b74e*/
  {
    ++v107; /*0x140a4b753*/
    v74 = v73 + 32; /*0x140a4b75a*/
    sub_1402C3260(); /*0x140a4b75e*/
    v73 = v74; /*0x140a4b764*/
  }
  if ( (_QWORD)v105 ) /*0x140a4b773*/
    sub_140001660(*((_QWORD *)&v105 + 1), 32 * v105, 8); /*0x140a4b786*/
  v75 = v102; /*0x140a4b792*/
  if ( (_BYTE)v101 ) /*0x140a4b799*/
  {
    v107 = 0; /*0x140a4b79b*/
    while ( v96 != v107 ) /*0x140a4b7be*/
    {
      ++v107; /*0x140a4b7c3*/
      v76 = v75 + 32; /*0x140a4b7ca*/
      sub_1402C3260(); /*0x140a4b7ce*/
      v75 = v76; /*0x140a4b7d4*/
    }
    if ( (_QWORD)v86 ) /*0x140a4b7e7*/
      sub_140001660(v102, 32 * v86, 8); /*0x140a4b7f3*/
  }
  return v95; /*0x140a4b7ff*/
}