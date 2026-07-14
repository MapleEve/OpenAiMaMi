// mac 1.1.8 parse_aimami_deeplink node va=0x10107a2c0 depth=2
// url6parser6Parser9parse_url
_QWORD *__fastcall url::parser::Parser::parse_url::h656618b748ba9840(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  int v10; // ecx
  unsigned __int8 *v11; // rdx
  unsigned int v12; // esi
  int v13; // edi
  int v14; // r9d
  int v15; // r8d
  unsigned __int8 *v16; // r13
  unsigned __int8 *v17; // rdx
  __int64 v18; // r12
  size_t v19; // r15
  unsigned __int8 *v20; // r14
  char v21; // bl
  size_t v22; // rax
  char *v23; // rsi
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  unsigned __int8 *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  int v31; // eax
  unsigned __int8 *v32; // rcx
  unsigned int v33; // edx
  int v34; // esi
  int v35; // r8d
  int v36; // edi
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // rdx
  char v42; // al
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // rbx
  size_t v46; // rcx
  char *v47; // rdi
  size_t v48; // rdx
  unsigned int v49; // ecx
  int v50; // edx
  unsigned __int8 *v51; // rbx
  unsigned __int8 *v52; // rdi
  unsigned int v53; // r8d
  int v54; // r9d
  int v55; // r11d
  int v56; // r10d
  __int64 v57; // r13
  unsigned __int64 v58; // rcx
  char *v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // rbx
  int v62; // eax
  unsigned __int8 *v63; // r13
  unsigned int v64; // ecx
  int v65; // edx
  int v66; // edi
  int v67; // esi
  __int64 v68; // rax
  int v69; // eax
  __int64 v70; // r8
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // r13
  _BOOL4 v74; // r12d
  unsigned __int8 v76; // al
  __int64 v77; // rdx
  int v78; // [rsp+0h] [rbp-170h]
  char v79[17]; // [rsp+47h] [rbp-129h] BYREF
  _QWORD __s2[9]; // [rsp+58h] [rbp-118h] BYREF
  _QWORD v81[9]; // [rsp+A0h] [rbp-D0h] BYREF
  _QWORD v82[9]; // [rsp+E8h] [rbp-88h] BYREF
  _QWORD *v83; // [rsp+130h] [rbp-40h]
  __int64 v84; // [rsp+138h] [rbp-38h]
  __int64 v85; // [rsp+140h] [rbp-30h]

  v85 = a1; /*0x10107a2da*/
  v6 = a2[6]; /*0x10107a2de*/
  v84 = a2[7]; /*0x10107a2e6*/
  v83 = a2 + 1; /*0x10107a2ee*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3fd340720b02dcfc(a3, a4); /*0x10107a2fd*/
  v9 = v7; /*0x10107a300*/
  if ( v6 ) /*0x10107a306*/
  {
    if ( v7 < a4 ) /*0x10107a30f*/
      (*(void (__fastcall **)(__int64, __int64))(v84 + 40))(v6, 1); /*0x10107a31d*/
    v10 = 9728; /*0x10107a324*/
    v11 = (unsigned __int8 *)v8; /*0x10107a329*/
    while ( 1 ) /*0x10107a358*/
    {
      while ( 1 ) /*0x10107a349*/
      {
        if ( v11 == (unsigned __int8 *)(v8 + v9) ) /*0x10107a34c*/
          goto LABEL_19; /*0x10107a34c*/
        v12 = *v11; /*0x10107a352*/
        if ( (v12 & 0x80u) != 0 ) /*0x10107a358*/
          break; /*0x10107a358*/
        ++v11; /*0x10107a35a*/
        if ( v12 <= 0xD ) /*0x10107a360*/
          goto LABEL_6; /*0x10107a360*/
      }
      v13 = v12 & 0x1F; /*0x10107a372*/
      v14 = v11[1] & 0x3F; /*0x10107a37a*/
      if ( (unsigned __int8)v12 <= 0xDFu ) /*0x10107a382*/
      {
        v11 += 2; /*0x10107a32e*/
        v12 = v14 | (v13 << 6); /*0x10107a338*/
        if ( v12 <= 0xD ) /*0x10107a33d*/
        {
LABEL_6:
          if ( _bittest(&v10, v12) ) /*0x10107a343*/
          {
            (*(void (__fastcall **)(__int64, __int64, unsigned __int8 *))(v84 + 40))(v6, 9, v11); /*0x10107a3ee*/
            break; /*0x10107a3ee*/
          }
        }
      }
      else
      {
        v15 = (v14 << 6) | v11[2] & 0x3F; /*0x10107a391*/
        if ( (unsigned __int8)v12 < 0xF0u ) /*0x10107a398*/
        {
          v11 += 3; /*0x10107a3c7*/
          v12 = (v13 << 12) | v15; /*0x10107a3d1*/
          if ( v12 <= 0xD ) /*0x10107a3d7*/
            goto LABEL_6; /*0x10107a3d7*/
        }
        else
        {
          v12 = ((v12 & 7) << 18) | (v15 << 6) | v11[3] & 0x3F; /*0x10107a3ae*/
          if ( v12 == 1114112 ) /*0x10107a3b6*/
            break; /*0x10107a3b6*/
          v11 += 4; /*0x10107a3b8*/
          if ( v12 <= 0xD ) /*0x10107a3bf*/
            goto LABEL_6; /*0x10107a3bf*/
        }
      }
    }
  }
LABEL_19:
  v16 = (unsigned __int8 *)(v8 + v9); /*0x10107a3f1*/
  v18 = url::parser::Parser::parse_scheme::h7f9334d255d90168(a2, v8, v16); /*0x10107a402*/
  if ( !v18 ) /*0x10107a408*/
  {
    v30 = a2[3]; /*0x10107a501*/
    if ( !v30 ) /*0x10107a508*/
    {
      v42 = 6; /*0x10107a68b*/
      goto LABEL_108; /*0x10107a68d*/
    }
    v31 = 9728; /*0x10107a50e*/
    v32 = (unsigned __int8 *)v8; /*0x10107a513*/
    while ( 1 ) /*0x10107a546*/
    {
      if ( v32 == v16 ) /*0x10107a549*/
        goto LABEL_46; /*0x10107a549*/
      v33 = *v32; /*0x10107a54f*/
      if ( (v33 & 0x80u) != 0 ) /*0x10107a554*/
        break; /*0x10107a554*/
      ++v32; /*0x10107a520*/
      if ( v33 > 0xD ) /*0x10107a526*/
      {
LABEL_41:
        if ( v33 != 1114112 ) /*0x10107a5e8*/
        {
          if ( v33 == 35 ) /*0x10107a5f1*/
          {
            qmemcpy(__s2, a2, sizeof(__s2)); /*0x10107a605*/
            v37 = v8; /*0x10107a612*/
            v26 = (_QWORD *)v85; /*0x10107a615*/
            url::parser::Parser::fragment_only::h133711e611788d5f(v85, __s2, v30, v37, v16); /*0x10107a61b*/
            return v26; /*0x10107a620*/
          }
LABEL_46:
          v38 = *(unsigned int *)(v30 + 44); /*0x10107a653*/
          v39 = *(_QWORD *)(v30 + 8); /*0x10107a659*/
          v40 = *(_QWORD *)(v30 + 16); /*0x10107a65d*/
          v41 = (unsigned int)(*(_DWORD *)(v30 + 44) + 1); /*0x10107a661*/
          if ( *(_DWORD *)(v30 + 44) != -1 ) /*0x10107a663*/
          {
            if ( v40 <= (unsigned int)v41 ) /*0x10107a66c*/
            {
              if ( v40 != v41 ) /*0x10107a9a8*/
LABEL_107:
                core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x10107a9e0*/
            }
            else if ( *(char *)(v39 + (unsigned int)v41) < -64 ) /*0x10107a676*/
            {
              goto LABEL_107; /*0x10107a676*/
            }
          }
          v42 = 7; /*0x10107a9ae*/
          if ( v40 != (unsigned int)v41 && *(_BYTE *)(v39 + (unsigned int)v41) == 47 ) /*0x10107a9b9*/
          {
            if ( *(_DWORD *)(v30 + 44) ) /*0x10107a653*/
            {
              if ( v40 <= v38 ) /*0x10107a9c7*/
              {
                if ( v40 != v38 ) /*0x10107ac3a*/
                  goto LABEL_107; /*0x10107ac3a*/
              }
              else if ( *(char *)(v39 + v38) <= -65 ) /*0x10107a9d1*/
              {
                goto LABEL_107; /*0x10107a9d1*/
              }
            }
            v76 = _$LT$url..parser..SchemeType$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::h35e0610f318d6839( /*0x10107ac43*/
                    v39,
                    *(unsigned int *)(v30 + 44));
            qmemcpy(__s2, a2, sizeof(__s2)); /*0x10107ac5e*/
            v77 = v8; /*0x10107ac6c*/
            v26 = (_QWORD *)v85; /*0x10107ac6f*/
            if ( v76 ) /*0x10107ac4a*/
              url::parser::Parser::parse_relative::h380b2c5b9c671d68(v85, __s2, v77, v16, v76, v30); /*0x10107ac78*/
            else
              url::parser::Parser::parse_file::he86504137708ec98(v85, __s2, v77, v16, v30); /*0x10107aca7*/
            return v26; /*0x10107ac7d*/
          }
LABEL_108:
          v26 = (_QWORD *)v85; /*0x10107a9ea*/
          *(_BYTE *)(v85 + 8) = v42; /*0x10107a9ee*/
          *v26 = 0x8000000000000000LL; /*0x10107a9fb*/
          if ( !*a2 ) /*0x10107aa04*/
            return v26; /*0x10107aa04*/
LABEL_109:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10107aa0e*/
          return v26; /*0x10107aa18*/
        }
      }
      else
      {
LABEL_30:
        if ( !_bittest(&v31, v33) ) /*0x10107a534*/
          goto LABEL_41; /*0x10107a534*/
      }
    }
    v34 = v33 & 0x1F; /*0x10107a558*/
    v35 = v32[1] & 0x3F; /*0x10107a560*/
    if ( (unsigned __int8)v33 <= 0xDFu ) /*0x10107a567*/
    {
      v32 += 2; /*0x10107a5a7*/
      v33 = v35 | (v34 << 6); /*0x10107a5b1*/
      if ( v33 > 0xD ) /*0x10107a5b6*/
        goto LABEL_41; /*0x10107a5b6*/
    }
    else
    {
      v36 = (v35 << 6) | v32[2] & 0x3F; /*0x10107a574*/
      if ( (unsigned __int8)v33 < 0xF0u ) /*0x10107a57a*/
      {
        v32 += 3; /*0x10107a5be*/
        v33 = (v34 << 12) | v36; /*0x10107a5c7*/
        if ( v33 > 0xD ) /*0x10107a5cc*/
          goto LABEL_41; /*0x10107a5cc*/
      }
      else
      {
        v33 = ((v33 & 7) << 18) | (v36 << 6) | v32[3] & 0x3F; /*0x10107a58e*/
        if ( v33 == 1114112 ) /*0x10107a596*/
          goto LABEL_46; /*0x10107a596*/
        v32 += 4; /*0x10107a59c*/
        if ( v33 > 0xD ) /*0x10107a5a3*/
          goto LABEL_41; /*0x10107a5a3*/
      }
    }
    goto LABEL_30; /*0x10107a5a3*/
  }
  qmemcpy(v82, a2, sizeof(v82)); /*0x10107a41d*/
  v19 = v82[2]; /*0x10107a420*/
  if ( HIDWORD(v82[2]) ) /*0x10107a427*/
  {
    v26 = (_QWORD *)v85; /*0x10107a625*/
    *(_BYTE *)(v85 + 8) = 9; /*0x10107a629*/
    *v26 = 0x8000000000000000LL; /*0x10107a637*/
    if ( !v82[0] ) /*0x10107a644*/
      return v26; /*0x10107a644*/
    goto LABEL_109; /*0x10107a644*/
  }
  v20 = v17; /*0x10107a431*/
  v83 = &v82[1]; /*0x10107a438*/
  v21 = _$LT$url..parser..SchemeType$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::h148f01d8723d4332(v82); /*0x10107a448*/
  v22 = v19; /*0x10107a44a*/
  if ( v82[0] == v19 ) /*0x10107a454*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h74c6f500ba1936c4(v82, v19, 1, 1, 1); /*0x10107ad0f*/
    v22 = v82[2]; /*0x10107ad14*/
  }
  v23 = (char *)v82[1]; /*0x10107a45a*/
  *(_BYTE *)(v82[1] + v22) = 58; /*0x10107a45e*/
  v82[2] = v19 + 1; /*0x10107a466*/
  if ( !v21 ) /*0x10107a46c*/
  {
    v43 = v82[6]; /*0x10107a692*/
    if ( v82[6] ) /*0x10107a699*/
    {
      v44 = v82[7]; /*0x10107a69b*/
      __s2[0] = v18; /*0x10107a69f*/
      __s2[1] = v20; /*0x10107a6a6*/
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$url..parser..Pattern$GT$::split_prefix::h30cf01d282740e94( /*0x10107a6c0*/
                               "//::/./",
                               2,
                               __s2) )
        (*(void (__fastcall **)(__int64, __int64))(v44 + 40))(v43, 4); /*0x10107a6d1*/
    }
    v45 = v82[3]; /*0x10107a6d5*/
    if ( !v82[3] ) /*0x10107a6dc*/
      goto LABEL_117; /*0x10107a6dc*/
    v46 = *(unsigned int *)(v82[3] + 44LL); /*0x10107a6e2*/
    if ( !*(_DWORD *)(v82[3] + 44LL) ) /*0x10107a6e2*/
      goto LABEL_117; /*0x10107a6e2*/
    v47 = *(char **)(v82[3] + 8LL); /*0x10107a6ee*/
    v48 = *(_QWORD *)(v82[3] + 16LL); /*0x10107a6f2*/
    if ( v48 <= v46 ) /*0x10107a6f9*/
    {
      if ( v48 != v46 ) /*0x10107aa4b*/
        goto LABEL_143; /*0x10107aa4b*/
    }
    else if ( v47[v46] <= -65 ) /*0x10107a703*/
    {
      goto LABEL_143; /*0x10107a703*/
    }
    if ( (_DWORD)v46 == 4 ) /*0x10107aa54*/
    {
      v69 = memcmp(v47, "file", v46); /*0x10107aa60*/
      v70 = 0; /*0x10107aa65*/
      if ( !v69 ) /*0x10107aa6a*/
        v70 = v45; /*0x10107aa6a*/
    }
    else
    {
LABEL_117:
      v70 = 0; /*0x10107aa70*/
    }
    v82[2] = 0; /*0x10107aa73*/
    qmemcpy(__s2, v82, sizeof(__s2)); /*0x10107aa91*/
    v26 = (_QWORD *)v85; /*0x10107aa94*/
    url::parser::Parser::parse_file::he86504137708ec98(v85, __s2, v18, v20, v70); /*0x10107aaa4*/
    return v26; /*0x10107aaa9*/
  }
  if ( v21 != 2 ) /*0x10107a478*/
  {
    v49 = 0; /*0x10107a70e*/
    v50 = 9728; /*0x10107a710*/
    v51 = (unsigned __int8 *)v18; /*0x10107a715*/
    v52 = (unsigned __int8 *)v18; /*0x10107a718*/
    if ( (unsigned __int8 *)v18 == v20 ) /*0x10107a71e*/
    {
LABEL_77:
      v57 = v82[3]; /*0x10107a82a*/
      if ( v82[3] != 0 && v49 < 2 ) /*0x10107a837*/
      {
        v58 = *(unsigned int *)(v82[3] + 44LL); /*0x10107a842*/
        v59 = *(char **)(v82[3] + 8LL); /*0x10107a846*/
        if ( *(_DWORD *)(v82[3] + 44LL) ) /*0x10107a842*/
        {
          v60 = *(_QWORD *)(v82[3] + 16LL); /*0x10107a853*/
          if ( v60 <= v58 ) /*0x10107a85a*/
          {
            if ( v60 != v58 ) /*0x10107ab20*/
              goto LABEL_143; /*0x10107ab20*/
          }
          else if ( v59[v58] < -64 ) /*0x10107a864*/
          {
LABEL_143:
            core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x10107ad48*/
          }
        }
        if ( v19 && v23[v19] < -64 ) /*0x10107ab30*/
          core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x10107ad6d*/
        if ( v19 == v58 && !memcmp(v59, v23, v19) ) /*0x10107ab45*/
        {
          v82[2] = 0; /*0x10107acb1*/
          qmemcpy(__s2, v82, sizeof(__s2)); /*0x10107accf*/
          v26 = (_QWORD *)v85; /*0x10107acd2*/
          url::parser::Parser::parse_relative::h380b2c5b9c671d68(v85, __s2, v18, v20, 1, v57); /*0x10107aceb*/
          return v26; /*0x10107acf0*/
        }
      }
      v73 = v82[6]; /*0x10107ab4b*/
      if ( v82[6] ) /*0x10107ab52*/
      {
        v84 = v82[7]; /*0x10107ab5c*/
        __s2[0] = v18; /*0x10107ab60*/
        __s2[1] = v20; /*0x10107ab67*/
        LOBYTE(__s2[2]) = 0; /*0x10107ab6e*/
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h7919d37a4b1bd7e6( /*0x10107ab83*/
          v81,
          __s2);
        if ( v81[2] == 2 ) /*0x10107ab90*/
        {
          v74 = *(_WORD *)v81[1] != 12079; /*0x10107aba8*/
          if ( v81[0] ) /*0x10107abaf*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10107abb6*/
          if ( !v74 ) /*0x10107abbe*/
            goto LABEL_135; /*0x10107abbe*/
        }
        else if ( v81[0] ) /*0x10107abcc*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10107abda*/
        }
        (*(void (__fastcall **)(__int64, __int64))(v84 + 40))(v73, 3); /*0x10107abeb*/
      }
LABEL_135:
      qmemcpy(__s2, v82, sizeof(__s2)); /*0x10107ac04*/
      v27 = v85; /*0x10107ac07*/
      v24 = v51; /*0x10107ac0e*/
      v26 = (_QWORD *)v85; /*0x10107ac11*/
      v28 = v20; /*0x10107ac14*/
      v29 = 1; /*0x10107ac17*/
      goto LABEL_136; /*0x10107ac17*/
    }
    while ( 1 ) /*0x10107a780*/
    {
      while ( 1 ) /*0x10107a763*/
      {
        v53 = *v52; /*0x10107a763*/
        if ( (v53 & 0x80u) == 0 ) /*0x10107a76a*/
        {
          ++v52; /*0x10107a730*/
          if ( v53 > 0xD ) /*0x10107a737*/
            goto LABEL_73; /*0x10107a737*/
          goto LABEL_62; /*0x10107a737*/
        }
        v54 = v53 & 0x1F; /*0x10107a76f*/
        v55 = v52[1] & 0x3F; /*0x10107a778*/
        if ( (unsigned __int8)v53 > 0xDFu ) /*0x10107a780*/
          break; /*0x10107a780*/
        v52 += 2; /*0x10107a7cc*/
        v53 = v55 | (v54 << 6); /*0x10107a7d7*/
        if ( v53 > 0xD ) /*0x10107a7de*/
          goto LABEL_73; /*0x10107a7de*/
LABEL_62:
        if ( !_bittest(&v50, v53) ) /*0x10107a747*/
          goto LABEL_73; /*0x10107a747*/
LABEL_63:
        if ( v52 == v20 ) /*0x10107a75d*/
          goto LABEL_77; /*0x10107a75d*/
      }
      v56 = (v55 << 6) | v52[2] & 0x3F; /*0x10107a78f*/
      if ( (unsigned __int8)v53 < 0xF0u ) /*0x10107a796*/
      {
        v52 += 3; /*0x10107a7e6*/
        v53 = (v54 << 12) | v56; /*0x10107a7f1*/
        if ( v53 > 0xD ) /*0x10107a7f8*/
          goto LABEL_73; /*0x10107a7f8*/
        goto LABEL_62; /*0x10107a7f8*/
      }
      v53 = ((v53 & 7) << 18) | (v56 << 6) | v52[3] & 0x3F; /*0x10107a7b0*/
      if ( v53 == 1114112 ) /*0x10107a7ba*/
        goto LABEL_77; /*0x10107a7ba*/
      v52 += 4; /*0x10107a7bc*/
      if ( v53 <= 0xD ) /*0x10107a7c4*/
        goto LABEL_62; /*0x10107a7c4*/
LABEL_73:
      if ( v53 == 1114112 ) /*0x10107a80a*/
        goto LABEL_63; /*0x10107a80a*/
      if ( v53 == 92 || v53 == 47 ) /*0x10107a81a*/
      {
        ++v49; /*0x10107a81c*/
        v51 = v52; /*0x10107a81e*/
        if ( v52 != v20 ) /*0x10107a824*/
          continue; /*0x10107a824*/
      }
      goto LABEL_77; /*0x10107a824*/
    }
  }
  qmemcpy(v81, v82, sizeof(v81)); /*0x10107a491*/
  __s2[0] = v18; /*0x10107a494*/
  __s2[1] = v20; /*0x10107a49b*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$url..parser..Pattern$GT$::split_prefix::h30cf01d282740e94( /*0x10107a4b5*/
                          "//::/./",
                          2,
                          __s2) )
  {
    v24 = (unsigned __int8 *)__s2[0]; /*0x10107a4c2*/
    v25 = (unsigned __int8 *)__s2[1]; /*0x10107a4c9*/
    qmemcpy(__s2, v82, sizeof(__s2)); /*0x10107a4e6*/
    v26 = (_QWORD *)v85; /*0x10107a4e9*/
    v27 = v85; /*0x10107a4ed*/
    v28 = v25; /*0x10107a4f3*/
    v29 = 2; /*0x10107a4f6*/
LABEL_136:
    url::parser::Parser::after_double_slash::he685f89963893443(v27, __s2, v24, v28, v29, (unsigned int)v19); /*0x10107ac1d*/
    return v26; /*0x10107ac20*/
  }
  v61 = v81[2]; /*0x10107a86f*/
  if ( HIDWORD(v81[2]) ) /*0x10107a879*/
  {
    v26 = (_QWORD *)v85; /*0x10107aa1d*/
    *(_BYTE *)(v85 + 8) = 9; /*0x10107aa21*/
    *v26 = 0x8000000000000000LL; /*0x10107aa2f*/
    if ( !v81[0] ) /*0x10107aa3c*/
      return v26; /*0x10107aa3c*/
    goto LABEL_109; /*0x10107aa3c*/
  }
  v83 = &v81[1]; /*0x10107a88a*/
  v79[0] = 0; /*0x10107a88e*/
  v62 = 9728; /*0x10107a895*/
  v63 = (unsigned __int8 *)v18; /*0x10107a89a*/
  do /*0x10107a959*/
  {
    while ( 1 ) /*0x10107a8c5*/
    {
      if ( v63 == v20 ) /*0x10107a8c8*/
        goto LABEL_119; /*0x10107a8c8*/
      v64 = *v63; /*0x10107a8ce*/
      if ( (v64 & 0x80u) == 0 ) /*0x10107a8d5*/
      {
        ++v63; /*0x10107a89f*/
        if ( v64 > 0xD ) /*0x10107a8a5*/
          goto LABEL_96; /*0x10107a8a5*/
        goto LABEL_85; /*0x10107a8a5*/
      }
      v65 = v64 & 0x1F; /*0x10107a8d9*/
      v66 = v63[1] & 0x3F; /*0x10107a8e1*/
      if ( (unsigned __int8)v64 > 0xDFu ) /*0x10107a8e7*/
        break; /*0x10107a8e7*/
      v63 += 2; /*0x10107a927*/
      v64 = v66 | (v65 << 6); /*0x10107a930*/
      if ( v64 > 0xD ) /*0x10107a935*/
        goto LABEL_96; /*0x10107a935*/
LABEL_85:
      if ( !_bittest(&v62, v64) ) /*0x10107a8b3*/
        goto LABEL_96; /*0x10107a8b3*/
    }
    v67 = (v66 << 6) | v63[2] & 0x3F; /*0x10107a8f4*/
    if ( (unsigned __int8)v64 < 0xF0u ) /*0x10107a8f9*/
    {
      v63 += 3; /*0x10107a93d*/
      v64 = (v65 << 12) | v67; /*0x10107a946*/
      if ( v64 > 0xD ) /*0x10107a94b*/
        continue; /*0x10107a94b*/
      goto LABEL_85; /*0x10107a94b*/
    }
    v64 = ((v64 & 7) << 18) | (v67 << 6) | v63[3] & 0x3F; /*0x10107a90e*/
    if ( v64 == 1114112 ) /*0x10107a916*/
      goto LABEL_119; /*0x10107a916*/
    v63 += 4; /*0x10107a91c*/
    if ( v64 <= 0xD ) /*0x10107a923*/
      goto LABEL_85; /*0x10107a923*/
LABEL_96:
    ; /*0x10107a951*/
  }
  while ( v64 == 1114112 ); /*0x10107a959*/
  if ( v64 != 47 ) /*0x10107a962*/
  {
LABEL_119:
    url::parser::Parser::parse_cannot_be_a_base_path::he0acea53af386145(v81, v18, v20); /*0x10107aaae*/
    goto LABEL_120; /*0x10107aabb*/
  }
  v68 = v81[2]; /*0x10107a968*/
  if ( v81[0] == v81[2] ) /*0x10107a972*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h74c6f500ba1936c4(v81, v81[2], 1, 1, 1); /*0x10107ad37*/
    v68 = v81[2]; /*0x10107ad3c*/
  }
  *(_BYTE *)(v81[1] + v68) = 47; /*0x10107a97f*/
  v81[2] = v61 + 1; /*0x10107a987*/
  url::parser::Parser::parse_path::hb91a1e5d444d1e32(v81, v61, v63, v20); /*0x10107a99e*/
LABEL_120:
  qmemcpy(__s2, v81, sizeof(__s2)); /*0x10107aad6*/
  v78 = v61; /*0x10107aaf3*/
  v71 = v61; /*0x10107ab0d*/
  v72 = v61; /*0x10107ab10*/
  v26 = (_QWORD *)v85; /*0x10107ab13*/
  url::parser::Parser::with_query_and_fragment::h63c58da71bf70cdd( /*0x10107ab16*/
    v85,
    (unsigned int)__s2,
    2,
    v19,
    v71,
    v72,
    v78,
    (__int64)v79,
    0);
  return v26; /*0x10107ac28*/
}