// codexmate_lib::core::relay::codex_catalog::full_reasoning_levels::heb614757476bdf6a
// EA 0x100acfc30, size 4666B (0x123a), basic_blocks 75, cyclomatic_complexity 20
// macOS, AiMaMi 1.2.6 — 完整反编译，无截断（红线20核验：本次直接调用 decompile() 工具，
// 非 analyze_function 预览字段；code 字段完整长度 26077 字符，无 "[N chars total]" 截断标记）
//
// 修复记录：此前 0003-full_reasoning_levels_0x100acfc30_TRUNCATED.md 误把 analyze_function
// 的字段预览当作"decompile 在 635 字符处截断"的依据，并编造了"与官方6档(low/medium/high/
// xhigh/max/ultra)吻合"的结论。重新用 decompile() 工具直接获取，证实：
//   1) decompile() 本身可完整返回该函数体（无截断），此前的"635字符截断"结论不成立；
//   2) 函数体内只构建了 4 个档位（low/medium/high/xhigh），BTreeMap::entry 调用 8 次、
//      insert_entry 调用 8 次（每档 2 次：一次插入 "effort" 键、一次插入 "description" 键），
//      不存在 max/ultra 两档；此前"6档吻合"的结论是编造，本文件已删除该结论。
//   3) 档位字面量在本函数体内并非以 qmemcpy 字符串常量形式出现，而是被编译器内联为
//      packed 整数立即数写入（<=8字节的短字符串优化），逐一解码后确认为：
//      key="effort"（6字节，4次复用）；value="low"(3B)/"medium"(6B)/"high"(4B)/"xhigh"(5B)。

__int64 __fastcall codexmate_lib::core::relay::codex_catalog::full_reasoning_levels::heb614757476bdf6a(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __m256i *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __m256i *v13; // rsi
  void *v14; // rax
  void *v15; // rax
  __m256i *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m256i *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  __m256i *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __m256i *v30; // rsi
  void *v31; // rax
  void *v32; // rax
  __m256i *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __m256i *v38; // rsi
  __int64 v39; // r12
  __int64 v40; // rax
  _DWORD *v41; // rax
  __m256i *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __m256i *v47; // rsi
  void *v48; // rax
  void *v49; // rax
  __m256i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __m256i *v55; // rsi
  __int64 v56; // r12
  __int64 v57; // rax
  __int64 v58; // rax
  __m256i *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __m256i *v64; // rsi
  void *v65; // rax
  void *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 result; // rax
  __int64 v75; // [rsp+18h] [rbp-188h]
  __int64 v76; // [rsp+20h] [rbp-180h]
  __int64 v77; // [rsp+28h] [rbp-178h]
  __int64 v78; // [rsp+30h] [rbp-170h]
  __int128 v79; // [rsp+38h] [rbp-168h] BYREF
  __int64 v80; // [rsp+48h] [rbp-158h]
  __int64 v81; // [rsp+50h] [rbp-150h] BYREF
  __int64 v82; // [rsp+58h] [rbp-148h]
  __int64 v83; // [rsp+60h] [rbp-140h]
  __int64 v84; // [rsp+68h] [rbp-138h]
  __int64 v85; // [rsp+70h] [rbp-130h] BYREF
  __int64 v86; // [rsp+78h] [rbp-128h]
  __int64 v87; // [rsp+80h] [rbp-120h]
  __int64 v88; // [rsp+88h] [rbp-118h] BYREF
  __int64 v89; // [rsp+90h] [rbp-110h]
  __int64 v90; // [rsp+98h] [rbp-108h]
  __int64 v91; // [rsp+A0h] [rbp-100h]
  __int64 v92; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-F0h]
  _DWORD *v94; // [rsp+B8h] [rbp-E8h]
  __int64 v95; // [rsp+C0h] [rbp-E0h]
  __m256i v96; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+E8h] [rbp-B8h]
  __int64 v98; // [rsp+F0h] [rbp-B0h]
  __int64 v99; // [rsp+F8h] [rbp-A8h]
  __m256i v100; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+120h] [rbp-80h]
  __int64 v102; // [rsp+128h] [rbp-78h]
  __int64 v103; // [rsp+130h] [rbp-70h]
  __int64 v104; // [rsp+138h] [rbp-68h] BYREF
  __int64 v105; // [rsp+140h] [rbp-60h]
  __int64 v106; // [rsp+148h] [rbp-58h]
  __int64 v107; // [rsp+150h] [rbp-50h]
  __int64 v108; // [rsp+158h] [rbp-48h]
  __int64 v109; // [rsp+160h] [rbp-40h]
  _DWORD *v110; // [rsp+168h] [rbp-38h]
  __int64 v111; // [rsp+170h] [rbp-30h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v3 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 8);
  if ( !v3 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 128);
  v4 = v3;
  v81 = 0;
  v83 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(128, 8);
  v5 = 6;
  v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v6 )
    goto LABEL_52;
  *(_WORD *)(v6 + 4) = 29810;      // packed "effort"[4:6]
  *(_DWORD *)v6 = 1868981861;      // packed "effort"[0:4] -> 解码后为 "effort"
  v88 = 6;
  v89 = v6;
  v90 = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v7 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v7 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 3);
  *(_BYTE *)(v7 + 2) = 119;        // 解码后 value="low"（第1档）
  *(_WORD *)v7 = 28524;
  LOBYTE(v108) = 3;
  v109 = 3;
  v110 = (_DWORD *)v7;
  v111 = 3;
  v8 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v81, &v88);   // entry #1: "effort"
  if ( __OFSUB__(0, v100.i64[0]) )
  {
    v9 = v100.i64[1];
    v10 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v11 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v11;
    *(_QWORD *)(v100.i64[1] + v10 + 24) = v111;
    *(_QWORD *)(v9 + v10 + 16) = v110;
    v12 = v108;
    v13 = (__m256i *)v109;
    *(_QWORD *)(v9 + v10 + 8) = v109;
    *(_QWORD *)(v9 + v10) = v12;
    if ( (_BYTE)v104 != 6 )
    {
      v8 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v8 = (__m256i *)&v104;
    v13 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #1
      &v104, &v96, &v92);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v13);
  v5 = 11;
  v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v14 )
LABEL_52:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5);
  qmemcpy(v14, "description", 11);
  v88 = 11;
  v89 = (__int64)v14;
  v90 = 11;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
  if ( !v15 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
  qmemcpy(v15, "Fast responses with lighter reasoning", 37);   // low 档描述
  LOBYTE(v108) = 3;
  v109 = 37;
  v110 = v15;
  v111 = 37;
  v16 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v81, &v88);   // entry #2: "description"
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v17 = v100.i64[1];
    v18 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v19 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v19;
    *(_QWORD *)(v100.i64[1] + v18 + 24) = v111;
    *(_QWORD *)(v17 + v18 + 16) = v110;
    v20 = v108;
    v21 = (__m256i *)v109;
    *(_QWORD *)(v17 + v18 + 8) = v109;
    *(_QWORD *)(v17 + v18) = v20;
    if ( (_BYTE)v104 != 6 )
    {
      v16 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v16 = (__m256i *)&v104;
    v21 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #2
      &v104, &v96, &v92);
  }
  v76 = v81;
  v77 = v82;
  v78 = v83;
  LOBYTE(v75) = 5;
  v85 = 0;
  v87 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v21);
  v22 = 6;
  v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v23 )
    goto LABEL_53;
  *(_WORD *)(v23 + 4) = 29810;
  *(_DWORD *)v23 = 1868981861;    // 再次构建 "effort" 键（第2档）
  v88 = 6;
  v89 = v23;
  v90 = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v24 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6);
  *(_WORD *)(v24 + 4) = 28021;
  *(_DWORD *)v24 = 1768187245;    // 解码后 value="medium"（第2档）
  LOBYTE(v108) = 3;
  v109 = 6;
  v110 = (_DWORD *)v24;
  v111 = 6;
  v25 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v85, &v88);   // entry #3
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v26 = v100.i64[1];
    v27 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v28 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v28;
    *(_QWORD *)(v100.i64[1] + v27 + 24) = v111;
    *(_QWORD *)(v26 + v27 + 16) = v110;
    v29 = v108;
    v30 = (__m256i *)v109;
    *(_QWORD *)(v26 + v27 + 8) = v109;
    *(_QWORD *)(v26 + v27) = v29;
    if ( (_BYTE)v104 != 6 )
    {
      v25 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v25 = (__m256i *)&v104;
    v30 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #3
      &v104, &v96, &v92);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v30);
  v22 = 11;
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v31 )
LABEL_53:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22);
  qmemcpy(v31, "description", 11);
  v88 = 11;
  v89 = (__int64)v31;
  v90 = 11;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
  v32 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(53, 1);
  if ( !v32 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 53);
  qmemcpy(v32, "Balances speed and reasoning depth for everyday tasks", 53);   // medium 档描述
  LOBYTE(v108) = 3;
  v109 = 53;
  v110 = v32;
  v111 = 53;
  v33 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v85, &v88);   // entry #4
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v34 = v100.i64[1];
    v35 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v36 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v36;
    *(_QWORD *)(v100.i64[1] + v35 + 24) = v111;
    *(_QWORD *)(v34 + v35 + 16) = v110;
    v37 = v108;
    v38 = (__m256i *)v109;
    *(_QWORD *)(v34 + v35 + 8) = v109;
    *(_QWORD *)(v34 + v35) = v37;
    if ( (_BYTE)v104 != 6 )
    {
      v33 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v33 = (__m256i *)&v104;
    v38 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #4
      &v104, &v96, &v92);
  }
  v82 = v85;
  v83 = v86;
  v84 = v87;
  LOBYTE(v81) = 5;
  v85 = 0;
  v87 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33, v38);
  v39 = 6;
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v40 )
    goto LABEL_54;
  *(_WORD *)(v40 + 4) = 29810;
  *(_DWORD *)v40 = 1868981861;    // "effort" 键（第3档）
  v88 = 6;
  v89 = v40;
  v90 = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v41 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v41 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v41 = 1751607656;   // 解码后 value="high"（第3档）
  LOBYTE(v108) = 3;
  v109 = 4;
  v110 = v41;
  v111 = 4;
  v42 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v85, &v88);   // entry #5
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v43 = v100.i64[1];
    v44 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v45 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v45;
    *(_QWORD *)(v100.i64[1] + v44 + 24) = v111;
    *(_QWORD *)(v43 + v44 + 16) = v110;
    v46 = v108;
    v47 = (__m256i *)v109;
    *(_QWORD *)(v43 + v44 + 8) = v109;
    *(_QWORD *)(v43 + v44) = v46;
    if ( (_BYTE)v104 != 6 )
    {
      v42 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v42 = (__m256i *)&v104;
    v47 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #5
      &v104, &v96, &v92);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v42, v47);
  v39 = 11;
  v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v48 )
LABEL_54:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v39);
  qmemcpy(v48, "description", 11);
  v88 = 11;
  v89 = (__int64)v48;
  v90 = 11;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
  v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(44, 1);
  if ( !v49 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 44);
  qmemcpy(v49, "Greater reasoning depth for complex problems", 44);   // high 档描述
  LOBYTE(v108) = 3;
  v109 = 44;
  v110 = v49;
  v111 = 44;
  v50 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v85, &v88);   // entry #6
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v51 = v100.i64[1];
    v52 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v53 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v53;
    *(_QWORD *)(v100.i64[1] + v52 + 24) = v111;
    *(_QWORD *)(v51 + v52 + 16) = v110;
    v54 = v108;
    v55 = (__m256i *)v109;
    *(_QWORD *)(v51 + v52 + 8) = v109;
    *(_QWORD *)(v51 + v52) = v54;
    if ( (_BYTE)v104 != 6 )
    {
      v50 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v50 = (__m256i *)&v104;
    v55 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #6
      &v104, &v96, &v92);
  }
  v89 = v85;
  v90 = v86;
  v91 = v87;
  LOBYTE(v88) = 5;
  *(_QWORD *)&v79 = 0;
  v80 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v50, v55);
  v56 = 6;
  v57 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v57 )
    goto LABEL_55;
  *(_WORD *)(v57 + 4) = 29810;
  *(_DWORD *)v57 = 1868981861;    // "effort" 键（第4档）
  v85 = 6;
  v86 = v57;
  v87 = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v58 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5);
  *(_BYTE *)(v58 + 4) = 104;
  *(_DWORD *)v58 = 1734961272;    // 解码后 value="xhigh"（第4档，也是本函数构建的最后一档）
  LOBYTE(v108) = 3;
  v109 = 5;
  v110 = (_DWORD *)v58;
  v111 = 5;
  v59 = &v100;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v79, &v85);   // entry #7
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v60 = v100.i64[1];
    v61 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v62 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v62;
    *(_QWORD *)(v100.i64[1] + v61 + 24) = v111;
    *(_QWORD *)(v60 + v61 + 16) = v110;
    v63 = v108;
    v64 = (__m256i *)v109;
    *(_QWORD *)(v60 + v61 + 8) = v109;
    *(_QWORD *)(v60 + v61) = v63;
    if ( (_BYTE)v104 != 6 )
    {
      v59 = (__m256i *)&v104;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
    }
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    v59 = (__m256i *)&v104;
    v64 = &v96;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #7
      &v104, &v96, &v92);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v64);
  v56 = 11;
  v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v65 )
LABEL_55:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v56);
  qmemcpy(v65, "description", 11);
  v85 = 11;
  v86 = (__int64)v65;
  v87 = 11;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
  v66 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1);
  if ( !v66 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
  qmemcpy(v66, "Extra high reasoning depth for complex problems", 47);   // xhigh 档描述
  LOBYTE(v108) = 3;
  v109 = 47;
  v110 = v66;
  v111 = 47;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h5826f4050b3c3dd4(&v100, &v79, &v85);   // entry #8（最后一次）
  if ( v100.i64[0] == 0x8000000000000000LL )
  {
    v67 = v100.i64[1];
    v68 = 32 * v100.i64[3];
    v107 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 24);
    v106 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 16);
    v69 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3]);
    v105 = *(_QWORD *)(v100.i64[1] + 32 * v100.i64[3] + 8);
    v104 = v69;
    *(_QWORD *)(v100.i64[1] + v68 + 24) = v111;
    *(_QWORD *)(v67 + v68 + 16) = v110;
    v70 = v108;
    *(_QWORD *)(v67 + v68 + 8) = v109;
    *(_QWORD *)(v67 + v68) = v70;
    if ( (_BYTE)v104 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfffe558b8b11a720(&v104);
  }
  else
  {
    v99 = v103;
    v98 = v102;
    v97 = v101;
    v96 = v100;
    v95 = v111;
    v94 = v110;
    v93 = v109;
    v92 = v108;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::hf604af26968d5acf(   // insert_entry #8（最后一次）
      &v104, &v96, &v92);
  }
  *(__int128 *)((char *)v96.i128 + 7) = v79;
  *(__int64 *)((char *)&v96.i64[2] + 7) = v80;
  *(_QWORD *)(v4 + 24) = v78;
  *(_QWORD *)(v4 + 16) = v77;
  *(_QWORD *)(v4 + 8) = v76;
  *(_QWORD *)v4 = v75;
  *(_QWORD *)(v4 + 56) = v84;
  *(_QWORD *)(v4 + 48) = v83;
  v71 = v81;
  *(_QWORD *)(v4 + 40) = v82;
  *(_QWORD *)(v4 + 32) = v71;
  v72 = v89;
  *(_QWORD *)(v4 + 64) = v88;
  *(_QWORD *)(v4 + 72) = v72;
  *(_QWORD *)(v4 + 80) = v90;
  *(_QWORD *)(v4 + 88) = v91;
  *(_BYTE *)(v4 + 96) = 5;
  v73 = v96.i64[1];
  *(_QWORD *)(v4 + 97) = v96.i64[0];
  *(_OWORD *)(v4 + 105) = __PAIR128__(v96.u64[2], v73);
  result = *(__int64 *)((char *)&v96.i64[2] + 7);
  *(_QWORD *)(v4 + 120) = *(__int64 *)((char *)&v96.i64[2] + 7);
  *(_QWORD *)(a1 + 8) = 4;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 4;
  *(_BYTE *)a1 = 4;
  return result;
}

/*
真实行为结论（基于完整反编译逐行核对，非摘要推断）：

full_reasoning_levels 被 make_relay_model_info（唯一调用方）调用，构建一个含 4 个条目的
serde_json::Value（BTreeMap 序列化而来，最终以数组/Vec形式写入 a1 输出参数，tag=4，len=4——
对应 4 个 "{effort, description}" 记录），依次为：
  1. low    -> "Fast responses with lighter reasoning"
  2. medium -> "Balances speed and reasoning depth for everyday tasks"
  3. high   -> "Greater reasoning depth for complex problems"
  4. xhigh  -> "Extra high reasoning depth for complex problems"

本函数体内共调用 BTreeMap::entry 8 次、VacantEntry::insert_entry 8 次（每档 2 次：
"effort" 键 + "description" 键），不存在第 5/6 档。

【重要修正】此前 0003_TRUNCATED.md 的结论"与 official_reasoning_profile 及 Windows 内嵌
JSON 的 6 档 (low/medium/high/xhigh/max/ultra) 一致"不成立——本函数只构建 4 档，
max/ultra 不在本函数体内出现。若 official_reasoning_profile 或 Windows 内嵌 JSON 确实
呈现 6 档（该结论来自其他函数/平台的独立证据，未在本文件重新核验），说明
full_reasoning_levels 只是 6 档全集中的一个子集/早期版本，两者不能被简单等同，
需要在消费侧交叉核对而非假设一致。

档位字面量在本函数内并非以字符串常量（qmemcpy）形式出现（"description" 键除外，
11 字节走 qmemcpy），而是 <=8 字节的短字符串被编译器优化为整数立即数直接写入内存
（Rust/LLVM 对定长小字节数组的常见优化）；本次通过静态解码这些立即数还原出真实
的 ASCII 内容，而非凭猜测。
*/
