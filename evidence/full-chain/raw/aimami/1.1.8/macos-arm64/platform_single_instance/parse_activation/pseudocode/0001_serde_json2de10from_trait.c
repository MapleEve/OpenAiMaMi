// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x10050f8b0 depth=1
// serde_json2de10from_trait
_QWORD *__fastcall serde_json::de::from_trait::h610526fee2614dd6(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  void *v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v11[3]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v12[3]; // [rsp+18h] [rbp-78h] BYREF
  __int64 v13; // [rsp+30h] [rbp-60h]
  unsigned __int64 v14; // [rsp+38h] [rbp-58h]
  unsigned __int64 v15; // [rsp+40h] [rbp-50h]
  __int64 v16; // [rsp+48h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-40h]
  __int64 v18; // [rsp+58h] [rbp-38h]
  char v19; // [rsp+60h] [rbp-30h]

  v18 = a2[5]; /*0x10050f8c8*/
  v17 = a2[4]; /*0x10050f8d0*/
  v16 = a2[3]; /*0x10050f8d8*/
  v15 = a2[2]; /*0x10050f8e0*/
  v3 = *a2; /*0x10050f8e4*/
  v14 = a2[1]; /*0x10050f8eb*/
  v13 = v3; /*0x10050f8ef*/
  v12[0] = 0; /*0x10050f8f3*/
  v12[1] = 1; /*0x10050f8fb*/
  v12[2] = 0; /*0x10050f903*/
  v19 = 0x80; /*0x10050f90b*/
  _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_struct::h15e5648e3a233762( /*0x10050f913*/
    a1,
    v12);
  if ( !__OFSUB__(0, *a1) && v15 < v14 ) /*0x10050f92a*/
  {
    v4 = *a1; /*0x10050f92c*/
    v5 = a1[3]; /*0x10050f933*/
    v6 = v15 + 1; /*0x10050f942*/
    v7 = &loc_100002600; /*0x10050f945*/
    while ( 1 ) /*0x10050f950*/
    {
      v8 = *(unsigned __int8 *)(v13 + v6 - 1); /*0x10050f950*/
      if ( v8 > 0x20 || !_bittest64((const __int64 *)&v7, v8) ) /*0x10050f95b*/
        break; /*0x10050f95b*/
      v15 = v6; /*0x10050f961*/
      v9 = v6 - v14 + 1; /*0x10050f965*/
      ++v6; /*0x10050f96a*/
      if ( v9 == 1 ) /*0x10050f971*/
        goto LABEL_7; /*0x10050f971*/
    }
    v11[0] = 22; /*0x10050f99c*/
    a1[1] = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v12, v11, v13); /*0x10050f9b7*/
    *a1 = 0x8000000000000000LL; /*0x10050f9c5*/
    if ( v4 ) /*0x10050f9cb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050f9d8*/
    if ( 2 * v5 ) /*0x10050f9dd*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050f9f5*/
  }
LABEL_7:
  if ( v12[0] ) /*0x10050f97a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050f985*/
  return a1; /*0x10050f98d*/
}