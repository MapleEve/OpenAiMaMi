// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_direct_client node 0x1005ea810 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h10979ef1b92776bb(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r12

  v1 = *(_QWORD **)a1; /*0x1005ea81b*/
  if ( *(_WORD *)(*(_QWORD *)a1 + 88LL) == 3 ) /*0x1005ea823*/
  {
    v2 = v1[12]; /*0x1005ea825*/
    if ( v2 ) /*0x1005ea82c*/
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v2 + 32))(v1 + 15, v1[13], v1[14]); /*0x1005ea83a*/
  }
  if ( v1[16] ) /*0x1005ea83d*/
  {
    v3 = v1[17]; /*0x1005ea849*/
    if ( *(_QWORD *)v3 ) /*0x1005ea850*/
      (*(void (__fastcall **)(_QWORD))v3)(v1[16]); /*0x1005ea85c*/
    if ( *(_QWORD *)(v3 + 8) ) /*0x1005ea85e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ea870*/
  }
  if ( !__OFSUB__(-*v1, 1) && *v1 ) /*0x1005ea878*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ea88b*/
  return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005ea89d*/
}