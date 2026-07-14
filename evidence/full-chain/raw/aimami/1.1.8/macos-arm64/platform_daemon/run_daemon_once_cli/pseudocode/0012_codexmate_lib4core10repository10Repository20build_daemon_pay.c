// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x100529f00 depth=1
// codexmate_lib4core10repository10Repository20build_daemon_payload
void *__fastcall codexmate_lib::core::repository::Repository::build_daemon_payload::h8d185d870dac4e2c(
        void *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // bl
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // r12
  _QWORD *v23; // r15
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 i; // r15
  __int64 v34; // rbx
  _QWORD *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rsi
  _BYTE v39[928]; // [rsp+0h] [rbp-840h] BYREF
  __int64 v40; // [rsp+3A0h] [rbp-4A0h] BYREF
  _BYTE v41[96]; // [rsp+3A8h] [rbp-498h] BYREF
  _QWORD __dst[103]; // [rsp+408h] [rbp-438h] BYREF
  _QWORD v43[12]; // [rsp+740h] [rbp-100h] BYREF
  __int64 v44; // [rsp+7A0h] [rbp-A0h]
  __int64 v45; // [rsp+7A8h] [rbp-98h]
  __int64 v46; // [rsp+7B0h] [rbp-90h]
  __int64 v47; // [rsp+7B8h] [rbp-88h]
  __int64 v48; // [rsp+7C0h] [rbp-80h]
  __int64 v49; // [rsp+7C8h] [rbp-78h]
  __int64 v50; // [rsp+7D0h] [rbp-70h]
  __int64 v51; // [rsp+7D8h] [rbp-68h]
  __int64 v52; // [rsp+7E0h] [rbp-60h]
  __int64 v53; // [rsp+7E8h] [rbp-58h]
  __int64 v54; // [rsp+7F0h] [rbp-50h]
  __int64 v55; // [rsp+7F8h] [rbp-48h]
  int v56; // [rsp+804h] [rbp-3Ch]
  void *v57; // [rsp+808h] [rbp-38h]
  char v58; // [rsp+817h] [rbp-29h]

  v56 = a5; /*0x100529f14*/
  v57 = a1; /*0x100529f21*/
  codexmate_lib::core::repository::Repository::load_local_state::h7cf5c9b025f9346c(v39); /*0x100529f36*/
  qmemcpy(v43, &v39[8], sizeof(v43)); /*0x100529f55*/
  if ( *(_QWORD *)v39 == 2 ) /*0x100529f5c*/
  {
    v7 = v57; /*0x100529f5e*/
    qmemcpy((char *)v57 + 8, v43, 0x60u); /*0x100529f72*/
    *v7 = 0x8000000000000000LL; /*0x100529f75*/
    v8 = *a4; /*0x100529f78*/
    if ( *a4 != 0x8000000000000000LL && v8 ) /*0x100529f83*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], v8, 1); /*0x100529f8e*/
    v9 = *a3; /*0x100529f93*/
    if ( *a3 != 0x8000000000000000LL && v9 ) /*0x100529fa2*/
    {
      v10 = a3[1]; /*0x100529fa8*/
LABEL_61:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x10052a499*/
      return v57; /*0x10052a49e*/
    }
    return v57; /*0x100529fa2*/
  }
  memcpy(__dst, &v39[104], sizeof(__dst)); /*0x100529fc4*/
  qmemcpy(v41, v43, sizeof(v41)); /*0x100529fdc*/
  v40 = *(_QWORD *)v39; /*0x100529fdf*/
  v11 = *(_QWORD *)(a2 + 632); /*0x100529fe6*/
  v12 = *(_QWORD *)(a2 + 640); /*0x100529fed*/
  v13 = codexmate_lib::platform::daemon::check_daemon_state::h0fbeb3d43845c30f(v11, v12); /*0x100529ffc*/
  v43[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v11, v12, v14); /*0x10052a003*/
  LODWORD(v43[1]) = v15; /*0x10052a00a*/
  std::time::SystemTime::duration_since::had059553cab94f96(v39, v43, 0, 0); /*0x10052a022*/
  if ( v39[0] ) /*0x10052a02e*/
  {
    v16 = 0; /*0x10052a049*/
    v17 = 0x8000000000000000LL; /*0x10052a053*/
    if ( __dst[6] == 2 ) /*0x10052a056*/
      goto LABEL_27; /*0x10052a056*/
LABEL_12:
    v46 = v16; /*0x10052a05c*/
    v58 = v13; /*0x10052a063*/
    v48 = __dst[22]; /*0x10052a06d*/
    v47 = __dst[24]; /*0x10052a078*/
    v51 = __dst[25]; /*0x10052a086*/
    v17 = __dst[28]; /*0x10052a08a*/
    v18 = __dst[34]; /*0x10052a09f*/
    v19 = __dst[35]; /*0x10052a0a6*/
    v20 = __dst[37]; /*0x10052a0ad*/
    v54 = __dst[38]; /*0x10052a0bb*/
    v50 = __dst[40]; /*0x10052a0c6*/
    v53 = __dst[41]; /*0x10052a0d1*/
    *(_QWORD *)&v39[8] = __dst[30]; /*0x10052a0dc*/
    *(_QWORD *)v39 = __dst[29]; /*0x10052a0ea*/
    v49 = __dst[43]; /*0x10052a0f8*/
    v52 = __dst[44]; /*0x10052a103*/
    if ( __dst[31] ) /*0x10052a10a*/
    {
      v55 = __dst[37]; /*0x10052a111*/
      v21 = __dst[28]; /*0x10052a115*/
      v22 = a4; /*0x10052a118*/
      v23 = a3; /*0x10052a11b*/
      v24 = __dst[35]; /*0x10052a11e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[32], __dst[31], 1); /*0x10052a121*/
      v19 = v24; /*0x10052a126*/
      a3 = v23; /*0x10052a129*/
      a4 = v22; /*0x10052a12c*/
      v17 = v21; /*0x10052a12f*/
      v20 = v55; /*0x10052a132*/
    }
    if ( v18 ) /*0x10052a139*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x10052a146*/
    if ( 2 * v20 ) /*0x10052a14b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v20, 1); /*0x10052a164*/
    if ( 2 * v50 ) /*0x10052a16d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v50, 1); /*0x10052a18d*/
    v13 = v58; /*0x10052a1a1*/
    if ( 2 * v49 ) /*0x10052a196*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v49, 1); /*0x10052a1c0*/
      v25 = v47; /*0x10052a1ca*/
      if ( v48 == 2 ) /*0x10052a1d1*/
      {
LABEL_26:
        v45 = *(_QWORD *)&v39[8]; /*0x10052a1ea*/
        v44 = *(_QWORD *)v39; /*0x10052a1ff*/
        v16 = v46; /*0x10052a206*/
        goto LABEL_27; /*0x10052a206*/
      }
    }
    else
    {
      v25 = v47; /*0x10052a1ac*/
      if ( v48 == 2 ) /*0x10052a1b3*/
        goto LABEL_26; /*0x10052a1b3*/
    }
    if ( (v25 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x10052a1da*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v25, 1); /*0x10052a1e5*/
    goto LABEL_26; /*0x10052a1e5*/
  }
  v16 = *(_QWORD *)&v39[8]; /*0x10052a030*/
  v17 = 0x8000000000000000LL; /*0x10052a03f*/
  if ( __dst[6] != 2 ) /*0x10052a042*/
    goto LABEL_12; /*0x10052a042*/
LABEL_27:
  v43[5] = a3[2]; /*0x10052a20d*/
  v26 = *a3; /*0x10052a218*/
  v43[4] = a3[1]; /*0x10052a21f*/
  v43[3] = v26; /*0x10052a226*/
  v27 = a4[1]; /*0x10052a230*/
  v43[6] = *a4; /*0x10052a234*/
  v43[7] = v27; /*0x10052a23b*/
  v43[8] = a4[2]; /*0x10052a246*/
  v43[9] = v16; /*0x10052a24d*/
  LOBYTE(v43[10]) = 1; /*0x10052a254*/
  BYTE1(v43[10]) = v56; /*0x10052a25e*/
  BYTE2(v43[10]) = v13; /*0x10052a264*/
  v43[0] = v17; /*0x10052a26a*/
  v43[1] = v44; /*0x10052a27f*/
  v43[2] = v45; /*0x10052a286*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hba69220fb8456af3(v39, v43); /*0x10052a29e*/
  memcpy(v57, v39, 0xA8u); /*0x10052a2b3*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AppPathState$GT$::hb772a699ef9b33a6(&__dst[48]); /*0x10052a2bf*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(&v40); /*0x10052a2cb*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&__dst[70]); /*0x10052a2d7*/
  v28 = __dst[82]; /*0x10052a2dc*/
  if ( __dst[82] ) /*0x10052a2e6*/
  {
    v29 = (_QWORD *)(__dst[81] + 136LL); /*0x10052a2ef*/
    do /*0x10052a30a*/
    {
      v30 = *(v29 - 1); /*0x10052a30c*/
      if ( v30 ) /*0x10052a313*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v29, v30, 1); /*0x10052a31d*/
      if ( *((_DWORD *)v29 - 14) != 2 ) /*0x10052a327*/
      {
        v31 = *(v29 - 5); /*0x10052a329*/
        if ( v31 != 0x8000000000000000LL ) /*0x10052a330*/
        {
          if ( v31 ) /*0x10052a335*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v29 - 4), v31, 1); /*0x10052a340*/
        }
      }
      v29 += 21; /*0x10052a300*/
      --v28; /*0x10052a307*/
    }
    while ( v28 ); /*0x10052a30a*/
  }
  if ( __dst[80] ) /*0x10052a351*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[81], 168LL * __dst[80], 8); /*0x10052a366*/
  v32 = __dst[86]; /*0x10052a36b*/
  for ( i = __dst[87] + 1LL; i != 1; --i ) /*0x10052a379*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(); /*0x10052a390*/
    v32 += 336; /*0x10052a395*/
  }
  if ( __dst[85] ) /*0x10052a3a4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[86], 336LL * __dst[85], 8); /*0x10052a3b9*/
  v34 = __dst[90]; /*0x10052a3be*/
  if ( __dst[90] ) /*0x10052a3c8*/
  {
    v35 = (_QWORD *)(__dst[89] + 32LL); /*0x10052a3d1*/
    do /*0x10052a3e7*/
    {
      v36 = *(v35 - 4); /*0x10052a3e9*/
      if ( v36 ) /*0x10052a3f0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v35 - 3), v36, 1); /*0x10052a3fb*/
      v37 = *(v35 - 1); /*0x10052a400*/
      if ( v37 ) /*0x10052a407*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v35, v37, 1); /*0x10052a411*/
      v35 += 6; /*0x10052a3e0*/
      --v34; /*0x10052a3e4*/
    }
    while ( v34 ); /*0x10052a3e7*/
  }
  if ( __dst[88] ) /*0x10052a422*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[89], 48LL * __dst[88], 8); /*0x10052a438*/
  if ( __dst[91] != 0x8000000000000000LL && __dst[91] ) /*0x10052a44c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[92], __dst[91], 1); /*0x10052a45a*/
  if ( __dst[94] != 0x8000000000000000LL && __dst[94] ) /*0x10052a46e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[95], __dst[94], 1); /*0x10052a47c*/
  v9 = __dst[98]; /*0x10052a481*/
  if ( __dst[98] != 0x8000000000000000LL && __dst[98] ) /*0x10052a490*/
  {
    v10 = __dst[99]; /*0x10052a492*/
    goto LABEL_61; /*0x10052a492*/
  }
  return v57; /*0x10052a4a7*/
}