// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d99990 | name sub_140D99990
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D99990(__int64 a1, __int64 *a2, const __m128i *a3, unsigned __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // r14
  char *v11; // r12
  __int64 *v12; // r13
  unsigned int v13; // ebx
  void *v14; // rax
  __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // rbx
  const __m128i *v18; // r15
  unsigned __int64 v19; // rbx
  const __m128i *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // dl
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  char v39; // dl
  __int64 v40; // r15
  __int64 v41; // r13
  unsigned __int64 v42; // r8
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __m128i v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __m128i v51; // xmm2
  char *v52; // rdi
  char v53; // al
  PVOID v54; // rcx
  char v55; // al
  void *v57; // rdi
  void *v58; // rdi
  char v59; // cl
  int v60; // eax
  __m128i v61; // [rsp+30h] [rbp-50h] BYREF
  char v62[360]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v64; // [rsp+1B8h] [rbp+138h]
  __int128 v65; // [rsp+1C8h] [rbp+148h]
  __int128 v66; // [rsp+1D8h] [rbp+158h]
  __int128 v67; // [rsp+1E8h] [rbp+168h]
  __int128 v68; // [rsp+1F8h] [rbp+178h]
  __int128 v69; // [rsp+208h] [rbp+188h]
  __m128i v70[9]; // [rsp+218h] [rbp+198h] BYREF
  __m128i v71; // [rsp+2B0h] [rbp+230h] BYREF
  __int128 v72; // [rsp+2C0h] [rbp+240h]
  __int128 v73; // [rsp+2D0h] [rbp+250h]
  __int128 v74; // [rsp+2E0h] [rbp+260h]
  __int128 v75; // [rsp+2F0h] [rbp+270h]
  __int128 v76; // [rsp+300h] [rbp+280h]
  __m128i v77[6]; // [rsp+438h] [rbp+3B8h] BYREF
  _BYTE v78[104]; // [rsp+498h] [rbp+418h] BYREF
  __m128i v79[16]; // [rsp+500h] [rbp+480h] BYREF
  char v80; // [rsp+604h] [rbp+584h]
  const __m128i *v81; // [rsp+618h] [rbp+598h]
  __int64 v82; // [rsp+620h] [rbp+5A0h]
  unsigned __int64 v83; // [rsp+628h] [rbp+5A8h]
  __int64 v84; // [rsp+630h] [rbp+5B0h]
  __int64 v85; // [rsp+638h] [rbp+5B8h]
  PVOID Address; // [rsp+640h] [rbp+5C0h]
  PVOID v87; // [rsp+648h] [rbp+5C8h]
  __int64 v88; // [rsp+650h] [rbp+5D0h]
  unsigned int v89; // [rsp+658h] [rbp+5D8h]
  char v90; // [rsp+65Dh] [rbp+5DDh]
  unsigned __int8 v91; // [rsp+65Eh] [rbp+5DEh]
  char v92; // [rsp+65Fh] [rbp+5DFh]
  __int64 v93; // [rsp+660h] [rbp+5E0h]

  v93 = -2;
  v5 = a1;
  v6 = a2[2];
  if ( *(_QWORD *)(v6 + 16) != -1 )
  {
    sub_1416AC440(&v78[8], v6 + 16);
    *(_QWORD *)v78 = 9;
    *(_OWORD *)(v5 + 88) = *(_OWORD *)&v78[80];
    v7 = *(_OWORD *)&v78[16];
    v8 = *(_OWORD *)&v78[32];
    v9 = *(_OWORD *)&v78[48];
    *(_OWORD *)(v5 + 72) = *(_OWORD *)&v78[64];
    *(_OWORD *)(v5 + 56) = v9;
    *(_OWORD *)(v5 + 40) = v8;
    *(_OWORD *)(v5 + 24) = v7;
    *(_OWORD *)(v5 + 8) = *(_OWORD *)v78;
    *(_QWORD *)v5 = -1;
    return v5;
  }
  v10 = a2[4];
  v11 = (char *)(v10 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v10 + 16), 1, 0) )
  {
    v17 = a4;
    v18 = a3;
    sub_141937480((volatile void *)(v10 + 16));
    a3 = v18;
    a4 = v17;
  }
  v12 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v19 = a4;
    v20 = a3;
    v21 = sub_141938160(a1);
    a3 = v20;
    a4 = v19;
    v13 = v21;
    LOBYTE(v13) = v21 ^ 1;
    if ( *(_BYTE *)(v10 + 17) )
      goto LABEL_7;
  }
  else
  {
    v13 = 0;
    if ( *(_BYTE *)(v10 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v14 = (void *)sub_140001650(40, 1);
      if ( !v14 )
      {
        v89 = v13;
        Address = (PVOID)(v10 + 16);
        sub_141938D2B(1, 40);
      }
      qmemcpy(v14, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v13 )
      {
        v15 = 2 * *v12;
        if ( v15 )
        {
          v58 = v14;
          v59 = sub_141938160(v15);
          v14 = v58;
          if ( !v59 )
            *(_BYTE *)(v10 + 17) = 1;
        }
      }
      v16 = *v11;
      *v11 = 0;
      if ( v16 == 2 )
      {
        v57 = v14;
        WakeByAddressSingle((PVOID)(v10 + 16));
        v14 = v57;
      }
      *(_QWORD *)(v5 + 8) = 10;
      *(_QWORD *)(v5 + 16) = 40;
      *(_QWORD *)(v5 + 24) = v14;
      *(_QWORD *)(v5 + 32) = 40;
      *(_QWORD *)v5 = -1;
      return v5;
    }
  }
  v89 = v13;
  Address = (PVOID)(v10 + 16);
  v81 = a3;
  v83 = a4;
  sub_140DA5500(v78, a2 + 5, aActivatingARel, 27);
  v23 = *(_QWORD *)&v78[8];
  v22 = *(_QWORD *)v78;
  v24 = v78[16];
  if ( *(_QWORD *)v78 == -1 )
  {
    v91 = v78[16];
    v87 = *(PVOID *)&v78[8];
    sub_140D9A5F0(v78, a2);
    if ( v80 )
    {
      sub_1407ADB20(v78);
      nullsub_1(v28);
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
      *(_QWORD *)v5 = -1;
      goto LABEL_39;
    }
    sub_1407ADB20(v78);
    sub_140D87CF0((__int64)v78, a2, (__int64)v81, v83);
    v30 = *(_QWORD *)v78;
    v71 = *(__m128i *)&v78[8];
    v72 = *(_OWORD *)&v78[24];
    v73 = *(_OWORD *)&v78[40];
    v74 = *(_OWORD *)&v78[56];
    v75 = *(_OWORD *)&v78[72];
    v76 = *(_OWORD *)&v78[88];
    if ( *(_QWORD *)v78 == -1 )
    {
      *(_OWORD *)(v5 + 88) = v76;
      *(_OWORD *)(v5 + 72) = v75;
      v46 = v71;
      v47 = v72;
      v48 = v73;
      *(_OWORD *)(v5 + 56) = v74;
      *(_OWORD *)(v5 + 40) = v48;
      *(_OWORD *)(v5 + 24) = v47;
      *(__m128i *)(v5 + 8) = v46;
      *(_QWORD *)v5 = -1;
LABEL_39:
      v52 = (char *)v87;
      if ( (v91 & 1) == 0 && 2 * *v12 && !(unsigned __int8)sub_141938160(v23) )
        v52[1] = 1;
      v53 = *v52;
      *v52 = 0;
      if ( v53 == 2 )
        WakeByAddressSingle(v52);
      goto LABEL_43;
    }
    sub_1418F44E0(v70, v79, 0x98u);
    v64 = v71;
    v65 = v72;
    v66 = v73;
    v67 = v74;
    v68 = v75;
    v69 = v76;
    v63 = v30;
    v31 = a2[1];
    LOBYTE(v32) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v31 + 16), 1, 0) )
      sub_141937480((volatile void *)(v31 + 16));
    if ( 2 * *v12 )
    {
      v60 = sub_141938160(v32);
      LOBYTE(v60) = v60 ^ 1;
      LODWORD(v88) = v60;
      v85 = v31 + 16;
      if ( !*(_BYTE *)(v31 + 17) )
        goto LABEL_24;
    }
    else
    {
      LODWORD(v88) = 0;
      v85 = v31 + 16;
      if ( !*(_BYTE *)(v31 + 17) )
      {
LABEL_24:
        v82 = v31;
        v33 = *(_QWORD *)(v31 + 64);
        if ( v33 )
        {
          v84 = v64.m128i_i64[0];
          v34 = *(_QWORD *)(v82 + 56);
          v35 = 24 * v33;
          v36 = 0;
          while ( *(_QWORD *)(v34 + v36 + 16) != v64.m128i_i64[1]
               || (unsigned int)sub_1418F4B70(*(_QWORD *)(v34 + v36 + 8), v84) )
          {
            v36 += 24;
            if ( v35 == v36 )
              goto LABEL_30;
          }
          sub_140F6F6F0(v78, v82 + 24);
          v12 = off_1421E7210;
          sub_1418F44E0((__m128i *)v5, (const __m128i *)v78, 0x180u);
          sub_140028CC0(v85, (unsigned int)v88);
        }
        else
        {
LABEL_30:
          v37 = v85;
          sub_140028CC0(v85, (unsigned int)v88);
          sub_140D9F290(v78, v37);
          v38 = sub_140D6FFF0((__int64)v78, (__int64)&off_141A4B8C8);
          LOBYTE(v84) = v39 & 1;
          v88 = v38;
          sub_140DCB2E0(&v61, v38 + 8);
          v92 = 1;
          sub_140028CC0(v88, (unsigned __int8)v84);
          sub_14072C410((unsigned int)v78, v83, 0, 1, 1);
          v40 = *(_QWORD *)&v78[8];
          if ( *(_DWORD *)v78 == 1 )
          {
            v92 = 1;
            sub_141938D2B(*(_QWORD *)&v78[8], *(_QWORD *)&v78[16]);
          }
          v41 = *(_QWORD *)&v78[16];
          v42 = v83;
          if ( v83 )
          {
            sub_1418F44E0(*(__m128i **)&v78[16], v81, v83);
            v42 = v83;
          }
          *(_QWORD *)v78 = v40;
          *(_QWORD *)&v78[8] = v41;
          *(_QWORD *)&v78[16] = v42;
          v92 = 1;
          sub_140FED410(v62, v78);
          v12 = off_1421E7210;
          v92 = 1;
          sub_140F6F6F0(&v71, &v61);
          v90 = 1;
          sub_140D82100(v78, a2);
          if ( *(_DWORD *)v78 == -1 )
          {
            sub_1418F44E0((__m128i *)v78, &v61, 0x180u);
            v90 = 0;
            sub_140D98BE0(v77, a2, (const __m128i *)v78);
            if ( v77[0].m128i_i32[0] == -1 )
            {
              sub_1418F44E0((__m128i *)v5, &v71, 0x180u);
              sub_14038CFC0(&v63);
              sub_140028CC0(v87, v91);
              sub_140028CC0(Address, v89);
              return v5;
            }
            *(__m128i *)(v5 + 88) = v77[5];
            *(__m128i *)(v5 + 72) = v77[4];
            v49 = v77[0];
            v50 = v77[1];
            v51 = v77[2];
            *(__m128i *)(v5 + 56) = v77[3];
            *(__m128i *)(v5 + 40) = v51;
            *(__m128i *)(v5 + 24) = v50;
            *(__m128i *)(v5 + 8) = v49;
            *(_QWORD *)v5 = -1;
            v92 = 0;
            sub_1407ADB20(&v71);
          }
          else
          {
            *(_OWORD *)(v5 + 88) = *(_OWORD *)&v78[80];
            *(_OWORD *)(v5 + 72) = *(_OWORD *)&v78[64];
            v43 = *(_OWORD *)v78;
            v44 = *(_OWORD *)&v78[16];
            v45 = *(_OWORD *)&v78[32];
            *(_OWORD *)(v5 + 56) = *(_OWORD *)&v78[48];
            *(_OWORD *)(v5 + 40) = v45;
            *(_OWORD *)(v5 + 24) = v44;
            *(_OWORD *)(v5 + 8) = v43;
            *(_QWORD *)v5 = -1;
            v92 = 1;
            sub_1407ADB20(&v71);
            sub_1407ADB20(&v61);
          }
        }
        sub_14038CFC0(&v63);
        goto LABEL_39;
      }
    }
    *(_QWORD *)v78 = v85;
    v78[8] = v88;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v78,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4B8B0);
  }
  *(_OWORD *)(v5 + 88) = *(_OWORD *)&v78[80];
  v25 = *(_OWORD *)&v78[17];
  v26 = *(_OWORD *)&v78[33];
  v27 = *(_OWORD *)&v78[49];
  *(_OWORD *)(v5 + 73) = *(_OWORD *)&v78[65];
  *(_OWORD *)(v5 + 57) = v27;
  *(_OWORD *)(v5 + 41) = v26;
  *(_OWORD *)(v5 + 25) = v25;
  *(_QWORD *)(v5 + 8) = v22;
  *(_QWORD *)(v5 + 16) = v23;
  *(_BYTE *)(v5 + 24) = v24;
  *(_QWORD *)v5 = -1;
LABEL_43:
  if ( !(_BYTE)v89 && 2 * *v12 && !(unsigned __int8)sub_141938160(v23) )
    *(_BYTE *)(v10 + 17) = 1;
  v54 = Address;
  v55 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v55 == 2 )
    WakeByAddressSingle(v54);
  return v5;
}
