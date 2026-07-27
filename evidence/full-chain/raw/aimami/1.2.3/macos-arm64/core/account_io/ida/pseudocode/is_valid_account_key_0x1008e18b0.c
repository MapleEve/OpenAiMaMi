// __ZN13codexmate_lib4core10account_io20is_valid_account_key @ 0x1008e18b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::account_io::is_valid_account_key::h2840000d394c63d9(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  unsigned __int8 *v6; // rsi
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // r10d
  int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  _BYTE v15[104]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp-40h]
  __int16 v18; // [rsp+78h] [rbp-38h]
  __int64 v19; // [rsp+80h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-28h] BYREF
  _QWORD *v21; // [rsp+90h] [rbp-20h]
  __int64 v22; // [rsp+98h] [rbp-18h]

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x1008e18be*/
  if ( (unsigned __int64)(v3 - 257) >= 0xFFFFFFFFFFFFFF00LL ) /*0x1008e18d1*/
  {
    v6 = (unsigned __int8 *)v2; /*0x1008e18e9*/
    while ( v6 != (unsigned __int8 *)(v3 + v2) ) /*0x1008e18f3*/
    {
      v7 = *v6; /*0x1008e18f9*/
      if ( (v7 & 0x80u) != 0 ) /*0x1008e18ff*/
      {
        v8 = v7 & 0x1F; /*0x1008e1923*/
        v9 = v6[1] & 0x3F; /*0x1008e192c*/
        if ( (unsigned __int8)v7 <= 0xDFu ) /*0x1008e1934*/
        {
          v6 += 2; /*0x1008e197d*/
          v7 = v9 | (v8 << 6); /*0x1008e1988*/
          LODWORD(v4) = 0; /*0x1008e198b*/
          if ( v7 < 0x20 ) /*0x1008e1990*/
            return (unsigned int)v4; /*0x1008e1990*/
        }
        else
        {
          v10 = (v9 << 6) | v6[2] & 0x3F; /*0x1008e1943*/
          if ( (unsigned __int8)v7 < 0xF0u ) /*0x1008e194a*/
          {
            v6 += 3; /*0x1008e1997*/
            v7 = (v8 << 12) | v10; /*0x1008e19a2*/
            LODWORD(v4) = 0; /*0x1008e19a5*/
            if ( v7 < 0x20 ) /*0x1008e19aa*/
              return (unsigned int)v4; /*0x1008e19aa*/
          }
          else
          {
            v7 = ((v7 & 7) << 18) | (v10 << 6) | v6[3] & 0x3F; /*0x1008e1962*/
            if ( v7 == 1114112 ) /*0x1008e196b*/
              break; /*0x1008e196b*/
            v6 += 4; /*0x1008e196d*/
            LODWORD(v4) = 0; /*0x1008e1971*/
            if ( v7 < 0x20 ) /*0x1008e1976*/
              return (unsigned int)v4; /*0x1008e1976*/
          }
        }
      }
      else
      {
        ++v6; /*0x1008e1901*/
        LODWORD(v4) = 0; /*0x1008e1904*/
        if ( v7 < 0x20 ) /*0x1008e1909*/
          return (unsigned int)v4; /*0x1008e1909*/
      }
      if ( v7 - 127 >= 0x21 ) /*0x1008e19b8*/
      {
        LODWORD(v4) = 0; /*0x1008e19be*/
        if ( v7 != 47 && v7 != 92 ) /*0x1008e19cc*/
          continue; /*0x1008e19cc*/
      }
      return (unsigned int)v4; /*0x1008e19cc*/
    }
    v11 = v3; /*0x1008e19d7*/
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v15, v2, v3, &anon_155c4da9b5393270cfa7378e2b52c417_108, 2); /*0x1008e19f4*/
    v16 = 0; /*0x1008e19f9*/
    v17 = v11; /*0x1008e1a01*/
    v18 = 1; /*0x1008e1a05*/
    v19 = 2; /*0x1008e1a0b*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hdc8d6a06dabf8b96( /*0x1008e1a1a*/
      &v20,
      (__int64)v15);
    if ( v22 == 2 && (v4 = v21, core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*v21, v21[1]), v12) ) /*0x1008e1a39*/
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4[2], v4[3]); /*0x1008e1a43*/
      LOBYTE(v4) = v13 != 0; /*0x1008e1a4b*/
      v14 = v20; /*0x1008e1a4e*/
      if ( !v20 ) /*0x1008e1a55*/
        return (unsigned int)v4; /*0x1008e1a55*/
    }
    else
    {
      LODWORD(v4) = 0; /*0x1008e1a5c*/
      v14 = v20; /*0x1008e1a5e*/
      if ( !v20 ) /*0x1008e1a65*/
        return (unsigned int)v4; /*0x1008e1a65*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 16 * v14, 8); /*0x1008e1a78*/
    return (unsigned int)v4; /*0x1008e1a7d*/
  }
  LODWORD(v4) = 0; /*0x1008e18d3*/
  return (unsigned int)v4; /*0x1008e18d7*/
}