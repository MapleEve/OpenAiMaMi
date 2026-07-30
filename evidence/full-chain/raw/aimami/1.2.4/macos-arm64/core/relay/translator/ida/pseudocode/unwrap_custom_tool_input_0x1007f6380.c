// __ZN13codexmate_lib4core5relay10translator24unwrap_custom_tool_input @ 0x1007f6380 | 1.2.4 NEW-delta
__int64 *__fastcall codexmate_lib::core::relay::translator::unwrap_custom_tool_input::h58df35e457d1015d(
        __int64 *a1,
        const void *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 i; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r15
  size_t v25; // rdx
  size_t v26; // r12
  __int64 v27; // r12
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 j; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r14
  __int64 v36; // r15
  size_t v37; // rdx
  size_t v38; // r12
  __int64 v39; // r12
  int v40; // eax
  __int64 v41; // r14
  const void *v42; // r15
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rax
  const void *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+10h] [rbp-D0h]
  __int64 v53; // [rsp+18h] [rbp-C8h]
  __int64 v54; // [rsp+20h] [rbp-C0h]
  __int64 v55; // [rsp+28h] [rbp-B8h]
  __int64 v56; // [rsp+30h] [rbp-B0h]
  __int64 v57; // [rsp+38h] [rbp-A8h]
  __int64 v58; // [rsp+40h] [rbp-A0h]
  __int64 v59; // [rsp+48h] [rbp-98h]
  __int64 v60; // [rsp+50h] [rbp-90h]
  char v61[8]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v62; // [rsp+60h] [rbp-80h] BYREF
  __int64 v63; // [rsp+68h] [rbp-78h]
  __int64 v64; // [rsp+70h] [rbp-70h]
  size_t __n; // [rsp+78h] [rbp-68h]
  const void *v66; // [rsp+80h] [rbp-60h]
  __int64 v67; // [rsp+88h] [rbp-58h]
  __int64 v68; // [rsp+90h] [rbp-50h]
  __int64 v69; // [rsp+98h] [rbp-48h]
  __int64 v70; // [rsp+A0h] [rbp-40h]
  __int64 *v71; // [rsp+A8h] [rbp-38h]
  __int64 v72; // [rsp+B0h] [rbp-30h]

  v3 = a3; /*0x1007f6394*/
  v5 = a1; /*0x1007f639a*/
  v6 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(a2, a3); /*0x1007f63a3*/
  if ( !v7 ) /*0x1007f63ab*/
  {
    *a1 = 0; /*0x1007f641b*/
    a1[1] = 1; /*0x1007f6422*/
    a1[2] = 0; /*0x1007f642a*/
    return v5; /*0x1007f6432*/
  }
  v51 = v6; /*0x1007f63ad*/
  v52 = v7; /*0x1007f63b4*/
  v53 = 0; /*0x1007f63bb*/
  v54 = 0; /*0x1007f63c6*/
  v55 = v6; /*0x1007f63d1*/
  v56 = v7; /*0x1007f63d8*/
  v8 = v61; /*0x1007f63df*/
  v9 = &v51; /*0x1007f63e6*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(v61, &v51); /*0x1007f63ed*/
  if ( v61[0] != 6 ) /*0x1007f63f9*/
  {
    __n = v3; /*0x1007f6437*/
    if ( v61[0] != 5 ) /*0x1007f6445*/
    {
      if ( v61[0] == 3 ) /*0x1007f644a*/
      {
        v5[2] = v64; /*0x1007f6454*/
        v16 = v62; /*0x1007f6458*/
        v5[1] = v63; /*0x1007f6460*/
        *v5 = v16; /*0x1007f6464*/
        return v5; /*0x1007f6467*/
      }
      v11 = (__int64 *)v61; /*0x1007f6559*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v61); /*0x1007f6560*/
      v3 = __n; /*0x1007f6565*/
      v14 = __n == 0; /*0x1007f6569*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1007f656c*/
        goto LABEL_4; /*0x1007f656c*/
      goto LABEL_25; /*0x1007f656c*/
    }
    v66 = a2; /*0x1007f646c*/
    v71 = v5; /*0x1007f6470*/
    v17 = v62; /*0x1007f6474*/
    v70 = v63; /*0x1007f647c*/
    v60 = v64; /*0x1007f6484*/
    v69 = v62; /*0x1007f648b*/
    if ( !v62 ) /*0x1007f6492*/
      goto LABEL_49; /*0x1007f6492*/
    v72 = v70; /*0x1007f649c*/
    for ( i = v69; ; i = *(_QWORD *)(v67 + 8 * v23 + 632) ) /*0x1007f64a0*/
    {
      v19 = i + 360; /*0x1007f64a4*/
      v20 = *(unsigned __int16 *)(i + 626); /*0x1007f64ab*/
      v67 = i; /*0x1007f64b2*/
      v21 = i - 32; /*0x1007f64b6*/
      v68 = v20; /*0x1007f64ba*/
      v22 = 3LL * (unsigned int)(8 * v20); /*0x1007f64c5*/
      v23 = -1; /*0x1007f64c9*/
      do /*0x1007f6524*/
      {
        if ( !v22 ) /*0x1007f64d3*/
        {
          v23 = v68; /*0x1007f6532*/
          goto LABEL_22; /*0x1007f6532*/
        }
        v24 = v19 + 24; /*0x1007f64d5*/
        v9 = *(__int64 **)(v19 + 8); /*0x1007f64d9*/
        v25 = *(_QWORD *)(v19 + 16); /*0x1007f64dd*/
        v26 = v25 - 5; /*0x1007f64e4*/
        if ( v25 >= 5 ) /*0x1007f64ed*/
          v25 = 5; /*0x1007f64ed*/
        v27 = -(__int64)v26; /*0x1007f64f1*/
        v8 = "inputYou have a web_search tool available.\n\nobjectpropertiesdescriptionparametersstrict"; /*0x1007f64f4*/
        v28 = memcmp( /*0x1007f64fb*/
                "inputYou have a web_search tool available.\n\nobjectpropertiesdescriptionparametersstrict",
                v9,
                v25);
        if ( v28 ) /*0x1007f6504*/
          v27 = v28; /*0x1007f6504*/
        LOBYTE(v17) = (v27 > 0) - (v27 < 0); /*0x1007f6511*/
        v21 += 32; /*0x1007f6513*/
        ++v23; /*0x1007f6517*/
        v22 -= 24; /*0x1007f651a*/
        v19 = v24; /*0x1007f651e*/
      }
      while ( (_BYTE)v17 == 1 ); /*0x1007f6524*/
      if ( !(_BYTE)v17 ) /*0x1007f652b*/
        goto LABEL_44; /*0x1007f652b*/
LABEL_22:
      if ( !v72 ) /*0x1007f653e*/
        break; /*0x1007f653e*/
      --v72; /*0x1007f6544*/
    }
    v72 = v70; /*0x1007f65d2*/
    for ( j = v69; ; j = *(_QWORD *)(v67 + 8 * v35 + 632) ) /*0x1007f65d6*/
    {
      v33 = j + 360; /*0x1007f65da*/
      v10 = *(unsigned __int16 *)(j + 626); /*0x1007f65e1*/
      v67 = j; /*0x1007f65e8*/
      v21 = j - 32; /*0x1007f65ec*/
      v68 = v10; /*0x1007f65f0*/
      v17 = (unsigned int)(8 * v10); /*0x1007f65f4*/
      v34 = 3 * v17; /*0x1007f65fb*/
      v35 = -1; /*0x1007f65ff*/
      do /*0x1007f665a*/
      {
        if ( !v34 ) /*0x1007f6609*/
        {
          v35 = v68; /*0x1007f6665*/
          goto LABEL_42; /*0x1007f6665*/
        }
        v36 = v33 + 24; /*0x1007f660b*/
        v9 = *(__int64 **)(v33 + 8); /*0x1007f660f*/
        v37 = *(_QWORD *)(v33 + 16); /*0x1007f6613*/
        v38 = v37 - 5; /*0x1007f661a*/
        if ( v37 >= 5 ) /*0x1007f6623*/
          v37 = 5; /*0x1007f6623*/
        v39 = -(__int64)v38; /*0x1007f6627*/
        v8 = "patchsysteminstructions"; /*0x1007f662a*/
        v40 = memcmp("patchsysteminstructions", v9, v37); /*0x1007f6631*/
        if ( v40 ) /*0x1007f663a*/
          v39 = v40; /*0x1007f663a*/
        LOBYTE(v17) = (v39 > 0) - (v39 < 0); /*0x1007f6647*/
        v21 += 32; /*0x1007f6649*/
        ++v35; /*0x1007f664d*/
        v34 -= 24; /*0x1007f6650*/
        v33 = v36; /*0x1007f6654*/
      }
      while ( (_BYTE)v17 == 1 ); /*0x1007f665a*/
      if ( !(_BYTE)v17 ) /*0x1007f6661*/
        break; /*0x1007f6661*/
LABEL_42:
      if ( !v72 ) /*0x1007f6671*/
        goto LABEL_49; /*0x1007f6671*/
      --v72; /*0x1007f6673*/
    }
LABEL_44:
    if ( *(_BYTE *)v21 == 3 ) /*0x1007f668d*/
    {
      v41 = *(_QWORD *)(v21 + 24); /*0x1007f668f*/
      if ( v41 >= 0 ) /*0x1007f6696*/
      {
        v42 = *(const void **)(v21 + 16); /*0x1007f6698*/
        if ( !v41 ) /*0x1007f669c*/
        {
          v44 = 1; /*0x1007f671b*/
          v5 = v71; /*0x1007f6721*/
          goto LABEL_57; /*0x1007f6721*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9, v10, v17); /*0x1007f669e*/
        v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x1007f66ab*/
        v5 = v71; /*0x1007f66b3*/
        if ( v43 ) /*0x1007f66b7*/
        {
          v44 = v43; /*0x1007f66bd*/
LABEL_57:
          v48 = v44; /*0x1007f6725*/
          v47 = v42; /*0x1007f6728*/
          goto LABEL_58; /*0x1007f6728*/
        }
        goto LABEL_62; /*0x1007f66b7*/
      }
    }
    else
    {
LABEL_49:
      v41 = __n; /*0x1007f66c2*/
      if ( (__n & 0x8000000000000000LL) == 0LL ) /*0x1007f66c9*/
      {
        if ( __n ) /*0x1007f66db*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v9, v10, v17); /*0x1007f66dd*/
          v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x1007f66ea*/
          v5 = v71; /*0x1007f66f2*/
          v47 = v66; /*0x1007f66f6*/
          if ( !v46 ) /*0x1007f66fa*/
          {
LABEL_62:
            v45 = 1; /*0x1007f67b5*/
LABEL_51:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v41); /*0x1007f66cd*/
          }
          v44 = v46; /*0x1007f6700*/
          v48 = v46; /*0x1007f6703*/
        }
        else
        {
          v44 = 1; /*0x1007f6708*/
          v5 = v71; /*0x1007f670e*/
          v47 = v66; /*0x1007f6712*/
          v48 = 1; /*0x1007f6716*/
        }
LABEL_58:
        memcpy((void *)v48, v47, v41); /*0x1007f672b*/
        *v5 = v41; /*0x1007f6733*/
        v5[1] = v44; /*0x1007f6736*/
        v5[2] = v41; /*0x1007f673a*/
        if ( v69 ) /*0x1007f6745*/
        {
          v52 = 0; /*0x1007f6747*/
          v53 = v69; /*0x1007f6752*/
          v54 = v70; /*0x1007f675d*/
          v56 = 0; /*0x1007f6764*/
          v57 = v69; /*0x1007f676f*/
          v58 = v70; /*0x1007f6776*/
          v49 = 1; /*0x1007f677d*/
          v50 = v60; /*0x1007f6782*/
        }
        else
        {
          v49 = 0; /*0x1007f678b*/
          v50 = 0; /*0x1007f678d*/
        }
        v51 = v49; /*0x1007f678f*/
        v55 = v49; /*0x1007f6796*/
        v59 = v50; /*0x1007f679d*/
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1009c2e0afc43f9(&v51); /*0x1007f67ab*/
        return v5; /*0x1007f67b0*/
      }
    }
    v45 = 0; /*0x1007f66cb*/
    goto LABEL_51; /*0x1007f66cb*/
  }
  v11 = &v62; /*0x1007f63fb*/
  core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::hc173bfdeee8b49ee(&v62); /*0x1007f63ff*/
  v14 = v3 == 0; /*0x1007f6404*/
  if ( v3 < 0 ) /*0x1007f6407*/
  {
LABEL_4:
    v15 = 0; /*0x1007f640d*/
    goto LABEL_5; /*0x1007f640d*/
  }
LABEL_25:
  if ( v14 ) /*0x1007f6572*/
  {
    v30 = 1; /*0x1007f659a*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, &v51, v12, v13); /*0x1007f6574*/
    v15 = 1; /*0x1007f6579*/
    v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1); /*0x1007f6587*/
    if ( !v29 ) /*0x1007f658f*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v3); /*0x1007f6410*/
    v30 = v29; /*0x1007f6595*/
  }
  memcpy((void *)v30, a2, v3); /*0x1007f65a9*/
  *v5 = v3; /*0x1007f65ae*/
  v5[1] = v30; /*0x1007f65b1*/
  v5[2] = v3; /*0x1007f65b5*/
  return v5; /*0x1007f65bc*/
}