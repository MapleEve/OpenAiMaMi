// mac 1.2.2 NEW codexmate_lib4core5relay7storage43preserve_state_b 0x1009d23f0 d=1
__int64 __fastcall codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::hd5da3edf4306a101(
        _BYTE *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rax
  size_t v7; // rdx
  const void *v8; // r14
  size_t v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rcx
  void *v15; // rbx
  __int16 v16; // ax
  __int64 v17; // rbx
  _QWORD *v18; // [rsp+8h] [rbp-168h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+10h] [rbp-160h]
  int *v20; // [rsp+18h] [rbp-158h]
  __int64 (__fastcall *v21)(); // [rsp+20h] [rbp-150h]
  _QWORD *v22; // [rsp+28h] [rbp-148h]
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-140h]
  _QWORD v24[2]; // [rsp+A0h] [rbp-D0h] BYREF
  size_t v25[3]; // [rsp+B0h] [rbp-C0h] BYREF
  size_t v26; // [rsp+C8h] [rbp-A8h] BYREF
  void *v27; // [rsp+D0h] [rbp-A0h]
  size_t v28; // [rsp+D8h] [rbp-98h]
  __int64 v29; // [rsp+E0h] [rbp-90h]
  __int64 v30; // [rsp+E8h] [rbp-88h]
  size_t __n; // [rsp+F0h] [rbp-80h]
  char *v32; // [rsp+F8h] [rbp-78h]
  _QWORD v33[3]; // [rsp+100h] [rbp-70h] BYREF
  char v34; // [rsp+118h] [rbp-58h]
  __int64 v35; // [rsp+120h] [rbp-50h]
  int v36; // [rsp+12Ch] [rbp-44h]
  void *__src; // [rsp+130h] [rbp-40h]
  int v38; // [rsp+138h] [rbp-38h] BYREF
  __int16 v39; // [rsp+13Ch] [rbp-34h]
  int v40; // [rsp+13Eh] [rbp-32h]
  __int16 v41; // [rsp+142h] [rbp-2Eh]
  _DWORD v42[11]; // [rsp+144h] [rbp-2Ch] BYREF

  v36 = a5; /*0x1009d2404*/
  v29 = a3; /*0x1009d240b*/
  v6 = std::path::Path::parent::h4c3ac26770731fbb(a1, a2); /*0x1009d2418*/
  if ( !v6 ) /*0x1009d2420*/
    return std::io::error::Error::new::h2838dbd593bc6ec9(20, &unk_1015A0465, 28); /*0x1009d24c0*/
  v8 = (const void *)v6; /*0x1009d2422*/
  v9 = v7; /*0x1009d2425*/
  v30 = a4; /*0x1009d2428*/
  LOWORD(v18) = 511; /*0x1009d242f*/
  BYTE2(v18) = 1; /*0x1009d2438*/
  v10 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v18, v6); /*0x1009d244e*/
  if ( v10 ) /*0x1009d2454*/
    return v10; /*0x1009d2454*/
  v11 = std::path::Path::file_name::hf6c2daad91e50ebf(a1, a2); /*0x1009d2460*/
  if ( v11 ) /*0x1009d2468*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(&v18, v11); /*0x1009d2474*/
    v12 = &unk_1015A0481; /*0x1009d2480*/
    if ( !(_BYTE)v18 ) /*0x1009d2487*/
      v12 = v19; /*0x1009d2487*/
    v13 = 6; /*0x1009d248f*/
    if ( !(_BYTE)v18 ) /*0x1009d2494*/
      v13 = (__int64)v20; /*0x1009d2494*/
  }
  else
  {
    v13 = 6; /*0x1009d24c5*/
    v12 = &unk_1015A0481; /*0x1009d24ca*/
  }
  v24[0] = v12; /*0x1009d24d1*/
  v24[1] = v13; /*0x1009d24d8*/
  v38 = std::process::id::ha72f58ec62264e78(); /*0x1009d24e4*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v18); /*0x1009d24ee*/
  v33[1] = v19; /*0x1009d2501*/
  v33[0] = v18; /*0x1009d2505*/
  v18 = v24; /*0x1009d2510*/
  v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1009d251e*/
  v20 = &v38; /*0x1009d2529*/
  v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1009d2537*/
  v22 = v33; /*0x1009d2542*/
  v23 = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1009d2550*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, byte_1016FBAB8, (unsigned __int64)&v18); /*0x1009d256c*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v26, v8, v9, (_BYTE *)v25[1], v25[2]); /*0x1009d258f*/
  if ( v25[0] ) /*0x1009d259e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d25a8*/
  v15 = v27; /*0x1009d25ad*/
  __n = v28; /*0x1009d25c2*/
  __src = v27; /*0x1009d25c6*/
  std::path::Path::to_path_buf::h73855ce4b54f7174(v33, v27, v28); /*0x1009d25ca*/
  v34 = 0; /*0x1009d25cf*/
  v38 = 0; /*0x1009d25d3*/
  v39 = 438; /*0x1009d25da*/
  v40 = 256; /*0x1009d25e0*/
  v41 = 256; /*0x1009d25e7*/
  std::sys::fs::metadata::h32fa16d3052ea535((__int64 *)&v18, a1, a2); /*0x1009d2602*/
  if ( (_BYTE)v18 ) /*0x1009d2615*/
  {
    if ( ((unsigned __int8)v19 & 3) == 1 ) /*0x1009d261f*/
    {
      v32 = (char *)v19 - 1; /*0x1009d270f*/
      v35 = *(_QWORD *)((char *)v19 - 1); /*0x1009d2717*/
      v17 = *(_QWORD *)((char *)v19 + 7); /*0x1009d271b*/
      if ( *(_QWORD *)v17 ) /*0x1009d271f*/
        (*(void (__fastcall **)(__int64))v17)(v35); /*0x1009d272b*/
      if ( *(_QWORD *)(v17 + 8) ) /*0x1009d2731*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d273e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d2751*/
      v15 = __src; /*0x1009d2756*/
      v16 = 438; /*0x1009d275a*/
      if ( (v36 & 1) == 0 ) /*0x1009d2762*/
        goto LABEL_20; /*0x1009d2762*/
    }
    else
    {
      v16 = 438; /*0x1009d2625*/
      if ( (v36 & 1) == 0 ) /*0x1009d262d*/
        goto LABEL_20; /*0x1009d262d*/
    }
  }
  else if ( (v36 & 1) == 0 ) /*0x1009d2635*/
  {
    v16 = WORD2(v19) & 0x1FF; /*0x1009d2641*/
    goto LABEL_20; /*0x1009d2641*/
  }
  v16 = 384; /*0x1009d2637*/
LABEL_20:
  v39 = v16; /*0x1009d2646*/
  std::fs::OpenOptions::_open::h1dad73452047b8aa((__int64)&v18, (__int64)&v38, v15, __n); /*0x1009d265c*/
  if ( (_DWORD)v18 == 1 ) /*0x1009d2668*/
  {
    v10 = (__int64)v19; /*0x1009d266a*/
  }
  else
  {
    v42[0] = HIDWORD(v18); /*0x1009d2679*/
    v34 = 1; /*0x1009d267c*/
    v10 = std::io::Write::write_all::ha7991334f9d9412b(v42, v29, v30); /*0x1009d2697*/
    if ( v10 || (v10 = std::fs::File::sync_data::hd1ab389c8b7cfd2f(v42)) != 0 ) /*0x1009d26ae*/
    {
      close_NOCANCEL(v42[0]); /*0x1009d26b7*/
    }
    else
    {
      close_NOCANCEL(v42[0]); /*0x1009d2770*/
      v10 = std::sys::fs::rename::h7934e6142c921014(__src, __n, a1, a2); /*0x1009d2788*/
      if ( !v10 ) /*0x1009d278e*/
      {
        v34 = 0; /*0x1009d2794*/
        codexmate_lib::core::relay::atomic_write::sync_parent_dir::hbfb9726424d62ff6(v8, v9); /*0x1009d279e*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$GT$::hfa14f9c63ab95c79(v33); /*0x1009d27ab*/
        if ( v26 ) /*0x1009d27ba*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d27c4*/
        return 0; /*0x1009d27cb*/
      }
    }
  }
  _$LT$codexmate_lib..core..relay..atomic_write..TempFileCleanup$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2a2480ffcab5bdae(v33); /*0x1009d26c0*/
  if ( v33[0] ) /*0x1009d26cc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d26d7*/
  if ( v26 ) /*0x1009d26e6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009d26f1*/
  return v10; /*0x1009d24af*/
}