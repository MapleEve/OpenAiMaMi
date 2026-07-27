// __ZN13codexmate_lib4core5voice9workspace22default_workspace_file @ 0x100b03340 | 基线 same-set
__int64 __fastcall codexmate_lib::core::voice::workspace::default_workspace_file::he177bb6fcd683de8(
        __int64 a1,
        __int64 a2)
{
  int v2; // edx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax
  void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rax
  void *v13; // rax
  void *v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 result; // rax
  _QWORD v30[20]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD __src[20]; // [rsp+A0h] [rbp-F0h] BYREF
  _QWORD v32[2]; // [rsp+140h] [rbp-50h] BYREF
  __int64 v33; // [rsp+150h] [rbp-40h]
  void *v34; // [rsp+158h] [rbp-38h]
  __int64 v35; // [rsp+160h] [rbp-30h]

  __src[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x100b0335c*/
  LODWORD(__src[1]) = v2; /*0x100b03363*/
  v3 = 0; /*0x100b03369*/
  std::time::SystemTime::duration_since::had059553cab94f96(v30, __src, 0, 0); /*0x100b0337e*/
  if ( !LOBYTE(v30[0]) ) /*0x100b0338a*/
    v3 = v30[1]; /*0x100b0338c*/
  codexmate_lib::core::voice::workspace::default_templates::h5ed037f3f0927880(v32, v3); /*0x100b0339a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v3); /*0x100b0339f*/
  v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(480, 8); /*0x100b033ae*/
  if ( !v4 ) /*0x100b033b6*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 480); /*0x100b0390e*/
  v5 = v4; /*0x100b033bc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(480, 8); /*0x100b033bf*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x100b033ce*/
  if ( !v6 ) /*0x100b033d6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x100b03922*/
  v7 = v6; /*0x100b033dc*/
  v35 = v3; /*0x100b033df*/
  qmemcpy(v6, "builtin-vocab-codex", 19); /*0x100b033fc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x100b03409*/
  v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100b03418*/
  if ( !v8 ) /*0x100b03420*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x100b03936*/
  v9 = v8; /*0x100b03426*/
  *(_QWORD *)v8 = 0x85E5A6B8E5A389E6LL; /*0x100b03433*/
  *(_DWORD *)(v8 + 8) = -1349065077; /*0x100b03437*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1); /*0x100b0343f*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100b0344e*/
  if ( !v10 ) /*0x100b03456*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100b0394a*/
  v11 = v10; /*0x100b0345c*/
  *(_BYTE *)(v10 + 4) = 120; /*0x100b0345f*/
  *(_DWORD *)v10 = 1701080899; /*0x100b03463*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100b03469*/
  v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100b03478*/
  if ( !v12 ) /*0x100b03480*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x100b0395e*/
  *(_QWORD *)((char *)v12 + 22) = 0xB39FE990B0E88796LL; /*0x100b0349a*/
  v12[2] = 0x8796E6ADB8E4849ALL; /*0x100b034a8*/
  v12[1] = 0xE781A7E8B8B8E5B6LL; /*0x100b034b6*/
  *v12 = 0x97E6B0BFE8A38FE5LL; /*0x100b034c4*/
  __src[0] = 19; /*0x100b034c7*/
  __src[1] = v7; /*0x100b034d2*/
  __src[2] = 19; /*0x100b034d9*/
  __src[3] = 12; /*0x100b034e4*/
  __src[4] = v9; /*0x100b034ef*/
  __src[5] = 12; /*0x100b034f6*/
  __src[6] = 5; /*0x100b03501*/
  __src[7] = v11; /*0x100b0350c*/
  __src[8] = 5; /*0x100b03513*/
  LOBYTE(__src[19]) = 0; /*0x100b0351e*/
  __src[9] = 0x8000000000000000LL; /*0x100b03522*/
  __src[12] = 0x8000000000000000LL; /*0x100b03529*/
  __src[15] = 30; /*0x100b03530*/
  __src[16] = v12; /*0x100b03538*/
  __src[17] = 30; /*0x100b0353c*/
  __src[18] = v35; /*0x100b03548*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(30, 1); /*0x100b0354c*/
  v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100b0355b*/
  if ( !v13 ) /*0x100b03563*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100b03972*/
  v14 = v13; /*0x100b03569*/
  qmemcpy(v13, "builtin-vocab-aimami", 20); /*0x100b03585*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x100b03592*/
  v15 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100b035a1*/
  if ( !v15 ) /*0x100b035a9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100b03983*/
  v16 = v15; /*0x100b035af*/
  *(_QWORD *)v15 = 0x92E588A6E5B188E7LL; /*0x100b035bc*/
  *(_BYTE *)(v15 + 8) = -86; /*0x100b035c0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1); /*0x100b035c5*/
  v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100b035d4*/
  if ( !v17 ) /*0x100b035dc*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100b03994*/
  v18 = v17; /*0x100b035e2*/
  *(_WORD *)(v17 + 4) = 26957; /*0x100b035e5*/
  *(_DWORD *)v17 = 1632463169; /*0x100b035eb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100b035f1*/
  v19 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x100b03600*/
  if ( !v19 ) /*0x100b03608*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x100b039a5*/
  *(_QWORD *)((char *)v19 + 7) = 0x84B0E5A098E68D90LL; /*0x100b03618*/
  *v19 = 0x90E58C89E78193E5LL; /*0x100b03626*/
  v30[0] = 20; /*0x100b03629*/
  v30[1] = v14; /*0x100b03634*/
  v30[2] = 20; /*0x100b0363b*/
  v30[3] = 9; /*0x100b03646*/
  v30[4] = v16; /*0x100b03651*/
  v30[5] = 9; /*0x100b03658*/
  v30[6] = 6; /*0x100b03663*/
  v30[7] = v18; /*0x100b0366e*/
  v30[8] = 6; /*0x100b03675*/
  LOBYTE(v30[19]) = 1; /*0x100b03680*/
  v30[9] = 0x8000000000000000LL; /*0x100b03691*/
  v30[12] = 0x8000000000000000LL; /*0x100b03698*/
  v30[15] = 15; /*0x100b0369f*/
  v30[16] = v19; /*0x100b036aa*/
  v30[17] = 15; /*0x100b036b1*/
  v30[18] = v35; /*0x100b036c0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(15, 1); /*0x100b036c7*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x100b036d6*/
  if ( !v20 ) /*0x100b036de*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x100b039b6*/
  qmemcpy(v20, "builtin-vocab-tauri", 19); /*0x100b036ff*/
  v34 = v20; /*0x100b03702*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(19, 1); /*0x100b0370d*/
  v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100b0371c*/
  if ( !v21 ) /*0x100b03724*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100b039c7*/
  v22 = v21; /*0x100b0372a*/
  *(_WORD *)(v21 + 4) = -24943; /*0x100b0372d*/
  *(_DWORD *)v21 = -409433626; /*0x100b03733*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100b03739*/
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100b03748*/
  if ( !v23 ) /*0x100b03750*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100b039d8*/
  v24 = v23; /*0x100b03756*/
  *(_BYTE *)(v23 + 4) = 105; /*0x100b03759*/
  *(_DWORD *)v23 = 1920295252; /*0x100b0375d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100b03763*/
  v25 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x100b03772*/
  if ( !v25 ) /*0x100b0377a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21); /*0x100b039e9*/
  v26 = v25; /*0x100b03780*/
  *(_QWORD *)((char *)v25 + 13) = 0xB69EE686A1E6A29DLL; /*0x100b0378d*/
  v25[1] = 0xE6A29DE98CA1E6B0LL; /*0x100b0379c*/
  *v25 = 0x8FE5B3B9E5A8B7E8LL; /*0x100b037ab*/
  memcpy((void *)v5, __src, 0xA0u); /*0x100b037be*/
  memcpy((void *)(v5 + 160), v30, 0xA0u); /*0x100b037d9*/
  *(_QWORD *)(v5 + 320) = 19; /*0x100b037de*/
  *(_QWORD *)(v5 + 328) = v34; /*0x100b037ed*/
  *(_QWORD *)(v5 + 336) = 19; /*0x100b037f4*/
  *(_QWORD *)(v5 + 344) = 6; /*0x100b037ff*/
  *(_QWORD *)(v5 + 352) = v22; /*0x100b0380a*/
  *(_QWORD *)(v5 + 360) = 6; /*0x100b03811*/
  *(_QWORD *)(v5 + 368) = 5; /*0x100b0381c*/
  *(_QWORD *)(v5 + 376) = v24; /*0x100b03827*/
  *(_QWORD *)(v5 + 384) = 5; /*0x100b0382e*/
  *(_QWORD *)(v5 + 392) = 0x8000000000000000LL; /*0x100b03843*/
  *(_QWORD *)(v5 + 416) = 0x8000000000000000LL; /*0x100b0384a*/
  *(_QWORD *)(v5 + 440) = 21; /*0x100b03851*/
  *(_QWORD *)(v5 + 448) = v26; /*0x100b0385c*/
  *(_QWORD *)(v5 + 456) = 21; /*0x100b03863*/
  v27 = v35; /*0x100b0386e*/
  *(_QWORD *)(v5 + 464) = v35; /*0x100b03872*/
  *(_BYTE *)(v5 + 472) = 0; /*0x100b03879*/
  *(_DWORD *)(a1 + 136) = 1; /*0x100b03880*/
  *(_QWORD *)(a1 + 128) = v27; /*0x100b0388b*/
  v28 = v32[1]; /*0x100b03896*/
  *(_QWORD *)a1 = v32[0]; /*0x100b0389a*/
  *(_QWORD *)(a1 + 8) = v28; /*0x100b0389d*/
  result = v33; /*0x100b038a1*/
  *(_QWORD *)(a1 + 16) = v33; /*0x100b038a5*/
  *(_QWORD *)(a1 + 24) = 3; /*0x100b038a9*/
  *(_QWORD *)(a1 + 32) = v5; /*0x100b038b1*/
  *(_QWORD *)(a1 + 40) = 3; /*0x100b038b5*/
  *(_QWORD *)(a1 + 48) = 0; /*0x100b038bd*/
  *(_QWORD *)(a1 + 56) = 8; /*0x100b038c5*/
  *(_QWORD *)(a1 + 64) = 0; /*0x100b038cd*/
  *(_QWORD *)(a1 + 72) = 0; /*0x100b038d5*/
  *(_QWORD *)(a1 + 80) = 8; /*0x100b038dd*/
  *(_QWORD *)(a1 + 88) = 0; /*0x100b038e5*/
  *(_BYTE *)(a1 + 96) = 6; /*0x100b038ed*/
  return result; /*0x100b038f2*/
}