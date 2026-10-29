// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::anthropic_trace::summary::hbcde4eb59603bfe2; addr: 0x1005db2a0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:20Z
// [release-semantic-writeback <审计会话> 0x1005db2a0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [protocol-content / current-release-content] 模块级结论（本地址作为调用/转换链证据，不外推为单函数完整语义）：唯一同名量级异常TextCounts::serialize当前输出chars、ufffd两个字段。TextCounts::add按Unicode字符计数并额外统计U+FFFD，饱和到2^53-1；seri
// alize的两个实际调用点都在anthropic_trace::summary，summary由finish/Inner::drop调用，Inner::emit最终流向debug_log::app_event。已证实本次观测的消费者是诊断计数，不把它误称请求长度/token计费或工具限制。pre完整serialize正文确未在已查制品中找到，因此不能判字段/
// 错误语义与pre完全相同。
// 副作用边界：{"db_mutations": 0, "db_saves": 0, "pre_instance_calls": 0, "shared_sot_writes": 0, "source_rule_config_writes": 0, "runtime_user_data_operations": 0, "observed_target_effe
// cts": ["HTTP request/response and live SSE streaming", "diagnostic debug_log::app_event", "compat setter configuration persist_with_commit (referenced shared dependency; not execut
// ed)"], "destructive_target_operations_executed": 0, "history_reject_guards_do_not_write_rollout": true}
// 限制：pre未完整逐体对照则delta unverified；非全模块闭合。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
__int64 __fastcall codexmate_lib::core::relay::anthropic_trace::summary::hbcde4eb59603bfe2(
        __int64 a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        void *a5,
        size_t a6)
{
  __int64 v9; // r12
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rdx
  void *v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rdx
  signed __int64 v23; // rbx
  __int64 v24; // r13
  const void *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rdx
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  void *v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  void *v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  void *v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  void *v58; // rax
  char v59; // al
  __int64 v60; // rdx
  _DWORD *v61; // rax
  __int64 v62; // rdx
  signed __int64 v63; // rbx
  __int64 v64; // r13
  const void *v65; // r15
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // rdx
  _DWORD *v69; // rax
  __int64 v70; // rdx
  _DWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rbx
  _QWORD *v74; // rax
  __int64 v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  void *v79; // rax
  unsigned __int64 v80; // rbx
  __int64 v81; // rdx
  void *v82; // rax
  unsigned __int64 v83; // rax
  bool v84; // cf
  unsigned __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 result; // rax
  _QWORD v88[3]; // [rsp+48h] [rbp-E8h] BYREF
  void *__src; // [rsp+60h] [rbp-D0h]
  __int64 v90; // [rsp+68h] [rbp-C8h]
  size_t __n; // [rsp+70h] [rbp-C0h]
  _QWORD v92[2]; // [rsp+78h] [rbp-B8h] BYREF
  size_t v93; // [rsp+88h] [rbp-A8h]
  _QWORD v94[2]; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-90h]
  __int64 v96; // [rsp+A8h] [rbp-88h]
  size_t v97; // [rsp+B0h] [rbp-80h] BYREF
  size_t v98; // [rsp+B8h] [rbp-78h]
  unsigned __int64 v99; // [rsp+C0h] [rbp-70h]
  size_t v100; // [rsp+C8h] [rbp-68h]
  __int64 v101; // [rsp+D0h] [rbp-60h] BYREF
  _DWORD *v102; // [rsp+D8h] [rbp-58h]
  __int64 v103; // [rsp+E0h] [rbp-50h]
  size_t v104; // [rsp+E8h] [rbp-48h] BYREF
  size_t v105; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v106; // [rsp+F8h] [rbp-38h]
  size_t v107; // [rsp+100h] [rbp-30h]

  __src = a5; /*0x1005db2b7*/
  v96 = a2; /*0x1005db2c4*/
  v90 = a1; /*0x1005db2cb*/
  v94[0] = 0; /*0x1005db2d2*/
  v95 = 0; /*0x1005db2dd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1005db2e8*/
  v9 = 7; /*0x1005db2ed*/
  v10 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1005db2fd*/
  if ( !v10 ) /*0x1005db305*/
    goto LABEL_101; /*0x1005db305*/
  *(_DWORD *)((char *)v10 + 3) = 1701670755; /*0x1005db30e*/
  *v10 = 1668576623; /*0x1005db315*/
  v101 = 7; /*0x1005db31b*/
  v102 = v10; /*0x1005db323*/
  v103 = 7; /*0x1005db327*/
  if ( a4 < 0 ) /*0x1005db332*/
  {
    v12 = 0; /*0x1005db334*/
    goto LABEL_4; /*0x1005db334*/
  }
  if ( a4 ) /*0x1005db347*/
  {
    __n = a6; /*0x1005db349*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1, v11); /*0x1005db350*/
    v12 = 1; /*0x1005db355*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1005db363*/
    if ( !v13 ) /*0x1005db36b*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, a4); /*0x1005db337*/
    v14 = v13; /*0x1005db36d*/
    a6 = __n; /*0x1005db370*/
  }
  else
  {
    v14 = 1; /*0x1005db379*/
  }
  memcpy((void *)v14, a3, a4); /*0x1005db388*/
  LOBYTE(v104) = 3; /*0x1005db38d*/
  v105 = a4; /*0x1005db391*/
  v106 = v14; /*0x1005db395*/
  v107 = a4; /*0x1005db399*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db3b0*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db3b9*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db3bf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v15); /*0x1005db3c4*/
  v9 = 11; /*0x1005db3c9*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005db3d9*/
  if ( !v16 ) /*0x1005db3e1*/
    goto LABEL_101; /*0x1005db3e1*/
  qmemcpy(v16, "error_class", 11); /*0x1005db3f4*/
  v101 = 11; /*0x1005db3ff*/
  v102 = v16; /*0x1005db407*/
  v103 = 11; /*0x1005db40b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1, v17); /*0x1005db413*/
  v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a6, 1); /*0x1005db420*/
  if ( !v18 ) /*0x1005db428*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a6); /*0x1005dc145*/
  v19 = (unsigned __int64)v18; /*0x1005db42e*/
  memcpy(v18, __src, a6); /*0x1005db43e*/
  LOBYTE(v104) = 3; /*0x1005db443*/
  v105 = a6; /*0x1005db447*/
  v106 = v19; /*0x1005db44b*/
  v107 = a6; /*0x1005db44f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db466*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db46f*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db475*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v20); /*0x1005db47a*/
  v9 = 10; /*0x1005db47f*/
  v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1005db48f*/
  if ( !v21 ) /*0x1005db497*/
    goto LABEL_101; /*0x1005db497*/
  qmemcpy(v21, "error_kind", 10); /*0x1005db4aa*/
  v101 = 10; /*0x1005db4b4*/
  v102 = v21; /*0x1005db4bc*/
  v103 = 10; /*0x1005db4c0*/
  v23 = *(_QWORD *)(v96 + 168); /*0x1005db4cf*/
  if ( v23 < 0 ) /*0x1005db4d9*/
  {
    v24 = 0; /*0x1005db4db*/
    goto LABEL_18; /*0x1005db4db*/
  }
  v25 = *(const void **)(v96 + 160); /*0x1005db4ee*/
  if ( v23 ) /*0x1005db4f5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1, v22); /*0x1005db4f7*/
    v24 = 1; /*0x1005db4fc*/
    v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v23, 1); /*0x1005db50a*/
    if ( !v26 ) /*0x1005db512*/
LABEL_18:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, v23); /*0x1005db4de*/
    v27 = v26; /*0x1005db514*/
  }
  else
  {
    v27 = 1; /*0x1005db519*/
  }
  memcpy((void *)v27, v25, v23); /*0x1005db528*/
  LOBYTE(v104) = 3; /*0x1005db52d*/
  v105 = v23; /*0x1005db531*/
  v106 = v27; /*0x1005db535*/
  v107 = v23; /*0x1005db539*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db550*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db559*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db55f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v28); /*0x1005db564*/
  v9 = 8; /*0x1005db569*/
  v29 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1005db579*/
  if ( !v29 ) /*0x1005db581*/
    goto LABEL_101; /*0x1005db581*/
  *v29 = 0x7374706D65747461LL; /*0x1005db591*/
  v101 = 8; /*0x1005db594*/
  v102 = v29; /*0x1005db59c*/
  v103 = 8; /*0x1005db5a0*/
  v30 = *(unsigned int *)(v96 + 280); /*0x1005db5af*/
  LOBYTE(v104) = 2; /*0x1005db5b5*/
  v105 = 0; /*0x1005db5b9*/
  v106 = v30; /*0x1005db5c1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db5d8*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db5e1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db5e7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v31); /*0x1005db5ec*/
  v9 = 6; /*0x1005db5f1*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005db601*/
  if ( !v32 ) /*0x1005db609*/
    goto LABEL_101; /*0x1005db609*/
  *(_WORD *)(v32 + 4) = 29556; /*0x1005db60f*/
  *(_DWORD *)v32 = 1852143205; /*0x1005db615*/
  v101 = 6; /*0x1005db61b*/
  v102 = (_DWORD *)v32; /*0x1005db623*/
  v103 = 6; /*0x1005db627*/
  v33 = *(_QWORD *)(v96 + 176); /*0x1005db636*/
  LOBYTE(v104) = 2; /*0x1005db63d*/
  v105 = 0; /*0x1005db641*/
  v106 = v33; /*0x1005db649*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db660*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db669*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db66f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v34); /*0x1005db674*/
  v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1005db683*/
  if ( !v35 ) /*0x1005db68b*/
    goto LABEL_101; /*0x1005db68b*/
  *(_WORD *)(v35 + 4) = 29537; /*0x1005db691*/
  *(_DWORD *)v35 = 1953260900; /*0x1005db697*/
  v101 = 6; /*0x1005db69d*/
  v102 = (_DWORD *)v35; /*0x1005db6a5*/
  v103 = 6; /*0x1005db6a9*/
  v36 = *(_QWORD *)(v96 + 184); /*0x1005db6b8*/
  LOBYTE(v104) = 2; /*0x1005db6bf*/
  v105 = 0; /*0x1005db6c3*/
  v106 = v36; /*0x1005db6cb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db6e2*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db6eb*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db6f1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v37); /*0x1005db6f6*/
  v9 = 12; /*0x1005db6fb*/
  v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005db70b*/
  if ( !v38 ) /*0x1005db713*/
    goto LABEL_101; /*0x1005db713*/
  qmemcpy(v38, "delta_counts", 12); /*0x1005db726*/
  v101 = 12; /*0x1005db731*/
  v102 = v38; /*0x1005db739*/
  v103 = 12; /*0x1005db73d*/
  serde_json::value::to_value::h73b4db2b8d258920(&v104, v96 + 192); /*0x1005db757*/
  if ( (_BYTE)v104 == 6 ) /*0x1005db760*/
  {
    v97 = v105; /*0x1005dc0d8*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dc0fa*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
      43,
      &v97,
      &off_101AACF78,
      &off_101AAC6E0);
  }
  v100 = v107; /*0x1005db76a*/
  v99 = v106; /*0x1005db772*/
  v98 = v105; /*0x1005db77e*/
  v97 = v104; /*0x1005db782*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v104, v94, &v101, &v97); /*0x1005db799*/
  if ( (_BYTE)v104 != 6 ) /*0x1005db7a2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v104); /*0x1005db7a8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v94, v39); /*0x1005db7ad*/
  v9 = 5; /*0x1005db7b2*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1005db7c2*/
  if ( !v40 ) /*0x1005db7ca*/
    goto LABEL_101; /*0x1005db7ca*/
  *(_BYTE *)(v40 + 4) = 115; /*0x1005db7d0*/
  *(_DWORD *)v40 = 1702132066; /*0x1005db7d4*/
  v101 = 5; /*0x1005db7da*/
  v102 = (_DWORD *)v40; /*0x1005db7e2*/
  v103 = 5; /*0x1005db7e6*/
  v41 = *(_QWORD *)(v96 + 240); /*0x1005db7f5*/
  LOBYTE(v104) = 2; /*0x1005db7fc*/
  v105 = 0; /*0x1005db800*/
  v106 = v41; /*0x1005db808*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db81f*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db828*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db82e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v42); /*0x1005db833*/
  v9 = 13; /*0x1005db838*/
  v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1005db848*/
  if ( !v43 ) /*0x1005db850*/
    goto LABEL_101; /*0x1005db850*/
  qmemcpy(v43, "first_byte_ms", 13); /*0x1005db86e*/
  v101 = 13; /*0x1005db871*/
  v102 = v43; /*0x1005db879*/
  v103 = 13; /*0x1005db87d*/
  v44 = *(_QWORD *)(v96 + 8); /*0x1005db88f*/
  LOBYTE(v104) = 2 * *(_BYTE *)v96; /*0x1005db895*/
  v105 = 0; /*0x1005db898*/
  v106 = v44; /*0x1005db8a0*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db8b7*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db8c0*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db8c6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v45); /*0x1005db8cb*/
  v9 = 12; /*0x1005db8d0*/
  v46 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005db8e0*/
  if ( !v46 ) /*0x1005db8e8*/
    goto LABEL_101; /*0x1005db8e8*/
  qmemcpy(v46, "last_byte_ms", 12); /*0x1005db8f8*/
  v101 = 12; /*0x1005db902*/
  v102 = v46; /*0x1005db90a*/
  v103 = 12; /*0x1005db90e*/
  v47 = *(_QWORD *)(v96 + 24); /*0x1005db921*/
  LOBYTE(v104) = 2 * *(_BYTE *)(v96 + 16); /*0x1005db927*/
  v105 = 0; /*0x1005db92a*/
  v106 = v47; /*0x1005db932*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db949*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db952*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db958*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v48); /*0x1005db95d*/
  v9 = 10; /*0x1005db962*/
  v49 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1005db972*/
  if ( !v49 ) /*0x1005db97a*/
    goto LABEL_101; /*0x1005db97a*/
  qmemcpy(v49, "max_gap_ms", 10); /*0x1005db98a*/
  v101 = 10; /*0x1005db993*/
  v102 = v49; /*0x1005db99b*/
  v103 = 10; /*0x1005db99f*/
  v50 = *(_QWORD *)(v96 + 248); /*0x1005db9ae*/
  LOBYTE(v104) = 2; /*0x1005db9b5*/
  v105 = 0; /*0x1005db9b9*/
  v106 = v50; /*0x1005db9c1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005db9d8*/
  if ( (_BYTE)v97 != 6 ) /*0x1005db9e1*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005db9e7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v51); /*0x1005db9ec*/
  v9 = 12; /*0x1005db9f1*/
  v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005dba01*/
  if ( !v52 ) /*0x1005dba09*/
    goto LABEL_101; /*0x1005dba09*/
  qmemcpy(v52, "block_starts", 12); /*0x1005dba19*/
  v101 = 12; /*0x1005dba23*/
  v102 = v52; /*0x1005dba2b*/
  v103 = 12; /*0x1005dba2f*/
  v53 = *(_QWORD *)(v96 + 256); /*0x1005dba3e*/
  LOBYTE(v104) = 2; /*0x1005dba45*/
  v105 = 0; /*0x1005dba49*/
  v106 = v53; /*0x1005dba51*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dba68*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dba71*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dba77*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v54); /*0x1005dba7c*/
  v9 = 11; /*0x1005dba81*/
  v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1005dba91*/
  if ( !v55 ) /*0x1005dba99*/
    goto LABEL_101; /*0x1005dba99*/
  qmemcpy(v55, "block_stops", 11); /*0x1005dba9f*/
  v101 = 11; /*0x1005dbaa9*/
  v102 = v55; /*0x1005dbab1*/
  v103 = 11; /*0x1005dbab5*/
  v56 = *(_QWORD *)(v96 + 264); /*0x1005dbac4*/
  LOBYTE(v104) = 2; /*0x1005dbacb*/
  v105 = 0; /*0x1005dbacf*/
  v106 = v56; /*0x1005dbad7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dbaee*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dbaf7*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dbafd*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v57); /*0x1005dbb02*/
  v9 = 12; /*0x1005dbb07*/
  v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1005dbb17*/
  if ( !v58 ) /*0x1005dbb1f*/
    goto LABEL_101; /*0x1005dbb1f*/
  qmemcpy(v58, "message_stop", 12); /*0x1005dbb2f*/
  v101 = 12; /*0x1005dbb39*/
  v102 = v58; /*0x1005dbb41*/
  v103 = 12; /*0x1005dbb45*/
  v59 = *(_BYTE *)(v96 + 285); /*0x1005dbb54*/
  LOBYTE(v104) = 1; /*0x1005dbb5b*/
  BYTE1(v104) = v59; /*0x1005dbb5f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dbb75*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dbb7e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dbb84*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v60); /*0x1005dbb89*/
  v9 = 4; /*0x1005dbb8e*/
  v61 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1005dbb9e*/
  if ( !v61 ) /*0x1005dbba6*/
    goto LABEL_101; /*0x1005dbba6*/
  *v61 = 1886352499; /*0x1005dbbaf*/
  v101 = 4; /*0x1005dbbb5*/
  v102 = v61; /*0x1005dbbbd*/
  v103 = 4; /*0x1005dbbc1*/
  v63 = *(_QWORD *)(v96 + 152); /*0x1005dbbd0*/
  if ( v63 < 0 ) /*0x1005dbbda*/
  {
    v64 = 0; /*0x1005dbbdc*/
    goto LABEL_62; /*0x1005dbbdc*/
  }
  v65 = *(const void **)(v96 + 144); /*0x1005dbbef*/
  if ( v63 ) /*0x1005dbbf6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v62); /*0x1005dbbf8*/
    v64 = 1; /*0x1005dbbfd*/
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v63, 1); /*0x1005dbc0b*/
    if ( !v66 ) /*0x1005dbc13*/
LABEL_62:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v64, v63); /*0x1005dbbdf*/
    v67 = v66; /*0x1005dbc15*/
  }
  else
  {
    v67 = 1; /*0x1005dbc1a*/
  }
  memcpy((void *)v67, v65, v63); /*0x1005dbc29*/
  LOBYTE(v104) = 3; /*0x1005dbc2e*/
  v105 = v63; /*0x1005dbc32*/
  v106 = v67; /*0x1005dbc36*/
  v107 = v63; /*0x1005dbc3a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dbc51*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dbc5a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dbc60*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v68); /*0x1005dbc65*/
  v9 = 4; /*0x1005dbc6a*/
  v69 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1005dbc7a*/
  if ( !v69 ) /*0x1005dbc82*/
    goto LABEL_101; /*0x1005dbc82*/
  *v69 = 1818845556; /*0x1005dbc8b*/
  v101 = 4; /*0x1005dbc91*/
  v102 = v69; /*0x1005dbc99*/
  v103 = 4; /*0x1005dbc9d*/
  serde_core::ser::Serializer::collect_seq::h7d379da3f81d469c(&v104, v96 + 80); /*0x1005dbcb4*/
  if ( (_BYTE)v104 == 6 ) /*0x1005dbcbd*/
  {
    v97 = v105; /*0x1005dc105*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dc127*/
      &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
      43,
      &v97,
      &off_101AACF78,
      &off_101AAC6E0);
  }
  v100 = v107; /*0x1005dbcc7*/
  v99 = v106; /*0x1005dbccf*/
  v98 = v105; /*0x1005dbcdb*/
  v97 = v104; /*0x1005dbcdf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v104, v94, &v101, &v97); /*0x1005dbcf6*/
  if ( (_BYTE)v104 != 6 ) /*0x1005dbcff*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v104); /*0x1005dbd05*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v94, v70); /*0x1005dbd0a*/
  v71 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1005dbd19*/
  if ( !v71 ) /*0x1005dbd21*/
    goto LABEL_101; /*0x1005dbd21*/
  *v71 = 1954047348; /*0x1005dbd2a*/
  v88[0] = 4; /*0x1005dbd30*/
  v88[1] = v71; /*0x1005dbd3b*/
  v88[2] = 4; /*0x1005dbd42*/
  v92[0] = 0; /*0x1005dbd4d*/
  v93 = 0; /*0x1005dbd58*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1, v72); /*0x1005dbd63*/
  v73 = 8; /*0x1005dbd68*/
  v74 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1005dbd77*/
  v75 = v96; /*0x1005dbd7f*/
  if ( !v74 ) /*0x1005dbd86*/
    goto LABEL_103; /*0x1005dbd86*/
  *v74 = 0x6D61657274737075LL; /*0x1005dbd96*/
  v101 = 8; /*0x1005dbd99*/
  v102 = v74; /*0x1005dbda1*/
  v103 = 8; /*0x1005dbda5*/
  if ( *(_DWORD *)(v75 + 32) == 1 ) /*0x1005dbdb2*/
  {
    codexmate_lib::core::relay::anthropic_trace::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..anthropic_trace..TextCounts$GT$::serialize::hca497bd21aa0acdf( /*0x1005dbdbf*/
      (__int64)&v104,
      v75 + 40);
    if ( (_BYTE)v104 == 6 ) /*0x1005dbdc8*/
    {
      v97 = v105; /*0x1005dbdce*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dbdf0*/
        &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
        43,
        &v97,
        &off_101AACF78,
        &off_101AAC6E0);
    }
  }
  else
  {
    LOBYTE(v104) = 0; /*0x1005dbdfa*/
  }
  v100 = v107; /*0x1005dbe02*/
  v99 = v106; /*0x1005dbe0a*/
  v98 = v105; /*0x1005dbe16*/
  v97 = v104; /*0x1005dbe1a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v104, v92, &v101, &v97); /*0x1005dbe31*/
  if ( (_BYTE)v104 != 6 ) /*0x1005dbe3a*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v104); /*0x1005dbe40*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, v92, v76); /*0x1005dbe45*/
  v73 = 9; /*0x1005dbe4a*/
  v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1005dbe59*/
  if ( !v77 ) /*0x1005dbe61*/
LABEL_103:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v73); /*0x1005dc154*/
  *(_QWORD *)v77 = 0x65736E6F70736572LL; /*0x1005dbe71*/
  *(_BYTE *)(v77 + 8) = 115; /*0x1005dbe74*/
  v101 = 9; /*0x1005dbe78*/
  v102 = (_DWORD *)v77; /*0x1005dbe80*/
  v103 = 9; /*0x1005dbe84*/
  if ( *(_DWORD *)(v75 + 56) == 1 ) /*0x1005dbe91*/
  {
    codexmate_lib::core::relay::anthropic_trace::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..anthropic_trace..TextCounts$GT$::serialize::hca497bd21aa0acdf( /*0x1005dbe9e*/
      (__int64)&v104,
      v75 + 64);
    if ( (_BYTE)v104 == 6 ) /*0x1005dbea7*/
    {
      v97 = v105; /*0x1005dbead*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dbecf*/
        &anon_4bf7b7c8c09ec04f58b93d1c5edcde78_1219,
        43,
        &v97,
        &off_101AACF78,
        &off_101AAC6E0);
    }
  }
  else
  {
    LOBYTE(v104) = 0; /*0x1005dbed9*/
  }
  v100 = v107; /*0x1005dbee1*/
  v99 = v106; /*0x1005dbee9*/
  v98 = v105; /*0x1005dbef5*/
  v97 = v104; /*0x1005dbef9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v104, v92, &v101, &v97); /*0x1005dbf10*/
  if ( (_BYTE)v104 != 6 ) /*0x1005dbf19*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v104); /*0x1005dbf1f*/
  v105 = v92[0]; /*0x1005dbf32*/
  v106 = v92[1]; /*0x1005dbf36*/
  v107 = v93; /*0x1005dbf41*/
  LOBYTE(v104) = 5; /*0x1005dbf45*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, v88, &v104); /*0x1005dbf5f*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dbf68*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dbf6e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v78); /*0x1005dbf73*/
  v9 = 13; /*0x1005dbf78*/
  v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1005dbf88*/
  if ( !v79 ) /*0x1005dbf90*/
    goto LABEL_101; /*0x1005dbf90*/
  qmemcpy(v79, "usage_samples", 13); /*0x1005dbfae*/
  v101 = 13; /*0x1005dbfb1*/
  v102 = v79; /*0x1005dbfb9*/
  v103 = 13; /*0x1005dbfbd*/
  v80 = *(_QWORD *)(v96 + 272); /*0x1005dbfcc*/
  LOBYTE(v104) = 2; /*0x1005dbfd3*/
  v105 = 0; /*0x1005dbfd7*/
  v106 = v80; /*0x1005dbfdf*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dbff6*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dbfff*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dc005*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v97, v94, v81); /*0x1005dc00a*/
  v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1005dc019*/
  if ( !v82 ) /*0x1005dc021*/
LABEL_101:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x1005dc136*/
  qmemcpy(v82, "usage_omitted", 13); /*0x1005dc03f*/
  v101 = 13; /*0x1005dc042*/
  v102 = v82; /*0x1005dc04a*/
  v83 = 0; /*0x1005dc04e*/
  v84 = v80 < 8; /*0x1005dc050*/
  v85 = v80 - 8; /*0x1005dc050*/
  if ( !v84 ) /*0x1005dc054*/
    v83 = v85; /*0x1005dc054*/
  v103 = 13; /*0x1005dc058*/
  LOBYTE(v104) = 2; /*0x1005dc060*/
  v105 = 0; /*0x1005dc064*/
  v106 = v83; /*0x1005dc06c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v97, v94, &v101, &v104); /*0x1005dc083*/
  if ( (_BYTE)v97 != 6 ) /*0x1005dc08c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v97); /*0x1005dc092*/
  v86 = v90; /*0x1005dc09e*/
  *(_QWORD *)(v90 + 24) = v95; /*0x1005dc0a5*/
  result = v94[0]; /*0x1005dc0a9*/
  *(_QWORD *)(v86 + 16) = v94[1]; /*0x1005dc0b7*/
  *(_QWORD *)(v86 + 8) = result; /*0x1005dc0bb*/
  *(_BYTE *)v86 = 5; /*0x1005dc0bf*/
  return result; /*0x1005dc0c2*/
}