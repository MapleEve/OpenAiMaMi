// __ZN13codexmate_lib4core12debug_bundle13process_shape @ 0x1004c7700 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::process_shape::h772ce2601531871c(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // [rsp+0h] [rbp-120h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-118h]
  __int64 v20; // [rsp+10h] [rbp-110h]
  __int64 v21; // [rsp+18h] [rbp-108h]
  __int64 v22; // [rsp+20h] [rbp-100h] BYREF
  __int64 v23; // [rsp+28h] [rbp-F8h]
  __int64 v24; // [rsp+30h] [rbp-F0h]
  _QWORD v25[2]; // [rsp+38h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-D8h]
  _QWORD *v27; // [rsp+50h] [rbp-D0h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-C8h]
  __int64 v29; // [rsp+60h] [rbp-C0h]
  __int64 v30; // [rsp+68h] [rbp-B8h]
  __int64 v31; // [rsp+70h] [rbp-B0h]
  __int64 v32; // [rsp+78h] [rbp-A8h]
  __int64 v33; // [rsp+80h] [rbp-A0h]
  __int64 v34; // [rsp+88h] [rbp-98h] BYREF
  __int64 v35; // [rsp+90h] [rbp-90h]
  __int64 v36; // [rsp+98h] [rbp-88h]
  __int64 v37; // [rsp+A0h] [rbp-80h]
  _QWORD *v38; // [rsp+A8h] [rbp-78h] BYREF
  _QWORD *v39; // [rsp+B0h] [rbp-70h]
  __int64 v40; // [rsp+B8h] [rbp-68h]
  __int64 v41; // [rsp+C0h] [rbp-60h]
  __int64 v42; // [rsp+C8h] [rbp-58h]
  __int64 v43; // [rsp+D0h] [rbp-50h]
  __int64 v44; // [rsp+D8h] [rbp-48h]
  _QWORD *v45; // [rsp+E0h] [rbp-40h]
  __int64 *v46; // [rsp+E8h] [rbp-38h]
  __int64 v47; // [rsp+F0h] [rbp-30h]
  __int64 v48; // [rsp+F8h] [rbp-28h]

  v25[0] = 0; /*0x1004c7718*/
  v26 = 0; /*0x1004c7723*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004c772e*/
  v4 = 12; /*0x1004c7733*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004c7743*/
  if ( !v5 ) /*0x1004c774b*/
    goto LABEL_14; /*0x1004c774b*/
  qmemcpy(v5, "codexRunning", 12); /*0x1004c775e*/
  v22 = 12; /*0x1004c7769*/
  v23 = (__int64)v5; /*0x1004c7774*/
  v24 = 12; /*0x1004c777b*/
  LOBYTE(v45) = 1; /*0x1004c778b*/
  BYTE1(v45) = codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151(); /*0x1004c778f*/
  v6 = (__int64 *)&v38; /*0x1004c7792*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v38, v25, &v22); /*0x1004c77a4*/
  if ( __OFSUB__(0, v38) ) /*0x1004c77ab*/
  {
    v7 = v39; /*0x1004c77b1*/
    v8 = 4 * v41; /*0x1004c77b9*/
    v37 = v39[4 * v41 + 3]; /*0x1004c77c2*/
    v36 = v39[4 * v41 + 2]; /*0x1004c77cb*/
    v9 = v39[4 * v41]; /*0x1004c77d2*/
    v35 = v39[4 * v41 + 1]; /*0x1004c77db*/
    v34 = v9; /*0x1004c77e2*/
    v39[v8 + 3] = v48; /*0x1004c77ed*/
    v7[v8 + 2] = v47; /*0x1004c77f6*/
    v10 = v45; /*0x1004c77fb*/
    v11 = v46; /*0x1004c77ff*/
    v7[v8 + 1] = v46; /*0x1004c7803*/
    v7[v8] = v10; /*0x1004c7808*/
    if ( (_BYTE)v34 != 6 ) /*0x1004c7813*/
    {
      v6 = &v34; /*0x1004c7819*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x1004c7820*/
    }
  }
  else
  {
    v33 = v44; /*0x1004c782e*/
    v32 = v43; /*0x1004c7839*/
    v31 = v42; /*0x1004c7844*/
    v30 = v41; /*0x1004c784f*/
    v29 = v40; /*0x1004c785a*/
    v28 = v39; /*0x1004c7869*/
    v27 = v38; /*0x1004c7870*/
    v21 = v48; /*0x1004c787b*/
    v20 = v47; /*0x1004c7886*/
    v19 = v46; /*0x1004c7895*/
    v18 = v45; /*0x1004c789c*/
    v6 = &v34; /*0x1004c78a3*/
    v11 = (__int64 *)&v27; /*0x1004c78aa*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c78b8*/
      &v34,
      &v27,
      &v18);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v11); /*0x1004c78bd*/
  v4 = 9; /*0x1004c78c2*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1004c78d2*/
  if ( !v12 ) /*0x1004c78da*/
LABEL_14:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1004c7b00*/
  *(_QWORD *)v12 = 0x7265646C6F486264LL; /*0x1004c78ed*/
  *(_BYTE *)(v12 + 8) = 115; /*0x1004c78f0*/
  v22 = 9; /*0x1004c78f5*/
  v23 = v12; /*0x1004c7900*/
  v24 = 9; /*0x1004c7907*/
  serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v27, a2 + 1120); /*0x1004c7923*/
  if ( (_BYTE)v27 == 6 ) /*0x1004c792f*/
  {
    v38 = v28; /*0x1004c7acf*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c7af1*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v38,
      &off_101964900,
      &off_101963FC0);
  }
  v48 = v30; /*0x1004c793c*/
  v47 = v29; /*0x1004c7947*/
  v46 = v28; /*0x1004c7959*/
  v45 = v27; /*0x1004c795d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v38, v25, &v22); /*0x1004c7973*/
  if ( v38 == (_QWORD *)0x8000000000000000LL ) /*0x1004c7986*/
  {
    v13 = v39; /*0x1004c7988*/
    v14 = 4 * v41; /*0x1004c7990*/
    v37 = v39[4 * v41 + 3]; /*0x1004c7999*/
    v36 = v39[4 * v41 + 2]; /*0x1004c79a2*/
    v15 = v39[4 * v41]; /*0x1004c79a9*/
    v35 = v39[4 * v41 + 1]; /*0x1004c79b2*/
    v34 = v15; /*0x1004c79b9*/
    v39[v14 + 3] = v48; /*0x1004c79c4*/
    v13[v14 + 2] = v47; /*0x1004c79cd*/
    v16 = v45; /*0x1004c79d2*/
    v13[v14 + 1] = v46; /*0x1004c79da*/
    v13[v14] = v16; /*0x1004c79df*/
    if ( (_BYTE)v34 != 6 ) /*0x1004c79ea*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x1004c79f7*/
  }
  else
  {
    v33 = v44; /*0x1004c7a05*/
    v32 = v43; /*0x1004c7a10*/
    v31 = v42; /*0x1004c7a1b*/
    v30 = v41; /*0x1004c7a26*/
    v29 = v40; /*0x1004c7a31*/
    v28 = v39; /*0x1004c7a40*/
    v27 = v38; /*0x1004c7a47*/
    v21 = v48; /*0x1004c7a52*/
    v20 = v47; /*0x1004c7a5d*/
    v19 = v46; /*0x1004c7a6c*/
    v18 = v45; /*0x1004c7a73*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c7a8f*/
      &v34,
      &v27,
      &v18);
  }
  *(_QWORD *)(a1 + 24) = v26; /*0x1004c7a9b*/
  result = v25[0]; /*0x1004c7a9f*/
  *(_QWORD *)(a1 + 16) = v25[1]; /*0x1004c7aad*/
  *(_QWORD *)(a1 + 8) = result; /*0x1004c7ab1*/
  *(_BYTE *)a1 = 5; /*0x1004c7ab5*/
  return result; /*0x1004c7ab8*/
}