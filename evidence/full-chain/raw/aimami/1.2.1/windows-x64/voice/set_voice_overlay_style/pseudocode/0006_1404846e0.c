// win 1.2.1 NEW set_voice_overlay_style 0x1404846e0 d=1
__int64 __fastcall sub_1404846E0(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // r15
  __int64 *v8; // r14
  char v9; // al
  __int128 v10; // kr00_16
  char v11; // r15
  char *v12; // r12
  char v13; // al
  int v14; // ecx
  int v15; // eax
  char *v16; // r15
  char v17; // al
  __int64 v18; // r15
  char *v19; // r12
  int v20; // eax
  __m128i v21; // kr10_16
  char v22; // r12
  PVOID v23; // rcx
  char v24; // al
  int v25; // eax
  char v26; // al
  __int128 v27; // xmm0
  _BYTE *v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  __m128i v32; // [rsp+410h] [rbp+390h] BYREF
  __int64 v33; // [rsp+420h] [rbp+3A0h]
  char v34; // [rsp+59Bh] [rbp+51Bh]
  _BYTE v35[312]; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v36; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v37; // [rsp+740h] [rbp+6C0h]
  __int128 v38; // [rsp+750h] [rbp+6D0h]
  __int128 v39; // [rsp+760h] [rbp+6E0h]
  __int128 v40; // [rsp+770h] [rbp+6F0h]
  __int128 v41; // [rsp+780h] [rbp+700h]
  __int128 v42; // [rsp+790h] [rbp+710h]
  __int64 v43; // [rsp+7A0h] [rbp+720h]
  __int128 v44; // [rsp+7A8h] [rbp+728h] BYREF
  __int128 v45; // [rsp+7B8h] [rbp+738h]
  __int128 v46; // [rsp+7C8h] [rbp+748h]
  __int128 v47; // [rsp+7D8h] [rbp+758h]
  __int128 v48; // [rsp+7E8h] [rbp+768h]
  __int128 v49; // [rsp+7F8h] [rbp+778h]
  __int128 v50; // [rsp+808h] [rbp+788h] BYREF
  __int64 v51; // [rsp+818h] [rbp+798h]
  _DWORD v52[2]; // [rsp+820h] [rbp+7A0h]
  PVOID Address; // [rsp+828h] [rbp+7A8h]
  int v54; // [rsp+830h] [rbp+7B0h]
  char v55; // [rsp+837h] [rbp+7B7h] BYREF
  __int64 v56; // [rsp+838h] [rbp+7B8h]

  v56 = -2; /*0x1404846f9*/
  v6 = (_BYTE *)sub_14029E2E0((_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL)); /*0x14048471f*/
  if ( !v6 ) /*0x140484727*/
  {
    *(_QWORD *)v35 = aStdSyncPoisonM; /*0x14048485c*/
    *(_QWORD *)&v35[8] = 76; /*0x140484863*/
    v29 = v35; /*0x140484875*/
    v30 = (__int64 (__fastcall **)())sub_1401F8E10; /*0x140484880*/
    sub_1415F0E20(&unk_14168224D, &v29, &off_1416822D8); /*0x140484896*/
  }
  v7 = v6; /*0x14048472d*/
  if ( _InterlockedCompareExchange8(v6, 1, 0) ) /*0x140484734*/
    sub_1415EF110(v6); /*0x1404848a0*/
  v8 = off_141DC2000; /*0x14048473f*/
  if ( 2 * *off_141DC2000 ) /*0x140484749*/
  {
    v15 = sub_1415EFDB0(); /*0x1404848aa*/
    LOBYTE(v15) = v15 ^ 1; /*0x1404848af*/
    v54 = v15; /*0x1404848b1*/
    LOBYTE(v15) = v7[1]; /*0x1404848b7*/
    Address = v7; /*0x1404848be*/
    if ( (_BYTE)v15 ) /*0x1404848c5*/
      goto LABEL_6; /*0x1404848c5*/
LABEL_14:
    sub_1401FAE10((__int64)&v29, (__int64)(v7 + 8)); /*0x1404848cb*/
    v16 = (char *)Address; /*0x1404848e3*/
    if ( !(_BYTE)v54 && 2 * *v8 && !(unsigned __int8)sub_1415EFDB0() ) /*0x140484e44*/
      v16[1] = 1; /*0x140484e52*/
    v17 = *v16; /*0x1404848fd*/
    *v16 = 0; /*0x1404848fd*/
    if ( v17 == 2 ) /*0x140484902*/
      WakeByAddressSingle(v16); /*0x140484a83*/
    v18 = sub_14034A9D0(a2); /*0x140484914*/
    v19 = (char *)(v18 + 32); /*0x140484917*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 32), 1, 0) ) /*0x14048491f*/
      sub_1415EF110(v19); /*0x140484a91*/
    if ( 2 * *v8 ) /*0x14048492e*/
    {
      v20 = sub_1415EFDB0(); /*0x140484a9c*/
      LOBYTE(v20) = v20 ^ 1; /*0x140484aa2*/
      if ( *(_BYTE *)(v18 + 33) ) /*0x140484aa4*/
        goto LABEL_22; /*0x140484aab*/
    }
    else
    {
      v20 = 0; /*0x14048493a*/
      if ( *(_BYTE *)(v18 + 33) ) /*0x14048493c*/
      {
LABEL_22:
        v54 = v20; /*0x140484949*/
        Address = (PVOID)(v18 + 32); /*0x14048494f*/
        v32.m128i_i64[0] = 0; /*0x140484956*/
        v32.m128i_i64[1] = 1; /*0x140484961*/
        v33 = 0; /*0x14048496c*/
        *(_QWORD *)&v35[16] = 1610612768; /*0x140484977*/
        *(_QWORD *)v35 = &v32; /*0x140484989*/
        *(_QWORD *)&v35[8] = &off_14168E2D0; /*0x140484997*/
        if ( (unsigned __int8)sub_1413DB990((__int64)aPoisonedLockAn_0, 41, (__int64)v35) ) /*0x1404849b1*/
          sub_1415F0BC0((__int64)aADisplayImplem_4, 55, (__int64)&v55, (__int64)&unk_14168DB30, (__int64)&off_14168F480); /*0x140484e31*/
        v21 = v32; /*0x1404849c6*/
        v22 = v33; /*0x1404849cd*/
        LODWORD(v44) = *(_DWORD *)((char *)&v33 + 1); /*0x1404849db*/
        *(_DWORD *)((char *)&v44 + 3) = HIDWORD(v33); /*0x1404849e7*/
        if ( !(_BYTE)v54 && 2 * *v8 && !(unsigned __int8)sub_1415EFDB0() ) /*0x140484e6a*/
          *(_BYTE *)(v18 + 33) = 1; /*0x140484e78*/
        v23 = Address; /*0x140484a07*/
        v24 = *(_BYTE *)Address; /*0x140484a0e*/
        *(_BYTE *)Address = 0; /*0x140484a0e*/
        if ( v24 == 2 ) /*0x140484a12*/
          WakeByAddressSingle(v23); /*0x140484e39*/
        v25 = v44; /*0x140484a18*/
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v44 + 3); /*0x140484a24*/
        *(_DWORD *)(a1 + 25) = v25; /*0x140484a27*/
        *(__m128i *)(a1 + 8) = v21; /*0x140484a2a*/
        *(_BYTE *)(a1 + 24) = v22; /*0x140484a32*/
        *(_QWORD *)a1 = -1; /*0x140484a36*/
        goto LABEL_45; /*0x140484a3d*/
      }
    }
    *(_BYTE *)(v18 + 863) = a3; /*0x140484ab1*/
    if ( !(_BYTE)v20 && 2 * *v8 && !(unsigned __int8)sub_1415EFDB0() ) /*0x140484eb0*/
      *(_BYTE *)(v18 + 33) = 1; /*0x140484ebe*/
    v26 = *v19; /*0x140484acd*/
    *v19 = 0; /*0x140484acd*/
    if ( v26 == 2 ) /*0x140484ad3*/
      WakeByAddressSingle(v19); /*0x140484e5f*/
    sub_140482D00(v35, &v29); /*0x140484ae4*/
    if ( *(_QWORD *)v35 == -1 ) /*0x140484af2*/
    {
      v41 = *(_OWORD *)&v35[88]; /*0x140484b19*/
      v40 = *(_OWORD *)&v35[72]; /*0x140484b27*/
      v39 = *(_OWORD *)&v35[56]; /*0x140484b4a*/
      v38 = *(_OWORD *)&v35[40]; /*0x140484b51*/
      v37 = *(_OWORD *)&v35[24]; /*0x140484b58*/
      v36 = *(_OWORD *)&v35[8]; /*0x140484b5f*/
      if ( *(_QWORD *)off_141DC1CC8 > 1u ) /*0x140484b74*/
      {
        *(_QWORD *)&v50 = &v36; /*0x140484b81*/
        *((_QWORD *)&v50 + 1) = sub_140286360; /*0x140484b8f*/
        *(_QWORD *)&v44 = 0; /*0x140484b96*/
        *((_QWORD *)&v44 + 1) = aCodexmateLibCo_16; /*0x140484ba8*/
        v45 = 0x23u; /*0x140484baf*/
        *(_QWORD *)&v46 = aSrcCoreVoiceRu; /*0x140484bcc*/
        *((_QWORD *)&v46 + 1) = 29; /*0x140484bd3*/
        *(_QWORD *)&v47 = 2; /*0x140484bde*/
        *((_QWORD *)&v47 + 1) = aCodexmateLibCo_16; /*0x140484be9*/
        *(_QWORD *)&v48 = 35; /*0x140484bf0*/
        *((_QWORD *)&v48 + 1) = 0x4C200000001LL; /*0x140484c05*/
        *(_QWORD *)&v49 = &unk_14168D510; /*0x140484c13*/
        *((_QWORD *)&v49 + 1) = &v50; /*0x140484c21*/
        sub_1411F1FA0(&v55, &v44); /*0x140484c36*/
      }
      sub_1404938E0(&v32); /*0x140484c43*/
      sub_14041F7C0(&v36); /*0x140484c50*/
    }
    else
    {
      sub_1415B2FE0(&v32, (const __m128i *)v35, 0x190u); /*0x140484b08*/
    }
    v34 = a3; /*0x140484c56*/
    sub_140485A80(&v44, &v29, &v32); /*0x140484c6e*/
    if ( (_DWORD)v44 == -1 ) /*0x140484c7b*/
    {
      sub_14047D8C0(v35, a2); /*0x140484d80*/
      if ( *(_QWORD *)v35 == -1 ) /*0x140484d8e*/
      {
        sub_14047DD80(a1, a2); /*0x140484dde*/
        sub_1404205C0(&v32); /*0x140484deb*/
        goto LABEL_45; /*0x140484df1*/
      }
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v35[16]; /*0x140484d97*/
      v27 = *(_OWORD *)v35; /*0x140484d9b*/
    }
    else
    {
      *(_OWORD *)&v35[80] = v49; /*0x140484c88*/
      *(_OWORD *)&v35[64] = v48; /*0x140484c96*/
      *(_OWORD *)&v35[48] = v47; /*0x140484cb9*/
      *(_OWORD *)&v35[32] = v46; /*0x140484cc0*/
      *(_OWORD *)&v35[16] = v45; /*0x140484cc7*/
      *(_OWORD *)v35 = v44; /*0x140484cce*/
      *(_QWORD *)&v50 = 0; /*0x140484cd5*/
      *((_QWORD *)&v50 + 1) = 1; /*0x140484ce0*/
      v51 = 0; /*0x140484ceb*/
      *(_QWORD *)&v37 = 1610612768; /*0x140484cf6*/
      *(_QWORD *)&v36 = &v50; /*0x140484d08*/
      *((_QWORD *)&v36 + 1) = &off_14168E2D0; /*0x140484d16*/
      if ( (unsigned __int8)sub_140286360(v35, &v36) ) /*0x140484d2b*/
        sub_1415F0BC0((__int64)aADisplayImplem_4, 55, (__int64)&v55, (__int64)&unk_14168DB30, (__int64)&off_14168F480); /*0x140484ea8*/
      v43 = v51; /*0x140484d40*/
      v42 = v50; /*0x140484d4e*/
      sub_14041F7C0(&v44); /*0x140484d5c*/
      *(_QWORD *)(a1 + 24) = v43; /*0x140484d69*/
      v27 = v42; /*0x140484d6d*/
    }
    *(_OWORD *)(a1 + 8) = v27; /*0x140484da2*/
    *(_QWORD *)a1 = -1; /*0x140484da6*/
    sub_1404205C0(&v32); /*0x140484db4*/
LABEL_45:
    sub_140049EA0(&v29); /*0x140484dba*/
    return a1; /*0x140484dbe*/
  }
  v54 = 0; /*0x140484755*/
  v9 = v7[1]; /*0x14048475f*/
  Address = v7; /*0x140484766*/
  if ( !v9 ) /*0x14048476d*/
    goto LABEL_14; /*0x14048476d*/
LABEL_6:
  *(_QWORD *)v35 = 0; /*0x140484773*/
  *(_QWORD *)&v35[8] = 1; /*0x14048477e*/
  *(_QWORD *)&v35[16] = 0; /*0x140484789*/
  v31 = 1610612768; /*0x140484794*/
  v29 = v35; /*0x1404847a3*/
  v30 = &off_14168E2D0; /*0x1404847ae*/
  if ( (unsigned __int8)sub_1413DB990((__int64)aPoisonedLockAn_0, 41, (__int64)&v29) ) /*0x1404847c2*/
    sub_1415F0BC0((__int64)aADisplayImplem_4, 55, (__int64)&v55, (__int64)&unk_14168DB30, (__int64)&off_14168F480); /*0x140484a68*/
  v10 = *(_OWORD *)v35; /*0x1404847d7*/
  v11 = v35[16]; /*0x1404847de*/
  v52[0] = *(_DWORD *)&v35[17]; /*0x1404847ec*/
  *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)&v35[20]; /*0x1404847f8*/
  v12 = (char *)Address; /*0x140484805*/
  if ( !(_BYTE)v54 && 2 * *v8 && !(unsigned __int8)sub_1415EFDB0() ) /*0x140484df3*/
    v12[1] = 1; /*0x140484e00*/
  v13 = *v12; /*0x14048481f*/
  *v12 = 0; /*0x14048481f*/
  if ( v13 == 2 ) /*0x140484825*/
    WakeByAddressSingle(v12); /*0x140484a76*/
  *(_OWORD *)(a1 + 8) = v10; /*0x14048482b*/
  *(_BYTE *)(a1 + 24) = v11; /*0x140484833*/
  v14 = *(_DWORD *)((char *)v52 + 3); /*0x14048483d*/
  *(_DWORD *)(a1 + 25) = v52[0]; /*0x140484843*/
  *(_DWORD *)(a1 + 28) = v14; /*0x140484846*/
  *(_QWORD *)a1 = -1; /*0x140484849*/
  return a1; /*0x140484dc6*/
}