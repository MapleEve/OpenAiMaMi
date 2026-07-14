// mac 1.1.8 refresh_usage_snapshot node va=0x10052b230 depth=2
// codexmate_lib4core10repository10Repository23load_local_state_synced
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_local_state_synced::hc043a16a3128e6a8(
        _QWORD *__dst,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // r14
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  const void *v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  _QWORD v23[116]; // [rsp+10h] [rbp-830h] BYREF
  _BYTE v24[104]; // [rsp+3B0h] [rbp-490h] BYREF
  _BYTE __src[824]; // [rsp+418h] [rbp-428h] BYREF
  _QWORD v26[3]; // [rsp+750h] [rbp-F0h] BYREF
  _QWORD v27[12]; // [rsp+768h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+7C8h] [rbp-78h] BYREF
  __int64 (__fastcall *v29)(_QWORD, _QWORD); // [rsp+7D0h] [rbp-70h]
  __int64 v30; // [rsp+7D8h] [rbp-68h]
  __int64 v31; // [rsp+7E0h] [rbp-60h]
  __int64 v32; // [rsp+7E8h] [rbp-58h]
  __int64 v33; // [rsp+7F0h] [rbp-50h]
  __int64 v34; // [rsp+7F8h] [rbp-48h]
  __int64 v35; // [rsp+800h] [rbp-40h] BYREF
  __int64 v36; // [rsp+808h] [rbp-38h]
  __int64 v37; // [rsp+810h] [rbp-30h]

  codexmate_lib::core::repository::Repository::sync_local_runtime_state::h302170dd703d5dc4(v24, a2); /*0x10052b251*/
  v2 = *(_QWORD *)v24; /*0x10052b256*/
  v23[0] = *(_QWORD *)&v24[8]; /*0x10052b264*/
  v23[1] = *(_QWORD *)&v24[16]; /*0x10052b272*/
  v23[2] = *(_QWORD *)&v24[24]; /*0x10052b280*/
  if ( *(_QWORD *)v24 != 10 ) /*0x10052b28b*/
  {
    __dst[12] = *(_QWORD *)&v24[88]; /*0x10052b367*/
    __dst[11] = *(_QWORD *)&v24[80]; /*0x10052b372*/
    __dst[10] = *(_QWORD *)&v24[72]; /*0x10052b37d*/
    __dst[9] = *(_QWORD *)&v24[64]; /*0x10052b388*/
    __dst[8] = *(_QWORD *)&v24[56]; /*0x10052b393*/
    __dst[7] = *(_QWORD *)&v24[48]; /*0x10052b39e*/
    v8 = *(_QWORD *)&v24[32]; /*0x10052b3a2*/
    __dst[6] = *(_QWORD *)&v24[40]; /*0x10052b3b0*/
    __dst[5] = v8; /*0x10052b3b4*/
    __dst[4] = v23[2]; /*0x10052b3bf*/
    v9 = v23[0]; /*0x10052b3c3*/
    __dst[3] = v23[1]; /*0x10052b3d1*/
    __dst[2] = v9; /*0x10052b3d5*/
    __dst[1] = v2; /*0x10052b3d9*/
    *__dst = 2; /*0x10052b3dd*/
    return __dst; /*0x10052b3e4*/
  }
  v35 = v23[0]; /*0x10052b29f*/
  v36 = v23[1]; /*0x10052b2a3*/
  v37 = v23[2]; /*0x10052b2ae*/
  codexmate_lib::core::repository::Repository::load_local_state::h7cf5c9b025f9346c(v24); /*0x10052b2bc*/
  qmemcpy(v27, &v24[8], sizeof(v27)); /*0x10052b2db*/
  if ( *(_QWORD *)v24 == 2 ) /*0x10052b2e2*/
  {
    qmemcpy(__dst + 1, v27, 0x60u); /*0x10052b2f8*/
    *__dst = 2; /*0x10052b2fb*/
    v3 = v36; /*0x10052b302*/
    v4 = v37; /*0x10052b306*/
    if ( v37 ) /*0x10052b30d*/
    {
      v5 = (_QWORD *)(v36 + 32); /*0x10052b313*/
      do /*0x10052b327*/
      {
        v6 = *(v5 - 4); /*0x10052b32d*/
        if ( v6 ) /*0x10052b335*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x10052b341*/
        v7 = *(v5 - 1); /*0x10052b346*/
        if ( v7 ) /*0x10052b34e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x10052b359*/
        v5 += 6; /*0x10052b320*/
        --v4; /*0x10052b324*/
      }
      while ( v4 ); /*0x10052b327*/
    }
    if ( v35 ) /*0x10052b4cf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v35, 8); /*0x10052b4e5*/
    return __dst; /*0x10052b4ea*/
  }
  memcpy(&v23[13], __src, 0x338u); /*0x10052b3fc*/
  qmemcpy(&v23[1], v27, 0x60u); /*0x10052b414*/
  v23[0] = *(_QWORD *)v24; /*0x10052b417*/
  if ( (v23[91] & 1) != 0 ) /*0x10052b425*/
  {
    v10 = a2[79]; /*0x10052b42b*/
    v11 = a2[80]; /*0x10052b432*/
    if ( (unsigned __int8)codexmate_lib::platform::daemon::check_daemon_state::h0fbeb3d43845c30f(v10, v11) ) /*0x10052b43f*/
    {
      codexmate_lib::core::repository::Repository::resolve_daemon_binary::h688ddc310536ab50(v24); /*0x10052b453*/
      v12 = *(_QWORD *)&v24[16]; /*0x10052b466*/
      if ( *(_QWORD *)v24 == 10 ) /*0x10052b478*/
      {
        v34 = *(_QWORD *)&v24[8]; /*0x10052b47a*/
        codexmate_lib::platform::daemon::install_daemon::hdeeec86e4023ee95( /*0x10052b49a*/
          v27,
          v10,
          v11,
          *(_QWORD *)&v24[16],
          *(_QWORD *)&v24[24],
          a2[1],
          a2[2]);
        if ( v34 ) /*0x10052b4a6*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v34, 1); /*0x10052b4b0*/
        if ( v27[0] == 10 ) /*0x10052b4bd*/
          goto LABEL_25; /*0x10052b4bd*/
      }
      else
      {
        v27[11] = *(_QWORD *)&v24[88]; /*0x10052b4f6*/
        v27[10] = *(_QWORD *)&v24[80]; /*0x10052b501*/
        v27[9] = *(_QWORD *)&v24[72]; /*0x10052b50f*/
        v27[8] = *(_QWORD *)&v24[64]; /*0x10052b51d*/
        v27[7] = *(_QWORD *)&v24[56]; /*0x10052b52b*/
        v27[6] = *(_QWORD *)&v24[48]; /*0x10052b539*/
        v27[5] = *(_QWORD *)&v24[40]; /*0x10052b54e*/
        v27[4] = *(_QWORD *)&v24[32]; /*0x10052b555*/
        v27[1] = *(_QWORD *)&v24[8]; /*0x10052b55c*/
        v27[2] = *(_QWORD *)&v24[16]; /*0x10052b563*/
        v27[3] = *(_QWORD *)&v24[24]; /*0x10052b56a*/
        v27[0] = *(_QWORD *)v24; /*0x10052b571*/
      }
      qmemcpy(v24, v27, 0x60u); /*0x10052b58e*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v24[96]); /*0x10052b591*/
      v13 = (__int64 (__fastcall *)(_QWORD, _QWORD))_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x10052b5a0*/
      if ( !v13 ) /*0x10052b5a8*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x10052b7ae*/
      v14 = v13; /*0x10052b5ae*/
      qmemcpy(v13, "AUTO_SWITCH_DAEMON_REPAIR_FAILED", 32); /*0x10052b5e5*/
      v28 = (__int64)v24; /*0x10052b5e8*/
      v29 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb; /*0x10052b5f3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_10122AE06, &v28); /*0x10052b609*/
      v28 = 32; /*0x10052b60e*/
      v29 = v14; /*0x10052b616*/
      v30 = 32; /*0x10052b61a*/
      v31 = v26[0]; /*0x10052b630*/
      v32 = v26[1]; /*0x10052b634*/
      v33 = v26[2]; /*0x10052b63f*/
      v15 = v37; /*0x10052b643*/
      if ( v37 == v35 ) /*0x10052b64b*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(&v35); /*0x10052b651*/
      v16 = v36; /*0x10052b656*/
      v17 = 48 * v15; /*0x10052b65e*/
      *(_QWORD *)(v36 + v17 + 40) = v33; /*0x10052b666*/
      *(_QWORD *)(v16 + v17 + 32) = v32; /*0x10052b66f*/
      *(_QWORD *)(v16 + v17 + 24) = v31; /*0x10052b678*/
      *(_QWORD *)(v16 + v17 + 16) = v30; /*0x10052b681*/
      v18 = v28; /*0x10052b686*/
      *(_QWORD *)(v16 + v17 + 8) = v29; /*0x10052b68e*/
      *(_QWORD *)(v16 + v17) = v18; /*0x10052b693*/
      v37 = v15 + 1; /*0x10052b69a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v24); /*0x10052b6a5*/
    }
  }
LABEL_25:
  v19 = (const void *)v23[102]; /*0x10052b6aa*/
  v20 = v23[103]; /*0x10052b6b1*/
  v21 = v37; /*0x10052b6bc*/
  if ( v23[103] > (unsigned __int64)(v35 - v37) ) /*0x10052b6c6*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v35, v37, v23[103], 8, 48); /*0x10052b796*/
    v21 = v37; /*0x10052b79b*/
  }
  memcpy((void *)(v36 + 48 * v21), v19, 48 * v20); /*0x10052b6ed*/
  v37 += v20; /*0x10052b6f6*/
  *(_QWORD *)&v24[16] = v37; /*0x10052b6fa*/
  *(_QWORD *)&v24[8] = v36; /*0x10052b709*/
  *(_QWORD *)v24 = v35; /*0x10052b710*/
  if ( v23[101] ) /*0x10052b721*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 48LL * v23[101], 8); /*0x10052b733*/
  v23[103] = *(_QWORD *)&v24[16]; /*0x10052b73f*/
  v23[102] = *(_QWORD *)&v24[8]; /*0x10052b752*/
  v23[101] = *(_QWORD *)v24; /*0x10052b757*/
  memcpy(__dst, v23, 0x3A0u); /*0x10052b76a*/
  return __dst; /*0x10052b772*/
}