// __ZN13codexmate_lib4core11oauth_login13generate_pkce @ 0x1008e6010 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::oauth_login::generate_pkce::h50e33739d5d3d4ee(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _BYTE v4[32]; // [rsp+8h] [rbp-A8h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-88h] BYREF
  _BYTE v6[16]; // [rsp+38h] [rbp-78h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-68h] BYREF
  _QWORD v8[3]; // [rsp+68h] [rbp-48h] BYREF
  __int64 v9; // [rsp+80h] [rbp-30h] BYREF
  __int64 v10; // [rsp+88h] [rbp-28h]
  __int64 v11; // [rsp+90h] [rbp-20h]

  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v6); /*0x1008e602a*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v5); /*0x1008e6039*/
  v7[0] = v6; /*0x1008e603e*/
  v7[1] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1008e6049*/
  v7[2] = v5; /*0x1008e604d*/
  v7[3] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x1008e6051*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v9, &anon_155c4da9b5393270cfa7378e2b52c417_148, v7); /*0x1008e6064*/
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hd9c8727c1668b76b(v4, v10, v11); /*0x1008e607b*/
  base64::engine::Engine::encode::inner::h51f3163bd6933c68(v8, &anon_155c4da9b5393270cfa7378e2b52c417_149, v4, 32); /*0x1008e6097*/
  a1[2] = v11; /*0x1008e60a0*/
  v1 = v9; /*0x1008e60a4*/
  a1[1] = v10; /*0x1008e60ac*/
  *a1 = v1; /*0x1008e60b0*/
  v2 = v8[1]; /*0x1008e60b7*/
  a1[3] = v8[0]; /*0x1008e60bb*/
  a1[4] = v2; /*0x1008e60bf*/
  a1[5] = v8[2]; /*0x1008e60c7*/
  return a1; /*0x1008e60ce*/
}