// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df; addr: 0x100224db0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
signed __int64 *__fastcall codexmate_lib::core::relay::config_takeover::top_level_assignment_key::he3d52e653d4f28df(
        signed __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  signed __int64 v10; // rdx
  signed __int64 v11; // rbx
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // rdx
  int v14; // r8d
  int v15; // r10d
  int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // r15
  const void *v20; // r14
  void *v21; // rax
  signed __int64 v22; // r12
  int v23; // [rsp+0h] [rbp-90h] BYREF
  __int64 v24; // [rsp+8h] [rbp-88h]
  __int64 v25; // [rsp+18h] [rbp-78h]
  __int64 v26; // [rsp+20h] [rbp-70h]
  unsigned __int64 v27; // [rsp+28h] [rbp-68h]
  _QWORD v28[5]; // [rsp+30h] [rbp-60h] BYREF
  char v29; // [rsp+58h] [rbp-38h]
  __int16 v30; // [rsp+60h] [rbp-30h]

  if ( !a3 || *a2 == 35 ) /*0x100224dc9*/
    goto LABEL_3; /*0x100224dc9*/
  if ( a3 > 0xF ) /*0x100224dee*/
  {
    v5 = a3; /*0x100224e1b*/
    v6 = core::slice::memchr::memchr_aligned::hda948616f04379f9(61, a2, a3); /*0x100224e1e*/
    a3 = v5; /*0x100224e23*/
    if ( v6 != 1 ) /*0x100224e30*/
      goto LABEL_3; /*0x100224e30*/
  }
  else
  {
    v4 = 0; /*0x100224df0*/
    while ( a2[v4] != 61 ) /*0x100224e04*/
    {
      if ( a3 == ++v4 ) /*0x100224e0c*/
        goto LABEL_3; /*0x100224e0c*/
    }
  }
  v26 = 0; /*0x100224e35*/
  v27 = a3; /*0x100224e3d*/
  v28[0] = a2; /*0x100224e48*/
  v28[1] = a3; /*0x100224e4c*/
  v28[2] = 0; /*0x100224e50*/
  v28[3] = a3; /*0x100224e58*/
  v28[4] = 0x3D0000003DLL; /*0x100224e66*/
  v29 = 1; /*0x100224e6a*/
  v30 = 1; /*0x100224e6e*/
  v25 = 1; /*0x100224e74*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100224e86*/
    &v23,
    v28);
  if ( v23 != 1 ) /*0x100224e92*/
  {
    if ( HIBYTE(v30) || (v8 = v27 - v26, ((unsigned __int8)v30 | (v27 != v26)) != 1) ) /*0x100224fc4*/
    {
      *a1 = 0x8000000000000000LL; /*0x100224fed*/
      return a1; /*0x100224ff1*/
    }
    v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v28[0] + v26, v8); /*0x100224fca*/
    if ( !v10 ) /*0x100224fd5*/
      goto LABEL_3; /*0x100224fd5*/
    goto LABEL_13; /*0x100224fd5*/
  }
  v8 = v24 - v26; /*0x100224ea3*/
  v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(&a2[v26], v24 - v26); /*0x100224eac*/
  if ( !v10 ) /*0x100224eb7*/
  {
LABEL_3:
    *a1 = 0x8000000000000000LL; /*0x100224dcb*/
    return a1; /*0x100224dd5*/
  }
LABEL_13:
  v11 = v10; /*0x100224ebd*/
  v12 = (unsigned __int8 *)(v10 + v9); /*0x100224ec3*/
  v13 = (unsigned __int8 *)v9; /*0x100224ec6*/
  while ( v13 != v12 ) /*0x100224ed3*/
  {
    v8 = *v13; /*0x100224ed9*/
    if ( (v8 & 0x80u) != 0LL ) /*0x100224edf*/
    {
      v14 = v8 & 0x1F; /*0x100224ef3*/
      v15 = v13[1] & 0x3F; /*0x100224efc*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x100224f04*/
      {
        v13 += 2; /*0x100224f4c*/
        v17 = v15 | (v14 << 6); /*0x100224f54*/
        v8 = v17; /*0x100224f57*/
        if ( v17 != 45 ) /*0x100224f5d*/
          goto LABEL_26; /*0x100224f5d*/
      }
      else
      {
        v16 = (v15 << 6) | v13[2] & 0x3F; /*0x100224f13*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x100224f1a*/
        {
          v13 += 3; /*0x100224f64*/
          v18 = (v14 << 12) | v16; /*0x100224f6c*/
          v8 = v18; /*0x100224f6f*/
          if ( v18 != 45 ) /*0x100224f75*/
          {
LABEL_26:
            if ( (_DWORD)v8 != 95 && (unsigned int)(v8 - 58) <= 0xFFFFFFF5 ) /*0x100224f91*/
            {
              v8 = ((unsigned int)v8 & 0xFFFFFFDF) - 91; /*0x100224f9a*/
              if ( (unsigned int)v8 < 0xFFFFFFE6 ) /*0x100224fa0*/
                goto LABEL_3; /*0x100224fa0*/
            }
          }
        }
        else
        {
          v8 = ((v8 & 7) << 18) | (v16 << 6) | v13[3] & 0x3Fu; /*0x100224f32*/
          if ( (_DWORD)v8 == 1114112 ) /*0x100224f3b*/
            break; /*0x100224f3b*/
          v13 += 4; /*0x100224f41*/
          if ( (_DWORD)v8 != 45 ) /*0x100224f48*/
            goto LABEL_26; /*0x100224f48*/
        }
      }
    }
    else
    {
      ++v13; /*0x100224ee1*/
      if ( (_DWORD)v8 != 45 ) /*0x100224ee7*/
        goto LABEL_26; /*0x100224ee7*/
    }
  }
  if ( v11 < 0 ) /*0x100224ff9*/
  {
    v19 = 0; /*0x100224ffb*/
    goto LABEL_37; /*0x100224ffb*/
  }
  v20 = (const void *)v9; /*0x100225009*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, v8, v13); /*0x10022500c*/
  v19 = 1; /*0x100225011*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x10022501f*/
  if ( !v21 ) /*0x100225027*/
LABEL_37:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v11); /*0x100224ffe*/
  v22 = (signed __int64)v21; /*0x100225029*/
  memcpy(v21, v20, v11); /*0x100225035*/
  *a1 = v11; /*0x10022503d*/
  a1[1] = v22; /*0x100225041*/
  a1[2] = v11; /*0x100225045*/
  return a1; /*0x100224ddb*/
}
