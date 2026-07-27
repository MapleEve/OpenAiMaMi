// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream18with_tool_name_map @ 0x100ac11b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_name_map::hd264e5c42fa9ed78(
        __int64 a1,
        const void *a2,
        signed __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // r15
  __int64 v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // r13
  void *v11; // rsi
  unsigned int v12; // r15d
  int v13; // ebx
  int v14; // r14d
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  signed __int64 v24; // rsi
  _QWORD v26[13]; // [rsp+8h] [rbp-118h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-B0h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-90h]
  __int64 v30; // [rsp+98h] [rbp-88h]
  __int64 v31; // [rsp+A0h] [rbp-80h]
  __int64 (__fastcall **v32)(); // [rsp+A8h] [rbp-78h]
  _QWORD *v33; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-68h]
  unsigned __int64 v35; // [rsp+C0h] [rbp-60h]
  _QWORD *v36; // [rsp+C8h] [rbp-58h]
  _QWORD *v37; // [rsp+D0h] [rbp-50h]
  _QWORD *v38; // [rsp+D8h] [rbp-48h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+E0h] [rbp-40h]
  __int64 v40; // [rsp+E8h] [rbp-38h]
  signed __int64 v41; // [rsp+F0h] [rbp-30h]

  if ( a3 < 0 ) /*0x100ac11cd*/
  {
    v6 = 0; /*0x100ac11cf*/
    goto LABEL_3; /*0x100ac11cf*/
  }
  if ( a3 ) /*0x100ac11e5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ac11ea*/
    v6 = 1; /*0x100ac11ef*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100ac11fd*/
    if ( !v8 ) /*0x100ac1205*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a3); /*0x100ac11d2*/
  }
  else
  {
    v8 = 1; /*0x100ac120c*/
  }
  v31 = v8; /*0x100ac121b*/
  memcpy((void *)v8, a2, a3); /*0x100ac1225*/
  v26[0] = 0x8000000000000000LL; /*0x100ac122a*/
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v38); /*0x100ac1235*/
  v27[1] = v39; /*0x100ac1242*/
  v27[0] = v38; /*0x100ac1249*/
  v33 = nullptr; /*0x100ac1250*/
  v34 = 1; /*0x100ac1258*/
  v35 = 0; /*0x100ac1260*/
  v40 = 1610612768; /*0x100ac1268*/
  v38 = &v33; /*0x100ac1274*/
  v39 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ac127f*/
  if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd(v27, &v38) ) /*0x100ac128e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ac1593*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v28,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v41 = a3; /*0x100ac129b*/
  v9 = v33; /*0x100ac129f*/
  v10 = v34; /*0x100ac12a3*/
  if ( v35 <= 0x10 ) /*0x100ac12af*/
  {
    if ( v35 != 16 ) /*0x100ac12d3*/
LABEL_11:
      core::str::slice_error_fail::h480e51fbd8b15eba(v34, v35, 0, 16, &off_101974728); /*0x100ac12b8*/
  }
  else if ( *(char *)(v34 + 16) < -64 ) /*0x100ac12b6*/
  {
    goto LABEL_11; /*0x100ac12b6*/
  }
  v28[0] = v34; /*0x100ac12d5*/
  v28[1] = 16; /*0x100ac12dc*/
  v33 = v28; /*0x100ac12ee*/
  v34 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac12f9*/
  v11 = &unk_1017C5D36; /*0x100ac12fd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017C5D36, &v33); /*0x100ac130c*/
  if ( v9 ) /*0x100ac1314*/
  {
    v11 = v9; /*0x100ac131e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100ac1321*/
  }
  v37 = a4; /*0x100ac1326*/
  v36 = v38; /*0x100ac132e*/
  v29 = v40; /*0x100ac133a*/
  v32 = v39; /*0x100ac1345*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v38); /*0x100ac1349*/
  v12 = (unsigned int)v38; /*0x100ac134e*/
  v13 = ((int)v38 >> 13) - 1; /*0x100ac1358*/
  v14 = 0; /*0x100ac135b*/
  if ( (int)v38 >> 13 <= 0 ) /*0x100ac1360*/
  {
    v15 = (1 - ((int)v38 >> 13)) / 0x190u + 1; /*0x100ac1374*/
    v13 += 400 * v15; /*0x100ac137c*/
    v14 = -146097 * v15; /*0x100ac137e*/
  }
  v30 = HIDWORD(v38); /*0x100ac1388*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100ac1396*/
  v19 = v16; /*0x100ac1398*/
  if ( *(_BYTE *)(v16 + 16) == 1 ) /*0x100ac139f*/
  {
    v20 = *(_QWORD *)v16; /*0x100ac13a5*/
    v21 = *(_QWORD *)(v19 + 8); /*0x100ac13a9*/
  }
  else
  {
    v20 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100ac159a*/
            &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
            v11,
            v17,
            v18);
    *(_QWORD *)v19 = v20; /*0x100ac159f*/
    *(_QWORD *)(v19 + 8) = v21; /*0x100ac15a3*/
    *(_BYTE *)(v19 + 16) = 1; /*0x100ac15a7*/
  }
  *(_QWORD *)v19 = v20 + 1; /*0x100ac13b1*/
  v22 = v30 /*0x100ac13fe*/
      + 86400LL * (int)(((v13 / 100) >> 2) + ((1461 * v13) >> 2) + v14 + ((v12 >> 4) & 0x1FF) - v13 / 100 - 719163);
  v23 = v37; /*0x100ac1405*/
  *(_QWORD *)(a1 + 320) = v37[5]; /*0x100ac140d*/
  *(_QWORD *)(a1 + 312) = v23[4]; /*0x100ac1419*/
  *(_QWORD *)(a1 + 304) = v23[3]; /*0x100ac1425*/
  *(_QWORD *)(a1 + 296) = v23[2]; /*0x100ac1431*/
  *(_QWORD *)(a1 + 288) = v23[1]; /*0x100ac143d*/
  *(_QWORD *)(a1 + 280) = *v23; /*0x100ac1448*/
  v24 = v41; /*0x100ac1450*/
  *(_QWORD *)a1 = v41; /*0x100ac1454*/
  *(_QWORD *)(a1 + 8) = v31; /*0x100ac145c*/
  *(_QWORD *)(a1 + 16) = v24; /*0x100ac1461*/
  *(_QWORD *)(a1 + 24) = v36; /*0x100ac146a*/
  *(_QWORD *)(a1 + 32) = v32; /*0x100ac1473*/
  *(_QWORD *)(a1 + 40) = v29; /*0x100ac147f*/
  *(_QWORD *)(a1 + 328) = v22; /*0x100ac1484*/
  *(_BYTE *)(a1 + 364) = 0; /*0x100ac148c*/
  qmemcpy((void *)(a1 + 72), v26, 0x68u); /*0x100ac14a6*/
  *(_QWORD *)(a1 + 176) = 0x8000000000000000LL; /*0x100ac14b3*/
  *(_QWORD *)(a1 + 232) = &xmmword_1015FBEC0; /*0x100ac14c2*/
  *(_QWORD *)(a1 + 240) = 0; /*0x100ac14d1*/
  *(_QWORD *)(a1 + 248) = 0; /*0x100ac14e0*/
  *(_QWORD *)(a1 + 256) = 0; /*0x100ac14ef*/
  *(_QWORD *)(a1 + 264) = v20; /*0x100ac14f7*/
  *(_QWORD *)(a1 + 272) = v21; /*0x100ac14ff*/
  *(_DWORD *)(a1 + 360) = 0; /*0x100ac1507*/
  *(_WORD *)(a1 + 365) = 0; /*0x100ac1513*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100ac151e*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100ac1527*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100ac1530*/
  *(_QWORD *)(a1 + 336) = 0; /*0x100ac1539*/
  *(_QWORD *)(a1 + 344) = 0; /*0x100ac1545*/
  *(_QWORD *)(a1 + 352) = 0; /*0x100ac1551*/
  return a1; /*0x100ac1560*/
}