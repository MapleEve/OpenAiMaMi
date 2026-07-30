// __ZN13codexmate_lib4core5relay23codex_thread_visibility38is_routable_official_passthrough_model @ 0x1008f0380 | 1.2.4 NEW-delta
char __fastcall codexmate_lib::core::relay::codex_thread_visibility::is_routable_official_passthrough_model::hc48669e9e7730095(
        __int64 a1,
        __int64 a2)
{
  char *v2; // rax
  unsigned __int64 v3; // rdx
  char *v4; // rbx
  unsigned __int64 v5; // r14
  bool v7; // zf
  __m128i v8; // xmm2
  char v9; // al

  v2 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a1, a2); /*0x1008f0387*/
  if ( !v3 ) /*0x1008f038f*/
    return 0; /*0x1008f038f*/
  v4 = v2; /*0x1008f0391*/
  v5 = v3; /*0x1008f0394*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1008f03a9*/
                          "::[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the us"
                          "er's instructions carefully. Respond helpfully and use tools when appropriate.",
                          2u,
                          v2) )
    return 0; /*0x1008f03b8*/
  if ( v5 == 12 ) /*0x1008f03bd*/
  {
    v7 = (anon_d163fe72d6e6e73a137b22815ab75905_117 ^ *(_QWORD *)v4 | *((_DWORD *)v4 + 2) ^ 0x79616C65u) == 0; /*0x1008f03d2*/
  }
  else
  {
    if ( v5 > 0xC /*0x1008f03f1*/
      && !(*(_QWORD *)v4 ^ anon_d163fe72d6e6e73a137b22815ab75905_40
         | *(_QWORD *)(v4 + 5) ^ *(__int64 *)((char *)&anon_d163fe72d6e6e73a137b22815ab75905_40 + 5)) )
    {
      v9 = 1; /*0x1008f0451*/
      return v9 ^ 1; /*0x1008f0453*/
    }
    if ( v5 == 6 ) /*0x1008f03f7*/
    {
      v7 = (anon_d163fe72d6e6e73a137b22815ab75905_28 ^ *(_DWORD *)v4 | *((_WORD *)v4 + 2) ^ 0x3169) == 0; /*0x1008f0441*/
    }
    else
    {
      if ( v5 != 19 ) /*0x1008f03fd*/
      {
        v9 = 0; /*0x1008f044d*/
        return v9 ^ 1; /*0x1008f044f*/
      }
      v8 = _mm_or_si128( /*0x1008f0420*/
             _mm_xor_si128(
               _mm_loadu_si128((const __m128i *)((char *)&anon_d163fe72d6e6e73a137b22815ab75905_37 + 3)),
               _mm_loadu_si128((const __m128i *)(v4 + 3))),
             _mm_xor_si128(
               _mm_loadu_si128((const __m128i *)v4),
               _mm_loadu_si128((const __m128i *)&anon_d163fe72d6e6e73a137b22815ab75905_37)));
      v7 = _mm_testz_si128(v8, v8); /*0x1008f0424*/
    }
  }
  v9 = v7; /*0x1008f0443*/
  return v9 ^ 1; /*0x1008f03b4*/
}