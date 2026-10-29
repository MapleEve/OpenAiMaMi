// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_continuation::enabled::haea608ea83d8d12d; addr: 0x100877d90; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
char __fastcall codexmate_lib::core::relay::anthropic_continuation::enabled::haea608ea83d8d12d(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r12
  void *v5; // rax
  void *v6; // rax

  v1 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100877dad*/
                   &unk_1018CB9E5,
                   5,
                   a1);
  if ( !v1 ) /*0x100877db5*/
    v1 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100877db7*/
  if ( *(_BYTE *)v1 != 4 ) /*0x100877dc1*/
    return 0; /*0x100877dc1*/
  v2 = v1[3]; /*0x100877dc7*/
  if ( !v2 ) /*0x100877dce*/
    return 0; /*0x100877e62*/
  v3 = v1[2]; /*0x100877dd4*/
  v4 = 32 * v2; /*0x100877dd8*/
  while ( 1 ) /*0x100877e28*/
  {
    v5 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100877e28*/
                   &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                   4,
                   v3);
    if ( !v5 ) /*0x100877e30*/
      v5 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100877e32*/
    if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100877e3b*/
                            v5,
                            &off_101C03168) )
    {
      v6 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100877e53*/
                     &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                     4,
                     v3);
      if ( !v6 ) /*0x100877e5b*/
        v6 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100877e5d*/
      if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100877e0a*/
                              v6,
                              &off_101C01DA0) )
        break; /*0x100877e0a*/
    }
    v3 += 32; /*0x100877e13*/
    v4 -= 32; /*0x100877e17*/
    if ( !v4 ) /*0x100877e1b*/
      return 0; /*0x100877e1b*/
  }
  return 1; /*0x100877e68*/
}