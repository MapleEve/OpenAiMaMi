// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004c91a0 depth=1
// codexmate_lib8commands8accounts28relaunch_codex_after_success
__int64 __fastcall codexmate_lib::commands::accounts::relaunch_codex_after_success::hf8d48492de64242b(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3[12]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD v4[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v5[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v7; // [rsp+E0h] [rbp-20h]
  __int64 v8; // [rsp+E8h] [rbp-18h]
  _BYTE v9[9]; // [rsp+F7h] [rbp-9h] BYREF

  codexmate_lib::platform::process::stop_codex_for_file_edit::h58b70230213b1120(v3, 5, 0); /*0x1004c91bd*/
  if ( LODWORD(v3[0]) != 10 ) /*0x1004c91c9*/
  {
    qmemcpy(v4, v3, sizeof(v4)); /*0x1004c9284*/
    if ( v4[0] != 10 ) /*0x1004c928e*/
      goto LABEL_3; /*0x1004c928e*/
LABEL_6:
    *a1 = 0x8000000000000000LL; /*0x1004c9294*/
    return 0x8000000000000000LL; /*0x1004c92aa*/
  }
  codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e(v4); /*0x1004c91d6*/
  if ( v4[0] == 10 ) /*0x1004c91e2*/
    goto LABEL_6; /*0x1004c91e2*/
LABEL_3:
  qmemcpy(v3, v4, sizeof(v3)); /*0x1004c91fe*/
  v6 = 0; /*0x1004c9201*/
  v7 = 1; /*0x1004c9209*/
  v8 = 0; /*0x1004c9211*/
  v5[2] = 1610612768; /*0x1004c9219*/
  v5[0] = &v6; /*0x1004c9225*/
  v5[1] = &anon_3e4c14ac1826b92abbb84b981a88c995_926; /*0x1004c9230*/
  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1004c923b*/
                          v3,
                          v5) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c92c9*/
      "a Display implementation returned an error unexpectedlychunk size must be non-zerocalled `Result::unwrap()` on an `Err` value",
      55,
      v9,
      &anon_3e4c14ac1826b92abbb84b981a88c995_940,
      &anon_3e4c14ac1826b92abbb84b981a88c995_929);
  a1[2] = v8; /*0x1004c9248*/
  v1 = v6; /*0x1004c924c*/
  a1[1] = v7; /*0x1004c9254*/
  *a1 = v1; /*0x1004c9258*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v4); /*0x1004c9267*/
}