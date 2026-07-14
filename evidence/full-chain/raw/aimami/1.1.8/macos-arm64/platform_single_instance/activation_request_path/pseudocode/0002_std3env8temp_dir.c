// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x10109ed70 depth=1
// std3env8temp_dir
size_t *__fastcall std::env::temp_dir::h8078010294fc1613(size_t *a1)
{
  size_t v1; // rax
  size_t v2; // rax
  __int64 v3; // r15
  size_t v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // r12
  _DWORD *v7; // rax
  size_t v9; // [rsp+0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+8h] [rbp-38h]
  size_t v11; // [rsp+10h] [rbp-30h]
  char v12; // [rsp+1Eh] [rbp-22h] BYREF
  char v13; // [rsp+1Fh] [rbp-21h]

  std::env::_var_os::h174f31a71fef3df9(
    &v9,
    "TMPDIRfatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\nassertion failed: r == libc::ETIMEDOUT || r == 0invalid timestamp",
    6);
  v1 = v9; /*0x10109ed97*/
  if ( __OFSUB__(-(__int64)v9, 1) )
  {
    v9 = 0; /*0x10109eda3*/
    v10 = 1; /*0x10109edab*/
    v11 = 0; /*0x10109edb3*/
    v2 = 64; /*0x10109edbb*/
    v3 = 1; /*0x10109edc0*/
    v4 = 0; /*0x10109edc6*/
    do /*0x10109edf2*/
    {
      if ( v2 > v4 - v11 ) /*0x10109eddd*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h56de4e245a1b5c01(&v9, v11, v2, 1, 1); /*0x10109ee07*/
        v4 = v9; /*0x10109ee0c*/
        v3 = v10; /*0x10109ee10*/
      }
      v2 = confstr(65537, (char *)v3, v4); /*0x10109edea*/
    }
    while ( v2 > v4 ); /*0x10109edf2*/
    if ( v2 )
    {
      v11 = v2 - 1; /*0x10109ee39*/
      v13 = *(_BYTE *)(v3 + v2 - 1); /*0x10109ee43*/
      v12 = 1; /*0x10109ee46*/
      if ( v13 )
        core::panicking::assert_failed::h76fdff592ff01c06(
          0,
          &v12,
          &unk_10122E148,
          "`confstr` provided a string which wasn't nul-terminatedTMPDIRfatal runtime error: assertion failed: signal(libc::SIGPIPE, handler) != libc::SIG_ERR, aborting\nassertion failed: r == libc::ETIMEDOUT || r == 0invalid timestamp",
          111,
          &off_1015AE1D8);
      *a1 = v4; /*0x10109ee4e*/
      a1[1] = v3; /*0x10109ee51*/
      a1[2] = v2 - 1; /*0x10109ee55*/
    }
    else
    {
      v6 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109ee67*/
      if ( v4 ) /*0x10109ee6e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10109ee7b*/
      v9 = v6; /*0x10109ee80*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10109ee84*/
      v7 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x10109ee93*/
      if ( !v7 ) /*0x10109ee9b*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10109eef8*/
      *v7 = 1886221359; /*0x10109ee9d*/
      *a1 = 4; /*0x10109eea3*/
      a1[1] = (size_t)v7; /*0x10109eeaa*/
      a1[2] = 4; /*0x10109eeae*/
    }
  }
  else
  {
    v5 = v10; /*0x10109ee16*/
    a1[2] = v11; /*0x10109ee1e*/
    a1[1] = v5; /*0x10109ee22*/
    *a1 = v1; /*0x10109ee26*/
  }
  return a1; /*0x10109eeb9*/
}