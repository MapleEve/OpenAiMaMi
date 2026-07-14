__int64 __fastcall codexmate_lib::core::repository::Repository::persist_registry::haf3cfbaf5a89afb4(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  void *v10; // r13
  size_t v11; // r12
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rdx
  size_t v17; // rdi
  int v18; // edx
  unsigned __int64 *v19; // r12
  __int64 v20; // r12
  size_t v21; // r12
  unsigned __int64 v22; // rcx
  int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // rcx
  char v26; // al
  int v27; // edx
  char v28; // cl
  _BYTE *v29; // rax
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rsi
  _QWORD v35[3]; // [rsp+0h] [rbp-160h] BYREF
  __int64 v36; // [rsp+18h] [rbp-148h] BYREF
  __int64 v37; // [rsp+20h] [rbp-140h]
  __int64 v38; // [rsp+28h] [rbp-138h]
  unsigned __int64 **v39; // [rsp+30h] [rbp-130h] BYREF
  void *v40; // [rsp+38h] [rbp-128h]
  size_t v41; // [rsp+40h] [rbp-120h]
  _QWORD v42[3]; // [rsp+48h] [rbp-118h] BYREF
  __int64 v43; // [rsp+60h] [rbp-100h] BYREF
  __int64 v44; // [rsp+68h] [rbp-F8h] BYREF
  char v45; // [rsp+70h] [rbp-F0h]
  __int16 v46; // [rsp+71h] [rbp-EFh]
  char v47; // [rsp+73h] [rbp-EDh]
  int v48; // [rsp+74h] [rbp-ECh] BYREF
  char v49[80]; // [rsp+78h] [rbp-E8h] BYREF
  unsigned __int64 *v50; // [rsp+C8h] [rbp-98h] BYREF
  void *v51; // [rsp+D0h] [rbp-90h]
  size_t v52; // [rsp+D8h] [rbp-88h]
  __int64 v53; // [rsp+E0h] [rbp-80h]
  char v54; // [rsp+E8h] [rbp-78h]
  __int64 v55; // [rsp+F0h] [rbp-70h]
  _QWORD v56[2]; // [rsp+F8h] [rbp-68h] BYREF
  unsigned __int64 v57; // [rsp+108h] [rbp-58h] BYREF
  _BYTE *v58; // [rsp+110h] [rbp-50h]
  __int64 v59; // [rsp+118h] [rbp-48h]
  __int64 v60; // [rsp+120h] [rbp-40h] BYREF
  unsigned __int64 **v61; // [rsp+128h] [rbp-38h]
  size_t __n; // [rsp+130h] [rbp-30h]

  result = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(a2); /*0x100527113*/
  if ( result ) /*0x10052711b*/
  {
    *a1 = 2; /*0x10052711d*/
    a1[1] = result; /*0x100527124*/
    return result; /*0x100527128*/
  }
  if ( !a4 ) /*0x100527130*/
    goto LABEL_20; /*0x100527130*/
  v10 = (void *)a2[28]; /*0x100527136*/
  v11 = a2[29]; /*0x10052713d*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v39, v10, v11); /*0x100527151*/
  if ( (_DWORD)v39 != 1 ) /*0x10052715d*/
  {
    __n = v11; /*0x1005271bc*/
    v50 = (unsigned __int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(&v39, v10, v9); /*0x1005271c5*/
    LODWORD(v51) = v18; /*0x1005271cc*/
    v19 = nullptr; /*0x1005271d2*/
    std::time::SystemTime::duration_since::had059553cab94f96(&v39, &v50, 0, 0); /*0x1005271e7*/
    if ( !(_BYTE)v39 ) /*0x1005271f3*/
      v19 = (unsigned __int64 *)v40; /*0x1005271f5*/
    v50 = v19; /*0x1005271fc*/
    v39 = &v50; /*0x10052720a*/
    v40 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100527218*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_10122AD81, &v39); /*0x100527234*/
    v20 = v37; /*0x100527247*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v39, a2[37], a2[38], v37, v38); /*0x10052725f*/
    if ( v36 ) /*0x10052726e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v36, 1); /*0x100527278*/
    v21 = (size_t)v40; /*0x10052727d*/
    if ( std::sys::fs::copy::hcda968f022f0a0e3(v10, __n, v40, v41) && (v9 & 3) == 1 ) /*0x1005272a7*/
    {
      __n = v21; /*0x1005275ee*/
      v55 = v9 - 1; /*0x1005275f6*/
      v32 = *(_QWORD *)(v9 - 1); /*0x1005275fa*/
      v33 = *(_QWORD *)(v9 + 7); /*0x1005275fe*/
      if ( *(_QWORD *)v33 ) /*0x100527602*/
        (*(void (__fastcall **)(_QWORD))v33)(*(_QWORD *)(v9 - 1)); /*0x10052760e*/
      v34 = *(_QWORD *)(v33 + 8); /*0x100527610*/
      if ( v34 ) /*0x100527618*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v34, *(_QWORD *)(v33 + 16)); /*0x100527622*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, 24, 8); /*0x100527635*/
      v21 = __n; /*0x10052763a*/
      v15 = (__int64)v39; /*0x10052763e*/
      if ( !v39 ) /*0x100527648*/
        goto LABEL_20; /*0x100527648*/
    }
    else
    {
      v15 = (__int64)v39; /*0x1005272ad*/
      if ( !v39 ) /*0x1005272b7*/
        goto LABEL_20; /*0x1005272b7*/
    }
    v16 = 1; /*0x1005272b9*/
    v17 = v21; /*0x1005272be*/
LABEL_19:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v15, v16); /*0x1005272c1*/
    goto LABEL_20; /*0x1005272c1*/
  }
  if ( ((unsigned __int8)v40 & 3) == 1 ) /*0x10052716e*/
  {
    __n = (size_t)v40 - 1; /*0x100527178*/
    v12 = *(_QWORD *)((char *)v40 - 1); /*0x10052717c*/
    v13 = *(_QWORD *)((char *)v40 + 7); /*0x100527180*/
    if ( *(_QWORD *)v13 ) /*0x100527184*/
      (*(void (__fastcall **)(__int64))v13)(v12); /*0x100527190*/
    v14 = *(_QWORD *)(v13 + 8); /*0x100527192*/
    if ( v14 ) /*0x10052719a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x1005271a4*/
    v15 = 24; /*0x1005271a9*/
    v16 = 8; /*0x1005271ae*/
    v17 = __n; /*0x1005271b3*/
    goto LABEL_19; /*0x1005271b7*/
  }
LABEL_20:
  __n = (size_t)a2; /*0x1005272c6*/
  v22 = 0x8000000000000000LL; /*0x1005272ca*/
  v23 = *(_DWORD *)(a3 + 68); /*0x1005272d4*/
  v24 = *(_QWORD *)(a3 + 48); /*0x1005272d8*/
  if ( __OFSUB__(0, *(_QWORD *)(a3 + 24)) ) /*0x1005272de*/
    v57 = 0x8000000000000000LL; /*0x1005272e7*/
  else
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v57, a3 + 24); /*0x1005272f8*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h2597b2c6bd2c82b0(&v50, a3, v9, v22); /*0x100527307*/
  v26 = *(_BYTE *)(a3 + 64); /*0x10052730c*/
  if ( v26 != 2 ) /*0x100527313*/
  {
    v25 = *(_QWORD *)(a3 + 56); /*0x100527315*/
    BYTE2(v56[0]) = *(_BYTE *)(a3 + 67); /*0x10052731e*/
    LOWORD(v56[0]) = *(_WORD *)(a3 + 65); /*0x100527326*/
  }
  v27 = 2; /*0x10052732e*/
  if ( v23 >= 3 ) /*0x100527333*/
    v27 = v23; /*0x100527333*/
  v43 = v24; /*0x100527337*/
  v42[0] = v57; /*0x100527346*/
  v42[1] = v58; /*0x10052734d*/
  v42[2] = v59; /*0x100527358*/
  v39 = (unsigned __int64 **)v50; /*0x10052736d*/
  v40 = v51; /*0x100527374*/
  v41 = v52; /*0x100527382*/
  v44 = v25; /*0x100527389*/
  v45 = v26; /*0x100527390*/
  v47 = BYTE2(v56[0]); /*0x10052739a*/
  v28 = *(_BYTE *)(a3 + 72); /*0x1005273a0*/
  v46 = v56[0]; /*0x1005273b0*/
  v49[0] = v28; /*0x1005273b7*/
  v48 = v27; /*0x1005273bd*/
  if ( v26 == 2 ) /*0x1005273c5*/
  {
    v45 = 0; /*0x1005273c7*/
    v44 = 0; /*0x1005273cc*/
  }
  if ( v28 == 2 ) /*0x1005273d6*/
    v49[0] = 1; /*0x1005273d8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51); /*0x1005273df*/
  v29 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1005273ee*/
  if ( !v29 ) /*0x1005273f6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100527669*/
  v57 = 128; /*0x100527403*/
  v58 = v29; /*0x10052740b*/
  v50 = &v57; /*0x100527413*/
  v51 = &unk_1012C87C3; /*0x100527421*/
  v52 = 2; /*0x100527428*/
  v53 = 1; /*0x100527433*/
  v54 = 0; /*0x10052743b*/
  *v29 = 123; /*0x10052743f*/
  v59 = 1; /*0x100527442*/
  LOWORD(v60) = 256; /*0x10052744a*/
  v61 = &v50; /*0x100527457*/
  v30 = serde_core::ser::SerializeMap::serialize_entry::h7cec3fac629920a9(&v60, &unk_1012C8816, 13, &v48); /*0x100527470*/
  if ( v30 ) /*0x100527476*/
    goto LABEL_36; /*0x100527476*/
  if ( (_BYTE)v60 ) /*0x10052747c*/
    goto LABEL_34; /*0x10052747c*/
  v30 = serde_core::ser::SerializeMap::serialize_entry::h01e9ab7c66822cb0(&v60, &unk_1012C89D0, 9, &v43); /*0x1005274a4*/
  if ( v30 ) /*0x1005274aa*/
    goto LABEL_36; /*0x1005274aa*/
  if ( (_BYTE)v60 ) /*0x1005274f1*/
    goto LABEL_34; /*0x1005274f1*/
  v30 = serde_core::ser::SerializeMap::serialize_entry::h6bbf1a7b791aa27c( /*0x10052750f*/
          &v60,
          "activeAccountKeyIllegalEventNameTokioOneshotRecv",
          16,
          v42);
  if ( v30 ) /*0x100527515*/
    goto LABEL_36; /*0x100527515*/
  if ( (_BYTE)v60 ) /*0x10052751b*/
  {
LABEL_34:
    v30 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100527483*/
    goto LABEL_36; /*0x100527486*/
  }
  v30 = serde_core::ser::SerializeMap::serialize_entry::he0c234ff334ab75d(&v60, &unk_1012C89D9, 5, &v39); /*0x10052753d*/
  if ( v30 /*0x100527577*/
    || (v30 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h7c2eb0b182eb1312(
                &v60,
                &v44)) != 0
    || (v30 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fd6951859c94fbd(
                &v60,
                v49)) != 0 )
  {
LABEL_36:
    if ( v57 ) /*0x1005274b3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x1005274be*/
    v31 = 3; /*0x1005274c3*/
    goto LABEL_39; /*0x1005274c3*/
  }
  v56[1] = v61; /*0x100527585*/
  v56[0] = v60; /*0x100527589*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h012513cddb363fda(v56); /*0x100527591*/
  v30 = (__int64)v58; /*0x10052759a*/
  v31 = 3; /*0x10052759e*/
  if ( v57 != 0x8000000000000000LL ) /*0x1005275a6*/
  {
    v35[0] = v57; /*0x1005275b0*/
    v35[1] = v58; /*0x1005275b7*/
    v35[2] = v59; /*0x1005275be*/
    v30 = std::fs::write::he202b9221f99a334(__n + 216, v35); /*0x1005275dc*/
    if ( !v30 ) /*0x1005275e2*/
    {
      *a1 = 10; /*0x100527653*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&v39); /*0x10052765a*/
    }
    v31 = 2; /*0x1005275e4*/
  }
LABEL_39:
  *a1 = v31; /*0x1005274c8*/
  a1[1] = v30; /*0x1005274cb*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(&v39); /*0x1005274db*/
}