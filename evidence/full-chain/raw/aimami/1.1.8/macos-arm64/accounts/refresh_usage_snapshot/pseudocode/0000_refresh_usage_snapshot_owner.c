// mac 1.1.8 refresh_usage_snapshot node va=0x1004cc860 depth=0
// refresh_usage_snapshot_owner
_QWORD *__fastcall codexmate_lib::commands::accounts::refresh_usage_snapshot_with_retry::h8a02ac7b76e46ace(
        _QWORD *__dst,
        __int64 a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(); // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r14
  _QWORD *v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // r14
  _QWORD *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rsi
  _BYTE v28[728]; // [rsp+8h] [rbp-C08h] BYREF
  _BYTE v29[760]; // [rsp+2E0h] [rbp-930h] BYREF
  _BYTE *v30; // [rsp+5D8h] [rbp-638h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+5E0h] [rbp-630h]
  __int64 v32; // [rsp+5E8h] [rbp-628h]
  __int64 v33; // [rsp+5F0h] [rbp-620h]
  _BYTE __src[728]; // [rsp+5F8h] [rbp-618h] BYREF
  _BYTE v35[760]; // [rsp+8D0h] [rbp-340h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+BC8h] [rbp-48h]
  __int64 v37; // [rsp+BD0h] [rbp-40h]
  __int64 v38; // [rsp+BD8h] [rbp-38h]
  int v39; // [rsp+BE4h] [rbp-2Ch]

  if ( !tauri::state::StateManager::try_get::h5668abcf78ad5dde(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL) ) /*0x1004cc897*/
  {
    *(_QWORD *)v35 = &anon_7f3de6c6840f0b31a5181342ebf2ca5d_789; /*0x1004ccf1f*/
    *(_QWORD *)&v35[8] = 76; /*0x1004ccf26*/
    v30 = v35; /*0x1004ccf38*/
    v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1004ccf46*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1004ccf62*/
      &anon_7f3de6c6840f0b31a5181342ebf2ca5d_896,
      &v30,
      &anon_7f3de6c6840f0b31a5181342ebf2ca5d_897);
  }
  v39 = (unsigned __int8)codexmate_lib::commands::accounts::resolve_cached_auto_switch_service_state::h49ee9782a44b2592(a2); /*0x1004cc8b5*/
  codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h03e1aef099469075(&v30); /*0x1004cc8b8*/
  *(_QWORD *)v35 = v31; /*0x1004cc8cb*/
  *(_QWORD *)&v35[8] = v32; /*0x1004cc8d9*/
  *(_QWORD *)&v35[16] = v33; /*0x1004cc8e7*/
  if ( v30 == (_BYTE *)3 ) /*0x1004cc8f2*/
  {
    __dst[3] = *(_QWORD *)&v35[16]; /*0x1004cc8fb*/
    v5 = *(_QWORD *)v35; /*0x1004cc8ff*/
    __dst[2] = *(_QWORD *)&v35[8]; /*0x1004cc90d*/
    __dst[1] = v5; /*0x1004cc911*/
    *__dst = 3; /*0x1004cc915*/
    return __dst; /*0x1004cc91c*/
  }
  memcpy(&v29[32], __src, 0x2D8u); /*0x1004cc934*/
  *(_QWORD *)&v29[8] = *(_QWORD *)v35; /*0x1004cc947*/
  *(_QWORD *)&v29[16] = *(_QWORD *)&v35[8]; /*0x1004cc94e*/
  *(_QWORD *)&v29[24] = *(_QWORD *)&v35[16]; /*0x1004cc95c*/
  *(_QWORD *)v29 = v30; /*0x1004cc963*/
  codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468( /*0x1004cc980*/
    a2,
    v29,
    "usageruntime-state-updated",
    5);
  if ( a3 && v29[632] == 2 ) /*0x1004cc995*/
  {
    *(_QWORD *)v35 = std::time::SystemTime::now::h1fe79e41f9d5677f(a2, v29, v6); /*0x1004cc9a0*/
    *(_DWORD *)&v35[8] = v7; /*0x1004cc9a7*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v30, v35, 0, 0); /*0x1004cc9bf*/
    v8 = 800000000; /*0x1004cc9ef*/
    if ( !(_BYTE)v30 ) /*0x1004cc9f4*/
      v8 = 1000000 /*0x1004cc9f4*/
         * ((unsigned int)v32 - 200 * ((unsigned int)((42949673 * (unsigned __int64)(unsigned int)v32) >> 32) >> 1))
         + 800000000;
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, v8); /*0x1004cc9f9*/
    codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h03e1aef099469075(&v30); /*0x1004cca0b*/
    if ( v30 == (_BYTE *)3 ) /*0x1004cca22*/
      goto LABEL_9; /*0x1004cca22*/
    v38 = v33; /*0x1004cca65*/
    v37 = v32; /*0x1004cca70*/
    v36 = v31; /*0x1004cca74*/
    memcpy(v28, __src, sizeof(v28)); /*0x1004cca84*/
    *(_QWORD *)v35 = v30; /*0x1004cca89*/
    *(_QWORD *)&v35[24] = v33; /*0x1004cca94*/
    *(_QWORD *)&v35[16] = v32; /*0x1004ccaa0*/
    *(_QWORD *)&v35[8] = v31; /*0x1004ccaa4*/
    memcpy(&v35[32], v28, 0x2D8u); /*0x1004ccabb*/
    codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468( /*0x1004ccad6*/
      a2,
      v35,
      "usageruntime-state-updated",
      5);
    if ( v35[632] == 2 ) /*0x1004ccae2*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h6cb79f630ffd6329(v35); /*0x1004ccaef*/
      *(_QWORD *)v35 = std::time::SystemTime::now::h1fe79e41f9d5677f(v35, v35, v11); /*0x1004ccaf9*/
      *(_DWORD *)&v35[8] = v12; /*0x1004ccb00*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v30, v35, 0, 0); /*0x1004ccb18*/
      v13 = 600000000; /*0x1004ccb48*/
      if ( !(_BYTE)v30 ) /*0x1004ccb4d*/
        v13 = 1000000 /*0x1004ccb4d*/
            * ((unsigned int)v32 - 200 * ((unsigned int)((42949673 * (unsigned __int64)(unsigned int)v32) >> 32) >> 1))
            + 600000000;
      std::thread::functions::sleep::h8fc88f8bc00bad5c(1, v13); /*0x1004ccb55*/
      codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h03e1aef099469075(&v30); /*0x1004ccb67*/
      if ( v30 == (_BYTE *)3 ) /*0x1004ccb7e*/
        goto LABEL_9; /*0x1004ccb7e*/
      v38 = v33; /*0x1004ccb88*/
      v37 = v32; /*0x1004ccb93*/
      v36 = v31; /*0x1004ccb97*/
      memcpy(v28, __src, sizeof(v28)); /*0x1004ccbb1*/
      *(_QWORD *)v35 = v30; /*0x1004ccbb6*/
      *(_QWORD *)&v35[24] = v33; /*0x1004ccbc8*/
      *(_QWORD *)&v35[16] = v32; /*0x1004ccbd4*/
      *(_QWORD *)&v35[8] = v31; /*0x1004ccbd8*/
      memcpy(&v35[32], v28, 0x2D8u); /*0x1004ccbea*/
      codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468( /*0x1004ccc05*/
        a2,
        v35,
        "usageruntime-state-updated",
        5);
      if ( v35[632] != 2 ) /*0x1004ccc11*/
        goto LABEL_33; /*0x1004ccc11*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h6cb79f630ffd6329(v35); /*0x1004ccc1e*/
      *(_QWORD *)v35 = std::time::SystemTime::now::h1fe79e41f9d5677f(v35, v35, v14); /*0x1004ccc28*/
      *(_DWORD *)&v35[8] = v15; /*0x1004ccc2f*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v30, v35, 0, 0); /*0x1004ccc47*/
      v16 = v32 - 200 * ((42949673 * (unsigned __int64)(unsigned int)v32) >> 33) + 3200; /*0x1004ccc65*/
      v17 = 1000000 * (unsigned __int16)(v16 - 1000 * ((unsigned __int16)((4195 * (unsigned int)v16) >> 16) >> 6)); /*0x1004ccc81*/
      v18 = 200000000; /*0x1004ccc8e*/
      if ( !(_BYTE)v30 ) /*0x1004ccc93*/
        v18 = v17; /*0x1004ccc93*/
      std::thread::functions::sleep::h8fc88f8bc00bad5c(3, v18); /*0x1004ccc9b*/
      codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h03e1aef099469075(&v30); /*0x1004cccad*/
      if ( v30 == (_BYTE *)3 ) /*0x1004cccc4*/
      {
LABEL_9:
        v38 = v33; /*0x1004cca24*/
        v9 = v31; /*0x1004cca2c*/
        v10 = v32; /*0x1004cca2f*/
        v37 = v32; /*0x1004cca33*/
        v36 = v31; /*0x1004cca37*/
        __dst[3] = v33; /*0x1004cca3b*/
        __dst[2] = v10; /*0x1004cca3f*/
        __dst[1] = v9; /*0x1004cca43*/
        *__dst = 3; /*0x1004cca47*/
LABEL_46:
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h6cb79f630ffd6329(v29); /*0x1004ccef7*/
        return __dst; /*0x1004ccefe*/
      }
      v38 = v33; /*0x1004cccce*/
      v37 = v32; /*0x1004cccd9*/
      v36 = v31; /*0x1004cccdd*/
      memcpy(v28, __src, sizeof(v28)); /*0x1004cccf7*/
      *(_QWORD *)v35 = v30; /*0x1004cccfc*/
      *(_QWORD *)&v35[24] = v33; /*0x1004ccd0e*/
      *(_QWORD *)&v35[16] = v32; /*0x1004ccd1a*/
      *(_QWORD *)&v35[8] = v31; /*0x1004ccd1e*/
      memcpy(&v35[32], v28, 0x2D8u); /*0x1004ccd30*/
      codexmate_lib::commands::accounts::broadcast_runtime_snapshot::hd40df0804c6b6468( /*0x1004ccd4b*/
        a2,
        v35,
        "usageruntime-state-updated",
        5);
      if ( v35[632] == 2 ) /*0x1004ccd57*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h6cb79f630ffd6329(v35); /*0x1004ccd64*/
        goto LABEL_20; /*0x1004ccd64*/
      }
    }
LABEL_33:
    memcpy(__dst, v35, 0x2A8u); /*0x1004cce36*/
    if ( *(_QWORD *)&v35[680] ) /*0x1004cce54*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v35[688], *(_QWORD *)&v35[680], 1); /*0x1004cce62*/
    if ( *(_QWORD *)&v35[704] ) /*0x1004cce6e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v35[712], *(_QWORD *)&v35[704], 1); /*0x1004cce79*/
    v23 = *(_QWORD *)&v35[744]; /*0x1004cce7e*/
    if ( *(_QWORD *)&v35[744] ) /*0x1004cce85*/
    {
      v24 = (_QWORD *)(*(_QWORD *)&v35[736] + 32LL); /*0x1004cce8b*/
      do /*0x1004ccea7*/
      {
        v25 = *(v24 - 4); /*0x1004ccea9*/
        if ( v25 ) /*0x1004cceb0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v24 - 3), v25, 1); /*0x1004ccebb*/
        v26 = *(v24 - 1); /*0x1004ccec0*/
        if ( v26 ) /*0x1004ccec7*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x1004cced1*/
        v24 += 6; /*0x1004ccea0*/
        --v23; /*0x1004ccea4*/
      }
      while ( v23 ); /*0x1004ccea7*/
    }
    if ( *(_QWORD *)&v35[728] ) /*0x1004ccedf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v35[736], 48LL * *(_QWORD *)&v35[728], 8); /*0x1004ccef2*/
    goto LABEL_46; /*0x1004ccef2*/
  }
LABEL_20:
  memcpy(__dst, v29, 0x2A8u); /*0x1004ccd69*/
  if ( *(_QWORD *)&v29[680] ) /*0x1004ccd87*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v29[688], *(_QWORD *)&v29[680], 1); /*0x1004ccd95*/
  if ( *(_QWORD *)&v29[704] ) /*0x1004ccda4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v29[712], *(_QWORD *)&v29[704], 1); /*0x1004ccdb2*/
  v19 = *(_QWORD *)&v29[744]; /*0x1004ccdb7*/
  if ( *(_QWORD *)&v29[744] ) /*0x1004ccdc1*/
  {
    v20 = (_QWORD *)(*(_QWORD *)&v29[736] + 32LL); /*0x1004ccdca*/
    do /*0x1004ccdd7*/
    {
      v21 = *(v20 - 4); /*0x1004ccdd9*/
      if ( v21 ) /*0x1004ccde0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 3), v21, 1); /*0x1004ccdeb*/
      v22 = *(v20 - 1); /*0x1004ccdf0*/
      if ( v22 ) /*0x1004ccdf7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v22, 1); /*0x1004cce01*/
      v20 += 6; /*0x1004ccdd0*/
      --v19; /*0x1004ccdd4*/
    }
    while ( v19 ); /*0x1004ccdd7*/
  }
  if ( *(_QWORD *)&v29[728] ) /*0x1004cce12*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v29[736], 48LL * *(_QWORD *)&v29[728], 8); /*0x1004cce2c*/
  return __dst; /*0x1004ccf06*/
}