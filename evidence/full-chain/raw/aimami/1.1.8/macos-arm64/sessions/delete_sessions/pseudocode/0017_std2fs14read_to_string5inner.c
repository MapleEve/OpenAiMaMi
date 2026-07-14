// mac 1.1.8 delete_sessions node va=0x10109b0f0 depth=1
// std2fs14read_to_string5inner
_QWORD *__fastcall std::fs::read_to_string::inner::hcce2334f4117b5b3(_QWORD *a1, const void *a2, size_t a3)
{
  off_t st_size; // r12
  unsigned int v5; // r13d
  __int64 v6; // r15
  off_t v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  char v10; // r12
  _UNKNOWN **v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  stat __dst[2]; // [rsp+0h] [rbp-1F0h] BYREF
  int *v18; // [rsp+180h] [rbp-70h] BYREF
  int v19; // [rsp+18Ch] [rbp-64h] BYREF
  __int16 v20; // [rsp+190h] [rbp-60h]
  int v21; // [rsp+192h] [rbp-5Eh]
  __int16 v22; // [rsp+196h] [rbp-5Ah]
  int v23[2]; // [rsp+198h] [rbp-58h] BYREF
  _UNKNOWN **v24; // [rsp+1A0h] [rbp-50h]
  __int64 v25; // [rsp+1A8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+1B0h] [rbp-40h]
  __int64 v27; // [rsp+1B8h] [rbp-38h]
  unsigned int v28; // [rsp+1C4h] [rbp-2Ch]

  v19 = 0; /*0x10109b107*/
  v20 = 438; /*0x10109b10e*/
  v21 = 1; /*0x10109b114*/
  v22 = 0; /*0x10109b11b*/
  v18 = &v19; /*0x10109b129*/
  if ( a3 > 0x17F ) /*0x10109b134*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x10109b1c3*/
      v23,
      a2,
      a3,
      &v18,
      std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( v23[0] == 1 ) /*0x10109b1cc*/
      goto LABEL_5; /*0x10109b1cc*/
    goto LABEL_7; /*0x10109b1cc*/
  }
  memcpy(__dst, a2, a3); /*0x10109b143*/
  *((_BYTE *)&__dst[0].st_dev + a3) = 0; /*0x10109b148*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v25, __dst, a3 + 1); /*0x10109b15e*/
  if ( (_DWORD)v25 != 1 ) /*0x10109b167*/
  {
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(v23, v26, &v19); /*0x10109b18f*/
    if ( v23[0] == 1 ) /*0x10109b198*/
      goto LABEL_5; /*0x10109b198*/
LABEL_7:
    v5 = v23[1]; /*0x10109b1ce*/
    memset(__dst, 0, 144); /*0x10109b20d*/
    if ( fstat_INODE64(v23[1], __dst) == -1 ) /*0x10109b226*/
    {
      __error(); /*0x10109b237*/
      v6 = 0; /*0x10109b23c*/
    }
    else
    {
      v6 = 1; /*0x10109b228*/
      st_size = __dst[0].st_size; /*0x10109b22e*/
    }
    v25 = 0; /*0x10109b23f*/
    v26 = 1; /*0x10109b247*/
    v27 = 0; /*0x10109b24f*/
    v7 = st_size; /*0x10109b25a*/
    if ( !v6 ) /*0x10109b25d*/
      v7 = 0; /*0x10109b25d*/
    if ( alloc::string::String::try_reserve_exact::h0a1ec8a6ef3b7ea5(&v25, v7) == 0x8000000000000001LL ) /*0x10109b27b*/
    {
      v8 = v27; /*0x10109b27d*/
      v28 = v5; /*0x10109b285*/
      v9 = std::io::default_read_to_end::hd3145b5f25dc6803(v5); /*0x10109b292*/
      v10 = v9; /*0x10109b297*/
      v12 = (__int64)v11; /*0x10109b29a*/
      *(_QWORD *)v23 = v9; /*0x10109b29d*/
      v24 = v11; /*0x10109b2a1*/
      v13 = v27; /*0x10109b2a5*/
      core::str::converts::from_utf8::hb32deb9559450f6e(__dst, v8 + v26, v27 - v8); /*0x10109b2bd*/
      if ( *(_QWORD *)&__dst[0].st_dev ) /*0x10109b2ca*/
      {
        if ( (v10 & 1) == 0 ) /*0x10109b2d7*/
          v12 = (__int64)&off_1015ADD00; /*0x10109b2d7*/
        v5 = v28; /*0x10109b2e1*/
        v27 = v8; /*0x10109b2e5*/
      }
      else
      {
        v14 = v13; /*0x10109b325*/
        v5 = v28; /*0x10109b328*/
        v27 = v14; /*0x10109b32c*/
        if ( (v10 & 1) == 0 ) /*0x10109b334*/
        {
          a1[2] = v27; /*0x10109b33a*/
          v15 = v25; /*0x10109b33e*/
          a1[1] = v26; /*0x10109b346*/
          *a1 = v15; /*0x10109b34a*/
LABEL_23:
          close_NOCANCEL(v5); /*0x10109b34d*/
          return a1; /*0x10109b350*/
        }
      }
    }
    else
    {
      v12 = 0x2600000003LL; /*0x10109b2fb*/
    }
    a1[1] = v12; /*0x10109b305*/
    *a1 = 0x8000000000000000LL; /*0x10109b309*/
    if ( v25 ) /*0x10109b313*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10109b31e*/
    goto LABEL_23; /*0x10109b323*/
  }
  v24 = &off_1015AE3E8; /*0x10109b170*/
  v23[0] = 1; /*0x10109b174*/
LABEL_5:
  a1[1] = v24; /*0x10109b19a*/
  *a1 = 0x8000000000000000LL; /*0x10109b1ac*/
  return a1; /*0x10109b358*/
}