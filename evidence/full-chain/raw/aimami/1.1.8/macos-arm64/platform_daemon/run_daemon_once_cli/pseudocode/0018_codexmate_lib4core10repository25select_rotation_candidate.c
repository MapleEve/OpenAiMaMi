// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x10053c4b0 depth=1
// codexmate_lib4core10repository25select_rotation_candidate
__int64 __fastcall codexmate_lib::core::repository::select_rotation_candidate::hd3eea7438d083a1d(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  const void *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r12
  int v9; // edx
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // esi
  __int64 v15; // rsi
  const void *v16; // rsi
  const void *v17; // r12
  int v18; // r15d
  int v19; // eax
  __int64 v20; // rdx
  _QWORD v22[4]; // [rsp+8h] [rbp-68h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+44h] [rbp-2Ch] BYREF

  v23[0] = a3; /*0x10053c4c1*/
  v23[1] = a4; /*0x10053c4c5*/
  if ( !a2 ) /*0x10053c4cc*/
    return 0; /*0x10053c5f2*/
  v5 = a3; /*0x10053c4d5*/
  v6 = a1; /*0x10053c4d8*/
  v7 = 336 * a2; /*0x10053c4db*/
  v24 = a1 + 336 * a2; /*0x10053c4e6*/
  v8 = 0; /*0x10053c4ea*/
  while ( *(_QWORD *)(a1 + v8 + 192) != a4 || memcmp(*(const void **)(a1 + v8 + 184), v5, a4) ) /*0x10053c51b*/
  {
    v8 += 336; /*0x10053c4f0*/
    if ( v7 == v8 ) /*0x10053c4fa*/
    {
      v11 = 0; /*0x10053c547*/
      goto LABEL_12; /*0x10053c547*/
    }
  }
  v9 = 0; /*0x10053c51d*/
  v10 = 0; /*0x10053c525*/
  if ( *(_DWORD *)(a1 + v8 + 48) != 2 ) /*0x10053c52a*/
    v10 = 10000 * *(_DWORD *)(a1 + v8 + 80); /*0x10053c52c*/
  if ( *(_DWORD *)(a1 + v8 + 88) != 2 ) /*0x10053c53b*/
    v9 = 100 * *(_DWORD *)(a1 + v8 + 120); /*0x10053c53d*/
  v11 = v10 + v9; /*0x10053c543*/
LABEL_12:
  v25 = v11; /*0x10053c549*/
  v22[1] = v24; /*0x10053c550*/
  v22[2] = v23; /*0x10053c558*/
  v22[3] = &v25; /*0x10053c560*/
  v12 = 0; /*0x10053c564*/
  while ( 1 ) /*0x10053c59f*/
  {
    if ( *(_QWORD *)(v6 + 192) != a4 /*0x10053c5ca*/
      || (v16 = v5,
          v17 = v5,
          v18 = v11,
          v19 = memcmp(*(const void **)(v6 + 184), v16, a4),
          v12 = 0,
          v11 = v18,
          v5 = v17,
          v19) )
    {
      if ( *(_DWORD *)(v6 + 128) == 2 || (*(_BYTE *)(v6 + 168) & 6) != 2 && *(_BYTE *)(v6 + 168) != 4 ) /*0x10053c5e9*/
      {
        v13 = 10000 * *(_DWORD *)(v6 + 80); /*0x10053c570*/
        if ( *(_DWORD *)(v6 + 48) == 2 ) /*0x10053c57b*/
          v13 = 0; /*0x10053c57b*/
        v14 = 100 * *(_DWORD *)(v6 + 120); /*0x10053c57e*/
        if ( *(_DWORD *)(v6 + 88) == 2 ) /*0x10053c586*/
          v14 = 0; /*0x10053c586*/
        v15 = (unsigned int)(v13 + v14); /*0x10053c589*/
        if ( (int)v15 > v11 ) /*0x10053c58d*/
          break; /*0x10053c58d*/
      }
    }
    v6 += 336; /*0x10053c58f*/
    v7 -= 336; /*0x10053c596*/
    if ( !v7 ) /*0x10053c59d*/
      return v12; /*0x10053c59d*/
  }
  v22[0] = v6 + 336; /*0x10053c5fd*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h66263ed51f961c29( /*0x10053c608*/
    v22,
    v15,
    v6);
  return v20; /*0x10053c613*/
}