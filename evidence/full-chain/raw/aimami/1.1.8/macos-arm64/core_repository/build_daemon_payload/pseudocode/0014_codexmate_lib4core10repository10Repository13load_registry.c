// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x100522e00 depth=2
// codexmate_lib4core10repository10Repository13load_registry
void __fastcall codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v7[6]; // [rsp+8h] [rbp-98h] BYREF
  __int64 v8; // [rsp+38h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-60h]
  __int64 v10; // [rsp+48h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-50h]
  __int64 v12; // [rsp+58h] [rbp-48h]
  __int64 v13; // [rsp+60h] [rbp-40h]
  __int64 v14; // [rsp+68h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-30h]
  __int64 v16; // [rsp+78h] [rbp-28h]
  __int64 v17; // [rsp+80h] [rbp-20h]

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v8, *(_QWORD *)(a2 + 224), *(_QWORD *)(a2 + 232)); /*0x100522e28*/
  v2 = v8; /*0x100522e2d*/
  v3 = v9; /*0x100522e31*/
  if ( __OFSUB__(-v8, 1) ) /*0x100522e38*/
  {
    *a1 = 2; /*0x100522e3d*/
    a1[1] = v3; /*0x100522e44*/
    return; /*0x100522e48*/
  }
  v7[0] = v9; /*0x100522e51*/
  v7[1] = v10; /*0x100522e58*/
  v7[2] = 0; /*0x100522e5f*/
  v7[3] = 0; /*0x100522e6a*/
  v7[4] = v9; /*0x100522e72*/
  v7[5] = v10; /*0x100522e76*/
  serde_json::de::from_trait::hfff73d54d71a8a9a(&v8, v7); /*0x100522e85*/
  v4 = v8; /*0x100522e94*/
  v5 = v9; /*0x100522e98*/
  if ( v8 == 0x8000000000000000LL ) /*0x100522e9f*/
  {
    *a1 = 3; /*0x100522ea1*/
    a1[1] = v5; /*0x100522ea8*/
    if ( !v2 ) /*0x100522eaf*/
      return; /*0x100522eaf*/
    goto LABEL_5; /*0x100522eaf*/
  }
  a1[10] = v17; /*0x100522ed2*/
  a1[9] = v16; /*0x100522eda*/
  a1[8] = v15; /*0x100522ee2*/
  a1[7] = v14; /*0x100522eea*/
  a1[6] = v13; /*0x100522ef2*/
  a1[5] = v12; /*0x100522efa*/
  v6 = v10; /*0x100522efe*/
  a1[4] = v11; /*0x100522f06*/
  a1[3] = v6; /*0x100522f0a*/
  a1[1] = v4; /*0x100522f0e*/
  a1[2] = v5; /*0x100522f12*/
  *a1 = 10; /*0x100522f16*/
  if ( v2 ) /*0x100522f20*/
LABEL_5:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x100522eb1*/
}