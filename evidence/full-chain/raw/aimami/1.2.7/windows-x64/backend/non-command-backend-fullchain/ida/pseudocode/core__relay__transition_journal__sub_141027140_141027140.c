// win 1.2.7 | module src/core/relay/transition_journal.rs | ea 0x141027140 | name sub_141027140
// win 1.2.7 | module src/core/relay/transition_journal.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141027140(__int64 a1)
{
  __int128 v3; // kr00_16
  __int128 v4; // kr10_16
  __int128 v5; // xmm1
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD v8[6]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+80h] [rbp+0h] BYREF
  __int128 v10; // [rsp+90h] [rbp+10h]
  __int128 v11; // [rsp+A0h] [rbp+20h]
  __int128 v12; // [rsp+B0h] [rbp+30h]
  __int128 v13; // [rsp+C0h] [rbp+40h]
  __int128 v14; // [rsp+D0h] [rbp+50h]
  __int128 v15; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v16; // [rsp+F0h] [rbp+70h]
  const char *v17; // [rsp+100h] [rbp+80h]
  __int64 v18; // [rsp+108h] [rbp+88h]
  __int64 v19; // [rsp+110h] [rbp+90h]
  const char *v20; // [rsp+118h] [rbp+98h]
  __int64 v21; // [rsp+120h] [rbp+A0h]
  __int64 v22; // [rsp+128h] [rbp+A8h]
  void *v23; // [rsp+130h] [rbp+B0h]
  _QWORD *v24; // [rsp+138h] [rbp+B8h]
  _QWORD v25[2]; // [rsp+148h] [rbp+C8h] BYREF
  char v26; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v27; // [rsp+160h] [rbp+E0h]

  v27 = -2;
  sub_1410257E0(&v9);
  if ( (_DWORD)v9 == -1 )
  {
    v3 = v10;
    v4 = v11;
    v15 = v12;
    v16 = v13;
    if ( *((_QWORD *)&v9 + 1) != -1 )
    {
      switch ( *((_QWORD *)&v10 + 1) )
      {
        case 8LL:
          if ( *(_QWORD *)v10 != 0x676E697972746572LL )
            goto LABEL_15;
          goto LABEL_10;
        case 0xALL:
          v6 = *(_QWORD *)v10 ^ 0x697474696D6D6F63LL;
          v7 = *(unsigned __int16 *)(v10 + 8) ^ 0x676ELL;
          goto LABEL_14;
        case 0xBLL:
          v6 = *(_QWORD *)v10 ^ 0x6C69636E6F636572LL;
          v7 = *(_QWORD *)(v10 + 3) ^ 0x676E696C69636E6FLL;
          goto LABEL_14;
        case 0xELL:
          v6 = *(_QWORD *)v10 ^ 0x676E6970706F7473LL;
          v7 = *(_QWORD *)(v10 + 6) ^ 0x7865646F635F676ELL;
LABEL_14:
          if ( v6 | v7 )
            goto LABEL_15;
LABEL_10:
          *(_QWORD *)a1 = *((_QWORD *)&v9 + 1);
          *(_OWORD *)(a1 + 8) = v3;
          *(_OWORD *)(a1 + 24) = v4;
          v5 = v16;
          *(_OWORD *)(a1 + 40) = v15;
          *(_OWORD *)(a1 + 56) = v5;
          return a1;
        default:
LABEL_15:
          if ( *((_QWORD *)&v9 + 1) )
            sub_140001660(v10, *((_QWORD *)&v9 + 1), 1);
          if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(*((_QWORD *)&v4 + 1), v4, 1);
          break;
      }
    }
  }
  else
  {
    v8[5] = v14;
    v8[4] = v13;
    v8[3] = v12;
    v8[2] = v11;
    v8[1] = v10;
    v8[0] = v9;
    if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v25[0] = v8;
      v25[1] = sub_14104A7D0;
      v19 = 2;
      v20 = aCodexmateLibCo_11;
      v21 = 46;
      v23 = &unk_141A70316;
      v24 = v25;
      *(_QWORD *)&v15 = 0;
      *((_QWORD *)&v15 + 1) = aCodexmateLibCo_11;
      v16 = 0x2Eu;
      v17 = aSrcCoreRelayTr;
      v18 = 36;
      v22 = 0x12B00000001LL;
      sub_1414D53A0(&v26, &v15);
    }
    sub_140FA5040(v8);
  }
  *(_QWORD *)a1 = -1;
  return a1;
}
