// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND append_snapshot_at node 0x10109b010 depth=1
__int64 __fastcall std::fs::OpenOptions::_open::h1dad73452047b8aa(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  int v5; // eax
  _BYTE __dst[384]; // [rsp+0h] [rbp-1D0h] BYREF
  int v8; // [rsp+180h] [rbp-50h] BYREF
  __int64 v9; // [rsp+188h] [rbp-48h]
  __int64 v10; // [rsp+198h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+1A0h] [rbp-30h] BYREF
  _UNKNOWN **v12; // [rsp+1A8h] [rbp-28h]

  v10 = a2; /*0x10109b028*/
  if ( a4 > 0x17F ) /*0x10109b033*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::h0ddb4d007f51cbc7( /*0x10109b0c2*/
      v11,
      a3,
      a4,
      &v10,
      std::sys::fs::unix::File::open::_$u7b$$u7b$closure$u7d$$u7d$::h95c66e27a3b35b3f);
    if ( v11[0] == 1 ) /*0x10109b0cb*/
      goto LABEL_5; /*0x10109b0cb*/
    goto LABEL_7; /*0x10109b0cb*/
  }
  memcpy(__dst, a3, a4); /*0x10109b048*/
  __dst[a4] = 0; /*0x10109b04d*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v8, __dst, a4 + 1); /*0x10109b063*/
  if ( v8 != 1 ) /*0x10109b06c*/
  {
    std::sys::fs::unix::File::open_c::hea0cbe8efcfb1225(v11, v9, a2); /*0x10109b093*/
    if ( v11[0] == 1 ) /*0x10109b09c*/
      goto LABEL_5; /*0x10109b09c*/
LABEL_7:
    *(_DWORD *)(a1 + 4) = v11[1]; /*0x10109b0cd*/
    v5 = 0; /*0x10109b0d3*/
    goto LABEL_8; /*0x10109b0d3*/
  }
  v12 = &off_1015AE3E8; /*0x10109b075*/
  v11[0] = 1; /*0x10109b079*/
LABEL_5:
  *(_QWORD *)(a1 + 8) = v12; /*0x10109b09e*/
  v5 = 1; /*0x10109b0a6*/
LABEL_8:
  *(_DWORD *)a1 = v5; /*0x10109b0d5*/
  return a1; /*0x10109b0da*/
}