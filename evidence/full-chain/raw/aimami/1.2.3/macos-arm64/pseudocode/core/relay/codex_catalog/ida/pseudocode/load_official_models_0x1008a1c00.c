// __ZN13codexmate_lib4core5relay13codex_catalog20load_official_models @ 0x1008a1c00 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_catalog::load_official_models::h3b14ca3421b9b87d(
        __int64 (__fastcall **a1)(),
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(); // rax
  __int64 (__fastcall *v5)(); // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(); // rdi
  __int64 (__fastcall *v12)(); // r14
  __int64 (__fastcall *v13)(); // r12
  __int64 v14; // rsi
  _BYTE *v15; // rax
  __int64 (__fastcall *v16)(); // rax
  double result; // xmm0_8
  __int64 v18; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-F0h]
  __int64 v20; // [rsp+18h] [rbp-E8h]
  __int64 *v21; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+28h] [rbp-D8h]
  const char *v23; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD); // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+48h] [rbp-B8h]
  const char *v27; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v29)(); // [rsp+60h] [rbp-A0h] BYREF
  const char *v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  const char *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  const char *v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  void *v39; // [rsp+B0h] [rbp-50h]
  __int64 **v40; // [rsp+B8h] [rbp-48h]
  _QWORD v41[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[33]; // [rsp+DFh] [rbp-21h] BYREF

  std::path::Path::_join::hb1a495d4f06b13b8(&v18, a2, a3, "models_cache.json", 17); /*0x1008a1c2c*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v25, v19, v20); /*0x1008a1c46*/
  v3 = v25; /*0x1008a1c4b*/
  if ( !__OFSUB__(-v25, 1) ) /*0x1008a1c58*/
  {
    v12 = v26; /*0x1008a1da1*/
    v29 = v26; /*0x1008a1daf*/
    v30 = v27; /*0x1008a1db6*/
    v31 = 0; /*0x1008a1dbd*/
    v32 = 0; /*0x1008a1dc8*/
    v33 = (const char *)v26; /*0x1008a1dd3*/
    v34 = (__int64)v27; /*0x1008a1dd7*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v21, &v29); /*0x1008a1de9*/
    if ( (_BYTE)v21 == 6 ) /*0x1008a1df5*/
    {
      v13 = v22; /*0x1008a1dfb*/
      v42 = v22; /*0x1008a1e02*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008a1e14*/
      {
        v41[0] = &v42; /*0x1008a1e1e*/
        v41[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008a1e29*/
        v35 = 2; /*0x1008a1e2d*/
        v36 = "codexmate_lib::core::relay::codex_catalog"; /*0x1008a1e3c*/
        v37 = 41; /*0x1008a1e40*/
        v39 = &unk_1017C5EEC; /*0x1008a1e4f*/
        v40 = (__int64 **)v41; /*0x1008a1e57*/
        v29 = nullptr; /*0x1008a1e5b*/
        v30 = "codexmate_lib::core::relay::codex_catalog"; /*0x1008a1e66*/
        v31 = 41; /*0x1008a1e6d*/
        v32 = 0; /*0x1008a1e78*/
        v33 = "src/core/relay/codex_catalog.rs"; /*0x1008a1e8a*/
        v34 = 31; /*0x1008a1e8e*/
        v38 = 0xF000000001LL; /*0x1008a1ea0*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v43, &v29); /*0x1008a1eaf*/
        v13 = v42; /*0x1008a1eb4*/
      }
      *a1 = nullptr; /*0x1008a1eb8*/
      a1[1] = (__int64 (__fastcall *)())8; /*0x1008a1ebf*/
      a1[2] = nullptr; /*0x1008a1ec7*/
      if ( *(_QWORD *)v13 == 1 ) /*0x1008a1ed7*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3((char *)v13 + 8); /*0x1008a1fc6*/
      }
      else if ( !*(_QWORD *)v13 ) /*0x1008a1ecf*/
      {
        v14 = *((_QWORD *)v13 + 2); /*0x1008a1ee6*/
        if ( v14 ) /*0x1008a1eee*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v13 + 1), v14, 1); /*0x1008a1efe*/
      }
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 40, 8); /*0x1008a1fd8*/
      if ( !v3 ) /*0x1008a1fe0*/
        goto LABEL_27; /*0x1008a1fe0*/
    }
    else
    {
      v28 = v24; /*0x1008a1f0f*/
      v27 = v23; /*0x1008a1f1d*/
      v26 = v22; /*0x1008a1f32*/
      v25 = (__int64)v21; /*0x1008a1f39*/
      v15 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a1f53*/
                       &unk_10167582D,
                       6,
                       &v25);
      if ( v15 && *v15 == 4 ) /*0x1008a1f60*/
      {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v29, v15 + 8); /*0x1008a1f70*/
        a1[2] = (__int64 (__fastcall *)())v31; /*0x1008a1f7c*/
        v16 = v29; /*0x1008a1f80*/
        a1[1] = (__int64 (__fastcall *)())v30; /*0x1008a1f8e*/
        *a1 = v16; /*0x1008a1f92*/
      }
      else
      {
        *a1 = nullptr; /*0x1008a1f97*/
        a1[1] = (__int64 (__fastcall *)())8; /*0x1008a1f9e*/
        a1[2] = nullptr; /*0x1008a1fa6*/
      }
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v25); /*0x1008a1fb5*/
      if ( !v3 ) /*0x1008a1fbd*/
        goto LABEL_27; /*0x1008a1fbd*/
    }
    v10 = 1; /*0x1008a1fe2*/
    v11 = v12; /*0x1008a1fe7*/
    v9 = v3; /*0x1008a1fea*/
LABEL_26:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v9, v10); /*0x1008a1fed*/
    goto LABEL_27; /*0x1008a1fed*/
  }
  v4 = v26; /*0x1008a1c5e*/
  v41[0] = v26; /*0x1008a1c65*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1008a1c77*/
  {
    v21 = &v18; /*0x1008a1c7d*/
    v22 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::hb0f847ebf8eb0122; /*0x1008a1c8b*/
    v23 = (const char *)v41; /*0x1008a1c96*/
    v24 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008a1ca4*/
    v35 = 2; /*0x1008a1cab*/
    v36 = "codexmate_lib::core::relay::codex_catalog"; /*0x1008a1cba*/
    v37 = 41; /*0x1008a1cbe*/
    v39 = &unk_1017C5F45; /*0x1008a1ccd*/
    v40 = &v21; /*0x1008a1cd8*/
    v29 = nullptr; /*0x1008a1cdc*/
    v30 = "codexmate_lib::core::relay::codex_catalog"; /*0x1008a1ce7*/
    v31 = 41; /*0x1008a1cee*/
    v32 = 0; /*0x1008a1cf9*/
    v33 = "src/core/relay/codex_catalog.rs"; /*0x1008a1d0b*/
    v34 = 31; /*0x1008a1d0f*/
    v38 = 0xE600000001LL; /*0x1008a1d21*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v43, &v29); /*0x1008a1d30*/
    v4 = (__int64 (__fastcall *)())v41[0]; /*0x1008a1d35*/
  }
  *a1 = nullptr; /*0x1008a1d39*/
  a1[1] = (__int64 (__fastcall *)())8; /*0x1008a1d40*/
  a1[2] = nullptr; /*0x1008a1d48*/
  if ( ((unsigned __int8)v4 & 3) == 1 ) /*0x1008a1d58*/
  {
    v5 = (__int64 (__fastcall *)())((char *)v4 - 1); /*0x1008a1d5e*/
    v6 = *(_QWORD *)((char *)v4 - 1); /*0x1008a1d62*/
    v7 = *(_QWORD *)((char *)v4 + 7); /*0x1008a1d66*/
    if ( *(_QWORD *)v7 ) /*0x1008a1d6a*/
      (*(void (__fastcall **)(__int64))v7)(v6); /*0x1008a1d76*/
    v8 = *(_QWORD *)(v7 + 8); /*0x1008a1d78*/
    if ( v8 ) /*0x1008a1d80*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1008a1d8a*/
    v9 = 24; /*0x1008a1d8f*/
    v10 = 8; /*0x1008a1d94*/
    v11 = v5; /*0x1008a1d99*/
    goto LABEL_26; /*0x1008a1d9c*/
  }
LABEL_27:
  if ( v18 ) /*0x1008a1ffc*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x1008a200a*/
  return result; /*0x1008a200f*/
}