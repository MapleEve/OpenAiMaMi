// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x101355320 d=1
_QWORD *__fastcall std::env::temp_dir::h8078010294fc1613(_QWORD *a1)
{
  __int64 v1; // rax
  size_t v2; // rax
  __int64 v3; // r15
  size_t v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // r12
  _DWORD *v7; // rax
  __int64 v9; // [rsp+0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+8h] [rbp-38h]
  __int64 v11; // [rsp+10h] [rbp-30h]
  char v12; // [rsp+1Eh] [rbp-22h] BYREF
  char v13; // [rsp+1Fh] [rbp-21h]

  std::env::_var_os::h174f31a71fef3df9(
    (unsigned __int64 *)&v9,
    "TMPDIRfatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\nassertion failed: r == libc::ETIMEDOUT || r == 0invalid timestamp",
    6u);
  v1 = v9; /*0x101355347*/
  if ( __OFSUB__(-v9, 1) )
  {
    v9 = 0; /*0x101355353*/
    v10 = 1; /*0x10135535b*/
    v11 = 0; /*0x101355363*/
    v2 = 64; /*0x10135536b*/
    v3 = 1; /*0x101355370*/
    v4 = 0; /*0x101355376*/
    do /*0x1013553a2*/
    {
      if ( v2 > v4 - v11 ) /*0x10135538d*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01( /*0x1013553b7*/
          (unsigned __int64 *)&v9,
          v11,
          v2,
          1,
          1);
        v4 = v9; /*0x1013553bc*/
        v3 = v10; /*0x1013553c0*/
      }
      v2 = confstr(65537, (char *)v3, v4); /*0x10135539a*/
    }
    while ( v2 > v4 ); /*0x1013553a2*/
    if ( v2 )
    {
      v11 = v2 - 1; /*0x1013553e9*/
      v13 = *(_BYTE *)(v3 + v2 - 1); /*0x1013553f3*/
      v12 = 1; /*0x1013553f6*/
      if ( v13 )
        core::panicking::assert_failed::h76fdff592ff01c06(
          0,
          &v12,
          &unk_1016FF040,
          "`confstr` provided a string which wasn't nul-terminatedTMPDIRfatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\nassertion failed: r == libc::ETIMEDOUT || r == 0invalid timestamp",
          111,
          &off_1019260F8);
      *a1 = v4; /*0x1013553fe*/
      a1[1] = v3; /*0x101355401*/
      a1[2] = v2 - 1; /*0x101355405*/
    }
    else
    {
      v6 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x101355417*/
      if ( v4 ) /*0x10135541e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10135542b*/
      v9 = v6; /*0x101355430*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101355434*/
      v7 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x101355443*/
      if ( !v7 ) /*0x10135544b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1013554a8*/
      *v7 = 1886221359; /*0x10135544d*/
      *a1 = 4; /*0x101355453*/
      a1[1] = v7; /*0x10135545a*/
      a1[2] = 4; /*0x10135545e*/
    }
  }
  else
  {
    v5 = v10; /*0x1013553c6*/
    a1[2] = v11; /*0x1013553ce*/
    a1[1] = v5; /*0x1013553d2*/
    *a1 = v1; /*0x1013553d6*/
  }
  return a1; /*0x101355469*/
}