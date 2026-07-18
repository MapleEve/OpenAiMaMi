// mac 1.2.2 NEW export_session_markdown 0x100a375e0 d=1
unsigned __int64 __fastcall codexmate_lib::core::sessions::format_export_timestamp::h8a3dda342e6fa806(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  size_t v6; // rbx
  size_t v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // r13
  unsigned __int8 *v10; // r12
  size_t v11; // r15
  void *v12; // rax
  unsigned int v13; // r15d
  int v14; // r13d
  __m128 v15; // [rsp+0h] [rbp-120h]
  unsigned int v16; // [rsp+24h] [rbp-FCh] BYREF
  size_t v17[3]; // [rsp+28h] [rbp-F8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-D0h]
  unsigned int v20; // [rsp+58h] [rbp-C8h]
  void *v21; // [rsp+60h] [rbp-C0h]
  __int64 v22; // [rsp+68h] [rbp-B8h]
  __int64 v23; // [rsp+70h] [rbp-B0h]
  __int64 v24; // [rsp+78h] [rbp-A8h]
  char v25; // [rsp+80h] [rbp-A0h]
  int v26; // [rsp+88h] [rbp-98h]
  __int64 v27; // [rsp+8Ch] [rbp-94h] BYREF
  int v28; // [rsp+94h] [rbp-8Ch]
  __int128 v29; // [rsp+98h] [rbp-88h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v31; // [rsp+B8h] [rbp-68h]
  unsigned __int8 *v32; // [rsp+C0h] [rbp-60h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+C8h] [rbp-58h]
  __int64 v34; // [rsp+D0h] [rbp-50h]
  __int128 v35; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-38h]
  _BYTE v37[41]; // [rsp+F7h] [rbp-29h] BYREF

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100a37609*/
         &anon_8b24e3f70b5df2fccdf26f545f136f0f_174,
         9u,
         a2);
  if ( !v3 /*0x100a37641*/
    && (v3 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(
               a2,
               "/payload/timestamp/payload/source/subagent/thread_spawn/parent_thread_id/payload/source/subagent/thread_spawn/depth/payload/agent_nickname/payload/agent_role",
               18)) == 0
    || *(_BYTE *)v3 != 3
    || (v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(
               *(unsigned __int8 **)(v3 + 16),
               *(_QWORD *)(v3 + 24)),
        !v5) )
  {
    result = 0x8000000000000000LL; /*0x100a37698*/
    *a1 = 0x8000000000000000LL; /*0x100a376a2*/
    return result; /*0x100a376a2*/
  }
  if ( v4[v5 - 1] == 90 ) /*0x100a37648*/
  {
    v32 = v4; /*0x100a3764d*/
    v33 = (__int64 (__fastcall **)())(v5 - 1); /*0x100a37651*/
    *(_QWORD *)&v18 = &v32; /*0x100a37659*/
    *((_QWORD *)&v18 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb65b742926afa8a3; /*0x100a37667*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, byte_1016FEBD9, (unsigned __int64)&v18); /*0x100a37683*/
    v6 = v17[1]; /*0x100a37688*/
    v7 = v17[2]; /*0x100a3768f*/
    goto LABEL_14; /*0x100a37696*/
  }
  if ( v5 < 0 ) /*0x100a376ba*/
  {
    v9 = 0; /*0x100a376bc*/
    goto LABEL_11; /*0x100a376bc*/
  }
  v10 = v4; /*0x100a376ca*/
  v11 = v5; /*0x100a376cd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a376d0*/
  v9 = 1; /*0x100a376d5*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1u); /*0x100a376e3*/
  if ( !v12 ) /*0x100a376ee*/
LABEL_11:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9); /*0x100a376bf*/
  v6 = (size_t)v12; /*0x100a376f0*/
  memcpy(v12, v10, v11); /*0x100a376fc*/
  v7 = v11; /*0x100a37701*/
  v17[0] = v11; /*0x100a37704*/
LABEL_14:
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x100a3770b*/
    &v18,
    v6,
    v7,
    a3);
  if ( !(_DWORD)v18 ) /*0x100a37721*/
  {
    result = 0x8000000000000000LL; /*0x100a37913*/
    *a1 = 0x8000000000000000LL; /*0x100a3791d*/
    if ( !v17[0] ) /*0x100a3792a*/
      return result; /*0x100a3792a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3793d*/
  }
  v29 = v18; /*0x100a37739*/
  v13 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d( /*0x100a37751*/
          1,
          &v29);
  v16 = v13; /*0x100a3776b*/
  DWORD2(v18) = DWORD2(v29); /*0x100a37772*/
  *(_QWORD *)&v18 = v29; /*0x100a37778*/
  chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(&v30, &v18, v13); /*0x100a3778d*/
  v14 = v30; /*0x100a37799*/
  v15 = (__m128)*(unsigned __int64 *)((char *)&v30 + 4); /*0x100a377a2*/
  *(_QWORD *)&v35 = 0; /*0x100a377a9*/
  *((_QWORD *)&v35 + 1) = 1; /*0x100a377b1*/
  v36 = 0; /*0x100a377b9*/
  v34 = 1610612768; /*0x100a377c1*/
  v32 = (unsigned __int8 *)&v35; /*0x100a377cd*/
  v33 = &anon_e09fd79b0c076fb9bf9cf83012bf0a76_1149; /*0x100a377d8*/
  if ( (unsigned __int8)_$LT$chrono..offset..fixed..FixedOffset$u20$as$u20$core..fmt..Display$GT$::fmt::habee36353257c26f( /*0x100a377e0*/
                          &v16,
                          &v32) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a37960*/
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1150,
      55,
      (__int64)v37,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1163,
      (__int64)&anon_e09fd79b0c076fb9bf9cf83012bf0a76_1152);
  v18 = v35; /*0x100a377f5*/
  v19 = v36; /*0x100a37807*/
  v28 = v14; /*0x100a3780e*/
  v26 = 1; /*0x100a37815*/
  _mm_storel_ps((double *)&v27, v15); /*0x100a37826*/
  v20 = v13; /*0x100a3782d*/
  v21 = &unk_1015A2F38; /*0x100a3783b*/
  v22 = 17; /*0x100a37842*/
  v23 = 8; /*0x100a3784d*/
  v24 = 0; /*0x100a37858*/
  v25 = 0; /*0x100a37863*/
  *(_QWORD *)&v35 = 0; /*0x100a3786a*/
  *((_QWORD *)&v35 + 1) = 1; /*0x100a37872*/
  v36 = 0; /*0x100a3787a*/
  v34 = 1610612768; /*0x100a37882*/
  v32 = (unsigned __int8 *)&v35; /*0x100a3788a*/
  v33 = &anon_8b24e3f70b5df2fccdf26f545f136f0f_1225; /*0x100a37895*/
  if ( (unsigned __int8)_$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h7c65c804423a5fba( /*0x100a378a4*/
                          &v18,
                          &v32) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a37985*/
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1226,
      55,
      (__int64)v37,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1239,
      (__int64)&anon_8b24e3f70b5df2fccdf26f545f136f0f_1228);
  v30 = v35; /*0x100a378b9*/
  v31 = v36; /*0x100a378c5*/
  if ( !__OFSUB__(-(__int64)v18, 1) ) /*0x100a378d6*/
  {
    if ( (_QWORD)v18 ) /*0x100a378d8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a378e6*/
  }
  a1[2] = v31; /*0x100a378ef*/
  result = v30; /*0x100a378f3*/
  *(_OWORD *)a1 = v30; /*0x100a378ff*/
  if ( v17[0] ) /*0x100a3790c*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3790c*/
  return result; /*0x100a376a5*/
}