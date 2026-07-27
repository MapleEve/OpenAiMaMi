// __ZN13codexmate_lib4core10repository32load_switchable_account_snapshot @ 0x100a80390 | 基线 same-set
double __fastcall codexmate_lib::core::repository::load_switchable_account_snapshot::h5aef4a5b1b611d9d(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  unsigned __int64 v5; // r14
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // rcx
  void *v7; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-218h] BYREF
  _QWORD v10[12]; // [rsp+10h] [rbp-210h] BYREF
  _BYTE v11[72]; // [rsp+70h] [rbp-1B0h] BYREF
  _QWORD v12[12]; // [rsp+B8h] [rbp-168h] BYREF
  _BYTE v13[104]; // [rsp+118h] [rbp-108h] BYREF
  _QWORD v14[9]; // [rsp+180h] [rbp-A0h] BYREF
  _BYTE *v15; // [rsp+1C8h] [rbp-58h] BYREF
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // [rsp+1D0h] [rbp-50h]
  __int64 v17; // [rsp+1D8h] [rbp-48h]
  _QWORD *v18; // [rsp+1E0h] [rbp-40h] BYREF
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // [rsp+1E8h] [rbp-38h]
  __int64 v20; // [rsp+1F0h] [rbp-30h]

  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(&v9, a2, a3); /*0x100a803be*/
  v5 = v9; /*0x100a803c3*/
  if ( v9 == 0x8000000000000001LL ) /*0x100a803d8*/
  {
    qmemcpy(v13, v10, 0x60u); /*0x100a803f0*/
    v15 = v13; /*0x100a803f3*/
    v16 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a803fe*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v12, &unk_1017C9DE9, &v15); /*0x100a80414*/
    v10[1] = v12[0]; /*0x100a80427*/
    v10[2] = v12[1]; /*0x100a8042e*/
    v10[3] = v12[2]; /*0x100a8043c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v13); /*0x100a8044a*/
    v10[0] = 9; /*0x100a8044f*/
    qmemcpy(a1 + 1, v10, 0x60u); /*0x100a80466*/
    *a1 = 2; /*0x100a80469*/
    return *(double *)a4.i64; /*0x100a80470*/
  }
  qmemcpy(v14, v11, sizeof(v14)); /*0x100a80488*/
  qmemcpy(&v13[8], v10, 0x60u); /*0x100a8049a*/
  *(_QWORD *)v13 = v9; /*0x100a8049d*/
  if ( codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(v13) ) /*0x100a804ab*/
  {
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(a1, v13, a2, a3, a4); /*0x100a804c8*/
    if ( *(_DWORD *)a1 != 2 ) /*0x100a804d0*/
      goto LABEL_9; /*0x100a804d0*/
    qmemcpy(v12, a1 + 1, sizeof(v12)); /*0x100a804e9*/
    v18 = v12; /*0x100a804ec*/
    v19 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a804f7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_1017C9DE9, &v18); /*0x100a8050a*/
    v18 = v15; /*0x100a80517*/
    v19 = v16; /*0x100a8051b*/
    v20 = v17; /*0x100a80523*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v12); /*0x100a8052e*/
    a1[1] = 9; /*0x100a80533*/
    v6 = v19; /*0x100a8053f*/
    a1[2] = (__int64)v18; /*0x100a80543*/
    a1[3] = (__int64)v6; /*0x100a80547*/
    a1[4] = v20; /*0x100a8054f*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v11); /*0x100a80558*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(56, 1); /*0x100a80567*/
    if ( !v7 ) /*0x100a8056f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 56); /*0x100a80703*/
    qmemcpy(v7, "Account snapshot is not a switchable ChatGPT OAuth login", 56); /*0x100a805d3*/
    a1[1] = 9; /*0x100a805d6*/
    a1[2] = 56; /*0x100a805de*/
    a1[3] = (__int64)v7; /*0x100a805e6*/
    a1[4] = 56; /*0x100a805ea*/
  }
  *a1 = 2; /*0x100a805f2*/
LABEL_9:
  if ( v5 != 0x8000000000000000LL && v5 ) /*0x100a8060b*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v13[8], v5, 1); /*0x100a8061c*/
  if ( *(_QWORD *)&v13[24] != 0x8000000000000000LL && *(_QWORD *)&v13[24] ) /*0x100a80630*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v13[32], *(_QWORD *)&v13[24], 1); /*0x100a8063e*/
  if ( *(_QWORD *)&v13[48] != 0x8000000000000000LL && *(_QWORD *)&v13[48] ) /*0x100a80652*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v13[56], *(_QWORD *)&v13[48], 1); /*0x100a80660*/
  if ( *(_QWORD *)&v13[72] != 0x8000000000000000LL && *(_QWORD *)&v13[72] ) /*0x100a80674*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v13[80], *(_QWORD *)&v13[72], 1); /*0x100a80682*/
  if ( *(_QWORD *)&v13[96] != 0x8000000000000000LL && *(_QWORD *)&v13[96] ) /*0x100a80696*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[0], *(_QWORD *)&v13[96], 1); /*0x100a806a4*/
  if ( v14[2] != 0x8000000000000000LL && v14[2] ) /*0x100a806b8*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[3], v14[2], 1); /*0x100a806c6*/
  if ( v14[5] != 0x8000000000000000LL && v14[5] ) /*0x100a806d7*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14[6], v14[5], 1); /*0x100a806e2*/
  return *(double *)a4.i64; /*0x100a806e7*/
}