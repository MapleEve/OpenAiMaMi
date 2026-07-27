// __ZN13codexmate_lib4core5relay7manager12RelayManager13import_config28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1002735c0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::import_config::_$u7b$$u7b$closure$u7d$$u7d$::h14ef60f92bbe80a3(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+28h] [rbp-28h] BYREF

  v5[0] = a2; /*0x1002735d1*/
  v5[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002735dc*/
  v5[2] = a3; /*0x1002735e0*/
  v5[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002735e4*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v6, &unk_1017BA023, v5); /*0x1002735f7*/
  a1[3] = v6[2]; /*0x100273600*/
  result = v6[0]; /*0x100273604*/
  a1[2] = v6[1]; /*0x10027360c*/
  a1[1] = result; /*0x100273610*/
  *a1 = 10; /*0x100273614*/
  if ( *a3 ) /*0x10027361b*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x10027362c*/
  return result; /*0x100273631*/
}