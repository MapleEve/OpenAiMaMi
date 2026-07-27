// __ZN13codexmate_lib4core10repository10Repository23load_local_state_synced @ 0x100a5ddf0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::load_local_state_synced::h0314942615eeca59(
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
  __int64 v10; // r9
  void *v11; // r13
  size_t v12; // r15
  __int64 v13; // r12
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // r14
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  const void *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  _QWORD v24[134]; // [rsp+10h] [rbp-950h] BYREF
  _BYTE v25[104]; // [rsp+440h] [rbp-520h] BYREF
  _BYTE __src[968]; // [rsp+4A8h] [rbp-4B8h] BYREF
  _QWORD v27[3]; // [rsp+870h] [rbp-F0h] BYREF
  _QWORD v28[12]; // [rsp+888h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+8E8h] [rbp-78h] BYREF
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+8F0h] [rbp-70h]
  __int64 v31; // [rsp+8F8h] [rbp-68h]
  __int64 v32; // [rsp+900h] [rbp-60h]
  __int64 v33; // [rsp+908h] [rbp-58h]
  __int64 v34; // [rsp+910h] [rbp-50h]
  __int64 v35; // [rsp+918h] [rbp-48h]
  __int64 v36; // [rsp+920h] [rbp-40h] BYREF
  __int64 v37; // [rsp+928h] [rbp-38h]
  __int64 v38; // [rsp+930h] [rbp-30h]

  codexmate_lib::core::repository::Repository::sync_local_runtime_state::h9a275b158e989503(v25, a2); /*0x100a5de11*/
  v2 = *(_QWORD *)v25; /*0x100a5de16*/
  v24[0] = *(_QWORD *)&v25[8]; /*0x100a5de24*/
  v24[1] = *(_QWORD *)&v25[16]; /*0x100a5de32*/
  v24[2] = *(_QWORD *)&v25[24]; /*0x100a5de40*/
  if ( *(_QWORD *)v25 != 11 ) /*0x100a5de4b*/
  {
    __dst[12] = *(_QWORD *)&v25[88]; /*0x100a5df27*/
    __dst[11] = *(_QWORD *)&v25[80]; /*0x100a5df32*/
    __dst[10] = *(_QWORD *)&v25[72]; /*0x100a5df3d*/
    __dst[9] = *(_QWORD *)&v25[64]; /*0x100a5df48*/
    __dst[8] = *(_QWORD *)&v25[56]; /*0x100a5df53*/
    __dst[7] = *(_QWORD *)&v25[48]; /*0x100a5df5e*/
    v8 = *(_QWORD *)&v25[32]; /*0x100a5df62*/
    __dst[6] = *(_QWORD *)&v25[40]; /*0x100a5df70*/
    __dst[5] = v8; /*0x100a5df74*/
    __dst[4] = v24[2]; /*0x100a5df7f*/
    v9 = v24[0]; /*0x100a5df83*/
    __dst[3] = v24[1]; /*0x100a5df91*/
    __dst[2] = v9; /*0x100a5df95*/
    __dst[1] = v2; /*0x100a5df99*/
    *__dst = 2; /*0x100a5df9d*/
    return __dst; /*0x100a5dfa4*/
  }
  v36 = v24[0]; /*0x100a5de5f*/
  v37 = v24[1]; /*0x100a5de63*/
  v38 = v24[2]; /*0x100a5de6e*/
  codexmate_lib::core::repository::Repository::load_local_state::h0e6ef74d3b184ef0(v25, a2); /*0x100a5de7c*/
  qmemcpy(v28, &v25[8], sizeof(v28)); /*0x100a5de9b*/
  if ( *(_QWORD *)v25 == 2 ) /*0x100a5dea2*/
  {
    qmemcpy(__dst + 1, v28, 0x60u); /*0x100a5deb8*/
    *__dst = 2; /*0x100a5debb*/
    v3 = v37; /*0x100a5dec2*/
    v4 = v38; /*0x100a5dec6*/
    if ( v38 ) /*0x100a5decd*/
    {
      v5 = (_QWORD *)(v37 + 32); /*0x100a5ded3*/
      do /*0x100a5dee7*/
      {
        v6 = *(v5 - 4); /*0x100a5deed*/
        if ( v6 ) /*0x100a5def5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v5 - 3), v6, 1); /*0x100a5df01*/
        v7 = *(v5 - 1); /*0x100a5df06*/
        if ( v7 ) /*0x100a5df0e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v5, v7, 1); /*0x100a5df19*/
        v5 += 6; /*0x100a5dee0*/
        --v4; /*0x100a5dee4*/
      }
      while ( v4 ); /*0x100a5dee7*/
    }
    if ( v36 ) /*0x100a5e08f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 48 * v36, 8); /*0x100a5e0a5*/
    return __dst; /*0x100a5e0aa*/
  }
  memcpy(&v24[13], __src, 0x3C8u); /*0x100a5dfbc*/
  qmemcpy(&v24[1], v28, 0x60u); /*0x100a5dfd4*/
  v24[0] = *(_QWORD *)v25; /*0x100a5dfd7*/
  if ( (v24[93] & 1) != 0 ) /*0x100a5dfe5*/
  {
    v11 = (void *)a2[79]; /*0x100a5dfeb*/
    v12 = a2[80]; /*0x100a5dff2*/
    if ( (unsigned __int8)codexmate_lib::platform::daemon::check_daemon_state::hcbc03433a17a641c((__int64)v11, v12) ) /*0x100a5dfff*/
    {
      codexmate_lib::core::repository::Repository::resolve_daemon_binary::h8f3b0e04c1a4350c(v25); /*0x100a5e013*/
      v13 = *(_QWORD *)&v25[16]; /*0x100a5e026*/
      if ( *(_QWORD *)v25 == 11 ) /*0x100a5e038*/
      {
        v35 = *(_QWORD *)&v25[8]; /*0x100a5e03a*/
        codexmate_lib::platform::daemon::install_daemon::h8900ce8616dff972( /*0x100a5e05a*/
          v28,
          v11,
          v12,
          *(__int64 *)&v25[16],
          *(__int64 *)&v25[24],
          a2[1],
          a2[2]);
        if ( v35 ) /*0x100a5e066*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v35, 1); /*0x100a5e070*/
        if ( v28[0] == 11 ) /*0x100a5e07d*/
          goto LABEL_25; /*0x100a5e07d*/
      }
      else
      {
        v28[11] = *(_QWORD *)&v25[88]; /*0x100a5e0b6*/
        v28[10] = *(_QWORD *)&v25[80]; /*0x100a5e0c1*/
        v28[9] = *(_QWORD *)&v25[72]; /*0x100a5e0cf*/
        v28[8] = *(_QWORD *)&v25[64]; /*0x100a5e0dd*/
        v28[7] = *(_QWORD *)&v25[56]; /*0x100a5e0eb*/
        v28[6] = *(_QWORD *)&v25[48]; /*0x100a5e0f9*/
        v28[5] = *(_QWORD *)&v25[40]; /*0x100a5e10e*/
        v28[4] = *(_QWORD *)&v25[32]; /*0x100a5e115*/
        v28[1] = *(_QWORD *)&v25[8]; /*0x100a5e11c*/
        v28[2] = *(_QWORD *)&v25[16]; /*0x100a5e123*/
        v28[3] = *(_QWORD *)&v25[24]; /*0x100a5e12a*/
        v28[0] = *(_QWORD *)v25; /*0x100a5e131*/
      }
      qmemcpy(v25, v28, 0x60u); /*0x100a5e14e*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v25[96], &v29); /*0x100a5e151*/
      v14 = (__int64 (__fastcall *)(_QWORD, _QWORD))_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100a5e160*/
      if ( !v14 ) /*0x100a5e168*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100a5e36e*/
      v15 = v14; /*0x100a5e16e*/
      qmemcpy(v14, "AUTO_SWITCH_DAEMON_REPAIR_FAILED", 32); /*0x100a5e1a5*/
      v29 = (__int64)v25; /*0x100a5e1a8*/
      v30 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a5e1b3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v27, &unk_1017C9342, &v29); /*0x100a5e1c9*/
      v29 = 32; /*0x100a5e1ce*/
      v30 = v15; /*0x100a5e1d6*/
      v31 = 32; /*0x100a5e1da*/
      v32 = v27[0]; /*0x100a5e1f0*/
      v33 = v27[1]; /*0x100a5e1f4*/
      v34 = v27[2]; /*0x100a5e1ff*/
      v16 = v38; /*0x100a5e203*/
      if ( v38 == v36 ) /*0x100a5e20b*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v36); /*0x100a5e211*/
      v17 = v37; /*0x100a5e216*/
      v18 = 48 * v16; /*0x100a5e21e*/
      *(_QWORD *)(v37 + v18 + 40) = v34; /*0x100a5e226*/
      *(_QWORD *)(v17 + v18 + 32) = v33; /*0x100a5e22f*/
      *(_QWORD *)(v17 + v18 + 24) = v32; /*0x100a5e238*/
      *(_QWORD *)(v17 + v18 + 16) = v31; /*0x100a5e241*/
      v19 = v29; /*0x100a5e246*/
      *(_QWORD *)(v17 + v18 + 8) = v30; /*0x100a5e24e*/
      *(_QWORD *)(v17 + v18) = v19; /*0x100a5e253*/
      v38 = v16 + 1; /*0x100a5e25a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v25); /*0x100a5e265*/
    }
  }
LABEL_25:
  v20 = (const void *)v24[105]; /*0x100a5e26a*/
  v21 = v24[106]; /*0x100a5e271*/
  v22 = v38; /*0x100a5e27c*/
  if ( v24[106] > (unsigned __int64)(v36 - v38) ) /*0x100a5e286*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a5e356*/
      &v36,
      v38,
      v24[106],
      8,
      48,
      v10);
    v22 = v38; /*0x100a5e35b*/
  }
  memcpy((void *)(v37 + 48 * v22), v20, 48 * v21); /*0x100a5e2ad*/
  v38 += v21; /*0x100a5e2b6*/
  *(_QWORD *)&v25[16] = v38; /*0x100a5e2ba*/
  *(_QWORD *)&v25[8] = v37; /*0x100a5e2c9*/
  *(_QWORD *)v25 = v36; /*0x100a5e2d0*/
  if ( v24[104] ) /*0x100a5e2e1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 48LL * v24[104], 8); /*0x100a5e2f3*/
  v24[106] = *(_QWORD *)&v25[16]; /*0x100a5e2ff*/
  v24[105] = *(_QWORD *)&v25[8]; /*0x100a5e312*/
  v24[104] = *(_QWORD *)v25; /*0x100a5e317*/
  memcpy(__dst, v24, 0x430u); /*0x100a5e32a*/
  return __dst; /*0x100a5e332*/
}