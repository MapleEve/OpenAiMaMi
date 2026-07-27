// __ZN13codexmate_lib4core5voice7runtime15set_trigger_key @ 0x1006711a0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::set_trigger_key::h398e97b5236881bc(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  void *v16; // r15
  void (__fastcall __noreturn *v17)(); // rsi
  size_t v18; // rdx
  __int64 v19; // rax
  __int64 v20; // [rsp+10h] [rbp-5D0h] BYREF
  __int64 v21; // [rsp+18h] [rbp-5C8h]
  __int64 v22; // [rsp+20h] [rbp-5C0h]
  __int64 v23; // [rsp+28h] [rbp-5B8h]
  _BYTE __src[680]; // [rsp+30h] [rbp-5B0h] BYREF
  __int64 v25; // [rsp+2D8h] [rbp-308h]
  __int64 v26; // [rsp+2E0h] [rbp-300h]
  __int64 v27; // [rsp+2E8h] [rbp-2F8h]
  __int64 v28; // [rsp+2F0h] [rbp-2F0h]
  _QWORD __dst[85]; // [rsp+2F8h] [rbp-2E8h] BYREF
  __int64 v30; // [rsp+5A0h] [rbp-40h]
  __int64 v31; // [rsp+5A8h] [rbp-38h]
  __int64 v32; // [rsp+5B0h] [rbp-30h]

  v6 = a3[6]; /*0x1006711bd*/
  v7 = a3[7]; /*0x1006711c1*/
  if ( *((_OWORD *)a3 + 3) != 0 ) /*0x1006711cb*/
  {
    v8 = a3[7]; /*0x1006711cd*/
    if ( !(unsigned __int8)codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(v6, v8) ) /*0x1006711d7*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v8); /*0x1006715cc*/
      if ( v7 ) /*0x1006715d4*/
      {
        v14 = 129; /*0x1006715d6*/
        v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(129, 1); /*0x1006715e6*/
        if ( v15 ) /*0x1006715ee*/
        {
          v16 = (void *)v15; /*0x1006715f0*/
          v17 = anon_4776471024d1e9bb78f2861cb2b51e1e_542; /*0x1006715f3*/
          v18 = 129; /*0x1006715fa*/
          goto LABEL_65; /*0x1006715ff*/
        }
      }
      else
      {
        v14 = 285; /*0x100671601*/
        v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(285, 1); /*0x100671611*/
        if ( v19 ) /*0x100671619*/
        {
          v16 = (void *)v19; /*0x10067161b*/
          v17 = (void (__fastcall __noreturn *)())&anon_4776471024d1e9bb78f2861cb2b51e1e_541; /*0x10067161e*/
          v18 = 285; /*0x100671625*/
LABEL_65:
          memcpy(v16, v17, v18); /*0x10067162a*/
          a1[1] = v14; /*0x100671632*/
          a1[2] = v16; /*0x100671636*/
          a1[3] = v14; /*0x10067163a*/
          *a1 = 2; /*0x10067163e*/
          v10 = *a3; /*0x100671645*/
          if ( !*a3 ) /*0x100671645*/
          {
LABEL_6:
            v11 = a3[3]; /*0x100671252*/
            if ( v11 ) /*0x100671259*/
            {
              v12 = a3[4]; /*0x10067125f*/
LABEL_58:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x1006715ad*/
              return a1; /*0x1006715b2*/
            }
            return a1; /*0x100671259*/
          }
LABEL_5:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], v10, 1); /*0x100671244*/
          goto LABEL_6; /*0x10067124d*/
        }
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x10067165e*/
    }
  }
  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(&v20, a2); /*0x1006711ea*/
  v30 = v21; /*0x1006711fd*/
  v31 = v22; /*0x100671208*/
  v32 = v23; /*0x100671213*/
  if ( v20 == 2 ) /*0x10067121b*/
  {
    a1[3] = v32; /*0x100671221*/
    v9 = v30; /*0x100671225*/
    a1[2] = v31; /*0x10067122d*/
    a1[1] = v9; /*0x100671231*/
    *a1 = 2; /*0x100671235*/
    v10 = *a3; /*0x10067123c*/
    if ( !*a3 ) /*0x100671242*/
      goto LABEL_6; /*0x100671242*/
    goto LABEL_5; /*0x100671242*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x10067127b*/
  v26 = v30; /*0x100671288*/
  v27 = v31; /*0x10067128f*/
  v28 = v32; /*0x10067129a*/
  v25 = v20; /*0x1006712a1*/
  v22 = __dst[24]; /*0x1006712bd*/
  v21 = __dst[23]; /*0x1006712d2*/
  v20 = __dst[22]; /*0x1006712d9*/
  codexmate_lib::core::voice::runtime::update_settings_internal::h84dae0cf7084379f( /*0x1006712ed*/
    (_DWORD)a1,
    a2,
    BYTE1(__dst[83]),
    (_DWORD)a3,
    BYTE3(__dst[83]),
    BYTE5(__dst[83]),
    (__int64)&v20);
  if ( v27 ) /*0x1006712fc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x10067130a*/
  if ( __dst[1] ) /*0x100671323*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[2], __dst[1], 1); /*0x100671331*/
  if ( __dst[4] ) /*0x100671340*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[5], __dst[4], 1); /*0x10067134e*/
  if ( __dst[7] ) /*0x10067135d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[8], __dst[7], 1); /*0x10067136b*/
  if ( __dst[10] ) /*0x10067137a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[11], __dst[10], 1); /*0x100671388*/
  if ( __dst[13] ) /*0x100671397*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[14], __dst[13], 1); /*0x1006713a5*/
  if ( __dst[16] ) /*0x1006713b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[17], __dst[16], 1); /*0x1006713c2*/
  if ( __dst[19] ) /*0x1006713d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[20], __dst[19], 1); /*0x1006713df*/
  if ( __dst[58] != 0x8000000000000000LL && __dst[58] ) /*0x1006713f3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[59], __dst[58], 1); /*0x100671401*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd743cfc519763180(&__dst[70]); /*0x10067140d*/
  if ( __dst[25] ) /*0x10067141c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[26], __dst[25], 1); /*0x10067142a*/
  if ( __dst[28] ) /*0x100671439*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[29], __dst[28], 1); /*0x100671447*/
  if ( __dst[31] ) /*0x100671456*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[32], __dst[31], 1); /*0x100671464*/
  if ( __dst[34] ) /*0x100671473*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[35], __dst[34], 1); /*0x100671481*/
  if ( __dst[37] ) /*0x100671490*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[38], __dst[37], 1); /*0x10067149e*/
  if ( __dst[40] ) /*0x1006714ad*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[41], __dst[40], 1); /*0x1006714bb*/
  if ( __dst[43] ) /*0x1006714ca*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[44], __dst[43], 1); /*0x1006714d8*/
  if ( __dst[46] ) /*0x1006714e7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[47], __dst[46], 1); /*0x1006714f5*/
  if ( __dst[49] ) /*0x100671504*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[50], __dst[49], 1); /*0x100671512*/
  if ( __dst[52] ) /*0x100671521*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[53], __dst[52], 1); /*0x10067152f*/
  if ( __dst[61] != 0x8000000000000000LL && __dst[61] ) /*0x100671543*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[62], __dst[61], 1); /*0x100671551*/
  if ( __dst[64] != 0x8000000000000000LL && __dst[64] ) /*0x100671565*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[65], __dst[64], 1); /*0x100671573*/
  if ( __dst[55] ) /*0x100671582*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[56], __dst[55], 1); /*0x100671590*/
  v11 = __dst[67]; /*0x100671595*/
  if ( __dst[67] != 0x8000000000000000LL && __dst[67] ) /*0x1006715a4*/
  {
    v12 = __dst[68]; /*0x1006715a6*/
    goto LABEL_58; /*0x1006715a6*/
  }
  return a1; /*0x1006715ba*/
}