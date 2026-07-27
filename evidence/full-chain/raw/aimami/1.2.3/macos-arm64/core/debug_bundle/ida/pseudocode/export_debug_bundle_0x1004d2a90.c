// __ZN13codexmate_lib4core12debug_bundle19export_debug_bundle28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1004d2a90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::export_debug_bundle::_$u7b$$u7b$closure$u7d$$u7d$::hd348dba9a685213e(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x1004d2aa1*/
  v5[1] = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x1004d2aac*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1017BF596, v5); /*0x1004d2abf*/
  a1[3] = v4[2]; /*0x1004d2ac8*/
  v2 = v4[0]; /*0x1004d2acc*/
  a1[2] = v4[1]; /*0x1004d2ad4*/
  a1[1] = v2; /*0x1004d2ad8*/
  *a1 = 10; /*0x1004d2adc*/
  return core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h1af0e0357529f8d4(*a2, a2[1]); /*0x1004d2aef*/
}