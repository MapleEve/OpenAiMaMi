// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x10050fbd0 depth=1
_QWORD *__fastcall serde_json::de::from_trait::h7934c86b07af1b67(
        _QWORD *a1,
        __int64 *a2,
        double a3,
        double a4,
        double a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // r13
  _QWORD *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  void *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // r14
  __int64 v37; // r15
  __int64 v38; // r15
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // r12
  unsigned __int64 v43; // rcx
  void *v44; // rdi
  unsigned __int64 v45; // rsi
  __int64 v46; // rsi
  _QWORD *v47; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  _QWORD v52[8]; // [rsp+0h] [rbp-1E0h] BYREF
  _QWORD v53[3]; // [rsp+40h] [rbp-1A0h] BYREF
  _QWORD v54[4]; // [rsp+58h] [rbp-188h] BYREF
  _QWORD *v55; // [rsp+78h] [rbp-168h] BYREF
  char v56; // [rsp+80h] [rbp-160h]
  _QWORD *v57; // [rsp+88h] [rbp-158h]
  __int64 v58; // [rsp+90h] [rbp-150h]
  _QWORD v59[3]; // [rsp+98h] [rbp-148h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-130h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-128h]
  unsigned __int64 v62; // [rsp+C0h] [rbp-120h]
  __int64 v63; // [rsp+C8h] [rbp-118h]
  __int64 v64; // [rsp+D0h] [rbp-110h]
  __int64 v65; // [rsp+D8h] [rbp-108h]
  char v66; // [rsp+E0h] [rbp-100h]
  __int64 v67; // [rsp+E8h] [rbp-F8h]
  __int64 v68; // [rsp+F0h] [rbp-F0h]
  _QWORD *v69; // [rsp+F8h] [rbp-E8h]
  _QWORD *v70; // [rsp+100h] [rbp-E0h]
  _QWORD *v71; // [rsp+108h] [rbp-D8h] BYREF
  _QWORD *v72; // [rsp+110h] [rbp-D0h]
  __int64 v73; // [rsp+118h] [rbp-C8h]
  __int64 v74; // [rsp+120h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+128h] [rbp-B8h]
  _QWORD *v76; // [rsp+130h] [rbp-B0h]
  __int64 v77; // [rsp+138h] [rbp-A8h]
  _QWORD *v78; // [rsp+140h] [rbp-A0h]
  __int64 v79; // [rsp+148h] [rbp-98h]
  __int64 v80; // [rsp+150h] [rbp-90h]
  __int64 v81; // [rsp+158h] [rbp-88h] BYREF
  __int64 v82; // [rsp+160h] [rbp-80h] BYREF
  _QWORD *v83; // [rsp+168h] [rbp-78h]
  _QWORD *v84; // [rsp+170h] [rbp-70h]
  _QWORD *v85; // [rsp+178h] [rbp-68h]
  __int64 v86; // [rsp+180h] [rbp-60h]
  __int64 v87; // [rsp+188h] [rbp-58h]
  _QWORD *v88; // [rsp+190h] [rbp-50h]
  __int64 v89; // [rsp+198h] [rbp-48h]
  __int64 v90; // [rsp+1A0h] [rbp-40h]
  _QWORD *v91; // [rsp+1A8h] [rbp-38h]
  char v92[41]; // [rsp+1B7h] [rbp-29h] BYREF

  v91 = a1; /*0x10050fbe4*/
  v65 = a2[5]; /*0x10050fbec*/
  v64 = a2[4]; /*0x10050fbf7*/
  v63 = a2[3]; /*0x10050fc02*/
  v5 = a2[2]; /*0x10050fc09*/
  v62 = v5; /*0x10050fc0d*/
  v6 = *a2; /*0x10050fc14*/
  v7 = a2[1]; /*0x10050fc17*/
  v61 = v7; /*0x10050fc1b*/
  v60 = v6; /*0x10050fc22*/
  v59[0] = 0; /*0x10050fc29*/
  v59[1] = 1; /*0x10050fc34*/
  v59[2] = 0; /*0x10050fc3f*/
  v66 = 0x80; /*0x10050fc4a*/
  if ( v5 >= v7 ) /*0x10050fc54*/
  {
LABEL_6:
    v81 = 5; /*0x10050fc93*/
    v13 = (__int64)serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v59, &v81); /*0x10050fcac*/
LABEL_50:
    v47 = v91; /*0x100510202*/
    v91[1] = v13; /*0x100510206*/
    *v47 = 1; /*0x10051020a*/
    goto LABEL_51; /*0x10051020a*/
  }
  v8 = v5 + 1; /*0x10050fc5d*/
  v9 = -(__int64)v7; /*0x10050fc60*/
  v10 = &loc_100002600; /*0x10050fc63*/
  while ( 1 ) /*0x10050fc6d*/
  {
    v11 = *(unsigned __int8 *)(v60 + v8 - 1); /*0x10050fc6d*/
    if ( v11 > 0x20 || !_bittest64((const __int64 *)&v10, v11) ) /*0x10050fc78*/
      break; /*0x10050fc78*/
    v62 = v8; /*0x10050fc7e*/
    v12 = v9 + v8++ + 1; /*0x10050fc85*/
    if ( v12 == 1 ) /*0x10050fc91*/
      goto LABEL_6; /*0x10050fc91*/
  }
  if ( (_DWORD)v11 != 123 ) /*0x10050fcb9*/
  {
    v37 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f( /*0x10051030e*/
            v59,
            (__int64)v92,
            (__int64)&unk_1015334D0,
            a3,
            a4,
            a5);
LABEL_49:
    v13 = serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v37, (__int64)v59); /*0x1005101f3*/
    goto LABEL_50; /*0x1005101fd*/
  }
  v66 = 127; /*0x10050fcc9*/
  v62 = v8; /*0x10050fcd0*/
  v55 = v59; /*0x10050fcde*/
  v56 = 1; /*0x10050fce5*/
  v71 = nullptr; /*0x10050fcec*/
  v73 = 0; /*0x10050fcf7*/
  while ( 1 ) /*0x10050fdb8*/
  {
    _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2( /*0x10050fdb8*/
      (char *)&v81,
      &v55);
    if ( (_BYTE)v81 == 1 ) /*0x10050fdc4*/
    {
      v16 = (_QWORD *)v82; /*0x100510017*/
      v32 = v71; /*0x10051001b*/
      if ( v71 ) /*0x100510025*/
        goto LABEL_29; /*0x100510025*/
      goto LABEL_31; /*0x100510025*/
    }
    if ( BYTE1(v81) != 1 ) /*0x10050fdd1*/
      break; /*0x10050fdd1*/
    v14 = v55; /*0x10050fdd7*/
    serde_core::de::impls::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$alloc..string..String$GT$::deserialize::h4ef62185eb8eacb2( /*0x10050fde4*/
      &v81,
      v55);
    v15 = v81; /*0x10050fde9*/
    v16 = (_QWORD *)v82; /*0x10050fdf0*/
    if ( v81 == 0x8000000000000000LL ) /*0x10050fdf7*/
      goto LABEL_28; /*0x10050fdf7*/
    v90 = v82; /*0x10050fdfd*/
    v17 = v14[4]; /*0x10050fe01*/
    v18 = v14[5]; /*0x10050fe06*/
    if ( v18 >= v17 ) /*0x10050fe0e*/
    {
LABEL_24:
      v74 = 3; /*0x10050ffa0*/
      v30 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v14, &v74); /*0x10050ffb5*/
LABEL_25:
      v31 = v30; /*0x10050ffba*/
      if ( v15 ) /*0x10050ffc4*/
LABEL_26:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10050ffc6*/
      goto LABEL_27; /*0x10050ffce*/
    }
    v19 = v83; /*0x10050fe14*/
    v20 = v14[3]; /*0x10050fe18*/
    v21 = v18 + 1; /*0x10050fe1d*/
    v22 = -(__int64)v17; /*0x10050fe20*/
    while ( 1 ) /*0x10050fe23*/
    {
      v23 = *(unsigned __int8 *)(v20 + v21 - 1); /*0x10050fe23*/
      if ( v23 > 0x3A ) /*0x10050fe2c*/
        goto LABEL_60; /*0x10050fe2c*/
      v24 = &loc_100002600; /*0x10050fe32*/
      if ( !_bittest64((const __int64 *)&v24, v23) ) /*0x10050fe3c*/
        break; /*0x10050fe3c*/
      v14[5] = v21; /*0x10050fe42*/
      v25 = v22 + v21++ + 1; /*0x10050fe47*/
      if ( v25 == 1 ) /*0x10050fe53*/
        goto LABEL_24; /*0x10050fe53*/
    }
    if ( v23 != 58 ) /*0x10050fe64*/
    {
LABEL_60:
      v74 = 6; /*0x1005102d8*/
      v30 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v14, &v74); /*0x1005102ed*/
      goto LABEL_25; /*0x1005102f2*/
    }
    v14[5] = v21; /*0x10050fe6a*/
    serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserialize$u20$for$u20$serde_json..value..Value$GT$::deserialize::h5a36059dcb2b7542( /*0x10050fe75*/
      &v81,
      v14);
    if ( (_BYTE)v81 == 6 ) /*0x10050fe81*/
    {
      v31 = (_QWORD *)v82; /*0x100510244*/
      if ( v15 ) /*0x10051024f*/
        goto LABEL_26; /*0x10051024f*/
LABEL_27:
      v16 = v31; /*0x10050ffd3*/
LABEL_28:
      v32 = v71; /*0x10050ffd6*/
      if ( v71 ) /*0x10050ffe0*/
      {
LABEL_29:
        v33 = v73; /*0x10050ffe2*/
        v82 = 0; /*0x10050fff0*/
        v83 = v32; /*0x10050fff8*/
        v84 = v72; /*0x10050fffc*/
        v86 = 0; /*0x100510000*/
        v87 = (__int64)v32; /*0x100510008*/
        v88 = v72; /*0x10051000c*/
        v34 = 1; /*0x100510010*/
LABEL_32:
        v81 = v34; /*0x10051002b*/
        v85 = (_QWORD *)v34; /*0x100510032*/
        v89 = v33; /*0x100510036*/
        core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f((__int64)&v81); /*0x100510041*/
        v35 = 1; /*0x100510046*/
        goto LABEL_33; /*0x100510046*/
      }
LABEL_31:
      v34 = 0; /*0x100510027*/
      v33 = 0; /*0x100510029*/
      goto LABEL_32; /*0x100510029*/
    }
    v70 = v84; /*0x10050fe8b*/
    v69 = v83; /*0x10050fe96*/
    v68 = v82; /*0x10050fea8*/
    v67 = v81; /*0x10050feaf*/
    v53[0] = v15; /*0x10050feb6*/
    v53[1] = v90; /*0x10050fec1*/
    v53[2] = v19; /*0x10050fec8*/
    v52[4] = v81; /*0x10050fecf*/
    v52[5] = v82; /*0x10050fed6*/
    v52[6] = v83; /*0x10050fedd*/
    v52[7] = v84; /*0x10050fee4*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v74, &v71, v53); /*0x10050ff00*/
    if ( v74 == 0x8000000000000000LL ) /*0x10050ff0c*/
    {
      v26 = v75; /*0x10050ff12*/
      v27 = 32 * v77; /*0x10050ff20*/
      v54[3] = *(_QWORD *)(v75 + 32 * v77 + 24); /*0x10050ff29*/
      v54[2] = *(_QWORD *)(v75 + 32 * v77 + 16); /*0x10050ff35*/
      v28 = *(_QWORD *)(v75 + 32 * v77); /*0x10050ff3c*/
      v54[1] = *(_QWORD *)(v75 + 32 * v77 + 8); /*0x10050ff45*/
      v54[0] = v28; /*0x10050ff4c*/
      *(_QWORD *)(v75 + v27 + 24) = v70; /*0x10050ff5a*/
      *(_QWORD *)(v26 + v27 + 16) = v69; /*0x10050ff66*/
      v29 = v67; /*0x10050ff6b*/
      *(_QWORD *)(v26 + v27 + 8) = v68; /*0x10050ff79*/
      *(_QWORD *)(v26 + v27) = v29; /*0x10050ff7e*/
      if ( LOBYTE(v54[0]) != 6 ) /*0x10050ff89*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v54); /*0x10050ff96*/
    }
    else
    {
      v87 = v80; /*0x10050fd17*/
      v86 = v79; /*0x10050fd22*/
      v85 = v78; /*0x10050fd2d*/
      v84 = (_QWORD *)v77; /*0x10050fd38*/
      v83 = v76; /*0x10050fd43*/
      v82 = v75; /*0x10050fd55*/
      v81 = v74; /*0x10050fd59*/
      v52[3] = v70; /*0x10050fd67*/
      v52[2] = v69; /*0x10050fd75*/
      v52[1] = v68; /*0x10050fd8a*/
      v52[0] = v67; /*0x10050fd91*/
      ((void (__fastcall *)(_QWORD *, __int64 *, _QWORD *))alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8)( /*0x10050fda9*/
        v54,
        &v81,
        v52);
    }
  }
  v16 = v71; /*0x1005101ab*/
  v57 = v72; /*0x1005101b9*/
  v58 = v73; /*0x1005101c7*/
  v35 = 0; /*0x1005101ce*/
LABEL_33:
  ++v66; /*0x10051004b*/
  v74 = v35; /*0x100510051*/
  v75 = (__int64)v16; /*0x100510058*/
  v76 = v57; /*0x10051006d*/
  v77 = v58; /*0x100510074*/
  v36 = serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(v59); /*0x100510087*/
  v84 = (_QWORD *)v77; /*0x100510091*/
  v83 = v76; /*0x10051009c*/
  v82 = v75; /*0x1005100ae*/
  v81 = v74; /*0x1005100b2*/
  v85 = v36; /*0x1005100b9*/
  if ( (v74 & 1) != 0 ) /*0x1005100bf*/
  {
    v37 = v82; /*0x1005100c1*/
    if ( v36 ) /*0x1005100c8*/
    {
      if ( *v36 == 1 ) /*0x1005100d5*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v36 + 1); /*0x1005101dc*/
      }
      else if ( !*v36 && v36[2] ) /*0x1005100e4*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005100fa*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005101ee*/
    }
    goto LABEL_49; /*0x1005101ee*/
  }
  if ( v36 ) /*0x100510107*/
  {
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2f0071d6e7b6a562(&v82); /*0x10051031a*/
    v37 = (__int64)v36; /*0x10051031f*/
    goto LABEL_49; /*0x100510322*/
  }
  v38 = v82; /*0x10051010d*/
  v39 = v83; /*0x100510111*/
  v40 = v91; /*0x100510119*/
  v91[3] = v84; /*0x10051011d*/
  v40[2] = v39; /*0x100510121*/
  v40[1] = v38; /*0x100510125*/
  *v40 = 0; /*0x100510129*/
  if ( v62 >= v61 ) /*0x100510141*/
  {
LABEL_45:
    *v91 = 0; /*0x10051019e*/
  }
  else
  {
    v41 = (_QWORD *)v91[2]; /*0x10051014b*/
    v42 = v91[3]; /*0x10051014f*/
    v43 = v62 + 1; /*0x10051015d*/
    v44 = &loc_100002600; /*0x100510160*/
    while ( 1 ) /*0x100510170*/
    {
      v45 = *(unsigned __int8 *)(v60 + v43 - 1); /*0x100510170*/
      if ( v45 > 0x20 || !_bittest64((const __int64 *)&v44, v45) ) /*0x10051017f*/
        break; /*0x10051017f*/
      v62 = v43; /*0x100510189*/
      v46 = v43 - v61 + 1; /*0x100510190*/
      ++v43; /*0x100510195*/
      if ( v46 == 1 ) /*0x10051019c*/
        goto LABEL_45; /*0x10051019c*/
    }
    v81 = 22; /*0x10051025a*/
    v49 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8((__int64)v59, &v81); /*0x100510273*/
    v50 = v91; /*0x100510278*/
    v91[1] = v49; /*0x10051027c*/
    *v50 = 1; /*0x100510280*/
    if ( v38 ) /*0x10051028a*/
    {
      v82 = 0; /*0x10051028c*/
      v83 = (_QWORD *)v38; /*0x100510294*/
      v84 = v41; /*0x100510298*/
      v86 = 0; /*0x10051029c*/
      v87 = v38; /*0x1005102a4*/
      v88 = v41; /*0x1005102a8*/
      v51 = 1; /*0x1005102ac*/
    }
    else
    {
      v51 = 0; /*0x1005102b3*/
      v42 = 0; /*0x1005102b5*/
    }
    v81 = v51; /*0x1005102b8*/
    v85 = (_QWORD *)v51; /*0x1005102bf*/
    v89 = v42; /*0x1005102c3*/
    core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f((__int64)&v81); /*0x1005102ce*/
  }
LABEL_51:
  if ( v59[0] ) /*0x10051021b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100510229*/
  return v91; /*0x100510232*/
}