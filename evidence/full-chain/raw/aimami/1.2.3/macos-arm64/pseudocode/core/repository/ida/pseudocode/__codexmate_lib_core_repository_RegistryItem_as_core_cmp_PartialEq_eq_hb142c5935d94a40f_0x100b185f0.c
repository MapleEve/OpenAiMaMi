// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::repository::RegistryItem as core::cmp::PartialEq>::eq::hb142c5935d94a40f @ 0x100b185f0 | full-body via IDA decompiler
char __fastcall _$LT$codexmate_lib..core..repository..RegistryItem$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb142c5935d94a40f(
        __int64 a1,
        char *a2)
{
  size_t v2; // rdx
  size_t v3; // rdx
  size_t v4; // rdx
  size_t v5; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rdx
  char v12; // al
  char v13; // cl
  size_t v14; // rdx
  int v15; // eax
  size_t v16; // rdx
  int v17; // eax
  size_t v18; // rdx
  char v19; // al
  size_t v20; // rdx
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // al
  char v25; // cl
  char v26; // al
  char v27; // cl
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  __int64 v33; // rax
  bool v34; // al
  bool v35; // cl

  if ( *(_QWORD *)(a1 + 408) != *((_QWORD *)a2 + 51) )
    return 0;
  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 != *((_QWORD *)a2 + 26) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 200), *((const void **)a2 + 25), v2) )
    return 0;
  v3 = *(_QWORD *)(a1 + 232);
  if ( v3 != *((_QWORD *)a2 + 29) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 224), *((const void **)a2 + 28), v3) )
    return 0;
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 != *((_QWORD *)a2 + 32) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 248), *((const void **)a2 + 31), v4) )
    return 0;
  v5 = *(_QWORD *)(a1 + 280);
  if ( v5 != *((_QWORD *)a2 + 35) || memcmp(*(const void **)(a1 + 272), *((const void **)a2 + 34), v5) )
    return 0;
  v7 = (_QWORD *)a1;
  v8 = *((_QWORD *)a2 + 42);
  if ( __OFSUB__(0, *(_QWORD *)(a1 + 336)) )
  {
    if ( v8 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v8 == 0x8000000000000000LL )
      return 0;
    v14 = *(_QWORD *)(a1 + 352);
    if ( v14 != *((_QWORD *)a2 + 44) )
      return 0;
    v15 = memcmp(*(const void **)(a1 + 344), *((const void **)a2 + 43), v14);
    v7 = (_QWORD *)a1;
    if ( v15 )
      return 0;
  }
  v9 = *((_QWORD *)a2 + 45);
  if ( v7[45] == 0x8000000000000000LL )
  {
    if ( v9 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v9 == 0x8000000000000000LL )
      return 0;
    v16 = v7[47];
    if ( v16 != *((_QWORD *)a2 + 47) )
      return 0;
    v17 = memcmp(*(const void **)(a1 + 368), *((const void **)a2 + 46), v16);
    v7 = (_QWORD *)a1;
    if ( v17 )
      return 0;
  }
  v10 = *((_QWORD *)a2 + 48);
  if ( v7[48] == 0x8000000000000000LL )
  {
    if ( v10 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v10 == 0x8000000000000000LL )
      return 0;
    v18 = *(_QWORD *)(a1 + 400);
    if ( v18 != *((_QWORD *)a2 + 50) || memcmp(*(const void **)(a1 + 392), *((const void **)a2 + 49), v18) )
      return 0;
  }
  v11 = *(_QWORD *)(a1 + 304);
  if ( v11 != *((_QWORD *)a2 + 38) || memcmp(*(const void **)(a1 + 296), *((const void **)a2 + 37), v11) )
    return 0;
  v12 = *(_BYTE *)(a1 + 418);
  v13 = a2[418];
  if ( v12 == 3 )
  {
    if ( v13 != 3 )
      return 0;
  }
  else if ( v12 != v13 )
  {
    return 0;
  }
  v19 = *a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( !v19 || *(_QWORD *)(a1 + 8) != *((_QWORD *)a2 + 1) )
      return 0;
  }
  else if ( v19 )
  {
    return 0;
  }
  v20 = *(_QWORD *)(a1 + 328);
  if ( v20 != *((_QWORD *)a2 + 41) || memcmp(*(const void **)(a1 + 320), *((const void **)a2 + 40), v20) )
    return 0;
  v21 = *(_BYTE *)(a1 + 416);
  v22 = a2[416];
  if ( v21 == 2 )
  {
    if ( v22 != 2 )
      return 0;
  }
  else if ( v21 != v22 )
  {
    return 0;
  }
  v23 = a2[16];
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( !v23 || *(_QWORD *)(a1 + 24) != *((_QWORD *)a2 + 3) )
      return 0;
  }
  else if ( v23 )
  {
    return 0;
  }
  v24 = *(_BYTE *)(a1 + 417);
  v25 = a2[417];
  if ( v24 == 2 )
  {
    if ( v25 != 2 )
      return 0;
  }
  else if ( v24 != v25 )
  {
    return 0;
  }
  v26 = *(_BYTE *)(a1 + 419);
  v27 = a2[419];
  if ( v26 == 3 )
  {
    if ( v27 != 3 )
      return 0;
  }
  else if ( v26 != v27 )
  {
    return 0;
  }
  v28 = a2[32];
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    if ( !v28 || *(_QWORD *)(a1 + 40) != *((_QWORD *)a2 + 5) )
      return 0;
  }
  else if ( v28 )
  {
    return 0;
  }
  v29 = a2[48];
  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    if ( !v29 || *(_QWORD *)(a1 + 56) != *((_QWORD *)a2 + 7) )
      return 0;
  }
  else if ( v29 )
  {
    return 0;
  }
  v30 = a2[64];
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    if ( !v30 || *(_QWORD *)(a1 + 72) != *((_QWORD *)a2 + 9) )
      return 0;
  }
  else if ( v30 )
  {
    return 0;
  }
  v31 = a2[80];
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( !v31 || *(_QWORD *)(a1 + 88) != *((_QWORD *)a2 + 11) )
      return 0;
  }
  else if ( v31 )
  {
    return 0;
  }
  v32 = a2[96];
  if ( *(_DWORD *)(a1 + 96) == 1 )
  {
    if ( !v32 || *(_QWORD *)(a1 + 104) != *((_QWORD *)a2 + 13) )
      return 0;
  }
  else if ( v32 )
  {
    return 0;
  }
  v33 = *((_QWORD *)a2 + 14);
  if ( *(_DWORD *)(a1 + 112) != 2 )
  {
    if ( (_DWORD)v33 != 2
      && _$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
           a1 + 112,
           (double *)a2 + 14) )
    {
      goto LABEL_89;
    }
    return 0;
  }
  if ( (_DWORD)v33 != 2 )
    return 0;
LABEL_89:
  v34 = *(_DWORD *)(a1 + 152) == 2;
  v35 = *((_DWORD *)a2 + 38) == 2;
  if ( v35 || v34 )
    return v35 && v34;
  else
    return _$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
             a1 + 152,
             (double *)a2 + 19);
}
