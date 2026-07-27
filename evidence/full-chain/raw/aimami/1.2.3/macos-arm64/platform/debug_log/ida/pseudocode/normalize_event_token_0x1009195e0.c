// __ZN13codexmate_lib8platform9debug_log21normalize_event_token @ 0x1009195e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::debug_log::normalize_event_token::hb3eb4003c8eaeefd(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int8 *v6; // r15
  unsigned __int8 *v7; // r14
  __int64 v8; // rax
  unsigned __int8 *v9; // r12
  unsigned __int8 *v10; // rdx
  int v11; // r13d
  unsigned __int8 *v12; // rcx
  int v13; // ecx
  unsigned int v14; // edx
  unsigned __int8 v15; // r13
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  _DWORD *v19; // rax
  unsigned __int8 *v20; // [rsp+0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+8h] [rbp-38h]
  unsigned __int8 *v22; // [rsp+10h] [rbp-30h]

  v6 = (unsigned __int8 *)a2; /*0x1009195f4*/
  v20 = nullptr; /*0x1009195fa*/
  v21 = 1; /*0x100919602*/
  v22 = nullptr; /*0x10091960a*/
  v7 = (unsigned __int8 *)(a2 + a3); /*0x100919612*/
  v8 = 1; /*0x100919615*/
  v9 = nullptr; /*0x10091961a*/
  while ( v6 != v7 ) /*0x100919654*/
  {
    v11 = *v6; /*0x10091965a*/
    if ( (v11 & 0x80u) != 0 ) /*0x100919661*/
    {
      v13 = v11 & 0x1F; /*0x100919683*/
      a2 = v6[1] & 0x3F; /*0x10091968b*/
      if ( (unsigned __int8)v11 <= 0xDFu ) /*0x100919692*/
      {
        v6 += 2; /*0x1009196cf*/
        v11 = a2 | (v13 << 6); /*0x1009196d8*/
        v12 = v20; /*0x1009196db*/
        if ( v11 == 45 ) /*0x1009196e3*/
          goto LABEL_20; /*0x1009196e3*/
      }
      else
      {
        a2 = (unsigned int)((_DWORD)a2 << 6); /*0x100919699*/
        v14 = a2 | v6[2] & 0x3F; /*0x10091969f*/
        if ( (unsigned __int8)v11 < 0xF0u ) /*0x1009196a5*/
        {
          v6 += 3; /*0x1009196e7*/
          v11 = (v13 << 12) | v14; /*0x1009196f0*/
          v12 = v20; /*0x1009196f3*/
          if ( v11 == 45 ) /*0x1009196fb*/
            goto LABEL_20; /*0x1009196fb*/
        }
        else
        {
          v15 = v6[3]; /*0x1009196a7*/
          v6 += 4; /*0x1009196ac*/
          v11 = ((v13 & 7) << 18) | (v14 << 6) | v15 & 0x3F; /*0x1009196c0*/
          v12 = v20; /*0x1009196c3*/
          if ( v11 == 45 ) /*0x1009196cb*/
            goto LABEL_20; /*0x1009196cb*/
        }
      }
    }
    else
    {
      ++v6; /*0x100919663*/
      v12 = v20; /*0x100919666*/
      if ( v11 == 45 ) /*0x10091966e*/
        goto LABEL_20; /*0x10091966e*/
    }
    if ( v11 != 95 && (unsigned int)(v11 - 48) >= 0xA && (v11 & 0xFFFFFFDF) - 65 >= 0x1A ) /*0x10091971b*/
    {
      v10 = v9; /*0x100919630*/
      if ( v9 == v12 ) /*0x100919636*/
      {
        a2 = (unsigned __int64)v9; /*0x100919758*/
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v20, v9, 1, 1, 1, a6); /*0x10091975b*/
        v8 = v21; /*0x100919760*/
        v10 = v22; /*0x100919764*/
      }
      v10[v8] = 95; /*0x10091963c*/
      goto LABEL_5; /*0x10091963c*/
    }
LABEL_20:
    v16 = v9; /*0x100919730*/
    if ( v9 == v12 ) /*0x100919736*/
    {
      a2 = (unsigned __int64)v9; /*0x100919780*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v20, v9, 1, 1, 1, a6); /*0x100919783*/
      v16 = v22; /*0x100919788*/
    }
    v8 = v21; /*0x100919738*/
    v16[v21] = v11; /*0x10091973c*/
LABEL_5:
    v22 = ++v9; /*0x100919643*/
    if ( v9 == (unsigned __int8 *)64 ) /*0x10091964b*/
      goto LABEL_24; /*0x10091964b*/
  }
  if ( v9 ) /*0x100919795*/
  {
LABEL_24:
    a1[2] = v22; /*0x100919797*/
    v17 = v20; /*0x10091979f*/
    a1[1] = v21; /*0x1009197a7*/
    *a1 = v17; /*0x1009197ab*/
    return a1; /*0x1009197ab*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v20, a2); /*0x1009197c0*/
  v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1009197cf*/
  if ( !v19 ) /*0x1009197d7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10091981c*/
  *(_DWORD *)((char *)v19 + 3) = 1853321070; /*0x1009197d9*/
  *v19 = 1852534389; /*0x1009197e0*/
  *a1 = 7; /*0x1009197e6*/
  a1[1] = v19; /*0x1009197ed*/
  a1[2] = 7; /*0x1009197f1*/
  if ( v20 ) /*0x100919800*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10091980b*/
  return a1; /*0x1009197b1*/
}