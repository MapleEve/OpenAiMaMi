// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x10109b920 depth=1
// std2fs5write5inner
char **__fastcall std::fs::write::inner::had0c1bee0a2c1e21(
        void *__src,
        size_t __n,
        char *__buf,
        size_t __nbyte,
        double a5,
        double a6,
        double a7)
{
  char **v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  size_t v12; // rdx
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  _BYTE __dst[384]; // [rsp+0h] [rbp-1E0h] BYREF
  int v17; // [rsp+180h] [rbp-60h] BYREF
  __int64 v18; // [rsp+188h] [rbp-58h]
  int *v19; // [rsp+198h] [rbp-48h] BYREF
  _DWORD v20[2]; // [rsp+1A0h] [rbp-40h] BYREF
  _UNKNOWN **v21; // [rsp+1A8h] [rbp-38h]
  int v22; // [rsp+1B4h] [rbp-2Ch] BYREF
  __int16 v23; // [rsp+1B8h] [rbp-28h]
  int v24; // [rsp+1BAh] [rbp-26h]
  __int16 v25; // [rsp+1BEh] [rbp-22h]

  v22 = 0; /*0x10109b93e*/
  v23 = 438; /*0x10109b945*/
  v24 = 16777472; /*0x10109b94b*/
  v25 = 1; /*0x10109b952*/
  v19 = &v22; /*0x10109b968*/
  if ( __n > 0x17F ) /*0x10109b973*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x10109b9f4*/
      v20,
      __src,
      __n,
      &v19,
      std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( v20[0] == 1 ) /*0x10109b9fd*/
      return (char **)v21; /*0x10109b9fd*/
  }
  else
  {
    memcpy(__dst, __src, __n); /*0x10109b982*/
    __dst[__n] = 0; /*0x10109b987*/
    core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v17, __dst, __n + 1); /*0x10109b99d*/
    if ( v17 == 1 ) /*0x10109b9a6*/
    {
      v21 = &off_1015AE3E8; /*0x10109b9af*/
      v20[0] = 1; /*0x10109b9b3*/
      return (char **)v21; /*0x10109b9dd*/
    }
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(v20, v18, &v22); /*0x10109b9ce*/
    if ( v20[0] == 1 ) /*0x10109b9d7*/
      return (char **)v21; /*0x10109b9d7*/
  }
  v10 = v20[1]; /*0x10109b9ff*/
  if ( __nbyte ) /*0x10109ba06*/
  {
    v9 = &off_1015ADE08; /*0x10109ba08*/
    while ( 1 ) /*0x10109ba52*/
    {
      while ( 1 ) /*0x10109ba3a*/
      {
        v12 = 0x7FFFFFFF; /*0x10109ba3a*/
        if ( __nbyte < 0x7FFFFFFF ) /*0x10109ba3f*/
          v12 = __nbyte; /*0x10109ba3f*/
        v13 = write(v10, __buf, v12); /*0x10109ba49*/
        if ( v13 == -1 ) /*0x10109ba52*/
          break; /*0x10109ba52*/
        if ( !v13 ) /*0x10109ba57*/
          goto LABEL_18; /*0x10109ba57*/
        v14 = __nbyte - v13; /*0x10109ba5c*/
        if ( __nbyte < v13 ) /*0x10109ba5f*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(v13, __nbyte, __nbyte, &off_1015ADE20, a5, a6, a7); /*0x10109baa7*/
        __buf += v13; /*0x10109ba61*/
        __nbyte -= v13; /*0x10109ba64*/
        if ( !v14 ) /*0x10109ba6a*/
          goto LABEL_17; /*0x10109ba6a*/
      }
      v11 = *__error(); /*0x10109ba25*/
      if ( v11 != 4 ) /*0x10109ba2c*/
        break; /*0x10109ba2c*/
      if ( !__nbyte ) /*0x10109ba31*/
        goto LABEL_17; /*0x10109ba31*/
    }
    v9 = (char **)((v11 << 32) | 2); /*0x10109ba92*/
  }
  else
  {
LABEL_17:
    v9 = nullptr; /*0x10109ba6c*/
  }
LABEL_18:
  close_NOCANCEL(v10); /*0x10109ba6f*/
  return v9; /*0x10109ba7a*/
}