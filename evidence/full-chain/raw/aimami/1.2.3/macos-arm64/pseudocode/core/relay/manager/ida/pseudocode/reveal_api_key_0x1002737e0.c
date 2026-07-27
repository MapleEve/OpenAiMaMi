// __ZN13codexmate_lib4core5relay7manager12RelayManager14reveal_api_key @ 0x1002737e0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::hcbba2998261408cc(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        size_t a4)
{
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // r12
  int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-A0h]
  __int64 v18; // [rsp+8h] [rbp-98h]
  _QWORD *v19; // [rsp+20h] [rbp-80h]
  signed __int64 v20; // [rsp+30h] [rbp-70h]
  _QWORD *v21; // [rsp+38h] [rbp-68h]
  _QWORD *v22; // [rsp+40h] [rbp-60h] BYREF
  signed __int64 v23; // [rsp+48h] [rbp-58h]
  __int64 v24; // [rsp+50h] [rbp-50h]
  __int64 v25; // [rsp+58h] [rbp-48h]
  __int64 v26; // [rsp+60h] [rbp-40h]
  _QWORD *v27; // [rsp+68h] [rbp-38h]
  int v28; // [rsp+74h] [rbp-2Ch]

  v19 = a2; /*0x1002737fa*/
  v7 = a2[1]; /*0x1002737fe*/
  v27 = (_QWORD *)(v7 + 16); /*0x100273806*/
  v8 = *(_QWORD **)(v7 + 16); /*0x10027380a*/
  if ( !v8 ) /*0x100273811*/
    v8 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v27); /*0x100273a68*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v8); /*0x100273821*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x100273836*/
  {
    v28 = 0; /*0x10027383c*/
    if ( !*(_BYTE *)(v7 + 24) ) /*0x100273843*/
      goto LABEL_5; /*0x10027384a*/
LABEL_34:
    v22 = v27; /*0x100273a87*/
    LOBYTE(v23) = v28; /*0x100273a92*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DE2D6, 20, &v22, &off_10195E740, &off_10195DAF8); /*0x100273ab3*/
  }
  v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v10); /*0x100273a70*/
  LOBYTE(v16) = v16 ^ 1; /*0x100273a75*/
  v28 = v16; /*0x100273a77*/
  if ( *(_BYTE *)(v7 + 24) ) /*0x100273a7a*/
    goto LABEL_34; /*0x100273a81*/
LABEL_5:
  v11 = *(_QWORD *)(v7 + 48); /*0x100273850*/
  if ( !v11 ) /*0x10027385b*/
  {
    v14 = 0x8000000000000000LL; /*0x1002738f3*/
    if ( (_BYTE)v28 ) /*0x100273901*/
      goto LABEL_17; /*0x100273901*/
    goto LABEL_16; /*0x100273901*/
  }
  v21 = a1; /*0x100273861*/
  v12 = 232 * v11; /*0x100273869*/
  v13 = *(_QWORD *)(v7 + 40) + 72LL; /*0x100273870*/
  while ( 1 ) /*0x100273890*/
  {
    if ( *(_QWORD *)(v13 - 56) == a4 ) /*0x100273895*/
    {
      v8 = *(_QWORD **)(v13 - 64); /*0x100273897*/
      a2 = a3; /*0x10027389c*/
      if ( !memcmp(v8, a3, a4) ) /*0x1002738a2*/
        break; /*0x1002738a2*/
    }
    v13 += 232; /*0x100273880*/
    v12 -= 232; /*0x100273887*/
    if ( !v12 ) /*0x10027388e*/
    {
      v14 = 0x8000000000000000LL; /*0x1002738dd*/
      a1 = v21; /*0x1002738e7*/
      if ( !(_BYTE)v28 ) /*0x1002738ef*/
        goto LABEL_16; /*0x1002738ef*/
      goto LABEL_17; /*0x1002738ef*/
    }
  }
  v8 = &v22; /*0x1002738ab*/
  a2 = (_QWORD *)v13; /*0x1002738af*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v22, v13); /*0x1002738b2*/
  v14 = (unsigned __int64)v22; /*0x1002738b7*/
  a1 = v21; /*0x1002738c8*/
  if ( v22 == (_QWORD *)0x8000000000000000LL ) /*0x1002738cc*/
  {
    v14 = 0x8000000000000000LL; /*0x1002738d2*/
    if ( !(_BYTE)v28 ) /*0x1002738d9*/
      goto LABEL_16; /*0x1002738d9*/
    goto LABEL_17; /*0x1002738d9*/
  }
  v8 = (_QWORD *)v23; /*0x1002739ed*/
  if ( !v24 ) /*0x1002739f8*/
  {
    if ( v22 ) /*0x100273a2f*/
    {
      a2 = v22; /*0x100273a36*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100273a39*/
    }
    v26 = 0; /*0x100273a3e*/
    v14 = 0x8000000000000000LL; /*0x100273a46*/
    if ( (_BYTE)v28 ) /*0x100273a54*/
      goto LABEL_17; /*0x100273a54*/
LABEL_16:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x100273aba*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8, a2, v9, v10) )
    {
      *(_BYTE *)(v7 + 24) = 1; /*0x100273ac7*/
    }
    goto LABEL_17; /*0x100273acc*/
  }
  v26 = v24; /*0x1002739fa*/
  v20 = v23; /*0x1002739fe*/
  if ( !(_BYTE)v28 ) /*0x100273a06*/
    goto LABEL_16; /*0x100273a06*/
LABEL_17:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v27); /*0x100273917*/
  if ( v14 == 0x8000000000000000LL ) /*0x100273930*/
  {
    codexmate_lib::core::relay::keychain::get_api_key::hc52a6eafd9a74e53(&v22, *v19 + 16LL, a3, a4); /*0x100273947*/
    if ( (_BYTE)v22 ) /*0x100273950*/
    {
      if ( v23 ) /*0x100273959*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100273964*/
    }
    else
    {
      v17 = v24; /*0x100273988*/
      v18 = v25; /*0x100273993*/
      if ( v23 > (__int64)0x8000000000000001LL ) /*0x1002739a1*/
      {
        *a1 = v23; /*0x100273a11*/
        a1[1] = v17; /*0x100273a22*/
        a1[2] = v18; /*0x100273a26*/
        return a1; /*0x100273a2a*/
      }
    }
    *a1 = 0; /*0x1002739c4*/
    a1[1] = 1; /*0x1002739cb*/
    a1[2] = 0; /*0x1002739d3*/
  }
  else
  {
    *a1 = v14; /*0x10027396b*/
    a1[1] = v20; /*0x100273972*/
    a1[2] = v26; /*0x10027397a*/
  }
  return a1; /*0x1002739de*/
}