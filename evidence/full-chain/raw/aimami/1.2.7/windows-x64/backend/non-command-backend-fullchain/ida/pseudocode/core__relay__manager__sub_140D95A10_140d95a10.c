// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d95a10 | name sub_140D95A10
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D95A10(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v12; // rcx
  __int64 v13; // r13
  char *v14; // r15
  unsigned int v15; // r12d
  void *v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  __int64 v19; // rax
  PVOID v20; // rcx
  char v21; // dl
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // r15
  __int64 v26; // rcx
  PVOID v27; // rcx
  char v28; // al
  __int64 v29; // r8
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // r12
  int v33; // eax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  _BYTE *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  char v43; // al
  PVOID v44; // rcx
  char v45; // al
  __int64 v47; // r14
  PVOID v48; // rcx
  __int64 v49; // rdx
  void *v50; // rdi
  void *v51; // rdi
  char v52; // cl
  int v53; // eax
  __m128i v54; // [rsp+30h] [rbp-50h] BYREF
  __int64 v55; // [rsp+40h] [rbp-40h]
  _BYTE v56[360]; // [rsp+48h] [rbp-38h] BYREF
  __m128i v57; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp+140h]
  _QWORD v59[2]; // [rsp+1C8h] [rbp+148h] BYREF
  _QWORD v60[2]; // [rsp+1D8h] [rbp+158h] BYREF
  __m128i v61; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v62; // [rsp+1F8h] [rbp+178h]
  __int64 v63; // [rsp+200h] [rbp+180h]
  PVOID v64; // [rsp+208h] [rbp+188h]
  _BYTE v65[96]; // [rsp+210h] [rbp+190h] BYREF
  __m128i v66; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v67; // [rsp+280h] [rbp+200h]
  PVOID Address; // [rsp+290h] [rbp+210h]
  PVOID v69; // [rsp+298h] [rbp+218h]
  unsigned int v70; // [rsp+2A4h] [rbp+224h]
  int v71; // [rsp+2A8h] [rbp+228h]
  unsigned __int8 v72; // [rsp+2AEh] [rbp+22Eh]
  char v73; // [rsp+2AFh] [rbp+22Fh]
  __int64 v74; // [rsp+2B0h] [rbp+230h]

  v74 = -2;
  v60[0] = a3;
  v60[1] = a4;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416AC440(&v65[8], v6 + 16);
    *(_QWORD *)v65 = 9;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v65[80];
    v7 = *(_OWORD *)&v65[16];
    v8 = *(_OWORD *)&v65[32];
    v9 = *(_OWORD *)&v65[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v65[64];
    *(_OWORD *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = *(_OWORD *)v65;
    return a1;
  }
  sub_14102D940(v65, a3, a4);
  if ( *(_QWORD *)v65 != -1 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v65[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v65;
    *(_QWORD *)a1 = 9;
    return a1;
  }
  v13 = a2[4];
  v14 = (char *)(v13 + 16);
  LOBYTE(v12) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 16), 1, 0) )
    sub_141937480((volatile void *)(v13 + 16));
  if ( 2 * *off_1421E7210 )
  {
    v15 = sub_141938160(v12);
    LOBYTE(v15) = v15 ^ 1;
    if ( *(_BYTE *)(v13 + 17) )
      goto LABEL_9;
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(v13 + 17) )
    {
LABEL_9:
      nullsub_1(v12);
      v16 = (void *)sub_140001650(40, 1);
      if ( !v16 )
      {
        v70 = v15;
        Address = (PVOID)(v13 + 16);
        sub_141938D2B(1, 40);
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v15 )
      {
        v17 = 2 * *off_1421E7210;
        if ( v17 )
        {
          v51 = v16;
          v52 = sub_141938160(v17);
          v16 = v51;
          if ( !v52 )
            *(_BYTE *)(v13 + 17) = 1;
        }
      }
      v18 = *v14;
      *v14 = 0;
      if ( v18 == 2 )
      {
        v50 = v16;
        WakeByAddressSingle((PVOID)(v13 + 16));
        v16 = v50;
      }
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 40;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = 40;
      return a1;
    }
  }
  v70 = v15;
  Address = (PVOID)(v13 + 16);
  sub_140DA5500(v65, a2 + 5, aDeletingARelay, 25);
  v20 = *(PVOID *)&v65[8];
  v19 = *(_QWORD *)v65;
  v21 = v65[16];
  if ( *(_QWORD *)v65 == -1 )
  {
    v72 = v65[16];
    v69 = *(PVOID *)&v65[8];
    v25 = a2[1];
    LOBYTE(v20) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v25 + 16), 1, 0) )
      sub_141937480((volatile void *)(v25 + 16));
    if ( 2 * *off_1421E7210 )
    {
      v53 = sub_141938160(v20);
      LOBYTE(v53) = v53 ^ 1;
      v71 = v53;
      v64 = (PVOID)(v25 + 16);
      if ( !*(_BYTE *)(v25 + 17) )
      {
LABEL_22:
        sub_140DCB2E0(&v54, v25 + 24);
        if ( !(_BYTE)v71 )
        {
          if ( 2 * *off_1421E7210 )
          {
            v73 = 1;
            if ( !(unsigned __int8)sub_141938160(v26) )
              *(_BYTE *)(v25 + 17) = 1;
          }
        }
        v63 = v13;
        v27 = v64;
        v28 = *(_BYTE *)v64;
        *(_BYTE *)v64 = 0;
        if ( v28 == 2 )
        {
          v73 = 1;
          WakeByAddressSingle(v27);
        }
        if ( v55 )
        {
          v29 = a4;
          v30 = v54.m128i_i64[1];
          v31 = v55 << 8;
          v32 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v30 + v32 + 16) == v29 )
            {
              v33 = sub_1418F4B70(*(_QWORD *)(v30 + v32 + 8), a3);
              v29 = a4;
              if ( !v33 )
                break;
            }
            v32 += 256;
            if ( v31 == v32 )
              goto LABEL_33;
          }
          if ( v56[340] )
          {
            v73 = 1;
            sub_140DBD2A0(v65);
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v65[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v65[64];
            v34 = *(_OWORD *)v65;
            v35 = *(_OWORD *)&v65[16];
            v36 = *(_OWORD *)&v65[32];
            *(_OWORD *)(a1 + 48) = *(_OWORD *)&v65[48];
            *(_OWORD *)(a1 + 32) = v36;
            *(_OWORD *)(a1 + 16) = v35;
            *(_OWORD *)a1 = v34;
            sub_1407ADB20(&v54);
            v13 = v63;
            goto LABEL_35;
          }
        }
LABEL_33:
        v73 = 1;
        sub_14037E6B0(&v54, v60);
        *(_QWORD *)v65 = a3;
        *(_QWORD *)&v65[8] = a4;
        v73 = 1;
        sub_140379840((__int64)v56, (__int64 *)v65);
        v66.m128i_i8[0] = 0;
        v73 = 0;
        sub_140D82750((__m128i *)v65, a2, &v54, &v66);
        v39 = *(_QWORD *)v65;
        v13 = v63;
        if ( *(_QWORD *)v65 != -1 )
        {
          v37 = &v65[8];
          *(_QWORD *)(a1 + 88) = *(_QWORD *)&v65[88];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v65[72];
          v40 = *(_OWORD *)&v65[8];
          v41 = *(_OWORD *)&v65[24];
          v42 = *(_OWORD *)&v65[40];
          *(_OWORD *)(a1 + 56) = *(_OWORD *)&v65[56];
          *(_OWORD *)(a1 + 40) = v42;
          *(_OWORD *)(a1 + 24) = v41;
          *(_OWORD *)(a1 + 8) = v40;
          *(_QWORD *)a1 = v39;
LABEL_35:
          if ( (v72 & 1) == 0 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v37) )
            *((_BYTE *)v69 + 1) = 1;
          v20 = v69;
          v43 = *(_BYTE *)v69;
          *(_BYTE *)v69 = 0;
          if ( v43 == 2 )
            WakeByAddressSingle(v20);
          goto LABEL_39;
        }
        v73 = 0;
        sub_1401BD710(*(unsigned __int64 *)&v65[8], v38);
        v47 = *a2 + 16;
        v73 = 0;
        sub_140347CD0(&v57, v47, a3, a4);
        if ( v57.m128i_i64[0] == -1 )
        {
          v73 = 0;
          sub_14034A100(&v61, v47, a3, a4);
          if ( v61.m128i_i64[0] == -1 )
          {
LABEL_52:
            v48 = v69;
            v49 = v72;
            *(_QWORD *)a1 = -1;
            sub_140028CC0(v48, v49);
            sub_140028CC0(Address, v70);
            return a1;
          }
          v67 = v62;
          v66 = v61;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v59[0] = &v66;
            v59[1] = sub_1400015F0;
            *(_QWORD *)v65 = aCodexmateLibCo_36;
            *(_QWORD *)&v65[8] = 35;
            *(_QWORD *)&v65[16] = aCodexmateLibCo_36;
            *(_QWORD *)&v65[24] = 35;
            *(_QWORD *)&v65[32] = &off_141A4B798;
            sub_140BAD520(&unk_141A4B760, v59, 2, v65);
          }
        }
        else
        {
          v67 = v58;
          v66 = v57;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v61.m128i_i64[0] = (__int64)&v66;
            v61.m128i_i64[1] = (__int64)sub_1400015F0;
            *(_QWORD *)v65 = aCodexmateLibCo_36;
            *(_QWORD *)&v65[8] = 35;
            *(_QWORD *)&v65[16] = aCodexmateLibCo_36;
            *(_QWORD *)&v65[24] = 35;
            *(_QWORD *)&v65[32] = &off_141A4B7E0;
            sub_140BAD520(&unk_141A4B7B0, &v61, 2, v65);
          }
        }
        if ( v66.m128i_i64[0] )
          sub_140001660(v66.m128i_i64[1], v66.m128i_i64[0], 1);
        goto LABEL_52;
      }
    }
    else
    {
      v71 = 0;
      v64 = (PVOID)(v25 + 16);
      if ( !*(_BYTE *)(v25 + 17) )
        goto LABEL_22;
    }
    *(_QWORD *)v65 = v64;
    v65[8] = v71;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v65,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4B748);
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v65[80];
  v22 = *(_OWORD *)&v65[17];
  v23 = *(_OWORD *)&v65[33];
  v24 = *(_OWORD *)&v65[49];
  *(_OWORD *)(a1 + 65) = *(_OWORD *)&v65[65];
  *(_OWORD *)(a1 + 49) = v24;
  *(_OWORD *)(a1 + 33) = v23;
  *(_OWORD *)(a1 + 17) = v22;
  *(_QWORD *)a1 = v19;
  *(_QWORD *)(a1 + 8) = v20;
  *(_BYTE *)(a1 + 16) = v21;
LABEL_39:
  if ( !(_BYTE)v70 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v20) )
    *(_BYTE *)(v13 + 17) = 1;
  v44 = Address;
  v45 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v45 == 2 )
    WakeByAddressSingle(v44);
  return a1;
}
