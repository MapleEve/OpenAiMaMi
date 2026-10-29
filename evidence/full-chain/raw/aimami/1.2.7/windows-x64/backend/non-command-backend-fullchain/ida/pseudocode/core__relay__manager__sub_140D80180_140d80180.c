// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d80180 | name sub_140D80180
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D80180(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v12; // r15
  char *v13; // r13
  __int64 *v14; // r12
  void *v15; // rax
  __int64 v16; // rcx
  char v17; // cl
  unsigned int v18; // eax
  __int64 v19; // rax
  PVOID v20; // rcx
  char v21; // dl
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // r13
  __int64 v26; // rcx
  PVOID v27; // rcx
  char v28; // al
  _OWORD *v29; // rax
  __m128i v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int64 v34; // rcx
  char v35; // al
  PVOID v36; // rcx
  char v37; // al
  void *v39; // rdi
  void *v40; // rdi
  char v41; // cl
  int v42; // eax
  _BYTE v43[24]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v44[360]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v45[6]; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v46; // [rsp+208h] [rbp+188h] BYREF
  _BYTE v47[80]; // [rsp+218h] [rbp+198h]
  PVOID v48; // [rsp+388h] [rbp+308h]
  PVOID v49; // [rsp+390h] [rbp+310h]
  PVOID Address; // [rsp+398h] [rbp+318h]
  unsigned int v51; // [rsp+3A4h] [rbp+324h]
  int v52; // [rsp+3A8h] [rbp+328h]
  unsigned __int8 v53; // [rsp+3AFh] [rbp+32Fh]
  __int64 v54; // [rsp+3B0h] [rbp+330h]

  v54 = -2;
  v5 = a1;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416AC440(&v46.m128i_u64[1], v6 + 16);
    v46.m128i_i64[0] = 9;
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v47[64];
    v7 = *(_OWORD *)v47;
    v8 = *(_OWORD *)&v47[16];
    v9 = *(_OWORD *)&v47[32];
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v47[48];
    *(_OWORD *)(v5 + 56) = v9;
    *(_OWORD *)(v5 + 40) = v8;
    *(_OWORD *)(v5 + 24) = v7;
    *(__m128i *)(v5 + 8) = v46;
    *(_QWORD *)v5 = -1;
    return v5;
  }
  v12 = a2[4];
  v13 = (char *)(v12 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v12 + 16), 1, 0) )
    sub_141937480((volatile void *)(v12 + 16));
  v14 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v18 = sub_141938160(a1);
    LOBYTE(v18) = v18 ^ 1;
    v51 = v18;
    if ( *(_BYTE *)(v12 + 17) )
      goto LABEL_7;
  }
  else
  {
    v51 = 0;
    if ( *(_BYTE *)(v12 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v15 = (void *)sub_140001650(40, 1);
      if ( !v15 )
      {
        Address = (PVOID)(v12 + 16);
        sub_141938D2B(1, 40);
      }
      qmemcpy(v15, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v51 )
      {
        v16 = 2 * *v14;
        if ( v16 )
        {
          v40 = v15;
          v41 = sub_141938160(v16);
          v15 = v40;
          if ( !v41 )
            *(_BYTE *)(v12 + 17) = 1;
        }
      }
      v17 = *v13;
      *v13 = 0;
      if ( v17 == 2 )
      {
        v39 = v15;
        WakeByAddressSingle((PVOID)(v12 + 16));
        v15 = v39;
      }
      *(_QWORD *)(v5 + 8) = 10;
      *(_QWORD *)(v5 + 16) = 40;
      *(_QWORD *)(v5 + 24) = v15;
      *(_QWORD *)(v5 + 32) = 40;
      *(_QWORD *)v5 = -1;
      return v5;
    }
  }
  Address = (PVOID)(v12 + 16);
  sub_140DA5500(&v46, a2 + 5, aDeactivatingAR, 29);
  v20 = (PVOID)v46.m128i_i64[1];
  v19 = v46.m128i_i64[0];
  v21 = v47[0];
  if ( v46.m128i_i64[0] == -1 )
  {
    v53 = v47[0];
    v49 = (PVOID)v46.m128i_i64[1];
    v25 = a2[1];
    v48 = (PVOID)(v25 + 16);
    LOBYTE(v20) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v25 + 16), 1, 0) )
      sub_141937480((volatile void *)(v25 + 16));
    if ( 2 * *v14 )
    {
      v42 = sub_141938160(v20);
      LOBYTE(v42) = v42 ^ 1;
      v52 = v42;
      if ( !*(_BYTE *)(v25 + 17) )
      {
LABEL_20:
        sub_140DCB2E0(v43, v25 + 24);
        if ( !(_BYTE)v52 && 2 * *v14 && !(unsigned __int8)sub_141938160(v26) )
          *(_BYTE *)(v25 + 17) = 1;
        v27 = v48;
        v28 = *(_BYTE *)v48;
        *(_BYTE *)v48 = 0;
        if ( v28 == 2 )
          WakeByAddressSingle(v27);
        if ( v44[340] )
        {
          nullsub_1(v27);
          v29 = (_OWORD *)sub_140001650(107, 1);
          if ( !v29 )
            sub_141938D2B(1, 107);
          *(_OWORD *)((char *)v29 + 91) = *(__int128 *)((char *)&xmmword_141A4E29B + 11);
          v29[5] = xmmword_141A4E29B;
          v29[4] = xmmword_141A4E28B;
          v29[3] = xmmword_141A4E27B;
          v29[2] = xmmword_141A4E26B;
          v29[1] = xmmword_141A4E25B;
          *v29 = xmmword_141A4E24B;
          *(_QWORD *)(v5 + 8) = 10;
          *(_QWORD *)(v5 + 16) = 107;
          *(_QWORD *)(v5 + 24) = v29;
          *(_QWORD *)(v5 + 32) = 107;
        }
        else
        {
          v46.m128i_i64[0] = a3;
          v46.m128i_i64[1] = a4;
          sub_140379840(v44, &v46);
          sub_140D82100(&v46, a2);
          if ( v46.m128i_i32[0] == -1 )
          {
            sub_140DCB2E0(&v46, v43);
            sub_140D98BE0(v45, a2, &v46);
            if ( LODWORD(v45[0]) == -1 )
            {
              sub_140F6F6F0(&v46, v43);
              sub_1418F44E0((__m128i *)v5, &v46, 0x180u);
              sub_1407ADB20(v43);
              sub_140028CC0(v49, v53);
              sub_140028CC0(Address, v51);
              return v5;
            }
            *(_OWORD *)(v5 + 88) = v45[5];
            *(_OWORD *)(v5 + 72) = v45[4];
            v30 = (__m128i)v45[0];
            v31 = v45[1];
            v32 = v45[2];
            v33 = v45[3];
          }
          else
          {
            *(_OWORD *)(v5 + 88) = *(_OWORD *)&v47[64];
            *(_OWORD *)(v5 + 72) = *(_OWORD *)&v47[48];
            v30 = v46;
            v31 = *(_OWORD *)v47;
            v32 = *(_OWORD *)&v47[16];
            v33 = *(_OWORD *)&v47[32];
          }
          *(_OWORD *)(v5 + 56) = v33;
          *(_OWORD *)(v5 + 40) = v32;
          *(_OWORD *)(v5 + 24) = v31;
          *(__m128i *)(v5 + 8) = v30;
        }
        *(_QWORD *)v5 = -1;
        sub_1407ADB20(v43);
        if ( (v53 & 1) == 0 && 2 * *v14 && !(unsigned __int8)sub_141938160(v34) )
          *((_BYTE *)v49 + 1) = 1;
        v20 = v49;
        v35 = *(_BYTE *)v49;
        *(_BYTE *)v49 = 0;
        if ( v35 == 2 )
          WakeByAddressSingle(v20);
        goto LABEL_36;
      }
    }
    else
    {
      v52 = 0;
      if ( !*(_BYTE *)(v25 + 17) )
        goto LABEL_20;
    }
    v46.m128i_i64[0] = (__int64)v48;
    v46.m128i_i8[8] = v52;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v46,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4A2B8);
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v47[64];
  v22 = *(_OWORD *)&v47[1];
  v23 = *(_OWORD *)&v47[17];
  v24 = *(_OWORD *)&v47[33];
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v47[49];
  *(_OWORD *)(v5 + 57) = v24;
  *(_OWORD *)(v5 + 41) = v23;
  *(_OWORD *)(v5 + 25) = v22;
  *(_QWORD *)(v5 + 8) = v19;
  *(_QWORD *)(v5 + 16) = v20;
  *(_BYTE *)(v5 + 24) = v21;
  *(_QWORD *)v5 = -1;
LABEL_36:
  if ( !(_BYTE)v51 && 2 * *v14 && !(unsigned __int8)sub_141938160(v20) )
    *(_BYTE *)(v12 + 17) = 1;
  v36 = Address;
  v37 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v37 == 2 )
    WakeByAddressSingle(v36);
  return v5;
}
