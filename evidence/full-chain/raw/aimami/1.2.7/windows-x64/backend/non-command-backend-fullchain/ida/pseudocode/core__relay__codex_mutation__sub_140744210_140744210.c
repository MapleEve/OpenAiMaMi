// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x140744210 | name sub_140744210
__int64 __fastcall sub_140744210(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  char *v9; // r15
  char v10; // al
  int v11; // ecx
  __m128i v13[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+38h]
  __m128i v15[9]; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v16; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v17; // [rsp+170h] [rbp+F0h]
  __int128 v18; // [rsp+180h] [rbp+100h]
  __int128 v19; // [rsp+190h] [rbp+110h]
  __int128 v20; // [rsp+1A0h] [rbp+120h]
  __int128 v21; // [rsp+1B0h] [rbp+130h]
  __int64 *v22; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+1D0h] [rbp+150h]
  __int64 v24; // [rsp+1D8h] [rbp+158h]
  __int128 v25; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v26; // [rsp+1F0h] [rbp+170h]
  __int128 v27; // [rsp+200h] [rbp+180h]
  __int128 v28; // [rsp+210h] [rbp+190h]
  __int128 v29; // [rsp+220h] [rbp+1A0h]
  __int128 v30; // [rsp+230h] [rbp+1B0h]
  PVOID Address; // [rsp+240h] [rbp+1C0h]
  __int64 v32; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v33; // [rsp+250h] [rbp+1D0h]
  __int64 v34; // [rsp+258h] [rbp+1D8h]
  _DWORD v35[2]; // [rsp+264h] [rbp+1E4h]
  char v36; // [rsp+26Dh] [rbp+1EDh] BYREF
  char v37; // [rsp+26Eh] [rbp+1EEh]
  char v38; // [rsp+26Fh] [rbp+1EFh]
  __int64 v39; // [rsp+270h] [rbp+1F0h]

  v39 = -2;
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = -1;
  if ( v4 == -1 )
    sub_141938FE0(aInternalExcept, 45, &off_141A1D210);
  v15[0].m128i_i64[0] = v4;
  sub_1418F44E0((__m128i *)&v15[0].m128i_u64[1], (const __m128i *)(a2 + 8), 0x90u);
  v38 = 1;
  sub_1415159F0();
  sub_1418F44E0(v13, v15, 0x98u);
  v6 = sub_1404CA6F0((volatile void *)(*(_QWORD *)(v14 + 5016) + 16LL));
  if ( !v6 )
  {
    *(_QWORD *)&v16 = aCodexmateLibCo;
    *((_QWORD *)&v16 + 1) = 61;
    *(_QWORD *)&v25 = &v16;
    *((_QWORD *)&v25 + 1) = sub_140186EE0;
    sub_1419392A0(&unk_141A0F720, &v25, &off_141A0F7A8);
  }
  sub_140DA5500(&v16, v6, aRestartingTheC, 34);
  if ( (_DWORD)v16 != -1 )
  {
    v30 = v21;
    v29 = v20;
    v28 = v19;
    v27 = v18;
    v26 = v17;
    v25 = v16;
    v32 = 0;
    v33 = 1;
    v34 = 0;
    v24 = 1610612768;
    v22 = &v32;
    v23 = &off_141A1D338;
    if ( (unsigned __int8)sub_14104A7D0(&v25, &v22) )
      sub_141939040(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)&v36,
        (unsigned int)&unk_141A1C3E8,
        (__int64)&off_141A1D3F0);
    v7 = v32;
    v3 = v33;
    v2 = v34;
    v35[0] = *(_DWORD *)((char *)&v34 + 1);
    *(_DWORD *)((char *)v35 + 3) = HIDWORD(v34);
    sub_14062A130(&v16);
    LODWORD(v25) = v35[0];
    *(_DWORD *)((char *)&v25 + 3) = *(_DWORD *)((char *)v35 + 3);
    goto LABEL_17;
  }
  Address = *((PVOID *)&v16 + 1);
  v37 = v17;
  LOBYTE(v16) = 0;
  sub_140EC23E0((unsigned int)&v25, 5, 0, 0, (__int64)&v16);
  if ( (_DWORD)v25 == -1 )
  {
    sub_140EC3FA0(&v16);
  }
  else
  {
    v21 = v30;
    v20 = v29;
    v19 = v28;
    v18 = v27;
    v17 = v26;
    v16 = v25;
  }
  if ( (_QWORD)v16 != -1 )
  {
    v30 = v21;
    v29 = v20;
    v28 = v19;
    v27 = v18;
    v26 = v17;
    v25 = v16;
    v32 = 0;
    v33 = 1;
    v34 = 0;
    v24 = 1610612768;
    v22 = &v32;
    v23 = &off_141A1D338;
    if ( (unsigned __int8)sub_14104A7D0(&v25, &v22) )
      sub_141939040(
        (unsigned int)aADisplayImplem_3,
        55,
        (unsigned int)&v36,
        (unsigned int)&unk_141A1C3E8,
        (__int64)&off_141A1D3F0);
    v7 = v32;
    v3 = v33;
    v2 = v34;
    v35[0] = *(_DWORD *)((char *)&v34 + 1);
    *(_DWORD *)((char *)v35 + 3) = HIDWORD(v34);
    sub_14062A130(&v16);
    v8 = *(_DWORD *)((char *)v35 + 3);
    LODWORD(v25) = v35[0];
    *(_DWORD *)((char *)&v25 + 3) = *(_DWORD *)((char *)v35 + 3);
    v9 = (char *)Address;
    if ( v37 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v7 = -1;
  v9 = (char *)Address;
  if ( !v37 )
  {
LABEL_14:
    if ( 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v8) )
      v9[1] = 1;
  }
LABEL_15:
  v10 = *v9;
  *v9 = 0;
  if ( v10 == 2 )
    WakeByAddressSingle(v9);
LABEL_17:
  v38 = 0;
  sub_14029B270(v13);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(a1 + 16) = v2;
  v11 = *(_DWORD *)((char *)&v25 + 3);
  *(_DWORD *)(a1 + 17) = v25;
  *(_DWORD *)(a1 + 20) = v11;
  return a1;
}
