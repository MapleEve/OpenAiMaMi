// __ZN13codexmate_lib4core5relay12codex_writer23render_router_top_block @ 0x10146a290
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_writer::render_router_top_block | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_writer::render_router_top_block::h23146f81a9f60f95(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r9
  __int64 v9; // r13
  size_t v10; // r14
  size_t v11; // rsi
  __int64 v12; // rbx
  size_t v13; // r14
  __int64 v14; // r9
  size_t v15; // r14
  __int64 v16; // r9
  size_t v17; // r14
  size_t v18; // r14
  __int64 v19; // r9
  __int64 v20; // r15
  void *v21; // r12
  size_t v22; // rbx
  size_t v23; // r14
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r9
  __int64 *v27; // r15
  void *v28; // r12
  size_t v29; // rbx
  __int64 v30; // r13
  __int64 v31; // r9
  size_t v32; // r14
  _QWORD *v33; // rdx
  __int64 result; // rax
  _QWORD v35[2]; // [rsp+0h] [rbp-B0h] BYREF
  _QWORD *v36; // [rsp+10h] [rbp-A0h]
  __int64 v37; // [rsp+18h] [rbp-98h]
  __int64 v38; // [rsp+20h] [rbp-90h]
  __int64 *v39; // [rsp+28h] [rbp-88h] BYREF
  void *v40; // [rsp+30h] [rbp-80h]
  size_t v41; // [rsp+38h] [rbp-78h]
  __int64 v42; // [rsp+40h] [rbp-70h] BYREF
  __int64 v43; // [rsp+48h] [rbp-68h]
  __int64 v44; // [rsp+50h] [rbp-60h]
  __int64 v45; // [rsp+58h] [rbp-58h] BYREF
  void *__src; // [rsp+60h] [rbp-50h]
  size_t __n; // [rsp+68h] [rbp-48h]
  __int64 v48; // [rsp+70h] [rbp-40h] BYREF
  __int64 v49; // [rsp+78h] [rbp-38h]
  size_t v50; // [rsp+80h] [rbp-30h]

  v36 = a1; /*0x10146a2aa*/
  v48 = 0; /*0x10146a2b1*/
  v49 = 1; /*0x10146a2b9*/
  v50 = 0; /*0x10146a2c1*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, 0, 64, 1, 1, a6); /*0x10146a2df*/
  v9 = v49; /*0x10146a2e4*/
  v10 = v50; /*0x10146a2e8*/
  *(_QWORD *)(v49 + v50 + 56) = 0x29594C4C41554E41LL; /*0x10146a2f6*/
  qmemcpy((void *)(v9 + v10), "# >>> aimami-relay codex-router top start (DO NOT EDIT M", 56); /*0x10146a35f*/
  v11 = v10 + 64; /*0x10146a364*/
  v50 = v10 + 64; /*0x10146a368*/
  v12 = v48; /*0x10146a36c*/
  if ( v48 == v10 + 64 ) /*0x10146a373*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v11, 1, 1, 1, v8); /*0x10146a645*/
    v11 = v50; /*0x10146a64a*/
    v12 = v48; /*0x10146a64e*/
    v9 = v49; /*0x10146a652*/
  }
  *(_BYTE *)(v9 + v11) = 10; /*0x10146a379*/
  v13 = v10 + 65; /*0x10146a37f*/
  v50 = v13; /*0x10146a383*/
  if ( v12 - v13 <= 0x61 ) /*0x10146a391*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v13, 98, 1, 1, v8); /*0x10146a672*/
    v13 = v50; /*0x10146a677*/
    v12 = v48; /*0x10146a67b*/
    v9 = v49; /*0x10146a67f*/
  }
  memcpy((void *)(v9 + v13), &unk_101673B1C, 0x62u); /*0x10146a3a8*/
  v15 = v13 + 98; /*0x10146a3ad*/
  v50 = v15; /*0x10146a3b1*/
  if ( v12 - v15 <= 0x55 ) /*0x10146a3bf*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v15, 86, 1, 1, v14); /*0x10146a69f*/
    v15 = v50; /*0x10146a6a4*/
    v12 = v48; /*0x10146a6a8*/
    v9 = v49; /*0x10146a6ac*/
  }
  memcpy((void *)(v9 + v15), &unk_101673B7E, 0x56u); /*0x10146a3d6*/
  v17 = v15 + 86; /*0x10146a3db*/
  v50 = v17; /*0x10146a3df*/
  if ( v12 - v17 <= 0x46 ) /*0x10146a3ea*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v17, 71, 1, 1, v16); /*0x10146a6cc*/
    v9 = v49; /*0x10146a6d1*/
    v17 = v50; /*0x10146a6d5*/
  }
  memcpy((void *)(v9 + v17), &unk_101673BD4, 0x47u); /*0x10146a401*/
  v18 = v17 + 71; /*0x10146a406*/
  v50 = v18; /*0x10146a40a*/
  codexmate_lib::core::relay::codex_writer::escape_toml::ha83802857195c924( /*0x10146a421*/
    &v42,
    &anon_3ce6d1417794db0febde534c64082f90_165,
    6);
  v39 = &v42; /*0x10146a426*/
  v40 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10146a434*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v45, &unk_1017C5130, &v39); /*0x10146a44a*/
  v38 = a2; /*0x10146a44f*/
  v37 = a3; /*0x10146a456*/
  if ( v42 ) /*0x10146a464*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v42, 1); /*0x10146a46f*/
  v20 = v45; /*0x10146a474*/
  v21 = __src; /*0x10146a478*/
  v22 = __n; /*0x10146a47c*/
  if ( __n > v48 - v18 ) /*0x10146a48a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v18, __n, 1, 1, v19); /*0x10146a6f3*/
    v9 = v49; /*0x10146a6f8*/
    v18 = v50; /*0x10146a6fc*/
  }
  memcpy((void *)(v18 + v9), v21, v22); /*0x10146a49c*/
  v23 = v22 + v18; /*0x10146a4a1*/
  v50 = v23; /*0x10146a4a4*/
  if ( v20 ) /*0x10146a4ab*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x10146a4b8*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v42, v38, v37); /*0x10146a4cf*/
  v24 = v42; /*0x10146a4d4*/
  v25 = v43; /*0x10146a4d8*/
  codexmate_lib::core::relay::codex_writer::escape_toml::ha83802857195c924(&v45, v43, v44); /*0x10146a4ea*/
  v35[0] = &v45; /*0x10146a4ef*/
  v35[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10146a4fd*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v39, &unk_1017C5148, v35); /*0x10146a519*/
  if ( v45 ) /*0x10146a525*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v45, 1); /*0x10146a530*/
  if ( 2 * v24 ) /*0x10146a535*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x10146a54d*/
  v27 = v39; /*0x10146a552*/
  v28 = v40; /*0x10146a559*/
  v29 = v41; /*0x10146a55d*/
  if ( v41 > v48 - v23 ) /*0x10146a56b*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v23, v41, 1, 1, v26); /*0x10146a71a*/
    v23 = v50; /*0x10146a71f*/
  }
  v30 = v49; /*0x10146a571*/
  memcpy((void *)(v49 + v23), v28, v29); /*0x10146a580*/
  v32 = v29 + v23; /*0x10146a585*/
  v50 = v32; /*0x10146a588*/
  if ( v27 ) /*0x10146a58f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x10146a59c*/
  if ( v48 - v32 <= 0x26 ) /*0x10146a5ac*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v48, v32, 39, 1, 1, v31); /*0x10146a73f*/
    v30 = v49; /*0x10146a744*/
    v32 = v50; /*0x10146a748*/
  }
  qmemcpy((void *)(v30 + v32), "# <<< aimami-relay codex-router top end", 39); /*0x10146a5f8*/
  v33 = v36; /*0x10146a605*/
  v36[2] = v32 + 39; /*0x10146a60c*/
  result = v48; /*0x10146a610*/
  v33[1] = v49; /*0x10146a618*/
  *v33 = result; /*0x10146a61c*/
  return result; /*0x10146a61f*/
}