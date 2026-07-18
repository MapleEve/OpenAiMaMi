// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12config_shape 0x1006ee8d0 d=1
__int64 __fastcall codexmate_lib::core::relay::config_takeover::backup_exists::h9652f75c4c8477d4(__int64 a1)
{
  const void *v1; // r14
  size_t v2; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+8h] [rbp-D8h]
  __int64 v8; // [rsp+98h] [rbp-48h]
  size_t v9; // [rsp+A0h] [rbp-40h] BYREF
  const void *v10; // [rsp+A8h] [rbp-38h]
  size_t v11; // [rsp+B0h] [rbp-30h]

  v1 = *(const void **)(a1 + 584); /*0x1006ee8e4*/
  v2 = *(_QWORD *)(a1 + 592); /*0x1006ee8eb*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1006ee909*/
    &v9,
    v1,
    v2,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    0x1Bu);
  std::sys::fs::metadata::h32fa16d3052ea535(&v6, v10, v11); /*0x1006ee920*/
  if ( (_BYTE)v6 ) /*0x1006ee92c*/
  {
    if ( (v7 & 3) == 1 ) /*0x1006ee941*/
    {
      v8 = v7 - 1; /*0x1006eea00*/
      v4 = *(_QWORD *)(v7 + 7); /*0x1006eea08*/
      if ( *(_QWORD *)v4 ) /*0x1006eea0c*/
        (*(void (__fastcall **)(_QWORD))v4)(*(_QWORD *)(v7 - 1)); /*0x1006eea18*/
      if ( *(_QWORD *)(v4 + 8) ) /*0x1006eea1a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006eea2c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006eea3f*/
      if ( v9 ) /*0x1006eea4b*/
        goto LABEL_4; /*0x1006eea4b*/
    }
    else if ( v9 ) /*0x1006ee94e*/
    {
LABEL_4:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ee950*/
    }
    std::path::Path::_join::hb1a495d4f06b13b8( /*0x1006ee95d*/
      &v9,
      v1,
      v2,
      "codex_router_top_level_backup.jsoncodexmate_lib::core::relay::config_takeoverlinesversioncreatedAtMstopLevelLiness"
      "ectionBlocksoriginalConfigkey.",
      0x22u);
    std::sys::fs::metadata::h32fa16d3052ea535(&v6, v10, v11); /*0x1006ee98b*/
    LODWORD(v1) = (unsigned __int8)v6; /*0x1006ee990*/
    if ( (_BYTE)v6 && (v7 & 3) == 1 ) /*0x1006ee9ac*/
    {
      v5 = *(_QWORD *)(v7 + 7); /*0x1006eea5e*/
      if ( *(_QWORD *)v5 ) /*0x1006eea62*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v7 - 1)); /*0x1006eea6e*/
      if ( *(_QWORD *)(v5 + 8) ) /*0x1006eea70*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006eea80*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006eea92*/
      if ( !v9 ) /*0x1006eea9e*/
        goto LABEL_9; /*0x1006eea9e*/
    }
    else if ( !v9 ) /*0x1006ee9b9*/
    {
LABEL_9:
      LOBYTE(v1) = (unsigned __int8)v1 ^ 1; /*0x1006ee9c8*/
      return (unsigned int)v1; /*0x1006ee9cc*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ee9c3*/
    goto LABEL_9; /*0x1006ee9c3*/
  }
  if ( v9 ) /*0x1006ee9d5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ee9df*/
  LOBYTE(v1) = 1; /*0x1006ee9e4*/
  return (unsigned int)v1; /*0x1006ee9ea*/
}