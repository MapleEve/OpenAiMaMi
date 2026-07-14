// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1010a0fe0 depth=2
// std3sys2fs6rename
_UNKNOWN **__fastcall std::sys::fs::rename::h7934e6142c921014(void *__src, size_t __n, void *a3, size_t a4)
{
  std::__fs::filesystem::path *v6; // r15
  std::error_code *v7; // rdx
  int v9; // eax
  __int64 (__fastcall *v10)(); // rcx
  _QWORD *v11; // rdx
  _BYTE v12[384]; // [rsp+0h] [rbp-370h] BYREF
  _BYTE __dst[384]; // [rsp+180h] [rbp-1F0h] BYREF
  std::__fs::filesystem::path *v14[3]; // [rsp+300h] [rbp-70h] BYREF
  __int64 v15; // [rsp+318h] [rbp-58h] BYREF
  std::__fs::filesystem::path *__from; // [rsp+320h] [rbp-50h]
  __int64 v17; // [rsp+328h] [rbp-48h]
  _QWORD v18[2]; // [rsp+330h] [rbp-40h] BYREF
  _QWORD v19[6]; // [rsp+340h] [rbp-30h] BYREF

  v19[0] = a3; /*0x1010a0ff8*/
  v19[1] = a4; /*0x1010a0ffc*/
  if ( __n > 0x17F ) /*0x1010a1007*/
  {
    v10 = (__int64 (__fastcall *)())&std::sys::fs::rename::_$u7b$$u7b$closure$u7d$$u7d$::h878293a32675d13f; /*0x1010a10d5*/
    v11 = v19; /*0x1010a10dc*/
    return std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x1010a10f9*/
             (__int64)__src,
             __n,
             (__int64)v11,
             (__int64 (__fastcall *)(__int64, _BYTE *, __int64))v10);
  }
  memcpy(__dst, __src, __n); /*0x1010a1020*/
  __dst[__n] = 0; /*0x1010a1025*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v15, (__int64)__dst, __n + 1); /*0x1010a103b*/
  if ( (_BYTE)v15 ) /*0x1010a1044*/
    return &off_1015AE3E8; /*0x1010a10ae*/
  v6 = __from; /*0x1010a1046*/
  v18[0] = __from; /*0x1010a104e*/
  v18[1] = v17; /*0x1010a1052*/
  if ( a4 > 0x17F ) /*0x1010a105d*/
  {
    v10 = std::sys::fs::rename::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hce277e67cc577e1b; /*0x1010a10e8*/
    v11 = v18; /*0x1010a10ef*/
    __src = a3; /*0x1010a10f3*/
    __n = a4; /*0x1010a10f6*/
    return std::sys::helpers::small_c_string::run_with_cstr_allocating::h1e1d7c70f80a53e9( /*0x1010a10f6*/
             (__int64)__src,
             __n,
             (__int64)v11,
             (__int64 (__fastcall *)(__int64, _BYTE *, __int64))v10);
  }
  memcpy(v12, a3, a4); /*0x1010a1073*/
  v12[a4] = 0; /*0x1010a1078*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(v14, (__int64)v12, a4 + 1); /*0x1010a108d*/
  if ( LOBYTE(v14[0]) ) /*0x1010a1096*/
    return &off_1015AE3E8; /*0x1010a1096*/
  rename(v6, v14[1], v7); /*0x1010a10b6*/
  if ( v9 == -1 ) /*0x1010a10be*/
    return (_UNKNOWN **)(((unsigned __int64)(unsigned int)*__error() << 32) | 2); /*0x1010a10cf*/
  else
    return nullptr; /*0x1010a10c0*/
}