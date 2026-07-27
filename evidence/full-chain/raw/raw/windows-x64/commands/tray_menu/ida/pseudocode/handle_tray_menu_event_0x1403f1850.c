// module: codexmate_lib/commands/tray_menu
// addr: 0x1403f1850
// name: handle_tray_menu_event
// win 1.2.3 | = mac codexmate_lib::commands::tray_menu::handle_tray_menu_event | 跨平台字符串签名匹配(名↔函数一致); attributed via lookup_funcs exact-name-match(named on win binary, not stripped for this symbol)
__int64 __fastcall handle_tray_menu_event(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  char v9; // of
  __int64 v10; // r14
  __int64 v11; // rt0
  volatile signed __int64 *v12; // rbx
  __int64 v13; // rt0
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  char v18; // of
  volatile signed __int64 *v19; // rdi
  __int64 v20; // rt0
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rt0
  const char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  volatile void *v26; // rcx
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v30; // rdi
  __int64 *v31; // rbx
  __int64 v32; // rcx
  char v33; // al
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rcx
  char v38; // al
  __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rcx
  char v47; // al
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  void *v52; // rsi
  __int64 v53; // rax
  const char *v54; // [rsp+28h] [rbp-58h] BYREF
  __int64 v55; // [rsp+30h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp+40h]
  char v57; // [rsp+168h] [rbp+E8h]
  __int64 v58; // [rsp+180h] [rbp+100h]
  __int64 v59; // [rsp+188h] [rbp+108h]
  __int64 v60; // [rsp+358h] [rbp+2D8h]
  __int64 v61; // [rsp+360h] [rbp+2E0h]
  const char **v62; // [rsp+458h] [rbp+3D8h] BYREF
  __m128i v63[8]; // [rsp+460h] [rbp+3E0h] BYREF
  volatile signed __int64 *v64; // [rsp+4E0h] [rbp+460h]
  volatile signed __int64 *v65; // [rsp+4E8h] [rbp+468h]
  __int64 v66; // [rsp+4F0h] [rbp+470h]
  __int64 v67; // [rsp+4F8h] [rbp+478h]
  __int64 v68; // [rsp+500h] [rbp+480h]
  _BYTE v69[136]; // [rsp+888h] [rbp+808h] BYREF
  __int64 v70; // [rsp+910h] [rbp+890h]
  volatile signed __int64 *v71; // [rsp+918h] [rbp+898h]
  _BYTE v72[24]; // [rsp+920h] [rbp+8A0h] BYREF
  _QWORD v73[9]; // [rsp+938h] [rbp+8B8h] BYREF
  __m128i v74; // [rsp+980h] [rbp+900h] BYREF
  __int64 v75; // [rsp+990h] [rbp+910h] BYREF
  __m128i v76; // [rsp+998h] [rbp+918h]
  __int64 v77; // [rsp+9A8h] [rbp+928h]
  __int64 v78; // [rsp+9B0h] [rbp+930h]
  int v79; // [rsp+9BCh] [rbp+93Ch]
  PVOID Address; // [rsp+9C0h] [rbp+940h]
  char v81; // [rsp+9CCh] [rbp+94Ch]
  char v82; // [rsp+9CDh] [rbp+94Dh]
  char v83; // [rsp+9CEh] [rbp+94Eh]
  char v84; // [rsp+9CFh] [rbp+94Fh]
  __int64 v85; // [rsp+9D0h] [rbp+950h]

  v85 = -2; /*0x1403f186b*/
  result = a3 - 9; /*0x1403f187c*/
  switch ( a3 ) /*0x1403f1898*/
  {
    case 9uLL: /*0x1403f1898*/
      result = *(_QWORD *)a2 ^ 0x6975715F79617274LL; /*0x1403f18a4*/
      if ( !(result | *(unsigned __int8 *)(a2 + 8) ^ 0x74LL) ) /*0x1403f18af*/
        return quit_keeping_router(a1); /*0x1403f18ce*/
      return result; /*0x1403f18ce*/
    case 0xEuLL: /*0x1403f1898*/
      if ( !(*(_QWORD *)a2 ^ 0x65706F5F79617274LL | *(_QWORD *)(a2 + 6) ^ 0x6E69616D5F6E6570LL) ) /*0x1403f194f*/
        goto LABEL_21; /*0x1403f1952*/
      goto LABEL_15; /*0x1403f1952*/
    case 0x11uLL: /*0x1403f1898*/
      if ( _mm_movemask_epi8( /*0x1403f18fc*/
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(a2 + 16)), (__m128i)xmmword_1416C6390),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141748E30))) == 0xFFFF )
        goto LABEL_21; /*0x1403f18fc*/
      goto LABEL_15; /*0x1403f18fc*/
    case 0x14uLL: /*0x1403f1898*/
      if ( _mm_movemask_epi8( /*0x1403f197f*/
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141748E10),
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_141748E00))) == 0xFFFF )
        goto LABEL_21; /*0x1403f197f*/
      v6 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 16)), (__m128i)xmmword_141748E00); /*0x1403f198e*/
      v7 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141748E20); /*0x1403f1996*/
LABEL_14:
      if ( _mm_movemask_epi8(_mm_and_si128(v7, v6)) == 0xFFFF ) /*0x1403f19c6*/
      {
LABEL_21:
        sub_1401C50B0(&v54, a1); /*0x1403f1a76*/
        v19 = *(volatile signed __int64 **)(a1 + 136); /*0x1403f1a82*/
        v20 = _InterlockedIncrement64(v19); /*0x1403f1a89*/
        if ( !((v20 < 0) ^ v18 | (v20 == 0)) ) /*0x1403f1a8d*/
        {
          v21 = *(volatile signed __int64 **)(a1 + 144); /*0x1403f1a93*/
          v22 = _InterlockedIncrement64(v21); /*0x1403f1a9a*/
          if ( !((v22 < 0) ^ v18 | (v22 == 0)) ) /*0x1403f1a9e*/
          {
            sub_141684120(&v62, &v54, 136); /*0x1403f1ab8*/
            v64 = v19; /*0x1403f1abd*/
            v65 = v21; /*0x1403f1ac4*/
            result = sub_14096F5D0(&v54, &v62); /*0x1403f1ad2*/
            v23 = v54; /*0x1403f1ad7*/
            if ( (__int64)v54 <= 0 ) /*0x1403f1ade*/
              return result; /*0x1403f1ade*/
            v24 = v55; /*0x1403f1ae4*/
            return sub_140001660(v24, v23, 1); /*0x1403f1af3*/
          }
        }
LABEL_78:
        BUG(); /*0x1403f20c2*/
      }
LABEL_15:
      result = *(_QWORD *)a2 ^ 0x6363615F79617274LL; /*0x1403f19cc*/
      if ( result | *(_QWORD *)(a2 + 5) ^ 0x3A746E756F636361LL ) /*0x1403f19e7*/
        return result; /*0x1403f19ea*/
      sub_1401C50B0(&v62, a1); /*0x1403f19fd*/
      v10 = *(_QWORD *)(a1 + 136); /*0x1403f1a02*/
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v10); /*0x1403f1a09*/
      if ( (v11 < 0) ^ v9 | (v11 == 0) ) /*0x1403f1a0d*/
        goto LABEL_78; /*0x1403f1a0d*/
      v12 = *(volatile signed __int64 **)(a1 + 144); /*0x1403f1a13*/
      v13 = _InterlockedIncrement64(v12); /*0x1403f1a1a*/
      if ( (v13 < 0) ^ v9 | (v13 == 0) ) /*0x1403f1a1e*/
        goto LABEL_78; /*0x1403f1a1e*/
      v14 = a3 - 13; /*0x1403f1a24*/
      v15 = a2 + 13; /*0x1403f1a28*/
      sub_141684120(v69, &v62, 136); /*0x1403f1a40*/
      v70 = v10; /*0x1403f1a45*/
      v71 = v12; /*0x1403f1a4c*/
      if ( v14 < 0 ) /*0x1403f1a56*/
      {
        v17 = 0; /*0x1403f1a5c*/
        goto LABEL_20; /*0x1403f1a5c*/
      }
      v77 = v14; /*0x1403f1af8*/
      if ( v14 ) /*0x1403f1aff*/
      {
        nullsub_1(v16); /*0x1403f1b01*/
        v17 = 1; /*0x1403f1b06*/
        v25 = sub_140001650(v14, 1); /*0x1403f1b13*/
        if ( !v25 ) /*0x1403f1b1b*/
        {
LABEL_20:
          v82 = 1; /*0x1403f1a5e*/
          sub_1416C2D4B(v17, v14); /*0x1403f1a6b*/
        }
        v78 = v25; /*0x1403f1b21*/
        sub_141684120(v25, v15, v14); /*0x1403f1b31*/
      }
      else
      {
        v78 = 1; /*0x1403f1b3d*/
      }
      v26 = (volatile void *)(*(_QWORD *)(v10 + 5016) + 16LL); /*0x1403f1b4b*/
      v84 = 1; /*0x1403f1b4f*/
      v27 = (char *)sub_140003640(v26); /*0x1403f1b56*/
      v30 = v27; /*0x1403f1b5c*/
      if ( !v27 ) /*0x1403f1b62*/
      {
        v54 = aStdSyncPoisonM; /*0x1403f1bd1*/
        v55 = 76; /*0x1403f1bd5*/
        v62 = &v54; /*0x1403f1be1*/
        v63[0].m128i_i64[0] = (__int64)sub_14041F680; /*0x1403f1bef*/
        v84 = 1; /*0x1403f1bf6*/
        sub_1416C32C0(&unk_1416C99C2, &v62, &off_1416C9A50); /*0x1403f1c12*/
      }
      LOBYTE(v29) = 1; /*0x1403f1b64*/
      if ( _InterlockedCompareExchange8(v27, 1, 0) ) /*0x1403f1b68*/
      {
        v84 = 1; /*0x1403f1c1d*/
        sub_1416C15B0(v27); /*0x1403f1c27*/
      }
      v31 = off_141EC90B8; /*0x1403f1b72*/
      if ( 2 * *off_141EC90B8 ) /*0x1403f1b7c*/
      {
        v84 = 1; /*0x1403f1c32*/
        v34 = sub_1416C2250(v29, v28); /*0x1403f1c39*/
        v32 = v34; /*0x1403f1c3f*/
        LOBYTE(v32) = v34 ^ 1; /*0x1403f1c41*/
        if ( v30[1] ) /*0x1403f1c44*/
        {
LABEL_35:
          if ( !(_BYTE)v32 ) /*0x1403f1b98*/
          {
            if ( 2 * *v31 ) /*0x1403f1b9d*/
            {
              v84 = 1; /*0x1403f2018*/
              if ( !(unsigned __int8)sub_1416C2250(v32, v28) ) /*0x1403f201f*/
                v30[1] = 1; /*0x1403f202d*/
            }
          }
          v33 = *v30; /*0x1403f1bab*/
          *v30 = 0; /*0x1403f1bab*/
          if ( v33 == 2 ) /*0x1403f1baf*/
          {
            v84 = 1; /*0x1403f1bb5*/
            WakeByAddressSingle(v30); /*0x1403f1bbf*/
          }
LABEL_65:
          if ( v77 ) /*0x1403f1fd4*/
            sub_140001660(v78, v77, 1); /*0x1403f1fe3*/
          return sub_140014150(v69); /*0x1403f1fef*/
        }
      }
      else
      {
        v32 = 0; /*0x1403f1b88*/
        if ( v30[1] ) /*0x1403f1b8a*/
          goto LABEL_35; /*0x1403f1b90*/
      }
      v79 = v32; /*0x1403f1c50*/
      Address = v30; /*0x1403f1c56*/
      load_local_state_synced(&v62, v30 + 8); /*0x1403f1c6b*/
      if ( (_DWORD)v62 == 2 ) /*0x1403f1c78*/
      {
        sub_14034ED40(v63); /*0x1403f1c81*/
        goto LABEL_43; /*0x1403f1c81*/
      }
      sub_141684120(&v54, &v62, 1072); /*0x1403f1cd5*/
      v39 = v77; /*0x1403f1cde*/
      v40 = v78; /*0x1403f1ce5*/
      if ( v56 != 2 && v59 == v77 && !(unsigned int)sub_1416847B0(v58, v78, v77) ) /*0x1403f1d0b*/
      {
        sub_14034DB60(&v54); /*0x1403f200d*/
LABEL_43:
        if ( !(_BYTE)v79 ) /*0x1403f1c8e*/
        {
          if ( 2 * *v31 ) /*0x1403f1c93*/
          {
            v84 = 1; /*0x1403f2048*/
            if ( !(unsigned __int8)sub_1416C2250(v36, v35) ) /*0x1403f204f*/
              *((_BYTE *)Address + 1) = 1; /*0x1403f2064*/
          }
        }
        v37 = Address; /*0x1403f1ca1*/
        v38 = *(_BYTE *)Address; /*0x1403f1ca8*/
        *(_BYTE *)Address = 0; /*0x1403f1ca8*/
        if ( v38 == 2 ) /*0x1403f1cac*/
        {
          v84 = 1; /*0x1403f1cb2*/
          WakeByAddressSingle(v37); /*0x1403f1cb9*/
        }
        goto LABEL_65; /*0x1403f1cbf*/
      }
      v41 = -1; /*0x1403f1d18*/
      if ( v61 ) /*0x1403f1d22*/
      {
        v42 = 352 * v61; /*0x1403f1d2b*/
        v43 = v60 + 208; /*0x1403f1d32*/
        while ( *(_QWORD *)(v43 - 8) != v39 || (unsigned int)sub_1416847B0(*(_QWORD *)(v43 - 16), v40, v39) ) /*0x1403f1d62*/
        {
          v43 += 352; /*0x1403f1d3b*/
          v42 -= 352; /*0x1403f1d42*/
          if ( !v42 ) /*0x1403f1d49*/
            goto LABEL_56; /*0x1403f1d49*/
        }
        sub_14149C500(&v62, v43); /*0x1403f1d6e*/
        v41 = (__int64)v62; /*0x1403f1d74*/
        v74 = _mm_loadu_si128(v63); /*0x1403f1d83*/
      }
LABEL_56:
      sub_14034DB60(&v54); /*0x1403f1d8b*/
      if ( !(_BYTE)v79 ) /*0x1403f1d9c*/
      {
        if ( 2 * *v31 ) /*0x1403f1da1*/
        {
          v84 = 1; /*0x1403f206d*/
          if ( !(unsigned __int8)sub_1416C2250(v45, v44) ) /*0x1403f2074*/
            *((_BYTE *)Address + 1) = 1; /*0x1403f2089*/
        }
      }
      v46 = Address; /*0x1403f1daf*/
      v47 = *(_BYTE *)Address; /*0x1403f1db6*/
      *(_BYTE *)Address = 0; /*0x1403f1db6*/
      if ( v47 == 2 ) /*0x1403f1dba*/
      {
        v84 = 1; /*0x1403f2036*/
        WakeByAddressSingle(v46); /*0x1403f203d*/
      }
      if ( v41 == -1 ) /*0x1403f1dc4*/
        goto LABEL_65; /*0x1403f1dc4*/
      v75 = v41; /*0x1403f1dca*/
      v76 = _mm_load_si128(&v74); /*0x1403f1dd9*/
      v83 = 1; /*0x1403f1de1*/
      v48 = sub_140063FC0(a1); /*0x1403f1df1*/
      v62 = (const char **)&v75; /*0x1403f1dfb*/
      v63[0].m128i_i64[0] = (__int64)sub_1400015F0; /*0x1403f1e09*/
      v83 = 1; /*0x1403f1e10*/
      sub_14149C0F0(v72, &unk_141751797, &v62); /*0x1403f1e2c*/
      v83 = 1; /*0x1403f1e32*/
      sub_1401C9600(&v62, v48, v72); /*0x1403f1e4a*/
      v83 = 1; /*0x1403f1e50*/
      sub_140001CE0(&v54, &v62, asc_1417517E8, 15); /*0x1403f1e6f*/
      v57 = 1; /*0x1403f1e75*/
      sub_141684120(&v62, &v54, 328); /*0x1403f1e8d*/
      nullsub_1(v49); /*0x1403f1e92*/
      v50 = sub_140001650(21, 1); /*0x1403f1ea1*/
      if ( !v50 ) /*0x1403f1ea9*/
      {
        v81 = 1; /*0x1403f2092*/
        sub_1416C2D4B(1, 21); /*0x1403f20a3*/
      }
      v52 = (void *)v50; /*0x1403f1eaf*/
      *(__m128i *)v50 = _mm_loadu_si128(&xmmword_1417517F7); /*0x1403f1eba*/
      *(_QWORD *)(v50 + 13) = 0x7865646F4320AF90LL; /*0x1403f1ec8*/
      nullsub_1(v51); /*0x1403f1ecc*/
      v53 = sub_140001650(6, 1); /*0x1403f1edb*/
      if ( !v53 ) /*0x1403f1ee3*/
      {
        Address = v52; /*0x1403f20ab*/
        sub_1416C2D4B(1, 6); /*0x1403f20bc*/
      }
      *(_WORD *)(v53 + 4) = -30538; /*0x1403f1ee9*/
      *(_DWORD *)v53 = -426340379; /*0x1403f1eef*/
      v73[1] = 21; /*0x1403f1ef5*/
      v73[2] = v52; /*0x1403f1f00*/
      v73[3] = 21; /*0x1403f1f07*/
      v73[4] = 6; /*0x1403f1f12*/
      v73[5] = v53; /*0x1403f1f1d*/
      v73[6] = 6; /*0x1403f1f24*/
      v73[0] = 0x8000000000000005uLL; /*0x1403f1f39*/
      v81 = 0; /*0x1403f1f40*/
      sub_1401B34F0(&v54, &v62, v73); /*0x1403f1f59*/
      sub_141684120(&v62, v69, 152); /*0x1403f1f76*/
      v66 = v77; /*0x1403f1f82*/
      v67 = v78; /*0x1403f1f90*/
      v68 = v77; /*0x1403f1f97*/
      v83 = 0; /*0x1403f1f9e*/
      result = sub_140001B60(&v54, &v62); /*0x1403f1fac*/
      v23 = (const char *)v75; /*0x1403f1fb2*/
      if ( v75 ) /*0x1403f1fbc*/
      {
        v24 = v76.m128i_i64[0]; /*0x1403f1fbe*/
        return sub_140001660(v24, v23, 1); /*0x1403f1fc5*/
      }
      return result;
    case 0x17uLL: /*0x1403f1898*/
      v6 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 7)), (__m128i)xmmword_141748DE0); /*0x1403f19a9*/
      v7 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141748DF0); /*0x1403f19b1*/
      goto LABEL_14; /*0x1403f19b1*/
    case 0x18uLL: /*0x1403f1898*/
      v6 = _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(a2 + 16)), (__m128i)xmmword_141748DC0); /*0x1403f1910*/
      v7 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141748DD0); /*0x1403f1918*/
      goto LABEL_14; /*0x1403f1920*/
    default:
      if ( a3 < 0xD ) /*0x1403f1929*/
        return result; /*0x1403f1929*/
      goto LABEL_15; /*0x1403f1929*/
  }
}