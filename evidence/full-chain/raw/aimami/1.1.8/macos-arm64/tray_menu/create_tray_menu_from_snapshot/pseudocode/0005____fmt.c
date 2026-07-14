// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x100e87610 depth=1
// _::fmt
char __fastcall _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int8 *v5; // rdx
  char result; // al
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r8
  __int64 v14; // rdi
  _QWORD *v15; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-50h] BYREF
  _QWORD *v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+28h] [rbp-38h]
  _QWORD *v19; // [rsp+30h] [rbp-30h]
  __int64 (__fastcall *v20)(); // [rsp+38h] [rbp-28h]
  _QWORD *v21; // [rsp+40h] [rbp-20h]
  __int64 (__fastcall *v22)(); // [rsp+48h] [rbp-18h]
  _QWORD *v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]

  v2 = 10; /*0x100e8762b*/
  if ( *a1 < 0 ) /*0x100e87630*/
    v2 = *a1 ^ 0x8000000000000000LL; /*0x100e87630*/
  switch ( v2 ) /*0x100e87642*/
  {
    case 0uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87648*/
      v17 = &v23; /*0x100e87650*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd1956f915eb4974a; /*0x100e8765b*/
      v3 = *a2; /*0x100e8765f*/
      v4 = a2[1]; /*0x100e87662*/
      v5 = (unsigned __int8 *)&unk_101247DB6; /*0x100e87666*/
      goto LABEL_38; /*0x100e8766d*/
    case 1uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e878aa*/
      v17 = &v23; /*0x100e878b2*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15c5ef4d0377b241; /*0x100e878bd*/
      v3 = *a2; /*0x100e878c1*/
      v4 = a2[1]; /*0x100e878c4*/
      v5 = (unsigned __int8 *)&unk_101247DC8; /*0x100e878c8*/
      goto LABEL_38; /*0x100e878cf*/
    case 2uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87831*/
      v17 = &v23; /*0x100e87839*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15c5ef4d0377b241; /*0x100e87844*/
      v3 = *a2; /*0x100e87848*/
      v4 = a2[1]; /*0x100e8784b*/
      v5 = (unsigned __int8 *)&unk_101247DF1; /*0x100e8784f*/
      goto LABEL_38; /*0x100e87856*/
    case 3uLL: /*0x100e87642*/
      v7 = "cannot reparent when using a WebviewWindowUnexpected `raw_window_handle` for the current platformfailed to receive messagepath does not have a parentpath does not have an extensionpath does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e87867*/
      v8 = 42; /*0x100e8786e*/
      goto LABEL_43; /*0x100e87873*/
    case 4uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87788*/
      v17 = &v23; /*0x100e87790*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15c5ef4d0377b241; /*0x100e8779b*/
      v3 = *a2; /*0x100e8779f*/
      v4 = a2[1]; /*0x100e877a2*/
      v5 = (unsigned __int8 *)&unk_101247E1B; /*0x100e877a6*/
      goto LABEL_38; /*0x100e877ad*/
    case 5uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87942*/
      v17 = &v23; /*0x100e8794a*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h97d8242abea4657d; /*0x100e87955*/
      v3 = *a2; /*0x100e87959*/
      v4 = a2[1]; /*0x100e8795c*/
      v5 = (unsigned __int8 *)&unk_10122A9A6; /*0x100e87960*/
      goto LABEL_38; /*0x100e87967*/
    case 6uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e879b7*/
      v17 = &v23; /*0x100e879bf*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h588dd8be3db9e980; /*0x100e879ca*/
      v3 = *a2; /*0x100e879ce*/
      v4 = a2[1]; /*0x100e879d1*/
      v5 = (unsigned __int8 *)&unk_101224633; /*0x100e879d5*/
      goto LABEL_38; /*0x100e879dc*/
    case 7uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e8787c*/
      v17 = &v23; /*0x100e87884*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h588dd8be3db9e980; /*0x100e8788f*/
      v3 = *a2; /*0x100e87893*/
      v4 = a2[1]; /*0x100e87896*/
      v5 = (unsigned __int8 *)&unk_101247E2F; /*0x100e8789a*/
      goto LABEL_38; /*0x100e878a1*/
    case 8uLL: /*0x100e87642*/
      v10 = a1 + 5; /*0x100e87a2d*/
      v11 = a1[3]; /*0x100e87a31*/
      v12 = a1[4]; /*0x100e87a35*/
      v13 = (_QWORD *)a1[1]; /*0x100e87a39*/
      v14 = a1[2]; /*0x100e87a3d*/
      v16[0] = v11; /*0x100e87a41*/
      v16[1] = v12; /*0x100e87a45*/
      v23 = v13; /*0x100e87a49*/
      v24 = v14; /*0x100e87a4d*/
      v15 = v10; /*0x100e87a51*/
      v17 = v16; /*0x100e87a59*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9f500959180822c3; /*0x100e87a64*/
      v19 = &v23; /*0x100e87a6c*/
      v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9f500959180822c3; /*0x100e87a70*/
      v21 = &v15; /*0x100e87a78*/
      v22 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h97d8242abea4657d; /*0x100e87a83*/
      v3 = *a2; /*0x100e87a87*/
      v4 = a2[1]; /*0x100e87a8a*/
      v5 = (unsigned __int8 *)&unk_101247E40; /*0x100e87a8e*/
      goto LABEL_38; /*0x100e87a95*/
    case 9uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e877c4*/
      v17 = &v23; /*0x100e877cc*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h314489f63fb677c7; /*0x100e877d7*/
      v3 = *a2; /*0x100e877db*/
      v4 = a2[1]; /*0x100e877de*/
      v5 = (unsigned __int8 *)&unk_101247E67; /*0x100e877e2*/
      goto LABEL_38; /*0x100e877e9*/
    case 0xAuLL: /*0x100e87642*/
      v16[0] = a1; /*0x100e879ef*/
      v23 = a1 + 3; /*0x100e879f7*/
      v17 = v16; /*0x100e879ff*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15c5ef4d0377b241; /*0x100e87a0a*/
      v19 = &v23; /*0x100e87a12*/
      v20 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h15c5ef4d0377b241; /*0x100e87a16*/
      v3 = *a2; /*0x100e87a1a*/
      v4 = a2[1]; /*0x100e87a1d*/
      v5 = (unsigned __int8 *)&unk_101247E8F; /*0x100e87a21*/
      goto LABEL_38; /*0x100e87a28*/
    case 0xBuLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e8775a*/
      v17 = &v23; /*0x100e87762*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfafc4c7e72d5e7c2; /*0x100e8776d*/
      v3 = *a2; /*0x100e87771*/
      v4 = a2[1]; /*0x100e87774*/
      v5 = (unsigned __int8 *)&unk_101247EB4; /*0x100e87778*/
      goto LABEL_38; /*0x100e8777f*/
    case 0xCuLL: /*0x100e87642*/
      return _$LT$tokio..runtime..task..error..JoinError$u20$as$u20$core..fmt..Display$GT$::fmt::hdf15cef7f5d3bf2b(a1 + 1); /*0x100e877bb*/
    case 0xDuLL: /*0x100e87642*/
      v9 = a1[2]; /*0x100e87981*/
      v23 = (_QWORD *)a1[1]; /*0x100e87985*/
      v24 = v9; /*0x100e87989*/
      v17 = &v23; /*0x100e87991*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9f500959180822c3; /*0x100e8799c*/
      v3 = *a2; /*0x100e879a0*/
      v4 = a2[1]; /*0x100e879a3*/
      v5 = (unsigned __int8 *)&unk_101247EC4; /*0x100e879a7*/
      goto LABEL_38; /*0x100e879ae*/
    case 0xEuLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e876fe*/
      v17 = &v23; /*0x100e87706*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c1fa356a845540c; /*0x100e87711*/
      v3 = *a2; /*0x100e87715*/
      v4 = a2[1]; /*0x100e87718*/
      v5 = (unsigned __int8 *)&unk_10124702E; /*0x100e8771c*/
      goto LABEL_38; /*0x100e87723*/
    case 0xFuLL: /*0x100e87642*/
      v7 = "Unexpected `raw_window_handle` for the current platformfailed to receive messagepath does not have a parentpath does not have an extensionpath does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e8785b*/
      goto LABEL_34; /*0x100e87862*/
    case 0x10uLL: /*0x100e87642*/
      v7 = "failed to receive messagepath does not have a parentpath does not have an extensionpath does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e876e9*/
      v8 = 25; /*0x100e876f0*/
      goto LABEL_43; /*0x100e876f5*/
    case 0x11uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87906*/
      v17 = &v23; /*0x100e8790e*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7131789462a9f489; /*0x100e87919*/
      v3 = *a2; /*0x100e8791d*/
      v4 = a2[1]; /*0x100e87920*/
      v5 = (unsigned __int8 *)&unk_101247EDB; /*0x100e87924*/
      goto LABEL_38; /*0x100e8792b*/
    case 0x12uLL: /*0x100e87642*/
      return _$LT$muda..icon..BadIcon$u20$as$u20$core..fmt..Display$GT$::fmt::hff459b6a5f3db842(a1 + 1); /*0x100e879ea*/
    case 0x13uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87ac8*/
      v17 = &v23; /*0x100e87ad0*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc6a92048571bed62; /*0x100e87adb*/
      v3 = *a2; /*0x100e87adf*/
      v4 = a2[1]; /*0x100e87ae2*/
      v5 = (unsigned __int8 *)&unk_101247EEA; /*0x100e87ae6*/
      goto LABEL_38; /*0x100e87ae6*/
    case 0x14uLL: /*0x100e87642*/
      return _$LT$tray_icon..icon..BadIcon$u20$as$u20$core..fmt..Display$GT$::fmt::hf393be2073f7a3c8(a1 + 1); /*0x100e87939*/
    case 0x15uLL: /*0x100e87642*/
      v7 = "path does not have a parentpath does not have an extensionpath does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e8796c*/
      v8 = 27; /*0x100e87973*/
      goto LABEL_43; /*0x100e87978*/
    case 0x16uLL: /*0x100e87642*/
      v7 = "path does not have an extensionpath does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e87ab6*/
      v8 = 31; /*0x100e87abd*/
      goto LABEL_43; /*0x100e87ac2*/
    case 0x17uLL: /*0x100e87642*/
      v7 = "path does not have a basenameunknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e87afc*/
      v8 = 29; /*0x100e87b03*/
      goto LABEL_43; /*0x100e87b08*/
    case 0x18uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87803*/
      v17 = &v23; /*0x100e8780b*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h588dd8be3db9e980; /*0x100e87816*/
      v3 = *a2; /*0x100e8781a*/
      v4 = a2[1]; /*0x100e8781d*/
      v5 = (unsigned __int8 *)&unk_101247EFE; /*0x100e87821*/
      goto LABEL_38; /*0x100e87828*/
    case 0x19uLL: /*0x100e87642*/
      v7 = "unknown pathwebview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e877ee*/
      v8 = 12; /*0x100e877f5*/
      goto LABEL_43; /*0x100e877fa*/
    case 0x1AuLL: /*0x100e87642*/
      v7 = (char *)&unk_101356CE0; /*0x100e87b26*/
      v8 = 16; /*0x100e87b2d*/
      goto LABEL_43; /*0x100e87b2d*/
    case 0x1BuLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e876ae*/
      v17 = &v23; /*0x100e876b6*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h439a076e97d06bc9; /*0x100e876c1*/
      v3 = *a2; /*0x100e876c5*/
      v4 = a2[1]; /*0x100e876c8*/
      v5 = (unsigned __int8 *)&unk_101247F1D; /*0x100e876cc*/
      goto LABEL_38; /*0x100e876d3*/
    case 0x1CuLL: /*0x100e87642*/
      return anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::he3d8e265b7c41f4d(a1 + 1); /*0x100e87b13*/
    case 0x1DuLL: /*0x100e87642*/
      v7 = "webview not foundthis feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e87b18*/
      v8 = 17; /*0x100e87b1f*/
      goto LABEL_43; /*0x100e87b24*/
    case 0x1EuLL: /*0x100e87642*/
      v7 = "this feature requires the `unstable` flag on Cargo.tomlbad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e87a97*/
LABEL_34:
      v8 = 55; /*0x100e87a9e*/
      goto LABEL_43; /*0x100e87aa3*/
    case 0x1FuLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e878d8*/
      v17 = &v23; /*0x100e878e0*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf224b7d2028e10f3; /*0x100e878eb*/
      v3 = *a2; /*0x100e878ef*/
      v4 = a2[1]; /*0x100e878f2*/
      v5 = (unsigned __int8 *)&unk_101247F3D; /*0x100e878f6*/
      goto LABEL_38; /*0x100e878fd*/
    case 0x20uLL: /*0x100e87642*/
      return _$LT$raw_window_handle..HandleError$u20$as$u20$core..fmt..Display$GT$::fmt::h565b1d5ff20dbea8(a1 + 1); /*0x100e87ab1*/
    case 0x21uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e8772c*/
      v17 = &v23; /*0x100e87734*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h59c76ec390c26847; /*0x100e8773f*/
      v3 = *a2; /*0x100e87743*/
      v4 = a2[1]; /*0x100e87746*/
      v5 = (unsigned __int8 *)&unk_101247F5B; /*0x100e8774a*/
      goto LABEL_38; /*0x100e87751*/
    case 0x22uLL: /*0x100e87642*/
      v7 = "bad __TAURI_INVOKE_KEY__ value received in ipc messageGrayscaleRgbIndexedGrayscaleAlpha"; /*0x100e876d8*/
      v8 = 54; /*0x100e876df*/
LABEL_43:
      result = _$LT$core..fmt..Formatter$u20$as$u20$core..fmt..Write$GT$::write_str::h432a61b2c1499beb(a2, v7, v8); /*0x100e87b32*/
      break; /*0x100e87b3d*/
    case 0x23uLL: /*0x100e87642*/
      v23 = a1 + 1; /*0x100e87676*/
      v17 = &v23; /*0x100e8767e*/
      v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hb6352b4919285bce; /*0x100e87689*/
      v3 = *a2; /*0x100e8768d*/
      v4 = a2[1]; /*0x100e87690*/
      v5 = (unsigned __int8 *)&unk_101247F99; /*0x100e87694*/
LABEL_38:
      result = core::fmt::write::h2e5a8157a38fb62d(v3, v4, v5, (unsigned __int64)&v17); /*0x100e87aed*/
      break; /*0x100e87afb*/
    case 0x24uLL: /*0x100e87642*/
      result = _$LT$tokio..sync..oneshot..error..RecvError$u20$as$u20$core..fmt..Display$GT$::fmt::hcce86e8b5b3de15f(); /*0x100e876a5*/
      break; /*0x100e876a5*/
  }
  return result; /*0x100e876a0*/
}