// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::replay_history::h3364d7246c476485; addr: 0x100ac8650; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:19Z
char *__fastcall codexmate_lib::core::relay::translator::anthropic_search::replay_history::h3364d7246c476485(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // eax
  char *v3; // r14
  bool v4; // zf
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r14
  bool v9; // al
  __int64 v10; // r14
  __int64 v11; // r15
  _QWORD *v12; // rbx
  void *v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r14
  __int64 v20; // r12
  size_t v21; // rdx
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  char v24; // bl
  __int64 v25; // r13
  __int64 v26; // r12
  unsigned __int64 v27; // rbx
  __int64 v28; // r13
  _DWORD *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned __int64 v36; // r15
  bool v37; // cf
  __int64 v38; // rax
  __int64 *v39; // r15
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // r15
  __int64 v44; // [rsp+8h] [rbp-118h] BYREF
  __int64 v45; // [rsp+10h] [rbp-110h]
  unsigned __int64 v46; // [rsp+18h] [rbp-108h]
  __int64 v47; // [rsp+20h] [rbp-100h]
  __int64 v48; // [rsp+28h] [rbp-F8h]
  unsigned __int64 v49; // [rsp+30h] [rbp-F0h]
  _QWORD v50[2]; // [rsp+38h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-D8h]
  __int64 v52; // [rsp+50h] [rbp-D0h]
  __int64 v53; // [rsp+58h] [rbp-C8h]
  __int64 v54; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-B8h]
  __int64 v56; // [rsp+70h] [rbp-B0h]
  __int64 v57; // [rsp+78h] [rbp-A8h] BYREF
  _DWORD *v58; // [rsp+80h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+88h] [rbp-98h]
  _QWORD *v60; // [rsp+90h] [rbp-90h]
  __int64 v61; // [rsp+98h] [rbp-88h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-80h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-78h]
  __int64 v64; // [rsp+B0h] [rbp-70h]
  __int64 v65; // [rsp+B8h] [rbp-68h]
  __int64 v66; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v68; // [rsp+D0h] [rbp-50h]
  __int64 v69; // [rsp+D8h] [rbp-48h]
  __int64 v70; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v71; // [rsp+E8h] [rbp-38h]
  int v72; // [rsp+F4h] [rbp-2Ch]

  v3 = (char *)&unk_1018D654D; /*0x100ac8664*/
  v4 = *(_BYTE *)a1 == 4; /*0x100ac8671*/
  v65 = a1; /*0x100ac8674*/
  if ( !v4 /*0x100ac8698*/
    || (v60 = a2,
        v5 = *(_QWORD *)(a1 + 16),
        v6 = *(_QWORD *)(a1 + 24),
        LOBYTE(v2) = 1,
        v72 = v2,
        !codexmate_lib::core::relay::translator::anthropic_search::valid_content::h9394c8404f8502a0(v5, v6)) )
  {
LABEL_56:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v65); /*0x100ac8cda*/
    return v3; /*0x100ac8cde*/
  }
  v7 = v60[1]; /*0x100ac86ac*/
  v8 = v60[2]; /*0x100ac86b0*/
  v9 = v8 == 0; /*0x100ac86b7*/
  v52 = v8; /*0x100ac86ba*/
  v10 = 32 * v8; /*0x100ac86c1*/
  v53 = v7; /*0x100ac86c5*/
  v11 = v7 + v10 - 32; /*0x100ac86d0*/
  if ( v9 || v7 + v10 == 32 ) /*0x100ac86d4*/
  {
    v12 = nullptr; /*0x100ac86db*/
  }
  else
  {
    v13 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac86ee*/
                    "roleassistantAnthropic server history does not match its visible messagePending Anthropic search req"
                    "uires matching client tool results only and unchanged search toolsIncomplete Anthropic server tool h"
                    "istorytool_result",
                    4,
                    v11);
    if ( !v13 ) /*0x100ac86f6*/
      v13 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac86f8*/
    v12 = nullptr; /*0x100ac870e*/
    if ( (unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac8709*/
                            v13,
                            &off_101C08B50) )
      v12 = (_QWORD *)v11; /*0x100ac8712*/
  }
  v14 = v5 + 32 * v6; /*0x100ac871a*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h38c60bc20c9bc120( /*0x100ac872a*/
    &v61,
    v5,
    v14);
  if ( v63 >= 2 ) /*0x100ac8737*/
  {
    if ( v63 >= 0x15 ) /*0x100ac8d0a*/
      core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v62, v63, &v66); /*0x100ac8d97*/
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h8d665e4f7ea22e58(v62, v63, 1, &v66); /*0x100ac8d19*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h716d68c6dd2570ca( /*0x100ac8747*/
    &v66,
    v5,
    v14);
  v46 = v63; /*0x100ac8750*/
  v45 = v62; /*0x100ac8762*/
  v44 = v61; /*0x100ac8769*/
  v47 = v66; /*0x100ac8778*/
  v48 = v67; /*0x100ac877f*/
  v49 = v68; /*0x100ac878a*/
  if ( *(_BYTE *)v65 != 4 ) /*0x100ac8798*/
    core::option::unwrap_failed::h44626cade04bbf1e(&off_101C08B78); /*0x100ac8d2a*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h336d60a1138150fc( /*0x100ac87ad*/
    &v54,
    *(_QWORD *)(v65 + 16),
    *(_QWORD *)(v65 + 24));
  if ( v12 ) /*0x100ac87b5*/
  {
    v60 = v12; /*0x100ac87c7*/
    v15 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac87d1*/
                      "content",
                      7,
                      v12);
    if ( !v15 ) /*0x100ac87d9*/
      v15 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac87db*/
    if ( *(_BYTE *)v15 != 4 ) /*0x100ac87e5*/
      goto LABEL_53; /*0x100ac87e5*/
    v16 = v15[2]; /*0x100ac87eb*/
    v17 = v16 + 32LL * v15[3]; /*0x100ac87f7*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h38c60bc20c9bc120( /*0x100ac8807*/
      &v57,
      v16,
      v17);
    if ( v59 >= 2 ) /*0x100ac8817*/
    {
      if ( v59 >= 0x15 ) /*0x100ac8d3c*/
        core::slice::sort::stable::driftsort_main::h5af4c5863c061b64(v58, v59, &v66); /*0x100ac8db6*/
      else
        core::slice::sort::shared::smallsort::insertion_sort_shift_left::h8d665e4f7ea22e58(v58, v59, 1, &v66); /*0x100ac8d47*/
    }
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h716d68c6dd2570ca( /*0x100ac882a*/
      &v61,
      v16,
      v17);
    v18 = v59; /*0x100ac882f*/
    v68 = v59; /*0x100ac8836*/
    v19 = v58; /*0x100ac8841*/
    v67 = (__int64)v58; /*0x100ac8848*/
    v66 = v57; /*0x100ac884c*/
    v69 = v61; /*0x100ac885b*/
    v70 = v62; /*0x100ac885f*/
    v71 = v63; /*0x100ac8867*/
    if ( v59 == v46 ) /*0x100ac8872*/
    {
      if ( v59 ) /*0x100ac887b*/
      {
        v20 = 4; /*0x100ac8884*/
        while ( 1 ) /*0x100ac8890*/
        {
          v21 = *(_QWORD *)&v19[v20]; /*0x100ac8890*/
          if ( v21 != *(_QWORD *)(v45 + v20 * 4) /*0x100ac88a8*/
            || memcmp(*(const void **)&v19[v20 - 2], *(const void **)(v45 + v20 * 4 - 8), v21) )
          {
            break; /*0x100ac88a8*/
          }
          v20 += 6; /*0x100ac88b5*/
          if ( !--v18 ) /*0x100ac88bc*/
            goto LABEL_22; /*0x100ac88bc*/
        }
      }
      else
      {
LABEL_22:
        v22 = v70; /*0x100ac88be*/
        v23 = v71; /*0x100ac88c2*/
        if ( v71 == v49 ) /*0x100ac88cd*/
        {
          v24 = 1; /*0x100ac88d3*/
          if ( !v71 ) /*0x100ac88d8*/
            goto LABEL_47; /*0x100ac88d8*/
          v25 = v48; /*0x100ac88de*/
          v26 = v70; /*0x100ac88e5*/
          v27 = v71; /*0x100ac88e8*/
          while ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..cmp..PartialEq$GT$::eq::hca7ee7f56546a007( /*0x100ac88f8*/
                                     v26,
                                     v25) )
          {
            v25 += 32; /*0x100ac88fe*/
            v26 += 32; /*0x100ac8902*/
            if ( !--v27 ) /*0x100ac8909*/
              goto LABEL_58; /*0x100ac8909*/
          }
        }
        if ( v23 == v56 ) /*0x100ac8b8e*/
        {
          if ( v23 ) /*0x100ac8b93*/
          {
            v35 = v55; /*0x100ac8b99*/
            v36 = v23 - 1; /*0x100ac8ba0*/
            do /*0x100ac8bc1*/
            {
              v24 = _$LT$serde_json..value..Value$u20$as$u20$core..cmp..PartialEq$GT$::eq::hca7ee7f56546a007(v22, v35); /*0x100ac8bae*/
              v37 = v36-- != 0; /*0x100ac8bb0*/
              v35 += 32; /*0x100ac8bb7*/
              v22 += 32; /*0x100ac8bbb*/
            }
            while ( (v37 & (unsigned __int8)v24) != 0 ); /*0x100ac8bc1*/
          }
          else
          {
LABEL_58:
            v24 = 1; /*0x100ac8cfb*/
          }
LABEL_47:
          core::ptr::drop_in_place$LT$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$serde_json..value..Value$GT$$RP$$GT$::hd50f0dda568657e2(&v66); /*0x100ac8bc7*/
          if ( v24 ) /*0x100ac8bd2*/
          {
            v69 = *(_QWORD *)(v65 + 24); /*0x100ac8be0*/
            v68 = *(_QWORD *)(v65 + 16); /*0x100ac8be8*/
            v38 = *(_QWORD *)v65; /*0x100ac8bec*/
            v67 = *(_QWORD *)(v65 + 8); /*0x100ac8bf3*/
            v66 = v38; /*0x100ac8bf7*/
            v39 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100ac8c13*/
                               "content",
                               7u);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v39); /*0x100ac8c19*/
            v39[3] = v69; /*0x100ac8c22*/
            v39[2] = v68; /*0x100ac8c2a*/
            v40 = v66; /*0x100ac8c2e*/
            v39[1] = v67; /*0x100ac8c36*/
            *v39 = v40; /*0x100ac8c3a*/
            v72 = 0; /*0x100ac8c3d*/
            goto LABEL_49; /*0x100ac8c3d*/
          }
LABEL_53:
          v42 = v55; /*0x100ac8c8e*/
          core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(v55, v56); /*0x100ac8c9f*/
          if ( v54 ) /*0x100ac8cae*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, 32 * v54, 8); /*0x100ac8cbc*/
          core::ptr::drop_in_place$LT$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$serde_json..value..Value$GT$$RP$$GT$::hd50f0dda568657e2(&v44); /*0x100ac8cc8*/
          v3 = "Anthropic server history does not match its visible messagePending Anthropic search requires matching client tool results only and unchanged search toolsIncomplete Anthropic server tool historytool_result"; /*0x100ac8ccd*/
          goto LABEL_56; /*0x100ac8ccd*/
        }
      }
    }
    v24 = 0; /*0x100ac8bc5*/
    goto LABEL_47; /*0x100ac8bc5*/
  }
  v66 = 0; /*0x100ac8910*/
  v67 = 8; /*0x100ac8918*/
  v68 = 0; /*0x100ac8920*/
  v69 = 0; /*0x100ac8928*/
  v70 = 8; /*0x100ac8930*/
  v71 = 0; /*0x100ac8938*/
  if ( v46 | v49 ) /*0x100ac8947*/
  {
    core::ptr::drop_in_place$LT$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$serde_json..value..Value$GT$$RP$$GT$::hd50f0dda568657e2(&v66); /*0x100ac8b7d*/
    goto LABEL_53; /*0x100ac8b82*/
  }
  core::ptr::drop_in_place$LT$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$serde_json..value..Value$GT$$RP$$GT$::hd50f0dda568657e2(&v66); /*0x100ac8958*/
  v50[0] = 0; /*0x100ac895d*/
  v51 = 0; /*0x100ac8968*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66); /*0x100ac8973*/
  v28 = 4; /*0x100ac8978*/
  v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac8988*/
  v30 = v60; /*0x100ac8990*/
  if ( !v29 ) /*0x100ac8997*/
    goto LABEL_65; /*0x100ac8997*/
  *v29 = 1701605234; /*0x100ac89a0*/
  v57 = 4; /*0x100ac89a6*/
  v58 = v29; /*0x100ac89b1*/
  v59 = 4; /*0x100ac89b8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac89c3*/
  v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100ac89d2*/
  if ( !v31 ) /*0x100ac89da*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100ac8dab*/
  *(_QWORD *)v31 = 0x6E61747369737361LL; /*0x100ac89ea*/
  *(_BYTE *)(v31 + 8) = 116; /*0x100ac89ed*/
  LOBYTE(v66) = 3; /*0x100ac89f1*/
  v67 = 9; /*0x100ac89f5*/
  v68 = v31; /*0x100ac89fd*/
  v69 = 9; /*0x100ac8a01*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v61, v50, &v57, &v66); /*0x100ac8a22*/
  if ( (_BYTE)v61 != 6 ) /*0x100ac8a2e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v61); /*0x100ac8a37*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v61); /*0x100ac8a3c*/
  v28 = 7; /*0x100ac8a41*/
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100ac8a51*/
  if ( !v32 ) /*0x100ac8a59*/
LABEL_65:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x100ac8d8c*/
  *(_DWORD *)((char *)v32 + 3) = 1953391988; /*0x100ac8a62*/
  *v32 = 1953394531; /*0x100ac8a69*/
  v57 = 7; /*0x100ac8a6f*/
  v58 = v32; /*0x100ac8a7a*/
  v59 = 7; /*0x100ac8a81*/
  serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x100ac8a94*/
    &v66,
    v65);
  if ( (_BYTE)v66 == 6 )
  {
    v61 = v67; /*0x100ac8d55*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueNot a MenuNot a SubmenuErrorByteCountNotDivisibleBy4byte_countDimension"
      "sVsPixelCountwidth_x_heightpixel_countOsErrorIoInvalidArchiveUnsupportedArchiveFileNotFoundInvalidPasswordassertio"
      "n failed: self.is_char_boundary(new_len)EventTargetinternally tagged enum EventTarget***",
      43,
      &v61,
      &off_101C0A248,
      &off_101C08B60);
  }
  v64 = v69; /*0x100ac8aa7*/
  v63 = v68; /*0x100ac8aaf*/
  v62 = v67; /*0x100ac8abb*/
  v61 = v66; /*0x100ac8abf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v66, v50, &v57, &v61); /*0x100ac8adf*/
  if ( (_BYTE)v66 != 6 ) /*0x100ac8ae8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x100ac8aee*/
  v67 = v50[0]; /*0x100ac8b01*/
  v68 = v50[1]; /*0x100ac8b05*/
  v69 = v51; /*0x100ac8b10*/
  LOBYTE(v66) = 5; /*0x100ac8b14*/
  if ( v52 == *v30 ) /*0x100ac8b22*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v30); /*0x100ac8b27*/
    v53 = v30[1]; /*0x100ac8b30*/
  }
  v33 = v53; /*0x100ac8b3b*/
  *(_QWORD *)(v53 + v10 + 24) = v69; /*0x100ac8b42*/
  *(_QWORD *)(v33 + v10 + 16) = v68; /*0x100ac8b4b*/
  v34 = v66; /*0x100ac8b50*/
  *(_QWORD *)(v33 + v10 + 8) = v67; /*0x100ac8b58*/
  *(_QWORD *)(v33 + v10) = v34; /*0x100ac8b5d*/
  LODWORD(v34) = v52 + 1; /*0x100ac8b68*/
  v30[2] = v52 + 1; /*0x100ac8b6b*/
  LOBYTE(v34) = 1; /*0x100ac8b6f*/
  v72 = v34; /*0x100ac8b71*/
LABEL_49:
  v41 = v55; /*0x100ac8c44*/
  core::ptr::drop_in_place$LT$$u5b$serde_json..value..Value$u5d$$GT$::ha19a7c594533c243(v55, v56); /*0x100ac8c55*/
  if ( v54 ) /*0x100ac8c64*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 32 * v54, 8); /*0x100ac8c72*/
  core::ptr::drop_in_place$LT$$LP$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$serde_json..value..Value$GT$$RP$$GT$::hd50f0dda568657e2(&v44); /*0x100ac8c7e*/
  v3 = nullptr; /*0x100ac8c83*/
  if ( (_BYTE)v72 ) /*0x100ac8c8a*/
    goto LABEL_56; /*0x100ac8c8a*/
  return v3; /*0x100ac8ce9*/
}