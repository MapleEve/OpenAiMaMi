// __ZN13codexmate_lib4core8sessions15backup_codex_db @ 0x1005329b0 | 基线 same-set
void __fastcall codexmate_lib::core::sessions::backup_codex_db::hc614d40006689cde(
        void *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rsi
  const void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  const void *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 i; // r12
  __int64 v17; // r9
  __int64 v18; // r13
  size_t v19; // rbx
  _QWORD *v20; // r15
  __int64 v21; // r9
  __int64 v22; // r14
  size_t v23; // r15
  __int64 (__fastcall *v24)(); // rdi
  __int64 (__fastcall *v25)(); // rbx
  _QWORD *v26; // r12
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rsi
  const void *v30; // r15
  size_t v31; // rbx
  __int64 v32; // r12
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 (__fastcall *v35)(); // rcx
  _QWORD *v36; // rsi
  _QWORD *v37; // r13
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rsi
  __int64 v43; // r14
  _BYTE v44[105]; // [rsp+10h] [rbp-200h] BYREF
  _BYTE v45[7]; // [rsp+79h] [rbp-197h]
  _QWORD v46[13]; // [rsp+80h] [rbp-190h] BYREF
  _QWORD *v47; // [rsp+E8h] [rbp-128h]
  __int64 v48; // [rsp+F0h] [rbp-120h]
  _QWORD v49[13]; // [rsp+F8h] [rbp-118h] BYREF
  char v50; // [rsp+160h] [rbp-B0h]
  _BYTE v51[7]; // [rsp+161h] [rbp-AFh]
  __int64 v52; // [rsp+168h] [rbp-A8h] BYREF
  const void *v53; // [rsp+170h] [rbp-A0h]
  __int64 v54; // [rsp+178h] [rbp-98h]
  _QWORD *v55; // [rsp+180h] [rbp-90h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+188h] [rbp-88h]
  size_t v57; // [rsp+190h] [rbp-80h]
  __int64 v58; // [rsp+198h] [rbp-78h]
  _QWORD *v59; // [rsp+1A0h] [rbp-70h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+1A8h] [rbp-68h]
  __int64 v61; // [rsp+1B0h] [rbp-60h]
  _QWORD *v62; // [rsp+1B8h] [rbp-58h]
  __int64 v63; // [rsp+1C0h] [rbp-50h]
  __int64 (__fastcall *v64)(); // [rsp+1C8h] [rbp-48h]
  _QWORD *v65; // [rsp+1D0h] [rbp-40h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+1D8h] [rbp-38h]
  __int64 v67; // [rsp+1E0h] [rbp-30h]

  codexmate_lib::core::sessions::migration_backup_path::h7dbc8ce73e7fc2db( /*0x1005329f6*/
    (unsigned int)&v52,
    a4,
    a5,
    a6,
    a7,
    (unsigned int)&unk_1015FE370,
    12);
  codexmate_lib::core::sessions::open_codex_db::h5838dac6be6fd626((__int64)v49, a2, a3, 0); /*0x100532a0a*/
  if ( v50 == 3 ) /*0x100532a27*/
  {
    qmemcpy(v46, v49, 0x60u); /*0x100532a31*/
    qmemcpy(a1, v46, 0x60u); /*0x100532a3f*/
LABEL_3:
    v8 = v52; /*0x100532a42*/
    if ( !v52 ) /*0x100532a4c*/
      return; /*0x100532a4c*/
    v9 = v53; /*0x100532a4e*/
    goto LABEL_5; /*0x100532a4e*/
  }
  qmemcpy(v46, v49, sizeof(v46)); /*0x100532a79*/
  *(_DWORD *)&v45[3] = *(_DWORD *)&v51[3]; /*0x100532a88*/
  *(_DWORD *)v45 = *(_DWORD *)v51; /*0x100532a8e*/
  qmemcpy(v44, v46, 0x68u); /*0x100532aa3*/
  v44[104] = v50; /*0x100532aa6*/
  v10 = (__int64)v53; /*0x100532aac*/
  v11 = v54; /*0x100532ab3*/
  v12 = v53; /*0x100532abe*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v59, v53, v54); /*0x100532ac4*/
  v64 = v60; /*0x100532acd*/
  v62 = (_QWORD *)v61; /*0x100532ad5*/
  if ( v61 < 0 ) /*0x100532adc*/
  {
    v13 = 0; /*0x100532ade*/
    goto LABEL_9; /*0x100532ade*/
  }
  v47 = a1; /*0x100532af1*/
  v58 = v10; /*0x100532af8*/
  v48 = v11; /*0x100532afc*/
  if ( v61 ) /*0x100532b03*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v59, v12); /*0x100532b05*/
    v13 = 1; /*0x100532b0a*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v62, 1); /*0x100532b18*/
    if ( !v14 ) /*0x100532b20*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v62); /*0x100532ae0*/
  }
  else
  {
    v14 = 1; /*0x100532b24*/
  }
  v65 = v62; /*0x100532b2d*/
  v63 = v14; /*0x100532b31*/
  v66 = (__int64 (__fastcall *)())v14; /*0x100532b35*/
  v67 = 0; /*0x100532b39*/
  v49[0] = v64; /*0x100532b45*/
  v49[1] = v62; /*0x100532b4c*/
  v49[2] = 0; /*0x100532b53*/
  v49[3] = v62; /*0x100532b5e*/
  v49[4] = 0x2700000027LL; /*0x100532b6f*/
  LOBYTE(v49[5]) = 1; /*0x100532b76*/
  v15 = 0; /*0x100532b7d*/
  for ( i = 0; ; i = v18 ) /*0x100532b80*/
  {
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100532b9e*/
      v46,
      v49);
    if ( !LOBYTE(v46[0]) ) /*0x100532baa*/
      break; /*0x100532baa*/
    v18 = v46[2]; /*0x100532bb7*/
    v19 = v46[1] - i; /*0x100532bbe*/
    v20 = v65; /*0x100532bc1*/
    if ( v46[1] - i > (unsigned __int64)v65 - v15 ) /*0x100532bce*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100532c24*/
        &v65,
        v15,
        v46[1] - i,
        1,
        1,
        v17);
      v15 = v67; /*0x100532c29*/
      v20 = v65; /*0x100532c2d*/
      v63 = (__int64)v66; /*0x100532c35*/
    }
    memcpy((void *)(v63 + v15), (char *)v64 + i, v19); /*0x100532be2*/
    v22 = v19 + v15; /*0x100532be7*/
    v67 = v22; /*0x100532bea*/
    if ( (unsigned __int64)v20 - v22 <= 1 ) /*0x100532bf5*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v65, v22, 2, 1, 1, v21); /*0x100532c52*/
      v63 = (__int64)v66; /*0x100532c5b*/
      v22 = v67; /*0x100532c5f*/
    }
    *(_WORD *)(v63 + v22) = 10023; /*0x100532bfb*/
    v15 = v22 + 2; /*0x100532c02*/
    v67 = v15; /*0x100532c06*/
  }
  v23 = (size_t)v62 - i; /*0x100532c73*/
  if ( (char *)v62 - i > (char *)v65 - v15 ) /*0x100532c79*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100532f91*/
      &v65,
      v15,
      (char *)v62 - i,
      1,
      1,
      v17);
    v24 = v66; /*0x100532f96*/
    v15 = v67; /*0x100532f9a*/
  }
  else
  {
    v24 = (__int64 (__fastcall *)())v63; /*0x100532c7f*/
  }
  v25 = v64; /*0x100532c83*/
  memcpy((char *)v24 + v15, (char *)v64 + i, v23); /*0x100532c93*/
  v57 = v23 + v15; /*0x100532c9b*/
  v55 = v65; /*0x100532ca7*/
  v56 = v66; /*0x100532cae*/
  if ( 2LL * (_QWORD)v59 ) /*0x100532cb9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v59, 1); /*0x100532cce*/
  v65 = &v55; /*0x100532cda*/
  v66 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100532ce5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v49, &unk_1017C190B, &v65); /*0x100532cfe*/
  v26 = v47; /*0x100532d03*/
  v27 = v49[0]; /*0x100532d0a*/
  v28 = v49[1]; /*0x100532d11*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v46, v44, v49[1], v49[2]); /*0x100532d30*/
  if ( v46[0] != 0x8000000000000016LL ) /*0x100532d46*/
  {
    v49[7] = v46[7]; /*0x100532da2*/
    v49[6] = v46[6]; /*0x100532db0*/
    v49[5] = v46[5]; /*0x100532dbe*/
    v49[4] = v46[4]; /*0x100532dcc*/
    v49[3] = v46[3]; /*0x100532dda*/
    v49[2] = v46[2]; /*0x100532de8*/
    v49[1] = v46[1]; /*0x100532dfd*/
    v49[0] = v46[0]; /*0x100532e04*/
    v59 = v49; /*0x100532e0b*/
    v60 = (__int64 (__fastcall *)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100532e16*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v65, &unk_1017C1922, &v59); /*0x100532e29*/
    v59 = v65; /*0x100532e36*/
    v60 = v66; /*0x100532e3a*/
    v61 = v67; /*0x100532e42*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(v49); /*0x100532e4d*/
    v26[3] = v61; /*0x100532e56*/
    v34 = v59; /*0x100532e5b*/
    v35 = v60; /*0x100532e5f*/
    v26[2] = v60; /*0x100532e63*/
    v26[1] = v34; /*0x100532e68*/
    *v26 = 10; /*0x100532e6d*/
    if ( v27 ) /*0x100532e78*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100532e85*/
    v36 = v55; /*0x100532e8a*/
    if ( v55 ) /*0x100532e94*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x100532ea2*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v44, v36, v33, v35); /*0x100532eae*/
    goto LABEL_3; /*0x100532eb3*/
  }
  if ( v27 ) /*0x100532d4b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x100532d58*/
  v29 = v58; /*0x100532d64*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v49, v58, v48); /*0x100532d6f*/
  v30 = (const void *)v49[1]; /*0x100532d74*/
  v31 = v49[2]; /*0x100532d7b*/
  if ( v49[2] < 0LL ) /*0x100532d85*/
  {
    v32 = 0; /*0x100532d8b*/
    goto LABEL_30; /*0x100532d8b*/
  }
  if ( v49[2] ) /*0x100532eb8*/
  {
    v37 = v26; /*0x100532eba*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v29); /*0x100532ebd*/
    v32 = 1; /*0x100532ec2*/
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1); /*0x100532ed0*/
    if ( !v38 ) /*0x100532ed8*/
LABEL_30:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v31); /*0x100532d8e*/
    v39 = v38; /*0x100532ede*/
    v26 = v37; /*0x100532ee1*/
  }
  else
  {
    v39 = 1; /*0x100532ee6*/
  }
  memcpy((void *)v39, v30, v31); /*0x100532ef5*/
  v26[1] = v31; /*0x100532efa*/
  v26[2] = v39; /*0x100532eff*/
  v26[3] = v31; /*0x100532f04*/
  *v26 = 11; /*0x100532f09*/
  v42 = v55; /*0x100532f11*/
  if ( v55 ) /*0x100532f1b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x100532f29*/
  v43 = v58; /*0x100532f35*/
  core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h35983960ba2abd22(v44, v42, v40, v41); /*0x100532f39*/
  if ( v52 ) /*0x100532f48*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v52, 1); /*0x100532f52*/
  v8 = v49[0]; /*0x100532f57*/
  if ( 2LL * v49[0] ) /*0x100532f5e*/
  {
    v9 = v30; /*0x100532f74*/
LABEL_5:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x100532a5a*/
  }
}