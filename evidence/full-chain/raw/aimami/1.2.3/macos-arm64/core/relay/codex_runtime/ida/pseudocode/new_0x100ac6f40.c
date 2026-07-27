// __ZN13codexmate_lib4core5relay13codex_runtime19CodexRuntimeContext3new @ 0x100ac6f40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_runtime::CodexRuntimeContext::new::h6df372db35f953b8(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3,
        unsigned int a4)
{
  size_t v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  _BYTE __dsta[744]; // [rsp+8h] [rbp-338h] BYREF
  __int64 v10[3]; // [rsp+2F0h] [rbp-50h] BYREF
  void *__src; // [rsp+308h] [rbp-38h]
  unsigned int v12; // [rsp+314h] [rbp-2Ch]

  v12 = a4; /*0x100ac6f54*/
  __src = (void *)a3[1]; /*0x100ac6f64*/
  v5 = a3[2]; /*0x100ac6f68*/
  if ( v5 ) /*0x100ac6f6f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, a2); /*0x100ac6f71*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100ac6f83*/
    if ( !v6 ) /*0x100ac6f89*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100ac6f93*/
  }
  else
  {
    v6 = 1; /*0x100ac6f9a*/
  }
  memcpy((void *)v6, __src, v5); /*0x100ac6faa*/
  v10[0] = v5; /*0x100ac6faf*/
  v10[1] = v6; /*0x100ac6fb3*/
  v10[2] = v5; /*0x100ac6fb7*/
  codexmate_lib::platform::paths::CodexPaths::with_state_db_override::h18e8997204347fac(__dsta, a2, v10); /*0x100ac6fc9*/
  __dst[95] = a3[2]; /*0x100ac6fd2*/
  v7 = *a3; /*0x100ac6fda*/
  __dst[94] = a3[1]; /*0x100ac6fe1*/
  __dst[93] = v7; /*0x100ac6fe9*/
  memcpy(__dst, __dsta, 0x2E8u); /*0x100ac7000*/
  result = v12; /*0x100ac7005*/
  *((_BYTE *)__dst + 768) = v12; /*0x100ac7008*/
  return result; /*0x100ac7010*/
}