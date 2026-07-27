// __ZN13codexmate_lib8commands7hotspot25schedule_hotspot_relayout @ 0x1006fec70 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::schedule_hotspot_relayout::h917f1e6498574afa(__int64 a1)
{
  signed __int64 v1; // r12
  char v2; // of
  volatile signed __int64 *v3; // r13
  __int64 v4; // rt0
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rt0
  signed __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  char v11; // of
  volatile signed __int64 *v12; // r13
  __int64 v13; // rt0
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rt0
  __int64 v16; // rbx
  int v17; // ecx
  char v18; // of
  volatile signed __int64 *v19; // r13
  __int64 v20; // rt0
  volatile signed __int64 *v21; // rbx
  __int64 v22; // rt0
  __int64 v23; // rbx
  int v24; // ecx
  _BYTE __dst[136]; // [rsp+8h] [rbp-1A8h] BYREF
  _BYTE __src[136]; // [rsp+90h] [rbp-120h] BYREF
  volatile signed __int64 *v28; // [rsp+118h] [rbp-98h]
  volatile signed __int64 *v29; // [rsp+120h] [rbp-90h]
  __int64 v30; // [rsp+128h] [rbp-88h]
  signed __int64 v31; // [rsp+130h] [rbp-80h]
  int v32[2]; // [rsp+138h] [rbp-78h] BYREF
  __int64 v33; // [rsp+150h] [rbp-60h] BYREF
  __int64 v34; // [rsp+158h] [rbp-58h]
  __int64 v35; // [rsp+160h] [rbp-50h]
  int v36[2]; // [rsp+168h] [rbp-48h] BYREF
  __int64 v37; // [rsp+170h] [rbp-40h]
  __int64 v38; // [rsp+178h] [rbp-38h]
  __int64 v39; // [rsp+180h] [rbp-30h]

  v1 = _InterlockedExchangeAdd64( /*0x1006fec8d*/
         &codexmate_lib::commands::hotspot::schedule_hotspot_relayout::RELAYOUT_VERSION::h951a041688cab936,
         1u);
  v39 = a1; /*0x1006feca0*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006feca4*/
  v3 = *(volatile signed __int64 **)(a1 + 136); /*0x1006feca9*/
  v4 = _InterlockedIncrement64(v3); /*0x1006fecb0*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) ) /*0x1006fecb5*/
    goto LABEL_12; /*0x1006fecb5*/
  v5 = *(volatile signed __int64 **)(a1 + 144); /*0x1006fecbb*/
  v6 = _InterlockedIncrement64(v5); /*0x1006fecc2*/
  if ( (v6 < 0) ^ v2 | (v6 == 0) ) /*0x1006fecc6*/
    goto LABEL_12; /*0x1006fecc6*/
  v7 = v1 + 1; /*0x1006feccc*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fece8*/
  v30 = 0; /*0x1006feced*/
  v31 = v7; /*0x1006fecf8*/
  memcpy(__src, __dst, sizeof(__src)); /*0x1006fed07*/
  v28 = v3; /*0x1006fed0c*/
  v29 = v5; /*0x1006fed13*/
  *(_QWORD *)v32 = 0x8000000000000000LL; /*0x1006fed24*/
  v8 = v39; /*0x1006fed3c*/
  std::thread::lifecycle::spawn_unchecked::hbe31c79f235d674a((int)v36, (int)v32, 0, v9, 0, 0, __src); /*0x1006fed40*/
  v10 = v37; /*0x1006fed49*/
  if ( !*(_QWORD *)v36 ) /*0x1006fed50*/
    goto LABEL_11; /*0x1006fed50*/
  v33 = *(_QWORD *)v36; /*0x1006fed5a*/
  v34 = v37; /*0x1006fed5e*/
  v35 = v38; /*0x1006fed62*/
  core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v33); /*0x1006fed6a*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v8); /*0x1006fed79*/
  v12 = *(volatile signed __int64 **)(v8 + 136); /*0x1006fed7e*/
  v13 = _InterlockedIncrement64(v12); /*0x1006fed85*/
  if ( (v13 < 0) ^ v11 | (v13 == 0) ) /*0x1006fed8a*/
    goto LABEL_12; /*0x1006fed8a*/
  v14 = *(volatile signed __int64 **)(v8 + 144); /*0x1006fed90*/
  v15 = _InterlockedIncrement64(v14); /*0x1006fed97*/
  if ( (v15 < 0) ^ v11 | (v15 == 0) ) /*0x1006fed9b*/
    goto LABEL_12; /*0x1006fed9b*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fedac*/
  v30 = 300; /*0x1006fedb1*/
  v31 = v7; /*0x1006fedbc*/
  memcpy(__src, __dst, sizeof(__src)); /*0x1006fedcb*/
  v28 = v12; /*0x1006fedd0*/
  v29 = v14; /*0x1006fedd7*/
  *(_QWORD *)v32 = 0x8000000000000000LL; /*0x1006fede8*/
  v16 = v39; /*0x1006fee00*/
  std::thread::lifecycle::spawn_unchecked::hbe31c79f235d674a((int)v36, (int)v32, 0, v17, 0, 0, __src); /*0x1006fee04*/
  v10 = v37; /*0x1006fee0d*/
  if ( !*(_QWORD *)v36 ) /*0x1006fee14*/
    goto LABEL_11; /*0x1006fee14*/
  v33 = *(_QWORD *)v36; /*0x1006fee1e*/
  v34 = v37; /*0x1006fee22*/
  v35 = v38; /*0x1006fee26*/
  core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v33); /*0x1006fee2e*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v16); /*0x1006fee3d*/
  v19 = *(volatile signed __int64 **)(v16 + 136); /*0x1006fee42*/
  v20 = _InterlockedIncrement64(v19); /*0x1006fee49*/
  if ( (v20 < 0) ^ v18 | (v20 == 0) /*0x1006fee5f*/
    || (v21 = *(volatile signed __int64 **)(v16 + 144), v22 = _InterlockedIncrement64(v21), (v22 < 0) ^ v18 | (v22 == 0)) )
  {
LABEL_12:
    BUG(); /*0x1006fef34*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1006fee70*/
  v30 = 1200; /*0x1006fee75*/
  v31 = v7; /*0x1006fee80*/
  memcpy(__src, __dst, sizeof(__src)); /*0x1006fee8f*/
  v28 = v19; /*0x1006fee94*/
  v29 = v21; /*0x1006fee9b*/
  *(_QWORD *)v32 = 0x8000000000000000LL; /*0x1006feeac*/
  v23 = v39; /*0x1006feec4*/
  std::thread::lifecycle::spawn_unchecked::hbe31c79f235d674a((int)v36, (int)v32, 0, v24, 0, 0, __src); /*0x1006feec8*/
  v10 = v37; /*0x1006feed1*/
  if ( !*(_QWORD *)v36 ) /*0x1006feed8*/
  {
LABEL_11:
    *(_QWORD *)v36 = v10; /*0x1006fef0d*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006fef2f*/
      "failed to spawn threadappstarted",
      22,
      v36,
      &anon_b756970ae374bf3e9e8d782d8f9d3f8c_402,
      &anon_b756970ae374bf3e9e8d782d8f9d3f8c_53);
  }
  v33 = *(_QWORD *)v36; /*0x1006feede*/
  v34 = v37; /*0x1006feee2*/
  v35 = v38; /*0x1006feee6*/
  core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v33); /*0x1006feeee*/
  return core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v23); /*0x1006feefb*/
}