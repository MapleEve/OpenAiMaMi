// __ZN13codexmate_lib4core5relay23codex_thread_visibility26load_model_restore_journal @ 0x100ad3d50
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::load_model_restore_journal::h0d144f302266e7ee(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  const char *v5; // r15
  __int64 result; // rax
  const char *v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  const char *v13; // rdi
  const char *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const char *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+8h] [rbp-D8h]
  __int64 v22; // [rsp+10h] [rbp-D0h]
  const char *v23; // [rsp+18h] [rbp-C8h] BYREF
  void *v24; // [rsp+20h] [rbp-C0h]
  __int64 v25; // [rsp+28h] [rbp-B8h]
  __int64 v26; // [rsp+30h] [rbp-B0h]
  const char *v27; // [rsp+38h] [rbp-A8h]
  __int64 v28; // [rsp+40h] [rbp-A0h]
  __int64 v29; // [rsp+48h] [rbp-98h]
  void *v30; // [rsp+50h] [rbp-90h]
  __int64 v31; // [rsp+58h] [rbp-88h]
  __int64 v32; // [rsp+60h] [rbp-80h]
  void *v33; // [rsp+68h] [rbp-78h]
  const char ***v34; // [rsp+70h] [rbp-70h]
  const char **v35; // [rsp+78h] [rbp-68h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-60h]
  __int64 v37; // [rsp+88h] [rbp-58h] BYREF
  const char *v38; // [rsp+90h] [rbp-50h]
  void *v39; // [rsp+98h] [rbp-48h]
  __int64 v40; // [rsp+A0h] [rbp-40h]
  const char *v41; // [rsp+A8h] [rbp-38h] BYREF
  _BYTE v42[41]; // [rsp+B7h] [rbp-29h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v20, a2, a3, "router_model_restore.json", 25); /*0x100ad3d7b*/
  v3 = v21; /*0x100ad3d80*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v37, v21, v22); /*0x100ad3d95*/
  v4 = v37; /*0x100ad3d9a*/
  if ( !__OFSUB__(-v37, 1) ) /*0x100ad3da4*/
  {
    v14 = v38; /*0x100ad3ef5*/
    v23 = v38; /*0x100ad3efd*/
    v24 = v39; /*0x100ad3f04*/
    v25 = 0; /*0x100ad3f0b*/
    v26 = 0; /*0x100ad3f16*/
    v27 = v38; /*0x100ad3f21*/
    v28 = (__int64)v39; /*0x100ad3f28*/
    serde_json::de::from_trait::hbd3fd9097595e813(&v37, &v23); /*0x100ad3f3a*/
    if ( v37 == 0x8000000000000000LL ) /*0x100ad3f4d*/
    {
      v18 = v38; /*0x100ad3f53*/
      v41 = v38; /*0x100ad3f57*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ad3f69*/
      {
        v35 = &v41; /*0x100ad3f73*/
        v36 = (__int64 (__fastcall *)())_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100ad3f7e*/
        v29 = 2; /*0x100ad3f82*/
        v30 = &unk_10167D5D6; /*0x100ad3f94*/
        v31 = 51; /*0x100ad3f9b*/
        v33 = &unk_1017CAA58; /*0x100ad3fad*/
        v34 = &v35; /*0x100ad3fb5*/
        v23 = nullptr; /*0x100ad3fb9*/
        v24 = &unk_10167D5D6; /*0x100ad3fc4*/
        v25 = 51; /*0x100ad3fcb*/
        v26 = 0; /*0x100ad3fd6*/
        v27 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad3fe8*/
        v28 = 41; /*0x100ad3fef*/
        v32 = 0x91100000001LL; /*0x100ad4004*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v42, &v23); /*0x100ad4013*/
        v18 = v41; /*0x100ad4018*/
      }
      *(_DWORD *)(a1 + 24) = 0; /*0x100ad401c*/
      *(_QWORD *)a1 = 0; /*0x100ad4025*/
      *(_QWORD *)(a1 + 8) = 8; /*0x100ad402d*/
      *(_QWORD *)(a1 + 16) = 0; /*0x100ad4036*/
      if ( *(_QWORD *)v18 == 1 ) /*0x100ad4047*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v18 + 8, &v23, v15, v16, v17); /*0x100ad4095*/
      }
      else if ( !*(_QWORD *)v18 ) /*0x100ad403f*/
      {
        v19 = *((_QWORD *)v18 + 2); /*0x100ad404e*/
        if ( v19 ) /*0x100ad4055*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v18 + 1), v19, 1); /*0x100ad4060*/
      }
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 40, 8); /*0x100ad40a7*/
      if ( !v4 ) /*0x100ad40af*/
        goto LABEL_24; /*0x100ad40af*/
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v40; /*0x100ad406b*/
      *(_QWORD *)(a1 + 16) = v39; /*0x100ad4074*/
      result = v37; /*0x100ad4079*/
      *(_QWORD *)(a1 + 8) = v38; /*0x100ad4081*/
      *(_QWORD *)a1 = result; /*0x100ad4086*/
      if ( !v4 ) /*0x100ad408d*/
        goto LABEL_24; /*0x100ad408d*/
    }
    v12 = 1; /*0x100ad40b1*/
    v13 = v14; /*0x100ad40b6*/
    v11 = v4; /*0x100ad40b9*/
LABEL_23:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, v12); /*0x100ad40bc*/
    goto LABEL_24; /*0x100ad40bc*/
  }
  v5 = v38; /*0x100ad3daa*/
  v41 = v38; /*0x100ad3dae*/
  if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v38) /*0x100ad3dd0*/
    && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
  {
    v35 = &v41; /*0x100ad3dda*/
    v36 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100ad3de5*/
    v29 = 2; /*0x100ad3de9*/
    v30 = &unk_10167D5D6; /*0x100ad3dfb*/
    v31 = 51; /*0x100ad3e02*/
    v33 = &unk_1017CAA93; /*0x100ad3e14*/
    v34 = &v35; /*0x100ad3e1c*/
    v23 = nullptr; /*0x100ad3e20*/
    v24 = &unk_10167D5D6; /*0x100ad3e2b*/
    v25 = 51; /*0x100ad3e32*/
    v26 = 0; /*0x100ad3e3d*/
    v27 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ad3e4f*/
    v28 = 41; /*0x100ad3e56*/
    v32 = 0x90900000001LL; /*0x100ad3e6b*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v42, &v23); /*0x100ad3e7a*/
    v5 = v41; /*0x100ad3e7f*/
  }
  *(_DWORD *)(a1 + 24) = 0; /*0x100ad3e83*/
  *(_QWORD *)a1 = 0; /*0x100ad3e8c*/
  *(_QWORD *)(a1 + 8) = 8; /*0x100ad3e94*/
  *(_QWORD *)(a1 + 16) = 0; /*0x100ad3e9d*/
  result = (unsigned __int8)v5 & 3; /*0x100ad3ea9*/
  if ( (_DWORD)result == 1 ) /*0x100ad3eaf*/
  {
    v7 = v5 - 1; /*0x100ad3eb5*/
    v8 = *(_QWORD *)(v5 - 1); /*0x100ad3eb9*/
    v9 = *(_QWORD *)(v5 + 7); /*0x100ad3ebd*/
    if ( *(_QWORD *)v9 ) /*0x100ad3ec1*/
      (*(void (__fastcall **)(__int64))v9)(v8); /*0x100ad3ecc*/
    v10 = *(_QWORD *)(v9 + 8); /*0x100ad3ece*/
    if ( v10 ) /*0x100ad3ed5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x100ad3ede*/
    v11 = 24; /*0x100ad3ee3*/
    v12 = 8; /*0x100ad3ee8*/
    v13 = v7; /*0x100ad3eed*/
    goto LABEL_23; /*0x100ad3ef0*/
  }
LABEL_24:
  if ( v20 ) /*0x100ad40cb*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v20, 1); /*0x100ad40d5*/
  return result; /*0x100ad40da*/
}