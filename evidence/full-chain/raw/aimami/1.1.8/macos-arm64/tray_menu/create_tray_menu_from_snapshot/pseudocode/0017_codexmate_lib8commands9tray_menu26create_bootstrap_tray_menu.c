// mac 1.1.8 BACKEND-ONLY create_tray_menu_from_snapshot node 0x1004d2c90 depth=1
// codexmate_lib8commands9tray_menu26create_bootstrap_tray_menu28_::b::b::d::d
__int64 __fastcall codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h6d6876660b2cfe09(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x1004d2ca1*/
  v6 = 1; /*0x1004d2ca9*/
  v7 = 0; /*0x1004d2cb1*/
  v4[2] = 1610612768; /*0x1004d2cb9*/
  v4[0] = (__int64)&v5; /*0x1004d2cc5*/
  v4[1] = (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004d2cd0*/
  if ( _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(a2, v4) ) /*0x1004d2cdb*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004d2d2a*/
      (__int64)"a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap("
               ")` on an `Err` value",
      55,
      (__int64)v8,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_940,
      (__int64)&anon_3e4c14ac1826b92abbb84b981a88c995_929);
  a1[2] = v7; /*0x1004d2ce8*/
  v2 = v5; /*0x1004d2cec*/
  a1[1] = v6; /*0x1004d2cf4*/
  *a1 = v2; /*0x1004d2cf8*/
  return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(a2); /*0x1004d2d03*/
}