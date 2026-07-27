// __ZN13codexmate_lib8platform19voice_trigger_macos23spawn_hold_safety_timer @ 0x1005e40e0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::spawn_hold_safety_timer::h30731bf7dd82fffa(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[6]; // [rsp+10h] [rbp-80h] BYREF
  __int64 v8; // [rsp+40h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-48h]
  unsigned __int64 v10; // [rsp+50h] [rbp-40h]
  _QWORD v11[2]; // [rsp+58h] [rbp-38h] BYREF
  unsigned __int64 v12[3]; // [rsp+68h] [rbp-28h] BYREF
  char v13; // [rsp+80h] [rbp-10h]

  v7[2] = a2; /*0x1005e40ec*/
  v7[3] = a1; /*0x1005e40f0*/
  v7[4] = a5; /*0x1005e40f4*/
  v7[5] = a6; /*0x1005e40f8*/
  v7[0] = a3; /*0x1005e40fc*/
  v7[1] = a4; /*0x1005e4100*/
  v12[0] = 0x8000000000000000LL; /*0x1005e4112*/
  v11[0] = 0; /*0x1005e4116*/
  v13 = 0; /*0x1005e411e*/
  std::thread::lifecycle::spawn_unchecked::h583cc04bdefe0379(&v8, v12, 0, a4, 0, 0, v7); /*0x1005e4136*/
  if ( !v8 ) /*0x1005e4146*/
  {
    v11[0] = v9; /*0x1005e416b*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005e418d*/
      "failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
      22,
      v11,
      &off_101965F28,
      &off_101965588);
  }
  v11[0] = v8; /*0x1005e414c*/
  v11[1] = v9; /*0x1005e4150*/
  v12[0] = v10; /*0x1005e4154*/
  return core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v11); /*0x1005e4161*/
}