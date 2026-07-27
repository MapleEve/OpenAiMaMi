// __ZN13codexmate_lib4core5relay7manager12RelayManager24set_codex_router_enabled28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1002798a0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_enabled::_$u7b$$u7b$closure$u7d$$u7d$::h1e429228c8b12b44(
        __int64 a1,
        const void *a2,
        size_t a3)
{
  char v3; // r13
  __int64 *result; // rax
  __int64 v5; // r14
  void *v7; // rax
  void *v8; // r12
  _QWORD v9[3]; // [rsp+8h] [rbp-58h] BYREF
  char v10; // [rsp+20h] [rbp-40h]
  char v11; // [rsp+21h] [rbp-3Fh]
  __int64 v12; // [rsp+28h] [rbp-38h]
  char v13; // [rsp+37h] [rbp-29h]

  v3 = **(_BYTE **)a1 + 1; /*0x1002798b8*/
  **(_BYTE **)a1 = v3; /*0x1002798bb*/
  result = *(__int64 **)(a1 + 8); /*0x1002798be*/
  v5 = *result; /*0x1002798c2*/
  if ( *result ) /*0x1002798c2*/
  {
    v12 = result[1]; /*0x1002798d4*/
    v13 = **(_BYTE **)(a1 + 16); /*0x1002798df*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1002798e2*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1002798ef*/
    if ( !v7 ) /*0x1002798f7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x100279946*/
    v8 = v7; /*0x1002798f9*/
    memcpy(v7, a2, a3); /*0x100279905*/
    v9[0] = a3; /*0x10027990a*/
    v9[1] = v8; /*0x10027990e*/
    v9[2] = a3; /*0x100279912*/
    v10 = v3; /*0x100279916*/
    v11 = v13; /*0x10027991e*/
    return (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 40))(v5, v9); /*0x10027992c*/
  }
  return result; /*0x10027992f*/
}