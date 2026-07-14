// option_clone_if_present_helper_sys (shared, generic) @ 0x14108f780 (win, AiMaMi 1.1.8)
unsigned __int64 *__fastcall sub_14108F780(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  const __m128i *v4; // r14
  __m128i *v5; // rax
  __int64 v6; // rbx

  v3 = *(_QWORD *)(a2 + 16); /*0x14108f792*/
  if ( v3 ) /*0x14108f799*/
  {
    v4 = *(const __m128i **)(a2 + 8); /*0x14108f79b*/
    nullsub_1(a1, a2); /*0x14108f79f*/
    v5 = (__m128i *)sub_140001360(v3, 1); /*0x14108f7ac*/
    if ( !v5 ) /*0x14108f7b4*/
      sub_1412AD46B(1, v3); /*0x14108f7ef*/
    v6 = (__int64)v5; /*0x14108f7b6*/
    sub_1412762D0(v5, v4, v3); /*0x14108f7c2*/
  }
  else
  {
    v6 = 1; /*0x14108f7c9*/
  }
  *a1 = v3; /*0x14108f7ce*/
  a1[1] = v6; /*0x14108f7d1*/
  a1[2] = v3; /*0x14108f7d5*/
  return a1; /*0x14108f7dc*/
}
