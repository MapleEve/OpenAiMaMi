// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/codex_writer
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::codex_writer::router_http_contract_issues::h0c94077b7a80b922 @ 0x10039eb20 size=3634 lines=605 =====
_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::router_http_contract_issues::h0c94077b7a80b922(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5,
        int a6)
{
  __int64 v8; // r14
  __int8 v9; // r15
  __int128 v10; // kr00_16
  int *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // r12
  __int64 v21; // rsi
  __int128 v22; // kr10_16
  __int64 v23; // rax
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // esi
  char v30; // r9
  char v31; // r10
  unsigned __int64 v32; // r8
  int v33; // r10d
  int v34; // r9d
  __m128i v35; // xmm0
  __int64 *v36; // r12
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  _BYTE *v48; // rax
  char v49; // al
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // r14
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rcx
  _BYTE *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rcx
  char *v66; // rsi
  size_t v67; // rdx
  char *v68; // r13
  int v69; // ecx
  char v70; // r10
  char v71; // r8
  char v72; // r9
  char *v73; // r13
  int v74; // r8d
  int v75; // r10d
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  int v78; // r11d
  char v79; // r8
  char v80; // r9
  char v81; // r10
  unsigned __int64 v82; // rax
  int v83; // r9d
  int v84; // r8d
  _BYTE v85[24]; // [rsp+8h] [rbp-3C8h] BYREF
  _BYTE v86[40]; // [rsp+20h] [rbp-3B0h] BYREF
  _BYTE v87[15]; // [rsp+48h] [rbp-388h]
  __m512i __s1; // [rsp+58h] [rbp-378h] BYREF
  __int64 v89; // [rsp+98h] [rbp-338h]
  __int64 v90; // [rsp+A0h] [rbp-330h]
  __int64 v91; // [rsp+A8h] [rbp-328h]
  __int64 v92; // [rsp+B0h] [rbp-320h]
  __int64 v93; // [rsp+B8h] [rbp-318h]
  _BYTE __src[144]; // [rsp+C0h] [rbp-310h] BYREF
  _QWORD v95[2]; // [rsp+150h] [rbp-280h] BYREF
  _BYTE v96[48]; // [rsp+160h] [rbp-270h] BYREF
  __int128 v97; // [rsp+190h] [rbp-240h]
  __int64 v98; // [rsp+1A0h] [rbp-230h]
  __int64 v99; // [rsp+1A8h] [rbp-228h]
  __int64 v100; // [rsp+1B0h] [rbp-220h]
  __int64 v101; // [rsp+1B8h] [rbp-218h]
  __int64 v102; // [rsp+1C0h] [rbp-210h]
  _BYTE __dst[144]; // [rsp+1C8h] [rbp-208h] BYREF
  _QWORD v104[3]; // [rsp+258h] [rbp-178h] BYREF
  _BYTE v105[31]; // [rsp+270h] [rbp-160h]
  _BYTE v106[24]; // [rsp+290h] [rbp-140h] BYREF
  __int64 v107; // [rsp+2A8h] [rbp-128h]
  __int64 v108; // [rsp+2B0h] [rbp-120h]
  __int64 v109; // [rsp+2B8h] [rbp-118h]
  __int64 v110; // [rsp+2C0h] [rbp-110h]
  __int128 v111; // [rsp+2C8h] [rbp-108h] BYREF
  _QWORD v112[2]; // [rsp+2D8h] [rbp-F8h]
  int v113; // [rsp+2ECh] [rbp-E4h]
  void *__s2; // [rsp+2F0h] [rbp-E0h]
  __int128 v115; // [rsp+2F8h] [rbp-D8h]
  _QWORD v116[2]; // [rsp+308h] [rbp-C8h]
  __int128 v117; // [rsp+318h] [rbp-B8h]
  _BYTE v118[15]; // [rsp+328h] [rbp-A8h]
  __int128 v119; // [rsp+338h] [rbp-98h] BYREF
  __int64 v120; // [rsp+348h] [rbp-88h]
  __int64 v121; // [rsp+350h] [rbp-80h]
  __int64 v122; // [rsp+358h] [rbp-78h]
  __int64 v123; // [rsp+360h] [rbp-70h]
  __int64 v124; // [rsp+368h] [rbp-68h]
  __int128 v125; // [rsp+370h] [rbp-60h] BYREF
  __int64 v126; // [rsp+380h] [rbp-50h]
  __int64 v127; // [rsp+388h] [rbp-48h]
  __int64 v128; // [rsp+390h] [rbp-40h]
  __int64 v129; // [rsp+398h] [rbp-38h]
  __int64 v130; // [rsp+3A0h] [rbp-30h]

  v113 = a6;
  __s2 = a4;
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&__s1, a2, a3);
  v8 = __s1.i64[1];
  v9 = __s1.i8[16];
  v111 = *(__int128 *)((char *)&__s1.i128[1] + 1);
  v112[0] = *(__int64 *)((char *)&__s1.i64[4] + 1);
  *(_QWORD *)((char *)v112 + 7) = __s1.i64[5];
  v125 = __s1.i128[3];
  v126 = v89;
  v127 = v90;
  v128 = v91;
  v129 = v92;
  v130 = v93;
  if ( __s1.i64[0] == 2 )
  {
    v115 = v111;
    v116[0] = v112[0];
    *(_QWORD *)((char *)v116 + 7) = *(_QWORD *)((char *)v112 + 7);
    v119 = v125;
    v120 = v126;
    v121 = v127;
    v122 = v128;
    v123 = v129;
    v124 = v130;
    *(_QWORD *)&v118[7] = *(_QWORD *)((char *)v112 + 7);
    *(_QWORD *)v118 = v116[0];
    v117 = v111;
    v110 = v130;
    v109 = v129;
    v108 = v128;
    v107 = v127;
    *(_QWORD *)&v106[16] = v126;
    v10 = v125;
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst));
    v115 = v111;
    v116[0] = v112[0];
    *(_QWORD *)((char *)v116 + 7) = *(_QWORD *)((char *)v112 + 7);
    v119 = v125;
    v120 = v126;
    v121 = v127;
    v122 = v128;
    v123 = v129;
    v124 = v130;
    *(_OWORD *)v96 = __s1.i128[0];
    v96[16] = __s1.i8[16];
    *(_OWORD *)&v96[17] = v111;
    *(_QWORD *)&v96[33] = v116[0];
    *(_QWORD *)&v96[40] = *(_QWORD *)((char *)v112 + 7);
    v97 = v125;
    v98 = v126;
    v99 = v127;
    v100 = v128;
    v101 = v129;
    v102 = v130;
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h61a728ca5560f63d(
      &__s1,
      v96);
    v8 = __s1.i64[0];
    v9 = __s1.i8[8];
    v117 = *(__int128 *)((char *)__s1.i128 + 9);
    *(_QWORD *)v118 = *(__int64 *)((char *)&__s1.i64[3] + 1);
    *(_QWORD *)&v118[7] = __s1.i64[4];
    if ( __s1.i64[0] == 2 )
      goto LABEL_6;
    v110 = v92;
    v109 = v91;
    v108 = v90;
    v107 = v89;
    *(_QWORD *)&v106[16] = __s1.i64[7];
    v10 = *(__int128 *)((char *)&__s1.i128[2] + 8);
  }
  *(_OWORD *)v106 = v10;
LABEL_6:
  if ( v8 == 2 )
  {
    *(_QWORD *)&v87[7] = *(_QWORD *)&v118[7];
    *(_QWORD *)v87 = *(_QWORD *)v118;
    *(_OWORD *)v105 = v117;
    *(_QWORD *)&v105[16] = *(_QWORD *)v118;
    *(_QWORD *)&v105[23] = *(_QWORD *)&v87[7];
    *(__int128 *)((char *)__s1.i128 + 1) = v117;
    __s1.i64[3] = *(_QWORD *)&v87[7];
    *(__int64 *)((char *)&__s1.i64[2] + 1) = *(_QWORD *)&v105[16];
    __s1.i8[0] = v9;
    v11 = (int *)&anon_ab021cfe7cb89972c8491e461d453946_267;
    v12 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
            &anon_ab021cfe7cb89972c8491e461d453946_267,
            15,
            &__s1);
    if ( !v12
      || (v11 = &anon_ab021cfe7cb89972c8491e461d453946_246,
          v13 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
                  &anon_ab021cfe7cb89972c8491e461d453946_246,
                  6,
                  v12),
          (v14 = v13) == 0) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11);
      v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v23 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v24 = (_QWORD *)v23;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24);
      v25 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1);
      if ( !v25 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31);
      qmemcpy(v25 + 1, "model_providers.aimai1]", 23);
      *v25 = 0x5B2091B0E5BABCE7LL;
      *v24 = 31;
      v24[1] = v25;
      v24[2] = 31;
      a1[1] = 1;
      a1[2] = v24;
      a1[3] = 1;
      goto LABEL_73;
    }
    *(_QWORD *)&v125 = 0;
    *((_QWORD *)&v125 + 1) = 8;
    v126 = 0;
    v15 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e("base_url", 8, v13);
    v16 = 1;
    if ( v15 && !*(_BYTE *)v15 )
    {
      v16 = *(_QWORD *)(v15 + 16);
      v17 = *(_QWORD *)(v15 + 24);
    }
    else
    {
      v17 = 0;
    }
    *(_QWORD *)&v119 = v16;
    *((_QWORD *)&v119 + 1) = v17;
    v26 = v17;
    do
    {
      while ( 1 )
      {
        if ( !v26 )
          goto LABEL_43;
        v27 = v26;
        v28 = v16 + v26;
        v29 = *(char *)(v16 + v26 - 1);
        if ( v29 < 0 )
          break;
        --v26;
        if ( v29 != 47 )
          goto LABEL_41;
      }
      v30 = *(_BYTE *)(v28 - 2);
      if ( v30 >= -64 )
      {
        v32 = v28 - 2;
        v34 = v30 & 0x1F;
      }
      else
      {
        v31 = *(_BYTE *)(v28 - 3);
        if ( v31 >= -64 )
        {
          v32 = v28 - 3;
          v33 = v31 & 0xF;
        }
        else
        {
          v32 = v28 - 4;
          v33 = ((*(_BYTE *)(v28 - 4) & 7) << 6) | v31 & 0x3F;
        }
        v34 = (v33 << 6) | v30 & 0x3F;
      }
      v26 = v32 - v16;
    }
    while ( ((v34 << 6) | v29 & 0x3F) == 0x2F );
LABEL_41:
    if ( v27 < 0x10
      || (v35 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v28 - 16)), (__m128i)xmmword_1018263F0),
          !_mm_testz_si128(v35, v35)) )
    {
LABEL_43:
      *(_QWORD *)v96 = &v119;
      *(_QWORD *)&v96[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
      v36 = (__int64 *)v86;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_101A2F6C3, v96);
      v37 = v126;
      if ( v126 == (_QWORD)v125 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
LABEL_45:
      v38 = *((_QWORD *)&v125 + 1);
      v39 = 3 * v37;
      *(_QWORD *)(*((_QWORD *)&v125 + 1) + 8 * v39 + 16) = v36[2];
      v40 = *v36;
      *(_QWORD *)(v38 + 8 * v39 + 8) = v36[1];
      *(_QWORD *)(v38 + 8 * v39) = v40;
      v126 = v37 + 1;
      goto LABEL_46;
    }
    v66 = (char *)__s2;
    if ( __s2 )
    {
      while ( 1 )
      {
        v67 = a5;
        if ( !a5 )
          break;
        v68 = &v66[a5];
        v69 = v66[v67 - 1];
        if ( v69 >= 0 )
        {
          a5 = v67 - 1;
          if ( v69 != 47 )
            break;
        }
        else
        {
          v70 = *(v68 - 2);
          if ( v70 >= -64 )
          {
            v73 = v68 - 2;
            v75 = v70 & 0x1F;
          }
          else
          {
            v71 = *(v68 - 3);
            if ( v71 >= -64 )
            {
              v73 = v68 - 3;
              v74 = v71 & 0xF;
            }
            else
            {
              v72 = *(v68 - 4);
              v73 = v68 - 4;
              v74 = ((v72 & 7) << 6) | v71 & 0x3F;
            }
            v75 = (v74 << 6) | v70 & 0x3F;
            v66 = (char *)__s2;
          }
          a5 = v73 - v66;
          if ( ((v75 << 6) | v69 & 0x3F) != 0x2F )
            break;
        }
      }
      v95[0] = v66;
      v95[1] = v67;
      while ( 1 )
      {
        v76 = v17;
        if ( !v17 )
          break;
        v77 = v16 + v17;
        v78 = *(char *)(v16 + v76 - 1);
        if ( v78 >= 0 )
        {
          v17 = v76 - 1;
          if ( v78 != 47 )
            break;
        }
        else
        {
          v79 = *(_BYTE *)(v77 - 2);
          if ( v79 >= -64 )
          {
            v82 = v77 - 2;
            v84 = v79 & 0x1F;
          }
          else
          {
            v80 = *(_BYTE *)(v77 - 3);
            if ( v80 >= -64 )
            {
              v82 = v77 - 3;
              v83 = v80 & 0xF;
            }
            else
            {
              v81 = *(_BYTE *)(v77 - 4);
              v82 = v77 - 4;
              v83 = ((v81 & 7) << 6) | v80 & 0x3F;
            }
            v84 = (v83 << 6) | v79 & 0x3F;
          }
          v66 = (char *)__s2;
          v17 = v82 - v16;
          if ( ((v84 << 6) | v78 & 0x3F) != 0x2F )
            break;
        }
      }
      if ( v76 != v67 || memcmp((const void *)v16, v66, v67) )
      {
        *(_QWORD *)v96 = v95;
        *(_QWORD *)&v96[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
        *(_QWORD *)&v96[16] = &v119;
        *(_QWORD *)&v96[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e;
        v36 = (__int64 *)v85;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &unk_101A2F6F9, v96);
        v37 = v126;
        if ( v126 == (_QWORD)v125 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
        goto LABEL_45;
      }
    }
LABEL_46:
    v41 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e(
            "wire_apino spacetaskkillre-entrytakeoverrollback",
            8,
            v14);
    if ( !v41
      || *(_BYTE *)v41
      || *(_QWORD *)(v41 + 24) != 9
      || **(_QWORD **)(v41 + 16) ^ 0x65736E6F70736572LL | *(unsigned __int8 *)(*(_QWORD *)(v41 + 16) + 8LL) ^ 0x73LL )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("wire_apino spacetaskkillre-entrytakeoverrollback");
      v42 = 28;
      v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
      if ( !v43 )
        goto LABEL_104;
      v44 = v43;
      *(_QWORD *)(v43 + 16) = 0x6F7073657220BAB8LL;
      *(_QWORD *)(v43 + 8) = 0xE4BBA1E985BFE520LL;
      *(_QWORD *)v43 = 0x6970615F65726977LL;
      *(_DWORD *)(v43 + 24) = 1936028526;
      v45 = v126;
      if ( v126 == (_QWORD)v125 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
      v46 = *((_QWORD *)&v125 + 1);
      v47 = 3 * v45;
      *(_QWORD *)(*((_QWORD *)&v125 + 1) + 8 * v47) = 28;
      *(_QWORD *)(v46 + 8 * v47 + 8) = v44;
      *(_QWORD *)(v46 + 8 * v47 + 16) = 28;
      v126 = v45 + 1;
    }
    v48 = (_BYTE *)_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e("requires_openai_auth", 20, v14);
    if ( v48 && *v48 == 3 )
    {
      if ( (_BYTE)v113 != 2 )
      {
        v49 = v48[1];
        if ( v49 != (_BYTE)v113 )
        {
          LOBYTE(v111) = v49;
          v106[0] = v113;
          *(_QWORD *)v96 = v106;
          *(_QWORD *)&v96[8] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
          *(_QWORD *)&v96[16] = &v111;
          *(_QWORD *)&v96[24] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v104, &unk_101A2F727, v96);
          v50 = v126;
          if ( v126 == (_QWORD)v125 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
          v51 = *((_QWORD *)&v125 + 1);
          v52 = 3 * v50;
          *(_QWORD *)(*((_QWORD *)&v125 + 1) + 8 * v52 + 16) = v104[2];
          v53 = v104[0];
          *(_QWORD *)(v51 + 8 * v52 + 8) = v104[1];
          *(_QWORD *)(v51 + 8 * v52) = v53;
          v126 = v50 + 1;
        }
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("requires_openai_auth");
      v42 = 39;
      v54 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1);
      if ( !v54 )
        goto LABEL_104;
      v55 = v54;
      *(_QWORD *)((char *)v54 + 31) = 0xBC80E594B0E583B8LL;
      v54[3] = 0xB8E5BAB8E4BBA1E9LL;
      v54[2] = 0x85BFE52068747561LL;
      qmemcpy(v54, "requires_openai_", 16);
      v56 = v126;
      if ( v126 == (_QWORD)v125 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
      v57 = *((_QWORD *)&v125 + 1);
      v58 = 3 * v56;
      *(_QWORD *)(*((_QWORD *)&v125 + 1) + 8 * v58) = 39;
      *(_QWORD *)(v57 + 8 * v58 + 8) = v55;
      *(_QWORD *)(v57 + 8 * v58 + 16) = 39;
      v126 = v56 + 1;
    }
    v59 = (_BYTE *)_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e("supports_websockets", 19, v14);
    if ( v59 && *v59 == 3 && v59[1] != 1 )
    {
LABEL_72:
      a1[3] = v126;
      *(_OWORD *)(a1 + 1) = v125;
LABEL_73:
      *a1 = 0;
      core::ptr::drop_in_place$LT$toml..value..Value$GT$::hc29b4f2f800c5bf1(&__s1);
      return a1;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("supports_websockets");
    v42 = 35;
    v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1);
    if ( v60 )
    {
      v61 = v60;
      *(_QWORD *)(v60 + 24) = 0x616620BAB8E4BBA1LL;
      *(_QWORD *)(v60 + 16) = 0xE985BFE520737465LL;
      qmemcpy((void *)v60, "supports_websock", 16);
      *(_DWORD *)(v60 + 31) = 1702063201;
      v62 = v126;
      if ( v126 == (_QWORD)v125 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v125);
      v63 = *((_QWORD *)&v125 + 1);
      v64 = 3 * v62;
      *(_QWORD *)(*((_QWORD *)&v125 + 1) + 8 * v64) = 35;
      *(_QWORD *)(v63 + 8 * v64 + 8) = v61;
      *(_QWORD *)(v63 + 8 * v64 + 16) = 35;
      v126 = v62 + 1;
      goto LABEL_72;
    }
LABEL_104:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v42);
  }
  *(_QWORD *)v96 = v8;
  v96[8] = v9;
  *(_OWORD *)&v96[9] = v117;
  *(_QWORD *)&v96[25] = *(_QWORD *)v118;
  *(_QWORD *)&v96[32] = *(_QWORD *)&v118[7];
  *(_QWORD *)&v96[40] = *(_QWORD *)v106;
  v97 = *(_OWORD *)&v106[8];
  v98 = v107;
  v99 = v108;
  v100 = v109;
  v101 = v110;
  *(_QWORD *)&v125 = 0;
  *((_QWORD *)&v125 + 1) = 1;
  v126 = 0;
  __s1.i64[2] = 1610612768;
  __s1.i64[0] = (__int64)&v125;
  __s1.i64[1] = (__int64)&anon_ab021cfe7cb89972c8491e461d453946_1654;
  if ( (unsigned __int8)_$LT$toml..de..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb4e2762bdfecb2bd(v96, &__s1) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_ab021cfe7cb89972c8491e461d453946_1655,
      55,
      &v119,
      &anon_ab021cfe7cb89972c8491e461d453946_1679,
      &anon_ab021cfe7cb89972c8491e461d453946_1657);
  v119 = v125;
  v120 = v126;
  if ( *(_QWORD *)&v96[24] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v96[32], *(_QWORD *)&v96[24], 1);
  if ( !__OFSUB__(-v99, 1) && v99 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100, v99, 1);
  v18 = *((_QWORD *)&v97 + 1);
  v19 = v98;
  if ( v98 )
  {
    v20 = (_QWORD *)(*((_QWORD *)&v97 + 1) + 8LL);
    do
    {
      v21 = *(v20 - 1);
      if ( v21 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1);
      v20 += 3;
      --v19;
    }
    while ( v19 );
  }
  if ( (_QWORD)v97 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24 * v97, 8);
  v22 = v119;
  *(_OWORD *)&v105[7] = v119;
  *(_QWORD *)&v105[23] = v120;
  a1[3] = v120;
  *(_OWORD *)(a1 + 1) = v22;
  *a1 = 1;
  return a1;
}

// ===== codexmate_lib::core::relay::codex_writer::read_top_level_model_line::h8c74f9c16848132b @ 0x10039d4a0 size=1294 lines=265 =====
signed __int64 *__fastcall codexmate_lib::core::relay::codex_writer::read_top_level_model_line::h8c74f9c16848132b(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // r12
  __int64 v4; // rbx
  signed __int64 v5; // rdx
  __int64 v6; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  int *v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  signed __int64 *v25; // rcx
  signed __int64 *result; // rax
  __int64 v27; // r14
  signed __int64 v28; // r15
  void *v29; // rax
  signed __int64 v30; // r15
  const void *v31; // rsi
  signed __int64 v32; // rbx
  unsigned __int64 v33; // [rsp+8h] [rbp-E8h]
  _QWORD v35[5]; // [rsp+18h] [rbp-D8h] BYREF
  char v36; // [rsp+40h] [rbp-B0h]
  __int16 v37; // [rsp+48h] [rbp-A8h]
  int v38; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-98h]
  __int64 v40; // [rsp+60h] [rbp-90h]
  signed __int64 *v41; // [rsp+68h] [rbp-88h]
  __int64 v42; // [rsp+70h] [rbp-80h] BYREF
  __int64 v43; // [rsp+78h] [rbp-78h]
  unsigned __int64 v44; // [rsp+80h] [rbp-70h]
  _QWORD v45[5]; // [rsp+88h] [rbp-68h] BYREF
  char v46; // [rsp+B0h] [rbp-40h]
  __int16 v47; // [rsp+B8h] [rbp-38h]
  char v48[41]; // [rsp+C7h] [rbp-29h] BYREF

  v41 = a1;
  v48[0] = 2;
  v33 = 0;
  v35[0] = a2;
  v35[1] = a3;
  v35[2] = 0;
  v35[3] = a3;
  v35[4] = 0xA0000000ALL;
  v36 = 1;
  v37 = 0;
LABEL_2:
  v3 = 0;
  do
  {
    do
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
LABEL_6:
                  if ( HIBYTE(v37) )
                  {
LABEL_64:
                    v25 = v41;
                    *v41 = 0x8000000000000000LL;
                    return v25;
                  }
                  v6 = v35[0];
                  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
                    &v42,
                    v35);
                  if ( (_DWORD)v42 == 1 )
                  {
                    v7 = v33;
                    v33 = v44;
                    v8 = v44 - v7;
                    v9 = v7 + v6;
                    if ( v44 == v7 )
                      goto LABEL_17;
                  }
                  else
                  {
                    if ( HIBYTE(v37) )
                      goto LABEL_64;
                    HIBYTE(v37) = 1;
                    v8 = a3 - v33;
                    if ( ((unsigned __int8)v37 | (a3 != v33)) != 1 )
                      goto LABEL_64;
                    v9 = v35[0] + v33;
                    if ( !v8 )
                      goto LABEL_17;
                  }
                  v10 = v8;
                  if ( *(_BYTE *)(v9 + v8 - 1) == 10 )
                  {
                    v10 = v8 - 1;
                    if ( v8 != 1 && *(_BYTE *)(v9 + v8 - 2) == 13 )
                    {
                      v8 -= 2LL;
LABEL_17:
                      v10 = v8;
                    }
                  }
                  v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v9, v10);
                  v13 = v12;
                }
                while ( !(unsigned __int8)codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hdb0ae72dca934a7a(
                                            v48,
                                            v9,
                                            v10)
                     || !v13 );
                if ( *(_BYTE *)v11 != 91 )
                  break;
                if ( !(v3 & 1 | (*(_BYTE *)(v11 + v13 - 1) == 93)) )
                  goto LABEL_25;
                v3 = 1;
              }
              if ( (v3 & 1) == 0 )
                break;
              v3 = 1;
            }
            if ( *(_BYTE *)v11 == 35 )
              goto LABEL_2;
LABEL_25:
            if ( v13 > 0xF )
              break;
            v14 = 0;
            while ( *(_BYTE *)(v11 + v14) != 61 )
            {
              if ( v13 == ++v14 )
                goto LABEL_6;
            }
            if ( v13 >= 6 )
              goto LABEL_33;
          }
          if ( core::slice::memchr::memchr_aligned::hda948616f04379f9(61, v11, v13) != 1 )
            goto LABEL_2;
LABEL_33:
          ;
        }
        while ( *(_DWORD *)v11 ^ 0x65646F6D | *(unsigned __int16 *)(v11 + 4) ^ 0x206C
             && *(_DWORD *)v11 ^ 0x65646F6D | *(unsigned __int16 *)(v11 + 4) ^ 0x3D6C );
        if ( v13 >= 0xE )
          break;
        if ( v13 != 13 || *(_QWORD *)v11 ^ 0x61635F6C65646F6DLL | *(_QWORD *)(v11 + 5) ^ 0x676F6C617461635FLL )
          goto LABEL_43;
      }
    }
    while ( !(*(_QWORD *)v11 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v11 + 6) ^ 0x72656469766F7270LL)
         || !(*(_QWORD *)v11 ^ 0x61635F6C65646F6DLL | *(_QWORD *)(v11 + 5) ^ 0x676F6C617461635FLL)
         || v13 != 14 && !(*(_QWORD *)v11 ^ 0x65725F6C65646F6DLL | *(_QWORD *)(v11 + 7) ^ 0x676E696E6F736165LL) );
LABEL_43:
    v43 = 0;
    v44 = v13;
    v45[0] = v11;
    v45[1] = v13;
    v45[2] = 0;
    v45[3] = v13;
    v45[4] = 0x3D0000003DLL;
    v46 = 1;
    v47 = 1;
    v42 = 1;
    v15 = &v38;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      &v38,
      v45);
    if ( v38 == 1 )
    {
      v16 = v40;
      v43 = v40;
    }
    else if ( HIBYTE(v47) || (HIBYTE(v47) = 1, v16 = v43, !(_BYTE)v47) && v44 == v43 )
    {
      v4 = 1;
LABEL_4:
      v5 = 0;
      continue;
    }
    v4 = 1;
    v5 = v42;
    if ( v42 )
    {
      if ( v42 == 1 )
      {
        if ( HIBYTE(v47) || !(_BYTE)v47 && v44 == v16 )
          goto LABEL_4;
        v17 = v44 - v16;
        goto LABEL_51;
      }
      --v42;
      if ( HIBYTE(v47) )
        goto LABEL_4;
      v19 = v45[0];
      v15 = &v38;
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
        &v38,
        v45);
      if ( v38 == 1 )
      {
        v17 = v39 - v43;
        v18 = v43 + v19;
        v43 = v40;
      }
      else
      {
        if ( HIBYTE(v47) )
          goto LABEL_4;
        HIBYTE(v47) = 1;
        v16 = v43;
        v17 = v44 - v43;
        if ( ((unsigned __int8)v47 | (v44 != v43)) != 1 )
          goto LABEL_4;
LABEL_51:
        v18 = v45[0] + v16;
      }
      v20 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v18, v17);
      v22 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hb94468af23922a2c(v20, v21, 34);
      v15 = (int *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hb94468af23922a2c(v22, v23, 39);
      v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(v15, v24);
    }
  }
  while ( !v5 );
  if ( v5 < 0 )
  {
    v27 = 0;
    goto LABEL_67;
  }
  v28 = v5;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15);
  v27 = 1;
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1);
  v5 = v28;
  if ( !v29 )
LABEL_67:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, v5);
  v30 = (signed __int64)v29;
  v31 = (const void *)v4;
  v32 = v5;
  memcpy(v29, v31, v5);
  result = v41;
  *v41 = v32;
  result[1] = v30;
  result[2] = v32;
  return result;
}

// ===== codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::h01af854673912bae @ 0x10039feb0 size=374 lines=98 =====
__int64 __fastcall codexmate_lib::core::relay::codex_writer::top_level_relay_model_requires_cleanup::h01af854673912bae(
        _QWORD *a1,
        size_t a2,
        char a3,
        __int64 *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __int64 v13; // r13
  __int64 v14; // rdi
  __m128i v15; // xmm2
  unsigned __int64 v16; // rax
  __m128i v17; // xmm3
  int v19; // eax
  bool v20; // zf
  __m128i v21; // [rsp+0h] [rbp-70h] BYREF
  __m128i v22; // [rsp+10h] [rbp-60h] BYREF
  void *__s1; // [rsp+28h] [rbp-48h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]
  __int64 v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]

  if ( a2 == 12 )
  {
    if ( !(*a1 ^ 0x725F696D616D6961LL | *((unsigned int *)a1 + 2) ^ 0x79616C65LL) )
    {
      LOBYTE(v4) = 1;
      if ( !a3 )
        return v4;
      goto LABEL_9;
    }
    return 0;
  }
  if ( a2 <= 0xC )
    return 0;
  LOBYTE(v4) = (*a1 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)a1 + 5) ^ 0x5F79616C65725F69LL) == 0;
  if ( !a3 )
    return v4;
LABEL_9:
  if ( (_BYTE)v4 )
  {
    LOBYTE(v4) = 1;
    if ( a4[3] )
    {
      __s1 = a1;
      v8 = core::hash::BuildHasher::hash_one::h5aee3a6b10476d54(a4 + 4, a1, a2);
      _RCX = v8 >> 57;
      v10 = *a4;
      v11 = a4[1];
      v12 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v8 >> 57), (__m128i)0LL);
      v13 = *a4 - 24;
      v14 = 0;
      v15 = (__m128i)-1LL;
      while ( 1 )
      {
        v16 = v11 & v8;
        v17 = _mm_loadu_si128((const __m128i *)(v10 + v16));
        _R15D = _mm_movemask_epi8(_mm_cmpeq_epi8(v17, v12));
        if ( _R15D )
          break;
LABEL_17:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v17, v15));
        if ( (_DWORD)_RCX )
          return v4;
        v8 = v16 + v14 + 16;
        v14 += 16;
      }
      v24 = v16;
      v21 = v12;
      v25 = v11;
      v26 = v14;
      v22 = v17;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r15d }
        _RCX = -(__int64)(v11 & (v16 + _RCX));
        if ( a2 == *(_QWORD *)(v13 + 24 * _RCX + 16) && !memcmp(__s1, *(const void **)(v13 + 24 * _RCX + 8), a2) )
          return 0;
        v19 = _R15D - 1;
        LOWORD(v19) = _R15D & (_R15D - 1);
        v20 = (_WORD)v19 == 0;
        _R15D = v19;
        v16 = v24;
        v12 = _mm_load_si128(&v21);
        v11 = v25;
        v14 = v26;
        v15 = (__m128i)-1LL;
        v17 = _mm_load_si128(&v22);
        if ( v20 )
          goto LABEL_17;
      }
    }
  }
  return v4;
}

// ===== codexmate_lib::core::relay::codex_writer::clear_managed_block::h0350a49fa2ad9f69 @ 0x100397250 size=158 lines=35 =====
_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::clear_managed_block::h0350a49fa2ad9f69(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[10]; // [rsp+8h] [rbp-68h] BYREF
  __int16 v5; // [rsp+58h] [rbp-18h]

  v4[4] = 8;
  v4[5] = 0;
  v4[6] = 8;
  v4[7] = 0;
  v4[0] = 0;
  v5 = 0;
  v4[8] = 8;
  v4[9] = 0;
  v4[2] = 0;
  v2 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h388e0ba1cfe56cce(a2);
  if ( v2 )
  {
    *a1 = 2;
    a1[1] = v2;
  }
  else
  {
    codexmate_lib::core::codex_config::update_text::h865a4b2ee6401e1e(
      a1,
      *(_QWORD *)(a2 + 56),
      *(_QWORD *)(a2 + 64),
      "sync Codex relay config",
      23,
      v4);
  }
  return a1;
}

