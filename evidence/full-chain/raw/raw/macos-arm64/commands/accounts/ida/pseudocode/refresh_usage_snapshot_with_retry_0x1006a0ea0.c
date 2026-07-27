// __ZN13codexmate_lib8commands8accounts33refresh_usage_snapshot_with_retry @ 0x1006a0ea0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::accounts::refresh_usage_snapshot_with_retry::hd7f97f64701d2b32(
        _QWORD *__dst,
        __int64 a2,
        char a3,
        __m128 a4)
{
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(); // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // r9
  int v18; // edx
  unsigned __int16 v19; // ax
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // r14
  _QWORD *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // r14
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rsi
  _BYTE v32[864]; // [rsp+8h] [rbp-E28h] BYREF
  _BYTE v33[896]; // [rsp+368h] [rbp-AC8h] BYREF
  _BYTE *v34; // [rsp+6E8h] [rbp-748h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+6F0h] [rbp-740h]
  __int64 v36; // [rsp+6F8h] [rbp-738h]
  __int64 v37; // [rsp+700h] [rbp-730h]
  _BYTE __src[864]; // [rsp+708h] [rbp-728h] BYREF
  _BYTE v39[896]; // [rsp+A68h] [rbp-3C8h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+DE8h] [rbp-48h]
  __int64 v41; // [rsp+DF0h] [rbp-40h]
  __int64 v42; // [rsp+DF8h] [rbp-38h]
  int v43; // [rsp+E04h] [rbp-2Ch]

  v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1006a0ecf*/
  if ( !v6 ) /*0x1006a0ed7*/
  {
    *(_QWORD *)v39 = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006a156f*/
    *(_QWORD *)&v39[8] = 76; /*0x1006a1576*/
    v34 = v39; /*0x1006a1588*/
    v35 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a1596*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a15b2*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v34,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v7 = (__int64 *)v6; /*0x1006a0edd*/
  v43 = (unsigned __int8)codexmate_lib::commands::accounts::resolve_cached_auto_switch_service_state::h707237adce5d95c8(a2); /*0x1006a0ef5*/
  codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h3cc5d392f395a876((char *)&v34, v7, v43); /*0x1006a0ef8*/
  *(_QWORD *)v39 = v35; /*0x1006a0f0b*/
  *(_QWORD *)&v39[8] = v36; /*0x1006a0f19*/
  *(_QWORD *)&v39[16] = v37; /*0x1006a0f27*/
  if ( v34 == (_BYTE *)3 ) /*0x1006a0f32*/
  {
    __dst[3] = *(_QWORD *)&v39[16]; /*0x1006a0f3b*/
    v8 = *(_QWORD *)v39; /*0x1006a0f3f*/
    __dst[2] = *(_QWORD *)&v39[8]; /*0x1006a0f4d*/
    __dst[1] = v8; /*0x1006a0f51*/
    *__dst = 3; /*0x1006a0f55*/
    return __dst; /*0x1006a0f5c*/
  }
  memcpy(&v33[32], __src, 0x360u); /*0x1006a0f74*/
  *(_QWORD *)&v33[8] = *(_QWORD *)v39; /*0x1006a0f87*/
  *(_QWORD *)&v33[16] = *(_QWORD *)&v39[8]; /*0x1006a0f8e*/
  *(_QWORD *)&v33[24] = *(_QWORD *)&v39[16]; /*0x1006a0f9c*/
  *(_QWORD *)v33 = v34; /*0x1006a0fa3*/
  codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1006a0fc3*/
    a2,
    (__int64)v33,
    "usage",
    5u,
    nullptr,
    v9,
    a4);
  if ( a3 && v33[648] == 2 ) /*0x1006a0fd8*/
  {
    *(_QWORD *)v39 = std::time::SystemTime::now::h1fe79e41f9d5677f(a2, v33); /*0x1006a0fe3*/
    *(_DWORD *)&v39[8] = v10; /*0x1006a0fea*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v34, v39, 0, 0); /*0x1006a1002*/
    v11 = 800000000; /*0x1006a1032*/
    if ( !(_BYTE)v34 ) /*0x1006a1037*/
      v11 = 1000000 /*0x1006a1037*/
          * ((unsigned int)v36 - 200 * ((unsigned int)((42949673 * (unsigned __int64)(unsigned int)v36) >> 32) >> 1))
          + 800000000;
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, v11); /*0x1006a103c*/
    codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h3cc5d392f395a876((char *)&v34, v7, v43); /*0x1006a104e*/
    if ( v34 == (_BYTE *)3 ) /*0x1006a1065*/
      goto LABEL_9; /*0x1006a1065*/
    v42 = v37; /*0x1006a10a8*/
    v41 = v36; /*0x1006a10b3*/
    v40 = v35; /*0x1006a10b7*/
    memcpy(v32, __src, sizeof(v32)); /*0x1006a10c7*/
    *(_QWORD *)v39 = v34; /*0x1006a10cc*/
    *(_QWORD *)&v39[24] = v37; /*0x1006a10d7*/
    *(_QWORD *)&v39[16] = v36; /*0x1006a10e3*/
    *(_QWORD *)&v39[8] = v35; /*0x1006a10e7*/
    memcpy(&v39[32], v32, 0x360u); /*0x1006a10fe*/
    codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1006a111c*/
      a2,
      (__int64)v39,
      "usage",
      5u,
      nullptr,
      v14,
      a4);
    if ( v39[648] == 2 ) /*0x1006a1128*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h12516f312afacad3(v39); /*0x1006a1135*/
      *(_QWORD *)v39 = std::time::SystemTime::now::h1fe79e41f9d5677f(v39, v39); /*0x1006a113f*/
      *(_DWORD *)&v39[8] = v15; /*0x1006a1146*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v34, v39, 0, 0); /*0x1006a115e*/
      v16 = 600000000; /*0x1006a118e*/
      if ( !(_BYTE)v34 ) /*0x1006a1193*/
        v16 = 1000000 /*0x1006a1193*/
            * ((unsigned int)v36 - 200 * ((unsigned int)((42949673 * (unsigned __int64)(unsigned int)v36) >> 32) >> 1))
            + 600000000;
      std::thread::functions::sleep::h8fc88f8bc00bad5c(1, v16); /*0x1006a119b*/
      codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h3cc5d392f395a876((char *)&v34, v7, v43); /*0x1006a11ad*/
      if ( v34 == (_BYTE *)3 ) /*0x1006a11c4*/
        goto LABEL_9; /*0x1006a11c4*/
      v42 = v37; /*0x1006a11ce*/
      v41 = v36; /*0x1006a11d9*/
      v40 = v35; /*0x1006a11dd*/
      memcpy(v32, __src, sizeof(v32)); /*0x1006a11f7*/
      *(_QWORD *)v39 = v34; /*0x1006a11fc*/
      *(_QWORD *)&v39[24] = v37; /*0x1006a120e*/
      *(_QWORD *)&v39[16] = v36; /*0x1006a121a*/
      *(_QWORD *)&v39[8] = v35; /*0x1006a121e*/
      memcpy(&v39[32], v32, 0x360u); /*0x1006a1230*/
      codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1006a124e*/
        a2,
        (__int64)v39,
        "usage",
        5u,
        nullptr,
        v17,
        a4);
      if ( v39[648] != 2 ) /*0x1006a125a*/
        goto LABEL_33; /*0x1006a125a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h12516f312afacad3(v39); /*0x1006a1267*/
      *(_QWORD *)v39 = std::time::SystemTime::now::h1fe79e41f9d5677f(v39, v39); /*0x1006a1271*/
      *(_DWORD *)&v39[8] = v18; /*0x1006a1278*/
      std::time::SystemTime::duration_since::had059553cab94f96(&v34, v39, 0, 0); /*0x1006a1290*/
      v19 = v36 - 200 * ((42949673 * (unsigned __int64)(unsigned int)v36) >> 33) + 3200; /*0x1006a12ae*/
      v20 = 1000000 * (unsigned __int16)(v19 - 1000 * ((unsigned __int16)((4195 * (unsigned int)v19) >> 16) >> 6)); /*0x1006a12ca*/
      v21 = 200000000; /*0x1006a12d7*/
      if ( !(_BYTE)v34 ) /*0x1006a12dc*/
        v21 = v20; /*0x1006a12dc*/
      std::thread::functions::sleep::h8fc88f8bc00bad5c(3, v21); /*0x1006a12e4*/
      codexmate_lib::commands::accounts::load_usage_only_runtime_snapshot::h3cc5d392f395a876((char *)&v34, v7, v43); /*0x1006a12f6*/
      if ( v34 == (_BYTE *)3 ) /*0x1006a130d*/
      {
LABEL_9:
        v42 = v37; /*0x1006a1067*/
        v12 = v35; /*0x1006a106f*/
        v13 = v36; /*0x1006a1072*/
        v41 = v36; /*0x1006a1076*/
        v40 = v35; /*0x1006a107a*/
        __dst[3] = v37; /*0x1006a107e*/
        __dst[2] = v13; /*0x1006a1082*/
        __dst[1] = v12; /*0x1006a1086*/
        *__dst = 3; /*0x1006a108a*/
LABEL_46:
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h12516f312afacad3(v33); /*0x1006a1547*/
        return __dst; /*0x1006a154e*/
      }
      v42 = v37; /*0x1006a1317*/
      v41 = v36; /*0x1006a1322*/
      v40 = v35; /*0x1006a1326*/
      memcpy(v32, __src, sizeof(v32)); /*0x1006a1340*/
      *(_QWORD *)v39 = v34; /*0x1006a1345*/
      *(_QWORD *)&v39[24] = v37; /*0x1006a1357*/
      *(_QWORD *)&v39[16] = v36; /*0x1006a1363*/
      *(_QWORD *)&v39[8] = v35; /*0x1006a1367*/
      memcpy(&v39[32], v32, 0x360u); /*0x1006a1379*/
      codexmate_lib::commands::accounts::broadcast_runtime_snapshot_with_account::h4b255ecc5717b597( /*0x1006a1397*/
        a2,
        (__int64)v39,
        "usage",
        5u,
        nullptr,
        v22,
        a4);
      if ( v39[648] == 2 ) /*0x1006a13a3*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h12516f312afacad3(v39); /*0x1006a13b0*/
        goto LABEL_20; /*0x1006a13b0*/
      }
    }
LABEL_33:
    memcpy(__dst, v39, 0x330u); /*0x1006a1486*/
    if ( *(_QWORD *)&v39[816] ) /*0x1006a14a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v39[824], *(_QWORD *)&v39[816], 1); /*0x1006a14b2*/
    if ( *(_QWORD *)&v39[840] ) /*0x1006a14be*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v39[848], *(_QWORD *)&v39[840], 1); /*0x1006a14c9*/
    v27 = *(_QWORD *)&v39[880]; /*0x1006a14ce*/
    if ( *(_QWORD *)&v39[880] ) /*0x1006a14d5*/
    {
      v28 = (_QWORD *)(*(_QWORD *)&v39[872] + 32LL); /*0x1006a14db*/
      do /*0x1006a14f7*/
      {
        v29 = *(v28 - 4); /*0x1006a14f9*/
        if ( v29 ) /*0x1006a1500*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v28 - 3), v29, 1); /*0x1006a150b*/
        v30 = *(v28 - 1); /*0x1006a1510*/
        if ( v30 ) /*0x1006a1517*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v28, v30, 1); /*0x1006a1521*/
        v28 += 6; /*0x1006a14f0*/
        --v27; /*0x1006a14f4*/
      }
      while ( v27 ); /*0x1006a14f7*/
    }
    if ( *(_QWORD *)&v39[864] ) /*0x1006a152f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v39[872], 48LL * *(_QWORD *)&v39[864], 8); /*0x1006a1542*/
    goto LABEL_46; /*0x1006a1542*/
  }
LABEL_20:
  memcpy(__dst, v33, 0x330u); /*0x1006a13b5*/
  if ( *(_QWORD *)&v33[816] ) /*0x1006a13d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v33[824], *(_QWORD *)&v33[816], 1); /*0x1006a13e1*/
  if ( *(_QWORD *)&v33[840] ) /*0x1006a13f0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v33[848], *(_QWORD *)&v33[840], 1); /*0x1006a13fe*/
  v23 = *(_QWORD *)&v33[880]; /*0x1006a1403*/
  if ( *(_QWORD *)&v33[880] ) /*0x1006a140d*/
  {
    v24 = (_QWORD *)(*(_QWORD *)&v33[872] + 32LL); /*0x1006a1416*/
    do /*0x1006a1427*/
    {
      v25 = *(v24 - 4); /*0x1006a1429*/
      if ( v25 ) /*0x1006a1430*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v24 - 3), v25, 1); /*0x1006a143b*/
      v26 = *(v24 - 1); /*0x1006a1440*/
      if ( v26 ) /*0x1006a1447*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x1006a1451*/
      v24 += 6; /*0x1006a1420*/
      --v23; /*0x1006a1424*/
    }
    while ( v23 ); /*0x1006a1427*/
  }
  if ( *(_QWORD *)&v33[864] ) /*0x1006a1462*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v33[872], 48LL * *(_QWORD *)&v33[864], 8); /*0x1006a147c*/
  return __dst; /*0x1006a1556*/
}