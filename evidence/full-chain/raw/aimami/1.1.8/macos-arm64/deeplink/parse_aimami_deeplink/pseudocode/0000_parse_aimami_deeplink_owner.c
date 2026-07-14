// mac 1.1.8 parse_aimami_deeplink node va=0x100694a90 depth=0
// parse_aimami_deeplink_owner
__int64 __fastcall codexmate_lib::commands::deeplink::parse_aimami_deeplink::h39ef5a3b45ea0d85(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  size_t v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 *v15; // r14
  char v16; // al
  _QWORD *v17; // rax
  __int64 v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // r14
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  size_t v29; // rdx
  __int64 v30; // r9
  __int64 *v31; // r14
  __int64 v32; // rbx
  __int128 v33; // xmm1
  _QWORD v34[5]; // [rsp+8h] [rbp-3D8h] BYREF
  _QWORD v35[15]; // [rsp+30h] [rbp-3B0h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp-338h] BYREF
  _QWORD v37[3]; // [rsp+C0h] [rbp-320h] BYREF
  _QWORD v38[3]; // [rsp+D8h] [rbp-308h] BYREF
  _QWORD v39[3]; // [rsp+F0h] [rbp-2F0h] BYREF
  _QWORD v40[2]; // [rsp+108h] [rbp-2D8h] BYREF
  _QWORD v41[2]; // [rsp+118h] [rbp-2C8h] BYREF
  __int64 v42; // [rsp+128h] [rbp-2B8h]
  __int64 v43; // [rsp+130h] [rbp-2B0h]
  __int64 v44; // [rsp+138h] [rbp-2A8h]
  _QWORD *v45; // [rsp+140h] [rbp-2A0h]
  __int64 v46; // [rsp+148h] [rbp-298h]
  __int64 v47; // [rsp+150h] [rbp-290h]
  void *__src; // [rsp+158h] [rbp-288h]
  _QWORD *v49; // [rsp+160h] [rbp-280h] BYREF
  _QWORD v50[10]; // [rsp+168h] [rbp-278h] BYREF
  _QWORD *v51; // [rsp+1B8h] [rbp-228h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+1C0h] [rbp-220h]
  __int128 v53; // [rsp+1C8h] [rbp-218h]
  __int64 v54; // [rsp+1D8h] [rbp-208h]
  size_t __n; // [rsp+1E0h] [rbp-200h]
  __int64 v56; // [rsp+1E8h] [rbp-1F8h]
  __int64 v57; // [rsp+1F0h] [rbp-1F0h]
  __int64 v58; // [rsp+1F8h] [rbp-1E8h]
  __int64 v59; // [rsp+200h] [rbp-1E0h]
  __int64 v60; // [rsp+208h] [rbp-1D8h]
  _QWORD v61[6]; // [rsp+210h] [rbp-1D0h] BYREF
  __int64 v62; // [rsp+240h] [rbp-1A0h] BYREF
  __int64 v63; // [rsp+248h] [rbp-198h]
  __int64 v64; // [rsp+250h] [rbp-190h]
  __int64 v65; // [rsp+258h] [rbp-188h]
  _BYTE __s1[200]; // [rsp+260h] [rbp-180h] BYREF
  _QWORD *v67; // [rsp+328h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+330h] [rbp-B0h]
  __int64 v69; // [rsp+338h] [rbp-A8h]
  __int64 v70; // [rsp+340h] [rbp-A0h]
  __int64 v71; // [rsp+348h] [rbp-98h] BYREF
  __int64 v72; // [rsp+350h] [rbp-90h]
  __int64 v73; // [rsp+358h] [rbp-88h]
  __int64 v74; // [rsp+360h] [rbp-80h]
  size_t v75; // [rsp+368h] [rbp-78h] BYREF
  _DWORD *v76; // [rsp+370h] [rbp-70h]
  unsigned __int64 v77; // [rsp+378h] [rbp-68h]
  __int64 *v78; // [rsp+380h] [rbp-60h]
  __int64 v79; // [rsp+388h] [rbp-58h]
  __int64 v80; // [rsp+390h] [rbp-50h]
  size_t v81; // [rsp+398h] [rbp-48h]
  size_t v82; // [rsp+3A0h] [rbp-40h]
  size_t v83; // [rsp+3A8h] [rbp-38h]
  unsigned __int64 v84; // [rsp+3B0h] [rbp-30h]

  v2 = a2[1]; /*0x100694aaa*/
  v3 = a2[2]; /*0x100694aae*/
  v34[4] = 0; /*0x100694ab2*/
  v34[0] = 0; /*0x100694abd*/
  v34[2] = 0; /*0x100694ac8*/
  v65 = v2; /*0x100694ae1*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(__s1, v34, v2, v3); /*0x100694ae8*/
  v78 = a2; /*0x100694afa*/
  if ( __OFSUB__(-*(_QWORD *)__s1, 1) ) /*0x100694af7*/
  {
    LOBYTE(v67) = __s1[8]; /*0x100694b07*/
    v61[0] = &v67; /*0x100694b14*/
    v61[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x100694b22*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v50, &unk_10122DF25, v61); /*0x100694b3e*/
    v4 = v50[0]; /*0x100694b43*/
    v5 = v50[1]; /*0x100694b4a*/
    v6 = v50[2]; /*0x100694b51*/
    v7 = 0; /*0x100694b58*/
LABEL_19:
    v12 = v7; /*0x100694cd2*/
    v13 = v5; /*0x100694cd5*/
    v14 = v6; /*0x100694cd8*/
    goto LABEL_20; /*0x100694cd8*/
  }
  v8 = *(_QWORD **)&__s1[8]; /*0x100694b5f*/
  v9 = *(_QWORD *)&__s1[16]; /*0x100694b66*/
  __n = *(_QWORD *)&__s1[40]; /*0x100694b7b*/
  v56 = *(_QWORD *)&__s1[48]; /*0x100694b89*/
  v57 = *(_QWORD *)&__s1[56]; /*0x100694b97*/
  v58 = *(_QWORD *)&__s1[64]; /*0x100694ba5*/
  v59 = *(_QWORD *)&__s1[72]; /*0x100694bb3*/
  v60 = *(_QWORD *)&__s1[80]; /*0x100694bc1*/
  v52 = *(__int64 (__fastcall **)())&__s1[8]; /*0x100694bcf*/
  v53 = *(_OWORD *)&__s1[16]; /*0x100694bd6*/
  v54 = *(_QWORD *)&__s1[32]; /*0x100694bdd*/
  v51 = *(_QWORD **)__s1; /*0x100694be4*/
  v10 = *(unsigned int *)&__s1[44]; /*0x100694beb*/
  v79 = *(_QWORD *)__s1; /*0x100694bf5*/
  if ( !*(_DWORD *)&__s1[44] ) /*0x100694bf9*/
  {
LABEL_14:
    v49 = v8; /*0x100694c55*/
    v50[0] = v10; /*0x100694c5c*/
    *(_QWORD *)__s1 = &v49; /*0x100694c6a*/
    *(_QWORD *)&__s1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100694c78*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_10122DF01, __s1); /*0x100694c94*/
    v4 = v39[0]; /*0x100694c99*/
    v5 = v39[1]; /*0x100694ca0*/
    v11 = v39[2]; /*0x100694ca7*/
LABEL_15:
    v84 = v11; /*0x100694cae*/
    v7 = 0; /*0x100694cb2*/
LABEL_16:
    if ( v79 ) /*0x100694cbb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v79, 1); /*0x100694cc9*/
    v6 = v84; /*0x100694cce*/
    goto LABEL_19; /*0x100694cce*/
  }
  if ( *(_QWORD *)&__s1[16] <= (unsigned __int64)*(unsigned int *)&__s1[44] ) /*0x100694bfe*/
  {
    if ( *(_QWORD *)&__s1[16] != *(unsigned int *)&__s1[44] ) /*0x100694c09*/
      goto LABEL_12; /*0x100694c09*/
  }
  else if ( *(char *)(*(_QWORD *)&__s1[8] + *(unsigned int *)&__s1[44]) <= -65 ) /*0x100694c05*/
  {
LABEL_12:
    core::str::slice_error_fail::h480e51fbd8b15eba(v8, v9, 0, v10, &off_1015376B0); /*0x100694c37*/
  }
  if ( *(_DWORD *)&__s1[44] != 6 || memcmp(*(const void **)&__s1[8], "aimami", 6u) ) /*0x100694c1e*/
  {
    if ( v9 <= v10 ) /*0x100694c2e*/
    {
      if ( v9 != v10 ) /*0x100694c53*/
        goto LABEL_12; /*0x100694c53*/
    }
    else if ( *((char *)v8 + v10) <= -65 ) /*0x100694c35*/
    {
      goto LABEL_12; /*0x100694c35*/
    }
    goto LABEL_14; /*0x100694c35*/
  }
  v20 = url::Url::host_str::h951633b861c322f2(&v51); /*0x100694e6d*/
  v22 = v21; /*0x100694e72*/
  v23 = 1; /*0x100694e78*/
  if ( v20 ) /*0x100694e7e*/
    v23 = v20; /*0x100694e7e*/
  else
    v22 = 0; /*0x100694e82*/
  v41[0] = v23; /*0x100694e86*/
  v41[1] = v22; /*0x100694e8d*/
  v24 = (_DWORD *)url::Url::path::hdacd300d547f5011(&v51); /*0x100694e9b*/
  v40[0] = v24; /*0x100694ea0*/
  v40[1] = v25; /*0x100694ea7*/
  if ( v22 != 2 || v25 != 7 || *(_WORD *)v23 != 12662 || *v24 ^ 0x706D692F | *(_DWORD *)((char *)v24 + 3) ^ 0x74726F70 ) /*0x100694ed7*/
  {
    *(_QWORD *)__s1 = v41; /*0x100694ee2*/
    *(_QWORD *)&__s1[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100694ef0*/
    *(_QWORD *)&__s1[16] = v40; /*0x100694efe*/
    *(_QWORD *)&__s1[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100694f05*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v38, &unk_10122DEDA, __s1); /*0x100694f21*/
    v4 = v38[0]; /*0x100694f26*/
    v5 = v38[1]; /*0x100694f2d*/
    v11 = v38[2]; /*0x100694f34*/
    goto LABEL_15; /*0x100694f3b*/
  }
  v26 = url::Url::query::h1af7b45471000a3f(&v51); /*0x100694f47*/
  v28 = 1; /*0x100694f4f*/
  if ( v26 ) /*0x100694f54*/
    v28 = v26; /*0x100694f54*/
  else
    v27 = 0; /*0x100694f58*/
  _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h40523b948e4f9760( /*0x100694f63*/
    v61,
    v28,
    v27);
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h544c848713c4c9cd(__s1, v61, &unk_1012CFCD8, 8); /*0x100694f82*/
  if ( *(_QWORD *)__s1 == 0x8000000000000000LL ) /*0x100694f98*/
  {
    v71 = 0; /*0x100694f9a*/
    v72 = 1; /*0x100694fa5*/
    v73 = 0; /*0x100694fb0*/
LABEL_43:
    *(_QWORD *)__s1 = &v71; /*0x100695003*/
    *(_QWORD *)&__s1[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x100695018*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &unk_10122DEB2, __s1); /*0x100695034*/
    v4 = v37[0]; /*0x100695039*/
    v5 = v37[1]; /*0x100695040*/
    v84 = v37[2]; /*0x10069504e*/
    v7 = 0; /*0x100695052*/
LABEL_44:
    if ( v71 ) /*0x10069505e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x10069506c*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h37f7d692fde42b17(v61); /*0x100695078*/
    goto LABEL_16; /*0x10069507d*/
  }
  v72 = *(_QWORD *)&__s1[8]; /*0x100694fcb*/
  v71 = *(_QWORD *)__s1; /*0x100694fd2*/
  v73 = *(_QWORD *)&__s1[16]; /*0x100694fe0*/
  if ( *(_QWORD *)&__s1[16] != 8 || *(_QWORD *)v72 != 0x72656469766F7270LL ) /*0x100695001*/
    goto LABEL_43; /*0x100695001*/
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h544c848713c4c9cd(__s1, v61, "app", 3); /*0x10069509c*/
  v4 = *(_QWORD *)__s1; /*0x1006950a1*/
  if ( *(_QWORD *)__s1 == 0x8000000000000000LL ) /*0x1006950b5*/
  {
    v5 = 1; /*0x1006950b7*/
    v84 = 0; /*0x1006950bd*/
    v4 = 0; /*0x1006950c5*/
    v7 = 1; /*0x1006950c8*/
    goto LABEL_44; /*0x1006950cd*/
  }
  v5 = *(_QWORD *)&__s1[8]; /*0x1006950fa*/
  v7 = 1; /*0x100695108*/
  v84 = *(_QWORD *)&__s1[16]; /*0x10069510d*/
  if ( *(_QWORD *)&__s1[16] != 5 /*0x10069512b*/
    || **(_DWORD **)&__s1[8] ^ 0x65646F63 | *(unsigned __int8 *)(*(_QWORD *)&__s1[8] + 4LL) ^ 0x78 )
  {
    goto LABEL_44; /*0x10069512d*/
  }
  v70 = *(_QWORD *)&__s1[8]; /*0x100695133*/
  v80 = *(_QWORD *)__s1; /*0x10069513a*/
  codexmate_lib::commands::deeplink::take_required::h4e0ee256dd41eea2( /*0x100695158*/
    __s1,
    v61,
    &anon_5d4536734f60d7d1ae09e451c2f7649c_139,
    4);
  v7 = *(_QWORD *)__s1; /*0x10069515d*/
  v83 = *(_QWORD *)&__s1[8]; /*0x10069516b*/
  v12 = *(_QWORD *)&__s1[16]; /*0x10069516f*/
  v4 = *(_QWORD *)&__s1[24]; /*0x100695176*/
  if ( *(_QWORD *)__s1 != 2 ) /*0x100695181*/
  {
    v84 = *(_QWORD *)&__s1[24]; /*0x1006952e4*/
    v5 = *(_QWORD *)&__s1[16]; /*0x1006952e8*/
    v82 = v83; /*0x1006952ef*/
LABEL_68:
    if ( v80 ) /*0x100695335*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v80, 1); /*0x100695347*/
    v4 = v82; /*0x10069534c*/
    goto LABEL_44; /*0x100695350*/
  }
  codexmate_lib::commands::deeplink::take_required::h4e0ee256dd41eea2(__s1, v61, &unk_1012CFCE0, 8); /*0x1006951a1*/
  v7 = *(_QWORD *)__s1; /*0x1006951a6*/
  v82 = *(_QWORD *)&__s1[8]; /*0x1006951b4*/
  v5 = *(_QWORD *)&__s1[16]; /*0x1006951b8*/
  v84 = *(_QWORD *)&__s1[24]; /*0x1006951c6*/
  if ( *(_QWORD *)__s1 != 2 ) /*0x1006951ce*/
  {
LABEL_66:
    if ( v83 ) /*0x10069531d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v83, 1); /*0x10069532b*/
    goto LABEL_68; /*0x10069532b*/
  }
  v75 = v82; /*0x1006951d8*/
  v76 = *(_DWORD **)&__s1[16]; /*0x1006951dc*/
  v77 = v84; /*0x1006951e4*/
  codexmate_lib::commands::deeplink::take_required::h4e0ee256dd41eea2( /*0x100695202*/
    __s1,
    v61,
    &anon_5d4536734f60d7d1ae09e451c2f7649c_910,
    6);
  v7 = *(_QWORD *)__s1; /*0x100695207*/
  v81 = *(_QWORD *)&__s1[8]; /*0x100695215*/
  v74 = *(_QWORD *)&__s1[16]; /*0x100695220*/
  v84 = *(_QWORD *)&__s1[24]; /*0x10069522b*/
  if ( *(_QWORD *)__s1 != 2 ) /*0x100695233*/
  {
    v5 = v74; /*0x1006952f5*/
    v82 = v81; /*0x1006952fd*/
LABEL_64:
    if ( v75 ) /*0x100695308*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x100695313*/
    goto LABEL_66; /*0x100695313*/
  }
  if ( v77 < 7 /*0x100695271*/
    || *v76 ^ 0x70747468 | *(_DWORD *)((char *)v76 + 3) ^ 0x2F2F3A70
    && (v77 == 7 || *(_QWORD *)v76 != 0x2F2F3A7370747468LL) )
  {
    *(_QWORD *)__s1 = &v75; /*0x10069527b*/
    *(_QWORD *)&__s1[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100695289*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_10122DE77, __s1); /*0x1006952a5*/
    v82 = v36[0]; /*0x1006952b1*/
    v5 = v36[1]; /*0x1006952b5*/
    v84 = v36[2]; /*0x1006952c3*/
    if ( v81 ) /*0x1006952cc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v81, 1); /*0x1006952db*/
    v7 = 0; /*0x1006952e0*/
    goto LABEL_64; /*0x1006952e2*/
  }
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h544c848713c4c9cd( /*0x10069536f*/
    __s1,
    v61,
    &anon_5d4536734f60d7d1ae09e451c2f7649c_334,
    5);
  if ( *(_QWORD *)__s1 != 0x8000000000000000LL ) /*0x100695388*/
  {
    if ( *(_QWORD *)&__s1[16] ) /*0x1006953a0*/
    {
      v64 = *(_QWORD *)&__s1[16]; /*0x1006953b4*/
      v63 = *(_QWORD *)&__s1[8]; /*0x1006953bb*/
      v62 = *(_QWORD *)__s1; /*0x1006953c2*/
      goto LABEL_75; /*0x1006953c2*/
    }
    if ( *(_QWORD *)__s1 ) /*0x1006956cd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__s1[8], *(_QWORD *)__s1, 1); /*0x1006956df*/
  }
  codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::h4fb42e4329b45095(&v62); /*0x100695391*/
LABEL_75:
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v49, v34, v76, v77); /*0x1006953c9*/
  if ( v49 == (_QWORD *)0x8000000000000000LL /*0x10069543b*/
    || (qmemcpy(&__s1[8], v50, 0x50u),
        *(_QWORD *)__s1 = v49,
        codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::h1280b7530cd915dc(&v49, __s1),
        v49 == (_QWORD *)0x8000000000000000LL) )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v67, &v75); /*0x100695448*/
  }
  else
  {
    v69 = v50[1]; /*0x100695456*/
    v68 = v50[0]; /*0x10069546b*/
    v67 = v49; /*0x100695472*/
  }
  __src = (void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h0c082587eae75803(v76, v77, 47); /*0x10069548b*/
  v82 = v29; /*0x1006954a4*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5(__s1, v29, 0, 1, 1, v30); /*0x1006954ad*/
  v13 = *(_QWORD *)&__s1[8]; /*0x1006954b2*/
  if ( __s1[0] ) /*0x1006954c0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(*(_QWORD *)&__s1[8], *(_QWORD *)&__s1[16]); /*0x1006956f3*/
  v14 = *(_QWORD *)&__s1[16]; /*0x1006954c6*/
  memcpy(*(void **)&__s1[16], __src, v82); /*0x1006954db*/
  v42 = v62; /*0x1006954ee*/
  v43 = v63; /*0x1006954f5*/
  v44 = v64; /*0x100695503*/
  v45 = v67; /*0x100695518*/
  v46 = v68; /*0x10069551f*/
  v47 = v69; /*0x10069552d*/
  if ( v75 ) /*0x10069553b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x100695546*/
  if ( v80 ) /*0x100695550*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v80, 1); /*0x100695562*/
  if ( v71 ) /*0x100695571*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x10069557f*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h37f7d692fde42b17(v61); /*0x10069558b*/
  if ( v79 ) /*0x100695595*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v79, 1); /*0x1006955a7*/
  if ( v83 != 0x8000000000000000LL ) /*0x1006955ba*/
  {
    v35[0] = v83; /*0x1006955c4*/
    v35[1] = v12; /*0x1006955cb*/
    v35[2] = v4; /*0x1006955d2*/
    v35[3] = v13; /*0x1006955d9*/
    v35[4] = v14; /*0x1006955e0*/
    v35[5] = v82; /*0x1006955eb*/
    v35[6] = v81; /*0x1006955f6*/
    v35[7] = v74; /*0x100695601*/
    v35[8] = v84; /*0x10069560c*/
    v35[9] = v42; /*0x100695621*/
    v35[10] = v43; /*0x100695628*/
    v35[11] = v44; /*0x100695636*/
    v35[12] = v45; /*0x10069564b*/
    v35[13] = v46; /*0x100695652*/
    v35[14] = v47; /*0x100695660*/
    v31 = v78; /*0x100695675*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h66b389f477f86eef(__s1, v35); /*0x100695679*/
    v32 = *(_QWORD *)&__s1[32]; /*0x10069567e*/
    memcpy((void *)(a1 + 40), &__s1[40], 0xA0u); /*0x100695696*/
    v33 = *(_OWORD *)&__s1[16]; /*0x1006956a2*/
    *(_OWORD *)a1 = *(_OWORD *)__s1; /*0x1006956a9*/
    *(_OWORD *)(a1 + 16) = v33; /*0x1006956ae*/
    *(_QWORD *)(a1 + 32) = v32; /*0x1006956b4*/
    v18 = *v31; /*0x1006956b9*/
    if ( !*v31 ) /*0x1006956b9*/
      return a1; /*0x1006956bf*/
    goto LABEL_27; /*0x1006956bf*/
  }
LABEL_20:
  *(_QWORD *)__s1 = v12; /*0x100694cdb*/
  *(_QWORD *)&__s1[8] = v4; /*0x100694ce9*/
  *(_QWORD *)&__s1[16] = v13; /*0x100694cf0*/
  *(_QWORD *)&__s1[24] = v14; /*0x100694cf7*/
  v49 = nullptr; /*0x100694cfe*/
  v50[0] = 1; /*0x100694d09*/
  v50[1] = 0; /*0x100694d14*/
  v61[0] = &__s1[8]; /*0x100694d25*/
  v51 = v61; /*0x100694d33*/
  if ( (v12 & 1) != 0 ) /*0x100694d23*/
  {
    v52 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h16af22917376f765; /*0x100694d41*/
    v15 = v78; /*0x100694d64*/
    v16 = core::fmt::write::h2e5a8157a38fb62d(&v49, &anon_5d4536734f60d7d1ae09e451c2f7649c_1055, &unk_10122E20A, &v51); /*0x100694d68*/
  }
  else
  {
    v52 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0b0f51b0d24859af; /*0x100694d8b*/
    v15 = v78; /*0x100694dae*/
    v16 = core::fmt::write::h2e5a8157a38fb62d(&v49, &anon_5d4536734f60d7d1ae09e451c2f7649c_1055, &unk_10122E1F5, &v51); /*0x100694db2*/
  }
  if ( v16 ) /*0x100694db9*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006950f0*/
      "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaymid > lencalled `Re"
      "sult::unwrap()` on an `Err` valueErrorOneTwoFourEightSixteenattempt to join into collection with len > usize::MAX_"
      "root_EventTargetinternally tagged enum EventTargetdata did not match any variant of untagged enum JsImage",
      55,
      &v51,
      &anon_5d4536734f60d7d1ae09e451c2f7649c_1072,
      &anon_5d4536734f60d7d1ae09e451c2f7649c_1058);
  v51 = v49; /*0x100694dcd*/
  v52 = (__int64 (__fastcall *)())v50[0]; /*0x100694dd4*/
  *(_QWORD *)&v53 = v50[1]; /*0x100694de2*/
  if ( *(_QWORD *)&__s1[8] ) /*0x100694df3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__s1[16], *(_QWORD *)&__s1[8], 1); /*0x100694e01*/
  *(_QWORD *)(a1 + 24) = v53; /*0x100694e0d*/
  v17 = v51; /*0x100694e12*/
  *(_QWORD *)(a1 + 16) = v52; /*0x100694e20*/
  *(_QWORD *)(a1 + 8) = v17; /*0x100694e25*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100694e34*/
  v18 = *v15; /*0x100694e38*/
  if ( *v15 ) /*0x100694e38*/
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v18, 1); /*0x100694e40*/
  return a1; /*0x100694e54*/
}