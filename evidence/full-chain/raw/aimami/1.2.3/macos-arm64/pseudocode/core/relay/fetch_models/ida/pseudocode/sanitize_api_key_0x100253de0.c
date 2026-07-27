// __ZN13codexmate_lib4core5relay12fetch_models16sanitize_api_key @ 0x100253de0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::relay::fetch_models::sanitize_api_key::h25b34fe9939fb9f6(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdi
  const void *v12; // rax
  __int64 v13; // rdx
  size_t v14; // r14
  __int64 v15; // r12
  const void *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  _BYTE v20[16]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v21; // [rsp+18h] [rbp-78h]
  __int64 v22; // [rsp+20h] [rbp-70h]
  __int64 v23; // [rsp+28h] [rbp-68h]
  _QWORD v24[5]; // [rsp+30h] [rbp-60h] BYREF
  char v25; // [rsp+58h] [rbp-38h]
  __int16 v26; // [rsp+60h] [rbp-30h]

  v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x100253dff*/
  v22 = 0; /*0x100253e02*/
  v23 = v5; /*0x100253e0a*/
  v24[0] = v4; /*0x100253e12*/
  v24[1] = v5; /*0x100253e16*/
  v24[2] = 0; /*0x100253e1a*/
  v24[3] = v5; /*0x100253e22*/
  v24[4] = 0xA0000000ALL; /*0x100253e30*/
  v25 = 1; /*0x100253e34*/
  v26 = 0; /*0x100253e38*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100253e45*/
    v20,
    v24);
  if ( v20[0] ) /*0x100253e51*/
  {
    if ( v4 ) /*0x100253e56*/
    {
      v6 = v21 - v22; /*0x100253e60*/
      v7 = v22 + v4; /*0x100253e63*/
      if ( v21 == v22 ) /*0x100253e69*/
        goto LABEL_14; /*0x100253e69*/
      goto LABEL_8; /*0x100253e69*/
    }
LABEL_13:
    v7 = 1; /*0x100253eba*/
    v6 = 0; /*0x100253ec0*/
    goto LABEL_14; /*0x100253ec0*/
  }
  if ( HIBYTE(v26) ) /*0x100253e71*/
    goto LABEL_13; /*0x100253e71*/
  v6 = v23 - v22; /*0x100253e7b*/
  if ( ((unsigned __int8)v26 | (v23 != v22)) != 1 ) /*0x100253e86*/
    goto LABEL_13; /*0x100253e86*/
  v7 = v24[0] + v22; /*0x100253e88*/
  if ( !v6 ) /*0x100253e8f*/
    goto LABEL_14; /*0x100253e8f*/
LABEL_8:
  if ( *(_BYTE *)(v7 + v6 - 1) == 10 ) /*0x100253e97*/
  {
    v8 = v6 - 1; /*0x100253e9c*/
    if ( v6 == 1 ) /*0x100253e9f*/
    {
      v6 = -1; /*0x100253f3b*/
      v9 = 0; /*0x100253f42*/
    }
    else
    {
      v9 = 0; /*0x100253ea5*/
      v10 = *(_BYTE *)(v7 + v6 - 2) == 13; /*0x100253ea7*/
      v6 -= 2; /*0x100253ead*/
      if ( v10 ) /*0x100253eb1*/
        v9 = v7; /*0x100253eb1*/
    }
    if ( v9 ) /*0x100253f47*/
      v7 = v9; /*0x100253f4b*/
    else
      v6 = v8; /*0x100253f47*/
  }
LABEL_14:
  v11 = v7; /*0x100253ec2*/
  v12 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v7, v6); /*0x100253ec5*/
  v14 = v13; /*0x100253eca*/
  if ( v13 < 0 ) /*0x100253ed0*/
  {
    v15 = 0; /*0x100253ed2*/
    goto LABEL_16; /*0x100253ed2*/
  }
  if ( v13 ) /*0x100253ee0*/
  {
    v16 = v12; /*0x100253ee2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v6); /*0x100253ee5*/
    v15 = 1; /*0x100253eea*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x100253ef8*/
    if ( !v17 ) /*0x100253f00*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x100253ed5*/
    v18 = v17; /*0x100253f02*/
    v12 = v16; /*0x100253f05*/
  }
  else
  {
    v18 = 1; /*0x100253f0a*/
  }
  memcpy((void *)v18, v12, v14); /*0x100253f19*/
  *a1 = v14; /*0x100253f1e*/
  a1[1] = v18; /*0x100253f21*/
  a1[2] = v14; /*0x100253f25*/
  return a1; /*0x100253f2c*/
}