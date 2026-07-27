// __ZN13codexmate_lib4core5relay5quota16sanitize_api_key @ 0x1008acdc0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::relay::quota::sanitize_api_key::ha0d250b7c26b097d(
        size_t *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdi
  const void *v13; // rax
  __int64 v14; // rdx
  size_t v15; // r14
  __int64 v16; // r12
  const void *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r15
  _BYTE v21[16]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v22; // [rsp+18h] [rbp-78h]
  __int64 v23; // [rsp+20h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-68h]
  _QWORD v25[5]; // [rsp+30h] [rbp-60h] BYREF
  char v26; // [rsp+58h] [rbp-38h]
  __int16 v27; // [rsp+60h] [rbp-30h]

  v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008acddf*/
  v23 = 0; /*0x1008acde2*/
  v24 = v5; /*0x1008acdea*/
  v25[0] = v4; /*0x1008acdf2*/
  v25[1] = v5; /*0x1008acdf6*/
  v25[2] = 0; /*0x1008acdfa*/
  v25[3] = v5; /*0x1008ace02*/
  v25[4] = 0xA0000000ALL; /*0x1008ace10*/
  v26 = 1; /*0x1008ace14*/
  v27 = 0; /*0x1008ace18*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008ace25*/
    v21,
    v25,
    v5,
    v6,
    v7,
    v8);
  if ( !v21[0] ) /*0x1008ace31*/
  {
    if ( !HIBYTE(v27) ) /*0x1008ace51*/
    {
      v9 = v24 - v23; /*0x1008ace5b*/
      if ( ((unsigned __int8)v27 | (v24 != v23)) == 1 ) /*0x1008ace67*/
      {
        v10 = v25[0] + v23; /*0x1008ace69*/
        if ( !v9 ) /*0x1008ace70*/
        {
LABEL_12:
          v11 = v9; /*0x1008ace91*/
          goto LABEL_14; /*0x1008ace94*/
        }
        goto LABEL_8; /*0x1008ace70*/
      }
    }
LABEL_13:
    v10 = 1; /*0x1008ace96*/
    v11 = 0; /*0x1008ace9c*/
    goto LABEL_14; /*0x1008ace9c*/
  }
  if ( !v4 ) /*0x1008ace36*/
    goto LABEL_13; /*0x1008ace36*/
  v9 = v22 - v23; /*0x1008ace40*/
  v10 = v23 + v4; /*0x1008ace43*/
  if ( v22 == v23 ) /*0x1008ace49*/
    goto LABEL_12; /*0x1008ace49*/
LABEL_8:
  v11 = v9; /*0x1008ace72*/
  if ( *(_BYTE *)(v10 + v9 - 1) == 10 ) /*0x1008ace7b*/
  {
    v11 = v9 - 1; /*0x1008ace80*/
    if ( v9 != 1 && *(_BYTE *)(v10 + v9 - 2) == 13 ) /*0x1008ace8b*/
    {
      v9 -= 2; /*0x1008ace8d*/
      goto LABEL_12; /*0x1008ace8d*/
    }
  }
LABEL_14:
  v12 = v10; /*0x1008ace9e*/
  v13 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v10, v11); /*0x1008acea1*/
  v15 = v14; /*0x1008acea6*/
  if ( v14 < 0 ) /*0x1008aceac*/
  {
    v16 = 0; /*0x1008aceae*/
    goto LABEL_16; /*0x1008aceae*/
  }
  if ( v14 ) /*0x1008acebc*/
  {
    v17 = v13; /*0x1008acebe*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v11); /*0x1008acec1*/
    v16 = 1; /*0x1008acec6*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1008aced4*/
    if ( !v18 ) /*0x1008acedc*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x1008aceb1*/
    v19 = v18; /*0x1008acede*/
    v13 = v17; /*0x1008acee1*/
  }
  else
  {
    v19 = 1; /*0x1008acee6*/
  }
  memcpy((void *)v19, v13, v15); /*0x1008acef5*/
  *a1 = v15; /*0x1008acefa*/
  a1[1] = v19; /*0x1008acefd*/
  a1[2] = v15; /*0x1008acf01*/
  return a1; /*0x1008acf08*/
}