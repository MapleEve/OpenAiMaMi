// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140b4b5c0 | name sub_140B4B5C0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140B4B5C0(__int128 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int128 *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  char v14; // bl
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int128 *v17; // rcx
  volatile signed __int64 **v18; // rcx
  _QWORD v20[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  const char *v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  const char *v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+8h]
  void *v29; // [rsp+90h] [rbp+10h]
  _QWORD *v30; // [rsp+98h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+30h]
  __int64 v33; // [rsp+B8h] [rbp+38h]
  char v34; // [rsp+C7h] [rbp+47h] BYREF
  __int128 *v35; // [rsp+C8h] [rbp+48h]
  __int64 v36; // [rsp+D0h] [rbp+50h]

  v36 = -2;
  v3 = *((unsigned __int8 *)a1 + 82);
  v35 = a1;
  switch ( v3 )
  {
    case 0LL:
      v4 = a2;
      v23 = *((const char **)a1 + 4);
      v5 = *a1;
      v22 = a1[1];
      v21 = v5;
      *((_BYTE *)a1 + 83) = 0;
      v6 = *((_QWORD *)a1 + 7);
      v24 = *((_QWORD *)a1 + 5);
      v25 = v6;
      LOBYTE(v27) = 0;
      LOBYTE(v28) = 2;
      v7 = sub_14092F510(&v21);
      v9 = v8;
      v10 = v35;
      *((_QWORD *)v35 + 8) = v7;
      *((_QWORD *)v10 + 9) = v9;
      a2 = v4;
      break;
    case 1LL:
      sub_1419393E0(&off_141A2A840);
    case 2LL:
      sub_141939400(&off_141A2A840);
    case 3LL:
      v7 = *((_QWORD *)a1 + 8);
      v9 = *((_QWORD *)a1 + 9);
      break;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(v9 + 24))(v7, a2);
  v14 = 3;
  if ( v12 != 1 )
  {
    v15 = v11;
    v32 = *((_QWORD *)v35 + 8);
    v33 = *((_QWORD *)v35 + 9);
    if ( *(_QWORD *)v33 )
      (*(void (__fastcall **)(__int64))v33)(v32);
    v16 = *(_QWORD *)(v33 + 8);
    if ( v16 )
      sub_140001660(v32, v16, *(_QWORD *)(v33 + 16));
    v17 = v35;
    *(_BYTE *)(*((_QWORD *)v35 + 6) + 16LL) = 0;
    if ( v15 )
    {
      v31 = v15;
      if ( *(_QWORD *)off_1421E6EC0 )
      {
        v20[0] = v35 + 5;
        v20[1] = sub_1416BB1E0;
        v20[2] = &v31;
        v20[3] = sub_1416BB0B0;
        v25 = 1;
        v26 = aCodexmateLibCo_7;
        v27 = 40;
        v29 = &unk_141A2A858;
        v30 = v20;
        *(_QWORD *)&v21 = 0;
        *((_QWORD *)&v21 + 1) = aCodexmateLibCo_7;
        v22 = 0x28u;
        v23 = aSrcCoreRelayPr;
        v24 = 30;
        v28 = 0x13F00000001LL;
        sub_1414D53A0(&v34, &v21);
        v15 = v31;
      }
      if ( (unsigned int)(v15 & 3) - 2 >= 2 && (v15 & 3) != 0 )
      {
        *((_QWORD *)&v21 + 1) = v15 - 1;
        LOBYTE(v21) = 3;
        sub_1416BCB00((char *)&v21 + 8);
      }
      v17 = v35;
    }
    v18 = (volatile signed __int64 **)(v17 + 3);
    v14 = 1;
    if ( !_InterlockedDecrement64(*v18) )
      sub_1409E3900(v18, v16, v13);
  }
  *((_BYTE *)v35 + 82) = v14;
  LOBYTE(v12) = v12 & 1;
  return (unsigned int)v12;
}
