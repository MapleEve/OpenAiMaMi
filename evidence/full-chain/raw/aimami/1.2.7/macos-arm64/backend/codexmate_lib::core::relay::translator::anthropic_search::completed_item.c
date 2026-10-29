// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::completed_item::h5ee6efc2262833e8; addr: 0x100ac7e80; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:18Z
__int64 __fastcall codexmate_lib::core::relay::translator::anthropic_search::completed_item::h5ee6efc2262833e8(
        __int64 a1,
        void *a2,
        signed __int64 a3,
        void *a4,
        size_t a5,
        __int64 *a6)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rax
  size_t v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  _DWORD *v13; // rax
  void *v14; // rax
  _WORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // rcx
  size_t v29; // rdx
  __int64 v30; // r15
  char v31; // al
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  _QWORD v37[3]; // [rsp+0h] [rbp-120h] BYREF
  _QWORD v38[3]; // [rsp+18h] [rbp-108h] BYREF
  void *__src; // [rsp+30h] [rbp-F0h]
  __int64 v40; // [rsp+38h] [rbp-E8h]
  size_t __n; // [rsp+40h] [rbp-E0h]
  _QWORD v42[2]; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-C8h]
  void *v44; // [rsp+60h] [rbp-C0h]
  void *v45; // [rsp+68h] [rbp-B8h]
  __int64 v46; // [rsp+70h] [rbp-B0h]
  _QWORD v47[2]; // [rsp+78h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-98h]
  __int64 v49; // [rsp+90h] [rbp-90h]
  size_t v50; // [rsp+98h] [rbp-88h]
  _QWORD v51[4]; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-60h] BYREF
  _DWORD *v53; // [rsp+C8h] [rbp-58h]
  __int64 v54; // [rsp+D0h] [rbp-50h]
  __int64 v55; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-40h]
  __int64 v57; // [rsp+E8h] [rbp-38h]
  __int64 v58; // [rsp+F0h] [rbp-30h]

  v50 = a5; /*0x100ac7e94*/
  v44 = a4; /*0x100ac7e9b*/
  __src = a2; /*0x100ac7ea5*/
  v7 = a1; /*0x100ac7eac*/
  v8 = *a6; /*0x100ac7eaf*/
  if ( __OFSUB__(-*a6, 1) ) /*0x100ac7eb5*/
  {
    v9 = 8; /*0x100ac7eba*/
    v10 = 6; /*0x100ac7ebf*/
    v45 = "failed"; /*0x100ac7ecc*/
    v11 = 0; /*0x100ac7ed3*/
    v8 = 0; /*0x100ac7ed5*/
  }
  else
  {
    v9 = a6[1]; /*0x100ac7ed9*/
    v11 = a6[2]; /*0x100ac7edd*/
    v10 = 9; /*0x100ac7ee1*/
    v45 = "completed"; /*0x100ac7eee*/
  }
  v49 = v8; /*0x100ac7ef5*/
  v38[0] = v8; /*0x100ac7efc*/
  v46 = v9; /*0x100ac7f03*/
  v38[1] = v9; /*0x100ac7f0a*/
  v40 = v11; /*0x100ac7f11*/
  v38[2] = v11; /*0x100ac7f18*/
  v47[0] = 0; /*0x100ac7f1f*/
  v48 = 0; /*0x100ac7f2a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x100ac7f35*/
  v12 = 4; /*0x100ac7f3a*/
  v13 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac7f4a*/
  if ( !v13 ) /*0x100ac7f52*/
    goto LABEL_50; /*0x100ac7f52*/
  *v13 = 1701869940; /*0x100ac7f5b*/
  v52 = 4; /*0x100ac7f61*/
  v53 = v13; /*0x100ac7f69*/
  v54 = 4; /*0x100ac7f6d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac7f75*/
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100ac7f84*/
  if ( !v14 ) /*0x100ac7f8c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100ac852b*/
  qmemcpy(v14, "web_search_call", 15); /*0x100ac7faa*/
  LOBYTE(v55) = 3; /*0x100ac7fad*/
  v56 = 15; /*0x100ac7fb1*/
  v57 = (__int64)v14; /*0x100ac7fb9*/
  v58 = 15; /*0x100ac7fbd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v47, &v52, &v55); /*0x100ac7fd8*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac7fe1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac7fe7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x100ac7fec*/
  v12 = 2; /*0x100ac7ff1*/
  v15 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100ac8001*/
  if ( !v15 ) /*0x100ac8009*/
    goto LABEL_50; /*0x100ac8009*/
  *v15 = 25705; /*0x100ac8012*/
  v52 = 2; /*0x100ac8017*/
  v53 = v15; /*0x100ac801f*/
  v54 = 2; /*0x100ac8023*/
  if ( a3 < 0 ) /*0x100ac802e*/
  {
    v16 = 0; /*0x100ac8030*/
    goto LABEL_11; /*0x100ac8030*/
  }
  if ( a3 ) /*0x100ac8043*/
  {
    __n = v10; /*0x100ac8045*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x100ac804f*/
    v16 = 1; /*0x100ac8054*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100ac8062*/
    if ( !v17 ) /*0x100ac806a*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, a3); /*0x100ac8033*/
    v18 = v17; /*0x100ac806c*/
    v7 = a1; /*0x100ac806f*/
    v10 = __n; /*0x100ac8072*/
  }
  else
  {
    v18 = 1; /*0x100ac807b*/
  }
  memcpy((void *)v18, __src, a3); /*0x100ac808e*/
  LOBYTE(v55) = 3; /*0x100ac8093*/
  v56 = a3; /*0x100ac8097*/
  v57 = v18; /*0x100ac809b*/
  v58 = a3; /*0x100ac809f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v47, &v52, &v55); /*0x100ac80b6*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac80bf*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac80c5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x100ac80ca*/
  v12 = 6; /*0x100ac80cf*/
  v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ac80df*/
  if ( !v19 ) /*0x100ac80e7*/
    goto LABEL_50; /*0x100ac80e7*/
  *(_WORD *)(v19 + 4) = 29557; /*0x100ac80f0*/
  *(_DWORD *)v19 = 1952543859; /*0x100ac80f6*/
  v52 = 6; /*0x100ac80fc*/
  v53 = (_DWORD *)v19; /*0x100ac8104*/
  v54 = 6; /*0x100ac8108*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x100ac8110*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x100ac811d*/
  if ( !v20 ) /*0x100ac8125*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10); /*0x100ac853a*/
  v21 = (__int64)v20; /*0x100ac812b*/
  memcpy(v20, v45, v10); /*0x100ac813b*/
  LOBYTE(v55) = 3; /*0x100ac8140*/
  v56 = v10; /*0x100ac8144*/
  v57 = v21; /*0x100ac8148*/
  v58 = v10; /*0x100ac814c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v47, &v52, &v55); /*0x100ac8163*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac816c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac8172*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x100ac8177*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ac8186*/
  if ( !v22 ) /*0x100ac818e*/
LABEL_50:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v12); /*0x100ac850b*/
  *(_WORD *)(v22 + 4) = 28271; /*0x100ac8197*/
  *(_DWORD *)v22 = 1769235297; /*0x100ac819d*/
  v37[0] = 6; /*0x100ac81a3*/
  v37[1] = v22; /*0x100ac81ae*/
  v37[2] = 6; /*0x100ac81b5*/
  v42[0] = 0; /*0x100ac81c0*/
  v43 = 0; /*0x100ac81cb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x100ac81d6*/
  v23 = 4; /*0x100ac81db*/
  v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac81eb*/
  if ( !v24 ) /*0x100ac81f3*/
    goto LABEL_51; /*0x100ac81f3*/
  v25 = (__int64)v24; /*0x100ac81f9*/
  *v24 = 1701869940; /*0x100ac81fc*/
  v52 = 4; /*0x100ac8202*/
  v53 = v24; /*0x100ac820a*/
  v54 = 4; /*0x100ac820e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac8216*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100ac8225*/
  if ( !v26 ) /*0x100ac822d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100ac854b*/
  *(_WORD *)(v26 + 4) = 26723; /*0x100ac8233*/
  *(_DWORD *)v26 = 1918985587; /*0x100ac8239*/
  LOBYTE(v55) = 3; /*0x100ac823f*/
  v56 = 6; /*0x100ac8243*/
  v57 = v26; /*0x100ac824b*/
  v58 = 6; /*0x100ac824f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v42, &v52, &v55); /*0x100ac826a*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac8273*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac8279*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x100ac827e*/
  v23 = 5; /*0x100ac8283*/
  v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100ac8293*/
  if ( !v27 ) /*0x100ac829b*/
    goto LABEL_51; /*0x100ac829b*/
  *(_BYTE *)(v27 + 4) = 121; /*0x100ac82a4*/
  *(_DWORD *)v27 = 1919251825; /*0x100ac82a8*/
  v52 = 5; /*0x100ac82ae*/
  v53 = (_DWORD *)v27; /*0x100ac82b6*/
  v54 = 5; /*0x100ac82ba*/
  if ( v44 ) /*0x100ac82ca*/
  {
    v29 = v50; /*0x100ac82cc*/
    if ( (v50 & 0x8000000000000000LL) != 0LL ) /*0x100ac82d6*/
    {
      v30 = 0; /*0x100ac82d8*/
      goto LABEL_31; /*0x100ac82d8*/
    }
    if ( v50 ) /*0x100ac82ef*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5); /*0x100ac82f1*/
      v30 = 1; /*0x100ac82f6*/
      v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v50, 1); /*0x100ac8308*/
      v29 = v50; /*0x100ac830d*/
      if ( !v32 ) /*0x100ac8317*/
LABEL_31:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v30, v29); /*0x100ac82db*/
      v25 = v32; /*0x100ac8319*/
    }
    else
    {
      v25 = 1; /*0x100ac831e*/
    }
    memcpy((void *)v25, v44, v29); /*0x100ac832d*/
    v28 = v50; /*0x100ac8332*/
    v31 = 3; /*0x100ac8339*/
  }
  else
  {
    v31 = 0; /*0x100ac82eb*/
  }
  LOBYTE(v55) = v31; /*0x100ac833b*/
  v56 = v28; /*0x100ac833e*/
  v57 = v25; /*0x100ac8342*/
  v58 = v28; /*0x100ac8346*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v42, &v52, &v55); /*0x100ac835d*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac8366*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac836c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x100ac8371*/
  v23 = 7; /*0x100ac8376*/
  v33 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100ac8386*/
  if ( !v33 ) /*0x100ac838e*/
LABEL_51:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x100ac851a*/
  *(_DWORD *)((char *)v33 + 3) = 1936024434; /*0x100ac8397*/
  *v33 = 1920298867; /*0x100ac839e*/
  v52 = 7; /*0x100ac83a4*/
  v53 = v33; /*0x100ac83ac*/
  v54 = 7; /*0x100ac83b0*/
  serde_core::ser::Serializer::collect_seq::h430d6f304203f116(&v55, v38); /*0x100ac83c3*/
  if ( (_BYTE)v55 == 6 )
  {
    v51[0] = v56; /*0x100ac84da*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueNot a MenuNot a SubmenuErrorByteCountNotDivisibleBy4byte_countDimension"
      "sVsPixelCountwidth_x_heightpixel_countOsErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPasswordassertio"
      "n failed: self.is_char_boundary(new_len)EventTargetinternally tagged enum EventTarget***",
      43,
      v51,
      &off_101C0A248,
      &off_101C08B18);
  }
  v51[3] = v58; /*0x100ac83d6*/
  v51[2] = v57; /*0x100ac83de*/
  v51[1] = v56; /*0x100ac83ea*/
  v51[0] = v55; /*0x100ac83ee*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v55, v42, &v52, v51); /*0x100ac8405*/
  if ( (_BYTE)v55 != 6 ) /*0x100ac840e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v55); /*0x100ac8414*/
  v56 = v42[0]; /*0x100ac8427*/
  v57 = v42[1]; /*0x100ac842b*/
  v58 = v43; /*0x100ac8436*/
  LOBYTE(v55) = 5; /*0x100ac843a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v51, v47, v37, &v55); /*0x100ac8454*/
  if ( LOBYTE(v51[0]) != 6 ) /*0x100ac845d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100ac8463*/
  *(_QWORD *)(v7 + 24) = v48; /*0x100ac846f*/
  v34 = v47[0]; /*0x100ac8473*/
  *(_QWORD *)(v7 + 16) = v47[1]; /*0x100ac8481*/
  *(_QWORD *)(v7 + 8) = v34; /*0x100ac8485*/
  *(_BYTE *)v7 = 5; /*0x100ac8489*/
  v35 = v46; /*0x100ac848e*/
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(v46, v40); /*0x100ac849f*/
  if ( v49 ) /*0x100ac84ae*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 32 * v49, 8); /*0x100ac84bc*/
  return v7; /*0x100ac84c4*/
}