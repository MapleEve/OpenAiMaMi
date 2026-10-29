// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140749ec0 | name sub_140749EC0
__int64 __fastcall sub_140749EC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int8 v7; // r14
  __int64 v8; // r12
  unsigned __int128 v9; // kr00_16
  _BYTE *v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rbx
  __int64 *v13; // r15
  char v14; // al
  __int64 v15; // rcx
  char *v16; // r12
  char v17; // al
  PVOID v18; // rcx
  char v19; // al
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  char *v24; // r13
  char v25; // al
  char v26; // al
  int v27; // ecx
  unsigned __int128 v28; // xmm1
  __int128 v29; // xmm2
  __m128i v31[9]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v32[8]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+150h] [rbp+D0h]
  unsigned __int128 v34; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int128 v35; // [rsp+170h] [rbp+F0h]
  __m512i v36; // [rsp+180h] [rbp+100h]
  unsigned __int128 v37; // [rsp+1C0h] [rbp+140h] BYREF
  unsigned __int128 v38; // [rsp+1D0h] [rbp+150h]
  __m512i v39; // [rsp+1E0h] [rbp+160h]
  unsigned __int64 *v40; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+228h] [rbp+1A8h]
  __int64 v42; // [rsp+230h] [rbp+1B0h]
  PVOID Address; // [rsp+238h] [rbp+1B8h]
  PVOID v44; // [rsp+240h] [rbp+1C0h]
  _DWORD v45[2]; // [rsp+248h] [rbp+1C8h]
  unsigned __int64 v46; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v47; // [rsp+258h] [rbp+1D8h]
  __int64 v48; // [rsp+260h] [rbp+1E0h]
  int v49; // [rsp+268h] [rbp+1E8h]
  char v50; // [rsp+26Dh] [rbp+1EDh] BYREF
  char v51; // [rsp+26Eh] [rbp+1EEh]
  char v52; // [rsp+26Fh] [rbp+1EFh]
  __int64 v53; // [rsp+270h] [rbp+1F0h]

  v53 = -2;
  v2 = *(_QWORD *)a2;
  *(_QWORD *)a2 = -1;
  if ( v2 == -1 )
    sub_141938FE0(aInternalExcept, 45, &off_141A1D210);
  v31[0].m128i_i64[0] = v2;
  sub_1418F44E0((__m128i *)&v31[0].m128i_u64[1], (const __m128i *)(a2 + 8), 0x90u);
  v52 = 1;
  sub_1415159F0();
  sub_1418F44E0(v32, v31, 0x98u);
  v4 = sub_1404CA6F0((volatile void *)(*(_QWORD *)(v33 + 5016) + 16LL));
  if ( !v4 )
  {
    *(_QWORD *)&v37 = aCodexmateLibCo;
    *((_QWORD *)&v37 + 1) = 61;
    *(_QWORD *)&v34 = &v37;
    *((_QWORD *)&v34 + 1) = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, &v34, &off_141A0F7A8);
  }
  sub_140DA5500(&v37, v4, aLoggingOutTheA, 36);
  if ( (_DWORD)v37 != -1 )
  {
    v36 = v39;
    v35 = v38;
    v34 = v37;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    v42 = 1610612768;
    v40 = &v46;
    v41 = &off_141A1D338;
    if ( (unsigned __int8)sub_14104A7D0(&v34, &v40) )
      sub_141939040(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)&v50,
        (unsigned int)&unk_141A1C3E8,
        (__int64)&off_141A1D3F0);
    v5 = v46;
    v6 = v47;
    v7 = v48;
    v45[0] = *(_DWORD *)((char *)&v48 + 1);
    *(_DWORD *)((char *)v45 + 3) = HIDWORD(v48);
    sub_14062A130(&v37);
    LODWORD(v46) = v45[0];
    *(_DWORD *)((char *)&v46 + 3) = *(_DWORD *)((char *)v45 + 3);
    v8 = -1;
    v9 = __PAIR128__(v6, v5);
    goto LABEL_37;
  }
  Address = *((PVOID *)&v37 + 1);
  v51 = v38;
  v10 = (_BYTE *)sub_1404C9470((volatile void *)(*(_QWORD *)(v33 + 5016) + 16LL));
  v12 = v10;
  if ( !v10 )
  {
    *(_QWORD *)&v37 = aStdSyncPoisonM;
    *((_QWORD *)&v37 + 1) = 76;
    *(_QWORD *)&v34 = &v37;
    *((_QWORD *)&v34 + 1) = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, &v34, &off_141A0F7A8);
  }
  LOBYTE(v11) = 1;
  if ( _InterlockedCompareExchange8(v10, 1, 0) )
    sub_141937480(v10);
  v13 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v49 = 0;
    v14 = v12[1];
    v44 = v12;
    if ( v14 )
      goto LABEL_11;
LABEL_25:
    sub_1401F2100(&v37, v12 + 8);
    if ( (_DWORD)v37 == -1 )
    {
      v8 = *((_QWORD *)&v37 + 1);
      v7 = v39.m512i_i8[0];
      LODWORD(v46) = *(__int32 *)((char *)v39.m512i_i32 + 1);
      *(_DWORD *)((char *)&v46 + 3) = v39.m512i_i32[1];
      v34 = *(_OWORD *)&v39.m512i_u64[1];
      v35 = *(_OWORD *)&v39.m512i_u64[3];
      *(_OWORD *)v36.m512i_i8 = *(_OWORD *)&v39.m512i_u64[5];
      v24 = (char *)v44;
      v9 = v38;
      if ( (_BYTE)v49 )
        goto LABEL_31;
    }
    else
    {
      v36 = v39;
      v35 = v38;
      v34 = v37;
      v46 = 0;
      v47 = 1;
      v48 = 0;
      v42 = 1610612768;
      v40 = &v46;
      v41 = &off_141A1D338;
      if ( (unsigned __int8)sub_14104A7D0(&v34, &v40) )
        sub_141939040(
          (unsigned int)aADisplayImplem_3,
          55,
          (unsigned int)&v50,
          (unsigned int)&unk_141A1C3E8,
          (__int64)&off_141A1D3F0);
      v22 = v46;
      v23 = v47;
      v7 = v48;
      v45[0] = *(_DWORD *)((char *)&v48 + 1);
      *(_DWORD *)((char *)v45 + 3) = HIDWORD(v48);
      sub_14062A130(&v37);
      v21 = *(_DWORD *)((char *)v45 + 3);
      LODWORD(v46) = v45[0];
      *(_DWORD *)((char *)&v46 + 3) = *(_DWORD *)((char *)v45 + 3);
      v8 = -1;
      v24 = (char *)v44;
      v9 = __PAIR128__(v23, v22);
      if ( (_BYTE)v49 )
      {
LABEL_31:
        v25 = *v24;
        *v24 = 0;
        if ( v25 == 2 )
          WakeByAddressSingle(v24);
        if ( !v51 && 2 * *v13 && !(unsigned __int8)sub_141938160(v21) )
          *((_BYTE *)Address + 1) = 1;
        v18 = Address;
        v26 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v26 == 2 )
          goto LABEL_36;
        goto LABEL_37;
      }
    }
    if ( 2 * *v13 && !(unsigned __int8)sub_141938160(v21) )
      v24[1] = 1;
    goto LABEL_31;
  }
  v20 = sub_141938160(v11);
  LOBYTE(v20) = v20 ^ 1;
  v49 = v20;
  LOBYTE(v20) = v12[1];
  v44 = v12;
  if ( !(_BYTE)v20 )
    goto LABEL_25;
LABEL_11:
  *(_QWORD *)&v37 = 0;
  *((_QWORD *)&v37 + 1) = 1;
  *(_QWORD *)&v38 = 0;
  *(_QWORD *)&v35 = 1610612768;
  *(_QWORD *)&v34 = &v37;
  *((_QWORD *)&v34 + 1) = &off_141A1D338;
  if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, &v34) )
    sub_141939040(
      (unsigned int)aADisplayImplem_3,
      55,
      (unsigned int)&v50,
      (unsigned int)&unk_141A1C3E8,
      (__int64)&off_141A1D3F0);
  v9 = v37;
  v7 = v38;
  LODWORD(v40) = *(_DWORD *)((char *)&v38 + 1);
  *(_DWORD *)((char *)&v40 + 3) = DWORD1(v38);
  v16 = (char *)v44;
  if ( !(_BYTE)v49 && 2 * *v13 && !(unsigned __int8)sub_141938160(v15) )
    v16[1] = 1;
  v17 = *v16;
  *v16 = 0;
  if ( v17 == 2 )
    WakeByAddressSingle(v16);
  *(_DWORD *)((char *)&v46 + 3) = *(_DWORD *)((char *)&v40 + 3);
  LODWORD(v46) = (_DWORD)v40;
  if ( !v51 && 2 * *v13 && !(unsigned __int8)sub_141938160(*(unsigned int *)((char *)&v40 + 3)) )
    *((_BYTE *)Address + 1) = 1;
  v18 = Address;
  v19 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  v8 = -1;
  if ( v19 == 2 )
LABEL_36:
    WakeByAddressSingle(v18);
LABEL_37:
  v52 = 0;
  sub_14029B270(v32);
  *(_QWORD *)a1 = v8;
  *(_OWORD *)(a1 + 8) = v9;
  *(_BYTE *)(a1 + 24) = v7;
  v27 = *(_DWORD *)((char *)&v46 + 3);
  *(_DWORD *)(a1 + 25) = v46;
  *(_DWORD *)(a1 + 28) = v27;
  v28 = v35;
  v29 = *(_OWORD *)v36.m512i_i8;
  *(_OWORD *)(a1 + 32) = v34;
  *(_OWORD *)(a1 + 48) = v28;
  *(_OWORD *)(a1 + 64) = v29;
  return a1;
}
