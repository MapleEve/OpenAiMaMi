// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d80b20 | name sub_140D80B20
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D80B20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // rcx
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rbx
  char *v16; // r15
  __int64 *v17; // r14
  int v18; // r12d
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // rdi
  char v22; // al
  __int64 v23; // rax
  PVOID v24; // rcx
  char v25; // dl
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 v29; // r15
  __int64 v30; // rcx
  PVOID v31; // rcx
  char v32; // al
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rcx
  char v37; // al
  PVOID v38; // rcx
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v43; // rdx
  int v44; // eax
  _BYTE v45[56]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v46; // [rsp+60h] [rbp-20h] BYREF
  __int128 v47; // [rsp+70h] [rbp-10h]
  __int128 v48; // [rsp+80h] [rbp+0h]
  __int128 v49; // [rsp+90h] [rbp+10h]
  char v50; // [rsp+1CCh] [rbp+14Ch]
  _BYTE v51[384]; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD *v52; // [rsp+368h] [rbp+2E8h]
  __m128i v53; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v54; // [rsp+380h] [rbp+300h]
  __int128 v55; // [rsp+390h] [rbp+310h]
  __int128 v56; // [rsp+3A0h] [rbp+320h]
  PVOID v57; // [rsp+3B8h] [rbp+338h]
  PVOID v58; // [rsp+3C0h] [rbp+340h]
  PVOID v59; // [rsp+3C8h] [rbp+348h]
  PVOID Address; // [rsp+3D0h] [rbp+350h]
  __int64 v61; // [rsp+3D8h] [rbp+358h]
  unsigned __int8 v62; // [rsp+3E6h] [rbp+366h]
  char v63; // [rsp+3E7h] [rbp+367h]
  __int64 v64; // [rsp+3E8h] [rbp+368h]

  v64 = -2;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416AC440(&v51[8], v6 + 16);
    *(_QWORD *)v51 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v51[80];
    v7 = *(_OWORD *)&v51[16];
    v8 = *(_OWORD *)&v51[32];
    v9 = *(_OWORD *)&v51[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v51[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = *(_OWORD *)v51;
    return a1;
  }
  sub_141028BD0(v51, a3, a4);
  v11 = *(_QWORD *)v51;
  v46 = *(__m128i *)&v51[8];
  v47 = *(_OWORD *)&v51[24];
  v48 = *(_OWORD *)&v51[40];
  v49 = *(_OWORD *)&v51[56];
  if ( *(_QWORD *)v51 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v51[88];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v51[72];
    v12 = v46;
    v13 = v47;
    v14 = v48;
    *(_OWORD *)(a1 + 56) = v49;
    *(_OWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 24) = v13;
    *(__m128i *)(a1 + 8) = v12;
    *(_QWORD *)a1 = v11;
    return a1;
  }
  v53 = v46;
  v54 = v47;
  v55 = v48;
  v56 = v49;
  v15 = a2[4];
  v16 = (char *)(v15 + 16);
  LOBYTE(v10) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v15 + 16), 1, 0) )
    sub_141937480((volatile void *)(v15 + 16));
  v17 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v18 = sub_141938160(v10);
    LOBYTE(v18) = v18 ^ 1;
    if ( *(_BYTE *)(v15 + 17) )
      goto LABEL_9;
LABEL_16:
    LODWORD(v59) = v18;
    Address = (PVOID)(v15 + 16);
    sub_140DA5500(v51, a2 + 5, aImportingRelay, 25);
    v24 = *(PVOID *)&v51[8];
    v23 = *(_QWORD *)v51;
    v25 = v51[16];
    if ( *(_QWORD *)v51 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v51[80];
      v26 = *(_OWORD *)&v51[17];
      v27 = *(_OWORD *)&v51[33];
      v28 = *(_OWORD *)&v51[49];
      *(_OWORD *)(a1 + 65) = *(_OWORD *)&v51[65];
      *(_OWORD *)(a1 + 49) = v28;
      *(_OWORD *)(a1 + 33) = v27;
      *(_OWORD *)(a1 + 17) = v26;
      *(_QWORD *)a1 = v23;
      *(_QWORD *)(a1 + 8) = v24;
      *(_BYTE *)(a1 + 16) = v25;
LABEL_33:
      if ( !(_BYTE)v59 && 2 * *v17 && !(unsigned __int8)sub_141938160(v24) )
        *(_BYTE *)(v15 + 17) = 1;
      v38 = Address;
      v39 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v39 == 2 )
        WakeByAddressSingle(v38);
      goto LABEL_37;
    }
    v62 = v51[16];
    v58 = *(PVOID *)&v51[8];
    v29 = a2[1];
    LOBYTE(v24) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v29 + 16), 1, 0) )
      sub_141937480((volatile void *)(v29 + 16));
    if ( 2 * *v17 )
    {
      v44 = sub_141938160(v24);
      LOBYTE(v44) = v44 ^ 1;
      LODWORD(v61) = v44;
      v57 = (PVOID)(v29 + 16);
      if ( !*(_BYTE *)(v29 + 17) )
      {
LABEL_22:
        sub_140DCB2E0(&v46, v29 + 24);
        if ( !(_BYTE)v61 )
        {
          if ( 2 * *v17 )
          {
            v63 = 1;
            if ( !(unsigned __int8)sub_141938160(v30) )
              *(_BYTE *)(v29 + 17) = 1;
          }
        }
        v31 = v57;
        v32 = *(_BYTE *)v57;
        *(_BYTE *)v57 = 0;
        if ( v32 == 2 )
        {
          v63 = 1;
          WakeByAddressSingle(v31);
        }
        if ( v50 )
        {
          v63 = 1;
          sub_140DBD2A0(v51);
        }
        else
        {
          v63 = 1;
          sub_140D82100(v51, a2);
          if ( *(_DWORD *)v51 == -1 )
          {
            v43 = *a2 + 16LL;
            v63 = 1;
            sub_141029190(v45, v43, &v46, &v53);
            v52 = a2;
            sub_1418F44E0((__m128i *)v51, &v46, 0x180u);
            v63 = 0;
            sub_140F9D820(a1, v45, v51);
            sub_140028CC0(v58, v62);
            sub_140028CC0(Address, (unsigned int)v59);
            sub_14062A920(&v53);
            return a1;
          }
        }
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v51[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v51[64];
        v33 = *(_OWORD *)v51;
        v34 = *(_OWORD *)&v51[16];
        v35 = *(_OWORD *)&v51[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v51[48];
        *(_OWORD *)(a1 + 32) = v35;
        *(_OWORD *)(a1 + 16) = v34;
        *(_OWORD *)a1 = v33;
        sub_1407ADB20(&v46);
        if ( (v62 & 1) == 0 && 2 * *v17 && !(unsigned __int8)sub_141938160(v36) )
          *((_BYTE *)v58 + 1) = 1;
        v24 = v58;
        v37 = *(_BYTE *)v58;
        *(_BYTE *)v58 = 0;
        if ( v37 == 2 )
          WakeByAddressSingle(v24);
        goto LABEL_33;
      }
    }
    else
    {
      LODWORD(v61) = 0;
      v57 = (PVOID)(v29 + 16);
      if ( !*(_BYTE *)(v29 + 17) )
        goto LABEL_22;
    }
    *(_QWORD *)v51 = v57;
    v51[8] = v61;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v51,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4A2F0);
  }
  v18 = 0;
  if ( !*(_BYTE *)(v15 + 17) )
    goto LABEL_16;
LABEL_9:
  nullsub_1(v10);
  v19 = (void *)sub_140001650(40, 1);
  if ( !v19 )
  {
    LODWORD(v59) = v18;
    Address = (PVOID)(v15 + 16);
    sub_141938D2B(1, 40);
  }
  v21 = v19;
  qmemcpy(v19, "Codex router transition lock is poisoned", 40);
  if ( !(_BYTE)v18 && 2 * *v17 && !(unsigned __int8)sub_141938160(v20) )
    *(_BYTE *)(v15 + 17) = 1;
  v22 = *v16;
  *v16 = 0;
  if ( v22 == 2 )
    WakeByAddressSingle((PVOID)(v15 + 16));
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 40;
  *(_QWORD *)(a1 + 16) = v21;
  *(_QWORD *)(a1 + 24) = 40;
LABEL_37:
  if ( v53.m128i_i64[0] )
    sub_140001660(v53.m128i_i64[1], v53.m128i_i64[0], 1);
  v59 = *((PVOID *)&v55 + 1);
  v40 = v55;
  Address = nullptr;
  v61 = v55;
  while ( v59 != Address )
  {
    Address = (char *)Address + 1;
    v41 = v40 + 176;
    sub_14038CE60();
    v40 = v41;
  }
  if ( *((_QWORD *)&v54 + 1) )
    sub_140001660(v61, 176LL * *((_QWORD *)&v54 + 1), 8);
  return a1;
}
