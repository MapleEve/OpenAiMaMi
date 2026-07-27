// __ZN13codexmate_lib4core5relay16codex_diagnostic25collect_defined_providers @ 0x1004f3820 | 基线 same-set
__int128 *__fastcall codexmate_lib::core::relay::codex_diagnostic::collect_defined_providers::h441d9e50c74bedaf(
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 *result; // rax
  __int64 v19; // r14
  __int128 *v20; // rdx
  int v21[4]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A8h]
  __int64 v23; // [rsp+20h] [rbp-A0h]
  __int64 v24; // [rsp+28h] [rbp-98h]
  _QWORD v25[5]; // [rsp+30h] [rbp-90h] BYREF
  char v26; // [rsp+58h] [rbp-68h]
  __int16 v27; // [rsp+60h] [rbp-60h]
  __int128 *v28; // [rsp+68h] [rbp-58h] BYREF
  __int128 *v29; // [rsp+70h] [rbp-50h]
  __int128 *v30; // [rsp+78h] [rbp-48h]
  __int128 *v31; // [rsp+80h] [rbp-40h]
  __int64 v32; // [rsp+88h] [rbp-38h]
  __int128 *v33; // [rsp+90h] [rbp-30h]

  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1004f383e*/
  v6 = v3; /*0x1004f3840*/
  if ( *(_BYTE *)(v3 + 16) == 1 ) /*0x1004f3847*/
  {
    v7 = *(_QWORD *)v3; /*0x1004f384d*/
    v8 = *(__int128 **)(v6 + 8); /*0x1004f3850*/
  }
  else
  {
    v19 = v4; /*0x1004f3a65*/
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(v3, a2, v4, v5); /*0x1004f3a6e*/
    v8 = v20; /*0x1004f3a79*/
    v4 = v19; /*0x1004f3a7c*/
    *(_QWORD *)v6 = v7; /*0x1004f3a7f*/
    *(_QWORD *)(v6 + 8) = v8; /*0x1004f3a82*/
    *(_BYTE *)(v6 + 16) = 1; /*0x1004f3a86*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x1004f3858*/
  v31 = nullptr; /*0x1004f3862*/
  v30 = nullptr; /*0x1004f386d*/
  v29 = nullptr; /*0x1004f3878*/
  v28 = &xmmword_1015FBEC0; /*0x1004f3883*/
  v32 = v7; /*0x1004f3887*/
  v33 = v8; /*0x1004f388b*/
  v23 = 0; /*0x1004f388f*/
  v24 = v4; /*0x1004f389a*/
  v25[0] = a2; /*0x1004f38a8*/
  v25[1] = v4; /*0x1004f38af*/
  v25[2] = 0; /*0x1004f38b6*/
  v25[3] = v4; /*0x1004f38be*/
  v25[4] = 0xA0000000ALL; /*0x1004f38cc*/
  v26 = 1; /*0x1004f38d0*/
  v27 = 0; /*0x1004f38d4*/
  do /*0x1004f38f4*/
  {
    v9 = v25[0]; /*0x1004f38fa*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1004f3907*/
      v21,
      v25);
    if ( v21[0] == 1 ) /*0x1004f3913*/
    {
      v10 = v23; /*0x1004f391c*/
      v23 = v22; /*0x1004f3923*/
      v11 = v22 - v10; /*0x1004f392a*/
      v12 = v10 + v9; /*0x1004f392d*/
      if ( v22 == v10 ) /*0x1004f3933*/
        goto LABEL_17; /*0x1004f3933*/
LABEL_11:
      if ( *(_BYTE *)(v12 + v11 - 1) == 10 ) /*0x1004f397f*/
      {
        if ( v11 == 1 ) /*0x1004f3987*/
        {
          v11 = 0; /*0x1004f3997*/
        }
        else if ( *(_BYTE *)(v12 + v11 - 2) == 13 ) /*0x1004f398f*/
        {
          v11 -= 2; /*0x1004f3991*/
        }
        else
        {
          --v11; /*0x1004f399b*/
        }
      }
      goto LABEL_17; /*0x1004f3995*/
    }
    if ( HIBYTE(v27) ) /*0x1004f3944*/
      break; /*0x1004f3944*/
    HIBYTE(v27) = 1; /*0x1004f394a*/
    v11 = v24 - v23; /*0x1004f395c*/
    if ( ((unsigned __int8)v27 | (v24 != v23)) != 1 ) /*0x1004f3967*/
      break; /*0x1004f3967*/
    v12 = v25[0] + v23; /*0x1004f396d*/
    if ( v11 ) /*0x1004f3977*/
      goto LABEL_11; /*0x1004f3977*/
LABEL_17:
    v13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v12, v11); /*0x1004f39a0*/
    if ( v14 && *(_BYTE *)v13 == 91 && *(_BYTE *)(v13 + v14 - 1) == 93 ) /*0x1004f39c2*/
    {
      if ( v14 == 1 || *(char *)(v13 + 1) <= -65 ) /*0x1004f39d6*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v13, v14, 1, v14 - 1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97); /*0x1004f3aa3*/
      if ( (unsigned __int64)(v14 - 2) >= 0x10 ) /*0x1004f39e4*/
      {
        v15 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v13 + 1)), (__m128i)xmmword_1015DCC20); /*0x1004f39ef*/
        if ( _mm_testz_si128(v15, v15) ) /*0x1004f39f7*/
        {
          v16 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v13 + 17, v14 - 18, 34); /*0x1004f3a0f*/
          hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(&v28, v16, v17); /*0x1004f3a1a*/
        }
      }
    }
  }
  while ( !HIBYTE(v27) ); /*0x1004f38f4*/
  a1[5] = v33; /*0x1004f3a24*/
  a1[4] = (__int128 *)v32; /*0x1004f3a30*/
  a1[3] = v31; /*0x1004f3a38*/
  a1[2] = v30; /*0x1004f3a40*/
  result = v28; /*0x1004f3a44*/
  a1[1] = v29; /*0x1004f3a4c*/
  *a1 = result; /*0x1004f3a50*/
  return result; /*0x1004f3a53*/
}