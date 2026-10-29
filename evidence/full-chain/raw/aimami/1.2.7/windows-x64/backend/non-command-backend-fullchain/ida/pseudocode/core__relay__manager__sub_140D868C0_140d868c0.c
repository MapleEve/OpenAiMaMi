// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d868c0 | name sub_140D868C0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140D868C0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __int64 v13; // r15
  __int64 *v14; // r13
  int v15; // r12d
  void *v16; // rax
  __int64 v17; // rcx
  char v18; // cl
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rcx
  PVOID v22; // rcx
  char v23; // al
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r13
  void *v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // al
  __int32 v33; // edx
  int v34; // ecx
  unsigned __int32 v35; // ecx
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  void *v40; // rdi
  void *v41; // rdi
  char v42; // cl
  _BYTE v43[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v44; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+38h] [rbp-48h]
  __int64 v46; // [rsp+1A8h] [rbp+128h] BYREF
  __int128 v47; // [rsp+1B0h] [rbp+130h]
  __int128 v48; // [rsp+1C0h] [rbp+140h]
  __int128 v49; // [rsp+1D0h] [rbp+150h]
  __int128 v50; // [rsp+1E0h] [rbp+160h]
  __int128 v51; // [rsp+1F0h] [rbp+170h]
  __int64 v52; // [rsp+200h] [rbp+180h]
  __m128i v53[24]; // [rsp+208h] [rbp+188h] BYREF
  _BYTE v54[17]; // [rsp+38Fh] [rbp+30Fh] BYREF
  PVOID Address; // [rsp+3A0h] [rbp+320h]
  int v56; // [rsp+3ACh] [rbp+32Ch]
  __int64 v57; // [rsp+3B0h] [rbp+330h]
  int v58; // [rsp+3BCh] [rbp+33Ch]
  __int64 v59; // [rsp+3C0h] [rbp+340h]

  v59 = -2;
  v6 = a1;
  v7 = a2[2];
  if ( *(_QWORD *)(v7 + 16) != -1 )
  {
    sub_1416AC440(&v53[0].m128i_u64[1], v7 + 16);
    v53[0].m128i_i64[0] = 9;
    *(__m128i *)(v6 + 88) = v53[5];
    v8 = v53[1];
    v9 = v53[2];
    v10 = v53[3];
    *(__m128i *)(v6 + 72) = v53[4];
    *(__m128i *)(v6 + 56) = v10;
    *(__m128i *)(v6 + 40) = v9;
    *(__m128i *)(v6 + 24) = v8;
    *(__m128i *)(v6 + 8) = v53[0];
    *(_QWORD *)v6 = -1;
    return v6;
  }
  v13 = a2[4];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v13 + 16), 1, 0) )
    sub_141937480((volatile void *)(v13 + 16));
  v14 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v15 = sub_141938160(a1);
    LOBYTE(v15) = v15 ^ 1;
    if ( *(_BYTE *)(v13 + 17) )
      goto LABEL_7;
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(v13 + 17) )
    {
LABEL_7:
      nullsub_1(a1);
      v16 = (void *)sub_140001650(40, 1);
      if ( !v16 )
      {
        v58 = v15;
        v57 = v13;
        sub_141938D2B(1, 40);
      }
      qmemcpy(v16, "Codex router transition lock is poisoned", 40);
      if ( !(_BYTE)v15 )
      {
        v17 = 2 * *v14;
        if ( v17 )
        {
          v41 = v16;
          v42 = sub_141938160(v17);
          v16 = v41;
          if ( !v42 )
            *(_BYTE *)(v13 + 17) = 1;
        }
      }
      v18 = *(_BYTE *)(v13 + 16);
      *(_BYTE *)(v13 + 16) = 0;
      if ( v18 == 2 )
      {
        v40 = v16;
        WakeByAddressSingle((PVOID)(v13 + 16));
        v16 = v40;
      }
      *(_QWORD *)(v6 + 8) = 10;
      *(_QWORD *)(v6 + 16) = 40;
      *(_QWORD *)(v6 + 24) = v16;
      *(_QWORD *)(v6 + 32) = 40;
      *(_QWORD *)v6 = -1;
      return v6;
    }
  }
  v58 = v15;
  v57 = v13;
  v19 = a2[1];
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v19 + 16), 1, 0) )
    sub_141937480((volatile void *)(v19 + 16));
  if ( 2 * *v14 )
  {
    v20 = sub_141938160(a1);
    LOBYTE(v20) = v20 ^ 1;
    if ( !*(_BYTE *)(v19 + 17) )
      goto LABEL_18;
LABEL_46:
    v53[0].m128i_i64[0] = v19 + 16;
    v53[0].m128i_i8[8] = v20;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)v53,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4A6C0);
  }
  v20 = 0;
  if ( *(_BYTE *)(v19 + 17) )
    goto LABEL_46;
LABEL_18:
  v56 = v20;
  Address = (PVOID)(v19 + 16);
  sub_140DCB2E0(v43, v19 + 24);
  if ( !(_BYTE)v56 && 2 * *v14 && !(unsigned __int8)sub_141938160(v21) )
    *(_BYTE *)(v19 + 17) = 1;
  v22 = Address;
  v23 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v23 == 2 )
    WakeByAddressSingle(v22);
  if ( !v45 )
  {
LABEL_29:
    nullsub_1(v22);
    v27 = (void *)sub_140001650(18, 1);
    if ( !v27 )
      sub_141938D2B(1, 18);
    qmemcpy(v27, "provider not found", 18);
    *(_QWORD *)(v6 + 8) = 10;
    *(_QWORD *)(v6 + 16) = 18;
    *(_QWORD *)(v6 + 24) = v27;
    *(_QWORD *)(v6 + 32) = 18;
    goto LABEL_31;
  }
  v24 = v44;
  v25 = v45 << 8;
  v26 = 0;
  while ( *(_QWORD *)(v24 + v26 + 16) != a4 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v24 + v26 + 8), a3) )
  {
    v26 += 256;
    if ( v25 == v26 )
      goto LABEL_29;
  }
  if ( *(_BYTE *)(v24 + v26 + 253) == a5 )
  {
    sub_140F6F6F0(v53, v43);
    sub_1418F44E0((__m128i *)v6, v53, 0x180u);
LABEL_32:
    v28 = off_1421E7210;
    sub_1407ADB20(v43);
    if ( (_BYTE)v58 || !(2 * *v28) )
      goto LABEL_34;
LABEL_43:
    if ( !(unsigned __int8)sub_141938160(v29) )
      *(_BYTE *)(v57 + 17) = 1;
    goto LABEL_34;
  }
  *(_BYTE *)(v24 + v26 + 253) = a5;
  sub_141406CE0(v53);
  v33 = (v53[0].m128i_i32[0] >> 13) - 1;
  v34 = 0;
  if ( v53[0].m128i_i32[0] >> 13 <= 0 )
  {
    v35 = (1 - (v53[0].m128i_i32[0] >> 13)) / 0x190u + 1;
    v33 += 400 * v35;
    v34 = -146097 * v35;
  }
  *(_QWORD *)(v24 + v26 + 240) = 1000
                               * (v53[0].m128i_u32[1]
                                + 86400LL
                                * (((v33 / 100) >> 2)
                                 + ((1461 * v33) >> 2)
                                 + v34
                                 + (((unsigned __int32)v53[0].m128i_i32[0] >> 4) & 0x1FF)
                                 - v33 / 100
                                 - 719163))
                               + v53[0].m128i_u32[2] / 0xF4240uLL;
  sub_140DCB2E0(v53, v43);
  v54[0] = 0;
  sub_140D82750(&v46, a2, v53, v54);
  v36 = v46;
  if ( v46 != -1 )
  {
    *(_QWORD *)(v6 + 96) = v52;
    *(_OWORD *)(v6 + 80) = v51;
    v37 = v47;
    v38 = v48;
    v39 = v49;
    *(_OWORD *)(v6 + 64) = v50;
    *(_OWORD *)(v6 + 48) = v39;
    *(_OWORD *)(v6 + 32) = v38;
    *(_OWORD *)(v6 + 16) = v37;
    *(_QWORD *)(v6 + 8) = v36;
LABEL_31:
    *(_QWORD *)v6 = -1;
    goto LABEL_32;
  }
  sub_1401BD710(v47);
  sub_140F6F6F0(v53, v43);
  sub_1418F44E0((__m128i *)v6, v53, 0x180u);
  sub_1407ADB20(v43);
  if ( !(_BYTE)v58 && 2 * *off_1421E7210 )
    goto LABEL_43;
LABEL_34:
  v30 = v57;
  v31 = *(_BYTE *)(v57 + 16);
  *(_BYTE *)(v57 + 16) = 0;
  if ( v31 == 2 )
    WakeByAddressSingle((PVOID)(v30 + 16));
  return v6;
}
