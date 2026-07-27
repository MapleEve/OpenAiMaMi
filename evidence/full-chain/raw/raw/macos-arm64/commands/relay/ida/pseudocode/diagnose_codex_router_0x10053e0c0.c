// __ZN13codexmate_lib8commands5relay21diagnose_codex_router @ 0x10053e0c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::relay::diagnose_codex_router::h336627d3d3c8fd78(_QWORD *__dst, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r12
  __int16 v8; // r15
  __int16 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  void *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  const void *v19; // r14
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r12
  void *v23; // rax
  __int64 v24; // rax
  void *v25; // rax
  void *v26; // rax
  char v27; // r15
  char v28; // r14
  __int16 v29; // r13
  unsigned __int64 v30; // r12
  void *v32; // rax
  void *v33; // rax
  void *v34; // rax
  _QWORD v35[93]; // [rsp+8h] [rbp-958h] BYREF
  _QWORD v36[26]; // [rsp+2F0h] [rbp-670h] BYREF
  __int64 v37; // [rsp+3C0h] [rbp-5A0h] BYREF
  __int64 v38; // [rsp+3C8h] [rbp-598h]
  __int64 v39; // [rsp+3D0h] [rbp-590h]
  __int64 v40; // [rsp+3D8h] [rbp-588h] BYREF
  _QWORD v41[33]; // [rsp+3E0h] [rbp-580h] BYREF
  _QWORD v42[50]; // [rsp+4E8h] [rbp-478h] BYREF
  _QWORD v43[20]; // [rsp+678h] [rbp-2E8h] BYREF
  _QWORD __dsta[39]; // [rsp+718h] [rbp-248h] BYREF
  __int16 v45; // [rsp+850h] [rbp-110h]
  char v46; // [rsp+852h] [rbp-10Eh]
  char v47; // [rsp+853h] [rbp-10Dh]
  char v48; // [rsp+854h] [rbp-10Ch]
  char v49; // [rsp+855h] [rbp-10Bh]
  char v50; // [rsp+856h] [rbp-10Ah]
  __int64 v51; // [rsp+858h] [rbp-108h] BYREF
  unsigned __int64 v52; // [rsp+860h] [rbp-100h]
  __int64 v53; // [rsp+868h] [rbp-F8h]
  _QWORD v54[2]; // [rsp+870h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+880h] [rbp-E0h]
  _QWORD v56[3]; // [rsp+888h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+8A0h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+8A8h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+8B0h] [rbp-B0h]
  __int64 v60; // [rsp+8B8h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+8C0h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+8C8h] [rbp-98h]
  __int64 v63; // [rsp+8D0h] [rbp-90h]
  __int64 v64; // [rsp+8D8h] [rbp-88h]
  unsigned __int64 *v65; // [rsp+8E0h] [rbp-80h] BYREF
  __int64 v66; // [rsp+8E8h] [rbp-78h]
  __int64 v67; // [rsp+8F0h] [rbp-70h]
  __int64 v68; // [rsp+8F8h] [rbp-68h]
  unsigned __int64 v69; // [rsp+900h] [rbp-60h]
  __int64 v70; // [rsp+908h] [rbp-58h]
  unsigned __int64 v71; // [rsp+910h] [rbp-50h]
  __int64 v72; // [rsp+918h] [rbp-48h]
  size_t __n; // [rsp+920h] [rbp-40h]
  void *v74; // [rsp+928h] [rbp-38h]
  __int64 v75; // [rsp+930h] [rbp-30h]

  v4 = a2[2]; /*0x10053e0e4*/
  if ( __OFSUB__(0, *(_QWORD *)(v4 + 16)) ) /*0x10053e0ea*/
  {
    codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)v35, (__int64)a2); /*0x10053e101*/
    codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(v42, v35); /*0x10053e110*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v35); /*0x10053e11c*/
    memcpy(__dsta, &v42[1], 0x120u); /*0x10053e13b*/
    if ( v42[0] != 0x8000000000000000LL ) /*0x10053e143*/
    {
      v36[2] = __dsta[2]; /*0x10053e150*/
      v36[1] = __dsta[1]; /*0x10053e165*/
      v36[0] = __dsta[0]; /*0x10053e16c*/
      memcpy(v41, &__dsta[3], sizeof(v41)); /*0x10053e186*/
      v43[2] = __dsta[2]; /*0x10053e192*/
      v38 = __dsta[0]; /*0x10053e1a7*/
      v39 = __dsta[1]; /*0x10053e1ae*/
      v40 = __dsta[2]; /*0x10053e1b5*/
      v37 = v42[0]; /*0x10053e1bc*/
      if ( v41[12] == 0x8000000000000000LL ) /*0x10053e1ca*/
      {
        v43[0] = 0x8000000000000000LL; /*0x10053e1d0*/
        goto LABEL_18; /*0x10053e1d7*/
      }
      v7 = v41[30]; /*0x10053e300*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dsta, &v41[12]); /*0x10053e30e*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v42, &v41[15]); /*0x10053e321*/
      if ( v41[18] == 0x8000000000000000LL ) /*0x10053e32d*/
      {
        __n = 0x8000000000000000LL; /*0x10053e32f*/
        if ( v41[21] == 0x8000000000000000LL ) /*0x10053e33a*/
          goto LABEL_10; /*0x10053e33a*/
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, &v41[18]); /*0x10053e364*/
        __n = v35[0]; /*0x10053e370*/
        v70 = v35[1]; /*0x10053e37b*/
        v68 = v35[2]; /*0x10053e386*/
        if ( v41[21] == 0x8000000000000000LL ) /*0x10053e391*/
        {
LABEL_10:
          v69 = 0x8000000000000000LL; /*0x10053e33c*/
          if ( v41[24] == 0x8000000000000000LL ) /*0x10053e347*/
          {
LABEL_11:
            v71 = 0x8000000000000000LL; /*0x10053e34d*/
LABEL_15:
            v8 = v41[31]; /*0x10053e40b*/
            v9 = WORD1(v41[31]); /*0x10053e416*/
            v10 = 0x8000000000000000LL; /*0x10053e41e*/
            if ( v41[27] != 0x8000000000000000LL ) /*0x10053e428*/
            {
              _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, &v41[27]); /*0x10053e438*/
              v10 = v35[0]; /*0x10053e43d*/
              v36[0] = v35[1]; /*0x10053e44b*/
              v36[1] = v35[2]; /*0x10053e459*/
            }
            v35[2] = __dsta[2]; /*0x10053e467*/
            v35[1] = __dsta[1]; /*0x10053e475*/
            v35[0] = __dsta[0]; /*0x10053e483*/
            v35[3] = v42[0]; /*0x10053e491*/
            v35[4] = v42[1]; /*0x10053e49f*/
            v35[5] = v42[2]; /*0x10053e4ad*/
            v43[16] = v36[0]; /*0x10053e4bb*/
            v43[17] = v36[1]; /*0x10053e4c9*/
            v43[5] = v42[2]; /*0x10053e4d7*/
            v43[4] = v42[1]; /*0x10053e4e5*/
            v43[3] = v42[0]; /*0x10053e4f3*/
            v43[2] = __dsta[2]; /*0x10053e501*/
            v43[1] = __dsta[1]; /*0x10053e50f*/
            v43[0] = __dsta[0]; /*0x10053e51d*/
            v43[6] = __n; /*0x10053e528*/
            v43[7] = v70; /*0x10053e533*/
            v43[8] = v68; /*0x10053e53e*/
            v43[9] = v69; /*0x10053e549*/
            v43[10] = v67; /*0x10053e554*/
            v43[11] = v64; /*0x10053e562*/
            v43[12] = v71; /*0x10053e56d*/
            v43[13] = v75; /*0x10053e578*/
            v43[14] = v74; /*0x10053e583*/
            v43[15] = v10; /*0x10053e58a*/
            v43[18] = v7; /*0x10053e591*/
            LOWORD(v43[19]) = v8; /*0x10053e598*/
            WORD1(v43[19]) = v9; /*0x10053e5a0*/
LABEL_18:
            codexmate_lib::core::relay::manager::RelayManager::codex_config_stale_reason::h90835e94b639c2f7(v56, a2); /*0x10053e5b2*/
            v58 = v39; /*0x10053e5c8*/
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(v54, &v40); /*0x10053e5dd*/
            v57 = v55; /*0x10053e5e9*/
            codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(v42); /*0x10053e5f7*/
            codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(v35, v42); /*0x10053e60a*/
            std::fs::read_to_string::inner::hcce2334f4117b5b3(v42, v35[7], v35[8]); /*0x10053e624*/
            v70 = v42[0]; /*0x10053e637*/
            if ( v42[0] == 0x8000000000000000LL ) /*0x10053e63e*/
            {
              v11 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h306501beb209f7a4( /*0x10053e64d*/
                      0x8000000000000000LL,
                      v42[1]);
              v36[0] = 0x8000000000000000LL; /*0x10053e652*/
              LOBYTE(v11) = 1; /*0x10053e659*/
              LODWORD(v71) = v11; /*0x10053e65b*/
              LODWORD(v12) = 0; /*0x10053e65e*/
              LODWORD(v68) = 0; /*0x10053e661*/
            }
            else
            {
              v60 = v42[1]; /*0x10053e682*/
              codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191( /*0x10053e689*/
                (__int64)v42,
                (__int64)v35,
                (void *)v42[1],
                v42[2]);
              v13 = memcpy(v36, v42, sizeof(v36)); /*0x10053e6a1*/
              if ( v36[0] == 0x8000000000000000LL ) /*0x10053e6ad*/
              {
                LOBYTE(v13) = 1; /*0x10053e6af*/
                LODWORD(v71) = (_DWORD)v13; /*0x10053e6b1*/
                LODWORD(v12) = 0; /*0x10053e6b4*/
                LODWORD(v68) = 0; /*0x10053e6b7*/
              }
              else
              {
                LODWORD(v12) = 0; /*0x10053e6c0*/
                if ( v36[3] != 0x8000000000000000LL && v36[5] == 6 ) /*0x10053e6d4*/
                  LOBYTE(v12) = (anon_39a6e93098609d65551b0fc4eadbbbd9_97 ^ *(_DWORD *)v36[4] /*0x10053e6f5*/
                               | *(_WORD *)(v36[4] + 4LL) ^ 0x3169) == 0;
                LODWORD(v68) = LOBYTE(v36[24]); /*0x10053e700*/
                LODWORD(v71) = 0; /*0x10053e703*/
              }
            }
            codexmate_lib::core::relay::codex_writer::user_top_level_profile::h38b499de53adc2fb(v42, v35); /*0x10053e718*/
            if ( LODWORD(v42[0]) == 11 ) /*0x10053e724*/
            {
              __dsta[0] = v42[2]; /*0x10053e734*/
              __dsta[1] = v42[3]; /*0x10053e742*/
              if ( v42[1] != 0x8000000000000001LL ) /*0x10053e750*/
              {
                v61 = v42[1]; /*0x10053e752*/
                v62 = __dsta[0]; /*0x10053e767*/
                v63 = __dsta[1]; /*0x10053e76e*/
                goto LABEL_31; /*0x10053e775*/
              }
            }
            else
            {
              core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v42); /*0x10053e77e*/
            }
            v61 = 0x8000000000000000LL; /*0x10053e783*/
LABEL_31:
            std::path::Path::_join::hb1a495d4f06b13b8(&v51, v35[73], v35[74], "codex_router_catalog.json", 25); /*0x10053e78a*/
            v14 = v53; /*0x10053e7b8*/
            v69 = v52; /*0x10053e7c6*/
            std::sys::fs::metadata::h32fa16d3052ea535(v42, v52, v53); /*0x10053e7cd*/
            v15 = v42[0]; /*0x10053e7d2*/
            v16 = v42[1]; /*0x10053e7d9*/
            v17 = v42[0]; /*0x10053e7e0*/
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x10053e7e3*/
              v42[0],
              v42[1]);
            LODWORD(v67) = v12; /*0x10053e7eb*/
            if ( (_BYTE)v15 ) /*0x10053e7ef*/
            {
              __n = 0x8000000000000000LL; /*0x10053e7f1*/
              v64 = v15; /*0x10053e7fc*/
              if ( v56[0] != 0x8000000000000000LL ) /*0x10053e803*/
                goto LABEL_55; /*0x10053e803*/
LABEL_43:
              if ( BYTE4(v41[32]) ) /*0x10053e8c6*/
              {
                if ( BYTE2(v41[11]) ) /*0x10053e8cf*/
                {
                  if ( v61 != 0x8000000000000000LL ) /*0x10053e8dc*/
                  {
                    v65 = &v61; /*0x10053ecf1*/
                    __dsta[0] = &v65; /*0x10053ecf9*/
                    __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x10053ed07*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017C1D52, __dsta); /*0x10053ed23*/
                    goto LABEL_56; /*0x10053ed28*/
                  }
                  if ( (_BYTE)v15 ) /*0x10053e8e5*/
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053e8eb*/
                    v22 = 101; /*0x10053e8f0*/
                    v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(101, 1); /*0x10053e900*/
                    if ( v23 ) /*0x10053e908*/
                    {
                      v72 = 101; /*0x10053e91a*/
                      v74 = v23; /*0x10053e923*/
                      memcpy(v23, &unk_1015FF398, 0x65u); /*0x10053e92a*/
                      v24 = 101; /*0x10053e92f*/
LABEL_59:
                      v75 = v24; /*0x10053eaad*/
                      goto LABEL_60; /*0x10053eaad*/
                    }
                  }
                  else if ( (_BYTE)v68 ) /*0x10053ed31*/
                  {
                    if ( (_BYTE)v12 ) /*0x10053ed3a*/
                    {
                      if ( v57 ) /*0x10053ed48*/
                      {
                        v42[0] = &v57; /*0x10053ed5c*/
                        v42[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10053ed6a*/
                        v42[2] = &v58; /*0x10053ed78*/
                        v42[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10053ed7f*/
                        v42[4] = &v41[11]; /*0x10053ed86*/
                        v42[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x10053ed94*/
                        alloc::fmt::format::format_inner::h3c16c74008a310d4(__dsta, &unk_1017C1CFE, v42); /*0x10053edb0*/
                        v75 = __dsta[0]; /*0x10053edbc*/
                        v74 = (void *)__dsta[1]; /*0x10053edc7*/
                        v72 = __dsta[2]; /*0x10053edd2*/
                        goto LABEL_60; /*0x10053edd6*/
                      }
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053ee77*/
                      v22 = 143; /*0x10053ee7c*/
                      v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(143, 1); /*0x10053ee8c*/
                      if ( v34 ) /*0x10053ee94*/
                      {
                        v72 = 143; /*0x10053eea2*/
                        v74 = v34; /*0x10053eeab*/
                        memcpy(v34, &unk_1015FF52A, 0x8Fu); /*0x10053eeb2*/
                        v24 = 143; /*0x10053eeb7*/
                        goto LABEL_59; /*0x10053eebc*/
                      }
                    }
                    else
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053ee29*/
                      v22 = 148; /*0x10053ee2e*/
                      v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(148, 1); /*0x10053ee3e*/
                      if ( v33 ) /*0x10053ee46*/
                      {
                        v72 = 148; /*0x10053ee58*/
                        v74 = v33; /*0x10053ee61*/
                        memcpy(v33, &unk_1015FF496, 0x94u); /*0x10053ee68*/
                        v24 = 148; /*0x10053ee6d*/
                        goto LABEL_59; /*0x10053ee72*/
                      }
                    }
                  }
                  else
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053eddb*/
                    v22 = 153; /*0x10053ede0*/
                    v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(153, 1); /*0x10053edf0*/
                    if ( v32 ) /*0x10053edf8*/
                    {
                      v72 = 153; /*0x10053ee0a*/
                      v74 = v32; /*0x10053ee13*/
                      memcpy(v32, &unk_1015FF3FD, 0x99u); /*0x10053ee1a*/
                      v24 = 153; /*0x10053ee1f*/
                      goto LABEL_59; /*0x10053ee24*/
                    }
                  }
                }
                else
                {
                  if ( v41[8] != 0x8000000000000000LL && v41[10] ) /*0x10053e99c*/
                  {
                    v65 = &v41[8]; /*0x10053e9a9*/
                    __dsta[0] = &v65; /*0x10053e9b1*/
                    __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x10053e9bf*/
                    alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017C1CB6, __dsta); /*0x10053e9db*/
LABEL_56:
                    v75 = v42[0]; /*0x10053ea41*/
                    v74 = (void *)v42[1]; /*0x10053ea53*/
                    v72 = v42[2]; /*0x10053ea5e*/
LABEL_60:
                    v27 = BYTE4(v41[32]); /*0x10053eab1*/
                    v28 = BYTE2(v41[11]); /*0x10053eab9*/
                    v29 = v41[11]; /*0x10053eac1*/
                    v30 = 0x8000000000000000LL; /*0x10053ead3*/
                    if ( v41[8] != 0x8000000000000000LL ) /*0x10053eadd*/
                    {
                      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10053eaed*/
                        v42,
                        &v41[8]);
                      v30 = v42[0]; /*0x10053eaf2*/
                      v65 = (unsigned __int64 *)v42[1]; /*0x10053eb00*/
                      v66 = v42[2]; /*0x10053eb0b*/
                    }
                    __dsta[2] = v55; /*0x10053eb16*/
                    __dsta[1] = v54[1]; /*0x10053eb2b*/
                    __dsta[0] = v54[0]; /*0x10053eb32*/
                    __dsta[9] = __n; /*0x10053eb3d*/
                    __dsta[10] = v59; /*0x10053eb4b*/
                    __dsta[11] = __n; /*0x10053eb52*/
                    __dsta[12] = v61; /*0x10053eb67*/
                    __dsta[13] = v62; /*0x10053eb6e*/
                    __dsta[14] = v63; /*0x10053eb7c*/
                    __dsta[15] = v56[0]; /*0x10053eb91*/
                    __dsta[16] = v56[1]; /*0x10053eb98*/
                    __dsta[17] = v56[2]; /*0x10053eba6*/
                    memcpy(&__dsta[18], v43, 0xA0u); /*0x10053ebc0*/
                    __dsta[3] = v75; /*0x10053ebc9*/
                    __dsta[4] = v74; /*0x10053ebd4*/
                    __dsta[5] = v72; /*0x10053ebdf*/
                    v46 = v27; /*0x10053ebe6*/
                    v47 = v28; /*0x10053ebed*/
                    v45 = v29; /*0x10053ebf4*/
                    __dsta[6] = v30; /*0x10053ebfc*/
                    __dsta[7] = v65; /*0x10053ec0b*/
                    __dsta[8] = v66; /*0x10053ec12*/
                    __dsta[38] = v58; /*0x10053ec20*/
                    v48 = v64 ^ 1; /*0x10053ec30*/
                    v49 = v67; /*0x10053ec39*/
                    v50 = v68; /*0x10053ec42*/
                    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h9653158b56e2fd46((__int64)v42, __dsta); /*0x10053ec56*/
                    memcpy(__dst, v42, 0x190u); /*0x10053ec6a*/
                    if ( v51 ) /*0x10053ec79*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v51, 1); /*0x10053ec84*/
                    if ( !(_BYTE)v71 ) /*0x10053ec8d*/
                      core::ptr::drop_in_place$LT$codexmate_lib..core..relay..invariants..RouterConfigSurface$GT$::h451ff63d780f3dd1(v36); /*0x10053ec96*/
                    if ( 2 * v70 ) /*0x10053ec9f*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, v70, 1); /*0x10053ecb8*/
                    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(v35); /*0x10053ecc4*/
                    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v37); /*0x10053ecd0*/
                    return __dst; /*0x10053ecd0*/
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053ea64*/
                  v22 = 71; /*0x10053ea69*/
                  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(71, 1); /*0x10053ea79*/
                  if ( v26 ) /*0x10053ea81*/
                  {
                    v72 = 71; /*0x10053ea93*/
                    v74 = v26; /*0x10053ea9c*/
                    memcpy(v26, &unk_1015FF351, 0x47u); /*0x10053eaa3*/
                    v24 = 71; /*0x10053eaa8*/
                    goto LABEL_59; /*0x10053eaa8*/
                  }
                }
              }
              else
              {
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v16); /*0x10053e939*/
                v22 = 66; /*0x10053e93e*/
                v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(66, 1); /*0x10053e94e*/
                if ( v25 ) /*0x10053e956*/
                {
                  v72 = 66; /*0x10053e968*/
                  v74 = v25; /*0x10053e971*/
                  memcpy(v25, &unk_1015FF30F, 0x42u); /*0x10053e978*/
                  v24 = 66; /*0x10053e97d*/
                  goto LABEL_59; /*0x10053e982*/
                }
              }
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x10053eef1*/
            }
            v18 = v69; /*0x10053e815*/
            alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v42, v69, v14); /*0x10053e81c*/
            v19 = (const void *)v42[1]; /*0x10053e821*/
            __n = v42[2]; /*0x10053e82f*/
            if ( v42[2] < 0LL ) /*0x10053e836*/
            {
              v20 = 0; /*0x10053e838*/
              goto LABEL_36; /*0x10053e838*/
            }
            if ( v42[2] ) /*0x10053e84c*/
            {
              v12 = v15; /*0x10053e84e*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v18); /*0x10053e851*/
              v20 = 1; /*0x10053e856*/
              v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10053e865*/
              if ( !v21 ) /*0x10053e86d*/
LABEL_36:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, __n); /*0x10053e83b*/
              v17 = v21; /*0x10053e86f*/
              v15 = v12; /*0x10053e872*/
              LOBYTE(v12) = v67; /*0x10053e875*/
            }
            else
            {
              v17 = 1; /*0x10053e87b*/
            }
            v59 = v17; /*0x10053e880*/
            memcpy((void *)v17, v19, __n); /*0x10053e88e*/
            v16 = v42[0]; /*0x10053e893*/
            if ( 2LL * v42[0] ) /*0x10053e89a*/
            {
              v17 = (__int64)v19; /*0x10053e9e7*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v42[0], 1); /*0x10053e9ea*/
              v64 = v15; /*0x10053e9f6*/
              if ( v56[0] == 0x8000000000000000LL ) /*0x10053e9fd*/
                goto LABEL_43; /*0x10053e9fd*/
            }
            else
            {
              v64 = v15; /*0x10053e8b2*/
              if ( v56[0] == 0x8000000000000000LL ) /*0x10053e8b9*/
                goto LABEL_43; /*0x10053e8b9*/
            }
LABEL_55:
            v65 = v56; /*0x10053ea03*/
            __dsta[0] = &v65; /*0x10053ea12*/
            __dsta[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x10053ea20*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017C1DF3, __dsta); /*0x10053ea3c*/
            goto LABEL_56; /*0x10053ea3c*/
          }
LABEL_14:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, &v41[24]); /*0x10053e3d7*/
          v71 = v35[0]; /*0x10053e3f1*/
          v75 = v35[1]; /*0x10053e3fc*/
          v74 = (void *)v35[2]; /*0x10053e407*/
          goto LABEL_15; /*0x10053e407*/
        }
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v35, &v41[21]); /*0x10053e3a1*/
      v69 = v35[0]; /*0x10053e3ad*/
      v67 = v35[1]; /*0x10053e3b8*/
      v64 = v35[2]; /*0x10053e3c3*/
      if ( v41[24] == 0x8000000000000000LL ) /*0x10053e3d1*/
        goto LABEL_11; /*0x10053e3d1*/
      goto LABEL_14; /*0x10053e3d1*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v35[1], v4 + 16); /*0x10053e1e7*/
    v35[0] = 9; /*0x10053e1ec*/
    qmemcpy(__dsta, v35, 0x60u); /*0x10053e20a*/
  }
  qmemcpy(v35, __dsta, 0x60u); /*0x10053e223*/
  v37 = 0; /*0x10053e226*/
  v38 = 1; /*0x10053e231*/
  v39 = 0; /*0x10053e23c*/
  v42[2] = 1610612768; /*0x10053e247*/
  v42[0] = &v37; /*0x10053e259*/
  v42[1] = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10053e267*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10053e278*/
                          v35,
                          v42) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053eee2*/
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v51,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  v36[0] = v37; /*0x10053e293*/
  v36[1] = v38; /*0x10053e29a*/
  v36[2] = v39; /*0x10053e2a8*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dsta); /*0x10053e2b6*/
  v43[2] = v36[2]; /*0x10053e2c2*/
  v5 = v36[0]; /*0x10053e2c9*/
  v6 = v36[1]; /*0x10053e2d0*/
  v43[1] = v36[1]; /*0x10053e2d7*/
  v43[0] = v36[0]; /*0x10053e2de*/
  __dst[3] = v36[2]; /*0x10053e2e5*/
  __dst[2] = v6; /*0x10053e2e9*/
  __dst[1] = v5; /*0x10053e2ed*/
  *__dst = 0x8000000000000000LL; /*0x10053e2f1*/
  return __dst; /*0x10053ecd8*/
}