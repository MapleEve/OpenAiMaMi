// mac 1.2.2 NEW codexmate_lib4core5relay7storage27plan_provider_id 0x1006b33b0 d=1
__int64 __fastcall _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb65209eccf41f73f(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  const void *v5; // r13
  size_t v6; // rbx
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // rsi
  size_t v9; // rax
  unsigned __int64 *v10; // r12
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-70h] BYREF
  size_t v13[2]; // [rsp+10h] [rbp-60h] BYREF
  size_t __n; // [rsp+20h] [rbp-50h]
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h]
  size_t v17; // [rsp+38h] [rbp-38h]
  unsigned __int64 *v18; // [rsp+40h] [rbp-30h]

  v18 = a3; /*0x1006b33c1*/
  if ( a1 != a2 ) /*0x1006b33c8*/
  {
    v3 = a1; /*0x1006b33d1*/
    v4 = a2 - a1; /*0x1006b33d4*/
    v17 = v18[2]; /*0x1006b33df*/
    do /*0x1006b33fa*/
    {
      v15 = v3; /*0x1006b3400*/
      v12[0] = &v15; /*0x1006b3408*/
      v12[1] = _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h960a42ddfcee90b1; /*0x1006b3413*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x1006b3426*/
        v13,
        anon_69f6ba9ba0edfdbc8a57efa1de3594e0_418,
        (unsigned __int64)v12);
      v5 = (const void *)v13[1]; /*0x1006b342b*/
      v6 = __n; /*0x1006b342f*/
      v7 = v18; /*0x1006b3433*/
      v8 = v17; /*0x1006b343a*/
      v9 = *v18 - v17; /*0x1006b343e*/
      v16 = v4; /*0x1006b3444*/
      if ( __n > v9 ) /*0x1006b3448*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(v18, v17, __n, 1, 1u); /*0x1006b349e*/
        v7 = v18; /*0x1006b34a3*/
        v8 = v18[2]; /*0x1006b34a7*/
      }
      v10 = v7; /*0x1006b3451*/
      result = (__int64)memcpy((void *)(v8 + v7[1]), v5, v6); /*0x1006b345d*/
      v17 = v6 + v8; /*0x1006b3465*/
      v10[2] = v6 + v8; /*0x1006b3469*/
      if ( v13[0] ) /*0x1006b3475*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b3483*/
      ++v3; /*0x1006b33f0*/
      v4 = v16 - 1; /*0x1006b33f7*/
    }
    while ( v16 != 1 ); /*0x1006b33fa*/
  }
  return result; /*0x1006b34ad*/
}