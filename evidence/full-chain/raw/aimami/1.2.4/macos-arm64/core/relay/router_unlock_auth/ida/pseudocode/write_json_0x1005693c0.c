// __ZN13codexmate_lib4core5relay18router_unlock_auth10write_json @ 0x1005693c0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::write_json::h582de803c49be74a(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // r14
  __int64 *v8; // r14
  __int64 (__fastcall *v9)(); // r15
  __int64 v10; // r12
  __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(); // rcx
  __int64 *v17; // [rsp+8h] [rbp-88h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+18h] [rbp-78h]
  __int64 v20; // [rsp+20h] [rbp-70h]
  char v21; // [rsp+28h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-60h]
  __int16 v23; // [rsp+38h] [rbp-58h] BYREF
  __int64 **v24; // [rsp+40h] [rbp-50h]
  __int64 v25; // [rsp+48h] [rbp-48h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+50h] [rbp-40h]
  __int64 v27; // [rsp+58h] [rbp-38h]
  _QWORD v28[6]; // [rsp+60h] [rbp-30h] BYREF

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1005693dd*/
  v6 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1005693ec*/
  if ( !v6 ) /*0x1005693f4*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1005696d9*/
  v25 = 128; /*0x1005693fa*/
  v26 = v6; /*0x100569402*/
  v17 = &v25; /*0x10056940a*/
  v18 = (__int64 (__fastcall *)())&unk_10166F14C; /*0x100569418*/
  v19 = 2; /*0x10056941c*/
  v20 = 1; /*0x100569424*/
  v21 = 0; /*0x10056942c*/
  *(_BYTE *)v6 = 123; /*0x100569430*/
  v27 = 1; /*0x100569433*/
  v23 = 256; /*0x10056943b*/
  v24 = &v17; /*0x100569448*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x100569464*/
         &v23,
         &anon_d163fe72d6e6e73a137b22815ab75905_167,
         6,
         a4);
  if ( v7 ) /*0x10056946a*/
    goto LABEL_6; /*0x10056946a*/
  if ( (_BYTE)v23 ) /*0x100569470*/
    goto LABEL_4; /*0x100569470*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x100569495*/
         &v23,
         &anon_d163fe72d6e6e73a137b22815ab75905_168,
         5,
         a4 + 24);
  if ( v7 ) /*0x10056949b*/
    goto LABEL_6; /*0x10056949b*/
  if ( (_BYTE)v23 ) /*0x100569520*/
    goto LABEL_4; /*0x100569520*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hf0a36f825d13b3c3( /*0x10056953f*/
         &v23,
         &anon_d163fe72d6e6e73a137b22815ab75905_19,
         10,
         a4 + 48);
  if ( v7 ) /*0x100569545*/
    goto LABEL_6; /*0x100569545*/
  if ( (_BYTE)v23 ) /*0x10056954f*/
    goto LABEL_4; /*0x10056954f*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h17ce176ac3d7fd13( /*0x10056956e*/
         &v23,
         &anon_d163fe72d6e6e73a137b22815ab75905_169,
         9,
         a4 + 72);
  if ( v7 ) /*0x100569574*/
    goto LABEL_6; /*0x100569574*/
  if ( (_BYTE)v23 ) /*0x10056957e*/
  {
LABEL_4:
    v7 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100569472*/
    goto LABEL_6; /*0x10056947a*/
  }
  v7 = serde_core::ser::SerializeMap::serialize_entry::h9728a86fc9e2d040( /*0x1005695a0*/
         &v23,
         &anon_d163fe72d6e6e73a137b22815ab75905_170,
         20,
         a4 + 80);
  if ( v7 ) /*0x1005695a6*/
  {
LABEL_6:
    if ( v25 ) /*0x1005694a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1005694af*/
    goto LABEL_8; /*0x1005694af*/
  }
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h05c35839663db935(&v23); /*0x1005695b0*/
  v12 = v25; /*0x1005695b5*/
  v7 = (__int64)v26; /*0x1005695b9*/
  if ( __OFSUB__(-v25, 1) ) /*0x1005695c3*/
  {
LABEL_8:
    v28[0] = v7; /*0x1005694b4*/
    v25 = (__int64)v28; /*0x1005694bc*/
    v26 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1005694c7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C8398, &v25); /*0x1005694dd*/
    v8 = v17; /*0x1005694e2*/
    v9 = v18; /*0x1005694e9*/
    v10 = v19; /*0x1005694ed*/
    result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(v28); /*0x1005694f5*/
    *a1 = 10; /*0x1005694fa*/
    a1[1] = v8; /*0x100569501*/
    a1[2] = v9; /*0x100569505*/
    a1[3] = v10; /*0x100569509*/
    return result; /*0x100569509*/
  }
  result = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h9563029d42e25ca2(a2, a3); /*0x1005695dc*/
  if ( result ) /*0x1005695e4*/
  {
    v28[0] = result; /*0x1005695ea*/
    v25 = (__int64)v28; /*0x1005695f2*/
    v26 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1005695fd*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v17, &unk_1017C836F, &v25); /*0x100569613*/
    v25 = (__int64)v17; /*0x100569623*/
    v26 = v18; /*0x100569627*/
    v27 = v19; /*0x10056962f*/
    if ( (v28[0] & 3) == 1 ) /*0x10056963f*/
    {
      v22 = v28[0] - 1LL; /*0x100569645*/
      v13 = *(_QWORD *)(v28[0] - 1LL); /*0x100569649*/
      v14 = *(_QWORD *)(v28[0] + 7LL); /*0x10056964d*/
      if ( *(_QWORD *)v14 ) /*0x100569651*/
        (*(void (__fastcall **)(__int64))v14)(v13); /*0x10056965d*/
      v15 = *(_QWORD *)(v14 + 8); /*0x10056965f*/
      if ( v15 ) /*0x100569667*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x100569671*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24, 8); /*0x100569684*/
    }
    *a1 = 10; /*0x100569689*/
    v16 = v26; /*0x100569694*/
    a1[1] = v25; /*0x100569698*/
    a1[2] = v16; /*0x10056969c*/
    result = v27; /*0x1005696a0*/
    a1[3] = v27; /*0x1005696a4*/
  }
  else
  {
    *a1 = 11; /*0x1005696aa*/
  }
  if ( v12 ) /*0x1005696b4*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v12, 1); /*0x1005696c5*/
  return result; /*0x10056950d*/
}