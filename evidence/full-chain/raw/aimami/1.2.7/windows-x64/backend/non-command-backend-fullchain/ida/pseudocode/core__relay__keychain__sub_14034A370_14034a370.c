// win 1.2.7 | module src/core/relay/keychain.rs | ea 0x14034a370 | name sub_14034A370
// win 1.2.7 | module src/core/relay/keychain.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_14034A370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  char *v9; // rsi
  char v10; // al
  __int64 v11; // rcx
  PVOID v12; // rcx
  char v13; // al
  _QWORD v14[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  const char *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  const char *v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]
  __int64 v21; // [rsp+78h] [rbp-8h]
  const char *v22; // [rsp+80h] [rbp+0h]
  __int64 v23; // [rsp+88h] [rbp+8h]
  __int64 v24; // [rsp+90h] [rbp+10h]
  void *v25; // [rsp+98h] [rbp+18h]
  __int128 *v26; // [rsp+A0h] [rbp+20h]
  __int128 v27; // [rsp+A8h] [rbp+28h] BYREF
  __int128 *v28; // [rsp+B8h] [rbp+38h]
  __int128 v29; // [rsp+C0h] [rbp+40h] BYREF
  __int128 *v30; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v31)(); // [rsp+D8h] [rbp+58h]
  __int128 v32; // [rsp+E0h] [rbp+60h] BYREF
  __int128 *v33; // [rsp+F0h] [rbp+70h]
  PVOID Address; // [rsp+100h] [rbp+80h]
  char v35; // [rsp+10Eh] [rbp+8Eh] BYREF
  char v36; // [rsp+10Fh] [rbp+8Fh]
  __int64 v37; // [rsp+110h] [rbp+90h]

  v37 = -2;
  v14[0] = a2;
  v14[1] = a3;
  if ( !(unsigned __int8)sub_14034AB50(a2, a3) )
    return;
  sub_140347100(&v32);
  if ( (_QWORD)v32 != -1 )
  {
    v30 = v33;
    v29 = v32;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v27 = &v29;
      *((_QWORD *)&v27 + 1) = sub_1400015F0;
      v21 = 2;
      v22 = aCodexmateLibCo_26;
      v23 = 36;
      v25 = &unk_1419E9C24;
      v26 = &v27;
      v15 = 0;
      v16 = aCodexmateLibCo_26;
      v17 = 36;
      v18 = 0;
      v19 = aSrcCoreRelayKe;
      v20 = 26;
      v24 = 0xB600000001LL;
      sub_1414D53A0(&v35, &v15);
    }
    if ( (_QWORD)v29 )
      sub_140001660(*((_QWORD *)&v29 + 1), v29, 1);
    return;
  }
  Address = *((PVOID *)&v32 + 1);
  v36 = (char)v33;
  if ( (unsigned __int8)sub_14034AC50(a2, a3) )
  {
    v6 = *(_QWORD *)(a1 + 776);
    v7 = *(_QWORD *)(a1 + 784);
    sub_140347E40((unsigned int)&v27, v6, v7, a2, a3, 1, 0);
    if ( (_QWORD)v27 != -1 )
    {
      v33 = v28;
      v32 = v27;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v29 = v14;
        *((_QWORD *)&v29 + 1) = sub_140186EE0;
        v30 = &v32;
        v31 = sub_1400015F0;
        v21 = 2;
        v22 = aCodexmateLibCo_26;
        v23 = 36;
        v25 = &unk_1419E9BED;
        v26 = &v29;
        v15 = 0;
        v16 = aCodexmateLibCo_26;
        v17 = 36;
        v18 = 0;
        v19 = aSrcCoreRelayKe;
        v20 = 26;
        v24 = 0xBC00000001LL;
        sub_1414D53A0(&v35, &v15);
      }
      if ( (_QWORD)v32 )
        sub_140001660(*((_QWORD *)&v32 + 1), v32, 1);
      v9 = (char *)Address;
      if ( !v36 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v8) )
        v9[1] = 1;
      v10 = *v9;
      *v9 = 0;
      if ( v10 == 2 )
        WakeByAddressSingle(v9);
      return;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 776);
    v7 = *(_QWORD *)(a1 + 784);
  }
  sub_140349630(v6, v7, a2, a3);
  if ( !v36 && 2 * *off_1421E7210 && !(unsigned __int8)sub_141938160(v11) )
    *((_BYTE *)Address + 1) = 1;
  v12 = Address;
  v13 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v13 == 2 )
    WakeByAddressSingle(v12);
}
