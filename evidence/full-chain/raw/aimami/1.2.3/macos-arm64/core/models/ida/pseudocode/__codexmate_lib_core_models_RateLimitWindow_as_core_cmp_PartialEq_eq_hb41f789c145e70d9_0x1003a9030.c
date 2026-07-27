// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::RateLimitWindow as core::cmp::PartialEq>::eq::hb41f789c145e70d9 @ 0x1003a9030 | full-body via IDA Python(IDA decompiler.decompile direct write)
char __fastcall _$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
        __int64 a1,
        double *a2)
{
  char v2; // al
  char v3; // al

  if ( *(double *)(a1 + 24) != a2[3] || *(_DWORD *)(a1 + 32) != *((_DWORD *)a2 + 8) )
    return 0;
  v2 = *((_BYTE *)a2 + 16);
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( !v2 || *(_DWORD *)(a1 + 20) != *((_DWORD *)a2 + 5) )
      return 0;
  }
  else if ( v2 )
  {
    return 0;
  }
  v3 = *(_BYTE *)a2;
  if ( *(_BYTE *)a1 )
  {
    if ( v3 )
      return *(_QWORD *)(a1 + 8) == *((_QWORD *)a2 + 1);
    return 0;
  }
  return v3 ^ 1;
}
