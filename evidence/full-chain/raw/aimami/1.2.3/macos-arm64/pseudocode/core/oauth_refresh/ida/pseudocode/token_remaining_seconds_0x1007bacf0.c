// __ZN13codexmate_lib4core13oauth_refresh23token_remaining_seconds @ 0x1007bacf0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 v6; // [rsp+8h] [rbp-58h] BYREF
  int v7; // [rsp+10h] [rbp-50h]
  _QWORD v8[4]; // [rsp+18h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-28h] BYREF

  codexmate_lib::core::oauth_refresh::decode_jwt_payload::hd78a97a7113bd755((__int64)v9, a1, a2); /*0x1007bad03*/
  if ( LOBYTE(v9[0]) == 6 ) /*0x1007bad0c*/
    return 0; /*0x1007bad0c*/
  v8[3] = v9[3]; /*0x1007bad16*/
  v8[2] = v9[2]; /*0x1007bad1e*/
  v8[1] = v9[1]; /*0x1007bad2a*/
  v8[0] = v9[0]; /*0x1007bad2e*/
  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007bad42*/
         &anon_3ce6d1417794db0febde534c64082f90_92,
         3,
         v8);
  if ( !v2 || *(_BYTE *)v2 != 2 ) /*0x1007bad4f*/
    goto LABEL_9; /*0x1007bad4f*/
  v3 = *(_QWORD *)(v2 + 8); /*0x1007bad51*/
  if ( !v3 ) /*0x1007bad58*/
  {
    if ( *(__int64 *)(v2 + 16) >= 0 ) /*0x1007bad6c*/
      goto LABEL_8; /*0x1007bad6c*/
LABEL_9:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v8); /*0x1007bad91*/
    return 0; /*0x1007bada5*/
  }
  if ( (_DWORD)v3 != 1 ) /*0x1007bad5d*/
    goto LABEL_9; /*0x1007bad5d*/
LABEL_8:
  v6 = std::time::SystemTime::now::h1fe79e41f9d5677f(&anon_3ce6d1417794db0febde534c64082f90_92, 3); /*0x1007bad6e*/
  v7 = v4; /*0x1007bad77*/
  std::time::SystemTime::duration_since::had059553cab94f96(v9, &v6, 0, 0); /*0x1007bad86*/
  if ( LODWORD(v9[0]) == 1 ) /*0x1007bad8f*/
    goto LABEL_9; /*0x1007bad8f*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v8); /*0x1007badae*/
  return 1; /*0x1007bad9f*/
}