// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x1009afe00 d=2
_QWORD *__fastcall codexmate_lib::platform::process::codex_macos_bundle_main_executable::h98fd7660930b3f21(
        _QWORD *a1,
        const void *a2,
        size_t a3)
{
  char v4; // r12
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v8; // rsi
  size_t v9[3]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v10; // [rsp+18h] [rbp-68h]
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  void *__src; // [rsp+28h] [rbp-58h]
  size_t __n; // [rsp+30h] [rbp-50h]
  _BYTE *v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _BYTE *v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]

  codexmate_lib::platform::process::read_macos_bundle_value::h6eb011077c5e814c( /*0x1009afe35*/
    &v15,
    a2,
    a3,
    "CFBundleIdentifier/usr/bin/openif application id \"com.openai.codex\" is running then\n    tell application id \"com.openai.codex\" to quit\nend if/codex framework.framework//contents/resources/native/bare-modifier-monitor",
    18);
  if ( __OFSUB__(-v15, 1) ) /*0x1009afe44*/
    goto LABEL_28; /*0x1009afe44*/
  if ( v17 != 16 /*0x1009affe7*/
    || (*v16 | (unsigned __int8)(32 * ((unsigned __int8)(*v16 - 65) < 0x1Au))) != 99
    || (v16[1] | (unsigned __int8)(32 * ((unsigned __int8)(v16[1] - 65) < 0x1Au))) != 111
    || (v16[2] | (unsigned __int8)(32 * ((unsigned __int8)(v16[2] - 65) < 0x1Au))) != 109
    || (v16[3] | (unsigned __int8)(32 * ((unsigned __int8)(v16[3] - 65) < 0x1Au))) != 46
    || (v16[4] | (unsigned __int8)(32 * ((unsigned __int8)(v16[4] - 65) < 0x1Au))) != 111
    || (v16[5] | (unsigned __int8)(32 * ((unsigned __int8)(v16[5] - 65) < 0x1Au))) != 112
    || (v16[6] | (unsigned __int8)(32 * ((unsigned __int8)(v16[6] - 65) < 0x1Au))) != 101
    || (v16[7] | (unsigned __int8)(32 * ((unsigned __int8)(v16[7] - 65) < 0x1Au))) != 110
    || (v16[8] | (unsigned __int8)(32 * ((unsigned __int8)(v16[8] - 65) < 0x1Au))) != 97
    || (v16[9] | (unsigned __int8)(32 * ((unsigned __int8)(v16[9] - 65) < 0x1Au))) != 105
    || (v16[10] | (unsigned __int8)(32 * ((unsigned __int8)(v16[10] - 65) < 0x1Au))) != 46
    || (v16[11] | (unsigned __int8)(32 * ((unsigned __int8)(v16[11] - 65) < 0x1Au))) != 99
    || (v16[12] | (unsigned __int8)(32 * ((unsigned __int8)(v16[12] - 65) < 0x1Au))) != 111
    || (v16[13] | (unsigned __int8)(32 * ((unsigned __int8)(v16[13] - 65) < 0x1Au))) != 100
    || (v16[14] | (unsigned __int8)(32 * ((unsigned __int8)(v16[14] - 65) < 0x1Au))) != 101 )
  {
    if ( v15 ) /*0x1009b00e2*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009b00e9*/
    goto LABEL_28; /*0x1009b00e9*/
  }
  v4 = v16[15] | (32 * ((unsigned __int8)(v16[15] - 65) < 0x1Au)); /*0x1009affff*/
  if ( v15 ) /*0x1009b0005*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009b000c*/
  if ( v4 != 120 /*0x1009b003e*/
    || (codexmate_lib::platform::process::read_macos_bundle_value::h6eb011077c5e814c(
          &v15,
          a2,
          a3,
          "CFBundleExecutableContents/MacOScodex_processlaunch_ready",
          18),
        v5 = v15,
        v15 == 0x8000000000000000LL) )
  {
LABEL_28:
    *a1 = 0x8000000000000000LL; /*0x1009b00ee*/
    return a1; /*0x1009b00ee*/
  }
  v14 = v16; /*0x1009b0048*/
  v10 = v17; /*0x1009b0050*/
  std::path::Path::_join::hb1a495d4f06b13b8(v9, a2, a3, "Contents/MacOScodex_processlaunch_ready", 0xEu); /*0x1009b006b*/
  v15 = v5; /*0x1009b0078*/
  v16 = v14; /*0x1009b0080*/
  v17 = v10; /*0x1009b0088*/
  std::path::Path::join::he33503cde73986be(&v11, v9[1], v9[2], &v15); /*0x1009b0097*/
  if ( v9[0] ) /*0x1009b00a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009b00ad*/
  if ( std::path::Path::is_file::h8e542e1d1cac781b(__src, __n) ) /*0x1009b00bd*/
  {
    a1[2] = __n; /*0x1009b00ca*/
    v6 = v11; /*0x1009b00ce*/
    a1[1] = __src; /*0x1009b00d6*/
    *a1 = v6; /*0x1009b00da*/
  }
  else
  {
    v8 = v11; /*0x1009b0103*/
    *a1 = 0x8000000000000000LL; /*0x1009b0107*/
    if ( v8 ) /*0x1009b010d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009b0117*/
  }
  return a1; /*0x1009b00f4*/
}