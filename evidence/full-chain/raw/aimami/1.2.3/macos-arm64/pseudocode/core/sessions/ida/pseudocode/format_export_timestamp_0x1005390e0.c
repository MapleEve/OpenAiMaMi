// __ZN13codexmate_lib4core8sessions23format_export_timestamp @ 0x1005390e0 | 基线 same-set
double __fastcall codexmate_lib::core::sessions::format_export_timestamp::h9a92069926f468c1(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  void *v8; // rbx
  size_t v9; // rdx
  __int64 v10; // r13
  const void *v11; // r12
  size_t v12; // r15
  void *v13; // rax
  unsigned int v14; // r15d
  int v15; // r13d
  double result; // xmm0_8
  __int64 v17; // rsi
  __m128 v18; // [rsp+0h] [rbp-120h]
  unsigned int v19; // [rsp+24h] [rbp-FCh] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-F8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-D0h]
  unsigned int v23; // [rsp+58h] [rbp-C8h]
  void *v24; // [rsp+60h] [rbp-C0h]
  __int64 v25; // [rsp+68h] [rbp-B8h]
  __int64 v26; // [rsp+70h] [rbp-B0h]
  __int64 v27; // [rsp+78h] [rbp-A8h]
  char v28; // [rsp+80h] [rbp-A0h]
  int v29; // [rsp+88h] [rbp-98h]
  __int64 v30; // [rsp+8Ch] [rbp-94h] BYREF
  int v31; // [rsp+94h] [rbp-8Ch]
  __int128 v32; // [rsp+98h] [rbp-88h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-68h]
  __int128 *v35; // [rsp+C0h] [rbp-60h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+C8h] [rbp-58h]
  __int64 v37; // [rsp+D0h] [rbp-50h]
  __int128 v38; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-38h]
  _BYTE v40[41]; // [rsp+F7h] [rbp-29h] BYREF

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015FF062, 9, a2); /*0x100539109*/
  if ( !v3 /*0x100539141*/
    && (v3 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
               a2,
               "/payload/timestamp/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/thread_spawn/depth/payload/agent_nickname/payload/agent_role",
               18)) == 0
    || *(_BYTE *)v3 != 3
    || (v4 = *(_QWORD *)(v3 + 16),
        v5 = *(_QWORD *)(v3 + 24),
        v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5),
        !v7) )
  {
    *a1 = 0x8000000000000000LL; /*0x1005391a2*/
    return result; /*0x1005391a2*/
  }
  if ( *(_BYTE *)(v6 + v7 - 1) == 90 ) /*0x100539148*/
  {
    v35 = (__int128 *)v6; /*0x10053914d*/
    v36 = (__int64 (__fastcall **)())(v7 - 1); /*0x100539151*/
    *(_QWORD *)&v21 = &v35; /*0x100539159*/
    *((_QWORD *)&v21 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100539167*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v20, &unk_1017C1B60, &v21); /*0x100539183*/
    v8 = (void *)v20[1]; /*0x100539188*/
    v9 = v20[2]; /*0x10053918f*/
    goto LABEL_14; /*0x100539196*/
  }
  if ( v7 < 0 ) /*0x1005391ba*/
  {
    v10 = 0; /*0x1005391bc*/
    goto LABEL_11; /*0x1005391bc*/
  }
  v11 = (const void *)v6; /*0x1005391ca*/
  v12 = v7; /*0x1005391cd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x1005391d0*/
  v10 = 1; /*0x1005391d5*/
  v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x1005391e3*/
  v7 = v12; /*0x1005391e8*/
  if ( !v13 ) /*0x1005391ee*/
LABEL_11:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v7); /*0x1005391bf*/
  v8 = v13; /*0x1005391f0*/
  memcpy(v13, v11, v12); /*0x1005391fc*/
  v9 = v12; /*0x100539201*/
  v20[0] = v12; /*0x100539204*/
LABEL_14:
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x10053920b*/
    &v21,
    v8,
    v9);
  if ( !(_DWORD)v21 ) /*0x100539221*/
  {
    *a1 = 0x8000000000000000LL; /*0x10053941d*/
    v17 = v20[0]; /*0x100539420*/
    if ( !v20[0] ) /*0x10053942a*/
      return result; /*0x10053942a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v17, 1); /*0x10053943d*/
  }
  v32 = v21; /*0x100539239*/
  v14 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d( /*0x100539251*/
          1,
          &v32);
  v19 = v14; /*0x10053926b*/
  DWORD2(v21) = DWORD2(v32); /*0x100539272*/
  *(_QWORD *)&v21 = v32; /*0x100539278*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v33, &v21, v14); /*0x10053928d*/
  v15 = v33; /*0x100539299*/
  v18 = (__m128)*(unsigned __int64 *)((char *)&v33 + 4); /*0x1005392a2*/
  *(_QWORD *)&v38 = 0; /*0x1005392a9*/
  *((_QWORD *)&v38 + 1) = 1; /*0x1005392b1*/
  v39 = 0; /*0x1005392b9*/
  v37 = 1610612768; /*0x1005392c1*/
  v35 = &v38; /*0x1005392cd*/
  v36 = &anon_a8580c566d8025b0f516de1c9be9088f_743; /*0x1005392d8*/
  if ( (unsigned __int8)_$LT$chrono..offset..fixed..FixedOffset$u20$as$u20$core..fmt..Display$GT$::fmt::habee36353257c26f( /*0x1005392e0*/
                          &v19,
                          &v35) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100539460*/
      &anon_a8580c566d8025b0f516de1c9be9088f_744,
      55,
      v40,
      &anon_a8580c566d8025b0f516de1c9be9088f_778,
      &anon_a8580c566d8025b0f516de1c9be9088f_746);
  v21 = v38; /*0x1005392f5*/
  v22 = v39; /*0x100539307*/
  v31 = v15; /*0x10053930e*/
  v29 = 1; /*0x100539315*/
  result = *(double *)v18.i64; /*0x10053931f*/
  _mm_storel_ps((double *)&v30, v18); /*0x100539326*/
  v23 = v14; /*0x10053932d*/
  v24 = &unk_1015FF06B; /*0x10053933b*/
  v25 = 17; /*0x100539342*/
  v26 = 8; /*0x10053934d*/
  v27 = 0; /*0x100539358*/
  v28 = 0; /*0x100539363*/
  *(_QWORD *)&v38 = 0; /*0x10053936a*/
  *((_QWORD *)&v38 + 1) = 1; /*0x100539372*/
  v39 = 0; /*0x10053937a*/
  v37 = 1610612768; /*0x100539382*/
  v35 = &v38; /*0x10053938a*/
  v36 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x100539395*/
  if ( (unsigned __int8)_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h6afe7439d7af7acd( /*0x1005393a4*/
                          &v21,
                          &v35) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100539485*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      v40,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v33 = v38; /*0x1005393b9*/
  v34 = v39; /*0x1005393c5*/
  if ( !__OFSUB__(-(__int64)v21, 1) ) /*0x1005393d6*/
  {
    if ( (_QWORD)v21 ) /*0x1005393d8*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v21 + 1), v21, 1); /*0x1005393e6*/
  }
  a1[2] = v34; /*0x1005393ef*/
  *(_OWORD *)a1 = v33; /*0x1005393ff*/
  v17 = v20[0]; /*0x100539402*/
  if ( v20[0] ) /*0x10053940c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v17, 1); /*0x10053940c*/
  return result; /*0x1005391a5*/
}