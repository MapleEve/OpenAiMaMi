// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f30dc0 | name sub_140F30DC0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F30DC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v3; // eax
  __int128 v4; // rax
  _OWORD v6[4]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v7[6]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v8; // [rsp+C0h] [rbp+40h]
  char v9; // [rsp+C8h] [rbp+48h]
  _BYTE v10[7]; // [rsp+C9h] [rbp+49h]
  _BYTE v11[80]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v12; // [rsp+120h] [rbp+A0h]
  __int64 v13; // [rsp+130h] [rbp+B0h]
  char v14; // [rsp+138h] [rbp+B8h]
  _BYTE v15[7]; // [rsp+139h] [rbp+B9h]
  __int128 v16; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v17; // [rsp+150h] [rbp+D0h]
  __int128 v18; // [rsp+160h] [rbp+E0h]
  __int128 v19; // [rsp+170h] [rbp+F0h]
  __int128 v20; // [rsp+180h] [rbp+100h]
  __int128 v21; // [rsp+190h] [rbp+110h]
  __int128 v22; // [rsp+1A0h] [rbp+120h]
  __int128 v23; // [rsp+1B0h] [rbp+130h]
  _OWORD *v24; // [rsp+1C8h] [rbp+148h] BYREF
  _QWORD v25[4]; // [rsp+1D0h] [rbp+150h] BYREF

  v25[1] = -2;
  sub_140E940E0(v11, a1, a2, 32769);
  if ( v14 == -1 )
  {
    sub_140E96F40(v11);
    return 0;
  }
  v8 = v13;
  v7[5] = v12;
  v7[4] = *(_OWORD *)&v11[64];
  v7[3] = *(_OWORD *)&v11[48];
  v7[2] = *(_OWORD *)&v11[32];
  v7[1] = *(_OWORD *)&v11[16];
  v7[0] = *(_OWORD *)v11;
  *(_DWORD *)v10 = *(_DWORD *)v15;
  *(_DWORD *)&v10[3] = *(_DWORD *)&v15[3];
  v9 = v14;
  sub_141403910(v11, v7, 3, 0);
  if ( *(_QWORD *)v11 != -1 )
    sub_140E96F40(v11);
  sub_140EC0780(v11, v7, aSelectCountFro_6, 60);
  v20 = *(_OWORD *)&v11[8];
  v21 = *(_OWORD *)&v11[24];
  v22 = *(_OWORD *)&v11[40];
  v23 = *(_OWORD *)&v11[56];
  if ( *(_DWORD *)v11 != 1 )
  {
    v6[3] = v23;
    v6[2] = v22;
    v6[1] = v21;
    v6[0] = v20;
    v3 = sub_1417A9630(*((_QWORD *)&v23 + 1));
    if ( v3 )
    {
      v16 = 0x8000000000000013uLL;
      *(_QWORD *)&v17 = v3;
LABEL_15:
      sub_140E970D0(v6);
      goto LABEL_16;
    }
    v24 = v6;
    v25[0] = 0;
    sub_140F9AB20(v11, &v24);
    *(_QWORD *)&v4 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 == -1 )
    {
      *((_QWORD *)&v4 + 1) = v25;
      if ( v25[0] )
      {
        sub_14018EA70(&v16, v25, 0, &off_141A57960);
        goto LABEL_14;
      }
      *(_QWORD *)&v4 = 0x8000000000000009uLL;
    }
    else
    {
      *((_QWORD *)&v4 + 1) = *(_QWORD *)&v11[8];
      v20 = *(_OWORD *)&v11[16];
      v21 = *(_OWORD *)&v11[32];
      v22 = *(_OWORD *)&v11[48];
    }
    v16 = v4;
    v17 = v20;
    v18 = v21;
    v19 = v22;
LABEL_14:
    sub_140E96D30(&v24);
    goto LABEL_15;
  }
  v19 = v23;
  v18 = v22;
  v17 = v21;
  v16 = v20;
LABEL_16:
  if ( (_QWORD)v16 == -1 )
  {
    v2 = 1;
  }
  else
  {
    sub_140E96F40(&v16);
    v2 = 0;
  }
  sub_140E963A0(v7);
  return v2;
}
