// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8b2c0 | name sub_140D8B2C0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D8B2C0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v10; // r15
  __int64 *v11; // r14
  int v12; // r12d
  void *v13; // rax
  __int64 v14; // rcx
  char v15; // cl
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rcx
  PVOID v19; // rcx
  char v20; // al
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // al
  void *v29; // rdi
  void *v30; // rdi
  char v31; // cl
  _BYTE v32[383]; // [rsp+30h] [rbp-50h] BYREF
  char v33; // [rsp+1AFh] [rbp+12Fh]
  __int64 v34; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v35; // [rsp+1B8h] [rbp+138h]
  __int128 v36; // [rsp+1C8h] [rbp+148h]
  __int128 v37; // [rsp+1D8h] [rbp+158h]
  __int128 v38; // [rsp+1E8h] [rbp+168h]
  __int128 v39; // [rsp+1F8h] [rbp+178h]
  __int64 v40; // [rsp+208h] [rbp+188h]
  __m128i v41[24]; // [rsp+210h] [rbp+190h] BYREF
  _BYTE v42[17]; // [rsp+397h] [rbp+317h] BYREF
  PVOID Address; // [rsp+3A8h] [rbp+328h]
  int v44; // [rsp+3B4h] [rbp+334h]
  __int64 v45; // [rsp+3B8h] [rbp+338h]
  int v46; // [rsp+3C4h] [rbp+344h]
  __int64 v47; // [rsp+3C8h] [rbp+348h]

  v47 = -2;
  v4 = a1;
  v5 = a2[2];
  if ( *(_QWORD *)(v5 + 16) != -1 )
  {
    sub_1416AC440(&v41[0].m128i_u64[1], v5 + 16);
    v41[0].m128i_i64[0] = 9;
    *(__m128i *)(v4 + 88) = v41[5];
    v6 = v41[1];
    v7 = v41[2];
    v8 = v41[3];
    *(__m128i *)(v4 + 72) = v41[4];
    *(__m128i *)(v4 + 56) = v8;
    *(__m128i *)(v4 + 40) = v7;
    *(__m128i *)(v4 + 24) = v6;
    *(__m128i *)(v4 + 8) = v41[0];
    *(_QWORD *)v4 = -1;
    return v4;
  }
  v10 = a2[4];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 16), 1, 0) )
    sub_141937480((volatile void *)(v10 + 16));
  v11 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v12 = sub_141938160(a1);
    LOBYTE(v12) = v12 ^ 1;
    if ( *(_BYTE *)(v10 + 17) )
      goto LABEL_7;
  }
  else
  {
    v12 = 0;
    if ( *(_BYTE *)(v10 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v13 = (void *)sub_140001650(40, 1);
      if ( !v13 )
      {
        v46 = v12;
        v45 = v10;
        sub_141938D2B(1, 40);
      }
      qmemcpy(v13, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v12 )
      {
        v14 = 2 * *v11;
        if ( v14 )
        {
          v30 = v13;
          v31 = sub_141938160(v14);
          v13 = v30;
          if ( !v31 )
            *(_BYTE *)(v10 + 17) = 1;
        }
      }
      v15 = *(_BYTE *)(v10 + 16);
      *(_BYTE *)(v10 + 16) = 0;
      if ( v15 == 2 )
      {
        v29 = v13;
        WakeByAddressSingle((PVOID)(v10 + 16));
        v13 = v29;
      }
      *(_QWORD *)(v4 + 8) = 10;
      *(_QWORD *)(v4 + 16) = 40;
      *(_QWORD *)(v4 + 24) = v13;
      *(_QWORD *)(v4 + 32) = 40;
      *(_QWORD *)v4 = -1;
      return v4;
    }
  }
  v46 = v12;
  v45 = v10;
  v16 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v16 + 16), 1, 0) )
    sub_141937480((volatile void *)(v16 + 16));
  if ( 2 * *v11 )
  {
    v17 = sub_141938160(a1);
    LOBYTE(v17) = v17 ^ 1;
    if ( !*(_BYTE *)(v16 + 17) )
      goto LABEL_18;
LABEL_34:
    v41[0].m128i_i64[0] = v16 + 16;
    v41[0].m128i_i8[8] = v17;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v41,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4AD30);
  }
  v17 = 0;
  if ( *(_BYTE *)(v16 + 17) )
    goto LABEL_34;
LABEL_18:
  v44 = v17;
  Address = (PVOID)(v16 + 16);
  sub_140DCB2E0(v32, v16 + 24);
  if ( !(_BYTE)v44 && 2 * *v11 && !(unsigned __int8)sub_141938160(v18) )
    *(_BYTE *)(v16 + 17) = 1;
  v19 = Address;
  v20 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v20 == 2 )
    WakeByAddressSingle(v19);
  if ( a3 == v33 )
  {
    sub_140F6F6F0(v41, v32);
    sub_1418F44E0((__m128i *)v4, v41, 0x180u);
    goto LABEL_26;
  }
  v33 = a3;
  sub_140DCB2E0(v41, v32);
  v42[0] = 0;
  sub_140D82750(&v34, a2, v41, v42);
  v21 = v34;
  if ( v34 != -1 )
  {
    *(_QWORD *)(v4 + 96) = v40;
    *(_OWORD *)(v4 + 80) = v39;
    v22 = v35;
    v23 = v36;
    v24 = v37;
    *(_OWORD *)(v4 + 64) = v38;
    *(_OWORD *)(v4 + 48) = v24;
    *(_OWORD *)(v4 + 32) = v23;
    *(_OWORD *)(v4 + 16) = v22;
    *(_QWORD *)(v4 + 8) = v21;
    *(_QWORD *)v4 = -1;
LABEL_26:
    sub_1407ADB20(v32);
    goto LABEL_27;
  }
  sub_1401BD710(v35);
  sub_140F6F6F0(v41, v32);
  sub_1418F44E0((__m128i *)v4, v41, 0x180u);
  sub_1407ADB20(v32);
LABEL_27:
  if ( !(_BYTE)v46 && 2 * *v11 && !(unsigned __int8)sub_141938160(v25) )
    *(_BYTE *)(v45 + 17) = 1;
  v26 = v45;
  v27 = *(_BYTE *)(v45 + 16);
  *(_BYTE *)(v45 + 16) = 0;
  if ( v27 == 2 )
    WakeByAddressSingle((PVOID)(v26 + 16));
  return v4;
}
