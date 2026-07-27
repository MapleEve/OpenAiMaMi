// __ZN13codexmate_lib4core5relay7manager24launch_codex_app_warning @ 0x100284f70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::manager::launch_codex_app_warning::h2256dcfb732f26c0(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // [rsp+8h] [rbp-E8h] BYREF
  _BYTE v5[88]; // [rsp+10h] [rbp-E0h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-88h] BYREF
  _QWORD v7[11]; // [rsp+70h] [rbp-80h] BYREF
  __int64 v8; // [rsp+C8h] [rbp-28h] BYREF
  __int64 v9; // [rsp+D0h] [rbp-20h]
  __int64 v10; // [rsp+D8h] [rbp-18h]
  _BYTE v11[9]; // [rsp+E7h] [rbp-9h] BYREF

  codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(&v6, a2); /*0x100284f86*/
  if ( v6 == (__int64 *)11 ) /*0x100284f96*/
  {
    *a1 = 0x8000000000000000LL; /*0x100284fa2*/
    return 0x8000000000000000LL; /*0x100284f98*/
  }
  else
  {
    qmemcpy(v5, v7, sizeof(v5)); /*0x100284fbf*/
    v4 = v6; /*0x100284fc2*/
    v8 = 0; /*0x100284fc9*/
    v9 = 1; /*0x100284fd1*/
    v10 = 0; /*0x100284fd9*/
    v7[1] = 1610612768; /*0x100284fe1*/
    v6 = &v8; /*0x100284fed*/
    v7[0] = &off_10195E1D8; /*0x100284ffb*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10028500d*/
                            &v4,
                            &v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DEF8B, 55, v11, &unk_10195E760, &off_10195E208); /*0x100285061*/
    a1[2] = v10; /*0x10028501a*/
    v3 = v8; /*0x10028501e*/
    a1[1] = v9; /*0x100285026*/
    *a1 = v3; /*0x10028502a*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v4); /*0x100285034*/
  }
}