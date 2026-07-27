// __ZN13codexmate_lib8commands13voice_runtime21set_voice_trigger_key @ 0x100214e70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice_runtime::set_voice_trigger_key::hb57805f2dff96a38(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD v14[4]; // [rsp+8h] [rbp-658h] BYREF
  _BYTE __dsta[680]; // [rsp+28h] [rbp-638h] BYREF
  _QWORD v16[99]; // [rsp+2D0h] [rbp-390h] BYREF
  _QWORD v17[8]; // [rsp+5E8h] [rbp-78h] BYREF
  char v18; // [rsp+628h] [rbp-38h]
  __int64 v19; // [rsp+630h] [rbp-30h]
  __int64 v20; // [rsp+638h] [rbp-28h]
  __int64 v21; // [rsp+640h] [rbp-20h]

  if ( (a7 & 1) == 0 ) /*0x100214e8a*/
    a8 = 0; /*0x100214e92*/
  v17[6] = a3; /*0x100214e94*/
  v10 = a4[1]; /*0x100214e9b*/
  v17[0] = *a4; /*0x100214e9f*/
  v17[1] = v10; /*0x100214ea3*/
  v17[2] = a4[2]; /*0x100214eab*/
  v11 = a5[1]; /*0x100214eb2*/
  v17[3] = *a5; /*0x100214eb6*/
  v17[4] = v11; /*0x100214eba*/
  v17[5] = a5[2]; /*0x100214ec2*/
  v18 = a6; /*0x100214ec6*/
  v17[7] = a8; /*0x100214eca*/
  codexmate_lib::core::voice::runtime::set_trigger_key::h398e97b5236881bc(v16, a2, v17); /*0x100214edc*/
  v19 = v16[1]; /*0x100214eef*/
  v20 = v16[2]; /*0x100214efa*/
  v21 = v16[3]; /*0x100214f05*/
  if ( v16[0] == 2 ) /*0x100214f0d*/
  {
    __dst[3] = v21; /*0x100214f13*/
    v12 = v19; /*0x100214f17*/
    __dst[2] = v20; /*0x100214f1f*/
    __dst[1] = v12; /*0x100214f23*/
    *__dst = 2; /*0x100214f27*/
  }
  else
  {
    memcpy(__dsta, &v16[4], sizeof(__dsta)); /*0x100214f43*/
    v14[0] = v16[0]; /*0x100214f48*/
    v14[1] = v19; /*0x100214f57*/
    v14[2] = v20; /*0x100214f5e*/
    v14[3] = v21; /*0x100214f69*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hec8a145953f509e3(v16, v14); /*0x100214f7e*/
    memcpy(__dst, v16, 0x318u); /*0x100214f92*/
  }
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x100214f9a*/
  return __dst; /*0x100214fa2*/
}