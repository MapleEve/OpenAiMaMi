// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tokens::token_data::hb557ea2d1e4212b5; addr: 0x10039a390; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
__int64 __fastcall codexmate_lib::core::analytics::parser::tokens::token_data::hb557ea2d1e4212b5(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        const void *a5,
        signed __int64 a6)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r12
  char v39; // al
  __int64 v40; // rax
  __int64 result; // rax
  _QWORD v43[2]; // [rsp+18h] [rbp-98h] BYREF
  __int64 v44; // [rsp+28h] [rbp-88h]
  _BYTE v45[32]; // [rsp+30h] [rbp-80h] BYREF
  _BYTE v46[8]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v47; // [rsp+58h] [rbp-58h]
  __int64 v48; // [rsp+60h] [rbp-50h]
  __int64 v49; // [rsp+68h] [rbp-48h]
  __int64 v50; // [rsp+70h] [rbp-40h] BYREF
  _QWORD *v51; // [rsp+78h] [rbp-38h]
  __int64 v52; // [rsp+80h] [rbp-30h]

  v43[0] = 0; /*0x10039a3be*/
  v44 = 0; /*0x10039a3c9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x10039a3d4*/
  v9 = 5; /*0x10039a3d9*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10039a3e8*/
  if ( !v10 ) /*0x10039a3f0*/
    goto LABEL_57; /*0x10039a3f0*/
  *(_BYTE *)(v10 + 4) = 116; /*0x10039a3f6*/
  *(_DWORD *)v10 = 1970302569; /*0x10039a3fa*/
  v50 = 5; /*0x10039a400*/
  v51 = (_QWORD *)v10; /*0x10039a408*/
  v52 = 5; /*0x10039a40c*/
  v11 = 0; /*0x10039a417*/
  v12 = 0; /*0x10039a419*/
  if ( (*a2 & 1) != 0 ) /*0x10039a421*/
    v12 = a2[1]; /*0x10039a423*/
  if ( a4 ) /*0x10039a42a*/
    v11 = v12; /*0x10039a42a*/
  v46[0] = 2; /*0x10039a435*/
  v47 = v11 >> 63; /*0x10039a439*/
  v48 = v11; /*0x10039a43d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a454*/
  if ( v45[0] != 6 ) /*0x10039a45d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a463*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v13); /*0x10039a468*/
  v9 = 6; /*0x10039a46d*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10039a47c*/
  if ( !v14 ) /*0x10039a484*/
    goto LABEL_57; /*0x10039a484*/
  *(_WORD *)(v14 + 4) = 29813; /*0x10039a48a*/
  *(_DWORD *)v14 = 1886680431; /*0x10039a490*/
  v50 = 6; /*0x10039a496*/
  v51 = (_QWORD *)v14; /*0x10039a49e*/
  v52 = 6; /*0x10039a4a2*/
  v15 = 0; /*0x10039a4ae*/
  v16 = 0; /*0x10039a4b0*/
  if ( (a2[2] & 1) != 0 ) /*0x10039a4b8*/
    v16 = a2[3]; /*0x10039a4ba*/
  if ( a4 ) /*0x10039a4c1*/
    v15 = v16; /*0x10039a4c1*/
  v46[0] = 2; /*0x10039a4cc*/
  v47 = v15 >> 63; /*0x10039a4d0*/
  v48 = v15; /*0x10039a4d4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a4eb*/
  if ( v45[0] != 6 ) /*0x10039a4f4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a4fa*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v17); /*0x10039a4ff*/
  v9 = 9; /*0x10039a504*/
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x10039a513*/
  if ( !v18 ) /*0x10039a51b*/
    goto LABEL_57; /*0x10039a51b*/
  *(_QWORD *)v18 = 0x6E696E6F73616572LL; /*0x10039a52b*/
  *(_BYTE *)(v18 + 8) = 103; /*0x10039a52e*/
  v50 = 9; /*0x10039a532*/
  v51 = (_QWORD *)v18; /*0x10039a53a*/
  v52 = 9; /*0x10039a53e*/
  v19 = 0; /*0x10039a54a*/
  v20 = 0; /*0x10039a54c*/
  if ( (a2[4] & 1) != 0 ) /*0x10039a554*/
    v20 = a2[5]; /*0x10039a556*/
  if ( a4 ) /*0x10039a55d*/
    v19 = v20; /*0x10039a55d*/
  v46[0] = 2; /*0x10039a568*/
  v47 = v19 >> 63; /*0x10039a56c*/
  v48 = v19; /*0x10039a570*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a587*/
  if ( v45[0] != 6 ) /*0x10039a590*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a596*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v21); /*0x10039a59b*/
  v9 = 6; /*0x10039a5a0*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10039a5af*/
  if ( !v22 ) /*0x10039a5b7*/
    goto LABEL_57; /*0x10039a5b7*/
  *(_WORD *)(v22 + 4) = 25701; /*0x10039a5bd*/
  *(_DWORD *)v22 = 1751343459; /*0x10039a5c3*/
  v50 = 6; /*0x10039a5c9*/
  v51 = (_QWORD *)v22; /*0x10039a5d1*/
  v52 = 6; /*0x10039a5d5*/
  v23 = 0; /*0x10039a5e1*/
  v24 = 0; /*0x10039a5e3*/
  if ( (a2[6] & 1) != 0 ) /*0x10039a5eb*/
    v24 = a2[7]; /*0x10039a5ed*/
  if ( a4 ) /*0x10039a5f4*/
    v23 = v24; /*0x10039a5f4*/
  v46[0] = 2; /*0x10039a5ff*/
  v47 = v23 >> 63; /*0x10039a603*/
  v48 = v23; /*0x10039a607*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a61e*/
  if ( v45[0] != 6 ) /*0x10039a627*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a62d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v25); /*0x10039a632*/
  v9 = 5; /*0x10039a637*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10039a646*/
  if ( !v26 ) /*0x10039a64e*/
    goto LABEL_57; /*0x10039a64e*/
  *(_BYTE *)(v26 + 4) = 108; /*0x10039a654*/
  *(_DWORD *)v26 = 1635020660; /*0x10039a658*/
  v50 = 5; /*0x10039a65e*/
  v51 = (_QWORD *)v26; /*0x10039a666*/
  v52 = 5; /*0x10039a66a*/
  v27 = 0; /*0x10039a676*/
  v28 = 0; /*0x10039a678*/
  if ( (a2[8] & 1) != 0 ) /*0x10039a680*/
    v28 = a2[9]; /*0x10039a682*/
  if ( a4 ) /*0x10039a689*/
    v27 = v28; /*0x10039a689*/
  v46[0] = 2; /*0x10039a694*/
  v47 = v27 >> 63; /*0x10039a698*/
  v48 = v27; /*0x10039a69c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a6b3*/
  if ( v45[0] != 6 ) /*0x10039a6bc*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a6c2*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v29); /*0x10039a6c7*/
  v9 = 6; /*0x10039a6cc*/
  v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10039a6db*/
  if ( !v30 ) /*0x10039a6e3*/
    goto LABEL_57; /*0x10039a6e3*/
  *(_WORD *)(v30 + 4) = 25955; /*0x10039a6ec*/
  *(_DWORD *)v30 = 1920298867; /*0x10039a6f2*/
  v50 = 6; /*0x10039a6f8*/
  v51 = (_QWORD *)v30; /*0x10039a700*/
  v52 = 6; /*0x10039a704*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v31); /*0x10039a70c*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10039a71b*/
  if ( !v32 ) /*0x10039a723*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10039a919*/
  *(_WORD *)(v32 + 4) = *(_WORD *)(a3 + 4); /*0x10039a72e*/
  *(_DWORD *)v32 = *(_DWORD *)a3; /*0x10039a736*/
  v46[0] = 3; /*0x10039a738*/
  v47 = 6; /*0x10039a73c*/
  v48 = v32; /*0x10039a744*/
  v49 = 6; /*0x10039a748*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a763*/
  if ( v45[0] != 6 ) /*0x10039a76c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a772*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v33); /*0x10039a777*/
  v9 = 8; /*0x10039a77c*/
  v34 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10039a78b*/
  if ( !v34 ) /*0x10039a793*/
    goto LABEL_57; /*0x10039a793*/
  *v34 = 0x6574656C706D6F63LL; /*0x10039a7a3*/
  v50 = 8; /*0x10039a7a6*/
  v51 = v34; /*0x10039a7ae*/
  v52 = 8; /*0x10039a7b2*/
  v46[0] = 1; /*0x10039a7ba*/
  v46[1] = a4; /*0x10039a7be*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a7d5*/
  if ( v45[0] != 6 ) /*0x10039a7de*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a7e4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45, v43, v35); /*0x10039a7e9*/
  v9 = 5; /*0x10039a7ee*/
  v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10039a7fd*/
  if ( !v36 ) /*0x10039a805*/
LABEL_57:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x10039a908*/
  *(_BYTE *)(v36 + 4) = 108; /*0x10039a80e*/
  *(_DWORD *)v36 = 1701080941; /*0x10039a812*/
  v50 = 5; /*0x10039a818*/
  v51 = (_QWORD *)v36; /*0x10039a820*/
  v52 = 5; /*0x10039a824*/
  if ( a5 ) /*0x10039a836*/
  {
    if ( a6 < 0 ) /*0x10039a83b*/
    {
      v38 = 0; /*0x10039a83d*/
      goto LABEL_47; /*0x10039a83d*/
    }
    if ( a6 ) /*0x10039a854*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1, v37); /*0x10039a856*/
      v38 = 1; /*0x10039a85b*/
      v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a6, 1); /*0x10039a869*/
      if ( !v40 ) /*0x10039a871*/
LABEL_47:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v38, a6); /*0x10039a840*/
      v9 = v40; /*0x10039a873*/
    }
    else
    {
      v9 = 1; /*0x10039a878*/
    }
    memcpy((void *)v9, a5, a6); /*0x10039a886*/
    v39 = 3; /*0x10039a88b*/
  }
  else
  {
    v39 = 0; /*0x10039a850*/
  }
  v46[0] = v39; /*0x10039a88d*/
  v47 = a6; /*0x10039a890*/
  v48 = v9; /*0x10039a894*/
  v49 = a6; /*0x10039a898*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v45, v43, &v50, v46); /*0x10039a8af*/
  if ( v45[0] != 6 ) /*0x10039a8b8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v45); /*0x10039a8be*/
  *(_QWORD *)(a1 + 24) = v44; /*0x10039a8d1*/
  result = v43[0]; /*0x10039a8d5*/
  *(_QWORD *)(a1 + 16) = v43[1]; /*0x10039a8e3*/
  *(_QWORD *)(a1 + 8) = result; /*0x10039a8e7*/
  *(_BYTE *)a1 = 5; /*0x10039a8eb*/
  return result; /*0x10039a8ee*/
}