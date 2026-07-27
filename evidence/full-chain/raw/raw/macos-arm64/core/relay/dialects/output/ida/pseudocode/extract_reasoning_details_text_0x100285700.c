// __ZN13codexmate_lib4core5relay8dialects6output30extract_reasoning_details_text @ 0x100285700 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::dialects::output::extract_reasoning_details_text::h85ab030ce17d9ebd(
        signed __int64 *a1,
        _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  const void *v12; // rsi
  size_t v13; // rdx
  size_t v14; // r15
  __int64 v15; // r15
  char *v16; // rdi
  int v17; // eax
  char v18; // cl
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r15
  size_t v28; // rdx
  size_t v29; // r12
  __int64 v30; // r12
  int v31; // eax
  char v32; // cl
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // rbx
  size_t v40; // rdx
  size_t v41; // r15
  __int64 v42; // r15
  int v43; // eax
  char v44; // cl
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // r13
  size_t v52; // rdx
  size_t v53; // r14
  __int64 v54; // r14
  int v55; // eax
  char v56; // cl
  bool v57; // cf
  __int64 v58; // rcx
  __int64 v59; // r14
  __int64 v60; // rbx
  signed __int64 *v61; // rdx
  signed __int64 v62; // rax
  _QWORD *v63; // r15
  __int64 v64; // rsi
  __int64 v65; // r15
  __int64 result; // rax
  const void *v67; // r14
  void *v68; // rax
  void *v69; // r12
  _QWORD v70[3]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v71; // [rsp+20h] [rbp-70h] BYREF
  __int64 v72; // [rsp+28h] [rbp-68h]
  __int64 v73; // [rsp+30h] [rbp-60h]
  __int64 v74; // [rsp+38h] [rbp-58h]
  __int64 v75; // [rsp+40h] [rbp-50h]
  __int64 v76; // [rsp+48h] [rbp-48h]
  __int64 v77; // [rsp+50h] [rbp-40h]
  signed __int64 *v78; // [rsp+58h] [rbp-38h]
  __int64 v79; // [rsp+60h] [rbp-30h]

  v78 = a1; /*0x100285714*/
  while ( 1 ) /*0x100285718*/
  {
    v3 = *(unsigned __int8 *)a2; /*0x100285718*/
    if ( v3 != 5 ) /*0x10028571e*/
      break; /*0x10028571e*/
    v4 = a2[1]; /*0x100285724*/
    if ( !v4 ) /*0x10028572b*/
      goto LABEL_74; /*0x10028572b*/
    v74 = a2[2]; /*0x100285735*/
    v79 = v74; /*0x100285739*/
    v77 = v4; /*0x10028573d*/
    v5 = v4; /*0x100285741*/
LABEL_5:
    v6 = v5 + 360; /*0x100285744*/
    v7 = *(unsigned __int16 *)(v5 + 626); /*0x10028574b*/
    v75 = v5; /*0x100285752*/
    v8 = v5 - 32; /*0x100285756*/
    v76 = v7; /*0x10028575a*/
    v9 = 3LL * (unsigned int)(8 * v7); /*0x100285765*/
    v10 = -1; /*0x100285769*/
    do /*0x1002857c4*/
    {
      if ( !v9 ) /*0x100285773*/
      {
        v10 = v76; /*0x1002857e0*/
        v19 = v79 - 1; /*0x1002857e8*/
        if ( !v79 ) /*0x1002857ec*/
          goto LABEL_61; /*0x1002857ec*/
LABEL_16:
        v79 = v19; /*0x1002857f2*/
        v5 = *(_QWORD *)(v75 + 8 * v10 + 632); /*0x1002857fa*/
        goto LABEL_5; /*0x100285802*/
      }
      v11 = v6 + 24; /*0x100285775*/
      v12 = *(const void **)(v6 + 8); /*0x100285779*/
      v13 = *(_QWORD *)(v6 + 16); /*0x10028577d*/
      v14 = v13 - 4; /*0x100285784*/
      if ( v13 >= 4 ) /*0x10028578d*/
        v13 = 4; /*0x10028578d*/
      v15 = -(__int64)v14; /*0x100285791*/
      v16 = "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x100285794*/
      v17 = memcmp("textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide", v12, v13); /*0x10028579b*/
      if ( v17 ) /*0x1002857a4*/
        v15 = v17; /*0x1002857a4*/
      v18 = (v15 > 0) - (v15 < 0); /*0x1002857b1*/
      v8 += 32; /*0x1002857b3*/
      ++v10; /*0x1002857b7*/
      v9 -= 24; /*0x1002857ba*/
      v6 = v11; /*0x1002857be*/
    }
    while ( v18 == 1 ); /*0x1002857c4*/
    if ( v18 ) /*0x1002857cb*/
    {
      v19 = v79 - 1; /*0x1002857d1*/
      if ( v79 ) /*0x1002857d5*/
        goto LABEL_16; /*0x1002857d5*/
LABEL_61:
      v20 = v74; /*0x100285ae0*/
      v21 = v77; /*0x100285ae4*/
    }
    else
    {
      v20 = v74; /*0x100285815*/
      v21 = v77; /*0x100285819*/
      if ( *(_BYTE *)v8 == 3 ) /*0x10028581d*/
      {
        v22 = *(_QWORD *)(v8 + 24); /*0x10028581f*/
        v20 = v74; /*0x100285823*/
        v21 = v77; /*0x100285827*/
        if ( v22 ) /*0x10028582e*/
        {
LABEL_69:
          if ( v22 >= 0 ) /*0x100285b98*/
          {
            v67 = *(const void **)(v8 + 16); /*0x100285bed*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v12); /*0x100285bf1*/
            v65 = 1; /*0x100285bf6*/
            v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1); /*0x100285c04*/
            if ( v68 ) /*0x100285c0c*/
            {
              v69 = v68; /*0x100285c0e*/
              memcpy(v68, v67, v22); /*0x100285c1a*/
              result = (__int64)v78; /*0x100285c1f*/
              *v78 = v22; /*0x100285c23*/
              *(_QWORD *)(result + 8) = v69; /*0x100285c26*/
              *(_QWORD *)(result + 16) = v22; /*0x100285c2a*/
              return result; /*0x100285c2e*/
            }
          }
          else
          {
            v65 = 0; /*0x100285b9a*/
          }
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v65, v22); /*0x100285ba3*/
        }
      }
    }
LABEL_19:
    v79 = v20; /*0x100285840*/
    v23 = v21 + 360; /*0x100285844*/
    v24 = *(unsigned __int16 *)(v21 + 626); /*0x10028584b*/
    v75 = v21; /*0x100285852*/
    v8 = v21 - 32; /*0x100285856*/
    v76 = v24; /*0x10028585a*/
    v25 = 3LL * (unsigned int)(8 * v24); /*0x100285865*/
    v26 = -1; /*0x100285869*/
    do /*0x1002858c4*/
    {
      if ( !v25 ) /*0x100285873*/
      {
        v26 = v76; /*0x1002858e0*/
        v20 = v79 - 1; /*0x1002858e8*/
        v33 = v75; /*0x1002858ec*/
        if ( !v79 ) /*0x1002858f0*/
          goto LABEL_33; /*0x1002858f0*/
LABEL_30:
        v21 = *(_QWORD *)(v33 + 8 * v26 + 632); /*0x1002858f2*/
        goto LABEL_19; /*0x1002858fa*/
      }
      v27 = v23 + 24; /*0x100285875*/
      v12 = *(const void **)(v23 + 8); /*0x100285879*/
      v28 = *(_QWORD *)(v23 + 16); /*0x10028587d*/
      v29 = v28 - 7; /*0x100285884*/
      if ( v28 >= 7 ) /*0x10028588d*/
        v28 = 7; /*0x10028588d*/
      v30 = -(__int64)v29; /*0x100285891*/
      v16 = "contentrelay translated stream failedtext/event-stream"; /*0x100285894*/
      v31 = memcmp("contentrelay translated stream failedtext/event-stream", v12, v28); /*0x10028589b*/
      if ( v31 ) /*0x1002858a4*/
        v30 = v31; /*0x1002858a4*/
      v32 = (v30 > 0) - (v30 < 0); /*0x1002858b1*/
      v8 += 32; /*0x1002858b3*/
      ++v26; /*0x1002858b7*/
      v25 -= 24; /*0x1002858ba*/
      v23 = v27; /*0x1002858be*/
    }
    while ( v32 == 1 ); /*0x1002858c4*/
    if ( v32 ) /*0x1002858cb*/
    {
      v20 = v79 - 1; /*0x1002858d1*/
      v33 = v75; /*0x1002858d5*/
      if ( v79 ) /*0x1002858d9*/
        goto LABEL_30; /*0x1002858d9*/
    }
    else if ( *(_BYTE *)v8 == 3 ) /*0x100285905*/
    {
      v22 = *(_QWORD *)(v8 + 24); /*0x100285907*/
      if ( v22 ) /*0x10028590e*/
        goto LABEL_69; /*0x10028590e*/
    }
LABEL_33:
    v79 = v74; /*0x100285914*/
    v34 = v77; /*0x10028591c*/
LABEL_34:
    v35 = v34 + 360; /*0x100285920*/
    v36 = *(unsigned __int16 *)(v34 + 626); /*0x100285927*/
    v75 = v34; /*0x10028592e*/
    v8 = v34 - 32; /*0x100285932*/
    v76 = v36; /*0x100285936*/
    v37 = 3LL * (unsigned int)(8 * v36); /*0x100285941*/
    v38 = -1; /*0x100285945*/
    do /*0x1002859a4*/
    {
      if ( !v37 ) /*0x100285953*/
      {
        v38 = v76; /*0x1002859c0*/
        v45 = v79 - 1; /*0x1002859c8*/
        if ( !v79 ) /*0x1002859cc*/
          goto LABEL_48; /*0x1002859cc*/
LABEL_45:
        v79 = v45; /*0x1002859ce*/
        v34 = *(_QWORD *)(v75 + 8 * v38 + 632); /*0x1002859d6*/
        goto LABEL_34; /*0x1002859de*/
      }
      v39 = v35 + 24; /*0x100285955*/
      v12 = *(const void **)(v35 + 8); /*0x100285959*/
      v40 = *(_QWORD *)(v35 + 16); /*0x10028595d*/
      v41 = v40 - 7; /*0x100285964*/
      if ( v40 >= 7 ) /*0x10028596d*/
        v40 = 7; /*0x10028596d*/
      v42 = -(__int64)v41; /*0x100285971*/
      v16 = (char *)&unk_1015DD8E6; /*0x100285974*/
      v43 = memcmp(&unk_1015DD8E6, v12, v40); /*0x10028597b*/
      if ( v43 ) /*0x100285984*/
        v42 = v43; /*0x100285984*/
      v44 = (v42 > 0) - (v42 < 0); /*0x100285991*/
      v8 += 32; /*0x100285993*/
      ++v38; /*0x100285997*/
      v37 -= 24; /*0x10028599a*/
      v35 = v39; /*0x10028599e*/
    }
    while ( v44 == 1 ); /*0x1002859a4*/
    if ( v44 ) /*0x1002859ab*/
    {
      v45 = v79 - 1; /*0x1002859b1*/
      if ( v79 ) /*0x1002859b5*/
        goto LABEL_45; /*0x1002859b5*/
    }
    else if ( *(_BYTE *)v8 == 3 ) /*0x1002859f5*/
    {
      v22 = *(_QWORD *)(v8 + 24); /*0x1002859f7*/
      if ( v22 ) /*0x1002859fe*/
        goto LABEL_69; /*0x1002859fe*/
    }
LABEL_48:
    v46 = v77; /*0x100285a04*/
LABEL_49:
    v47 = v46 + 360; /*0x100285a08*/
    v48 = *(unsigned __int16 *)(v46 + 626); /*0x100285a0f*/
    v77 = v46; /*0x100285a16*/
    a2 = (_QWORD *)(v46 - 32); /*0x100285a1a*/
    v79 = v48; /*0x100285a1e*/
    v49 = 3LL * (unsigned int)(8 * v48); /*0x100285a29*/
    v50 = -1; /*0x100285a2d*/
    do /*0x100285a94*/
    {
      if ( !v49 ) /*0x100285a43*/
      {
        v50 = v79; /*0x100285ac0*/
        v57 = v74-- == 0; /*0x100285ac4*/
        v58 = v77; /*0x100285ac9*/
        if ( v57 ) /*0x100285acd*/
          goto LABEL_74; /*0x100285acd*/
LABEL_60:
        v46 = *(_QWORD *)(v58 + 8 * v50 + 632); /*0x100285ad3*/
        goto LABEL_49; /*0x100285adb*/
      }
      v51 = v47 + 24; /*0x100285a45*/
      v52 = *(_QWORD *)(v47 + 16); /*0x100285a4d*/
      v53 = v52 - 5; /*0x100285a54*/
      if ( v52 >= 5 ) /*0x100285a5d*/
        v52 = 5; /*0x100285a5d*/
      v54 = -(__int64)v53; /*0x100285a61*/
      v55 = memcmp("parts", *(const void **)(v47 + 8), v52); /*0x100285a6b*/
      if ( v55 ) /*0x100285a74*/
        v54 = v55; /*0x100285a74*/
      v56 = (v54 > 0) - (v54 < 0); /*0x100285a81*/
      a2 += 4; /*0x100285a83*/
      ++v50; /*0x100285a87*/
      v49 -= 24; /*0x100285a8a*/
      v47 = v51; /*0x100285a8e*/
    }
    while ( v56 == 1 ); /*0x100285a94*/
    if ( v56 ) /*0x100285a9b*/
    {
      v57 = v74-- == 0; /*0x100285aa1*/
      v58 = v77; /*0x100285aa6*/
      if ( !v57 ) /*0x100285aaa*/
        goto LABEL_60; /*0x100285aaa*/
LABEL_74:
      result = 0x8000000000000000LL; /*0x100285bcd*/
      *v78 = 0x8000000000000000LL; /*0x100285bdb*/
      return result; /*0x100285bdb*/
    }
  }
  if ( v3 == 3 ) /*0x100285af0*/
  {
    if ( !a2[3] ) /*0x100285bad*/
      goto LABEL_74; /*0x100285bad*/
    return _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v78, a2 + 1); /*0x100285bc8*/
  }
  else
  {
    if ( v3 != 4 ) /*0x100285af9*/
      goto LABEL_74; /*0x100285af9*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hab6a12c7be18ea72( /*0x100285b12*/
      &v71,
      a2[2],
      a2[2] + 32LL * a2[3]);
    v59 = v73; /*0x100285b17*/
    if ( v73 ) /*0x100285b1e*/
    {
      v60 = v72; /*0x100285b24*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6(v70, v72, v73, "\n\nparts", 2); /*0x100285b42*/
      v61 = v78; /*0x100285b4b*/
      v78[2] = v70[2]; /*0x100285b4f*/
      v62 = v70[0]; /*0x100285b53*/
      v61[1] = v70[1]; /*0x100285b5e*/
      *v61 = v62; /*0x100285b62*/
      v63 = (_QWORD *)(v60 + 8); /*0x100285b65*/
      do /*0x100285b77*/
      {
        v64 = *(v63 - 1); /*0x100285b7d*/
        if ( v64 ) /*0x100285b84*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v63, v64, 1); /*0x100285b8e*/
        v63 += 3; /*0x100285b70*/
        --v59; /*0x100285b74*/
      }
      while ( v59 ); /*0x100285b77*/
    }
    else
    {
      *v78 = 0x8000000000000000LL; /*0x100285c3e*/
      v60 = v72; /*0x100285c41*/
    }
    result = v71; /*0x100285c45*/
    if ( v71 ) /*0x100285c4c*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 24 * v71, 8); /*0x100285c5e*/
  }
  return result; /*0x100285bba*/
}