// __ZN13codexmate_lib4core20account_coordination8FileLock7acquire @ 0x10045e6c0
__int64 __fastcall codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  _DWORD *v19; // rsi
  __int64 i; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // r15
  void (__fastcall *v38)(__int64); // rax
  __int64 v39; // rsi
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // r15
  void (__fastcall *v46)(__int64); // rax
  _QWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // [rsp+Ch] [rbp-E4h] BYREF
  int v51; // [rsp+14h] [rbp-DCh]
  _QWORD *v52; // [rsp+18h] [rbp-D8h] BYREF
  __int64 (__fastcall *v53)(); // [rsp+20h] [rbp-D0h]
  __int64 *v54; // [rsp+28h] [rbp-C8h]
  __int64 (__fastcall *v55)(); // [rsp+30h] [rbp-C0h]
  _QWORD v56[2]; // [rsp+70h] [rbp-80h] BYREF
  int v57; // [rsp+80h] [rbp-70h] BYREF
  unsigned int v58; // [rsp+84h] [rbp-6Ch]
  _BYTE v59[24]; // [rsp+88h] [rbp-68h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-50h] BYREF
  _QWORD v61[2]; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-38h]
  unsigned int v63; // [rsp+C4h] [rbp-2Ch]

  v62 = a1; /*0x10045e6da*/
  v56[0] = a4; /*0x10045e6de*/
  v56[1] = a5; /*0x10045e6e2*/
  v6 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10045e6ec*/
  if ( v6 ) /*0x10045e6f4*/
  {
    LOWORD(v52) = 511; /*0x10045e6f6*/
    BYTE2(v52) = 1; /*0x10045e6ff*/
    result = std::fs::DirBuilder::_create::h099c6e2853c95452(&v52, v6, v7); /*0x10045e710*/
    if ( result ) /*0x10045e718*/
    {
      v9 = v62; /*0x10045e71a*/
      *(_QWORD *)v62 = 2; /*0x10045e71e*/
      *(_QWORD *)(v9 + 8) = result; /*0x10045e725*/
      return result; /*0x10045e729*/
    }
  }
  v50 = 0x101018000000000LL; /*0x10045e738*/
  v51 = 0x10000; /*0x10045e73f*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(v61, &v50, a2, a3); /*0x10045e75a*/
  if ( LOBYTE(v61[0]) ) /*0x10045e763*/
  {
    v60 = v61[1]; /*0x10045e76d*/
    v52 = v56; /*0x10045e775*/
    v53 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10045e783*/
    v54 = &v60; /*0x10045e78e*/
    v55 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10045e79c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017BEA0A, &v52); /*0x10045e7b5*/
    v13 = *(_DWORD *)v59; /*0x10045e7ba*/
    v52 = *(_QWORD **)&v59[4]; /*0x10045e7c2*/
    v53 = *(__int64 (__fastcall **)())&v59[12]; /*0x10045e7cd*/
    LODWORD(v54) = *(_DWORD *)&v59[20]; /*0x10045e7d7*/
    if ( (v60 & 3) == 1 ) /*0x10045e7e9*/
    {
      v14 = v60 - 1; /*0x10045e7eb*/
      v15 = *(_QWORD *)(v60 - 1); /*0x10045e7ef*/
      v16 = *(_QWORD *)(v60 + 7); /*0x10045e7f3*/
      if ( *(_QWORD *)v16 ) /*0x10045e7f7*/
        (*(void (__fastcall **)(__int64))v16)(v15); /*0x10045e803*/
      v17 = *(_QWORD *)(v16 + 8); /*0x10045e805*/
      if ( v17 ) /*0x10045e80c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x10045e815*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x10045e827*/
    }
    result = v62; /*0x10045e82c*/
    v18 = (_DWORD *)(v62 + 12); /*0x10045e830*/
    v19 = &v52; /*0x10045e834*/
    for ( i = 21; i; --i ) /*0x10045e83b*/
      *v18++ = *v19++; /*0x10045e840*/
    *(_QWORD *)result = 10; /*0x10045e842*/
    *(_DWORD *)(result + 8) = v13; /*0x10045e849*/
    return result; /*0x10045e84d*/
  }
  v63 = HIDWORD(v61[0]); /*0x10045e855*/
  v57 = HIDWORD(v61[0]); /*0x10045e858*/
  v21 = std::time::Instant::now::hda76af2c3a449055(v61, &v50, v10, v11, v12); /*0x10045e85b*/
  v23 = v22; /*0x10045e860*/
  v24 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x10045e86c*/
          v21,
          v22,
          20,
          0);
  v58 = v25; /*0x10045e871*/
  v26 = v24; /*0x10045e874*/
  while ( 1 ) /*0x10045e8cf*/
  {
    while ( 1 ) /*0x10045e8a9*/
    {
      v27 = _$LT$std..fs..File$u20$as$u20$fs2..FileExt$GT$::try_lock_exclusive::h469647fbb3298b85(&v57); /*0x10045e8a9*/
      v28 = v27; /*0x10045e8ae*/
      if ( !v27 ) /*0x10045e8b4*/
      {
        result = v63; /*0x10045e999*/
        v40 = (_QWORD *)v62; /*0x10045e99c*/
        *(_DWORD *)(v62 + 8) = v63; /*0x10045e9a0*/
        *v40 = 11; /*0x10045e9a3*/
        return result; /*0x10045e9aa*/
      }
      v29 = v27; /*0x10045e8ba*/
      v30 = std::io::error::Error::kind::hbe3dd139aa56fd1b(v27); /*0x10045e8bd*/
      if ( (v28 & 0xFFFFFFFF00000003LL) == 0x2300000002LL || v30 == 13 ) /*0x10045e8cf*/
        break; /*0x10045e8cf*/
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v28) != 35 ) /*0x10045e8db*/
      {
        v61[0] = v28; /*0x10045ea38*/
        v52 = v56; /*0x10045ea40*/
        v53 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10045ea4e*/
        v54 = v61; /*0x10045ea59*/
        v55 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10045ea67*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017BE9A9, &v52); /*0x10045ea80*/
        v47 = (_QWORD *)v62; /*0x10045ea89*/
        *(_QWORD *)(v62 + 24) = *(_QWORD *)&v59[16]; /*0x10045ea8d*/
        v48 = *(_QWORD *)v59; /*0x10045ea91*/
        v47[2] = *(_QWORD *)&v59[8]; /*0x10045ea99*/
        v47[1] = v48; /*0x10045ea9d*/
        *v47 = 10; /*0x10045eaa1*/
        if ( (v61[0] & 3) != 1 ) /*0x10045eab4*/
          return close_NOCANCEL(v63); /*0x10045eab4*/
        v43 = v61[0] - 1LL; /*0x10045eab6*/
        v44 = *(_QWORD *)(v61[0] - 1LL); /*0x10045eaba*/
        v45 = *(_QWORD *)(v61[0] + 7LL); /*0x10045eabe*/
        v46 = *(void (__fastcall **)(__int64))v45; /*0x10045eac2*/
        if ( *(_QWORD *)v45 ) /*0x10045eac2*/
          goto LABEL_40; /*0x10045eac8*/
        goto LABEL_41; /*0x10045eac8*/
      }
      if ( (v28 & 3) == 1 ) /*0x10045e8ea*/
      {
        v35 = v28 - 1; /*0x10045e963*/
        v36 = *(_QWORD *)(v28 - 1); /*0x10045e966*/
        v37 = *(_QWORD *)(v28 + 7); /*0x10045e96a*/
        v38 = *(void (__fastcall **)(__int64))v37; /*0x10045e96e*/
        if ( !*(_QWORD *)v37 ) /*0x10045e974*/
          goto LABEL_32; /*0x10045e974*/
        goto LABEL_31; /*0x10045e974*/
      }
    }
    v61[0] = v28; /*0x10045e8f0*/
    v33 = std::time::Instant::now::hda76af2c3a449055(v29, v23, v31, v28 & 0xFFFFFFFF00000003LL, v32); /*0x10045e8f4*/
    if ( v33 == v26 ) /*0x10045e8fc*/
    {
      if ( v34 >= v58 ) /*0x10045e901*/
        break; /*0x10045e901*/
      goto LABEL_27; /*0x10045e901*/
    }
    if ( v33 >= v26 ) /*0x10045e913*/
      break; /*0x10045e913*/
LABEL_27:
    v23 = 25000000; /*0x10045e919*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 25000000); /*0x10045e920*/
    if ( (v28 & 3) == 1 ) /*0x10045e92e*/
    {
      v35 = v28 - 1; /*0x10045e937*/
      v36 = *(_QWORD *)(v28 - 1); /*0x10045e93a*/
      v37 = *(_QWORD *)(v28 + 7); /*0x10045e93e*/
      v38 = *(void (__fastcall **)(__int64))v37; /*0x10045e942*/
      if ( !*(_QWORD *)v37 ) /*0x10045e948*/
        goto LABEL_32; /*0x10045e948*/
LABEL_31:
      v38(v36); /*0x10045e976*/
LABEL_32:
      v39 = *(_QWORD *)(v37 + 8); /*0x10045e97b*/
      if ( v39 ) /*0x10045e982*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v39, *(_QWORD *)(v37 + 16)); /*0x10045e98f*/
      v23 = 24; /*0x10045e880*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 24, 8); /*0x10045e88d*/
    }
  }
  *(_QWORD *)v59 = v56; /*0x10045e9af*/
  *(_QWORD *)&v59[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10045e9be*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_1017BE9D4, v59); /*0x10045e9d4*/
  v41 = (_QWORD *)v62; /*0x10045e9e0*/
  *(_QWORD *)(v62 + 24) = v54; /*0x10045e9e4*/
  v42 = v52; /*0x10045e9e8*/
  v41[2] = v53; /*0x10045e9f6*/
  v41[1] = v42; /*0x10045e9fa*/
  *v41 = 10; /*0x10045e9fe*/
  if ( (v28 & 3) != 1 ) /*0x10045ea0e*/
    return close_NOCANCEL(v63); /*0x10045ea0e*/
  v43 = v28 - 1; /*0x10045ea17*/
  v44 = *(_QWORD *)(v28 - 1); /*0x10045ea1a*/
  v45 = *(_QWORD *)(v28 + 7); /*0x10045ea1e*/
  v46 = *(void (__fastcall **)(__int64))v45; /*0x10045ea22*/
  if ( *(_QWORD *)v45 ) /*0x10045ea22*/
LABEL_40:
    v46(v44); /*0x10045eaca*/
LABEL_41:
  v49 = *(_QWORD *)(v45 + 8); /*0x10045eacf*/
  if ( v49 ) /*0x10045ead6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v49, *(_QWORD *)(v45 + 16)); /*0x10045eadf*/
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 24, 8); /*0x10045eaf1*/
  return close_NOCANCEL(v63); /*0x10045eafe*/
}