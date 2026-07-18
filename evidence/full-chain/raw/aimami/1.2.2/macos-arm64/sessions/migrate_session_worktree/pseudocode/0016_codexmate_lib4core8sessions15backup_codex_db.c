// mac 1.2.2 NEW migrate_session_worktree 0x1013bd520 d=1
_QWORD *__fastcall codexmate_lib::core::sessions::backup_codex_db::h0658f865f6f24e9d(
        void *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  _QWORD *result; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 i; // r12
  __int64 v15; // r13
  size_t v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  size_t v19; // r15
  __int64 (__fastcall *v20)(); // rdi
  _QWORD *v21; // r12
  size_t v22; // r14
  const void *v23; // r15
  size_t v24; // rbx
  __int64 v25; // r12
  size_t *v26; // rax
  _QWORD *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  _BYTE v30[105]; // [rsp+10h] [rbp-200h] BYREF
  _BYTE v31[7]; // [rsp+79h] [rbp-197h]
  _QWORD v32[13]; // [rsp+80h] [rbp-190h] BYREF
  _QWORD *v33; // [rsp+E8h] [rbp-128h]
  __int64 v34; // [rsp+F0h] [rbp-120h]
  size_t v35[13]; // [rsp+F8h] [rbp-118h] BYREF
  char v36; // [rsp+160h] [rbp-B0h]
  _BYTE v37[7]; // [rsp+161h] [rbp-AFh]
  __int64 v38; // [rsp+168h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+170h] [rbp-A0h]
  __int64 v40; // [rsp+178h] [rbp-98h]
  _QWORD v41[3]; // [rsp+180h] [rbp-90h] BYREF
  __int64 v42; // [rsp+198h] [rbp-78h]
  size_t *v43; // [rsp+1A0h] [rbp-70h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+1A8h] [rbp-68h]
  __int64 v45; // [rsp+1B0h] [rbp-60h]
  size_t *v46; // [rsp+1B8h] [rbp-58h]
  __int64 v47; // [rsp+1C0h] [rbp-50h]
  size_t v48; // [rsp+1C8h] [rbp-48h]
  size_t *v49; // [rsp+1D0h] [rbp-40h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+1D8h] [rbp-38h]
  __int64 v51; // [rsp+1E0h] [rbp-30h]

  codexmate_lib::core::sessions::migration_backup_path::h0db2c837090f31bd( /*0x1013bd566*/
    (unsigned int)&v38,
    a4,
    a5,
    a6,
    a7,
    (unsigned int)&unk_1015A20B5,
    12);
  codexmate_lib::core::sessions::open_codex_db::h9a3f1ae251dcfdc1(v35, a2, a3, 0); /*0x1013bd57a*/
  result = v32; /*0x1013bd586*/
  if ( v36 == 3 ) /*0x1013bd597*/
  {
    qmemcpy(v32, v35, 0x60u); /*0x1013bd5a1*/
    qmemcpy(a1, v32, 0x60u); /*0x1013bd5af*/
    goto LABEL_3; /*0x1013bd5af*/
  }
  qmemcpy(v32, v35, sizeof(v32)); /*0x1013bd5e9*/
  *(_DWORD *)&v31[3] = *(_DWORD *)&v37[3]; /*0x1013bd5f8*/
  *(_DWORD *)v31 = *(_DWORD *)v37; /*0x1013bd5fe*/
  qmemcpy(v30, v32, 0x68u); /*0x1013bd613*/
  v30[104] = v36; /*0x1013bd616*/
  v9 = v39; /*0x1013bd61c*/
  v10 = v40; /*0x1013bd623*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v43, v39, v40); /*0x1013bd634*/
  v48 = (size_t)v44; /*0x1013bd63d*/
  v46 = (size_t *)v45; /*0x1013bd645*/
  if ( v45 < 0 ) /*0x1013bd64c*/
  {
    v11 = 0; /*0x1013bd64e*/
    goto LABEL_8; /*0x1013bd64e*/
  }
  v33 = a1; /*0x1013bd661*/
  v42 = v9; /*0x1013bd668*/
  v34 = v10; /*0x1013bd66c*/
  if ( v45 ) /*0x1013bd673*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013bd675*/
    v11 = 1; /*0x1013bd67a*/
    v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v46, 1u); /*0x1013bd688*/
    if ( !v12 ) /*0x1013bd690*/
LABEL_8:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11); /*0x1013bd650*/
  }
  else
  {
    v12 = 1; /*0x1013bd694*/
  }
  v49 = v46; /*0x1013bd69d*/
  v47 = v12; /*0x1013bd6a1*/
  v50 = (__int64 (__fastcall *)())v12; /*0x1013bd6a5*/
  v51 = 0; /*0x1013bd6a9*/
  v35[0] = v48; /*0x1013bd6b5*/
  v35[1] = (size_t)v46; /*0x1013bd6bc*/
  v35[2] = 0; /*0x1013bd6c3*/
  v35[3] = (size_t)v46; /*0x1013bd6ce*/
  v35[4] = 0x2700000027LL; /*0x1013bd6df*/
  LOBYTE(v35[5]) = 1; /*0x1013bd6e6*/
  v13 = 0; /*0x1013bd6ed*/
  for ( i = 0; ; i = v15 ) /*0x1013bd6f0*/
  {
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1013bd70e*/
      v32,
      v35);
    if ( !LOBYTE(v32[0]) ) /*0x1013bd71a*/
      break; /*0x1013bd71a*/
    v15 = v32[2]; /*0x1013bd727*/
    v16 = v32[1] - i; /*0x1013bd72e*/
    v17 = (unsigned __int64)v49; /*0x1013bd731*/
    if ( v32[1] - i > (unsigned __int64)v49 - v13 ) /*0x1013bd73e*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1013bd794*/
        (unsigned __int64 *)&v49,
        v13,
        v32[1] - i,
        1,
        1u);
      v13 = v51; /*0x1013bd799*/
      v17 = (unsigned __int64)v49; /*0x1013bd79d*/
      v47 = (__int64)v50; /*0x1013bd7a5*/
    }
    memcpy((void *)(v47 + v13), (const void *)(v48 + i), v16); /*0x1013bd752*/
    v18 = v16 + v13; /*0x1013bd757*/
    v51 = v18; /*0x1013bd75a*/
    if ( v17 - v18 <= 1 ) /*0x1013bd765*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1013bd7c2*/
        (unsigned __int64 *)&v49,
        v18,
        2,
        1,
        1u);
      v47 = (__int64)v50; /*0x1013bd7cb*/
      v18 = v51; /*0x1013bd7cf*/
    }
    *(_WORD *)(v47 + v18) = 10023; /*0x1013bd76b*/
    v13 = v18 + 2; /*0x1013bd772*/
    v51 = v13; /*0x1013bd776*/
  }
  v19 = (size_t)v46 - i; /*0x1013bd7e3*/
  if ( (char *)v46 - i > (char *)v49 - v13 ) /*0x1013bd7e9*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e( /*0x1013bdb01*/
      (unsigned __int64 *)&v49,
      v13,
      (__int64)v46 - i,
      1,
      1u);
    v20 = v50; /*0x1013bdb06*/
    v13 = v51; /*0x1013bdb0a*/
  }
  else
  {
    v20 = (__int64 (__fastcall *)())v47; /*0x1013bd7ef*/
  }
  memcpy((char *)v20 + v13, (const void *)(v48 + i), v19); /*0x1013bd803*/
  v41[2] = v19 + v13; /*0x1013bd80b*/
  v41[0] = v49; /*0x1013bd817*/
  v41[1] = v50; /*0x1013bd81e*/
  if ( 2LL * (_QWORD)v43 ) /*0x1013bd829*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bd83e*/
  v49 = v41; /*0x1013bd84a*/
  v50 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1013bd855*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, byte_1016FE985, (unsigned __int64)&v49); /*0x1013bd86e*/
  v21 = v33; /*0x1013bd873*/
  v22 = v35[0]; /*0x1013bd87a*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v32, v30, v35[1], v35[2]); /*0x1013bd8a0*/
  if ( v32[0] != 0x8000000000000016LL ) /*0x1013bd8b6*/
  {
    v35[7] = v32[7]; /*0x1013bd912*/
    v35[6] = v32[6]; /*0x1013bd920*/
    v35[5] = v32[5]; /*0x1013bd92e*/
    v35[4] = v32[4]; /*0x1013bd93c*/
    v35[3] = v32[3]; /*0x1013bd94a*/
    v35[2] = v32[2]; /*0x1013bd958*/
    v35[1] = v32[1]; /*0x1013bd96d*/
    v35[0] = v32[0]; /*0x1013bd974*/
    v43 = v35; /*0x1013bd97b*/
    v44 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1013bd986*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v49, byte_1016FE99C, (unsigned __int64)&v43); /*0x1013bd999*/
    v43 = v49; /*0x1013bd9a6*/
    v44 = v50; /*0x1013bd9aa*/
    v45 = v51; /*0x1013bd9b2*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(v35); /*0x1013bd9bd*/
    v21[3] = v45; /*0x1013bd9c6*/
    v26 = v43; /*0x1013bd9cb*/
    v21[2] = v44; /*0x1013bd9d3*/
    v21[1] = v26; /*0x1013bd9d8*/
    *v21 = 9; /*0x1013bd9dd*/
    if ( v22 ) /*0x1013bd9e8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bd9f5*/
    if ( v41[0] ) /*0x1013bda04*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bda12*/
    result = (_QWORD *)core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v30); /*0x1013bda1e*/
LABEL_3:
    if ( !v38 ) /*0x1013bd5bc*/
      return result; /*0x1013bd5bc*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bd5bc*/
  }
  if ( v22 ) /*0x1013bd8bb*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bd8c8*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v35, v42, v34); /*0x1013bd8df*/
  v23 = (const void *)v35[1]; /*0x1013bd8e4*/
  v24 = v35[2]; /*0x1013bd8eb*/
  if ( (v35[2] & 0x8000000000000000LL) != 0LL ) /*0x1013bd8f5*/
  {
    v25 = 0; /*0x1013bd8fb*/
    goto LABEL_29; /*0x1013bd8fb*/
  }
  if ( v35[2] ) /*0x1013bda28*/
  {
    v27 = v21; /*0x1013bda2a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1013bda2d*/
    v25 = 1; /*0x1013bda32*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1u); /*0x1013bda40*/
    if ( !v28 ) /*0x1013bda48*/
LABEL_29:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25); /*0x1013bd8fe*/
    v29 = v28; /*0x1013bda4e*/
    v21 = v27; /*0x1013bda51*/
  }
  else
  {
    v29 = 1; /*0x1013bda56*/
  }
  memcpy((void *)v29, v23, v24); /*0x1013bda65*/
  v21[1] = v24; /*0x1013bda6a*/
  v21[2] = v29; /*0x1013bda6f*/
  v21[3] = v24; /*0x1013bda74*/
  *v21 = 10; /*0x1013bda79*/
  if ( v41[0] ) /*0x1013bda8b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bda99*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(v30); /*0x1013bdaa9*/
  if ( v38 ) /*0x1013bdab8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bdac2*/
  result = (_QWORD *)(2 * v35[0]); /*0x1013bdace*/
  if ( 2 * v35[0] ) /*0x1013bdace*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1013bd5ca*/
  return result; /*0x1013bd5cf*/
}