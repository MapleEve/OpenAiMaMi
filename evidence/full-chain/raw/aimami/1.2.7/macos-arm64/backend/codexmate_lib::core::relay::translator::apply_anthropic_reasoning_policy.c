// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::apply_anthropic_reasoning_policy::haf903b8289b66b74; addr: 0x1008152f0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:23Z
__int64 __fastcall codexmate_lib::core::relay::translator::apply_anthropic_reasoning_policy::haf903b8289b66b74(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // bl
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 v14; // r15
  void *v15; // rax
  __int64 v16; // r12
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  char v19; // r14
  _DWORD *v20; // rax
  void *v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rax
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 *v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  _DWORD *v32; // rax
  void *v33; // rax
  __int64 *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r14
  __int64 v38; // rax
  const void *v39; // r13
  _DWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // rdx
  __int64 v49; // r15
  _DWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // r14
  __int64 *v55; // r14
  __int64 v56; // rax
  __int64 v57; // [rsp+18h] [rbp-E8h]
  __int64 v58; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v59; // [rsp+28h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  __int64 v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 v69; // [rsp+78h] [rbp-88h]
  _QWORD *v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h] BYREF
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  bool v75; // [rsp+AFh] [rbp-51h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-48h]
  _QWORD *v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  char v80; // [rsp+D0h] [rbp-30h]
  char v81; // [rsp+D1h] [rbp-2Fh]
  char v82; // [rsp+D2h] [rbp-2Eh]
  unsigned __int8 v83; // [rsp+D5h] [rbp-2Bh]

  v61 = a5; /*0x100815307*/
  LODWORD(v10) = a1; /*0x100815317*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)&v76, (__int64)a2, a3); /*0x10081531e*/
  if ( v83 == 2 ) /*0x100815327*/
    goto LABEL_70; /*0x100815327*/
  v57 = a6; /*0x10081532d*/
  v62 = a1; /*0x100815334*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)&v76, (__int64)a2, a3); /*0x100815345*/
  LOBYTE(a6) = v81 | (v83 == 2); /*0x100815352*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)&v76, (__int64)a2, a3); /*0x100815360*/
  v11 = v82 & (v83 != 2); /*0x10081536c*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)&v76, (__int64)a2, a3); /*0x100815379*/
  v75 = v83 != 2 && v80 == 1; /*0x10081538e*/
  LOBYTE(v63) = codexmate_lib::core::relay::anthropic_reasoning::reasoning_explicitly_disabled::h194f8f789e695125( /*0x1008153a0*/
                  a4,
                  v61);
  if ( a4 ) /*0x1008153b7*/
  {
    v13 = a2; /*0x1008153b9*/
    v14 = v61; /*0x1008153c2*/
    v15 = codexmate_lib::core::relay::anthropic_reasoning::codex_effort_to_anthropic::h3961f18f90a801dd(a2, a3, a4, v61); /*0x1008153cc*/
    if ( (a6 & 1) != 0 ) /*0x1008153d5*/
    {
      v16 = v62; /*0x1008153db*/
      if ( !a7 ) /*0x1008153e6*/
        goto LABEL_70; /*0x1008153e6*/
      goto LABEL_8; /*0x1008153e6*/
    }
    a6 = v12; /*0x10081552c*/
    v19 = 1; /*0x100815537*/
    if ( !((v15 != nullptr) | v11) ) /*0x100815535*/
    {
LABEL_27:
      v15 = nullptr; /*0x1008156d5*/
      v19 = v75; /*0x1008156d7*/
      if ( !a7 ) /*0x1008156e0*/
      {
LABEL_28:
        if ( v19 ) /*0x1008156e9*/
        {
          v72 = 0; /*0x1008156ef*/
          v74 = 0; /*0x1008156f7*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13); /*0x1008156ff*/
          v24 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10081570e*/
          if ( !v24 ) /*0x100815716*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10081623e*/
          *v24 = 1701869940; /*0x10081571f*/
          v64 = 4; /*0x100815725*/
          v65 = v24; /*0x100815730*/
          v66 = 4; /*0x100815737*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100815742*/
          v25 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100815751*/
          if ( !v25 ) /*0x100815759*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100816266*/
          *v25 = 0x64656C6261736964LL; /*0x100815769*/
          LOBYTE(v76) = 3; /*0x10081576c*/
          v77 = 8; /*0x100815770*/
          v78 = v25; /*0x100815778*/
          v79 = 8; /*0x10081577c*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v72, &v64, &v76); /*0x10081579a*/
          if ( (_BYTE)v68 != 6 ) /*0x1008157a6*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x1008157af*/
          goto LABEL_33; /*0x1008157af*/
        }
LABEL_70:
        LODWORD(v10) = 0; /*0x100815e2d*/
        return (unsigned int)v10; /*0x100815e2d*/
      }
LABEL_19:
      if ( (_BYTE)v63 ) /*0x10081556d*/
      {
        v10 = (unsigned __int64)v15; /*0x100815573*/
        v13 = &v76; /*0x100815576*/
        codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2( /*0x100815588*/
          (__int64)&v76,
          (__int64)a2,
          a3);
        if ( v83 != 2 && v80 == 2 ) /*0x10081559b*/
        {
          v72 = 0; /*0x1008155a1*/
          v74 = 0; /*0x1008155a9*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76); /*0x1008155b1*/
          v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008155c0*/
          if ( !v20 ) /*0x1008155c8*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1008162a2*/
          *v20 = 1701869940; /*0x1008155d1*/
          v64 = 4; /*0x1008155d7*/
          v65 = v20; /*0x1008155e2*/
          v66 = 4; /*0x1008155e9*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x1008155f4*/
          v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100815603*/
          if ( !v21 ) /*0x10081560b*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x1008162b3*/
          qmemcpy(v21, "between_tools", 13); /*0x100815629*/
          LOBYTE(v76) = 3; /*0x10081562c*/
          v77 = 13; /*0x100815630*/
          v78 = v21; /*0x100815638*/
          v79 = 13; /*0x10081563c*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v72, &v64, &v76); /*0x10081565a*/
          if ( (_BYTE)v68 != 6 ) /*0x100815666*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x10081566f*/
          v77 = v72; /*0x10081567c*/
          v78 = (_QWORD *)v73; /*0x100815680*/
          v79 = v74; /*0x100815688*/
          LOBYTE(v76) = 5; /*0x10081568c*/
          v22 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008156a4*/
                             &unk_101820370,
                             8u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v22); /*0x1008156aa*/
          v22[3] = v79; /*0x1008156b3*/
          v22[2] = (__int64)v78; /*0x1008156bb*/
          v23 = v76; /*0x1008156bf*/
          v22[1] = v77; /*0x1008156c7*/
          *v22 = v23; /*0x1008156cb*/
          LOBYTE(v10) = 1; /*0x1008156ce*/
          return (unsigned int)v10; /*0x1008156d0*/
        }
        v15 = (void *)v10; /*0x100815ba9*/
        if ( !v75 ) /*0x100815bac*/
        {
          v72 = 0; /*0x100815e43*/
          v74 = 0; /*0x100815e4b*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76); /*0x100815e53*/
          v51 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100815e62*/
          if ( !v51 ) /*0x100815e6a*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1008162f5*/
          *v51 = 1701869940; /*0x100815e73*/
          v64 = 4; /*0x100815e79*/
          v65 = v51; /*0x100815e84*/
          v66 = 4; /*0x100815e8b*/
          serde_json::value::to_value::h0cd76aed73b0309e(&v76, &off_101C02550); /*0x100815ea1*/
          if ( (_BYTE)v76 == 6 ) /*0x100815eaa*/
          {
            v68 = v77; /*0x10081614c*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100816174*/
              &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
              43,
              &v68,
              &off_101C03980,
              &off_101C02560);
          }
          v71 = v79; /*0x100815eb4*/
          v70 = v78; /*0x100815ebc*/
          v69 = v77; /*0x100815ec8*/
          v68 = v76; /*0x100815ecf*/
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v76, &v72, &v64, &v68); /*0x100815eec*/
          if ( (_BYTE)v76 != 6 ) /*0x100815ef5*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v76); /*0x100815efb*/
          goto LABEL_33; /*0x100815efb*/
        }
      }
      if ( !v19 ) /*0x100815bb5*/
        goto LABEL_70; /*0x100815bb5*/
      v39 = v15; /*0x100815bbb*/
      v72 = 0; /*0x100815bbe*/
      v74 = 0; /*0x100815bc6*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13); /*0x100815bce*/
      v40 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100815bdd*/
      if ( !v40 ) /*0x100815be5*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10081627a*/
      *v40 = 1701869940; /*0x100815bee*/
      v64 = 4; /*0x100815bf4*/
      v65 = v40; /*0x100815bff*/
      v66 = 4; /*0x100815c06*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100815c11*/
      v41 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100815c20*/
      if ( !v41 ) /*0x100815c28*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x10081628e*/
      *v41 = 0x6576697470616461LL; /*0x100815c38*/
      LOBYTE(v76) = 3; /*0x100815c3b*/
      v77 = 8; /*0x100815c3f*/
      v78 = v41; /*0x100815c47*/
      v79 = 8; /*0x100815c4b*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v72, &v64, &v76); /*0x100815c69*/
      if ( (_BYTE)v68 != 6 ) /*0x100815c75*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x100815c7e*/
      v65 = (_DWORD *)v72; /*0x100815c8b*/
      v66 = v73; /*0x100815c92*/
      v67 = v74; /*0x100815c9d*/
      LOBYTE(v64) = 5; /*0x100815ca4*/
      if ( v57 ) /*0x100815cb3*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v68); /*0x100815cb9*/
        v42 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100815cc8*/
        if ( !v42 ) /*0x100815cd0*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1008162c4*/
        *(_WORD *)(v42 + 8) = *(_WORD *)(v57 + 8); /*0x100815ce1*/
        *(_QWORD *)v42 = *(_QWORD *)v57; /*0x100815ce8*/
        v77 = 10; /*0x100815ceb*/
        v78 = (_QWORD *)v42; /*0x100815cf3*/
        v79 = 10; /*0x100815cf7*/
        LOBYTE(v76) = 3; /*0x100815cff*/
        v43 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100815d1b*/
                           "displaylow",
                           7u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v43); /*0x100815d21*/
        v43[3] = v79; /*0x100815d2a*/
        v43[2] = (__int64)v78; /*0x100815d32*/
        v44 = v76; /*0x100815d36*/
        v43[1] = v77; /*0x100815d3e*/
        *v43 = v44; /*0x100815d42*/
      }
      v79 = v67; /*0x100815d4c*/
      v78 = (_QWORD *)v66; /*0x100815d57*/
      v77 = (__int64)v65; /*0x100815d69*/
      v76 = v64; /*0x100815d6d*/
      v45 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100815d88*/
                         &unk_101820370,
                         8u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v45); /*0x100815d8b*/
      v45[3] = v79; /*0x100815d94*/
      v45[2] = (__int64)v78; /*0x100815d9c*/
      v46 = v76; /*0x100815da0*/
      v45[1] = v77; /*0x100815da8*/
      *v45 = v46; /*0x100815dac*/
      if ( v39 ) /*0x100815db2*/
      {
        v58 = 0; /*0x100815db8*/
        v60 = 0; /*0x100815dc3*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45); /*0x100815dce*/
        v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100815ddd*/
        if ( !v47 ) /*0x100815de5*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x1008162d5*/
        *(_WORD *)(v47 + 4) = 29810; /*0x100815dee*/
        *(_DWORD *)v47 = 1868981861; /*0x100815df4*/
        v72 = 6; /*0x100815dfa*/
        v73 = v47; /*0x100815e02*/
        v74 = 6; /*0x100815e06*/
        v48 = a6; /*0x100815e0e*/
        if ( a6 < 0 ) /*0x100815e14*/
        {
          v49 = 0; /*0x100815e1a*/
          goto LABEL_69; /*0x100815e1a*/
        }
        if ( a6 ) /*0x100816059*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6); /*0x10081605b*/
          v49 = 1; /*0x100816060*/
          v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a6, 1); /*0x10081606e*/
          v48 = a6; /*0x100816073*/
          if ( !v53 ) /*0x100816079*/
LABEL_69:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v48); /*0x100815e1d*/
          v10 = v53; /*0x10081607f*/
        }
        else
        {
          v10 = 1; /*0x10081608b*/
        }
        v54 = v48; /*0x100816096*/
        memcpy((void *)v10, v39, v48); /*0x100816099*/
        LOBYTE(v76) = 3; /*0x10081609e*/
        v77 = v54; /*0x1008160a2*/
        v78 = (_QWORD *)v10; /*0x1008160a6*/
        v79 = v54; /*0x1008160aa*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v58, &v72, &v76); /*0x1008160c4*/
        if ( (_BYTE)v68 != 6 ) /*0x1008160d0*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x1008160d9*/
      }
      else
      {
        if ( (v75 & (unsigned __int8)v63) == 0 ) /*0x100815f4a*/
        {
LABEL_90:
          LOBYTE(v10) = 1; /*0x100816141*/
          return (unsigned int)v10; /*0x100816143*/
        }
        v58 = 0; /*0x100815f50*/
        v60 = 0; /*0x100815f5b*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v45); /*0x100815f66*/
        v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100815f75*/
        if ( !v52 ) /*0x100815f7d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100816306*/
        *(_WORD *)(v52 + 4) = 29810; /*0x100815f86*/
        *(_DWORD *)v52 = 1868981861; /*0x100815f8c*/
        v72 = 6; /*0x100815f92*/
        v73 = v52; /*0x100815f9a*/
        v74 = 6; /*0x100815f9e*/
        serde_json::value::to_value::h0cd76aed73b0309e(&v76, &off_101C02578); /*0x100815fb1*/
        if ( (_BYTE)v76 == 6 ) /*0x100815fba*/
        {
          v68 = v77; /*0x1008161b8*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008161e0*/
            &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
            43,
            &v68,
            &off_101C03980,
            &off_101C02588);
        }
        v71 = v79; /*0x100815fc4*/
        v70 = v78; /*0x100815fcc*/
        v69 = v77; /*0x100815fd8*/
        v68 = v76; /*0x100815fdf*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v76, &v58, &v72, &v68); /*0x100815ffc*/
        if ( (_BYTE)v76 != 6 ) /*0x100816005*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v76); /*0x10081600b*/
      }
      v77 = v58; /*0x1008160ec*/
      v78 = v59; /*0x1008160f0*/
      v79 = v60; /*0x1008160fb*/
      LOBYTE(v76) = 5; /*0x1008160ff*/
      v55 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100816117*/
                         "output_configdisplaylow",
                         0xDu);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v55); /*0x10081611d*/
      v55[3] = v79; /*0x100816126*/
      v55[2] = (__int64)v78; /*0x10081612e*/
      v56 = v76; /*0x100816132*/
      v55[1] = v77; /*0x10081613a*/
      *v55 = v56; /*0x10081613e*/
      goto LABEL_90; /*0x10081613e*/
    }
LABEL_18:
    if ( !a7 ) /*0x100815560*/
      goto LABEL_28; /*0x100815560*/
    goto LABEL_19; /*0x100815560*/
  }
  v13 = nullptr; /*0x1008153ed*/
  if ( (a6 & 1) == 0 ) /*0x1008153fb*/
  {
    if ( !v11 ) /*0x100815551*/
      goto LABEL_27; /*0x100815551*/
    v19 = 1; /*0x100815557*/
    v15 = nullptr; /*0x10081555a*/
    goto LABEL_18; /*0x10081555a*/
  }
  v15 = nullptr; /*0x100815401*/
  v16 = v62; /*0x100815403*/
  v14 = v61; /*0x10081540a*/
  a4 = 0; /*0x10081540d*/
  if ( !a7 ) /*0x100815414*/
    goto LABEL_70; /*0x100815414*/
LABEL_8:
  if ( (_BYTE)v63 ) /*0x100815421*/
  {
    v72 = 0; /*0x100815427*/
    v74 = 0; /*0x10081542f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13); /*0x100815437*/
    v17 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100815446*/
    if ( !v17 ) /*0x10081544e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10081622a*/
    *v17 = 1701869940; /*0x100815457*/
    v64 = 4; /*0x10081545d*/
    v65 = v17; /*0x100815468*/
    v66 = 4; /*0x10081546f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x10081547a*/
    v18 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100815489*/
    if ( !v18 ) /*0x100815491*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100816252*/
    *v18 = 0x64656C6261736964LL; /*0x1008154a1*/
    LOBYTE(v76) = 3; /*0x1008154a4*/
    v77 = 8; /*0x1008154a8*/
    v78 = v18; /*0x1008154b0*/
    v79 = 8; /*0x1008154b4*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v72, &v64, &v76); /*0x1008154d2*/
    if ( (_BYTE)v68 != 6 ) /*0x1008154de*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x1008154e7*/
LABEL_33:
    v77 = v72; /*0x1008157b4*/
    v78 = (_QWORD *)v73; /*0x1008157c0*/
    v79 = v74; /*0x1008157c8*/
    LOBYTE(v76) = 5; /*0x1008157cc*/
    v26 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x1008157e4*/
                       &unk_101820370,
                       8u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v26); /*0x1008157ea*/
    v26[3] = v79; /*0x1008157f3*/
    v26[2] = (__int64)v78; /*0x1008157fb*/
    v27 = v76; /*0x1008157ff*/
    v26[1] = v77; /*0x100815807*/
    *v26 = v27; /*0x10081580b*/
    goto LABEL_70; /*0x10081580e*/
  }
  if ( !a4 ) /*0x100815816*/
    goto LABEL_70; /*0x100815816*/
  v61 = (__int64)v15; /*0x10081581c*/
  v63 = v12; /*0x100815823*/
  if ( !codexmate_lib::core::relay::anthropic_reasoning::effort_to_thinking_budget::h17d83fcf4d79aa5d(a4, v14) ) /*0x100815837*/
    goto LABEL_70; /*0x100815837*/
  v10 = v28; /*0x10081583d*/
  v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10081584f*/
          "max_tokensdescriptionparametersstrictobject",
          10,
          v16);
  v30 = 0x2000; /*0x100815854*/
  if ( v29 && *(_BYTE *)v29 == 2 && !*(_QWORD *)(v29 + 8) ) /*0x100815863*/
    v30 = *(_QWORD *)(v29 + 16) >> 1; /*0x10081586e*/
  if ( v30 < v10 ) /*0x100815874*/
    v10 = v30; /*0x100815874*/
  if ( v10 < 0x400 ) /*0x10081587f*/
    goto LABEL_70; /*0x10081587f*/
  v72 = 0; /*0x100815885*/
  v74 = 0; /*0x10081588d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("max_tokensdescriptionparametersstrictobject"); /*0x100815895*/
  v31 = 4; /*0x10081589a*/
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008158aa*/
  if ( !v32 ) /*0x1008158b2*/
    goto LABEL_105; /*0x1008158b2*/
  *v32 = 1701869940; /*0x1008158bb*/
  v64 = 4; /*0x1008158c1*/
  v65 = v32; /*0x1008158cc*/
  v66 = 4; /*0x1008158d3*/
  serde_json::value::to_value::h0cd76aed73b0309e(&v76, &off_101C02510); /*0x1008158e9*/
  if ( (_BYTE)v76 == 6 ) /*0x1008158f2*/
  {
    v68 = v77; /*0x100816182*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008161aa*/
      &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
      43,
      &v68,
      &off_101C03980,
      &off_101C02520);
  }
  v71 = v79; /*0x1008158fc*/
  v70 = v78; /*0x100815904*/
  v69 = v77; /*0x100815910*/
  v68 = v76; /*0x100815917*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v76, &v72, &v64, &v68); /*0x100815934*/
  if ( (_BYTE)v76 != 6 ) /*0x10081593d*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v76); /*0x100815943*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76); /*0x100815948*/
  v31 = 13; /*0x10081594d*/
  v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x10081595d*/
  if ( !v33 ) /*0x100815965*/
LABEL_105:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v31); /*0x1008162e4*/
  qmemcpy(v33, "budget_tokens", 13); /*0x100815983*/
  v64 = 13; /*0x100815986*/
  v65 = v33; /*0x100815991*/
  v66 = 13; /*0x100815998*/
  LOBYTE(v76) = 2; /*0x1008159a3*/
  v77 = 0; /*0x1008159a7*/
  v78 = (_QWORD *)v10; /*0x1008159af*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v68, &v72, &v64, &v76); /*0x1008159c9*/
  if ( (_BYTE)v68 != 6 ) /*0x1008159d5*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v68); /*0x1008159de*/
  v77 = v72; /*0x1008159eb*/
  v78 = (_QWORD *)v73; /*0x1008159ef*/
  v79 = v74; /*0x1008159f7*/
  LOBYTE(v76) = 5; /*0x1008159fb*/
  v34 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100815a13*/
                     &unk_101820370,
                     8u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v34); /*0x100815a19*/
  v34[3] = v79; /*0x100815a22*/
  v34[2] = (__int64)v78; /*0x100815a2a*/
  v35 = v76; /*0x100815a2e*/
  v34[1] = v77; /*0x100815a36*/
  *v34 = v35; /*0x100815a3a*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)&v76, (__int64)a2, a3); /*0x100815a4f*/
  LOBYTE(v10) = 1; /*0x100815a64*/
  if ( (v83 & (v61 != 0)) == 1 ) /*0x100815a68*/
  {
    v58 = v61; /*0x100815a6e*/
    v59 = (_QWORD *)v63; /*0x100815a7c*/
    v72 = 0; /*0x100815a83*/
    v74 = 0; /*0x100815a8b*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v76); /*0x100815a93*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100815aa2*/
    if ( !v36 ) /*0x100815aaa*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100816317*/
    *(_WORD *)(v36 + 4) = 29810; /*0x100815ab3*/
    *(_DWORD *)v36 = 1868981861; /*0x100815ab9*/
    v64 = 6; /*0x100815abf*/
    v65 = (_DWORD *)v36; /*0x100815aca*/
    v66 = 6; /*0x100815ad1*/
    serde_json::value::to_value::h0cd76aed73b0309e(&v76, &v58); /*0x100815ae7*/
    if ( (_BYTE)v76 == 6 ) /*0x100815af0*/
    {
      v68 = v77; /*0x1008161ee*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100816216*/
        &anon_5fc5982723cbea77922f0a3a965b6f67_1788,
        43,
        &v68,
        &off_101C03980,
        &off_101C02538);
    }
    v71 = v79; /*0x100815afa*/
    v70 = v78; /*0x100815b02*/
    v69 = v77; /*0x100815b0e*/
    v68 = v76; /*0x100815b15*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v76, &v72, &v64, &v68); /*0x100815b32*/
    if ( (_BYTE)v76 != 6 ) /*0x100815b3b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v76); /*0x100815b41*/
    v77 = v72; /*0x100815b4e*/
    v78 = (_QWORD *)v73; /*0x100815b52*/
    v79 = v74; /*0x100815b5a*/
    LOBYTE(v76) = 5; /*0x100815b5e*/
    v37 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100815b76*/
                       "output_configdisplaylow",
                       0xDu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v37); /*0x100815b7c*/
    v37[3] = v79; /*0x100815b85*/
    v37[2] = (__int64)v78; /*0x100815b8d*/
    v38 = v76; /*0x100815b91*/
    v37[1] = v77; /*0x100815b99*/
    *v37 = v38; /*0x100815b9d*/
  }
  return (unsigned int)v10; /*0x100815e31*/
}