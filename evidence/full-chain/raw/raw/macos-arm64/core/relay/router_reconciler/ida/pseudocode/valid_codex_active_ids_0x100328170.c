// __ZN13codexmate_lib4core5relay17router_reconciler22valid_codex_active_ids @ 0x100328170 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::router_reconciler::valid_codex_active_ids::h72d6d7e22d69822e(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rcx
  __int64 v11; // r15
  __int64 v12[3]; // [rsp+0h] [rbp-A0h] BYREF
  char *v13; // [rsp+18h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-80h]
  __int64 v15; // [rsp+28h] [rbp-78h]
  __int64 v16; // [rsp+30h] [rbp-70h]
  __int64 v17; // [rsp+38h] [rbp-68h]
  __int64 v18; // [rsp+40h] [rbp-60h]
  char *v19; // [rsp+48h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-50h]
  __int64 v21; // [rsp+58h] [rbp-48h]
  __int64 v22; // [rsp+60h] [rbp-40h]
  __int64 v23; // [rsp+68h] [rbp-38h]
  __int64 v24; // [rsp+70h] [rbp-30h]

  v2 = a2[1]; /*0x100328187*/
  v3 = a2[2]; /*0x10032818b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100328196*/
  v5 = (_QWORD *)v4; /*0x100328198*/
  if ( *(_BYTE *)(v4 + 16) == 1 ) /*0x10032819f*/
  {
    v6 = *(_QWORD *)v4; /*0x1003281a5*/
    v7 = v5[1]; /*0x1003281a8*/
  }
  else
  {
    v11 = v4; /*0x1003282ce*/
    v6 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1003282d1*/
    v5 = (_QWORD *)v11; /*0x1003282d6*/
    *(_QWORD *)v11 = v6; /*0x1003282d9*/
    *(_QWORD *)(v11 + 8) = v7; /*0x1003282dc*/
    *(_BYTE *)(v11 + 16) = 1; /*0x1003282e0*/
  }
  *v5 = v6 + 1; /*0x1003281b0*/
  v22 = 0; /*0x1003281ba*/
  v21 = 0; /*0x1003281c5*/
  v20 = 0; /*0x1003281d0*/
  v19 = (char *)anon_b0ee9adff4519c22b647af231a5a39fa_24; /*0x1003281db*/
  v23 = v6; /*0x1003281df*/
  v24 = v7; /*0x1003281e3*/
  if ( v3 ) /*0x1003281ea*/
  {
    v8 = (_QWORD *)(v2 + 16); /*0x1003281ec*/
    do /*0x10032821b*/
    {
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1b9e374c111f139c(&v19, *(v8 - 1), *v8); /*0x10032820c*/
      v8 += 29; /*0x100328211*/
      --v3; /*0x100328218*/
    }
    while ( v3 ); /*0x10032821b*/
  }
  v18 = v24; /*0x100328221*/
  v17 = v23; /*0x100328229*/
  v16 = v22; /*0x100328231*/
  v15 = v21; /*0x100328239*/
  v14 = v20; /*0x100328245*/
  v13 = v19; /*0x100328249*/
  v9 = a2[4] + 24LL * a2[5]; /*0x10032825c*/
  v12[0] = a2[4]; /*0x100328260*/
  v12[1] = v9; /*0x100328267*/
  v12[2] = (__int64)&v13; /*0x100328275*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h17c561d4b19485d7( /*0x100328286*/
    a1,
    v12);
  if ( v14 && 17 * v14 != -33 ) /*0x1003282a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v13[-16 * v14 - 16], 17 * v14 + 33, 16); /*0x1003282b7*/
  return a1; /*0x1003282bf*/
}