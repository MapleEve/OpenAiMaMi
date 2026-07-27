// __ZN13codexmate_lib8commands9tray_menu26create_bootstrap_tray_menu28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x100358060 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::_$u7b$$u7b$closure$u7d$$u7d$::h4f4fd2a3bcb62520(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  _BYTE v8[17]; // [rsp+3Fh] [rbp-11h] BYREF

  v5 = 0; /*0x100358071*/
  v6 = 1; /*0x100358079*/
  v7 = 0; /*0x100358081*/
  v4[2] = 1610612768; /*0x100358089*/
  v4[0] = &v5; /*0x100358095*/
  v4[1] = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x1003580a0*/
  if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(a2, v4) ) /*0x1003580ab*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003580fa*/
      &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
      55,
      v8,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
  a1[2] = v7; /*0x1003580b8*/
  v2 = v5; /*0x1003580bc*/
  a1[1] = v6; /*0x1003580c4*/
  *a1 = v2; /*0x1003580c8*/
  return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(a2); /*0x1003580d3*/
}