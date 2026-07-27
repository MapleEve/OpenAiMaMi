// __ZN13codexmate_lib4core10repository10Repository20build_daemon_payload @ 0x100a5c580 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::build_daemon_payload::hb3b18dbdadb3ea0e(
        void *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5)
{
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // bl
  int v14; // edx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 v21; // r15
  _QWORD *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rbx
  _QWORD *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rbx
  _QWORD *v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rsi
  _BYTE v40[1072]; // [rsp+8h] [rbp-948h] BYREF
  __int64 v41; // [rsp+438h] [rbp-518h] BYREF
  _BYTE v42[96]; // [rsp+440h] [rbp-510h] BYREF
  _QWORD __dst[121]; // [rsp+4A0h] [rbp-4B0h] BYREF
  _QWORD v44[12]; // [rsp+868h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+8C8h] [rbp-88h]
  __int64 v46; // [rsp+8D0h] [rbp-80h]
  __int64 v47; // [rsp+8D8h] [rbp-78h]
  __int64 v48; // [rsp+8E0h] [rbp-70h]
  __int64 v49; // [rsp+8E8h] [rbp-68h]
  __int64 v50; // [rsp+8F0h] [rbp-60h]
  __int64 v51; // [rsp+8F8h] [rbp-58h]
  __int64 v52; // [rsp+900h] [rbp-50h]
  unsigned __int64 v53; // [rsp+908h] [rbp-48h]
  int v54; // [rsp+914h] [rbp-3Ch]
  void *v55; // [rsp+918h] [rbp-38h]
  char v56; // [rsp+927h] [rbp-29h]

  v54 = a5; /*0x100a5c594*/
  v55 = a1; /*0x100a5c5a1*/
  codexmate_lib::core::repository::Repository::load_local_state::h0e6ef74d3b184ef0(v40, a2); /*0x100a5c5b6*/
  qmemcpy(v44, &v40[8], sizeof(v44)); /*0x100a5c5d5*/
  if ( *(_QWORD *)v40 == 2 ) /*0x100a5c5dc*/
  {
    v7 = v55; /*0x100a5c5de*/
    qmemcpy((char *)v55 + 8, v44, 0x60u); /*0x100a5c5f2*/
    *v7 = 0x8000000000000000LL; /*0x100a5c5f5*/
    v8 = *a4; /*0x100a5c5f8*/
    if ( *a4 != 0x8000000000000000LL && v8 ) /*0x100a5c603*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v8, 1); /*0x100a5c60e*/
    v9 = *a3; /*0x100a5c613*/
    if ( *a3 != 0x8000000000000000LL && v9 ) /*0x100a5c622*/
    {
      v10 = a3[1]; /*0x100a5c628*/
LABEL_65:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a5cb21*/
      return v7; /*0x100a5cb26*/
    }
    return v7; /*0x100a5c622*/
  }
  memcpy(__dst, &v40[104], sizeof(__dst)); /*0x100a5c644*/
  qmemcpy(v42, v44, sizeof(v42)); /*0x100a5c65c*/
  v41 = *(_QWORD *)v40; /*0x100a5c65f*/
  v11 = a2[79]; /*0x100a5c666*/
  v12 = a2[80]; /*0x100a5c66d*/
  v13 = codexmate_lib::platform::daemon::check_daemon_state::hcbc03433a17a641c(v11, v12); /*0x100a5c67c*/
  v44[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v11, v12); /*0x100a5c683*/
  LODWORD(v44[1]) = v14; /*0x100a5c68a*/
  std::time::SystemTime::duration_since::had059553cab94f96(v40, v44, 0, 0); /*0x100a5c6a2*/
  v56 = v13; /*0x100a5c6ae*/
  if ( v40[0] ) /*0x100a5c6b1*/
  {
    v15 = 0; /*0x100a5c6cc*/
    v16 = 0x8000000000000000LL; /*0x100a5c6d6*/
    if ( __dst[6] == 2 ) /*0x100a5c6d9*/
      goto LABEL_21; /*0x100a5c6d9*/
  }
  else
  {
    v15 = *(_QWORD *)&v40[8]; /*0x100a5c6b3*/
    v16 = 0x8000000000000000LL; /*0x100a5c6c2*/
    if ( __dst[6] == 2 ) /*0x100a5c6c5*/
      goto LABEL_21; /*0x100a5c6c5*/
  }
  v47 = v15; /*0x100a5c6df*/
  v16 = __dst[29]; /*0x100a5c6e3*/
  v17 = __dst[35]; /*0x100a5c6ff*/
  v18 = __dst[36]; /*0x100a5c706*/
  v19 = __dst[38]; /*0x100a5c70d*/
  v52 = __dst[39]; /*0x100a5c71b*/
  v49 = __dst[41]; /*0x100a5c726*/
  v51 = __dst[42]; /*0x100a5c731*/
  v48 = __dst[44]; /*0x100a5c73c*/
  v50 = __dst[45]; /*0x100a5c747*/
  *(_QWORD *)&v40[8] = __dst[31]; /*0x100a5c752*/
  *(_QWORD *)v40 = __dst[30]; /*0x100a5c759*/
  if ( __dst[32] ) /*0x100a5c763*/
  {
    v53 = __dst[29]; /*0x100a5c76a*/
    v20 = a4; /*0x100a5c76e*/
    v21 = __dst[38]; /*0x100a5c771*/
    v22 = a3; /*0x100a5c774*/
    v23 = __dst[36]; /*0x100a5c777*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[33], __dst[32], 1); /*0x100a5c77a*/
    v18 = v23; /*0x100a5c77f*/
    a3 = v22; /*0x100a5c782*/
    v19 = v21; /*0x100a5c785*/
    a4 = v20; /*0x100a5c788*/
    v16 = v53; /*0x100a5c78b*/
  }
  if ( v17 ) /*0x100a5c792*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100a5c79f*/
  if ( 2 * v19 ) /*0x100a5c7a4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v19, 1); /*0x100a5cb4c*/
    v24 = v49; /*0x100a5cb51*/
    if ( !(2 * v49) ) /*0x100a5cb60*/
      goto LABEL_18; /*0x100a5cb60*/
LABEL_68:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v24, 1); /*0x100a5cb66*/
    goto LABEL_18; /*0x100a5cb74*/
  }
  v24 = v49; /*0x100a5c7b5*/
  if ( 2 * v49 ) /*0x100a5c7b9*/
    goto LABEL_68; /*0x100a5c7c4*/
LABEL_18:
  if ( 2 * v48 ) /*0x100a5c7ce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v48, 1); /*0x100a5c7ee*/
  v46 = *(_QWORD *)&v40[8]; /*0x100a5c801*/
  v45 = *(_QWORD *)v40; /*0x100a5c805*/
  v15 = v47; /*0x100a5c80c*/
LABEL_21:
  v44[5] = a3[2]; /*0x100a5c810*/
  v25 = *a3; /*0x100a5c81b*/
  v44[4] = a3[1]; /*0x100a5c822*/
  v44[3] = v25; /*0x100a5c829*/
  v26 = a4[1]; /*0x100a5c833*/
  v44[6] = *a4; /*0x100a5c837*/
  v44[7] = v26; /*0x100a5c83e*/
  v44[8] = a4[2]; /*0x100a5c849*/
  v44[9] = v15; /*0x100a5c850*/
  LOBYTE(v44[10]) = 1; /*0x100a5c857*/
  BYTE1(v44[10]) = v54; /*0x100a5c861*/
  BYTE2(v44[10]) = v56; /*0x100a5c86b*/
  v44[0] = v16; /*0x100a5c871*/
  v44[1] = v45; /*0x100a5c883*/
  v44[2] = v46; /*0x100a5c88a*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h812dc47c5eb533ec((__int64)v40, v44); /*0x100a5c8a2*/
  memcpy(v55, v40, 0xA8u); /*0x100a5c8b7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hfc789ea0cf95a5fc(&__dst[50]); /*0x100a5c8c3*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(&v41, v40); /*0x100a5c8cf*/
  if ( __dst[75] != 0x8000000000000000LL && __dst[75] ) /*0x100a5c8e3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[76], __dst[75], 1); /*0x100a5c8f1*/
  v27 = __dst[73]; /*0x100a5c8f6*/
  v28 = __dst[74]; /*0x100a5c8fd*/
  if ( __dst[74] ) /*0x100a5c907*/
  {
    v29 = __dst[73]; /*0x100a5c909*/
    do /*0x100a5c922*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v29); /*0x100a5c913*/
      v29 += 424; /*0x100a5c918*/
      --v28; /*0x100a5c91f*/
    }
    while ( v28 ); /*0x100a5c922*/
  }
  if ( __dst[72] ) /*0x100a5c92e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, 424LL * __dst[72], 8); /*0x100a5c93f*/
  v30 = __dst[85]; /*0x100a5c944*/
  if ( __dst[85] ) /*0x100a5c94e*/
  {
    v31 = (_QWORD *)(__dst[84] + 128LL); /*0x100a5c957*/
    do /*0x100a5c96a*/
    {
      v32 = *(v31 - 1); /*0x100a5c96c*/
      if ( v32 ) /*0x100a5c973*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v31, v32, 1); /*0x100a5c97d*/
      v31 += 20; /*0x100a5c960*/
      --v30; /*0x100a5c967*/
    }
    while ( v30 ); /*0x100a5c96a*/
  }
  if ( __dst[83] ) /*0x100a5c98e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[84], 160LL * __dst[83], 8); /*0x100a5c9a4*/
  v33 = __dst[90]; /*0x100a5c9a9*/
  if ( __dst[90] ) /*0x100a5c9b3*/
  {
    v34 = __dst[89]; /*0x100a5c9b5*/
    do /*0x100a5c9d2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::hc7fc47f5b489c83f(v34); /*0x100a5c9c3*/
      v34 += 352; /*0x100a5c9c8*/
      --v33; /*0x100a5c9cf*/
    }
    while ( v33 ); /*0x100a5c9d2*/
  }
  if ( __dst[88] ) /*0x100a5c9de*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[89], 352LL * __dst[88], 8); /*0x100a5c9f3*/
  v35 = __dst[93]; /*0x100a5c9f8*/
  if ( __dst[93] ) /*0x100a5ca02*/
  {
    v36 = (_QWORD *)(__dst[92] + 32LL); /*0x100a5ca0b*/
    do /*0x100a5ca27*/
    {
      v37 = *(v36 - 4); /*0x100a5ca29*/
      if ( v37 ) /*0x100a5ca30*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v36 - 3), v37, 1); /*0x100a5ca3b*/
      v38 = *(v36 - 1); /*0x100a5ca40*/
      if ( v38 ) /*0x100a5ca47*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, v38, 1); /*0x100a5ca51*/
      v36 += 6; /*0x100a5ca20*/
      --v35; /*0x100a5ca24*/
    }
    while ( v35 ); /*0x100a5ca27*/
  }
  if ( __dst[91] ) /*0x100a5ca62*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[92], 48LL * __dst[91], 8); /*0x100a5ca78*/
  v7 = v55; /*0x100a5ca87*/
  if ( __dst[94] != 0x8000000000000000LL && __dst[94] ) /*0x100a5ca90*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[95], __dst[94], 1); /*0x100a5ca9e*/
  if ( __dst[97] != 0x8000000000000000LL && __dst[97] ) /*0x100a5cab2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[98], __dst[97], 1); /*0x100a5cac0*/
  if ( __dst[101] != 0x8000000000000000LL && __dst[101] ) /*0x100a5cad4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[102], __dst[101], 1); /*0x100a5cae2*/
  if ( __dst[104] != 0x8000000000000000LL ) /*0x100a5caf1*/
  {
    if ( __dst[104] ) /*0x100a5caf6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[105], __dst[104], 1); /*0x100a5cb04*/
    v9 = __dst[107]; /*0x100a5cb09*/
    if ( __dst[107] != 0x8000000000000000LL ) /*0x100a5cb13*/
    {
      if ( __dst[107] ) /*0x100a5cb18*/
      {
        v10 = __dst[108]; /*0x100a5cb1a*/
        goto LABEL_65; /*0x100a5cb1a*/
      }
    }
  }
  return v7; /*0x100a5cb2e*/
}