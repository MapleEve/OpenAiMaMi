// __ZN13codexmate_lib4core5relay12health_check29classify_openai_chat_endpoint @ 0x10089f850 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::health_check::classify_openai_chat_endpoint::hbbf25b06ed7dca4c(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r15
  unsigned __int8 *v6; // rbx
  __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  void *__s1; // [rsp+8h] [rbp-28h]
  unsigned __int64 v10; // [rsp+10h] [rbp-20h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x10089f85d*/
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v8, v3, v4); /*0x10089f869*/
  v5 = v10; /*0x10089f86e*/
  if ( v10 ) /*0x10089f875*/
  {
    v6 = (unsigned __int8 *)__s1; /*0x10089f877*/
    LOBYTE(v2) = 1; /*0x10089f892*/
    if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10089f8c9*/
                             &anon_10420c9971c21f44d230d15b39fb3fec_660,
                             9u,
                             __s1)
      && !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                             "embed",
                             5u,
                             v6)
      && (v5 < 3 || *(_WORD *)v6 ^ 0x336D | v6[2] ^ 0x65) )
    {
      v2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698("bge-", 4u, v6); /*0x10089f8e5*/
    }
  }
  else
  {
    v2 = 0; /*0x10089f8ea*/
  }
  if ( v8 ) /*0x10089f8f4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v8, 1); /*0x10089f8ff*/
  return v2; /*0x10089f907*/
}