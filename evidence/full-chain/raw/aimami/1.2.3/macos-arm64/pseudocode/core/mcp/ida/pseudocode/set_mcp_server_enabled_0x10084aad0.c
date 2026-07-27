// __ZN13codexmate_lib4core3mcp22set_mcp_server_enabled @ 0x10084aad0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::mcp::set_mcp_server_enabled::hfc6d4203a21aaa27(
        _QWORD *a1,
        void *a2,
        __int64 a3,
        void *a4,
        size_t a5,
        int a6)
{
  _QWORD *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // r14
  size_t v13; // r13
  __int64 v14; // r15
  double v15; // xmm0_8
  void *v16; // r14
  char v17; // al
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // r12
  void *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // r15
  _QWORD *v26; // r13
  __int64 v27; // rsi
  void *v28; // r13
  __int64 v29; // rsi
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // r12
  __int64 v35; // rsi
  void *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // r13
  __int64 v45; // rsi
  _QWORD *v46; // [rsp+8h] [rbp-4A8h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+10h] [rbp-4A0h]
  __int128 v48; // [rsp+18h] [rbp-498h]
  void *v49; // [rsp+28h] [rbp-488h]
  __int64 (__fastcall *v50)(); // [rsp+30h] [rbp-480h]
  __int64 v51; // [rsp+38h] [rbp-478h]
  __int64 v52; // [rsp+40h] [rbp-470h]
  __int64 v53; // [rsp+48h] [rbp-468h]
  __int64 v54; // [rsp+50h] [rbp-460h]
  __int64 v55; // [rsp+58h] [rbp-458h]
  __int64 v56; // [rsp+60h] [rbp-450h]
  __int64 v57; // [rsp+68h] [rbp-448h]
  _BYTE v58[144]; // [rsp+70h] [rbp-440h] BYREF
  _QWORD v59[12]; // [rsp+100h] [rbp-3B0h] BYREF
  _QWORD v60[3]; // [rsp+160h] [rbp-350h] BYREF
  _QWORD __dst[26]; // [rsp+178h] [rbp-338h] BYREF
  _QWORD v62[2]; // [rsp+248h] [rbp-268h] BYREF
  _QWORD v63[2]; // [rsp+258h] [rbp-258h] BYREF
  __int64 v64; // [rsp+268h] [rbp-248h] BYREF
  __int64 v65; // [rsp+270h] [rbp-240h]
  unsigned __int64 v66; // [rsp+278h] [rbp-238h]
  _QWORD v67[2]; // [rsp+280h] [rbp-230h] BYREF
  __int64 v68; // [rsp+290h] [rbp-220h]
  __int64 v69; // [rsp+298h] [rbp-218h]
  __int64 v70; // [rsp+2A0h] [rbp-210h]
  __int64 v71; // [rsp+2A8h] [rbp-208h]
  __int64 v72; // [rsp+2B0h] [rbp-200h]
  __int64 v73; // [rsp+2B8h] [rbp-1F8h]
  __int64 v74; // [rsp+2C0h] [rbp-1F0h]
  __int64 v75; // [rsp+2C8h] [rbp-1E8h]
  _BYTE v76[248]; // [rsp+2D0h] [rbp-1E0h] BYREF
  _QWORD v77[12]; // [rsp+3C8h] [rbp-E8h] BYREF
  int v78; // [rsp+42Ch] [rbp-84h]
  void *v79; // [rsp+430h] [rbp-80h]
  __int64 v80; // [rsp+438h] [rbp-78h]
  __int64 v81; // [rsp+440h] [rbp-70h]
  void *v82; // [rsp+448h] [rbp-68h]
  void *__s1[2]; // [rsp+450h] [rbp-60h]
  void *__s2; // [rsp+460h] [rbp-50h]
  _QWORD *v85; // [rsp+468h] [rbp-48h]
  __int64 v86; // [rsp+470h] [rbp-40h]
  size_t v87; // [rsp+478h] [rbp-38h]
  void *v88; // [rsp+480h] [rbp-30h]

  v78 = a6; /*0x10084aae4*/
  v6 = a1; /*0x10084aaeb*/
  v79 = a4; /*0x10084aaee*/
  v63[0] = a4; /*0x10084aaf2*/
  v87 = a5; /*0x10084aaf9*/
  v63[1] = a5; /*0x10084aafd*/
  v67[0] = "change MCP server state"; /*0x10084ab0b*/
  v67[1] = 23; /*0x10084ab12*/
  v82 = a2; /*0x10084ab1d*/
  v81 = a3; /*0x10084ab24*/
  v7 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10084ab2b*/
  if ( v7 ) /*0x10084ab33*/
  {
    *(_WORD *)v76 = 511; /*0x10084ab35*/
    v76[2] = 1; /*0x10084ab3e*/
    v9 = std::fs::DirBuilder::_create::h099c6e2853c95452(v76, v7, v8); /*0x10084ab4f*/
    if ( v9 ) /*0x10084ab57*/
    {
      v77[0] = 2; /*0x10084ab59*/
      v77[1] = v9; /*0x10084ab64*/
LABEL_58:
      qmemcpy(v6 + 1, v77, 0x60u); /*0x10084b4d1*/
LABEL_59:
      *v6 = 0x8000000000000000LL; /*0x10084b4e4*/
      return v6; /*0x10084b4ee*/
    }
  }
  v10 = 1; /*0x10084ab70*/
  v66 = 0x8000000000000003LL; /*0x10084ab8a*/
  v85 = a1; /*0x10084ab91*/
  while ( 1 ) /*0x10084aba0*/
  {
    v11 = v10 + 1; /*0x10084aba0*/
    if ( v10 == 3 ) /*0x10084aba8*/
      v11 = 3; /*0x10084aba8*/
    v65 = v10; /*0x10084abac*/
    v64 = v10; /*0x10084abb3*/
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(v76, (__int64)v82, v81); /*0x10084abc5*/
    v12 = *(_QWORD *)&v76[8]; /*0x10084abd1*/
    v13 = *(_QWORD *)&v76[24]; /*0x10084abdf*/
    if ( *(_QWORD *)v76 != 11 ) /*0x10084abea*/
    {
      v77[11] = *(_QWORD *)&v76[88]; /*0x10084b084*/
      v77[10] = *(_QWORD *)&v76[80]; /*0x10084b092*/
      v77[9] = *(_QWORD *)&v76[72]; /*0x10084b0a0*/
      v77[8] = *(_QWORD *)&v76[64]; /*0x10084b0ae*/
      v77[7] = *(_QWORD *)&v76[56]; /*0x10084b0bc*/
      v77[6] = *(_QWORD *)&v76[48]; /*0x10084b0ca*/
      v77[5] = *(_QWORD *)&v76[40]; /*0x10084b0df*/
      v77[4] = *(_QWORD *)&v76[32]; /*0x10084b0e6*/
      v77[1] = *(_QWORD *)&v76[8]; /*0x10084b0ed*/
      v77[2] = *(_QWORD *)&v76[16]; /*0x10084b0f4*/
      v77[3] = *(_QWORD *)&v76[24]; /*0x10084b0fb*/
      v77[0] = *(_QWORD *)v76; /*0x10084b102*/
      v6 = v85; /*0x10084b109*/
      goto LABEL_58; /*0x10084b10d*/
    }
    __s2 = *(void **)&v76[16]; /*0x10084abf3*/
    codexmate_lib::core::mcp::prepare_existing_mcp_block::h411c36bd5386c3f8( /*0x10084ac02*/
      v76,
      *(_QWORD *)&v76[16],
      *(_QWORD *)&v76[24],
      v79,
      v87);
    v14 = *(_QWORD *)v76; /*0x10084ac07*/
    v88 = *(void **)&v76[8]; /*0x10084ac15*/
    if ( *(_QWORD *)v76 != 11 ) /*0x10084ac2b*/
    {
      v87 = *(_QWORD *)&v76[24]; /*0x10084b112*/
      v75 = *(_QWORD *)&v76[88]; /*0x10084b11d*/
      v74 = *(_QWORD *)&v76[80]; /*0x10084b12b*/
      v73 = *(_QWORD *)&v76[72]; /*0x10084b139*/
      v72 = *(_QWORD *)&v76[64]; /*0x10084b147*/
      v71 = *(_QWORD *)&v76[56]; /*0x10084b155*/
      v70 = *(_QWORD *)&v76[48]; /*0x10084b163*/
      v69 = *(_QWORD *)&v76[40]; /*0x10084b178*/
      v68 = *(_QWORD *)&v76[32]; /*0x10084b17f*/
      v22 = *(_QWORD *)&v76[16]; /*0x10084b186*/
      v23 = v88; /*0x10084b189*/
LABEL_51:
      v77[11] = v75; /*0x10084b361*/
      v77[10] = v74; /*0x10084b376*/
      v77[9] = v73; /*0x10084b384*/
      v77[8] = v72; /*0x10084b392*/
      v77[7] = v71; /*0x10084b3a0*/
      v77[6] = v70; /*0x10084b3ae*/
      v77[5] = v69; /*0x10084b3c3*/
      v77[4] = v68; /*0x10084b3ca*/
      v77[2] = v22; /*0x10084b3d1*/
      v77[3] = v87; /*0x10084b3dc*/
      v77[0] = v14; /*0x10084b3e3*/
      v77[1] = v23; /*0x10084b3ea*/
      if ( v12 ) /*0x10084b3f4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v12, 1); /*0x10084b402*/
      v6 = v85; /*0x10084b407*/
      goto LABEL_58; /*0x10084b40b*/
    }
    v80 = *(_QWORD *)&v76[16]; /*0x10084ac34*/
    _$LT$toml_edit..document..Document$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h65e4d7afdee388aa(v76); /*0x10084ac38*/
    v86 = v12; /*0x10084ac3d*/
    if ( *(_QWORD *)v76 == 2 ) /*0x10084ac4c*/
    {
      qmemcpy(v59, &v76[8], sizeof(v59)); /*0x10084b1a8*/
      v62[0] = v59; /*0x10084b1ab*/
      v62[1] = _$LT$toml_edit..parser..errors..TomlError$u20$as$u20$core..fmt..Display$GT$::fmt::h82500e813022202e; /*0x10084b1b9*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_1017C5AAC, v62); /*0x10084b1d5*/
      v16 = (void *)v60[0]; /*0x10084b1da*/
      v22 = v60[1]; /*0x10084b1e1*/
      v87 = v60[2]; /*0x10084b1ef*/
      if ( v59[3] ) /*0x10084b1fd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59[4], v59[3], 1); /*0x10084b20b*/
      if ( v59[9] != 0x8000000000000000LL && v59[9] ) /*0x10084b229*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59[10], v59[9], 1); /*0x10084b237*/
      v24 = v59[7]; /*0x10084b23c*/
      v25 = v59[8]; /*0x10084b243*/
      if ( v59[8] ) /*0x10084b24d*/
      {
        v26 = (_QWORD *)(v59[7] + 8LL); /*0x10084b24f*/
        do /*0x10084b267*/
        {
          v27 = *(v26 - 1); /*0x10084b269*/
          if ( v27 ) /*0x10084b270*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v27, 1); /*0x10084b27b*/
          v26 += 3; /*0x10084b260*/
          --v25; /*0x10084b264*/
        }
        while ( v25 ); /*0x10084b267*/
      }
      if ( v59[6] ) /*0x10084b28c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24LL * v59[6], 8); /*0x10084b29e*/
      v14 = 9; /*0x10084b2a3*/
      v28 = v88; /*0x10084b2a9*/
      goto LABEL_48; /*0x10084b2ad*/
    }
    memcpy(__dst, &v76[40], sizeof(__dst)); /*0x10084ac73*/
    *(_OWORD *)__s1 = *(_OWORD *)&v76[16]; /*0x10084ac7f*/
    v57 = __dst[7]; /*0x10084ac91*/
    v56 = __dst[6]; /*0x10084ac9c*/
    v55 = __dst[5]; /*0x10084aca7*/
    v54 = __dst[4]; /*0x10084acb2*/
    v53 = __dst[3]; /*0x10084acbd*/
    v52 = __dst[2]; /*0x10084acc8*/
    v51 = __dst[1]; /*0x10084acda*/
    v50 = (__int64 (__fastcall *)())__dst[0]; /*0x10084acde*/
    memcpy(v58, &__dst[8], sizeof(v58)); /*0x10084acf4*/
    v15 = *(double *)&v76[16]; /*0x10084acf9*/
    v48 = *(_OWORD *)&v76[16]; /*0x10084acfd*/
    v49 = *(void **)&v76[32]; /*0x10084ad04*/
    v46 = *(_QWORD **)v76; /*0x10084ad0b*/
    v47 = *(__int64 (__fastcall **)())&v76[8]; /*0x10084ad12*/
    codexmate_lib::core::mcp::editable_mcp_server_table::hbad15a135f5ae9f0(v76, &v46, v79, v87); /*0x10084ad32*/
    v14 = *(_QWORD *)v76; /*0x10084ad37*/
    v16 = *(void **)&v76[8]; /*0x10084ad3e*/
    if ( *(_QWORD *)v76 != 11 ) /*0x10084ad49*/
    {
      v22 = *(_QWORD *)&v76[16]; /*0x10084b2b2*/
      v87 = *(_QWORD *)&v76[24]; /*0x10084b2c0*/
      v68 = *(_QWORD *)&v76[32]; /*0x10084b2cb*/
      v69 = *(_QWORD *)&v76[40]; /*0x10084b2d9*/
      v70 = *(_QWORD *)&v76[48]; /*0x10084b2e7*/
      v71 = *(_QWORD *)&v76[56]; /*0x10084b2f5*/
      v72 = *(_QWORD *)&v76[64]; /*0x10084b303*/
      v73 = *(_QWORD *)&v76[72]; /*0x10084b311*/
      v74 = *(_QWORD *)&v76[80]; /*0x10084b31f*/
      v75 = *(_QWORD *)&v76[88]; /*0x10084b32d*/
      v28 = v88; /*0x10084b33b*/
      core::ptr::drop_in_place$LT$toml_edit..document..Document$GT$::hcd2652bb7f1de8eb(&v46); /*0x10084b33f*/
LABEL_48:
      if ( v28 ) /*0x10084b347*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v28, 1); /*0x10084b355*/
      v23 = v16; /*0x10084b35a*/
      v12 = v86; /*0x10084b35d*/
      goto LABEL_51; /*0x10084b35d*/
    }
    *(_QWORD *)v76 = 5; /*0x10084ad4f*/
    *(_QWORD *)&v76[8] = v66; /*0x10084ad61*/
    *(_QWORD *)&v76[32] = v66; /*0x10084ad68*/
    *(_QWORD *)&v76[56] = v66; /*0x10084ad6f*/
    v76[80] = v78; /*0x10084ad7c*/
    toml_edit::table::Table::insert::hb018739605f59eb7(__dst, v16, &unk_101674B6F, 7, v76); /*0x10084ad9b*/
    if ( LODWORD(__dst[0]) != 12 ) /*0x10084ada7*/
      core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__dst); /*0x10084adb0*/
    __dst[0] = 0; /*0x10084adb5*/
    __dst[1] = 1; /*0x10084adc0*/
    __dst[2] = 0; /*0x10084adcb*/
    *(_QWORD *)&v76[16] = 1610612768; /*0x10084add6*/
    *(_QWORD *)v76 = __dst; /*0x10084ade8*/
    *(_QWORD *)&v76[8] = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x10084adf6*/
    v17 = toml_edit::encode::_$LT$impl$u20$core..fmt..Display$u20$for$u20$toml_edit..document..Document$GT$::fmt::h4eb41f41630bb967( /*0x10084ae07*/
            &v46,
            v76);
    v18 = v86; /*0x10084ae0e*/
    if ( v17 ) /*0x10084ae12*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10084b922*/
        &anon_10420c9971c21f44d230d15b39fb3fec_965,
        55,
        v59,
        &anon_10420c9971c21f44d230d15b39fb3fec_976,
        &anon_10420c9971c21f44d230d15b39fb3fec_967);
    v19 = __dst[0]; /*0x10084ae18*/
    __s1[0] = (void *)__dst[1]; /*0x10084ae26*/
    v20 = __dst[2]; /*0x10084ae2a*/
    core::ptr::drop_in_place$LT$toml_edit..document..Document$GT$::hcd2652bb7f1de8eb(&v46); /*0x10084ae38*/
    if ( v88 ) /*0x10084ae44*/
      v15 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v88, 1); /*0x10084ae4f*/
    if ( v20 == v13 && !memcmp(__s1[0], __s2, v13) ) /*0x10084ae64*/
      break; /*0x10084ae64*/
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(v76, (__int64)v82, v81); /*0x10084ae80*/
    v21 = *(_QWORD *)&v76[8]; /*0x10084ae8c*/
    v88 = *(void **)&v76[16]; /*0x10084ae9a*/
    if ( *(_QWORD *)v76 != 11 ) /*0x10084aea9*/
    {
      v77[11] = *(_QWORD *)&v76[88]; /*0x10084b417*/
      v77[10] = *(_QWORD *)&v76[80]; /*0x10084b425*/
      v77[9] = *(_QWORD *)&v76[72]; /*0x10084b433*/
      v77[8] = *(_QWORD *)&v76[64]; /*0x10084b441*/
      v77[7] = *(_QWORD *)&v76[56]; /*0x10084b44f*/
      v77[6] = *(_QWORD *)&v76[48]; /*0x10084b45d*/
      v77[5] = *(_QWORD *)&v76[40]; /*0x10084b472*/
      v77[4] = *(_QWORD *)&v76[32]; /*0x10084b479*/
      v77[1] = *(_QWORD *)&v76[8]; /*0x10084b480*/
      v77[2] = v88; /*0x10084b48b*/
      v77[3] = *(_QWORD *)&v76[24]; /*0x10084b492*/
      v77[0] = *(_QWORD *)v76; /*0x10084b499*/
      if ( v19 ) /*0x10084b4a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v19, 1); /*0x10084b4b1*/
      v29 = v86; /*0x10084b4b6*/
      v6 = v85; /*0x10084b4bd*/
      if ( !v86 ) /*0x10084b4c1*/
        goto LABEL_58; /*0x10084b4c1*/
LABEL_57:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v29, 1); /*0x10084b4c3*/
      goto LABEL_58; /*0x10084b4cc*/
    }
    if ( *(_QWORD *)&v76[24] == v13 && !memcmp(v88, __s2, v13) ) /*0x10084aec6*/
    {
      v31 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x10084b53a*/
              v82,
              v81,
              (__int64)__s1[0],
              v20,
              1);
      v6 = v85; /*0x10084b53f*/
      if ( !v31 ) /*0x10084b546*/
      {
        if ( v21 ) /*0x10084b69d*/
          v15 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v21, 1); /*0x10084b6ab*/
        if ( v19 ) /*0x10084b6b3*/
          v15 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v19, 1); /*0x10084b6c1*/
        v18 = v86; /*0x10084b6c6*/
        goto LABEL_81; /*0x10084b6c6*/
      }
      __dst[0] = v31; /*0x10084b54c*/
      *(_QWORD *)v76 = v67; /*0x10084b55a*/
      *(_QWORD *)&v76[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084b568*/
      *(_QWORD *)&v76[16] = __dst; /*0x10084b576*/
      *(_QWORD *)&v76[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10084b584*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v46, &unk_1017C59A2, v76); /*0x10084b5a0*/
      *(_QWORD *)v76 = v46; /*0x10084b5b3*/
      *(_QWORD *)&v76[8] = v47; /*0x10084b5ba*/
      *(_QWORD *)&v76[16] = v48; /*0x10084b5c8*/
      if ( (__dst[0] & 3) == 1 ) /*0x10084b5de*/
      {
        v32 = __dst[0] - 1LL; /*0x10084b5e0*/
        v33 = *(_QWORD *)(__dst[0] - 1LL); /*0x10084b5e4*/
        v34 = *(_QWORD *)(__dst[0] + 7LL); /*0x10084b5e8*/
        if ( *(_QWORD *)v34 ) /*0x10084b5ec*/
          (*(void (__fastcall **)(__int64))v34)(v33); /*0x10084b5f8*/
        v35 = *(_QWORD *)(v34 + 8); /*0x10084b5fa*/
        if ( v35 ) /*0x10084b602*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v35, *(_QWORD *)(v34 + 16)); /*0x10084b60c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, 24, 8); /*0x10084b61e*/
        v6 = v85; /*0x10084b623*/
      }
      v77[1] = *(_QWORD *)v76; /*0x10084b635*/
      v77[2] = *(_QWORD *)&v76[8]; /*0x10084b63c*/
      v77[3] = *(_QWORD *)&v76[16]; /*0x10084b64a*/
      v77[0] = 10; /*0x10084b651*/
      if ( v21 ) /*0x10084b65f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v21, 1); /*0x10084b66d*/
      if ( v19 ) /*0x10084b675*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v19, 1); /*0x10084b683*/
      v29 = v86; /*0x10084b688*/
      if ( !v86 ) /*0x10084b68f*/
        goto LABEL_58; /*0x10084b68f*/
      goto LABEL_57; /*0x10084b68f*/
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10084aeda*/
    {
      v46 = v67; /*0x10084aee7*/
      v47 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084aef5*/
      *(_QWORD *)&v48 = &v64; /*0x10084af03*/
      *((_QWORD *)&v48 + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10084af11*/
      v49 = &unk_101674A80; /*0x10084af1f*/
      v50 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10084af26*/
      *(_QWORD *)&v76[48] = 2; /*0x10084af2d*/
      *(_QWORD *)&v76[56] = "codexmate_lib::core::codex_config"; /*0x10084af3f*/
      *(_QWORD *)&v76[64] = 33; /*0x10084af46*/
      *(_QWORD *)&v76[80] = &unk_1017C5943; /*0x10084af58*/
      *(_QWORD *)&v76[88] = &v46; /*0x10084af66*/
      *(_QWORD *)v76 = 0; /*0x10084af6d*/
      *(_QWORD *)&v76[8] = "codexmate_lib::core::codex_config"; /*0x10084af78*/
      *(_QWORD *)&v76[16] = 33; /*0x10084af7f*/
      *(_QWORD *)&v76[24] = 0; /*0x10084af8a*/
      *(_QWORD *)&v76[32] = "src/core/codex_config.rs"; /*0x10084af9c*/
      *(_QWORD *)&v76[40] = 24; /*0x10084afa3*/
      *(_QWORD *)&v76[72] = 0x1B00000001LL; /*0x10084afb8*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v59, v76); /*0x10084afcd*/
    }
    if ( v21 ) /*0x10084afd5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v21, 1); /*0x10084afe3*/
    if ( v19 ) /*0x10084afeb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v19, 1); /*0x10084aff9*/
    if ( v86 ) /*0x10084b00c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v86, 1); /*0x10084b017*/
    if ( v65 != 3 ) /*0x10084b024*/
    {
      v10 = v11; /*0x10084b026*/
      if ( v11 <= 3 ) /*0x10084b02d*/
        continue; /*0x10084b02d*/
    }
    *(_QWORD *)v76 = v67; /*0x10084b03a*/
    *(_QWORD *)&v76[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084b048*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v77[1], &unk_1017C58FB, v76); /*0x10084b064*/
    v77[0] = 10; /*0x10084b069*/
    v6 = v85; /*0x10084b074*/
    goto LABEL_58; /*0x10084b078*/
  }
  if ( v19 ) /*0x10084b509*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1[0], v19, 1); /*0x10084b51b*/
LABEL_81:
  if ( v18 ) /*0x10084b6cd*/
    v15 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v18, 1); /*0x10084b6db*/
  v36 = v82; /*0x10084b6e7*/
  codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v76, (__int64)v82, v81); /*0x10084b6ef*/
  v37 = *(_QWORD *)v76; /*0x10084b6f4*/
  v38 = *(_QWORD *)&v76[8]; /*0x10084b6fb*/
  v39 = *(_QWORD *)&v76[16]; /*0x10084b702*/
  v40 = *(_QWORD *)&v76[24]; /*0x10084b709*/
  if ( *(_QWORD *)v76 != 11 ) /*0x10084b714*/
  {
    v6 = v85; /*0x10084b7fd*/
    v85[12] = *(_QWORD *)&v76[88]; /*0x10084b801*/
    v6[11] = *(_QWORD *)&v76[80]; /*0x10084b80c*/
    v6[10] = *(_QWORD *)&v76[72]; /*0x10084b817*/
    v6[9] = *(_QWORD *)&v76[64]; /*0x10084b822*/
    v6[8] = *(_QWORD *)&v76[56]; /*0x10084b82d*/
    v6[7] = *(_QWORD *)&v76[48]; /*0x10084b838*/
    v45 = *(_QWORD *)&v76[32]; /*0x10084b83c*/
    v6[6] = *(_QWORD *)&v76[40]; /*0x10084b84a*/
    v6[5] = v45; /*0x10084b84e*/
    v6[1] = v37; /*0x10084b852*/
    v6[2] = v38; /*0x10084b856*/
    v6[3] = v39; /*0x10084b85a*/
    v6[4] = v40; /*0x10084b85e*/
    goto LABEL_59; /*0x10084b862*/
  }
  v41 = 224LL * *(_QWORD *)&v76[24]; /*0x10084b71a*/
  v42 = *(_QWORD *)&v76[16] + 224LL * *(_QWORD *)&v76[24]; /*0x10084b721*/
  __dst[0] = *(_QWORD *)&v76[16]; /*0x10084b725*/
  __dst[2] = *(_QWORD *)&v76[8]; /*0x10084b72c*/
  __dst[1] = *(_QWORD *)&v76[16]; /*0x10084b733*/
  __dst[3] = v42; /*0x10084b73a*/
  if ( *(_QWORD *)&v76[24] ) /*0x10084b744*/
  {
    v43 = *(_QWORD *)&v76[16] + 224LL; /*0x10084b74a*/
    do /*0x10084b776*/
    {
      v36 = (void *)(v43 - 224); /*0x10084b77c*/
      memcpy(v76, (const void *)(v43 - 224), 0xE0u); /*0x10084b78b*/
      if ( *(_QWORD *)&v76[16] == v87 && (v36 = v79, !memcmp(*(const void **)&v76[8], v79, v87)) ) /*0x10084b7ac*/
      {
        v44 = *(_QWORD *)v76; /*0x10084b7b5*/
        if ( *(_QWORD *)v76 != 0x8000000000000000LL ) /*0x10084b7c9*/
        {
          __dst[1] = v43; /*0x10084b7cb*/
          v6 = v85; /*0x10084b7d9*/
          memcpy(v85 + 1, (const void *)(v43 - 216), 0xD8u); /*0x10084b7e9*/
          *v6 = v44; /*0x10084b7ee*/
          goto LABEL_95; /*0x10084b7f1*/
        }
      }
      else
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(v76); /*0x10084b763*/
      }
      v43 += 224; /*0x10084b768*/
      v41 -= 224; /*0x10084b76f*/
    }
    while ( v41 ); /*0x10084b776*/
    __dst[1] = v42; /*0x10084b867*/
  }
  v46 = (_QWORD *)0x8000000000000000LL; /*0x10084b878*/
  core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$codexmate_lib..core..models..McpServerSummary$GT$$GT$::hc95b050e11ae6969( /*0x10084b886*/
    &v46,
    v36,
    v37,
    v38,
    v15);
  v46 = v63; /*0x10084b892*/
  v47 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10084b8a0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v76[8], &unk_1017C5A86, &v46); /*0x10084b8bc*/
  *(_QWORD *)v76 = 8; /*0x10084b8c1*/
  v6 = v85; /*0x10084b8cc*/
  qmemcpy(v85 + 1, v76, 0x60u); /*0x10084b8e0*/
  *v6 = 0x8000000000000000LL; /*0x10084b8ed*/
LABEL_95:
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h320a351df85c37a2( /*0x10084b8f0*/
    __dst,
    v15);
  return v6; /*0x10084b4f4*/
}