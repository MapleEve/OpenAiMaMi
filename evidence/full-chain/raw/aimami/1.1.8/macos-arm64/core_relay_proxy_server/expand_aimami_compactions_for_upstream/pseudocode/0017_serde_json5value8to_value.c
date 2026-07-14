// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x100518cd0 depth=1
__int64 __fastcall serde_json::value::to_value::ha3b8839fd7e79eae(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  const void *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12

  v2 = *(_QWORD *)(a2 + 16); /*0x100518cde*/
  if ( v2 < 0 ) /*0x100518ce5*/
  {
    v3 = 0; /*0x100518ce7*/
    goto LABEL_3; /*0x100518ce7*/
  }
  v4 = *(const void **)(a2 + 8); /*0x100518cf8*/
  if ( v2 ) /*0x100518cfc*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100518cfe*/
    v3 = 1; /*0x100518d03*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 1u); /*0x100518d11*/
    if ( !v5 ) /*0x100518d19*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, v2); /*0x100518cea*/
    v6 = v5; /*0x100518d1b*/
  }
  else
  {
    v6 = 1; /*0x100518d20*/
  }
  memcpy((void *)v6, v4, v2); /*0x100518d2f*/
  *(_BYTE *)a1 = 3; /*0x100518d34*/
  *(_QWORD *)(a1 + 8) = v2; /*0x100518d38*/
  *(_QWORD *)(a1 + 16) = v6; /*0x100518d3c*/
  *(_QWORD *)(a1 + 24) = v2; /*0x100518d40*/
  return a1; /*0x100518d4b*/
}