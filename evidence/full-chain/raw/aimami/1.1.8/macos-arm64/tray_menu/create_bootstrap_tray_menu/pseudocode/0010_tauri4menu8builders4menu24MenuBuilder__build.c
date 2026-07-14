// mac 1.1.8 BACKEND-ONLY create_bootstrap_tray_menu node 0x10079cd60 depth=1
// tauri4menu8builders4menu24MenuBuilder::build
_QWORD *__fastcall tauri::menu::builders::menu::MenuBuilder$LT$R$C$M$GT$::build::h2a8e6475e31a37a1(
        _QWORD *a1,
        __int64 *a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile signed __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r13
  _QWORD *v18; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+8h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-90h] BYREF
  __int64 v25; // [rsp+38h] [rbp-88h]
  __int64 v26; // [rsp+40h] [rbp-80h]
  __int64 v27; // [rsp+48h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-70h] BYREF
  volatile signed __int64 *v29; // [rsp+58h] [rbp-68h]
  __int64 v30; // [rsp+60h] [rbp-60h]
  __int64 v31; // [rsp+68h] [rbp-58h]
  __int64 v32; // [rsp+70h] [rbp-50h]
  __int64 v33; // [rsp+78h] [rbp-48h]
  _QWORD *v34; // [rsp+80h] [rbp-40h]
  _QWORD *v35; // [rsp+88h] [rbp-38h]
  volatile signed __int64 *v36[6]; // [rsp+90h] [rbp-30h] BYREF

  v2 = a2[3] == 0x8000000000000000LL; /*0x10079cd88*/
  v35 = a1; /*0x10079cd8c*/
  if ( v2 ) /*0x10079cd90*/
  {
    tauri::menu::menu::_$LT$impl$u20$tauri..menu..Menu$LT$R$GT$$GT$::new::hafe639ae32e20672(&v28, a2[6]); /*0x10079cd9a*/
  }
  else
  {
    v22[2] = a2[5]; /*0x10079cda9*/
    v3 = a2[3]; /*0x10079cdb0*/
    v22[1] = a2[4]; /*0x10079cdb7*/
    v22[0] = v3; /*0x10079cdbe*/
    tauri::menu::menu::_$LT$impl$u20$tauri..menu..Menu$LT$R$GT$$GT$::with_id::h21b5f66f2779482d(&v28, a2[6], v22); /*0x10079cdd4*/
  }
  v4 = v28; /*0x10079cdd9*/
  v5 = v29; /*0x10079cddd*/
  if ( v28 == 0x8000000000000025LL ) /*0x10079cde4*/
  {
    v36[0] = v29; /*0x10079cdea*/
    v6 = *a2; /*0x10079cdee*/
    v7 = a2[1]; /*0x10079cdf1*/
    v8 = a2[2]; /*0x10079cdf5*/
    v9 = v7 + 48 * v8; /*0x10079ce01*/
    v24 = v7; /*0x10079ce04*/
    v25 = v7; /*0x10079ce0b*/
    v26 = v6; /*0x10079ce12*/
    v27 = v9; /*0x10079ce16*/
    if ( v8 ) /*0x10079ce1d*/
    {
      v10 = v7 + 48; /*0x10079ce23*/
      while ( 1 ) /*0x10079ce40*/
      {
        v11 = *(_QWORD *)(v10 - 48); /*0x10079ce40*/
        if ( v11 == 0x8000000000000026LL ) /*0x10079ce48*/
          goto LABEL_12; /*0x10079ce48*/
        v12 = *(_QWORD *)(v10 - 40); /*0x10079ce4a*/
        v13 = *(_QWORD *)(v10 - 32); /*0x10079ce4f*/
        if ( v11 != 0x8000000000000025LL ) /*0x10079ce57*/
        {
          v25 = v10; /*0x10079cf6a*/
          v15 = v35; /*0x10079cf76*/
          v35[5] = *(_QWORD *)(v10 - 8); /*0x10079cf7a*/
          v20 = *(_QWORD *)(v10 - 24); /*0x10079cf7e*/
          v15[4] = *(_QWORD *)(v10 - 16); /*0x10079cf88*/
          v15[3] = v20; /*0x10079cf8c*/
          *v15 = v11; /*0x10079cf90*/
          v15[1] = v12; /*0x10079cf93*/
          v15[2] = v13; /*0x10079cf97*/
          goto LABEL_25; /*0x10079cf9b*/
        }
        v23[0] = *(_QWORD *)(v10 - 40); /*0x10079ce5d*/
        v23[1] = v13; /*0x10079ce64*/
        tauri::menu::menu::_$LT$impl$u20$tauri..menu..Menu$LT$R$GT$$GT$::append::hce98074fd67b6b6c( /*0x10079ce7d*/
          &v28,
          v36,
          v23,
          &off_101539340);
        if ( v28 != 0x8000000000000025LL ) /*0x10079ce86*/
          break; /*0x10079ce86*/
        core::ptr::drop_in_place$LT$tauri..menu..MenuItemKind$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hcec6fb33b8c2f67f(v23); /*0x10079ce8f*/
        v14 = v10 - 48; /*0x10079ce94*/
        v10 += 48; /*0x10079ce99*/
        if ( v14 + 48 == v9 ) /*0x10079cea4*/
        {
          v10 = v9; /*0x10079cea6*/
LABEL_12:
          v25 = v10; /*0x10079cea9*/
          goto LABEL_13; /*0x10079cea9*/
        }
      }
      v25 = v10; /*0x10079cf9d*/
      v15 = v35; /*0x10079cfa8*/
      v35[5] = v33; /*0x10079cfac*/
      v15[4] = v32; /*0x10079cfb4*/
      v15[3] = v31; /*0x10079cfbc*/
      v15[2] = v30; /*0x10079cfc4*/
      v21 = v28; /*0x10079cfc8*/
      v15[1] = v29; /*0x10079cfd0*/
      *v15 = v21; /*0x10079cfd4*/
      core::ptr::drop_in_place$LT$tauri..menu..MenuItemKind$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hcec6fb33b8c2f67f(v23); /*0x10079cfde*/
LABEL_25:
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h971db9dc5ebef0e3(&v24); /*0x10079cfe3*/
      if ( !_InterlockedDecrement64(v36[0]) ) /*0x10079cff3*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12106b736b96e93e((__int64 *)v36); /*0x10079d001*/
    }
    else
    {
LABEL_13:
      _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h971db9dc5ebef0e3(&v24); /*0x10079ceb0*/
      v15 = v35; /*0x10079cebc*/
      v35[1] = v36[0]; /*0x10079cec4*/
      *v15 = 0x8000000000000025LL; /*0x10079cec8*/
    }
  }
  else
  {
    a1[5] = v33; /*0x10079ced4*/
    a1[4] = v32; /*0x10079cedc*/
    v16 = v30; /*0x10079cee0*/
    a1[3] = v31; /*0x10079cee8*/
    a1[2] = v16; /*0x10079ceec*/
    *a1 = v4; /*0x10079cef0*/
    a1[1] = v5; /*0x10079cef3*/
    v34 = (_QWORD *)a2[1]; /*0x10079cefb*/
    v17 = a2[2]; /*0x10079ceff*/
    if ( v17 ) /*0x10079cf06*/
    {
      v18 = v34; /*0x10079cf08*/
      do /*0x10079cf1f*/
      {
        if ( *v18 == 0x8000000000000025LL ) /*0x10079cf25*/
          core::ptr::drop_in_place$LT$tauri..menu..MenuItemKind$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$::hcec6fb33b8c2f67f(v18 + 1); /*0x10079cf2c*/
        else
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(v18); /*0x10079cf13*/
        v18 += 6; /*0x10079cf18*/
        --v17; /*0x10079cf1c*/
      }
      while ( v17 ); /*0x10079cf1f*/
    }
    v15 = v35; /*0x10079cf39*/
    if ( *a2 ) /*0x10079cf33*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10079cf50*/
  }
  return v15; /*0x10079cf58*/
}