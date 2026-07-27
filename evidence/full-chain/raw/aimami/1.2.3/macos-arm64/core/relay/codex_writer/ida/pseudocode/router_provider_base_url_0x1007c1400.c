// __ZN13codexmate_lib4core5relay12codex_writer24router_provider_base_url @ 0x1007c1400 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::codex_writer::router_provider_base_url::hca7b84a05e0d0b9b(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int8 v4; // si
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r12
  __m256i *v9; // r8
  __m256i *v10; // rdi
  __m256i *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rsi
  signed __int64 v25; // rbx
  __int64 v26; // r12
  const void *v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __int128 v30; // [rsp+0h] [rbp-290h] BYREF
  __int128 v31; // [rsp+10h] [rbp-280h]
  __int64 v32; // [rsp+20h] [rbp-270h]
  __int64 v33; // [rsp+28h] [rbp-268h]
  __int64 v34; // [rsp+30h] [rbp-260h]
  __int64 v35; // [rsp+38h] [rbp-258h]
  __int64 v36; // [rsp+40h] [rbp-250h]
  __m256i *v37; // [rsp+48h] [rbp-248h]
  __m256i *v38; // [rsp+50h] [rbp-240h]
  __m256i *v39; // [rsp+58h] [rbp-238h]
  __int64 v40; // [rsp+60h] [rbp-230h]
  _BYTE __dst[144]; // [rsp+68h] [rbp-228h] BYREF
  __m256i v42; // [rsp+F8h] [rbp-198h] BYREF
  __int64 v43; // [rsp+118h] [rbp-178h]
  __int64 v44; // [rsp+120h] [rbp-170h]
  __int64 v45; // [rsp+128h] [rbp-168h]
  __int64 v46; // [rsp+130h] [rbp-160h]
  __int64 v47; // [rsp+138h] [rbp-158h]
  __m256i *v48; // [rsp+140h] [rbp-150h]
  __m256i *v49; // [rsp+148h] [rbp-148h]
  __m256i *v50; // [rsp+150h] [rbp-140h]
  __int64 v51; // [rsp+158h] [rbp-138h]
  _BYTE __src[144]; // [rsp+160h] [rbp-130h] BYREF
  __int64 v53; // [rsp+1F0h] [rbp-A0h]
  __m256i *v54; // [rsp+1F8h] [rbp-98h]
  __int64 v55; // [rsp+200h] [rbp-90h]
  __m256i *v56; // [rsp+208h] [rbp-88h]
  __int64 v57; // [rsp+210h] [rbp-80h]
  _BYTE v58[15]; // [rsp+218h] [rbp-78h]
  signed __int64 *v59; // [rsp+228h] [rbp-68h]
  _QWORD v60[2]; // [rsp+230h] [rbp-60h]
  _QWORD v61[2]; // [rsp+240h] [rbp-50h]
  __int64 v62; // [rsp+250h] [rbp-40h]
  _BYTE v63[15]; // [rsp+258h] [rbp-38h]
  __int8 v64; // [rsp+267h] [rbp-29h]

  v59 = a1; /*0x1007c1414*/
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(&v42, a2, a3); /*0x1007c141f*/
  v3 = v42.i64[0]; /*0x1007c1424*/
  v4 = v42.i8[16]; /*0x1007c1432*/
  v60[0] = *(__int64 *)((char *)&v42.i64[2] + 1); /*0x1007c1440*/
  *(_QWORD *)((char *)v60 + 7) = v42.i64[3]; /*0x1007c144b*/
  v5 = v43; /*0x1007c144f*/
  v6 = v44; /*0x1007c1456*/
  v7 = v46; /*0x1007c145d*/
  v8 = (__int64)v48; /*0x1007c146b*/
  v9 = v49; /*0x1007c1472*/
  v10 = v50; /*0x1007c1479*/
  if ( v42.i64[0] == 2 ) /*0x1007c1484*/
  {
    *(_QWORD *)v63 = v60[0]; /*0x1007c148e*/
    *(_QWORD *)&v63[7] = *(_QWORD *)((char *)v60 + 7); /*0x1007c1492*/
    v61[0] = *(_QWORD *)v63; /*0x1007c149e*/
    *(_QWORD *)((char *)v61 + 7) = *(_QWORD *)((char *)v60 + 7); /*0x1007c14a2*/
    v3 = v47; /*0x1007c14a6*/
    if ( v42.i64[1] != 2 ) /*0x1007c14ad*/
      goto LABEL_3; /*0x1007c14ad*/
  }
  else
  {
    v55 = v45; /*0x1007c1504*/
    v53 = v51; /*0x1007c1512*/
    v62 = v46; /*0x1007c1519*/
    v64 = v42.i8[16]; /*0x1007c151d*/
    v54 = v50; /*0x1007c1528*/
    v56 = v49; /*0x1007c153b*/
    v57 = v44; /*0x1007c1542*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x1007c1546*/
    *(_QWORD *)v63 = v60[0]; /*0x1007c154f*/
    *(_QWORD *)&v63[7] = *(_QWORD *)((char *)v60 + 7); /*0x1007c1557*/
    v30 = v42.i128[0]; /*0x1007c155b*/
    LOBYTE(v31) = v42.i8[16]; /*0x1007c156d*/
    *(_QWORD *)((char *)&v31 + 1) = *(_QWORD *)v63; /*0x1007c1577*/
    *((_QWORD *)&v31 + 1) = *(_QWORD *)((char *)v60 + 7); /*0x1007c1582*/
    v32 = v43; /*0x1007c1589*/
    v33 = v44; /*0x1007c1594*/
    v34 = v45; /*0x1007c15a2*/
    v35 = v46; /*0x1007c15ad*/
    v36 = v47; /*0x1007c15b4*/
    v37 = v48; /*0x1007c15bb*/
    v38 = v49; /*0x1007c15c9*/
    v39 = v50; /*0x1007c15d7*/
    v40 = v51; /*0x1007c15e5*/
    v10 = &v42; /*0x1007c15ec*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1007c15fa*/
      &v42,
      &v30);
    v4 = v42.i8[8]; /*0x1007c1606*/
    v61[0] = *(__int64 *)((char *)&v42.i64[1] + 1); /*0x1007c1614*/
    *(_QWORD *)((char *)v61 + 7) = v42.i64[2]; /*0x1007c161f*/
    if ( v42.i64[0] != 2 ) /*0x1007c1627*/
    {
      v7 = v45; /*0x1007c162b*/
      v3 = v46; /*0x1007c1632*/
      v8 = v47; /*0x1007c1639*/
      v9 = v48; /*0x1007c1640*/
      v10 = v49; /*0x1007c1647*/
    }
    v5 = v42.i64[3]; /*0x1007c164e*/
    v6 = v43; /*0x1007c1655*/
    if ( v42.i64[0] != 2 ) /*0x1007c1660*/
    {
LABEL_3:
      v62 = v7; /*0x1007c14b3*/
      if ( v5 ) /*0x1007c14ba*/
      {
        v11 = v9; /*0x1007c14cd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1007c14d0*/
        v9 = v11; /*0x1007c14db*/
      }
      if ( 2LL * (_QWORD)v9 ) /*0x1007c14de*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x1007c172b*/
        if ( !v8 ) /*0x1007c1733*/
          goto LABEL_23; /*0x1007c1733*/
      }
      else if ( !v8 ) /*0x1007c14f2*/
      {
LABEL_23:
        if ( v62 ) /*0x1007c1768*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24 * v62, 8); /*0x1007c177a*/
        goto LABEL_25; /*0x1007c177a*/
      }
      v22 = (_QWORD *)(v3 + 8); /*0x1007c1735*/
      do /*0x1007c1747*/
      {
        v23 = *(v22 - 1); /*0x1007c1749*/
        if ( v23 ) /*0x1007c1750*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x1007c175a*/
        v22 += 3; /*0x1007c1740*/
        --v8; /*0x1007c1744*/
      }
      while ( v8 ); /*0x1007c1747*/
      goto LABEL_23; /*0x1007c1747*/
    }
  }
  *(_QWORD *)&v58[7] = *(_QWORD *)((char *)v61 + 7); /*0x1007c166e*/
  *(_QWORD *)v58 = v61[0]; /*0x1007c1672*/
  if ( v4 == 7 ) /*0x1007c167a*/
  {
LABEL_25:
    v18 = v59; /*0x1007c177f*/
    *v59 = 0x8000000000000000LL; /*0x1007c178d*/
    return v18; /*0x1007c178d*/
  }
  *((_QWORD *)&v30 + 1) = *(_QWORD *)&v58[7]; /*0x1007c1688*/
  *(_QWORD *)((char *)&v30 + 1) = *(_QWORD *)v58; /*0x1007c168f*/
  *(_QWORD *)&v31 = v5; /*0x1007c1696*/
  *((_QWORD *)&v31 + 1) = v6; /*0x1007c169d*/
  LOBYTE(v30) = v4; /*0x1007c16a4*/
  v12 = 15; /*0x1007c16b9*/
  v13 = ((__int64 (__fastcall *)(const char *, __int64, __int128 *, _QWORD, __m256i *))_$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e)( /*0x1007c16be*/
          "model_providers\n",
          15,
          &v30,
          *(_QWORD *)&v58[7],
          v9);
  v18 = v59; /*0x1007c16c3*/
  if ( v13 ) /*0x1007c16ca*/
  {
    v12 = 6; /*0x1007c16d3*/
    v19 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c16db*/
            &anon_3ce6d1417794db0febde534c64082f90_165,
            6,
            v13,
            v15,
            v16,
            v17,
            v30,
            *((_QWORD *)&v30 + 1),
            v31,
            *((_QWORD *)&v31 + 1));
    if ( v19 ) /*0x1007c16e3*/
    {
      v12 = 8; /*0x1007c16ec*/
      v21 = _$LT$str$u20$as$u20$toml..value..Index$GT$::index::hb2a1aa13d098ca3e( /*0x1007c16f4*/
              "base_urlwire_apihostnameHTTPPort",
              8,
              v19,
              v15,
              v16,
              v20,
              v30,
              *((_QWORD *)&v30 + 1),
              v31,
              *((_QWORD *)&v31 + 1));
      if ( v21 ) /*0x1007c16fc*/
      {
        if ( !*(_BYTE *)v21 ) /*0x1007c1701*/
        {
          v25 = *(_QWORD *)(v21 + 24); /*0x1007c17a6*/
          if ( v25 < 0 ) /*0x1007c17ad*/
          {
            v26 = 0; /*0x1007c17af*/
            goto LABEL_29; /*0x1007c17af*/
          }
          v27 = *(const void **)(v21 + 16); /*0x1007c17bf*/
          if ( v25 ) /*0x1007c17c3*/
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("base_urlwire_apihostnameHTTPPort", 8); /*0x1007c17c5*/
            v26 = 1; /*0x1007c17ca*/
            v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v25, 1); /*0x1007c17d8*/
            if ( !v28 ) /*0x1007c17e0*/
LABEL_29:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x1007c17b2*/
            v29 = v28; /*0x1007c17e2*/
          }
          else
          {
            v29 = 1; /*0x1007c17e7*/
          }
          v12 = (__int64)v27; /*0x1007c17f0*/
          memcpy((void *)v29, v27, v25); /*0x1007c17f6*/
          *v18 = v25; /*0x1007c17fb*/
          v18[1] = v29; /*0x1007c17ff*/
          v18[2] = v25; /*0x1007c1803*/
          goto LABEL_17; /*0x1007c1807*/
        }
      }
    }
  }
  *v18 = 0x8000000000000000LL; /*0x1007c1711*/
LABEL_17:
  core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f(&v30, v12, v14, v15, v16); /*0x1007c1715*/
  return v18; /*0x1007c1794*/
}