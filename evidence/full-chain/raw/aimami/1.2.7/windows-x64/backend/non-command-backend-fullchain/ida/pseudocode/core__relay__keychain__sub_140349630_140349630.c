// win 1.2.7 | module src/core/relay/keychain.rs | ea 0x140349630 | name sub_140349630
// win 1.2.7 | module src/core/relay/keychain.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140349630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  int v7; // r14d
  __int64 v8; // rsi
  __int64 (__fastcall **v9)(); // rdi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  int v20; // edi
  unsigned __int64 v21; // rax
  __int64 (__fastcall **v22)(); // rax
  __int64 v23; // rdi
  char *v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h]
  __int128 v32; // [rsp+48h] [rbp-38h] BYREF
  __int128 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+68h] [rbp-18h]
  char *v35; // [rsp+78h] [rbp-8h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v37; // [rsp+90h] [rbp+10h] BYREF
  __int128 v38; // [rsp+A0h] [rbp+20h]
  __int128 v39; // [rsp+B0h] [rbp+30h]
  __int64 v40; // [rsp+C0h] [rbp+40h]
  const char *v41; // [rsp+C8h] [rbp+48h]
  __int64 v42; // [rsp+D0h] [rbp+50h]
  __int64 v43; // [rsp+D8h] [rbp+58h]
  void *v44; // [rsp+E0h] [rbp+60h]
  __int128 *v45; // [rsp+E8h] [rbp+68h]
  __int128 *v46; // [rsp+F0h] [rbp+70h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+F8h] [rbp+78h]
  __int64 v48; // [rsp+100h] [rbp+80h]
  __int64 v49; // [rsp+108h] [rbp+88h]
  __int64 v50; // [rsp+110h] [rbp+90h]
  char v51; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v52; // [rsp+120h] [rbp+A0h]
  _BYTE v53[2]; // [rsp+12Eh] [rbp+AEh] BYREF
  __int64 v54; // [rsp+130h] [rbp+B0h]

  v54 = -2;
  v6 = a2;
  v7 = a1;
  v30 = a3;
  v31 = a4;
  sub_1403491D0(&v37, a1, a2);
  v8 = *((_QWORD *)&v37 + 1);
  v10 = *((_QWORD *)&v38 + 1);
  v9 = (__int64 (__fastcall **)())v38;
  if ( (_QWORD)v37 )
  {
    v34 = v39;
    v33 = v38;
    v32 = v37;
    sub_140373AE0(&v37, &v32, a3, a4);
    if ( (_QWORD)v37 == -1 )
    {
      v8 = -1;
LABEL_16:
      sub_14036FB80(&v32);
      v10 = 38;
      goto LABEL_17;
    }
    if ( (_QWORD)v37 )
      sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
    nullsub_1(v11);
    v12 = sub_140001650(128, 1);
    if ( !v12 )
      sub_141938D2B(1, 128);
    *(_QWORD *)&v37 = 128;
    *((_QWORD *)&v37 + 1) = v12;
    *(_QWORD *)&v38 = 0;
    v46 = &v37;
    v14 = sub_140C12310(&v46, &v32);
    if ( v14 )
    {
      if ( (_QWORD)v37 )
        sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
      goto LABEL_14;
    }
    v14 = *((_QWORD *)&v37 + 1);
    if ( (_QWORD)v37 == -1 )
    {
LABEL_14:
      *(_QWORD *)&v37 = v14;
      nullsub_1(v13);
      v22 = (__int64 (__fastcall **)())sub_140001650(38, 1);
      if ( !v22 )
        sub_141938D2B(1, 38);
      v9 = v22;
      qmemcpy(v22, "encode legacy relay key storage failed", 38);
      sub_14002F910(&v37);
      v8 = 38;
      goto LABEL_16;
    }
    v52 = *((_QWORD *)&v37 + 1);
    v50 = v37;
    v15 = v38;
    sub_1416828D0((unsigned int)&v37, v7, v6, (unsigned int)&unk_1419E99AB, 12);
    v49 = *((_QWORD *)&v37 + 1);
    v16 = sub_140222E10(*((_QWORD *)&v37 + 1), v38, v52, v15);
    v19 = v17;
    if ( (v16 & 1) != 0 )
    {
      v29[0] = v17;
      v20 = v17 & 3;
      switch ( v17 & 3 )
      {
        case 0uLL:
          LOBYTE(v21) = *(_BYTE *)(v17 + 16);
          break;
        case 1uLL:
          LOBYTE(v21) = *(_BYTE *)(v17 + 31);
          break;
        case 2uLL:
          v28 = sub_1416B3F10(v18, v17);
          LOBYTE(v21) = (*(__int64 (__fastcall **)(unsigned __int64))(v28 + 8))(HIDWORD(v19));
          break;
        case 3uLL:
          v21 = HIDWORD(v17);
          break;
      }
      v51 = v21;
      v35 = &v51;
      v36[0] = sub_1416BCC90;
      sub_1416ABFD0(&v46, &unk_1419E65D5, &v35);
      if ( (unsigned int)(v20 - 2) >= 2 && (v19 & 3) != 0 )
      {
        v36[0] = v19 - 1;
        LOBYTE(v35) = 3;
        sub_1416BCB00(v36);
      }
      v8 = (__int64)v46;
      v9 = v47;
      v10 = v48;
    }
    else
    {
      sub_1401BD710(v17, v17);
      v8 = -1;
    }
    if ( v50 )
      sub_140001660(v52, v50, 1);
    sub_14036FB80(&v32);
    if ( (_QWORD)v37 )
      sub_140001660(v49, v37, 1);
  }
LABEL_17:
  if ( v8 != -1 )
  {
    v46 = (__int128 *)v8;
    v47 = v9;
    v48 = v10;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v32 = &v30;
      *((_QWORD *)&v32 + 1) = sub_140186EE0;
      *(_QWORD *)&v33 = &v46;
      *((_QWORD *)&v33 + 1) = sub_1400015F0;
      v40 = 2;
      v41 = aCodexmateLibCo_26;
      v42 = 36;
      v44 = &unk_1419E99E0;
      v45 = &v32;
      *(_QWORD *)&v37 = 0;
      *((_QWORD *)&v37 + 1) = aCodexmateLibCo_26;
      v38 = 0x24u;
      *(_QWORD *)&v39 = aSrcCoreRelayKe;
      *((_QWORD *)&v39 + 1) = 26;
      v43 = 0xC500000001LL;
      sub_1414D53A0(v53, &v37);
      v8 = (__int64)v46;
    }
    if ( v8 )
      sub_140001660(v47, v8, 1);
  }
  sub_14034B0F0(&v37, v30, v31);
  v23 = *((_QWORD *)&v37 + 1);
  v24 = (char *)v37;
  if ( (_QWORD)v37 != -1 )
    goto LABEL_23;
  v50 = *((_QWORD *)&v37 + 1);
  v29[0] = *((_QWORD *)&v37 + 1);
  v52 = v38;
  v29[1] = v38;
  sub_141193520(&v32, v29);
  v49 = v32;
  if ( (_QWORD)v32 == -1 || (_QWORD)v32 == 0x8000000000000002uLL )
  {
    if ( *(_QWORD *)v52 )
      (*(void (__fastcall **)(__int64))v52)(v50);
    result = v52;
    v26 = *(_QWORD *)(v52 + 8);
    if ( v26 )
      result = sub_140001660(v50, v26, *(_QWORD *)(v52 + 16));
    if ( v49 != -1 )
      return sub_14029BA30((__int64 *)&v32);
  }
  else
  {
    v39 = v34;
    v38 = v33;
    v37 = v32;
    v35 = nullptr;
    v36[0] = 1;
    v36[1] = 0;
    v48 = 1610612768;
    v46 = (__int128 *)&v35;
    v47 = &off_1419E98E0;
    if ( (unsigned __int8)sub_141193AC0(&v37, &v46) )
      sub_141939040(
        (unsigned int)aADisplayImplem_0,
        55,
        (unsigned int)v53,
        (unsigned int)&unk_1419E6AE0,
        (__int64)&off_1419EB798);
    v24 = v35;
    v23 = v36[0];
    sub_14029BA30((__int64 *)&v32);
    if ( *(_QWORD *)v52 )
      (*(void (__fastcall **)(__int64))v52)(v50);
    result = v52;
    v27 = *(_QWORD *)(v52 + 8);
    if ( v27 )
      result = sub_140001660(v50, v27, *(_QWORD *)(v52 + 16));
    if ( v24 != (char *)-1LL )
    {
LABEL_23:
      if ( v24 )
        sub_140001660(v23, v24, 1);
      result = *(_QWORD *)off_1421E6EC0;
      if ( *(_QWORD *)off_1421E6EC0 > 1u )
      {
        *(_QWORD *)&v32 = &v30;
        *((_QWORD *)&v32 + 1) = sub_140186EE0;
        v40 = 2;
        v41 = aCodexmateLibCo_26;
        v42 = 36;
        v44 = &unk_1419E9A3A;
        v45 = &v32;
        *(_QWORD *)&v37 = 0;
        *((_QWORD *)&v37 + 1) = aCodexmateLibCo_26;
        v38 = 0x24u;
        *(_QWORD *)&v39 = aSrcCoreRelayKe;
        *((_QWORD *)&v39 + 1) = 26;
        v43 = 0xC800000001LL;
        return sub_1414D53A0(v53, &v37);
      }
    }
  }
  return result;
}
