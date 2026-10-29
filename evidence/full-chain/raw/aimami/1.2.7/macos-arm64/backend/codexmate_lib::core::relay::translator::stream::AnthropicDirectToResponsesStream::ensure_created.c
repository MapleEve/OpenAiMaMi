// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h177ed4b42bbb767a; addr: 0x1002a6f50; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:51Z
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::ensure_created::h177ed4b42bbb767a(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  _WORD *v4; // rax
  signed __int64 v5; // r14
  __int64 v6; // rbx
  const void *v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  _QWORD *v11; // rax
  void *v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // r14
  __int64 v18; // rbx
  const void *v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r15
  _DWORD *v24; // rax
  void *v25; // rax
  _QWORD *v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // r15
  _DWORD *v29; // rax
  void *v30; // rax
  _QWORD *v31; // rax
  void *v32; // r12
  size_t v33; // r15
  __int64 v34; // rbx
  void *v35; // r14
  size_t v36; // rbx
  __int64 v37; // r15
  _QWORD *v38; // rax
  __int64 v39; // r12
  _QWORD *v40; // r13
  __int64 v41; // [rsp+0h] [rbp-E0h] BYREF
  void *v42; // [rsp+8h] [rbp-D8h]
  __int64 v43; // [rsp+10h] [rbp-D0h]
  _QWORD *v44; // [rsp+18h] [rbp-C8h]
  _QWORD *v45; // [rsp+20h] [rbp-C0h]
  __int64 v46; // [rsp+28h] [rbp-B8h] BYREF
  size_t v47; // [rsp+30h] [rbp-B0h]
  __int64 v48; // [rsp+38h] [rbp-A8h]
  __int64 v49; // [rsp+40h] [rbp-A0h] BYREF
  _WORD *v50; // [rsp+48h] [rbp-98h]
  __int64 v51; // [rsp+50h] [rbp-90h]
  __int64 v52; // [rsp+58h] [rbp-88h]
  __int64 v53; // [rsp+60h] [rbp-80h] BYREF
  _QWORD *v54; // [rsp+68h] [rbp-78h]
  __int64 v55; // [rsp+70h] [rbp-70h]
  __int64 v56; // [rsp+78h] [rbp-68h] BYREF
  void *__src; // [rsp+80h] [rbp-60h]
  size_t __n; // [rsp+88h] [rbp-58h]
  __int64 v59; // [rsp+90h] [rbp-50h]
  __int64 v60; // [rsp+98h] [rbp-48h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-40h]
  size_t v62; // [rsp+A8h] [rbp-38h]
  __int64 v63; // [rsp+B0h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 780) ) /*0x1002a6f64*/
    return; /*0x1002a6f6b*/
  v2 = (_QWORD *)a1; /*0x1002a6f7f*/
  v44 = a2; /*0x1002a6f82*/
  *(_BYTE *)(a1 + 780) = 1; /*0x1002a6f89*/
  v53 = 0; /*0x1002a6f90*/
  v55 = 0; /*0x1002a6f98*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1002a6fa0*/
  v3 = 2; /*0x1002a6fa5*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1002a6fb5*/
  if ( !v4 ) /*0x1002a6fbd*/
    goto LABEL_63; /*0x1002a6fbd*/
  *v4 = 25705; /*0x1002a6fc6*/
  v49 = 2; /*0x1002a6fcb*/
  v50 = v4; /*0x1002a6fd6*/
  v51 = 2; /*0x1002a6fdd*/
  v5 = *(_QWORD *)(a1 + 104); /*0x1002a6fe8*/
  if ( v5 < 0 ) /*0x1002a6fef*/
  {
    v6 = 0; /*0x1002a6ff1*/
    goto LABEL_6; /*0x1002a6ff1*/
  }
  v7 = *(const void **)(a1 + 96); /*0x1002a7003*/
  v45 = (_QWORD *)a1; /*0x1002a7007*/
  if ( v5 ) /*0x1002a700e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2); /*0x1002a7010*/
    v6 = 1; /*0x1002a7015*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1002a7022*/
    if ( !v8 ) /*0x1002a702a*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1002a6ff3*/
    v9 = v8; /*0x1002a702c*/
    v2 = v45; /*0x1002a702f*/
  }
  else
  {
    v9 = 1; /*0x1002a7038*/
  }
  memcpy((void *)v9, v7, v5); /*0x1002a7047*/
  LOBYTE(v60) = 3; /*0x1002a704c*/
  v61 = v5; /*0x1002a7050*/
  v62 = v9; /*0x1002a7054*/
  v63 = v5; /*0x1002a7058*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a706f*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a7078*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a707e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a7083*/
  v3 = 6; /*0x1002a7088*/
  v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a7098*/
  if ( !v10 ) /*0x1002a70a0*/
    goto LABEL_63; /*0x1002a70a0*/
  *(_WORD *)(v10 + 4) = 29795; /*0x1002a70a9*/
  *(_DWORD *)v10 = 1701470831; /*0x1002a70af*/
  v49 = 6; /*0x1002a70b5*/
  v50 = (_WORD *)v10; /*0x1002a70c0*/
  v51 = 6; /*0x1002a70c7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x1002a70d2*/
  v11 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1002a70e1*/
  if ( !v11 ) /*0x1002a70e9*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1002a791a*/
  *v11 = 0x65736E6F70736572LL; /*0x1002a70f9*/
  LOBYTE(v60) = 3; /*0x1002a70fc*/
  v61 = 8; /*0x1002a7100*/
  v62 = (size_t)v11; /*0x1002a7108*/
  v63 = 8; /*0x1002a710c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a7127*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a7130*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a7136*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a713b*/
  v3 = 10; /*0x1002a7140*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1002a7150*/
  if ( !v12 ) /*0x1002a7158*/
    goto LABEL_63; /*0x1002a7158*/
  qmemcpy(v12, "created_at", 10); /*0x1002a7168*/
  v49 = 10; /*0x1002a7171*/
  v50 = v12; /*0x1002a717c*/
  v51 = 10; /*0x1002a7183*/
  v13 = v2[80]; /*0x1002a718e*/
  LOBYTE(v60) = 2; /*0x1002a719c*/
  v61 = v13 >> 63; /*0x1002a71a0*/
  v62 = v13; /*0x1002a71a4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a71bb*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a71c4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a71ca*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a71cf*/
  v3 = 6; /*0x1002a71d4*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a71e4*/
  if ( !v14 ) /*0x1002a71ec*/
    goto LABEL_63; /*0x1002a71ec*/
  *(_WORD *)(v14 + 4) = 29557; /*0x1002a71f5*/
  *(_DWORD *)v14 = 1952543859; /*0x1002a71fb*/
  v49 = 6; /*0x1002a7201*/
  v50 = (_WORD *)v14; /*0x1002a720c*/
  v51 = 6; /*0x1002a7213*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x1002a721e*/
  v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1002a722d*/
  if ( !v15 ) /*0x1002a7235*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x1002a792b*/
  qmemcpy(v15, "in_progress", 11); /*0x1002a7245*/
  LOBYTE(v60) = 3; /*0x1002a724f*/
  v61 = 11; /*0x1002a7253*/
  v62 = (size_t)v15; /*0x1002a725b*/
  v63 = 11; /*0x1002a725f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a727a*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a7283*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a7289*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a728e*/
  v3 = 5; /*0x1002a7293*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1002a72a3*/
  if ( !v16 ) /*0x1002a72ab*/
    goto LABEL_63; /*0x1002a72ab*/
  *(_BYTE *)(v16 + 4) = 108; /*0x1002a72b4*/
  *(_DWORD *)v16 = 1701080941; /*0x1002a72b8*/
  v49 = 5; /*0x1002a72be*/
  v50 = (_WORD *)v16; /*0x1002a72c9*/
  v51 = 5; /*0x1002a72d0*/
  v17 = v2[10]; /*0x1002a72db*/
  if ( v17 < 0 ) /*0x1002a72e2*/
  {
    v18 = 0; /*0x1002a72e4*/
    goto LABEL_27; /*0x1002a72e4*/
  }
  v19 = (const void *)v2[9]; /*0x1002a72f6*/
  if ( v17 ) /*0x1002a72fa*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5); /*0x1002a72fc*/
    v18 = 1; /*0x1002a7301*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v17, 1); /*0x1002a730e*/
    if ( !v20 ) /*0x1002a7316*/
LABEL_27:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v17); /*0x1002a72e6*/
    v21 = v20; /*0x1002a7318*/
    v2 = v45; /*0x1002a731b*/
  }
  else
  {
    v21 = 1; /*0x1002a7324*/
  }
  memcpy((void *)v21, v19, v17); /*0x1002a7333*/
  LOBYTE(v60) = 3; /*0x1002a7338*/
  v61 = v17; /*0x1002a733c*/
  v62 = v21; /*0x1002a7340*/
  v63 = v17; /*0x1002a7344*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a735b*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a736e*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a7374*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a7379*/
  v3 = 6; /*0x1002a737e*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x1002a738e*/
  if ( !v22 ) /*0x1002a7396*/
LABEL_63:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x1002a7909*/
  *(_WORD *)(v22 + 4) = 29813; /*0x1002a739c*/
  *(_DWORD *)v22 = 1886680431; /*0x1002a73a2*/
  v49 = 6; /*0x1002a73a8*/
  v50 = (_WORD *)v22; /*0x1002a73b3*/
  v51 = 6; /*0x1002a73ba*/
  v61 = 0; /*0x1002a73c5*/
  v62 = 8; /*0x1002a73cd*/
  v63 = 0; /*0x1002a73d5*/
  LOBYTE(v60) = 4; /*0x1002a73dd*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v53, &v49, &v60); /*0x1002a73f4*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a73fd*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a7403*/
  v50 = (_WORD *)v53; /*0x1002a7410*/
  v51 = (__int64)v54; /*0x1002a7417*/
  v52 = v55; /*0x1002a7422*/
  LOBYTE(v49) = 5; /*0x1002a7429*/
  v46 = 0; /*0x1002a7430*/
  v48 = 0; /*0x1002a743b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a7446*/
  v23 = 4; /*0x1002a744b*/
  v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a745b*/
  if ( !v24 ) /*0x1002a7463*/
    goto LABEL_66; /*0x1002a7463*/
  *v24 = 1701869940; /*0x1002a746c*/
  v53 = 4; /*0x1002a7472*/
  v54 = v24; /*0x1002a747a*/
  v55 = 4; /*0x1002a747e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a7486*/
  v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x1002a7495*/
  if ( !v25 ) /*0x1002a749d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x1002a795a*/
  qmemcpy(v25, "response.created", 16); /*0x1002a74b1*/
  LOBYTE(v60) = 3; /*0x1002a74b4*/
  v61 = 16; /*0x1002a74b8*/
  v62 = (size_t)v25; /*0x1002a74c0*/
  v63 = 16; /*0x1002a74c4*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v46, &v53, &v60); /*0x1002a74df*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a74e8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a74ee*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a74f3*/
  v23 = 8; /*0x1002a74f8*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1002a7508*/
  if ( !v26 ) /*0x1002a7510*/
LABEL_66:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x1002a793a*/
  *v26 = 0x65736E6F70736572LL; /*0x1002a7519*/
  v53 = 8; /*0x1002a751c*/
  v54 = v26; /*0x1002a7524*/
  v55 = 8; /*0x1002a7528*/
  serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x1002a753b*/
    &v60,
    &v49);
  if ( (_BYTE)v60 == 6 ) /*0x1002a7544*/
  {
    v56 = v61; /*0x1002a7853*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002a7875*/
      "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXChatgptApikey"
      "Pro5xPro20xConfigAuthCatalogThreadProxy",
      43,
      &v56,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
      &off_101BF2088);
  }
  v59 = v63; /*0x1002a754e*/
  __n = v62; /*0x1002a7556*/
  __src = (void *)v61; /*0x1002a7562*/
  v56 = v60; /*0x1002a7566*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v60, &v46, &v53, &v56); /*0x1002a757d*/
  if ( (_BYTE)v60 != 6 ) /*0x1002a7586*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v60); /*0x1002a758c*/
  v27 = v2 + 96; /*0x1002a7591*/
  v61 = v46; /*0x1002a75a6*/
  v62 = v47; /*0x1002a75aa*/
  v63 = v48; /*0x1002a75b5*/
  LOBYTE(v60) = 5; /*0x1002a75b9*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc( /*0x1002a75d7*/
    &v41,
    v27,
    (__int64)"response.createdcustom_tool_calltool_search_callanthropic_streamc_agent_nicknameUntitled Sessionreasoning_effortstruct ApiConfigfield identifier",
    (__int64 (__fastcall *)())0x10,
    (char *)&v60);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v60); /*0x1002a75e0*/
  v46 = 0; /*0x1002a75e5*/
  v48 = 0; /*0x1002a75f0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60); /*0x1002a75fb*/
  v28 = 4; /*0x1002a7600*/
  v29 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1002a7610*/
  if ( !v29 ) /*0x1002a7618*/
    goto LABEL_67; /*0x1002a7618*/
  *v29 = 1701869940; /*0x1002a7621*/
  v53 = 4; /*0x1002a7627*/
  v54 = v29; /*0x1002a762f*/
  v55 = 4; /*0x1002a7633*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1002a763b*/
  v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1002a764a*/
  if ( !v30 ) /*0x1002a7652*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1002a796b*/
  qmemcpy(v30, "response.in_progress", 20); /*0x1002a7666*/
  LOBYTE(v60) = 3; /*0x1002a7670*/
  v61 = 20; /*0x1002a7674*/
  v62 = (size_t)v30; /*0x1002a767c*/
  v63 = 20; /*0x1002a7680*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v56, &v46, &v53, &v60); /*0x1002a769b*/
  if ( (_BYTE)v56 != 6 ) /*0x1002a76a4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v56); /*0x1002a76aa*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v56); /*0x1002a76af*/
  v28 = 8; /*0x1002a76b4*/
  v31 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x1002a76c4*/
  if ( !v31 ) /*0x1002a76cc*/
LABEL_67:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v28); /*0x1002a7949*/
  *v31 = 0x65736E6F70736572LL; /*0x1002a76d5*/
  v53 = 8; /*0x1002a76d8*/
  v54 = v31; /*0x1002a76e0*/
  v55 = 8; /*0x1002a76e4*/
  serde_json::value::ser::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$serde_json..value..Value$GT$::serialize::h13dad87f56710385( /*0x1002a76f7*/
    &v60,
    &v49);
  if ( (_BYTE)v60 == 6 ) /*0x1002a7700*/
  {
    v56 = v61; /*0x1002a7883*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1002a78a5*/
      "called `Result::unwrap()` on an `Err` valueErrorattempt to join into collection with len > usize::MAXChatgptApikey"
      "Pro5xPro20xConfigAuthCatalogThreadProxy",
      43,
      &v56,
      &anon_5a43fe550916ced6ff2b8ab69a2876c4_1336,
      &off_101BF20A0);
  }
  v59 = v63; /*0x1002a770a*/
  __n = v62; /*0x1002a7712*/
  __src = (void *)v61; /*0x1002a771e*/
  v56 = v60; /*0x1002a7722*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v60, &v46, &v53, &v56); /*0x1002a7739*/
  if ( (_BYTE)v60 != 6 ) /*0x1002a7742*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v60); /*0x1002a7748*/
  v61 = v46; /*0x1002a775b*/
  v62 = v47; /*0x1002a775f*/
  v63 = v48; /*0x1002a776a*/
  LOBYTE(v60) = 5; /*0x1002a776e*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h4082c4e542f661cc( /*0x1002a7789*/
    &v56,
    v27,
    (__int64)"response.in_progressAnthropic content arrived after stop_reasonAnthropic upstream emitted an error/delta/stop_reasonConflicting Anthropic stop_reason",
    (__int64 (__fastcall *)())0x14,
    (char *)&v60);
  v32 = __src; /*0x1002a778e*/
  v33 = __n; /*0x1002a7792*/
  v34 = v43; /*0x1002a779d*/
  if ( __n > v41 - v43 ) /*0x1002a77aa*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(&v41, v43, __n, 1, 1); /*0x1002a78c7*/
    v34 = v43; /*0x1002a78cc*/
  }
  v35 = v42; /*0x1002a77b0*/
  memcpy((char *)v42 + v34, v32, v33); /*0x1002a77c1*/
  if ( v56 ) /*0x1002a77cd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v56, 1); /*0x1002a77d7*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v60); /*0x1002a77e0*/
  v36 = v33 + v34; /*0x1002a77e5*/
  v37 = v41; /*0x1002a77e8*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v49); /*0x1002a77f6*/
  v38 = v44; /*0x1002a77fb*/
  v39 = v44[2]; /*0x1002a7805*/
  if ( v36 > *v44 - v39 ) /*0x1002a780f*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(v44, v44[2], v36, 1, 1); /*0x1002a78ec*/
    v38 = v44; /*0x1002a78f1*/
    v39 = v44[2]; /*0x1002a78f8*/
  }
  v40 = v38; /*0x1002a781c*/
  memcpy((void *)(v39 + v38[1]), v35, v36); /*0x1002a7825*/
  v40[2] = v36 + v39; /*0x1002a782d*/
  if ( v37 ) /*0x1002a7834*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v37, 1); /*0x1002a7845*/
}