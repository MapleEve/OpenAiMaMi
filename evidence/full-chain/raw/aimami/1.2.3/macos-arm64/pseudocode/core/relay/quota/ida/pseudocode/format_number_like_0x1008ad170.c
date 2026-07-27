// __ZN13codexmate_lib4core5relay5quota18format_number_like @ 0x1008ad170 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::quota::format_number_like::ha299b15e648e281c(
        __int64 a1,
        unsigned __int64 a2,
        signed __int64 a3)
{
  const void *v4; // r14
  int v5; // eax
  __int64 v6; // r12
  _QWORD *v7; // r14
  int v8; // edx
  unsigned __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // kr00_8
  bool v20; // of
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // kr10_8
  unsigned int v24; // ecx
  __int64 v25; // r12
  __int64 v26; // rax
  _BYTE *v27; // r13
  __int64 v28; // rbx
  size_t v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r14
  size_t v32; // r15
  const void *v33; // rsi
  size_t v34; // r14
  __int64 v35; // r15
  bool v36; // zf
  size_t v37; // r14
  _BYTE *v38; // r14
  __int64 v39; // r9
  __int64 v40; // r13
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r15d
  _BYTE *v45; // r14
  char v46; // cl
  char v47; // si
  char v48; // r8
  int v49; // esi
  int v50; // ecx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rax
  char v55; // cl
  unsigned int v56; // edx
  char v57; // dl
  unsigned int v58; // esi
  __int64 v59; // r14
  _QWORD *v60; // rbx
  _BYTE *v61; // rax
  _BYTE *v63; // [rsp+8h] [rbp-A8h]
  __int64 v64; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+18h] [rbp-98h]
  __int64 v66; // [rsp+20h] [rbp-90h] BYREF
  __int64 v67; // [rsp+28h] [rbp-88h]
  __int64 v68; // [rsp+30h] [rbp-80h]
  _BYTE *v69; // [rsp+38h] [rbp-78h]
  _QWORD *v70; // [rsp+40h] [rbp-70h]
  __int64 v71; // [rsp+48h] [rbp-68h] BYREF
  __int64 v72; // [rsp+50h] [rbp-60h]
  __int64 v73; // [rsp+58h] [rbp-58h]
  __int64 v74; // [rsp+60h] [rbp-50h]
  __int64 v75; // [rsp+68h] [rbp-48h] BYREF
  __int64 v76; // [rsp+70h] [rbp-40h]
  __int64 v77; // [rsp+78h] [rbp-38h]
  __int64 (__fastcall *v78)(); // [rsp+80h] [rbp-30h]

  v4 = (const void *)a2; /*0x1008ad187*/
  v70 = (_QWORD *)a1; /*0x1008ad18a*/
  if ( !a3 ) /*0x1008ad191*/
    goto LABEL_5; /*0x1008ad191*/
  if ( a3 == 1 ) /*0x1008ad197*/
  {
    v5 = *(unsigned __int8 *)a2; /*0x1008ad199*/
    if ( v5 == 43 || v5 == 45 ) /*0x1008ad1a5*/
      goto LABEL_5; /*0x1008ad1a5*/
  }
  else
  {
    LOBYTE(v5) = *(_BYTE *)a2; /*0x1008ad215*/
  }
  if ( (_BYTE)v5 != 45 ) /*0x1008ad21b*/
  {
    v8 = (unsigned __int8)v5; /*0x1008ad221*/
    v9 = a3; /*0x1008ad224*/
    v10 = (_BYTE *)a2; /*0x1008ad227*/
    if ( v8 == 43 ) /*0x1008ad22d*/
    {
      v10 = (_BYTE *)(a2 + 1); /*0x1008ad22f*/
      v9 = a3 - 1; /*0x1008ad233*/
    }
    if ( v9 < 0x10 ) /*0x1008ad23b*/
    {
      if ( v9 ) /*0x1008ad244*/
      {
        v11 = 0; /*0x1008ad24a*/
        v12 = 0; /*0x1008ad24c*/
        while ( 1 ) /*0x1008ad254*/
        {
          LODWORD(a2) = (unsigned __int8)v10[v11] - 48; /*0x1008ad254*/
          if ( (unsigned int)a2 > 9 ) /*0x1008ad25a*/
            goto LABEL_5; /*0x1008ad25a*/
          a1 = 5 * v12; /*0x1008ad260*/
          a2 = (unsigned int)a2; /*0x1008ad264*/
          v12 = (unsigned int)a2 + 10 * v12; /*0x1008ad266*/
          if ( v9 == ++v11 ) /*0x1008ad270*/
            goto LABEL_41; /*0x1008ad270*/
        }
      }
      goto LABEL_35; /*0x1008ad244*/
    }
    v17 = 0; /*0x1008ad2e7*/
    v12 = 0; /*0x1008ad2e9*/
    while ( 1 ) /*0x1008ad2f0*/
    {
      v19 = v12; /*0x1008ad2f0*/
      v18 = 10 * v12; /*0x1008ad2f0*/
      if ( !is_mul_ok(0xAu, v19) ) /*0x1008ad2f0*/
        goto LABEL_5; /*0x1008ad30f*/
      LODWORD(a2) = (unsigned __int8)v10[v17] - 48; /*0x1008ad2fe*/
      if ( (unsigned int)a2 > 9 ) /*0x1008ad304*/
        goto LABEL_5; /*0x1008ad30f*/
      a2 = (unsigned int)a2; /*0x1008ad30a*/
      v20 = __OFADD__((unsigned int)a2, v18); /*0x1008ad30c*/
      v12 = (unsigned int)a2 + v18; /*0x1008ad30c*/
      if ( v20 ) /*0x1008ad30f*/
        goto LABEL_5; /*0x1008ad30f*/
      if ( v9 == ++v17 ) /*0x1008ad31b*/
        goto LABEL_41; /*0x1008ad31b*/
    }
  }
  if ( (unsigned __int64)a3 < 0x11 ) /*0x1008ad2aa*/
  {
    if ( a3 == 1 ) /*0x1008ad2b2*/
    {
LABEL_35:
      v12 = 0; /*0x1008ad31f*/
LABEL_42:
      v64 = 1; /*0x1008ad367*/
      v65 = 0; /*0x1008ad372*/
      goto LABEL_43; /*0x1008ad372*/
    }
    v15 = 1; /*0x1008ad2b4*/
    v12 = 0; /*0x1008ad2b9*/
    while ( 1 ) /*0x1008ad2c5*/
    {
      v16 = *(unsigned __int8 *)(a2 + v15) - 48; /*0x1008ad2c5*/
      if ( v16 > 9 ) /*0x1008ad2cb*/
        break; /*0x1008ad2cb*/
      v12 = 10 * v12 - v16; /*0x1008ad2da*/
      if ( a3 == ++v15 ) /*0x1008ad2e3*/
        goto LABEL_41; /*0x1008ad2e3*/
    }
LABEL_5:
    core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008ad1a7*/
      &v66,
      v4,
      a3);
    if ( !(_BYTE)v66 ) /*0x1008ad1c0*/
    {
      v71 = v67; /*0x1008ad1e1*/
      v75 = (__int64)&v71; /*0x1008ad1ea*/
      v76 = (__int64)core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23; /*0x1008ad1f5*/
      v7 = v70; /*0x1008ad204*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v70, &unk_101674AC0, &v75); /*0x1008ad20b*/
      return v7; /*0x1008ad210*/
    }
    if ( a3 < 0 ) /*0x1008ad1c5*/
    {
      v6 = 0; /*0x1008ad1cb*/
      goto LABEL_8; /*0x1008ad1cb*/
    }
    if ( a3 ) /*0x1008ad277*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66, v4); /*0x1008ad27d*/
      v6 = 1; /*0x1008ad282*/
      v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x1008ad290*/
      if ( !v13 ) /*0x1008ad298*/
LABEL_8:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, a3); /*0x1008ad1ce*/
      v14 = v13; /*0x1008ad29e*/
    }
    else
    {
      v14 = 1; /*0x1008ad6e3*/
    }
    memcpy((void *)v14, v4, a3); /*0x1008ad6f2*/
    v7 = v70; /*0x1008ad6f7*/
    *v70 = a3; /*0x1008ad6fb*/
    v7[1] = v14; /*0x1008ad6fe*/
    v7[2] = a3; /*0x1008ad702*/
    return v7; /*0x1008ad706*/
  }
  v21 = 1; /*0x1008ad324*/
  v12 = 0; /*0x1008ad329*/
  do /*0x1008ad35c*/
  {
    v23 = v12; /*0x1008ad330*/
    v22 = 10 * v12; /*0x1008ad330*/
    if ( !is_mul_ok(0xAu, v23) ) /*0x1008ad330*/
      goto LABEL_5; /*0x1008ad330*/
    v24 = *(unsigned __int8 *)(a2 + v21) - 48; /*0x1008ad33f*/
    if ( v24 > 9 ) /*0x1008ad345*/
      goto LABEL_5; /*0x1008ad345*/
    v20 = __OFSUB__(v22, v24); /*0x1008ad34d*/
    v12 = v22 - v24; /*0x1008ad34d*/
    if ( v20 ) /*0x1008ad350*/
      goto LABEL_5; /*0x1008ad350*/
    ++v21; /*0x1008ad356*/
  }
  while ( a3 != v21 ); /*0x1008ad35c*/
LABEL_41:
  if ( v12 >= 0 ) /*0x1008ad361*/
    goto LABEL_42; /*0x1008ad361*/
  v64 = (__int64)&unk_101675A76; /*0x1008ad712*/
  v65 = 1; /*0x1008ad719*/
  v12 = -v12; /*0x1008ad724*/
  if ( v12 < 0 ) /*0x1008ad727*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008ad72d*/
    v25 = 20; /*0x1008ad732*/
    v28 = 1; /*0x1008ad738*/
    v61 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1008ad747*/
    if ( !v61 ) /*0x1008ad74f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1008ad8bb*/
    v75 = 20; /*0x1008ad755*/
    v76 = (__int64)v61; /*0x1008ad75d*/
    v27 = v61; /*0x1008ad761*/
    *v61 = 45; /*0x1008ad764*/
    v77 = 1; /*0x1008ad767*/
    v12 = 0x8000000000000000LL; /*0x1008ad76f*/
    goto LABEL_45; /*0x1008ad779*/
  }
LABEL_43:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1008ad37d*/
  v25 = 19; /*0x1008ad382*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1008ad392*/
  if ( !v26 ) /*0x1008ad39a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1008ad8ac*/
  v75 = 19; /*0x1008ad3a0*/
  v27 = (_BYTE *)v26; /*0x1008ad3a8*/
  v76 = v26; /*0x1008ad3ab*/
  v77 = 0; /*0x1008ad3af*/
  v28 = 0; /*0x1008ad3b7*/
LABEL_45:
  v31 = core::fmt::num::imp::_$LT$impl$u20$usize$GT$::_fmt::h89bedbdc03eea440(v12, &v66, 19); /*0x1008ad3b9*/
  v32 = v29; /*0x1008ad3d3*/
  if ( v29 > v25 - v28 ) /*0x1008ad3d9*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v75, v28, v29, 1, 1, v30); /*0x1008ad890*/
    v27 = (_BYTE *)v76; /*0x1008ad895*/
    v28 = v77; /*0x1008ad899*/
  }
  v33 = (const void *)v31; /*0x1008ad3e4*/
  v34 = v32; /*0x1008ad3e7*/
  memcpy(&v27[v28], v33, v32); /*0x1008ad3ed*/
  v35 = v75; /*0x1008ad3f2*/
  v71 = 0; /*0x1008ad3f6*/
  v72 = 1; /*0x1008ad3fe*/
  v73 = 0; /*0x1008ad406*/
  v36 = v28 + v34 == 0; /*0x1008ad40e*/
  v37 = v28 + v34; /*0x1008ad40e*/
  v69 = v27; /*0x1008ad411*/
  if ( v36 ) /*0x1008ad415*/
  {
    v75 = 0; /*0x1008ad6b9*/
    v76 = 1; /*0x1008ad6c1*/
    v77 = 0; /*0x1008ad6c9*/
    v39 = 1; /*0x1008ad6d1*/
    v41 = 0; /*0x1008ad6d7*/
    v60 = v70; /*0x1008ad6da*/
    goto LABEL_87; /*0x1008ad6de*/
  }
  v74 = v75; /*0x1008ad41b*/
  v38 = &v27[v37]; /*0x1008ad41f*/
  v39 = 1; /*0x1008ad422*/
  v40 = 0; /*0x1008ad428*/
  v41 = 0; /*0x1008ad42f*/
  v42 = 0; /*0x1008ad432*/
  while ( 1 ) /*0x1008ad46f*/
  {
    v43 = v40; /*0x1008ad46f*/
    v44 = (char)*(v38 - 1); /*0x1008ad472*/
    if ( (v44 & 0x80000000) == 0 ) /*0x1008ad47a*/
    {
      v45 = v38 - 1; /*0x1008ad47c*/
      goto LABEL_60; /*0x1008ad47f*/
    }
    v46 = *(v38 - 2); /*0x1008ad490*/
    if ( v46 >= -64 ) /*0x1008ad498*/
    {
      v45 = v38 - 2; /*0x1008ad4be*/
      v50 = v46 & 0x1F; /*0x1008ad4c2*/
    }
    else
    {
      v47 = *(v38 - 3); /*0x1008ad49a*/
      if ( v47 > -65 ) /*0x1008ad4a3*/
      {
        v45 = v38 - 3; /*0x1008ad4c7*/
        v49 = v47 & 0xF; /*0x1008ad4cb*/
      }
      else
      {
        v48 = *(v38 - 4); /*0x1008ad4a5*/
        v45 = v38 - 4; /*0x1008ad4aa*/
        v49 = ((v48 & 7) << 6) | v47 & 0x3F; /*0x1008ad4b9*/
      }
      v50 = (v49 << 6) | v46 & 0x3F; /*0x1008ad4d4*/
    }
    v44 = (v50 << 6) | v44 & 0x3F; /*0x1008ad4dd*/
    if ( v44 == 1114112 ) /*0x1008ad4e7*/
      break; /*0x1008ad4e7*/
LABEL_60:
    v63 = v45; /*0x1008ad4ed*/
    --v40; /*0x1008ad4f7*/
    if ( v43 && !(3 * (v42 / 3) + v43) ) /*0x1008ad504*/
    {
      v51 = v41; /*0x1008ad509*/
      if ( v71 == v41 ) /*0x1008ad510*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v71, v41, 1, 1, 1, v39); /*0x1008ad64e*/
        v39 = v72; /*0x1008ad653*/
        v51 = v73; /*0x1008ad657*/
      }
      *(_BYTE *)(v39 + v51) = 44; /*0x1008ad516*/
      v73 = ++v41; /*0x1008ad51e*/
    }
    v52 = v41; /*0x1008ad522*/
    v53 = 1; /*0x1008ad525*/
    if ( v44 >= 0x80 ) /*0x1008ad532*/
    {
      v53 = 2; /*0x1008ad534*/
      if ( v44 >= 0x800 ) /*0x1008ad541*/
        v53 = 4LL - (v44 < 0x10000); /*0x1008ad550*/
    }
    v54 = v52; /*0x1008ad55b*/
    if ( v53 > v71 - v52 ) /*0x1008ad561*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v71, v52, v53, 1, 1, v39); /*0x1008ad615*/
      v54 = v73; /*0x1008ad61a*/
      v39 = v72; /*0x1008ad622*/
      if ( v44 >= 0x80 ) /*0x1008ad62d*/
      {
LABEL_70:
        v55 = v44 & 0x3F | 0x80; /*0x1008ad578*/
        v56 = v44 >> 6; /*0x1008ad584*/
        if ( v44 >= 0x800 ) /*0x1008ad58e*/
        {
          v57 = v56 & 0x3F | 0x80; /*0x1008ad5b3*/
          v58 = v44 >> 12; /*0x1008ad5b9*/
          if ( v44 > 0xFFFF ) /*0x1008ad5c3*/
          {
            *(_BYTE *)(v39 + v54) = (v44 >> 18) | 0xF0; /*0x1008ad5ec*/
            *(_BYTE *)(v39 + v54 + 1) = v58 & 0x3F | 0x80; /*0x1008ad5f0*/
            *(_BYTE *)(v39 + v54 + 2) = v57; /*0x1008ad5f5*/
            *(_BYTE *)(v39 + v54 + 3) = v55; /*0x1008ad5fa*/
          }
          else
          {
            *(_BYTE *)(v39 + v54) = v58 | 0xE0; /*0x1008ad5c9*/
            *(_BYTE *)(v39 + v54 + 1) = v57; /*0x1008ad5cd*/
            *(_BYTE *)(v39 + v54 + 2) = v55; /*0x1008ad5d2*/
          }
        }
        else
        {
          *(_BYTE *)(v39 + v54) = v56 | 0xC0; /*0x1008ad593*/
          *(_BYTE *)(v39 + v54 + 1) = v55; /*0x1008ad597*/
        }
        goto LABEL_50; /*0x1008ad59c*/
      }
    }
    else
    {
      v39 = v72; /*0x1008ad567*/
      if ( v44 >= 0x80 ) /*0x1008ad572*/
        goto LABEL_70; /*0x1008ad572*/
    }
    *(_BYTE *)(v39 + v54) = v44; /*0x1008ad440*/
LABEL_50:
    v41 = v52 + v53; /*0x1008ad444*/
    v73 = v41; /*0x1008ad447*/
    ++v42; /*0x1008ad44b*/
    v38 = v63; /*0x1008ad44e*/
    if ( v69 == v63 ) /*0x1008ad459*/
    {
      v59 = v39; /*0x1008ad663*/
      v75 = 0; /*0x1008ad666*/
      v76 = 1; /*0x1008ad66e*/
      v77 = 0; /*0x1008ad676*/
LABEL_78:
      v35 = v74; /*0x1008ad67e*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x1008ad6a8*/
        &v75,
        0,
        (v41 >> 2) - (((v41 & 3) == 0) - 1LL),
        1,
        1,
        v39);
      v60 = v70; /*0x1008ad6ad*/
      v39 = v59; /*0x1008ad6b1*/
      goto LABEL_87; /*0x1008ad6b4*/
    }
  }
  v75 = 0; /*0x1008ad77e*/
  v76 = 1; /*0x1008ad786*/
  v77 = 0; /*0x1008ad78e*/
  if ( v41 ) /*0x1008ad799*/
  {
    v59 = v39; /*0x1008ad8c0*/
    goto LABEL_78; /*0x1008ad8c3*/
  }
  v41 = 0; /*0x1008ad79f*/
  v60 = v70; /*0x1008ad7a2*/
  v35 = v74; /*0x1008ad7a6*/
LABEL_87:
  _$LT$core..iter..adapters..rev..Rev$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h561c65e1317bb752( /*0x1008ad7aa*/
    v39,
    v39 + v41,
    &v75);
  v68 = v77; /*0x1008ad7c0*/
  v67 = v76; /*0x1008ad7cc*/
  v66 = v75; /*0x1008ad7d3*/
  v75 = (__int64)&v64; /*0x1008ad7e1*/
  v76 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ad7ec*/
  v77 = (__int64)&v66; /*0x1008ad7f7*/
  v78 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008ad802*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &anon_10420c9971c21f44d230d15b39fb3fec_280, &v75); /*0x1008ad814*/
  if ( v66 ) /*0x1008ad823*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1); /*0x1008ad831*/
  if ( v71 ) /*0x1008ad83d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x1008ad848*/
  if ( v35 ) /*0x1008ad850*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v35, 1); /*0x1008ad85e*/
  return v60; /*0x1008ad869*/
}