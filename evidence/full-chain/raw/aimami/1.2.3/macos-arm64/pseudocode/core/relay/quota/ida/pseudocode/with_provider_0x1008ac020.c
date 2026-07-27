// __ZN13codexmate_lib4core5relay5quota10QuotaDraft13with_provider @ 0x1008ac020 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::QuotaDraft::with_provider::h9a918864a5a2ed2a(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  signed __int64 v6; // r14
  __int64 v7; // r15
  const void *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  signed __int64 v11; // r13
  __int64 v12; // r15
  const void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v23[5]; // [rsp+0h] [rbp-70h] BYREF
  const void *v24; // [rsp+28h] [rbp-48h]
  _DWORD v25[3]; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]

  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v23, a3); /*0x1008ac03e*/
  v6 = a2[4]; /*0x1008ac043*/
  if ( v6 < 0 ) /*0x1008ac04a*/
  {
    v7 = 0; /*0x1008ac04c*/
    goto LABEL_3; /*0x1008ac04c*/
  }
  v8 = (const void *)a2[3]; /*0x1008ac05c*/
  if ( v6 ) /*0x1008ac060*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, a3); /*0x1008ac062*/
    v7 = 1; /*0x1008ac067*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x1008ac075*/
    if ( !v9 ) /*0x1008ac07d*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x1008ac04f*/
    v10 = v9; /*0x1008ac07f*/
  }
  else
  {
    v10 = 1; /*0x1008ac084*/
  }
  v26 = v10; /*0x1008ac089*/
  memcpy((void *)v10, v8, v6); /*0x1008ac093*/
  v23[3] = *a2; /*0x1008ac09b*/
  v23[4] = a2[1]; /*0x1008ac0a3*/
  v11 = a2[6]; /*0x1008ac0a7*/
  if ( v11 < 0 ) /*0x1008ac0ae*/
  {
    v12 = 0; /*0x1008ac0b0*/
    goto LABEL_10; /*0x1008ac0b0*/
  }
  v13 = (const void *)a2[5]; /*0x1008ac0c0*/
  if ( v11 ) /*0x1008ac0c4*/
  {
    v24 = (const void *)a2[5]; /*0x1008ac0c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v13); /*0x1008ac0ca*/
    v12 = 1; /*0x1008ac0cf*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x1008ac0dd*/
    if ( !v14 ) /*0x1008ac0e5*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x1008ac0b3*/
    v15 = v14; /*0x1008ac0e7*/
    v13 = v24; /*0x1008ac0ea*/
  }
  else
  {
    v15 = 1; /*0x1008ac0f0*/
  }
  memcpy((void *)v15, v13, v11); /*0x1008ac0fc*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v25); /*0x1008ac105*/
  v16 = (v25[0] >> 13) - 1; /*0x1008ac112*/
  v17 = 0; /*0x1008ac115*/
  if ( v25[0] >> 13 <= 0 ) /*0x1008ac119*/
  {
    v18 = (1 - (v25[0] >> 13)) / 0x190u + 1; /*0x1008ac12d*/
    v16 += 400 * v18; /*0x1008ac135*/
    v17 = -146097 * v18; /*0x1008ac137*/
  }
  v19 = 1000 /*0x1008ac199*/
      * (v25[1]
       + 86400LL * (((v16 / 100) >> 2) + ((1461 * v16) >> 2) + v17 + ((v25[0] >> 4) & 0x1FF) - v16 / 100 - 719163))
      + v25[2] / 0xF4240uLL;
  *(_QWORD *)(a1 + 16) = v23[2]; /*0x1008ac1a0*/
  v20 = v23[0]; /*0x1008ac1a5*/
  *(_QWORD *)(a1 + 8) = v23[1]; /*0x1008ac1ad*/
  *(_QWORD *)a1 = v20; /*0x1008ac1b2*/
  *(_QWORD *)(a1 + 24) = v6; /*0x1008ac1b6*/
  *(_QWORD *)(a1 + 32) = v26; /*0x1008ac1bf*/
  *(_QWORD *)(a1 + 40) = v6; /*0x1008ac1c4*/
  *(_BYTE *)(a1 + 128) = 0; /*0x1008ac1c9*/
  *(_QWORD *)(a1 + 88) = a2[2]; /*0x1008ac1d6*/
  v21 = *a2; /*0x1008ac1db*/
  *(_QWORD *)(a1 + 80) = a2[1]; /*0x1008ac1e2*/
  *(_QWORD *)(a1 + 72) = v21; /*0x1008ac1e7*/
  *(_QWORD *)(a1 + 48) = v11; /*0x1008ac1ec*/
  *(_QWORD *)(a1 + 56) = v15; /*0x1008ac1f1*/
  *(_QWORD *)(a1 + 64) = v11; /*0x1008ac1f6*/
  *(_QWORD *)(a1 + 120) = v19; /*0x1008ac1fb*/
  *(_QWORD *)(a1 + 96) = 0x8000000000000000LL; /*0x1008ac20a*/
  return a1; /*0x1008ac212*/
}