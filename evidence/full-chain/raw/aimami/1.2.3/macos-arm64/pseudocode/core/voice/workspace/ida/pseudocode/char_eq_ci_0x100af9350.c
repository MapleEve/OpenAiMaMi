// __ZN13codexmate_lib4core5voice9workspace10char_eq_ci @ 0x100af9350 | 基线 same-set
bool __fastcall codexmate_lib::core::voice::workspace::char_eq_ci::hcfa7b9039f40d686(unsigned int a1, unsigned int a2)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // r14
  int v5; // ebx
  int v6; // eax
  _QWORD v7[3]; // [rsp-80h] [rbp-80h] BYREF
  int v8; // [rsp-68h] [rbp-68h]
  _QWORD v9[3]; // [rsp-60h] [rbp-60h] BYREF
  int v10; // [rsp-48h] [rbp-48h]
  __int64 v11; // [rsp-40h] [rbp-40h] BYREF
  int v12; // [rsp-38h] [rbp-38h]
  __int64 v13; // [rsp-30h] [rbp-30h] BYREF
  int v14; // [rsp-28h] [rbp-28h]

  result = 1; /*0x100af9350*/
  if ( a1 != a2 ) /*0x100af9354*/
  {
    core::unicode::unicode_data::conversions::to_lower::h2af512d1fec7c9a4(&v13, a1); /*0x100af9371*/
    v3 = 2LL - (HIDWORD(v13) == 0); /*0x100af9388*/
    if ( v14 ) /*0x100af9394*/
      v3 = 3; /*0x100af9394*/
    v9[0] = 0; /*0x100af9398*/
    v9[1] = v3; /*0x100af93a0*/
    v9[2] = v13; /*0x100af93a8*/
    v10 = v14; /*0x100af93ac*/
    core::unicode::unicode_data::conversions::to_lower::h2af512d1fec7c9a4(&v11, a2); /*0x100af93b5*/
    v4 = 2LL - (HIDWORD(v11) == 0); /*0x100af93c1*/
    if ( v12 ) /*0x100af93c7*/
      v4 = 3; /*0x100af93c7*/
    v7[0] = 0; /*0x100af93cb*/
    v7[1] = v4; /*0x100af93d3*/
    v7[2] = v11; /*0x100af93db*/
    v8 = v12; /*0x100af93df*/
    v5 = _$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v9); /*0x100af93eb*/
    v6 = _$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v7); /*0x100af93f1*/
    if ( v5 == 1114112 ) /*0x100af93fc*/
    {
      if ( v6 != 1114112 ) /*0x100af9403*/
        return 0; /*0x100af9403*/
    }
    else if ( v5 != v6 ) /*0x100af9409*/
    {
      return 0; /*0x100af942e*/
    }
    if ( (unsigned int)_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v9) == 1114112 ) /*0x100af9419*/
      return (unsigned int)_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v7) == 1114112; /*0x100af942c*/
    return 0; /*0x100af9419*/
  }
  return result; /*0x100af943a*/
}