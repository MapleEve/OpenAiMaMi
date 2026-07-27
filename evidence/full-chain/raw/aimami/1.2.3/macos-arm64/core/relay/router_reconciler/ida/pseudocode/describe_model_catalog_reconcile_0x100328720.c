// __ZN13codexmate_lib4core5relay17router_reconciler32describe_model_catalog_reconcile @ 0x100328720 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::describe_model_catalog_reconcile::h62a45e0a1a9a7db8(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 result; // rax
  _QWORD v20[2]; // [rsp+8h] [rbp-F8h] BYREF
  _QWORD v21[3]; // [rsp+18h] [rbp-E8h] BYREF
  _QWORD v22[3]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h]
  _QWORD *v28; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+98h] [rbp-68h]
  _QWORD *v30; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v31)(); // [rsp+A8h] [rbp-58h]
  _QWORD *v32; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v33)(); // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+D0h] [rbp-30h]

  v20[0] = "RouterOntakeoverexceeded"; /*0x100328741*/
  v20[1] = 8; /*0x100328748*/
  v34 = 0; /*0x100328753*/
  v35 = 8; /*0x10032875b*/
  v36 = 0; /*0x100328763*/
  if ( *(_OWORD *)(a2 + 5) != 0 ) /*0x100328781*/
  {
    v28 = v20; /*0x10032878f*/
    v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100328793*/
    v30 = a2 + 5; /*0x100328797*/
    v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003287a2*/
    v32 = a2 + 6; /*0x1003287a6*/
    v33 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003287aa*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017BC43C, &v28); /*0x1003287c0*/
    v2 = v36; /*0x1003287c5*/
    if ( v36 == v34 ) /*0x1003287cd*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v34); /*0x1003287d3*/
    v3 = v35; /*0x1003287d8*/
    v4 = 3 * v2; /*0x1003287dc*/
    *(_QWORD *)(v35 + 8 * v4 + 16) = v24[2]; /*0x1003287e8*/
    v5 = v24[0]; /*0x1003287ed*/
    *(_QWORD *)(v3 + 8 * v4 + 8) = v24[1]; /*0x1003287fb*/
    *(_QWORD *)(v3 + 8 * v4) = v5; /*0x100328800*/
    v36 = v2 + 1; /*0x100328807*/
  }
  if ( a2[8] ) /*0x10032880b*/
  {
    v28 = v20; /*0x100328816*/
    v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10032881a*/
    v30 = a2 + 8; /*0x10032881e*/
    v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328829*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &unk_1017BC46D, &v28); /*0x10032883f*/
    v6 = v36; /*0x100328844*/
    if ( v36 == v34 ) /*0x10032884c*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v34); /*0x100328852*/
    v7 = v35; /*0x100328857*/
    v8 = 3 * v6; /*0x10032885b*/
    *(_QWORD *)(v35 + 8 * v8 + 16) = v23[2]; /*0x100328867*/
    v9 = v23[0]; /*0x10032886c*/
    *(_QWORD *)(v7 + 8 * v8 + 8) = v23[1]; /*0x10032887a*/
    *(_QWORD *)(v7 + 8 * v8) = v9; /*0x10032887f*/
    v36 = v6 + 1; /*0x100328886*/
  }
  if ( a2[7] ) /*0x10032888a*/
  {
    v28 = v20; /*0x100328895*/
    v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100328899*/
    v30 = a2 + 7; /*0x10032889d*/
    v31 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003288a8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v22, &unk_1017BC4B7, &v28); /*0x1003288be*/
    v10 = v36; /*0x1003288c3*/
    if ( v36 == v34 ) /*0x1003288cb*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v34); /*0x1003288d1*/
    v11 = v35; /*0x1003288d6*/
    v12 = 3 * v10; /*0x1003288da*/
    *(_QWORD *)(v35 + 8 * v12 + 16) = v22[2]; /*0x1003288e6*/
    v13 = v22[0]; /*0x1003288eb*/
    *(_QWORD *)(v11 + 8 * v12 + 8) = v22[1]; /*0x1003288f9*/
    *(_QWORD *)(v11 + 8 * v12) = v13; /*0x1003288fe*/
    v36 = v10 + 1; /*0x100328905*/
  }
  v14 = a2[2]; /*0x100328909*/
  if ( v14 ) /*0x100328910*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v28, a2[1], v14, &unk_1015E43EC, 3); /*0x10032892b*/
    v27 = v30; /*0x100328934*/
    v26 = v29; /*0x100328940*/
    v25 = v28; /*0x100328944*/
    v28 = v20; /*0x10032894b*/
    v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10032894f*/
    v30 = &v25; /*0x10032895a*/
    v31 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100328965*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v21, &unk_1017BC50F, &v28); /*0x10032897b*/
    if ( v25 ) /*0x10032898a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x100328995*/
    v15 = v36; /*0x10032899a*/
    if ( v36 == v34 ) /*0x1003289a2*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v34); /*0x1003289a8*/
    v16 = v35; /*0x1003289ad*/
    v17 = 3 * v15; /*0x1003289b1*/
    *(_QWORD *)(v35 + 8 * v17 + 16) = v21[2]; /*0x1003289bc*/
    v18 = v21[0]; /*0x1003289c1*/
    *(_QWORD *)(v16 + 8 * v17 + 8) = v21[1]; /*0x1003289cf*/
    *(_QWORD *)(v16 + 8 * v17) = v18; /*0x1003289d4*/
    v36 = v15 + 1; /*0x1003289db*/
  }
  a1[2] = v36; /*0x1003289e3*/
  result = v34; /*0x1003289e7*/
  a1[1] = v35; /*0x1003289ef*/
  *a1 = result; /*0x1003289f3*/
  return result; /*0x1003289f6*/
}