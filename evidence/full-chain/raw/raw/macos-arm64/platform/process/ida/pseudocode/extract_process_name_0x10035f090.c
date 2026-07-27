// __ZN13codexmate_lib8platform7process20extract_process_name @ 0x10035f090 | 基线 same-set
__int64 *__fastcall codexmate_lib::platform::process::extract_process_name::h50a7d2a16f8e5f38(
        __int64 *a1,
        __int64 a2,
        size_t a3)
{
  __int64 v4; // r15
  __int64 *v5; // r14
  size_t v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // r12
  const void *v12; // r13
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  const void *v17; // rsi
  int v19; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+8h] [rbp-98h]
  __int64 v21; // [rsp+10h] [rbp-90h]
  size_t __n; // [rsp+18h] [rbp-88h]
  const void *v23; // [rsp+20h] [rbp-80h]
  __int64 *v24; // [rsp+28h] [rbp-78h]
  __int64 v25; // [rsp+30h] [rbp-70h] BYREF
  size_t v26; // [rsp+38h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-60h] BYREF
  size_t v28; // [rsp+48h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-50h]
  size_t v30; // [rsp+58h] [rbp-48h]
  __int64 v31; // [rsp+60h] [rbp-40h]
  __int16 v32; // [rsp+68h] [rbp-38h]
  __int16 v33; // [rsp+70h] [rbp-30h]

  v4 = a2; /*0x10035f0a4*/
  v5 = a1; /*0x10035f0a7*/
  v25 = 0; /*0x10035f0ae*/
  v26 = a3; /*0x10035f0b6*/
  v27 = a2; /*0x10035f0ba*/
  v28 = a3; /*0x10035f0be*/
  v29 = a2; /*0x10035f0c2*/
  v30 = a2 + a3; /*0x10035f0c6*/
  v31 = 0; /*0x10035f0ca*/
  v32 = 1; /*0x10035f0d2*/
  v7 = core::iter::traits::iterator::Iterator::try_fold::h476eff2b16756c7b(&v25); /*0x10035f0e1*/
  if ( !v7 ) /*0x10035f0e7*/
  {
    v6 = a3; /*0x10035f0e7*/
    v7 = a2; /*0x10035f0eb*/
  }
  v25 = 0; /*0x10035f0ef*/
  v26 = v6; /*0x10035f0f7*/
  v27 = v7; /*0x10035f0ff*/
  v28 = v6; /*0x10035f103*/
  v29 = 0; /*0x10035f107*/
  __n = v6; /*0x10035f10f*/
  v30 = v6; /*0x10035f116*/
  v31 = 0x2F0000002FLL; /*0x10035f124*/
  LOBYTE(v32) = 1; /*0x10035f128*/
  v33 = 1; /*0x10035f12c*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10035f139*/
    &v19,
    &v27);
  v23 = (const void *)v7; /*0x10035f145*/
  if ( v19 == 1 ) /*0x10035f149*/
  {
    v24 = a1; /*0x10035f14b*/
    v8 = v7; /*0x10035f156*/
    while ( 1 ) /*0x10035f160*/
    {
      v9 = v8; /*0x10035f160*/
      v10 = v20; /*0x10035f163*/
      v11 = v25; /*0x10035f171*/
      v25 = v21; /*0x10035f175*/
      if ( HIBYTE(v33) ) /*0x10035f17d*/
        break; /*0x10035f17d*/
      v8 = v27; /*0x10035f17f*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10035f18a*/
        &v19,
        &v27);
      if ( !(_BYTE)v19 ) /*0x10035f196*/
      {
        v4 = v10 - v11; /*0x10035f198*/
        v12 = (const void *)(v11 + v9); /*0x10035f19b*/
        v5 = v24; /*0x10035f19e*/
        if ( HIBYTE(v33) ) /*0x10035f1a6*/
          goto LABEL_12; /*0x10035f1a6*/
        goto LABEL_10; /*0x10035f1a6*/
      }
    }
    v4 = v20 - v11; /*0x10035f1f0*/
    v12 = (const void *)(v11 + v8); /*0x10035f1f3*/
    v5 = v24; /*0x10035f1f6*/
    if ( !v12 ) /*0x10035f1fd*/
      v4 = __n; /*0x10035f1fd*/
    v13 = v4 == 0; /*0x10035f205*/
    if ( v4 >= 0 ) /*0x10035f208*/
      goto LABEL_20; /*0x10035f208*/
LABEL_15:
    v14 = 0; /*0x10035f1e3*/
    goto LABEL_16; /*0x10035f1e3*/
  }
  v12 = nullptr; /*0x10035f1aa*/
  if ( HIBYTE(v33) ) /*0x10035f1b1*/
    goto LABEL_12; /*0x10035f1b1*/
LABEL_10:
  if ( ((unsigned __int8)v33 | (v26 != v25)) == 1 ) /*0x10035f1c7*/
  {
    v4 = v26 - v25; /*0x10035f1cd*/
    v12 = (const void *)(v27 + v25); /*0x10035f1d0*/
  }
LABEL_12:
  if ( !v12 ) /*0x10035f1d6*/
    v4 = __n; /*0x10035f1d6*/
  v13 = v4 == 0; /*0x10035f1de*/
  if ( v4 < 0 ) /*0x10035f1e1*/
    goto LABEL_15; /*0x10035f1e1*/
LABEL_20:
  if ( !v13 ) /*0x10035f20a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v19, &v27); /*0x10035f20c*/
    v14 = 1; /*0x10035f211*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 1); /*0x10035f21e*/
    if ( v15 ) /*0x10035f226*/
    {
      v16 = v15; /*0x10035f228*/
      goto LABEL_24; /*0x10035f22b*/
    }
LABEL_16:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v4); /*0x10035f1e5*/
  }
  v16 = 1; /*0x10035f22d*/
LABEL_24:
  v17 = v23; /*0x10035f233*/
  if ( v12 ) /*0x10035f23a*/
    v17 = v12; /*0x10035f23a*/
  memcpy((void *)v16, v17, v4); /*0x10035f244*/
  *v5 = v4; /*0x10035f249*/
  v5[1] = v16; /*0x10035f24c*/
  v5[2] = v4; /*0x10035f250*/
  return v5; /*0x10035f257*/
}