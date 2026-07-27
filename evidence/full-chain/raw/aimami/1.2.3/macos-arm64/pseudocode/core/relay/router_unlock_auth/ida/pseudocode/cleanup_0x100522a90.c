// __ZN13codexmate_lib4core5relay18router_unlock_auth7cleanup @ 0x100522a90 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__int64 *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  double v5; // xmm0_8
  _QWORD *v6; // r15
  __int64 (__fastcall *v7)(); // r12
  __int64 v8; // r13
  double v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  _QWORD *v18; // r15
  __int64 (__fastcall *v19)(); // r12
  __int64 v20; // r13
  bool v21; // r13
  void *v22; // r14
  __int64 v23; // rsi
  void *v24; // rdi
  bool v25; // r14
  _QWORD *v26; // r15
  __int64 (__fastcall *v27)(); // r12
  __int64 v28; // r13
  void *v29; // r15
  size_t v30; // r14
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 *v44; // rax
  double v45; // xmm0_8
  double v46; // xmm0_8
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // rcx
  double v52; // xmm0_8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  void *v56; // rdi
  size_t v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+8h] [rbp-158h] BYREF
  void *v61; // [rsp+10h] [rbp-150h]
  size_t v62; // [rsp+18h] [rbp-148h]
  __int64 *v63; // [rsp+20h] [rbp-140h] BYREF
  __int64 (__fastcall *v64)(_QWORD, _QWORD); // [rsp+28h] [rbp-138h]
  __int64 v65; // [rsp+30h] [rbp-130h]
  __int64 v66; // [rsp+38h] [rbp-128h]
  __int64 v67; // [rsp+40h] [rbp-120h]
  __int64 v68; // [rsp+48h] [rbp-118h]
  __int64 v69; // [rsp+50h] [rbp-110h]
  __int64 v70; // [rsp+58h] [rbp-108h]
  __int64 v71; // [rsp+60h] [rbp-100h] BYREF
  __int64 v72; // [rsp+68h] [rbp-F8h] BYREF
  __int64 (__fastcall *v73)(_QWORD, _QWORD); // [rsp+70h] [rbp-F0h]
  __int64 v74; // [rsp+78h] [rbp-E8h]
  __int64 v75; // [rsp+80h] [rbp-E0h] BYREF
  _QWORD *v76; // [rsp+88h] [rbp-D8h]
  __int64 (__fastcall *v77)(); // [rsp+90h] [rbp-D0h]
  __int64 v78[19]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+130h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 584); /*0x100522aaa*/
  v4 = *(_QWORD *)(a2 + 592); /*0x100522ab1*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100522ad2*/
    &v60,
    v3,
    v4,
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_auth",
    30);
  std::path::Path::_join::hb1a495d4f06b13b8(&v75, v3, v4, &anon_92869709a5e99ce1936aa4e326b6c562_830, 30); /*0x100522af1*/
  v5 = codexmate_lib::core::relay::router_unlock_auth::read_marker::h8487a1125204f37a(v78, v3, v4); /*0x100522b03*/
  if ( !__OFSUB__(0, v78[0]) ) /*0x100522b11*/
  {
    v70 = v78[7]; /*0x100522c31*/
    v69 = v78[6]; /*0x100522c3f*/
    v68 = v78[5]; /*0x100522c4d*/
    v67 = v78[4]; /*0x100522c5b*/
    v66 = v78[3]; /*0x100522c69*/
    v65 = v78[2]; /*0x100522c77*/
    v64 = (__int64 (__fastcall *)(_QWORD, _QWORD))v78[1]; /*0x100522c8c*/
    v63 = (__int64 *)v78[0]; /*0x100522c93*/
    switch ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2) ) /*0x100522cb3*/
    {
      case 0u: /*0x100522cb3*/
        if ( !(_BYTE)v70 ) /*0x100522cbc*/
          goto LABEL_12; /*0x100522cbc*/
        v18 = v76; /*0x100522cbe*/
        v19 = v77; /*0x100522cc5*/
        std::sys::fs::metadata::h32fa16d3052ea535(v78, v76, v77); /*0x100522cd9*/
        v20 = v78[0]; /*0x100522cde*/
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100522cef*/
          v78[0],
          v78[1]);
        if ( v20 ) /*0x100522cf7*/
          goto LABEL_12; /*0x100522cf7*/
        v52 = codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::hdafbced71039cf9f( /*0x100523465*/
                v78,
                v18,
                v19,
                (__int64)"router unlock missing-authrouter unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
                26);
        v47 = v78[0]; /*0x10052346a*/
        v48 = v78[1]; /*0x100523471*/
        v49 = v78[2]; /*0x100523478*/
        v50 = v78[3]; /*0x10052347f*/
        if ( v78[0] != 11 ) /*0x10052348a*/
          goto LABEL_77; /*0x10052348a*/
        if ( v78[1] != 0x8000000000000000LL ) /*0x100523499*/
        {
          v53 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005234b0*/
                  *(void **)(a2 + 32),
                  *(_QWORD *)(a2 + 40),
                  v78[2],
                  v78[3],
                  1);
          if ( v53 ) /*0x1005234b8*/
          {
            codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::ha681b9e9a2d8503c( /*0x1005234c8*/
              v78,
              v53,
              v52);
            goto LABEL_85; /*0x1005234cd*/
          }
          if ( v48 ) /*0x1005236c6*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1005236d3*/
        }
        v21 = v48 != 0x8000000000000000LL; /*0x1005236e5*/
        goto LABEL_13; /*0x1005236e9*/
      case 1u: /*0x100522cb3*/
        if ( (_BYTE)v70 /*0x100522e90*/
          && (v26 = v76,
              v27 = v77,
              std::sys::fs::metadata::h32fa16d3052ea535(v78, v76, v77),
              v28 = v78[0],
              core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
                v78[0],
                v78[1]),
              !v28) )
        {
          v46 = codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::hdafbced71039cf9f( /*0x100523340*/
                  v78,
                  v26,
                  v27,
                  (__int64)"router unlockrouter unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
                  13);
          v47 = v78[0]; /*0x100523345*/
          v48 = v78[1]; /*0x10052334c*/
          v49 = v78[2]; /*0x100523353*/
          v50 = v78[3]; /*0x10052335a*/
          if ( v78[0] != 11 ) /*0x100523365*/
          {
LABEL_77:
            a1[11] = v78[11]; /*0x1005234d2*/
            a1[10] = v78[10]; /*0x1005234de*/
            a1[9] = v78[9]; /*0x1005234e6*/
            a1[8] = v78[8]; /*0x1005234f1*/
            a1[7] = v78[7]; /*0x1005234fc*/
            a1[6] = v78[6]; /*0x100523507*/
            v54 = v78[4]; /*0x10052350b*/
            a1[5] = v78[5]; /*0x100523519*/
            a1[4] = v54; /*0x10052351d*/
            a1[2] = v49; /*0x100523521*/
            a1[3] = v50; /*0x100523525*/
            *a1 = v47; /*0x100523529*/
            a1[1] = v48; /*0x10052352c*/
            goto LABEL_62; /*0x100523530*/
          }
          if ( v78[1] == 0x8000000000000000LL ) /*0x100523378*/
          {
            codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x10052339a*/
              v78,
              *(void **)(a2 + 32),
              *(_QWORD *)(a2 + 40),
              (__int64)"router unlock auth.jsonrouter unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
              23);
            if ( LODWORD(v78[0]) != 11 ) /*0x1005233a6*/
            {
LABEL_61:
              qmemcpy(a1, v78, 0x60u); /*0x1005233bf*/
              goto LABEL_62; /*0x1005233bf*/
            }
            v21 = 1; /*0x1005233a8*/
          }
          else
          {
            v59 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100523607*/
                    *(void **)(a2 + 32),
                    *(_QWORD *)(a2 + 40),
                    v78[2],
                    v78[3],
                    1);
            if ( v59 ) /*0x10052360f*/
            {
              codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h7a4936d6dd5d9718( /*0x10052361f*/
                v78,
                v59,
                v46);
LABEL_85:
              qmemcpy(a1, v78, 0x60u); /*0x100523633*/
              if ( v48 ) /*0x100523639*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x10052364a*/
LABEL_62:
              if ( v63 ) /*0x1005233cc*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x1005233da*/
              v17 = v66; /*0x1005233df*/
              if ( v66 ) /*0x1005233e9*/
              {
                v16 = v67; /*0x1005233eb*/
                goto LABEL_66; /*0x1005233eb*/
              }
              goto LABEL_67; /*0x1005233e9*/
            }
            v21 = 1; /*0x1005236a2*/
            if ( v48 ) /*0x1005236a8*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1005236b9*/
          }
        }
        else
        {
          v29 = *(void **)(a2 + 32); /*0x100522e96*/
          v30 = *(_QWORD *)(a2 + 40); /*0x100522e9a*/
          std::sys::fs::metadata::h32fa16d3052ea535(v78, v29, v30); /*0x100522eab*/
          v31 = v78[0]; /*0x100522eb0*/
          core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100522ec1*/
            v78[0],
            v78[1]);
          v21 = 1; /*0x100522ec6*/
          if ( !v31 ) /*0x100522ecc*/
          {
            v32 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v29, v30); /*0x100522ed8*/
            if ( v32 ) /*0x100522ee0*/
            {
              v71 = v32; /*0x100522ee6*/
              v72 = (__int64)&v71; /*0x100522ef4*/
              v73 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100522f02*/
              alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017C13D7, &v72); /*0x100522f1e*/
              v72 = v78[0]; /*0x100522f31*/
              v73 = (__int64 (__fastcall *)(_QWORD, _QWORD))v78[1]; /*0x100522f38*/
              v74 = v78[2]; /*0x100522f46*/
              if ( (v71 & 3) == 1 ) /*0x100522f5c*/
              {
                v33 = v71 - 1; /*0x100522f5e*/
                v34 = *(_QWORD *)(v71 - 1); /*0x100522f62*/
                v35 = *(_QWORD *)(v71 + 7); /*0x100522f66*/
                if ( *(_QWORD *)v35 ) /*0x100522f6a*/
                  (*(void (__fastcall **)(__int64, double))v35)(v34, v5); /*0x100522f76*/
                v36 = *(_QWORD *)(v35 + 8); /*0x100522f78*/
                if ( v36 ) /*0x100522f80*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v36, *(_QWORD *)(v35 + 16)); /*0x100522f8a*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 24, 8); /*0x100522f9c*/
              }
              a1[3] = v74; /*0x100522fa8*/
              v37 = v72; /*0x100522fac*/
              a1[2] = (__int64)v73; /*0x100522fba*/
              a1[1] = v37; /*0x100522fbe*/
              *a1 = 10; /*0x100522fc2*/
              goto LABEL_62; /*0x100522fc9*/
            }
          }
        }
LABEL_13:
        v22 = v76; /*0x100522d00*/
        codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x100522d25*/
          v78,
          v76,
          (size_t)v77,
          (__int64)"router unlock auth backuprouter unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
          25);
        if ( LODWORD(v78[0]) == 11 ) /*0x100522d31*/
        {
          codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x100522d59*/
            v78,
            v61,
            v62,
            (__int64)"router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
            25);
          if ( LODWORD(v78[0]) == 11 ) /*0x100522d65*/
          {
            *((_BYTE *)a1 + 8) = v21; /*0x100522d6b*/
            *a1 = 11; /*0x100522d6f*/
            if ( v63 ) /*0x100522d80*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v63, 1); /*0x100522d8e*/
            if ( v66 ) /*0x100522d9d*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x100522dab*/
            v23 = v75; /*0x100522db0*/
            if ( v75 ) /*0x100522dba*/
            {
              v24 = v22; /*0x100522dc5*/
              goto LABEL_69; /*0x100522dc8*/
            }
            goto LABEL_70; /*0x100522dba*/
          }
        }
        goto LABEL_61; /*0x100522d65*/
      case 2u: /*0x100522cb3*/
LABEL_12:
        v21 = 0; /*0x100522cfd*/
        goto LABEL_13; /*0x100522cfd*/
      case 3u: /*0x100522cb3*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100523099*/
        {
          v78[6] = 2; /*0x10052309f*/
          v78[7] = (__int64)"codexmate_lib::core::relay::router_unlock_auth"; /*0x1005230b1*/
          v78[8] = 46; /*0x1005230b8*/
          v78[10] = (__int64)"[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving marker + backup for later cleanuporphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup"; /*0x1005230ca*/
          v78[11] = 197; /*0x1005230ce*/
          v78[0] = 0; /*0x1005230d6*/
          v78[1] = (__int64)"codexmate_lib::core::relay::router_unlock_auth"; /*0x1005230e1*/
          v78[2] = 46; /*0x1005230e8*/
          v78[3] = 0; /*0x1005230f3*/
          v78[4] = (__int64)"src/core/relay/router_unlock_auth.rs"; /*0x100523105*/
          v78[5] = 36; /*0x10052310c*/
          v78[9] = 0x14400000001LL; /*0x100523121*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v72, v78); /*0x100523133*/
        }
        *((_BYTE *)a1 + 8) = 0; /*0x100523138*/
        *a1 = 11; /*0x10052313c*/
        goto LABEL_62; /*0x100523143*/
    }
  }
  switch ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2) ) /*0x100522b30*/
  {
    case 0u: /*0x100522b30*/
      v6 = v76; /*0x100522b32*/
      v7 = v77; /*0x100522b39*/
      std::sys::fs::metadata::h32fa16d3052ea535(v78, v76, v77); /*0x100522b4d*/
      v8 = v78[0]; /*0x100522b52*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100522b63*/
        v78[0],
        v78[1]);
      if ( v8 ) /*0x100522b6b*/
        goto LABEL_22; /*0x100522b6b*/
      v9 = codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::hdafbced71039cf9f( /*0x100522b8b*/
             v78,
             v6,
             v7,
             (__int64)"orphaned missing-authorphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
             21);
      v10 = v78[0]; /*0x100522b90*/
      v11 = v78[1]; /*0x100522b97*/
      v12 = v78[2]; /*0x100522b9e*/
      v13 = v78[3]; /*0x100522ba5*/
      if ( v78[0] != 11 ) /*0x100522bb0*/
        goto LABEL_79; /*0x100522bb0*/
      v79 = v78[2]; /*0x100522bb6*/
      if ( v78[1] == 0x8000000000000000LL ) /*0x100522bc7*/
        goto LABEL_89; /*0x100522bc7*/
      v14 = v79; /*0x100522bd5*/
      v15 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100522be2*/
              *(void **)(a2 + 32),
              *(_QWORD *)(a2 + 40),
              v79,
              v78[3],
              1);
      if ( !v15 ) /*0x100522bea*/
      {
        if ( v11 ) /*0x100523657*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v11, 1); /*0x100523665*/
LABEL_89:
        v25 = v11 != 0x8000000000000000LL; /*0x10052366a*/
        goto LABEL_23; /*0x10052367b*/
      }
      codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::he5cdb0de51cf5838( /*0x100522bfa*/
        v78,
        v15,
        v9);
      qmemcpy(a1, v78, 0x60u); /*0x100522c0e*/
      if ( v11 ) /*0x100522c14*/
      {
        v16 = v14; /*0x100522c1f*/
        v17 = v11; /*0x100522c22*/
        goto LABEL_66; /*0x100522c25*/
      }
      goto LABEL_67; /*0x100522c14*/
    case 1u: /*0x100522b30*/
      v6 = v76; /*0x100523148*/
      v7 = v77; /*0x10052314f*/
      std::sys::fs::metadata::h32fa16d3052ea535(v78, v76, v77); /*0x100523163*/
      v38 = v78[0]; /*0x100523168*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x100523179*/
        v78[0],
        v78[1]);
      if ( v38 ) /*0x100523181*/
      {
        v39 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(*(void **)(a2 + 32), *(_QWORD *)(a2 + 40)); /*0x10052318f*/
        if ( v39 ) /*0x100523197*/
        {
          v72 = v39; /*0x10052319d*/
          v63 = &v72; /*0x1005231ab*/
          v64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1005231b9*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v78, &unk_1017C13A4, &v63); /*0x1005231d5*/
          v63 = (__int64 *)v78[0]; /*0x1005231e8*/
          v64 = (__int64 (__fastcall *)(_QWORD, _QWORD))v78[1]; /*0x1005231ef*/
          v65 = v78[2]; /*0x1005231fd*/
          if ( (v72 & 3) == 1 ) /*0x100523213*/
          {
            v40 = v72 - 1; /*0x100523215*/
            v41 = *(_QWORD *)(v72 - 1); /*0x100523219*/
            v42 = *(_QWORD *)(v72 + 7); /*0x10052321d*/
            if ( *(_QWORD *)v42 ) /*0x100523221*/
              (*(void (__fastcall **)(__int64, double))v42)(v41, v5); /*0x10052322d*/
            v43 = *(_QWORD *)(v42 + 8); /*0x10052322f*/
            if ( v43 ) /*0x100523237*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x100523241*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24, 8); /*0x100523253*/
          }
          a1[3] = v65; /*0x10052325f*/
          v44 = v63; /*0x100523263*/
          a1[2] = (__int64)v64; /*0x100523271*/
          a1[1] = (__int64)v44; /*0x100523275*/
          *a1 = 10; /*0x100523279*/
          goto LABEL_67; /*0x100523280*/
        }
        goto LABEL_55; /*0x100523197*/
      }
      v45 = codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup::hdafbced71039cf9f( /*0x10052329f*/
              v78,
              v6,
              v7,
              (__int64)"orphaned",
              8);
      v10 = v78[0]; /*0x1005232a4*/
      v11 = v78[1]; /*0x1005232ab*/
      v13 = v78[3]; /*0x1005232b9*/
      if ( v78[0] == 11 ) /*0x1005232c4*/
      {
        if ( v78[1] != 0x8000000000000000LL ) /*0x1005232d7*/
        {
          v56 = *(void **)(a2 + 32); /*0x10052359b*/
          v57 = *(_QWORD *)(a2 + 40); /*0x10052359f*/
          v79 = v78[2]; /*0x1005235a3*/
          v58 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1005235ad*/
                  v56,
                  v57,
                  v78[2],
                  v78[3],
                  1);
          if ( v58 ) /*0x1005235b5*/
          {
            codexmate_lib::core::relay::router_unlock_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h57910c92755c24af( /*0x1005235c5*/
              v78,
              v58,
              v45);
            qmemcpy(a1, v78, 0x60u); /*0x1005235d9*/
            if ( v11 ) /*0x1005235df*/
            {
              v16 = v79; /*0x1005235ea*/
              v17 = v11; /*0x1005235ee*/
LABEL_66:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v17, 1); /*0x1005233f7*/
            }
            goto LABEL_67; /*0x1005233f7*/
          }
          v25 = 1; /*0x100523680*/
          if ( v11 ) /*0x100523686*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v11, 1); /*0x100523698*/
          goto LABEL_23; /*0x10052369d*/
        }
        codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x1005232f9*/
          v78,
          *(void **)(a2 + 32),
          *(_QWORD *)(a2 + 40),
          (__int64)"orphaned router unlock auth.jsonorphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
          32);
        if ( LODWORD(v78[0]) != 11 ) /*0x100523305*/
        {
LABEL_56:
          qmemcpy(a1, v78, 0x60u); /*0x10052331e*/
          goto LABEL_67; /*0x10052331e*/
        }
LABEL_55:
        v25 = 1; /*0x100523307*/
LABEL_23:
        codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x100522dde*/
          v78,
          v6,
          (size_t)v7,
          (__int64)"orphaned router unlock auth backuporphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
          34);
        if ( LODWORD(v78[0]) == 11 ) /*0x100522e04*/
        {
          codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists::h84fb2392db379ae7( /*0x100522e2c*/
            v78,
            v61,
            v62,
            (__int64)"orphaned router unlock auth marker[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup",
            34);
          if ( LODWORD(v78[0]) == 11 ) /*0x100522e38*/
          {
            *((_BYTE *)a1 + 8) = v25; /*0x100522e3e*/
            *a1 = 11; /*0x100522e42*/
            goto LABEL_67; /*0x100522e49*/
          }
        }
        goto LABEL_56; /*0x100522e38*/
      }
      v12 = v78[2]; /*0x100523535*/
LABEL_79:
      a1[11] = v78[11]; /*0x100523538*/
      a1[10] = v78[10]; /*0x100523544*/
      a1[9] = v78[9]; /*0x10052354c*/
      a1[8] = v78[8]; /*0x100523557*/
      a1[7] = v78[7]; /*0x100523562*/
      a1[6] = v78[6]; /*0x10052356d*/
      v55 = v78[4]; /*0x100523571*/
      a1[5] = v78[5]; /*0x10052357f*/
      a1[4] = v55; /*0x100523583*/
      a1[2] = v12; /*0x100523587*/
      a1[3] = v13; /*0x10052358b*/
      *a1 = v10; /*0x10052358f*/
      a1[1] = v11; /*0x100523592*/
LABEL_67:
      v23 = v75; /*0x1005233fc*/
      if ( v75 ) /*0x100523406*/
      {
        v24 = v76; /*0x100523408*/
LABEL_69:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x100523414*/
      }
LABEL_70:
      if ( v60 ) /*0x100523423*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v61, v60, 1); /*0x100523431*/
      return a1;
    case 2u: /*0x100522b30*/
      v6 = v76; /*0x100522dcd*/
      v7 = v77; /*0x100522dd4*/
LABEL_22:
      v25 = 0; /*0x100522ddb*/
      goto LABEL_23; /*0x100522ddb*/
    case 3u: /*0x100522b30*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100522fdc*/
      {
        v78[6] = 2; /*0x100522fe2*/
        v78[7] = (__int64)"codexmate_lib::core::relay::router_unlock_auth"; /*0x100522ff4*/
        v78[8] = 46; /*0x100522ffb*/
        v78[10] = (__int64)"[AiMaMi][router-unlock-auth] auth.json is unreadable; preserving orphan marker + backup"; /*0x10052300d*/
        v78[11] = 175; /*0x100523011*/
        v78[0] = 0; /*0x100523019*/
        v78[1] = (__int64)"codexmate_lib::core::relay::router_unlock_auth"; /*0x100523024*/
        v78[2] = 46; /*0x10052302b*/
        v78[3] = 0; /*0x100523036*/
        v78[4] = (__int64)"src/core/relay/router_unlock_auth.rs"; /*0x100523048*/
        v78[5] = 36; /*0x10052304f*/
        v78[9] = 0x10F00000001LL; /*0x100523064*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v72, v78); /*0x100523076*/
      }
      *((_BYTE *)a1 + 8) = 0; /*0x10052307b*/
      *a1 = 11; /*0x10052307f*/
      goto LABEL_67; /*0x100523086*/
  }
}