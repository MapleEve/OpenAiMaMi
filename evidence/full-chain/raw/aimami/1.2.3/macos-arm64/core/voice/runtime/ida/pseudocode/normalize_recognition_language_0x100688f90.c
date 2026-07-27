// __ZN13codexmate_lib4core5voice7runtime30normalize_recognition_language @ 0x100688f90 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::voice::runtime::normalize_recognition_language::h7e55ddc3ae8f6e78(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int8 *v6; // rax
  __int64 v7; // rdx
  size_t v8; // r14
  __int64 v9; // r12
  int v10; // edx
  _BYTE *result; // rax
  __int64 v12; // r15
  unsigned __int8 *v13; // r13
  __int64 v14; // rax

  v5 = a3; /*0x100688fa4*/
  v6 = (unsigned __int8 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100688fa7*/
  v8 = v7; /*0x100688fac*/
  switch ( v7 ) /*0x100688fc3*/
  {
    case 0LL: /*0x100688fc3*/
      goto LABEL_16;
    case 1LL: /*0x100688fc3*/
      if ( *v6 != 45 ) /*0x100688fc8*/
        goto LABEL_20; /*0x100688fc8*/
      goto LABEL_16; /*0x100688fc8*/
    case 2LL: /*0x100688fc3*/
      if ( *(_WORD *)v6 == 26746 ) /*0x100689036*/
        goto LABEL_23; /*0x100689036*/
      if ( *(_WORD *)v6 == 28261 ) /*0x100689041*/
        goto LABEL_25; /*0x100689041*/
      goto LABEL_20; /*0x100689041*/
    case 4LL: /*0x100688fc3*/
      if ( *(_DWORD *)v6 == 1869903201 ) /*0x10068904e*/
        goto LABEL_16; /*0x10068904e*/
      goto LABEL_20; /*0x10068904e*/
    case 5LL: /*0x100688fc3*/
      if ( !(*(_DWORD *)v6 ^ 0x432D687A | v6[4] ^ 0x4E) ) /*0x100689091*/
        goto LABEL_23; /*0x100689091*/
      if ( *(_DWORD *)v6 ^ 0x552D6E65 | v6[4] ^ 0x53 ) /*0x1006890a1*/
        goto LABEL_20; /*0x1006890a3*/
LABEL_25:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x10068910d*/
      v8 = 5; /*0x100689112*/
      result = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100689122*/
      if ( !result ) /*0x10068912a*/
        goto LABEL_29; /*0x10068912a*/
      v12 = (__int64)result; /*0x10068912c*/
      result[4] = 83; /*0x10068912f*/
      *(_DWORD *)result = 1429040741; /*0x100689133*/
      goto LABEL_27; /*0x100689133*/
    case 6LL: /*0x100688fc3*/
      if ( *(_DWORD *)v6 ^ 0x74737973 | *((unsigned __int16 *)v6 + 2) ^ 0x6D65 ) /*0x100688ffb*/
        goto LABEL_20; /*0x100688ffd*/
LABEL_16:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x100689050*/
      v8 = 4; /*0x100689055*/
      result = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100689065*/
      if ( !result ) /*0x10068906d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10068915d*/
      v12 = (__int64)result; /*0x100689073*/
      *(_DWORD *)result = 1869903201; /*0x100689076*/
      goto LABEL_27; /*0x10068907c*/
    case 7LL: /*0x100688fc3*/
      v10 = *(_DWORD *)v6 ^ 0x485F687A; /*0x10068900a*/
      v5 = v10 | *(_DWORD *)(v6 + 3) ^ 0x736E6148u; /*0x100689016*/
      if ( v10 | *(_DWORD *)(v6 + 3) ^ 0x736E6148 && *(_DWORD *)v6 ^ 0x482D687A | *(_DWORD *)(v6 + 3) ^ 0x736E6148 ) /*0x100689028*/
        goto LABEL_20; /*0x10068902a*/
LABEL_23:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1006890df*/
      v8 = 5; /*0x1006890e4*/
      result = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1006890f4*/
      if ( !result ) /*0x1006890fc*/
LABEL_29:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100689162*/
      v12 = (__int64)result; /*0x1006890fe*/
      result[4] = 78; /*0x100689101*/
      *(_DWORD *)result = 1127049338; /*0x100689105*/
      goto LABEL_27; /*0x10068910b*/
    default:
      if ( v7 < 0 ) /*0x100688fd6*/
      {
        v9 = 0; /*0x100688fdc*/
        goto LABEL_6; /*0x100688fdc*/
      }
      if ( v7 ) /*0x100689171*/
      {
LABEL_20:
        v13 = v6; /*0x1006890a5*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1006890a8*/
        v9 = 1; /*0x1006890ad*/
        v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1006890bb*/
        if ( !v14 ) /*0x1006890c3*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x100688fdf*/
        v12 = v14; /*0x1006890c9*/
        v6 = v13; /*0x1006890cc*/
      }
      else
      {
        v12 = 1; /*0x100689177*/
      }
      result = memcpy((void *)v12, v6, v8); /*0x1006890d8*/
LABEL_27:
      *a1 = v8; /*0x100689139*/
      a1[1] = v12; /*0x10068913c*/
      a1[2] = v8; /*0x100689140*/
      return result;
  }
}