// __ZN13codexmate_lib4core10repository10Repository21resolve_daemon_binary @ 0x100a5d750 | 基线 same-set
__int64 __fastcall codexmate_lib::core::repository::Repository::resolve_daemon_binary::h8f3b0e04c1a4350c(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rcx
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v8; // [rsp+18h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 *v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF

  std::env::current_exe::h29d0ba355065eb9c(&v8); /*0x100a5d766*/
  if ( __OFSUB__(0, v8) ) /*0x100a5d76d*/
  {
    v14 = v9; /*0x100a5d77b*/
    v11 = &v14; /*0x100a5d783*/
    v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100a5d78e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, &unk_1017C9051, &v11); /*0x100a5d7a1*/
    v11 = (__int64 *)v7[0]; /*0x100a5d7ae*/
    v12 = (__int64 (__fastcall *)(_QWORD, _QWORD))v7[1]; /*0x100a5d7b2*/
    v13 = v7[2]; /*0x100a5d7ba*/
    if ( (v14 & 3) == 1 ) /*0x100a5d7ca*/
    {
      v1 = v14 - 1; /*0x100a5d7cc*/
      v2 = *(_QWORD *)(v14 - 1); /*0x100a5d7d0*/
      v3 = *(_QWORD *)(v14 + 7); /*0x100a5d7d4*/
      if ( *(_QWORD *)v3 ) /*0x100a5d7d8*/
        (*(void (__fastcall **)(__int64))v3)(v2); /*0x100a5d7e4*/
      v4 = *(_QWORD *)(v3 + 8); /*0x100a5d7e6*/
      if ( v4 ) /*0x100a5d7ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x100a5d7f8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24, 8); /*0x100a5d80a*/
    }
    *a1 = 10; /*0x100a5d80f*/
    v5 = v12; /*0x100a5d81a*/
    a1[1] = v11; /*0x100a5d81e*/
    a1[2] = v5; /*0x100a5d822*/
    result = v13; /*0x100a5d826*/
    a1[3] = v13; /*0x100a5d82a*/
  }
  else
  {
    a1[3] = v10; /*0x100a5d834*/
    result = v8; /*0x100a5d838*/
    a1[2] = v9; /*0x100a5d840*/
    a1[1] = result; /*0x100a5d844*/
    *a1 = 11; /*0x100a5d848*/
  }
  return result; /*0x100a5d84f*/
}