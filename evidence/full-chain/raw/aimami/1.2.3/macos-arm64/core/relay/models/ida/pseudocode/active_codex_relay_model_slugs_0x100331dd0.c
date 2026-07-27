// __ZN13codexmate_lib4core5relay6models30active_codex_relay_model_slugs @ 0x100331dd0
_QWORD *__fastcall codexmate_lib::core::relay::models::active_codex_relay_model_slugs::hb3cbe297656c04c0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // rax
  _BYTE v11[112]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v12[14]; // [rsp+70h] [rbp-B0h] BYREF
  void *v13; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v14; // [rsp+E8h] [rbp-38h]
  __int64 v15; // [rsp+F0h] [rbp-30h]
  __int64 v16; // [rsp+F8h] [rbp-28h]
  __int64 v17; // [rsp+100h] [rbp-20h]
  __int64 v18; // [rsp+108h] [rbp-18h]

  v12[0] = a4; /*0x100331de9*/
  v12[1] = a4 + 24 * a5; /*0x100331df0*/
  v12[2] = a2; /*0x100331df7*/
  v12[3] = a3; /*0x100331dfe*/
  v12[4] = 0; /*0x100331e05*/
  v12[9] = 0; /*0x100331e10*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100331e1f*/
  v6 = v5; /*0x100331e21*/
  if ( *(_BYTE *)(v5 + 16) == 1 ) /*0x100331e28*/
  {
    v7 = *(_QWORD *)v5; /*0x100331e2e*/
    v8 = *(_QWORD *)(v6 + 8); /*0x100331e31*/
  }
  else
  {
    v7 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100331ed3*/
    *(_QWORD *)v6 = v7; /*0x100331ed8*/
    *(_QWORD *)(v6 + 8) = v8; /*0x100331edb*/
    *(_BYTE *)(v6 + 16) = 1; /*0x100331edf*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x100331e39*/
  v16 = 0; /*0x100331e43*/
  v15 = 0; /*0x100331e4e*/
  v14 = 0; /*0x100331e59*/
  v13 = anon_b0ee9adff4519c22b647af231a5a39fa_24; /*0x100331e64*/
  v17 = v7; /*0x100331e68*/
  v18 = v8; /*0x100331e6c*/
  qmemcpy(v11, v12, sizeof(v11)); /*0x100331e86*/
  _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$$LP$K$C$V$RP$$GT$$GT$::extend::hce58d3e1689f46ac( /*0x100331e90*/
    &v13,
    v11);
  a1[5] = v18; /*0x100331e99*/
  a1[4] = v17; /*0x100331ea1*/
  a1[3] = v16; /*0x100331ea9*/
  a1[2] = v15; /*0x100331eb1*/
  v9 = v13; /*0x100331eb5*/
  a1[1] = v14; /*0x100331ebd*/
  *a1 = v9; /*0x100331ec1*/
  return a1; /*0x100331ec7*/
}