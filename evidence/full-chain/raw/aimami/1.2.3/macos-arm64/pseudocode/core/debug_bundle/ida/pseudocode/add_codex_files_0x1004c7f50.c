// __ZN13codexmate_lib4core12debug_bundle15add_codex_files @ 0x1004c7f50 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::debug_bundle::add_codex_files::hab4de217f2cb942e(
        _QWORD *a1,
        int a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *result; // rax
  __int64 *v16; // rdi
  _DWORD v17[24]; // [rsp+8h] [rbp-E8h] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-68h] BYREF
  __int64 v20; // [rsp+90h] [rbp-60h]
  __int64 v21; // [rsp+98h] [rbp-58h]
  __int64 v22; // [rsp+A0h] [rbp-50h]
  __int64 v23; // [rsp+A8h] [rbp-48h]
  __int64 v24; // [rsp+B0h] [rbp-40h]
  __int64 v25; // [rsp+B8h] [rbp-38h]
  _QWORD *v26; // [rsp+C0h] [rbp-30h]

  v26 = a1; /*0x1004c7f70*/
  codexmate_lib::core::debug_bundle::config_shape::h4127f8fd343d42c3( /*0x1004c7f89*/
    (__int64)v18,
    (__int64)a4,
    *(_QWORD *)(a5 + 8),
    *(_QWORD *)(a5 + 16));
  v25 = a3[6]; /*0x1004c7f92*/
  v24 = a3[5]; /*0x1004c7f9a*/
  v23 = a3[4]; /*0x1004c7fa2*/
  v22 = a3[3]; /*0x1004c7faa*/
  v21 = a3[2]; /*0x1004c7fb2*/
  v8 = *a3; /*0x1004c7fb6*/
  v20 = a3[1]; /*0x1004c7fbd*/
  v19 = v8; /*0x1004c7fc1*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c7fe7*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/config-shape.jsoncodex/auth-shape.jsoncodex/catalog-shape.jsoncodex/thread-shape.jsoncodex/threa"
                  "d-catalog-health.jsoncodex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    23,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c7ff3*/
    goto LABEL_10; /*0x1004c7ff3*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c8000*/
  codexmate_lib::core::debug_bundle::auth_shape::h2c97417e240a0b81((__int64)v18, (__int64)a4); /*0x1004c800b*/
  v25 = a3[6]; /*0x1004c8014*/
  v24 = a3[5]; /*0x1004c801c*/
  v23 = a3[4]; /*0x1004c8024*/
  v22 = a3[3]; /*0x1004c802c*/
  v21 = a3[2]; /*0x1004c8034*/
  v9 = *a3; /*0x1004c8038*/
  v20 = a3[1]; /*0x1004c803f*/
  v19 = v9; /*0x1004c8043*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c8069*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/auth-shape.jsoncodex/catalog-shape.jsoncodex/thread-shape.jsoncodex/thread-catalog-health.jsoncodex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    21,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c8075*/
    goto LABEL_10; /*0x1004c8075*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c8082*/
  codexmate_lib::core::debug_bundle::catalog_shape::hc93d5544441282d4((__int64)v18, a4); /*0x1004c808d*/
  v25 = a3[6]; /*0x1004c8096*/
  v24 = a3[5]; /*0x1004c809e*/
  v23 = a3[4]; /*0x1004c80a6*/
  v22 = a3[3]; /*0x1004c80ae*/
  v21 = a3[2]; /*0x1004c80b6*/
  v10 = *a3; /*0x1004c80ba*/
  v20 = a3[1]; /*0x1004c80c1*/
  v19 = v10; /*0x1004c80c5*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c80eb*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/catalog-shape.jsoncodex/thread-shape.jsoncodex/thread-catalog-health.jsoncodex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    24,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c80f7*/
    goto LABEL_10; /*0x1004c80f7*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c8104*/
  codexmate_lib::core::debug_bundle::thread_shape::h10a55c72bc332555((__int64)v18, (__int64)a4, a5); /*0x1004c8112*/
  v25 = a3[6]; /*0x1004c811b*/
  v24 = a3[5]; /*0x1004c8123*/
  v23 = a3[4]; /*0x1004c812b*/
  v22 = a3[3]; /*0x1004c8133*/
  v21 = a3[2]; /*0x1004c813b*/
  v11 = *a3; /*0x1004c813f*/
  v20 = a3[1]; /*0x1004c8146*/
  v19 = v11; /*0x1004c814a*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c8170*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/thread-shape.jsoncodex/thread-catalog-health.jsoncodex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    23,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c817c*/
    goto LABEL_10; /*0x1004c817c*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c8189*/
  codexmate_lib::core::debug_bundle::thread_catalog_health::ha2cff36600023db8(v18, a4, a5); /*0x1004c8197*/
  v25 = a3[6]; /*0x1004c81a0*/
  v24 = a3[5]; /*0x1004c81a8*/
  v23 = a3[4]; /*0x1004c81b0*/
  v22 = a3[3]; /*0x1004c81b8*/
  v21 = a3[2]; /*0x1004c81c0*/
  v12 = *a3; /*0x1004c81c4*/
  v20 = a3[1]; /*0x1004c81cb*/
  v19 = v12; /*0x1004c81cf*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c81f5*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/thread-catalog-health.jsoncodex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    32,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c8201*/
    goto LABEL_10; /*0x1004c8201*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c820e*/
  codexmate_lib::core::debug_bundle::global_state_shape::h37ed77449b4d4089(v18, a4); /*0x1004c8219*/
  v25 = a3[6]; /*0x1004c8222*/
  v24 = a3[5]; /*0x1004c822a*/
  v23 = a3[4]; /*0x1004c8232*/
  v22 = a3[3]; /*0x1004c823a*/
  v21 = a3[2]; /*0x1004c8242*/
  v13 = *a3; /*0x1004c8246*/
  v20 = a3[1]; /*0x1004c824d*/
  v19 = v13; /*0x1004c8251*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c8277*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/global-state-shape.jsoncodex/processes.jsoncodex/schema-shape.json",
    29,
    (unsigned int)v18,
    a5);
  if ( v17[0] != 11 ) /*0x1004c8283*/
    goto LABEL_10; /*0x1004c8283*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c8290*/
  codexmate_lib::core::debug_bundle::process_shape::h772ce2601531871c((__int64)v18, (__int64)a4); /*0x1004c829b*/
  v25 = a3[6]; /*0x1004c82a4*/
  v24 = a3[5]; /*0x1004c82ac*/
  v23 = a3[4]; /*0x1004c82b4*/
  v22 = a3[3]; /*0x1004c82bc*/
  v21 = a3[2]; /*0x1004c82c4*/
  v14 = *a3; /*0x1004c82c8*/
  v20 = a3[1]; /*0x1004c82cf*/
  v19 = v14; /*0x1004c82d3*/
  codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c82f9*/
    (unsigned int)v17,
    a2,
    (unsigned int)&v19,
    (unsigned int)"codex/processes.jsoncodex/schema-shape.json",
    20,
    (unsigned int)v18,
    a5);
  if ( v17[0] == 11 ) /*0x1004c8305*/
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v18); /*0x1004c830e*/
    codexmate_lib::core::debug_bundle::schema_shape::hea4006a9eea0f4c9((__int64)&v19, a4, a5); /*0x1004c8320*/
    codexmate_lib::core::debug_bundle::add_json::h74f383daab3cce47( /*0x1004c8346*/
      (unsigned int)v17,
      a2,
      (_DWORD)a3,
      (unsigned int)"codex/schema-shape.json",
      23,
      (unsigned int)&v19,
      a5);
    if ( v17[0] == 11 ) /*0x1004c8352*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v19); /*0x1004c8358*/
      result = v26; /*0x1004c835d*/
      *v26 = 11; /*0x1004c8361*/
      return result; /*0x1004c8368*/
    }
    qmemcpy(v26, v17, 0x60u); /*0x1004c83ab*/
    v16 = &v19; /*0x1004c83ae*/
  }
  else
  {
LABEL_10:
    qmemcpy(v26, v17, 0x60u); /*0x1004c837a*/
    v16 = (__int64 *)v18; /*0x1004c837d*/
  }
  return (_QWORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v16); /*0x1004c8389*/
}