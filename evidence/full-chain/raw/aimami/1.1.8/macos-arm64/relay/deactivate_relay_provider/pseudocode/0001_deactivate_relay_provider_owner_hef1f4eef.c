// owner: codexmate_lib::commands::relay::deactivate_relay_provider::hef1f4eefb843a5ec
addr: 0x1004c6a10
role: command_owner (Tauri IPC handler)
session: <审计会话>
0-truncation full decompile
// --- refs ---
// ref: 0x1005c0250 __ZN13codexmate_lib4core5relay7manager12RelayManager10deactivate17h14167deaa58af5c5E
// ref: 0x101130a02 _memcpy
// ref: 0x1004ba8f0 __ZN13codexmate_lib4core6models21CoreEnvelope$LT$T$GT$2ok17h8cb36c706799a66bE
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// ref: 0x101531628 _anon.3e4c14ac1826b92abbb84b981a88c995.926
// ref: 0x101130130 __ZN4core6result13unwrap_failed17h855bccc0ecc45c4fE
// ref: 0x1012c7e00 _anon.3e4c14ac1826b92abbb84b981a88c995.927 a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value
// ref: 0x101531750 _anon.3e4c14ac1826b92abbb84b981a88c995.940
// ref: 0x101531658 _anon.3e4c14ac1826b92abbb84b981a88c995.929
// ref: 0x100500e10 __ZN77_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$3fmt17habc7ed17d00203bbE
// ref: 0x1004f06e0 __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h754f3a2a741d9d03E_5
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

_QWORD *__fastcall codexmate_lib::commands::relay::deactivate_relay_provider::hef1f4eefb843a5ec(
        _QWORD *__dst,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD v9[53]; // [rsp+0h] [rbp-400h] BYREF
  _QWORD v10[4]; // [rsp+1A8h] [rbp-258h] BYREF
  _BYTE __dsta[312]; // [rsp+1C8h] [rbp-238h] BYREF
  _BYTE v12[96]; // [rsp+300h] [rbp-100h] BYREF
  _QWORD v13[3]; // [rsp+360h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+378h] [rbp-88h]
  __int64 v15; // [rsp+380h] [rbp-80h]
  __int64 v16; // [rsp+388h] [rbp-78h]
  __int64 v17; // [rsp+390h] [rbp-70h]
  __int64 v18; // [rsp+398h] [rbp-68h]
  __int64 v19; // [rsp+3A0h] [rbp-60h]
  __int64 v20; // [rsp+3A8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+3B0h] [rbp-50h]
  __int64 v22; // [rsp+3B8h] [rbp-48h]
  __int64 v23; // [rsp+3C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+3C8h] [rbp-38h]
  __int64 v25; // [rsp+3D0h] [rbp-30h]

  v4 = a3[1]; /*0x1004c6a2a*/
  codexmate_lib::core::relay::manager::RelayManager::deactivate::h14167deaa58af5c5(v9); /*0x1004c6a3c*/
  if ( !__OFSUB__(-v9[0], 1) ) /*0x1004c6a55*/
  {
    v19 = v9[3]; /*0x1004c6b2d*/
    v18 = v9[2]; /*0x1004c6b3a*/
    v17 = v9[1]; /*0x1004c6b3e*/
    memcpy(__dsta, &v9[4], sizeof(__dsta)); /*0x1004c6b55*/
    v14 = v9[1]; /*0x1004c6b62*/
    v10[0] = v9[0]; /*0x1004c6b6d*/
    v10[1] = v9[1]; /*0x1004c6b74*/
    v10[2] = v9[2]; /*0x1004c6b7b*/
    v10[3] = v9[3]; /*0x1004c6b82*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h8cb36c706799a66b(v9, v10); /*0x1004c6b97*/
    memcpy(__dst, v9, 0x1A8u); /*0x1004c6bab*/
    v7 = *a3; /*0x1004c6bb0*/
    if ( !*a3 ) /*0x1004c6bb6*/
      return __dst; /*0x1004c6bb6*/
LABEL_6:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v7, 1); /*0x1004c6bb8*/
    return __dst; /*0x1004c6bc0*/
  }
  qmemcpy(v12, &v9[1], sizeof(v12)); /*0x1004c6a6d*/
  v23 = 0; /*0x1004c6a70*/
  v24 = 1; /*0x1004c6a78*/
  v25 = 0; /*0x1004c6a80*/
  v13[2] = 1610612768; /*0x1004c6a88*/
  v13[0] = &v23; /*0x1004c6a97*/
  v13[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c6aa5*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c6ab6*/
                          v12,
                          v13) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c6bf8*/
      "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
      55,
      &v20,
      &anon_3e4c14ac1826b92abbb84b981a88c995_940,
      &anon_3e4c14ac1826b92abbb84b981a88c995_929);
  v20 = v23; /*0x1004c6acb*/
  v21 = v24; /*0x1004c6acf*/
  v22 = v25; /*0x1004c6ad7*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v9[1]); /*0x1004c6ade*/
  v5 = v20; /*0x1004c6af1*/
  v6 = v21; /*0x1004c6af5*/
  v14 = v20; /*0x1004c6af9*/
  v15 = v21; /*0x1004c6b00*/
  v16 = v22; /*0x1004c6b04*/
  __dst[3] = v22; /*0x1004c6b08*/
  __dst[2] = v6; /*0x1004c6b0c*/
  __dst[1] = v5; /*0x1004c6b10*/
  *__dst = 0x8000000000000000LL; /*0x1004c6b14*/
  v7 = *a3; /*0x1004c6b17*/
  if ( *a3 ) /*0x1004c6b17*/
    goto LABEL_6; /*0x1004c6b1d*/
  return __dst; /*0x1004c6bc8*/
}
