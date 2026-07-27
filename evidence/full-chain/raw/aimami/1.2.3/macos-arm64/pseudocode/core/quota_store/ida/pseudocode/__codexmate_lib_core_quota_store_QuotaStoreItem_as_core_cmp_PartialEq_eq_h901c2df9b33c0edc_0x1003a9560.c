// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::quota_store::QuotaStoreItem as core::cmp::PartialEq>::eq::h901c2df9b33c0edc @ 0x1003a9560 | full-body via IDA decompiler
char __fastcall _$LT$codexmate_lib..core..quota_store..QuotaStoreItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::h901c2df9b33c0edc(
        __int64 a1,
        char *a2)
{
  size_t v2; // rdx
  __int64 v5; // rdx
  char *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  char v11; // di
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // al

  if ( *(_QWORD *)(a1 + 144) != *((_QWORD *)a2 + 18) )
    return 0;
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 != *((_QWORD *)a2 + 17) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 128), *((const void **)a2 + 16), v2) || *(_BYTE *)(a1 + 152) != a2[152] )
    return 0;
  v5 = a1;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *((_QWORD *)a2 + 2);
  if ( v7 == 2 )
  {
    if ( (_DWORD)v8 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v8 == 2 || *(double *)(a1 + 40) != *((double *)a2 + 5) || *(_DWORD *)(a1 + 48) != *((_DWORD *)a2 + 12) )
      return 0;
    v11 = a2[32];
    if ( *(_DWORD *)(a1 + 32) == 1 )
    {
      if ( !v11 || *(_DWORD *)(a1 + 36) != *((_DWORD *)a2 + 9) )
        return 0;
    }
    else if ( v11 )
    {
      return 0;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( (v8 & 1) == 0 || *(_QWORD *)(a1 + 24) != *((_QWORD *)a2 + 3) )
        return 0;
    }
    else if ( (v8 & 1) != 0 )
    {
      return 0;
    }
  }
  v9 = *((_QWORD *)a2 + 7);
  if ( *(_DWORD *)(a1 + 56) == 2 )
  {
    if ( (_DWORD)v9 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v9 == 2 )
      return 0;
    v12 = _$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
            a1 + 56,
            (double *)a2 + 7);
    v5 = a1;
    v6 = a2;
    if ( !v12 )
      return 0;
  }
  v13 = *(_QWORD *)(v5 + 96);
  v14 = *((_QWORD *)v6 + 12);
  if ( v13 == 2 )
  {
    if ( (_DWORD)v14 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v14 == 2 || *(_BYTE *)(v5 + 112) != v6[112] )
      return 0;
    if ( (v13 & 1) != 0 )
    {
      if ( (v14 & 1) == 0 || *(_QWORD *)(v5 + 104) != *((_QWORD *)v6 + 13) )
        return 0;
    }
    else if ( v14 )
    {
      return 0;
    }
  }
  v15 = *v6;
  if ( !*(_BYTE *)v5 )
    return v15 ^ 1;
  if ( v15 )
    return *(_QWORD *)(v5 + 8) == *((_QWORD *)v6 + 1);
  return 0;
}
