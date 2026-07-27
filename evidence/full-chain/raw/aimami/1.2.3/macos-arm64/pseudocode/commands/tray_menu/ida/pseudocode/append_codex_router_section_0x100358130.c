// __ZN13codexmate_lib8commands9tray_menu27append_codex_router_section @ 0x100358130 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::tray_menu::append_codex_router_section::h0c903a536860bc98(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax
  char v7; // r13
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rdi
  bool v10; // of
  volatile signed __int64 *v11; // rax
  __int64 v12; // rt0
  volatile signed __int64 *v13; // r15
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 *v16; // rdx
  __int64 (__fastcall *v17)(); // rsi
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 result; // rax
  volatile signed __int64 *v21; // rcx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // r13
  unsigned __int64 *v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  bool v28; // of
  volatile signed __int64 *v29; // rax
  __int64 v30; // rt0
  unsigned __int64 *v31; // r14
  __int64 (__fastcall *v32)(); // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r13
  unsigned __int64 v38; // [rsp+20h] [rbp-340h] BYREF
  volatile signed __int64 *v39; // [rsp+28h] [rbp-338h]
  volatile signed __int64 *v40; // [rsp+30h] [rbp-330h]
  __int64 v41; // [rsp+38h] [rbp-328h]
  __int64 v42; // [rsp+40h] [rbp-320h]
  volatile signed __int64 v43; // [rsp+48h] [rbp-318h]
  __int64 v44; // [rsp+50h] [rbp-310h]
  char v45; // [rsp+144h] [rbp-21Ch]
  unsigned __int64 *v46; // [rsp+148h] [rbp-218h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+150h] [rbp-210h]
  unsigned __int64 *v48; // [rsp+158h] [rbp-208h]
  __int64 v49; // [rsp+160h] [rbp-200h]
  __int64 v50; // [rsp+168h] [rbp-1F8h]
  volatile signed __int64 v51; // [rsp+170h] [rbp-1F0h]
  __int64 v52; // [rsp+178h] [rbp-1E8h]
  unsigned __int64 v53; // [rsp+270h] [rbp-F0h]
  __int64 *v54; // [rsp+278h] [rbp-E8h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+280h] [rbp-E0h]
  __int64 v56; // [rsp+288h] [rbp-D8h]
  unsigned __int64 *v57; // [rsp+290h] [rbp-D0h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+298h] [rbp-C8h]
  unsigned __int64 *v59; // [rsp+2A0h] [rbp-C0h]
  __int64 v60; // [rsp+2A8h] [rbp-B8h]
  __int64 v61; // [rsp+2B0h] [rbp-B0h]
  volatile signed __int64 v62; // [rsp+2B8h] [rbp-A8h]
  __int64 v63; // [rsp+2C0h] [rbp-A0h] BYREF
  _QWORD *v64; // [rsp+2C8h] [rbp-98h]
  __int64 v65; // [rsp+2D0h] [rbp-90h]
  unsigned __int64 *v66; // [rsp+2D8h] [rbp-88h] BYREF
  volatile signed __int64 *v67; // [rsp+2E0h] [rbp-80h]
  unsigned __int64 *v68; // [rsp+2E8h] [rbp-78h]
  __int64 v69; // [rsp+2F0h] [rbp-70h]
  __int64 v70; // [rsp+2F8h] [rbp-68h]
  __int64 v71; // [rsp+300h] [rbp-60h]
  __int64 v72; // [rsp+308h] [rbp-58h]
  __int64 v73; // [rsp+310h] [rbp-50h] BYREF
  __int64 v74; // [rsp+318h] [rbp-48h]
  __int64 v75; // [rsp+320h] [rbp-40h]
  volatile signed __int64 *v76; // [rsp+328h] [rbp-38h] BYREF
  _BYTE v77[41]; // [rsp+337h] [rbp-29h] BYREF

  v6 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x10035815f*/
  if ( !v6 ) /*0x100358167*/
  {
    a1[6] = a3[6]; /*0x100358437*/
    a1[5] = a3[5]; /*0x10035843f*/
    a1[4] = a3[4]; /*0x100358447*/
    a1[3] = a3[3]; /*0x10035844f*/
    a1[2] = a3[2]; /*0x100358457*/
    result = *a3; /*0x10035845b*/
    v21 = (volatile signed __int64 *)a3[1]; /*0x10035845e*/
LABEL_28:
    a1[1] = (__int64)v21; /*0x100358841*/
    *a1 = result; /*0x100358845*/
    return result; /*0x100358848*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555((__int64)&v46, v6); /*0x100358177*/
  codexmate_lib::core::relay::storage::sanitize_for_export::hd2b6ab02ddabbc8b(&v38, &v46); /*0x10035818a*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v46); /*0x100358196*/
  v53 = (unsigned __int64)v40; /*0x1003581a2*/
  v7 = v45; /*0x1003581a9*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(&v38); /*0x1003581b8*/
  v52 = a3[6]; /*0x1003581c1*/
  v51 = a3[5]; /*0x1003581cc*/
  v50 = a3[4]; /*0x1003581d7*/
  v49 = a3[3]; /*0x1003581e2*/
  v48 = (unsigned __int64 *)a3[2]; /*0x1003581ed*/
  v8 = (unsigned __int64 *)*a3; /*0x1003581f4*/
  v47 = (__int64 (__fastcall *)())a3[1]; /*0x1003581fb*/
  v46 = v8; /*0x100358202*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h5badb10701b3083d(&v38, &v46); /*0x100358217*/
  v9 = (unsigned __int64 *)&v57; /*0x10035823a*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::ha9cdd0a5b09fc138( /*0x10035824f*/
    &v57,
    a2,
    &unk_1015E6640,
    24,
    &unk_1015E6658,
    5,
    0,
    0);
  v10 = __OFSUB__(v57, 0x8000000000000025LL); /*0x10035825e*/
  if ( v57 != (unsigned __int64 *)0x8000000000000025LL ) /*0x100358265*/
  {
    v51 = v62; /*0x10035846e*/
    v50 = v61; /*0x10035847c*/
    v49 = v60; /*0x10035848a*/
    v48 = v59; /*0x100358498*/
    v47 = v58; /*0x1003584ad*/
    v46 = v57; /*0x1003584b4*/
    v73 = 0; /*0x1003584bb*/
    v74 = 1; /*0x1003584c3*/
    v75 = 0; /*0x1003584cb*/
    v56 = 1610612768; /*0x1003584d3*/
    v54 = &v73; /*0x1003584e2*/
    v55 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003584f0*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v46, &v54) ) /*0x100358505*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035895b*/
        &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
        55,
        v77,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
        &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
    v22 = v73; /*0x100358512*/
    v23 = v74; /*0x100358516*/
    v24 = v75; /*0x10035851a*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v46); /*0x100358525*/
    a1[1] = v22; /*0x10035852a*/
    a1[2] = v23; /*0x10035852e*/
    a1[3] = v24; /*0x100358532*/
    *a1 = 0x8000000000000000LL; /*0x10035853a*/
    v25 = &v38; /*0x10035853d*/
    return core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(v25); /*0x100358544*/
  }
  v11 = (volatile signed __int64 *)v58; /*0x10035826b*/
  v76 = (volatile signed __int64 *)v58; /*0x100358272*/
  v12 = _InterlockedIncrement64((volatile signed __int64 *)v58); /*0x100358276*/
  if ( (v12 < 0) ^ v10 | (v12 == 0) ) /*0x10035827a*/
    goto LABEL_35; /*0x10035827a*/
  v47 = nullptr; /*0x100358280*/
  v48 = (unsigned __int64 *)v11; /*0x10035828b*/
  v46 = (unsigned __int64 *)0x8000000000000025LL; /*0x100358292*/
  v13 = v40; /*0x100358299*/
  if ( v40 == (volatile signed __int64 *)v38 ) /*0x1003582a7*/
  {
    v9 = &v38; /*0x1003582a9*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v38); /*0x1003582b0*/
  }
  v14 = v39; /*0x1003582b5*/
  v15 = 6LL * (_QWORD)v13; /*0x1003582c0*/
  v39[v15 + 5] = v51; /*0x1003582cb*/
  v14[v15 + 4] = v50; /*0x1003582d7*/
  v14[v15 + 3] = v49; /*0x1003582e3*/
  v14[v15 + 2] = (volatile signed __int64)v48; /*0x1003582ef*/
  v16 = v46; /*0x1003582f4*/
  v17 = v47; /*0x1003582fb*/
  v14[v15 + 1] = (volatile signed __int64)v47; /*0x100358302*/
  v14[v15] = (volatile signed __int64)v16; /*0x100358307*/
  v68 = (unsigned __int64 *)((char *)v13 + 1); /*0x10035830e*/
  v66 = (unsigned __int64 *)v38; /*0x100358320*/
  v67 = v39; /*0x100358327*/
  v69 = v41; /*0x100358332*/
  v70 = v42; /*0x10035833d*/
  v71 = v43; /*0x100358348*/
  v72 = v44; /*0x100358353*/
  if ( !_InterlockedDecrement64(v76) ) /*0x10035835b*/
  {
    v9 = (unsigned __int64 *)&v76; /*0x100358361*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v76); /*0x100358365*/
  }
  if ( !v7 ) /*0x100358374*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v17); /*0x100358549*/
    v18 = 24; /*0x10035854e*/
    v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x10035855e*/
    if ( v26 ) /*0x100358566*/
    {
      v26[2] = 0xA894E7AF90E5AA9CLL; /*0x100358576*/
      v26[1] = 0xE69ABCEFB194E7AFLL; /*0x100358584*/
      *v26 = 0xB7E8BD83E8BA99E6LL; /*0x100358592*/
      v63 = 24; /*0x100358595*/
      v64 = v26; /*0x1003585a0*/
      v65 = 24; /*0x1003585a7*/
      goto LABEL_21; /*0x1003585b2*/
    }
LABEL_34:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x100358987*/
  }
  if ( !v53 ) /*0x100358384*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v17); /*0x1003585b7*/
    v18 = 46; /*0x1003585bc*/
    v27 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1); /*0x1003585cc*/
    if ( v27 ) /*0x1003585d4*/
    {
      *(_QWORD *)((char *)v27 + 38) = 0x8B9EE5A1A8E6ACBDLL; /*0x1003585e4*/
      v27[4] = 0xACBDE8ADB8E4A097LL; /*0x1003585f2*/
      v27[3] = 0xE6829AE620B7C220LL; /*0x100358600*/
      v27[2] = 0xA894E7AF90E5B2B7LL; /*0x10035860e*/
      v27[1] = 0xE59ABCEFB194E7AFLL; /*0x10035861c*/
      *v27 = 0xB7E8BD83E8BA99E6LL; /*0x10035862a*/
      v63 = 46; /*0x10035862d*/
      v64 = v27; /*0x100358638*/
      v65 = 46; /*0x10035863f*/
      goto LABEL_21; /*0x10035864a*/
    }
    goto LABEL_34; /*0x1003585d4*/
  }
  if ( v53 != 1 ) /*0x10035838e*/
  {
    v38 = v53; /*0x10035864c*/
    v46 = &v38; /*0x100358653*/
    v47 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100358661*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v63, &unk_1017BCA41, &v46); /*0x10035867d*/
    goto LABEL_21; /*0x10035867d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v17); /*0x100358394*/
  v18 = 52; /*0x100358399*/
  v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x1003583a9*/
  if ( !v19 ) /*0x1003583b1*/
    goto LABEL_34; /*0x1003583b1*/
  *(_QWORD *)(v19 + 40) = 0xA8E6ACBDE8ADB8E4LL; /*0x1003583c1*/
  *(_QWORD *)(v19 + 32) = 0xAAB8E4203120B194LL; /*0x1003583cf*/
  *(_QWORD *)(v19 + 24) = 0xE7AFB7E820B7C220LL; /*0x1003583dd*/
  *(_QWORD *)(v19 + 16) = 0xA894E7AF90E5B2B7LL; /*0x1003583eb*/
  *(_QWORD *)(v19 + 8) = 0xE59ABCEFB194E7AFLL; /*0x1003583f9*/
  *(_QWORD *)v19 = 0xB7E8BD83E8BA99E6LL; /*0x100358407*/
  *(_DWORD *)(v19 + 48) = -1952520799; /*0x10035840a*/
  v63 = 52; /*0x100358411*/
  v64 = (_QWORD *)v19; /*0x10035841c*/
  v65 = 52; /*0x100358423*/
LABEL_21:
  v52 = v72; /*0x100358682*/
  v51 = v71; /*0x100358691*/
  v50 = v70; /*0x10035869c*/
  v49 = v69; /*0x1003586a7*/
  v48 = v68; /*0x1003586b2*/
  v47 = (__int64 (__fastcall *)())v67; /*0x1003586c4*/
  v46 = v66; /*0x1003586cb*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::hd32af50c747a7995( /*0x1003586fd*/
    &v57,
    a2,
    "tray_codex_router_statustray_quittray_account:",
    24,
    &v63,
    1,
    0);
  v28 = __OFSUB__(v57, 0x8000000000000025LL); /*0x100358702*/
  if ( v57 == (unsigned __int64 *)0x8000000000000025LL ) /*0x100358709*/
  {
    v29 = (volatile signed __int64 *)v58; /*0x10035870f*/
    v76 = (volatile signed __int64 *)v58; /*0x100358716*/
    v30 = _InterlockedIncrement64((volatile signed __int64 *)v58); /*0x10035871a*/
    if ( !((v30 < 0) ^ v28 | (v30 == 0)) ) /*0x10035871e*/
    {
      v39 = nullptr; /*0x100358724*/
      v40 = v29; /*0x10035872f*/
      v38 = 0x8000000000000025LL; /*0x100358736*/
      v31 = v48; /*0x10035873d*/
      if ( v48 == v46 ) /*0x10035874b*/
      {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v46); /*0x100358754*/
        v29 = v76; /*0x100358759*/
      }
      v32 = v47; /*0x10035875d*/
      v33 = 48LL * (_QWORD)v31; /*0x100358768*/
      *(_QWORD *)((char *)v47 + v33 + 40) = v43; /*0x100358773*/
      *(_QWORD *)((char *)v32 + v33 + 32) = v42; /*0x10035877f*/
      *(_QWORD *)((char *)v32 + v33 + 24) = v41; /*0x10035878b*/
      *(_QWORD *)((char *)v32 + v33 + 16) = v40; /*0x100358797*/
      v34 = v38; /*0x10035879c*/
      *(_QWORD *)((char *)v32 + v33 + 8) = v39; /*0x1003587aa*/
      *(_QWORD *)((char *)v32 + v33) = v34; /*0x1003587af*/
      v68 = (unsigned __int64 *)((char *)v31 + 1); /*0x1003587b6*/
      v66 = v46; /*0x1003587c8*/
      v67 = (volatile signed __int64 *)v47; /*0x1003587cf*/
      v69 = v49; /*0x1003587da*/
      v70 = v50; /*0x1003587e5*/
      v71 = v51; /*0x1003587f0*/
      v72 = v52; /*0x1003587fb*/
      if ( !_InterlockedDecrement64(v29) ) /*0x1003587ff*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h995b689c33982445(&v76); /*0x100358809*/
      a1[6] = v72; /*0x100358812*/
      a1[5] = v71; /*0x10035881a*/
      a1[4] = v70; /*0x100358822*/
      a1[3] = v69; /*0x10035882a*/
      a1[2] = (__int64)v68; /*0x100358832*/
      result = (__int64)v66; /*0x100358836*/
      v21 = v67; /*0x10035883d*/
      goto LABEL_28; /*0x10035883d*/
    }
LABEL_35:
    BUG(); /*0x100358994*/
  }
  v43 = v62; /*0x100358854*/
  v42 = v61; /*0x100358862*/
  v41 = v60; /*0x100358870*/
  v40 = (volatile signed __int64 *)v59; /*0x10035887e*/
  v39 = (volatile signed __int64 *)v58; /*0x100358893*/
  v38 = (unsigned __int64)v57; /*0x10035889a*/
  v73 = 0; /*0x1003588a1*/
  v74 = 1; /*0x1003588a9*/
  v75 = 0; /*0x1003588b1*/
  v56 = 1610612768; /*0x1003588b9*/
  v54 = &v73; /*0x1003588c8*/
  v55 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003588d6*/
  if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v38, &v54) ) /*0x1003588eb*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100358980*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v77,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  v35 = v73; /*0x1003588f4*/
  v36 = v74; /*0x1003588f8*/
  v37 = v75; /*0x1003588fc*/
  core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v38); /*0x100358907*/
  a1[1] = v35; /*0x10035890c*/
  a1[2] = v36; /*0x100358910*/
  a1[3] = v37; /*0x100358914*/
  *a1 = 0x8000000000000000LL; /*0x10035891c*/
  v25 = (unsigned __int64 *)&v66; /*0x10035891f*/
  return core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::h341d2d420413d251(v25); /*0x10035892b*/
}