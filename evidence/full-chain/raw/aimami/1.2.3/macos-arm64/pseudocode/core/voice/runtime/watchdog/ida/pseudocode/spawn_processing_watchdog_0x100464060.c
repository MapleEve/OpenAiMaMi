// __ZN13codexmate_lib4core5voice7runtime8watchdog25spawn_processing_watchdog @ 0x100464060 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::runtime::watchdog::spawn_processing_watchdog::hd1792ea121b670af(
        void *__src,
        __int64 a2)
{
  int v2; // ecx
  _QWORD __dst[20]; // [rsp+8h] [rbp-E8h] BYREF
  int v5[2]; // [rsp+A8h] [rbp-48h] BYREF
  __int64 v6; // [rsp+C0h] [rbp-30h] BYREF
  int v7[2]; // [rsp+C8h] [rbp-28h] BYREF
  __int64 v8; // [rsp+D0h] [rbp-20h]

  v6 = a2; /*0x100464071*/
  __dst[0] = &v6; /*0x100464079*/
  __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100464087*/
  __dst[2] = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_150; /*0x100464095*/
  __dst[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10046409c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_144, __dst); /*0x1004640b8*/
  if ( *(_QWORD *)v7 ) /*0x1004640c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, *(_QWORD *)v7, 1); /*0x1004640cf*/
  __dst[19] = v6; /*0x1004640d8*/
  memcpy(__dst, __src, 0x98u); /*0x1004640e7*/
  *(_QWORD *)v5 = 0x8000000000000000LL; /*0x1004640f6*/
  std::thread::lifecycle::spawn_unchecked::h232455a4838442d2((int)v7, (int)v5, 0, v2, 0, 0, __dst); /*0x10046410e*/
  if ( !*(_QWORD *)v7 ) /*0x10046411e*/
  {
    *(_QWORD *)v7 = v8; /*0x100464145*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100464167*/
      "failed to spawn thread",
      22,
      v7,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_407,
      &anon_4fd0d0f33f5bcd90fdaba20400e954f2_147);
  }
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v7); /*0x100464139*/
}