// __ZN13codexmate_lib4core5relay18router_unlock_auth17make_unsigned_jwt @ 0x10051a770 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::make_unsigned_jwt::h4269e44361b7112e(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rax
  __int64 *v5; // rdi
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD **v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // r12
  __int64 v20; // r13
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // r12
  __int64 v27; // r13
  __int64 *v28; // rcx
  __int64 v30; // [rsp+0h] [rbp-130h] BYREF
  __int64 v31; // [rsp+8h] [rbp-128h]
  __int64 v32; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall *v33)(); // [rsp+18h] [rbp-118h] BYREF
  __int64 *v34; // [rsp+20h] [rbp-110h]
  __int64 (__fastcall *v35)(); // [rsp+28h] [rbp-108h]
  __int64 v36; // [rsp+30h] [rbp-100h] BYREF
  __int64 v37; // [rsp+38h] [rbp-F8h]
  _DWORD *v38; // [rsp+40h] [rbp-F0h]
  __int64 v39; // [rsp+48h] [rbp-E8h]
  __int64 v40; // [rsp+50h] [rbp-E0h]
  __int64 *v41; // [rsp+58h] [rbp-D8h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+60h] [rbp-D0h]
  __int64 *v43; // [rsp+68h] [rbp-C8h]
  __int64 (__fastcall *v44)(); // [rsp+70h] [rbp-C0h]
  __int64 v45; // [rsp+78h] [rbp-B8h]
  __int64 v46; // [rsp+80h] [rbp-B0h]
  __int64 v47; // [rsp+88h] [rbp-A8h]
  __int64 *v48; // [rsp+90h] [rbp-A0h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+98h] [rbp-98h] BYREF
  __int64 *v50; // [rsp+A0h] [rbp-90h]
  __int64 (__fastcall *v51)(); // [rsp+A8h] [rbp-88h]
  __int64 v52; // [rsp+B0h] [rbp-80h]
  __int64 v53; // [rsp+B8h] [rbp-78h]
  __int64 v54; // [rsp+C0h] [rbp-70h]
  __int64 v55; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-60h]
  __int64 v57; // [rsp+D8h] [rbp-58h]
  __int64 v58; // [rsp+E0h] [rbp-50h]
  __int64 v59; // [rsp+E8h] [rbp-48h]
  __int64 v60; // [rsp+F0h] [rbp-40h]
  _DWORD *v61; // [rsp+F8h] [rbp-38h]
  __int64 v62; // [rsp+100h] [rbp-30h]

  v40 = a2; /*0x10051a784*/
  v33 = nullptr; /*0x10051a78e*/
  v35 = nullptr; /*0x10051a799*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10051a7a4*/
  v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x10051a7b3*/
  if ( !v3 ) /*0x10051a7bb*/
    goto LABEL_28; /*0x10051a7bb*/
  *(_BYTE *)(v3 + 2) = 103; /*0x10051a7c4*/
  *(_WORD *)v3 = 27745; /*0x10051a7c8*/
  v30 = 3; /*0x10051a7cd*/
  v31 = v3; /*0x10051a7d8*/
  v32 = 3; /*0x10051a7df*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1); /*0x10051a7ea*/
  v4 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10051a7f9*/
  if ( !v4 ) /*0x10051a801*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10051acdb*/
  *v4 = 1701736302; /*0x10051a807*/
  LOBYTE(v59) = 3; /*0x10051a80d*/
  v60 = 4; /*0x10051a811*/
  v61 = v4; /*0x10051a819*/
  v62 = 4; /*0x10051a81d*/
  v5 = (__int64 *)&v41; /*0x10051a825*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v41, &v33, &v30); /*0x10051a83a*/
  if ( __OFSUB__(0, v41) ) /*0x10051a841*/
  {
    v6 = v42; /*0x10051a84a*/
    v7 = 32LL * (_QWORD)v44; /*0x10051a858*/
    v58 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 3); /*0x10051a861*/
    v57 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 2); /*0x10051a86a*/
    v8 = *((_QWORD *)v42 + 4 * (_QWORD)v44); /*0x10051a86e*/
    v56 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 1); /*0x10051a877*/
    v55 = v8; /*0x10051a87b*/
    *(_QWORD *)((char *)v42 + v7 + 24) = v62; /*0x10051a883*/
    *(_QWORD *)((char *)v6 + v7 + 16) = v61; /*0x10051a88c*/
    v9 = v59; /*0x10051a891*/
    v10 = (_QWORD **)v60; /*0x10051a895*/
    *(_QWORD *)((char *)v6 + v7 + 8) = v60; /*0x10051a899*/
    *(_QWORD *)((char *)v6 + v7) = v9; /*0x10051a89e*/
    if ( (_BYTE)v55 != 6 ) /*0x10051a8a6*/
    {
      v5 = &v55; /*0x10051a8ac*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v55); /*0x10051a8b0*/
    }
  }
  else
  {
    v54 = v47; /*0x10051a8c1*/
    v53 = v46; /*0x10051a8cc*/
    v52 = v45; /*0x10051a8d7*/
    v51 = v44; /*0x10051a8e2*/
    v50 = v43; /*0x10051a8f0*/
    v49 = v42; /*0x10051a905*/
    v48 = v41; /*0x10051a90c*/
    v39 = v62; /*0x10051a917*/
    v38 = v61; /*0x10051a922*/
    v37 = v60; /*0x10051a931*/
    v36 = v59; /*0x10051a938*/
    v5 = &v55; /*0x10051a93f*/
    v10 = &v48; /*0x10051a943*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10051a951*/
      &v55,
      &v48,
      &v36);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v10); /*0x10051a956*/
  v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x10051a965*/
  if ( !v11 ) /*0x10051a96d*/
LABEL_28:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3); /*0x10051acca*/
  *(_BYTE *)(v11 + 2) = 112; /*0x10051a976*/
  *(_WORD *)v11 = 31092; /*0x10051a97a*/
  v30 = 3; /*0x10051a97f*/
  v31 = v11; /*0x10051a98a*/
  v32 = 3; /*0x10051a991*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1); /*0x10051a99c*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x10051a9ab*/
  if ( !v12 ) /*0x10051a9b3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3); /*0x10051acec*/
  *(_BYTE *)(v12 + 2) = 84; /*0x10051a9b9*/
  *(_WORD *)v12 = 22346; /*0x10051a9bd*/
  LOBYTE(v59) = 3; /*0x10051a9c2*/
  v60 = 3; /*0x10051a9c6*/
  v61 = (_DWORD *)v12; /*0x10051a9ce*/
  v62 = 3; /*0x10051a9d2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v41, &v33, &v30); /*0x10051a9ef*/
  if ( v41 == (__int64 *)0x8000000000000000LL ) /*0x10051aa05*/
  {
    v15 = v42; /*0x10051aa07*/
    v16 = 32LL * (_QWORD)v44; /*0x10051aa15*/
    v58 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 3); /*0x10051aa1e*/
    v57 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 2); /*0x10051aa27*/
    v17 = *((_QWORD *)v42 + 4 * (_QWORD)v44); /*0x10051aa2b*/
    v56 = *((_QWORD *)v42 + 4 * (_QWORD)v44 + 1); /*0x10051aa34*/
    v55 = v17; /*0x10051aa38*/
    *(_QWORD *)((char *)v42 + v16 + 24) = v62; /*0x10051aa40*/
    *(_QWORD *)((char *)v15 + v16 + 16) = v61; /*0x10051aa49*/
    v18 = v59; /*0x10051aa4e*/
    *(_QWORD *)((char *)v15 + v16 + 8) = v60; /*0x10051aa56*/
    *(_QWORD *)((char *)v15 + v16) = v18; /*0x10051aa5b*/
    if ( (_BYTE)v55 != 6 ) /*0x10051aa63*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v55); /*0x10051aa6d*/
  }
  else
  {
    v54 = v47; /*0x10051aa7e*/
    v53 = v46; /*0x10051aa89*/
    v52 = v45; /*0x10051aa94*/
    v51 = v44; /*0x10051aa9f*/
    v50 = v43; /*0x10051aaad*/
    v49 = v42; /*0x10051aac2*/
    v48 = v41; /*0x10051aac9*/
    v39 = v62; /*0x10051aad4*/
    v38 = v61; /*0x10051aadf*/
    v37 = v60; /*0x10051aaee*/
    v36 = v59; /*0x10051aaf5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10051ab0e*/
      &v55,
      &v48,
      &v36);
  }
  v42 = v33; /*0x10051ab21*/
  v43 = v34; /*0x10051ab28*/
  v44 = v35; /*0x10051ab36*/
  LOBYTE(v41) = 5; /*0x10051ab3d*/
  serde_json::ser::to_vec::haa2ccd5674877793(&v48, &v41, v18, v34, v13, v14, v30, v31, v32); /*0x10051ab52*/
  v19 = v48; /*0x10051ab57*/
  if ( v48 == (__int64 *)0x8000000000000000LL ) /*0x10051ab61*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v49); /*0x10051ab6a*/
    v20 = 1; /*0x10051ab6f*/
    v19 = nullptr; /*0x10051ab75*/
    v21 = nullptr; /*0x10051ab78*/
  }
  else
  {
    v20 = (__int64)v49; /*0x10051ab7c*/
    v21 = v50; /*0x10051ab83*/
  }
  base64::engine::Engine::encode::inner::h51f3163bd6933c68(&v36, &unk_1015FC842, v20, v21); /*0x10051ab9e*/
  if ( v19 ) /*0x10051aba6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x10051abb3*/
  serde_json::ser::to_vec::haa2ccd5674877793(&v48, v40, v22, v23, v24, v25, v30, v31, v32); /*0x10051abc6*/
  v26 = v48; /*0x10051abcb*/
  if ( v48 == (__int64 *)0x8000000000000000LL ) /*0x10051abd5*/
  {
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v49); /*0x10051abde*/
    v27 = 1; /*0x10051abe3*/
    v26 = nullptr; /*0x10051abe9*/
    v28 = nullptr; /*0x10051abec*/
  }
  else
  {
    v27 = (__int64)v49; /*0x10051abf0*/
    v28 = v50; /*0x10051abf7*/
  }
  base64::engine::Engine::encode::inner::h51f3163bd6933c68(&v55, &unk_1015FC842, v27, v28); /*0x10051ac0f*/
  if ( v26 ) /*0x10051ac17*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v26, 1); /*0x10051ac24*/
  v48 = &v36; /*0x10051ac29*/
  v49 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10051ac37*/
  v50 = &v55; /*0x10051ac3e*/
  v51 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10051ac45*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017C124B, &v48); /*0x10051ac5d*/
  if ( v55 ) /*0x10051ac69*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x10051ac74*/
  if ( v36 ) /*0x10051ac83*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x10051ac91*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v41); /*0x10051ac9d*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v40); /*0x10051acae*/
}