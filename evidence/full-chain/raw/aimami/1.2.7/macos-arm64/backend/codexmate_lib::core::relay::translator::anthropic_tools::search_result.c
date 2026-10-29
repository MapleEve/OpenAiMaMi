// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::search_result::h17c780b0c91cb5b6; addr: 0x1007f4260; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
double __fastcall codexmate_lib::core::relay::translator::anthropic_tools::search_result::h17c780b0c91cb5b6(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // kr00_16
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __m256i *v16; // rdi
  __int64 v17; // rcx
  double result; // xmm0_8
  __int64 v19; // rax
  __int64 v20; // r12
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+30h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-D8h]
  __int64 v28; // [rsp+50h] [rbp-C0h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-98h]
  __m256i *v33; // [rsp+80h] [rbp-90h]
  __m256i v34; // [rsp+88h] [rbp-88h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-68h]
  __int64 v36; // [rsp+B0h] [rbp-60h]
  __int64 v37; // [rsp+B8h] [rbp-58h]
  __int128 v38; // [rsp+C0h] [rbp-50h]
  __int64 v39; // [rsp+D0h] [rbp-40h]

  v3 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f428b*/
                   &unk_1018CB9E5,
                   5,
                   a2);
  if ( !v3 ) /*0x1007f4291*/
    v3 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f4293*/
  if ( *(_BYTE *)v3 != 4 ) /*0x1007f429e*/
  {
    *(_QWORD *)(a1 + 8) = &unk_1018CBA27; /*0x1007f4383*/
    *(_QWORD *)(a1 + 16) = 42; /*0x1007f4387*/
LABEL_23:
    *(_BYTE *)a1 = 6; /*0x1007f43d9*/
    return result; /*0x1007f43d9*/
  }
  v4 = v3[2]; /*0x1007f42a4*/
  v5 = v3[3]; /*0x1007f42a8*/
  if ( v5 ) /*0x1007f42af*/
  {
    v6 = 32 * v5; /*0x1007f42b5*/
    do /*0x1007f42f5*/
    {
      v7 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f4306*/
                       &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                       4,
                       v4);
      if ( !v7 ) /*0x1007f430e*/
        v7 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f4310*/
      if ( *(_BYTE *)v7 != 3 ) /*0x1007f431a*/
      {
LABEL_17:
        *(_QWORD *)(a1 + 8) = &unk_1018CB9EE; /*0x1007f4367*/
        *(_QWORD *)(a1 + 16) = 57; /*0x1007f4372*/
        goto LABEL_23; /*0x1007f437a*/
      }
      v8 = v7[2]; /*0x1007f431c*/
      v9 = v7[3]; /*0x1007f4320*/
      if ( v9 == 6 ) /*0x1007f4328*/
      {
        if ( *(_DWORD *)v8 ^ 0x74737563 | *(unsigned __int16 *)(v8 + 4) ^ 0x6D6F ) /*0x1007f4363*/
          goto LABEL_17; /*0x1007f4365*/
      }
      else if ( v9 == 9 ) /*0x1007f432e*/
      {
        if ( *(_QWORD *)v8 ^ 0x63617073656D616ELL | *(unsigned __int8 *)(v8 + 8) ^ 0x65LL ) /*0x1007f42e8*/
          goto LABEL_17; /*0x1007f42eb*/
      }
      else if ( v9 != 8 || *(_QWORD *)v8 != 0x6E6F6974636E7566LL ) /*0x1007f4343*/
      {
        goto LABEL_17; /*0x1007f4343*/
      }
      v4 += 32; /*0x1007f42ed*/
      v6 -= 32; /*0x1007f42f1*/
    }
    while ( v6 ); /*0x1007f42f5*/
    v4 = v3[2]; /*0x1007f4395*/
    v10 = v3[3]; /*0x1007f4399*/
  }
  else
  {
    v10 = 0; /*0x1007f4391*/
  }
  codexmate_lib::core::relay::translator::responses_tools_to_anthropic_tools_with_options::hc741651288a52cfe( /*0x1007f43b5*/
    &v34,
    v4,
    v10,
    1,
    0,
    1);
  v11 = v34.i128[0]; /*0x1007f43c1*/
  v12 = v34.i64[2]; /*0x1007f43cb*/
  if ( __OFSUB__(-v34.i64[0], 1) ) /*0x1007f43c8*/
  {
    *(_QWORD *)(a1 + 8) = v34.i64[1]; /*0x1007f43d1*/
    *(_QWORD *)(a1 + 16) = v12; /*0x1007f43d5*/
    goto LABEL_23; /*0x1007f43d5*/
  }
  v13 = v34.i64[3]; /*0x1007f43ee*/
  v14 = v39; /*0x1007f43fe*/
  v33 = (__m256i *)v35; /*0x1007f441a*/
  if ( (_QWORD)v38 ) /*0x1007f4421*/
  {
    v34.i64[1] = 0; /*0x1007f4423*/
    v34.i128[1] = v38; /*0x1007f442b*/
    v36 = 0; /*0x1007f4433*/
    v37 = v38; /*0x1007f443b*/
    *(_QWORD *)&v38 = *((_QWORD *)&v38 + 1); /*0x1007f443f*/
    v15 = 1; /*0x1007f4443*/
  }
  else
  {
    v15 = 0; /*0x1007f444a*/
    v14 = 0; /*0x1007f444c*/
  }
  v34.i64[0] = v15; /*0x1007f444e*/
  v35 = v15; /*0x1007f4455*/
  *((_QWORD *)&v38 + 1) = v14; /*0x1007f4459*/
  v16 = &v34; /*0x1007f445d*/
  _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdf8beb86d98b7008(&v34); /*0x1007f4464*/
  if ( 2 * v13 ) /*0x1007f4469*/
  {
    v16 = v33; /*0x1007f44f7*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, v13, 1); /*0x1007f4501*/
    if ( v12 ) /*0x1007f4509*/
      goto LABEL_30; /*0x1007f4509*/
LABEL_32:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16); /*0x1007f450f*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1007f451e*/
    if ( !v19 ) /*0x1007f4526*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1007f4773*/
    v20 = v19; /*0x1007f452c*/
    *(_QWORD *)&v31 = 0; /*0x1007f452f*/
    v32 = 0; /*0x1007f453a*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32); /*0x1007f4545*/
    v21 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1007f4554*/
    if ( !v21 ) /*0x1007f455c*/
      goto LABEL_45; /*0x1007f455c*/
    *v21 = 1701869940; /*0x1007f4565*/
    v28 = 4; /*0x1007f456b*/
    v29 = v21; /*0x1007f4576*/
    v30 = 4; /*0x1007f457d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1007f4588*/
    v22 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1007f4597*/
    if ( !v22 ) /*0x1007f459f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1007f4795*/
    *v22 = 1954047348; /*0x1007f45a5*/
    v34.i8[0] = 3; /*0x1007f45ab*/
    v34.i64[1] = 4; /*0x1007f45b2*/
    v34.i64[2] = (__int64)v22; /*0x1007f45ba*/
    v34.i64[3] = 4; /*0x1007f45be*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v26, &v31, &v28, &v34); /*0x1007f45e2*/
    if ( (_BYTE)v26 != 6 ) /*0x1007f45ee*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v26); /*0x1007f45f7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v26); /*0x1007f45fc*/
    v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1007f460b*/
    if ( !v23 ) /*0x1007f4613*/
LABEL_45:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1007f4784*/
    *v23 = 1954047348; /*0x1007f461c*/
    v28 = 4; /*0x1007f4622*/
    v29 = v23; /*0x1007f462d*/
    v30 = 4; /*0x1007f4634*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1007f463f*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1007f464e*/
    if ( !v24 ) /*0x1007f4656*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1007f47a6*/
    qmemcpy(v24, "No matching tools found.", 24); /*0x1007f4682*/
    v34.i8[0] = 3; /*0x1007f4685*/
    v34.i64[1] = 24; /*0x1007f468c*/
    v34.i64[2] = (__int64)v24; /*0x1007f4694*/
    v34.i64[3] = 24; /*0x1007f4698*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v26, &v31, &v28, &v34); /*0x1007f46bc*/
    if ( (_BYTE)v26 != 6 ) /*0x1007f46c8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v26); /*0x1007f46d1*/
    *(__int128 *)((char *)v34.i128 + 7) = v31; /*0x1007f46eb*/
    *(__int64 *)((char *)&v34.i64[2] + 7) = v32; /*0x1007f46f6*/
    *(_BYTE *)v20 = 5; /*0x1007f46fa*/
    v25 = v34.i64[1]; /*0x1007f4706*/
    *(_QWORD *)(v20 + 1) = v34.i64[0]; /*0x1007f470a*/
    *(_OWORD *)(v20 + 9) = __PAIR128__(v34.u64[2], v25); /*0x1007f470f*/
    *(_QWORD *)(v20 + 24) = *(__int64 *)((char *)&v34.i64[2] + 7); /*0x1007f4721*/
    *(_BYTE *)a1 = 4; /*0x1007f4726*/
    *(_QWORD *)(a1 + 8) = 1; /*0x1007f4729*/
    *(_QWORD *)(a1 + 16) = v20; /*0x1007f4731*/
    *(_QWORD *)(a1 + 24) = 1; /*0x1007f4735*/
    core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(*((_QWORD *)&v11 + 1), 0); /*0x1007f4742*/
    goto LABEL_42; /*0x1007f4742*/
  }
  if ( !v12 ) /*0x1007f4479*/
    goto LABEL_32; /*0x1007f4479*/
LABEL_30:
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1ec11536f87d7675( /*0x1007f447f*/
    &v26,
    *((_QWORD *)&v11 + 1),
    *((_QWORD *)&v11 + 1) + 32 * v12);
  *(__int128 *)((char *)v34.i128 + 15) = v27; /*0x1007f44b1*/
  *(__int64 *)((char *)v34.i64 + 7) = v26; /*0x1007f44b5*/
  *(_BYTE *)a1 = 4; /*0x1007f44bc*/
  v17 = v34.i64[1]; /*0x1007f44c6*/
  *(_QWORD *)(a1 + 1) = v34.i64[0]; /*0x1007f44ca*/
  *(_OWORD *)(a1 + 9) = __PAIR128__(v34.u64[2], v17); /*0x1007f44ce*/
  *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v34.i64[2] + 7); /*0x1007f44de*/
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(*((_QWORD *)&v11 + 1), v12); /*0x1007f44e8*/
LABEL_42:
  if ( (_QWORD)v11 ) /*0x1007f474a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v11 + 1), 32 * v11, 8); /*0x1007f475f*/
  return result; /*0x1007f43dc*/
}