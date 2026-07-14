// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100379050 depth=2
void *__fastcall serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..map..Map$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::deserialize_any::h2c59c84d57b2cfc5(
        void *a1,
        __int64 *a2)
{
  __int8 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  __int8 v13; // al
  __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int8 v18; // al
  __int8 v19; // al
  __int8 v20; // al
  __int8 v21; // al
  __int8 v22; // al
  signed __int64 v23; // rax
  _WORD *v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  signed __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // r11
  __int64 v34; // r10
  char *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  _BYTE __dst[152]; // [rsp+0h] [rbp-240h] BYREF
  __int64 v43; // [rsp+98h] [rbp-1A8h]
  __int64 v44; // [rsp+A0h] [rbp-1A0h]
  __int64 v45; // [rsp+A8h] [rbp-198h]
  __int64 v46; // [rsp+B0h] [rbp-190h]
  __int64 v47; // [rsp+B8h] [rbp-188h]
  __int64 v48; // [rsp+C0h] [rbp-180h]
  __int64 v49; // [rsp+C8h] [rbp-178h]
  __int64 v50; // [rsp+D0h] [rbp-170h]
  _QWORD v51[8]; // [rsp+D8h] [rbp-168h] BYREF
  __int64 v52; // [rsp+118h] [rbp-128h]
  char v53; // [rsp+120h] [rbp-120h] BYREF
  _BYTE v54[31]; // [rsp+121h] [rbp-11Fh]
  __int64 v55; // [rsp+140h] [rbp-100h]
  __int64 v56; // [rsp+148h] [rbp-F8h]
  _BYTE v57[7]; // [rsp+150h] [rbp-F0h]
  _DWORD v58[2]; // [rsp+158h] [rbp-E8h]
  __int64 v59; // [rsp+160h] [rbp-E0h]
  void *__src; // [rsp+168h] [rbp-D8h]
  __int64 v61; // [rsp+170h] [rbp-D0h]
  __m256i v62; // [rsp+178h] [rbp-C8h] BYREF
  _WORD *v63; // [rsp+198h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+1A0h] [rbp-A0h]
  __m256i v65; // [rsp+1A8h] [rbp-98h] BYREF
  signed __int64 v66; // [rsp+1C8h] [rbp-78h]
  signed __int64 v67; // [rsp+1D0h] [rbp-70h]
  char v68; // [rsp+1DFh] [rbp-61h] BYREF
  __int64 v69; // [rsp+1E0h] [rbp-60h]
  __int64 v70; // [rsp+1E8h] [rbp-58h]
  __int64 v71; // [rsp+1F0h] [rbp-50h]
  __int64 v72; // [rsp+1F8h] [rbp-48h]
  __int64 v73; // [rsp+200h] [rbp-40h]
  __int64 v74; // [rsp+208h] [rbp-38h]
  __int8 v75; // [rsp+217h] [rbp-29h]

  __src = a1; /*0x100379064*/
  v5 = *a2; /*0x100379079*/
  v6 = a2[1]; /*0x10037907c*/
  v7 = 0; /*0x100379080*/
  v8 = *a2 == 0; /*0x100379082*/
  v44 = a2[2]; /*0x100379085*/
  v9 = v44; /*0x10037908c*/
  if ( v8 ) /*0x10037908f*/
    v9 = v5; /*0x10037908f*/
  LOBYTE(v7) = !v8; /*0x100379093*/
  v51[0] = v7; /*0x100379096*/
  v51[1] = 0; /*0x10037909d*/
  v51[2] = v5; /*0x1003790a8*/
  v51[3] = v6; /*0x1003790af*/
  v51[4] = v7; /*0x1003790b6*/
  v51[5] = 0; /*0x1003790bd*/
  v51[6] = v5; /*0x1003790c8*/
  v51[7] = v6; /*0x1003790cf*/
  v52 = v9; /*0x1003790d6*/
  v53 = 6; /*0x1003790dd*/
  v75 = 2; /*0x1003790e8*/
  v10 = 2; /*0x1003790ec*/
  v59 = 2; /*0x1003790f1*/
  v74 = 0x8000000000000001LL; /*0x1003790f8*/
  v67 = 0x8000000000000001LL; /*0x1003790fc*/
  v66 = 0x8000000000000001LL; /*0x100379100*/
  v64 = 0x8000000000000000LL; /*0x100379104*/
  v73 = 0x8000000000000000LL; /*0x10037910b*/
  v61 = 0x8000000000000000LL; /*0x10037910f*/
  while ( 2 ) /*0x100379120*/
  {
    v63 = (_WORD *)v4; /*0x100379120*/
    v11 = v6; /*0x100379127*/
    v12 = v10; /*0x10037912a*/
    _$LT$serde_json..value..de..MapDeserializer$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::h537e6e891c14375c( /*0x10037913b*/
      &v65,
      v51);
    if ( v65.i8[0] == 1 ) /*0x100379147*/
    {
      v69 = v73; /*0x1003797f1*/
      v70 = v72; /*0x1003797f9*/
      v71 = v3; /*0x1003797fd*/
      v4 = v65.i64[1]; /*0x100379801*/
      goto LABEL_49; /*0x100379801*/
    }
    switch ( v65.i8[1] ) /*0x100379162*/
    {
      case 0: /*0x100379162*/
        if ( v75 != 2 ) /*0x100379168*/
        {
          v69 = v73; /*0x100379d8b*/
          v70 = v72; /*0x100379d93*/
          v71 = v3; /*0x100379d97*/
          v62.i64[0] = (__int64)&unk_1012C15A1; /*0x100379da2*/
          v62.i64[1] = 7; /*0x100379da9*/
          v65.i64[0] = (__int64)&v62; /*0x100379dbb*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100379dc9*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x100379dde*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          goto LABEL_113; /*0x100379de3*/
        }
        v13 = v53; /*0x10037916e*/
        v53 = 6; /*0x100379175*/
        if ( v13 == 6 ) /*0x10037917e*/
        {
          v62.i64[1] = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x100379a51*/
                         "value is missingtuple variant",
                         0x10u);
        }
        else
        {
          v65.i8[0] = v13; /*0x100379184*/
          v65.i64[3] = *(_QWORD *)&v54[23]; /*0x10037919c*/
          *(__int64 *)((char *)&v65.i64[2] + 1) = *(_QWORD *)&v54[16]; /*0x1003791a4*/
          *(__int128 *)((char *)v65.i128 + 1) = *(_OWORD *)v54; /*0x1003791b4*/
          codexmate_lib::core::repository::_::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$codexmate_lib..core..repository..HotspotConfig$GT$::deserialize::h775b6b903ffb7821( /*0x1003791c5*/
            &v62,
            &v65);
          if ( v62.i8[0] != 1 ) /*0x1003791d1*/
          {
            v75 = v62.i8[1]; /*0x1003791de*/
            goto LABEL_43; /*0x1003791e1*/
          }
        }
        v69 = v73; /*0x100379a5c*/
        v70 = v72; /*0x100379a64*/
        v71 = v3; /*0x100379a68*/
        v4 = v62.i64[1]; /*0x100379a6c*/
        goto LABEL_49; /*0x100379a73*/
      case 1: /*0x100379162*/
        if ( v64 != 0x8000000000000000LL ) /*0x100379533*/
        {
          v69 = v73; /*0x10037a07d*/
          v70 = v72; /*0x10037a085*/
          v71 = v3; /*0x10037a089*/
          v62.i64[0] = (__int64)&unk_1012C15A8; /*0x10037a094*/
          v62.i64[1] = 20; /*0x10037a09b*/
          v65.i64[0] = (__int64)&v62; /*0x10037a0ad*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10037a0bb*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10037a0d0*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          goto LABEL_113; /*0x10037a0d0*/
        }
        v21 = v53; /*0x100379539*/
        v53 = 6; /*0x100379540*/
        if ( v21 == 6 ) /*0x100379549*/
        {
          v69 = v73; /*0x1003799b9*/
          v70 = v72; /*0x1003799c1*/
          v71 = v3; /*0x1003799c5*/
          v64 = 0x8000000000000000LL; /*0x1003799d7*/
          v4 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1003799ef*/
                 "value is missingtuple variant",
                 0x10u);
          goto LABEL_66; /*0x1003799ef*/
        }
        v65.i8[0] = v21; /*0x10037954f*/
        v65.i64[3] = *(_QWORD *)&v54[23]; /*0x100379567*/
        *(__int64 *)((char *)&v65.i64[2] + 1) = *(_QWORD *)&v54[16]; /*0x10037956f*/
        *(__int128 *)((char *)v65.i128 + 1) = *(_OWORD *)v54; /*0x10037957f*/
        if ( v21 == 3 ) /*0x100379584*/
        {
          v4 = *(_QWORD *)&v54[15]; /*0x100379591*/
          v47 = *(_QWORD *)&v54[23]; /*0x10037959f*/
          v10 = v12; /*0x1003795b4*/
          v6 = v11; /*0x1003795b7*/
          v64 = *(_QWORD *)&v54[7]; /*0x1003795ba*/
          if ( *(_QWORD *)&v54[7] == 0x8000000000000000LL ) /*0x1003795c7*/
          {
            v69 = v73; /*0x100379acd*/
            v70 = v72; /*0x100379ad5*/
            v71 = v3; /*0x100379ad9*/
            v64 = 0x8000000000000000LL; /*0x100379add*/
            goto LABEL_49; /*0x100379ae4*/
          }
          continue; /*0x1003795c7*/
        }
        v69 = v73; /*0x10037a0e1*/
        v70 = v72; /*0x10037a0e9*/
        v71 = v3; /*0x10037a0ed*/
        v4 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x10037a108*/
               &v65,
               &v68,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
        v64 = 0x8000000000000000LL; /*0x10037a119*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v65); /*0x10037a127*/
LABEL_66:
        v64 = 0x8000000000000000LL; /*0x1003799f2*/
LABEL_76:
        v23 = v74; /*0x100379b89*/
LABEL_77:
        v30 = __src; /*0x100379b8d*/
        *((_QWORD *)__src + 1) = v4; /*0x100379b94*/
        *v30 = 2; /*0x100379b98*/
        if ( v61 != 0x8000000000000000LL ) /*0x100379bac*/
        {
          v31 = v23; /*0x100379bbc*/
          if ( !v3 ) /*0x100379bbf*/
            goto LABEL_93; /*0x100379bbf*/
          goto LABEL_79; /*0x100379bbf*/
        }
LABEL_95:
        if ( v23 >= (__int64)0x8000000000000002LL && v23 ) /*0x100379f0f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379f20*/
        if ( v67 >= (__int64)0x8000000000000002LL && v67 ) /*0x100379f31*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379f3b*/
        if ( v66 >= (__int64)0x8000000000000002LL && v66 ) /*0x100379f4c*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379f56*/
        if ( 2 * v64 ) /*0x100379f62*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379f7b*/
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hebbee9ea7572bb11((__int64)v51); /*0x100379f87*/
LABEL_107:
        if ( v53 != 6 ) /*0x100379f93*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v53); /*0x100379f9c*/
        return __src;
      case 2: /*0x100379162*/
        if ( v66 != 0x8000000000000001LL ) /*0x1003792c5*/
        {
          v69 = v73; /*0x10037a01f*/
          v70 = v72; /*0x10037a027*/
          v71 = v3; /*0x10037a02b*/
          v62.i64[0] = (__int64)&unk_1012C0D58; /*0x10037a036*/
          v62.i64[1] = 8; /*0x10037a03d*/
          v65.i64[0] = (__int64)&v62; /*0x10037a04f*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10037a05d*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10037a072*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          goto LABEL_113; /*0x10037a077*/
        }
        v18 = v53; /*0x1003792cb*/
        v53 = 6; /*0x1003792d2*/
        if ( v18 == 6 ) /*0x1003792db*/
        {
          v69 = v73; /*0x100379947*/
          v70 = v72; /*0x10037994f*/
          v71 = v3; /*0x100379953*/
          v66 = 0x8000000000000001LL; /*0x10037996d*/
          v4 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x100379976*/
                 "value is missingtuple variant",
                 0x10u);
          goto LABEL_74; /*0x100379979*/
        }
        v62.i8[0] = v18; /*0x1003792e1*/
        v62.i64[3] = *(_QWORD *)&v54[23]; /*0x1003792f9*/
        *(__int64 *)((char *)&v62.i64[2] + 1) = *(_QWORD *)&v54[16]; /*0x100379301*/
        *(__int128 *)((char *)v62.i128 + 1) = *(_OWORD *)v54; /*0x100379311*/
        if ( v18 ) /*0x100379317*/
        {
          v65 = v62; /*0x10037932f*/
          if ( v62.i8[0] != 3 ) /*0x100379354*/
          {
            v69 = v73; /*0x10037a182*/
            v70 = v72; /*0x10037a18a*/
            v71 = v3; /*0x10037a18e*/
            v4 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x10037a1a9*/
                   &v65,
                   &v68,
                   &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
            v66 = 0x8000000000000001LL; /*0x10037a1bd*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v65); /*0x10037a1c1*/
            goto LABEL_74; /*0x10037a1c6*/
          }
          v4 = v65.i64[2]; /*0x100379364*/
          if ( v65.i64[1] == 0x8000000000000000LL ) /*0x10037937c*/
          {
            v69 = v73; /*0x100379b23*/
            v70 = v72; /*0x100379b2b*/
            v71 = v3; /*0x100379b2f*/
            goto LABEL_74; /*0x100379b2f*/
          }
          v46 = v65.i64[3]; /*0x100379389*/
          v10 = v12; /*0x100379393*/
          v49 = v65.i64[2]; /*0x100379396*/
          v6 = v65.i64[2]; /*0x10037939d*/
          v4 = (__int64)v63; /*0x1003793a0*/
          v66 = v65.i64[1]; /*0x1003793a7*/
          if ( v65.i64[1] == 0x8000000000000001LL ) /*0x1003793b1*/
          {
            v69 = v73; /*0x100379b39*/
            v70 = v72; /*0x100379b41*/
            v71 = v3; /*0x100379b45*/
            v4 = v49; /*0x100379b49*/
LABEL_74:
            v66 = 0x8000000000000001LL; /*0x100379b5a*/
            goto LABEL_76; /*0x100379b5e*/
          }
        }
        else
        {
          v66 = 0x8000000000000001LL; /*0x10037977f*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v62); /*0x10037978a*/
          v66 = 0x8000000000000000LL; /*0x10037979c*/
          v10 = v12; /*0x1003797a0*/
          v6 = v49; /*0x1003797a3*/
          v4 = (__int64)v63; /*0x1003797aa*/
        }
        continue; /*0x1003793b1*/
      case 3: /*0x100379162*/
        if ( v67 != 0x8000000000000001LL ) /*0x1003793ca*/
        {
          v69 = v73; /*0x100379fbe*/
          v70 = v72; /*0x100379fc6*/
          v71 = v3; /*0x100379fca*/
          v62.i64[0] = (__int64)&unk_1012C15BC; /*0x100379fd5*/
          v62.i64[1] = 18; /*0x100379fdc*/
          v65.i64[0] = (__int64)&v62; /*0x100379fee*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100379ffc*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x10037a011*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          goto LABEL_113; /*0x10037a016*/
        }
        v19 = v53; /*0x1003793d0*/
        v53 = 6; /*0x1003793d7*/
        if ( v19 == 6 ) /*0x1003793e0*/
        {
          v69 = v73; /*0x10037990c*/
          v70 = v72; /*0x100379914*/
          v71 = v3; /*0x100379918*/
          v67 = 0x8000000000000001LL; /*0x100379932*/
          v4 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x10037993b*/
                 "value is missingtuple variant",
                 0x10u);
          goto LABEL_75; /*0x10037993e*/
        }
        v62.i8[0] = v19; /*0x1003793e6*/
        v62.i64[3] = *(_QWORD *)&v54[23]; /*0x1003793fe*/
        *(__int64 *)((char *)&v62.i64[2] + 1) = *(_QWORD *)&v54[16]; /*0x100379406*/
        *(__int128 *)((char *)v62.i128 + 1) = *(_OWORD *)v54; /*0x100379416*/
        if ( v19 ) /*0x10037941c*/
        {
          v65 = v62; /*0x100379434*/
          if ( v62.i8[0] != 3 ) /*0x100379459*/
          {
            v69 = v73; /*0x10037a135*/
            v70 = v72; /*0x10037a13d*/
            v71 = v3; /*0x10037a141*/
            v4 = serde_json::value::de::_$LT$impl$u20$serde_json..value..Value$GT$::invalid_type::hbfb1b717da5be4f6( /*0x10037a15c*/
                   &v65,
                   &v68,
                   &anon_daf50d54a2d3ecbdf54de6a8568b21ab_29);
            v67 = 0x8000000000000001LL; /*0x10037a170*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v65); /*0x10037a174*/
            goto LABEL_75; /*0x10037a179*/
          }
          v4 = v65.i64[2]; /*0x100379469*/
          if ( v65.i64[1] == 0x8000000000000000LL ) /*0x100379481*/
          {
            v69 = v73; /*0x100379b0d*/
            v70 = v72; /*0x100379b15*/
            v71 = v3; /*0x100379b19*/
            goto LABEL_75; /*0x100379b1d*/
          }
          v45 = v65.i64[3]; /*0x10037948e*/
          v48 = v65.i64[2]; /*0x100379498*/
          v10 = v65.i64[2]; /*0x10037949f*/
          v6 = v11; /*0x1003794a2*/
          v4 = (__int64)v63; /*0x1003794a5*/
          v67 = v65.i64[1]; /*0x1003794ac*/
          if ( v65.i64[1] == 0x8000000000000001LL ) /*0x1003794b6*/
          {
            v69 = v73; /*0x100379b64*/
            v70 = v72; /*0x100379b6c*/
            v71 = v3; /*0x100379b70*/
            v4 = v48; /*0x100379b74*/
LABEL_75:
            v67 = 0x8000000000000001LL; /*0x100379b85*/
            goto LABEL_76; /*0x100379b85*/
          }
        }
        else
        {
          v67 = 0x8000000000000001LL; /*0x1003797c0*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v62); /*0x1003797cb*/
          v67 = 0x8000000000000000LL; /*0x1003797dd*/
          v10 = v48; /*0x1003797e1*/
LABEL_44:
          v6 = v11; /*0x10037973d*/
          v4 = (__int64)v63; /*0x100379740*/
        }
        continue; /*0x1003794b6*/
      case 4: /*0x100379162*/
        if ( v59 != 2 ) /*0x1003791ee*/
        {
          v69 = v73; /*0x100379dec*/
          v70 = v72; /*0x100379df4*/
          v71 = v3; /*0x100379df8*/
          v62.i64[0] = (__int64)&unk_1012C15CE; /*0x100379e03*/
          v62.i64[1] = 18; /*0x100379e0a*/
          v65.i64[0] = (__int64)&v62; /*0x100379e1c*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100379e2a*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x100379e3f*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
LABEL_113:
          v4 = v36; /*0x10037a0d5*/
          goto LABEL_49; /*0x10037a0d8*/
        }
        v14 = v53; /*0x1003791f4*/
        v53 = 6; /*0x1003791fb*/
        if ( v14 == 6 ) /*0x100379204*/
        {
LABEL_64:
          v69 = v73; /*0x10037997e*/
          v70 = v72; /*0x10037998a*/
          v71 = v3; /*0x10037998e*/
          v4 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1003799ad*/
                 "value is missingtuple variant",
                 0x10u);
          goto LABEL_76; /*0x1003799b0*/
        }
        v62.i8[0] = v14; /*0x10037920a*/
        v62.i64[3] = *(_QWORD *)&v54[23]; /*0x100379222*/
        *(__int128 *)((char *)v62.i128 + 9) = *(_OWORD *)&v54[8]; /*0x100379236*/
        *(__int64 *)((char *)v62.i64 + 1) = *(_QWORD *)v54; /*0x10037923a*/
        if ( v14 ) /*0x100379240*/
        {
          v65 = v62; /*0x100379258*/
          v15 = serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_i64::hc851276125723572(&v65); /*0x100379282*/
          v50 = v16; /*0x100379287*/
          v17 = v15 + 1; /*0x100379291*/
          v10 = v12; /*0x100379294*/
          v6 = v11; /*0x100379297*/
          v4 = (__int64)v63; /*0x10037929a*/
          v59 = v17; /*0x1003792a1*/
          if ( v17 == 2 ) /*0x1003792ac*/
          {
            v69 = v73; /*0x100379aed*/
            v70 = v72; /*0x100379af5*/
            v71 = v3; /*0x100379af9*/
            v4 = v50; /*0x100379afd*/
LABEL_49:
            v23 = v74; /*0x100379808*/
            goto LABEL_77; /*0x100379816*/
          }
        }
        else
        {
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v62); /*0x100379753*/
          v10 = v12; /*0x100379758*/
          v6 = v11; /*0x10037975b*/
          v4 = (__int64)v63; /*0x10037975e*/
          v59 = 0; /*0x100379765*/
        }
        continue; /*0x1003792ac*/
      case 5: /*0x100379162*/
        if ( v74 != 0x8000000000000001LL ) /*0x1003795e0*/
        {
          v69 = v73; /*0x100379d2a*/
          v70 = v72; /*0x100379d32*/
          v71 = v3; /*0x100379d36*/
          v62.i64[0] = (__int64)&unk_1012C0D60; /*0x100379d41*/
          v62.i64[1] = 8; /*0x100379d48*/
          v65.i64[0] = (__int64)&v62; /*0x100379d5a*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100379d68*/
          v36 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x100379d7d*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          goto LABEL_113; /*0x100379d82*/
        }
        v22 = v53; /*0x1003795e6*/
        v53 = 6; /*0x1003795ed*/
        if ( v22 == 6 ) /*0x1003795f6*/
        {
          v69 = v73; /*0x100379a06*/
          v70 = v72; /*0x100379a0e*/
          v71 = v3; /*0x100379a12*/
          v74 = 0x8000000000000001LL; /*0x100379a2c*/
          v4 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x100379a35*/
                 "value is missingtuple variant",
                 0x10u);
          v23 = 0x8000000000000001LL; /*0x100379a38*/
          goto LABEL_77; /*0x100379a3b*/
        }
        v65.i8[0] = v22; /*0x1003795fc*/
        v65.i64[3] = *(_QWORD *)&v54[23]; /*0x100379614*/
        *(__int64 *)((char *)&v65.i64[2] + 1) = *(_QWORD *)&v54[16]; /*0x10037961c*/
        *(__int128 *)((char *)v65.i128 + 1) = *(_OWORD *)v54; /*0x10037962c*/
        v74 = 0x8000000000000001LL; /*0x100379644*/
        serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h72c2534d8844a91e( /*0x100379664*/
          &v62,
          &v65,
          &anon_3e4c14ac1826b92abbb84b981a88c995_446,
          21,
          &anon_3e4c14ac1826b92abbb84b981a88c995_469,
          2);
        v4 = v62.i64[1]; /*0x100379670*/
        if ( v62.i64[0] == 0x8000000000000001LL ) /*0x100379684*/
        {
          v69 = v73; /*0x100379aa7*/
          v70 = v72; /*0x100379aaf*/
          v71 = v3; /*0x100379ab3*/
          v23 = 0x8000000000000001LL; /*0x100379ac1*/
          goto LABEL_77; /*0x100379ac4*/
        }
        v74 = v62.i64[0]; /*0x10037968a*/
        v43 = v62.i64[2]; /*0x100379695*/
        v2 = v62.i8[24]; /*0x10037969c*/
        v58[0] = *(__int32 *)((char *)&v62.i32[6] + 1); /*0x1003796b0*/
        *(_DWORD *)((char *)v58 + 3) = v62.i32[7]; /*0x1003796b6*/
        v56 = v62.i64[1]; /*0x1003796bc*/
LABEL_43:
        v10 = v12; /*0x10037973a*/
        goto LABEL_44; /*0x10037973a*/
      case 6: /*0x100379162*/
        if ( v61 != 0x8000000000000000LL ) /*0x1003796d9*/
        {
          v69 = v73; /*0x100379e4d*/
          v70 = v72; /*0x100379e55*/
          v71 = v3; /*0x100379e59*/
          v62.i64[0] = (__int64)&unk_1012C15E0; /*0x100379e64*/
          v62.i64[1] = 19; /*0x100379e6b*/
          v65.i64[0] = (__int64)&v62; /*0x100379e7d*/
          v65.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100379e8b*/
          v37 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x100379ea0*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)&v65);
          v38 = __src; /*0x100379ea5*/
          *((_QWORD *)__src + 1) = v37; /*0x100379eac*/
          *v38 = 2; /*0x100379eb0*/
          v23 = v74; /*0x100379eb7*/
          v31 = v74; /*0x100379ecc*/
          if ( !v3 ) /*0x100379ecf*/
          {
LABEL_93:
            if ( v61 ) /*0x100379edf*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379ef5*/
              v23 = v31; /*0x100379efa*/
            }
            goto LABEL_95; /*0x100379efa*/
          }
LABEL_79:
          v32 = v55 + 24; /*0x100379bc5*/
          do /*0x100379be7*/
          {
            if ( *(_QWORD *)(v32 - 8) ) /*0x100379bed*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100379bfe*/
              v23 = v31; /*0x100379c03*/
            }
            v32 += 40; /*0x100379be0*/
            --v3; /*0x100379be4*/
          }
          while ( v3 ); /*0x100379be7*/
          goto LABEL_93; /*0x100379be7*/
        }
        v61 = 0x8000000000000000LL; /*0x1003796df*/
        _$LT$serde_json..value..de..MapDeserializer$u20$as$u20$serde_core..de..MapAccess$GT$::next_value_seed::h89fd4a039bb2ba5b( /*0x1003796f4*/
          &v65,
          v51);
        if ( v65.i64[0] == 0x8000000000000000LL ) /*0x100379717*/
        {
          v69 = v73; /*0x100379a7c*/
          v70 = v72; /*0x100379a84*/
          v29 = __src; /*0x100379a88*/
          *((_QWORD *)__src + 1) = v65.i64[1]; /*0x100379a8f*/
          *v29 = 2; /*0x100379a93*/
          v23 = v74; /*0x100379a9a*/
          goto LABEL_95; /*0x100379a9e*/
        }
        v3 = v65.i64[2]; /*0x10037971d*/
        v55 = v65.i64[1]; /*0x100379724*/
        v72 = v65.i64[1]; /*0x10037972b*/
        v61 = v65.i64[0]; /*0x10037972f*/
        v73 = v65.i64[0]; /*0x100379736*/
        goto LABEL_43; /*0x100379736*/
      case 7: /*0x100379162*/
        v20 = v53; /*0x1003794c1*/
        v53 = 6; /*0x1003794c8*/
        if ( v20 == 6 ) /*0x1003794d1*/
          goto LABEL_64; /*0x1003794d1*/
        v65.i64[3] = *(_QWORD *)&v54[23]; /*0x1003794e9*/
        *(__int128 *)((char *)v65.i128 + 9) = *(_OWORD *)&v54[8]; /*0x1003794fd*/
        *(__int64 *)((char *)v65.i64 + 1) = *(_QWORD *)v54; /*0x100379501*/
        v65.i8[0] = v20; /*0x100379504*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v65); /*0x100379511*/
        goto LABEL_43; /*0x100379516*/
      case 8: /*0x100379162*/
        v69 = v73; /*0x10037981f*/
        v70 = v72; /*0x100379827*/
        v71 = v3; /*0x10037982b*/
        if ( v64 == 0x8000000000000000LL ) /*0x100379844*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100379846*/
          v47 = 2; /*0x100379850*/
          v24 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x100379861*/
          if ( !v24 ) /*0x100379869*/
          {
            v64 = 0x8000000000000000LL; /*0x10037a215*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10037a226*/
          }
          *v24 = 27953; /*0x10037986f*/
          v63 = v24; /*0x100379874*/
          v64 = 2; /*0x100379880*/
        }
        v75 &= 1u; /*0x100379887*/
        v25 = v66; /*0x10037988b*/
        if ( v66 == 0x8000000000000001LL ) /*0x10037989c*/
          v25 = 0x8000000000000000LL; /*0x10037989c*/
        v26 = v67; /*0x1003798a0*/
        if ( v67 == 0x8000000000000001LL ) /*0x1003798a7*/
          v26 = 0x8000000000000000LL; /*0x1003798a7*/
        v27 = 0; /*0x1003798b6*/
        if ( v59 != 2 ) /*0x1003798bb*/
          v27 = v59; /*0x1003798bb*/
        if ( v74 == 0x8000000000000001LL ) /*0x1003798c3*/
        {
          v2 = 0; /*0x1003798c9*/
          v28 = 0x8000000000000000LL; /*0x1003798cc*/
        }
        else
        {
          *(_DWORD *)&v57[3] = *(_DWORD *)((char *)v58 + 3); /*0x100379c14*/
          *(_DWORD *)v57 = v58[0]; /*0x100379c1a*/
          v28 = v74; /*0x100379c20*/
        }
        v33 = v61; /*0x100379c26*/
        v34 = v55; /*0x100379c35*/
        if ( v61 == 0x8000000000000000LL ) /*0x100379c3c*/
        {
          v34 = 8; /*0x100379c3c*/
          v33 = 0; /*0x100379c40*/
          v3 = 0; /*0x100379c44*/
        }
        v35 = (char *)__src; /*0x100379c4f*/
        *((_QWORD *)__src + 2) = v64; /*0x100379c56*/
        *((_QWORD *)v35 + 3) = v63; /*0x100379c61*/
        *((_QWORD *)v35 + 4) = v47; /*0x100379c6c*/
        *(_QWORD *)v35 = v27; /*0x100379c70*/
        *((_QWORD *)v35 + 1) = v50; /*0x100379c7a*/
        *((_QWORD *)v35 + 5) = v33; /*0x100379c7e*/
        *((_QWORD *)v35 + 6) = v34; /*0x100379c82*/
        *((_QWORD *)v35 + 7) = v3; /*0x100379c86*/
        *((_QWORD *)v35 + 8) = v25; /*0x100379c8a*/
        *((_QWORD *)v35 + 9) = v11; /*0x100379c8e*/
        *((_QWORD *)v35 + 10) = v46; /*0x100379c99*/
        *((_QWORD *)v35 + 11) = v26; /*0x100379c9d*/
        *((_QWORD *)v35 + 12) = v12; /*0x100379ca1*/
        *((_QWORD *)v35 + 13) = v45; /*0x100379cac*/
        *((_QWORD *)v35 + 14) = v28; /*0x100379cb0*/
        *((_QWORD *)v35 + 15) = v56; /*0x100379cbb*/
        *((_QWORD *)v35 + 16) = v43; /*0x100379cc6*/
        v35[136] = v2; /*0x100379ccd*/
        *(_DWORD *)(v35 + 137) = *(_DWORD *)v57; /*0x100379cda*/
        *((_DWORD *)v35 + 35) = *(_DWORD *)&v57[3]; /*0x100379ce6*/
        v35[144] = v75; /*0x100379cf0*/
        memcpy(__dst, v35, sizeof(__dst)); /*0x100379d02*/
        if ( v52 ) /*0x100379d0f*/
        {
          v40 = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x10037a1e0*/
                  v44,
                  (__int64)&anon_74e6840f16bdf2c9c0b26d09ee3976be_12,
                  (__int64)&anon_74e6840f16bdf2c9c0b26d09ee3976be_13);
          v41 = __src; /*0x10037a1e5*/
          *((_QWORD *)__src + 1) = v40; /*0x10037a1ec*/
          *v41 = 2; /*0x10037a1f0*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h7a65c6381a6c4fba(__dst); /*0x10037a1fe*/
        }
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hebbee9ea7572bb11((__int64)v51); /*0x100379d1c*/
        goto LABEL_107; /*0x100379d21*/
    }
  }
}