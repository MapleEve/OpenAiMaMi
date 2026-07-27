// __ZN13codexmate_lib4core5voice7runtime19set_global_shortcut @ 0x100677fa0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::set_global_shortcut::h599c9caa4cc6e991(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rsi
  _QWORD v12[4]; // [rsp+10h] [rbp-5D0h] BYREF
  _BYTE __src[680]; // [rsp+30h] [rbp-5B0h] BYREF
  __int64 v14; // [rsp+2D8h] [rbp-308h]
  __int64 v15; // [rsp+2E0h] [rbp-300h]
  __int64 v16; // [rsp+2E8h] [rbp-2F8h]
  __int64 v17; // [rsp+2F0h] [rbp-2F0h]
  _QWORD __dst[85]; // [rsp+2F8h] [rbp-2E8h] BYREF
  __int64 v19; // [rsp+5A0h] [rbp-40h] BYREF
  __int64 v20; // [rsp+5A8h] [rbp-38h]
  __int64 v21; // [rsp+5B0h] [rbp-30h]

  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v12, a2); /*0x100677fce*/
  v19 = v12[1]; /*0x100677fe1*/
  v20 = v12[2]; /*0x100677fec*/
  v21 = v12[3]; /*0x100677ff7*/
  if ( v12[0] == 2 ) /*0x100677fff*/
  {
    a1[3] = v21; /*0x100678005*/
    v5 = v19; /*0x100678009*/
    a1[2] = v20; /*0x100678011*/
    a1[1] = v5; /*0x100678015*/
    *a1 = 2; /*0x100678019*/
    v6 = *a3; /*0x100678020*/
    if ( *a3 != 0x8000000000000000LL && v6 ) /*0x10067802f*/
    {
      v7 = a3[1]; /*0x100678035*/
LABEL_56:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100678397*/
      return a1; /*0x10067839c*/
    }
    return a1; /*0x10067802f*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x100678051*/
  v15 = v19; /*0x10067805e*/
  v16 = v20; /*0x100678065*/
  v17 = v21; /*0x100678070*/
  v14 = v12[0]; /*0x100678077*/
  v8 = *a3; /*0x100678082*/
  v9 = a3[1]; /*0x100678085*/
  v21 = __dst[24]; /*0x10067809a*/
  v20 = __dst[23]; /*0x1006780ac*/
  v19 = __dst[22]; /*0x1006780b0*/
  v12[0] = 0x8000000000000000LL; /*0x1006780b4*/
  codexmate_lib::core::voice::runtime::update_settings_internal::h84dae0cf7084379f( /*0x1006780d0*/
    (_DWORD)a1,
    a2,
    BYTE1(__dst[83]),
    (unsigned int)v12,
    BYTE3(__dst[83]),
    BYTE5(__dst[83]),
    (__int64)&v19);
  if ( !(2 * v8) ) /*0x1006780d5*/
  {
    v10 = v16; /*0x1006780e6*/
    if ( !v16 ) /*0x1006780f0*/
      goto LABEL_8; /*0x1006780f0*/
    goto LABEL_7; /*0x1006780f0*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1006783c1*/
  v10 = v16; /*0x1006783c6*/
  if ( v16 ) /*0x1006783d0*/
LABEL_7:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v10, 1); /*0x1006780f2*/
LABEL_8:
  if ( __dst[1] ) /*0x10067810d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2], __dst[1], 1); /*0x10067811b*/
  if ( __dst[4] ) /*0x10067812a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[5], __dst[4], 1); /*0x100678138*/
  if ( __dst[7] ) /*0x100678147*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[8], __dst[7], 1); /*0x100678155*/
  if ( __dst[10] ) /*0x100678164*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[11], __dst[10], 1); /*0x100678172*/
  if ( __dst[13] ) /*0x100678181*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[14], __dst[13], 1); /*0x10067818f*/
  if ( __dst[16] ) /*0x10067819e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[17], __dst[16], 1); /*0x1006781ac*/
  if ( __dst[19] ) /*0x1006781bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[20], __dst[19], 1); /*0x1006781c9*/
  if ( __dst[58] != 0x8000000000000000LL && __dst[58] ) /*0x1006781dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[59], __dst[58], 1); /*0x1006781eb*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(&__dst[70]); /*0x1006781f7*/
  if ( __dst[25] ) /*0x100678206*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[26], __dst[25], 1); /*0x100678214*/
  if ( __dst[28] ) /*0x100678223*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[29], __dst[28], 1); /*0x100678231*/
  if ( __dst[31] ) /*0x100678240*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[32], __dst[31], 1); /*0x10067824e*/
  if ( __dst[34] ) /*0x10067825d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[35], __dst[34], 1); /*0x10067826b*/
  if ( __dst[37] ) /*0x10067827a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[38], __dst[37], 1); /*0x100678288*/
  if ( __dst[40] ) /*0x100678297*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[41], __dst[40], 1); /*0x1006782a5*/
  if ( __dst[43] ) /*0x1006782b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[44], __dst[43], 1); /*0x1006782c2*/
  if ( __dst[46] ) /*0x1006782d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[47], __dst[46], 1); /*0x1006782df*/
  if ( __dst[49] ) /*0x1006782ee*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[50], __dst[49], 1); /*0x1006782fc*/
  if ( __dst[52] ) /*0x10067830b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[53], __dst[52], 1); /*0x100678319*/
  if ( __dst[61] != 0x8000000000000000LL && __dst[61] ) /*0x10067832d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[62], __dst[61], 1); /*0x10067833b*/
  if ( __dst[64] != 0x8000000000000000LL && __dst[64] ) /*0x10067834f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[65], __dst[64], 1); /*0x10067835d*/
  if ( __dst[55] ) /*0x10067836c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[56], __dst[55], 1); /*0x10067837a*/
  v6 = __dst[67]; /*0x10067837f*/
  if ( __dst[67] != 0x8000000000000000LL && __dst[67] ) /*0x10067838e*/
  {
    v7 = __dst[68]; /*0x100678390*/
    goto LABEL_56; /*0x100678390*/
  }
  return a1; /*0x1006783a4*/
}