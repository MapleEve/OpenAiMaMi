// __ZN13codexmate_lib4core10repository10Repository13load_registry @ 0x100a56040 | 基线 same-set
double __fastcall codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  double result; // xmm0_8
  __int64 v8; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+8h] [rbp-98h]
  _QWORD v10[9]; // [rsp+10h] [rbp-90h] BYREF
  _QWORD v11[9]; // [rsp+58h] [rbp-48h] BYREF

  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v8, a2, a3); /*0x100a5605a*/
  v3 = v8; /*0x100a5605f*/
  v4 = v9; /*0x100a56066*/
  if ( __OFSUB__(-v8, 1) ) /*0x100a56070*/
  {
    *a1 = 2; /*0x100a56075*/
    a1[1] = v4; /*0x100a5607c*/
    return result; /*0x100a56080*/
  }
  v11[0] = v9; /*0x100a5608c*/
  v11[1] = v10[0]; /*0x100a56090*/
  v11[2] = 0; /*0x100a56094*/
  v11[3] = 0; /*0x100a5609c*/
  v11[4] = v9; /*0x100a560a4*/
  v11[5] = v10[0]; /*0x100a560a8*/
  serde_json::de::from_trait::hc9ad9bbbdeab4357(&v8, v11); /*0x100a560b7*/
  v5 = v8; /*0x100a560c6*/
  v6 = v9; /*0x100a560cd*/
  if ( v8 != 0x8000000000000000LL ) /*0x100a560d7*/
  {
    qmemcpy(a1 + 3, v10, 0x48u); /*0x100a560fb*/
    a1[1] = v5; /*0x100a560fe*/
    a1[2] = v6; /*0x100a56102*/
    *a1 = 11; /*0x100a56106*/
    if ( !v3 ) /*0x100a56110*/
      return result; /*0x100a56110*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x100a56110*/
  }
  *a1 = 3; /*0x100a560d9*/
  a1[1] = v6; /*0x100a560e0*/
  if ( v3 ) /*0x100a560e7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x100a56112*/
  return result; /*0x100a56122*/
}