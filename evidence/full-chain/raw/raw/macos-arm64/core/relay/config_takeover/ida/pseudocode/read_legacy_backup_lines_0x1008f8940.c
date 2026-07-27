// __ZN13codexmate_lib4core5relay15config_takeover24read_legacy_backup_lines @ 0x1008f8940 | 基线 same-set
double __fastcall codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::h7a336c29ef32316f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  char *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // r14
  __int64 *v24; // r13
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 v46; // rsi
  char *v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // r14
  __int64 v51; // r13
  _QWORD *v52; // r14
  __int64 v53; // rsi
  double result; // xmm0_8
  _QWORD *v55; // r14
  __int64 v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // r14
  __int64 v59; // rsi
  __int64 v60; // r14
  unsigned __int64 v61; // r13
  _QWORD *v62; // r14
  _QWORD *v63; // rdx
  __int64 (__fastcall *v64)(); // rcx
  _QWORD *v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rdi
  unsigned __int64 v68; // rsi
  __int64 v69; // rsi
  _QWORD *v70; // r13
  __int64 v71; // r15
  __int64 v72; // rsi
  _QWORD v73[3]; // [rsp+8h] [rbp-128h] BYREF
  __int64 *v74; // [rsp+20h] [rbp-110h] BYREF
  char v75; // [rsp+28h] [rbp-108h]
  __int64 v76; // [rsp+30h] [rbp-100h] BYREF
  __int64 v77; // [rsp+38h] [rbp-F8h]
  __int64 v78; // [rsp+40h] [rbp-F0h]
  __int64 v79; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-E0h]
  unsigned __int64 v81; // [rsp+58h] [rbp-D8h]
  __int64 v82; // [rsp+60h] [rbp-D0h]
  unsigned __int64 v83; // [rsp+68h] [rbp-C8h]
  unsigned __int64 v84; // [rsp+70h] [rbp-C0h]
  __int64 v85; // [rsp+78h] [rbp-B8h]
  __int64 v86; // [rsp+80h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+88h] [rbp-A8h]
  char v88; // [rsp+90h] [rbp-A0h]
  __int64 v89; // [rsp+98h] [rbp-98h]
  char *v90; // [rsp+A0h] [rbp-90h]
  char v91; // [rsp+AFh] [rbp-81h] BYREF
  _QWORD *v92; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v93; // [rsp+B8h] [rbp-78h]
  __int64 v94; // [rsp+C0h] [rbp-70h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-68h]
  unsigned __int64 v96; // [rsp+D0h] [rbp-60h]
  __int64 v97; // [rsp+D8h] [rbp-58h]
  __int64 v98; // [rsp+E0h] [rbp-50h] BYREF
  __int64 (__fastcall *v99)(); // [rsp+E8h] [rbp-48h]
  __int64 v100; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v101; // [rsp+F8h] [rbp-38h]
  _QWORD *v102; // [rsp+100h] [rbp-30h]

  v102 = a1; /*0x1008f8954*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v76, a2, a3, &anon_155c4da9b5393270cfa7378e2b52c417_290, 34); /*0x1008f896c*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v79, v77, v78); /*0x1008f8989*/
  v4 = v80; /*0x1008f8995*/
  v89 = v79; /*0x1008f899c*/
  if ( __OFSUB__(-v79, 1) ) /*0x1008f89a3*/
  {
    if ( !(unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v80) ) /*0x1008f89b6*/
    {
      v42 = v102; /*0x1008f8d00*/
      v102[1] = 0; /*0x1008f8d04*/
      v42[2] = 8; /*0x1008f8d0c*/
      v42[3] = 0; /*0x1008f8d14*/
      *v42 = 11; /*0x1008f8d1c*/
      if ( (v4 & 3) != 1 ) /*0x1008f8d2b*/
        goto LABEL_111; /*0x1008f8d2b*/
      v43 = v4 - 1; /*0x1008f8d31*/
      v44 = *(_QWORD *)(v4 - 1); /*0x1008f8d35*/
      v45 = *(_QWORD *)(v4 + 7); /*0x1008f8d39*/
      if ( *(_QWORD *)v45 ) /*0x1008f8d3d*/
        (*(void (__fastcall **)(__int64))v45)(v44); /*0x1008f8d48*/
      v46 = *(_QWORD *)(v45 + 8); /*0x1008f8d4a*/
      if ( v46 ) /*0x1008f8d51*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, v46, *(_QWORD *)(v45 + 16)); /*0x1008f8d5a*/
      v11 = 24; /*0x1008f8d5f*/
      v12 = 8; /*0x1008f8d64*/
      v47 = (char *)v43; /*0x1008f8d69*/
      goto LABEL_110; /*0x1008f8d6c*/
    }
    v92 = (_QWORD *)v4; /*0x1008f89bc*/
    v98 = (__int64)&v92; /*0x1008f89c4*/
    v99 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1008f89cf*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v73, &unk_1017C7391, &v98); /*0x1008f89e5*/
    v5 = v102; /*0x1008f89f1*/
    v102[3] = v73[2]; /*0x1008f89f5*/
    v6 = v73[0]; /*0x1008f89f9*/
    v5[2] = v73[1]; /*0x1008f8a07*/
    v5[1] = v6; /*0x1008f8a0b*/
    *v5 = 10; /*0x1008f8a0f*/
    if ( ((unsigned __int8)v92 & 3) != 1 ) /*0x1008f8a22*/
      goto LABEL_111; /*0x1008f8a22*/
    v7 = (char *)v92 - 1; /*0x1008f8a28*/
    v8 = *(_QWORD *)((char *)v92 - 1); /*0x1008f8a2c*/
    v9 = *(_QWORD *)((char *)v92 + 7); /*0x1008f8a30*/
    if ( *(_QWORD *)v9 ) /*0x1008f8a34*/
      (*(void (__fastcall **)(__int64))v9)(v8); /*0x1008f8a40*/
    v10 = *(_QWORD *)(v9 + 8); /*0x1008f8a42*/
    if ( v10 ) /*0x1008f8a4a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v10, *(_QWORD *)(v9 + 16)); /*0x1008f8a54*/
    v11 = 24; /*0x1008f8a59*/
    v12 = 8; /*0x1008f8a5e*/
LABEL_109:
    v47 = v7; /*0x1008f9298*/
LABEL_110:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v11, v12); /*0x1008f929b*/
    goto LABEL_111; /*0x1008f929b*/
  }
  v13 = 0x8000000000000000LL; /*0x1008f8a68*/
  v14 = v81; /*0x1008f8a72*/
  v82 = v80; /*0x1008f8a79*/
  v83 = v81; /*0x1008f8a80*/
  v84 = 0; /*0x1008f8a87*/
  v85 = 0; /*0x1008f8a92*/
  v86 = v80; /*0x1008f8a9d*/
  v87 = v81; /*0x1008f8aa4*/
  v79 = 0; /*0x1008f8aab*/
  v80 = 1; /*0x1008f8ab6*/
  v81 = 0; /*0x1008f8ac1*/
  v88 = 0x80; /*0x1008f8acc*/
  v90 = (char *)v4; /*0x1008f8ad6*/
  if ( !v83 ) /*0x1008f8add*/
  {
LABEL_14:
    v98 = 5; /*0x1008f8b17*/
    v20 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v79, &v98); /*0x1008f8b2a*/
LABEL_101:
    v60 = v20; /*0x1008f918e*/
    v61 = 0x8000000000000000LL; /*0x1008f919b*/
    goto LABEL_102; /*0x1008f919b*/
  }
  v15 = -(__int64)v14; /*0x1008f8adf*/
  v16 = 1; /*0x1008f8ae2*/
  v17 = 0x100002600LL; /*0x1008f8ae7*/
  while ( 1 ) /*0x1008f8af1*/
  {
    v18 = *(unsigned __int8 *)(v4 + v16 - 1); /*0x1008f8af1*/
    if ( v18 > 0x20 || !_bittest64(&v17, v18) ) /*0x1008f8afc*/
      break; /*0x1008f8afc*/
    v84 = v16; /*0x1008f8b02*/
    v19 = v15 + v16++ + 1; /*0x1008f8b09*/
    if ( v19 == 1 ) /*0x1008f8b15*/
      goto LABEL_14; /*0x1008f8b15*/
  }
  if ( (_DWORD)v18 != 91 ) /*0x1008f8b37*/
  {
    if ( (_DWORD)v18 != 123 ) /*0x1008f8b40*/
    {
      v51 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::he849ce64b4cb8cbf(&v79, &v91, &unk_10196F078); /*0x1008f904d*/
LABEL_100:
      v20 = serde_json::error::Error::fix_position::h284fb95b94477b8f(v51, &v79); /*0x1008f917f*/
      goto LABEL_101; /*0x1008f9189*/
    }
    v88 = 127; /*0x1008f8b46*/
    v84 = v16; /*0x1008f8b4d*/
    v74 = &v79; /*0x1008f8b54*/
    v75 = 1; /*0x1008f8b5b*/
    while ( 2 ) /*0x1008f8b62*/
    {
      _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::hb6b53accb71a41fc( /*0x1008f8b62*/
        &v98,
        &v74,
        v18,
        v16,
        v3);
      if ( (_BYTE)v98 != 1 ) /*0x1008f8b76*/
      {
        if ( BYTE1(v98) == 1 ) /*0x1008f8b80*/
        {
          v23 = v74; /*0x1008f8b86*/
          v24 = v74 + 3; /*0x1008f8b8d*/
          ++v74[5]; /*0x1008f8b91*/
          v23[2] = 0; /*0x1008f8b95*/
          _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x1008f8ba7*/
            &v98,
            v24,
            v23,
            v21,
            v22);
          v25 = (__int64)v99; /*0x1008f8bb0*/
          if ( (_DWORD)v98 == 2 ) /*0x1008f8bb4*/
            goto LABEL_67; /*0x1008f8bb4*/
          if ( v100 != 5 || *(_DWORD *)v99 ^ 0x656E696C | *((unsigned __int8 *)v99 + 4) ^ 0x73 ) /*0x1008f8bd5*/
          {
            v26 = v23[4]; /*0x1008f8bd9*/
            v27 = v23[5]; /*0x1008f8bdd*/
            if ( v27 < v26 ) /*0x1008f8be4*/
            {
              v28 = *v24; /*0x1008f8bea*/
              v29 = v27 + 1; /*0x1008f8bee*/
              v30 = -(__int64)v26; /*0x1008f8bf1*/
              while ( 1 ) /*0x1008f8bf4*/
              {
                v31 = *(unsigned __int8 *)(v28 + v29 - 1); /*0x1008f8bf4*/
                if ( v31 > 0x3A ) /*0x1008f8bfd*/
                  goto LABEL_80; /*0x1008f8bfd*/
                v32 = 0x100002600LL; /*0x1008f8c03*/
                if ( !_bittest64(&v32, v31) ) /*0x1008f8c0d*/
                  break; /*0x1008f8c0d*/
                v23[5] = v29; /*0x1008f8c13*/
                v33 = v30 + v29++ + 1; /*0x1008f8c17*/
                if ( v33 == 1 ) /*0x1008f8c23*/
                  goto LABEL_50; /*0x1008f8c23*/
              }
              if ( v31 != 58 ) /*0x1008f8c34*/
              {
LABEL_80:
                v95 = v13; /*0x1008f8ff5*/
                v96 = v101; /*0x1008f8ffd*/
                v97 = v4; /*0x1008f9001*/
                v98 = 6; /*0x1008f9005*/
                v48 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v23, &v98); /*0x1008f9014*/
                goto LABEL_51; /*0x1008f9019*/
              }
              v23[5] = v29; /*0x1008f8c3a*/
              v25 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::ha00ea1169242c27a(v23, 58, v28, v30); /*0x1008f8c46*/
              if ( !v25 ) /*0x1008f8c4c*/
                continue; /*0x1008f8c4c*/
LABEL_67:
              v95 = v13; /*0x1008f8ec5*/
              v96 = v101; /*0x1008f8ed0*/
              v97 = v4; /*0x1008f8ed4*/
              v49 = 0x8000000000000000LL; /*0x1008f8ee2*/
              if ( v13 == 0x8000000000000000LL ) /*0x1008f8ee8*/
                goto LABEL_87; /*0x1008f8ee8*/
              goto LABEL_70; /*0x1008f8ee8*/
            }
LABEL_50:
            v95 = v13; /*0x1008f8da3*/
            v96 = v101; /*0x1008f8dab*/
            v97 = v4; /*0x1008f8daf*/
            v98 = 3; /*0x1008f8db3*/
            v48 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v23, &v98); /*0x1008f8dc2*/
LABEL_51:
            v25 = v48; /*0x1008f8dc7*/
            v49 = 0x8000000000000000LL; /*0x1008f8dd7*/
            if ( v13 == 0x8000000000000000LL ) /*0x1008f8ddd*/
            {
LABEL_87:
              ++v88; /*0x1008f90cc*/
              v98 = v49; /*0x1008f90d2*/
              v99 = (__int64 (__fastcall *)())v25; /*0x1008f90d6*/
              v100 = v4; /*0x1008f90da*/
              v51 = serde_json::de::Deserializer$LT$R$GT$::end_map::h3ebe27c2713f8283(&v79); /*0x1008f90ea*/
              v101 = v49; /*0x1008f90f7*/
              if ( v49 == 0x8000000000000000LL ) /*0x1008f90fe*/
              {
                if ( v51 ) /*0x1008f9103*/
                {
                  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v51); /*0x1008f9108*/
                  goto LABEL_90; /*0x1008f9108*/
                }
                goto LABEL_91; /*0x1008f9103*/
              }
              if ( v51 ) /*0x1008f9127*/
              {
                if ( v4 ) /*0x1008f9130*/
                {
                  v58 = (_QWORD *)(v25 + 8); /*0x1008f9132*/
                  do /*0x1008f9147*/
                  {
                    v59 = *(v58 - 1); /*0x1008f9149*/
                    if ( v59 ) /*0x1008f9150*/
                      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v59, 1); /*0x1008f915a*/
                    v58 += 3; /*0x1008f9140*/
                    --v4; /*0x1008f9144*/
                  }
                  while ( v4 ); /*0x1008f9147*/
                }
LABEL_98:
                if ( v101 ) /*0x1008f9168*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24 * v101, 8); /*0x1008f917a*/
                goto LABEL_100; /*0x1008f917a*/
              }
              goto LABEL_114; /*0x1008f9127*/
            }
LABEL_70:
            if ( v4 ) /*0x1008f8f20*/
              goto LABEL_71; /*0x1008f8f20*/
            goto LABEL_84; /*0x1008f8f20*/
          }
          if ( v13 != 0x8000000000000000LL ) /*0x1008f8c64*/
          {
            v95 = v13; /*0x1008f9055*/
            v96 = v101; /*0x1008f905d*/
            v97 = v4; /*0x1008f9061*/
            v92 = &anon_155c4da9b5393270cfa7378e2b52c417_293; /*0x1008f906c*/
            v93 = 5; /*0x1008f9070*/
            v98 = (__int64)&v92; /*0x1008f907c*/
            v99 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f9087*/
            v25 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_12); /*0x1008f909b*/
            if ( v4 ) /*0x1008f90a1*/
            {
LABEL_71:
              v55 = (_QWORD *)(v101 + 8); /*0x1008f8f26*/
              do /*0x1008f8f37*/
              {
                v56 = *(v55 - 1); /*0x1008f8f3d*/
                if ( v56 ) /*0x1008f8f44*/
                  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1); /*0x1008f8f4e*/
                v55 += 3; /*0x1008f8f30*/
                --v4; /*0x1008f8f34*/
              }
              while ( v4 ); /*0x1008f8f37*/
            }
LABEL_84:
            if ( v13 ) /*0x1008f90aa*/
              result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, 24 * v13, 8); /*0x1008f90bd*/
            goto LABEL_86; /*0x1008f90bd*/
          }
          v34 = v23[4]; /*0x1008f8c6a*/
          v35 = v23[5]; /*0x1008f8c6e*/
          if ( v35 < v34 ) /*0x1008f8c75*/
          {
            v36 = *v24; /*0x1008f8c7b*/
            v37 = v35 + 1; /*0x1008f8c7f*/
            v38 = -(__int64)v34; /*0x1008f8c82*/
            while ( 1 ) /*0x1008f8c85*/
            {
              v39 = *(unsigned __int8 *)(v36 + v37 - 1); /*0x1008f8c85*/
              if ( v39 > 0x3A ) /*0x1008f8c8e*/
                goto LABEL_128; /*0x1008f8c8e*/
              v40 = 0x100002600LL; /*0x1008f8c94*/
              if ( !_bittest64(&v40, v39) ) /*0x1008f8c9e*/
                break; /*0x1008f8c9e*/
              v23[5] = v37; /*0x1008f8ca4*/
              v41 = v38 + v37++ + 1; /*0x1008f8ca8*/
              if ( v41 == 1 ) /*0x1008f8cb4*/
                goto LABEL_79; /*0x1008f8cb4*/
            }
            if ( v39 != 58 ) /*0x1008f8cbf*/
            {
LABEL_128:
              v95 = 0x8000000000000000LL; /*0x1008f93c4*/
              v96 = v101; /*0x1008f93cc*/
              v97 = v4; /*0x1008f93d0*/
              v98 = 6; /*0x1008f93d4*/
              v57 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v23, &v98); /*0x1008f93e6*/
              goto LABEL_77; /*0x1008f93eb*/
            }
            v23[5] = v37; /*0x1008f8cc5*/
            _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h9c0402e2d54ecd6b( /*0x1008f8cd0*/
              &v92,
              v23);
            v25 = v93; /*0x1008f8cd9*/
            v16 = 0x8000000000000000LL; /*0x1008f8cdd*/
            if ( v92 != (_QWORD *)0x8000000000000000LL ) /*0x1008f8cea*/
            {
              v4 = v94; /*0x1008f8cf0*/
              v101 = v93; /*0x1008f8cf4*/
              v13 = (unsigned __int64)v92; /*0x1008f8cf8*/
              continue; /*0x1008f8cfb*/
            }
            v95 = 0x8000000000000000LL; /*0x1008f901e*/
            v96 = v101; /*0x1008f9026*/
            v97 = v4; /*0x1008f902a*/
            goto LABEL_86; /*0x1008f902e*/
          }
LABEL_79:
          v95 = 0x8000000000000000LL; /*0x1008f8fcc*/
          v96 = v101; /*0x1008f8fd4*/
          v97 = v4; /*0x1008f8fd8*/
          v98 = 3; /*0x1008f8fdc*/
          v57 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(v23, &v98); /*0x1008f8fee*/
        }
        else
        {
          v95 = v13; /*0x1008f8f55*/
          v25 = v101; /*0x1008f8f59*/
          v96 = v101; /*0x1008f8f5d*/
          v97 = v4; /*0x1008f8f61*/
          v49 = v13; /*0x1008f8f65*/
          if ( v13 != 0x8000000000000000LL ) /*0x1008f8f75*/
            goto LABEL_87; /*0x1008f8f75*/
          v92 = &anon_155c4da9b5393270cfa7378e2b52c417_293; /*0x1008f8f82*/
          v93 = 5; /*0x1008f8f86*/
          v98 = (__int64)&v92; /*0x1008f8f92*/
          v99 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008f8f9d*/
          v57 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h4dcfe6ec5495ca59(&anon_a8580c566d8025b0f516de1c9be9088f_8); /*0x1008f8fb6*/
        }
LABEL_77:
        v25 = v57; /*0x1008f8fbb*/
LABEL_86:
        v49 = 0x8000000000000000LL; /*0x1008f90c2*/
        goto LABEL_87; /*0x1008f90c2*/
      }
      break;
    }
    v95 = v13; /*0x1008f8ef3*/
    v96 = v101; /*0x1008f8efb*/
    v97 = v4; /*0x1008f8eff*/
    v25 = (__int64)v99; /*0x1008f8f03*/
    v49 = 0x8000000000000000LL; /*0x1008f8f11*/
    if ( v13 == 0x8000000000000000LL ) /*0x1008f8f17*/
      goto LABEL_87; /*0x1008f8f17*/
    goto LABEL_70; /*0x1008f8f17*/
  }
  v88 = 127; /*0x1008f8d71*/
  v84 = v16; /*0x1008f8d78*/
  v92 = &v79; /*0x1008f8d7f*/
  LOBYTE(v93) = 1; /*0x1008f8d83*/
  _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h13845a3b8b974982( /*0x1008f8d8f*/
    &v98,
    &v92,
    v18,
    v16,
    v3);
  if ( (_BYTE)v98 == 1 ) /*0x1008f8d98*/
  {
    v25 = (__int64)v99; /*0x1008f8d9a*/
LABEL_57:
    v50 = 0x8000000000000000LL; /*0x1008f8e33*/
    goto LABEL_58; /*0x1008f8e33*/
  }
  if ( BYTE1(v98) != 1 ) /*0x1008f8dec*/
  {
    v25 = serde_core::de::Error::invalid_length::ha846d443e92fc6f9(0, &off_10196E250, &unk_10196DFD8); /*0x1008f8e30*/
    goto LABEL_57; /*0x1008f8e30*/
  }
  _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h9c0402e2d54ecd6b( /*0x1008f8df6*/
    &v98,
    v92);
  v50 = v98; /*0x1008f8dfb*/
  v25 = (__int64)v99; /*0x1008f8dff*/
  if ( v98 == 0x8000000000000000LL ) /*0x1008f8e10*/
    v50 = 0x8000000000000000LL; /*0x1008f8e16*/
  else
    v4 = v100; /*0x1008f8fc3*/
LABEL_58:
  ++v88; /*0x1008f8e3d*/
  v98 = v50; /*0x1008f8e43*/
  v99 = (__int64 (__fastcall *)())v25; /*0x1008f8e47*/
  v100 = v4; /*0x1008f8e4b*/
  v51 = serde_json::de::Deserializer$LT$R$GT$::end_seq::h1305a2fb247a2b5c(&v79); /*0x1008f8e5b*/
  v101 = v50; /*0x1008f8e68*/
  if ( v50 == 0x8000000000000000LL ) /*0x1008f8e6f*/
  {
    if ( v51 ) /*0x1008f8e74*/
    {
      core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v51); /*0x1008f8e7d*/
LABEL_90:
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, 40, 8); /*0x1008f910d*/
    }
LABEL_91:
    v51 = v25; /*0x1008f911f*/
    goto LABEL_100; /*0x1008f9122*/
  }
  if ( v51 ) /*0x1008f8e8a*/
  {
    if ( v4 ) /*0x1008f8e93*/
    {
      v52 = (_QWORD *)(v25 + 8); /*0x1008f8e99*/
      do /*0x1008f8ea7*/
      {
        v53 = *(v52 - 1); /*0x1008f8ead*/
        if ( v53 ) /*0x1008f8eb4*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v53, 1); /*0x1008f8ebe*/
        v52 += 3; /*0x1008f8ea0*/
        --v4; /*0x1008f8ea4*/
      }
      while ( v4 ); /*0x1008f8ea7*/
    }
    goto LABEL_98; /*0x1008f8ea7*/
  }
LABEL_114:
  v61 = v101; /*0x1008f92cf*/
  v92 = (_QWORD *)v101; /*0x1008f92d3*/
  v93 = v25; /*0x1008f92d7*/
  v94 = v4; /*0x1008f92db*/
  if ( v84 >= v83 ) /*0x1008f92f0*/
  {
LABEL_119:
    v60 = v25; /*0x1008f9336*/
  }
  else
  {
    v66 = v84 + 1; /*0x1008f92fc*/
    v67 = 0x100002600LL; /*0x1008f92ff*/
    while ( 1 ) /*0x1008f9310*/
    {
      v68 = *(unsigned __int8 *)(v82 + v66 - 1); /*0x1008f9310*/
      if ( v68 > 0x20 || !_bittest64(&v67, v68) ) /*0x1008f931b*/
        break; /*0x1008f931b*/
      v84 = v66; /*0x1008f9321*/
      v69 = v66 - v83 + 1; /*0x1008f9328*/
      ++v66; /*0x1008f932d*/
      if ( v69 == 1 ) /*0x1008f9334*/
        goto LABEL_119; /*0x1008f9334*/
    }
    v98 = 22; /*0x1008f9348*/
    v60 = serde_json::de::Deserializer$LT$R$GT$::peek_error::he555b1070d31e42c(&v79, &v98); /*0x1008f9360*/
    if ( v4 ) /*0x1008f9366*/
    {
      v70 = (_QWORD *)(v25 + 8); /*0x1008f9368*/
      v71 = v4; /*0x1008f936d*/
      do /*0x1008f9379*/
      {
        v72 = *(v70 - 1); /*0x1008f937b*/
        if ( v72 ) /*0x1008f9382*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v70, v72, 1); /*0x1008f938d*/
        v70 += 3; /*0x1008f9372*/
        --v71; /*0x1008f9376*/
      }
      while ( v71 ); /*0x1008f9379*/
    }
    if ( v101 ) /*0x1008f939b*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24 * v101, 8); /*0x1008f93ad*/
    v61 = 0x8000000000000000LL; /*0x1008f93bc*/
  }
LABEL_102:
  if ( v79 ) /*0x1008f91a8*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x1008f91b6*/
  if ( v61 != 0x8000000000000000LL ) /*0x1008f91be*/
  {
    v65 = v102; /*0x1008f9269*/
    v102[1] = v61; /*0x1008f926d*/
    v65[2] = v60; /*0x1008f9271*/
    v65[3] = v4; /*0x1008f9275*/
    *v65 = 11; /*0x1008f9279*/
    v7 = v90; /*0x1008f9280*/
    v11 = v89; /*0x1008f9287*/
    if ( !v89 ) /*0x1008f9291*/
      goto LABEL_111; /*0x1008f9291*/
    goto LABEL_108; /*0x1008f9291*/
  }
  v92 = (_QWORD *)v60; /*0x1008f91c4*/
  v98 = (__int64)&v92; /*0x1008f91cc*/
  v99 = (__int64 (__fastcall *)())_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x1008f91d7*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v79, &unk_1017C73B1, &v98); /*0x1008f91ed*/
  v98 = v79; /*0x1008f9200*/
  v99 = (__int64 (__fastcall *)())v80; /*0x1008f9204*/
  v100 = v81; /*0x1008f920f*/
  v62 = v92; /*0x1008f9213*/
  v7 = v90; /*0x1008f921a*/
  core::ptr::drop_in_place$LT$serde_json..error..ErrorCode$GT$::h1f07389ad7e7b7dd(v92); /*0x1008f9221*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 40, 8); /*0x1008f9233*/
  v63 = v102; /*0x1008f9238*/
  *v102 = 9; /*0x1008f923c*/
  v64 = v99; /*0x1008f9247*/
  v63[1] = v98; /*0x1008f924b*/
  v63[2] = v64; /*0x1008f924f*/
  v63[3] = v100; /*0x1008f9257*/
  v11 = v89; /*0x1008f925b*/
  if ( v89 ) /*0x1008f9265*/
  {
LABEL_108:
    v12 = 1; /*0x1008f9293*/
    goto LABEL_109; /*0x1008f9293*/
  }
LABEL_111:
  if ( v76 ) /*0x1008f92aa*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v77, v76, 1); /*0x1008f92b8*/
  return result; /*0x1008f92bd*/
}