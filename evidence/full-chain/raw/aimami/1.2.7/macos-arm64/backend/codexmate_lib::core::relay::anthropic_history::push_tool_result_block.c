// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::push_tool_result_block::hf71b52571ecc348c; addr: 0x100c3f0d0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:41Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::push_tool_result_block::hf71b52571ecc348c(
        char *a1,
        __int64 *a2)
{
  char *v2; // r14
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r15
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD v30[4]; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+20h] [rbp-80h] BYREF
  _DWORD *v32; // [rsp+28h] [rbp-78h]
  __int64 v33; // [rsp+30h] [rbp-70h]
  _QWORD v34[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-58h]
  __int64 v36; // [rsp+50h] [rbp-50h]
  __int64 v37; // [rsp+58h] [rbp-48h] BYREF
  __int64 v38; // [rsp+60h] [rbp-40h]
  __int64 v39; // [rsp+68h] [rbp-38h]
  __int64 v40; // [rsp+70h] [rbp-30h]

  v2 = a1; /*0x100c3f0e4*/
  v3 = *((_QWORD *)a1 + 2); /*0x100c3f0e7*/
  if ( v3 /*0x100c3f36b*/
    && (v4 = *((_QWORD *)a1 + 1) + 32 * v3 - 32,
        a1 = "roletask-axobluedaterectMoveline",
        (v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "roletask-axobluedaterectMoveline",
                4,
                v4)) != 0)
    && *(_BYTE *)v5 == 3
    && *(_QWORD *)(v5 + 24) == 4
    && **(_DWORD **)(v5 + 16) == 1919251317
    && (a1 = (char *)&anon_859d1b4600149d0c2c9adb806d5a63b7_295,
        v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
                &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                7,
                v4),
        (v18 = v17) != 0)
    && *(_BYTE *)v17 == 4 )
  {
    v19 = *(_QWORD *)(v17 + 24); /*0x100c3f374*/
    v36 = v17; /*0x100c3f37b*/
    if ( v19 ) /*0x100c3f37f*/
    {
      v20 = *(_QWORD *)(v17 + 16); /*0x100c3f385*/
      v21 = 32 * v19; /*0x100c3f389*/
      v22 = 0; /*0x100c3f38d*/
      while ( 1 ) /*0x100c3f39f*/
      {
        v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f39f*/
                &anon_859d1b4600149d0c2c9adb806d5a63b7_276,
                4,
                v20);
        if ( !v23 /*0x100c3f3da*/
          || *(_BYTE *)v23 != 3
          || *(_QWORD *)(v23 + 24) != 11
          || **(_QWORD **)(v23 + 16) ^ 0x7365725F6C6F6F74LL
           | *(_QWORD *)(*(_QWORD *)(v23 + 16) + 3LL) ^ 0x746C757365725F6CLL )
        {
          break; /*0x100c3f3da*/
        }
        v20 += 32; /*0x100c3f3df*/
        ++v22; /*0x100c3f3e3*/
        v21 -= 32; /*0x100c3f3e6*/
        if ( !v21 ) /*0x100c3f3ea*/
        {
          v22 = *(_QWORD *)(v36 + 24); /*0x100c3f3f0*/
          goto LABEL_31; /*0x100c3f3f4*/
        }
      }
      v24 = *(_QWORD *)(v36 + 24); /*0x100c3f3fa*/
      v40 = a2[3]; /*0x100c3f402*/
      v39 = a2[2]; /*0x100c3f40a*/
      v25 = *a2; /*0x100c3f40e*/
      v38 = a2[1]; /*0x100c3f415*/
      v37 = v25; /*0x100c3f419*/
      if ( v22 > v24 ) /*0x100c3f420*/
        alloc::vec::Vec$LT$T$C$A$GT$::insert_mut::assert_failed::h5a99f51db44041ca(v22, v24, &off_101C0DAB0); /*0x100c3f42f*/
    }
    else
    {
      v22 = 0; /*0x100c3f439*/
LABEL_31:
      v40 = a2[3]; /*0x100c3f43c*/
      v39 = a2[2]; /*0x100c3f448*/
      v26 = *a2; /*0x100c3f44c*/
      v38 = a2[1]; /*0x100c3f453*/
      v37 = v26; /*0x100c3f457*/
      v24 = v22; /*0x100c3f45b*/
    }
    v27 = (_QWORD *)(v18 + 8); /*0x100c3f45e*/
    if ( v24 == *v27 ) /*0x100c3f465*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v27); /*0x100c3f46a*/
    v28 = (_QWORD *)(*(_QWORD *)(v36 + 16) + 32 * v22); /*0x100c3f47a*/
    if ( v24 > v22 ) /*0x100c3f484*/
      memmove(v28 + 4, (const void *)(*(_QWORD *)(v36 + 16) + 32 * v22), 32 * (v24 - v22)); /*0x100c3f491*/
    v28[3] = v40; /*0x100c3f49a*/
    v28[2] = v39; /*0x100c3f4a2*/
    v29 = v37; /*0x100c3f4a6*/
    v28[1] = v38; /*0x100c3f4ae*/
    *v28 = v29; /*0x100c3f4b2*/
    result = v36; /*0x100c3f4b8*/
    *(_QWORD *)(v36 + 24) = v24 + 1; /*0x100c3f4bc*/
  }
  else
  {
    v34[0] = 0; /*0x100c3f135*/
    v35 = 0; /*0x100c3f13d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x100c3f145*/
    v6 = 4; /*0x100c3f14a*/
    v7 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100c3f15a*/
    if ( !v7 ) /*0x100c3f162*/
      goto LABEL_39; /*0x100c3f162*/
    *v7 = 1701605234; /*0x100c3f16b*/
    v31 = 4; /*0x100c3f171*/
    v32 = v7; /*0x100c3f179*/
    v33 = 4; /*0x100c3f17d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100c3f185*/
    v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100c3f194*/
    if ( !v8 ) /*0x100c3f19c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100c3f522*/
    *v8 = 1919251317; /*0x100c3f1a2*/
    LOBYTE(v37) = 3; /*0x100c3f1a8*/
    v38 = 4; /*0x100c3f1ac*/
    v39 = (__int64)v8; /*0x100c3f1b4*/
    v40 = 4; /*0x100c3f1b8*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v30, v34, &v31, &v37); /*0x100c3f1d3*/
    if ( LOBYTE(v30[0]) != 6 ) /*0x100c3f1df*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v30); /*0x100c3f1e8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30); /*0x100c3f1ed*/
    v6 = 7; /*0x100c3f1f2*/
    v9 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100c3f202*/
    if ( !v9 ) /*0x100c3f20a*/
LABEL_39:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x100c3f511*/
    *(_DWORD *)((char *)v9 + 3) = 1953391988; /*0x100c3f213*/
    *v9 = 1953394531; /*0x100c3f21a*/
    v31 = 7; /*0x100c3f220*/
    v32 = v9; /*0x100c3f228*/
    v33 = 7; /*0x100c3f22c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7); /*0x100c3f234*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100c3f243*/
    if ( !v10 ) /*0x100c3f24b*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100c3f4cf*/
    v11 = (_QWORD *)v10; /*0x100c3f251*/
    serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x100c3f25b*/
      &v37,
      a2);
    if ( (_BYTE)v37 == 6 ) /*0x100c3f264*/
    {
      v30[0] = v38; /*0x100c3f4da*/
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1018EF45C, 43, v30, &off_101C0E458, &off_101C0DAC8); /*0x100c3f502*/
    }
    v11[3] = v40; /*0x100c3f26e*/
    v11[2] = v39; /*0x100c3f277*/
    v12 = v37; /*0x100c3f27c*/
    v11[1] = v38; /*0x100c3f284*/
    *v11 = v12; /*0x100c3f289*/
    v38 = 1; /*0x100c3f28d*/
    v39 = (__int64)v11; /*0x100c3f295*/
    v40 = 1; /*0x100c3f299*/
    LOBYTE(v37) = 4; /*0x100c3f2a1*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(v30, v34, &v31, &v37); /*0x100c3f2b8*/
    if ( LOBYTE(v30[0]) != 6 ) /*0x100c3f2c4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v30); /*0x100c3f2cd*/
    v38 = v34[0]; /*0x100c3f2da*/
    v39 = v34[1]; /*0x100c3f2de*/
    v40 = v35; /*0x100c3f2e6*/
    LOBYTE(v37) = 5; /*0x100c3f2ea*/
    if ( v3 == *(_QWORD *)v2 ) /*0x100c3f2f1*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v2); /*0x100c3f2f6*/
    v13 = *((_QWORD *)v2 + 1); /*0x100c3f2fb*/
    v14 = 32 * v3; /*0x100c3f302*/
    *(_QWORD *)(v13 + v14 + 24) = v40; /*0x100c3f30a*/
    *(_QWORD *)(v13 + v14 + 16) = v39; /*0x100c3f313*/
    v15 = v37; /*0x100c3f318*/
    *(_QWORD *)(v13 + v14 + 8) = v38; /*0x100c3f320*/
    *(_QWORD *)(v13 + v14) = v15; /*0x100c3f325*/
    *((_QWORD *)v2 + 2) = v3 + 1; /*0x100c3f32c*/
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(a2); /*0x100c3f333*/
  }
  return result; /*0x100c3f338*/
}