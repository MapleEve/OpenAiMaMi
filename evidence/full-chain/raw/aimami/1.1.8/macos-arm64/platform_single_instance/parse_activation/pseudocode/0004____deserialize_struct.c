// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x100575800 depth=2
// _::deserialize_struct
unsigned __int64 *__fastcall _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_struct::h15e5648e3a233762(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  void **v3; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 *v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rcx
  void **v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // r12
  unsigned __int64 *v21; // r15
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rsi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  void **v43; // rcx
  __int64 (__fastcall *v44)(); // r15
  __int64 v45; // rax
  signed __int64 v46; // rsi
  __int64 v47; // rdi
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // r12
  void **v50; // r15
  _QWORD *v51; // rax
  unsigned __int64 v52; // rsi
  _QWORD *v53; // rbx
  _QWORD *v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // r13
  void **v57; // rsi
  __int64 v58; // rax
  __int64 (__fastcall *v59)(); // r8
  unsigned __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rcx
  _QWORD *v66; // rbx
  _QWORD *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // [rsp+0h] [rbp-D0h] BYREF
  char v71; // [rsp+8h] [rbp-C8h]
  void **v72; // [rsp+10h] [rbp-C0h]
  void *v73; // [rsp+18h] [rbp-B8h]
  unsigned __int64 v74; // [rsp+20h] [rbp-B0h]
  __int64 v75; // [rsp+28h] [rbp-A8h]
  unsigned __int64 *v76; // [rsp+30h] [rbp-A0h]
  void *v77; // [rsp+38h] [rbp-98h] BYREF
  __int64 v78; // [rsp+40h] [rbp-90h]
  void **v79; // [rsp+48h] [rbp-88h]
  char v80; // [rsp+57h] [rbp-79h] BYREF
  __int64 v81; // [rsp+58h] [rbp-78h]
  __int64 v82; // [rsp+60h] [rbp-70h] BYREF
  __int64 (__fastcall *v83)(); // [rsp+68h] [rbp-68h]
  void **v84; // [rsp+70h] [rbp-60h]
  unsigned __int64 v85; // [rsp+78h] [rbp-58h]
  __int64 v86; // [rsp+80h] [rbp-50h]
  void **v87; // [rsp+88h] [rbp-48h]
  signed __int64 v88; // [rsp+90h] [rbp-40h]
  unsigned __int64 v89; // [rsp+98h] [rbp-38h]
  __int64 v90; // [rsp+A0h] [rbp-30h]

  v5 = 0x8000000000000000LL; /*0x100575817*/
  v6 = *(_QWORD *)(a2 + 32); /*0x100575821*/
  v7 = *(_QWORD *)(a2 + 40); /*0x100575825*/
  if ( v7 < v6 ) /*0x10057582c*/
  {
    a3 = *(_QWORD *)(a2 + 24); /*0x10057582e*/
    v8 = v7 + 1; /*0x100575832*/
    v9 = -(__int64)v6; /*0x100575835*/
    v10 = &loc_100002600; /*0x100575838*/
    while ( 1 ) /*0x100575842*/
    {
      v11 = *(unsigned __int8 *)(a3 + v8 - 1); /*0x100575842*/
      if ( v11 > 0x20 || !_bittest64((const __int64 *)&v10, v11) ) /*0x10057584d*/
        break; /*0x10057584d*/
      *(_QWORD *)(a2 + 40) = v8; /*0x100575853*/
      v12 = v9 + v8++ + 1; /*0x100575857*/
      if ( v12 == 1 ) /*0x100575863*/
        goto LABEL_6; /*0x100575863*/
    }
    v75 = a2; /*0x100575891*/
    v76 = a1; /*0x100575898*/
    if ( (_DWORD)v11 != 91 ) /*0x10057589f*/
    {
      if ( (_DWORD)v11 != 123 ) /*0x1005758a8*/
      {
        v55 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f(a2, &v80, &unk_101533710); /*0x100576132*/
        goto LABEL_112; /*0x100576135*/
      }
      v15 = (*(_BYTE *)(a2 + 72))-- == 1; /*0x1005758ae*/
      if ( !v15 ) /*0x1005758b2*/
      {
        *(_QWORD *)(a2 + 40) = v8; /*0x1005758b8*/
        v70 = (_QWORD *)a2; /*0x1005758bc*/
        v71 = 1; /*0x1005758c3*/
        v73 = &unk_1012C9519; /*0x1005758d5*/
        v16 = 0x8000000000000000LL; /*0x1005758dc*/
        v88 = 0x8000000000000001LL; /*0x1005758e2*/
        while ( 1 ) /*0x1005758e6*/
        {
          v89 = v16; /*0x1005758e6*/
          v90 = v5; /*0x1005758ea*/
LABEL_12:
          v17 = (void **)&v70; /*0x1005758ee*/
          _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2( /*0x1005758f9*/
            &v82,
            &v70);
          if ( (_BYTE)v82 == 1 ) /*0x100575902*/
          {
            v5 = (__int64)v83; /*0x100575d2b*/
LABEL_67:
            v46 = v88; /*0x100575d2f*/
            if ( v88 < (__int64)0x8000000000000002LL ) /*0x100575d44*/
              goto LABEL_70; /*0x100575d44*/
            goto LABEL_68; /*0x100575d44*/
          }
          if ( BYTE1(v82) != 1 ) /*0x10057590c*/
          {
            if ( v89 != 0x8000000000000000LL ) /*0x100575e20*/
            {
              v58 = 0x8000000000000001LL; /*0x100575efa*/
              v59 = (__int64 (__fastcall *)())v90; /*0x100575f02*/
              if ( v88 == 0x8000000000000001LL ) /*0x100575f06*/
              {
                v19 = 0x8000000000000000LL; /*0x100575f0f*/
                v60 = v89; /*0x100575f12*/
              }
              else
              {
                v17 = v72; /*0x100575f9b*/
                v58 = v81; /*0x100575fa5*/
                v60 = v89; /*0x100575fa9*/
                v19 = v88; /*0x100575fad*/
              }
              v18 = v74; /*0x100575fb1*/
              goto LABEL_73; /*0x100575fb8*/
            }
            v77 = &unk_1012C9514; /*0x100575e2d*/
            v78 = 5; /*0x100575e34*/
            v82 = (__int64)&v77; /*0x100575e46*/
            v83 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100575e51*/
            v89 = 0x8000000000000000LL; /*0x100575e60*/
            v63 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_1); /*0x100575e68*/
            goto LABEL_79; /*0x100575e68*/
          }
          v20 = v70; /*0x100575912*/
          v21 = v70 + 3; /*0x100575919*/
          ++v70[5]; /*0x10057591e*/
          v20[2] = 0; /*0x100575923*/
          _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18( /*0x100575936*/
            &v82,
            v21,
            v20);
          v5 = (__int64)v83; /*0x10057593f*/
          if ( (_DWORD)v82 == 2 ) /*0x100575943*/
            goto LABEL_67; /*0x100575943*/
          if ( v84 == (void **)3 ) /*0x100575951*/
            break; /*0x100575951*/
          if ( v84 != (void **)5 ) /*0x100575957*/
            goto LABEL_20; /*0x100575957*/
          v22 = anon_0eedd02070250de7472aa97ee6b1a8ea_797 ^ *(_DWORD *)v83; /*0x10057595b*/
          v18 = v22 | *((_BYTE *)v83 + 4) ^ 0x6Eu; /*0x10057596e*/
          if ( v22 | *((_BYTE *)v83 + 4) ^ 0x6E ) /*0x10057596e*/
            goto LABEL_20; /*0x100575970*/
          if ( v89 != 0x8000000000000000LL ) /*0x100575ae7*/
          {
            v73 = &unk_1012C9514; /*0x100576141*/
LABEL_122:
            v77 = v73; /*0x100576148*/
            v78 = (__int64)v84; /*0x100576156*/
            v82 = (__int64)&v77; /*0x100576164*/
            v83 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x10057616f*/
            v45 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_5); /*0x100576182*/
LABEL_53:
            v5 = v45; /*0x100575bdf*/
            v46 = v88; /*0x100575bec*/
            if ( v88 < (__int64)0x8000000000000002LL ) /*0x100575bf3*/
              goto LABEL_70; /*0x100575bf3*/
LABEL_68:
            if ( v46 ) /*0x100575d49*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575d54*/
            goto LABEL_70; /*0x100575d54*/
          }
          v35 = v20[4]; /*0x100575aed*/
          v36 = v20[5]; /*0x100575af2*/
          if ( v36 >= v35 ) /*0x100575afa*/
          {
LABEL_116:
            v82 = 3; /*0x1005760bf*/
            v89 = 0x8000000000000000LL; /*0x1005760cb*/
            v63 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x1005760d6*/
LABEL_79:
            v5 = v63; /*0x100575e6d*/
LABEL_80:
            v89 = 0x8000000000000000LL; /*0x100575e70*/
            v46 = v88; /*0x100575e88*/
            if ( v88 >= (__int64)0x8000000000000002LL ) /*0x100575e8f*/
              goto LABEL_68; /*0x100575e8f*/
            goto LABEL_70; /*0x100575e8f*/
          }
          v18 = *v21; /*0x100575b00*/
          v37 = v36 + 1; /*0x100575b03*/
          v38 = -(__int64)v35; /*0x100575b06*/
          while ( 1 ) /*0x100575b09*/
          {
            v39 = *(unsigned __int8 *)(v18 + v37 - 1); /*0x100575b09*/
            if ( v39 > 0x3A ) /*0x100575b12*/
              goto LABEL_124; /*0x100575b12*/
            if ( !_bittest64((const __int64 *)&v10, v39) ) /*0x100575b18*/
              break; /*0x100575b18*/
            v20[5] = v37; /*0x100575b1e*/
            v40 = v38 + v37++ + 1; /*0x100575b23*/
            if ( v40 == 1 ) /*0x100575b2f*/
              goto LABEL_116; /*0x100575b2f*/
          }
          if ( v39 != 58 ) /*0x100575b3a*/
          {
LABEL_124:
            v82 = 6; /*0x1005761ad*/
            v89 = 0x8000000000000000LL; /*0x1005761b9*/
            v63 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x1005761c4*/
            goto LABEL_79; /*0x1005761c9*/
          }
          v20[5] = v37; /*0x100575b40*/
          _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x100575b4f*/
            &v77,
            v20);
          v18 = (unsigned __int64)v77; /*0x100575b54*/
          v5 = v78; /*0x100575b5b*/
          if ( v77 == (void *)0x8000000000000000LL ) /*0x100575b73*/
            goto LABEL_80; /*0x100575b73*/
          v16 = (unsigned __int64)v77; /*0x100575b79*/
          v74 = (unsigned __int64)v79; /*0x100575b83*/
        }
        v18 = (unsigned __int8)(anon_0eedd02070250de7472aa97ee6b1a8ea_798[2] ^ *((_BYTE *)v83 + 2)); /*0x100575994*/
        LOWORD(v18) = *(_WORD *)"urldev.aimami.desktopaimami-activate.requestfailed to spawn thread" ^ *(_WORD *)v83 /*0x100575997*/
                    | v18;
        if ( (_WORD)v18 ) /*0x10057599a*/
        {
LABEL_20:
          v23 = v20[4]; /*0x10057599c*/
          v24 = v20[5]; /*0x1005759a1*/
          if ( v24 >= v23 ) /*0x1005759a9*/
          {
LABEL_52:
            v82 = 3; /*0x100575bc7*/
            v45 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x100575bda*/
            goto LABEL_53; /*0x100575bda*/
          }
          v18 = *v21; /*0x1005759af*/
          v25 = v24 + 1; /*0x1005759b2*/
          v26 = -(__int64)v23; /*0x1005759b5*/
          while ( 1 ) /*0x1005759b8*/
          {
            v27 = *(unsigned __int8 *)(v18 + v25 - 1); /*0x1005759b8*/
            if ( v27 > 0x3A ) /*0x1005759c1*/
              goto LABEL_117; /*0x1005759c1*/
            if ( !_bittest64((const __int64 *)&v10, v27) ) /*0x1005759c7*/
              break; /*0x1005759c7*/
            v20[5] = v25; /*0x1005759cd*/
            v28 = v26 + v25++ + 1; /*0x1005759d2*/
            if ( v28 == 1 ) /*0x1005759de*/
              goto LABEL_52; /*0x1005759de*/
          }
          if ( v27 != 58 ) /*0x1005759f4*/
          {
LABEL_117:
            v82 = 6; /*0x1005760e0*/
            v45 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x1005760f3*/
            goto LABEL_53; /*0x1005760f8*/
          }
          v20[5] = v25; /*0x1005759fa*/
          v5 = serde_json::de::Deserializer$LT$R$GT$::ignore_value::h7eada599325cfc5e(v20, 58, v18, v26); /*0x100575a07*/
          if ( !v5 ) /*0x100575a0d*/
            goto LABEL_12; /*0x100575a0d*/
          goto LABEL_67; /*0x100575a0d*/
        }
        if ( v88 != 0x8000000000000001LL ) /*0x100575a1c*/
          goto LABEL_122; /*0x100575a1c*/
        v29 = v20[4]; /*0x100575a22*/
        v30 = v20[5]; /*0x100575a27*/
        if ( v30 >= v29 ) /*0x100575a39*/
        {
LABEL_114:
          v82 = 3; /*0x100576097*/
          v88 = 0x8000000000000001LL; /*0x1005760a3*/
          v69 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x1005760b2*/
LABEL_115:
          v5 = v69; /*0x1005760b7*/
        }
        else
        {
          v18 = *v21; /*0x100575a3f*/
          v31 = v30 + 1; /*0x100575a42*/
          v32 = -(__int64)v29; /*0x100575a45*/
          while ( 1 ) /*0x100575a48*/
          {
            v33 = *(unsigned __int8 *)(v18 + v31 - 1); /*0x100575a48*/
            if ( v33 > 0x3A ) /*0x100575a55*/
              goto LABEL_123; /*0x100575a55*/
            if ( !_bittest64((const __int64 *)&v10, v33) ) /*0x100575a5b*/
              break; /*0x100575a5b*/
            v20[5] = v31; /*0x100575a61*/
            v34 = v32 + v31++ + 1; /*0x100575a66*/
            if ( v34 == 1 ) /*0x100575a72*/
              goto LABEL_114; /*0x100575a72*/
          }
          if ( v33 != 58 ) /*0x100575a7d*/
          {
LABEL_123:
            v82 = 6; /*0x10057618c*/
            v88 = 0x8000000000000001LL; /*0x100576198*/
            v69 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v20, &v82, v18); /*0x1005761a3*/
            goto LABEL_115; /*0x1005761a8*/
          }
          v20[5] = v31; /*0x100575a83*/
          serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$core..option..Option$LT$T$GT$$GT$::deserialize::ha9f66098727b1eaa( /*0x100575a95*/
            &v77,
            v20);
          v19 = (unsigned __int64)v77; /*0x100575a9a*/
          v81 = v78; /*0x100575aa8*/
          v88 = (signed __int64)v77; /*0x100575ab9*/
          if ( v77 != (void *)0x8000000000000001LL ) /*0x100575ac0*/
          {
            v72 = v79; /*0x100575acd*/
            goto LABEL_12; /*0x100575ad4*/
          }
          v5 = v81; /*0x1005760fd*/
        }
LABEL_70:
        v17 = (void **)v89; /*0x100575d59*/
        v58 = 2 * v89; /*0x100575d5d*/
        if ( 2 * v89 ) /*0x100575d5d*/
          v58 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575d72*/
        v59 = (__int64 (__fastcall *)())v5; /*0x100575d77*/
        v60 = 0x8000000000000000LL; /*0x100575d7a*/
LABEL_73:
        v61 = v75; /*0x100575d87*/
        ++*(_BYTE *)(v75 + 72); /*0x100575d8e*/
        v82 = v60; /*0x100575d91*/
        v90 = (__int64)v59; /*0x100575d95*/
        v83 = v59; /*0x100575d99*/
        v48 = v18; /*0x100575d9d*/
        v84 = (void **)v18; /*0x100575da0*/
        v49 = v19; /*0x100575da4*/
        v85 = v19; /*0x100575da7*/
        v81 = v58; /*0x100575dab*/
        v86 = v58; /*0x100575daf*/
        v50 = v17; /*0x100575db3*/
        v87 = v17; /*0x100575db6*/
        v51 = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(v61); /*0x100575dba*/
        v52 = v60; /*0x100575dbf*/
        if ( v60 != 0x8000000000000000LL ) /*0x100575dc8*/
        {
          v14 = v76; /*0x100575dd1*/
          if ( !v51 ) /*0x100575dd8*/
            goto LABEL_75; /*0x100575dd8*/
          if ( v60 ) /*0x100575f62*/
          {
            v66 = v51; /*0x100575f6d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575f70*/
            v51 = v66; /*0x100575f75*/
          }
          if ( 2 * v49 ) /*0x100575f82*/
          {
            v67 = v51; /*0x10057603d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100576040*/
            v55 = (__int64)v67; /*0x100576045*/
            goto LABEL_112; /*0x100576052*/
          }
          goto LABEL_97; /*0x100575f8d*/
        }
        if ( !v51 ) /*0x100575f50*/
          goto LABEL_93; /*0x100575f50*/
        v64 = v90; /*0x100576003*/
        v65 = *v51; /*0x100576007*/
        if ( *v51 != 1 ) /*0x10057600e*/
        {
LABEL_106:
          if ( !v65 && v51[2] ) /*0x100576018*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10057602a*/
          goto LABEL_111; /*0x10057602f*/
        }
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v51 + 1); /*0x10057605e*/
LABEL_111:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100576063*/
        v55 = v64; /*0x100576075*/
        goto LABEL_112; /*0x100576075*/
      }
LABEL_119:
      v82 = 24; /*0x100576106*/
      v68 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(a2, &v82, a3); /*0x100576115*/
      goto LABEL_113; /*0x10057611a*/
    }
    v15 = (*(_BYTE *)(a2 + 72))-- == 1; /*0x100575b8f*/
    if ( v15 ) /*0x100575b93*/
      goto LABEL_119; /*0x100575b93*/
    *(_QWORD *)(a2 + 40) = v8; /*0x100575b99*/
    v77 = (void *)a2; /*0x100575b9d*/
    LOBYTE(v78) = 1; /*0x100575ba4*/
    v41 = _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x100575bb6*/
            &v82,
            &v77);
    if ( (_BYTE)v82 == 1 ) /*0x100575bbf*/
    {
      v44 = v83; /*0x100575bc1*/
      goto LABEL_57; /*0x100575bc5*/
    }
    if ( BYTE1(v82) != 1 ) /*0x100575c02*/
    {
      v41 = serde_core::de::Error::invalid_length::hcacc1da483e1fd21( /*0x100575ff6*/
              0,
              &off_101532AC0,
              &anon_daf50d54a2d3ecbdf54de6a8568b21ab_67);
      v44 = (__int64 (__fastcall *)())v41; /*0x100575ffb*/
      goto LABEL_57; /*0x100575ffe*/
    }
    _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_string::h3f41ba97bdf698e6( /*0x100575c13*/
      &v82,
      v77);
    v41 = v82; /*0x100575c18*/
    v44 = v83; /*0x100575c1c*/
    if ( v82 == 0x8000000000000000LL ) /*0x100575c23*/
    {
LABEL_57:
      v47 = v75; /*0x100575c2c*/
      ++*(_BYTE *)(v75 + 72); /*0x100575c33*/
      v82 = v5; /*0x100575c36*/
      v90 = (__int64)v44; /*0x100575c3a*/
      v83 = v44; /*0x100575c3e*/
      v48 = (unsigned __int64)v3; /*0x100575c42*/
      v84 = v3; /*0x100575c45*/
      v49 = v42; /*0x100575c49*/
      v85 = v42; /*0x100575c4c*/
      v81 = v41; /*0x100575c50*/
      v86 = v41; /*0x100575c54*/
      v50 = v43; /*0x100575c58*/
      v87 = v43; /*0x100575c5b*/
      v51 = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::end_seq::h8a430273f2e00f21(v47); /*0x100575c5f*/
      v52 = v5; /*0x100575c64*/
      v14 = v76; /*0x100575c6d*/
      if ( v5 != 0x8000000000000000LL ) /*0x100575c74*/
      {
        if ( !v51 ) /*0x100575c7d*/
        {
LABEL_75:
          v14[2] = v48; /*0x100575dde*/
          v14[3] = v49; /*0x100575de2*/
          v14[4] = v81; /*0x100575dea*/
          v14[5] = (unsigned __int64)v50; /*0x100575dee*/
          *v14 = v52; /*0x100575df2*/
          v14[1] = v90; /*0x100575df9*/
          return v14; /*0x100575df9*/
        }
        if ( v5 ) /*0x100575c86*/
        {
          v53 = v51; /*0x100575c94*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575c97*/
          v51 = v53; /*0x100575c9c*/
        }
        if ( !(2 * v49) ) /*0x100575cad*/
        {
LABEL_97:
          v55 = (__int64)v51; /*0x100575f93*/
          goto LABEL_112; /*0x100575f96*/
        }
        v54 = v51; /*0x100575cc2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575cc5*/
        v55 = (__int64)v54; /*0x100575cd0*/
LABEL_112:
        v68 = serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v55, v75); /*0x100576078*/
LABEL_113:
        v14 = v76; /*0x100576084*/
        v76[1] = v68; /*0x10057608b*/
        *v14 = 0x8000000000000000LL; /*0x10057608f*/
        return v14; /*0x100576092*/
      }
      if ( !v51 ) /*0x100575f26*/
      {
LABEL_93:
        v55 = v90; /*0x100575f56*/
        goto LABEL_112; /*0x100575f5a*/
      }
      v64 = v90; /*0x100575f28*/
      v65 = *v51; /*0x100575f2c*/
      if ( *v51 != 1 ) /*0x100575f33*/
        goto LABEL_106; /*0x100575f33*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v51 + 1); /*0x100575f43*/
      goto LABEL_111; /*0x100575f48*/
    }
    v56 = v82; /*0x100575cd8*/
    v3 = v84; /*0x100575cdb*/
    v57 = &v77; /*0x100575ce3*/
    _$LT$serde_json..de..SeqAccess$LT$R$GT$$u20$as$u20$serde_core..de..SeqAccess$GT$::next_element_seed::has_next_element::h33c672ea6fac05e1( /*0x100575cea*/
      &v82,
      &v77);
    if ( (_BYTE)v82 == 1 ) /*0x100575cf3*/
    {
      v41 = (__int64)v83; /*0x100575cf9*/
      v5 = 0x8000000000000000LL; /*0x100575cfd*/
      if ( v56 ) /*0x100575d0a*/
      {
LABEL_65:
        v44 = (__int64 (__fastcall *)())v41; /*0x100575d10*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100575d1e*/
        v41 = (__int64)v44; /*0x100575d23*/
        goto LABEL_57; /*0x100575d26*/
      }
LABEL_85:
      v44 = (__int64 (__fastcall *)())v41; /*0x100575ef2*/
      goto LABEL_57; /*0x100575ef5*/
    }
    v41 = 0x8000000000000000LL; /*0x100575e9a*/
    if ( BYTE1(v82) == 1 ) /*0x100575eac*/
    {
      serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$core..option..Option$LT$T$GT$$GT$::deserialize::ha9f66098727b1eaa( /*0x100575eb9*/
        &v82,
        v77);
      v43 = (void **)v83; /*0x100575ec2*/
      if ( v82 == 0x8000000000000001LL ) /*0x100575ed6*/
      {
        v5 = 0x8000000000000000LL; /*0x100575edc*/
        v41 = (__int64)v83; /*0x100575ee6*/
        if ( v56 ) /*0x100575eec*/
          goto LABEL_65; /*0x100575eec*/
        goto LABEL_85; /*0x100575eec*/
      }
      v42 = v82; /*0x100575fbd*/
      v57 = v84; /*0x100575fc0*/
      v41 = (__int64)v83; /*0x100575fc4*/
    }
    else
    {
      v42 = 0x8000000000000001LL; /*0x100575f1b*/
    }
    if ( v42 == 0x8000000000000001LL ) /*0x100575fd7*/
      v42 = 0x8000000000000000LL; /*0x100575fd7*/
    v5 = v56; /*0x100575fdb*/
    v43 = v57; /*0x100575fde*/
    goto LABEL_57; /*0x100575fe1*/
  }
LABEL_6:
  v82 = 5; /*0x100575865*/
  v13 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(a2, &v82, a3); /*0x10057587a*/
  v14 = a1; /*0x10057587f*/
  a1[1] = v13; /*0x100575882*/
  *a1 = 0x8000000000000000LL; /*0x100575886*/
  return v14; /*0x100575e00*/
}