// __ZN13codexmate_lib4core5relay16codex_diagnostic29check_project_state_integrity @ 0x100509b30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_project_state_integrity::h2781a40cec1df614(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  void *v3; // rax
  void *v4; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // rdx
  void *v10; // rsi
  __int64 v11; // rax
  void *v12; // rax
  void *v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rax
  void *v20; // rax
  void *v21; // r14
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // r12
  bool v27; // zf
  _QWORD *v28; // rax
  __int64 v29; // rax
  _BYTE v30[32]; // [rsp+8h] [rbp-1E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-1C8h]
  __int64 v32; // [rsp+30h] [rbp-1C0h]
  __int64 v33; // [rsp+50h] [rbp-1A0h]
  _QWORD *v34; // [rsp+58h] [rbp-198h]
  __int64 v35; // [rsp+60h] [rbp-190h]
  __int64 v36; // [rsp+80h] [rbp-170h]
  _QWORD *v37; // [rsp+88h] [rbp-168h]
  __int64 v38; // [rsp+90h] [rbp-160h]
  char v39; // [rsp+98h] [rbp-158h] BYREF
  char v40; // [rsp+A8h] [rbp-148h] BYREF
  char v41; // [rsp+B8h] [rbp-138h] BYREF
  char v42; // [rsp+C0h] [rbp-130h] BYREF
  char v43; // [rsp+C8h] [rbp-128h] BYREF
  char v44; // [rsp+D0h] [rbp-120h] BYREF
  _BYTE v45[16]; // [rsp+D8h] [rbp-118h] BYREF
  _QWORD v46[3]; // [rsp+E8h] [rbp-108h] BYREF
  _QWORD v47[3]; // [rsp+100h] [rbp-F0h] BYREF
  _QWORD v48[3]; // [rsp+118h] [rbp-D8h] BYREF
  _QWORD *v49; // [rsp+130h] [rbp-C0h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+138h] [rbp-B8h]
  char *v51; // [rsp+140h] [rbp-B0h]
  __int64 (__fastcall *v52)(); // [rsp+148h] [rbp-A8h]
  char *v53; // [rsp+150h] [rbp-A0h]
  __int64 (__fastcall *v54)(); // [rsp+158h] [rbp-98h]
  char *v55; // [rsp+160h] [rbp-90h]
  __int64 (__fastcall *v56)(); // [rsp+168h] [rbp-88h]
  char *v57; // [rsp+170h] [rbp-80h]
  __int64 (__fastcall *v58)(); // [rsp+178h] [rbp-78h]
  char *v59; // [rsp+180h] [rbp-70h]
  __int64 (__fastcall *v60)(); // [rsp+188h] [rbp-68h]
  char *v61; // [rsp+190h] [rbp-60h]
  __int64 (__fastcall *v62)(); // [rsp+198h] [rbp-58h]
  _BYTE *v63; // [rsp+1A0h] [rbp-50h]
  __int64 (__fastcall *v64)(); // [rsp+1A8h] [rbp-48h]
  _QWORD *v65; // [rsp+1B0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+1B8h] [rbp-38h]
  char *v67; // [rsp+1C0h] [rbp-30h]

  codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(v30, a2); /*0x100509b4e*/
  if ( !__OFSUB__(0, v33) ) /*0x100509b5c*/
  {
    v65 = v34; /*0x100509d4f*/
    v66 = v35; /*0x100509d53*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, a2); /*0x100509d57*/
    v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100509d66*/
    if ( v12 ) /*0x100509d6e*/
    {
      v13 = v12; /*0x100509d74*/
      qmemcpy(v12, "project_state_integrity", 23); /*0x100509d9d*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100509da0*/
      v14 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100509daf*/
      if ( !v14 ) /*0x100509db7*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10050a136*/
      v15 = v14; /*0x100509dbd*/
      *(_DWORD *)((char *)v14 + 3) = 1735289198; /*0x100509dc0*/
      *v14 = 1852989815; /*0x100509dc7*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100509dcd*/
      v16 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x100509ddc*/
      if ( !v16 ) /*0x100509de4*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x10050a147*/
      v17 = v16; /*0x100509dea*/
      *(_QWORD *)((char *)v16 + 22) = 0x968FE5BBAFE895B3LL; /*0x100509df7*/
      v16[2] = 0x95B3E6A097E695BCLL; /*0x100509e06*/
      v16[1] = 0xE5A2B4E7AE9BE7B9LL; /*0x100509e15*/
      *v16 = 0xA1E9207865646F43LL; /*0x100509e24*/
      v49 = &v65; /*0x100509e2c*/
      v50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100509e3a*/
      v10 = &unk_1017C0658; /*0x100509e41*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v48, &unk_1017C0658, &v49); /*0x100509e56*/
      *(_QWORD *)(a1 + 88) = v48[2]; /*0x100509e62*/
      v18 = v48[0]; /*0x100509e66*/
      *(_QWORD *)(a1 + 80) = v48[1]; /*0x100509e74*/
      *(_QWORD *)(a1 + 72) = v18; /*0x100509e78*/
      *(_QWORD *)a1 = 23; /*0x100509e7c*/
      *(_QWORD *)(a1 + 8) = v13; /*0x100509e83*/
      *(_QWORD *)(a1 + 16) = 23; /*0x100509e87*/
      *(_QWORD *)(a1 + 24) = 7; /*0x100509e8f*/
      *(_QWORD *)(a1 + 32) = v15; /*0x100509e97*/
      *(_QWORD *)(a1 + 40) = 7; /*0x100509e9b*/
      *(_QWORD *)(a1 + 48) = 30; /*0x100509ea3*/
      *(_QWORD *)(a1 + 56) = v17; /*0x100509eab*/
      *(_QWORD *)(a1 + 64) = 30; /*0x100509eaf*/
      goto LABEL_13; /*0x100509eaf*/
    }
LABEL_25:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23); /*0x10050a11b*/
  }
  v2 = v32; /*0x100509b62*/
  if ( v32 ) /*0x100509b6c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, a2); /*0x100509b72*/
    v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100509b81*/
    if ( v3 ) /*0x100509b89*/
    {
      v4 = v3; /*0x100509b8f*/
      qmemcpy(v3, "project_state_integrity", 23); /*0x100509bb8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100509bbb*/
      v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100509bca*/
      if ( !v5 ) /*0x100509bd2*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x10050a158*/
      v6 = v5; /*0x100509bd8*/
      *(_DWORD *)((char *)v5 + 3) = 1735289198; /*0x100509bdb*/
      *v5 = 1852989815; /*0x100509be2*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100509be8*/
      v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x100509bf7*/
      if ( !v7 ) /*0x100509bff*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 39); /*0x10050a169*/
      v8 = v7; /*0x100509c05*/
      *(_QWORD *)((char *)v7 + 31) = 0x93BAE58BA8E7BFBALL; /*0x100509c12*/
      v7[3] = 0xBAE780A3E693BDE4LL; /*0x100509c21*/
      v7[2] = 0x95B3E6A097E695BCLL; /*0x100509c30*/
      v7[1] = 0xE5A2B4E7AE9BE7B9LL; /*0x100509c3f*/
      *v7 = 0xA1E9207865646F43LL; /*0x100509c4e*/
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v49, v31, v2, &unk_1015FC142, 3); /*0x100509c70*/
      v67 = v51; /*0x100509c7c*/
      v66 = (__int64)v50; /*0x100509c8e*/
      v65 = v49; /*0x100509c92*/
      v49 = &v65; /*0x100509c9a*/
      v50 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100509ca8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, &unk_1017C063D, &v49); /*0x100509cc4*/
      v10 = v65; /*0x100509cc9*/
      if ( v65 ) /*0x100509cd0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v65, 1); /*0x100509cdb*/
      *(_QWORD *)(a1 + 88) = v47[2]; /*0x100509ce7*/
      v11 = v47[0]; /*0x100509ceb*/
      *(_QWORD *)(a1 + 80) = v47[1]; /*0x100509cf9*/
      *(_QWORD *)(a1 + 72) = v11; /*0x100509cfd*/
      *(_QWORD *)a1 = 23; /*0x100509d01*/
      *(_QWORD *)(a1 + 8) = v4; /*0x100509d08*/
      *(_QWORD *)(a1 + 16) = 23; /*0x100509d0c*/
      *(_QWORD *)(a1 + 24) = 7; /*0x100509d14*/
      *(_QWORD *)(a1 + 32) = v6; /*0x100509d1c*/
      *(_QWORD *)(a1 + 40) = 7; /*0x100509d20*/
      *(_QWORD *)(a1 + 48) = 39; /*0x100509d28*/
      *(_QWORD *)(a1 + 56) = v8; /*0x100509d30*/
      *(_QWORD *)(a1 + 64) = 39; /*0x100509d34*/
LABEL_13:
      *(_BYTE *)(a1 + 96) = 0; /*0x100509eb7*/
      return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x100509eb7*/
               v30,
               v10,
               v9);
    }
    goto LABEL_25; /*0x100509b89*/
  }
  if ( !v45[10] ) /*0x100509ee0*/
  {
    v10 = &anon_92869709a5e99ce1936aa4e326b6c562_618; /*0x10050a0f5*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x10050a111*/
      a1,
      &anon_92869709a5e99ce1936aa4e326b6c562_618,
      23,
      &unk_1015FE25D,
      24);
    return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x10050a116*/
             v30,
             v10,
             v9);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, a2); /*0x100509ee6*/
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1); /*0x100509ef5*/
  if ( !v20 ) /*0x100509efd*/
    goto LABEL_25; /*0x100509efd*/
  v21 = v20; /*0x100509f03*/
  qmemcpy(v20, "project_state_integrity", 23); /*0x100509f2c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1); /*0x100509f2f*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100509f3e*/
  if ( !v22 ) /*0x100509f46*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10050a17a*/
  v23 = v22; /*0x100509f4c*/
  *(_BYTE *)(v22 + 4) = 114; /*0x100509f4f*/
  *(_DWORD *)v22 = 1869771365; /*0x100509f53*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100509f59*/
  v24 = 24; /*0x100509f5e*/
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100509f6e*/
  if ( !v25 ) /*0x100509f76*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x10050a18b*/
  v26 = (_QWORD *)v25; /*0x100509f7c*/
  *(_QWORD *)(v25 + 16) = 0xB8B8E582BCE595BCLL; /*0x100509f93*/
  *(_QWORD *)(v25 + 8) = 0xE5A2B4E7AE9BE7B9LL; /*0x100509fa2*/
  v27 = v36 == 0x8000000000000000LL; /*0x100509fb1*/
  v28 = &unk_1015FE275; /*0x100509fb8*/
  if ( v36 != 0x8000000000000000LL ) /*0x100509fbf*/
    v28 = v37; /*0x100509fbf*/
  *v26 = 0xA1E9207865646F43LL; /*0x100509fc7*/
  if ( !v27 ) /*0x100509fcb*/
    v24 = v38; /*0x100509fcb*/
  v65 = v28; /*0x100509fd3*/
  v66 = v24; /*0x100509fd7*/
  v49 = &v65; /*0x10050a010*/
  v50 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10050a01e*/
  v51 = &v39; /*0x10050a025*/
  v52 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a033*/
  v53 = &v40; /*0x10050a03a*/
  v54 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a041*/
  v55 = &v41; /*0x10050a048*/
  v56 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a04f*/
  v57 = &v43; /*0x10050a056*/
  v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a05a*/
  v59 = &v44; /*0x10050a05e*/
  v60 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a062*/
  v61 = &v42; /*0x10050a066*/
  v62 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a06a*/
  v63 = v45; /*0x10050a06e*/
  v64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10050a072*/
  v10 = &unk_1017C05CE; /*0x10050a076*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1017C05CE, &v49); /*0x10050a08b*/
  *(_QWORD *)(a1 + 88) = v46[2]; /*0x10050a097*/
  v29 = v46[0]; /*0x10050a09b*/
  *(_QWORD *)(a1 + 80) = v46[1]; /*0x10050a0a9*/
  *(_QWORD *)(a1 + 72) = v29; /*0x10050a0ad*/
  *(_QWORD *)a1 = 23; /*0x10050a0b1*/
  *(_QWORD *)(a1 + 8) = v21; /*0x10050a0b8*/
  *(_QWORD *)(a1 + 16) = 23; /*0x10050a0bc*/
  *(_QWORD *)(a1 + 24) = 5; /*0x10050a0c4*/
  *(_QWORD *)(a1 + 32) = v23; /*0x10050a0cc*/
  *(_QWORD *)(a1 + 40) = 5; /*0x10050a0d0*/
  *(_QWORD *)(a1 + 48) = 24; /*0x10050a0d8*/
  *(_QWORD *)(a1 + 56) = v26; /*0x10050a0e0*/
  *(_QWORD *)(a1 + 64) = 24; /*0x10050a0e4*/
  *(_BYTE *)(a1 + 96) = 1; /*0x10050a0ec*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee( /*0x100509ec7*/
           v30,
           v10,
           v9);
}