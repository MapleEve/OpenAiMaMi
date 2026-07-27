// __ZN13codexmate_lib4core5relay5quota12build_v1_url @ 0x1008ac510 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::quota::build_v1_url::hdd11e718a2b98831(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // edi
  char v13; // r8
  char v14; // r9
  unsigned __int64 v15; // rdx
  int v16; // r9d
  int v17; // r8d
  unsigned __int64 v18; // rcx
  __int64 *v19; // rax
  _QWORD v21[2]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v22[2]; // [rsp+18h] [rbp-58h] BYREF
  _QWORD v23[4]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-20h]

  v22[0] = a4; /*0x1008ac526*/
  v22[1] = a5; /*0x1008ac52a*/
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008ac534*/
  do /*0x1008ac5c1*/
  {
    while ( 1 ) /*0x1008ac54c*/
    {
      if ( !v9 ) /*0x1008ac54f*/
      {
        v24 = v8; /*0x1008ac62a*/
        v25 = 0; /*0x1008ac62e*/
LABEL_19:
        v19 = &v24; /*0x1008ac636*/
        goto LABEL_20; /*0x1008ac636*/
      }
      v10 = v9; /*0x1008ac555*/
      v11 = v8 + v9; /*0x1008ac558*/
      v12 = *(char *)(v8 + v9 - 1); /*0x1008ac55c*/
      if ( v12 < 0 ) /*0x1008ac562*/
        break; /*0x1008ac562*/
      --v9; /*0x1008ac544*/
      if ( v12 != 47 ) /*0x1008ac54a*/
        goto LABEL_12; /*0x1008ac54a*/
    }
    v13 = *(_BYTE *)(v11 - 2); /*0x1008ac564*/
    if ( v13 >= -64 ) /*0x1008ac56d*/
    {
      v15 = v11 - 2; /*0x1008ac594*/
      v17 = v13 & 0x1F; /*0x1008ac598*/
    }
    else
    {
      v14 = *(_BYTE *)(v11 - 3); /*0x1008ac56f*/
      if ( v14 >= -64 ) /*0x1008ac578*/
      {
        v15 = v11 - 3; /*0x1008ac59e*/
        v16 = v14 & 0xF; /*0x1008ac5a2*/
      }
      else
      {
        v15 = v11 - 4; /*0x1008ac57a*/
        v16 = ((*(_BYTE *)(v11 - 4) & 7) << 6) | v14 & 0x3F; /*0x1008ac58f*/
      }
      v17 = (v16 << 6) | v13 & 0x3F; /*0x1008ac5ae*/
    }
    v9 = v15 - v8; /*0x1008ac5bb*/
  }
  while ( ((v17 << 6) | v12 & 0x3F) == 0x2F ); /*0x1008ac5c1*/
LABEL_12:
  v24 = v8; /*0x1008ac5c3*/
  v25 = v10; /*0x1008ac5c7*/
  if ( v10 < 3 /*0x1008ac608*/
    || (*(_WORD *)(v11 - 3) ^ 0x762F | *(unsigned __int8 *)(v11 - 1) ^ 0x31) != 0
    || a5 < 3
    || *(_WORD *)a4 ^ 0x762F | *(unsigned __int8 *)(a4 + 2) ^ 0x31 )
  {
    goto LABEL_19; /*0x1008ac60b*/
  }
  v18 = v10 - 3; /*0x1008ac610*/
  if ( v10 != 3 && *(char *)(v8 + v18) <= -65 ) /*0x1008ac61a*/
    core::str::slice_error_fail::h480e51fbd8b15eba(v8, v10, 0, v18, &anon_10420c9971c21f44d230d15b39fb3fec_839); /*0x1008ac682*/
  v21[0] = v8; /*0x1008ac61c*/
  v21[1] = v10 - 3; /*0x1008ac620*/
  v19 = v21; /*0x1008ac624*/
LABEL_20:
  v23[0] = v19; /*0x1008ac63a*/
  v23[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ac645*/
  v23[2] = v22; /*0x1008ac64d*/
  v23[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008ac651*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &anon_10420c9971c21f44d230d15b39fb3fec_280, v23); /*0x1008ac663*/
  return a1; /*0x1008ac66b*/
}