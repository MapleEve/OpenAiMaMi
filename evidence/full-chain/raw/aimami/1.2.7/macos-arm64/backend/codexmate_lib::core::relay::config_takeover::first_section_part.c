// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::first_section_part::h61909f34dd045e50; addr: 0x100221380; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::config_takeover::first_section_part::h61909f34dd045e50(
        size_t *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  unsigned __int8 v12; // bl
  unsigned __int64 v13; // r13
  char v14; // r12
  __int64 v15; // rcx
  char v16; // dl
  unsigned int v17; // r9d
  char v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // r14
  const void *v21; // rax
  __int64 v22; // rdx
  size_t v23; // r15
  __int64 v24; // r13
  const void *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  double result; // xmm0_8
  __int64 v29; // [rsp+18h] [rbp-48h]
  __int64 v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+28h] [rbp-38h]
  __int64 v32; // [rsp+30h] [rbp-30h]

  v30 = 0; /*0x100221395*/
  v31 = 1; /*0x10022139d*/
  v32 = 0; /*0x1002213a5*/
  if ( a3 ) /*0x1002213b0*/
  {
    v3 = a2; /*0x1002213b9*/
    v4 = &a2[a3]; /*0x1002213bc*/
    v5 = 1; /*0x1002213bf*/
    v6 = 0; /*0x1002213c4*/
    v29 = 0; /*0x1002213ca*/
    while ( 1 ) /*0x1002213fa*/
    {
      while ( 1 ) /*0x1002213f4*/
      {
        v8 = *v3; /*0x1002213f4*/
        if ( (v8 & 0x80u) != 0 ) /*0x1002213fa*/
          break; /*0x1002213fa*/
        ++v3; /*0x1002213fc*/
        if ( v8 == 34 ) /*0x100221402*/
          goto LABEL_3; /*0x100221402*/
LABEL_14:
        if ( v8 == 46 ) /*0x100221493*/
        {
          if ( (v29 & 1) == 0 ) /*0x100221499*/
            goto LABEL_33; /*0x100221499*/
LABEL_18:
          v13 = 1; /*0x1002214a8*/
          v14 = 1; /*0x1002214ae*/
          goto LABEL_23; /*0x1002214b1*/
        }
        if ( v8 < 0x80 ) /*0x1002214a6*/
          goto LABEL_18; /*0x1002214a6*/
        if ( v8 >= 0x800 ) /*0x1002214b9*/
          v13 = 4LL - (v8 < 0x10000); /*0x1002214cf*/
        else
          v13 = 2; /*0x1002214bb*/
        v14 = 0; /*0x1002214d3*/
LABEL_23:
        v15 = v6; /*0x1002214d6*/
        if ( v13 > v30 - v6 ) /*0x1002214e3*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v30, v6, v13, 1, 1); /*0x100221504*/
          v5 = v31; /*0x100221509*/
          v15 = v32; /*0x10022150d*/
          if ( !v14 ) /*0x10022151c*/
          {
LABEL_27:
            v16 = v8 & 0x3F | 0x80; /*0x100221520*/
            v17 = v8 >> 6; /*0x10022152b*/
            if ( v8 >= 0x800 ) /*0x100221535*/
            {
              v18 = v17 & 0x3F | 0x80; /*0x100221549*/
              v19 = v8 >> 12; /*0x100221550*/
              if ( v8 > 0xFFFF ) /*0x10022155a*/
              {
                *(_BYTE *)(v5 + v15) = (v8 >> 18) | 0xF0; /*0x10022157d*/
                *(_BYTE *)(v5 + v15 + 1) = v19 & 0x3F | 0x80; /*0x100221580*/
                *(_BYTE *)(v5 + v15 + 2) = v18; /*0x100221585*/
                *(_BYTE *)(v5 + v15 + 3) = v16; /*0x10022158a*/
              }
              else
              {
                *(_BYTE *)(v5 + v15) = v19 | 0xE0; /*0x100221560*/
                *(_BYTE *)(v5 + v15 + 1) = v18; /*0x100221564*/
                *(_BYTE *)(v5 + v15 + 2) = v16; /*0x100221569*/
              }
            }
            else
            {
              *(_BYTE *)(v5 + v15) = v17 | 0xC0; /*0x10022153b*/
              *(_BYTE *)(v5 + v15 + 1) = v16; /*0x10022153f*/
            }
            goto LABEL_32; /*0x100221543*/
          }
        }
        else if ( !v14 ) /*0x1002214e8*/
        {
          goto LABEL_27; /*0x1002214e8*/
        }
        *(_BYTE *)(v5 + v15) = v8; /*0x1002214ea*/
LABEL_32:
        v6 += v13; /*0x100221590*/
        v32 = v6; /*0x100221593*/
        if ( v3 == v4 ) /*0x10022159a*/
        {
LABEL_33:
          v20 = v31; /*0x1002215a0*/
          goto LABEL_35; /*0x1002215a4*/
        }
      }
      v9 = v8 & 0x1F; /*0x100221412*/
      v10 = v3[1] & 0x3F; /*0x10022141a*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x100221421*/
      {
        v3 += 2; /*0x100221457*/
        v8 = v10 | (v9 << 6); /*0x100221461*/
        if ( v8 == 34 ) /*0x100221466*/
          goto LABEL_3; /*0x100221466*/
        goto LABEL_14; /*0x100221466*/
      }
      v11 = (v10 << 6) | v3[2] & 0x3F; /*0x10022142f*/
      if ( (unsigned __int8)v8 >= 0xF0u ) /*0x100221435*/
      {
        v12 = v3[3]; /*0x100221437*/
        v3 += 4; /*0x10022143c*/
        v8 = ((v9 & 7) << 18) | (v11 << 6) | v12 & 0x3F; /*0x10022144e*/
        if ( v8 == 34 ) /*0x100221453*/
          goto LABEL_3; /*0x100221453*/
        goto LABEL_14; /*0x100221453*/
      }
      v3 += 3; /*0x10022146d*/
      v8 = (v9 << 12) | v11; /*0x100221476*/
      if ( v8 != 34 ) /*0x10022147b*/
        goto LABEL_14; /*0x10022147b*/
LABEL_3:
      v7 = v29; /*0x1002213e0*/
      LOBYTE(v7) = v29 ^ 1; /*0x1002213e4*/
      v29 = v7; /*0x1002213e7*/
      if ( v3 == v4 ) /*0x1002213ee*/
        goto LABEL_33; /*0x1002213ee*/
    }
  }
  v20 = 1; /*0x1002215a6*/
  v6 = 0; /*0x1002215ac*/
LABEL_35:
  v21 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v20, v6); /*0x1002215ae*/
  v23 = v22; /*0x1002215b6*/
  if ( v22 < 0 ) /*0x1002215bc*/
  {
    v24 = 0; /*0x1002215be*/
    goto LABEL_37; /*0x1002215be*/
  }
  if ( v22 ) /*0x1002215d1*/
  {
    v25 = v21; /*0x1002215d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v6, v22); /*0x1002215d6*/
    v24 = 1; /*0x1002215db*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x1002215e9*/
    if ( !v26 ) /*0x1002215f1*/
LABEL_37:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23); /*0x1002215c1*/
    v27 = v26; /*0x1002215f3*/
    v21 = v25; /*0x1002215f6*/
  }
  else
  {
    v27 = 1; /*0x1002215fb*/
  }
  memcpy((void *)v27, v21, v23); /*0x10022160a*/
  *a1 = v23; /*0x100221613*/
  a1[1] = v27; /*0x100221616*/
  a1[2] = v23; /*0x10022161a*/
  if ( v30 ) /*0x100221625*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v30, 1); /*0x10022163d*/
  return result; /*0x10022162f*/
}
