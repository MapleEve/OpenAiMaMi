// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::core::models::AccountSummary as core::cmp::PartialEq>::eq::hda5febdef9901cf9 @ 0x100b17a80 | full-body via py_exec_file(ida_hexrays.decompile direct write)
bool __fastcall _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..cmp..PartialEq$GT$::eq::hda5febdef9901cf9(
        __int64 a1,
        char *a2)
{
  size_t v2; // rdx
  size_t v3; // rdx
  size_t v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // al
  char v11; // cl
  size_t v12; // rdx
  int v13; // eax
  size_t v14; // rdx
  int v15; // eax
  size_t v16; // rdx
  char v17; // al
  char v18; // al
  char v19; // cl
  char v20; // al
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // cl
  char v25; // al
  char v26; // al
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx

  if ( *(_BYTE *)(a1 + 337) != a2[337] )
    return 0;
  if ( *(_QWORD *)(a1 + 328) != *((_QWORD *)a2 + 41) )
    return 0;
  v2 = *(_QWORD *)(a1 + 200);
  if ( v2 != *((_QWORD *)a2 + 25) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 192), *((const void **)a2 + 24), v2) )
    return 0;
  v3 = *(_QWORD *)(a1 + 224);
  if ( v3 != *((_QWORD *)a2 + 28) )
    return 0;
  if ( memcmp(*(const void **)(a1 + 216), *((const void **)a2 + 27), v3) )
    return 0;
  v4 = *(_QWORD *)(a1 + 248);
  if ( v4 != *((_QWORD *)a2 + 31) || memcmp(*(const void **)(a1 + 240), *((const void **)a2 + 30), v4) )
    return 0;
  v6 = a1;
  v7 = *((_QWORD *)a2 + 32);
  if ( __OFSUB__(0, *(_QWORD *)(a1 + 256)) )
  {
    if ( v7 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v7 == 0x8000000000000000LL )
      return 0;
    v12 = *(_QWORD *)(a1 + 272);
    if ( v12 != *((_QWORD *)a2 + 34) )
      return 0;
    v13 = memcmp(*(const void **)(a1 + 264), *((const void **)a2 + 33), v12);
    v6 = a1;
    if ( v13 )
      return 0;
  }
  v8 = *((_QWORD *)a2 + 35);
  if ( *(_QWORD *)(v6 + 280) == 0x8000000000000000LL )
  {
    if ( v8 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v8 == 0x8000000000000000LL )
      return 0;
    v14 = *(_QWORD *)(v6 + 296);
    if ( v14 != *((_QWORD *)a2 + 37) )
      return 0;
    v15 = memcmp(*(const void **)(v6 + 288), *((const void **)a2 + 36), v14);
    v6 = a1;
    if ( v15 )
      return 0;
  }
  v9 = *((_QWORD *)a2 + 38);
  if ( *(_QWORD *)(v6 + 304) == 0x8000000000000000LL )
  {
    if ( v9 != 0x8000000000000000LL )
      return 0;
  }
  else
  {
    if ( v9 == 0x8000000000000000LL )
      return 0;
    v16 = *(_QWORD *)(a1 + 320);
    if ( v16 != *((_QWORD *)a2 + 40) || memcmp(*(const void **)(a1 + 312), *((const void **)a2 + 39), v16) )
      return 0;
  }
  if ( *(_BYTE *)(a1 + 344) != a2[344] )
    return 0;
  v10 = *(_BYTE *)(a1 + 341);
  v11 = a2[341];
  if ( v10 == 3 )
  {
    if ( v11 != 3 )
      return 0;
  }
  else if ( v10 != v11 )
  {
    return 0;
  }
  v17 = *a2;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( !v17 || *(_QWORD *)(a1 + 8) != *((_QWORD *)a2 + 1) )
      return 0;
  }
  else if ( v17 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 336) != a2[336] )
    return 0;
  v18 = *(_BYTE *)(a1 + 339);
  v19 = a2[339];
  if ( v18 == 2 )
  {
    if ( v19 != 2 )
      return 0;
  }
  else if ( v18 != v19 )
  {
    return 0;
  }
  v20 = a2[16];
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( !v20 || *(_QWORD *)(a1 + 24) != *((_QWORD *)a2 + 3) )
      return 0;
  }
  else if ( v20 )
  {
    return 0;
  }
  v21 = *(_BYTE *)(a1 + 340);
  v22 = a2[340];
  if ( v21 == 2 )
  {
    if ( v22 != 2 )
      return 0;
  }
  else if ( v21 != v22 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 342) != a2[342] )
    return 0;
  v23 = *(_BYTE *)(a1 + 343);
  v24 = a2[343];
  if ( v23 == 3 )
  {
    if ( v24 != 3 )
      return 0;
  }
  else if ( v23 != v24 )
  {
    return 0;
  }
  v25 = a2[32];
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    if ( !v25 || *(_QWORD *)(a1 + 40) != *((_QWORD *)a2 + 5) )
      return 0;
  }
  else if ( v25 )
  {
    return 0;
  }
  v26 = a2[48];
  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    if ( !v26 || *(_QWORD *)(a1 + 56) != *((_QWORD *)a2 + 7) )
      return 0;
  }
  else if ( v26 )
  {
    return 0;
  }
  v27 = a2[64];
  if ( *(_DWORD *)(a1 + 64) == 1 )
  {
    if ( !v27 || *(_QWORD *)(a1 + 72) != *((_QWORD *)a2 + 9) )
      return 0;
  }
  else if ( v27 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a1 + 338) != a2[338] )
    return 0;
  v28 = *((_QWORD *)a2 + 10);
  if ( *(_DWORD *)(a1 + 80) == 2 )
  {
    if ( (_DWORD)v28 != 2 )
      return 0;
  }
  else if ( (_DWORD)v28 == 2
         || !(unsigned __int8)_$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
                                a1 + 80,
                                a2 + 80) )
  {
    return 0;
  }
  v29 = *((_QWORD *)a2 + 15);
  if ( *(_DWORD *)(a1 + 120) == 2 )
  {
    if ( (_DWORD)v29 != 2 )
      return 0;
  }
  else if ( (_DWORD)v29 == 2
         || !(unsigned __int8)_$LT$codexmate_lib..core..models..RateLimitWindow$u20$as$u20$core..cmp..PartialEq$GT$::eq::hb41f789c145e70d9(
                                a1 + 120,
                                a2 + 120) )
  {
    return 0;
  }
  v30 = *(_QWORD *)(a1 + 160);
  v31 = *((_QWORD *)a2 + 20);
  if ( v31 == 2 || v30 == 2 )
    return v31 == 2 && v30 == 2;
  if ( *(_BYTE *)(a1 + 176) != a2[176] )
    return 0;
  if ( (v30 & 1) == 0 )
    return v31 == 0;
  if ( (v31 & 1) == 0 )
    return 0;
  return *(_QWORD *)(a1 + 168) == *((_QWORD *)a2 + 21);
}
