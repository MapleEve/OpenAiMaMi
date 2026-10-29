// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::relay::export_relay_config::hfa7b95083057fdea; addr: 0x100a021d0; session: <审计会话>; pass: 4-candidate-true-fixup; decompiled_at: 2026-10-26T19:57:30Z
_QWORD *__fastcall codexmate_lib::commands::relay::export_relay_config::hfa7b95083057fdea(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int8 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  _QWORD v17[51]; // [rsp+8h] [rbp-288h] BYREF
  __int64 v18[3]; // [rsp+1A0h] [rbp-F0h] BYREF
  _QWORD v19[12]; // [rsp+1B8h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+218h] [rbp-78h]
  __int64 v21; // [rsp+220h] [rbp-70h]
  __int64 v22; // [rsp+228h] [rbp-68h]
  __int64 v23; // [rsp+230h] [rbp-60h] BYREF
  __int64 v24; // [rsp+238h] [rbp-58h]
  __int64 v25; // [rsp+240h] [rbp-50h]
  __int64 v26; // [rsp+248h] [rbp-48h] BYREF
  __int64 v27; // [rsp+250h] [rbp-40h]
  __int64 v28; // [rsp+258h] [rbp-38h]
  __int64 v29; // [rsp+260h] [rbp-30h]

  v5 = *a3; /*0x100a021ea*/
  v29 = a3[1]; /*0x100a021f1*/
  v6 = a2[2]; /*0x100a021f5*/
  if ( __OFSUB__(0, *(_QWORD *)(v6 + 16)) ) /*0x100a021fb*/
  {
    v8 = a3[2]; /*0x100a02208*/
    codexmate_lib::core::relay::manager::RelayManager::snapshot::h527950d12ca05baa(v17, a2); /*0x100a02216*/
    codexmate_lib::core::relay::io::export_to_file::hf4571e49c79473a5(v19, *a2 + 16LL, v17, v29, v8, a4); /*0x100a0223b*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hf5a9511b9a61ea04(v17); /*0x100a02247*/
    if ( LODWORD(v19[0]) == 11 ) /*0x100a02253*/
    {
LABEL_3:
      v12 = v19[1]; /*0x100a02259*/
      v17[48] = v19[2]; /*0x100a02267*/
      v13 = v19[5]; /*0x100a0227c*/
      v20 = v19[2]; /*0x100a02283*/
      v21 = v19[3]; /*0x100a02287*/
      v22 = v19[4]; /*0x100a0228b*/
      v19[0] = v19[2]; /*0x100a0228f*/
      v19[1] = v19[3]; /*0x100a02296*/
      v19[2] = v19[4]; /*0x100a0229d*/
      if ( v5 ) /*0x100a022a7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v5, 1); /*0x100a022b5*/
      v17[0] = v12; /*0x100a022ba*/
      v17[1] = v19[0]; /*0x100a022cf*/
      v17[2] = v19[1]; /*0x100a022d6*/
      v17[3] = v19[2]; /*0x100a022e4*/
      v17[4] = v13; /*0x100a022eb*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h905aa915a00f7520(a1, v17); /*0x100a022fc*/
      return a1; /*0x100a02301*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v17[1], v6 + 16); /*0x100a02311*/
    v17[0] = 9; /*0x100a02316*/
    qmemcpy(v19, v17, sizeof(v19)); /*0x100a02334*/
    if ( LODWORD(v19[0]) == 11 ) /*0x100a0233e*/
      goto LABEL_3; /*0x100a0233e*/
  }
  qmemcpy(v17, v19, 0x60u); /*0x100a0235a*/
  v26 = 0; /*0x100a0235d*/
  v27 = 1; /*0x100a02365*/
  v28 = 0; /*0x100a0236d*/
  v18[2] = 1610612768; /*0x100a02375*/
  v18[0] = (__int64)&v26; /*0x100a02384*/
  v18[1] = (__int64)&anon_25039b10cfdf58965817401c80a821a1_817; /*0x100a02392*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x100a023a3*/
                          v17,
                          v18,
                          v9,
                          (__int64)&anon_25039b10cfdf58965817401c80a821a1_817,
                          v10,
                          v11) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a0244e*/
      &anon_25039b10cfdf58965817401c80a821a1_818,
      55,
      &v23,
      &anon_25039b10cfdf58965817401c80a821a1_840,
      &anon_25039b10cfdf58965817401c80a821a1_820);
  v23 = v26; /*0x100a023b8*/
  v24 = v27; /*0x100a023bc*/
  v25 = v28; /*0x100a023c4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v19); /*0x100a023cf*/
  v14 = v23; /*0x100a023e2*/
  v15 = v24; /*0x100a023e6*/
  v20 = v23; /*0x100a023ea*/
  v21 = v24; /*0x100a023ee*/
  v22 = v25; /*0x100a023f2*/
  a1[3] = v25; /*0x100a023f6*/
  a1[2] = v15; /*0x100a023fa*/
  a1[1] = v14; /*0x100a023fe*/
  *a1 = 0x8000000000000000LL; /*0x100a02402*/
  if ( v5 ) /*0x100a02408*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v5, 1); /*0x100a02416*/
  return a1; /*0x100a0241e*/
}