// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d87040 | name sub_140D87040
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140D87040(__int64 *a1)
{
  __int64 *v1; // rsi
  __int64 v2; // r15
  __int64 v3; // rbx
  char *v4; // rdi
  __int64 *v5; // r13
  char v6; // r14
  char v7; // r12
  void *v8; // rax
  __int64 v9; // rcx
  char v10; // cl
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  volatile signed __int64 *v14; // r12
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  void *v21; // r14
  void *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  void *v35; // rdi
  void *v36; // rbx
  char v37; // cl
  __m128i v38; // [rsp+20h] [rbp-60h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  __int64 v41; // [rsp+40h] [rbp-40h]
  __int64 v42; // [rsp+48h] [rbp-38h]
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int64 v44; // [rsp+58h] [rbp-28h]
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+78h] [rbp-8h]
  __int64 v48; // [rsp+80h] [rbp+0h]
  __int64 v49; // [rsp+88h] [rbp+8h]
  __int16 v50; // [rsp+98h] [rbp+18h]
  char v51; // [rsp+9Ah] [rbp+1Ah]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  __int64 v53; // [rsp+A8h] [rbp+28h]
  __int64 v54; // [rsp+B0h] [rbp+30h]
  char v55[232]; // [rsp+B8h] [rbp+38h] BYREF
  __int128 v56; // [rsp+1A0h] [rbp+120h]
  __int64 v57; // [rsp+1B0h] [rbp+130h] BYREF
  __int128 v58; // [rsp+1B8h] [rbp+138h]
  __int128 v59; // [rsp+1C8h] [rbp+148h]
  __int128 v60; // [rsp+1D8h] [rbp+158h]
  __int128 v61; // [rsp+1E8h] [rbp+168h]
  __int128 v62; // [rsp+1F8h] [rbp+178h]
  __int64 *v63; // [rsp+208h] [rbp+188h]
  char v64; // [rsp+278h] [rbp+1F8h]
  __int64 v65; // [rsp+280h] [rbp+200h] BYREF
  _QWORD v66[11]; // [rsp+288h] [rbp+208h] BYREF
  __int64 v67; // [rsp+2E0h] [rbp+260h] BYREF
  _BYTE v68[88]; // [rsp+2E8h] [rbp+268h]
  __int64 v69; // [rsp+348h] [rbp+2C8h]
  __int64 v70; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 (__fastcall *v71)(_QWORD, _QWORD); // [rsp+358h] [rbp+2D8h]
  __int64 v72; // [rsp+368h] [rbp+2E8h]
  __int64 v73; // [rsp+370h] [rbp+2F0h]
  __int16 v74; // [rsp+37Ch] [rbp+2FCh] BYREF
  char v75; // [rsp+37Fh] [rbp+2FFh] BYREF
  __int64 v76; // [rsp+380h] [rbp+300h]

  v76 = -2;
  v1 = a1;
  v2 = a1[3];
  v3 = a1[7];
  v4 = (char *)(v2 + 16);
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v2 + 16), 1, 0) )
    sub_141937480((volatile void *)(v2 + 16));
  v5 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
    v6 = sub_141938160(a1) ^ 1;
  else
    v6 = 0;
  v7 = *(_BYTE *)(v2 + 17);
  *(_QWORD *)&v58 = v2 + 16;
  BYTE8(v58) = v6;
  v57 = v7 != 0;
  if ( v7 )
  {
    nullsub_1(a1);
    v8 = (void *)sub_140001650(34, 1);
    if ( !v8 )
    {
      LOBYTE(v73) = v7;
      sub_141938D2B(1, 34);
    }
    qmemcpy(v8, "relay proxy state lock is poisoned", 34);
    if ( !v6 )
    {
      v9 = 2 * *v5;
      if ( v9 )
      {
        v36 = v8;
        v37 = sub_141938160(v9);
        v8 = v36;
        if ( !v37 )
          *(_BYTE *)(v2 + 17) = 1;
      }
    }
    v10 = *v4;
    *v4 = 0;
    if ( v10 == 2 )
    {
      v35 = v8;
      WakeByAddressSingle((PVOID)(v2 + 16));
      v8 = v35;
    }
    v11 = 34;
    v12 = 34;
LABEL_12:
    v67 = 10;
    *(_QWORD *)v68 = v12;
    *(_QWORD *)&v68[8] = v8;
    *(_QWORD *)&v68[16] = v11;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v65 = (__int64)&v67;
      v66[0] = sub_14104A7D0;
      *((_QWORD *)&v60 + 1) = 2;
      *(_QWORD *)&v61 = aCodexmateLibCo_36;
      *((_QWORD *)&v61 + 1) = 35;
      *((_QWORD *)&v62 + 1) = &unk_141A4A758;
      v63 = &v65;
      v57 = 0;
      *(_QWORD *)&v58 = aCodexmateLibCo_36;
      *((_QWORD *)&v58 + 1) = 35;
      *(_QWORD *)&v59 = 0;
      *((_QWORD *)&v59 + 1) = aSrcCoreRelayMa_5;
      *(_QWORD *)&v60 = 25;
      *(_QWORD *)&v62 = 0xAB500000001LL;
      sub_1414D53A0(&v75, &v57);
    }
    sub_140D1BEA0(&v67);
    goto LABEL_15;
  }
  LOBYTE(v73) = 0;
  v14 = *(volatile signed __int64 **)(v2 + 24);
  v56 = *(_OWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = 0;
  if ( !v6 && 2 * *v5 && !(unsigned __int8)sub_141938160(a1) )
    *(_BYTE *)(v2 + 17) = 1;
  v15 = *v4;
  *v4 = 0;
  if ( v15 == 2 )
    WakeByAddressSingle((PVOID)(v2 + 16));
  if ( v14 )
  {
    v65 = (__int64)v14;
    *(_OWORD *)v66 = v56;
    v74 = WORD4(v56);
    if ( v3 )
    {
      v57 = (__int64)&v65;
      v64 = 0;
      if ( (unsigned __int8)sub_140883B80(v3 + 16, &v57, &off_141A4A708) )
      {
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v65) )
          sub_1409E3930((volatile signed __int64 **)&v65);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v66[0]) )
          sub_1409E3900(v66, v16, v17);
        goto LABEL_15;
      }
      v71 = nullptr;
      v70 = 5000;
      v57 = (__int64)&v74;
      *(_QWORD *)&v58 = sub_1416BB1E0;
      *((_QWORD *)&v58 + 1) = &v70;
      *(_QWORD *)&v59 = sub_1416B95D0;
      sub_1416ABFD0(&v67, &unk_141A4A720, &v57);
      v12 = v67;
      v11 = *(_QWORD *)&v68[8];
      v8 = *(void **)v68;
      if ( _InterlockedDecrement64((volatile signed __int64 *)v65) )
      {
LABEL_48:
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v66[0]) )
        {
          v22 = v8;
          sub_1409E3900(v66, v19, v20);
          v8 = v22;
        }
        goto LABEL_12;
      }
    }
    else
    {
      nullsub_1(a1);
      v11 = 34;
      v8 = (void *)sub_140001650(34, 1);
      if ( !v8 )
        sub_141938D2B(1, 34);
      qmemcpy(v8, "relay proxy runtime is unavailable", 34);
      v12 = 34;
      if ( _InterlockedDecrement64(v14) )
        goto LABEL_48;
    }
    v21 = v8;
    sub_1409E3930((volatile signed __int64 **)&v65);
    v8 = v21;
    goto LABEL_48;
  }
LABEL_15:
  v13 = v1[2];
  if ( *(_QWORD *)(v13 + 16) != -1 )
  {
    sub_1416AC440(v66, v13 + 16);
    v65 = 9;
    *(_OWORD *)&v68[72] = *(_OWORD *)&v66[9];
    *(_OWORD *)&v68[56] = *(_OWORD *)&v66[7];
    *(_OWORD *)&v68[40] = *(_OWORD *)&v66[5];
    *(_OWORD *)&v68[24] = *(_OWORD *)&v66[3];
    *(_OWORD *)&v68[8] = *(_OWORD *)&v66[1];
    v67 = 9;
    *(_QWORD *)v68 = v66[0];
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v70 = (__int64)&v67;
      v71 = sub_14104A7D0;
      *((_QWORD *)&v60 + 1) = 2;
      *(_QWORD *)&v61 = aCodexmateLibCo_36;
      *((_QWORD *)&v61 + 1) = 35;
      *((_QWORD *)&v62 + 1) = &unk_141A4A78D;
      v63 = &v70;
      v57 = 0;
      *(_QWORD *)&v58 = aCodexmateLibCo_36;
      *((_QWORD *)&v58 + 1) = 35;
      *(_QWORD *)&v59 = 0;
      *((_QWORD *)&v59 + 1) = aSrcCoreRelayMa_5;
      *(_QWORD *)&v60 = 25;
      *(_QWORD *)&v62 = 0xABC00000001LL;
      sub_1414D53A0(&v75, &v57);
    }
LABEL_41:
    sub_140D1BEA0(&v67);
    return;
  }
  sub_140D9A5F0(&v38, v1);
  if ( v51 || v50 || (_QWORD)v45 || v47 || v48 != -1 )
  {
    if ( v43 )
      sub_140001660(v44, v43, 1);
    if ( *((_QWORD *)&v45 + 1) )
      sub_140001660(v46, *((_QWORD *)&v45 + 1), 1);
    if ( (unsigned __int64)(v48 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v49, v48, 1);
    v43 = 0;
    v44 = 1;
    v45 = 0;
    v46 = 1;
    v47 = 0;
    v48 = -1;
    v50 = 0;
    v51 = 0;
    LOBYTE(v67) = 0;
    sub_140D82750((__m128i *)&v57, v1, &v38, (const __m128i *)&v67);
    if ( v57 != -1 )
    {
      *(_QWORD *)&v68[80] = v63;
      *(_OWORD *)&v68[64] = v62;
      *(_OWORD *)&v68[48] = v61;
      *(_OWORD *)&v68[32] = v60;
      *(_OWORD *)&v68[16] = v59;
      *(_OWORD *)v68 = v58;
      v67 = v57;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v65 = (__int64)&v67;
        v66[0] = sub_14104A7D0;
        *((_QWORD *)&v60 + 1) = 2;
        *(_QWORD *)&v61 = aCodexmateLibCo_36;
        *((_QWORD *)&v61 + 1) = 35;
        *((_QWORD *)&v62 + 1) = &unk_141A4A7CC;
        v63 = &v65;
        v57 = 0;
        *(_QWORD *)&v58 = aCodexmateLibCo_36;
        *((_QWORD *)&v58 + 1) = 35;
        *(_QWORD *)&v59 = 0;
        *((_QWORD *)&v59 + 1) = aSrcCoreRelayMa_5;
        *(_QWORD *)&v60 = 25;
        *(_QWORD *)&v62 = 0xAC900000001LL;
        sub_1414D53A0(&v75, &v57);
      }
      goto LABEL_41;
    }
    sub_1401BD710(v58, v18);
  }
  else
  {
    v23 = v38.m128i_i64[1];
    v69 = v39;
    v73 = 0;
    v72 = v38.m128i_i64[1];
    while ( v69 != v73 )
    {
      ++v73;
      v24 = v23 + 256;
      sub_14038CFC0(v23);
      v23 = v24;
    }
    if ( v38.m128i_i64[0] )
      sub_140001660(v72, v38.m128i_i64[0] << 8, 8);
    v25 = v41;
    v26 = v42;
    if ( v42 )
    {
      v27 = (_QWORD *)(v41 + 8);
      do
      {
        v28 = *(v27 - 1);
        if ( v28 )
          sub_140001660(*v27, v28, 1);
        v27 += 3;
        --v26;
      }
      while ( v26 );
    }
    if ( v40 )
      sub_140001660(v25, 24 * v40, 8);
    if ( v43 )
      sub_140001660(v44, v43, 1);
    if ( *((_QWORD *)&v45 + 1) )
      sub_140001660(v46, *((_QWORD *)&v45 + 1), 1);
    v29 = v53;
    v30 = v54;
    if ( v54 )
    {
      v31 = (_QWORD *)(v53 + 56);
      do
      {
        v32 = *(v31 - 7);
        if ( v32 )
          sub_140001660(*(v31 - 6), v32, 1);
        v33 = *(v31 - 4);
        if ( v33 )
          sub_140001660(*(v31 - 3), v33, 1);
        v34 = *(v31 - 1);
        if ( v34 != -1 && v34 )
          sub_140001660(*v31, v34, 1);
        v31 += 9;
        --v30;
      }
      while ( v30 );
    }
    if ( v52 )
      sub_140001660(v29, 72 * v52, 8);
    sub_140020F20(v55);
  }
}
