// __ZN13codexmate_lib4core5relay16codex_diagnostic24collect_defined_profiles @ 0x1004f20e0 | 基线 same-set
__int128 *__fastcall codexmate_lib::core::relay::codex_diagnostic::collect_defined_profiles::h5802163c4c3b6724(
        __int128 **a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int128 *v8; // rcx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int128 *result; // rax
  __int64 v18; // r14
  __int128 *v19; // rdx
  int v20[4]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A8h]
  __int64 v22; // [rsp+20h] [rbp-A0h]
  __int64 v23; // [rsp+28h] [rbp-98h]
  _QWORD v24[5]; // [rsp+30h] [rbp-90h] BYREF
  char v25; // [rsp+58h] [rbp-68h]
  __int16 v26; // [rsp+60h] [rbp-60h]
  __int128 *v27; // [rsp+68h] [rbp-58h] BYREF
  __int128 *v28; // [rsp+70h] [rbp-50h]
  __int128 *v29; // [rsp+78h] [rbp-48h]
  __int128 *v30; // [rsp+80h] [rbp-40h]
  __int64 v31; // [rsp+88h] [rbp-38h]
  __int128 *v32; // [rsp+90h] [rbp-30h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1004f20fe*/
  v6 = v3; /*0x1004f2100*/
  if ( *(_BYTE *)(v3 + 16) == 1 ) /*0x1004f2107*/
  {
    v7 = *(_QWORD *)v3; /*0x1004f210d*/
    v8 = *(__int128 **)(v6 + 8); /*0x1004f2110*/
  }
  else
  {
    v18 = v4; /*0x1004f2326*/
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v3, a2, v4, v5); /*0x1004f232f*/
    v8 = v19; /*0x1004f233a*/
    v4 = v18; /*0x1004f233d*/
    *(_QWORD *)v6 = v7; /*0x1004f2340*/
    *(_QWORD *)(v6 + 8) = v8; /*0x1004f2343*/
    *(_BYTE *)(v6 + 16) = 1; /*0x1004f2347*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x1004f2118*/
  v30 = nullptr; /*0x1004f2122*/
  v29 = nullptr; /*0x1004f212d*/
  v28 = nullptr; /*0x1004f2138*/
  v27 = &xmmword_1015FBEC0; /*0x1004f2143*/
  v31 = v7; /*0x1004f2147*/
  v32 = v8; /*0x1004f214b*/
  v22 = 0; /*0x1004f214f*/
  v23 = v4; /*0x1004f215a*/
  v24[0] = a2; /*0x1004f2168*/
  v24[1] = v4; /*0x1004f216f*/
  v24[2] = 0; /*0x1004f2176*/
  v24[3] = v4; /*0x1004f217e*/
  v24[4] = 0xA0000000ALL; /*0x1004f218c*/
  v25 = 1; /*0x1004f2190*/
  v26 = 0; /*0x1004f2194*/
  do /*0x1004f21b4*/
  {
    v9 = v24[0]; /*0x1004f21ba*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004f21c7*/
      v20,
      v24);
    if ( v20[0] == 1 ) /*0x1004f21d3*/
    {
      v10 = v22; /*0x1004f21dc*/
      v22 = v21; /*0x1004f21e3*/
      v11 = v21 - v10; /*0x1004f21ea*/
      v12 = v10 + v9; /*0x1004f21ed*/
      if ( v21 == v10 ) /*0x1004f21f3*/
        goto LABEL_17; /*0x1004f21f3*/
LABEL_11:
      if ( *(_BYTE *)(v12 + v11 - 1) == 10 ) /*0x1004f223f*/
      {
        if ( v11 == 1 ) /*0x1004f2247*/
        {
          v11 = 0; /*0x1004f2257*/
        }
        else if ( *(_BYTE *)(v12 + v11 - 2) == 13 ) /*0x1004f224f*/
        {
          v11 -= 2; /*0x1004f2251*/
        }
        else
        {
          --v11; /*0x1004f225b*/
        }
      }
      goto LABEL_17; /*0x1004f2255*/
    }
    if ( HIBYTE(v26) ) /*0x1004f2204*/
      break; /*0x1004f2204*/
    HIBYTE(v26) = 1; /*0x1004f220a*/
    v11 = v23 - v22; /*0x1004f221c*/
    if ( ((unsigned __int8)v26 | (v23 != v22)) != 1 ) /*0x1004f2227*/
      break; /*0x1004f2227*/
    v12 = v24[0] + v22; /*0x1004f222d*/
    if ( v11 ) /*0x1004f2237*/
      goto LABEL_11; /*0x1004f2237*/
LABEL_17:
    v13 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v12, v11); /*0x1004f2260*/
    if ( v14 && *v13 == 91 && v13[v14 - 1] == 93 ) /*0x1004f2282*/
    {
      if ( v14 == 1 || (char)v13[1] <= -65 ) /*0x1004f2296*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v13, v14, 1, v14 - 1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97); /*0x1004f2364*/
      if ( (unsigned __int64)(v14 - 2) >= 9 /*0x1004f22b9*/
        && !(*(_QWORD *)(v13 + 1) ^ 0x73656C69666F7270LL | (unsigned __int8)v13[9] ^ 0x2ELL) )
      {
        v15 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v13 + 10, v14 - 11, 34); /*0x1004f22cf*/
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(&v27, v15, v16); /*0x1004f22db*/
      }
    }
  }
  while ( !HIBYTE(v26) ); /*0x1004f21b4*/
  a1[5] = v32; /*0x1004f22e5*/
  a1[4] = (__int128 *)v31; /*0x1004f22f1*/
  a1[3] = v30; /*0x1004f22f9*/
  a1[2] = v29; /*0x1004f2301*/
  result = v27; /*0x1004f2305*/
  a1[1] = v28; /*0x1004f230d*/
  *a1 = result; /*0x1004f2311*/
  return result; /*0x1004f2314*/
}