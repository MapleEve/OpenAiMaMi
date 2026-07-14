// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x1005aa150 depth=1
size_t *__fastcall codexmate_lib::core::relay::proxy_server::compact_text_from_value::h1ccbfc25a0c742cf(
        size_t *a1,
        _QWORD *a2)
{
  size_t *v2; // r12
  int v3; // eax
  __int64 v4; // rax
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r12
  size_t v12; // rdx
  size_t v13; // r14
  __int64 v14; // r14
  int v15; // eax
  char v16; // cl
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r15
  const void *v30; // rsi
  unsigned __int64 v31; // rax
  size_t v32; // rdx
  __int64 v33; // r12
  int v34; // eax
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r13
  __int64 v41; // rbx
  __int64 v42; // r12
  size_t v43; // rdx
  size_t v44; // r14
  __int64 v45; // r14
  int v46; // eax
  char v47; // cl
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // r13
  __int64 v56; // r12
  size_t v57; // rdx
  size_t v58; // r14
  __int64 v59; // r14
  int v60; // eax
  char v61; // cl
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v65; // [rsp+8h] [rbp-88h] BYREF
  __int64 v66; // [rsp+10h] [rbp-80h]
  __int64 v67; // [rsp+18h] [rbp-78h]
  __int64 v68; // [rsp+20h] [rbp-70h]
  __int64 v69; // [rsp+28h] [rbp-68h]
  __int64 v70; // [rsp+30h] [rbp-60h]
  size_t *v71; // [rsp+38h] [rbp-58h]
  unsigned __int64 v72; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int8 *v73; // [rsp+48h] [rbp-48h]
  __int64 v74; // [rsp+50h] [rbp-40h]
  __int64 v75; // [rsp+58h] [rbp-38h]
  __int64 v76; // [rsp+60h] [rbp-30h]

  v2 = a1; /*0x1005aa161*/
  v3 = *(unsigned __int8 *)a2; /*0x1005aa164*/
  switch ( v3 ) /*0x1005aa16a*/
  {
    case 3: /*0x1005aa16a*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1, (__int64)(a2 + 1)); /*0x1005aa308*/
      break;
    case 4: /*0x1005aa16a*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::had965a128340e417( /*0x1005aa283*/
        &v65,
        a2[2],
        a2[2] + 32LL * a2[3]);
      v17 = v66; /*0x1005aa288*/
      v18 = v67; /*0x1005aa28c*/
      alloc::str::join_generic_copy::hd50f750ef8c6057e( /*0x1005aa2a7*/
        &v72,
        v66,
        v67,
        "\n"
        "input_textoutput_textoutputno candidate provider availableall relay providers failed; please check provider config / network",
        1u);
      a1[2] = v74; /*0x1005aa2b0*/
      v19 = v72; /*0x1005aa2b5*/
      a1[1] = (size_t)v73; /*0x1005aa2bd*/
      *a1 = v19; /*0x1005aa2c2*/
      if ( v18 ) /*0x1005aa2c9*/
      {
        v20 = v17 + 8; /*0x1005aa2cb*/
        do /*0x1005aa2e7*/
        {
          if ( *(_QWORD *)(v20 - 8) ) /*0x1005aa2e9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa2fa*/
          v20 += 24; /*0x1005aa2e0*/
          --v18; /*0x1005aa2e4*/
        }
        while ( v18 ); /*0x1005aa2e7*/
      }
      if ( v65 ) /*0x1005aa31c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa332*/
      break;
    case 5: /*0x1005aa16a*/
      v4 = a2[1]; /*0x1005aa182*/
      if ( !v4 ) /*0x1005aa189*/
        goto LABEL_76; /*0x1005aa189*/
      v71 = a1; /*0x1005aa18f*/
      v68 = a2[2]; /*0x1005aa197*/
      v76 = v68; /*0x1005aa19b*/
      v75 = v4; /*0x1005aa19f*/
      for ( i = v4; ; i = *(_QWORD *)(v69 + 8 * v10 + 632) ) /*0x1005aa1a3*/
      {
        v6 = i + 360; /*0x1005aa1a6*/
        v7 = *(unsigned __int16 *)(i + 626); /*0x1005aa1ad*/
        v69 = i; /*0x1005aa1b4*/
        v8 = i - 32; /*0x1005aa1b8*/
        v70 = v7; /*0x1005aa1bc*/
        v9 = 3LL * (unsigned int)(8 * v7); /*0x1005aa1c7*/
        v10 = -1; /*0x1005aa1cb*/
        do /*0x1005aa234*/
        {
          if ( !v9 ) /*0x1005aa1e3*/
          {
            v10 = v70; /*0x1005aa243*/
            goto LABEL_16; /*0x1005aa243*/
          }
          v11 = v6 + 24; /*0x1005aa1e5*/
          v12 = *(_QWORD *)(v6 + 16); /*0x1005aa1ed*/
          v13 = v12 - 4; /*0x1005aa1f4*/
          if ( v12 >= 4 ) /*0x1005aa1fd*/
            v12 = 4; /*0x1005aa1fd*/
          v14 = -(__int64)v13; /*0x1005aa201*/
          v15 = memcmp("textuserkill-wal-shmlsof", *(const void **)(v6 + 8), v12); /*0x1005aa20b*/
          if ( v15 ) /*0x1005aa214*/
            v14 = v15; /*0x1005aa214*/
          v16 = (v14 > 0) - (v14 < 0); /*0x1005aa221*/
          v8 += 32; /*0x1005aa223*/
          ++v10; /*0x1005aa227*/
          v9 -= 24; /*0x1005aa22a*/
          v6 = v11; /*0x1005aa22e*/
        }
        while ( v16 == 1 ); /*0x1005aa234*/
        if ( !v16 ) /*0x1005aa23b*/
          break; /*0x1005aa23b*/
LABEL_16:
        if ( !v76 ) /*0x1005aa24f*/
        {
          v76 = v68; /*0x1005aa38d*/
          v21 = v75; /*0x1005aa391*/
LABEL_34:
          v25 = v21 + 360; /*0x1005aa3bd*/
          v26 = *(unsigned __int16 *)(v21 + 626); /*0x1005aa3c4*/
          v69 = v21; /*0x1005aa3cb*/
          v27 = v21 - 32; /*0x1005aa3cf*/
          v70 = v26; /*0x1005aa3d3*/
          v28 = 3LL * (unsigned int)(8 * v26); /*0x1005aa3de*/
          v23 = -1; /*0x1005aa3e2*/
          while ( v28 ) /*0x1005aa3f3*/
          {
            v29 = v25 + 24; /*0x1005aa3f5*/
            v30 = *(const void **)(v25 + 8); /*0x1005aa3f9*/
            v31 = *(_QWORD *)(v25 + 16); /*0x1005aa3fd*/
            v32 = 10; /*0x1005aa408*/
            if ( v31 < 0xA ) /*0x1005aa40d*/
              v32 = v31; /*0x1005aa40d*/
            v33 = 10 - v31; /*0x1005aa411*/
            v34 = memcmp( /*0x1005aa41b*/
                    "input_textoutput_textoutputno candidate provider availableall relay providers failed; please check provider config / network",
                    v30,
                    v32);
            if ( v34 ) /*0x1005aa424*/
              v33 = v34; /*0x1005aa424*/
            v35 = (v33 > 0) - (v33 < 0); /*0x1005aa431*/
            v27 += 32; /*0x1005aa433*/
            ++v23; /*0x1005aa437*/
            v28 -= 24; /*0x1005aa43a*/
            v25 = v29; /*0x1005aa43e*/
            if ( v35 != 1 ) /*0x1005aa444*/
            {
              if ( !v35 ) /*0x1005aa44b*/
              {
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h1ccbfc25a0c742cf(&v72, v27); /*0x1005aa458*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v73, v74); /*0x1005aa468*/
                v2 = v71; /*0x1005aa46d*/
                v24 = v75; /*0x1005aa471*/
                if ( v36 ) /*0x1005aa478*/
                  goto LABEL_73; /*0x1005aa478*/
                if ( v72 ) /*0x1005aa485*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa48f*/
LABEL_45:
                v76 = v68; /*0x1005aa494*/
                while ( 2 ) /*0x1005aa49c*/
                {
                  v37 = v24 + 360; /*0x1005aa49c*/
                  v38 = *(unsigned __int16 *)(v24 + 626); /*0x1005aa4a3*/
                  v69 = v24; /*0x1005aa4ab*/
                  v39 = v24 - 32; /*0x1005aa4af*/
                  v70 = v38; /*0x1005aa4b3*/
                  v40 = 3LL * (unsigned int)(8 * v38); /*0x1005aa4be*/
                  v41 = -1; /*0x1005aa4c2*/
                  do /*0x1005aa524*/
                  {
                    if ( !v40 ) /*0x1005aa4d3*/
                    {
                      v41 = v70; /*0x1005aa52f*/
                      goto LABEL_56; /*0x1005aa52f*/
                    }
                    v42 = v37 + 24; /*0x1005aa4d5*/
                    v43 = *(_QWORD *)(v37 + 16); /*0x1005aa4dd*/
                    v44 = v43 - 11; /*0x1005aa4e4*/
                    if ( v43 >= 0xB ) /*0x1005aa4ed*/
                      v43 = 11; /*0x1005aa4ed*/
                    v45 = -(__int64)v44; /*0x1005aa4f1*/
                    v46 = memcmp( /*0x1005aa4fb*/
                            "output_textoutputno candidate provider availableall relay providers failed; please check provider config / network",
                            *(const void **)(v37 + 8),
                            v43);
                    if ( v46 ) /*0x1005aa504*/
                      v45 = v46; /*0x1005aa504*/
                    v47 = (v45 > 0) - (v45 < 0); /*0x1005aa511*/
                    v39 += 32; /*0x1005aa513*/
                    ++v41; /*0x1005aa517*/
                    v40 -= 24; /*0x1005aa51a*/
                    v37 = v42; /*0x1005aa51e*/
                  }
                  while ( v47 == 1 ); /*0x1005aa524*/
                  if ( v47 ) /*0x1005aa52b*/
                  {
LABEL_56:
                    v48 = v75; /*0x1005aa533*/
                    if ( v76 ) /*0x1005aa53f*/
                    {
                      --v76; /*0x1005aa541*/
                      v24 = *(_QWORD *)(v69 + 8 * v41 + 632); /*0x1005aa549*/
                      continue; /*0x1005aa551*/
                    }
                    goto LABEL_64; /*0x1005aa53f*/
                  }
                  break;
                }
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h1ccbfc25a0c742cf(&v72, v39); /*0x1005aa55d*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v73, v74); /*0x1005aa56d*/
                v2 = v71; /*0x1005aa572*/
                v48 = v75; /*0x1005aa576*/
                if ( v49 ) /*0x1005aa57d*/
                  goto LABEL_73; /*0x1005aa57d*/
                if ( v72 ) /*0x1005aa58a*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa594*/
LABEL_64:
                v52 = v48 + 360; /*0x1005aa5ba*/
                v53 = *(unsigned __int16 *)(v48 + 626); /*0x1005aa5c1*/
                v75 = v48; /*0x1005aa5c9*/
                v54 = v48 - 32; /*0x1005aa5cd*/
                v76 = v53; /*0x1005aa5d1*/
                v55 = 3LL * (unsigned int)(8 * v53); /*0x1005aa5dc*/
                v50 = -1; /*0x1005aa5e0*/
                do /*0x1005aa644*/
                {
                  if ( !v55 ) /*0x1005aa5f3*/
                  {
                    v50 = v76; /*0x1005aa59b*/
LABEL_62:
                    v2 = v71; /*0x1005aa59f*/
                    if ( v68-- == 0 ) /*0x1005aa5a3*/
                      goto LABEL_76; /*0x1005aa5ac*/
                    v48 = *(_QWORD *)(v75 + 8 * v50 + 632); /*0x1005aa5b2*/
                    goto LABEL_64; /*0x1005aa5b2*/
                  }
                  v56 = v52 + 24; /*0x1005aa5f5*/
                  v57 = *(_QWORD *)(v52 + 16); /*0x1005aa5fd*/
                  v58 = v57 - 6; /*0x1005aa604*/
                  if ( v57 >= 6 ) /*0x1005aa60d*/
                    v57 = 6; /*0x1005aa60d*/
                  v59 = -(__int64)v58; /*0x1005aa611*/
                  v60 = memcmp( /*0x1005aa61b*/
                          "outputno candidate provider availableall relay providers failed; please check provider config / network",
                          *(const void **)(v52 + 8),
                          v57);
                  if ( v60 ) /*0x1005aa624*/
                    v59 = v60; /*0x1005aa624*/
                  v61 = (v59 > 0) - (v59 < 0); /*0x1005aa631*/
                  v54 += 32; /*0x1005aa633*/
                  ++v50; /*0x1005aa637*/
                  v55 -= 24; /*0x1005aa63a*/
                  v52 = v56; /*0x1005aa63e*/
                }
                while ( v61 == 1 ); /*0x1005aa644*/
                if ( v61 ) /*0x1005aa64b*/
                  goto LABEL_62; /*0x1005aa64b*/
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h1ccbfc25a0c742cf(&v72, v54); /*0x1005aa658*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v73, v74); /*0x1005aa668*/
                v2 = v71; /*0x1005aa66d*/
                if ( v62 ) /*0x1005aa674*/
                {
LABEL_73:
                  v2[2] = v74; /*0x1005aa676*/
                  v63 = v72; /*0x1005aa67f*/
                  v2[1] = (size_t)v73; /*0x1005aa687*/
                  *v2 = v63; /*0x1005aa68c*/
                  return v2; /*0x1005aa690*/
                }
                if ( v72 ) /*0x1005aa699*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa6a3*/
LABEL_76:
                *v2 = 0; /*0x1005aa6a8*/
                v2[1] = 1; /*0x1005aa6b0*/
                v2[2] = 0; /*0x1005aa6b9*/
                return v2; /*0x1005aa6b9*/
              }
LABEL_32:
              v24 = v75; /*0x1005aa39b*/
              if ( v76 ) /*0x1005aa3a7*/
              {
                --v76; /*0x1005aa3ad*/
                v21 = *(_QWORD *)(v69 + 8 * v23 + 632); /*0x1005aa3b5*/
                goto LABEL_34; /*0x1005aa3b5*/
              }
              goto LABEL_45; /*0x1005aa3a7*/
            }
          }
          v23 = v70; /*0x1005aa397*/
          goto LABEL_32; /*0x1005aa397*/
        }
        --v76; /*0x1005aa255*/
      }
      codexmate_lib::core::relay::proxy_server::compact_text_from_value::h1ccbfc25a0c742cf(&v72, v8); /*0x1005aa343*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v73, v74); /*0x1005aa353*/
      v2 = v71; /*0x1005aa358*/
      v21 = v75; /*0x1005aa35c*/
      if ( v22 ) /*0x1005aa363*/
        goto LABEL_73; /*0x1005aa363*/
      if ( v72 ) /*0x1005aa370*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005aa37a*/
      v76 = v68; /*0x1005aa383*/
      goto LABEL_34; /*0x1005aa387*/
    default:
      goto LABEL_76; /*0x1005aa17c*/
  }
  return v2; /*0x1005aa6c5*/
}