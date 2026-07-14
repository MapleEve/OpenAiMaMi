// mac 1.1.8 behavioral persist_account_auth 0x100521980 d=0
_QWORD *__fastcall codexmate_lib::core::account_io::persist_account_auth::h3ebd5f4ac0a747db(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        __m128i a6)
{
  __int64 *v7; // r15
  _UNKNOWN **v8; // rax
  unsigned __int64 v9; // rax
  const __m128i *v10; // r8
  __int64 v11; // r9
  __int8 *v12; // rsi
  void *v13; // r13
  size_t v14; // r14
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  __m128i v17; // xmm3
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  size_t v23; // rax
  void *v24; // rcx
  size_t v25; // r8
  void *v26; // r14
  size_t v27; // r13
  int v28; // eax
  char v29; // al
  double v30; // xmm0_8
  __int64 v31; // r14
  _QWORD *v32; // r12
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v38; // r12
  const __m128i *v39; // r13
  const __m128i *v41; // r15
  int v42; // r14d
  char v44; // dl
  int v45; // r8d
  _BYTE *v46[28]; // [rsp+0h] [rbp-650h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-570h]
  __int64 v48; // [rsp+E8h] [rbp-568h]
  __int64 v49; // [rsp+F8h] [rbp-558h]
  __int64 v50; // [rsp+100h] [rbp-550h]
  _QWORD v51[12]; // [rsp+2D0h] [rbp-380h] BYREF
  __int64 v52; // [rsp+330h] [rbp-320h] BYREF
  _QWORD v53[13]; // [rsp+338h] [rbp-318h] BYREF
  __m128i v54; // [rsp+3A0h] [rbp-2B0h] BYREF
  __m128i v55; // [rsp+3B0h] [rbp-2A0h] BYREF
  size_t v56[3]; // [rsp+3C0h] [rbp-290h] BYREF
  _BYTE v57[104]; // [rsp+3D8h] [rbp-278h] BYREF
  __int64 v58; // [rsp+440h] [rbp-210h]
  __int64 *v59; // [rsp+448h] [rbp-208h]
  __int64 v60; // [rsp+450h] [rbp-200h]
  __int64 v61; // [rsp+458h] [rbp-1F8h]
  __int64 v62; // [rsp+460h] [rbp-1F0h]
  __int64 v63; // [rsp+468h] [rbp-1E8h]
  const __m128i *v64; // [rsp+470h] [rbp-1E0h] BYREF
  __int64 v65; // [rsp+478h] [rbp-1D8h]
  __int64 v66; // [rsp+488h] [rbp-1C8h]
  char v67[16]; // [rsp+490h] [rbp-1C0h] BYREF
  unsigned __int64 v68; // [rsp+4A0h] [rbp-1B0h]
  __int64 v69; // [rsp+4A8h] [rbp-1A8h]
  const __m128i *v70; // [rsp+4B0h] [rbp-1A0h]
  __int64 v71; // [rsp+4B8h] [rbp-198h]
  _QWORD v72[12]; // [rsp+4C0h] [rbp-190h] BYREF
  __int64 v73; // [rsp+520h] [rbp-130h] BYREF
  _QWORD v74[13]; // [rsp+528h] [rbp-128h] BYREF
  __int64 *v75; // [rsp+590h] [rbp-C0h]
  __int64 v76; // [rsp+598h] [rbp-B8h]
  __int64 v77; // [rsp+5A0h] [rbp-B0h]
  __int64 v78; // [rsp+5A8h] [rbp-A8h]
  __int64 v79; // [rsp+5B0h] [rbp-A0h]
  _QWORD v80[3]; // [rsp+5B8h] [rbp-98h] BYREF
  __int64 v81; // [rsp+5D0h] [rbp-80h] BYREF
  char *v82; // [rsp+5D8h] [rbp-78h] BYREF
  void *v83; // [rsp+5E0h] [rbp-70h]
  size_t v84; // [rsp+5E8h] [rbp-68h]
  __int64 v85; // [rsp+5F0h] [rbp-60h]
  __int64 v86; // [rsp+5F8h] [rbp-58h]
  size_t v87; // [rsp+600h] [rbp-50h] BYREF
  void *__s1; // [rsp+608h] [rbp-48h]
  size_t __n; // [rsp+610h] [rbp-40h]
  char v90; // [rsp+61Fh] [rbp-31h] BYREF
  char *v91; // [rsp+620h] [rbp-30h]

  v7 = a2; /*0x100521997*/
  _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::ha049832356bd4e2b(v46); /*0x1005219a7*/
  v8 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(v46); /*0x1005219af*/
  if ( v8 ) /*0x1005219b7*/
  {
    *a1 = 2; /*0x1005219b9*/
    a1[1] = v8; /*0x1005219c0*/
    goto LABEL_71; /*0x1005219c4*/
  }
  codexmate_lib::core::auth::make_auth_snapshot::h359af250f486fc29(v57, a3, &unk_1012C86D0, 16); /*0x1005219df*/
  qmemcpy(v72, &v57[8], sizeof(v72)); /*0x1005219fe*/
  if ( *(_QWORD *)v57 == 2 ) /*0x100521a05*/
  {
    qmemcpy(a1, v72, 0x60u); /*0x100521a16*/
    a2 = &v73; /*0x100521a16*/
    goto LABEL_71; /*0x100521a16*/
  }
  v79 = v63; /*0x100521a25*/
  v78 = v62; /*0x100521a33*/
  v77 = v61; /*0x100521a41*/
  v76 = v60; /*0x100521a4f*/
  v75 = v59; /*0x100521a64*/
  v74[12] = v58; /*0x100521a6b*/
  qmemcpy(v74, v72, 0x60u); /*0x100521a85*/
  v73 = *(_QWORD *)v57; /*0x100521a88*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v87, (__int64)&v74[1]); /*0x100521a9d*/
  if ( !(unsigned __int8)codexmate_lib::core::account_io::is_valid_account_key::h7c77c693df6d6d69(__s1, __n) ) /*0x100521ab1*/
  {
    *(_QWORD *)v57 = &v87; /*0x100521c23*/
    *(_QWORD *)&v57[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100521c31*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v56, byte_10122ACEB, (unsigned __int64)v57); /*0x100521c4d*/
    a1[3] = v56[2]; /*0x100521c59*/
    v23 = v56[0]; /*0x100521c5d*/
    a1[2] = v56[1]; /*0x100521c6b*/
    a1[1] = v23; /*0x100521c6f*/
    *a1 = 8; /*0x100521c73*/
LABEL_54:
    if ( v87 ) /*0x1005220d7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005220e2*/
    if ( v74[1] ) /*0x1005220f1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005220ff*/
    if ( !v74[4] ) /*0x10052210e*/
      goto LABEL_62; /*0x10052210e*/
    goto LABEL_61; /*0x10052210e*/
  }
  codexmate_lib::core::account_io::read_registry_or_empty_keys::he79c1dd15142f480(&v64, v47, v48); /*0x100521acc*/
  codexmate_lib::core::account_io::read_active_account_key::h586215c6cc58c2dd(&v82, v47, v48); /*0x100521ae3*/
  v85 = v66; /*0x100521af2*/
  if ( v66 ) /*0x100521af6*/
  {
    v9 = core::hash::BuildHasher::hash_one::hf01745fa5506c7f9(v67, &v87); /*0x100521b07*/
    v10 = v64; /*0x100521b13*/
    v11 = v65; /*0x100521b1a*/
    a5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v9 >> 57), (__m128i)0LL); /*0x100521b29*/
    v12 = &v64[-2].i8[8]; /*0x100521b2e*/
    v13 = __s1; /*0x100521b32*/
    v14 = __n; /*0x100521b36*/
    v15 = 0; /*0x100521b3a*/
    a6 = (__m128i)-1LL; /*0x100521b3d*/
    while ( 1 ) /*0x100521b41*/
    {
      v16 = v11 & v9; /*0x100521b41*/
      v17 = _mm_loadu_si128((const __m128i *)((char *)v10 + v16)); /*0x100521b44*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, a5)); /*0x100521b52*/
      if ( (_DWORD)_RCX ) /*0x100521b58*/
        break; /*0x100521b58*/
LABEL_13:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v17, a6)) ) /*0x100521c0d*/
        goto LABEL_16; /*0x100521c13*/
      v9 = v16 + v15 + 16; /*0x100521c15*/
      v15 += 16; /*0x100521c1a*/
    }
    v68 = v16; /*0x100521b5e*/
    v69 = v11; /*0x100521b65*/
    v54 = a5; /*0x100521b6c*/
    v70 = v10; /*0x100521b74*/
    v71 = v15; /*0x100521b7b*/
    v55 = v17; /*0x100521b82*/
    while ( 1 ) /*0x100521b8a*/
    {
      v86 = _RCX; /*0x100521b8a*/
      __asm { tzcnt ecx, ecx } /*0x100521b8e*/
      v19 = -(__int64)(v11 & (v16 + _RCX)); /*0x100521b98*/
      if ( v14 == *(_QWORD *)&v12[24 * v19 + 16] ) /*0x100521ba4*/
      {
        v91 = v12; /*0x100521baa*/
        v20 = memcmp(v13, *(const void **)&v12[24 * v19 + 8], v14); /*0x100521bb8*/
        v12 = v91; /*0x100521bbd*/
        LOBYTE(v21) = 1; /*0x100521bc1*/
        if ( !v20 ) /*0x100521bc5*/
          break; /*0x100521bc5*/
      }
      v22 = v86 - 1; /*0x100521bcf*/
      LOWORD(v22) = v86 & (v86 - 1); /*0x100521bd2*/
      _RCX = v22; /*0x100521bd5*/
      v16 = v68; /*0x100521bd7*/
      v11 = v69; /*0x100521bde*/
      a5 = _mm_load_si128(&v54); /*0x100521be5*/
      v10 = v70; /*0x100521bed*/
      v15 = v71; /*0x100521bf4*/
      a6 = (__m128i)-1LL; /*0x100521bfb*/
      v17 = _mm_load_si128(&v55); /*0x100521bff*/
      if ( ((unsigned __int16)v86 & (unsigned __int16)(v86 - 1)) == 0 ) /*0x100521c07*/
        goto LABEL_13; /*0x100521c07*/
    }
  }
  else
  {
LABEL_16:
    v21 = 0; /*0x100521c89*/
  }
  LODWORD(v86) = v21; /*0x100521c8b*/
  v91 = v82; /*0x100521c9f*/
  if ( v82 == (char *)0x8000000000000000LL ) /*0x100521ca3*/
  {
    v24 = __s1; /*0x100521ca5*/
    v25 = __n; /*0x100521ca9*/
  }
  else
  {
    v24 = __s1; /*0x100521cb6*/
    if ( v84 == __n ) /*0x100521cc1*/
    {
      v26 = __s1; /*0x100521cce*/
      v27 = v84; /*0x100521cd1*/
      v28 = memcmp(v83, __s1, v84); /*0x100521cd4*/
      v25 = v27; /*0x100521cd9*/
      v24 = v26; /*0x100521cdc*/
      if ( !v28 ) /*0x100521ce8*/
      {
        *(_QWORD *)&v57[16] = __n; /*0x100521cf2*/
        *(_QWORD *)&v57[8] = __s1; /*0x100521d01*/
        *(_QWORD *)v57 = v87; /*0x100521d08*/
        *(_QWORD *)&v57[24] = v74[4]; /*0x100521d1d*/
        *(_QWORD *)&v57[32] = v74[5]; /*0x100521d24*/
        *(_QWORD *)&v57[40] = v74[6]; /*0x100521d32*/
        v29 = BYTE2(v79); /*0x100521d39*/
        *(_QWORD *)&v57[48] = v82; /*0x100521d48*/
        *(_QWORD *)&v57[56] = v83; /*0x100521d4f*/
        *(_QWORD *)&v57[64] = v84; /*0x100521d5a*/
        qmemcpy(a1 + 1, v57, 0x48u); /*0x100521d71*/
        *((_DWORD *)a1 + 20) = v85; /*0x100521d78*/
        *((_BYTE *)a1 + 84) = 2; /*0x100521d7b*/
        *((_BYTE *)a1 + 85) = v29; /*0x100521d7f*/
        *a1 = 10; /*0x100521d82*/
        LODWORD(v7) = 0; /*0x100521d89*/
        goto LABEL_42; /*0x100521d96*/
      }
    }
    else
    {
      v25 = __n; /*0x100521d9b*/
    }
  }
  v30 = codexmate_lib::core::account_io::make_snapshot_path::hac8fc92af1f6b2a1( /*0x100521dba*/
          (unsigned __int64)v80,
          v49,
          v50,
          (__int64)v24,
          v25);
  serde_json::ser::to_vec_pretty::hcfcca9cecb956427(v51, a3, v30, *(double *)a5.i64, *(double *)a6.i64); /*0x100521dc9*/
  v31 = v51[0]; /*0x100521dce*/
  v32 = (_QWORD *)v51[1]; /*0x100521dd5*/
  if ( v51[0] == 0x8000000000000000LL ) /*0x100521de9*/
  {
    v81 = v51[1]; /*0x100521def*/
    v72[0] = 0; /*0x100521df3*/
    v72[1] = 1; /*0x100521dfe*/
    v72[2] = 0; /*0x100521e09*/
    *(_QWORD *)&v57[16] = 1610612768; /*0x100521e14*/
    *(_QWORD *)v57 = v72; /*0x100521e1f*/
    *(_QWORD *)&v57[8] = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x100521e2d*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x100521e3f*/
                            &v81,
                            v57) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10052236d*/
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
        55,
        (__int64)&v90,
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
        (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
    v33 = v72[0]; /*0x100521e4c*/
    v7 = (__int64 *)v72[1]; /*0x100521e53*/
    v34 = v72[2]; /*0x100521e5a*/
    if ( *v32 == 1 ) /*0x100521e69*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v32 + 1); /*0x100521f64*/
    }
    else if ( !*v32 && v32[2] ) /*0x100521e78*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521e90*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521f76*/
    a1[1] = v33; /*0x100521f7b*/
    a1[2] = v7; /*0x100521f7f*/
    a1[3] = v34; /*0x100521f83*/
    *a1 = 8; /*0x100521f87*/
    goto LABEL_37; /*0x100521f87*/
  }
  v35 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x100521eb5*/
          (_QWORD **)v80[1],
          v80[2],
          v51[1],
          v51[2],
          v30);
  if ( v35 ) /*0x100521ebd*/
  {
    *a1 = 2; /*0x100521ebf*/
    a1[1] = v35; /*0x100521ec6*/
    if ( !v31 ) /*0x100521ecd*/
      goto LABEL_37; /*0x100521ecd*/
    goto LABEL_34; /*0x100521ecd*/
  }
  codexmate_lib::core::repository::Repository::rebuild_registry::heba324196402b596(&v52, v7); /*0x100521ede*/
  v36 = v52; /*0x100521ee3*/
  v7 = v53; /*0x100521eea*/
  if ( v52 == 0x8000000000000000LL ) /*0x100521efe*/
  {
    qmemcpy(v72, v53, sizeof(v72)); /*0x100521f16*/
    codexmate_lib::core::account_io::persist_account_auth::_$u7b$$u7b$closure$u7d$$u7d$::hcb5b48c68654a222(v51, v72); /*0x100521f23*/
    qmemcpy(v53, v51, 0x60u); /*0x100521f37*/
    qmemcpy(a1, v53, 0x60u); /*0x100521f45*/
    if ( !v31 ) /*0x100521f4b*/
    {
LABEL_37:
      if ( v80[0] ) /*0x100521f98*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521fa6*/
      LOBYTE(v7) = 1; /*0x100521fab*/
      if ( v91 != (char *)0x8000000000000000LL && v91 ) /*0x100521fc4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521fcf*/
LABEL_42:
      HIDWORD(_RAX) = HIDWORD(v65); /*0x100521fd4*/
      if ( v65 ) /*0x100521fde*/
      {
        v85 = v65; /*0x100521fe4*/
        LODWORD(v91) = (_DWORD)v7; /*0x100521fe8*/
        v38 = v66; /*0x100521fec*/
        if ( v66 ) /*0x100521ff6*/
        {
          v39 = v64; /*0x100521ffc*/
          _R14D = ~_mm_movemask_epi8(_mm_load_si128(v64)); /*0x10052200e*/
          v41 = v64 + 1; /*0x100522011*/
          do /*0x100522030*/
          {
            if ( !(_WORD)_R14D ) /*0x100522036*/
            {
              do /*0x10052205c*/
              {
                v42 = _mm_movemask_epi8(_mm_load_si128(v41)); /*0x100522045*/
                v39 -= 24; /*0x10052204a*/
                ++v41; /*0x100522051*/
              }
              while ( v42 == 0xFFFF ); /*0x10052205c*/
              _R14D = ~v42; /*0x10052205e*/
            }
            __asm { tzcnt eax, r14d } /*0x100522061*/
            if ( *((_QWORD *)&v39[-1] - 3 * _RAX - 1) ) /*0x10052206d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522085*/
            --v38; /*0x100522020*/
            _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100522027*/
            _R14D &= _R14D - 1; /*0x10052202a*/
          }
          while ( v38 ); /*0x100522030*/
        }
        LOBYTE(v7) = (_BYTE)v91; /*0x1005220b1*/
        if ( ((24 * v85 + 39) & 0xFFFFFFFFFFFFFFF0LL) + v85 != -17 ) /*0x1005220b5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005220c6*/
      }
      if ( !(_BYTE)v7 ) /*0x1005220ce*/
      {
        if ( !v74[1] ) /*0x100522123*/
          goto LABEL_62; /*0x100522123*/
        goto LABEL_61; /*0x100522123*/
      }
      goto LABEL_54; /*0x1005220ce*/
    }
LABEL_34:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521f4d*/
    goto LABEL_37; /*0x100521f5d*/
  }
  qmemcpy(&v57[8], v53, 0x60u); /*0x1005221d6*/
  *(_QWORD *)v57 = v52; /*0x1005221d9*/
  v58 = v53[12]; /*0x1005221e0*/
  v72[2] = __n; /*0x1005221eb*/
  v72[1] = __s1; /*0x1005221fa*/
  v72[0] = v87; /*0x100522201*/
  v72[3] = v74[4]; /*0x100522216*/
  v72[4] = v74[5]; /*0x10052221d*/
  v72[5] = v74[6]; /*0x10052222b*/
  v44 = BYTE2(v79); /*0x100522232*/
  v45 = *(_DWORD *)&v57[96]; /*0x100522239*/
  v72[6] = v53[8]; /*0x10052224e*/
  v72[7] = v53[9]; /*0x100522255*/
  v72[8] = v53[10]; /*0x100522263*/
  qmemcpy(a1 + 1, v72, 0x48u); /*0x10052227a*/
  *((_DWORD *)a1 + 20) = v45; /*0x10052227d*/
  *((_BYTE *)a1 + 84) = v86; /*0x100522284*/
  *((_BYTE *)a1 + 85) = v44; /*0x100522287*/
  *a1 = 10; /*0x10052228a*/
  if ( v36 ) /*0x100522294*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005222a5*/
  if ( *(_QWORD *)&v57[24] ) /*0x1005222b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005222c2*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..models..CoreWarning$GT$$GT$::h1567c5478d50eb93(&v57[48]); /*0x1005222ce*/
  if ( v31 ) /*0x1005222d6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005222e3*/
  if ( v80[0] ) /*0x1005222f2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005222fc*/
  if ( v91 != (char *)0x8000000000000000LL && v91 ) /*0x100522317*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522322*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h96d53e17d4e72df3(&v64); /*0x10052232e*/
  if ( !v74[1] ) /*0x10052233d*/
    goto LABEL_62; /*0x10052233d*/
LABEL_61:
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052212f*/
LABEL_62:
  if ( v74[7] != 0x8000000000000000LL && v74[7] ) /*0x100522148*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522156*/
  if ( v74[10] != 0x8000000000000000LL && v74[10] ) /*0x10052216a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100522178*/
  a2 = v75; /*0x10052217d*/
  if ( v75 != (__int64 *)0x8000000000000000LL && v75 ) /*0x10052218c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10052219a*/
LABEL_71:
  core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::haaba8b954ba2bc2e(v46, a2); /*0x10052219f*/
  return a1; /*0x1005221ae*/
}