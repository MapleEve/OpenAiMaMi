// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d87cf0 | name sub_140D87CF0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D87CF0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 *v11; // rbx
  __int64 v12; // rcx
  volatile signed __int8 *v13; // rbx
  char v14; // al
  __int64 v15; // rcx
  char v16; // al
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 *v20; // rcx
  unsigned __int128 v21; // kr00_16
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  PVOID v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  volatile signed __int8 v27; // al
  unsigned int v28; // eax
  __int64 v29; // rcx
  PVOID v30; // rcx
  char v31; // al
  __int64 *v33; // [rsp+30h] [rbp-50h] BYREF
  __int128 v34; // [rsp+38h] [rbp-48h]
  __int128 v35; // [rsp+48h] [rbp-38h]
  __int128 v36; // [rsp+58h] [rbp-28h]
  __int128 v37; // [rsp+68h] [rbp-18h]
  __int128 v38; // [rsp+78h] [rbp-8h]
  __int128 v39; // [rsp+88h] [rbp+8h]
  __m128i v40[9]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v41; // [rsp+130h] [rbp+B0h] BYREF
  _BYTE v42[96]; // [rsp+138h] [rbp+B8h] BYREF
  __m128i v43[9]; // [rsp+198h] [rbp+118h] BYREF
  unsigned __int128 v44; // [rsp+230h] [rbp+1B0h]
  __int128 v45; // [rsp+240h] [rbp+1C0h]
  __int128 v46; // [rsp+250h] [rbp+1D0h]
  __int128 v47; // [rsp+260h] [rbp+1E0h]
  __int128 v48; // [rsp+270h] [rbp+1F0h]
  __int128 v49; // [rsp+280h] [rbp+200h]
  _BYTE v50[96]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v51; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v52; // [rsp+2F8h] [rbp+278h]
  PVOID Address; // [rsp+300h] [rbp+280h]
  int v54; // [rsp+30Ch] [rbp+28Ch]
  __int64 v55; // [rsp+310h] [rbp+290h]

  v55 = -2;
  v5 = a1;
  v51 = a3;
  v52 = a4;
  v6 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v6 + 16), 1, 0) )
    sub_141937480((volatile void *)(v6 + 16));
  if ( !(2 * *off_1421E7210) )
  {
    v7 = 0;
    if ( !*(_BYTE *)(v6 + 17) )
      goto LABEL_5;
LABEL_30:
    v41 = v6 + 16;
    v42[0] = v7;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v41,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4A808);
  }
  v7 = sub_141938160(a1);
  LOBYTE(v7) = v7 ^ 1;
  if ( *(_BYTE *)(v6 + 17) )
    goto LABEL_30;
LABEL_5:
  v54 = v7;
  Address = (PVOID)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 40);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    v10 = v8 << 8;
    while ( *(_QWORD *)(v9 + 16) != v52 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v9 + 8), v51) )
    {
      v9 += 256;
      v10 -= 256;
      if ( !v10 )
        goto LABEL_16;
    }
    sub_140289C00((__int64)&v41, v9);
    v11 = (__int64 *)v41;
    *(_OWORD *)v50 = *(_OWORD *)v42;
    *(_OWORD *)&v50[16] = *(_OWORD *)&v42[16];
    *(_OWORD *)&v50[32] = *(_OWORD *)&v42[32];
    *(_OWORD *)&v50[48] = *(_OWORD *)&v42[48];
    *(_OWORD *)&v50[64] = *(_OWORD *)&v42[64];
    *(_OWORD *)&v50[80] = *(_OWORD *)&v42[80];
    sub_1418F44E0(v40, v43, 0x98u);
    v49 = *(_OWORD *)&v50[80];
    v48 = *(_OWORD *)&v50[64];
    v47 = *(_OWORD *)&v50[48];
    v46 = *(_OWORD *)&v50[32];
    v45 = *(_OWORD *)&v50[16];
    v44 = *(_OWORD *)v50;
    v34 = *(_OWORD *)v50;
    v35 = *(_OWORD *)&v50[16];
    v36 = *(_OWORD *)&v50[32];
    v37 = *(_OWORD *)&v50[48];
    v38 = *(_OWORD *)&v50[64];
    v39 = *(_OWORD *)&v50[80];
    v33 = v11;
    if ( !(_BYTE)v54 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v12) )
      *(_BYTE *)(v6 + 17) = 1;
    v13 = (volatile signed __int8 *)(v6 + 16);
    v14 = *(_BYTE *)(v6 + 16);
    *(_BYTE *)(v6 + 16) = 0;
    if ( v14 == 2 )
      WakeByAddressSingle((PVOID)(v6 + 16));
    sub_140289C00((__int64)&v41, (__int64)&v33);
    sub_140F6F360(v50, *a2 + 16LL, &v33);
    v15 = *(_QWORD *)v50;
    v16 = v50[8];
    if ( *(_QWORD *)v50 != -1 )
    {
      *(_QWORD *)(v5 + 96) = *(_QWORD *)&v50[88];
      *(_OWORD *)(v5 + 81) = *(_OWORD *)&v50[73];
      v17 = *(_OWORD *)&v50[9];
      v18 = *(_OWORD *)&v50[25];
      v19 = *(_OWORD *)&v50[41];
      *(_OWORD *)(v5 + 65) = *(_OWORD *)&v50[57];
      *(_OWORD *)(v5 + 49) = v19;
      *(_OWORD *)(v5 + 33) = v18;
      *(_OWORD *)(v5 + 17) = v17;
      *(_QWORD *)(v5 + 8) = v15;
      *(_BYTE *)(v5 + 16) = v16;
      *(_QWORD *)v5 = -1;
      sub_14038CFC0(&v41);
      v20 = (__int64 *)&v33;
LABEL_41:
      sub_14038CFC0(v20);
      return v5;
    }
    if ( v50[8] != 1 )
    {
LABEL_40:
      sub_1418F44E0((__m128i *)v5, (const __m128i *)&v33, 0x100u);
      v20 = &v41;
      goto LABEL_41;
    }
    LOBYTE(v15) = 1;
    if ( _InterlockedCompareExchange8(v13, 1, 0) )
      sub_141937480((volatile void *)(v6 + 16));
    if ( 2 * *off_1421E7210 )
    {
      v28 = sub_141938160(v15);
      v26 = v28;
      LOBYTE(v26) = v28 ^ 1;
      if ( *(_BYTE *)(v6 + 17) )
      {
LABEL_25:
        if ( !(_BYTE)v26 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v26) )
          *(_BYTE *)(v6 + 17) = 1;
        v27 = *v13;
        *v13 = 0;
        if ( v27 == 2 )
          WakeByAddressSingle((PVOID)(v6 + 16));
        goto LABEL_40;
      }
    }
    else
    {
      v26 = 0;
      if ( *(_BYTE *)(v6 + 17) )
        goto LABEL_25;
    }
    v54 = v26;
    sub_140F70110(v6 + 24, &v41, &v33);
    if ( !(_BYTE)v54 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v29) )
      *(_BYTE *)(v6 + 17) = 1;
    v30 = Address;
    v31 = *(_BYTE *)Address;
    *(_BYTE *)Address = 0;
    if ( v31 == 2 )
      WakeByAddressSingle(v30);
    goto LABEL_40;
  }
LABEL_16:
  v33 = &v51;
  *(_QWORD *)&v34 = sub_140186EE0;
  sub_1416ABFD0(v42, &unk_141A47AFD, &v33);
  v41 = 8;
  *(_OWORD *)&v50[32] = *(_OWORD *)&v42[24];
  *(_OWORD *)&v50[48] = *(_OWORD *)&v42[40];
  v45 = *(_OWORD *)&v42[8];
  v46 = *(_OWORD *)&v42[24];
  v47 = *(_OWORD *)&v42[40];
  v48 = *(_OWORD *)&v42[56];
  v49 = *(_OWORD *)&v42[72];
  v44 = __PAIR128__(*(unsigned __int64 *)v42, 8);
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v42[72];
  *(_OWORD *)(v5 + 72) = v48;
  v21 = v44;
  v22 = v45;
  v23 = v46;
  *(_OWORD *)(v5 + 56) = v47;
  *(_OWORD *)(v5 + 40) = v23;
  *(_OWORD *)(v5 + 24) = v22;
  *(_OWORD *)(v5 + 8) = v21;
  *(_QWORD *)v5 = -1;
  if ( !(_BYTE)v54 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(*((_QWORD *)&v21 + 1)) )
    *(_BYTE *)(v6 + 17) = 1;
  v24 = Address;
  v25 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v25 == 2 )
    WakeByAddressSingle(v24);
  return v5;
}
