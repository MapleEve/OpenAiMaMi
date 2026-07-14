// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x100518f30 depth=1
__int64 __fastcall serde_json::value::to_value::hface210696658453(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  const void *v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12

  v2 = *(_QWORD *)(a2 + 8); /*0x100518f3e*/
  if ( v2 < 0 ) /*0x100518f45*/
  {
    v3 = 0; /*0x100518f47*/
    goto LABEL_3; /*0x100518f47*/
  }
  v4 = *(const void **)a2; /*0x100518f58*/
  if ( v2 ) /*0x100518f5b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100518f5d*/
    v3 = 1; /*0x100518f62*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 1u); /*0x100518f70*/
    if ( !v5 ) /*0x100518f78*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, v2); /*0x100518f4a*/
    v6 = v5; /*0x100518f7a*/
  }
  else
  {
    v6 = 1; /*0x100518f7f*/
  }
  memcpy((void *)v6, v4, v2); /*0x100518f8e*/
  *(_BYTE *)a1 = 3; /*0x100518f93*/
  *(_QWORD *)(a1 + 8) = v2; /*0x100518f97*/
  *(_QWORD *)(a1 + 16) = v6; /*0x100518f9b*/
  *(_QWORD *)(a1 + 24) = v2; /*0x100518f9f*/
  return a1; /*0x100518faa*/
}