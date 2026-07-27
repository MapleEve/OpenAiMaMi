// __ZN13codexmate_lib4core5relay18router_unlock_auth27install_virtual_unlock_auth @ 0x100520210 | 基线 same-set
void __fastcall codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h1fbbeee5d38cb27b(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  double v7; // xmm0_8
  size_t v8; // rdx
  unsigned __int8 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rdi
  bool v12; // r12
  char v13; // r12
  char v14; // r12
  __int64 *v15; // r15
  size_t v16; // r13
  char v17; // bl
  char v18; // bl
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 v28; // rsi
  void *v29; // rax
  __int64 v30; // r14
  void *v31; // rax
  void *v32; // rbx
  void *v33; // rdi
  int v34; // edx
  __int64 **v35; // r13
  void *v36; // rax
  _BYTE *v37; // rax
  _QWORD *v38; // r12
  __int64 v39; // r15
  _QWORD *v40; // rax
  __int64 v41; // rsi
  __int64 **v42; // rdi
  __int64 **v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rsi
  unsigned __int64 v50; // rax
  _QWORD *v51; // r12
  __int64 v52; // r15
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // r13
  __int64 v54; // rbx
  void *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  _QWORD *v58; // rax
  __int64 v59[3]; // [rsp+0h] [rbp-200h] BYREF
  __int64 v60; // [rsp+18h] [rbp-1E8h]
  __int64 v61; // [rsp+20h] [rbp-1E0h]
  char v62; // [rsp+38h] [rbp-1C8h]
  __int64 v63; // [rsp+40h] [rbp-1C0h] BYREF
  void *v64; // [rsp+48h] [rbp-1B8h]
  __int64 v65; // [rsp+50h] [rbp-1B0h]
  _QWORD v66[3]; // [rsp+58h] [rbp-1A8h] BYREF
  void *v67; // [rsp+70h] [rbp-190h] BYREF
  char v68[96]; // [rsp+78h] [rbp-188h] BYREF
  void *v69; // [rsp+D8h] [rbp-128h]
  __int64 v70; // [rsp+E0h] [rbp-120h] BYREF
  __int64 **v71; // [rsp+E8h] [rbp-118h]
  size_t v72; // [rsp+F0h] [rbp-110h]
  __int64 **v73; // [rsp+F8h] [rbp-108h]
  _QWORD v74[2]; // [rsp+100h] [rbp-100h] BYREF
  __int64 v75; // [rsp+110h] [rbp-F0h] BYREF
  __int64 *v76; // [rsp+118h] [rbp-E8h]
  size_t v77; // [rsp+120h] [rbp-E0h]
  __int64 (__fastcall *v78)(_QWORD, _QWORD); // [rsp+128h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+130h] [rbp-D0h]
  __int64 v80; // [rsp+138h] [rbp-C8h]
  _QWORD *v81; // [rsp+140h] [rbp-C0h] BYREF
  __int64 (__fastcall *v82)(_QWORD, _QWORD); // [rsp+148h] [rbp-B8h]
  __int64 v83; // [rsp+150h] [rbp-B0h]
  __int16 v84; // [rsp+158h] [rbp-A8h] BYREF
  __int64 **v85; // [rsp+160h] [rbp-A0h]
  __int64 v86; // [rsp+168h] [rbp-98h]
  __int64 *v87; // [rsp+170h] [rbp-90h] BYREF
  void *v88; // [rsp+178h] [rbp-88h]
  __int64 v89; // [rsp+180h] [rbp-80h]
  __int64 v90; // [rsp+188h] [rbp-78h]
  char v91; // [rsp+190h] [rbp-70h]
  _QWORD *v92; // [rsp+198h] [rbp-68h]
  __int64 (__fastcall *v93)(_QWORD, _QWORD); // [rsp+1A0h] [rbp-60h]
  __int64 **v94; // [rsp+1A8h] [rbp-58h]
  __int64 v95; // [rsp+1B0h] [rbp-50h]
  size_t v96; // [rsp+1B8h] [rbp-48h]
  __int64 v97; // [rsp+1C0h] [rbp-40h] BYREF
  _QWORD *v98; // [rsp+1C8h] [rbp-38h]
  __int64 v99; // [rsp+1D0h] [rbp-30h]

  v4 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100520230*/
  if ( v4 ) /*0x100520238*/
  {
    *a1 = 2; /*0x10052023a*/
    a1[1] = v4; /*0x100520241*/
    return; /*0x100520245*/
  }
  v92 = a1; /*0x10052024a*/
  v5 = a2[73]; /*0x10052024e*/
  v6 = a2[74]; /*0x100520255*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100520276*/
    &v70,
    v5,
    v6,
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_auth",
    30);
  std::path::Path::_join::hb1a495d4f06b13b8(&v75, v5, v6, &anon_92869709a5e99ce1936aa4e326b6c562_830, 30); /*0x100520295*/
  v7 = codexmate_lib::core::relay::router_unlock_auth::read_marker::h8487a1125204f37a(v59, v5, v6); /*0x1005202a7*/
  LOBYTE(v5) = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8((__int64)a2); /*0x1005202b4*/
  v8 = a2[5]; /*0x1005202ba*/
  v93 = (__int64 (__fastcall *)(_QWORD, _QWORD))a2[4]; /*0x1005202c5*/
  v96 = v8; /*0x1005202c9*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v63, v93, v8); /*0x1005202cd*/
  v9 = v63; /*0x1005202d2*/
  v10 = (__int64)v64; /*0x1005202d9*/
  v11 = (__int64 *)v63; /*0x1005202e0*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1005202e3*/
    v63,
    v64);
  v12 = (_BYTE)v5 == 2; /*0x1005202f5*/
  if ( ((v9 ^ 1) & ((_BYTE)v5 != 1)) != 0 ) /*0x1005202fc*/
  {
    v15 = v76; /*0x10052035a*/
    v16 = v77; /*0x100520361*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v63, v76, v77); /*0x100520375*/
    v17 = v63; /*0x10052037a*/
    v10 = (__int64)v64; /*0x100520381*/
    v11 = (__int64 *)v63; /*0x100520388*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10052038b*/
      v63,
      v64);
    v18 = v12 & a3 | v17; /*0x100520393*/
    v13 = 1; /*0x100520396*/
    if ( v18 == 1 ) /*0x10052039c*/
    {
      v11 = &v63; /*0x1005203a2*/
      v10 = (__int64)v93; /*0x1005203a9*/
      std::fs::read::inner::h6a30c15c40add28b(&v63, v93, v96); /*0x1005203b1*/
      v19 = v63; /*0x1005203b6*/
      v20 = (__int64)v64; /*0x1005203bd*/
      if ( v63 != 0x8000000000000000LL ) /*0x1005203d1*/
      {
        v11 = v15; /*0x1005203da*/
        v10 = v16; /*0x1005203dd*/
        v21 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005203ee*/
                v15,
                v16,
                (__int64)v64,
                v65,
                1);
        if ( v19 ) /*0x1005203f4*/
        {
          v11 = (__int64 *)v20; /*0x1005203fb*/
          v10 = v19; /*0x1005203fe*/
          v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100520401*/
        }
        v20 = v21; /*0x100520406*/
      }
      if ( v20 ) /*0x10052040c*/
      {
        v97 = v20; /*0x100520412*/
        v87 = &v97; /*0x10052041a*/
        v88 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100520428*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63, &unk_1017C1347, &v87); /*0x100520444*/
        v87 = (__int64 *)v63; /*0x100520457*/
        v88 = v64; /*0x10052045e*/
        v89 = v65; /*0x10052046c*/
        v22 = v92; /*0x10052047c*/
        if ( (v97 & 3) == 1 ) /*0x100520480*/
        {
          v23 = v97 - 1; /*0x100520482*/
          v24 = *(_QWORD *)(v97 - 1); /*0x100520486*/
          v25 = *(_QWORD *)(v97 + 7); /*0x10052048a*/
          if ( *(_QWORD *)v25 ) /*0x10052048e*/
            (*(void (__fastcall **)(__int64, void *, _QWORD *, double))v25)(v24, &unk_1017C1347, v92, v7); /*0x10052049a*/
          v26 = *(_QWORD *)(v25 + 8); /*0x10052049c*/
          if ( v26 ) /*0x1005204a4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16)); /*0x1005204ae*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, 24, 8); /*0x1005204c0*/
          v22 = v92; /*0x1005204c5*/
        }
        v22[3] = v89; /*0x1005204cd*/
        v27 = v87; /*0x1005204d1*/
        v22[2] = v88; /*0x1005204df*/
        v22[1] = v27; /*0x1005204e3*/
        *v22 = 10; /*0x1005204e7*/
        v28 = v59[0]; /*0x1005204ee*/
        if ( v59[0] == 0x8000000000000000LL ) /*0x100520502*/
        {
LABEL_40:
          if ( v75 ) /*0x1005207e8*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x1005207f6*/
          v41 = v70; /*0x1005207fb*/
          if ( v70 ) /*0x100520805*/
          {
            v42 = v71; /*0x100520807*/
LABEL_44:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x100520813*/
            return; /*0x100520813*/
          }
          return; /*0x100520805*/
        }
LABEL_36:
        if ( v28 ) /*0x1005207ae*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59[1], v28, 1); /*0x1005207bc*/
        if ( v60 ) /*0x1005207cb*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v60, 1); /*0x1005207d9*/
        goto LABEL_40; /*0x1005207d9*/
      }
    }
  }
  else if ( v59[0] == 0x8000000000000000LL || (v13 = 1, !v62) ) /*0x10052031b*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(&v63, v76, v77); /*0x100520336*/
    v14 = v63; /*0x10052033b*/
    v10 = (__int64)v64; /*0x100520342*/
    v11 = (__int64 *)v63; /*0x100520349*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10052034c*/
      v63,
      v64);
    v13 = v14 ^ 1; /*0x100520351*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v10); /*0x10052050d*/
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10052051c*/
  if ( !v29 ) /*0x100520524*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100520c2a*/
  v30 = (__int64)v29; /*0x10052052a*/
  qmemcpy(v29, "niuniu@woyao.pro", 16); /*0x100520545*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(16, 1); /*0x100520548*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x100520557*/
  if ( !v31 ) /*0x10052055f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 66); /*0x100520c3b*/
  v32 = v31; /*0x100520565*/
  v33 = v31; /*0x100520574*/
  memcpy(v31, &unk_1015FE7CD, 0x42u); /*0x100520577*/
  v97 = std::time::SystemTime::now::h1fe79e41f9d5677f(v33, &unk_1015FE7CD); /*0x100520581*/
  LODWORD(v98) = v34; /*0x100520585*/
  v35 = &v87; /*0x100520588*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v87, &v97, 0, 0); /*0x10052059d*/
  if ( (_BYTE)v87 ) /*0x1005205a9*/
    v36 = nullptr; /*0x1005205b4*/
  else
    v36 = v88; /*0x1005205ab*/
  v63 = 16; /*0x1005205b6*/
  v64 = (void *)v30; /*0x1005205c1*/
  v65 = 16; /*0x1005205c8*/
  v66[0] = 66; /*0x1005205d3*/
  v66[1] = v32; /*0x1005205de*/
  v66[2] = 66; /*0x1005205e5*/
  v67 = v36; /*0x1005205f0*/
  v68[0] = v13; /*0x1005205f7*/
  v94 = v71; /*0x100520605*/
  v95 = v72; /*0x100520610*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v87, &v97); /*0x100520614*/
  v37 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100520623*/
  if ( !v37 ) /*0x10052062b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100520c4c*/
  v97 = 128; /*0x100520631*/
  v98 = v37; /*0x100520639*/
  v87 = &v97; /*0x10052063d*/
  v88 = &unk_1015FBFF9; /*0x10052064b*/
  v89 = 2; /*0x100520652*/
  v90 = 1; /*0x10052065a*/
  v91 = 0; /*0x100520662*/
  *v37 = 123; /*0x100520666*/
  v99 = 1; /*0x100520669*/
  v84 = 256; /*0x100520671*/
  v85 = &v87; /*0x10052067a*/
  v38 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x1005206a0*/
                    &v84,
                    &anon_92869709a5e99ce1936aa4e326b6c562_849,
                    5,
                    &v63);
  v69 = v32; /*0x1005206a6*/
  if ( v38 ) /*0x1005206ad*/
    goto LABEL_31; /*0x1005206ad*/
  if ( (_BYTE)v84 ) /*0x1005206b6*/
    goto LABEL_29; /*0x1005206b6*/
  v38 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x1005206e1*/
                    &v84,
                    &anon_92869709a5e99ce1936aa4e326b6c562_850,
                    10,
                    v66);
  if ( v38 ) /*0x1005206e7*/
    goto LABEL_31; /*0x1005206e7*/
  if ( (_BYTE)v84 ) /*0x100520831*/
    goto LABEL_29; /*0x100520831*/
  v38 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100520856*/
                    &v84,
                    &anon_92869709a5e99ce1936aa4e326b6c562_851,
                    9,
                    &v67);
  if ( v38 ) /*0x10052085c*/
    goto LABEL_31; /*0x10052085c*/
  if ( (_BYTE)v84 ) /*0x100520869*/
  {
LABEL_29:
    v38 = (_QWORD *)serde_json::ser::invalid_raw_value::hd0c8797395d11416(v7); /*0x1005206b8*/
    goto LABEL_31; /*0x1005206c0*/
  }
  v38 = (_QWORD *)serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x10052088e*/
                    &v84,
                    &anon_92869709a5e99ce1936aa4e326b6c562_852,
                    20,
                    v68);
  if ( v38 ) /*0x100520894*/
  {
LABEL_31:
    if ( v97 ) /*0x1005206f4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v97, 1); /*0x1005206ff*/
    goto LABEL_33; /*0x1005206ff*/
  }
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910( /*0x1005208a1*/
    &v84,
    v7);
  v39 = v97; /*0x1005208a6*/
  v38 = v98; /*0x1005208aa*/
  if ( v97 == 0x8000000000000000LL ) /*0x1005208bb*/
  {
LABEL_33:
    v81 = v38; /*0x100520704*/
    v97 = (__int64)&v81; /*0x100520712*/
    v98 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10052071d*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &unk_1017C1193, &v97); /*0x100520733*/
    v39 = (__int64)v87; /*0x100520738*/
    v32 = v88; /*0x10052073f*/
    v35 = (__int64 **)v89; /*0x100520746*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v81); /*0x100520751*/
    v40 = v92; /*0x100520756*/
LABEL_34:
    *v40 = 10; /*0x10052075a*/
    v40[1] = v39; /*0x100520761*/
    v40[2] = v32; /*0x100520765*/
    v40[3] = v35; /*0x100520769*/
    goto LABEL_35; /*0x100520769*/
  }
  v43 = v94; /*0x1005208c5*/
  v79 = v97; /*0x1005208d6*/
  v44 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005208dd*/
          v94,
          v95,
          (__int64)v98,
          v99,
          1);
  v95 = v44; /*0x1005208e5*/
  if ( v44 ) /*0x1005208e9*/
  {
    v81 = (_QWORD *)v44; /*0x1005208ef*/
    v97 = (__int64)&v81; /*0x1005208fd*/
    v98 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100520908*/
    v43 = &v87; /*0x100520913*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v87, &unk_1017C116A, &v97); /*0x10052091e*/
    v39 = (__int64)v87; /*0x100520923*/
    v32 = v88; /*0x10052092a*/
    v35 = (__int64 **)v89; /*0x100520931*/
    v46 = (unsigned __int8)v81 & 3; /*0x10052093e*/
    if ( (_DWORD)v46 == 1 ) /*0x100520944*/
    {
      v73 = (__int64 **)((char *)v81 - 1); /*0x10052094a*/
      v80 = *(_QWORD *)((char *)v81 - 1); /*0x100520955*/
      v86 = *(_QWORD *)((char *)v81 + 7); /*0x100520960*/
      if ( *(_QWORD *)v86 ) /*0x100520967*/
        (*(void (__fastcall **)(__int64))v86)(v80); /*0x100520976*/
      v48 = *(_QWORD *)(v86 + 8); /*0x10052097f*/
      if ( v48 ) /*0x100520986*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v48, *(_QWORD *)(v86 + 16)); /*0x10052099a*/
      v43 = v73; /*0x1005209a9*/
      v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v73, 24, 8); /*0x1005209b0*/
    }
  }
  v49 = v79; /*0x1005209b7*/
  if ( v79 ) /*0x1005209c1*/
  {
    v43 = (__int64 **)v38; /*0x1005209c8*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v79, 1); /*0x1005209cb*/
  }
  v40 = v92; /*0x1005209d5*/
  if ( v95 ) /*0x1005209d9*/
    goto LABEL_34; /*0x1005209d9*/
  v50 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6(v43, v49, v45, v46, v47); /*0x1005209df*/
  codexmate_lib::core::relay::router_unlock_auth::build_unlock_auth_json::h2c2824a99fd1a741((__int64)&v87, v50); /*0x1005209ee*/
  serde_json::ser::to_vec_pretty::h1bb921fbfe3276cc(&v81, &v87); /*0x100520a01*/
  v51 = v81; /*0x100520a06*/
  if ( v81 == (_QWORD *)0x8000000000000000LL ) /*0x100520a21*/
  {
    v78 = v82; /*0x100520a23*/
    v74[0] = &v78; /*0x100520a31*/
    v74[1] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x100520a3f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v97, &unk_1017C1193, v74); /*0x100520a58*/
    v52 = v97; /*0x100520a5d*/
    v53 = (__int64 (__fastcall *)(_QWORD, _QWORD))v98; /*0x100520a61*/
    v54 = v99; /*0x100520a65*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v78); /*0x100520a70*/
LABEL_72:
    v58 = v92; /*0x100520b65*/
    v92[1] = v52; /*0x100520b69*/
    v58[2] = v53; /*0x100520b6d*/
    v58[3] = v54; /*0x100520b71*/
    *v58 = 10; /*0x100520b75*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v87); /*0x100520b83*/
LABEL_35:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, 16, 1); /*0x10052076d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, 66, 1); /*0x100520790*/
    v28 = v59[0]; /*0x100520795*/
    if ( v59[0] == 0x8000000000000000LL ) /*0x1005207a9*/
      goto LABEL_40; /*0x1005207a9*/
    goto LABEL_36; /*0x1005207a9*/
  }
  v55 = v93; /*0x100520a81*/
  v93 = v82; /*0x100520a89*/
  v56 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100520a93*/
          v55,
          v96,
          (__int64)v82,
          v83,
          1);
  if ( v56 ) /*0x100520a9b*/
  {
    v74[0] = v56; /*0x100520aa1*/
    v81 = v74; /*0x100520aaf*/
    v82 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100520abd*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v97, &unk_1017C116A, &v81); /*0x100520ad6*/
    v52 = v97; /*0x100520adb*/
    v53 = (__int64 (__fastcall *)(_QWORD, _QWORD))v98; /*0x100520adf*/
    v54 = v99; /*0x100520ae3*/
    if ( (v74[0] & 3) == 1 ) /*0x100520af6*/
    {
      v95 = v74[0] - 1LL; /*0x100520afc*/
      v94 = *(__int64 ***)(v74[0] - 1LL); /*0x100520b04*/
      v96 = *(_QWORD *)(v74[0] + 7LL); /*0x100520b0c*/
      if ( *(_QWORD *)v96 ) /*0x100520b10*/
        (*(void (__fastcall **)(__int64 **, double))v96)(v94, v7); /*0x100520b1c*/
      v57 = *(_QWORD *)(v96 + 8); /*0x100520b22*/
      if ( v57 ) /*0x100520b29*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v57, *(_QWORD *)(v96 + 16)); /*0x100520b37*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, 24, 8); /*0x100520b4a*/
    }
    if ( v51 ) /*0x100520b52*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v51, 1); /*0x100520b60*/
    goto LABEL_72; /*0x100520b60*/
  }
  if ( v51 ) /*0x100520b90*/
    v7 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v51, 1); /*0x100520b9e*/
  *v92 = 11; /*0x100520ba7*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v87); /*0x100520bb5*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::heb92f836e45013d8( /*0x100520bc1*/
    &v63,
    v7);
  if ( v59[0] != 0x8000000000000000LL ) /*0x100520bd7*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::heb92f836e45013d8( /*0x100520be0*/
      v59,
      v7);
  if ( v75 ) /*0x100520bef*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1); /*0x100520bfd*/
  v41 = v70; /*0x100520c02*/
  if ( v70 ) /*0x100520c0c*/
  {
    v42 = v94; /*0x100520c17*/
    goto LABEL_44; /*0x100520c1b*/
  }
}