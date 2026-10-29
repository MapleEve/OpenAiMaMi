// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::change_facts::ha218b024c7f82f59; addr: 0x1008a32f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:20Z
// B-level evidence identity verified; module codexmate_lib/core/analytics/parser/tools; range 0x1008a32f0-0x1008a370d; sha f019dbc8e267; session <审计会话>; method same-callee-string-number-sets; decompiler-type-variant; source intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-offline-writeback-plan.json; not gate promotion
// [release-semantic-writeback <审计会话> 0x1008a32f0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [threads-analytics-analysis / observed-contract-preserved-library-expansion-change] 以56字节记录逐项筛选有效、非负增删数，饱和累加added/deleted；按文件字符串有序去重，输出files/added/deleted，生成change fact并追加144字节Fact
// 向量。
// 限制：与pre@0x100972f90完整体核对：同记录步长、有效/非负守卫、饱和加法、files/added/deleted字节常量、change长度6、同fact参数及向量追加均一致；pre内联BTreeSet树操作/析构在release中变为BTreeMap插入与drop外调。此已观察合同不构成功能新增，未声称逐机器指令等价。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
__int64 __fastcall codexmate_lib::core::analytics::parser::tools::change_facts::ha218b024c7f82f59(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  bool v18; // of
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  _QWORD *v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // rax
  __int64 v29; // rbx
  _QWORD v31[6]; // [rsp+30h] [rbp-180h] BYREF
  _QWORD __src[18]; // [rsp+60h] [rbp-150h] BYREF
  _QWORD v33[3]; // [rsp+F0h] [rbp-C0h] BYREF
  _QWORD *v34; // [rsp+108h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+110h] [rbp-A0h]
  __int64 v36; // [rsp+118h] [rbp-98h]
  _QWORD v37[2]; // [rsp+120h] [rbp-90h] BYREF
  __int64 v38; // [rsp+130h] [rbp-80h]
  __int64 v39; // [rsp+138h] [rbp-78h]
  __int64 v40; // [rsp+140h] [rbp-70h]
  __int64 v41; // [rsp+148h] [rbp-68h]
  __int64 v42; // [rsp+150h] [rbp-60h] BYREF
  _DWORD *v43; // [rsp+158h] [rbp-58h]
  __int64 v44; // [rsp+160h] [rbp-50h]
  __int64 v45; // [rsp+168h] [rbp-48h] BYREF
  __int64 v46; // [rsp+170h] [rbp-40h]
  __int64 v47; // [rsp+178h] [rbp-38h]
  __int64 v48; // [rsp+180h] [rbp-30h]

  v41 = a4; /*0x1008a3304*/
  v40 = a3; /*0x1008a3308*/
  v39 = a2; /*0x1008a330c*/
  v34 = a1; /*0x1008a3310*/
  v11 = a8; /*0x1008a3317*/
  v33[0] = 0; /*0x1008a331b*/
  v33[2] = 0; /*0x1008a3326*/
  v12 = 0; /*0x1008a3339*/
  v13 = 0; /*0x1008a334d*/
  while ( v11 != a8 + 56 * a9 ) /*0x1008a3353*/
  {
    v14 = v11; /*0x1008a3359*/
    v11 += 56; /*0x1008a335c*/
    if ( *(_DWORD *)(v14 + 16) == 1 ) /*0x1008a3364*/
    {
      v15 = *(_QWORD *)(v14 + 24); /*0x1008a3366*/
      if ( v15 >= 0 ) /*0x1008a336d*/
      {
        if ( *(_BYTE *)v14 ) /*0x1008a336f*/
        {
          v16 = *(_QWORD *)(v14 + 8); /*0x1008a3374*/
          if ( v16 >= 0 ) /*0x1008a337b*/
          {
            v17 = ((__int64)(v12 + v15) >> 63) ^ 0x8000000000000000LL; /*0x1008a3385*/
            v18 = __OFADD__(v15, v12); /*0x1008a3388*/
            v19 = v15 + v12; /*0x1008a3388*/
            if ( v18 ) /*0x1008a338b*/
              v19 = v17; /*0x1008a338b*/
            v35 = v19; /*0x1008a338f*/
            v20 = ((__int64)(v13 + v16) >> 63) ^ 0x8000000000000000LL; /*0x1008a339f*/
            v18 = __OFADD__(v16, v13); /*0x1008a33a2*/
            v13 += v16; /*0x1008a33a2*/
            if ( v18 ) /*0x1008a33a5*/
              v13 = v20; /*0x1008a33a5*/
            a1 = v33; /*0x1008a33b0*/
            v36 = a6; /*0x1008a33b3*/
            v21 = a5; /*0x1008a33ba*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h796b3981defc8370(v33, v11 - 24); /*0x1008a33bd*/
            a5 = v21; /*0x1008a33cc*/
            v12 = v35; /*0x1008a33cf*/
            a6 = v36; /*0x1008a33d6*/
          }
        }
      }
    }
  }
  v22 = v34; /*0x1008a33e2*/
  v31[0] = v34; /*0x1008a33e9*/
  v31[1] = v39; /*0x1008a33f4*/
  v31[2] = v40; /*0x1008a33ff*/
  v31[3] = v41; /*0x1008a340a*/
  v31[4] = a5; /*0x1008a3411*/
  v31[5] = a6; /*0x1008a3418*/
  v37[0] = 0; /*0x1008a341f*/
  v38 = 0; /*0x1008a342a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, 0x8000000000000000LL, a3); /*0x1008a3432*/
  v23 = 5; /*0x1008a3437*/
  v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1008a3446*/
  if ( !v24 ) /*0x1008a344e*/
    goto LABEL_26; /*0x1008a344e*/
  *(_BYTE *)(v24 + 4) = 115; /*0x1008a3457*/
  *(_DWORD *)v24 = 1701603686; /*0x1008a345b*/
  v42 = 5; /*0x1008a3461*/
  v43 = (_DWORD *)v24; /*0x1008a3469*/
  v44 = 5; /*0x1008a346d*/
  serde_core::ser::Serializer::collect_seq::h71590d82183f49f7(__src, v33); /*0x1008a3483*/
  if ( LOBYTE(__src[0]) == 6 ) /*0x1008a348f*/
  {
    v45 = __src[1]; /*0x1008a36d5*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10178CDF0, 43, &v45, &off_101AB73C8, &off_101AB6CD8); /*0x1008a36f7*/
  }
  v48 = __src[3]; /*0x1008a349c*/
  v47 = __src[2]; /*0x1008a34a7*/
  v46 = __src[1]; /*0x1008a34b9*/
  v45 = __src[0]; /*0x1008a34bd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(__src, v37, &v42, &v45); /*0x1008a34d7*/
  if ( LOBYTE(__src[0]) != 6 ) /*0x1008a34e3*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(__src); /*0x1008a34ec*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v37, v25); /*0x1008a34f1*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1008a3500*/
  if ( !v26 ) /*0x1008a3508*/
    goto LABEL_26; /*0x1008a3508*/
  *(_BYTE *)(v26 + 4) = 100; /*0x1008a350e*/
  *(_DWORD *)v26 = 1701078113; /*0x1008a3512*/
  v42 = 5; /*0x1008a3518*/
  v43 = (_DWORD *)v26; /*0x1008a3520*/
  v44 = 5; /*0x1008a3524*/
  LOBYTE(__src[0]) = 2; /*0x1008a3533*/
  __src[1] = v13 >> 63; /*0x1008a353a*/
  __src[2] = v13; /*0x1008a3541*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v45, v37, &v42, __src); /*0x1008a355e*/
  if ( (_BYTE)v45 != 6 ) /*0x1008a3567*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v45); /*0x1008a356d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v45, v37, v27); /*0x1008a3572*/
  v23 = 7; /*0x1008a3577*/
  v28 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008a3586*/
  if ( !v28 ) /*0x1008a358e*/
LABEL_26:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x1008a3706*/
  *(_DWORD *)((char *)v28 + 3) = 1684370533; /*0x1008a3594*/
  *v28 = 1701602660; /*0x1008a359b*/
  v42 = 7; /*0x1008a35a1*/
  v43 = v28; /*0x1008a35a9*/
  v44 = 7; /*0x1008a35ad*/
  LOBYTE(__src[0]) = 2; /*0x1008a35bc*/
  __src[1] = v12 >> 63; /*0x1008a35c3*/
  __src[2] = v12; /*0x1008a35ca*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h422181fd67d8b713(&v45, v37, &v42, __src); /*0x1008a35ea*/
  if ( (_BYTE)v45 != 6 ) /*0x1008a35f3*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h77a1fe0986d08ef9(&v45); /*0x1008a35f9*/
  v46 = v37[0]; /*0x1008a360c*/
  v47 = v37[1]; /*0x1008a3610*/
  v48 = v38; /*0x1008a3618*/
  LOBYTE(v45) = 5; /*0x1008a361c*/
  codexmate_lib::core::analytics::parser::fact::ha64429e32170a0de( /*0x1008a3672*/
    __src,
    "changeargumentsinput",
    6,
    v31,
    3,
    v22,
    v39,
    v40,
    v41,
    a7,
    &v45,
    a10);
  v29 = a11[2]; /*0x1008a367b*/
  if ( v29 == *a11 ) /*0x1008a3682*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hd1924b4a937a2a03(a11); /*0x1008a3687*/
  memcpy((void *)(a11[1] + 144 * v29), __src, 0x90u); /*0x1008a36a4*/
  a11[2] = v29 + 1; /*0x1008a36ac*/
  return _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdb387735b5ef7190(v33); /*0x1008a36bc*/
}