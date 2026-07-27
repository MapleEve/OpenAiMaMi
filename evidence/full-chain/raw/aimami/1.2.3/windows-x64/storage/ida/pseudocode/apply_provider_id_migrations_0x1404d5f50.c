// win 1.2.1 | module src/core/relay/storage.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::storage::apply_provider_id_migrations | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall apply_provider_id_migrations(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int128 *v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r12
  char *v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rsi
  char v30; // bl
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int128 v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // r14
  __int64 v41; // rdi
  __m128i *v42; // r14
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rbx
  const __m128i *v49; // r14
  __m128i si128; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __m128i v57; // [rsp+40h] [rbp-40h] BYREF
  __int64 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+58h] [rbp-28h] BYREF
  __int64 v60; // [rsp+68h] [rbp-18h]
  _OWORD v61[3]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v62; // [rsp+A0h] [rbp+20h]
  __int128 *v63; // [rsp+A8h] [rbp+28h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+B0h] [rbp+30h]
  _OWORD *v65; // [rsp+B8h] [rbp+38h]
  __int128 *v66; // [rsp+C0h] [rbp+40h]
  _QWORD *v67; // [rsp+C8h] [rbp+48h]
  __int64 v68; // [rsp+D0h] [rbp+50h]
  __int64 v69; // [rsp+D8h] [rbp+58h]
  __int128 v70; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v71; // [rsp+F0h] [rbp+70h]
  __int128 v72; // [rsp+100h] [rbp+80h] BYREF
  __int64 v73; // [rsp+110h] [rbp+90h]
  const char *v74; // [rsp+118h] [rbp+98h]
  __int64 v75; // [rsp+120h] [rbp+A0h]
  __int64 v76; // [rsp+128h] [rbp+A8h]
  void *v77; // [rsp+130h] [rbp+B0h]
  __int128 **v78; // [rsp+138h] [rbp+B8h]
  char v79; // [rsp+14Fh] [rbp+CFh] BYREF
  __int64 v80; // [rsp+150h] [rbp+D0h]
  __int64 v81; // [rsp+158h] [rbp+D8h]
  __int64 v82; // [rsp+160h] [rbp+E0h]

  v82 = -2; /*0x1404d5f6b*/
  v68 = a2; /*0x1404d5f7c*/
  v69 = a1; /*0x1404d5f80*/
  v7 = (__int128 *)sub_1401C5950(0); /*0x1404d5f86*/
  if ( !v7 ) /*0x1404d5f8e*/
    sub_1416C2100(&off_141792398); /*0x1404d67fe*/
  v9 = *v7; /*0x1404d5f94*/
  ++*(_QWORD *)v7; /*0x1404d5f97*/
  v71 = xmmword_1416C8810; /*0x1404d5fa8*/
  v70 = *(_OWORD *)&off_1416C8800; /*0x1404d5fb3*/
  v72 = v9; /*0x1404d5fb7*/
  if ( a5 ) /*0x1404d5fc1*/
  {
    LOBYTE(v8) = 1; /*0x1404d67d3*/
    sub_1416B8700(&v70, a5, &v72, v8); /*0x1404d67d6*/
  }
  v10 = a4 + (a5 << 6); /*0x1404d5fcb*/
  sub_140996210(a4, v10, &v70); /*0x1404d5fd8*/
  v61[2] = v72; /*0x1404d5fed*/
  v61[1] = v71; /*0x1404d5ff1*/
  v61[0] = v70; /*0x1404d5ff5*/
  v67 = a3; /*0x1404d5ff9*/
  v62 = v10; /*0x1404d5ffd*/
  while ( a4 != v10 ) /*0x1404d6027*/
  {
    v13 = a4; /*0x1404d602d*/
    a4 += 64; /*0x1404d6030*/
    v14 = *(_QWORD *)(v13 + 48); /*0x1404d6034*/
    if ( v14 < a3[2] ) /*0x1404d603c*/
    {
      v15 = a3[1] + 232 * v14; /*0x1404d6049*/
      if ( *(_BYTE *)(v15 + 228) != 1 ) /*0x1404d6055*/
        goto LABEL_16; /*0x1404d6055*/
      v16 = *(_QWORD *)(v13 + 8); /*0x1404d605b*/
      v17 = *(_QWORD *)(v13 + 16); /*0x1404d605f*/
      v18 = *(char **)(v13 + 32); /*0x1404d6063*/
      v19 = *(_QWORD *)(v13 + 40); /*0x1404d6067*/
      sub_140AE73A0((__int64)&v70, v18, v19); /*0x1404d6075*/
      v20 = v70; /*0x1404d607b*/
      if ( (_QWORD)v70 != -1 ) /*0x1404d6083*/
      {
        LOBYTE(v21) = BYTE8(v70); /*0x1404d6089*/
        v22 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 13)) << 32) /*0x1404d60a2*/
            | *(unsigned int *)((char *)&v70 + 9);
        v23 = v71; /*0x1404d60a5*/
        goto LABEL_11; /*0x1404d60a5*/
      }
      sub_1404D97B0((__int64)&v70, v69, v68, (int)v18, v19); /*0x1404d6263*/
      a3 = v67; /*0x1404d6269*/
      v80 = v16; /*0x1404d626d*/
      v25 = *((_QWORD *)&v70 + 1); /*0x1404d6274*/
      v21 = (unsigned __int8)v71; /*0x1404d6278*/
      v26 = (unsigned __int64)((BYTE7(v71) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v71 + 5)) << 32; /*0x1404d628a*/
      v22 = v26 | *(unsigned int *)((char *)&v71 + 1); /*0x1404d6291*/
      v23 = *((_QWORD *)&v71 + 1); /*0x1404d6294*/
      if ( (_BYTE)v70 ) /*0x1404d629c*/
      {
LABEL_21:
        if ( v25 != -1 ) /*0x1404d62a2*/
        {
          v20 = v25; /*0x1404d62a4*/
          goto LABEL_11; /*0x1404d62a7*/
        }
        a3 = v67; /*0x1404d62db*/
        if ( (v21 & 1) != 0 ) /*0x1404d62df*/
          goto LABEL_29; /*0x1404d62df*/
        goto LABEL_53; /*0x1404d62df*/
      }
      if ( *((_QWORD *)&v70 + 1) != -1 ) /*0x1404d62b0*/
      {
        v27 = (unsigned __int8)v71 | (v22 << 8); /*0x1404d62ba*/
        if ( *((_QWORD *)&v71 + 1) ) /*0x1404d62c0*/
        {
          if ( *((_QWORD *)&v70 + 1) ) /*0x1404d62c5*/
          {
            v28 = v27; /*0x1404d62cd*/
            goto LABEL_27; /*0x1404d62cd*/
          }
          goto LABEL_29; /*0x1404d62c5*/
        }
        if ( *((_QWORD *)&v70 + 1) ) /*0x1404d62f2*/
          sub_140001660(v27, *((_QWORD *)&v70 + 1), 1); /*0x1404d62fd*/
      }
      v29 = v80; /*0x1404d6302*/
      if ( (unsigned __int8)sub_1404DB890(v80, v17, v21, v23) ) /*0x1404d630f*/
      {
        if ( (unsigned __int8)sub_1404DB990(v29, v17) ) /*0x1404d6322*/
        {
          sub_1404D97B0((__int64)&v70, v69, v68, v80, v17); /*0x1404d6348*/
          v25 = *((_QWORD *)&v70 + 1); /*0x1404d634e*/
          LOBYTE(v21) = v71; /*0x1404d6352*/
          v26 = (unsigned __int64)((BYTE7(v71) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v71 + 5)) << 32; /*0x1404d6364*/
          v22 = v26 | *(unsigned int *)((char *)&v71 + 1); /*0x1404d636b*/
          v23 = *((_QWORD *)&v71 + 1); /*0x1404d636e*/
          if ( (_BYTE)v70 ) /*0x1404d6376*/
            goto LABEL_21; /*0x1404d6376*/
          if ( *((_QWORD *)&v70 + 1) != -1 ) /*0x1404d6380*/
          {
            v81 = *((_QWORD *)&v70 + 1); /*0x1404d6382*/
            v26 = (unsigned __int8)v71 | (v22 << 8); /*0x1404d6394*/
            if ( *((_QWORD *)&v71 + 1) ) /*0x1404d639a*/
              goto LABEL_41; /*0x1404d639a*/
            if ( v81 ) /*0x1404d63a6*/
              sub_140001660(v26, v81, 1); /*0x1404d63ae*/
          }
        }
        sub_1404DA710((__int64 *)&v70, v69, v68, v80, v17); /*0x1404d63cf*/
        if ( (_QWORD)v70 != -1 ) /*0x1404d63dd*/
        {
          v26 = *((_QWORD *)&v70 + 1); /*0x1404d63ea*/
          v81 = v70; /*0x1404d63ea*/
          v23 = v71; /*0x1404d63ee*/
          if ( (_QWORD)v71 ) /*0x1404d63f5*/
            goto LABEL_41; /*0x1404d63f5*/
          if ( v81 ) /*0x1404d64b3*/
            sub_140001660(*((_QWORD *)&v70 + 1), v81, 1); /*0x1404d64bb*/
        }
        sub_1404DA0B0((__int64)&v70); /*0x1404d64cb*/
        if ( (_DWORD)v70 == 1 ) /*0x1404d64d5*/
        {
          v32 = *((_QWORD *)&v70 + 1); /*0x1404d64d7*/
          if ( *((_QWORD *)&v70 + 1) ) /*0x1404d64de*/
          {
            v26 = v71; /*0x1404d64e0*/
LABEL_51:
            sub_140001660(v26, v32, 1); /*0x1404d64e4*/
          }
        }
        else
        {
          v32 = *((_QWORD *)&v70 + 1); /*0x1404d64f1*/
          if ( *((_QWORD *)&v70 + 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x1404d64f9*/
          {
            v23 = *((_QWORD *)&v71 + 1); /*0x1404d65c5*/
            v26 = v71; /*0x1404d65c5*/
            if ( *((_QWORD *)&v71 + 1) ) /*0x1404d65cc*/
            {
              v81 = *((_QWORD *)&v70 + 1); /*0x1404d65ce*/
LABEL_41:
              v80 = v26; /*0x1404d63fb*/
              sub_1404D9C20((__int64)&v70, v69, v68, (int)v18, v19, v26, v23); /*0x1404d6420*/
              v20 = v70; /*0x1404d6426*/
              if ( (_QWORD)v70 != -1 ) /*0x1404d642e*/
              {
                LOBYTE(v21) = BYTE8(v70); /*0x1404d6430*/
                v22 = ((unsigned __int64)((HIBYTE(v70) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v70 + 13)) << 32) /*0x1404d6449*/
                    | *(unsigned int *)((char *)&v70 + 9);
                v23 = v71; /*0x1404d644c*/
                if ( v81 ) /*0x1404d6461*/
                {
                  v30 = BYTE8(v70); /*0x1404d6467*/
                  v31 = v71; /*0x1404d6470*/
                  sub_140001660(v80, v81, 1); /*0x1404d6473*/
                  v23 = v31; /*0x1404d6478*/
                  LOBYTE(v21) = v30; /*0x1404d647b*/
                }
LABEL_11:
                *(_QWORD *)&v70 = v20; /*0x1404d60a9*/
                BYTE8(v70) = v21; /*0x1404d60ad*/
                *(_DWORD *)((char *)&v70 + 9) = v22; /*0x1404d60b1*/
                HIBYTE(v70) = BYTE6(v22); /*0x1404d60bb*/
                *(_WORD *)((char *)&v70 + 13) = WORD2(v22); /*0x1404d60c2*/
                *(_QWORD *)&v71 = v23; /*0x1404d60c6*/
                *(_BYTE *)(v15 + 228) = 0; /*0x1404d60ca*/
                v63 = &v70; /*0x1404d60d6*/
                v64 = (__int64 (__fastcall *)())sub_1400015F0; /*0x1404d60e1*/
                sub_14149C0F0(&v59, &unk_14175D8D0, &v63); /*0x1404d60f4*/
                v24 = *(_QWORD *)(v15 + 168); /*0x1404d60fa*/
                a3 = v67; /*0x1404d6105*/
                a4 = v13 + 64; /*0x1404d6109*/
                if ( v24 != -1 && v24 ) /*0x1404d6112*/
                  sub_140001660(*(_QWORD *)(v15 + 176), v24, 1); /*0x1404d6121*/
                *(_QWORD *)(v15 + 184) = v60; /*0x1404d6131*/
                *(_OWORD *)(v15 + 168) = v59; /*0x1404d6139*/
                if ( (_QWORD)v70 ) /*0x1404d6143*/
                  sub_140001660(*((_QWORD *)&v70 + 1), v70, 1); /*0x1404d614f*/
LABEL_16:
                if ( *(_QWORD *)off_141EC8D80 < 2u ) /*0x1404d6162*/
                  goto LABEL_18; /*0x1404d6162*/
LABEL_17:
                v63 = (__int128 *)v13; /*0x1404d6168*/
                v64 = sub_1401C5930; /*0x1404d6177*/
                v65 = (_OWORD *)(v13 + 24); /*0x1404d617b*/
                v66 = (__int128 *)sub_1400015F0; /*0x1404d6186*/
                *(_QWORD *)&v70 = 0; /*0x1404d618a*/
                *((_QWORD *)&v70 + 1) = aCodexmateLibCo_22; /*0x1404d6199*/
                v71 = 0x23u; /*0x1404d619d*/
                *(_QWORD *)&v72 = aSrcCoreRelaySt; /*0x1404d61b4*/
                *((_QWORD *)&v72 + 1) = 25; /*0x1404d61bb*/
                v73 = 2; /*0x1404d61c6*/
                v74 = aCodexmateLibCo_22; /*0x1404d61d1*/
                v75 = 35; /*0x1404d61d8*/
                v76 = 0x17900000001LL; /*0x1404d61ed*/
                v77 = &unk_14175D91E; /*0x1404d61fb*/
                v78 = &v63; /*0x1404d6206*/
                sub_1412C36A0(&v79, &v70); /*0x1404d6218*/
                goto LABEL_18; /*0x1404d6218*/
              }
              v25 = v81; /*0x1404d6483*/
              a3 = v67; /*0x1404d648d*/
              v28 = v80; /*0x1404d6491*/
              if ( v81 ) /*0x1404d6498*/
LABEL_27:
                sub_140001660(v28, v25, 1); /*0x1404d62d0*/
LABEL_29:
              *(_BYTE *)(v13 + 56) = 1; /*0x1404d62e5*/
              goto LABEL_58; /*0x1404d62ea*/
            }
            if ( *((_QWORD *)&v70 + 1) ) /*0x1404d65dd*/
              goto LABEL_51; /*0x1404d65dd*/
          }
        }
      }
LABEL_53:
      *(_BYTE *)(v15 + 228) = 0; /*0x1404d64ff*/
      nullsub_1(v26); /*0x1404d6507*/
      v33 = sub_140001650(82, 1); /*0x1404d6516*/
      if ( !v33 ) /*0x1404d651e*/
        sub_1416C2D4B(1, 82); /*0x1404d680f*/
      v34 = v33; /*0x1404d6524*/
      *(_OWORD *)(v33 + 64) = xmmword_14175D8BE; /*0x1404d652e*/
      *(_OWORD *)(v33 + 48) = xmmword_14175D8AE; /*0x1404d6539*/
      *(_OWORD *)(v33 + 32) = xmmword_14175D89E; /*0x1404d6544*/
      *(_OWORD *)(v33 + 16) = xmmword_14175D88E; /*0x1404d654f*/
      *(_OWORD *)v33 = xmmword_14175D87E; /*0x1404d655a*/
      *(_WORD *)(v33 + 80) = -23163; /*0x1404d655d*/
      v35 = *(_QWORD *)(v15 + 168); /*0x1404d6563*/
      if ( v35 != -1 && v35 ) /*0x1404d6573*/
        sub_140001660(*(_QWORD *)(v15 + 176), v35, 1); /*0x1404d6582*/
      *(_QWORD *)(v15 + 168) = 82; /*0x1404d6587*/
      *(_QWORD *)(v15 + 176) = v34; /*0x1404d6592*/
      *(_QWORD *)(v15 + 184) = 82; /*0x1404d6599*/
LABEL_58:
      a4 = v13 + 64; /*0x1404d65a4*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404d65b6*/
        goto LABEL_17; /*0x1404d65b6*/
LABEL_18:
      sub_14149C500(&v70, v13 + 24); /*0x1404d621e*/
      v11 = *(_QWORD *)v15; /*0x1404d622f*/
      if ( *(_QWORD *)v15 ) /*0x1404d622f*/
        sub_140001660(*(_QWORD *)(v15 + 8), v11, 1); /*0x1404d6245*/
      *(_QWORD *)(v15 + 16) = v71; /*0x1404d6014*/
      *(_OWORD *)v15 = v70; /*0x1404d601c*/
      v10 = v62; /*0x1404d6020*/
    }
  }
  v36 = sub_141470CD0(v12, v11); /*0x1404d65e8*/
  v37 = v36; /*0x1404d65ee*/
  if ( *(_BYTE *)(v36 + 16) == 1 ) /*0x1404d65f5*/
  {
    v38 = *(_OWORD *)v36; /*0x1404d65fb*/
  }
  else
  {
    *(_QWORD *)&v38 = sub_141486EF0(); /*0x1404d67e1*/
    *(_OWORD *)v37 = v38; /*0x1404d67e7*/
    *(_BYTE *)(v37 + 16) = 1; /*0x1404d67ee*/
  }
  *(_QWORD *)v37 = v38 + 1; /*0x1404d6606*/
  v71 = xmmword_141757120; /*0x1404d6610*/
  v70 = *(_OWORD *)&off_141757110; /*0x1404d661b*/
  v72 = v38; /*0x1404d661f*/
  v39 = a3[4]; /*0x1404d662d*/
  v40 = a3; /*0x1404d6631*/
  v41 = a3[5]; /*0x1404d6634*/
  v63 = (__int128 *)v39; /*0x1404d6640*/
  v64 = (__int64 (__fastcall *)())(v39 + 24 * v41); /*0x1404d6644*/
  v65 = v61; /*0x1404d664c*/
  v66 = &v70; /*0x1404d6654*/
  sub_140314EF0(&v57, &v63); /*0x1404d6660*/
  v42 = (__m128i *)(v40 + 3); /*0x1404d6666*/
  if ( v41 ) /*0x1404d666d*/
  {
    v43 = (_QWORD *)(v39 + 8); /*0x1404d666f*/
    do /*0x1404d6687*/
    {
      v44 = *(v43 - 1); /*0x1404d6689*/
      if ( v44 ) /*0x1404d6690*/
        sub_140001660(*v43, v44, 1); /*0x1404d669b*/
      v43 += 3; /*0x1404d6680*/
      --v41; /*0x1404d6684*/
    }
    while ( v41 ); /*0x1404d6687*/
  }
  if ( v42->m128i_i64[0] ) /*0x1404d66a2*/
    sub_140001660(v39, 24 * v42->m128i_i64[0], 8); /*0x1404d66bb*/
  HIDWORD(_RAX) = HIDWORD(v58); /*0x1404d66c0*/
  v42[1].m128i_i64[0] = v58; /*0x1404d66c4*/
  *v42 = _mm_loadu_si128(&v57); /*0x1404d66cd*/
  v46 = *((_QWORD *)&v70 + 1); /*0x1404d66d2*/
  if ( *((_QWORD *)&v70 + 1) ) /*0x1404d66d9*/
  {
    v47 = *((_QWORD *)&v71 + 1); /*0x1404d66df*/
    if ( *((_QWORD *)&v71 + 1) ) /*0x1404d66e6*/
    {
      v48 = v70; /*0x1404d66ec*/
      v49 = (const __m128i *)(v70 + 16); /*0x1404d66f4*/
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v70)); /*0x1404d66fd*/
      do /*0x1404d6720*/
      {
        if ( !(_WORD)_R15D ) /*0x1404d6726*/
        {
          do /*0x1404d674c*/
          {
            si128 = _mm_load_si128(v49); /*0x1404d6730*/
            v48 -= 384; /*0x1404d6735*/
            ++v49; /*0x1404d673c*/
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x1404d6745*/
          }
          while ( !_R15D ); /*0x1404d674c*/
        }
        __asm { tzcnt eax, r15d } /*0x1404d674e*/
        v52 = -3 * _RAX; /*0x1404d6756*/
        v53 = *(_QWORD *)(v48 + 8 * v52 - 24); /*0x1404d675a*/
        if ( v53 ) /*0x1404d6762*/
          sub_140001660(*(_QWORD *)(v48 + 8 * v52 - 16), v53, 1); /*0x1404d6772*/
        --v47; /*0x1404d6710*/
        _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x1404d6717*/
        _R15D &= _R15D - 1; /*0x1404d671a*/
      }
      while ( v47 ); /*0x1404d6720*/
    }
    v54 = (24 * v46 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1404d6785*/
    v55 = v54 + v46 + 17; /*0x1404d678c*/
    if ( v55 ) /*0x1404d6790*/
      sub_140001660(v70 - v54, v55, 16); /*0x1404d67a2*/
  }
  return sub_14067EB80(v61); /*0x1404d67b1*/
}