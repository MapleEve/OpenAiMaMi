// __ZN13codexmate_lib8commands5voice21test_voice_asr_config @ 0x100690340 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::test_voice_asr_config::h079e2a5806866f59(
        char *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        double a6,
        double a7)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  char v20; // di
  char v21; // r8
  char v22; // r9
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rbx
  __int128 v30; // kr00_16
  char *v31; // r13
  void *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  void *v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // rdx
  __int128 v41; // kr10_16
  signed __int64 v42; // rt0
  char *v43; // rsi
  __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdx
  char v50; // r12
  char *v51; // rbx
  _DWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  _OWORD __src[71]; // [rsp+20h] [rbp-34A0h] BYREF
  __int64 v57; // [rsp+498h] [rbp-3028h]
  __int64 v58; // [rsp+1498h] [rbp-2028h]
  __int64 v59; // [rsp+2498h] [rbp-1028h]
  __int64 v60; // [rsp+2B98h] [rbp-928h] BYREF
  __int128 v61; // [rsp+2BA0h] [rbp-920h]
  _BYTE __dst[952]; // [rsp+2CE0h] [rbp-7E0h] BYREF
  char v63[24]; // [rsp+3098h] [rbp-428h] BYREF
  __int64 v64; // [rsp+30B0h] [rbp-410h] BYREF
  unsigned __int128 v65; // [rsp+30B8h] [rbp-408h]
  __int64 v66; // [rsp+30C8h] [rbp-3F8h]
  _BYTE v67[144]; // [rsp+30D0h] [rbp-3F0h] BYREF
  _QWORD v68[22]; // [rsp+3160h] [rbp-360h] BYREF
  __int64 v69; // [rsp+3210h] [rbp-2B0h] BYREF
  __int64 v70; // [rsp+3218h] [rbp-2A8h]
  __int128 v71; // [rsp+3220h] [rbp-2A0h]
  __int128 v72; // [rsp+3230h] [rbp-290h]
  __int128 v73; // [rsp+3240h] [rbp-280h]
  __int64 v74; // [rsp+3250h] [rbp-270h]
  __int64 v75; // [rsp+3258h] [rbp-268h]
  __int64 v76; // [rsp+3260h] [rbp-260h]
  _QWORD v77[3]; // [rsp+3358h] [rbp-168h] BYREF
  __int128 v78; // [rsp+3370h] [rbp-150h]
  __int64 v79; // [rsp+3380h] [rbp-140h]
  unsigned __int128 v80; // [rsp+3388h] [rbp-138h]
  __int64 v81; // [rsp+3398h] [rbp-128h]
  unsigned __int128 v82; // [rsp+33A0h] [rbp-120h]
  __int64 v83; // [rsp+33B0h] [rbp-110h]
  __int64 v84; // [rsp+33B8h] [rbp-108h]
  __int128 v85; // [rsp+33C0h] [rbp-100h] BYREF
  __int64 v86; // [rsp+33D0h] [rbp-F0h]
  __int128 v87; // [rsp+33D8h] [rbp-E8h] BYREF
  __int64 v88; // [rsp+33E8h] [rbp-D8h]
  __int64 v89; // [rsp+33F0h] [rbp-D0h] BYREF
  __int64 v90; // [rsp+33F8h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+3400h] [rbp-C0h]
  __int64 v92; // [rsp+3408h] [rbp-B8h]
  _QWORD *v93; // [rsp+3410h] [rbp-B0h]
  __int128 v94; // [rsp+3418h] [rbp-A8h] BYREF
  __int64 v95; // [rsp+3428h] [rbp-98h]
  __int64 v96; // [rsp+3430h] [rbp-90h] BYREF
  __int64 v97; // [rsp+3438h] [rbp-88h]
  __int64 v98; // [rsp+3440h] [rbp-80h]
  __int64 v99; // [rsp+3448h] [rbp-78h] BYREF
  __int64 v100; // [rsp+3450h] [rbp-70h]
  __int64 v101; // [rsp+3458h] [rbp-68h]
  __int64 v102; // [rsp+3460h] [rbp-60h] BYREF
  __int64 v103; // [rsp+3468h] [rbp-58h]
  __int64 v104; // [rsp+3470h] [rbp-50h]
  __int64 *v105; // [rsp+3478h] [rbp-48h]
  _QWORD *v106; // [rsp+3480h] [rbp-40h]
  _QWORD *v107; // [rsp+3488h] [rbp-38h]
  char *v108; // [rsp+3490h] [rbp-30h]

  v59 = 0; /*0x100690354*/
  v58 = 0; /*0x100690363*/
  v57 = 0; /*0x100690372*/
  v107 = a4; /*0x100690381*/
  v9 = a2[1]; /*0x10069038e*/
  v93 = a2; /*0x100690392*/
  v10 = a2[2]; /*0x100690399*/
  v84 = v9; /*0x1006903a4*/
  v105 = a3; /*0x1006903ab*/
  v106 = a5; /*0x1006903af*/
  codexmate_lib::core::voice::asr::normalize_provider::h644de565ae8d1850(&v90, v9, v10); /*0x1006903b3*/
  v11 = v92; /*0x1006903b8*/
  v108 = a1; /*0x1006903c3*/
  if ( v92 != 11 || (v12 = v91, *(_QWORD *)v91 ^ 0x657053656C707061LL | *(_QWORD *)(v91 + 3) ^ 0x686365657053656CLL) ) /*0x1006903eb*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v90); /*0x100690402*/
    v98 = v105[2]; /*0x10069040f*/
    v13 = *v105; /*0x100690413*/
    v97 = v105[1]; /*0x10069041a*/
    v96 = v13; /*0x100690421*/
    v101 = v107[2]; /*0x100690430*/
    v14 = *v107; /*0x100690434*/
    v100 = v107[1]; /*0x10069043b*/
    v99 = v14; /*0x10069043f*/
    v15 = v106[1]; /*0x10069044a*/
    v102 = *v106; /*0x10069044e*/
    v103 = v15; /*0x100690452*/
    v104 = v106[2]; /*0x10069045a*/
    v94 = __src[0]; /*0x10069046c*/
    v95 = *(_QWORD *)&__src[1]; /*0x100690481*/
    if ( !codexmate_lib::core::voice::asr::AsrConfig::is_configured::h081cdf8b8b918edc((__int64 *)&v94) ) /*0x100690499*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v94, &v90); /*0x1006906ec*/
      v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1006906fb*/
      if ( !v32 ) /*0x100690703*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1006911a7*/
      qmemcpy(v32, "ASR config is incomplete", 24); /*0x10069072f*/
      v31 = v108; /*0x100690732*/
      *((_QWORD *)v108 + 1) = 24; /*0x100690736*/
      *((_QWORD *)v31 + 2) = v32; /*0x10069073e*/
      *((_QWORD *)v31 + 3) = 24; /*0x100690742*/
      *(_QWORD *)v31 = 0x8000000000000000LL; /*0x100690754*/
      goto LABEL_22; /*0x100690754*/
    }
    if ( v11 == 12 && !(*(_QWORD *)v91 ^ 0x75466E7579696C61LL | *(unsigned int *)(v91 + 8) ^ 0x7273416ELL) ) /*0x1006904c5*/
    {
      tokio::runtime::builder::Builder::new_current_thread::h930cc37e1b2606dc(__src); /*0x100690c2b*/
      *(_WORD *)((char *)&__src[13] + 5) = 257; /*0x100690c30*/
      tokio::runtime::builder::Builder::build::h7c8409c594394733(__dst, __src); /*0x100690c4a*/
      if ( *(_QWORD *)__dst == 2 ) /*0x100690c5a*/
      {
        *(_QWORD *)&v85 = *(_QWORD *)&__dst[8]; /*0x100690c67*/
        v68[0] = &v85; /*0x100690c75*/
        v68[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100690c83*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v69, &loc_1017C3262, v68); /*0x100690c9f*/
        v43 = v108; /*0x100690ca4*/
        if ( (v85 & 3) == 1 ) /*0x100690cb7*/
        {
          v44 = v85 - 1; /*0x100690cb9*/
          v45 = *(_QWORD *)(v85 - 1); /*0x100690cbd*/
          v46 = *(_QWORD *)(v85 + 7); /*0x100690cc1*/
          if ( *(_QWORD *)v46 ) /*0x100690cc5*/
            (*(void (__fastcall **)(__int64, char *))v46)(v45, v108); /*0x100690cd1*/
          v47 = *(_QWORD *)(v46 + 8); /*0x100690cd3*/
          if ( v47 ) /*0x100690cda*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v45, v47, *(_QWORD *)(v46 + 16)); /*0x100690ce3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, 24, 8); /*0x100690cf5*/
          v43 = v108; /*0x100690cfa*/
        }
        v48 = v69; /*0x100690d05*/
        v49 = v70; /*0x100690d0c*/
        v64 = v69; /*0x100690d13*/
        v65 = __PAIR128__(v71, v70); /*0x100690d1a*/
        *((_QWORD *)v43 + 3) = v71; /*0x100690d28*/
        *((_QWORD *)v43 + 2) = v49; /*0x100690d2c*/
        *((_QWORD *)v43 + 1) = v48; /*0x100690d30*/
        *(_QWORD *)v43 = 0x8000000000000000LL; /*0x100690d3e*/
        core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h2ec0ded306a9acaf(__src); /*0x100690d48*/
        v50 = 1; /*0x100690d4d*/
      }
      else
      {
        v61 = *(_OWORD *)&__dst[16]; /*0x100690de3*/
        v60 = *(_QWORD *)&__dst[8]; /*0x100690dea*/
        v72 = *(_OWORD *)&__dst[32]; /*0x100690dff*/
        v73 = *(_OWORD *)&__dst[48]; /*0x100690e14*/
        v74 = *(_QWORD *)&__dst[64]; /*0x100690e30*/
        v75 = *(_QWORD *)&__dst[72]; /*0x100690e3e*/
        v76 = *(_QWORD *)&__dst[80]; /*0x100690e4c*/
        v65 = *(_OWORD *)&__dst[16]; /*0x100690e6f*/
        v64 = *(_QWORD *)&__dst[8]; /*0x100690e76*/
        v71 = *(_OWORD *)&__dst[16]; /*0x100690e84*/
        v70 = *(_QWORD *)&__dst[8]; /*0x100690e8b*/
        v69 = *(_QWORD *)__dst; /*0x100690e92*/
        core::ptr::drop_in_place$LT$tokio..runtime..builder..Builder$GT$::h2ec0ded306a9acaf(__src); /*0x100690ea3*/
        v51 = v108; /*0x100690ea8*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v64, &v102); /*0x100690eb7*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v60, &v96); /*0x100690eca*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v99); /*0x100690eda*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, &v99); /*0x100690edf*/
        v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100690eee*/
        if ( !v52 ) /*0x100690ef6*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1006911c9*/
        *v52 = 1869903201; /*0x100690efc*/
        *(_OWORD *)&__dst[8] = v65; /*0x100690f1e*/
        *(_QWORD *)__dst = v64; /*0x100690f25*/
        *(_QWORD *)&__dst[24] = v60; /*0x100690f3a*/
        *(_OWORD *)&__dst[32] = v61; /*0x100690f41*/
        *(_OWORD *)&__dst[48] = __src[0]; /*0x100690f64*/
        *(_QWORD *)&__dst[64] = *(_QWORD *)&__src[1]; /*0x100690f79*/
        *(_QWORD *)&__dst[72] = 4; /*0x100690f80*/
        *(_QWORD *)&__dst[80] = v52; /*0x100690f8b*/
        *(_QWORD *)&__dst[88] = 4; /*0x100690f92*/
        *(_DWORD *)&__dst[96] = 16000; /*0x100690f9d*/
        *(_QWORD *)&__src[0] = __dst; /*0x100690fa7*/
        BYTE8(__src[0]) = 0; /*0x100690fae*/
        tokio::runtime::runtime::Runtime::block_on::h4a2c334b3603d9ce(v68, &v69, __src, &off_101967C08); /*0x100690fd1*/
        if ( __OFSUB__(0, v68[0]) ) /*0x100690fd8*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceAsrConfigPayload$GT$::ha09a02f17b7d9880( /*0x100690fec*/
            __dst,
            a6);
          *(_QWORD *)&__dst[16] = v107[2]; /*0x100690ff9*/
          v53 = *v107; /*0x100691000*/
          *(_QWORD *)&__dst[8] = v107[1]; /*0x100691007*/
          *(_QWORD *)__dst = v53; /*0x10069100e*/
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72((__int64)__src, (__int64 *)__dst); /*0x100691026*/
          qmemcpy(v51, __src, 0x68u); /*0x10069103a*/
          v50 = 0; /*0x10069103d*/
        }
        else
        {
          *((_QWORD *)v51 + 3) = v68[2]; /*0x100691119*/
          v55 = v68[0]; /*0x10069111d*/
          *((_QWORD *)v51 + 2) = v68[1]; /*0x10069112b*/
          *((_QWORD *)v51 + 1) = v55; /*0x10069112f*/
          *(_QWORD *)v51 = 0x8000000000000000LL; /*0x100691133*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceAsrConfigPayload$GT$::ha09a02f17b7d9880( /*0x10069113d*/
            __dst,
            a6);
          v50 = 1; /*0x100691142*/
        }
        core::ptr::drop_in_place$LT$tokio..runtime..runtime..Runtime$GT$::h0793492806f28046(&v69); /*0x10069114c*/
      }
      if ( (_QWORD)v94 ) /*0x10069115b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v94 + 1), v94, 1); /*0x100691169*/
      if ( v96 ) /*0x100691178*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1); /*0x100691186*/
      v31 = v108; /*0x10069118e*/
      if ( v50 ) /*0x100691192*/
        goto LABEL_26; /*0x100691192*/
    }
    else
    {
      v16 = v104; /*0x1006904cf*/
      while ( 1 ) /*0x1006904eb*/
      {
        v17 = v16; /*0x1006904eb*/
        if ( !v16 ) /*0x1006904f1*/
          break; /*0x1006904f1*/
        v18 = v103 + v16; /*0x1006904f3*/
        v19 = *(char *)(v103 + v17 - 1); /*0x1006904f7*/
        if ( v19 >= 0 ) /*0x1006904fd*/
        {
          v16 = v18 - 1 - v103; /*0x1006904e3*/
          if ( v19 != 47 ) /*0x1006904e9*/
            break; /*0x1006904e9*/
        }
        else
        {
          v20 = *(_BYTE *)(v18 - 2); /*0x1006904ff*/
          if ( v20 >= -64 ) /*0x100690507*/
          {
            v23 = v18 - 2; /*0x10069052e*/
            v25 = v20 & 0x1F; /*0x100690532*/
          }
          else
          {
            v21 = *(_BYTE *)(v18 - 3); /*0x100690509*/
            if ( v21 >= -64 ) /*0x100690512*/
            {
              v23 = v18 - 3; /*0x100690537*/
              v24 = v21 & 0xF; /*0x10069053b*/
            }
            else
            {
              v22 = *(_BYTE *)(v18 - 4); /*0x100690514*/
              v23 = v18 - 4; /*0x100690519*/
              v24 = ((v22 & 7) << 6) | v21 & 0x3F; /*0x100690529*/
            }
            v25 = (v24 << 6) | v20 & 0x3F; /*0x100690546*/
          }
          v16 = v23 - v103; /*0x100690551*/
          if ( ((v25 << 6) | v19 & 0x3F) != 0x2F ) /*0x100690557*/
            break; /*0x100690557*/
        }
      }
      v60 = v103; /*0x100690559*/
      *(_QWORD *)&v61 = v17; /*0x100690560*/
      v69 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v100, v101); /*0x100690574*/
      v70 = v26; /*0x10069057b*/
      *(_QWORD *)&__src[0] = &v60; /*0x100690589*/
      *((_QWORD *)&__src[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100690597*/
      *(_QWORD *)&__src[1] = &v69; /*0x1006905a5*/
      *((_QWORD *)&__src[1] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006905ac*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, (char *)&loc_1017C3225 + 2, __src); /*0x1006905c8*/
      v27 = *(_QWORD *)__dst; /*0x1006905cd*/
      v28 = *(_QWORD *)&__dst[8]; /*0x1006905d4*/
      v29 = *(_QWORD *)&__dst[16]; /*0x1006905db*/
      _$LT$reqwest..blocking..client..ClientBuilder$u20$as$u20$core..default..Default$GT$::default::hcdeb91c9f4bc265f( /*0x1006905e9*/
        __src,
        a6,
        a7);
      *((_QWORD *)&__src[58] + 1) = 15; /*0x1006905ee*/
      LODWORD(__src[59]) = 0; /*0x1006905f9*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x100690619*/
      reqwest::blocking::client::ClientBuilder::build::h8f43bce474d3a935(&v85, __dst); /*0x100690628*/
      if ( (_DWORD)v86 == 1000000001 ) /*0x100690637*/
      {
        v89 = v85; /*0x100690644*/
        *(_QWORD *)__dst = &v89; /*0x100690652*/
        *(_QWORD *)&__dst[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100690660*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, (char *)&loc_1017C327C + 1, __dst); /*0x10069067c*/
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v89); /*0x100690688*/
        v30 = __src[0]; /*0x10069069b*/
        v78 = __src[0]; /*0x1006906a2*/
        v79 = *(_QWORD *)&__src[1]; /*0x1006906b0*/
        v31 = v108; /*0x1006906b7*/
        *((_QWORD *)v108 + 3) = *(_QWORD *)&__src[1]; /*0x1006906bb*/
        *(_OWORD *)(v31 + 8) = v30; /*0x1006906c3*/
        *(_QWORD *)v31 = 0x8000000000000000LL; /*0x1006906d1*/
        if ( v27 ) /*0x1006906d8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1006906e5*/
LABEL_22:
        if ( (_QWORD)v94 ) /*0x100690762*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v94 + 1), v94, 1); /*0x100690770*/
        if ( v96 ) /*0x10069077f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, 1); /*0x10069078d*/
LABEL_26:
        v33 = v99; /*0x100690792*/
        if ( !v99 ) /*0x100690799*/
          goto LABEL_29; /*0x100690799*/
        v34 = v100; /*0x10069079b*/
        goto LABEL_28; /*0x10069079b*/
      }
      v78 = v85; /*0x100690904*/
      v79 = v86; /*0x100690912*/
      v87 = v85; /*0x100690919*/
      v88 = v86; /*0x100690927*/
      *(_QWORD *)__dst = v27; /*0x10069092e*/
      *(_QWORD *)&__dst[8] = v28; /*0x100690935*/
      *(_QWORD *)&__dst[16] = v29; /*0x10069093c*/
      memset(__src, 1, 24); /*0x10069095b*/
      reqwest::blocking::client::Client::request::hfa50b4d156e7c333(&v69); /*0x100690981*/
      *(_QWORD *)__dst = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v97, v98); /*0x100690996*/
      *(_QWORD *)&__dst[8] = v40; /*0x10069099d*/
      *(_QWORD *)&__src[0] = __dst; /*0x1006909a4*/
      *((_QWORD *)&__src[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006909ab*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v63, &unk_1017B931C, __src); /*0x1006909c7*/
      reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(&v60, &v69); /*0x1006909f3*/
      reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(&v64, &v60); /*0x100690a09*/
      if ( v64 == 3 ) /*0x100690a19*/
      {
        v69 = v65; /*0x100690a26*/
        *(_QWORD *)__dst = &v69; /*0x100690a2d*/
        *(_QWORD *)&__dst[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x100690a3b*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, (char *)&loc_1017C324A + 1, __dst); /*0x100690a57*/
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v69); /*0x100690a63*/
        v41 = __src[0]; /*0x100690a76*/
        v82 = __src[0]; /*0x100690a7d*/
        v83 = *(_QWORD *)&__src[1]; /*0x100690a8b*/
        v31 = v108; /*0x100690a92*/
        *((_QWORD *)v108 + 3) = *(_QWORD *)&__src[1]; /*0x100690a96*/
        *(_OWORD *)(v31 + 8) = v41; /*0x100690a9e*/
        *(_QWORD *)v31 = 0x8000000000000000LL; /*0x100690aac*/
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v87) ) /*0x100690ab7*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v87); /*0x100690acb*/
        goto LABEL_22; /*0x100690ad0*/
      }
      v81 = v66; /*0x100690ae0*/
      v80 = v65; /*0x100690af5*/
      memcpy(&v68[4], v67, 0x90u); /*0x100690b0f*/
      v83 = v66; /*0x100690b1b*/
      v82 = v65; /*0x100690b37*/
      *(_OWORD *)&v68[1] = v65; /*0x100690b3e*/
      v68[3] = v66; /*0x100690b4c*/
      v68[0] = v64; /*0x100690b53*/
      v42 = _InterlockedDecrement64((volatile signed __int64 *)v87); /*0x100690b61*/
      v31 = v108; /*0x100690b65*/
      if ( !v42 ) /*0x100690b69*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v87); /*0x100690b75*/
      if ( (unsigned __int16)(LOWORD(v68[13]) - 200) >= 0x64u ) /*0x100690b8a*/
      {
        LOWORD(v60) = v68[13]; /*0x100690d55*/
        memcpy(__src, v68, 0xB0u); /*0x100690d75*/
        reqwest::blocking::response::Response::text::h6135e3e5df4ac470(__dst, __src); /*0x100690d84*/
        if ( __OFSUB__(0, *(_QWORD *)__dst) ) /*0x100690d8b*/
        {
          v69 = 0; /*0x100690d98*/
          v70 = 1; /*0x100690da3*/
          *(_QWORD *)&v71 = 0; /*0x100690dae*/
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(*(_QWORD *)&__dst[8]); /*0x100690dc0*/
        }
        else
        {
          *(_QWORD *)&v71 = *(_QWORD *)&__dst[16]; /*0x10069104c*/
          v70 = *(_QWORD *)&__dst[8]; /*0x100691061*/
          v69 = *(_QWORD *)__dst; /*0x100691068*/
        }
        *(_QWORD *)&__src[0] = &v60; /*0x10069106f*/
        *((_QWORD *)&__src[0] + 1) = _$LT$http..status..StatusCode$u20$as$u20$core..fmt..Display$GT$::fmt::h9532ff36c27bd9e7; /*0x10069107d*/
        *(_QWORD *)&__src[1] = &v69; /*0x100691084*/
        *((_QWORD *)&__src[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100691092*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v77, (char *)&loc_1017C3231 + 2, __src); /*0x1006910ae*/
        *((_QWORD *)v31 + 3) = v77[2]; /*0x1006910c4*/
        v54 = v77[0]; /*0x1006910c8*/
        *((_QWORD *)v31 + 2) = v77[1]; /*0x1006910d6*/
        *((_QWORD *)v31 + 1) = v54; /*0x1006910da*/
        *(_QWORD *)v31 = 0x8000000000000000LL; /*0x1006910de*/
        if ( v69 ) /*0x1006910ec*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1006910fe*/
        goto LABEL_22; /*0x100691103*/
      }
      *(_QWORD *)&__dst[16] = v101; /*0x100690b98*/
      *(_QWORD *)&__dst[8] = v100; /*0x100690ba6*/
      *(_QWORD *)__dst = v99; /*0x100690bad*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72((__int64)__src, (__int64 *)__dst); /*0x100690bc5*/
      qmemcpy(v31, __src, 0x68u); /*0x100690bd9*/
      core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(v68); /*0x100690be6*/
      if ( (_QWORD)v94 ) /*0x100690bf5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v94 + 1), v94, 1); /*0x100690c03*/
      v33 = v96; /*0x100690c08*/
      if ( v96 ) /*0x100690c12*/
      {
        v34 = v97; /*0x100690c18*/
LABEL_28:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v33, 1); /*0x10069079f*/
      }
    }
LABEL_29:
    if ( v102 ) /*0x1006907b0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v102, 1); /*0x1006907bb*/
    v35 = v90; /*0x1006907c0*/
    if ( v90 ) /*0x1006907ca*/
    {
      v36 = v91; /*0x1006907cc*/
LABEL_33:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x1006907d3*/
      goto LABEL_34; /*0x1006907d8*/
    }
    goto LABEL_34; /*0x1006907ca*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v90, v9); /*0x100690812*/
  v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100690821*/
  if ( !v38 ) /*0x100690829*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x1006911b8*/
  qmemcpy(v38, "Apple Speech", 12); /*0x100690839*/
  *(_QWORD *)__dst = 12; /*0x100690843*/
  *(_QWORD *)&__dst[8] = v38; /*0x10069084e*/
  *(_QWORD *)&__dst[16] = 12; /*0x100690855*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72((__int64)__src, (__int64 *)__dst); /*0x10069086e*/
  v31 = v108; /*0x10069087f*/
  qmemcpy(v108, __src, 0x68u); /*0x100690886*/
  if ( v90 ) /*0x100690893*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v90, 1); /*0x10069089d*/
  v39 = v105; /*0x1006908ac*/
  if ( *v106 ) /*0x1006908a6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106[1], *v106, 1); /*0x1006908bb*/
  if ( *v107 ) /*0x1006908c4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107[1], *v107, 1); /*0x1006908d5*/
  v35 = *v39; /*0x1006908da*/
  if ( *v39 ) /*0x1006908da*/
  {
    v36 = v39[1]; /*0x1006908e6*/
    goto LABEL_33; /*0x1006908ea*/
  }
LABEL_34:
  if ( *v93 ) /*0x1006907e4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, *v93, 1); /*0x1006907f8*/
  return v31; /*0x100690800*/
}