// mac 1.1.8 get_relay_provider_quota node va=0x1000d3910 depth=1
// core3ptr96drop_in_place::b::b::d::d
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc0c977eabc812478(
        __int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 241); /*0x1000d391a*/
  if ( (_DWORD)result == 3 ) /*0x1000d3924*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$::hf7f155acb022d629(a1 + 288); /*0x1000d3977*/
    goto LABEL_9; /*0x1000d3977*/
  }
  if ( (_DWORD)result == 4 ) /*0x1000d3929*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h61887dfc3b210d40(a1 + 248); /*0x1000d3962*/
LABEL_7:
    *(_BYTE *)(a1 + 240) = 0; /*0x1000d3967*/
    goto LABEL_9; /*0x1000d396e*/
  }
  if ( (_DWORD)result != 5 ) /*0x1000d392e*/
    return result; /*0x1000d392e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h61887dfc3b210d40(a1 + 248); /*0x1000d393b*/
  if ( !__OFSUB__(0, *(_QWORD *)(a1 + 176)) ) /*0x1000d3949*/
    goto LABEL_7; /*0x1000d3949*/
  *(_BYTE *)(a1 + 240) = 0; /*0x1000d394b*/
  *(_BYTE *)(a1 + 240) = 0; /*0x1000d3952*/
LABEL_9:
  if ( *(_QWORD *)(a1 + 152) ) /*0x1000d397c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d3994*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 144)) ) /*0x1000d39a0*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdc6de128d31cb84a(a1 + 144); /*0x1000d39ad*/
  result = core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::h54ea0a9b41b92799(a1); /*0x1000d39b5*/
  if ( *(_QWORD *)(a1 + 120) ) /*0x1000d39ba*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000d39d3*/
  return result; /*0x1000d39cf*/
}