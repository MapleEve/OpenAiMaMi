// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::wire_name::h406181e9d0fd38d9; addr: 0x1007f6300; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
double __fastcall codexmate_lib::core::relay::translator::anthropic_tools::AnthropicToolMap::wire_name::h406181e9d0fd38d9(
        size_t *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        size_t a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r12
  bool v10; // r13
  unsigned __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r12
  __int64 i; // rax
  int v15; // ecx
  size_t *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i *v22; // rbx
  __int64 v23; // rsi
  __m128i *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  __m128i *v29; // r14
  __int64 v30; // r15
  double result; // xmm0_8
  _QWORD v32[2]; // [rsp+0h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+10h] [rbp-90h] BYREF
  size_t *v34; // [rsp+28h] [rbp-78h]
  __int64 v35; // [rsp+30h] [rbp-70h]
  __int64 v36; // [rsp+38h] [rbp-68h]
  __m128i v37; // [rsp+40h] [rbp-60h] BYREF
  __int64 v38; // [rsp+50h] [rbp-50h]
  __int64 (__fastcall *v39)(); // [rsp+58h] [rbp-48h]
  __m128i *v40; // [rsp+60h] [rbp-40h] BYREF
  __int64 v41; // [rsp+68h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-30h]

  v35 = a6; /*0x1007f6311*/
  if ( a2 == 0 || a3 == 0 ) /*0x1007f6324*/
  {
    v9 = 0; /*0x1007f632b*/
    v10 = 1; /*0x1007f6331*/
    if ( a5 > 0x40 ) /*0x1007f6339*/
      goto LABEL_21; /*0x1007f6339*/
  }
  else
  {
    v9 = a2; /*0x1007f6340*/
    if ( a3 != 9 ) /*0x1007f6347*/
    {
      v36 = a3; /*0x1007f636a*/
      v10 = 0; /*0x1007f636e*/
      goto LABEL_38; /*0x1007f6371*/
    }
    v11 = _byteswap_uint64(*(_QWORD *)a2); /*0x1007f6357*/
    if ( v11 == 0x66756E6374696F6ELL ) /*0x1007f635d*/
      v12 = *(unsigned __int8 *)(a2 + 8) - 115; /*0x1007f6365*/
    else
      v12 = 2 * (v11 >= 0x66756E6374696F6ELL) - 1; /*0x1007f637c*/
    if ( !v12 ) /*0x1007f6384*/
      v9 = 0; /*0x1007f6384*/
    v10 = v9 == 0; /*0x1007f638b*/
    if ( a5 > 0x40 ) /*0x1007f6393*/
      goto LABEL_21; /*0x1007f6393*/
  }
  if ( v9 ) /*0x1007f6398*/
  {
LABEL_21:
    v36 = 9; /*0x1007f63f1*/
    goto LABEL_38; /*0x1007f63fa*/
  }
  v13 = 1; /*0x1007f639a*/
  if ( !a5 ) /*0x1007f63a3*/
  {
    v16 = a1; /*0x1007f646e*/
LABEL_33:
    memcpy((void *)v13, a4, a5); /*0x1007f64b5*/
    *v16 = a5; /*0x1007f64c3*/
    v16[1] = v13; /*0x1007f64c6*/
    v16[2] = a5; /*0x1007f64ca*/
    return result; /*0x1007f64ce*/
  }
  v36 = 9; /*0x1007f63ae*/
  for ( i = 0; i != a5; ++i ) /*0x1007f63b2*/
  {
    v15 = *((unsigned __int8 *)a4 + i); /*0x1007f63c8*/
    if ( (unsigned __int8)(v15 - 48) >= 0xAu && (unsigned __int8)((v15 & 0xDF) - 65) >= 0x1Au && v15 != 95 && v15 != 45 ) /*0x1007f63ea*/
      goto LABEL_37; /*0x1007f63ea*/
  }
  if ( a5 >= 0xC ) /*0x1007f6403*/
  {
    if ( *a4 ^ 0x745F696D616D6961LL | *((unsigned int *)a4 + 2) ^ 0x5F6C6F6FLL ) /*0x1007f648b*/
    {
LABEL_31:
      v16 = a1; /*0x1007f6494*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1007f6497*/
      v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x1007f64a4*/
      if ( !v17 ) /*0x1007f64ac*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a5); /*0x1007f683d*/
      v13 = v17; /*0x1007f64b2*/
      goto LABEL_33; /*0x1007f64b2*/
    }
  }
  else if ( a5 == 10 ) /*0x1007f6415*/
  {
    if ( *a4 ^ 0x726165735F626577LL | *((unsigned __int16 *)a4 + 4) ^ 0x6863LL /*0x1007f6510*/
      || a7 == 10 && !(*(_QWORD *)v35 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v35 + 8) ^ 0x6863LL) )
    {
      goto LABEL_31; /*0x1007f6513*/
    }
  }
  else if ( a5 != 11 /*0x1007f6463*/
         || *a4 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)((char *)a4 + 3) ^ 0x6863726165735F6CLL
         || a7 == 11 && !(*(_QWORD *)v35 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(v35 + 3) ^ 0x6863726165735F6CLL) )
  {
    goto LABEL_31; /*0x1007f6466*/
  }
LABEL_37:
  v10 = 1; /*0x1007f6519*/
  v9 = 0; /*0x1007f651c*/
LABEL_38:
  v34 = a1; /*0x1007f651f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1007f6523*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1007f6532*/
  if ( !v18 ) /*0x1007f653a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1007f6830*/
  v37.i64[0] = 128; /*0x1007f6540*/
  v37.i64[1] = v18; /*0x1007f6548*/
  v19 = &v37; /*0x1007f654c*/
  v40 = &v37; /*0x1007f6550*/
  *(_BYTE *)v18 = 91; /*0x1007f6554*/
  v38 = 1; /*0x1007f6557*/
  if ( v10 ) /*0x1007f6562*/
  {
    *(_DWORD *)(v18 + 1) = 1819047278; /*0x1007f6564*/
    v38 = 5; /*0x1007f656b*/
    v20 = 5; /*0x1007f6573*/
  }
  else
  {
    v21 = serde_json::ser::format_escaped_str::h5e062135eb5a0baf(&v40, &v41, v9, v36); /*0x1007f6589*/
    if ( v21 ) /*0x1007f6591*/
    {
LABEL_60:
      v27 = serde_json::error::Error::io::h4df820d482c0c826(v21); /*0x1007f6778*/
      if ( v37.i64[0] ) /*0x1007f678a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37.i64[1], v37.i64[0], 1); /*0x1007f6795*/
LABEL_62:
      v37.i64[0] = v27; /*0x1007f679a*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1018CBB17, 23, &v37, &off_101C03980, &off_101C01DB0); /*0x1007f67bc*/
    }
    v19 = v40; /*0x1007f6597*/
    v20 = v40[1].i64[0]; /*0x1007f659e*/
    if ( v40->i64[0] == v20 ) /*0x1007f65a5*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v40, v40->i64[0], 1, 1, 1); /*0x1007f67d6*/
      v20 = v19[1].i64[0]; /*0x1007f67db*/
    }
  }
  *(_BYTE *)(v19->i64[1] + v20) = 44; /*0x1007f65af*/
  v19[1].i64[0] = v20 + 1; /*0x1007f65b6*/
  v21 = serde_json::ser::format_escaped_str::h5e062135eb5a0baf(&v40, &v41, a4, a5); /*0x1007f65cb*/
  if ( v21 ) /*0x1007f65d3*/
    goto LABEL_60; /*0x1007f65d3*/
  v22 = v40; /*0x1007f65d9*/
  v23 = v40[1].i64[0]; /*0x1007f65dd*/
  if ( v40->i64[0] == v23 ) /*0x1007f65e4*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v40, v23, 1, 1, 1); /*0x1007f67f7*/
    v23 = v22[1].i64[0]; /*0x1007f67fc*/
  }
  *(_BYTE *)(v22->i64[1] + v23) = 44; /*0x1007f65ee*/
  v22[1].i64[0] = v23 + 1; /*0x1007f65f5*/
  v21 = serde_json::ser::format_escaped_str::h5e062135eb5a0baf(&v40, &v41, v35, a7); /*0x1007f6608*/
  if ( v21 ) /*0x1007f6610*/
    goto LABEL_60; /*0x1007f6610*/
  v24 = v40; /*0x1007f6616*/
  v25 = v40[1].i64[0]; /*0x1007f661a*/
  if ( v40->i64[0] == v25 ) /*0x1007f6621*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v40, v25, 1, 1, 1); /*0x1007f6818*/
    v25 = v24[1].i64[0]; /*0x1007f681d*/
  }
  *(_BYTE *)(v24->i64[1] + v25) = 93; /*0x1007f662b*/
  v24[1].i64[0] = v25 + 1; /*0x1007f6632*/
  v27 = v37.i64[1]; /*0x1007f663a*/
  v26 = v37.i64[0]; /*0x1007f663a*/
  if ( __OFSUB__(-v37.i64[0], 1) ) /*0x1007f6644*/
    goto LABEL_62; /*0x1007f6644*/
  v28 = v38; /*0x1007f664a*/
  v37.i64[0] = (__int64)a4; /*0x1007f6651*/
  v37.i64[1] = (__int64)a4 + a5; /*0x1007f6655*/
  v38 = 18; /*0x1007f6659*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h5538430d0cd1eb1d( /*0x1007f666c*/
    v33,
    &v37);
  v40 = (__m128i *)v26; /*0x1007f6671*/
  v41 = v27; /*0x1007f6675*/
  v42 = v28; /*0x1007f6679*/
  _$LT$D$u20$as$u20$digest..digest..Digest$GT$::digest::hce78dd8d703e78ac(&v37, &v40); /*0x1007f6688*/
  v32[0] = &v37; /*0x1007f668d*/
  v32[1] = generic_array::hex::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$generic_array..GenericArray$LT$u8$C$T$GT$$GT$::fmt::h6a15623b74f49e7c; /*0x1007f669b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_101A2BC0F, v32); /*0x1007f66b7*/
  v29 = v40; /*0x1007f66bc*/
  v30 = v41; /*0x1007f66c0*/
  if ( v42 <= 0x20 ) /*0x1007f66cc*/
  {
    if ( v42 != 32 ) /*0x1007f66f0*/
LABEL_53:
      core::str::slice_error_fail::h480e51fbd8b15eba(v41, v42, 0, 32, &off_101C01DC8); /*0x1007f66d5*/
  }
  else if ( *(char *)(v41 + 32) <= -65 ) /*0x1007f66d3*/
  {
    goto LABEL_53; /*0x1007f66d3*/
  }
  v40 = (__m128i *)v41; /*0x1007f66f2*/
  v41 = 32; /*0x1007f66f6*/
  v37.i64[0] = (__int64)v33; /*0x1007f6705*/
  v37.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007f6710*/
  v38 = (__int64)&v40; /*0x1007f6714*/
  v39 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1007f671f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &unk_101A39756, &v37); /*0x1007f6732*/
  if ( v29 ) /*0x1007f673a*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v29, 1); /*0x1007f6747*/
  if ( v33[0] ) /*0x1007f6756*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33[1], v33[0], 1); /*0x1007f6764*/
  return result; /*0x1007f6769*/
}