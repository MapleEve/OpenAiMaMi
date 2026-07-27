// __ZN13codexmate_lib4core5relay10translator31flatten_content_items_text_only @ 0x10086fa30 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::flatten_content_items_text_only::h9da8e15177d50765(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  const void *v17; // r13
  __int64 v18; // r12
  void *v19; // rax
  size_t v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r12
  double result; // xmm0_8
  __int64 v24; // rbx
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  const void *v28; // r13
  void *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // r14
  __int64 v33; // rsi
  _QWORD v34[3]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-60h]
  __int64 v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h]
  _QWORD *v38; // [rsp+38h] [rbp-48h]
  __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+48h] [rbp-38h]
  __int64 v41; // [rsp+50h] [rbp-30h]

  v39 = 0; /*0x10086fa44*/
  v40 = 8; /*0x10086fa4c*/
  v41 = 0; /*0x10086fa54*/
  if ( !a3 ) /*0x10086fa5f*/
  {
    v6 = 8; /*0x10086fa7b*/
    v7 = 0; /*0x10086fa80*/
    goto LABEL_39; /*0x10086fa82*/
  }
  v5 = 32 * a3; /*0x10086fa67*/
  do /*0x10086fac6*/
  {
    v11 = 4; /*0x10086facc*/
    v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086fad7*/
            &anon_10420c9971c21f44d230d15b39fb3fec_75,
            4,
            a2);
    if ( v12 && *(_BYTE *)v12 == 3 ) /*0x10086fae4*/
    {
      v13 = *(_QWORD *)(v12 + 24) - 4LL; /*0x10086faea*/
      v14 = *(_QWORD *)(v12 + 16); /*0x10086faf4*/
      switch ( v13 ) /*0x10086fb06*/
      {
        case 0LL: /*0x10086fb06*/
          if ( *(_DWORD *)v14 == 1954047348 ) /*0x10086fb0e*/
            goto LABEL_28; /*0x10086fb0e*/
          goto LABEL_16; /*0x10086fb0e*/
        case 1LL: /*0x10086fb06*/
          if ( *(_DWORD *)v14 ^ 0x67616D69 | *(unsigned __int8 *)(v14 + 4) ^ 0x65 ) /*0x10086fb49*/
            goto LABEL_16; /*0x10086fb4b*/
          goto LABEL_25; /*0x10086fb4b*/
        case 6LL: /*0x10086fb06*/
          if ( !(*(_QWORD *)v14 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v14 + 8) ^ 0x7478LL) ) /*0x10086fb2f*/
            goto LABEL_28; /*0x10086fb32*/
          goto LABEL_16; /*0x10086fb32*/
        case 7LL: /*0x10086fb06*/
          v11 = 0x747865745F747570LL; /*0x10086fc0b*/
          if ( *(_QWORD *)v14 ^ 0x745F74757074756FLL | *(_QWORD *)(v14 + 3) ^ 0x747865745F747570LL ) /*0x10086fc18*/
          {
            if ( *(_QWORD *)v14 ^ 0x6D695F7475706E69LL | *(_QWORD *)(v14 + 3) ^ 0x6567616D695F7475LL ) /*0x10086fc42*/
              goto LABEL_16; /*0x10086fc45*/
LABEL_25:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10086fc4b*/
              &anon_10420c9971c21f44d230d15b39fb3fec_75,
              v11);
            v24 = 16; /*0x10086fc50*/
            v18 = 1; /*0x10086fc55*/
            v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x10086fc65*/
            if ( !v25 ) /*0x10086fc6d*/
              goto LABEL_37; /*0x10086fc6d*/
            v21 = (__int64)v25; /*0x10086fc8e*/
            qmemcpy(v25, "[image attached]", 16); /*0x10086fc91*/
            v22 = v41; /*0x10086fc94*/
            v37 = 16; /*0x10086fc9d*/
            if ( v41 == v39 ) /*0x10086fca5*/
              result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v39); /*0x10086fcaf*/
            goto LABEL_6; /*0x10086fcb4*/
          }
LABEL_28:
          v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086fcb9*/
                  &anon_10420c9971c21f44d230d15b39fb3fec_110,
                  4,
                  a2);
          if ( !v26 ) /*0x10086fccc*/
            goto LABEL_7; /*0x10086fccc*/
          if ( *(_BYTE *)v26 != 3 ) /*0x10086fcd5*/
            goto LABEL_7; /*0x10086fcd5*/
          v27 = *(_QWORD *)(v26 + 24); /*0x10086fcdb*/
          if ( !v27 ) /*0x10086fce2*/
            goto LABEL_7; /*0x10086fce2*/
          if ( v27 < 0 ) /*0x10086fce8*/
          {
            v18 = 0; /*0x10086fe0f*/
            v24 = v36; /*0x10086fe12*/
            goto LABEL_37; /*0x10086fe16*/
          }
          v38 = a1; /*0x10086fcee*/
          v28 = *(const void **)(v26 + 16); /*0x10086fcf2*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10086fcf6*/
            &anon_10420c9971c21f44d230d15b39fb3fec_110,
            4);
          v18 = 1; /*0x10086fcfb*/
          v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v27, 1); /*0x10086fd09*/
          v20 = v27; /*0x10086fd0e*/
          if ( !v29 ) /*0x10086fd14*/
          {
LABEL_48:
            v24 = v20; /*0x10086fe1b*/
LABEL_37:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v24); /*0x10086fd5c*/
          }
          v21 = (__int64)v29; /*0x10086fd1a*/
          v37 = v20; /*0x10086fd23*/
          memcpy(v29, v28, v20); /*0x10086fd27*/
          v22 = v41; /*0x10086fd2c*/
          if ( v41 == v39 ) /*0x10086fd34*/
          {
            result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v39); /*0x10086fd3a*/
            a1 = v38; /*0x10086fd3f*/
            v36 = v21; /*0x10086fd43*/
            goto LABEL_6; /*0x10086fd47*/
          }
          v36 = v21; /*0x10086fd4c*/
          break; /*0x10086fd50*/
        default:
          goto LABEL_16;
      }
      goto LABEL_5; /*0x10086fd50*/
    }
LABEL_16:
    v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086fb60*/
            &anon_10420c9971c21f44d230d15b39fb3fec_110,
            4,
            a2);
    if ( v15 ) /*0x10086fb73*/
    {
      if ( *(_BYTE *)v15 == 3 ) /*0x10086fb7c*/
      {
        v16 = *(_QWORD *)(v15 + 24); /*0x10086fb82*/
        if ( v16 ) /*0x10086fb89*/
        {
          if ( v16 < 0 ) /*0x10086fb8f*/
          {
            v18 = 0; /*0x10086fd55*/
            v24 = v35; /*0x10086fd58*/
            goto LABEL_37; /*0x10086fd58*/
          }
          v38 = a1; /*0x10086fb95*/
          v17 = *(const void **)(v15 + 16); /*0x10086fb99*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10086fb9d*/
            &anon_10420c9971c21f44d230d15b39fb3fec_110,
            4);
          v18 = 1; /*0x10086fba2*/
          v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x10086fbb0*/
          v20 = v16; /*0x10086fbb5*/
          if ( !v19 ) /*0x10086fbbb*/
            goto LABEL_48; /*0x10086fbbb*/
          v21 = (__int64)v19; /*0x10086fbc1*/
          v37 = v20; /*0x10086fbca*/
          memcpy(v19, v17, v20); /*0x10086fbce*/
          v22 = v41; /*0x10086fbd3*/
          if ( v41 == v39 ) /*0x10086fbdb*/
          {
            result = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v39); /*0x10086fbe5*/
            a1 = v38; /*0x10086fbea*/
            v35 = v21; /*0x10086fbee*/
            goto LABEL_6; /*0x10086fbf2*/
          }
          v35 = v21; /*0x10086fa87*/
LABEL_5:
          a1 = v38; /*0x10086fa8b*/
LABEL_6:
          v8 = v40; /*0x10086fa8f*/
          v9 = 3 * v22; /*0x10086fa93*/
          v10 = v37; /*0x10086fa97*/
          *(_QWORD *)(v40 + 8 * v9) = v37; /*0x10086fa9b*/
          *(_QWORD *)(v8 + 8 * v9 + 8) = v21; /*0x10086fa9f*/
          *(_QWORD *)(v8 + 8 * v9 + 16) = v10; /*0x10086faa4*/
          v41 = v22 + 1; /*0x10086faac*/
        }
      }
    }
LABEL_7:
    a2 += 32; /*0x10086fabe*/
    v5 -= 32; /*0x10086fac2*/
  }
  while ( v5 ); /*0x10086fac6*/
  v6 = v40; /*0x10086fd69*/
  v7 = v41; /*0x10086fd6d*/
LABEL_39:
  alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x10086fd71*/
    v34,
    v6,
    v7,
    "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
    1);
  a1[2] = v34[2]; /*0x10086fd8b*/
  v30 = v34[0]; /*0x10086fd8f*/
  a1[1] = v34[1]; /*0x10086fd97*/
  *a1 = v30; /*0x10086fd9b*/
  v31 = v41; /*0x10086fd9f*/
  if ( v41 ) /*0x10086fda6*/
  {
    v32 = (_QWORD *)(v40 + 8); /*0x10086fdac*/
    do /*0x10086fdc7*/
    {
      v33 = *(v32 - 1); /*0x10086fdc9*/
      if ( v33 ) /*0x10086fdd0*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v32, v33, 1); /*0x10086fdda*/
      v32 += 3; /*0x10086fdc0*/
      --v31; /*0x10086fdc4*/
    }
    while ( v31 ); /*0x10086fdc7*/
  }
  if ( v39 ) /*0x10086fde8*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24 * v39, 8); /*0x10086fdfb*/
  return result; /*0x10086fe00*/
}