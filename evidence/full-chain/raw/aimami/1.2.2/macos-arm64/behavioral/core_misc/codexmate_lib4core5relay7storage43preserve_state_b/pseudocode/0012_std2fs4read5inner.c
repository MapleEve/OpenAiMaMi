// mac 1.2.2 NEW codexmate_lib4core5relay7storage43preserve_state_b 0x101351c50 d=1
unsigned __int64 *__fastcall std::fs::read::inner::h6a30c15c40add28b(unsigned __int64 *a1, const void *a2, size_t a3)
{
  unsigned int v4; // r14d
  off_t st_size; // r15
  unsigned __int64 v6; // rax
  __darwin_ino64_t v7; // rax
  off_t v8; // rcx
  unsigned __int64 v9; // rdx
  stat __dst[2]; // [rsp+0h] [rbp-1E0h] BYREF
  int v12; // [rsp+188h] [rbp-58h] BYREF
  __int64 v13; // [rsp+190h] [rbp-50h]
  int *v14; // [rsp+1A0h] [rbp-40h] BYREF
  int v15; // [rsp+1A8h] [rbp-38h] BYREF
  int v16; // [rsp+1ACh] [rbp-34h]
  _UNKNOWN **v17; // [rsp+1B0h] [rbp-30h]
  int v18; // [rsp+1BCh] [rbp-24h] BYREF
  __int16 v19; // [rsp+1C0h] [rbp-20h]
  int v20; // [rsp+1C2h] [rbp-1Eh]
  __int16 v21; // [rsp+1C6h] [rbp-1Ah]

  v18 = 0; /*0x101351c63*/
  v19 = 438; /*0x101351c6a*/
  v20 = 1; /*0x101351c70*/
  v21 = 0; /*0x101351c77*/
  v14 = &v18; /*0x101351c85*/
  if ( a3 > 0x17F ) /*0x101351c90*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x101351d1f*/
      &v15,
      a2,
      a3,
      &v14,
      std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( v15 == 1 ) /*0x101351d28*/
      goto LABEL_5; /*0x101351d28*/
    goto LABEL_7; /*0x101351d28*/
  }
  memcpy(__dst, a2, a3); /*0x101351c9f*/
  *((_BYTE *)&__dst[0].st_dev + a3) = 0; /*0x101351ca4*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v12, __dst, a3 + 1); /*0x101351cba*/
  if ( v12 != 1 ) /*0x101351cc3*/
  {
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(&v15, v13, &v18); /*0x101351ceb*/
    if ( v15 == 1 ) /*0x101351cf4*/
      goto LABEL_5; /*0x101351cf4*/
LABEL_7:
    v4 = v16; /*0x101351d2a*/
    memset(__dst, 0, 144); /*0x101351d69*/
    if ( fstat_INODE64(v16, __dst) == -1 ) /*0x101351d82*/
    {
      __error(); /*0x101351db1*/
      v7 = 1; /*0x101351db6*/
      v8 = 0; /*0x101351dbd*/
    }
    else
    {
      st_size = __dst[0].st_size; /*0x101351d84*/
      if ( __dst[0].st_size < 0 ) /*0x101351d8e*/
      {
LABEL_9:
        a1[1] = 0x2600000003LL; /*0x101351d94*/
        v6 = 0x8000000000000000LL; /*0x101351da2*/
        goto LABEL_15; /*0x101351dac*/
      }
      if ( __dst[0].st_size ) /*0x101351e57*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101351e59*/
        v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(st_size, 1u); /*0x101351e66*/
        if ( !v7 ) /*0x101351e6e*/
          goto LABEL_9; /*0x101351e6e*/
        v8 = st_size; /*0x101351e74*/
      }
      else
      {
        v8 = 0; /*0x101351e86*/
        v7 = 1; /*0x101351e88*/
      }
    }
    *(_QWORD *)&__dst[0].st_dev = v8; /*0x101351dbf*/
    __dst[0].st_ino = v7; /*0x101351dc6*/
    *(_QWORD *)&__dst[0].st_uid = 0; /*0x101351dcd*/
    if ( (std::io::default_read_to_end::hd3145b5f25dc6803(v4) & 1) != 0 ) /*0x101351dec*/
    {
      a1[1] = v9; /*0x101351dee*/
      *a1 = 0x8000000000000000LL; /*0x101351dfc*/
      if ( *(_QWORD *)&__dst[0].st_dev ) /*0x101351e09*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101351e17*/
      goto LABEL_16; /*0x101351e1c*/
    }
    a1[2] = *(_QWORD *)&__dst[0].st_uid; /*0x101351e25*/
    v6 = *(_QWORD *)&__dst[0].st_dev; /*0x101351e30*/
    a1[1] = __dst[0].st_ino; /*0x101351e37*/
LABEL_15:
    *a1 = v6; /*0x101351e3b*/
LABEL_16:
    close_NOCANCEL(v4); /*0x101351e3e*/
    return a1; /*0x101351e41*/
  }
  v17 = &off_101926308; /*0x101351ccc*/
  v15 = 1; /*0x101351cd0*/
LABEL_5:
  a1[1] = (unsigned __int64)v17; /*0x101351cf6*/
  *a1 = 0x8000000000000000LL; /*0x101351d08*/
  return a1; /*0x101351e49*/
}