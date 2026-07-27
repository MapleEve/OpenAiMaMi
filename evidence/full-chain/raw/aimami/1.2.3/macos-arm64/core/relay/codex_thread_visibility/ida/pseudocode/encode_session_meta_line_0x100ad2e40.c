// __ZN13codexmate_lib4core5relay23codex_thread_visibility24encode_session_meta_line @ 0x100ad2e40 | 基线 same-set
size_t *__fastcall codexmate_lib::core::relay::codex_thread_visibility::encode_session_meta_line::h8d981356d3659ec3(
        size_t *a1,
        const void *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6)
{
  size_t v6; // rbx
  __int64 v7; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  size_t v12; // rax
  size_t v14; // [rsp+0h] [rbp-40h] BYREF
  __int64 v15; // [rsp+8h] [rbp-38h]
  size_t v16; // [rsp+10h] [rbp-30h]

  v6 = a3; /*0x100ad2e51*/
  if ( a3 < 0 ) /*0x100ad2e57*/
  {
    v7 = 0; /*0x100ad2e59*/
    goto LABEL_3; /*0x100ad2e59*/
  }
  if ( a3 ) /*0x100ad2e6d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ad2e72*/
    v7 = 1; /*0x100ad2e77*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100ad2e85*/
    if ( !v10 ) /*0x100ad2e8d*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x100ad2e5c*/
    v11 = v10; /*0x100ad2e8f*/
  }
  else
  {
    v11 = 1; /*0x100ad2e97*/
  }
  v14 = v6; /*0x100ad2e9c*/
  v15 = v11; /*0x100ad2ea0*/
  memcpy((void *)v11, a2, v6); /*0x100ad2ea7*/
  v16 = v6; /*0x100ad2eac*/
  if ( *(_BYTE *)(a4 + 41) ) /*0x100ad2eb0*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(&v14, a5, a6); /*0x100ad2ebb*/
    *(_BYTE *)(v15 + v6++) = 13; /*0x100ad2ec4*/
    v16 = v6; /*0x100ad2ecb*/
  }
  if ( *(_BYTE *)(a4 + 40) ) /*0x100ad2ecf*/
  {
    if ( v6 == v14 ) /*0x100ad2eda*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf88ff27bc28ad464(&v14, a5, a6); /*0x100ad2ee0*/
    *(_BYTE *)(v15 + v6) = 10; /*0x100ad2ee9*/
    v16 = v6 + 1; /*0x100ad2ef0*/
  }
  a1[2] = v16; /*0x100ad2ef8*/
  v12 = v14; /*0x100ad2efc*/
  a1[1] = v15; /*0x100ad2f04*/
  *a1 = v12; /*0x100ad2f08*/
  return a1; /*0x100ad2f0e*/
}