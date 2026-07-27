// module: codexmate_lib/core/voice/runtime
// addr: 0x14087a030
// name: sub_14087A030
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14087A030(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE *v9; // r15
  __int64 *v10; // r14
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // kr00_16
  char v15; // r15
  char *v16; // r12
  char v17; // al
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *v22; // r15
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r15
  char *v26; // r12
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rbx
  char v34; // r12
  PVOID v35; // rcx
  char v36; // al
  int v37; // eax
  char v38; // al
  __int128 v39; // xmm0
  _BYTE *v41; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+410h] [rbp+390h] BYREF
  __int64 v45; // [rsp+418h] [rbp+398h]
  __int64 v46; // [rsp+420h] [rbp+3A0h]
  char v47; // [rsp+59Bh] [rbp+51Bh]
  _BYTE v48[312]; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v49; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v50; // [rsp+740h] [rbp+6C0h]
  __int128 v51; // [rsp+750h] [rbp+6D0h]
  __int128 v52; // [rsp+760h] [rbp+6E0h]
  __int128 v53; // [rsp+770h] [rbp+6F0h]
  __int128 v54; // [rsp+780h] [rbp+700h]
  __int128 v55; // [rsp+790h] [rbp+710h]
  __int64 v56; // [rsp+7A0h] [rbp+720h]
  __int128 v57; // [rsp+7A8h] [rbp+728h] BYREF
  __int128 v58; // [rsp+7B8h] [rbp+738h]
  __int128 v59; // [rsp+7C8h] [rbp+748h]
  __int128 v60; // [rsp+7D8h] [rbp+758h]
  __int128 v61; // [rsp+7E8h] [rbp+768h]
  __int128 v62; // [rsp+7F8h] [rbp+778h]
  __int128 v63; // [rsp+808h] [rbp+788h] BYREF
  __int64 v64; // [rsp+818h] [rbp+798h]
  _DWORD v65[2]; // [rsp+820h] [rbp+7A0h]
  PVOID Address; // [rsp+828h] [rbp+7A8h]
  int v67; // [rsp+830h] [rbp+7B0h]
  char v68; // [rsp+837h] [rbp+7B7h] BYREF
  __int64 v69; // [rsp+838h] [rbp+7B8h]

  v69 = -2;
  v6 = (_BYTE *)sub_140003640((volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL));
  if ( !v6 )
  {
    *(_QWORD *)v48 = aStdSyncPoisonM;
    *(_QWORD *)&v48[8] = 76;
    v41 = v48;
    v42 = (__int64 (__fastcall **)())sub_14041F680;
    sub_1416C32C0(&unk_1416C99C2, &v41, &off_1416C9A50);
  }
  v9 = v6;
  LOBYTE(v8) = 1;
  if ( _InterlockedCompareExchange8(v6, 1, 0) )
    sub_1416C15B0(v6);
  v10 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v19 = sub_1416C2250(v8, v7);
    LOBYTE(v19) = v19 ^ 1;
    v67 = v19;
    LOBYTE(v19) = v9[1];
    Address = v9;
    if ( (_BYTE)v19 )
      goto LABEL_6;
LABEL_14:
    sub_1407BC950(&v41, v9 + 8);
    v22 = (char *)Address;
    if ( !(_BYTE)v67 && 2 * *v10 && !(unsigned __int8)sub_1416C2250(v21, v20) )
      v22[1] = 1;
    v23 = *v22;
    *v22 = 0;
    if ( v23 == 2 )
      WakeByAddressSingle(v22);
    v25 = sub_1400640A0(a2);
    v26 = (char *)(v25 + 32);
    LOBYTE(v27) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v25 + 32), 1, 0) )
      sub_1416C15B0(v26);
    if ( 2 * *v10 )
    {
      v28 = sub_1416C2250(v27, v24);
      LOBYTE(v28) = v28 ^ 1;
      v29 = *(unsigned __int8 *)(v25 + 33);
      if ( (_BYTE)v29 )
        goto LABEL_22;
    }
    else
    {
      v28 = 0;
      v29 = *(unsigned __int8 *)(v25 + 33);
      if ( (_BYTE)v29 )
      {
LABEL_22:
        v67 = v28;
        Address = (PVOID)(v25 + 32);
        v44 = 0;
        v45 = 1;
        v46 = 0;
        *(_QWORD *)&v48[16] = 1610612768;
        *(_QWORD *)v48 = &v44;
        *(_QWORD *)&v48[8] = &off_141799500;
        if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, v48) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v68,
            (unsigned int)&unk_141796270,
            (__int64)&off_1417995B8);
        v32 = v44;
        v33 = v45;
        v34 = v46;
        LODWORD(v57) = *(_DWORD *)((char *)&v46 + 1);
        *(_DWORD *)((char *)&v57 + 3) = HIDWORD(v46);
        if ( !(_BYTE)v67 && 2 * *v10 && !(unsigned __int8)sub_1416C2250(v31, v30) )
          *(_BYTE *)(v25 + 33) = 1;
        v35 = Address;
        v36 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v36 == 2 )
          WakeByAddressSingle(v35);
        v37 = v57;
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v57 + 3);
        *(_DWORD *)(a1 + 25) = v37;
        *(_QWORD *)(a1 + 8) = v32;
        *(_QWORD *)(a1 + 16) = v33;
        *(_BYTE *)(a1 + 24) = v34;
        *(_QWORD *)a1 = 2;
        goto LABEL_45;
      }
    }
    *(_BYTE *)(v25 + 863) = a3;
    if ( !(_BYTE)v28 && 2 * *v10 && !(unsigned __int8)sub_1416C2250(v29, v24) )
      *(_BYTE *)(v25 + 33) = 1;
    v38 = *v26;
    *v26 = 0;
    if ( v38 == 2 )
      WakeByAddressSingle(v26);
    sub_140878660((__int64)v48, (__int64)&v41);
    if ( *(_QWORD *)v48 == -1 )
    {
      v54 = *(_OWORD *)&v48[88];
      v53 = *(_OWORD *)&v48[72];
      v52 = *(_OWORD *)&v48[56];
      v51 = *(_OWORD *)&v48[40];
      v50 = *(_OWORD *)&v48[24];
      v49 = *(_OWORD *)&v48[8];
      if ( *(_QWORD *)off_141EC8D80 > 1u )
      {
        *(_QWORD *)&v63 = &v49;
        *((_QWORD *)&v63 + 1) = sub_140B036A0;
        *(_QWORD *)&v57 = 0;
        *((_QWORD *)&v57 + 1) = aCodexmateLibCo_6;
        v58 = 0x23u;
        *(_QWORD *)&v59 = aSrcCoreVoiceRu_3;
        *((_QWORD *)&v59 + 1) = 29;
        *(_QWORD *)&v60 = 2;
        *((_QWORD *)&v60 + 1) = aCodexmateLibCo_6;
        *(_QWORD *)&v61 = 35;
        *((_QWORD *)&v61 + 1) = 0x4C600000001LL;
        *(_QWORD *)&v62 = &unk_1417960B0;
        *((_QWORD *)&v62 + 1) = &v63;
        sub_1412C36A0(&v68, &v57);
      }
      sub_1408881F0(&v44);
      sub_1407DA310(&v49);
    }
    else
    {
      sub_141684120(&v44, v48, 400);
    }
    v47 = a3;
    sub_14087B3D0(&v57, &v41, &v44);
    if ( (_DWORD)v57 == -1 )
    {
      sub_140873770(v48, a2);
      if ( *(_QWORD *)v48 == -1 )
      {
        sub_140873C30(a1, a2);
        sub_1407DB700((__int64)&v44);
        goto LABEL_45;
      }
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v48[16];
      v39 = *(_OWORD *)v48;
    }
    else
    {
      *(_OWORD *)&v48[80] = v62;
      *(_OWORD *)&v48[64] = v61;
      *(_OWORD *)&v48[48] = v60;
      *(_OWORD *)&v48[32] = v59;
      *(_OWORD *)&v48[16] = v58;
      *(_OWORD *)v48 = v57;
      *(_QWORD *)&v63 = 0;
      *((_QWORD *)&v63 + 1) = 1;
      v64 = 0;
      *(_QWORD *)&v50 = 1610612768;
      *(_QWORD *)&v49 = &v63;
      *((_QWORD *)&v49 + 1) = &off_141799500;
      if ( (unsigned __int8)sub_140B036A0(v48, &v49) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v68,
          (unsigned int)&unk_141796270,
          (__int64)&off_1417995B8);
      v56 = v64;
      v55 = v63;
      sub_1407DA310(&v57);
      *(_QWORD *)(a1 + 24) = v56;
      v39 = v55;
    }
    *(_OWORD *)(a1 + 8) = v39;
    *(_QWORD *)a1 = 2;
    sub_1407DB700((__int64)&v44);
LABEL_45:
    sub_140016620(&v41);
    return a1;
  }
  v67 = 0;
  v11 = v9[1];
  Address = v9;
  if ( !v11 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)v48 = 0;
  *(_QWORD *)&v48[8] = 1;
  *(_QWORD *)&v48[16] = 0;
  v43 = 1610612768;
  v41 = v48;
  v42 = &off_141799500;
  if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v41) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v68,
      (unsigned int)&unk_141796270,
      (__int64)&off_1417995B8);
  v14 = *(_OWORD *)v48;
  v15 = v48[16];
  v65[0] = *(_DWORD *)&v48[17];
  *(_DWORD *)((char *)v65 + 3) = *(_DWORD *)&v48[20];
  v16 = (char *)Address;
  if ( !(_BYTE)v67 && 2 * *v10 && !(unsigned __int8)sub_1416C2250(v13, v12) )
    v16[1] = 1;
  v17 = *v16;
  *v16 = 0;
  if ( v17 == 2 )
    WakeByAddressSingle(v16);
  *(_OWORD *)(a1 + 8) = v14;
  *(_BYTE *)(a1 + 24) = v15;
  v18 = *(_DWORD *)((char *)v65 + 3);
  *(_DWORD *)(a1 + 25) = v65[0];
  *(_DWORD *)(a1 + 28) = v18;
  *(_QWORD *)a1 = 2;
  return a1;
}