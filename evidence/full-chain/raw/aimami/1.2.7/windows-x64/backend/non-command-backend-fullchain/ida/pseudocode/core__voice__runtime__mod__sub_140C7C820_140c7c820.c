// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c7c820 | name sub_140C7C820
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C7C820(__int64 a1, __int64 a2, char a3)
{
  _BYTE *v6; // rax
  __int64 v7; // rcx
  _BYTE *v8; // r15
  __int64 *v9; // r14
  char v10; // al
  __int64 v11; // rcx
  __int128 v12; // kr00_16
  char v13; // r15
  char *v14; // r12
  char v15; // al
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  char *v19; // r15
  char v20; // al
  __int64 v21; // r15
  char *v22; // r12
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __m128i v27; // kr10_16
  char v28; // r12
  PVOID v29; // rcx
  char v30; // al
  int v31; // eax
  char v32; // al
  __int128 v33; // xmm0
  _BYTE *v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-40h]
  __m128i v38; // [rsp+410h] [rbp+390h] BYREF
  __int64 v39; // [rsp+420h] [rbp+3A0h]
  char v40; // [rsp+59Bh] [rbp+51Bh]
  _BYTE v41[312]; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v42; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v43; // [rsp+740h] [rbp+6C0h]
  __int128 v44; // [rsp+750h] [rbp+6D0h]
  __int128 v45; // [rsp+760h] [rbp+6E0h]
  __int128 v46; // [rsp+770h] [rbp+6F0h]
  __int128 v47; // [rsp+780h] [rbp+700h]
  __int128 v48; // [rsp+790h] [rbp+710h]
  __int64 v49; // [rsp+7A0h] [rbp+720h]
  __int128 v50; // [rsp+7A8h] [rbp+728h] BYREF
  __int128 v51; // [rsp+7B8h] [rbp+738h]
  __int128 v52; // [rsp+7C8h] [rbp+748h]
  __int128 v53; // [rsp+7D8h] [rbp+758h]
  __int128 v54; // [rsp+7E8h] [rbp+768h]
  __int128 v55; // [rsp+7F8h] [rbp+778h]
  __int128 v56; // [rsp+808h] [rbp+788h] BYREF
  __int64 v57; // [rsp+818h] [rbp+798h]
  _DWORD v58[2]; // [rsp+820h] [rbp+7A0h]
  PVOID Address; // [rsp+828h] [rbp+7A8h]
  int v60; // [rsp+830h] [rbp+7B0h]
  char v61; // [rsp+837h] [rbp+7B7h] BYREF
  __int64 v62; // [rsp+838h] [rbp+7B8h]

  v62 = -2;
  v6 = (_BYTE *)sub_1404C9470((volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 5016LL) + 16LL));
  if ( !v6 )
  {
    *(_QWORD *)v41 = aStdSyncPoisonM;
    *(_QWORD *)&v41[8] = 76;
    v35 = v41;
    v36 = (__int64 (__fastcall **)())sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, &v35, &off_141A0F7A8);
  }
  v8 = v6;
  LOBYTE(v7) = 1;
  if ( _InterlockedCompareExchange8(v6, 1, 0) )
    sub_141937480(v6);
  v9 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v17 = sub_141938160(v7);
    LOBYTE(v17) = v17 ^ 1;
    v60 = v17;
    LOBYTE(v17) = v8[1];
    Address = v8;
    if ( (_BYTE)v17 )
      goto LABEL_6;
LABEL_14:
    sub_14028DE70((__int64)&v35, (__int64)(v8 + 8));
    v19 = (char *)Address;
    if ( !(_BYTE)v60 && 2 * *v9 && !(unsigned __int8)sub_141938160(v18) )
      v19[1] = 1;
    v20 = *v19;
    *v19 = 0;
    if ( v20 == 2 )
      WakeByAddressSingle(v19);
    v21 = sub_14054A5A0(a2);
    v22 = (char *)(v21 + 32);
    LOBYTE(v23) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v21 + 32), 1, 0) )
      sub_141937480(v22);
    if ( 2 * *v9 )
    {
      v24 = sub_141938160(v23);
      LOBYTE(v24) = v24 ^ 1;
      v25 = *(unsigned __int8 *)(v21 + 33);
      if ( (_BYTE)v25 )
        goto LABEL_22;
    }
    else
    {
      v24 = 0;
      v25 = *(unsigned __int8 *)(v21 + 33);
      if ( (_BYTE)v25 )
      {
LABEL_22:
        v60 = v24;
        Address = (PVOID)(v21 + 32);
        v38.m128i_i64[0] = 0;
        v38.m128i_i64[1] = 1;
        v39 = 0;
        *(_QWORD *)&v41[16] = 1610612768;
        *(_QWORD *)v41 = &v38;
        *(_QWORD *)&v41[8] = &off_141A3FE88;
        if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v41) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v61,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v27 = v38;
        v28 = v39;
        LODWORD(v50) = *(_DWORD *)((char *)&v39 + 1);
        *(_DWORD *)((char *)&v50 + 3) = HIDWORD(v39);
        if ( !(_BYTE)v60 && 2 * *v9 && !(unsigned __int8)sub_141938160(v26) )
          *(_BYTE *)(v21 + 33) = 1;
        v29 = Address;
        v30 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v30 == 2 )
          WakeByAddressSingle(v29);
        v31 = v50;
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v50 + 3);
        *(_DWORD *)(a1 + 25) = v31;
        *(__m128i *)(a1 + 8) = v27;
        *(_BYTE *)(a1 + 24) = v28;
        *(_QWORD *)a1 = 2;
        goto LABEL_45;
      }
    }
    *(_BYTE *)(v21 + 863) = a3;
    if ( !(_BYTE)v24 && 2 * *v9 && !(unsigned __int8)sub_141938160(v25) )
      *(_BYTE *)(v21 + 33) = 1;
    v32 = *v22;
    *v22 = 0;
    if ( v32 == 2 )
      WakeByAddressSingle(v22);
    sub_140C7AE80((__int64)v41, (__int64)&v35);
    if ( *(_QWORD *)v41 == -1 )
    {
      v47 = *(_OWORD *)&v41[88];
      v46 = *(_OWORD *)&v41[72];
      v45 = *(_OWORD *)&v41[56];
      v44 = *(_OWORD *)&v41[40];
      v43 = *(_OWORD *)&v41[24];
      v42 = *(_OWORD *)&v41[8];
      if ( *(_QWORD *)off_1421E6EC0 > 1u )
      {
        *(_QWORD *)&v56 = &v42;
        *((_QWORD *)&v56 + 1) = sub_14104A7D0;
        *(_QWORD *)&v53 = 2;
        *((_QWORD *)&v53 + 1) = aCodexmateLibCo_32;
        *(_QWORD *)&v54 = 35;
        *(_QWORD *)&v55 = &unk_141A3B5DB;
        *((_QWORD *)&v55 + 1) = &v56;
        *(_QWORD *)&v50 = 0;
        *((_QWORD *)&v50 + 1) = aCodexmateLibCo_32;
        v51 = 0x23u;
        *(_QWORD *)&v52 = aSrcCoreVoiceRu_1;
        *((_QWORD *)&v52 + 1) = 29;
        *((_QWORD *)&v54 + 1) = 0x4C600000001LL;
        sub_1414D53A0(&v61, &v50);
      }
      sub_140C96CC0(&v38);
      sub_140BAC840(&v42);
    }
    else
    {
      sub_1418F44E0(&v38, (const __m128i *)v41, 0x190u);
    }
    v40 = a3;
    sub_140C7DBC0(&v50, &v35, &v38);
    if ( (_DWORD)v50 == -1 )
    {
      sub_140C75E50(v41, a2);
      if ( *(_QWORD *)v41 == -1 )
      {
        sub_140C76310(a1, a2);
        sub_14062B2F0((__int64)&v38);
        goto LABEL_45;
      }
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v41[16];
      v33 = *(_OWORD *)v41;
    }
    else
    {
      *(_OWORD *)&v41[80] = v55;
      *(_OWORD *)&v41[64] = v54;
      *(_OWORD *)&v41[48] = v53;
      *(_OWORD *)&v41[32] = v52;
      *(_OWORD *)&v41[16] = v51;
      *(_OWORD *)v41 = v50;
      *(_QWORD *)&v56 = 0;
      *((_QWORD *)&v56 + 1) = 1;
      v57 = 0;
      *(_QWORD *)&v43 = 1610612768;
      *(_QWORD *)&v42 = &v56;
      *((_QWORD *)&v42 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v41, &v42) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v61,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v49 = v57;
      v48 = v56;
      sub_140BAC840(&v50);
      *(_QWORD *)(a1 + 24) = v49;
      v33 = v48;
    }
    *(_OWORD *)(a1 + 8) = v33;
    *(_QWORD *)a1 = 2;
    sub_14062B2F0((__int64)&v38);
LABEL_45:
    sub_140034990(&v35);
    return a1;
  }
  v60 = 0;
  v10 = v8[1];
  Address = v8;
  if ( !v10 )
    goto LABEL_14;
LABEL_6:
  *(_QWORD *)v41 = 0;
  *(_QWORD *)&v41[8] = 1;
  *(_QWORD *)&v41[16] = 0;
  v37 = 1610612768;
  v35 = v41;
  v36 = &off_141A3FE88;
  if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, &v35) )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v61,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v12 = *(_OWORD *)v41;
  v13 = v41[16];
  v58[0] = *(_DWORD *)&v41[17];
  *(_DWORD *)((char *)v58 + 3) = *(_DWORD *)&v41[20];
  v14 = (char *)Address;
  if ( !(_BYTE)v60 && 2 * *v9 && !(unsigned __int8)sub_141938160(v11) )
    v14[1] = 1;
  v15 = *v14;
  *v14 = 0;
  if ( v15 == 2 )
    WakeByAddressSingle(v14);
  *(_OWORD *)(a1 + 8) = v12;
  *(_BYTE *)(a1 + 24) = v13;
  v16 = *(_DWORD *)((char *)v58 + 3);
  *(_DWORD *)(a1 + 25) = v58[0];
  *(_DWORD *)(a1 + 28) = v16;
  *(_QWORD *)a1 = 2;
  return a1;
}
