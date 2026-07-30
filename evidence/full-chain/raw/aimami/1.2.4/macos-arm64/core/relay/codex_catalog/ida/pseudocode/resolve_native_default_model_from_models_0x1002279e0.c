// __ZN13codexmate_lib4core5relay13codex_catalog40resolve_native_default_model_from_models @ 0x1002279e0 | 1.2.4 NEW-delta
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_catalog::resolve_native_default_model_from_models::h86e47314ea6cbc42(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __m256i *v7; // rdi
  size_t v8; // rsi
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rsi
  __m256i *v15; // r12
  __m256i *v16; // rsi
  __m256i *v17; // r8
  __m256i *v18; // r13
  __int8 v19; // bl
  __m256i *v20; // rbx
  __m256i *v21; // rsi
  __m256i *v22; // r13
  __m256i **v23; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  size_t v26; // rax
  __m256i *v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // r12
  __int64 v30; // r13
  size_t v31; // rdx
  size_t v32; // r15
  __int64 v33; // r15
  int v34; // eax
  bool v35; // zf
  bool v36; // sf
  char v37; // cl
  bool v38; // cf
  size_t v39; // rdx
  __int64 v40; // r9
  const void *v41; // r13
  size_t v42; // r12
  __int64 v43; // r15
  __int64 v44; // rax
  _BYTE *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rbx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // rbx
  size_t v52; // r14
  __int64 v53; // r15
  _DWORD *v54; // rax
  _QWORD *v55; // rcx
  unsigned __int64 result; // rax
  const void *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r9
  __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // rax
  size_t v64; // r12
  __int64 v65; // r14
  __m256i v66; // [rsp+0h] [rbp-2B0h] BYREF
  __m256i *v67; // [rsp+20h] [rbp-290h]
  __m256i *v68; // [rsp+28h] [rbp-288h]
  void *v69; // [rsp+30h] [rbp-280h]
  void *v70; // [rsp+38h] [rbp-278h]
  __m256i *v71; // [rsp+40h] [rbp-270h]
  __m256i *v72; // [rsp+48h] [rbp-268h]
  __m256i *v73; // [rsp+50h] [rbp-260h]
  __m256i *v74; // [rsp+58h] [rbp-258h]
  __int64 v75; // [rsp+60h] [rbp-250h]
  _BYTE __src[144]; // [rsp+68h] [rbp-248h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-1B8h] BYREF
  __int128 v78; // [rsp+108h] [rbp-1A8h]
  __m256i *v79; // [rsp+118h] [rbp-198h]
  __m256i *v80; // [rsp+120h] [rbp-190h]
  void *v81; // [rsp+128h] [rbp-188h]
  void *v82; // [rsp+130h] [rbp-180h]
  __m256i *v83; // [rsp+138h] [rbp-178h]
  __m256i *v84; // [rsp+140h] [rbp-170h]
  __m256i *v85; // [rsp+148h] [rbp-168h]
  __m256i *v86; // [rsp+150h] [rbp-160h]
  __int64 v87; // [rsp+158h] [rbp-158h]
  _BYTE __dst[144]; // [rsp+160h] [rbp-150h] BYREF
  __int64 v89; // [rsp+1F0h] [rbp-C0h]
  __m256i *v90; // [rsp+1F8h] [rbp-B8h]
  void *v91; // [rsp+200h] [rbp-B0h]
  __m256i *v92; // [rsp+208h] [rbp-A8h]
  __m256i *v93; // [rsp+210h] [rbp-A0h]
  __int64 v94; // [rsp+218h] [rbp-98h]
  _BYTE v95[15]; // [rsp+220h] [rbp-90h]
  _QWORD *v96; // [rsp+230h] [rbp-80h]
  __int64 v97; // [rsp+238h] [rbp-78h]
  _QWORD v98[2]; // [rsp+240h] [rbp-70h]
  __m256i *v99; // [rsp+250h] [rbp-60h]
  _QWORD v100[2]; // [rsp+258h] [rbp-58h]
  void *__s2; // [rsp+268h] [rbp-48h]
  __int8 v102; // [rsp+277h] [rbp-39h]
  size_t __n; // [rsp+278h] [rbp-38h]
  unsigned __int64 v104; // [rsp+280h] [rbp-30h]

  v96 = a1; /*0x1002279fa*/
  v6 = *(_QWORD *)(a2 + 64); /*0x100227a02*/
  v7 = (__m256i *)&v77; /*0x100227a06*/
  v8 = *(_QWORD *)(a2 + 56); /*0x100227a0d*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v77, v8, v6); /*0x100227a10*/
  if ( __OFSUB__(-(__int64)v77, 1) ) /*0x100227a1f*/
  {
    v10 = BYTE8(v77) & 3; /*0x100227a2d*/
    if ( (_DWORD)v10 == 1 ) /*0x100227a33*/
    {
      v11 = *((_QWORD *)&v77 + 1) - 1LL; /*0x100227a39*/
      v12 = *(_QWORD *)(*((_QWORD *)&v77 + 1) - 1LL); /*0x100227a3d*/
      v13 = *(_QWORD *)(*((_QWORD *)&v77 + 1) + 7LL); /*0x100227a41*/
      if ( *(_QWORD *)v13 ) /*0x100227a45*/
        (*(void (__fastcall **)(__int64))v13)(v12); /*0x100227a51*/
      v14 = *(_QWORD *)(v13 + 8); /*0x100227a53*/
      if ( v14 ) /*0x100227a5a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100227a63*/
      v8 = 24; /*0x100227a68*/
      v7 = (__m256i *)v11; /*0x100227a72*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100227a75*/
    }
    goto LABEL_48; /*0x100227a7a*/
  }
  v99 = *((__m256i **)&v77 + 1); /*0x100227a98*/
  __n = v77; /*0x100227a98*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622( /*0x100227a9c*/
    &v66,
    *((_QWORD *)&v77 + 1),
    v78);
  v100[0] = *(__int64 *)((char *)&v66.i64[2] + 1); /*0x100227abe*/
  *(_QWORD *)((char *)v100 + 7) = v66.i64[3]; /*0x100227ac9*/
  v7 = v68; /*0x100227ad4*/
  v9 = v70; /*0x100227adb*/
  v15 = v72; /*0x100227ae9*/
  v16 = v73; /*0x100227af0*/
  v17 = v74; /*0x100227af7*/
  if ( v66.i64[0] == 2 ) /*0x100227b02*/
  {
    __s2 = v71; /*0x100227b04*/
    v98[0] = v100[0]; /*0x100227b10*/
    *(_QWORD *)((char *)v98 + 7) = *(_QWORD *)((char *)v100 + 7); /*0x100227b14*/
    v10 = *(_QWORD *)((char *)v100 + 7); /*0x100227b1c*/
    v100[0] = v98[0]; /*0x100227b20*/
    *(_QWORD *)((char *)v100 + 7) = v10; /*0x100227b24*/
    v18 = v67; /*0x100227b28*/
    v19 = v66.i8[16]; /*0x100227b2b*/
    if ( v66.i64[1] == 2 ) /*0x100227b32*/
      goto LABEL_10; /*0x100227b32*/
  }
  else
  {
    v91 = v69; /*0x100227b6a*/
    v89 = v75; /*0x100227b78*/
    v104 = (unsigned __int64)v70; /*0x100227b7f*/
    v92 = v68; /*0x100227b83*/
    v90 = v73; /*0x100227b8a*/
    v93 = v74; /*0x100227ba4*/
    v94 = v66.i64[1]; /*0x100227bab*/
    __s2 = v67; /*0x100227bb2*/
    v102 = v66.i8[16]; /*0x100227bb6*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100227bba*/
    v98[0] = v100[0]; /*0x100227bc3*/
    *(_QWORD *)((char *)v98 + 7) = *(_QWORD *)((char *)v100 + 7); /*0x100227bcb*/
    v77 = v66.i128[0]; /*0x100227bcf*/
    LOBYTE(v78) = v66.i8[16]; /*0x100227be8*/
    *(_QWORD *)((char *)&v78 + 1) = v98[0]; /*0x100227bf2*/
    *((_QWORD *)&v78 + 1) = *(_QWORD *)((char *)v100 + 7); /*0x100227bfd*/
    v79 = v67; /*0x100227c08*/
    v80 = v68; /*0x100227c16*/
    v81 = v69; /*0x100227c24*/
    v82 = v70; /*0x100227c2f*/
    v83 = v71; /*0x100227c36*/
    v84 = v72; /*0x100227c3d*/
    v85 = v73; /*0x100227c4b*/
    v86 = v74; /*0x100227c59*/
    v87 = v75; /*0x100227c67*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::ha19f9a9fd5d137dd( /*0x100227c7c*/
      &v66,
      &v77);
    v19 = v66.i8[8]; /*0x100227c88*/
    v100[0] = *(__int64 *)((char *)&v66.i64[1] + 1); /*0x100227c96*/
    *(_QWORD *)((char *)v100 + 7) = v66.i64[2]; /*0x100227ca1*/
    if ( v66.i64[0] == 2 ) /*0x100227ca9*/
    {
      v18 = (__m256i *)v66.i64[3]; /*0x100227cab*/
      v7 = v67; /*0x100227cb2*/
LABEL_10:
      v15 = v7; /*0x100227b38*/
      v10 = *(_QWORD *)((char *)v100 + 7); /*0x100227b3f*/
      *(_QWORD *)&v95[7] = *(_QWORD *)((char *)v100 + 7); /*0x100227b43*/
      *(_QWORD *)v95 = v100[0]; /*0x100227b4a*/
      v8 = __n; /*0x100227b51*/
      if ( !__n ) /*0x100227b58*/
        goto LABEL_29; /*0x100227b58*/
LABEL_28:
      v7 = v99; /*0x100227daa*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v8, 1); /*0x100227db3*/
      goto LABEL_29; /*0x100227db3*/
    }
    v9 = v69; /*0x100227cc5*/
    __s2 = v70; /*0x100227cd3*/
    v15 = v71; /*0x100227cd7*/
    v16 = v72; /*0x100227cde*/
    v17 = v73; /*0x100227ce5*/
    v18 = (__m256i *)v66.i64[3]; /*0x100227cec*/
    v7 = v67; /*0x100227cf3*/
  }
  v104 = (unsigned __int64)v9; /*0x100227d04*/
  if ( v18 ) /*0x100227d0b*/
  {
    v20 = v16; /*0x100227d12*/
    v21 = v18; /*0x100227d15*/
    v22 = v17; /*0x100227d18*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v21, 1); /*0x100227d1b*/
    v17 = v22; /*0x100227d20*/
    v16 = v20; /*0x100227d23*/
  }
  if ( 2LL * (_QWORD)v16 ) /*0x100227d26*/
  {
    v7 = v17; /*0x100227d43*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, 1); /*0x100227d46*/
    v18 = (__m256i *)__s2; /*0x100227d4e*/
    if ( !v15 ) /*0x100227d52*/
      goto LABEL_25; /*0x100227d52*/
  }
  else
  {
    v18 = (__m256i *)__s2; /*0x100227d36*/
    if ( !v15 ) /*0x100227d3a*/
      goto LABEL_25; /*0x100227d3a*/
  }
  v23 = (__m256i **)&v18->i64[1]; /*0x100227d54*/
  do /*0x100227d67*/
  {
    v24 = (__int64)*(v23 - 1); /*0x100227d69*/
    if ( v24 ) /*0x100227d70*/
    {
      v7 = *v23; /*0x100227d72*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v23, v24, 1); /*0x100227d7a*/
    }
    v23 += 3; /*0x100227d60*/
    v15 = (__m256i *)((char *)v15 - 1); /*0x100227d64*/
  }
  while ( v15 ); /*0x100227d67*/
LABEL_25:
  v19 = 7; /*0x100227d81*/
  if ( v104 ) /*0x100227d8a*/
  {
    v7 = v18; /*0x100227d99*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24 * v104, 8); /*0x100227d9c*/
  }
  v8 = __n; /*0x100227da1*/
  if ( __n ) /*0x100227da8*/
    goto LABEL_28; /*0x100227da8*/
LABEL_29:
  if ( v19 == 7 ) /*0x100227dbb*/
  {
LABEL_48:
    v104 = 0x8000000000000000LL; /*0x100227efc*/
LABEL_49:
    if ( a4 ) /*0x100227f0d*/
    {
      v43 = 32 * a4; /*0x100227f13*/
      v97 = a3 + v43; /*0x100227f1b*/
      __n = 0x7FFFFFFFFFFFFFFFLL; /*0x100227f33*/
      while ( 1 ) /*0x100227f5e*/
      {
        v8 = 10; /*0x100227f5e*/
        v7 = (__m256i *)"visibility"; /*0x100227f63*/
        v44 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100227f69*/
                "visibility",
                10,
                a3);
        if ( !v44 || *(_BYTE *)v44 != 3 || *(_QWORD *)(v44 + 24) != 4 || **(_DWORD **)(v44 + 16) != 1701079400 ) /*0x100227f89*/
        {
          v8 = 16; /*0x100227f90*/
          v7 = (__m256i *)&unk_1015E0320; /*0x100227f95*/
          v45 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100227f9f*/
                           &unk_1015E0320,
                           16,
                           a3);
          if ( !v45 || *v45 != 1 || v45[1] == 1 ) /*0x100227fb2*/
          {
            v8 = 4; /*0x100227fc0*/
            v7 = (__m256i *)"sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore"; /*0x100227fc5*/
            v46 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100227fcf*/
                    "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
                    4,
                    a3);
            if ( v46 ) /*0x100227fd7*/
            {
              if ( *(_BYTE *)v46 == 3 ) /*0x100227fe0*/
              {
                v7 = *(__m256i **)(v46 + 16); /*0x100227fe6*/
                v8 = *(_QWORD *)(v46 + 24); /*0x100227fea*/
                v47 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(v7, v8); /*0x100227fee*/
                v48 = v9; /*0x100227ff3*/
                if ( v9 ) /*0x100227ff9*/
                {
                  v49 = v47; /*0x100227fff*/
                  v8 = 8; /*0x100228002*/
                  v7 = (__m256i *)&unk_1015E4C48; /*0x100228007*/
                  v50 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100228011*/
                          &unk_1015E4C48,
                          8,
                          a3);
                  v10 = __n; /*0x100228016*/
                  if ( v50 ) /*0x10022801d*/
                  {
                    v10 = __n; /*0x100228026*/
                    if ( *(_BYTE *)v50 == 2 ) /*0x10022802a*/
                    {
                      v9 = *(void **)(v50 + 8); /*0x100228030*/
                      if ( v9 ) /*0x100228037*/
                      {
                        v10 = __n; /*0x10022803d*/
                        if ( (_DWORD)v9 == 1 ) /*0x100228044*/
                          v10 = *(_QWORD *)(v50 + 16); /*0x10022804a*/
                      }
                      else
                      {
                        v10 = *(_QWORD *)(v50 + 16); /*0x100227f39*/
                        if ( v10 < 0 ) /*0x100227f40*/
                          v10 = __n; /*0x100227f40*/
                      }
                    }
                  }
                  if ( v49 ) /*0x100227f48*/
                    break; /*0x100227f48*/
                }
              }
            }
          }
        }
        a3 += 32; /*0x100227f50*/
        v43 -= 32; /*0x100227f54*/
        if ( !v43 ) /*0x100227f58*/
          goto LABEL_70; /*0x100227f58*/
      }
      *(_QWORD *)&v77 = v10; /*0x1002280de*/
      *((_QWORD *)&v77 + 1) = v10; /*0x1002280e5*/
      *(_QWORD *)&v78 = v49; /*0x1002280ec*/
      *((_QWORD *)&v78 + 1) = v48; /*0x1002280f3*/
      v7 = &v66; /*0x1002280fe*/
      v8 = a3 + 32; /*0x10022810c*/
      _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1729e2a54927ff5e( /*0x100228113*/
        &v66,
        a3 + 32,
        v97,
        &v77);
      v57 = (const void *)v66.i64[2]; /*0x100228118*/
      if ( v66.i64[2] ) /*0x100228122*/
      {
        v52 = v66.u64[3]; /*0x100228128*/
        if ( v66.i64[3] < 0 ) /*0x100228132*/
        {
          v53 = 0; /*0x100228134*/
          goto LABEL_81; /*0x100228134*/
        }
        if ( !v66.i64[3] ) /*0x100228147*/
        {
          v59 = 1; /*0x100228267*/
          goto LABEL_98; /*0x100228267*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66, v8, v9, v10); /*0x10022814d*/
        v53 = 1; /*0x100228152*/
        v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v52, 1); /*0x100228160*/
        if ( v58 ) /*0x100228168*/
        {
          v59 = v58; /*0x10022816a*/
LABEL_98:
          memcpy((void *)v59, v57, v52); /*0x10022826c*/
          v54 = (_DWORD *)v59; /*0x10022827a*/
          goto LABEL_74; /*0x10022827d*/
        }
LABEL_81:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v53, v52); /*0x100228137*/
      }
LABEL_72:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v8, v9, v10); /*0x10022805b*/
      v52 = 7; /*0x100228060*/
      v53 = 1; /*0x100228066*/
      v54 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100228076*/
      if ( !v54 ) /*0x10022807e*/
        goto LABEL_81; /*0x10022807e*/
      *(_DWORD *)((char *)v54 + 3) = 892220717; /*0x100228084*/
      *v54 = 762605671; /*0x10022808b*/
LABEL_74:
      v55 = v96; /*0x100228091*/
      *v96 = v52; /*0x100228095*/
      v55[1] = v54; /*0x100228098*/
      v55[2] = v52; /*0x10022809c*/
      v51 = v104; /*0x1002280a4*/
      result = 0x8000000000000000LL; /*0x1002280a7*/
      if ( v104 != 0x8000000000000000LL && v104 ) /*0x1002280b9*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v51, 1); /*0x1002280b9*/
      return result; /*0x1002280b9*/
    }
LABEL_70:
    v51 = v104; /*0x100228053*/
LABEL_71:
    v104 = v51; /*0x100228057*/
    goto LABEL_72; /*0x100228057*/
  }
  *((_QWORD *)&v77 + 1) = *(_QWORD *)&v95[7]; /*0x100227dcf*/
  *(_QWORD *)((char *)&v77 + 1) = *(_QWORD *)v95; /*0x100227dd6*/
  __s2 = v18; /*0x100227ddd*/
  *(_QWORD *)&v78 = v18; /*0x100227de1*/
  *((_QWORD *)&v78 + 1) = v15; /*0x100227de8*/
  LOBYTE(v77) = v19; /*0x100227def*/
  if ( v19 != 6 ) /*0x100227df8*/
    goto LABEL_47; /*0x100227df8*/
  v25 = *((_QWORD *)&v77 + 1); /*0x100227dfe*/
  if ( !*((_QWORD *)&v77 + 1) ) /*0x100227e08*/
    goto LABEL_47; /*0x100227e08*/
  v97 = a4; /*0x100227e0e*/
LABEL_33:
  v26 = v25 + 360; /*0x100227e12*/
  v27 = (__m256i *)*(unsigned __int16 *)(v25 + 626); /*0x100227e19*/
  v104 = v25; /*0x100227e20*/
  v28 = (_QWORD *)(v25 - 8); /*0x100227e24*/
  v99 = v27; /*0x100227e28*/
  v29 = 3LL * (unsigned int)(8 * (_DWORD)v27); /*0x100227e33*/
  v30 = -1; /*0x100227e37*/
  do /*0x100227e9d*/
  {
    if ( !v29 ) /*0x100227e43*/
    {
      v30 = (__int64)v99; /*0x100227ea8*/
LABEL_43:
      v38 = __s2 == nullptr; /*0x100227eac*/
      __s2 = (char *)__s2 - 1; /*0x100227eac*/
      if ( v38 ) /*0x100227eb5*/
        goto LABEL_47; /*0x100227eb5*/
      v25 = *(_QWORD *)(v104 + 8 * v30 + 632); /*0x100227eb7*/
      goto LABEL_33; /*0x100227ebf*/
    }
    __n = v26 + 24; /*0x100227e49*/
    v8 = *(_QWORD *)(v26 + 8); /*0x100227e4d*/
    v31 = *(_QWORD *)(v26 + 16); /*0x100227e51*/
    v32 = v31 - 5; /*0x100227e58*/
    if ( v31 >= 5 ) /*0x100227e61*/
      v31 = 5; /*0x100227e61*/
    v33 = -(__int64)v32; /*0x100227e65*/
    v34 = memcmp("modelmodel_messagestool_mode", (const void *)v8, v31); /*0x100227e6f*/
    if ( v34 ) /*0x100227e78*/
      v33 = v34; /*0x100227e78*/
    v35 = v33 == 0; /*0x100227e7c*/
    v36 = v33 < 0; /*0x100227e7c*/
    a4 = v97; /*0x100227e7f*/
    v37 = (!v36 && !v35) - v36; /*0x100227e89*/
    v28 += 4; /*0x100227e8b*/
    ++v30; /*0x100227e8f*/
    v29 -= 24; /*0x100227e92*/
    v26 = __n; /*0x100227e96*/
  }
  while ( v37 == 1 ); /*0x100227e9d*/
  if ( v37 ) /*0x100227ea4*/
    goto LABEL_43; /*0x100227ea4*/
  if ( *((_BYTE *)v28 - 24) /*0x100227ee5*/
    || (v8 = *v28,
        v41 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h1989232f7687278d(*(v28 - 1), *v28),
        v42 = v39,
        v41 == nullptr || v39 == 0) )
  {
LABEL_47:
    v7 = (__m256i *)&v77; /*0x100227ef0*/
    core::ptr::drop_in_place$LT$toml..value..Value$GT$::h14ec595d3c1389e4(&v77); /*0x100227ef7*/
    goto LABEL_48; /*0x100227ef7*/
  }
  ((void (__fastcall *)(__m256i *, size_t, _QWORD, __int64, __int64, __int64))alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5)( /*0x100228189*/
    &v66,
    v39,
    0,
    1,
    1,
    v40);
  v51 = v66.i64[1]; /*0x10022818e*/
  if ( v66.i32[0] == 1 ) /*0x10022819c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v66.i64[1], v66.i64[2]); /*0x100228328*/
  __s2 = (void *)v66.i64[2]; /*0x1002281a9*/
  v8 = (size_t)v41; /*0x1002281ad*/
  memcpy((void *)v66.i64[2], v41, v42); /*0x1002281b3*/
  v7 = (__m256i *)&v77; /*0x1002281b8*/
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::h14ec595d3c1389e4(&v77); /*0x1002281bf*/
  v104 = 0x8000000000000000LL; /*0x1002281ce*/
  if ( v51 == 0x8000000000000000LL ) /*0x1002281d5*/
    goto LABEL_49; /*0x1002281d5*/
  if ( v42 >= 0xD ) /*0x1002281df*/
  {
    v9 = __s2; /*0x1002281eb*/
    v10 = *(_QWORD *)__s2 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)__s2 + 5) ^ 0x5F79616C65725F69LL; /*0x100228200*/
    if ( !v10 ) /*0x100228203*/
    {
      v7 = (__m256i *)__s2; /*0x10022830d*/
      v8 = v51; /*0x100228311*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v51, 1); /*0x100228314*/
      goto LABEL_48; /*0x100228319*/
    }
  }
  __n = v42; /*0x10022820c*/
  if ( a4 ) /*0x100228210*/
  {
    v61 = 32 * a4; /*0x100228215*/
    v62 = a3; /*0x100228219*/
    do /*0x100228226*/
    {
      v8 = 4; /*0x100228228*/
      v7 = (__m256i *)"sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore"; /*0x10022822d*/
      v63 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100228237*/
              "sluglistlastNULL-wal-shmload&lt;&gt;lsofkillexititemjoinrgbasizecore",
              4,
              v62);
      if ( v63 ) /*0x10022823f*/
      {
        if ( *(_BYTE *)v63 == 3 ) /*0x100228244*/
        {
          v10 = __n; /*0x100228246*/
          if ( *(_QWORD *)(v63 + 24) == __n ) /*0x10022824e*/
          {
            v7 = *(__m256i **)(v63 + 16); /*0x100228250*/
            v8 = (size_t)__s2; /*0x100228254*/
            if ( !memcmp(v7, __s2, __n) ) /*0x10022825c*/
              goto LABEL_102; /*0x100228263*/
          }
        }
      }
      v62 += 32; /*0x10022821e*/
      v61 -= 32; /*0x100228222*/
    }
    while ( v61 ); /*0x100228226*/
    v104 = v51; /*0x100228282*/
    goto LABEL_49; /*0x100228286*/
  }
  if ( v42 < 4 || *(_DWORD *)__s2 != 762605671 ) /*0x10022829f*/
    goto LABEL_71; /*0x10022829f*/
LABEL_102:
  v64 = __n; /*0x1002282a5*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h4a305b5c5d6c5cb5( /*0x1002282c0*/
    &v77,
    __n,
    0,
    1,
    1,
    v60,
    v66.i64[0],
    v66.i64[1],
    v66.i64[2],
    v66.i64[3]);
  v53 = *((_QWORD *)&v77 + 1); /*0x1002282c5*/
  if ( (_BYTE)v77 ) /*0x1002282d3*/
  {
    v52 = v78; /*0x10022832f*/
    v104 = v51; /*0x100228336*/
    goto LABEL_81; /*0x10022833a*/
  }
  v65 = v78; /*0x1002282d5*/
  memcpy((void *)v78, __s2, v64); /*0x1002282e6*/
  result = (unsigned __int64)v96; /*0x1002282eb*/
  *v96 = v53; /*0x1002282ef*/
  *(_QWORD *)(result + 8) = v65; /*0x1002282f2*/
  *(_QWORD *)(result + 16) = v64; /*0x1002282f6*/
  if ( v51 ) /*0x1002282fd*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v51, 1); /*0x1002280bb*/
  return result; /*0x1002280cc*/
}