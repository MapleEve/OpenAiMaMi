_QWORD *__fastcall codexmate_lib::core::quota_store::load::he744ac4ef03d474a(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i a4)
{
  __int64 v4; // r12
  __int64 *v5; // r13
  _QWORD *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *v24; // r12
  __int64 *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  __int64 v46; // rsi
  char v47; // al
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rbx
  unsigned __int64 v59; // r13
  __int64 *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 *v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 *v74; // [rsp+8h] [rbp-168h] BYREF
  char v75; // [rsp+10h] [rbp-160h]
  __int64 v76; // [rsp+18h] [rbp-158h]
  __int64 v77; // [rsp+20h] [rbp-150h]
  __int64 v78; // [rsp+28h] [rbp-148h]
  __int64 v79; // [rsp+30h] [rbp-140h]
  _QWORD *v80; // [rsp+38h] [rbp-138h]
  __int64 v81; // [rsp+40h] [rbp-130h] BYREF
  __int64 v82; // [rsp+48h] [rbp-128h]
  unsigned __int64 v83; // [rsp+50h] [rbp-120h]
  __int64 v84; // [rsp+58h] [rbp-118h]
  unsigned __int64 v85; // [rsp+60h] [rbp-110h]
  unsigned __int64 v86; // [rsp+68h] [rbp-108h]
  __int64 v87; // [rsp+70h] [rbp-100h]
  __int64 v88; // [rsp+78h] [rbp-F8h]
  unsigned __int64 v89; // [rsp+80h] [rbp-F0h]
  char v90; // [rsp+88h] [rbp-E8h]
  int v91; // [rsp+94h] [rbp-DCh]
  __int64 v92; // [rsp+98h] [rbp-D8h]
  void *v93; // [rsp+A0h] [rbp-D0h]
  __int64 v94; // [rsp+A8h] [rbp-C8h]
  __int64 v95; // [rsp+B0h] [rbp-C0h]
  char v96; // [rsp+BBh] [rbp-B5h] BYREF
  int v97; // [rsp+BCh] [rbp-B4h]
  __int64 v98; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-A8h]
  __int64 v100; // [rsp+D0h] [rbp-A0h]
  __int64 v101; // [rsp+D8h] [rbp-98h]
  __int64 v102; // [rsp+E0h] [rbp-90h]
  unsigned __int64 v103; // [rsp+E8h] [rbp-88h] BYREF
  __int64 v104; // [rsp+F0h] [rbp-80h]
  __int64 v105; // [rsp+F8h] [rbp-78h]
  __int64 v106; // [rsp+100h] [rbp-70h] BYREF
  __int64 (__fastcall *v107)(); // [rsp+108h] [rbp-68h]
  __int64 v108; // [rsp+110h] [rbp-60h]
  __int64 v109; // [rsp+118h] [rbp-58h]
  __m128i v110; // [rsp+120h] [rbp-50h] BYREF
  __int64 v111; // [rsp+130h] [rbp-40h]
  __int64 v112; // [rsp+138h] [rbp-38h]
  unsigned __int64 v113; // [rsp+140h] [rbp-30h]

  v6 = a1; /*0x1005403a4*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v81, a2, a3); /*0x1005403b1*/
  v8 = v82; /*0x1005403bd*/
  if ( __OFSUB__(-v81, 1) ) /*0x1005403c7*/
  {
    *a1 = 2; /*0x1005403cc*/
    a1[1] = v8; /*0x1005403d3*/
    return v6; /*0x1005403d7*/
  }
  v94 = v81; /*0x1005403dc*/
  v9 = v83; /*0x1005403e3*/
  v84 = v82; /*0x1005403ea*/
  v85 = v83; /*0x1005403f1*/
  v86 = 0; /*0x1005403f8*/
  v87 = 0; /*0x100540403*/
  v88 = v82; /*0x10054040e*/
  v89 = v83; /*0x100540415*/
  v81 = 0; /*0x10054041c*/
  v82 = 1; /*0x100540427*/
  v83 = 0; /*0x100540432*/
  v90 = 0x80; /*0x10054043d*/
  v80 = a1; /*0x100540447*/
  if ( !v85 ) /*0x10054044e*/
  {
LABEL_8:
    v106 = 5; /*0x10054049f*/
    v14 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(&v81, &v106, v7); /*0x1005404b2*/
LABEL_9:
    v15 = v14; /*0x1005404b7*/
    goto LABEL_10; /*0x1005404b7*/
  }
  v10 = -(__int64)v9; /*0x100540450*/
  v11 = 1; /*0x100540453*/
  v12 = &loc_100002600; /*0x100540458*/
  while ( 1 ) /*0x100540470*/
  {
    v13 = *(unsigned __int8 *)(v8 + v11 - 1); /*0x100540470*/
    if ( v13 > 0x20 || !_bittest64((const __int64 *)&v12, v13) ) /*0x100540480*/
      break; /*0x100540480*/
    v86 = v11; /*0x10054048a*/
    v7 = v10 + v11++ + 1; /*0x100540491*/
    if ( v7 == 1 ) /*0x10054049d*/
      goto LABEL_8; /*0x10054049d*/
  }
  if ( (_DWORD)v13 == 91 ) /*0x10054057e*/
  {
    v90 = 127; /*0x10054094e*/
    v86 = v11; /*0x100540955*/
    v98 = (__int64)&v81; /*0x10054095c*/
    LOBYTE(v99) = 1; /*0x100540963*/
    v56 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x100540975*/
            &v106,
            &v98);
    if ( (_BYTE)v106 == 1 ) /*0x10054097e*/
    {
LABEL_77:
      v58 = (__int64)v107; /*0x100540980*/
      goto LABEL_91; /*0x100540984*/
    }
    if ( BYTE1(v106) == 1 ) /*0x1005409c7*/
    {
      v56 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i32::hb5f8d7095dc734cd( /*0x1005409d8*/
              &v106,
              v98);
      if ( (_DWORD)v106 == 1 ) /*0x1005409e1*/
        goto LABEL_77; /*0x1005409e1*/
      LODWORD(v4) = HIDWORD(v106); /*0x1005409e3*/
      v56 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x1005409f2*/
              &v106,
              &v98);
      if ( (_BYTE)v106 == 1 ) /*0x1005409fb*/
        goto LABEL_77; /*0x1005409fb*/
      v62 = 1; /*0x1005409fd*/
      if ( BYTE1(v106) == 1 ) /*0x100540a06*/
      {
        v56 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i64::h93b72eaa3968ad8a(v98); /*0x100540a0f*/
        v58 = v63; /*0x100540a14*/
        if ( (v56 & 1) != 0 ) /*0x100540a19*/
          goto LABEL_91; /*0x100540a19*/
        v56 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x100540a26*/
                &v106,
                &v98);
        if ( (_BYTE)v106 == 1 ) /*0x100540a2f*/
          goto LABEL_77; /*0x100540a2f*/
        v62 = 2; /*0x100540a35*/
        if ( BYTE1(v106) == 1 ) /*0x100540a3e*/
        {
          _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h84ee1ef3a53450c4( /*0x100540a4b*/
            &v106,
            v98);
          v64 = v106; /*0x100540a50*/
          v56 = 0x8000000000000000LL; /*0x100540a58*/
          if ( v106 != 0x8000000000000000LL ) /*0x100540a65*/
          {
            v57 = v108; /*0x100540fd4*/
            v56 = v58; /*0x100540fd8*/
            v58 = (__int64)v107; /*0x100540fdb*/
            goto LABEL_92; /*0x100540fde*/
          }
          v58 = (__int64)v107; /*0x100540a6b*/
LABEL_91:
          v64 = 0x8000000000000000LL; /*0x100540a88*/
LABEL_92:
          ++v90; /*0x100540a92*/
          v98 = v64; /*0x100540a98*/
          v99 = v58; /*0x100540a9f*/
          v100 = v57; /*0x100540aa6*/
          v101 = v56; /*0x100540aad*/
          LODWORD(v102) = v4; /*0x100540ab4*/
          v5 = (__int64 *)serde_json::de::Deserializer$LT$R$GT$::end_seq::h8a430273f2e00f21(&v81); /*0x100540ac7*/
          v110.i64[0] = v102; /*0x100540ad1*/
          v109 = v101; /*0x100540adc*/
          v108 = v100; /*0x100540ae7*/
          v16 = v98; /*0x100540aeb*/
          v107 = (__int64 (__fastcall *)())v99; /*0x100540af9*/
          v106 = v98; /*0x100540afd*/
          v110.i64[1] = (__int64)v5; /*0x100540b01*/
          if ( v98 == 0x8000000000000000LL ) /*0x100540b12*/
          {
            v15 = (__int64)v107; /*0x100540b14*/
            if ( v5 ) /*0x100540b1b*/
            {
              v65 = *v5; /*0x100540b21*/
              if ( *v5 != 1 ) /*0x100540b29*/
                goto LABEL_113; /*0x100540b29*/
              core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v5 + 1); /*0x100540b36*/
LABEL_123:
              *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 40, 8); /*0x100540da3*/
            }
LABEL_124:
            v16 = 0x8000000000000000LL; /*0x100540db5*/
            goto LABEL_125; /*0x100540db5*/
          }
          if ( v5 ) /*0x100540b43*/
          {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbf3eae4e3aa3968(&v106); /*0x100540b4d*/
            goto LABEL_118; /*0x100540b52*/
          }
          goto LABEL_121; /*0x100540b43*/
        }
      }
    }
    else
    {
      v62 = 0; /*0x100540a70*/
    }
    v56 = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x100540a80*/
            v62,
            &off_101532A40,
            &anon_daf50d54a2d3ecbdf54de6a8568b21ab_67);
    v58 = v56; /*0x100540a85*/
    goto LABEL_91; /*0x100540a85*/
  }
  if ( (_DWORD)v13 != 123 ) /*0x100540587*/
  {
    v72 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f(&v81, &v96, &unk_101533970); /*0x10054108c*/
    goto LABEL_148; /*0x10054108c*/
  }
  v90 = 127; /*0x10054058d*/
  v86 = v11; /*0x100540594*/
  v74 = &v81; /*0x10054059b*/
  v75 = 1; /*0x1005405a2*/
  v92 = 0; /*0x1005405a9*/
  v93 = &unk_1012C8816; /*0x1005405bb*/
  v22 = 0x8000000000000000LL; /*0x1005405c2*/
  v97 = 0; /*0x1005405cc*/
  while ( 2 ) /*0x1005405d6*/
  {
    v113 = v22; /*0x1005405d6*/
    v112 = v4; /*0x1005405da*/
    while ( 1 ) /*0x1005405e9*/
    {
      _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2( /*0x1005405de*/
        &v106,
        &v74);
      if ( (_BYTE)v106 == 1 ) /*0x1005405f2*/
      {
        v59 = v113; /*0x100540b57*/
        v103 = v113; /*0x100540b5b*/
        v4 = v112; /*0x100540b62*/
        v104 = v112; /*0x100540b66*/
        v105 = v111; /*0x100540b6e*/
        v27 = (__int64)v107; /*0x100540b72*/
        goto LABEL_104; /*0x100540b76*/
      }
      if ( BYTE1(v106) != 1 ) /*0x1005405fc*/
      {
        v59 = v113; /*0x100540b7b*/
        v103 = v113; /*0x100540b7f*/
        v4 = v112; /*0x100540b86*/
        v104 = v112; /*0x100540b8a*/
        v105 = v111; /*0x100540b92*/
        if ( (v97 & 1) != 0 ) /*0x100540b9d*/
        {
          if ( (v92 & 1) != 0 ) /*0x100540baa*/
          {
            v55 = v111; /*0x100540bbd*/
            v23 = v95; /*0x100540bc1*/
            if ( v113 != 0x8000000000000000LL ) /*0x100540bc8*/
              goto LABEL_110; /*0x100540bc8*/
            v98 = (__int64)&unk_1012C89D9; /*0x100540bd5*/
            v99 = 5; /*0x100540bdc*/
            v106 = (__int64)&v98; /*0x100540bee*/
            v107 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100540bf9*/
            v59 = 0x8000000000000000LL; /*0x100540c08*/
            v55 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_1); /*0x100540c12*/
            goto LABEL_138; /*0x100540c17*/
          }
          v98 = (__int64)&unk_1012C89D0; /*0x100540f1b*/
          v99 = 9; /*0x100540f22*/
          v106 = (__int64)&v98; /*0x100540f34*/
          v107 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100540f3f*/
          v61 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_1); /*0x100540f4e*/
        }
        else
        {
          v98 = (__int64)&unk_1012C8816; /*0x100540ed7*/
          v99 = 13; /*0x100540ede*/
          v106 = (__int64)&v98; /*0x100540ef0*/
          v107 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100540efb*/
          v61 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_1); /*0x100540f0a*/
        }
        goto LABEL_79; /*0x100540f53*/
      }
      v24 = v74; /*0x100540602*/
      v25 = v74 + 3; /*0x100540609*/
      ++v74[5]; /*0x10054060e*/
      v24[2] = 0; /*0x100540613*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x100540626*/
        &v106,
        v25,
        v24);
      v23 = v106; /*0x10054062b*/
      v27 = (__int64)v107; /*0x10054062f*/
      if ( v106 == 2 ) /*0x100540637*/
        goto LABEL_103; /*0x100540637*/
      if ( v108 == 5 ) /*0x100540648*/
        break; /*0x100540648*/
      if ( v108 != 9 ) /*0x100540652*/
      {
        if ( v108 == 13 ) /*0x10054065c*/
        {
          v26 = 0x6E6F697372655661LL; /*0x100540676*/
          if ( !(*(_QWORD *)v107 ^ 0x6556616D65686373LL | *(_QWORD *)((char *)v107 + 5) ^ 0x6E6F697372655661LL) ) /*0x100540683*/
          {
            if ( !v97 ) /*0x100540693*/
            {
              v28 = v24[4]; /*0x100540699*/
              v29 = v24[5]; /*0x10054069e*/
              if ( v29 >= v28 ) /*0x1005406a6*/
              {
LABEL_139:
                v59 = v113; /*0x100540f99*/
                v103 = v113; /*0x100540f9d*/
                v104 = v112; /*0x100540fa8*/
                v105 = v111; /*0x100540fb0*/
                v106 = 3; /*0x100540fb4*/
                v70 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x100540fc3*/
LABEL_140:
                v27 = v70; /*0x100540fc8*/
                v4 = v112; /*0x100540fcb*/
              }
              else
              {
                v26 = *v25; /*0x1005406ac*/
                v30 = v29 + 1; /*0x1005406b0*/
                v31 = -(__int64)v28; /*0x1005406b3*/
                while ( 1 ) /*0x1005406b6*/
                {
                  v32 = *(unsigned __int8 *)(v26 + v30 - 1); /*0x1005406b6*/
                  if ( v32 > 0x3A ) /*0x1005406bf*/
                    goto LABEL_154; /*0x1005406bf*/
                  if ( !_bittest64((const __int64 *)&v12, v32) ) /*0x1005406c5*/
                    break; /*0x1005406c5*/
                  v24[5] = v30; /*0x1005406cf*/
                  v33 = v31 + v30++ + 1; /*0x1005406d4*/
                  if ( v33 == 1 ) /*0x1005406e0*/
                    goto LABEL_139; /*0x1005406e0*/
                }
                if ( v32 != 58 ) /*0x100540809*/
                {
LABEL_154:
                  v59 = v113; /*0x100541168*/
                  v103 = v113; /*0x10054116c*/
                  v104 = v112; /*0x100541177*/
                  v105 = v111; /*0x10054117f*/
                  v106 = 6; /*0x100541183*/
                  v70 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x100541192*/
                  goto LABEL_140; /*0x100541197*/
                }
                v24[5] = v30; /*0x10054080f*/
                _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i32::hb5f8d7095dc734cd( /*0x10054081e*/
                  &v98,
                  v24);
                if ( (_DWORD)v98 != 1 ) /*0x10054082a*/
                {
                  v91 = HIDWORD(v98); /*0x100540836*/
                  v97 = 1; /*0x10054083c*/
                  continue; /*0x100540846*/
                }
                v59 = v113; /*0x10054102b*/
                v103 = v113; /*0x10054102f*/
                v4 = v112; /*0x100541036*/
                v104 = v112; /*0x10054103a*/
                v105 = v111; /*0x100541042*/
                v27 = v99; /*0x100541046*/
              }
              goto LABEL_104; /*0x10054104d*/
            }
            v73 = 13; /*0x1005410ca*/
            goto LABEL_152; /*0x1005410ca*/
          }
        }
LABEL_41:
        v34 = v24[4]; /*0x10054071d*/
        v35 = v24[5]; /*0x100540722*/
        if ( v35 < v34 ) /*0x10054072a*/
        {
          v26 = *v25; /*0x100540730*/
          v36 = v35 + 1; /*0x100540734*/
          v37 = -(__int64)v34; /*0x100540737*/
          while ( 1 ) /*0x10054073a*/
          {
            v38 = *(unsigned __int8 *)(v26 + v36 - 1); /*0x10054073a*/
            if ( v38 > 0x3A ) /*0x100540743*/
              goto LABEL_142; /*0x100540743*/
            if ( !_bittest64((const __int64 *)&v12, v38) ) /*0x100540749*/
              break; /*0x100540749*/
            v24[5] = v36; /*0x10054074f*/
            v39 = v37 + v36++ + 1; /*0x100540754*/
            if ( v39 == 1 ) /*0x100540760*/
              goto LABEL_78; /*0x100540760*/
          }
          if ( v38 != 58 ) /*0x10054076b*/
          {
LABEL_142:
            v59 = v113; /*0x100540fe3*/
            v103 = v113; /*0x100540fe7*/
            v104 = v112; /*0x100540ff2*/
            v105 = v111; /*0x100540ffa*/
            v106 = 6; /*0x100540ffe*/
            v71 = v24; /*0x10054100a*/
            v4 = v112; /*0x10054100d*/
            v61 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v71, &v106, v26); /*0x100541010*/
            goto LABEL_79; /*0x100541015*/
          }
          v24[5] = v36; /*0x100540771*/
          v40 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::h7eada599325cfc5e(v24, 58, v26, v37); /*0x100540779*/
          if ( !v40 ) /*0x100540781*/
            continue; /*0x100540781*/
          v27 = v40; /*0x100540c1c*/
LABEL_103:
          v59 = v113; /*0x100540c1f*/
          v103 = v113; /*0x100540c23*/
          v4 = v112; /*0x100540c2a*/
          v104 = v112; /*0x100540c2e*/
          v105 = v111; /*0x100540c36*/
          goto LABEL_104; /*0x100540c36*/
        }
LABEL_78:
        v59 = v113; /*0x100540989*/
        v103 = v113; /*0x10054098d*/
        v104 = v112; /*0x100540998*/
        v105 = v111; /*0x1005409a0*/
        v106 = 3; /*0x1005409a4*/
        v60 = v24; /*0x1005409b0*/
        v4 = v112; /*0x1005409b3*/
        v61 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v60, &v106, v26); /*0x1005409b6*/
        goto LABEL_79; /*0x1005409b6*/
      }
      if ( *(_QWORD *)v107 ^ 0x4164657461647075LL | *((unsigned __int8 *)v107 + 8) ^ 0x74LL ) /*0x100540718*/
        goto LABEL_41; /*0x10054071b*/
      if ( v92 ) /*0x100540794*/
      {
        v73 = 9; /*0x1005410a0*/
        v93 = &unk_1012C89D0; /*0x1005410ac*/
        goto LABEL_152; /*0x1005410b3*/
      }
      v41 = v24[4]; /*0x10054079a*/
      v42 = v24[5]; /*0x10054079f*/
      if ( v42 >= v41 ) /*0x1005407a7*/
      {
LABEL_56:
        v106 = 3; /*0x1005407df*/
        v95 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x1005407f7*/
      }
      else
      {
        v26 = *v25; /*0x1005407a9*/
        v43 = v42 + 1; /*0x1005407ad*/
        v44 = -(__int64)v41; /*0x1005407b0*/
        while ( 1 ) /*0x1005407b3*/
        {
          v45 = *(unsigned __int8 *)(v26 + v43 - 1); /*0x1005407b3*/
          if ( v45 > 0x3A ) /*0x1005407c0*/
            break; /*0x1005407c0*/
          if ( !_bittest64((const __int64 *)&v12, v45) ) /*0x1005407ca*/
          {
            if ( v45 == 58 ) /*0x10054084f*/
            {
              v24[5] = v43; /*0x100540851*/
              v47 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i64::h93b72eaa3968ad8a(v24); /*0x100540859*/
              v95 = v48; /*0x10054085e*/
              goto LABEL_63; /*0x10054085e*/
            }
            break; /*0x10054084f*/
          }
          v24[5] = v43; /*0x1005407cc*/
          v46 = v44 + v43++ + 1; /*0x1005407d1*/
          if ( v46 == 1 ) /*0x1005407dd*/
            goto LABEL_56; /*0x1005407dd*/
        }
        v106 = 6; /*0x10054087e*/
        v95 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x100540892*/
      }
      v47 = 1; /*0x1005407fe*/
LABEL_63:
      if ( (v47 & 1) != 0 ) /*0x100540867*/
      {
        v27 = v95; /*0x10054101f*/
        goto LABEL_103; /*0x100541026*/
      }
      v92 = 1; /*0x100540872*/
    }
    if ( *(_DWORD *)v107 ^ 0x6D657469 | *((unsigned __int8 *)v107 + 4) ^ 0x73 ) /*0x1005406f7*/
      goto LABEL_41; /*0x1005406f9*/
    if ( v113 != 0x8000000000000000LL ) /*0x1005408ac*/
    {
      v73 = 5; /*0x1005410b5*/
      v93 = &unk_1012C89D9; /*0x1005410c1*/
LABEL_152:
      v59 = v113; /*0x1005410cf*/
      v103 = v113; /*0x1005410d3*/
      v4 = v112; /*0x1005410da*/
      v104 = v112; /*0x1005410de*/
      v105 = v111; /*0x1005410e6*/
      v98 = (__int64)v93; /*0x1005410f1*/
      v99 = v73; /*0x1005410f8*/
      v106 = (__int64)&v98; /*0x100541106*/
      v107 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100541111*/
      v61 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_5); /*0x100541120*/
LABEL_79:
      v27 = v61; /*0x1005409bb*/
LABEL_104:
      v55 = 0x8000000000000000LL; /*0x100540c3a*/
      if ( v59 == 0x8000000000000000LL ) /*0x100540c47*/
      {
        v4 = v27; /*0x100540c49*/
        v59 = 0x8000000000000000LL; /*0x100540c4c*/
        goto LABEL_110; /*0x100540c4f*/
      }
      v55 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbf3eae4e3aa3968(&v103); /*0x100540c58*/
      if ( v59 ) /*0x100540c60*/
        *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, 168 * v59, 8); /*0x100540c71*/
      v4 = v27; /*0x100540c76*/
      goto LABEL_109; /*0x100540c76*/
    }
    v49 = v24[4]; /*0x1005408b2*/
    v50 = v24[5]; /*0x1005408b7*/
    if ( v50 < v49 ) /*0x1005408bf*/
    {
      v26 = *v25; /*0x1005408c5*/
      v51 = v50 + 1; /*0x1005408c9*/
      v52 = -(__int64)v49; /*0x1005408cc*/
      while ( 1 ) /*0x1005408cf*/
      {
        v53 = *(unsigned __int8 *)(v26 + v51 - 1); /*0x1005408cf*/
        if ( v53 > 0x3A ) /*0x1005408d8*/
          goto LABEL_153; /*0x1005408d8*/
        if ( !_bittest64((const __int64 *)&v12, v53) ) /*0x1005408de*/
          break; /*0x1005408de*/
        v24[5] = v51; /*0x1005408e4*/
        v54 = v52 + v51++ + 1; /*0x1005408e9*/
        if ( v54 == 1 ) /*0x1005408f5*/
          goto LABEL_137; /*0x1005408f5*/
      }
      if ( v53 != 58 ) /*0x100540900*/
      {
LABEL_153:
        v103 = v113; /*0x10054112a*/
        v104 = v112; /*0x100541139*/
        v105 = v111; /*0x100541141*/
        v106 = 6; /*0x100541145*/
        v59 = 0x8000000000000000LL; /*0x100541151*/
        v55 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x10054115e*/
        goto LABEL_138; /*0x100541163*/
      }
      v24[5] = v51; /*0x100540906*/
      v55 = _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_seq::h84ee1ef3a53450c4( /*0x100540915*/
              &v98,
              v24);
      v4 = v99; /*0x100540921*/
      if ( v98 != 0x8000000000000000LL ) /*0x100540935*/
      {
        v111 = v100; /*0x100540942*/
        v22 = v98; /*0x100540946*/
        continue; /*0x100540949*/
      }
      v103 = v113; /*0x100541056*/
      v104 = v112; /*0x100541061*/
      v23 = v111; /*0x100541065*/
      v105 = v111; /*0x100541069*/
LABEL_109:
      v59 = 0x8000000000000000LL; /*0x100540c79*/
      goto LABEL_110; /*0x100540c79*/
    }
    break;
  }
LABEL_137:
  v103 = v113; /*0x100540f58*/
  v104 = v112; /*0x100540f67*/
  v105 = v111; /*0x100540f6f*/
  v106 = 3; /*0x100540f73*/
  v59 = 0x8000000000000000LL; /*0x100540f7f*/
  v55 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v24, &v106, v26); /*0x100540f8c*/
LABEL_138:
  v4 = v55; /*0x100540f91*/
LABEL_110:
  ++v90; /*0x100540c83*/
  v98 = v59; /*0x100540c89*/
  v99 = v4; /*0x100540c90*/
  v100 = v55; /*0x100540c97*/
  v101 = v23; /*0x100540c9e*/
  LODWORD(v102) = v91; /*0x100540cab*/
  v5 = (__int64 *)serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(&v81); /*0x100540cbd*/
  v110.i64[0] = v102; /*0x100540cc7*/
  v109 = v101; /*0x100540cd2*/
  v108 = v100; /*0x100540cdd*/
  v16 = v98; /*0x100540ce1*/
  v107 = (__int64 (__fastcall *)())v99; /*0x100540cef*/
  v106 = v98; /*0x100540cf3*/
  v110.i64[1] = (__int64)v5; /*0x100540cf7*/
  if ( v98 == 0x8000000000000000LL ) /*0x100540d08*/
  {
    v15 = (__int64)v107; /*0x100540d0a*/
    if ( v5 ) /*0x100540d11*/
    {
      v65 = *v5; /*0x100540d17*/
      if ( *v5 == 1 ) /*0x100540d1f*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v5 + 1); /*0x100540d9e*/
      }
      else
      {
LABEL_113:
        if ( !v65 ) /*0x100540d24*/
        {
          v66 = v5[2]; /*0x100540d26*/
          if ( v66 ) /*0x100540d2d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5[1], v66, 1); /*0x100540d38*/
        }
      }
      goto LABEL_123; /*0x100540d3d*/
    }
    goto LABEL_124; /*0x100540d11*/
  }
  if ( !v5 ) /*0x100540d42*/
  {
LABEL_121:
    v15 = (__int64)v107; /*0x100540d76*/
    v78 = v108; /*0x100540d7e*/
    v79 = v109; /*0x100540d89*/
    a4 = _mm_loadl_epi64(&v110); /*0x100540d90*/
    goto LABEL_125; /*0x100540d95*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbf3eae4e3aa3968(&v106); /*0x100540d48*/
LABEL_118:
  if ( v16 ) /*0x100540d50*/
    *(double *)a4.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 168 * v16, 8); /*0x100540d62*/
  v16 = 0x8000000000000000LL; /*0x100540d67*/
  v15 = (__int64)v5; /*0x100540d71*/
LABEL_125:
  if ( v16 == 0x8000000000000000LL ) /*0x100540dcc*/
  {
    v72 = v15; /*0x10054101a*/
LABEL_148:
    v14 = serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v72, &v81); /*0x10054108f*/
    goto LABEL_9; /*0x10054109b*/
  }
  v77 = v79; /*0x100540de0*/
  v76 = v78; /*0x100540de7*/
  v106 = v16; /*0x100540dee*/
  v107 = (__int64 (__fastcall *)())v15; /*0x100540df2*/
  v108 = v78; /*0x100540df6*/
  v109 = v79; /*0x100540dfa*/
  v110.i64[0] = a4.i64[0]; /*0x100540dfe*/
  LODWORD(v5) = _mm_cvtsi128_si32(a4); /*0x100540e11*/
  LODWORD(v113) = _mm_extract_epi32(a4, 1); /*0x100540e16*/
  if ( v86 >= v85 ) /*0x100540e20*/
  {
LABEL_131:
    v17 = v81; /*0x100540e56*/
    if ( v81 ) /*0x100540e6a*/
      goto LABEL_11; /*0x100540e6a*/
  }
  else
  {
    v67 = v86 + 1; /*0x100540e2c*/
    while ( 1 ) /*0x100540e30*/
    {
      v68 = *(unsigned __int8 *)(v84 + v67 - 1); /*0x100540e30*/
      if ( v68 > 0x20 || !_bittest64((const __int64 *)&v12, v68) ) /*0x100540e3b*/
        break; /*0x100540e3b*/
      v86 = v67; /*0x100540e41*/
      v69 = v67 - v85 + 1; /*0x100540e48*/
      ++v67; /*0x100540e4d*/
      if ( v69 == 1 ) /*0x100540e54*/
        goto LABEL_131; /*0x100540e54*/
    }
    v112 = v15; /*0x100540e75*/
    v98 = 22; /*0x100540e79*/
    v15 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(&v81, &v98, v84); /*0x100540e97*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfbf3eae4e3aa3968(&v106); /*0x100540e9e*/
    if ( v16 ) /*0x100540eb0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v112, 168 * v16, 8); /*0x100540ec6*/
LABEL_10:
    v16 = 0x8000000000000000LL; /*0x1005404c4*/
    v17 = v81; /*0x1005404c7*/
    if ( v81 ) /*0x1005404d1*/
LABEL_11:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, v17, 1); /*0x1005404d3*/
  }
  if ( v16 == 0x8000000000000000LL ) /*0x1005404e7*/
  {
    v6 = v80; /*0x1005404e9*/
    *v80 = 3; /*0x1005404f0*/
    v6[1] = v15; /*0x1005404f7*/
    v18 = v94; /*0x1005404fb*/
    if ( !v94 ) /*0x100540505*/
      return v6; /*0x100540505*/
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v18, 1); /*0x100540559*/
  }
  else
  {
    v19 = v76; /*0x100540509*/
    v6 = v80; /*0x100540517*/
    v80[4] = v77; /*0x10054051e*/
    v6[3] = v19; /*0x100540522*/
    v20 = 1; /*0x10054052a*/
    if ( (int)v5 >= 2 ) /*0x10054052f*/
      v20 = (int)v5; /*0x10054052f*/
    v6[1] = v16; /*0x100540533*/
    v6[2] = v15; /*0x100540537*/
    *((_DWORD *)v6 + 10) = v20; /*0x10054053b*/
    *((_DWORD *)v6 + 11) = v113; /*0x100540542*/
    *v6 = 10; /*0x100540546*/
    v18 = v94; /*0x10054054d*/
    if ( v94 ) /*0x100540557*/
      goto LABEL_18; /*0x100540557*/
  }
  return v6; /*0x100540569*/
}