// __ZN13codexmate_lib4core5voice7runtime13start_capture28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10066f990 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::start_capture::_$u7b$$u7b$closure$u7d$$u7d$::h743b90a78ba01985(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  char v5; // r15
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v9; // [rsp+18h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+28h] [rbp-28h]

  if ( *(_QWORD **)(a3 + 840) == a1 /*0x10066f9b9*/
    && (_QWORD *)codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1 == a1 )
  {
    v5 = a4; /*0x10066f9bf*/
    *(_QWORD *)(a3 + 840) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1); /*0x10066f9d3*/
    *(_QWORD *)(a3 + 848) = 0; /*0x10066f9da*/
    *(_BYTE *)(a3 + 876) = 5; /*0x10066f9e5*/
    a1 = v8; /*0x10066f9ec*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v8, a2); /*0x10066f9f0*/
    v11 = v8[2]; /*0x10066fa03*/
    v10 = v8[1]; /*0x10066fa0f*/
    v9 = v8[0]; /*0x10066fa13*/
    if ( !__OFSUB__(-*(_QWORD *)(a3 + 632), 1) && *(_QWORD *)(a3 + 632) ) /*0x10066fa25*/
    {
      a1 = *(_QWORD **)(a3 + 640); /*0x10066fa2f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, *(_QWORD *)(a3 + 632), 1); /*0x10066fa3b*/
    }
    *(_QWORD *)(a3 + 648) = v11; /*0x10066fa44*/
    v6 = v9; /*0x10066fa49*/
    *(_QWORD *)(a3 + 640) = v10; /*0x10066fa51*/
    *(_QWORD *)(a3 + 632) = v6; /*0x10066fa56*/
    *(_DWORD *)(a3 + 688) = 1000000000; /*0x10066fa5a*/
    a2 = *(_QWORD *)(a3 + 584); /*0x10066fa64*/
    if ( a2 != 0x8000000000000000LL && a2 ) /*0x10066fa73*/
    {
      a1 = *(_QWORD **)(a3 + 592); /*0x10066fa75*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a1, a2, 1); /*0x10066fa81*/
    }
    *(_QWORD *)(a3 + 584) = 0x8000000000000000LL; /*0x10066fa86*/
    a4 = v5; /*0x10066fa8d*/
  }
  if ( !a4 /*0x10066fac4*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           a1,
                           a2,
                           a3,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *(_BYTE *)(a3 + 8) = 1; /*0x10066facd*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)a3); /*0x10066fab3*/
}