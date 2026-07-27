// __ZN13codexmate_lib4core5relay15config_takeover24top_level_assignment_key @ 0x1008f95a0 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::config_takeover::top_level_assignment_key::h031d1c7d19bea489(
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

  if ( !a3 || *a2 == 35 ) /*0x1008f95b9*/
    goto LABEL_3; /*0x1008f95b9*/
  if ( a3 > 0xF ) /*0x1008f95de*/
  {
    v5 = a3; /*0x1008f960b*/
    v6 = core::slice::memchr::memchr_aligned::hda948616f04379f9(61, a2, a3); /*0x1008f960e*/
    a3 = v5; /*0x1008f9613*/
    if ( v6 != 1 ) /*0x1008f9620*/
      goto LABEL_3; /*0x1008f9620*/
  }
  else
  {
    v4 = 0; /*0x1008f95e0*/
    while ( a2[v4] != 61 ) /*0x1008f95f4*/
    {
      if ( a3 == ++v4 ) /*0x1008f95fc*/
        goto LABEL_3; /*0x1008f95fc*/
    }
  }
  v26 = 0; /*0x1008f9625*/
  v27 = a3; /*0x1008f962d*/
  v28[0] = a2; /*0x1008f9638*/
  v28[1] = a3; /*0x1008f963c*/
  v28[2] = 0; /*0x1008f9640*/
  v28[3] = a3; /*0x1008f9648*/
  v28[4] = 0x3D0000003DLL; /*0x1008f9656*/
  v29 = 1; /*0x1008f965a*/
  v30 = 1; /*0x1008f965e*/
  v25 = 1; /*0x1008f9664*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008f9676*/
    &v23,
    v28);
  if ( v23 != 1 ) /*0x1008f9682*/
  {
    if ( HIBYTE(v30) || (v8 = v27 - v26, ((unsigned __int8)v30 | (v27 != v26)) != 1) ) /*0x1008f97b4*/
    {
      *a1 = 0x8000000000000000LL; /*0x1008f97dd*/
      return a1; /*0x1008f97e1*/
    }
    v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v28[0] + v26, v8); /*0x1008f97ba*/
    if ( !v10 ) /*0x1008f97c5*/
      goto LABEL_3; /*0x1008f97c5*/
    goto LABEL_13; /*0x1008f97c5*/
  }
  v8 = v24 - v26; /*0x1008f9693*/
  v9 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(&a2[v26], v24 - v26); /*0x1008f969c*/
  if ( !v10 ) /*0x1008f96a7*/
  {
LABEL_3:
    *a1 = 0x8000000000000000LL; /*0x1008f95bb*/
    return a1; /*0x1008f95c5*/
  }
LABEL_13:
  v11 = v10; /*0x1008f96ad*/
  v12 = (unsigned __int8 *)(v10 + v9); /*0x1008f96b3*/
  v13 = (unsigned __int8 *)v9; /*0x1008f96b6*/
  while ( v13 != v12 ) /*0x1008f96c3*/
  {
    v8 = *v13; /*0x1008f96c9*/
    if ( (v8 & 0x80u) != 0LL ) /*0x1008f96cf*/
    {
      v14 = v8 & 0x1F; /*0x1008f96e3*/
      v15 = v13[1] & 0x3F; /*0x1008f96ec*/
      if ( (unsigned __int8)v8 <= 0xDFu ) /*0x1008f96f4*/
      {
        v13 += 2; /*0x1008f973c*/
        v17 = v15 | (v14 << 6); /*0x1008f9744*/
        v8 = v17; /*0x1008f9747*/
        if ( v17 != 45 ) /*0x1008f974d*/
          goto LABEL_26; /*0x1008f974d*/
      }
      else
      {
        v16 = (v15 << 6) | v13[2] & 0x3F; /*0x1008f9703*/
        if ( (unsigned __int8)v8 < 0xF0u ) /*0x1008f970a*/
        {
          v13 += 3; /*0x1008f9754*/
          v18 = (v14 << 12) | v16; /*0x1008f975c*/
          v8 = v18; /*0x1008f975f*/
          if ( v18 != 45 ) /*0x1008f9765*/
          {
LABEL_26:
            if ( (_DWORD)v8 != 95 && (unsigned int)(v8 - 58) <= 0xFFFFFFF5 ) /*0x1008f9781*/
            {
              v8 = ((unsigned int)v8 & 0xFFFFFFDF) - 91; /*0x1008f978a*/
              if ( (unsigned int)v8 < 0xFFFFFFE6 ) /*0x1008f9790*/
                goto LABEL_3; /*0x1008f9790*/
            }
          }
        }
        else
        {
          v8 = ((v8 & 7) << 18) | (v16 << 6) | v13[3] & 0x3Fu; /*0x1008f9722*/
          if ( (_DWORD)v8 == 1114112 ) /*0x1008f972b*/
            break; /*0x1008f972b*/
          v13 += 4; /*0x1008f9731*/
          if ( (_DWORD)v8 != 45 ) /*0x1008f9738*/
            goto LABEL_26; /*0x1008f9738*/
        }
      }
    }
    else
    {
      ++v13; /*0x1008f96d1*/
      if ( (_DWORD)v8 != 45 ) /*0x1008f96d7*/
        goto LABEL_26; /*0x1008f96d7*/
    }
  }
  if ( v11 < 0 ) /*0x1008f97e9*/
  {
    v19 = 0; /*0x1008f97eb*/
    goto LABEL_37; /*0x1008f97eb*/
  }
  v20 = (const void *)v9; /*0x1008f97f9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, v8); /*0x1008f97fc*/
  v19 = 1; /*0x1008f9801*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x1008f980f*/
  if ( !v21 ) /*0x1008f9817*/
LABEL_37:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v11); /*0x1008f97ee*/
  v22 = (signed __int64)v21; /*0x1008f9819*/
  memcpy(v21, v20, v11); /*0x1008f9825*/
  *a1 = v11; /*0x1008f982d*/
  a1[1] = v22; /*0x1008f9831*/
  a1[2] = v11; /*0x1008f9835*/
  return a1; /*0x1008f95cb*/
}