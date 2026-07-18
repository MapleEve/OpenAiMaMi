// mac 1.2.2 NEW codexmate_lib4core12debug_bundle23read_catalog_fil 0x1013516a0 d=1
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

  v19 = 0; /*0x1013516b7*/
  v20 = 438; /*0x1013516be*/
  v21 = 1; /*0x1013516c4*/
  v22 = 0; /*0x1013516cb*/
  v18 = &v19; /*0x1013516d9*/
  if ( a3 > 0x17F ) /*0x1013516e4*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x101351773*/
      v23,
      a2,
      a3,
      &v18,
      std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( v23[0] == 1 ) /*0x10135177c*/
      goto LABEL_5; /*0x10135177c*/
    goto LABEL_7; /*0x10135177c*/
  }
  memcpy(__dst, a2, a3); /*0x1013516f3*/
  *((_BYTE *)&__dst[0].st_dev + a3) = 0; /*0x1013516f8*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v25, __dst, a3 + 1); /*0x10135170e*/
  if ( (_DWORD)v25 != 1 ) /*0x101351717*/
  {
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(v23, v26, &v19); /*0x10135173f*/
    if ( v23[0] == 1 ) /*0x101351748*/
      goto LABEL_5; /*0x101351748*/
LABEL_7:
    v5 = v23[1]; /*0x10135177e*/
    memset(__dst, 0, 144); /*0x1013517bd*/
    if ( fstat_INODE64(v23[1], __dst) == -1 ) /*0x1013517d6*/
    {
      __error(); /*0x1013517e7*/
      v6 = 0; /*0x1013517ec*/
    }
    else
    {
      v6 = 1; /*0x1013517d8*/
      st_size = __dst[0].st_size; /*0x1013517de*/
    }
    v25 = 0; /*0x1013517ef*/
    v26 = 1; /*0x1013517f7*/
    v27 = 0; /*0x1013517ff*/
    v7 = st_size; /*0x10135180a*/
    if ( !v6 ) /*0x10135180d*/
      v7 = 0; /*0x10135180d*/
    if ( alloc::string::String::try_reserve_exact::h0a1ec8a6ef3b7ea5(&v25, v7) == 0x8000000000000001LL ) /*0x10135182b*/
    {
      v8 = v27; /*0x10135182d*/
      v28 = v5; /*0x101351835*/
      v9 = std::io::default_read_to_end::hd3145b5f25dc6803(v5); /*0x101351842*/
      v10 = v9; /*0x101351847*/
      v12 = (__int64)v11; /*0x10135184a*/
      *(_QWORD *)v23 = v9; /*0x10135184d*/
      v24 = v11; /*0x101351851*/
      v13 = v27; /*0x101351855*/
      core::str::converts::from_utf8::hb32deb9559450f6e((__int64)__dst, v8 + v26, v27 - v8); /*0x10135186d*/
      if ( *(_QWORD *)&__dst[0].st_dev ) /*0x10135187a*/
      {
        if ( (v10 & 1) == 0 ) /*0x101351887*/
          v12 = (__int64)&off_101925C20; /*0x101351887*/
        v5 = v28; /*0x101351891*/
        v27 = v8; /*0x101351895*/
      }
      else
      {
        v14 = v13; /*0x1013518d5*/
        v5 = v28; /*0x1013518d8*/
        v27 = v14; /*0x1013518dc*/
        if ( (v10 & 1) == 0 ) /*0x1013518e4*/
        {
          a1[2] = v27; /*0x1013518ea*/
          v15 = v25; /*0x1013518ee*/
          a1[1] = v26; /*0x1013518f6*/
          *a1 = v15; /*0x1013518fa*/
LABEL_23:
          close_NOCANCEL(v5); /*0x1013518fd*/
          return a1; /*0x101351900*/
        }
      }
    }
    else
    {
      v12 = 0x2600000003LL; /*0x1013518ab*/
    }
    a1[1] = v12; /*0x1013518b5*/
    *a1 = 0x8000000000000000LL; /*0x1013518b9*/
    if ( v25 ) /*0x1013518c3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013518ce*/
    goto LABEL_23; /*0x1013518d3*/
  }
  v24 = &off_101926308; /*0x101351720*/
  v23[0] = 1; /*0x101351724*/
LABEL_5:
  a1[1] = v24; /*0x10135174a*/
  *a1 = 0x8000000000000000LL; /*0x10135175c*/
  return a1; /*0x101351908*/
}