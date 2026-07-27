// __ZN13codexmate_lib8commands13voice_runtime26set_voice_trigger_bindings @ 0x1002159a0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::set_voice_trigger_bindings::h3a28d48cb268ea57(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _QWORD *a11,
        char a12,
        __int64 a13)
{
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD v22[4]; // [rsp+0h] [rbp-6A0h] BYREF
  _BYTE __dsta[680]; // [rsp+20h] [rbp-680h] BYREF
  _QWORD v24[99]; // [rsp+2C8h] [rbp-3D8h] BYREF
  _QWORD v25[8]; // [rsp+5E0h] [rbp-C0h] BYREF
  char v26; // [rsp+620h] [rbp-80h]
  _QWORD v27[8]; // [rsp+628h] [rbp-78h] BYREF
  char v28; // [rsp+668h] [rbp-38h]
  __int64 v29; // [rsp+670h] [rbp-30h]
  __int64 v30; // [rsp+678h] [rbp-28h]
  __int64 v31; // [rsp+680h] [rbp-20h]

  v14 = 0; /*0x1002159b6*/
  v15 = 0; /*0x1002159bc*/
  if ( (a7 & 1) != 0 ) /*0x1002159c2*/
    v15 = a8; /*0x1002159c4*/
  v27[6] = a4; /*0x1002159d4*/
  v16 = a5[1]; /*0x1002159db*/
  v27[0] = *a5; /*0x1002159df*/
  v27[1] = v16; /*0x1002159e3*/
  v27[2] = a5[2]; /*0x1002159eb*/
  v17 = a6[1]; /*0x1002159f2*/
  v27[3] = *a6; /*0x1002159f6*/
  v27[4] = v17; /*0x1002159fa*/
  v27[5] = a6[2]; /*0x100215a02*/
  v28 = 0; /*0x100215a06*/
  v27[7] = v15; /*0x100215a0a*/
  if ( (a12 & 1) != 0 ) /*0x100215a12*/
    v14 = a13; /*0x100215a14*/
  v25[6] = a9; /*0x100215a18*/
  v18 = a10[1]; /*0x100215a22*/
  v25[0] = *a10; /*0x100215a26*/
  v25[1] = v18; /*0x100215a2d*/
  v25[2] = a10[2]; /*0x100215a38*/
  v19 = a11[1]; /*0x100215a42*/
  v25[3] = *a11; /*0x100215a46*/
  v25[4] = v19; /*0x100215a4d*/
  v25[5] = a11[2]; /*0x100215a58*/
  v26 = 1; /*0x100215a5f*/
  v25[7] = v14; /*0x100215a63*/
  codexmate_lib::core::voice::runtime::set_trigger_bindings::h17a3c6ae908568c6(v24, a2, a3, v27, v25); /*0x100215a7f*/
  v29 = v24[1]; /*0x100215a92*/
  v30 = v24[2]; /*0x100215a9d*/
  v31 = v24[3]; /*0x100215aa8*/
  if ( v24[0] == 2 ) /*0x100215ab0*/
  {
    __dst[3] = v31; /*0x100215ab6*/
    v20 = v29; /*0x100215aba*/
    __dst[2] = v30; /*0x100215ac2*/
    __dst[1] = v20; /*0x100215ac6*/
    *__dst = 2; /*0x100215aca*/
  }
  else
  {
    memcpy(__dsta, &v24[4], sizeof(__dsta)); /*0x100215ae6*/
    v22[0] = v24[0]; /*0x100215aeb*/
    v22[1] = v29; /*0x100215afa*/
    v22[2] = v30; /*0x100215b01*/
    v22[3] = v31; /*0x100215b0c*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v24, v22); /*0x100215b21*/
    memcpy(__dst, v24, 0x318u); /*0x100215b35*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x100215b3d*/
  return __dst; /*0x100215b45*/
}