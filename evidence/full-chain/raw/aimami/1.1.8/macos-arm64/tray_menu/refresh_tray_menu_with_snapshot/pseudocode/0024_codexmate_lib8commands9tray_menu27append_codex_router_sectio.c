// mac 1.1.8 BACKEND-ONLY refresh_tray_menu_with_snapshot node 0x1004d2d60 depth=2
// codexmate_lib8commands9tray_menu27append_codex_router_section
__int64 __fastcall codexmate_lib::commands::tray_menu::append_codex_router_section::hb12456df8a4e114b(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        double a4,
        double a5)
{
  __int64 v6; // rax
  char v7; // r13
  __int64 v8; // rax
  bool v9; // of
  volatile signed __int64 *v10; // rax
  __int64 v11; // rt0
  volatile signed __int64 *v12; // r15
  volatile signed __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 result; // rax
  volatile signed __int64 *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  bool v26; // of
  volatile signed __int64 *v27; // rax
  __int64 v28; // rt0
  __int64 *v29; // r14
  __int64 (__fastcall *v30)(); // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // r13
  __int64 v36; // [rsp+10h] [rbp-3B0h]
  volatile signed __int64 *v37; // [rsp+20h] [rbp-3A0h] BYREF
  volatile signed __int64 *v38; // [rsp+28h] [rbp-398h]
  volatile signed __int64 *v39; // [rsp+30h] [rbp-390h]
  __int64 v40; // [rsp+38h] [rbp-388h]
  __int64 v41; // [rsp+40h] [rbp-380h]
  volatile signed __int64 v42; // [rsp+48h] [rbp-378h]
  __int64 v43; // [rsp+50h] [rbp-370h]
  char v44; // [rsp+174h] [rbp-24Ch]
  __int64 *v45; // [rsp+178h] [rbp-248h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+180h] [rbp-240h]
  __int64 *v47; // [rsp+188h] [rbp-238h]
  __int64 v48; // [rsp+190h] [rbp-230h]
  __int64 v49; // [rsp+198h] [rbp-228h]
  volatile signed __int64 v50; // [rsp+1A0h] [rbp-220h]
  __int64 v51; // [rsp+1A8h] [rbp-218h]
  __int64 v52; // [rsp+2D0h] [rbp-F0h]
  __int64 *v53; // [rsp+2D8h] [rbp-E8h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+2E0h] [rbp-E0h]
  __int64 v55; // [rsp+2E8h] [rbp-D8h]
  __int64 v56; // [rsp+2F0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v57)(); // [rsp+2F8h] [rbp-C8h]
  __int64 *v58; // [rsp+300h] [rbp-C0h]
  __int64 v59; // [rsp+308h] [rbp-B8h]
  __int64 v60; // [rsp+310h] [rbp-B0h]
  volatile signed __int64 v61; // [rsp+318h] [rbp-A8h]
  size_t v62; // [rsp+320h] [rbp-A0h] BYREF
  _QWORD *v63; // [rsp+328h] [rbp-98h]
  __int64 v64; // [rsp+330h] [rbp-90h]
  __int64 v65; // [rsp+338h] [rbp-88h] BYREF
  volatile signed __int64 *v66; // [rsp+340h] [rbp-80h]
  __int64 *v67; // [rsp+348h] [rbp-78h]
  __int64 v68; // [rsp+350h] [rbp-70h]
  __int64 v69; // [rsp+358h] [rbp-68h]
  __int64 v70; // [rsp+360h] [rbp-60h]
  __int64 v71; // [rsp+368h] [rbp-58h]
  __int64 v72; // [rsp+370h] [rbp-50h] BYREF
  __int64 v73; // [rsp+378h] [rbp-48h]
  __int64 v74; // [rsp+380h] [rbp-40h]
  volatile signed __int64 *v75; // [rsp+388h] [rbp-38h] BYREF
  _BYTE v76[41]; // [rsp+397h] [rbp-29h] BYREF

  v6 = tauri::state::StateManager::try_get::he36bec9b09fd8bd7(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1004d2d8f*/
  if ( !v6 ) /*0x1004d2d97*/
  {
    a1[6] = a3[6]; /*0x1004d3067*/
    a1[5] = a3[5]; /*0x1004d306f*/
    a1[4] = a3[4]; /*0x1004d3077*/
    a1[3] = a3[3]; /*0x1004d307f*/
    a1[2] = a3[2]; /*0x1004d3087*/
    result = *a3; /*0x1004d308b*/
    v19 = (volatile signed __int64 *)a3[1]; /*0x1004d308e*/
LABEL_28:
    a1[1] = (__int64)v19; /*0x1004d3471*/
    *a1 = result; /*0x1004d3475*/
    return result; /*0x1004d3478*/
  }
  codexmate_lib::core::relay::manager::RelayManager::snapshot::h0d4cb54a50479cd3((__int64)&v45, v6, a4, a5); /*0x1004d2da7*/
  codexmate_lib::core::relay::storage::sanitize_for_export::heb20e442c9650b92((__int64)&v37, (__int64)&v45); /*0x1004d2dba*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v45, a4); /*0x1004d2dc6*/
  v52 = (__int64)v39; /*0x1004d2dd2*/
  v7 = v44; /*0x1004d2dd9*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v37); /*0x1004d2de8*/
  v51 = a3[6]; /*0x1004d2df1*/
  v50 = a3[5]; /*0x1004d2dfc*/
  v49 = a3[4]; /*0x1004d2e07*/
  v48 = a3[3]; /*0x1004d2e12*/
  v47 = (__int64 *)a3[2]; /*0x1004d2e1d*/
  v8 = *a3; /*0x1004d2e24*/
  v46 = (__int64 (__fastcall *)())a3[1]; /*0x1004d2e2b*/
  v45 = (__int64 *)v8; /*0x1004d2e32*/
  tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::separator::h03127775174186d9(&v37, &v45); /*0x1004d2e47*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::h01815a187b930204( /*0x1004d2e7f*/
    (unsigned __int64 *)&v56,
    a2,
    &unk_1012C769A,
    24,
    &unk_1012C76B2,
    5,
    0,
    0,
    v36);
  v9 = __OFSUB__(v56, 0x8000000000000025LL); /*0x1004d2e8e*/
  if ( v56 != 0x8000000000000025LL ) /*0x1004d2e95*/
  {
    v50 = v61; /*0x1004d309e*/
    v49 = v60; /*0x1004d30ac*/
    v48 = v59; /*0x1004d30ba*/
    v47 = v58; /*0x1004d30c8*/
    v46 = v57; /*0x1004d30dd*/
    v45 = (__int64 *)v56; /*0x1004d30e4*/
    v72 = 0; /*0x1004d30eb*/
    v73 = 1; /*0x1004d30f3*/
    v74 = 0; /*0x1004d30fb*/
    v55 = 1610612768; /*0x1004d3103*/
    v53 = &v72; /*0x1004d3112*/
    v54 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d3120*/
    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v45, &v53) ) /*0x1004d3135*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d358b*/
        (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwra"
                 "p()` on an `Err` value",
        55,
        (__int64)v76,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
        (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
    v20 = v72; /*0x1004d3142*/
    v21 = v73; /*0x1004d3146*/
    v22 = v74; /*0x1004d314a*/
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v45); /*0x1004d3155*/
    a1[1] = v20; /*0x1004d315a*/
    a1[2] = v21; /*0x1004d315e*/
    a1[3] = v22; /*0x1004d3162*/
    *a1 = 0x8000000000000000LL; /*0x1004d316a*/
    v23 = (__int64 *)&v37; /*0x1004d316d*/
    return core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(v23); /*0x1004d3174*/
  }
  v10 = (volatile signed __int64 *)v57; /*0x1004d2e9b*/
  v75 = (volatile signed __int64 *)v57; /*0x1004d2ea2*/
  v11 = _InterlockedIncrement64((volatile signed __int64 *)v57); /*0x1004d2ea6*/
  if ( (v11 < 0) ^ v9 | (v11 == 0) ) /*0x1004d2eaa*/
    goto LABEL_35; /*0x1004d2eaa*/
  v46 = nullptr; /*0x1004d2eb0*/
  v47 = (__int64 *)v10; /*0x1004d2ebb*/
  v45 = (__int64 *)0x8000000000000025LL; /*0x1004d2ec2*/
  v12 = v39; /*0x1004d2ec9*/
  if ( v39 == v37 ) /*0x1004d2ed7*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v37); /*0x1004d2ee0*/
  v13 = v38; /*0x1004d2ee5*/
  v14 = 6LL * (_QWORD)v12; /*0x1004d2ef0*/
  v38[v14 + 5] = v50; /*0x1004d2efb*/
  v13[v14 + 4] = v49; /*0x1004d2f07*/
  v13[v14 + 3] = v48; /*0x1004d2f13*/
  v13[v14 + 2] = (volatile signed __int64)v47; /*0x1004d2f1f*/
  v15 = (__int64)v45; /*0x1004d2f24*/
  v13[v14 + 1] = (volatile signed __int64)v46; /*0x1004d2f32*/
  v13[v14] = v15; /*0x1004d2f37*/
  v67 = (__int64 *)((char *)v12 + 1); /*0x1004d2f3e*/
  v65 = (__int64)v37; /*0x1004d2f50*/
  v66 = v38; /*0x1004d2f57*/
  v68 = v40; /*0x1004d2f62*/
  v69 = v41; /*0x1004d2f6d*/
  v70 = v42; /*0x1004d2f78*/
  v71 = v43; /*0x1004d2f83*/
  if ( !_InterlockedDecrement64(v75) ) /*0x1004d2f8b*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v75); /*0x1004d2f95*/
  if ( !v7 ) /*0x1004d2fa4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d3179*/
    v16 = 24; /*0x1004d317e*/
    v24 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 1u); /*0x1004d318e*/
    if ( v24 ) /*0x1004d3196*/
    {
      v24[2] = 0xA894E7AF90E5AA9CLL; /*0x1004d31a6*/
      v24[1] = 0xE69ABCEFB194E7AFLL; /*0x1004d31b4*/
      *v24 = 0xB7E8BD83E8BA99E6LL; /*0x1004d31c2*/
      v62 = 24; /*0x1004d31c5*/
      v63 = v24; /*0x1004d31d0*/
      v64 = 24; /*0x1004d31d7*/
      goto LABEL_21; /*0x1004d31e2*/
    }
LABEL_34:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16); /*0x1004d35b7*/
  }
  if ( !v52 ) /*0x1004d2fb4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d31e7*/
    v16 = 46; /*0x1004d31ec*/
    v25 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x2Eu, 1u); /*0x1004d31fc*/
    if ( v25 ) /*0x1004d3204*/
    {
      *(_QWORD *)((char *)v25 + 38) = 0x8B9EE5A1A8E6ACBDLL; /*0x1004d3214*/
      v25[4] = 0xACBDE8ADB8E4A097LL; /*0x1004d3222*/
      v25[3] = 0xE6829AE620B7C220LL; /*0x1004d3230*/
      v25[2] = 0xA894E7AF90E5B2B7LL; /*0x1004d323e*/
      v25[1] = 0xE59ABCEFB194E7AFLL; /*0x1004d324c*/
      *v25 = 0xB7E8BD83E8BA99E6LL; /*0x1004d325a*/
      v62 = 46; /*0x1004d325d*/
      v63 = v25; /*0x1004d3268*/
      v64 = 46; /*0x1004d326f*/
      goto LABEL_21; /*0x1004d327a*/
    }
    goto LABEL_34; /*0x1004d3204*/
  }
  if ( v52 != 1 ) /*0x1004d2fbe*/
  {
    v37 = (volatile signed __int64 *)v52; /*0x1004d327c*/
    v45 = (__int64 *)&v37; /*0x1004d3283*/
    v46 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004d3291*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62, byte_10122A5ED, (unsigned __int64)&v45); /*0x1004d32ad*/
    goto LABEL_21; /*0x1004d32ad*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d2fc4*/
  v16 = 52; /*0x1004d2fc9*/
  v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x34u, 1u); /*0x1004d2fd9*/
  if ( !v17 ) /*0x1004d2fe1*/
    goto LABEL_34; /*0x1004d2fe1*/
  *(_QWORD *)(v17 + 40) = 0xA8E6ACBDE8ADB8E4LL; /*0x1004d2ff1*/
  *(_QWORD *)(v17 + 32) = 0xAAB8E4203120B194LL; /*0x1004d2fff*/
  *(_QWORD *)(v17 + 24) = 0xE7AFB7E820B7C220LL; /*0x1004d300d*/
  *(_QWORD *)(v17 + 16) = 0xA894E7AF90E5B2B7LL; /*0x1004d301b*/
  *(_QWORD *)(v17 + 8) = 0xE59ABCEFB194E7AFLL; /*0x1004d3029*/
  *(_QWORD *)v17 = 0xB7E8BD83E8BA99E6LL; /*0x1004d3037*/
  *(_DWORD *)(v17 + 48) = -1952520799; /*0x1004d303a*/
  v62 = 52; /*0x1004d3041*/
  v63 = (_QWORD *)v17; /*0x1004d304c*/
  v64 = 52; /*0x1004d3053*/
LABEL_21:
  v51 = v71; /*0x1004d32b2*/
  v50 = v70; /*0x1004d32c1*/
  v49 = v69; /*0x1004d32cc*/
  v48 = v68; /*0x1004d32d7*/
  v47 = v67; /*0x1004d32e2*/
  v46 = (__int64 (__fastcall *)())v66; /*0x1004d32f4*/
  v45 = (__int64 *)v65; /*0x1004d32fb*/
  tauri::menu::normal::_$LT$impl$u20$tauri..menu..MenuItem$LT$R$GT$$GT$::with_id::he2bc2e6436b64f1a( /*0x1004d332d*/
    &v56,
    a2,
    "tray_codex_router_statustray_quittray_account:",
    24,
    &v62,
    1,
    0);
  v26 = __OFSUB__(v56, 0x8000000000000025LL); /*0x1004d3332*/
  if ( v56 == 0x8000000000000025LL ) /*0x1004d3339*/
  {
    v27 = (volatile signed __int64 *)v57; /*0x1004d333f*/
    v75 = (volatile signed __int64 *)v57; /*0x1004d3346*/
    v28 = _InterlockedIncrement64((volatile signed __int64 *)v57); /*0x1004d334a*/
    if ( !((v28 < 0) ^ v26 | (v28 == 0)) ) /*0x1004d334e*/
    {
      v38 = nullptr; /*0x1004d3354*/
      v39 = v27; /*0x1004d335f*/
      v37 = (volatile signed __int64 *)0x8000000000000025LL; /*0x1004d3366*/
      v29 = v47; /*0x1004d336d*/
      if ( v47 == v45 ) /*0x1004d337b*/
      {
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d((__int64 *)&v45); /*0x1004d3384*/
        v27 = v75; /*0x1004d3389*/
      }
      v30 = v46; /*0x1004d338d*/
      v31 = 48LL * (_QWORD)v29; /*0x1004d3398*/
      *(_QWORD *)((char *)v46 + v31 + 40) = v42; /*0x1004d33a3*/
      *(_QWORD *)((char *)v30 + v31 + 32) = v41; /*0x1004d33af*/
      *(_QWORD *)((char *)v30 + v31 + 24) = v40; /*0x1004d33bb*/
      *(_QWORD *)((char *)v30 + v31 + 16) = v39; /*0x1004d33c7*/
      v32 = (__int64)v37; /*0x1004d33cc*/
      *(_QWORD *)((char *)v30 + v31 + 8) = v38; /*0x1004d33da*/
      *(_QWORD *)((char *)v30 + v31) = v32; /*0x1004d33df*/
      v67 = (__int64 *)((char *)v29 + 1); /*0x1004d33e6*/
      v65 = (__int64)v45; /*0x1004d33f8*/
      v66 = (volatile signed __int64 *)v46; /*0x1004d33ff*/
      v68 = v48; /*0x1004d340a*/
      v69 = v49; /*0x1004d3415*/
      v70 = v50; /*0x1004d3420*/
      v71 = v51; /*0x1004d342b*/
      if ( !_InterlockedDecrement64(v27) ) /*0x1004d342f*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hbf66c467b26f4a0a((__int64 *)&v75); /*0x1004d3439*/
      a1[6] = v71; /*0x1004d3442*/
      a1[5] = v70; /*0x1004d344a*/
      a1[4] = v69; /*0x1004d3452*/
      a1[3] = v68; /*0x1004d345a*/
      a1[2] = (__int64)v67; /*0x1004d3462*/
      result = v65; /*0x1004d3466*/
      v19 = v66; /*0x1004d346d*/
      goto LABEL_28; /*0x1004d346d*/
    }
LABEL_35:
    BUG(); /*0x1004d35c4*/
  }
  v42 = v61; /*0x1004d3484*/
  v41 = v60; /*0x1004d3492*/
  v40 = v59; /*0x1004d34a0*/
  v39 = v58; /*0x1004d34ae*/
  v38 = (volatile signed __int64 *)v57; /*0x1004d34c3*/
  v37 = (volatile signed __int64 *)v56; /*0x1004d34ca*/
  v72 = 0; /*0x1004d34d1*/
  v73 = 1; /*0x1004d34d9*/
  v74 = 0; /*0x1004d34e1*/
  v55 = 1610612768; /*0x1004d34e9*/
  v53 = &v72; /*0x1004d34f8*/
  v54 = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d3506*/
  if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(&v37, &v53) ) /*0x1004d351b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d35b0*/
      (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap("
               ")` on an `Err` value",
      55,
      (__int64)v76,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
  v33 = v72; /*0x1004d3524*/
  v34 = v73; /*0x1004d3528*/
  v35 = v74; /*0x1004d352c*/
  core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v37); /*0x1004d3537*/
  a1[1] = v33; /*0x1004d353c*/
  a1[2] = v34; /*0x1004d3540*/
  a1[3] = v35; /*0x1004d3544*/
  *a1 = 0x8000000000000000LL; /*0x1004d354c*/
  v23 = &v65; /*0x1004d354f*/
  return core::ptr::drop_in_place$LT$tauri..menu..builders..menu..MenuBuilder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$C$tauri..app..AppHandle$GT$$GT$::hb3521e827dc0d396(v23); /*0x1004d355b*/
}