// __ZN13codexmate_lib4core5relay12proxy_server23compact_text_from_value @ 0x10025e390 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::compact_text_from_value::h356a174db8df40cc(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r12
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
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r15
  const void *v32; // rsi
  unsigned __int64 v33; // rax
  size_t v34; // rdx
  __int64 v35; // r12
  int v36; // eax
  char v37; // cl
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // r12
  size_t v46; // rdx
  size_t v47; // r14
  __int64 v48; // r14
  int v49; // eax
  char v50; // cl
  __int64 v51; // r15
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 v59; // r13
  __int64 v60; // r12
  size_t v61; // rdx
  size_t v62; // r14
  __int64 v63; // r14
  int v64; // eax
  char v65; // cl
  __int64 v66; // r14
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v70; // [rsp+8h] [rbp-88h] BYREF
  __int64 v71; // [rsp+10h] [rbp-80h]
  __int64 v72; // [rsp+18h] [rbp-78h]
  __int64 v73; // [rsp+20h] [rbp-70h]
  __int64 v74; // [rsp+28h] [rbp-68h]
  __int64 v75; // [rsp+30h] [rbp-60h]
  _QWORD *v76; // [rsp+38h] [rbp-58h]
  __int64 v77; // [rsp+40h] [rbp-50h] BYREF
  __int64 v78; // [rsp+48h] [rbp-48h]
  __int64 v79; // [rsp+50h] [rbp-40h]
  __int64 v80; // [rsp+58h] [rbp-38h]
  __int64 v81; // [rsp+60h] [rbp-30h]

  v2 = a1; /*0x10025e3a1*/
  v3 = *(unsigned __int8 *)a2; /*0x10025e3a4*/
  switch ( v3 ) /*0x10025e3aa*/
  {
    case 3: /*0x10025e3aa*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(a1, a2 + 1); /*0x10025e548*/
      break;
    case 4: /*0x10025e3aa*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h9236d771012e047b( /*0x10025e4c3*/
        &v70,
        a2[2],
        a2[2] + 32LL * a2[3]);
      v17 = v71; /*0x10025e4c8*/
      v18 = v72; /*0x10025e4cc*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10025e4e7*/
        &v77,
        v71,
        v72,
        "\n"
        "input_textoutput_textoutputno candidate provider availableall relay providers failed; please check provider conf"
        "ig / networkmessage",
        1);
      a1[2] = v79; /*0x10025e4f0*/
      v19 = v77; /*0x10025e4f5*/
      a1[1] = v78; /*0x10025e4fd*/
      *a1 = v19; /*0x10025e502*/
      if ( v18 ) /*0x10025e509*/
      {
        v20 = (_QWORD *)(v17 + 8); /*0x10025e50b*/
        do /*0x10025e527*/
        {
          v21 = *(v20 - 1); /*0x10025e529*/
          if ( v21 ) /*0x10025e530*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1); /*0x10025e53a*/
          v20 += 3; /*0x10025e520*/
          --v18; /*0x10025e524*/
        }
        while ( v18 ); /*0x10025e527*/
      }
      if ( v70 ) /*0x10025e55c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, 24 * v70, 8); /*0x10025e572*/
      break;
    case 5: /*0x10025e3aa*/
      v4 = a2[1]; /*0x10025e3c2*/
      if ( !v4 ) /*0x10025e3c9*/
        goto LABEL_76; /*0x10025e3c9*/
      v76 = a1; /*0x10025e3cf*/
      v73 = a2[2]; /*0x10025e3d7*/
      v81 = v73; /*0x10025e3db*/
      v80 = v4; /*0x10025e3df*/
      for ( i = v4; ; i = *(_QWORD *)(v74 + 8 * v10 + 632) ) /*0x10025e3e3*/
      {
        v6 = i + 360; /*0x10025e3e6*/
        v7 = *(unsigned __int16 *)(i + 626); /*0x10025e3ed*/
        v74 = i; /*0x10025e3f4*/
        v8 = i - 32; /*0x10025e3f8*/
        v75 = v7; /*0x10025e3fc*/
        v9 = 3LL * (unsigned int)(8 * v7); /*0x10025e407*/
        v10 = -1; /*0x10025e40b*/
        do /*0x10025e474*/
        {
          if ( !v9 ) /*0x10025e423*/
          {
            v10 = v75; /*0x10025e483*/
            goto LABEL_16; /*0x10025e483*/
          }
          v11 = v6 + 24; /*0x10025e425*/
          v12 = *(_QWORD *)(v6 + 16); /*0x10025e42d*/
          v13 = v12 - 4; /*0x10025e434*/
          if ( v12 >= 4 ) /*0x10025e43d*/
            v12 = 4; /*0x10025e43d*/
          v14 = -(__int64)v13; /*0x10025e441*/
          v15 = memcmp("textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide", *(const void **)(v6 + 8), v12); /*0x10025e44b*/
          if ( v15 ) /*0x10025e454*/
            v14 = v15; /*0x10025e454*/
          v16 = (v14 > 0) - (v14 < 0); /*0x10025e461*/
          v8 += 32; /*0x10025e463*/
          ++v10; /*0x10025e467*/
          v9 -= 24; /*0x10025e46a*/
          v6 = v11; /*0x10025e46e*/
        }
        while ( v16 == 1 ); /*0x10025e474*/
        if ( !v16 ) /*0x10025e47b*/
          break; /*0x10025e47b*/
LABEL_16:
        if ( !v81 ) /*0x10025e48f*/
        {
          v81 = v73; /*0x10025e5cd*/
          v23 = v80; /*0x10025e5d1*/
LABEL_34:
          v27 = v23 + 360; /*0x10025e5fd*/
          v28 = *(unsigned __int16 *)(v23 + 626); /*0x10025e604*/
          v74 = v23; /*0x10025e60b*/
          v29 = v23 - 32; /*0x10025e60f*/
          v75 = v28; /*0x10025e613*/
          v30 = 3LL * (unsigned int)(8 * v28); /*0x10025e61e*/
          v25 = -1; /*0x10025e622*/
          while ( v30 ) /*0x10025e633*/
          {
            v31 = v27 + 24; /*0x10025e635*/
            v32 = *(const void **)(v27 + 8); /*0x10025e639*/
            v33 = *(_QWORD *)(v27 + 16); /*0x10025e63d*/
            v34 = 10; /*0x10025e648*/
            if ( v33 < 0xA ) /*0x10025e64d*/
              v34 = v33; /*0x10025e64d*/
            v35 = 10 - v33; /*0x10025e651*/
            v36 = memcmp( /*0x10025e65b*/
                    "input_textoutput_textoutputno candidate provider availableall relay providers failed; please check provider config / networkmessage",
                    v32,
                    v34);
            if ( v36 ) /*0x10025e664*/
              v35 = v36; /*0x10025e664*/
            v37 = (v35 > 0) - (v35 < 0); /*0x10025e671*/
            v29 += 32; /*0x10025e673*/
            ++v25; /*0x10025e677*/
            v30 -= 24; /*0x10025e67a*/
            v27 = v31; /*0x10025e67e*/
            if ( v37 != 1 ) /*0x10025e684*/
            {
              if ( !v37 ) /*0x10025e68b*/
              {
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h356a174db8df40cc(&v77, v29); /*0x10025e698*/
                v38 = v78; /*0x10025e69d*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v78, v79); /*0x10025e6a8*/
                v2 = v76; /*0x10025e6ad*/
                v26 = v80; /*0x10025e6b1*/
                if ( v39 ) /*0x10025e6b8*/
                  goto LABEL_73; /*0x10025e6b8*/
                if ( v77 ) /*0x10025e6c5*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v77, 1); /*0x10025e6cf*/
LABEL_45:
                v81 = v73; /*0x10025e6d4*/
                while ( 2 ) /*0x10025e6dc*/
                {
                  v40 = v26 + 360; /*0x10025e6dc*/
                  v41 = *(unsigned __int16 *)(v26 + 626); /*0x10025e6e3*/
                  v74 = v26; /*0x10025e6eb*/
                  v42 = v26 - 32; /*0x10025e6ef*/
                  v75 = v41; /*0x10025e6f3*/
                  v43 = 3LL * (unsigned int)(8 * v41); /*0x10025e6fe*/
                  v44 = -1; /*0x10025e702*/
                  do /*0x10025e764*/
                  {
                    if ( !v43 ) /*0x10025e713*/
                    {
                      v44 = v75; /*0x10025e76f*/
                      goto LABEL_56; /*0x10025e76f*/
                    }
                    v45 = v40 + 24; /*0x10025e715*/
                    v46 = *(_QWORD *)(v40 + 16); /*0x10025e71d*/
                    v47 = v46 - 11; /*0x10025e724*/
                    if ( v46 >= 0xB ) /*0x10025e72d*/
                      v46 = 11; /*0x10025e72d*/
                    v48 = -(__int64)v47; /*0x10025e731*/
                    v49 = memcmp( /*0x10025e73b*/
                            "output_textoutputno candidate provider availableall relay providers failed; please check provider config / networkmessage",
                            *(const void **)(v40 + 8),
                            v46);
                    if ( v49 ) /*0x10025e744*/
                      v48 = v49; /*0x10025e744*/
                    v50 = (v48 > 0) - (v48 < 0); /*0x10025e751*/
                    v42 += 32; /*0x10025e753*/
                    ++v44; /*0x10025e757*/
                    v43 -= 24; /*0x10025e75a*/
                    v40 = v45; /*0x10025e75e*/
                  }
                  while ( v50 == 1 ); /*0x10025e764*/
                  if ( v50 ) /*0x10025e76b*/
                  {
LABEL_56:
                    v51 = v80; /*0x10025e773*/
                    if ( v81 ) /*0x10025e77f*/
                    {
                      --v81; /*0x10025e781*/
                      v26 = *(_QWORD *)(v74 + 8 * v44 + 632); /*0x10025e789*/
                      continue; /*0x10025e791*/
                    }
                    goto LABEL_64; /*0x10025e77f*/
                  }
                  break;
                }
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h356a174db8df40cc(&v77, v42); /*0x10025e79d*/
                v52 = v78; /*0x10025e7a2*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v78, v79); /*0x10025e7ad*/
                v2 = v76; /*0x10025e7b2*/
                v51 = v80; /*0x10025e7b6*/
                if ( v53 ) /*0x10025e7bd*/
                  goto LABEL_73; /*0x10025e7bd*/
                if ( v77 ) /*0x10025e7ca*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v77, 1); /*0x10025e7d4*/
LABEL_64:
                v56 = v51 + 360; /*0x10025e7fa*/
                v57 = *(unsigned __int16 *)(v51 + 626); /*0x10025e801*/
                v80 = v51; /*0x10025e809*/
                v58 = v51 - 32; /*0x10025e80d*/
                v81 = v57; /*0x10025e811*/
                v59 = 3LL * (unsigned int)(8 * v57); /*0x10025e81c*/
                v54 = -1; /*0x10025e820*/
                do /*0x10025e884*/
                {
                  if ( !v59 ) /*0x10025e833*/
                  {
                    v54 = v81; /*0x10025e7db*/
LABEL_62:
                    v2 = v76; /*0x10025e7df*/
                    if ( v73-- == 0 ) /*0x10025e7e3*/
                      goto LABEL_76; /*0x10025e7ec*/
                    v51 = *(_QWORD *)(v80 + 8 * v54 + 632); /*0x10025e7f2*/
                    goto LABEL_64; /*0x10025e7f2*/
                  }
                  v60 = v56 + 24; /*0x10025e835*/
                  v61 = *(_QWORD *)(v56 + 16); /*0x10025e83d*/
                  v62 = v61 - 6; /*0x10025e844*/
                  if ( v61 >= 6 ) /*0x10025e84d*/
                    v61 = 6; /*0x10025e84d*/
                  v63 = -(__int64)v62; /*0x10025e851*/
                  v64 = memcmp( /*0x10025e85b*/
                          "outputno candidate provider availableall relay providers failed; please check provider config / networkmessage",
                          *(const void **)(v56 + 8),
                          v61);
                  if ( v64 ) /*0x10025e864*/
                    v63 = v64; /*0x10025e864*/
                  v65 = (v63 > 0) - (v63 < 0); /*0x10025e871*/
                  v58 += 32; /*0x10025e873*/
                  ++v54; /*0x10025e877*/
                  v59 -= 24; /*0x10025e87a*/
                  v56 = v60; /*0x10025e87e*/
                }
                while ( v65 == 1 ); /*0x10025e884*/
                if ( v65 ) /*0x10025e88b*/
                  goto LABEL_62; /*0x10025e88b*/
                codexmate_lib::core::relay::proxy_server::compact_text_from_value::h356a174db8df40cc(&v77, v58); /*0x10025e898*/
                v66 = v78; /*0x10025e89d*/
                core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v78, v79); /*0x10025e8a8*/
                v2 = v76; /*0x10025e8ad*/
                if ( v67 ) /*0x10025e8b4*/
                {
LABEL_73:
                  v2[2] = v79; /*0x10025e8b6*/
                  v68 = v77; /*0x10025e8bf*/
                  v2[1] = v78; /*0x10025e8c7*/
                  *v2 = v68; /*0x10025e8cc*/
                  return v2; /*0x10025e8d0*/
                }
                if ( v77 ) /*0x10025e8d9*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v77, 1); /*0x10025e8e3*/
LABEL_76:
                *v2 = 0; /*0x10025e8e8*/
                v2[1] = 1; /*0x10025e8f0*/
                v2[2] = 0; /*0x10025e8f9*/
                return v2; /*0x10025e8f9*/
              }
LABEL_32:
              v26 = v80; /*0x10025e5db*/
              if ( v81 ) /*0x10025e5e7*/
              {
                --v81; /*0x10025e5ed*/
                v23 = *(_QWORD *)(v74 + 8 * v25 + 632); /*0x10025e5f5*/
                goto LABEL_34; /*0x10025e5f5*/
              }
              goto LABEL_45; /*0x10025e5e7*/
            }
          }
          v25 = v75; /*0x10025e5d7*/
          goto LABEL_32; /*0x10025e5d7*/
        }
        --v81; /*0x10025e495*/
      }
      codexmate_lib::core::relay::proxy_server::compact_text_from_value::h356a174db8df40cc(&v77, v8); /*0x10025e583*/
      v22 = v78; /*0x10025e588*/
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v78, v79); /*0x10025e593*/
      v2 = v76; /*0x10025e598*/
      v23 = v80; /*0x10025e59c*/
      if ( v24 ) /*0x10025e5a3*/
        goto LABEL_73; /*0x10025e5a3*/
      if ( v77 ) /*0x10025e5b0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v77, 1); /*0x10025e5ba*/
      v81 = v73; /*0x10025e5c3*/
      goto LABEL_34; /*0x10025e5c7*/
    default:
      goto LABEL_76; /*0x10025e3bc*/
  }
  return v2; /*0x10025e905*/
}