// __ZN13codexmate_lib4core5relay12atomic_write22write_atomic_with_mode @ 0x10045ee20 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rbx
  void *v18; // rbx
  __int16 v19; // ax
  __int64 v20; // rbx
  __int64 v21; // rsi
  void *v22; // rbx
  _QWORD *v23; // [rsp+8h] [rbp-168h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+10h] [rbp-160h]
  int *v25; // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-150h]
  _QWORD *v27; // [rsp+28h] [rbp-148h]
  __int64 (__fastcall *v28)(); // [rsp+30h] [rbp-140h]
  _QWORD v29[2]; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-B8h]
  __int64 v32; // [rsp+C0h] [rbp-B0h]
  __int64 v33; // [rsp+C8h] [rbp-A8h] BYREF
  void *v34; // [rsp+D0h] [rbp-A0h]
  size_t v35; // [rsp+D8h] [rbp-98h]
  __int64 v36; // [rsp+E0h] [rbp-90h]
  __int64 v37; // [rsp+E8h] [rbp-88h]
  size_t __n; // [rsp+F0h] [rbp-80h]
  char *v39; // [rsp+F8h] [rbp-78h]
  _QWORD *v40; // [rsp+100h] [rbp-70h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+108h] [rbp-68h]
  char v42; // [rsp+118h] [rbp-58h]
  __int64 v43; // [rsp+120h] [rbp-50h]
  int v44; // [rsp+12Ch] [rbp-44h]
  void *__src; // [rsp+130h] [rbp-40h]
  int v46; // [rsp+138h] [rbp-38h] BYREF
  __int16 v47; // [rsp+13Ch] [rbp-34h]
  int v48; // [rsp+13Eh] [rbp-32h]
  __int16 v49; // [rsp+142h] [rbp-2Eh]
  _DWORD v50[11]; // [rsp+144h] [rbp-2Ch] BYREF

  v44 = a5; /*0x10045ee34*/
  v36 = a3; /*0x10045ee3b*/
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2); /*0x10045ee48*/
  if ( !v7 )
    return std::io::error::Error::new::h2838dbd593bc6ec9(20, "atomic write: missing parentaimami", 28);
  v9 = v7; /*0x10045ee52*/
  v10 = v8; /*0x10045ee55*/
  v37 = a4; /*0x10045ee58*/
  LOWORD(v23) = 511; /*0x10045ee5f*/
  BYTE2(v23) = 1; /*0x10045ee68*/
  v11 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v23, v7, v8); /*0x10045ee7e*/
  if ( v11 ) /*0x10045ee84*/
    return v11; /*0x10045ee84*/
  v12 = std::path::Path::file_name::hf6c2daad91e50ebf(a1, a2); /*0x10045ee90*/
  if ( v12 ) /*0x10045ee98*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v23, v12, v13); /*0x10045eea4*/
    v14 = "aimami"; /*0x10045eeb0*/
    if ( !(_BYTE)v23 ) /*0x10045eeb7*/
      v14 = (char *)v24; /*0x10045eeb7*/
    v15 = 6; /*0x10045eebf*/
    if ( !(_BYTE)v23 ) /*0x10045eec4*/
      v15 = (__int64)v25; /*0x10045eec4*/
  }
  else
  {
    v15 = 6; /*0x10045eef5*/
    v14 = "aimami"; /*0x10045eefa*/
  }
  v29[0] = v14; /*0x10045ef01*/
  v29[1] = v15; /*0x10045ef08*/
  v46 = std::process::id::ha72f58ec62264e78(); /*0x10045ef14*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v23); /*0x10045ef1e*/
  v41 = v24; /*0x10045ef31*/
  v40 = v23; /*0x10045ef35*/
  v23 = v29; /*0x10045ef40*/
  v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10045ef4e*/
  v25 = &v46; /*0x10045ef59*/
  v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x10045ef67*/
  v27 = &v40; /*0x10045ef72*/
  v28 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x10045ef80*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v30, &unk_1017BEA32, &v23); /*0x10045ef9c*/
  v17 = v31; /*0x10045efa1*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v33, v9, v10, v31, v32); /*0x10045efbf*/
  if ( v30 ) /*0x10045efce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v30, 1); /*0x10045efd8*/
  v18 = v34; /*0x10045efdd*/
  __n = v35; /*0x10045eff2*/
  __src = v34; /*0x10045eff6*/
  std::path::Path::to_path_buf::h73855ce4b54f7174(&v40, v34, v35); /*0x10045effa*/
  v42 = 0; /*0x10045efff*/
  v46 = 0; /*0x10045f003*/
  v47 = 438; /*0x10045f00a*/
  v48 = 256; /*0x10045f010*/
  v49 = 256; /*0x10045f017*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v23, a1, a2); /*0x10045f032*/
  if ( (_BYTE)v23 ) /*0x10045f045*/
  {
    if ( ((unsigned __int8)v24 & 3) == 1 ) /*0x10045f04f*/
    {
      v39 = (char *)v24 - 1; /*0x10045f13f*/
      v43 = *(_QWORD *)((char *)v24 - 1); /*0x10045f147*/
      v20 = *(_QWORD *)((char *)v24 + 7); /*0x10045f14b*/
      if ( *(_QWORD *)v20 ) /*0x10045f14f*/
        (*(void (__fastcall **)(__int64))v20)(v43); /*0x10045f15b*/
      v21 = *(_QWORD *)(v20 + 8); /*0x10045f161*/
      if ( v21 ) /*0x10045f168*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v21, *(_QWORD *)(v20 + 16)); /*0x10045f16e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24, 8); /*0x10045f181*/
      v18 = __src; /*0x10045f186*/
      v19 = 438; /*0x10045f18a*/
      if ( (v44 & 1) == 0 ) /*0x10045f192*/
        goto LABEL_20; /*0x10045f192*/
    }
    else
    {
      v19 = 438; /*0x10045f055*/
      if ( (v44 & 1) == 0 ) /*0x10045f05d*/
        goto LABEL_20; /*0x10045f05d*/
    }
  }
  else if ( (v44 & 1) == 0 ) /*0x10045f065*/
  {
    v19 = WORD2(v24) & 0x1FF; /*0x10045f071*/
    goto LABEL_20; /*0x10045f071*/
  }
  v19 = 384; /*0x10045f067*/
LABEL_20:
  v47 = v19; /*0x10045f076*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa(&v23, &v46, v18, __n); /*0x10045f08c*/
  if ( (_DWORD)v23 == 1 ) /*0x10045f098*/
  {
    v11 = (__int64)v24; /*0x10045f09a*/
  }
  else
  {
    v50[0] = HIDWORD(v23); /*0x10045f0a9*/
    v42 = 1; /*0x10045f0ac*/
    v11 = std::io::Write::write_all::he2fd9a54c4cbfe2a(v50, v36, v37); /*0x10045f0c7*/
    if ( v11 || (v11 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v50)) != 0 ) /*0x10045f0de*/
    {
      close_NOCANCEL(v50[0]); /*0x10045f0e7*/
    }
    else
    {
      close_NOCANCEL(v50[0]); /*0x10045f1a0*/
      v11 = std::sys::fs::rename::h7934e6142c921014(__src, __n, a1, a2); /*0x10045f1b8*/
      if ( !v11 ) /*0x10045f1be*/
      {
        v42 = 0; /*0x10045f1c4*/
        codexmate_lib::core::relay::atomic_write::sync_parent_dir::h1a39c9e9e2b35442(v9, v10); /*0x10045f1ce*/
        v22 = __src; /*0x10045f1d7*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::h6979279b40e09dda(&v40); /*0x10045f1db*/
        if ( v33 ) /*0x10045f1ea*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v33, 1); /*0x10045f1f4*/
        return 0; /*0x10045f1fb*/
      }
    }
  }
  _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7f674098b6711f9e(&v40); /*0x10045f0f0*/
  if ( v40 ) /*0x10045f0fc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x10045f107*/
  if ( v33 ) /*0x10045f116*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v33, 1); /*0x10045f121*/
  return v11; /*0x10045eedf*/
}