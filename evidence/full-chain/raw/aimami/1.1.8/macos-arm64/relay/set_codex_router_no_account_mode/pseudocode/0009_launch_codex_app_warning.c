__int64 __fastcall codexmate_lib::core::relay::manager::launch_codex_app_warning::h1ea13dd506032be3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // [rsp+8h] [rbp-E8h] BYREF
  _BYTE v7[88]; // [rsp+10h] [rbp-E0h] BYREF
  __int64 *v8; // [rsp+68h] [rbp-88h] BYREF
  _QWORD v9[11]; // [rsp+70h] [rbp-80h] BYREF
  __int64 v10; // [rsp+C8h] [rbp-28h] BYREF
  __int64 v11; // [rsp+D0h] [rbp-20h]
  __int64 v12; // [rsp+D8h] [rbp-18h]
  _BYTE v13[9]; // [rsp+E7h] [rbp-9h] BYREF

  codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e(&v8, a2, a3, a4); /*0x1005cf2a6*/
  if ( v8 == (__int64 *)10 ) /*0x1005cf2b6*/
  {
    *a1 = 0x8000000000000000LL; /*0x1005cf2c2*/
    return 0x8000000000000000LL; /*0x1005cf2b8*/
  }
  else
  {
    qmemcpy(v7, v9, sizeof(v7)); /*0x1005cf2df*/
    v6 = v8; /*0x1005cf2e2*/
    v10 = 0; /*0x1005cf2e9*/
    v11 = 1; /*0x1005cf2f1*/
    v12 = 0; /*0x1005cf2f9*/
    v9[1] = 1610612768; /*0x1005cf301*/
    v8 = &v10; /*0x1005cf30d*/
    v9[0] = &anon_1f22c03b288e649fafb3d21192ed4cff_828; /*0x1005cf31b*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1005cf32d*/
                            &v6,
                            &v8) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005cf381*/
        "a Display implementation returned an error unexpectedly",
        55,
        v13,
        &anon_1f22c03b288e649fafb3d21192ed4cff_849,
        &anon_1f22c03b288e649fafb3d21192ed4cff_831);
    a1[2] = v12; /*0x1005cf33a*/
    v5 = v10; /*0x1005cf33e*/
    a1[1] = v11; /*0x1005cf346*/
    *a1 = v5; /*0x1005cf34a*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v6); /*0x1005cf354*/
  }
}
---REFS---
0x1001bfa90 __ZN13codexmate_lib8platform7process16launch_codex_app17h91cbb8eff855c58eE
0x1015346d0 _anon.1f22c03b288e649fafb3d21192ed4cff.828
0x101130130 __ZN4core6result13unwrap_failed17h855bccc0ecc45c4fE
0x1012cbeb4 _anon.1f22c03b288e649fafb3d21192ed4cff.829
0x1015347d0 _anon.1f22c03b288e649fafb3d21192ed4cff.849
0x101534700 _anon.1f22c03b288e649fafb3d21192ed4cff.831
0x100500e10 __ZN77_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$3fmt17habc7ed17d00203bbE
0x1005ee440 __ZN4core3ptr59drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$17h754f3a2a741d9d03E_7
