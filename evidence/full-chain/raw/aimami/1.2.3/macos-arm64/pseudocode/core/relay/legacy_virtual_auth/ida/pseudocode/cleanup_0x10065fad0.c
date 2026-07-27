// __ZN13codexmate_lib4core5relay19legacy_virtual_auth7cleanup @ 0x10065fad0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h4e431c2ba7f134fc(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  double v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  size_t v10; // r14
  char v11; // bl
  __int64 v12; // rcx
  int v13; // edx
  size_t v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  bool v33; // r14
  _BYTE *v34; // rax
  bool v35; // r13
  bool v36; // r14
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 *v49; // rax
  __int64 v50; // r14
  __int64 v51; // r12
  __int64 v52; // r14
  __int64 v53; // r12
  __int64 v54; // rbx
  __int64 v55; // rsi
  double v56; // xmm0_8
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // r12
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // rsi
  char v66; // bl
  void *v67; // r14
  __int64 v68; // rsi
  void *v69; // rdi
  double v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // [rsp+8h] [rbp-158h] BYREF
  void *v75; // [rsp+10h] [rbp-150h]
  size_t v76; // [rsp+18h] [rbp-148h]
  __int64 v77; // [rsp+20h] [rbp-140h] BYREF
  __int64 v78; // [rsp+28h] [rbp-138h]
  __int64 v79; // [rsp+30h] [rbp-130h]
  __int64 v80; // [rsp+38h] [rbp-128h] BYREF
  void *v81; // [rsp+40h] [rbp-120h]
  size_t v82; // [rsp+48h] [rbp-118h]
  _DWORD v83[2]; // [rsp+50h] [rbp-110h]
  __int64 *v84; // [rsp+58h] [rbp-108h] BYREF
  __int64 (__fastcall *v85)(_QWORD, _QWORD); // [rsp+60h] [rbp-100h]
  __int64 v86; // [rsp+68h] [rbp-F8h]
  __int64 v87; // [rsp+70h] [rbp-F0h]
  void *__s2; // [rsp+78h] [rbp-E8h]
  _QWORD v89[19]; // [rsp+80h] [rbp-E0h] BYREF
  size_t v90; // [rsp+118h] [rbp-48h]
  void *__src; // [rsp+120h] [rbp-40h]
  __int64 v92; // [rsp+128h] [rbp-38h]
  __int64 v93; // [rsp+130h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 584); /*0x10065faea*/
  v5 = *(_QWORD *)(a2 + 592); /*0x10065faf1*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v74, v4, v5, "virtual-auth-marker.json", 24); /*0x10065fb12*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v80, v4, v5, &unk_1016028F5, 26); /*0x10065fb31*/
  v6 = codexmate_lib::core::relay::legacy_virtual_auth::read_marker::hf0b1311d546014fd(v89, v4, v5); /*0x10065fb43*/
  v7 = v89[0]; /*0x10065fb48*/
  v8 = v89[1]; /*0x10065fb4f*/
  v9 = v89[2]; /*0x10065fb56*/
  v10 = v89[3]; /*0x10065fb5d*/
  v11 = v89[4]; /*0x10065fb64*/
  v83[0] = *(_DWORD *)((char *)&v89[4] + 1); /*0x10065fb71*/
  *(_DWORD *)((char *)v83 + 3) = HIDWORD(v89[4]); /*0x10065fb7d*/
  if ( v89[0] != 11 ) /*0x10065fb87*/
  {
    a1[11] = v89[11]; /*0x10065fbb8*/
    a1[10] = v89[10]; /*0x10065fbc3*/
    a1[9] = v89[9]; /*0x10065fbce*/
    a1[8] = v89[8]; /*0x10065fbd9*/
    a1[7] = v89[7]; /*0x10065fbe4*/
    v12 = v89[5]; /*0x10065fbe8*/
    a1[6] = v89[6]; /*0x10065fbf6*/
    a1[5] = v12; /*0x10065fbfa*/
    a1[2] = v9; /*0x10065fbfe*/
    a1[3] = v10; /*0x10065fc02*/
    *((_BYTE *)a1 + 32) = v11; /*0x10065fc06*/
    v13 = *(_DWORD *)((char *)v83 + 3); /*0x10065fc10*/
    *(_DWORD *)((char *)a1 + 33) = v83[0]; /*0x10065fc16*/
    *((_DWORD *)a1 + 9) = v13; /*0x10065fc1a*/
    *a1 = v7; /*0x10065fc1e*/
    a1[1] = v8; /*0x10065fc21*/
    goto LABEL_92; /*0x10065fc25*/
  }
  __s2 = (void *)v89[2]; /*0x10065fb89*/
  v93 = v89[1]; /*0x10065fb90*/
  if ( __OFSUB__(-v89[1], 1) ) /*0x10065fb97*/
  {
    *((_BYTE *)a1 + 8) = 0; /*0x10065fba0*/
    *a1 = 11; /*0x10065fba5*/
LABEL_92:
    v68 = v80; /*0x100660434*/
    if ( !v80 ) /*0x10066043e*/
      goto LABEL_95; /*0x10066043e*/
    v69 = v81; /*0x100660440*/
    goto LABEL_94; /*0x100660440*/
  }
  v14 = *(_QWORD *)(a2 + 40); /*0x10065fc2f*/
  __src = *(void **)(a2 + 32); /*0x10065fc3b*/
  v90 = v14; /*0x10065fc3f*/
  std::sys::fs::metadata::h32fa16d3052ea535(v89, __src, v14); /*0x10065fc43*/
  if ( LOBYTE(v89[0]) ) /*0x10065fc59*/
  {
    if ( (v89[1] & 3) == 1 ) /*0x10065fc6a*/
    {
      v92 = v89[1] - 1LL; /*0x10065fc74*/
      v15 = *(_QWORD *)(v89[1] - 1LL); /*0x10065fc78*/
      v16 = *(_QWORD *)(v89[1] + 7LL); /*0x10065fc7c*/
      if ( *(_QWORD *)v16 ) /*0x10065fc80*/
        (*(void (__fastcall **)(__int64, double))v16)(v15, v6); /*0x10065fc8c*/
      v17 = *(_QWORD *)(v16 + 8); /*0x10065fc8e*/
      if ( v17 ) /*0x10065fc96*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x10065fca0*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, 24, 8); /*0x10065fcb3*/
    }
    goto LABEL_25; /*0x10065fcc2*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v77, __src, v90); /*0x10065fcd6*/
  v18 = v77; /*0x10065fcdb*/
  if ( v77 == 0x8000000000000000LL ) /*0x10065fce5*/
  {
    if ( (v78 & 3) == 1 ) /*0x10065fcf6*/
    {
      v19 = v78 - 1; /*0x10065fcfc*/
      v20 = *(_QWORD *)(v78 - 1); /*0x10065fd00*/
      v21 = *(_QWORD *)(v78 + 7); /*0x10065fd04*/
      if ( *(_QWORD *)v21 ) /*0x10065fd08*/
        (*(void (__fastcall **)(__int64, double))v21)(v20, v6); /*0x10065fd13*/
      v22 = *(_QWORD *)(v21 + 8); /*0x10065fd15*/
      if ( v22 ) /*0x10065fd1c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x10065fd25*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x10065fd37*/
    }
LABEL_22:
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10065fde1*/
    {
      v89[6] = 2; /*0x10065fde7*/
      v89[7] = &unk_1016029F7; /*0x10065fdf9*/
      v89[8] = 47; /*0x10065fe00*/
      v89[10] = &unk_101602992; /*0x10065fe12*/
      v89[11] = 203; /*0x10065fe19*/
      v89[0] = 0; /*0x10065fe24*/
      v89[1] = &unk_1016029F7; /*0x10065fe2f*/
      v89[2] = 47; /*0x10065fe36*/
      v89[3] = 0; /*0x10065fe41*/
      v89[4] = "src/core/relay/legacy_virtual_auth.rs"; /*0x10065fe53*/
      v89[5] = 37; /*0x10065fe5a*/
      v89[9] = 0x8500000001LL; /*0x10065fe6f*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v84, v89); /*0x10065fe84*/
    }
    *((_BYTE *)a1 + 8) = 0; /*0x10065fe89*/
    *a1 = 11; /*0x10065fe8e*/
    goto LABEL_89; /*0x10065fe95*/
  }
  v23 = v78; /*0x10065fd41*/
  v89[0] = v78; /*0x10065fd4f*/
  v89[1] = v79; /*0x10065fd56*/
  v89[2] = 0; /*0x10065fd5d*/
  v89[3] = 0; /*0x10065fd68*/
  v89[4] = v78; /*0x10065fd73*/
  v89[5] = v79; /*0x10065fd7a*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v84, v89); /*0x10065fd8f*/
  LOBYTE(v92) = (_BYTE)v84; /*0x10065fd9b*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0( /*0x10065fda5*/
    &v84,
    v6);
  if ( v18 ) /*0x10065fdad*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v18, 1); /*0x10065fdba*/
  if ( (_BYTE)v92 == 6 ) /*0x10065fdcd*/
    goto LABEL_22; /*0x10065fdcd*/
LABEL_25:
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v89, __src, v90); /*0x10065fe9a*/
  v24 = v89[0]; /*0x10065feae*/
  if ( v89[0] == 0x8000000000000000LL ) /*0x10065feb8*/
  {
    if ( (v89[1] & 3) != 1 ) /*0x10065fec9*/
      goto LABEL_63; /*0x10065fec9*/
    v25 = v89[1] - 1LL; /*0x10065fecf*/
    v26 = *(_QWORD *)(v89[1] - 1LL); /*0x10065fed3*/
    v27 = *(_QWORD *)(v89[1] + 7LL); /*0x10065fed7*/
    if ( *(_QWORD *)v27 ) /*0x10065fedb*/
      (*(void (__fastcall **)(__int64, double))v27)(v26, v6); /*0x10065fee7*/
    v28 = *(_QWORD *)(v27 + 8); /*0x10065fee9*/
    if ( v28 ) /*0x10065fef0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x10065fef9*/
    v29 = 24; /*0x10065fefe*/
    v30 = 8; /*0x10065ff03*/
    v31 = v25; /*0x10065ff08*/
LABEL_35:
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v29, v30); /*0x10065ff91*/
    goto LABEL_63; /*0x10065ff96*/
  }
  v89[0] = v89[1]; /*0x10065ff1e*/
  v89[1] = v89[2]; /*0x10065ff25*/
  v89[2] = 0; /*0x10065ff2c*/
  v89[3] = 0; /*0x10065ff37*/
  v92 = v89[0]; /*0x10065ff42*/
  v89[4] = v89[0]; /*0x10065ff46*/
  v89[5] = v89[1]; /*0x10065ff4d*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(&v84, v89); /*0x10065ff62*/
  if ( (_BYTE)v84 == 6 ) /*0x10065ff6e*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0( /*0x10065ff77*/
      &v84,
      v6);
    if ( !v24 ) /*0x10065ff7f*/
      goto LABEL_63; /*0x10065ff7f*/
    v30 = 1; /*0x10065ff85*/
    v31 = v92; /*0x10065ff8a*/
    v29 = v24; /*0x10065ff8e*/
    goto LABEL_35; /*0x10065ff8e*/
  }
  v89[3] = v87; /*0x10065ffa2*/
  v89[2] = v86; /*0x10065ffb0*/
  v89[1] = v85; /*0x10065ffc5*/
  v89[0] = v84; /*0x10065ffcc*/
  v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10065ffe6*/
          "OPENAI_API_KEYtokens",
          14,
          v89);
  v33 = v32 && *(_BYTE *)v32 == 3 && *(_QWORD *)(v32 + 24) == v10 && memcmp(*(const void **)(v32 + 16), __s2, v10) == 0; /*0x100660010*/
  v34 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10066002c*/
                   "tokens",
                   6,
                   v89);
  if ( v34 ) /*0x100660034*/
    v35 = *v34 == 0; /*0x100660039*/
  else
    v35 = 1; /*0x10066003f*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v89, v6); /*0x100660049*/
  v36 = v35 && v33; /*0x10066004e*/
  if ( v24 ) /*0x100660054*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v24, 1); /*0x100660062*/
  if ( !v36 ) /*0x10066006a*/
  {
LABEL_63:
    std::sys::fs::metadata::h32fa16d3052ea535(v89, __src, v90); /*0x1006601f6*/
    if ( LOBYTE(v89[0]) ) /*0x100660211*/
    {
      if ( (v89[1] & 3) == 1 ) /*0x100660226*/
      {
        v62 = v89[1] - 1LL; /*0x100660327*/
        v63 = *(_QWORD *)(v89[1] - 1LL); /*0x10066032b*/
        v64 = *(_QWORD *)(v89[1] + 7LL); /*0x10066032f*/
        if ( *(_QWORD *)v64 ) /*0x100660333*/
          (*(void (__fastcall **)(__int64, double))v64)(v63, v6); /*0x10066033f*/
        v65 = *(_QWORD *)(v64 + 8); /*0x100660341*/
        if ( v65 ) /*0x100660348*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v65, *(_QWORD *)(v64 + 16)); /*0x100660351*/
        v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, 24, 8); /*0x100660363*/
        if ( (v11 & 1) == 0 ) /*0x10066036b*/
          goto LABEL_81; /*0x10066036b*/
LABEL_66:
        v50 = (__int64)v81; /*0x100660235*/
        v51 = v82; /*0x10066023c*/
        std::sys::fs::metadata::h32fa16d3052ea535(v89, v81, v82); /*0x100660250*/
        if ( LODWORD(v89[0]) == 1 ) /*0x10066025c*/
        {
          if ( (v89[1] & 3) == 1 ) /*0x10066026d*/
          {
            v52 = v89[1] - 1LL; /*0x100660273*/
            v53 = *(_QWORD *)(v89[1] - 1LL); /*0x100660277*/
            v54 = *(_QWORD *)(v89[1] + 7LL); /*0x10066027b*/
            if ( *(_QWORD *)v54 ) /*0x10066027f*/
              (*(void (__fastcall **)(__int64, double))v54)(v53, v6); /*0x10066028a*/
            v55 = *(_QWORD *)(v54 + 8); /*0x10066028c*/
            if ( v55 ) /*0x100660293*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v53, v55, *(_QWORD *)(v54 + 16)); /*0x10066029c*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 24, 8); /*0x1006602ae*/
          }
          goto LABEL_81; /*0x1006602b3*/
        }
        v56 = codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup::h095b77a961713878(v89, v50, v51); /*0x1006602c5*/
        v57 = v89[0]; /*0x1006602ca*/
        v58 = v89[1]; /*0x1006602d1*/
        v59 = v89[2]; /*0x1006602d8*/
        v60 = v89[3]; /*0x1006602df*/
        v44 = v93; /*0x1006602ea*/
        if ( v89[0] == 11 ) /*0x1006602ee*/
        {
          v61 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100660305*/
                  __src,
                  v90,
                  v89[2],
                  v89[3],
                  1);
          if ( v61 ) /*0x10066030d*/
          {
            codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::hf1635b51b504a671( /*0x10066031d*/
              v89,
              v61,
              v56);
            goto LABEL_102; /*0x100660322*/
          }
LABEL_105:
          v66 = 1; /*0x10066058c*/
          if ( v58 ) /*0x100660591*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x1006605a2*/
          goto LABEL_82; /*0x1006605a7*/
        }
        goto LABEL_104; /*0x1006602ee*/
      }
      if ( (v11 & 1) != 0 ) /*0x10066022f*/
        goto LABEL_66; /*0x10066022f*/
    }
LABEL_81:
    v66 = 0; /*0x100660371*/
    goto LABEL_82; /*0x100660371*/
  }
  if ( (v11 & 1) != 0 ) /*0x100660073*/
  {
    v37 = (__int64)v81; /*0x100660075*/
    v38 = v82; /*0x10066007c*/
    std::sys::fs::metadata::h32fa16d3052ea535(v89, v81, v82); /*0x100660090*/
    if ( LODWORD(v89[0]) != 1 ) /*0x10066009c*/
    {
      v71 = codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup::h095b77a961713878(v89, v37, v38); /*0x100660497*/
      v57 = v89[0]; /*0x10066049c*/
      v58 = v89[1]; /*0x1006604a3*/
      v59 = v89[2]; /*0x1006604aa*/
      v60 = v89[3]; /*0x1006604b1*/
      v44 = v93; /*0x1006604bc*/
      if ( v89[0] == 11 ) /*0x1006604c0*/
      {
        v72 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1006604d3*/
                __src,
                v90,
                v89[2],
                v89[3],
                1);
        if ( v72 ) /*0x1006604db*/
        {
          codexmate_lib::core::relay::legacy_virtual_auth::cleanup::_$u7b$$u7b$closure$u7d$$u7d$::h211b3aa3b440520e( /*0x1006604eb*/
            v89,
            v72,
            v71);
LABEL_102:
          qmemcpy(a1, v89, 0x60u); /*0x1006604ff*/
          if ( v58 ) /*0x100660505*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x100660516*/
          goto LABEL_90; /*0x10066051b*/
        }
        goto LABEL_105; /*0x1006604db*/
      }
LABEL_104:
      a1[11] = v89[11]; /*0x100660520*/
      a1[10] = v89[10]; /*0x100660532*/
      a1[9] = v89[9]; /*0x10066053d*/
      a1[8] = v89[8]; /*0x100660548*/
      a1[7] = v89[7]; /*0x100660553*/
      a1[6] = v89[6]; /*0x10066055e*/
      v73 = v89[4]; /*0x100660562*/
      a1[5] = v89[5]; /*0x100660570*/
      a1[4] = v73; /*0x100660574*/
      a1[1] = v58; /*0x100660578*/
      a1[2] = v59; /*0x10066057c*/
      a1[3] = v60; /*0x100660580*/
      *a1 = v57; /*0x100660584*/
LABEL_90:
      if ( v44 ) /*0x10066041e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v44, 1); /*0x10066042f*/
      goto LABEL_92; /*0x10066042f*/
    }
    if ( (v89[1] & 3) == 1 ) /*0x1006600b1*/
    {
      v39 = v89[1] - 1LL; /*0x1006600b3*/
      v40 = *(_QWORD *)(v89[1] - 1LL); /*0x1006600b7*/
      v41 = *(_QWORD *)(v89[1] + 7LL); /*0x1006600bb*/
      if ( *(_QWORD *)v41 ) /*0x1006600bf*/
        (*(void (__fastcall **)(__int64, double))v41)(v40, v6); /*0x1006600ca*/
      v42 = *(_QWORD *)(v41 + 8); /*0x1006600cc*/
      if ( v42 ) /*0x1006600d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, v42, *(_QWORD *)(v41 + 16)); /*0x1006600dc*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, 24, 8); /*0x1006600ee*/
    }
  }
  v43 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(__src, v90); /*0x1006600fb*/
  if ( v43 ) /*0x100660103*/
  {
    v77 = v43; /*0x100660109*/
    v84 = &v77; /*0x100660117*/
    v85 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100660125*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v89, &unk_1017C2C56, &v84); /*0x100660141*/
    v84 = (__int64 *)v89[0]; /*0x100660154*/
    v85 = (__int64 (__fastcall *)(_QWORD, _QWORD))v89[1]; /*0x10066015b*/
    v86 = v89[2]; /*0x100660169*/
    v44 = v93; /*0x10066017f*/
    if ( (v77 & 3) == 1 ) /*0x100660183*/
    {
      v45 = v77 - 1; /*0x100660185*/
      v46 = *(_QWORD *)(v77 - 1); /*0x100660189*/
      v47 = *(_QWORD *)(v77 + 7); /*0x10066018d*/
      if ( *(_QWORD *)v47 ) /*0x100660191*/
        (*(void (__fastcall **)(__int64, double))v47)(v46, v6); /*0x10066019c*/
      v48 = *(_QWORD *)(v47 + 8); /*0x10066019e*/
      if ( v48 ) /*0x1006601a5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v48, *(_QWORD *)(v47 + 16)); /*0x1006601ae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, 24, 8); /*0x1006601c0*/
      v44 = v93; /*0x1006601c5*/
    }
    a1[3] = v86; /*0x1006601d0*/
    v49 = v84; /*0x1006601d4*/
    a1[2] = v85; /*0x1006601e2*/
    a1[1] = v49; /*0x1006601e6*/
    *a1 = 10; /*0x1006601ea*/
    goto LABEL_90; /*0x1006601f1*/
  }
  v66 = 1; /*0x100660483*/
LABEL_82:
  v67 = v81; /*0x100660373*/
  codexmate_lib::core::relay::legacy_virtual_auth::remove_file_if_exists::hd02eb246a7fee7f1( /*0x100660392*/
    v89,
    v81,
    v82,
    (__int64)&unk_10160295E);
  if ( LODWORD(v89[0]) != 11 /*0x1006603c8*/
    || (codexmate_lib::core::relay::legacy_virtual_auth::remove_file_if_exists::hd02eb246a7fee7f1(
          v89,
          v75,
          v76,
          (__int64)&unk_101602978),
        LODWORD(v89[0]) != 11) )
  {
    qmemcpy(a1, v89, 0x60u); /*0x100660414*/
LABEL_89:
    v44 = v93; /*0x100660417*/
    goto LABEL_90; /*0x100660417*/
  }
  *((_BYTE *)a1 + 8) = v66; /*0x1006603ca*/
  *a1 = 11; /*0x1006603ce*/
  if ( v93 ) /*0x1006603dc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v93, 1); /*0x1006603ea*/
  v68 = v80; /*0x1006603ef*/
  if ( v80 ) /*0x1006603f9*/
  {
    v69 = v67; /*0x100660400*/
LABEL_94:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1); /*0x10066044c*/
  }
LABEL_95:
  if ( v74 ) /*0x10066045b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v75, v74, 1); /*0x100660469*/
  return a1; /*0x100660471*/
}