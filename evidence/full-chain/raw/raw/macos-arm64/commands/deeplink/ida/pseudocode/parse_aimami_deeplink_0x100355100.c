// __ZN13codexmate_lib8commands8deeplink21parse_aimami_deeplink @ 0x100355100 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::deeplink::parse_aimami_deeplink::h19a3c0701289616f(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // r12
  __int64 v6; // r14
  void *v7; // rax
  size_t v8; // rbx
  char *v9; // rbx
  void *v10; // r14
  unsigned __int64 v11; // r13
  void *v12; // rax
  size_t v13; // r13
  void *v14; // rbx
  void *v15; // r14
  __int64 *v16; // rbx
  char v17; // al
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r14
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rsi
  size_t v31; // rdx
  size_t v32; // rsi
  __int64 (__fastcall *v33)(); // rdi
  _WORD *v34; // rax
  _WORD *v35; // rbx
  _DWORD *v36; // rax
  _QWORD v37[5]; // [rsp+8h] [rbp-368h] BYREF
  _QWORD v38[15]; // [rsp+30h] [rbp-340h] BYREF
  _QWORD v39[3]; // [rsp+A8h] [rbp-2C8h] BYREF
  _QWORD v40[3]; // [rsp+C0h] [rbp-2B0h] BYREF
  _QWORD v41[3]; // [rsp+D8h] [rbp-298h] BYREF
  _QWORD v42[3]; // [rsp+F0h] [rbp-280h] BYREF
  _QWORD v43[2]; // [rsp+108h] [rbp-268h] BYREF
  _QWORD v44[2]; // [rsp+118h] [rbp-258h] BYREF
  size_t v45; // [rsp+128h] [rbp-248h]
  void *v46; // [rsp+130h] [rbp-240h]
  void *v47; // [rsp+138h] [rbp-238h]
  size_t v48; // [rsp+140h] [rbp-230h]
  __int64 v49; // [rsp+148h] [rbp-228h]
  __int64 v50; // [rsp+150h] [rbp-220h]
  void *__src; // [rsp+158h] [rbp-218h]
  char *v52; // [rsp+160h] [rbp-210h] BYREF
  _QWORD v53[10]; // [rsp+168h] [rbp-208h] BYREF
  _QWORD *v54; // [rsp+1B8h] [rbp-1B8h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+1C0h] [rbp-1B0h]
  __int128 v56; // [rsp+1C8h] [rbp-1A8h]
  void *v57; // [rsp+1D8h] [rbp-198h]
  size_t __n; // [rsp+1E0h] [rbp-190h]
  void *v59; // [rsp+1E8h] [rbp-188h]
  void *v60; // [rsp+1F0h] [rbp-180h]
  void *v61; // [rsp+1F8h] [rbp-178h]
  void *v62; // [rsp+200h] [rbp-170h]
  void *v63; // [rsp+208h] [rbp-168h]
  _QWORD v64[6]; // [rsp+210h] [rbp-160h] BYREF
  size_t v65; // [rsp+240h] [rbp-130h] BYREF
  void *v66; // [rsp+248h] [rbp-128h]
  void *v67; // [rsp+250h] [rbp-120h]
  __int64 v68; // [rsp+258h] [rbp-118h]
  size_t v69; // [rsp+260h] [rbp-110h] BYREF
  __int64 v70; // [rsp+268h] [rbp-108h]
  __int64 v71; // [rsp+270h] [rbp-100h]
  void *v72; // [rsp+278h] [rbp-F8h]
  size_t v73; // [rsp+280h] [rbp-F0h] BYREF
  __int64 v74; // [rsp+288h] [rbp-E8h]
  void *v75; // [rsp+290h] [rbp-E0h]
  void *v76; // [rsp+298h] [rbp-D8h]
  size_t v77; // [rsp+2A0h] [rbp-D0h] BYREF
  _DWORD *v78; // [rsp+2A8h] [rbp-C8h]
  unsigned __int64 v79; // [rsp+2B0h] [rbp-C0h]
  size_t v80; // [rsp+2B8h] [rbp-B8h]
  size_t v81; // [rsp+2C0h] [rbp-B0h] BYREF
  void *__s1[10]; // [rsp+2C8h] [rbp-A8h] BYREF
  __int64 *v83; // [rsp+318h] [rbp-58h]
  size_t v84; // [rsp+320h] [rbp-50h]
  void *v85; // [rsp+328h] [rbp-48h]
  size_t v86; // [rsp+330h] [rbp-40h]
  void *v87; // [rsp+338h] [rbp-38h]
  void *v88; // [rsp+340h] [rbp-30h]

  v3 = a2[1]; /*0x10035511a*/
  v4 = a2[2]; /*0x10035511e*/
  v37[4] = 0; /*0x100355122*/
  v37[0] = 0; /*0x10035512d*/
  v37[2] = 0; /*0x100355138*/
  v68 = v3; /*0x100355151*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v81, v37, v3, v4); /*0x100355158*/
  v83 = a2; /*0x10035516a*/
  if ( __OFSUB__(-(__int64)v81, 1) ) /*0x100355167*/
  {
    LOBYTE(v69) = __s1[0]; /*0x100355177*/
    v64[0] = &v69; /*0x100355184*/
    v64[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x100355192*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v53, &unk_1017BCA04, v64); /*0x1003551ae*/
    v5 = (void *)v53[0]; /*0x1003551b3*/
    v6 = v53[1]; /*0x1003551ba*/
    v7 = (void *)v53[2]; /*0x1003551c1*/
    v8 = 0; /*0x1003551c8*/
LABEL_19:
    v13 = v8; /*0x100355339*/
    v14 = (void *)v6; /*0x10035533c*/
    v15 = v7; /*0x10035533f*/
    goto LABEL_20; /*0x10035533f*/
  }
  v9 = (char *)__s1[0]; /*0x1003551cf*/
  v10 = __s1[1]; /*0x1003551d6*/
  __n = (size_t)__s1[4]; /*0x1003551eb*/
  v59 = __s1[5]; /*0x1003551f6*/
  v60 = __s1[6]; /*0x100355201*/
  v61 = __s1[7]; /*0x10035520c*/
  v62 = __s1[8]; /*0x100355217*/
  v63 = __s1[9]; /*0x100355222*/
  v55 = (__int64 (__fastcall *)())__s1[0]; /*0x100355230*/
  v56 = *(_OWORD *)&__s1[1]; /*0x100355237*/
  v57 = __s1[3]; /*0x10035523e*/
  v54 = (_QWORD *)v81; /*0x100355245*/
  v11 = HIDWORD(__s1[4]); /*0x10035524c*/
  v80 = v81; /*0x100355256*/
  if ( !HIDWORD(__s1[4]) ) /*0x10035525d*/
  {
LABEL_14:
    v52 = v9; /*0x1003552b9*/
    v53[0] = v11; /*0x1003552c0*/
    v81 = (size_t)&v52; /*0x1003552ce*/
    __s1[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1003552dc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017BC9E0, &v81); /*0x1003552f8*/
    v5 = (void *)v42[0]; /*0x1003552fd*/
    v6 = v42[1]; /*0x100355304*/
    v12 = (void *)v42[2]; /*0x10035530b*/
LABEL_15:
    v88 = v12; /*0x100355312*/
    v8 = 0; /*0x100355316*/
LABEL_16:
    if ( v80 ) /*0x100355322*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v80, 1); /*0x100355330*/
    v7 = v88; /*0x100355335*/
    goto LABEL_19; /*0x100355335*/
  }
  if ( __s1[1] <= (void *)HIDWORD(__s1[4]) ) /*0x100355262*/
  {
    if ( __s1[1] != (void *)HIDWORD(__s1[4]) ) /*0x10035526d*/
      goto LABEL_12; /*0x10035526d*/
  }
  else if ( *((char *)__s1[0] + HIDWORD(__s1[4])) <= -65 ) /*0x100355269*/
  {
LABEL_12:
    core::str::slice_error_fail::h480e51fbd8b15eba(v9, v10, 0, v11, &off_101962510); /*0x10035529b*/
  }
  if ( HIDWORD(__s1[4]) != 6 || memcmp(__s1[0], "aimami", 6u) ) /*0x100355282*/
  {
    if ( (unsigned __int64)v10 <= v11 ) /*0x100355292*/
    {
      if ( v10 != (void *)v11 ) /*0x1003552b7*/
        goto LABEL_12; /*0x1003552b7*/
    }
    else if ( v9[v11] <= -65 ) /*0x100355299*/
    {
      goto LABEL_12; /*0x100355299*/
    }
    goto LABEL_14; /*0x100355299*/
  }
  v21 = url::Url::host_str::h951633b861c322f2(&v54); /*0x1003554d0*/
  v23 = v22; /*0x1003554d5*/
  v24 = 1; /*0x1003554db*/
  if ( v21 ) /*0x1003554e1*/
    v24 = v21; /*0x1003554e1*/
  else
    v23 = 0; /*0x1003554e5*/
  v44[0] = v24; /*0x1003554e9*/
  v44[1] = v23; /*0x1003554f0*/
  v25 = (_DWORD *)url::Url::path::hdacd300d547f5011(&v54); /*0x1003554fe*/
  v43[0] = v25; /*0x100355503*/
  v43[1] = v26; /*0x10035550a*/
  if ( v23 != 2 || v26 != 7 || *(_WORD *)v24 != 12662 || *v25 ^ 0x706D692F | *(_DWORD *)((char *)v25 + 3) ^ 0x74726F70 ) /*0x10035553a*/
  {
    v81 = (size_t)v44; /*0x100355545*/
    __s1[0] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100355553*/
    __s1[1] = v43; /*0x100355561*/
    __s1[2] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100355568*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017BC9B9, &v81); /*0x100355584*/
    v5 = (void *)v41[0]; /*0x100355589*/
    v6 = v41[1]; /*0x100355590*/
    v12 = (void *)v41[2]; /*0x100355597*/
    goto LABEL_15; /*0x10035559e*/
  }
  v27 = url::Url::query::h1af7b45471000a3f(&v54); /*0x1003555aa*/
  v29 = 1; /*0x1003555b2*/
  if ( v27 ) /*0x1003555b7*/
    v29 = v27; /*0x1003555b7*/
  else
    v28 = 0; /*0x1003555bb*/
  _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hb6c1799fc116ba5b( /*0x1003555c6*/
    v64,
    v29,
    v28);
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h0e03788ea0f52bdd(&v81, v64, &unk_1015E3AE0, 8); /*0x1003555e5*/
  if ( v81 == 0x8000000000000000LL ) /*0x1003555fb*/
  {
    v73 = 0; /*0x1003555fd*/
    v74 = 1; /*0x100355608*/
    v75 = nullptr; /*0x100355613*/
LABEL_43:
    v81 = (size_t)&v73; /*0x100355666*/
    __s1[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h2ab36388d9951754; /*0x10035567b*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, &unk_1017BC991, &v81); /*0x100355697*/
    v5 = (void *)v40[0]; /*0x10035569c*/
    v6 = v40[1]; /*0x1003556a3*/
    v88 = (void *)v40[2]; /*0x1003556b1*/
    v8 = 0; /*0x1003556b5*/
LABEL_44:
    if ( v73 ) /*0x1003556c1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1); /*0x1003556cf*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v64); /*0x1003556db*/
    goto LABEL_16; /*0x1003556e0*/
  }
  v74 = (__int64)__s1[0]; /*0x10035562e*/
  v73 = v81; /*0x100355635*/
  v75 = __s1[1]; /*0x100355643*/
  if ( __s1[1] != (void *)8 || *(_QWORD *)v74 != 0x72656469766F7270LL ) /*0x100355664*/
    goto LABEL_43; /*0x100355664*/
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h0e03788ea0f52bdd(&v81, v64, "app", 3); /*0x1003556ff*/
  v5 = (void *)v81; /*0x100355704*/
  if ( v81 == 0x8000000000000000LL ) /*0x100355718*/
  {
    v6 = 1; /*0x10035571a*/
    v88 = nullptr; /*0x100355720*/
    v5 = nullptr; /*0x100355728*/
    v8 = 1; /*0x10035572b*/
    goto LABEL_44; /*0x100355730*/
  }
  v6 = (__int64)__s1[0]; /*0x10035575d*/
  v8 = 1; /*0x10035576b*/
  v88 = __s1[1]; /*0x100355770*/
  if ( __s1[1] != (void *)5 || *(_DWORD *)__s1[0] ^ 0x65646F63 | *((unsigned __int8 *)__s1[0] + 4) ^ 0x78 ) /*0x10035578e*/
    goto LABEL_44; /*0x100355790*/
  v72 = __s1[0]; /*0x100355796*/
  v84 = v81; /*0x10035579d*/
  codexmate_lib::commands::deeplink::take_required::hf8da036a9172fb02( /*0x1003557bb*/
    &v81,
    (__int64)v64,
    (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_55,
    4);
  v8 = v81; /*0x1003557c0*/
  v87 = __s1[0]; /*0x1003557ce*/
  v13 = (size_t)__s1[1]; /*0x1003557d2*/
  v5 = __s1[2]; /*0x1003557d9*/
  if ( v81 != 2 ) /*0x1003557e4*/
  {
    v88 = __s1[2]; /*0x10035595f*/
    v6 = (__int64)__s1[1]; /*0x100355963*/
    v86 = (size_t)v87; /*0x10035596a*/
LABEL_68:
    if ( v84 ) /*0x1003559b9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v84, 1); /*0x1003559cb*/
    v5 = (void *)v86; /*0x1003559d0*/
    goto LABEL_44; /*0x1003559d4*/
  }
  codexmate_lib::commands::deeplink::take_required::hf8da036a9172fb02( /*0x100355804*/
    &v81,
    (__int64)v64,
    (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_455,
    8);
  v8 = v81; /*0x100355809*/
  v86 = (size_t)__s1[0]; /*0x100355817*/
  v6 = (__int64)__s1[1]; /*0x10035581b*/
  v88 = __s1[2]; /*0x100355829*/
  if ( v81 != 2 ) /*0x100355831*/
  {
LABEL_66:
    if ( v87 ) /*0x1003559a1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v87, 1); /*0x1003559af*/
    goto LABEL_68; /*0x1003559af*/
  }
  v77 = v86; /*0x10035583b*/
  v78 = __s1[1]; /*0x100355842*/
  v79 = (unsigned __int64)v88; /*0x10035584d*/
  codexmate_lib::commands::deeplink::take_required::hf8da036a9172fb02( /*0x10035586e*/
    &v81,
    (__int64)v64,
    (__int64)&anon_b0ee9adff4519c22b647af231a5a39fa_444,
    6);
  v8 = v81; /*0x100355873*/
  v85 = __s1[0]; /*0x100355881*/
  v76 = __s1[1]; /*0x10035588c*/
  v88 = __s1[2]; /*0x10035589a*/
  if ( v81 != 2 ) /*0x1003558a2*/
  {
    v6 = (__int64)v76; /*0x100355970*/
    v86 = (size_t)v85; /*0x10035597b*/
LABEL_64:
    if ( v77 ) /*0x100355989*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100355997*/
    goto LABEL_66; /*0x100355997*/
  }
  if ( v79 < 7 /*0x1003558e6*/
    || *v78 ^ 0x70747468 | *(_DWORD *)((char *)v78 + 3) ^ 0x2F2F3A70
    && (v79 == 7 || *(_QWORD *)v78 != 0x2F2F3A7370747468LL) )
  {
    v81 = (size_t)&v77; /*0x1003558f3*/
    __s1[0] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100355901*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v39, &unk_1017BC956, &v81); /*0x10035591d*/
    v86 = v39[0]; /*0x100355929*/
    v6 = v39[1]; /*0x10035592d*/
    v88 = (void *)v39[2]; /*0x10035593b*/
    if ( v85 ) /*0x100355944*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v85, 1); /*0x100355956*/
    v8 = 0; /*0x10035595b*/
    goto LABEL_64; /*0x10035595d*/
  }
  hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h0e03788ea0f52bdd( /*0x1003559f3*/
    &v81,
    v64,
    &anon_b0ee9adff4519c22b647af231a5a39fa_414,
    5);
  v30 = v81; /*0x1003559f8*/
  if ( v81 != 0x8000000000000000LL ) /*0x100355a0c*/
  {
    if ( __s1[1] ) /*0x100355a24*/
    {
      v67 = __s1[1]; /*0x100355a38*/
      v66 = __s1[0]; /*0x100355a3f*/
      v65 = v81; /*0x100355a46*/
      goto LABEL_75; /*0x100355a46*/
    }
    if ( v81 ) /*0x100355dd5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v81, 1); /*0x100355de7*/
  }
  codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::h4a0c157dc1874bbd(&v65, v30); /*0x100355a15*/
LABEL_75:
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v52, v37, v78, v79); /*0x100355a4d*/
  if ( v52 == (char *)0x8000000000000000LL /*0x100355ac5*/
    || (qmemcpy(__s1, v53, sizeof(__s1)),
        v81 = (size_t)v52,
        codexmate_lib::commands::deeplink::parse_inner::_$u7b$$u7b$closure$u7d$$u7d$::he2fcaacf30d9118b(
          (size_t *)&v52,
          (__int64 *)&v81),
        v52 == (char *)0x8000000000000000LL) )
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v69, &v77); /*0x100355ad5*/
  }
  else
  {
    v71 = v53[1]; /*0x100355ae3*/
    v70 = v53[0]; /*0x100355af8*/
    v69 = (size_t)v52; /*0x100355aff*/
  }
  __src = (void *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hd16cbd0279b6b068(v78, v79, 47); /*0x100355b1e*/
  v86 = v31; /*0x100355b37*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v81, v31, 0, 1, 1); /*0x100355b40*/
  v14 = __s1[0]; /*0x100355b45*/
  if ( (_BYTE)v81 ) /*0x100355b53*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__s1[0], __s1[1]); /*0x100355dfb*/
  v15 = __s1[1]; /*0x100355b59*/
  memcpy(__s1[1], __src, v86); /*0x100355b6e*/
  v45 = v65; /*0x100355b81*/
  v46 = v66; /*0x100355b88*/
  v47 = v67; /*0x100355b96*/
  v48 = v69; /*0x100355bab*/
  v49 = v70; /*0x100355bb2*/
  v50 = v71; /*0x100355bc0*/
  if ( v77 ) /*0x100355bd1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x100355bdf*/
  if ( v84 ) /*0x100355be9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v84, 1); /*0x100355bfb*/
  v32 = v73; /*0x100355c00*/
  if ( v73 ) /*0x100355c0a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1); /*0x100355c18*/
  v33 = (__int64 (__fastcall *)())v64; /*0x100355c1d*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h51cd264a45cd2627(v64); /*0x100355c24*/
  if ( v80 ) /*0x100355c31*/
  {
    v33 = v55; /*0x100355c33*/
    v32 = v80; /*0x100355c3f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v80, 1); /*0x100355c46*/
  }
  if ( v87 != (void *)0x8000000000000000LL ) /*0x100355c59*/
  {
    v38[0] = v87; /*0x100355c63*/
    v38[1] = v13; /*0x100355c6a*/
    v38[2] = v5; /*0x100355c71*/
    v38[3] = v14; /*0x100355c78*/
    v38[4] = v15; /*0x100355c7f*/
    v38[5] = v86; /*0x100355c8a*/
    v38[6] = v85; /*0x100355c95*/
    v38[7] = v76; /*0x100355ca3*/
    v38[8] = v88; /*0x100355cae*/
    v38[9] = v45; /*0x100355cc3*/
    v38[10] = v46; /*0x100355cca*/
    v38[11] = v47; /*0x100355cd8*/
    v38[12] = v48; /*0x100355ced*/
    v38[13] = v49; /*0x100355cf4*/
    v38[14] = v50; /*0x100355d02*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v32); /*0x100355d09*/
    v34 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100355d18*/
    if ( !v34 ) /*0x100355d20*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x100355e0c*/
    v35 = v34; /*0x100355d26*/
    *v34 = 27503; /*0x100355d29*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100355d2e*/
    v36 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100355d3d*/
    if ( !v36 ) /*0x100355d45*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x100355e1d*/
    *(_DWORD *)((char *)v36 + 3) = 1936942435; /*0x100355d4b*/
    *v36 = 1667462483; /*0x100355d52*/
    qmemcpy((void *)(a1 + 72), v38, 0x78u); /*0x100355d68*/
    *(_QWORD *)a1 = 2; /*0x100355d6b*/
    *(_QWORD *)(a1 + 8) = v35; /*0x100355d72*/
    *(_QWORD *)(a1 + 16) = 2; /*0x100355d76*/
    *(_QWORD *)(a1 + 24) = 7; /*0x100355d7e*/
    *(_QWORD *)(a1 + 32) = v36; /*0x100355d86*/
    *(_QWORD *)(a1 + 40) = 7; /*0x100355d8a*/
    *(_QWORD *)(a1 + 48) = 0; /*0x100355d92*/
    *(_QWORD *)(a1 + 56) = 8; /*0x100355d9a*/
    *(_QWORD *)(a1 + 64) = 0; /*0x100355da2*/
    *(_DWORD *)(a1 + 192) = 1; /*0x100355daa*/
    *(_BYTE *)(a1 + 196) = 1; /*0x100355db5*/
    v19 = *v83; /*0x100355dc1*/
    if ( *v83 ) /*0x100355dc1*/
      goto LABEL_27; /*0x100355dc7*/
    return a1; /*0x100355dc7*/
  }
LABEL_20:
  v81 = v13; /*0x100355342*/
  __s1[0] = v5; /*0x100355350*/
  __s1[1] = v14; /*0x100355357*/
  __s1[2] = v15; /*0x10035535e*/
  v52 = nullptr; /*0x100355365*/
  v53[0] = 1; /*0x100355370*/
  v53[1] = 0; /*0x10035537b*/
  v64[0] = __s1; /*0x10035538c*/
  v54 = v64; /*0x10035539a*/
  if ( (v13 & 1) != 0 ) /*0x10035538a*/
  {
    v55 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h5702dc680aa1b51c; /*0x1003553a8*/
    v16 = v83; /*0x1003553cb*/
    v17 = core::fmt::write::h2e5a8157a38fb62d(&v52, &anon_b0ee9adff4519c22b647af231a5a39fa_1607, &unk_1017BDA57, &v54); /*0x1003553cf*/
  }
  else
  {
    v55 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1003553f2*/
    v16 = v83; /*0x100355415*/
    v17 = core::fmt::write::h2e5a8157a38fb62d(&v52, &anon_b0ee9adff4519c22b647af231a5a39fa_1607, &unk_1017BDA42, &v54); /*0x100355419*/
  }
  if ( v17 ) /*0x100355420*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100355753*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      &v54,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v54 = v52; /*0x100355434*/
  v55 = (__int64 (__fastcall *)())v53[0]; /*0x10035543b*/
  *(_QWORD *)&v56 = v53[1]; /*0x100355449*/
  if ( __s1[0] ) /*0x10035545a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[1], __s1[0], 1); /*0x100355468*/
  *(_QWORD *)(a1 + 24) = v56; /*0x100355474*/
  v18 = v54; /*0x100355478*/
  *(_QWORD *)(a1 + 16) = v55; /*0x100355486*/
  *(_QWORD *)(a1 + 8) = v18; /*0x10035548a*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x100355498*/
  v19 = *v16; /*0x10035549b*/
  if ( *v16 ) /*0x10035549b*/
LABEL_27:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v19, 1); /*0x1003554a3*/
  return a1; /*0x1003554b7*/
}