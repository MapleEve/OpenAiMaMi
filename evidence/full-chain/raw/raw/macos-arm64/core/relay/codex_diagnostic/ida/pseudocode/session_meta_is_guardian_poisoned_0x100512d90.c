// __ZN13codexmate_lib4core5relay16codex_diagnostic33session_meta_is_guardian_poisoned @ 0x100512d90
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::session_meta_is_guardian_poisoned::hc9c3a1189ee99bec(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  signed __int64 v5; // rbx
  __int64 v6; // r12
  const void *v7; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  const void *v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD v13[6]; // [rsp+0h] [rbp-90h] BYREF
  char v14; // [rsp+30h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+31h] [rbp-5Fh] BYREF
  _BYTE v16[15]; // [rsp+41h] [rbp-4Fh]
  char v17; // [rsp+50h] [rbp-40h] BYREF
  __int64 v18; // [rsp+51h] [rbp-3Fh]
  __int64 v19; // [rsp+59h] [rbp-37h]
  _BYTE v20[15]; // [rsp+61h] [rbp-2Fh]

  v13[0] = a1; /*0x100512d9f*/
  v13[1] = a2; /*0x100512da6*/
  v13[2] = 0; /*0x100512dad*/
  v13[3] = 0; /*0x100512db5*/
  v13[4] = a1; /*0x100512dbd*/
  v13[5] = a2; /*0x100512dc1*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v14, v13); /*0x100512dd0*/
  if ( v14 == 6 ) /*0x100512ddb*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb((char *)v15 + 7); /*0x100512de1*/
LABEL_11:
    LODWORD(v7) = 0; /*0x100512e81*/
    return (unsigned int)v7; /*0x100512e81*/
  }
  *(_QWORD *)&v20[7] = *(_QWORD *)&v16[7]; /*0x100512def*/
  *(_QWORD *)v20 = *(_QWORD *)v16; /*0x100512df7*/
  v19 = v15[1]; /*0x100512e03*/
  v18 = v15[0]; /*0x100512e07*/
  v17 = v14; /*0x100512e0b*/
  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100512e1e*/
         "payloadbase_instructions",
         7,
         &v17);
  if ( !v2 /*0x100512e5d*/
    || (v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "base_instructions",
               17,
               v2)) == 0
    || (v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
               4,
               v3)) == 0
    || *(_BYTE *)v4 != 3 )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v17); /*0x100512e7c*/
    goto LABEL_11; /*0x100512e7c*/
  }
  v5 = *(_QWORD *)(v4 + 24); /*0x100512e5f*/
  if ( v5 < 0 ) /*0x100512e66*/
  {
    v6 = 0; /*0x100512e68*/
    goto LABEL_9; /*0x100512e68*/
  }
  v7 = *(const void **)(v4 + 16); /*0x100512e94*/
  if ( v5 ) /*0x100512e98*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100512e9a*/
      "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
      4);
    v6 = 1; /*0x100512e9f*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100512ead*/
    if ( !v9 ) /*0x100512eb5*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100512e6b*/
    v10 = v9; /*0x100512eb7*/
  }
  else
  {
    v10 = 1; /*0x100512ebc*/
  }
  memcpy((void *)v10, v7, v5); /*0x100512ecb*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v17); /*0x100512ed4*/
  v11 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(v10, v5); /*0x100512edf*/
  if ( v12 >= 0x2F ) /*0x100512ee8*/
    LOBYTE(v7) = memcmp(&unk_1015FE5D2, v11, 0x2Fu) == 0; /*0x100512f05*/
  else
    LODWORD(v7) = 0; /*0x100512eea*/
  if ( v5 ) /*0x100512f0c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v5, 1); /*0x100512f1d*/
  return (unsigned int)v7; /*0x100512e87*/
}