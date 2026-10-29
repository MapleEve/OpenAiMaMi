// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/transition_journal
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::transition_journal::write_inner::h17805da6329a9a7b @ 0x1003a21c0 size=2618 lines=471 =====
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::write_inner::h17805da6329a9a7b(
        _QWORD *a1,
        __int64 a2,
        int a3,
        void *a4,
        size_t a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        size_t a9,
        char a10)
{
  unsigned int v11; // r14d
  __int64 v12; // rbx
  int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // r12
  __int64 v16; // r15
  _QWORD *result; // rax
  unsigned __int64 v18; // r14
  __int64 *v19; // rdi
  __int64 v20; // r15
  unsigned __int64 v21; // r13
  __int64 *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // r8
  __int64 v25; // r12
  size_t v26; // r15
  __int64 v27; // rax
  size_t v28; // r12
  size_t v29; // rdi
  size_t v30; // r13
  __int64 v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  void *v36; // rax
  void *v37; // r12
  size_t v38; // r14
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rbx
  size_t v41; // r13
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r12
  _QWORD *v45; // rbx
  __int64 v46; // rsi
  _QWORD *v47; // rax
  __int64 v48; // rax
  size_t v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // r15
  __int64 v58; // r12
  __int64 v59; // rsi
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD v62[9]; // [rsp+18h] [rbp-1D8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-190h] BYREF
  __int64 v64; // [rsp+68h] [rbp-188h]
  __int64 v65; // [rsp+70h] [rbp-180h]
  _QWORD v66[12]; // [rsp+78h] [rbp-178h] BYREF
  _QWORD v67[9]; // [rsp+D8h] [rbp-118h] BYREF
  size_t __n; // [rsp+120h] [rbp-D0h]
  __int64 v69; // [rsp+128h] [rbp-C8h]
  __int64 v70; // [rsp+130h] [rbp-C0h]
  __int64 v71; // [rsp+138h] [rbp-B8h] BYREF
  void *__src; // [rsp+140h] [rbp-B0h]
  _QWORD *v73; // [rsp+148h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+150h] [rbp-A0h]
  size_t v75; // [rsp+158h] [rbp-98h]
  void *v76; // [rsp+160h] [rbp-90h]
  unsigned __int64 v77; // [rsp+168h] [rbp-88h]
  __int64 (__fastcall *v78)(); // [rsp+170h] [rbp-80h]
  __int64 v79; // [rsp+178h] [rbp-78h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+180h] [rbp-70h]
  unsigned __int64 v81; // [rsp+188h] [rbp-68h]
  __int16 v82; // [rsp+190h] [rbp-60h] BYREF
  _QWORD *v83; // [rsp+198h] [rbp-58h]
  _QWORD *v84; // [rsp+1A0h] [rbp-50h]
  size_t v85; // [rsp+1A8h] [rbp-48h]
  __int64 v86; // [rsp+1B0h] [rbp-40h]
  __int64 v87; // [rsp+1B8h] [rbp-38h]
  int v88; // [rsp+1C4h] [rbp-2Ch]

  v69 = a6;
  __src = a4;
  v88 = a3;
  v87 = a2;
  v84 = a1;
  LOBYTE(v77) = a10;
  v85 = a9;
  v76 = a8;
  v70 = a7;
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v66);
  v11 = v66[0];
  v12 = (unsigned int)((SLODWORD(v66[0]) >> 13) - 1);
  v13 = 0;
  __n = a5;
  if ( SLODWORD(v66[0]) >> 13 <= 0 )
  {
    v14 = (1 - (SLODWORD(v66[0]) >> 13)) / 0x190u + 1;
    v12 = 400 * v14 + (unsigned int)v12;
    v13 = -146097 * v14;
  }
  v15 = HIDWORD(v66[0]);
  v16 = LODWORD(v66[1]);
  codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00(v66, v87);
  result = (_QWORD *)v66[0];
  qmemcpy(v67, &v66[1], sizeof(v67));
  if ( v66[0] != 11 )
  {
    v23 = v66[10];
    v24 = v84;
    v84[11] = v66[11];
    v24[10] = v23;
    qmemcpy(v24 + 1, v67, 0x48u);
    *v24 = result;
    return result;
  }
  v18 = 1000
      * (v15
       + 86400LL
       * (int)((((int)v12 / 100) >> 2) + ((1461 * (int)v12) >> 2) + v13 + ((v11 >> 4) & 0x1FF) - (int)v12 / 100 - 719163))
      + ((unsigned __int64)(1125899907 * v16) >> 50);
  qmemcpy(v62, v67, sizeof(v62));
  v19 = &v63;
  v20 = v62[0];
  if ( (__OFSUB__(-v62[0], 1) | (unsigned __int8)v77) == 1 )
  {
    v21 = v18;
    if ( v62[0] == 0x8000000000000000LL )
      goto LABEL_19;
    v22 = (__int64 *)v62[1];
  }
  else
  {
    v22 = (__int64 *)v62[1];
    if ( v62[2] == 10 && !(*(_QWORD *)v62[1] ^ 0x697474696D6D6F63LL | *(unsigned __int16 *)(v62[1] + 8LL) ^ 0x676ELL) )
    {
      v34 = v62[1];
      v35 = *(_QWORD *)(v87 + 584);
      codexmate_lib::core::relay::transition_journal::append_event::h4991c0e9e7a66037(
        v35,
        *(_QWORD *)(v87 + 592),
        (unsigned __int8)v88,
        __src,
        __n,
        v69,
        v70,
        v76,
        v85);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v35);
      v36 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(170, 1);
      if ( !v36 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 170);
      v37 = v36;
      memcpy(v36, &anon_ab021cfe7cb89972c8491e461d453946_390, 0xAAu);
      result = v84;
      *v84 = 10;
      result[1] = 170;
      result[2] = v37;
      result[3] = 170;
      if ( v20 )
        result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v20, 1);
      if ( v62[3] != 0x8000000000000000LL && v62[3] )
        return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62[4], v62[3], 1);
      return result;
    }
  }
  v25 = v62[3];
  v12 = v62[4];
  v21 = v62[6];
  if ( LOBYTE(v62[8]) == (_BYTE)v88 )
  {
    if ( v62[0] )
    {
      v19 = v22;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v62[0], 1);
    }
    if ( !(2 * v25) )
      goto LABEL_19;
  }
  else
  {
    if ( v62[0] )
    {
      v19 = v22;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v62[0], 1);
    }
    v21 = v18;
    if ( !(2 * v25) )
      goto LABEL_19;
  }
  v19 = (__int64 *)v12;
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v25, 1);
LABEL_19:
  v26 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v12 = 0;
    goto LABEL_21;
  }
  v77 = v21;
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19);
    v12 = 1;
    v27 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v26, 1);
    if ( !v27 )
LABEL_21:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v26);
    v28 = v27;
  }
  else
  {
    v28 = 1;
  }
  v29 = v28;
  memcpy((void *)v28, __src, v26);
  v30 = v85;
  if ( v76 )
  {
    if ( (v85 & 0x8000000000000000LL) != 0LL )
    {
      v31 = 0;
      goto LABEL_29;
    }
    if ( v85 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28);
      v31 = 1;
      v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v30, 1);
      if ( !v33 )
LABEL_29:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v31, v85);
      v30 = v85;
    }
    else
    {
      v33 = 1;
    }
    v12 = v33;
    v29 = v33;
    memcpy((void *)v33, v76, v30);
    v32 = v30;
  }
  else
  {
    v32 = 0x8000000000000000LL;
  }
  BYTE1(v67[8]) = 1;
  LOBYTE(v67[8]) = v88;
  v67[0] = v26;
  v67[1] = v28;
  v67[2] = v26;
  v67[6] = v77;
  v67[7] = v18;
  v77 = v32;
  v67[3] = v32;
  v64 = v12;
  v67[4] = v12;
  v38 = v30;
  v67[5] = v30;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29);
  v39 = (__int64 (__fastcall *)())_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1);
  if ( !v39 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128);
  v79 = 128;
  v80 = v39;
  v66[0] = &v79;
  v66[1] = &unk_10182686F;
  v66[2] = 2;
  v66[3] = 1;
  LOBYTE(v66[4]) = 0;
  *(_BYTE *)v39 = 123;
  v81 = 1;
  v82 = 256;
  v83 = v66;
  v40 = serde_core::ser::SerializeMap::serialize_entry::h360c4ae654df8c42(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_30,
          13,
          (char *)&v67[8] + 1);
  v85 = v28;
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v82 )
    goto LABEL_45;
  v40 = serde_core::ser::SerializeMap::serialize_entry::hb0151d155570a03c(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_374,
          6,
          &v67[8]);
  if ( v40 )
  {
LABEL_47:
    if ( v79 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1);
    goto LABEL_49;
  }
  if ( (_BYTE)v82 )
    goto LABEL_45;
  v40 = serde_core::ser::SerializeMap::serialize_entry::hb60c123568700c16(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_375,
          5,
          v67);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v82 )
    goto LABEL_45;
  v40 = serde_core::ser::SerializeMap::serialize_entry::h1484048318609308(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_385,
          11,
          &v67[6]);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v82 )
    goto LABEL_45;
  v40 = serde_core::ser::SerializeMap::serialize_entry::h1484048318609308(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_386,
          11,
          &v67[7]);
  if ( v40 )
    goto LABEL_47;
  if ( (_BYTE)v82 )
  {
LABEL_45:
    v40 = serde_json::ser::invalid_raw_value::hd0c8797395d11416();
    goto LABEL_47;
  }
  v48 = serde_core::ser::SerializeMap::serialize_entry::h0078c3a0ff9ac838(
          &v82,
          &anon_ab021cfe7cb89972c8491e461d453946_378,
          6,
          &v67[3]);
  v41 = v26;
  if ( v48 )
  {
    v40 = v48;
    goto LABEL_47;
  }
  v49 = v38;
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h729701607b9a516a(&v82);
  v78 = v80;
  v86 = v79;
  if ( v79 == 0x8000000000000000LL )
  {
    v40 = (__int64)v78;
LABEL_49:
    v41 = v26;
    v73 = (_QWORD *)v40;
    v79 = (__int64)&v73;
    v80 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v66, &unk_101A2F81B, &v79);
    v42 = v66[0];
    v43 = v66[1];
    v44 = v66[2];
    v45 = v73;
    if ( *v73 == 1 )
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0f9d15e22e253cd(v73 + 1);
    }
    else if ( !*v73 )
    {
      v46 = v73[2];
      if ( v46 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73[1], v46, 1);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 40, 8);
    v47 = v84;
    *v84 = 10;
    v47[1] = v42;
    v47[2] = v43;
    v47[3] = v44;
LABEL_55:
    if ( v41 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v41, 1);
    result = (_QWORD *)(2 * v77);
    if ( 2 * v77 )
      return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v77, 1);
    return result;
  }
  v50 = v81;
  if ( v81 > 0x100000 )
  {
    v73 = &unk_101827A4B;
    v74 = 39;
    v79 = (__int64)&v73;
    v80 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v66[1], &anon_ab021cfe7cb89972c8491e461d453946_358, &v79);
    v66[0] = 9;
    qmemcpy(v84, v66, 0x60u);
LABEL_81:
    if ( v86 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v86, 1);
    goto LABEL_55;
  }
  v51 = *(_QWORD *)(v87 + 592);
  v65 = *(_QWORD *)(v87 + 584);
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v73,
    v65,
    v51,
    "router-transition-journal.jsonunsupported transition record versionphase record exceeds the size limitphase record is not a regular file",
    30);
  v87 = v74;
  v52 = codexmate_lib::core::relay::atomic_write::write_atomic_private_report::hcd723884b82d3047(
          (void *)v74,
          v75,
          (__int64)v78,
          v50);
  v54 = v53;
  if ( (v52 & 1) != 0 )
  {
    v71 = v53;
    v66[0] = &v71;
    v66[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_101A2F7F0, v66);
    v55 = v79;
    v66[0] = v80;
    v66[1] = v81;
    if ( (v71 & 3) == 1 )
    {
      v56 = v71 - 1;
      v57 = *(_QWORD *)(v71 - 1);
      v58 = *(_QWORD *)(v71 + 7);
      if ( *(_QWORD *)v58 )
        (*(void (__fastcall **)(__int64))v58)(v57);
      v59 = *(_QWORD *)(v58 + 8);
      if ( v59 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v59, *(_QWORD *)(v58 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24, 8);
    }
    v60 = v84;
    qmemcpy(v84 + 2, v66, 0x50u);
    *v60 = 10;
    v60[1] = v55;
    if ( v73 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v73, 1);
    goto LABEL_81;
  }
  v63 = v53;
  if ( v73 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v73, 1);
  codexmate_lib::core::relay::transition_journal::append_event::h4991c0e9e7a66037(
    v65,
    v51,
    (unsigned __int8)v88,
    __src,
    v41,
    v69,
    v70,
    v76,
    v49);
  v61 = v84;
  v84[1] = v54;
  *v61 = 11;
  if ( v86 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v86, 1);
  return (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..relay..transition_journal..TransitionJournal$GT$::h71c27bf29f6a7e06(v67);
}

// ===== codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00 @ 0x1003a4840 size=1658 lines=252 =====
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 (__fastcall *v6)(); // rcx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 (__fastcall *v10)(); // r15
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  char v15; // r13
  __int64 (__fastcall *v16)(); // rdx
  char **v17; // r12
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 (__fastcall *v22)(); // r12
  char **v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  char v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  _QWORD v32[4]; // [rsp+0h] [rbp-150h] BYREF
  __int64 v33; // [rsp+20h] [rbp-130h] BYREF
  __int64 v34; // [rsp+28h] [rbp-128h]
  __int64 v35; // [rsp+30h] [rbp-120h]
  char *v36; // [rsp+38h] [rbp-118h]
  _QWORD v37[19]; // [rsp+40h] [rbp-110h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-70h]
  unsigned __int64 v40; // [rsp+E8h] [rbp-68h]
  char *v41; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-58h]
  char **v43; // [rsp+108h] [rbp-48h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+110h] [rbp-40h]
  __int64 v45; // [rsp+118h] [rbp-38h]
  __int64 v46; // [rsp+120h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(
    &v33,
    *(_QWORD *)(a2 + 584),
    *(_QWORD *)(a2 + 592),
    "router-transition-journal.jsonunsupported transition record versionphase record exceeds the size limitphase record is not a regular file",
    30);
  v3 = v34;
  v4 = v35;
  std::sys::fs::symlink_metadata::hd69903fe66faddbd(v37, v34, v35);
  v5 = v37[1];
  if ( !LOBYTE(v37[0]) )
  {
    if ( (v37[1] & 0xF00000000000LL) != 0x800000000000LL )
    {
      v41 = "phase record is not a regular file";
      v42 = 34;
      v43 = &v41;
      v44 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37[1], &anon_ab021cfe7cb89972c8491e461d453946_358, &v43);
      v37[0] = 9;
      qmemcpy(a1, v37, 0x60u);
      goto LABEL_31;
    }
    v38 = 0;
    v39 = 1;
    v40 = 0;
    LODWORD(v37[0]) = 0;
    WORD2(v37[0]) = 438;
    *(_DWORD *)((char *)v37 + 6) = 1;
    WORD1(v37[1]) = 0;
    std::fs::OpenOptions::_open::h1dad73452047b8aa(&v43, v37, v3, v4);
    if ( (_DWORD)v43 == 1 )
    {
      v10 = v44;
LABEL_19:
      v32[3] = v10;
      LOBYTE(v43) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v10);
      v37[0] = &v43;
      v37[1] = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41, &unk_101A2F8BA, v37);
      v37[0] = &v41;
      v37[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v43, &anon_ab021cfe7cb89972c8491e461d453946_358, v37);
      v17 = v43;
      v37[0] = v44;
      v37[1] = v45;
      if ( v41 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1);
      if ( ((unsigned __int8)v10 & 3) == 1 )
      {
        v36 = (char *)v10 - 1;
        v18 = *(_QWORD *)((char *)v10 - 1);
        v19 = *(_QWORD *)((char *)v10 + 7);
        if ( *(_QWORD *)v19 )
          (*(void (__fastcall **)(__int64))v19)(v18);
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v20, *(_QWORD *)(v19 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8);
      }
      qmemcpy(a1 + 2, v37, 0x50u);
      *a1 = 9;
      a1[1] = v17;
      goto LABEL_28;
    }
    LODWORD(v37[2]) = HIDWORD(v43);
    v37[0] = 1048577;
    v37[1] = 1048577;
    v15 = std::io::default_read_to_end::h6d43a6b9a5691c1a(v37, &v38, 0);
    v10 = v16;
    close_NOCANCEL(LODWORD(v37[2]));
    if ( (v15 & 1) != 0 )
      goto LABEL_19;
    v22 = (__int64 (__fastcall *)())v40;
    if ( v40 <= 0x100000 )
    {
      v23 = (char **)v39;
      v37[0] = v39;
      v37[1] = v40;
      v37[2] = 0;
      v37[3] = 0;
      serde_json::de::from_trait::h20830d73f0f672c0(&v43, v37);
      if ( (_BYTE)v43 == 1 )
      {
        core::ops::function::FnOnce::call_once::h7861de0bf343872e(v37, v44, v24, v25);
        v26 = v37[0];
        v27 = v37[1];
        memcpy((char *)a1 + 9, (char *)&v37[1] + 1, 0x57u);
        *a1 = v26;
        *((_BYTE *)a1 + 8) = v27;
        goto LABEL_28;
      }
      if ( BYTE1(v43) == 1 )
      {
        v43 = v23;
        v44 = v22;
        v45 = 0;
        v46 = 0;
        serde_json::de::from_trait::h9e850046607eb59d(v37, &v43);
        v29 = v37[0];
        v30 = v37[1];
        if ( __OFSUB__(-v37[0], 1) )
        {
          core::ops::function::FnOnce::call_once::h7861de0bf343872e(v37, v37[1], v28, -v37[0]);
          qmemcpy(a1, v37, 0x60u);
        }
        else
        {
          a1[9] = v37[8];
          a1[8] = v37[7];
          a1[7] = v37[6];
          a1[6] = v37[5];
          a1[5] = v37[4];
          v31 = v37[2];
          a1[4] = v37[3];
          a1[3] = v31;
          a1[1] = v29;
          a1[2] = v30;
          *a1 = 11;
        }
        v12 = v38;
        if ( !v38 )
          goto LABEL_31;
        v13 = 1;
        v14 = (__int64)v23;
        goto LABEL_30;
      }
      v41 = "unsupported transition record versionphase record exceeds the size limitphase record is not a regular file";
      v42 = 37;
      v43 = &v41;
      v44 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37[1], &anon_ab021cfe7cb89972c8491e461d453946_358, &v43);
    }
    else
    {
      v41 = "phase record exceeds the size limitphase record is not a regular file";
      v42 = 35;
      v43 = &v41;
      v44 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37[1], &anon_ab021cfe7cb89972c8491e461d453946_358, &v43);
    }
    v37[0] = 9;
    qmemcpy(a1, v37, 0x60u);
LABEL_28:
    v12 = v38;
    if ( !v38 )
      goto LABEL_31;
    v14 = v39;
    v13 = 1;
    goto LABEL_30;
  }
  if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v37[1]) )
  {
    a1[1] = 0x8000000000000000LL;
    *a1 = 11;
    if ( (v5 & 3) != 1 )
      goto LABEL_31;
    v7 = v5 - 1;
    v8 = *(_QWORD *)(v5 - 1);
    v9 = *(_QWORD *)(v5 + 7);
    if ( *(_QWORD *)v9 )
      (*(void (__fastcall **)(__int64))v9)(v8);
    goto LABEL_15;
  }
  v41 = (char *)v5;
  LOBYTE(v43) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v5);
  v37[0] = &v43;
  v37[1] = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v32, &unk_101A2F86F, v37);
  v43 = (char **)v32;
  v44 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v37, &anon_ab021cfe7cb89972c8491e461d453946_358, &v43);
  v43 = (char **)v37[0];
  v44 = (__int64 (__fastcall *)())v37[1];
  v45 = v37[2];
  if ( v32[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32[1], v32[0], 1);
  *a1 = 9;
  v6 = v44;
  a1[1] = v43;
  a1[2] = v6;
  a1[3] = v45;
  if ( (v5 & 3) == 1 )
  {
    v7 = v5 - 1;
    v8 = *(_QWORD *)(v5 - 1);
    v9 = *(_QWORD *)(v5 + 7);
    if ( *(_QWORD *)v9 )
      (*(void (__fastcall **)(__int64))v9)(v8);
LABEL_15:
    v11 = *(_QWORD *)(v9 + 8);
    if ( v11 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v11, *(_QWORD *)(v9 + 16));
    v12 = 24;
    v13 = 8;
    v14 = v7;
LABEL_30:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v12, v13);
  }
LABEL_31:
  if ( v33 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v33, 1);
  return a1;
}

// ===== codexmate_lib::core::relay::transition_journal::clear_inner::h52d45262dfbf85a9 @ 0x1003a1b20 size=1446 lines=227 =====
__int64 __fastcall codexmate_lib::core::relay::transition_journal::clear_inner::h52d45262dfbf85a9(
        __int64 *a1,
        __int64 a2,
        char a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 *v14; // r15
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  void *v25; // r14
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // [rsp+30h] [rbp-160h]
  __int64 v30; // [rsp+40h] [rbp-150h]
  __int64 v31; // [rsp+48h] [rbp-148h]
  _QWORD v32[12]; // [rsp+70h] [rbp-120h] BYREF
  _QWORD v33[3]; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-A8h] BYREF
  void *v35; // [rsp+F0h] [rbp-A0h]
  size_t v36; // [rsp+F8h] [rbp-98h]
  __int64 *v37; // [rsp+100h] [rbp-90h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+108h] [rbp-88h]
  __int64 v39; // [rsp+110h] [rbp-80h]
  __int64 v40; // [rsp+118h] [rbp-78h]
  __int64 v41; // [rsp+120h] [rbp-70h]
  __int64 v42; // [rsp+128h] [rbp-68h]
  __int64 v43; // [rsp+130h] [rbp-60h]
  __int64 v44; // [rsp+138h] [rbp-58h]
  __int64 v45; // [rsp+140h] [rbp-50h]
  __int64 v46; // [rsp+148h] [rbp-48h]
  __int64 v47; // [rsp+150h] [rbp-40h]
  void *v48; // [rsp+158h] [rbp-38h]
  __int64 v49; // [rsp+160h] [rbp-30h]

  codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00(v32, a2);
  result = v32[0];
  v5 = v32[1];
  v40 = v32[2];
  v41 = v32[3];
  v42 = v32[4];
  v43 = v32[5];
  v44 = v32[6];
  v45 = v32[7];
  v46 = v32[8];
  v47 = v32[9];
  if ( v32[0] != 11 )
  {
    v6 = v32[10];
    a1[11] = v32[11];
    a1[10] = v6;
    a1[9] = v47;
    a1[8] = v46;
    a1[7] = v45;
    a1[6] = v44;
    a1[5] = v43;
    a1[4] = v42;
    v7 = v40;
    a1[3] = v41;
    a1[2] = v7;
    *a1 = result;
    a1[1] = v5;
    return result;
  }
  result = -v32[1];
  if ( __OFSUB__(-v32[1], 1) )
  {
    *a1 = 11;
    return result;
  }
  v29 = v40;
  v30 = v42;
  v31 = v43;
  if ( v41 == 10
    && (v8 = 0, a3 == 2)
    && (LOBYTE(v8) = (*(_QWORD *)v40 ^ 0x697474696D6D6F63LL | *(unsigned __int16 *)(v40 + 8) ^ 0x676ELL) != 0, !v8)
    || a3 != 2 && (_BYTE)v47 != a3 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32);
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(170, 1);
    if ( !v21 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 170);
    v22 = (__int64)v21;
    memcpy(v21, &anon_ab021cfe7cb89972c8491e461d453946_390, 0xAAu);
    *a1 = 10;
    a1[1] = 170;
    a1[2] = v22;
    a1[3] = 170;
    if ( v5 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v5, 1);
    v23 = v30;
    result = 0x8000000000000000LL;
    if ( v30 != 0x8000000000000000LL )
      goto LABEL_41;
    return result;
  }
  LOBYTE(v49) = v47;
  v9 = *(_QWORD *)(a2 + 584);
  v10 = *(_QWORD *)(a2 + 592);
  std::path::Path::_join::hb1a495d4f06b13b8(
    &v34,
    v9,
    v10,
    "router-transition-journal.jsonunsupported transition record versionphase record exceeds the size limitphase record is not a regular file",
    30);
  v48 = v35;
  v11 = codexmate_lib::core::relay::atomic_write::removal::remove_file_report::he4acf789bf0d185c(v35, v36);
  v13 = v12;
  if ( (v11 & 1) != 0 )
  {
    LOBYTE(v37) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v12);
    v32[0] = &v37;
    v32[1] = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v33, &unk_101A2F9DF, v32);
    v32[0] = v33;
    v32[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v37, &anon_ab021cfe7cb89972c8491e461d453946_358, v32);
    v14 = v37;
    v32[0] = v38;
    v32[1] = v39;
    if ( v33[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33[1], v33[0], 1);
    result = v13 & 3;
    if ( (_DWORD)result == 1 )
    {
      v49 = v13 - 1;
      v15 = *(_QWORD *)(v13 - 1);
      v16 = *(_QWORD *)(v13 + 7);
      if ( *(_QWORD *)v16 )
        (*(void (__fastcall **)(__int64))v16)(v15);
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16));
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 24, 8);
    }
    qmemcpy(a1 + 2, v32, 0x50u);
    *a1 = 9;
    a1[1] = (__int64)v14;
    v18 = v34;
    if ( v34 )
    {
      v19 = 1;
      v20 = v48;
LABEL_22:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, v19);
    }
  }
  else
  {
    if ( v34 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v34, 1);
    if ( v13 )
    {
      v33[0] = v13;
      codexmate_lib::core::relay::transition_journal::append_event::h4991c0e9e7a66037(
        v9,
        v10,
        (unsigned __int8)v49,
        &unk_101827B38,
        24,
        0);
      LOBYTE(v34) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v13);
      v37 = &v34;
      v38 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v32, &unk_101A2F94F, &v37);
      a1[3] = v32[2];
      v24 = v32[0];
      a1[2] = v32[1];
      a1[1] = v24;
      *a1 = 10;
      result = v13 & 3;
      if ( (_DWORD)result == 1 )
      {
        v25 = (void *)(v13 - 1);
        v26 = *(_QWORD *)(v13 - 1);
        v27 = *(_QWORD *)(v13 + 7);
        if ( *(_QWORD *)v27 )
          (*(void (__fastcall **)(__int64))v27)(v26);
        v28 = *(_QWORD *)(v27 + 8);
        if ( v28 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16));
        v18 = 24;
        v19 = 8;
        v20 = v25;
        goto LABEL_22;
      }
    }
    else
    {
      result = codexmate_lib::core::relay::transition_journal::append_event::h4991c0e9e7a66037(
                 v9,
                 v10,
                 (unsigned __int8)v49,
                 &unk_101827B31,
                 7,
                 0);
      *a1 = 11;
    }
  }
  if ( v5 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v5, 1);
  v23 = v30;
  if ( v30 != 0x8000000000000000LL )
  {
LABEL_41:
    if ( v23 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v23, 1);
  }
  return result;
}

// ===== codexmate_lib::core::relay::transition_journal::warn_after_commit::h87e5d3a870ecc5d5 @ 0x1003a5b50 size=555 lines=125 =====
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::warn_after_commit::h87e5d3a870ecc5d5(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        size_t a7)
{
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // cl
  __int64 v18; // rcx
  char v19; // dl
  __int128 v20; // xmm0
  __int64 v21; // rdi
  int v22; // edx
  void *v23; // rax
  void *v24; // r14
  _QWORD v26[12]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-60h]
  __int64 v28; // [rsp+68h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-50h]
  __int64 v30; // [rsp+78h] [rbp-48h]
  __int64 v31; // [rsp+80h] [rbp-40h]
  __int64 v32; // [rsp+88h] [rbp-38h]
  _BYTE v33[7]; // [rsp+90h] [rbp-30h]
  char v34; // [rsp+97h] [rbp-29h]

  v30 = a5;
  codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00(v26, a2);
  v12 = v26[0];
  v13 = v26[1];
  v14 = v26[2];
  if ( v26[0] != 11 )
  {
    v18 = v26[5];
    v27 = v26[6];
    v28 = v26[7];
    v29 = v26[8];
    v19 = v26[9];
    *(_DWORD *)v33 = *(_DWORD *)((char *)&v26[9] + 1);
    *(_DWORD *)&v33[3] = HIDWORD(v26[9]);
    a1[11] = v26[11];
    a1[10] = v26[10];
    v20 = *(_OWORD *)&v26[3];
    a1[2] = v14;
    *(_OWORD *)(a1 + 3) = v20;
    a1[5] = v18;
    v21 = v28;
    a1[6] = v27;
    a1[7] = v21;
    a1[8] = v29;
    *((_BYTE *)a1 + 72) = v19;
    v22 = *(_DWORD *)&v33[3];
    *(_DWORD *)((char *)a1 + 73) = *(_DWORD *)v33;
    *((_DWORD *)a1 + 19) = v22;
    *a1 = v12;
    a1[1] = v13;
    return a1;
  }
  if ( __OFSUB__(-v26[1], 1) )
    goto LABEL_7;
  v15 = v26[4];
  v16 = v26[5];
  v17 = v26[9];
  v34 = v26[9];
  if ( v26[1] )
  {
    v31 = v26[4];
    v32 = v26[5];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26[2], v26[1], 1);
    v16 = v32;
    v15 = v31;
    v17 = v34;
  }
  if ( 2 * v15 )
  {
    v14 = v16;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1);
    if ( v34 == a3 )
    {
LABEL_7:
      codexmate_lib::core::relay::transition_journal::write_inner::h17805da6329a9a7b(
        v26,
        a2,
        a3,
        "degraded",
        8u,
        a4,
        v30,
        a6,
        a7,
        1);
      if ( LODWORD(v26[0]) == 11 )
      {
        codexmate_lib::core::relay::atomic_write::Publication::acknowledge::hb1198e95828e3009(v26[1]);
        *a1 = 11;
      }
      else
      {
        qmemcpy(a1, v26, 0x60u);
      }
      return a1;
    }
  }
  else if ( v17 == a3 )
  {
    goto LABEL_7;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14);
  v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(170, 1);
  if ( !v23 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 170);
  v24 = v23;
  memcpy(v23, &anon_ab021cfe7cb89972c8491e461d453946_390, 0xAAu);
  *a1 = 10;
  a1[1] = 170;
  a1[2] = v24;
  a1[3] = 170;
  return a1;
}

// ===== codexmate_lib::core::relay::transition_journal::begin_commit::headaca16d3f09d62 @ 0x1003a4620 size=438 lines=89 =====
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::begin_commit::headaca16d3f09d62(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD **v5; // rdx
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(); // rcx
  size_t v15; // [rsp+10h] [rbp-D0h]
  _QWORD **v16; // [rsp+28h] [rbp-B8h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+30h] [rbp-B0h]
  _QWORD v18[10]; // [rsp+38h] [rbp-A8h] BYREF
  _QWORD v19[4]; // [rsp+88h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp-38h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+B0h] [rbp-30h]
  __int64 v22; // [rsp+B8h] [rbp-28h]

  codexmate_lib::core::relay::transition_journal::write_inner::h17805da6329a9a7b(
    &v16,
    a2,
    a3,
    "committingrouter-transition-journal.jsonunsupported transition record versionphase record exceeds the size limitphas"
    "e record is not a regular file",
    0xAu,
    a4,
    a5,
    nullptr,
    v15,
    1);
  v5 = v16;
  v6 = v17;
  if ( v16 == (_QWORD **)11 )
  {
    v7 = codexmate_lib::core::relay::atomic_write::Publication::require_sync::hb09f8d8c93f5e10a((__int64)v17);
    if ( v7 )
    {
      v8 = v7;
      v19[3] = v7;
      LOBYTE(v20) = std::io::error::Error::kind::hbe3dd139aa56fd1b(v7);
      v16 = &v20;
      v17 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Debug$GT$::fmt::hc444154466c62606;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v19, &anon_ab021cfe7cb89972c8491e461d453946_348, &v16);
      v20 = v19;
      v21 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v16, &anon_ab021cfe7cb89972c8491e461d453946_358, &v20);
      v20 = v16;
      v21 = v17;
      v22 = v18[0];
      if ( v19[0] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], v19[0], 1);
      if ( (v8 & 3) == 1 )
      {
        v9 = v8 - 1;
        v10 = *(_QWORD *)(v8 - 1);
        v11 = *(_QWORD *)(v8 + 7);
        if ( *(_QWORD *)v11 )
          (*(void (__fastcall **)(__int64))v11)(v10);
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v12, *(_QWORD *)(v11 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, 24, 8);
      }
      *a1 = 9;
      v13 = v21;
      a1[1] = v20;
      a1[2] = v13;
      a1[3] = v22;
    }
    else
    {
      *a1 = 11;
    }
  }
  else
  {
    qmemcpy(a1 + 2, v18, 0x50u);
    *a1 = v5;
    a1[1] = v6;
  }
  return a1;
}

// ===== codexmate_lib::core::relay::transition_journal::commit_pending::h39978c21c21d17ea @ 0x1003a4fe0 size=317 lines=85 =====
__int64 __fastcall codexmate_lib::core::relay::transition_journal::commit_pending::h39978c21c21d17ea(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r15
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+8h] [rbp-98h]
  __int64 v14; // [rsp+10h] [rbp-90h]
  __int64 v15; // [rsp+18h] [rbp-88h]
  __int64 v16; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-78h]
  __int64 v18; // [rsp+30h] [rbp-70h]
  __int64 v19; // [rsp+38h] [rbp-68h]
  __int64 v20; // [rsp+40h] [rbp-60h]
  __int64 v21; // [rsp+48h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-50h]
  __int64 v23; // [rsp+58h] [rbp-48h]
  __int64 v24; // [rsp+60h] [rbp-40h]
  __int64 v25; // [rsp+68h] [rbp-38h]
  __int64 v26; // [rsp+70h] [rbp-30h]
  __int64 v27; // [rsp+78h] [rbp-28h]

  codexmate_lib::core::relay::transition_journal::read_checked::h9f4f05221fc4bd00(&v12, a2);
  v3 = v12;
  v4 = v13;
  v5 = v14;
  v6 = v15;
  v7 = v16;
  v8 = v17;
  if ( v12 == 11 )
  {
    if ( __OFSUB__(-v13, 1) )
    {
      v9 = 0;
LABEL_12:
      *(_BYTE *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 11;
      return a1;
    }
    if ( v15 == 10 )
    {
      v9 = (*(_QWORD *)v14 ^ 0x697474696D6D6F63LL | *(unsigned __int16 *)(v14 + 8) ^ 0x676ELL) == 0;
      if ( !v13 )
      {
LABEL_10:
        if ( 2 * v7 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v7, 1);
        goto LABEL_12;
      }
    }
    else
    {
      v9 = 0;
      if ( !v13 )
        goto LABEL_10;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1);
    goto LABEL_10;
  }
  v27 = v21;
  v26 = v20;
  v25 = v19;
  v24 = v18;
  *(_QWORD *)(a1 + 88) = v23;
  *(_QWORD *)(a1 + 80) = v22;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  v10 = v25;
  *(_QWORD *)(a1 + 48) = v24;
  *(_QWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 64) = v26;
  *(_QWORD *)(a1 + 72) = v27;
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}

// ===== codexmate_lib::core::relay::transition_journal::commit_pending_error::hd405c7fb2cb153d3 @ 0x1003a6520 size=108 lines=17 =====
_QWORD *__fastcall codexmate_lib::core::relay::transition_journal::commit_pending_error::hd405c7fb2cb153d3(_QWORD *a1)
{
  void *v1; // rax
  void *v2; // r14

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1);
  v1 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(170, 1);
  if ( !v1 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 170);
  v2 = v1;
  memcpy(v1, &anon_ab021cfe7cb89972c8491e461d453946_390, 0xAAu);
  a1[1] = 170;
  a1[2] = v2;
  a1[3] = 170;
  *a1 = 10;
  return a1;
}

