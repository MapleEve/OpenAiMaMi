// mac 1.2.2 NEW set_voice_overlay_style 0x1013aa160 d=1
__int64 __fastcall _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hecc39b36334a64e9(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  size_t v5[3]; // [rsp+8h] [rbp-68h] BYREF
  __int128 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-40h]
  __m256i v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-18h] BYREF

  v8.i64[0] = a3; /*0x1013aa16e*/
  v8.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1013aa179*/
  v8.i64[2] = a2; /*0x1013aa17d*/
  v8.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x1013aa181*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1013aa197*/
    v5,
    anon_ff51a8651aab3676c852b8266a775073_419,
    (unsigned __int64)&v8);
  v9[0] = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h4974f732d33763b8(v5); /*0x1013aa1a4*/
  v8.i64[0] = (__int64)v9; /*0x1013aa1ac*/
  v8.i64[1] = (__int64)anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he3d8e265b7c41f4d; /*0x1013aa1b7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1013aa1ca*/
    (size_t *)&v6,
    anon_ff51a8651aab3676c852b8266a775073_318,
    (unsigned __int64)&v8);
  *(__int128 *)((char *)v8.i128 + 7) = v6; /*0x1013aa1d7*/
  *(__int64 *)((char *)&v8.i64[2] + 7) = v7; /*0x1013aa1e3*/
  *(_BYTE *)a1 = 3; /*0x1013aa1e7*/
  v3 = v8.i64[1]; /*0x1013aa1ee*/
  *(_QWORD *)(a1 + 1) = v8.i64[0]; /*0x1013aa1f2*/
  *(_OWORD *)(a1 + 9) = __PAIR128__(v8.u64[2], v3); /*0x1013aa1f6*/
  *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v8.i64[2] + 7); /*0x1013aa206*/
  return anyhow::error::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$anyhow..Error$GT$::drop::h1c31177a706a53e5(v9); /*0x1013aa213*/
}