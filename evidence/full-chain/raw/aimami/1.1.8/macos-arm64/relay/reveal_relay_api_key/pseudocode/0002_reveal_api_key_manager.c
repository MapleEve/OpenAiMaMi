// owner_va=0x1005c0ce0
// owner_symbol=codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::h7af825f0a90d84c9
// depth=1 from command owner (sole callee of 0x1004c48d0)
// size=0x2f1(753B) instructions=178 basic_blocks=38 caller_count=1 (dedicated -- only called by reveal_relay_api_key owner) callee_count=10
// behavior: mutex-guarded lazy OnceBox-init in-memory Vec<(String,String)>-like cache (232B stride entries) scanned via memcmp on providerId; on hit clones cached String and returns; on miss falls through to keychain::get_api_key

_QWORD *__fastcall codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::h7af825f0a90d84c9(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        size_t a4,
        double a5,
        double a6)
{
  __int64 v9; // r13
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // r12
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-A0h]
  __int64 v19; // [rsp+8h] [rbp-98h]
  _QWORD *v20; // [rsp+20h] [rbp-80h]
  signed __int64 v21; // [rsp+30h] [rbp-70h]
  _QWORD *v22; // [rsp+38h] [rbp-68h]
  _QWORD *v23; // [rsp+40h] [rbp-60h] BYREF
  signed __int64 v24; // [rsp+48h] [rbp-58h]
  __int64 v25; // [rsp+50h] [rbp-50h]
  __int64 v26; // [rsp+58h] [rbp-48h]
  __int64 v27; // [rsp+60h] [rbp-40h]
  _QWORD *v28; // [rsp+68h] [rbp-38h]
  int v29; // [rsp+74h] [rbp-2Ch]

  v20 = a2; /*0x1005c0cfa*/
  v9 = a2[1]; /*0x1005c0cfe*/
  v28 = (_QWORD *)(v9 + 16); /*0x1005c0d06*/
  v10 = *(_QWORD **)(v9 + 16); /*0x1005c0d0a*/
  if ( !v10 ) /*0x1005c0d11*/
    v10 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v28); /*0x1005c0f68*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005c0d21*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1005c0d36*/
  {
    v29 = 0; /*0x1005c0d3c*/
    if ( !*(_BYTE *)(v9 + 24) ) /*0x1005c0d43*/
      goto LABEL_5; /*0x1005c0d4a*/
LABEL_34:
    v23 = v28; /*0x1005c0f87*/
    LOBYTE(v24) = v29; /*0x1005c0f92*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005c0fb3*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      &v23,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_101534210);
  }
  v17 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, a5, a6); /*0x1005c0f70*/
  LOBYTE(v17) = v17 ^ 1; /*0x1005c0f75*/
  v29 = v17; /*0x1005c0f77*/
  if ( *(_BYTE *)(v9 + 24) ) /*0x1005c0f7a*/
    goto LABEL_34; /*0x1005c0f81*/
LABEL_5:
  v12 = *(_QWORD *)(v9 + 48); /*0x1005c0d50*/
  if ( !v12 ) /*0x1005c0d5b*/
  {
    v15 = 0x8000000000000000LL; /*0x1005c0df3*/
    if ( (_BYTE)v29 ) /*0x1005c0e01*/
      goto LABEL_17; /*0x1005c0e01*/
    goto LABEL_16; /*0x1005c0e01*/
  }
  v22 = a1; /*0x1005c0d61*/
  v13 = 232 * v12; /*0x1005c0d69*/
  v14 = *(_QWORD *)(v9 + 40) + 72LL; /*0x1005c0d70*/
  while ( 1 ) /*0x1005c0d90*/
  {
    if ( *(_QWORD *)(v14 - 56) == a4 ) /*0x1005c0d95*/
    {
      v10 = *(_QWORD **)(v14 - 64); /*0x1005c0d97*/
      a2 = a3; /*0x1005c0d9c*/
      if ( !memcmp(v10, a3, a4) ) /*0x1005c0da2*/
        break; /*0x1005c0da2*/
    }
    v14 += 232; /*0x1005c0d80*/
    v13 -= 232; /*0x1005c0d87*/
    if ( !v13 ) /*0x1005c0d8e*/
    {
      v15 = 0x8000000000000000LL; /*0x1005c0ddd*/
      a1 = v22; /*0x1005c0de7*/
      if ( !(_BYTE)v29 ) /*0x1005c0def*/
        goto LABEL_16; /*0x1005c0def*/
      goto LABEL_17; /*0x1005c0def*/
    }
  }
  v10 = &v23; /*0x1005c0dab*/
  a2 = (_QWORD *)v14; /*0x1005c0daf*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v23, v14); /*0x1005c0db2*/
  v15 = (unsigned __int64)v23; /*0x1005c0db7*/
  a1 = v22; /*0x1005c0dc8*/
  if ( v23 == (_QWORD *)0x8000000000000000LL ) /*0x1005c0dcc*/
  {
    v15 = 0x8000000000000000LL; /*0x1005c0dd2*/
    if ( !(_BYTE)v29 ) /*0x1005c0dd9*/
      goto LABEL_16; /*0x1005c0dd9*/
    goto LABEL_17; /*0x1005c0dd9*/
  }
  v10 = (_QWORD *)v24; /*0x1005c0eed*/
  if ( !v25 ) /*0x1005c0ef8*/
  {
    if ( v23 ) /*0x1005c0f2f*/
    {
      a2 = v23; /*0x1005c0f36*/
      a5 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x1005c0f39*/
    }
    v27 = 0; /*0x1005c0f3e*/
    v15 = 0x8000000000000000LL; /*0x1005c0f46*/
    if ( (_BYTE)v29 ) /*0x1005c0f54*/
      goto LABEL_17; /*0x1005c0f54*/
LABEL_16:
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x1005c0fba*/
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v10, a2, v11, a5, a6) )
    {
      *(_BYTE *)(v9 + 24) = 1; /*0x1005c0fc7*/
    }
    goto LABEL_17; /*0x1005c0fcc*/
  }
  v27 = v25; /*0x1005c0efa*/
  v21 = v24; /*0x1005c0efe*/
  if ( !(_BYTE)v29 ) /*0x1005c0f06*/
    goto LABEL_16; /*0x1005c0f06*/
LABEL_17:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v28, a2, v11, a5, a6); /*0x1005c0e17*/
  if ( v15 == 0x8000000000000000LL ) /*0x1005c0e30*/
  {
    codexmate_lib::core::relay::keychain::get_api_key::h8c18c83d5092fbfd(&v23, *v20 + 16LL, a3, a4); /*0x1005c0e47*/
    if ( (_BYTE)v23 ) /*0x1005c0e50*/
    {
      if ( v24 ) /*0x1005c0e59*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x1005c0e64*/
    }
    else
    {
      v18 = v25; /*0x1005c0e88*/
      v19 = v26; /*0x1005c0e93*/
      if ( v24 > (__int64)0x8000000000000001LL ) /*0x1005c0ea1*/
      {
        *a1 = v24; /*0x1005c0f11*/
        a1[1] = v18; /*0x1005c0f22*/
        a1[2] = v19; /*0x1005c0f26*/
        return a1; /*0x1005c0f2a*/
      }
    }
    *a1 = 0; /*0x1005c0ec4*/
    a1[1] = 1; /*0x1005c0ecb*/
    a1[2] = 0; /*0x1005c0ed3*/
  }
  else
  {
    *a1 = v15; /*0x1005c0e6b*/
    a1[1] = v21; /*0x1005c0e72*/
    a1[2] = v27; /*0x1005c0e7a*/
  }
  return a1; /*0x1005c0ede*/
}
