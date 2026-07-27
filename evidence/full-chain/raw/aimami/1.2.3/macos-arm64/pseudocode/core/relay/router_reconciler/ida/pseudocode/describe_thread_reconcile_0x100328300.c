// __ZN13codexmate_lib4core5relay17router_reconciler25describe_thread_reconcile @ 0x100328300 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_reconciler::describe_thread_reconcile::h074221fb86954afe(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 result; // rax
  _QWORD v22[2]; // [rsp+0h] [rbp-F0h] BYREF
  _QWORD v23[3]; // [rsp+10h] [rbp-E0h] BYREF
  _QWORD v24[3]; // [rsp+28h] [rbp-C8h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-B0h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-98h] BYREF
  _QWORD *v27; // [rsp+70h] [rbp-80h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+78h] [rbp-78h]
  __int64 v29; // [rsp+80h] [rbp-70h]
  __int64 (__fastcall *v30)(); // [rsp+88h] [rbp-68h]
  __int64 v31; // [rsp+90h] [rbp-60h]
  __int64 (__fastcall *v32)(); // [rsp+98h] [rbp-58h]
  __int64 v33; // [rsp+A0h] [rbp-50h]
  __int64 (__fastcall *v34)(); // [rsp+A8h] [rbp-48h]
  __int64 v35; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-38h]
  __int64 v37; // [rsp+C0h] [rbp-30h]

  v22[0] = a2; /*0x10032831a*/
  v22[1] = a3; /*0x100328321*/
  v35 = 0; /*0x100328328*/
  v36 = 8; /*0x100328330*/
  v37 = 0; /*0x100328338*/
  if ( *(_OWORD *)(a4 + 96) != 0 ) /*0x100328356*/
  {
    v27 = v22; /*0x100328364*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100328368*/
    v29 = a4 + 96; /*0x10032836c*/
    v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328377*/
    v31 = a4 + 104; /*0x10032837b*/
    v32 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032837f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017BC31E, &v27); /*0x100328395*/
    v5 = v37; /*0x10032839a*/
    if ( v37 == v35 ) /*0x1003283a2*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35); /*0x1003283a8*/
    v6 = v36; /*0x1003283ad*/
    v7 = 3 * v5; /*0x1003283b1*/
    *(_QWORD *)(v36 + 8 * v7 + 16) = v26[2]; /*0x1003283bd*/
    v8 = v26[0]; /*0x1003283c2*/
    *(_QWORD *)(v6 + 8 * v7 + 8) = v26[1]; /*0x1003283d0*/
    *(_QWORD *)(v6 + 8 * v7) = v8; /*0x1003283d5*/
    v37 = v5 + 1; /*0x1003283dc*/
  }
  if ( *(_QWORD *)(a4 + 160) ) /*0x1003283e0*/
  {
    v27 = v22; /*0x100328403*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100328407*/
    v29 = a4 + 160; /*0x10032840b*/
    v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328416*/
    v31 = a4 + 168; /*0x10032841a*/
    v32 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10032841e*/
    v33 = a4 + 176; /*0x100328422*/
    v34 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328426*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017BC352, &v27); /*0x10032843c*/
    v9 = v37; /*0x100328441*/
    if ( v37 == v35 ) /*0x100328449*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35); /*0x10032844f*/
    v10 = v36; /*0x100328454*/
    v11 = 3 * v9; /*0x100328458*/
    *(_QWORD *)(v36 + 8 * v11 + 16) = v25[2]; /*0x100328464*/
    v12 = v25[0]; /*0x100328469*/
    *(_QWORD *)(v10 + 8 * v11 + 8) = v25[1]; /*0x100328477*/
    *(_QWORD *)(v10 + 8 * v11) = v12; /*0x10032847c*/
    v37 = v9 + 1; /*0x100328483*/
  }
  if ( *(_BYTE *)a4 && *(_QWORD *)(a4 + 16) ) /*0x10032848d*/
  {
    v27 = v22; /*0x100328498*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10032849c*/
    v29 = a4 + 16; /*0x1003284a0*/
    v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003284ab*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017BC38B, &v27); /*0x1003284c1*/
    v13 = v37; /*0x1003284c6*/
    if ( v37 == v35 ) /*0x1003284ce*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35); /*0x1003284d4*/
    v14 = v36; /*0x1003284d9*/
    v15 = 3 * v13; /*0x1003284dd*/
    *(_QWORD *)(v36 + 8 * v15 + 16) = v24[2]; /*0x1003284e9*/
    v16 = v24[0]; /*0x1003284ee*/
    *(_QWORD *)(v14 + 8 * v15 + 8) = v24[1]; /*0x1003284fc*/
    *(_QWORD *)(v14 + 8 * v15) = v16; /*0x100328501*/
    v37 = v13 + 1; /*0x100328508*/
  }
  if ( *(_QWORD *)(a4 + 184) ) /*0x10032850c*/
  {
    v27 = v22; /*0x10032851d*/
    v28 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100328521*/
    v29 = a4 + 184; /*0x100328525*/
    v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100328530*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v23, &unk_1017BC3AF, &v27); /*0x100328546*/
    v17 = v37; /*0x10032854b*/
    if ( v37 == v35 ) /*0x100328553*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v35); /*0x100328559*/
    v18 = v36; /*0x10032855e*/
    v19 = 3 * v17; /*0x100328562*/
    *(_QWORD *)(v36 + 8 * v19 + 16) = v23[2]; /*0x10032856d*/
    v20 = v23[0]; /*0x100328572*/
    *(_QWORD *)(v18 + 8 * v19 + 8) = v23[1]; /*0x100328580*/
    *(_QWORD *)(v18 + 8 * v19) = v20; /*0x100328585*/
    v37 = v17 + 1; /*0x10032858c*/
  }
  a1[2] = v37; /*0x100328594*/
  result = v35; /*0x100328598*/
  a1[1] = v36; /*0x1003285a0*/
  *a1 = result; /*0x1003285a4*/
  return result; /*0x1003285a7*/
}