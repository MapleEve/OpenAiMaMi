// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::codex_app_server::fork_thread_to_cwd::hb18f4a6686d24c95; addr: 0x10027d7b0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:37Z
__int64 *__fastcall codexmate_lib::core::codex_app_server::fork_thread_to_cwd::hb18f4a6686d24c95(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  signed __int64 v11; // rdx
  signed __int64 v12; // r12
  unsigned __int8 *v13; // rax
  size_t v14; // rdx
  size_t v15; // r14
  __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  void *v23; // rax
  void *v24; // r14
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdi
  void *v28; // rax
  void *v29; // r13
  void *v30; // rax
  void *v31; // r13
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // rcx
  const void *v36; // r15
  __int64 v37; // r14
  const void *v38; // rdi
  __int64 v39; // rdx
  bool v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rax
  _BYTE *v48; // [rsp+8h] [rbp-478h] BYREF
  _BYTE v49[96]; // [rsp+10h] [rbp-470h] BYREF
  __int64 v50; // [rsp+70h] [rbp-410h]
  __int64 v51; // [rsp+78h] [rbp-408h]
  __int64 v52; // [rsp+80h] [rbp-400h]
  __int64 v53; // [rsp+88h] [rbp-3F8h]
  __int64 v54; // [rsp+90h] [rbp-3F0h]
  __int64 v55; // [rsp+98h] [rbp-3E8h]
  __int64 v56; // [rsp+A0h] [rbp-3E0h]
  char v57; // [rsp+A8h] [rbp-3D8h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-3D0h]
  __int64 v59; // [rsp+B8h] [rbp-3C8h]
  __int64 v60; // [rsp+C0h] [rbp-3C0h]
  _BYTE *v61; // [rsp+C8h] [rbp-3B8h] BYREF
  _BYTE __s2[344]; // [rsp+D0h] [rbp-3B0h] BYREF
  _QWORD v63[3]; // [rsp+228h] [rbp-258h] BYREF
  _BYTE v64[352]; // [rsp+240h] [rbp-240h] BYREF
  _QWORD v65[2]; // [rsp+3A0h] [rbp-E0h] BYREF
  __int64 v66; // [rsp+3B0h] [rbp-D0h]
  __int64 v67; // [rsp+3B8h] [rbp-C8h]
  __int64 v68; // [rsp+3C0h] [rbp-C0h]
  __int64 v69; // [rsp+3C8h] [rbp-B8h]
  __int64 v70; // [rsp+3D0h] [rbp-B0h]
  __int64 v71; // [rsp+3D8h] [rbp-A8h]
  __int64 v72; // [rsp+3E0h] [rbp-A0h]
  __int64 v73; // [rsp+3E8h] [rbp-98h]
  void *__src; // [rsp+3F0h] [rbp-90h]
  void *v75; // [rsp+3F8h] [rbp-88h]
  size_t __n; // [rsp+400h] [rbp-80h]
  _QWORD *v77; // [rsp+408h] [rbp-78h] BYREF
  void *v78; // [rsp+410h] [rbp-70h]
  size_t v79; // [rsp+418h] [rbp-68h]
  __int64 (__fastcall *v80)(); // [rsp+420h] [rbp-60h]
  __int64 v81; // [rsp+428h] [rbp-58h] BYREF
  _QWORD *v82; // [rsp+430h] [rbp-50h]
  __int64 v83; // [rsp+438h] [rbp-48h]
  __int64 v84; // [rsp+440h] [rbp-40h] BYREF
  __int64 v85; // [rsp+448h] [rbp-38h]
  __int64 v86; // [rsp+450h] [rbp-30h]

  codexmate_lib::core::codex_app_server::AppServerClient::connect::ha8d3b14fcb591350(&v61); /*0x10027d7da*/
  qmemcpy(v64, __s2, 0x60u); /*0x10027d7f9*/
  if ( v61 != (_BYTE *)3 ) /*0x10027d800*/
  {
    v52 = *(_QWORD *)&__s2[112]; /*0x10027d820*/
    v51 = *(_QWORD *)&__s2[104]; /*0x10027d835*/
    v50 = *(_QWORD *)&__s2[96]; /*0x10027d83c*/
    qmemcpy(v49, v64, sizeof(v49)); /*0x10027d856*/
    v48 = v61; /*0x10027d859*/
    __src = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(a3, a4); /*0x10027d86b*/
    v12 = v11; /*0x10027d872*/
    if ( v11 ) /*0x10027d878*/
    {
      v13 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e(a5, a6); /*0x10027d884*/
      v15 = v14; /*0x10027d889*/
      if ( v14 ) /*0x10027d88f*/
      {
        v75 = v13; /*0x10027d895*/
        v84 = 0; /*0x10027d89c*/
        v86 = 0; /*0x10027d8a4*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a5); /*0x10027d8ac*/
        v16 = 8; /*0x10027d8b1*/
        v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10027d8c1*/
        if ( !v17 ) /*0x10027d8c9*/
          goto LABEL_79; /*0x10027d8c9*/
        *v17 = 0x6449646165726874LL; /*0x10027d8dc*/
        v81 = 8; /*0x10027d8df*/
        v82 = v17; /*0x10027d8e7*/
        v83 = 8; /*0x10027d8eb*/
        if ( v12 < 0 ) /*0x10027d8f6*/
        {
          v18 = 0; /*0x10027d8fc*/
          goto LABEL_8; /*0x10027d8fc*/
        }
        __n = v15; /*0x10027da0e*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8); /*0x10027da12*/
        v18 = 1; /*0x10027da17*/
        v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v12, 1); /*0x10027da25*/
        if ( !v23 ) /*0x10027da2d*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v12); /*0x10027d8ff*/
        v24 = v23; /*0x10027da33*/
        memcpy(v23, __src, v12); /*0x10027da43*/
        LOBYTE(v61) = 3; /*0x10027da48*/
        *(_QWORD *)__s2 = v12; /*0x10027da4f*/
        *(_QWORD *)&__s2[8] = v24; /*0x10027da56*/
        *(_QWORD *)&__s2[16] = v12; /*0x10027da5d*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v77, &v84, &v81, &v61); /*0x10027da77*/
        v25 = __n; /*0x10027da80*/
        if ( (_BYTE)v77 != 6 ) /*0x10027da84*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v77); /*0x10027da8a*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v77); /*0x10027da8f*/
        v16 = 3; /*0x10027da94*/
        v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1); /*0x10027daa4*/
        if ( !v26 ) /*0x10027daac*/
          goto LABEL_79; /*0x10027daac*/
        *(_BYTE *)(v26 + 2) = 100; /*0x10027dab5*/
        *(_WORD *)v26 = 30563; /*0x10027dab9*/
        v81 = 3; /*0x10027dabe*/
        v82 = (_QWORD *)v26; /*0x10027dac6*/
        v83 = 3; /*0x10027daca*/
        if ( v25 < 0 ) /*0x10027dad5*/
        {
          v27 = 0; /*0x10027dad7*/
          goto LABEL_21; /*0x10027dad7*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3); /*0x10027dae6*/
        v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x10027daf3*/
        v27 = 1; /*0x10027daf8*/
        if ( !v28 ) /*0x10027db00*/
LABEL_21:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, v25); /*0x10027dad9*/
        v29 = v28; /*0x10027db02*/
        memcpy(v28, v75, v25); /*0x10027db12*/
        LOBYTE(v61) = 3; /*0x10027db17*/
        *(_QWORD *)__s2 = v25; /*0x10027db1e*/
        *(_QWORD *)&__s2[8] = v29; /*0x10027db25*/
        *(_QWORD *)&__s2[16] = v25; /*0x10027db2c*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v77, &v84, &v81, &v61); /*0x10027db46*/
        if ( (_BYTE)v77 != 6 ) /*0x10027db4f*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v77); /*0x10027db55*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v77); /*0x10027db5a*/
        v16 = 12; /*0x10027db5f*/
        v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x10027db6f*/
        if ( !v30 ) /*0x10027db77*/
LABEL_79:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16); /*0x10027e2b6*/
        qmemcpy(v30, "excludeTurns", 12); /*0x10027db87*/
        v81 = 12; /*0x10027db91*/
        v82 = v30; /*0x10027db99*/
        v83 = 12; /*0x10027db9d*/
        LOWORD(v61) = 257; /*0x10027dba5*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v77, &v84, &v81, &v61); /*0x10027dbc4*/
        if ( (_BYTE)v77 != 6 ) /*0x10027dbcd*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v77); /*0x10027dbd3*/
        v58 = v84; /*0x10027dbe0*/
        v59 = v85; /*0x10027dbe7*/
        v60 = v86; /*0x10027dbf2*/
        v57 = 5; /*0x10027dbf9*/
        codexmate_lib::core::codex_app_server::AppServerClient::request_rpc_with_timeout::h00fda29b7aebed51( /*0x10027dc31*/
          (unsigned int)&v61,
          (unsigned int)&v48,
          (unsigned int)"thread/fork",
          11,
          (unsigned int)&v57,
          120,
          0);
        v31 = v75; /*0x10027dc36*/
        v32 = (__int64)v61; /*0x10027dc3d*/
        if ( v61 != (_BYTE *)12 ) /*0x10027dc48*/
        {
          v65[0] = "thread/fork"; /*0x10027dce8*/
          v65[1] = 11; /*0x10027dcef*/
          if ( (_DWORD)v61 == 11 ) /*0x10027dcfd*/
          {
            v86 = *(_QWORD *)&__s2[32]; /*0x10027dd0a*/
            v85 = *(_QWORD *)&__s2[24]; /*0x10027dd1c*/
            v84 = *(_QWORD *)&__s2[16]; /*0x10027dd20*/
            v77 = v65; /*0x10027dd2b*/
            v78 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x10027dd36*/
            v79 = (size_t)&v84; /*0x10027dd3a*/
            v80 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027dd45*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(&v81, &anon_5a43fe550916ced6ff2b8ab69a2876c4_394, &v77); /*0x10027dd58*/
            v70 = v81; /*0x10027dd65*/
            v71 = (__int64)v82; /*0x10027dd6c*/
            v72 = v83; /*0x10027dd77*/
            if ( v84 ) /*0x10027dd85*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v84, 1); /*0x10027dd90*/
            v32 = 10; /*0x10027dd95*/
          }
          else
          {
            v73 = *(_QWORD *)&__s2[24]; /*0x10027dda6*/
            v72 = *(_QWORD *)&__s2[16]; /*0x10027ddb4*/
            v71 = *(_QWORD *)&__s2[8]; /*0x10027ddc9*/
            v70 = *(_QWORD *)__s2; /*0x10027ddd0*/
            *(_QWORD *)v64 = *(_QWORD *)&__s2[32]; /*0x10027ddde*/
            *(_QWORD *)&v64[8] = *(_QWORD *)&__s2[40]; /*0x10027ddec*/
            *(_QWORD *)&v64[16] = *(_QWORD *)&__s2[48]; /*0x10027ddfa*/
            *(_QWORD *)&v64[24] = *(_QWORD *)&__s2[56]; /*0x10027de08*/
            *(_QWORD *)&v64[32] = *(_QWORD *)&__s2[64]; /*0x10027de16*/
            *(_QWORD *)&v64[40] = *(_QWORD *)&__s2[72]; /*0x10027de24*/
            *(_QWORD *)&v64[48] = *(_QWORD *)&__s2[80]; /*0x10027de32*/
          }
          v66 = v70; /*0x10027de47*/
          v67 = v71; /*0x10027de4e*/
          v68 = v72; /*0x10027de5c*/
          v69 = v73; /*0x10027de6a*/
          a1[11] = *(_QWORD *)&v64[48]; /*0x10027de78*/
          a1[10] = *(_QWORD *)&v64[40]; /*0x10027de83*/
          a1[9] = *(_QWORD *)&v64[32]; /*0x10027de8e*/
          a1[8] = *(_QWORD *)&v64[24]; /*0x10027de99*/
          a1[7] = *(_QWORD *)&v64[16]; /*0x10027dea4*/
          v34 = *(_QWORD *)v64; /*0x10027dea8*/
          a1[6] = *(_QWORD *)&v64[8]; /*0x10027deb6*/
          a1[5] = v34; /*0x10027deba*/
          a1[4] = v69; /*0x10027dec5*/
          a1[3] = v68; /*0x10027ded0*/
          v35 = v66; /*0x10027ded4*/
          a1[2] = v67; /*0x10027dee2*/
          a1[1] = v35; /*0x10027dee6*/
          *a1 = v32; /*0x10027deea*/
          goto LABEL_13; /*0x10027deed*/
        }
        v66 = *(_QWORD *)__s2; /*0x10027dc6a*/
        v67 = *(_QWORD *)&__s2[8]; /*0x10027dc71*/
        v56 = *(_QWORD *)&__s2[24]; /*0x10027dc78*/
        v55 = *(_QWORD *)&__s2[16]; /*0x10027dc7f*/
        v54 = *(_QWORD *)&__s2[8]; /*0x10027dc86*/
        v53 = *(_QWORD *)__s2; /*0x10027dc8d*/
        serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::hbd9a328a7f284180(&v61); /*0x10027dcbb*/
        v33 = *(_QWORD *)__s2; /*0x10027dcc7*/
        if ( v61 == (_BYTE *)2 ) /*0x10027dcd2*/
        {
          *a1 = 3; /*0x10027dcd8*/
          a1[1] = v33; /*0x10027dcdf*/
        }
        else
        {
          memcpy(&v64[16], &__s2[8], 0x150u); /*0x10027df05*/
          *(_QWORD *)v64 = v61; /*0x10027df0a*/
          *(_QWORD *)&v64[8] = *(_QWORD *)__s2; /*0x10027df11*/
          v36 = *(const void **)&v64[24]; /*0x10027df18*/
          v37 = *(_QWORD *)&v64[32]; /*0x10027df1f*/
          v38 = *(const void **)&v64[24]; /*0x10027df26*/
          core::str::_$LT$impl$u20$str$GT$::trim_matches::h867b24570208f58e( /*0x10027df2c*/
            *(unsigned __int8 **)&v64[24],
            *(__int64 *)&v64[32]);
          if ( !v39 || v37 == v12 && (v38 = v36, !memcmp(v36, __src, v12)) ) /*0x10027df48*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38); /*0x10027dfa7*/
            v41 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x10027dfb6*/
            if ( !v41 ) /*0x10027dfbe*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x10027e2d6*/
            *(_QWORD *)(v41 + 40) = 0x49208BA8E7BFBAE7LL; /*0x10027dfce*/
            *(_QWORD *)(v41 + 32) = 0xB096E6849AE78895LL; /*0x10027dfdc*/
            *(_QWORD *)(v41 + 24) = 0xE6899CE69E9BE594LL; /*0x10027dfea*/
            *(_QWORD *)(v41 + 16) = 0xBFE8AA9CE6207265LL; /*0x10027dff8*/
            qmemcpy((void *)v41, "ChatGPT app-serv", 16); /*0x10027e014*/
            *(_BYTE *)(v41 + 48) = 68; /*0x10027e017*/
            *a1 = 10; /*0x10027e01b*/
            a1[1] = 49; /*0x10027e022*/
            a1[2] = v41; /*0x10027e02a*/
            a1[3] = 49; /*0x10027e02e*/
          }
          else
          {
            codexmate_lib::core::codex_app_server::paths_equivalent::_$u7b$$u7b$closure$u7d$$u7d$::hd830e3f4a262034e( /*0x10027df63*/
              &v77,
              *(_QWORD *)&v64[48],
              *(_QWORD *)&v64[56]);
            codexmate_lib::core::codex_app_server::paths_equivalent::_$u7b$$u7b$closure$u7d$$u7d$::hd830e3f4a262034e( /*0x10027df76*/
              &v61,
              v31,
              __n);
            v40 = v79 == *(_QWORD *)&__s2[8] && memcmp(v78, *(const void **)__s2, v79) == 0; /*0x10027df9e*/
            if ( v61 ) /*0x10027e048*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)__s2, v61, 1); /*0x10027e056*/
            if ( v77 ) /*0x10027e062*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v78, v77, 1); /*0x10027e06d*/
            if ( v40 ) /*0x10027e07c*/
            {
              v42 = *(_QWORD *)&v64[32]; /*0x10027e093*/
              *(_QWORD *)&__s2[8] = *(_QWORD *)&v64[32]; /*0x10027e097*/
              v43 = *(_QWORD *)&v64[16]; /*0x10027e09e*/
              v44 = *(_QWORD *)&v64[24]; /*0x10027e0a1*/
              *(_QWORD *)__s2 = *(_QWORD *)&v64[24]; /*0x10027e0a5*/
              v61 = *(_BYTE **)&v64[16]; /*0x10027e0ac*/
              v46 = *(_QWORD *)&v64[48]; /*0x10027e0b6*/
              *(_QWORD *)&__s2[16] = *(_QWORD *)&v64[40]; /*0x10027e0ba*/
              v45 = *(_QWORD *)&v64[40]; /*0x10027e0b3*/
              *(_QWORD *)&__s2[24] = *(_QWORD *)&v64[48]; /*0x10027e0c1*/
              *(_QWORD *)&__s2[32] = *(_QWORD *)&v64[56]; /*0x10027e0cc*/
              a1[6] = *(_QWORD *)&v64[56]; /*0x10027e0d3*/
              a1[5] = v46; /*0x10027e0d7*/
              a1[4] = v45; /*0x10027e0db*/
              a1[3] = v42; /*0x10027e0df*/
              a1[2] = v44; /*0x10027e0e3*/
              a1[1] = v43; /*0x10027e0e7*/
              *a1 = 11; /*0x10027e0eb*/
              if ( !__OFSUB__(-*(_QWORD *)&v64[112], 1) && *(_QWORD *)&v64[112] ) /*0x10027e101*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[120], *(_QWORD *)&v64[112], 1); /*0x10027e10f*/
              if ( *(_QWORD *)&v64[136] != 0x8000000000000000LL && *(_QWORD *)&v64[136] ) /*0x10027e123*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[144], *(_QWORD *)&v64[136], 1); /*0x10027e131*/
              if ( *(_QWORD *)&v64[64] ) /*0x10027e140*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[72], *(_QWORD *)&v64[64], 1); /*0x10027e14e*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v64[304]); /*0x10027e15a*/
              if ( *(_QWORD *)&v64[160] != 0x8000000000000000LL && *(_QWORD *)&v64[160] ) /*0x10027e16e*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[168], *(_QWORD *)&v64[160], 1); /*0x10027e17c*/
              if ( *(_QWORD *)&v64[184] != 0x8000000000000000LL && *(_QWORD *)&v64[184] ) /*0x10027e190*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[192], *(_QWORD *)&v64[184], 1); /*0x10027e19e*/
              if ( *(_QWORD *)&v64[208] != 0x8000000000000000LL && *(_QWORD *)&v64[208] ) /*0x10027e1b2*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[216], *(_QWORD *)&v64[208], 1); /*0x10027e1c0*/
              if ( *(_QWORD *)&v64[232] != 0x8000000000000000LL && *(_QWORD *)&v64[232] ) /*0x10027e1d4*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[240], *(_QWORD *)&v64[232], 1); /*0x10027e1e2*/
              if ( *(_QWORD *)&v64[256] != 0x8000000000000000LL && *(_QWORD *)&v64[256] ) /*0x10027e1f6*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[264], *(_QWORD *)&v64[256], 1); /*0x10027e204*/
              if ( *(__int64 *)&v64[280] >= (__int64)0x8000000000000002LL && *(_QWORD *)&v64[280] ) /*0x10027e222*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v64[288], *(_QWORD *)&v64[280], 1); /*0x10027e230*/
              core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$serde_json..value..Value$GT$$GT$::hcd1d812406044704(&v64[88]); /*0x10027e23c*/
              goto LABEL_13; /*0x10027e241*/
            }
            v61 = &v64[40]; /*0x10027e246*/
            *(_QWORD *)__s2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10027e254*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, &unk_101A2CB11, &v61); /*0x10027e270*/
            a1[3] = v63[2]; /*0x10027e27c*/
            v47 = v63[0]; /*0x10027e280*/
            a1[2] = v63[1]; /*0x10027e28e*/
            a1[1] = v47; /*0x10027e292*/
            *a1 = 10; /*0x10027e296*/
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerThread$GT$::h7cf0f72adc41afd8(v64); /*0x10027e2a4*/
        }
LABEL_13:
        core::ptr::drop_in_place$LT$codexmate_lib..core..codex_app_server..AppServerClient$GT$::h5822fbcb3dd68d11(&v48); /*0x10027d9ed*/
        return a1; /*0x10027d9f4*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a5); /*0x10027d978*/
      v19 = 30; /*0x10027d97d*/
      v21 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x10027d98d*/
      if ( v21 ) /*0x10027d995*/
      {
        *(_QWORD *)((char *)v21 + 22) = 0xBAA9E7BAB8E4BD83LL; /*0x10027d9a5*/
        v21[2] = 0xBD83E88DB8E495BDLL; /*0x10027d9b3*/
        v21[1] = 0xE5AE9BE79CBDE4A5LL; /*0x10027d9c1*/
        *v21 = 0xB7E587A0E6AE9BE7LL; /*0x10027d9cf*/
        *a1 = 9; /*0x10027d9d2*/
        a1[1] = 30; /*0x10027d9d9*/
        a1[2] = (__int64)v21; /*0x10027d9e1*/
        a1[3] = 30; /*0x10027d9e5*/
        goto LABEL_13; /*0x10027d9e5*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a3); /*0x10027d90f*/
      v19 = 22; /*0x10027d914*/
      v20 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x10027d924*/
      if ( v20 ) /*0x10027d92c*/
      {
        *(_QWORD *)((char *)v20 + 14) = 0xBAA9E7BAB8E4BD83LL; /*0x10027d93c*/
        v20[1] = 0xBD83E88DB8E42044LL; /*0x10027d94a*/
        *v20 = 0x49208BA8E7BFBAE7LL; /*0x10027d958*/
        *a1 = 9; /*0x10027d95b*/
        a1[1] = 22; /*0x10027d962*/
        a1[2] = (__int64)v20; /*0x10027d96a*/
        a1[3] = 22; /*0x10027d96e*/
        goto LABEL_13; /*0x10027d976*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v19); /*0x10027e2c5*/
  }
  qmemcpy(a1, v64, 0x60u); /*0x10027d811*/
  return a1; /*0x10027d9fc*/
}