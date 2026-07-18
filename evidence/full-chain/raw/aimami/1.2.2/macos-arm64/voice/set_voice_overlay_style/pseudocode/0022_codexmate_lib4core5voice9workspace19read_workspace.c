// mac 1.2.2 NEW set_voice_overlay_style 0x1008bfaa0 d=2
_QWORD *__fastcall codexmate_lib::core::voice::workspace::read_workspace_file::h2f88f6533835c561(
        _QWORD *__dst,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  void *v4; // r13
  size_t v5; // rbx
  void *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rax
  __int64 *v12; // rsi
  int v13; // edx
  __int64 *v14; // rsi
  _QWORD *v15; // rax
  size_t v16; // r14
  __int64 v17; // rax
  __int64 v18; // r15
  char *v19; // r13
  char *v20; // r12
  size_t v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  const __m128i *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rax
  char *v34; // rcx
  char *v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r12
  _QWORD *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
  char *v47; // rcx
  __int64 v48; // r12
  __int64 v49; // r13
  __int64 v50; // rdx
  void *v51; // r15
  unsigned __int8 *v52; // r14
  size_t v53; // rbx
  __int64 v54; // r12
  void *v55; // rax
  __int64 v56; // r12
  void *v57; // rax
  void *v58; // rdx
  unsigned __int8 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rbx
  const __m128i *v63; // rbx
  const __m128i *v64; // r14
  const __m128i *v65; // r15
  const __m128i *v67; // r12
  int v68; // r13d
  unsigned __int64 v69; // rbx
  __int64 v70; // rdi
  _QWORD __dsta[18]; // [rsp+8h] [rbp-308h] BYREF
  size_t v72[3]; // [rsp+98h] [rbp-278h] BYREF
  const __m128i *v73[18]; // [rsp+B0h] [rbp-260h] BYREF
  __int64 v74; // [rsp+140h] [rbp-1D0h]
  __int64 v75; // [rsp+148h] [rbp-1C8h]
  __int64 v76; // [rsp+150h] [rbp-1C0h]
  _QWORD v77[12]; // [rsp+158h] [rbp-1B8h] BYREF
  void *v78; // [rsp+1B8h] [rbp-158h] BYREF
  size_t v79; // [rsp+1C0h] [rbp-150h]
  const __m128i **v80; // [rsp+1C8h] [rbp-148h] BYREF
  char *v81; // [rsp+1D0h] [rbp-140h]
  __int64 v82; // [rsp+1D8h] [rbp-138h] BYREF
  void *v83; // [rsp+1E0h] [rbp-130h]
  size_t v84; // [rsp+1E8h] [rbp-128h]
  __int64 v85; // [rsp+1F0h] [rbp-120h] BYREF
  const __m128i *v86; // [rsp+1F8h] [rbp-118h] BYREF
  __int64 v87; // [rsp+200h] [rbp-110h]
  __int64 v88; // [rsp+208h] [rbp-108h]
  __int64 __src[19]; // [rsp+210h] [rbp-100h] BYREF
  __int64 v90; // [rsp+2A8h] [rbp-68h]
  size_t v91; // [rsp+2B0h] [rbp-60h]
  void *v92; // [rsp+2B8h] [rbp-58h]
  char *v93; // [rsp+2C0h] [rbp-50h]
  size_t __n; // [rsp+2C8h] [rbp-48h]
  void *v95; // [rsp+2D0h] [rbp-40h]
  void *__s2; // [rsp+2D8h] [rbp-38h]
  _BYTE v97[41]; // [rsp+2E7h] [rbp-29h] BYREF

  v2 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::ha5d7c5d48ce19d43(a2); /*0x1008bfabd*/
  if ( v2 ) /*0x1008bfac5*/
  {
    __dst[1] = 2; /*0x1008bfac7*/
    __dst[2] = v2; /*0x1008bfacf*/
    result = (_QWORD *)0x8000000000000000LL; /*0x1008bfad3*/
    *__dst = 0x8000000000000000LL; /*0x1008bfadd*/
    return result; /*0x1008bfadd*/
  }
  v4 = (void *)a2[67]; /*0x1008bfaf2*/
  v5 = a2[68]; /*0x1008bfafa*/
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v4, v5); /*0x1008bfb0f*/
  if ( LODWORD(__src[0]) == 1 ) /*0x1008bfb22*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1008bfb29*/
      1,
      __src[1]);
    codexmate_lib::core::voice::workspace::default_workspace_file::h5910fb55d073b442(__src); /*0x1008bfb38*/
    codexmate_lib::core::voice::workspace::write_workspace_file::h224a4d651902b6a5(v73, a2, __src); /*0x1008bfb4a*/
    if ( LODWORD(v73[0]) == 10 ) /*0x1008bfb56*/
      return memcpy(__dst, __src, 0x90u); /*0x1008bfb6b*/
    qmemcpy(__dst + 1, v73, 0x60u); /*0x1008bfcc1*/
    *__dst = 0x8000000000000000LL; /*0x1008bfcce*/
    return (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hb9eb38359947e5a2(__src); /*0x1008bfb70*/
  }
  v92 = __dst; /*0x1008bfb75*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1008bfb85*/
    0,
    __src[1]);
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, v4, v5); /*0x1008bfb97*/
  v6 = (void *)__src[0]; /*0x1008bfb9c*/
  v7 = __src[1]; /*0x1008bfba3*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x1008bfbad*/
  {
    result = v92; /*0x1008bfbb2*/
    *((_QWORD *)v92 + 1) = 2; /*0x1008bfbb6*/
    result[2] = v7; /*0x1008bfbbe*/
    *result = 0x8000000000000000LL; /*0x1008bfbc2*/
    return result; /*0x1008bfbc5*/
  }
  v8 = __src[2]; /*0x1008bfbca*/
  v88 = __src[1]; /*0x1008bfbd1*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14((unsigned __int8 *)__src[1], __src[2]); /*0x1008bfbdb*/
  if ( v9 ) /*0x1008bfbe3*/
  {
    __src[0] = v88; /*0x1008bfbf0*/
    __src[1] = v8; /*0x1008bfbf7*/
    __src[2] = 0; /*0x1008bfbfe*/
    __src[3] = 0; /*0x1008bfc09*/
    __src[4] = v88; /*0x1008bfc14*/
    __src[5] = v8; /*0x1008bfc1b*/
    serde_json::de::from_trait::hcffae0da71490e02(v73); /*0x1008bfc30*/
    v95 = v6; /*0x1008bfc46*/
    if ( v73[0] == (const __m128i *)0x8000000000000000LL ) /*0x1008bfc4a*/
    {
      v86 = v73[1]; /*0x1008bfc57*/
      v80 = &v86; /*0x1008bfc65*/
      v77[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v73, __src); /*0x1008bfc71*/
      LODWORD(v77[1]) = v10; /*0x1008bfc78*/
      std::time::SystemTime::duration_since::had059553cab94f96(__src, v77, 0, 0); /*0x1008bfc93*/
      if ( LOBYTE(__src[0]) ) /*0x1008bfc9f*/
        v11 = 0; /*0x1008bfda8*/
      else
        v11 = __src[1]; /*0x1008bfca5*/
      v77[0] = v11; /*0x1008bfdaa*/
      __src[0] = (__int64)v77; /*0x1008bfdb1*/
      __src[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1008bfdbf*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v72, byte_1016FA1FE, (unsigned __int64)__src); /*0x1008bfddb*/
      std::path::Path::_with_file_name::h86e79e0aa4e97973(&v82, v4, v5, v72[1], v72[2]); /*0x1008bfdfe*/
      if ( v72[0] ) /*0x1008bfe0d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008bfe17*/
      v16 = v84; /*0x1008bfe23*/
      __s2 = v83; /*0x1008bfe30*/
      v17 = std::sys::fs::rename::h7934e6142c921014(v4, v5, v83, v84); /*0x1008bfe37*/
      if ( v17 ) /*0x1008bfe3f*/
      {
        v85 = v17; /*0x1008bfe45*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008bfe5a*/
        {
          v78 = v4; /*0x1008bfe60*/
          v79 = v5; /*0x1008bfe67*/
          v77[0] = &v78; /*0x1008bfe75*/
          v77[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008bfe83*/
          v77[2] = &v85; /*0x1008bfe91*/
          v77[3] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008bfe9f*/
          v77[4] = &v80; /*0x1008bfead*/
          v77[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82d3fd0d965fa588; /*0x1008bfebb*/
          __src[6] = 2; /*0x1008bfec2*/
          __src[7] = (__int64)"codexmate_lib::core::voice::workspaceimage_url"; /*0x1008bfed4*/
          __src[8] = 37; /*0x1008bfedb*/
          __src[10] = (__int64)&unk_1016FA25D; /*0x1008bfeed*/
          __src[11] = (__int64)v77; /*0x1008bfefb*/
          __src[0] = 0; /*0x1008bff02*/
          __src[1] = (__int64)"codexmate_lib::core::voice::workspaceimage_url"; /*0x1008bff0d*/
          __src[2] = 37; /*0x1008bff14*/
          __src[3] = 0; /*0x1008bff1f*/
          __src[4] = (__int64)"src/core/voice/workspace.rs"; /*0x1008bff31*/
          __src[5] = 27; /*0x1008bff38*/
          __src[9] = 0x26B00000001LL; /*0x1008bff4d*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v97, __src); /*0x1008bff5f*/
          v17 = v85; /*0x1008bff64*/
        }
        if ( (v17 & 3) == 1 ) /*0x1008bff73*/
        {
          v18 = *(_QWORD *)(v17 + 7); /*0x1008bff81*/
          if ( *(_QWORD *)v18 ) /*0x1008bff85*/
            (*(void (__fastcall **)(_QWORD))v18)(*(_QWORD *)(v17 - 1)); /*0x1008bff90*/
          if ( *(_QWORD *)(v18 + 8) ) /*0x1008bff92*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008bffa2*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008bffb4*/
          v6 = v95; /*0x1008bffb9*/
        }
      }
      else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1008c0356*/
      {
        v78 = __s2; /*0x1008c0360*/
        v79 = v16; /*0x1008c0367*/
        v77[0] = &v78; /*0x1008c0375*/
        v77[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1008c0383*/
        v77[2] = &v80; /*0x1008c0391*/
        v77[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82d3fd0d965fa588; /*0x1008c039f*/
        __src[6] = 2; /*0x1008c03a6*/
        __src[7] = (__int64)"codexmate_lib::core::voice::workspaceimage_url"; /*0x1008c03b8*/
        __src[8] = 37; /*0x1008c03bf*/
        __src[10] = (__int64)&unk_1016FA21F; /*0x1008c03d1*/
        __src[11] = (__int64)v77; /*0x1008c03df*/
        __src[0] = 0; /*0x1008c03e6*/
        __src[1] = (__int64)"codexmate_lib::core::voice::workspaceimage_url"; /*0x1008c03f1*/
        __src[2] = 37; /*0x1008c03f8*/
        __src[3] = 0; /*0x1008c0403*/
        __src[4] = (__int64)"src/core/voice/workspace.rs"; /*0x1008c0415*/
        __src[5] = 27; /*0x1008c041c*/
        __src[9] = 0x26400000001LL; /*0x1008c0431*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v97, __src); /*0x1008c0443*/
      }
      if ( v82 ) /*0x1008c0452*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c045d*/
      codexmate_lib::core::voice::workspace::default_workspace_file::h5910fb55d073b442(__src); /*0x1008c0469*/
      codexmate_lib::core::voice::workspace::write_workspace_file::h224a4d651902b6a5(v77, a2, __src); /*0x1008c047f*/
      if ( LODWORD(v77[0]) == 10 ) /*0x1008c048b*/
      {
        memcpy(v92, __src, 0x90u); /*0x1008c049d*/
      }
      else
      {
        v39 = v92; /*0x1008c04a4*/
        qmemcpy((char *)v92 + 8, v77, 0x60u); /*0x1008c04b8*/
        *v39 = 0x8000000000000000LL; /*0x1008c04c5*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hb9eb38359947e5a2(__src); /*0x1008c04cf*/
      }
      result = (_QWORD *)core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&v86); /*0x1008c04db*/
      goto LABEL_103; /*0x1008c04e0*/
    }
    memcpy(__dsta, v73, sizeof(__dsta)); /*0x1008bfd2c*/
    v73[0] = (const __m128i *)((__int64 (*)(void))std::time::SystemTime::now::h1fe79e41f9d5677f)(); /*0x1008bfd36*/
    LODWORD(v73[1]) = v13; /*0x1008bfd3d*/
    std::time::SystemTime::duration_since::had059553cab94f96(__src, v73, 0, 0); /*0x1008bfd55*/
    if ( LOBYTE(__src[0]) ) /*0x1008bfd61*/
      v14 = nullptr; /*0x1008bffc2*/
    else
      v14 = (__int64 *)__src[1]; /*0x1008bfd67*/
    codexmate_lib::core::voice::workspace::default_templates::h2f01225fafe6cb61(&v82, v14); /*0x1008bffcb*/
    v19 = (char *)v83; /*0x1008bffd7*/
    v77[0] = v83; /*0x1008bffec*/
    v77[2] = v82; /*0x1008bfff3*/
    v81 = (char *)v83 + 112 * v84; /*0x1008bfffa*/
    v77[3] = v81; /*0x1008c0001*/
    if ( v84 ) /*0x1008c000b*/
    {
      while ( 1 ) /*0x1008c004c*/
      {
        v20 = v19; /*0x1008c004c*/
        v19 += 112; /*0x1008c004f*/
        if ( *(_QWORD *)v20 == 0x8000000000000000LL ) /*0x1008c0064*/
          break; /*0x1008c0064*/
        v90 = *(_QWORD *)v20; /*0x1008c006a*/
        v93 = v19; /*0x1008c006e*/
        __s2 = *((void **)v20 + 1); /*0x1008c0077*/
        v21 = *((_QWORD *)v20 + 2); /*0x1008c007b*/
        __n = (size_t)(v20 + 24); /*0x1008c0085*/
        v73[5] = *((const __m128i **)v20 + 8); /*0x1008c008e*/
        v73[4] = *((const __m128i **)v20 + 7); /*0x1008c009a*/
        v73[3] = *((const __m128i **)v20 + 6); /*0x1008c00a6*/
        v73[2] = *((const __m128i **)v20 + 5); /*0x1008c00b2*/
        v73[1] = *((const __m128i **)v20 + 4); /*0x1008c00be*/
        v73[0] = *((const __m128i **)v20 + 3); /*0x1008c00ca*/
        v76 = *((_QWORD *)v20 + 11); /*0x1008c00d6*/
        v22 = *((_QWORD *)v20 + 9); /*0x1008c00dd*/
        v75 = *((_QWORD *)v20 + 10); /*0x1008c00e7*/
        v74 = v22; /*0x1008c00ee*/
        LOBYTE(v91) = v20[105]; /*0x1008c00fb*/
        v23 = __dsta[1]; /*0x1008c00fe*/
        v24 = 112LL * __dsta[2]; /*0x1008c010c*/
        v87 = __dsta[2]; /*0x1008c0110*/
        if ( __dsta[2] ) /*0x1008c011a*/
        {
          v25 = 0; /*0x1008c0120*/
          while ( *(_QWORD *)(v23 + v25 + 16) != v21 || memcmp(*(const void **)(v23 + v25 + 8), __s2, v21) ) /*0x1008c0157*/
          {
            v25 += 112; /*0x1008c0130*/
            if ( v24 == v25 ) /*0x1008c0137*/
              goto LABEL_50; /*0x1008c0137*/
          }
          __src[2] = *(_QWORD *)(__n + 16); /*0x1008c0161*/
          v26 = *(_QWORD *)__n; /*0x1008c0168*/
          __src[1] = *(_QWORD *)(__n + 8); /*0x1008c016f*/
          __src[0] = v26; /*0x1008c0176*/
          if ( *(_QWORD *)(v23 + v25 + 24) ) /*0x1008c017d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c0191*/
          v27 = (__int64 *)(v23 + v25 + 24); /*0x1008c0196*/
          v27[2] = __src[2]; /*0x1008c01a2*/
          v28 = __src[0]; /*0x1008c01a6*/
          v27[1] = __src[1]; /*0x1008c01b4*/
          *v27 = v28; /*0x1008c01b8*/
          v19 = v93; /*0x1008c01c3*/
          if ( *(_QWORD *)(v23 + v25 + 48) ) /*0x1008c01bb*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c01d3*/
          v29 = v23 + v25 + 48; /*0x1008c01d8*/
          *(const __m128i **)(v29 + 16) = v73[5]; /*0x1008c01e8*/
          v30 = v73[3]; /*0x1008c01ec*/
          *(const __m128i **)(v29 + 8) = v73[4]; /*0x1008c01f3*/
          *(_QWORD *)v29 = v30; /*0x1008c01f7*/
          *(_BYTE *)(v23 + v25 + 105) = v91; /*0x1008c01fe*/
          if ( *(_QWORD *)(v23 + v25 + 72) ) /*0x1008c0203*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c0217*/
          v31 = (_QWORD *)(v23 + v25 + 72); /*0x1008c021c*/
          v31[2] = v76; /*0x1008c0228*/
          v32 = v74; /*0x1008c022c*/
          v31[1] = v75; /*0x1008c023a*/
          *v31 = v32; /*0x1008c023e*/
          *(_BYTE *)(v23 + v25 + 104) = 1; /*0x1008c0241*/
          v14 = (__int64 *)v90; /*0x1008c0247*/
          v6 = v95; /*0x1008c024e*/
          if ( v90 ) /*0x1008c0252*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c0261*/
        }
        else
        {
LABEL_50:
          v33 = (__int64 *)(v20 + 72); /*0x1008c0270*/
          v34 = v20 + 96; /*0x1008c0275*/
          v35 = v20 + 106; /*0x1008c027a*/
          __src[0] = v90; /*0x1008c0282*/
          __src[1] = (__int64)__s2; /*0x1008c028d*/
          __src[2] = v21; /*0x1008c0294*/
          __src[8] = *(_QWORD *)(__n + 40); /*0x1008c02aa*/
          __src[7] = *(_QWORD *)(__n + 32); /*0x1008c02b2*/
          __src[6] = *(_QWORD *)(__n + 24); /*0x1008c02ba*/
          __src[5] = *(_QWORD *)(__n + 16); /*0x1008c02c2*/
          v36 = *(_QWORD *)__n; /*0x1008c02c6*/
          __src[4] = *(_QWORD *)(__n + 8); /*0x1008c02cd*/
          __src[3] = v36; /*0x1008c02d1*/
          __src[11] = v33[2]; /*0x1008c02d8*/
          v37 = *v33; /*0x1008c02dc*/
          __src[10] = v33[1]; /*0x1008c02e3*/
          __src[9] = v37; /*0x1008c02e7*/
          LOBYTE(__src[13]) = v34[8]; /*0x1008c02ef*/
          __src[12] = *(_QWORD *)v34; /*0x1008c02f5*/
          BYTE1(__src[13]) = v91; /*0x1008c02fd*/
          HIWORD(__src[13]) = *((_WORD *)v35 + 2); /*0x1008c0309*/
          *(_DWORD *)((char *)&__src[13] + 2) = *(_DWORD *)v35; /*0x1008c0311*/
          v38 = v87; /*0x1008c0314*/
          v6 = v95; /*0x1008c0322*/
          v19 = v93; /*0x1008c0326*/
          if ( v87 == __dsta[0] ) /*0x1008c032a*/
          {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h73420c9eb6a5b650(__dsta); /*0x1008c0337*/
            v23 = __dsta[1]; /*0x1008c033c*/
          }
          qmemcpy((void *)(v24 + v23), __src, 0x70u); /*0x1008c0032*/
          v14 = &__src[14]; /*0x1008c0032*/
          __dsta[2] = v38 + 1; /*0x1008c0038*/
        }
        if ( v19 == v81 ) /*0x1008c0046*/
        {
          v19 = v81; /*0x1008c04e5*/
          break; /*0x1008c04e5*/
        }
      }
    }
    v77[1] = v19; /*0x1008c04ec*/
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$codexmate_lib..core..models..VoicePromptTemplate$GT$$GT$::hc9d7aecfd28ca05c(v77); /*0x1008c04fa*/
    v40 = __dsta[7]; /*0x1008c04ff*/
    v41 = __dsta[8]; /*0x1008c0506*/
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008c0514*/
    v43 = v42; /*0x1008c0516*/
    if ( *(_BYTE *)(v42 + 16) == 1 ) /*0x1008c051d*/
    {
      v44 = *(_QWORD *)v42; /*0x1008c0523*/
      v45 = *(_QWORD *)(v43 + 8); /*0x1008c0527*/
    }
    else
    {
      v44 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1008c0970*/
      *(_QWORD *)v43 = v44; /*0x1008c0975*/
      *(_QWORD *)(v43 + 8) = v45; /*0x1008c0979*/
      *(_BYTE *)(v43 + 16) = 1; /*0x1008c097e*/
    }
    *(_QWORD *)v43 = v44 + 1; /*0x1008c0530*/
    memset(&__src[1], 0, 24); /*0x1008c0557*/
    __src[0] = (__int64)anon_fd792a2461ce7c8d75006ec63925405b_60; /*0x1008c0565*/
    __src[4] = v44; /*0x1008c056c*/
    __src[5] = v45; /*0x1008c0573*/
    if ( v41 ) /*0x1008c057d*/
    {
      hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(__src, v41, &__src[4], 1); /*0x1008c099f*/
      do /*0x1008c09cf*/
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v73, v40); /*0x1008c09b8*/
        v14 = (__int64 *)v73; /*0x1008c09c0*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51bc55f4d52d0730(__src, v73); /*0x1008c09c3*/
        v40 += 72; /*0x1008c09c8*/
        --v41; /*0x1008c09cc*/
      }
      while ( v41 ); /*0x1008c09cf*/
    }
    v73[5] = (const __m128i *)__src[5]; /*0x1008c058a*/
    v73[4] = (const __m128i *)__src[4]; /*0x1008c0598*/
    v73[3] = (const __m128i *)__src[3]; /*0x1008c05a6*/
    v73[2] = (const __m128i *)__src[2]; /*0x1008c05b4*/
    v73[1] = (const __m128i *)__src[1]; /*0x1008c05c9*/
    v73[0] = (const __m128i *)__src[0]; /*0x1008c05d0*/
    HIDWORD(_RAX) = HIDWORD(__dsta[5]); /*0x1008c05d7*/
    if ( __dsta[5] ) /*0x1008c05e1*/
    {
      v47 = (char *)__dsta[4]; /*0x1008c05e7*/
      v48 = 160LL * __dsta[5]; /*0x1008c05f2*/
      v49 = 0; /*0x1008c05f6*/
      v93 = (char *)__dsta[4]; /*0x1008c05f9*/
      do /*0x1008c0617*/
      {
        HIDWORD(_RAX) = 0x80000000; /*0x1008c0617*/
        if ( *(_QWORD *)&v47[v49 + 72] != 0x8000000000000000LL ) /*0x1008c0626*/
        {
          __s2 = v6; /*0x1008c0628*/
          v14 = *(__int64 **)&v47[v49 + 88]; /*0x1008c0631*/
          _RAX = (unsigned __int64)core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14( /*0x1008c0636*/
                                     *(unsigned __int8 **)&v47[v49 + 80],
                                     (__int64)v14);
          v51 = (void *)v50; /*0x1008c063b*/
          if ( !v50 ) /*0x1008c0641*/
            goto LABEL_66; /*0x1008c0641*/
          if ( v50 < 0 ) /*0x1008c0646*/
          {
            v54 = 0; /*0x1008c08cc*/
            goto LABEL_98; /*0x1008c08cc*/
          }
          v52 = (unsigned __int8 *)_RAX; /*0x1008c064c*/
          v90 = v48; /*0x1008c064f*/
          v53 = v50; /*0x1008c0653*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c0656*/
          v54 = 1; /*0x1008c065b*/
          v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v51, 1u); /*0x1008c0669*/
          if ( !v55 ) /*0x1008c0671*/
            goto LABEL_111; /*0x1008c0671*/
          v56 = (__int64)v55; /*0x1008c0677*/
          memcpy(v55, v52, (size_t)v51); /*0x1008c0683*/
          __src[0] = (__int64)v51; /*0x1008c0688*/
          v91 = v56; /*0x1008c068f*/
          __src[1] = v56; /*0x1008c0693*/
          __n = (size_t)v51; /*0x1008c069a*/
          __src[2] = (__int64)v51; /*0x1008c069e*/
          v14 = __src; /*0x1008c06ac*/
          _RAX = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h51bc55f4d52d0730(v73, __src); /*0x1008c06b3*/
          v48 = v90; /*0x1008c06b8*/
          if ( (_BYTE)_RAX ) /*0x1008c06be*/
          {
LABEL_66:
            v6 = __s2; /*0x1008c05ff*/
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c06c4*/
            v54 = 1; /*0x1008c06c9*/
            v53 = __n; /*0x1008c06d4*/
            v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1u); /*0x1008c06db*/
            if ( !v57 ) /*0x1008c06e3*/
            {
LABEL_111:
              v91 = v53; /*0x1008c09d6*/
LABEL_98:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v54); /*0x1008c08cf*/
            }
            v87 = (__int64)v57; /*0x1008c06e9*/
            memcpy(v57, v52, v53); /*0x1008c06f9*/
            if ( *(_QWORD *)&v93[v49 + 96] == 0x8000000000000000LL ) /*0x1008c0711*/
              v59 = nullptr; /*0x1008c0713*/
            else
              v59 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14( /*0x1008c0725*/
                      *(unsigned __int8 **)&v93[v49 + 104],
                      *(_QWORD *)&v93[v49 + 112]);
            v48 = v90; /*0x1008c0715*/
            if ( v59 != nullptr && v58 != nullptr ) /*0x1008c0737*/
            {
              v51 = v58; /*0x1008c073e*/
              v52 = v59; /*0x1008c0742*/
            }
            if ( (__int64)v51 < 0 ) /*0x1008c0749*/
            {
              v70 = 0; /*0x1008c095b*/
              goto LABEL_106; /*0x1008c095b*/
            }
            if ( v51 ) /*0x1008c074f*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008c0751*/
              v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v51, 1u); /*0x1008c075e*/
              if ( !v60 ) /*0x1008c0766*/
              {
                __s2 = v51; /*0x1008c09df*/
                v70 = 1; /*0x1008c09e3*/
LABEL_106:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v70); /*0x1008c095d*/
              }
              v61 = v60; /*0x1008c076c*/
            }
            else
            {
              v61 = 1; /*0x1008c0771*/
            }
            memcpy((void *)v61, v52, (size_t)v51); /*0x1008c077f*/
            __src[0] = __n; /*0x1008c0788*/
            __src[1] = v87; /*0x1008c0796*/
            __src[2] = __n; /*0x1008c079d*/
            __src[3] = (__int64)v51; /*0x1008c07a4*/
            __src[4] = v61; /*0x1008c07ab*/
            _RAX = v61; /*0x1008c07b2*/
            __src[5] = (__int64)v51; /*0x1008c07b5*/
            __src[6] = 0; /*0x1008c07bc*/
            __src[7] = 1; /*0x1008c07c7*/
            __src[8] = 0; /*0x1008c07d2*/
            v62 = __dsta[8]; /*0x1008c07dd*/
            v6 = (void *)_RAX; /*0x1008c07eb*/
            if ( __dsta[8] == __dsta[6] ) /*0x1008c07ee*/
              HIDWORD(_RAX) = (unsigned __int64)alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hffe9857206bd9963(&__dsta[6]) >> 32; /*0x1008c07f7*/
            qmemcpy((void *)(__dsta[7] + 72 * v62), __src, 0x48u); /*0x1008c0817*/
            v14 = &__src[9]; /*0x1008c0817*/
            __dsta[8] = v62 + 1; /*0x1008c081d*/
          }
          v47 = v93; /*0x1008c0603*/
        }
        v49 += 160; /*0x1008c0607*/
      }
      while ( v48 != v49 ); /*0x1008c0617*/
    }
    v63 = v73[1]; /*0x1008c0829*/
    if ( v73[1] ) /*0x1008c0833*/
    {
      v64 = v73[3]; /*0x1008c0839*/
      if ( v73[3] ) /*0x1008c0843*/
      {
        v65 = v73[0]; /*0x1008c0849*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v73[0])); /*0x1008c085a*/
        v67 = v73[0] + 1; /*0x1008c085d*/
        do /*0x1008c0873*/
        {
          if ( !(_WORD)_R13D ) /*0x1008c0879*/
          {
            do /*0x1008c089d*/
            {
              v68 = _mm_movemask_epi8(_mm_load_si128(v67)); /*0x1008c0886*/
              v65 -= 24; /*0x1008c088b*/
              ++v67; /*0x1008c0892*/
            }
            while ( v68 == 0xFFFF ); /*0x1008c089d*/
            _R13D = ~v68; /*0x1008c089f*/
          }
          __asm { tzcnt eax, r13d } /*0x1008c08a2*/
          v14 = (__int64 *)*((_QWORD *)&v65[-1] - 3 * _RAX - 1); /*0x1008c08ae*/
          if ( v14 ) /*0x1008c08b6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c08c5*/
          v64 = (const __m128i *)((char *)v64 - 1); /*0x1008c0863*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1008c086a*/
          _R13D &= _R13D - 1; /*0x1008c086d*/
        }
        while ( v64 ); /*0x1008c0873*/
      }
      v69 = (unsigned __int64)v63[1].u64 + ((24LL * (_QWORD)v63 + 39) & 0xFFFFFFFFFFFFFFF0LL) + 1; /*0x1008c08f7*/
      if ( v69 ) /*0x1008c08fb*/
      {
        v14 = (__int64 *)v69; /*0x1008c090c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c090f*/
      }
    }
    v6 = v95; /*0x1008c091b*/
    codexmate_lib::core::voice::workspace::sort_workspace::hc91c8c2d8796ec31(__dsta, v14); /*0x1008c091f*/
    v12 = __dsta; /*0x1008c0924*/
  }
  else
  {
    codexmate_lib::core::voice::workspace::default_workspace_file::h5910fb55d073b442(__src); /*0x1008bfce9*/
    codexmate_lib::core::voice::workspace::write_workspace_file::h224a4d651902b6a5(v73, a2, __src); /*0x1008bfcff*/
    if ( LODWORD(v73[0]) != 10 ) /*0x1008bfd0b*/
    {
      v15 = v92; /*0x1008bfd73*/
      qmemcpy((char *)v92 + 8, v73, 0x60u); /*0x1008bfd87*/
      *v15 = 0x8000000000000000LL; /*0x1008bfd94*/
      result = (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hb9eb38359947e5a2(__src); /*0x1008bfd9e*/
      goto LABEL_103; /*0x1008bfda3*/
    }
    v12 = __src; /*0x1008bfd0d*/
  }
  result = memcpy(v92, v12, 0x90u); /*0x1008c0934*/
LABEL_103:
  if ( v6 ) /*0x1008c093c*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008c0951*/
  return result; /*0x1008bfae0*/
}