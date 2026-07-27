// __ZN13codexmate_lib8platform7process34codex_macos_bundle_main_executable @ 0x100368590 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // r12
  __int64 v5; // r12
  __int64 v6; // r14
  void *v7; // r14
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-80h] BYREF
  __int64 v12; // [rsp+8h] [rbp-78h]
  __int64 v13; // [rsp+10h] [rbp-70h]
  __int64 v14; // [rsp+18h] [rbp-68h]
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  void *__src; // [rsp+28h] [rbp-58h]
  size_t __n; // [rsp+30h] [rbp-50h]
  _BYTE *v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]

  codexmate_lib::platform::process::read_macos_bundle_value::h039fd87931802e34( /*0x1003685c5*/
    (size_t *)&v19,
    a2,
    a3,
    (__int64)"CFBundleIdentifierCFBundleExecutableContents/MacOScodex_processlaunch_readylaunch_timeout",
    18);
  if ( __OFSUB__(-v19, 1) ) /*0x1003685d4*/
    goto LABEL_28; /*0x1003685d4*/
  if ( v21 != 16 /*0x100368777*/
    || (*v20 | (unsigned __int8)(32 * ((unsigned __int8)(*v20 - 65) < 0x1Au))) != 99
    || (v20[1] | (unsigned __int8)(32 * ((unsigned __int8)(v20[1] - 65) < 0x1Au))) != 111
    || (v20[2] | (unsigned __int8)(32 * ((unsigned __int8)(v20[2] - 65) < 0x1Au))) != 109
    || (v20[3] | (unsigned __int8)(32 * ((unsigned __int8)(v20[3] - 65) < 0x1Au))) != 46
    || (v20[4] | (unsigned __int8)(32 * ((unsigned __int8)(v20[4] - 65) < 0x1Au))) != 111
    || (v20[5] | (unsigned __int8)(32 * ((unsigned __int8)(v20[5] - 65) < 0x1Au))) != 112
    || (v20[6] | (unsigned __int8)(32 * ((unsigned __int8)(v20[6] - 65) < 0x1Au))) != 101
    || (v20[7] | (unsigned __int8)(32 * ((unsigned __int8)(v20[7] - 65) < 0x1Au))) != 110
    || (v20[8] | (unsigned __int8)(32 * ((unsigned __int8)(v20[8] - 65) < 0x1Au))) != 97
    || (v20[9] | (unsigned __int8)(32 * ((unsigned __int8)(v20[9] - 65) < 0x1Au))) != 105
    || (v20[10] | (unsigned __int8)(32 * ((unsigned __int8)(v20[10] - 65) < 0x1Au))) != 46
    || (v20[11] | (unsigned __int8)(32 * ((unsigned __int8)(v20[11] - 65) < 0x1Au))) != 99
    || (v20[12] | (unsigned __int8)(32 * ((unsigned __int8)(v20[12] - 65) < 0x1Au))) != 111
    || (v20[13] | (unsigned __int8)(32 * ((unsigned __int8)(v20[13] - 65) < 0x1Au))) != 100
    || (v20[14] | (unsigned __int8)(32 * ((unsigned __int8)(v20[14] - 65) < 0x1Au))) != 101 )
  {
    if ( v19 ) /*0x100368872*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x100368879*/
    goto LABEL_28; /*0x100368879*/
  }
  v4 = v20[15] | (32 * ((unsigned __int8)(v20[15] - 65) < 0x1Au)); /*0x10036878f*/
  if ( v19 ) /*0x100368795*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v19, 1); /*0x10036879c*/
  if ( v4 != 120 /*0x1003687ce*/
    || (codexmate_lib::platform::process::read_macos_bundle_value::h039fd87931802e34(
          (size_t *)&v19,
          a2,
          a3,
          (__int64)"CFBundleExecutableContents/MacOScodex_processlaunch_readylaunch_timeout",
          18),
        v5 = v19,
        v19 == 0x8000000000000000LL) )
  {
LABEL_28:
    *a1 = 0x8000000000000000LL; /*0x10036887e*/
    return a1; /*0x10036887e*/
  }
  v18 = v20; /*0x1003687d8*/
  v14 = v21; /*0x1003687e0*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v11, a2, a3, "Contents/MacOScodex_processlaunch_readylaunch_timeout", 14); /*0x1003687fb*/
  v6 = v12; /*0x100368800*/
  v19 = v5; /*0x100368808*/
  v20 = v18; /*0x100368810*/
  v21 = v14; /*0x100368818*/
  std::path::Path::join::hd8b46286031c5a87(&v15, v12, v13, &v19); /*0x100368827*/
  if ( v11 ) /*0x100368833*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v11, 1); /*0x10036883d*/
  v7 = __src; /*0x100368842*/
  if ( (unsigned __int8)std::path::Path::is_file::h8e542e1d1cac781b(__src, __n) ) /*0x10036884d*/
  {
    a1[2] = __n; /*0x10036885a*/
    v8 = v15; /*0x10036885e*/
    a1[1] = __src; /*0x100368866*/
    *a1 = v8; /*0x10036886a*/
  }
  else
  {
    v10 = v15; /*0x100368893*/
    *a1 = 0x8000000000000000LL; /*0x100368897*/
    if ( v10 ) /*0x10036889d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v10, 1); /*0x1003688a7*/
  }
  return a1; /*0x100368884*/
}