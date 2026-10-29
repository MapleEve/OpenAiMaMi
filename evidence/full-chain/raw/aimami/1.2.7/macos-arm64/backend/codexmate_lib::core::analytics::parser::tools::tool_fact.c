// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1; addr: 0x1008a8710; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
void *__fastcall codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *__src,
        __int64 __n,
        void *a10,
        __int64 a11,
        unsigned __int16 *a12,
        __int64 a13,
        char a14,
        int a15,
        _QWORD *a16)
{
  unsigned __int16 *v16; // r13
  size_t v17; // r11
  __int64 v18; // r14
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  size_t v33; // r14
  void *v34; // rax
  void *v35; // rbx
  __int64 v36; // rdx
  _DWORD *v37; // rax
  __int64 v38; // r14
  void *result; // rax
  _QWORD v40[6]; // [rsp+30h] [rbp-160h] BYREF
  _QWORD v41[18]; // [rsp+60h] [rbp-130h] BYREF
  size_t v42; // [rsp+F0h] [rbp-A0h]
  __int64 v43; // [rsp+F8h] [rbp-98h]
  __int64 v44; // [rsp+100h] [rbp-90h]
  __int64 v45; // [rsp+108h] [rbp-88h]
  __int64 v46; // [rsp+110h] [rbp-80h]
  _QWORD v47[2]; // [rsp+118h] [rbp-78h] BYREF
  __int64 v48; // [rsp+128h] [rbp-68h]
  char v49[8]; // [rsp+130h] [rbp-60h] BYREF
  __int64 v50; // [rsp+138h] [rbp-58h]
  __int64 v51; // [rsp+140h] [rbp-50h]
  __int64 v52; // [rsp+148h] [rbp-48h]
  __int64 v53; // [rsp+150h] [rbp-40h] BYREF
  _DWORD *v54; // [rsp+158h] [rbp-38h]
  __int64 v55; // [rsp+160h] [rbp-30h]

  v16 = a12; /*0x1008a8736*/
  switch ( a13 ) /*0x1008a8748*/
  {
    case 6LL: /*0x1008a8748*/
      v17 = 6; /*0x1008a875f*/
      if ( *(_DWORD *)a12 ^ 0x6C6C6163 | a12[2] ^ 0x6465 && *(_DWORD *)a12 ^ 0x6C696166 | a12[2] ^ 0x6465 ) /*0x1008a8783*/
        goto LABEL_10; /*0x1008a8786*/
      break; /*0x1008a8786*/
    case 8LL: /*0x1008a8748*/
      if ( *(_QWORD *)a12 != 0x64656E696C636564LL ) /*0x1008a87bc*/
        goto LABEL_10; /*0x1008a87bc*/
      v17 = 8; /*0x1008a87be*/
      break; /*0x1008a87c4*/
    case 9LL: /*0x1008a8748*/
      if ( *(_QWORD *)a12 ^ 0x6574656C706D6F63LL | *((unsigned __int8 *)a12 + 8) ^ 0x64LL ) /*0x1008a87a1*/
        goto LABEL_10; /*0x1008a87a4*/
      v17 = 9; /*0x1008a87a6*/
      break; /*0x1008a87ac*/
    case 11LL: /*0x1008a8748*/
      if ( *(_QWORD *)a12 ^ 0x72676F72705F6E69LL | *(_QWORD *)((char *)a12 + 3) ^ 0x73736572676F7270LL ) /*0x1008a87e2*/
        goto LABEL_10; /*0x1008a87e5*/
      v17 = 11; /*0x1008a8c0b*/
      break; /*0x1008a8c11*/
    default:
LABEL_10:
      v17 = 7; /*0x1008a87eb*/
      v16 = (unsigned __int16 *)&unk_10178B9C8; /*0x1008a87f1*/
      break; /*0x1008a87f1*/
  }
  v42 = v17; /*0x1008a87f8*/
  v43 = a1; /*0x1008a87ff*/
  v40[0] = a1; /*0x1008a8806*/
  v44 = a2; /*0x1008a880d*/
  v40[1] = a2; /*0x1008a8814*/
  v45 = a3; /*0x1008a881b*/
  v40[2] = a3; /*0x1008a8822*/
  v46 = a4; /*0x1008a8829*/
  v40[3] = a4; /*0x1008a882d*/
  v40[4] = a5; /*0x1008a8834*/
  v40[5] = a6; /*0x1008a883b*/
  v47[0] = 0; /*0x1008a8842*/
  v48 = 0; /*0x1008a884a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1008a8852*/
  v18 = 4; /*0x1008a8857*/
  v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008a8867*/
  if ( !v19 ) /*0x1008a886f*/
    goto LABEL_42; /*0x1008a886f*/
  *v19 = 1701667182; /*0x1008a887c*/
  v53 = 4; /*0x1008a8882*/
  v54 = v19; /*0x1008a888a*/
  v55 = 4; /*0x1008a888e*/
  if ( __n < 0 ) /*0x1008a8899*/
  {
    v21 = 0; /*0x1008a889b*/
    goto LABEL_14; /*0x1008a889b*/
  }
  if ( __n ) /*0x1008a88ad*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v20); /*0x1008a88af*/
    v21 = 1; /*0x1008a88b4*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008a88c1*/
    if ( !v22 ) /*0x1008a88c9*/
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, __n); /*0x1008a889d*/
    v23 = v22; /*0x1008a88cb*/
  }
  else
  {
    v23 = 1; /*0x1008a88d0*/
  }
  memcpy((void *)v23, __src, __n); /*0x1008a88e0*/
  LOBYTE(v41[0]) = 3; /*0x1008a88e5*/
  v41[1] = __n; /*0x1008a88ec*/
  v41[2] = v23; /*0x1008a88f3*/
  v41[3] = __n; /*0x1008a88fa*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v49, v47, &v53, v41); /*0x1008a8914*/
  if ( v49[0] != 6 ) /*0x1008a891d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v49); /*0x1008a8923*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v47, v24); /*0x1008a8928*/
  v18 = 8; /*0x1008a892d*/
  v25 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1008a893d*/
  if ( !v25 ) /*0x1008a8945*/
    goto LABEL_42; /*0x1008a8945*/
  *v25 = 0x79726F6765746163LL; /*0x1008a895c*/
  v53 = 8; /*0x1008a895f*/
  v54 = v25; /*0x1008a8967*/
  v55 = 8; /*0x1008a896b*/
  if ( a11 < 0 ) /*0x1008a8976*/
  {
    v27 = 0; /*0x1008a8978*/
    goto LABEL_24; /*0x1008a8978*/
  }
  if ( a11 ) /*0x1008a898a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1, v26); /*0x1008a898c*/
    v27 = 1; /*0x1008a8991*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a11, 1); /*0x1008a899e*/
    if ( !v28 ) /*0x1008a89a6*/
LABEL_24:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, a11); /*0x1008a897a*/
    v29 = v28; /*0x1008a89a8*/
  }
  else
  {
    v29 = 1; /*0x1008a89ad*/
  }
  memcpy((void *)v29, a10, a11); /*0x1008a89bd*/
  LOBYTE(v41[0]) = 3; /*0x1008a89c2*/
  v41[1] = a11; /*0x1008a89c9*/
  v41[2] = v29; /*0x1008a89d0*/
  v41[3] = a11; /*0x1008a89d7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v49, v47, &v53, v41); /*0x1008a89f1*/
  if ( v49[0] != 6 ) /*0x1008a89fa*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v49); /*0x1008a8a00*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v47, v30); /*0x1008a8a05*/
  v18 = 6; /*0x1008a8a0a*/
  v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1008a8a1a*/
  if ( !v31 ) /*0x1008a8a22*/
    goto LABEL_42; /*0x1008a8a22*/
  *(_WORD *)(v31 + 4) = 29557; /*0x1008a8a2b*/
  *(_DWORD *)v31 = 1952543859; /*0x1008a8a31*/
  v53 = 6; /*0x1008a8a37*/
  v54 = (_DWORD *)v31; /*0x1008a8a3f*/
  v55 = 6; /*0x1008a8a43*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1, v32); /*0x1008a8a4b*/
  v33 = v42; /*0x1008a8a55*/
  v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1); /*0x1008a8a5f*/
  if ( !v34 ) /*0x1008a8a67*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v33); /*0x1008a8c2d*/
  v35 = v34; /*0x1008a8a6d*/
  memcpy(v34, v16, v33); /*0x1008a8a79*/
  LOBYTE(v41[0]) = 3; /*0x1008a8a7e*/
  v41[1] = v33; /*0x1008a8a85*/
  v41[2] = v35; /*0x1008a8a8c*/
  v41[3] = v33; /*0x1008a8a93*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v49, v47, &v53, v41); /*0x1008a8aad*/
  if ( v49[0] != 6 ) /*0x1008a8ab6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v49); /*0x1008a8abc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v47, v36); /*0x1008a8ac1*/
  v18 = 7; /*0x1008a8ac6*/
  v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008a8ad6*/
  if ( !v37 ) /*0x1008a8ade*/
LABEL_42:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x1008a8c1e*/
  *(_DWORD *)((char *)v37 + 3) = 1936942435; /*0x1008a8ae8*/
  *v37 = 1667462515; /*0x1008a8aef*/
  v53 = 7; /*0x1008a8af5*/
  v54 = v37; /*0x1008a8afd*/
  v55 = 7; /*0x1008a8b01*/
  LOBYTE(v41[0]) = a14 != 2; /*0x1008a8b0c*/
  BYTE1(v41[0]) = a14; /*0x1008a8b13*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(v49, v47, &v53, v41); /*0x1008a8b2f*/
  if ( v49[0] != 6 ) /*0x1008a8b38*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(v49); /*0x1008a8b3e*/
  v50 = v47[0]; /*0x1008a8b56*/
  v51 = v47[1]; /*0x1008a8b5a*/
  v52 = v48; /*0x1008a8b62*/
  v49[0] = 5; /*0x1008a8b66*/
  codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x1008a8bbf*/
    v41,
    "toolstopseedautolastNULL",
    4,
    v40,
    3,
    v43,
    v44,
    v45,
    v46,
    a7,
    v49,
    a15);
  v38 = a16[2]; /*0x1008a8bc4*/
  if ( v38 == *a16 ) /*0x1008a8bcb*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(a16); /*0x1008a8bd0*/
  result = memcpy((void *)(a16[1] + 144 * v38), v41, 0x90u); /*0x1008a8bed*/
  a16[2] = v38 + 1; /*0x1008a8bf5*/
  return result; /*0x1008a8bf9*/
}