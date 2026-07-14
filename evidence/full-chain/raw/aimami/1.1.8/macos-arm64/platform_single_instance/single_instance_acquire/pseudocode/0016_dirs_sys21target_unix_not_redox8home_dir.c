// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x100ec39e0 depth=2
// dirs_sys21target_unix_not_redox8home_dir
char **__fastcall dirs_sys::target_unix_not_redox::home_dir::h0e5525d647f816f0(char **a1)
{
  char *pw_passwd; // r13
  char *pw_name; // r12
  __int64 v4; // rax
  size_t v5; // r14
  __int64 v6; // rax
  size_t v7; // r15
  uid_t v8; // eax
  char *pw_dir; // r12
  signed __int64 v10; // rax
  __int64 v11; // rdi
  char *v13; // rax
  passwd v14; // [rsp+0h] [rbp-80h] BYREF
  passwd *v15[7]; // [rsp+48h] [rbp-38h] BYREF

  std::env::_var_os::h174f31a71fef3df9((unsigned __int64 *)&v14, "HOMENUM0NUM1NUM2NUM3NUM4NUM5NUM6NUM7NUM8NUM9", 4u); /*0x100ec3a04*/
  pw_name = v14.pw_name; /*0x100ec3a09*/
  if ( !__OFSUB__(-(__int64)v14.pw_name, 1) ) /*0x100ec3a13*/
  {
    pw_passwd = v14.pw_passwd; /*0x100ec3a51*/
    v7 = *(_QWORD *)&v14.pw_uid; /*0x100ec3a55*/
    if ( *(_QWORD *)&v14.pw_uid ) /*0x100ec3a5c*/
    {
LABEL_22:
      *a1 = pw_name; /*0x100ec3b30*/
      a1[1] = pw_passwd; /*0x100ec3b33*/
      a1[2] = (char *)v7; /*0x100ec3b37*/
      return a1; /*0x100ec3b37*/
    }
    if ( v14.pw_name ) /*0x100ec3a65*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100ec3a72*/
  }
  v4 = sysconf(71); /*0x100ec3a1a*/
  v5 = 512; /*0x100ec3a22*/
  if ( v4 >= 0 ) /*0x100ec3a28*/
    v5 = v4; /*0x100ec3a28*/
  if ( v5 ) /*0x100ec3a2f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100ec3a31*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1u); /*0x100ec3a3e*/
    if ( !v6 ) /*0x100ec3a46*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100ec3b96*/
    v7 = v6; /*0x100ec3a4c*/
  }
  else
  {
    v7 = 1; /*0x100ec3a79*/
  }
  pw_name = (char *)0x8000000000000000LL; /*0x100ec3a7f*/
  memset(&v14, 0, sizeof(v14)); /*0x100ec3a98*/
  v15[0] = nullptr; /*0x100ec3aa4*/
  v8 = getuid(); /*0x100ec3aac*/
  v15[1] = (passwd *)v7; /*0x100ec3abb*/
  if ( getpwuid_r(v8, &v14, (char *)v7, v5, v15) || !v15[0] ) /*0x100ec3ad9*/
  {
LABEL_18:
    if ( !v5 ) /*0x100ec3b0d*/
      goto LABEL_20; /*0x100ec3b0d*/
    goto LABEL_19; /*0x100ec3b0d*/
  }
  pw_dir = v14.pw_dir; /*0x100ec3adb*/
  v10 = strlen(v14.pw_dir); /*0x100ec3ae2*/
  if ( !v10 ) /*0x100ec3aea*/
  {
    pw_name = (char *)0x8000000000000000LL; /*0x100ec3b07*/
    goto LABEL_18; /*0x100ec3b07*/
  }
  v7 = v10; /*0x100ec3aec*/
  if ( v10 < 0 ) /*0x100ec3aef*/
  {
    v11 = 0; /*0x100ec3af1*/
    goto LABEL_16; /*0x100ec3af1*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100ec3b4d*/
  v13 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x100ec3b5a*/
  v11 = 1; /*0x100ec3b5f*/
  if ( !v13 ) /*0x100ec3b67*/
LABEL_16:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v7); /*0x100ec3af3*/
  pw_passwd = v13; /*0x100ec3b69*/
  memcpy(v13, pw_dir, v7); /*0x100ec3b75*/
  pw_name = (char *)v7; /*0x100ec3b7a*/
  if ( v5 ) /*0x100ec3b8a*/
LABEL_19:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100ec3b0f*/
LABEL_20:
  if ( pw_name != (char *)0x8000000000000000LL ) /*0x100ec3b29*/
    goto LABEL_22; /*0x100ec3b29*/
  *a1 = (char *)0x8000000000000000LL; /*0x100ec3b2b*/
  return a1; /*0x100ec3b3e*/
}