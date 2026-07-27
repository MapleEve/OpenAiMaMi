// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream14with_tool_maps @ 0x100a8e8e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::with_tool_maps::h5275ed9507ab0ed7(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // r12
  __int64 v12; // r14
  void *v13; // rsi
  unsigned int v14; // r12d
  int v15; // ebx
  int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  signed __int64 v27; // rsi
  _QWORD v29[2]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v30[2]; // [rsp+18h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-98h]
  __int64 v32; // [rsp+30h] [rbp-90h]
  _QWORD *v33; // [rsp+38h] [rbp-88h]
  __int64 v34; // [rsp+40h] [rbp-80h]
  __int64 (__fastcall **v35)(); // [rsp+48h] [rbp-78h]
  _QWORD *v36; // [rsp+50h] [rbp-70h] BYREF
  __int64 v37; // [rsp+58h] [rbp-68h]
  unsigned __int64 v38; // [rsp+60h] [rbp-60h]
  _QWORD *v39; // [rsp+68h] [rbp-58h]
  _QWORD *v40; // [rsp+70h] [rbp-50h]
  _QWORD *v41; // [rsp+78h] [rbp-48h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+80h] [rbp-40h]
  __int64 v43; // [rsp+88h] [rbp-38h]
  signed __int64 v44; // [rsp+90h] [rbp-30h]

  v33 = a4; /*0x100a8e8f7*/
  if ( a3 < 0 ) /*0x100a8e904*/
  {
    v7 = 0; /*0x100a8e906*/
    goto LABEL_3; /*0x100a8e906*/
  }
  if ( a3 ) /*0x100a8e91c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a8e921*/
    v7 = 1; /*0x100a8e926*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100a8e934*/
    if ( !v9 ) /*0x100a8e93c*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, a3); /*0x100a8e909*/
    v10 = v9; /*0x100a8e93e*/
  }
  else
  {
    v10 = 1; /*0x100a8e946*/
  }
  v34 = v10; /*0x100a8e94b*/
  memcpy((void *)v10, a2, a3); /*0x100a8e952*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v41); /*0x100a8e95b*/
  v29[1] = v42; /*0x100a8e968*/
  v29[0] = v41; /*0x100a8e96f*/
  v36 = nullptr; /*0x100a8e976*/
  v37 = 1; /*0x100a8e97e*/
  v38 = 0; /*0x100a8e986*/
  v43 = 1610612768; /*0x100a8e98e*/
  v41 = &v36; /*0x100a8e99a*/
  v42 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a8e9a5*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v29, &v41) ) /*0x100a8e9b4*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a8ecfa*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v30,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v44 = a3; /*0x100a8e9c1*/
  v11 = v36; /*0x100a8e9c5*/
  v12 = v37; /*0x100a8e9c9*/
  if ( v38 <= 0x10 ) /*0x100a8e9d5*/
  {
    if ( v38 != 16 ) /*0x100a8e9f9*/
LABEL_11:
      core::str::slice_error_fail::h480e51fbd8b15eba(v37, v38, 0, 16, &off_1019741A8); /*0x100a8e9de*/
  }
  else if ( *(char *)(v37 + 16) < -64 ) /*0x100a8e9dc*/
  {
    goto LABEL_11; /*0x100a8e9dc*/
  }
  v30[0] = v37; /*0x100a8e9fb*/
  v30[1] = 16; /*0x100a8ea02*/
  v36 = v30; /*0x100a8ea14*/
  v37 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a8ea1f*/
  v13 = &unk_1017C5D36; /*0x100a8ea23*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41, &unk_1017C5D36, &v36); /*0x100a8ea32*/
  if ( v11 ) /*0x100a8ea3a*/
  {
    v13 = v11; /*0x100a8ea44*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v11, 1); /*0x100a8ea47*/
  }
  v40 = a5; /*0x100a8ea4c*/
  v39 = v41; /*0x100a8ea54*/
  v31 = v43; /*0x100a8ea60*/
  v35 = v42; /*0x100a8ea6b*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v41); /*0x100a8ea6f*/
  v14 = (unsigned int)v41; /*0x100a8ea74*/
  v15 = ((int)v41 >> 13) - 1; /*0x100a8ea7e*/
  v16 = 0; /*0x100a8ea81*/
  if ( (int)v41 >> 13 <= 0 ) /*0x100a8ea86*/
  {
    v17 = (1 - ((int)v41 >> 13)) / 0x190u + 1; /*0x100a8ea9a*/
    v15 += 400 * v17; /*0x100a8eaa2*/
    v16 = -146097 * v17; /*0x100a8eaa4*/
  }
  v32 = HIDWORD(v41); /*0x100a8eaae*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100a8eabc*/
  v21 = v18; /*0x100a8eabe*/
  if ( *(_BYTE *)(v18 + 16) == 1 ) /*0x100a8eac5*/
  {
    v22 = *(_QWORD *)v18; /*0x100a8eacb*/
    v23 = *(_QWORD *)(v21 + 8); /*0x100a8eace*/
  }
  else
  {
    v22 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100a8ed01*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v13,
            v19,
            v20);
    *(_QWORD *)v21 = v22; /*0x100a8ed06*/
    *(_QWORD *)(v21 + 8) = v23; /*0x100a8ed09*/
    *(_BYTE *)(v21 + 16) = 1; /*0x100a8ed0d*/
  }
  *(_QWORD *)v21 = v22 + 1; /*0x100a8ead6*/
  v24 = v32 /*0x100a8eb22*/
      + 86400LL * (int)(((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((v14 >> 4) & 0x1FF) - v15 / 100 - 719163);
  v25 = v33; /*0x100a8eb29*/
  *(_QWORD *)(a1 + 344) = v33[5]; /*0x100a8eb34*/
  *(_QWORD *)(a1 + 336) = v25[4]; /*0x100a8eb3f*/
  *(_QWORD *)(a1 + 328) = v25[3]; /*0x100a8eb4a*/
  *(_QWORD *)(a1 + 320) = v25[2]; /*0x100a8eb55*/
  *(_QWORD *)(a1 + 312) = v25[1]; /*0x100a8eb60*/
  *(_QWORD *)(a1 + 304) = *v25; /*0x100a8eb6a*/
  v26 = v40; /*0x100a8eb71*/
  *(_QWORD *)(a1 + 352) = *v40; /*0x100a8eb78*/
  *(_QWORD *)(a1 + 360) = v26[1]; /*0x100a8eb83*/
  *(_QWORD *)(a1 + 368) = v26[2]; /*0x100a8eb8e*/
  *(_QWORD *)(a1 + 376) = v26[3]; /*0x100a8eb99*/
  *(_QWORD *)(a1 + 384) = v26[4]; /*0x100a8eba4*/
  *(_QWORD *)(a1 + 392) = v26[5]; /*0x100a8ebaf*/
  v27 = v44; /*0x100a8ebb6*/
  *(_QWORD *)(a1 + 16) = v44; /*0x100a8ebba*/
  *(_QWORD *)(a1 + 24) = v34; /*0x100a8ebc2*/
  *(_QWORD *)(a1 + 32) = v27; /*0x100a8ebc6*/
  *(_QWORD *)(a1 + 40) = v39; /*0x100a8ebce*/
  *(_QWORD *)(a1 + 48) = v35; /*0x100a8ebd6*/
  *(_QWORD *)(a1 + 56) = v31; /*0x100a8ebe1*/
  *(_QWORD *)(a1 + 400) = v24; /*0x100a8ebe5*/
  *(_BYTE *)(a1 + 428) = 0; /*0x100a8ebec*/
  *(_QWORD *)(a1 + 120) = 0x8000000000000000LL; /*0x100a8ebfe*/
  *(_QWORD *)(a1 + 176) = 0x8000000000000000LL; /*0x100a8ec02*/
  *(_QWORD *)(a1 + 256) = &xmmword_1015FBEC0; /*0x100a8ec10*/
  *(_QWORD *)(a1 + 264) = 0; /*0x100a8ec1e*/
  *(_QWORD *)(a1 + 272) = 0; /*0x100a8ec2c*/
  *(_QWORD *)(a1 + 280) = 0; /*0x100a8ec3a*/
  *(_QWORD *)(a1 + 288) = v22; /*0x100a8ec41*/
  *(_QWORD *)(a1 + 296) = v23; /*0x100a8ec48*/
  *(_DWORD *)(a1 + 424) = 0; /*0x100a8ec4f*/
  *(_BYTE *)(a1 + 429) = 0; /*0x100a8ec5a*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100a8ec62*/
  *(_QWORD *)(a1 + 72) = 8; /*0x100a8ec6a*/
  *(_QWORD *)(a1 + 88) = 0; /*0x100a8ec72*/
  *(_QWORD *)(a1 + 80) = 0; /*0x100a8ec7a*/
  *(_QWORD *)(a1 + 96) = 1; /*0x100a8ec82*/
  *(_QWORD *)(a1 + 104) = 0; /*0x100a8ec8a*/
  *(_BYTE *)(a1 + 112) = 0; /*0x100a8ec92*/
  *(_QWORD *)(a1 + 232) = 0x8000000000000000LL; /*0x100a8ec97*/
  *(_QWORD *)a1 = 0; /*0x100a8ec9e*/
  *(_BYTE *)(a1 + 430) = 0; /*0x100a8eca6*/
  *(_QWORD *)(a1 + 416) = 0; /*0x100a8ecae*/
  *(_QWORD *)(a1 + 408) = 0; /*0x100a8ecb9*/
  return a1; /*0x100a8ecc7*/
}