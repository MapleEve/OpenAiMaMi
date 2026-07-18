// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x1006b1770 d=2
_QWORD *__fastcall _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h2649ca9d01689136(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rbx
  size_t *v7; // r13
  _DWORD *v8; // rax
  size_t v9; // rdx
  void *v10; // rbx
  char *v11; // r14
  bool v12; // zf
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r15
  _WORD *v17; // rax
  char v18; // al
  _WORD *v19; // rax
  char v20; // al
  _BYTE *v21; // rax
  __int64 v22; // r12
  char v23; // al
  void *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // r15
  _QWORD *result; // rax
  _BYTE v29[31]; // [rsp+49h] [rbp-1A7h]
  __int64 v30; // [rsp+68h] [rbp-188h] BYREF
  char *v31; // [rsp+70h] [rbp-180h]
  __int64 v32; // [rsp+78h] [rbp-178h]
  char *v33; // [rsp+80h] [rbp-170h]
  __int64 v34; // [rsp+D0h] [rbp-120h]
  __int64 v35; // [rsp+100h] [rbp-F0h]
  _QWORD *v36; // [rsp+108h] [rbp-E8h]
  __int64 v37; // [rsp+110h] [rbp-E0h]
  __int64 v38; // [rsp+118h] [rbp-D8h]
  __int64 v39; // [rsp+120h] [rbp-D0h] BYREF
  _DWORD *v40; // [rsp+128h] [rbp-C8h]
  __int64 v41; // [rsp+130h] [rbp-C0h]
  _QWORD *v42; // [rsp+138h] [rbp-B8h]
  __int64 v43; // [rsp+140h] [rbp-B0h]
  const void *v44; // [rsp+148h] [rbp-A8h]
  size_t v45; // [rsp+150h] [rbp-A0h]
  __int64 v46; // [rsp+158h] [rbp-98h] BYREF
  __int128 v47; // [rsp+160h] [rbp-90h]
  __int64 v48; // [rsp+170h] [rbp-80h]
  __int64 v49; // [rsp+178h] [rbp-78h] BYREF
  void *v50; // [rsp+180h] [rbp-70h]
  size_t v51; // [rsp+188h] [rbp-68h]
  __int64 v52; // [rsp+190h] [rbp-60h]
  __int64 v53; // [rsp+198h] [rbp-58h] BYREF
  void *__src; // [rsp+1A0h] [rbp-50h]
  size_t __n; // [rsp+1A8h] [rbp-48h]
  __int64 v56; // [rsp+1B0h] [rbp-40h]
  size_t *v57; // [rsp+1B8h] [rbp-38h]
  __int64 v58; // [rsp+1C0h] [rbp-30h]

  v2 = *a1; /*0x1006b1784*/
  v3 = a1[1]; /*0x1006b1787*/
  v42 = *(_QWORD **)a2; /*0x1006b178e*/
  v4 = *(_QWORD *)(a2 + 8); /*0x1006b1795*/
  if ( v2 != v3 ) /*0x1006b179c*/
  {
    v5 = *(_QWORD *)(a2 + 16); /*0x1006b17a2*/
    v35 = a1[2]; /*0x1006b17aa*/
    v37 = a1[3]; /*0x1006b17c5*/
    v6 = 32 * v4 + v5 + 1; /*0x1006b17d7*/
    v38 = -(__int64)((v3 - v2) / 0x18uLL); /*0x1006b17df*/
    v7 = (size_t *)(v2 + 16); /*0x1006b17e6*/
    v48 = 0; /*0x1006b17ea*/
    v58 = v4; /*0x1006b17f2*/
    do /*0x1006b1d21*/
    {
      v36 = (_QWORD *)v6; /*0x1006b17f6*/
      v46 = 0; /*0x1006b17fd*/
      *((_QWORD *)&v47 + 1) = 0; /*0x1006b1808*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b1813*/
      v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1006b1828*/
      if ( !v8 ) /*0x1006b1830*/
        goto LABEL_53; /*0x1006b1830*/
      *v8 = 1752457584; /*0x1006b1839*/
      v39 = 4; /*0x1006b183f*/
      v40 = v8; /*0x1006b184a*/
      v41 = 4; /*0x1006b1851*/
      v9 = *v7; /*0x1006b1860*/
      v44 = (const void *)*(v7 - 1); /*0x1006b186b*/
      v45 = v9; /*0x1006b1872*/
      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v30, v44, v9); /*0x1006b1879*/
      codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8( /*0x1006b18a2*/
        (__int64)&v53,
        v31,
        v32,
        *(_QWORD *)(v35 + 8),
        *(_QWORD *)(v35 + 16));
      if ( 2 * v30 ) /*0x1006b18ae*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b18d8*/
        v10 = __src; /*0x1006b18dd*/
        v11 = (char *)__n; /*0x1006b18e1*/
        v12 = __n == 0; /*0x1006b18e5*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006b18e8*/
        {
LABEL_49:
          v13 = 0; /*0x1006b1dd3*/
LABEL_50:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13); /*0x1006b1dd6*/
        }
      }
      else
      {
        v10 = __src; /*0x1006b18bb*/
        v11 = (char *)__n; /*0x1006b18bf*/
        v12 = __n == 0; /*0x1006b18c3*/
        if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1006b18c6*/
          goto LABEL_49; /*0x1006b18c6*/
      }
      if ( v12 ) /*0x1006b18ee*/
      {
        v15 = 1; /*0x1006b191e*/
      }
      else
      {
        v57 = v7; /*0x1006b18f0*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b18f4*/
        v13 = 1; /*0x1006b18f9*/
        v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc((size_t)v11, 1u); /*0x1006b1907*/
        if ( !v14 ) /*0x1006b190f*/
          goto LABEL_50; /*0x1006b190f*/
        v15 = v14; /*0x1006b1915*/
        v7 = v57; /*0x1006b1918*/
      }
      memcpy((void *)v15, v10, (size_t)v11); /*0x1006b192d*/
      LOBYTE(v30) = 3; /*0x1006b1932*/
      v31 = v11; /*0x1006b1939*/
      v32 = v15; /*0x1006b1940*/
      v33 = v11; /*0x1006b1947*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1006b1967*/
        (__int64)&v49,
        &v46,
        (__int64)&v39,
        &v30);
      v16 = v58; /*0x1006b1970*/
      if ( (_BYTE)v49 != 6 ) /*0x1006b1974*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v49); /*0x1006b197a*/
      if ( v53 ) /*0x1006b1986*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b1990*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b1995*/
      v17 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1006b19aa*/
      if ( !v17 ) /*0x1006b19b2*/
        goto LABEL_53; /*0x1006b19b2*/
      v17[2] = 25974; /*0x1006b19bb*/
      *(_DWORD *)v17 = 1769235297; /*0x1006b19c1*/
      v53 = 6; /*0x1006b19c7*/
      __src = v17; /*0x1006b19cf*/
      __n = 6; /*0x1006b19d3*/
      v18 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff( /*0x1006b19f8*/
              v44,
              v45,
              *(_QWORD *)(v37 + 8),
              *(_QWORD *)(v37 + 16));
      LOBYTE(v30) = 1; /*0x1006b19fd*/
      BYTE1(v30) = v18; /*0x1006b1a04*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1006b1a20*/
        (__int64)&v49,
        &v46,
        (__int64)&v53,
        &v30);
      if ( (_BYTE)v49 != 6 ) /*0x1006b1a29*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v49); /*0x1006b1a2f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b1a34*/
      v19 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1006b1a43*/
      if ( !v19 ) /*0x1006b1a4b*/
        goto LABEL_53; /*0x1006b1a4b*/
      v19[2] = 29556; /*0x1006b1a54*/
      *(_DWORD *)v19 = 1936291941; /*0x1006b1a5a*/
      v53 = 6; /*0x1006b1a60*/
      __src = v19; /*0x1006b1a68*/
      __n = 6; /*0x1006b1a6c*/
      std::sys::fs::metadata::h32fa16d3052ea535(&v30, v44, v45); /*0x1006b1a8c*/
      if ( (_BYTE)v30 ) /*0x1006b1a98*/
      {
        if ( ((unsigned __int8)v31 & 3) == 1 ) /*0x1006b1aa9*/
        {
          v57 = (size_t *)(v31 - 1); /*0x1006b1d30*/
          v26 = *(_QWORD *)(v31 + 7); /*0x1006b1d38*/
          if ( *(_QWORD *)v26 ) /*0x1006b1d3c*/
            (*(void (__fastcall **)(_QWORD))v26)(*(_QWORD *)(v31 - 1)); /*0x1006b1d47*/
          if ( *(_QWORD *)(v26 + 8) ) /*0x1006b1d49*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b1d59*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b1d6c*/
          v20 = 0; /*0x1006b1d71*/
          v16 = v58; /*0x1006b1d73*/
        }
        else
        {
          v20 = 0; /*0x1006b1aaf*/
        }
      }
      else
      {
        v20 = 1; /*0x1006b1ac0*/
      }
      LOBYTE(v30) = 1; /*0x1006b1ac2*/
      BYTE1(v30) = v20; /*0x1006b1ac9*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1006b1ae1*/
        (__int64)&v49,
        &v46,
        (__int64)&v53,
        &v30);
      if ( (_BYTE)v49 != 6 ) /*0x1006b1aea*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v49); /*0x1006b1af0*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b1af5*/
      v21 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1006b1b0a*/
      if ( !v21 ) /*0x1006b1b12*/
        goto LABEL_53; /*0x1006b1b12*/
      v21[4] = 115; /*0x1006b1b1b*/
      *(_DWORD *)v21 = 1702132066; /*0x1006b1b1f*/
      v53 = 5; /*0x1006b1b25*/
      __src = v21; /*0x1006b1b2d*/
      __n = 5; /*0x1006b1b31*/
      std::sys::fs::metadata::h32fa16d3052ea535(&v30, (const void *)*(v7 - 1), *v7); /*0x1006b1b4b*/
      v22 = v43; /*0x1006b1b57*/
      if ( (_BYTE)v30 ) /*0x1006b1b5e*/
      {
        if ( ((unsigned __int8)v31 & 3) == 1 ) /*0x1006b1b6f*/
        {
          v57 = (size_t *)(v31 - 1); /*0x1006b1d80*/
          v27 = *(_QWORD *)(v31 + 7); /*0x1006b1d88*/
          if ( *(_QWORD *)v27 ) /*0x1006b1d8c*/
            (*(void (__fastcall **)(_QWORD))v27)(*(_QWORD *)(v31 - 1)); /*0x1006b1d97*/
          if ( *(_QWORD *)(v27 + 8) ) /*0x1006b1d99*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b1da9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b1dbc*/
          v23 = 0; /*0x1006b1dc1*/
          v16 = v58; /*0x1006b1dc3*/
          v22 = v43; /*0x1006b1dc7*/
        }
        else
        {
          v23 = 0; /*0x1006b1b75*/
        }
      }
      else
      {
        v22 = v34; /*0x1006b1b80*/
        v23 = 2; /*0x1006b1b87*/
      }
      LOBYTE(v30) = v23; /*0x1006b1b89*/
      v31 = nullptr; /*0x1006b1b8f*/
      v32 = v22; /*0x1006b1b9a*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1006b1bb3*/
        (__int64)&v49,
        &v46,
        (__int64)&v53,
        &v30);
      v43 = v22; /*0x1006b1bb8*/
      if ( (_BYTE)v49 != 6 ) /*0x1006b1bc3*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v49); /*0x1006b1bc9*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006b1bce*/
      v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1006b1be3*/
      if ( !v24 ) /*0x1006b1beb*/
LABEL_53:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1006b1e38*/
      qmemcpy(v24, "threadsTable", 12); /*0x1006b1bfe*/
      v39 = 12; /*0x1006b1c08*/
      v40 = v24; /*0x1006b1c13*/
      v41 = 12; /*0x1006b1c1a*/
      codexmate_lib::core::debug_bundle::threads_table_shape::hd2633384721872a0(&v30, v44, v45); /*0x1006b1c3d*/
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h4a0cede2e79f5784( /*0x1006b1c49*/
        &v49,
        &v30);
      if ( (_BYTE)v49 == 6 ) /*0x1006b1c52*/
      {
        v53 = (__int64)v50; /*0x1006b1e07*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006b1e29*/
          (__int64)&unk_101593CEC,
          43,
          (__int64)&v53,
          (__int64)&off_101897E38,
          (__int64)&off_101897880);
      }
      v56 = v52; /*0x1006b1c5c*/
      __n = v51; /*0x1006b1c64*/
      __src = v50; /*0x1006b1c70*/
      v53 = v49; /*0x1006b1c74*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1006b1c8e*/
        (__int64)&v49,
        &v46,
        (__int64)&v39,
        &v53);
      v25 = v36; /*0x1006b1c97*/
      if ( (_BYTE)v49 != 6 ) /*0x1006b1c9e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v49); /*0x1006b1ca4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v30); /*0x1006b1cac*/
      *(_OWORD *)&v29[15] = v47; /*0x1006b1cd1*/
      *(_QWORD *)&v29[7] = v46; /*0x1006b1cd5*/
      *((_BYTE *)v25 - 1) = 5; /*0x1006b1cd8*/
      *v25 = *(_QWORD *)v29; /*0x1006b1cea*/
      v25[1] = *(_QWORD *)&v29[8]; /*0x1006b1ced*/
      v25[2] = *(_QWORD *)&v29[16]; /*0x1006b1cf8*/
      *(_QWORD *)((char *)v25 + 23) = *(_QWORD *)&v29[23]; /*0x1006b1d03*/
      v6 = (__int64)(v25 + 4); /*0x1006b1d0e*/
      v7 += 3; /*0x1006b1d12*/
      --v48; /*0x1006b1d16*/
    }
    while ( v38 != v48 ); /*0x1006b1d21*/
    v4 = v16 - v48; /*0x1006b1de3*/
  }
  result = v42; /*0x1006b1de7*/
  *v42 = v4; /*0x1006b1dee*/
  return result; /*0x1006b1df1*/
}