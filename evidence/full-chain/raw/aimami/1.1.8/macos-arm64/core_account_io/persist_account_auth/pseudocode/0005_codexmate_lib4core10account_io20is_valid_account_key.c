// mac 1.1.8 behavioral persist_account_auth 0x100521880 d=1
__int64 __fastcall codexmate_lib::core::account_io::is_valid_account_key::h7c77c693df6d6d69(
        unsigned __int8 *a1,
        __int64 a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  _BYTE v9[104]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-48h]
  __int64 v11; // [rsp+70h] [rbp-40h]
  __int16 v12; // [rsp+78h] [rbp-38h]
  __int64 v13; // [rsp+80h] [rbp-30h]
  __int64 v14; // [rsp+88h] [rbp-28h] BYREF
  __int64 v15; // [rsp+90h] [rbp-20h]
  __int64 v16; // [rsp+98h] [rbp-18h]

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(a1, a2); /*0x10052188e*/
  if ( (unsigned __int64)(v3 - 257) >= 0xFFFFFFFFFFFFFF00LL ) /*0x1005218a1*/
  {
    v5 = v3; /*0x1005218c4*/
    core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2((__int64)v9, (__int64)v2, v3, "::", 2u); /*0x1005218c7*/
    v10 = 0; /*0x1005218cc*/
    v11 = v5; /*0x1005218d4*/
    v12 = 1; /*0x1005218d8*/
    v13 = 2; /*0x1005218de*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8d88903df104ee44( /*0x1005218ed*/
      &v14,
      v9);
    if ( v16 == 2 /*0x10052190c*/
      && (v4 = v15,
          core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(
            *(unsigned __int8 **)v15,
            *(_QWORD *)(v15 + 8)),
          v6) )
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a( /*0x100521916*/
        *(unsigned __int8 **)(v4 + 16),
        *(_QWORD *)(v4 + 24));
      LOBYTE(v4) = v7 != 0; /*0x10052191e*/
      if ( !v14 ) /*0x100521928*/
        return (unsigned int)v4; /*0x100521928*/
    }
    else
    {
      LODWORD(v4) = 0; /*0x10052192c*/
      if ( !v14 ) /*0x100521935*/
        return (unsigned int)v4; /*0x100521935*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100521944*/
    return (unsigned int)v4; /*0x100521944*/
  }
  LODWORD(v4) = 0; /*0x1005218a3*/
  return (unsigned int)v4; /*0x10052194b*/
}