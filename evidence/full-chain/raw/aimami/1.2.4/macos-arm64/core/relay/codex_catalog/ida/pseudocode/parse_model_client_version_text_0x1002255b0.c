// __ZN13codexmate_lib4core5relay13codex_catalog31parse_model_client_version_text @ 0x1002255b0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_catalog::parse_model_client_version_text::h6530e9248077026e(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rax
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v6; // r8
  __int64 v7; // r15
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // r9
  char *v10; // rsi
  int v11; // edi
  unsigned __int8 *v12; // rax
  char v13; // r9
  int v14; // edi
  int v15; // r11d
  int v16; // r10d
  unsigned __int8 *v17; // r15
  unsigned __int64 v18; // rsi
  char *v19; // rdx
  char *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rax
  char *v24; // r15
  char *v25; // r15
  int v26; // eax
  char *v27; // r15
  __int64 v28; // rax
  unsigned int v29; // ebx
  int v30; // eax
  bool v31; // al
  __int64 v32; // r14
  char *v33; // r14
  int v34; // eax
  char *v35; // r14
  __int64 v36; // rax
  unsigned int v37; // r15d
  int v38; // eax
  bool v39; // al
  __int64 v40; // r14
  char *v41; // r14
  int v42; // eax
  char *v43; // rsi
  char *v44; // r14
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // kr00_4
  unsigned int v48; // edi
  bool v49; // cf
  __int64 result; // rax
  _QWORD v51[7]; // [rsp+0h] [rbp-D0h] BYREF
  __int16 v52; // [rsp+38h] [rbp-98h]
  _DWORD *v53; // [rsp+40h] [rbp-90h]
  int v54; // [rsp+48h] [rbp-88h] BYREF
  __int64 v55; // [rsp+50h] [rbp-80h]
  char *v56; // [rsp+58h] [rbp-78h]
  char *v57; // [rsp+60h] [rbp-70h]
  char *v58; // [rsp+68h] [rbp-68h]
  __int64 v59; // [rsp+70h] [rbp-60h] BYREF
  char *v60; // [rsp+78h] [rbp-58h]
  __int64 v61; // [rsp+80h] [rbp-50h]
  char *v62; // [rsp+88h] [rbp-48h]
  __int64 v63; // [rsp+90h] [rbp-40h]
  char v64; // [rsp+98h] [rbp-38h]
  __int16 v65; // [rsp+A0h] [rbp-30h]

  v3 = a1; /*0x1002255c4*/
  v51[0] = 0; /*0x1002255cb*/
  v51[1] = a3; /*0x1002255d6*/
  v51[2] = a2; /*0x1002255dd*/
  v51[3] = a3; /*0x1002255e4*/
  v51[4] = a2; /*0x1002255eb*/
  v51[5] = a2 + a3; /*0x1002255f2*/
  v51[6] = 0; /*0x1002255f9*/
  v52 = 1; /*0x100225604*/
  v4 = ((__int64 (__fastcall *)(_QWORD *))core::iter::traits::iterator::Iterator::try_fold::h161a77de992db67b)(v51); /*0x100225614*/
  if ( !v4 ) /*0x10022561c*/
  {
    result = 0; /*0x100225b87*/
    goto LABEL_95; /*0x100225b87*/
  }
  v7 = v4; /*0x100225622*/
  v53 = a1; /*0x100225625*/
  while ( 1 ) /*0x100225654*/
  {
    v8 = &v5[v7]; /*0x100225654*/
    v9 = nullptr; /*0x100225658*/
    v10 = (char *)v7; /*0x10022565b*/
    while ( v10 != (char *)v8 ) /*0x100225682*/
    {
      v12 = v9; /*0x100225688*/
      v13 = *v10; /*0x10022568b*/
      if ( *v10 >= 0 ) /*0x100225692*/
      {
        v6 = (unsigned __int8 *)(v10 + 1); /*0x100225660*/
        v11 = (unsigned __int8)*v10; /*0x100225664*/
      }
      else
      {
        v14 = v13 & 0x1F; /*0x100225697*/
        v15 = v10[1] & 0x3F; /*0x10022569f*/
        if ( (unsigned __int8)v13 <= 0xDFu ) /*0x1002256a7*/
        {
          v6 = (unsigned __int8 *)(v10 + 2); /*0x1002256de*/
          v11 = v15 | (v14 << 6); /*0x1002256e5*/
        }
        else
        {
          v16 = (v15 << 6) | v10[2] & 0x3F; /*0x1002256b6*/
          if ( (unsigned __int8)v13 < 0xF0u ) /*0x1002256bd*/
          {
            v6 = (unsigned __int8 *)(v10 + 3); /*0x1002256ed*/
            v11 = v16 | (v14 << 12); /*0x1002256f4*/
          }
          else
          {
            v6 = (unsigned __int8 *)(v10 + 4); /*0x1002256bf*/
            v11 = (v16 << 6) | v10[3] & 0x3F | ((v13 & 7) << 18); /*0x1002256d9*/
          }
        }
      }
      v9 = &v6[v12 - (unsigned __int8 *)v10]; /*0x10022566d*/
      v10 = (char *)v6; /*0x100225673*/
      if ( (unsigned int)(v11 - 48) <= 9 ) /*0x100225679*/
        goto LABEL_15; /*0x100225679*/
    }
    v12 = v5; /*0x100225700*/
LABEL_15:
    v17 = &v12[v7]; /*0x100225706*/
    v57 = nullptr; /*0x100225709*/
    v58 = (char *)(v5 - v12); /*0x100225711*/
    v59 = (__int64)v17; /*0x100225715*/
    v60 = (char *)(v5 - v12); /*0x100225719*/
    v61 = 0; /*0x10022571d*/
    v62 = (char *)(v5 - v12); /*0x100225725*/
    v63 = 0x2D0000002DLL; /*0x100225733*/
    v64 = 1; /*0x100225737*/
    v65 = 1; /*0x10022573b*/
    v18 = (unsigned __int64)&v59; /*0x100225744*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100225748*/
      &v54,
      &v59,
      v5 - v12,
      v8,
      v6,
      v9);
    if ( (_BYTE)v54 ) /*0x100225754*/
    {
      v20 = v57; /*0x10022575e*/
      v23 = (char *)(v55 - (_QWORD)v57); /*0x100225762*/
      v24 = (char *)&v17[(_QWORD)v57]; /*0x100225765*/
    }
    else
    {
      if ( HIBYTE(v65) ) /*0x100225804*/
        goto LABEL_3; /*0x100225804*/
      v23 = (char *)(v58 - v57); /*0x100225812*/
      LOBYTE(v20) = v65 | (v58 != v57); /*0x100225818*/
      if ( (_BYTE)v20 != 1 ) /*0x10022581e*/
        goto LABEL_3; /*0x10022581e*/
      v24 = &v57[v59]; /*0x100225824*/
    }
    v57 = nullptr; /*0x100225768*/
    v58 = v23; /*0x100225770*/
    v59 = (__int64)v24; /*0x100225774*/
    v60 = v23; /*0x100225778*/
    v61 = 0; /*0x10022577c*/
    v62 = v23; /*0x100225784*/
    v63 = 0x2E0000002ELL; /*0x100225792*/
    v64 = 1; /*0x100225796*/
    v65 = 1; /*0x10022579a*/
    v18 = (unsigned __int64)&v59; /*0x1002257a3*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1002257a7*/
      &v54,
      &v59,
      v19,
      v20,
      v21,
      v22);
    if ( (_BYTE)v54 ) /*0x1002257b3*/
    {
      v19 = v57; /*0x1002257bd*/
      v20 = (char *)(v55 - (_QWORD)v57); /*0x1002257c1*/
      v25 = &v24[(_QWORD)v57]; /*0x1002257c4*/
      v57 = v56; /*0x1002257c7*/
      if ( !v20 ) /*0x1002257ce*/
        goto LABEL_3; /*0x1002257ce*/
    }
    else
    {
      if ( HIBYTE(v65) ) /*0x100225834*/
        goto LABEL_3; /*0x100225834*/
      HIBYTE(v65) = 1; /*0x10022583a*/
      v20 = (char *)(v58 - v57); /*0x100225846*/
      if ( ((unsigned __int8)v65 | (v58 != v57)) != 1 ) /*0x100225851*/
        goto LABEL_3; /*0x100225851*/
      v25 = &v57[v59]; /*0x100225857*/
      if ( !v20 ) /*0x10022585e*/
        goto LABEL_3; /*0x10022585e*/
    }
    if ( v20 == (char *)1 ) /*0x1002257d8*/
    {
      v26 = (unsigned __int8)*v25; /*0x1002257de*/
      if ( v26 == 43 || v26 == 45 ) /*0x1002257ee*/
        goto LABEL_3; /*0x1002257ee*/
    }
    else
    {
      LOBYTE(v26) = *v25; /*0x100225869*/
    }
    v18 = (_BYTE)v26 == 43; /*0x100225871*/
    v19 = &v20[-v18]; /*0x100225878*/
    v27 = &v25[v18]; /*0x10022587b*/
    if ( (unsigned __int64)&v20[-v18] >= 9 ) /*0x100225888*/
    {
      v20 = (char *)(v18 - (_QWORD)v20); /*0x1002258c7*/
      v18 = 0; /*0x1002258ca*/
      v29 = 0; /*0x1002258cc*/
      while ( &v20[v18] ) /*0x1002258d4*/
      {
        HIDWORD(v19) = 0; /*0x1002258d8*/
        LODWORD(v19) = (10 * (unsigned __int64)v29) >> 32; /*0x1002258dd*/
        v30 = 10 * v29; /*0x1002258dd*/
        if ( is_mul_ok(0xAu, v29) ) /*0x1002258dd*/
        {
          v19 = (char *)((unsigned int)(unsigned __int8)v27[v18] - 48); /*0x1002258ec*/
          v29 = (_DWORD)v19 + v30; /*0x1002258ef*/
          v31 = __CFADD__((_DWORD)v19, v30); /*0x1002258f1*/
          if ( (unsigned int)v19 <= 9 ) /*0x1002258f7*/
          {
            ++v18; /*0x1002258fd*/
            if ( !v31 ) /*0x100225902*/
              continue; /*0x100225902*/
          }
        }
        goto LABEL_3; /*0x100225902*/
      }
    }
    else
    {
      if ( v19 ) /*0x10022588d*/
      {
        v20 = (char *)(v18 - (_QWORD)v20); /*0x100225892*/
        v28 = 0; /*0x100225895*/
        v29 = 0; /*0x100225897*/
        while ( 1 ) /*0x1002258a5*/
        {
          v19 = (char *)((unsigned int)(unsigned __int8)v27[v28] - 48); /*0x1002258a5*/
          if ( (unsigned int)v19 > 9 ) /*0x1002258ab*/
            goto LABEL_3; /*0x1002258ab*/
          v18 = 5 * v29; /*0x1002258b1*/
          v29 = (_DWORD)v19 + 10 * v29; /*0x1002258b4*/
          v19 = &v20[++v28]; /*0x1002258bd*/
          if ( !&v20[v28] ) /*0x1002258bd*/
            goto LABEL_44; /*0x1002258c0*/
        }
      }
      v29 = 0; /*0x100225909*/
    }
LABEL_44:
    if ( !HIBYTE(v65) ) /*0x10022590f*/
    {
      v32 = v59; /*0x100225915*/
      v18 = (unsigned __int64)&v59; /*0x10022591c*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100225920*/
        &v54,
        &v59,
        v19,
        v20,
        v21,
        v22);
      if ( v54 == 1 ) /*0x10022592c*/
      {
        v19 = v57; /*0x100225936*/
        v20 = (char *)(v55 - (_QWORD)v57); /*0x10022593a*/
        v33 = &v57[v32]; /*0x10022593d*/
        v57 = v56; /*0x100225940*/
        if ( !v20 ) /*0x100225947*/
          goto LABEL_3; /*0x100225947*/
      }
      else
      {
        if ( HIBYTE(v65) ) /*0x10022596f*/
          goto LABEL_3; /*0x10022596f*/
        HIBYTE(v65) = 1; /*0x100225975*/
        v20 = (char *)(v58 - v57); /*0x100225981*/
        if ( ((unsigned __int8)v65 | (v58 != v57)) != 1 ) /*0x10022598c*/
          goto LABEL_3; /*0x10022598c*/
        v33 = &v57[v59]; /*0x100225992*/
        if ( !v20 ) /*0x100225999*/
          goto LABEL_3; /*0x100225999*/
      }
      if ( v20 == (char *)1 ) /*0x100225951*/
      {
        v34 = (unsigned __int8)*v33; /*0x100225953*/
        if ( v34 == 43 || v34 == 45 ) /*0x100225963*/
          goto LABEL_3; /*0x100225963*/
      }
      else
      {
        LOBYTE(v34) = *v33; /*0x1002259a0*/
      }
      v18 = (_BYTE)v34 == 43; /*0x1002259a8*/
      v19 = &v20[-v18]; /*0x1002259af*/
      v35 = &v33[v18]; /*0x1002259b2*/
      if ( (unsigned __int64)&v20[-v18] >= 9 ) /*0x1002259bf*/
      {
        v20 = (char *)(v18 - (_QWORD)v20); /*0x100225a09*/
        v18 = 0; /*0x100225a0c*/
        v37 = 0; /*0x100225a0e*/
        while ( &v20[v18] ) /*0x100225a17*/
        {
          HIDWORD(v19) = 0; /*0x100225a1c*/
          LODWORD(v19) = (10 * (unsigned __int64)v37) >> 32; /*0x100225a21*/
          v38 = 10 * v37; /*0x100225a21*/
          if ( is_mul_ok(0xAu, v37) ) /*0x100225a21*/
          {
            v19 = (char *)((unsigned int)(unsigned __int8)v35[v18] - 48); /*0x100225a31*/
            v37 = (_DWORD)v19 + v38; /*0x100225a34*/
            v39 = __CFADD__((_DWORD)v19, v38); /*0x100225a37*/
            if ( (unsigned int)v19 <= 9 ) /*0x100225a3d*/
            {
              ++v18; /*0x100225a43*/
              if ( !v39 ) /*0x100225a48*/
                continue; /*0x100225a48*/
            }
          }
          goto LABEL_3; /*0x100225a48*/
        }
      }
      else
      {
        if ( v19 ) /*0x1002259c4*/
        {
          v20 = (char *)(v18 - (_QWORD)v20); /*0x1002259cd*/
          v36 = 0; /*0x1002259d0*/
          v37 = 0; /*0x1002259d2*/
          while ( 1 ) /*0x1002259e5*/
          {
            v19 = (char *)((unsigned int)(unsigned __int8)v35[v36] - 48); /*0x1002259e5*/
            if ( (unsigned int)v19 > 9 ) /*0x1002259eb*/
              goto LABEL_3; /*0x1002259eb*/
            v18 = 5 * v37; /*0x1002259f1*/
            v37 = (_DWORD)v19 + 10 * v37; /*0x1002259f5*/
            v19 = &v20[++v36]; /*0x1002259ff*/
            if ( !&v20[v36] ) /*0x1002259ff*/
              goto LABEL_69; /*0x100225a02*/
          }
        }
        v37 = 0; /*0x100225a4f*/
      }
LABEL_69:
      if ( !HIBYTE(v65) ) /*0x100225a56*/
        break; /*0x100225a56*/
    }
LABEL_3:
    v7 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, char *, char *, __int64, __int64))core::iter::traits::iterator::Iterator::try_fold::h161a77de992db67b)( /*0x100225640*/
           v51,
           v18,
           v19,
           v20,
           v21,
           v22);
    if ( !v7 ) /*0x10022564e*/
    {
      result = 0; /*0x100225b7c*/
      v3 = v53; /*0x100225b7e*/
      goto LABEL_95; /*0x100225b85*/
    }
  }
  v40 = v59; /*0x100225a5c*/
  v18 = (unsigned __int64)&v59; /*0x100225a63*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100225a67*/
    &v54,
    &v59,
    v19,
    v20,
    v21,
    v22);
  if ( v54 == 1 ) /*0x100225a73*/
  {
    v19 = v57; /*0x100225a7d*/
    v20 = (char *)(v55 - (_QWORD)v57); /*0x100225a81*/
    v41 = &v57[v40]; /*0x100225a84*/
    v57 = v56; /*0x100225a87*/
    if ( !v20 ) /*0x100225a8e*/
      goto LABEL_3; /*0x100225a8e*/
  }
  else
  {
    if ( HIBYTE(v65) ) /*0x100225ab6*/
      goto LABEL_3; /*0x100225ab6*/
    v20 = (char *)(v58 - v57); /*0x100225ac4*/
    if ( ((unsigned __int8)v65 | (v58 != v57)) != 1 ) /*0x100225acf*/
      goto LABEL_3; /*0x100225acf*/
    v41 = &v57[v59]; /*0x100225ad5*/
    if ( !v20 ) /*0x100225adc*/
      goto LABEL_3; /*0x100225adc*/
  }
  if ( v20 == (char *)1 ) /*0x100225a98*/
  {
    v42 = (unsigned __int8)*v41; /*0x100225a9a*/
    if ( v42 == 43 || v42 == 45 ) /*0x100225aaa*/
      goto LABEL_3; /*0x100225aaa*/
  }
  else
  {
    LOBYTE(v42) = *v41; /*0x100225ae3*/
  }
  v43 = (char *)((_BYTE)v42 == 43); /*0x100225aeb*/
  v44 = &v41[(_QWORD)v43]; /*0x100225af5*/
  if ( (unsigned __int64)(v20 - v43) < 9 ) /*0x100225b02*/
  {
    if ( v20 == v43 ) /*0x100225af2*/
    {
      v45 = 0; /*0x100225b9e*/
      goto LABEL_97; /*0x100225b9e*/
    }
    v20 = (char *)(v43 - v20); /*0x100225b10*/
    v19 = nullptr; /*0x100225b13*/
    v45 = 0; /*0x100225b15*/
    while ( 1 ) /*0x100225b1c*/
    {
      v18 = (unsigned int)(unsigned __int8)v19[(_QWORD)v44] - 48; /*0x100225b1c*/
      if ( (unsigned int)v18 > 9 ) /*0x100225b22*/
        goto LABEL_3; /*0x100225b22*/
      v45 = v18 + 10 * v45; /*0x100225b2b*/
      if ( !&v20[(_QWORD)++v19] ) /*0x100225b34*/
        goto LABEL_97; /*0x100225b37*/
    }
  }
  v20 = (char *)(v43 - v20); /*0x100225b3e*/
  v18 = 0; /*0x100225b41*/
  v45 = 0; /*0x100225b43*/
  while ( &v20[v18] ) /*0x100225b4b*/
  {
    HIDWORD(v19) = 0; /*0x100225b4d*/
    v47 = v45; /*0x100225b52*/
    LODWORD(v19) = (10 * (unsigned __int64)v45) >> 32; /*0x100225b52*/
    v46 = 10 * v45; /*0x100225b52*/
    if ( is_mul_ok(0xAu, v47) ) /*0x100225b52*/
    {
      v48 = (unsigned __int8)v44[v18] - 48; /*0x100225b5f*/
      v49 = __CFADD__(v48, v46); /*0x100225b62*/
      v45 = v48 + v46; /*0x100225b62*/
      LOBYTE(v19) = v49; /*0x100225b64*/
      if ( v48 <= 9 ) /*0x100225b6a*/
      {
        ++v18; /*0x100225b70*/
        if ( !v49 ) /*0x100225b75*/
          continue; /*0x100225b75*/
      }
    }
    goto LABEL_3; /*0x100225b75*/
  }
LABEL_97:
  v3 = v53; /*0x100225ba0*/
  v53[1] = v29; /*0x100225ba7*/
  v3[2] = v37; /*0x100225bab*/
  v3[3] = v45; /*0x100225baf*/
  result = 1; /*0x100225bb3*/
LABEL_95:
  *v3 = result; /*0x100225b89*/
  return result; /*0x100225b8c*/
}