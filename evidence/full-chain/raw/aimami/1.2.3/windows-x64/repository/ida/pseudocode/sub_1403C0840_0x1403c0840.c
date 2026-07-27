// module: codexmate_lib/core/repository
// addr: 0x1403c0840
// name: sub_1403C0840
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403C0840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rcx
  char v16; // al
  bool v17; // zf
  _OWORD v19[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+88h] [rbp+8h] BYREF
  signed __int64 v21; // [rsp+90h] [rbp+10h] BYREF
  __int64 v22; // [rsp+98h] [rbp+18h]
  signed __int64 v23; // [rsp+A0h] [rbp+20h]
  __int64 v24; // [rsp+A8h] [rbp+28h]
  signed __int64 v25; // [rsp+B0h] [rbp+30h]
  __int64 v26; // [rsp+B8h] [rbp+38h]
  __int128 v27; // [rsp+C0h] [rbp+40h]
  __int64 v28; // [rsp+D0h] [rbp+50h]
  char v29[144]; // [rsp+D8h] [rbp+58h] BYREF
  char v30; // [rsp+168h] [rbp+E8h]
  __int128 v31; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v32; // [rsp+180h] [rbp+100h]
  __int128 v33; // [rsp+190h] [rbp+110h]
  __int128 v34; // [rsp+1A0h] [rbp+120h]
  __int128 v35; // [rsp+1B0h] [rbp+130h]
  __int128 v36; // [rsp+1C0h] [rbp+140h]
  __int64 v37; // [rsp+1D0h] [rbp+150h] BYREF
  const char *v38; // [rsp+1D8h] [rbp+158h]
  __int64 v39; // [rsp+1E0h] [rbp+160h]
  __int64 v40; // [rsp+1E8h] [rbp+168h]
  const char *v41; // [rsp+1F0h] [rbp+170h]
  __int64 v42; // [rsp+1F8h] [rbp+178h]
  __int64 v43; // [rsp+200h] [rbp+180h]
  const char *v44; // [rsp+208h] [rbp+188h]
  __int64 v45; // [rsp+210h] [rbp+190h]
  __int64 v46; // [rsp+218h] [rbp+198h]
  void *v47; // [rsp+220h] [rbp+1A0h]
  _QWORD *v48; // [rsp+228h] [rbp+1A8h]
  _QWORD v49[2]; // [rsp+260h] [rbp+1E0h] BYREF
  _QWORD v50[3]; // [rsp+270h] [rbp+1F0h] BYREF
  char v51; // [rsp+28Fh] [rbp+20Fh] BYREF
  __int64 v52; // [rsp+290h] [rbp+210h]

  v52 = -2;
  sub_1403C9DD0(&v20, a2, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
  v5 = v20;
  if ( v20 == 2 )
    sub_14034ED40(&v21);
  else
    sub_141684120(&v37, &v21, 144);
  v26 = 2;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v50[2] = v5;
  v28 = v5;
  sub_141684120(v29, &v37, 144);
  v30 = 0;
  sub_140FFA6E0(&v37);
  v6 = ((int)v37 >> 13) - 1;
  v7 = 0;
  if ( (int)v37 >> 13 <= 0 )
  {
    v8 = (1 - ((int)v37 >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = 1000
     * (HIDWORD(v37)
      + 86400LL
      * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + (((unsigned int)v37 >> 4) & 0x1FF) - v6 / 100 - 719163))
     + (unsigned int)v38 / 0xF4240uLL;
  v10 = *(_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 16) != 1 )
    goto LABEL_35;
  v11 = *(_QWORD *)(a3 + 24);
  v12 = 1000 * v11;
  if ( (unsigned __int64)(v11 - 1) >= 0x2540BE3FFLL )
    v12 = *(_QWORD *)(a3 + 24);
  if ( v9 < v12 || v9 - v12 >= 21600000 )
  {
LABEL_35:
    if ( !*(_QWORD *)a3 )
      goto LABEL_16;
    v13 = 1000 * v10;
    if ( (unsigned __int64)(v10 - 1) >= 0x2540BE3FFLL )
      v13 = *(_QWORD *)(a3 + 8);
    if ( v9 < v13 || v9 - v13 >= 300000 )
      goto LABEL_16;
  }
  if ( *(_BYTE *)(a3 + 64) )
  {
LABEL_16:
    v20 = 1;
    v21 = v9;
    sub_140739760(&v31, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56));
    if ( (_DWORD)v31 == -1 )
    {
      v22 = 1;
      v23 = v9;
      if ( *((_QWORD *)&v31 + 1) != 2 && (BYTE10(v32) == 0 || BYTE9(v32) != 2) | BYTE8(v31) & 1 )
      {
        v24 = 1;
        v25 = v9;
      }
      v26 = *((_QWORD *)&v31 + 1);
      v27 = v32;
    }
    else
    {
      v19[5] = v36;
      v19[4] = v35;
      v19[3] = v34;
      v19[2] = v33;
      v19[1] = v32;
      v19[0] = v31;
      v30 = 1;
      if ( (_QWORD)v31 == 6 )
      {
        if ( (unsigned __int8)sub_141031770((char *)v19 + 8) )
        {
          v14 = 7;
          v15 = &unk_14175057C;
        }
        else
        {
          v16 = sub_141031800((char *)v19 + 8);
          v15 = &unk_14175056B;
          v17 = v16 == 0;
          if ( v16 )
            v15 = &unk_14175057C;
          v14 = 17;
          if ( !v17 )
            v14 = 7;
        }
      }
      else
      {
        v14 = 17;
        v15 = &unk_14175056B;
      }
      v50[0] = v15;
      v50[1] = v14;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v49[0] = v50;
        v49[1] = sub_14041F680;
        v37 = 0;
        v38 = aCodexmateLibCo_16;
        v39 = 31;
        v40 = 0;
        v41 = aSrcCoreReposit;
        v42 = 22;
        v43 = 2;
        v44 = aCodexmateLibCo_16;
        v45 = 31;
        v46 = 0xE9400000001LL;
        v47 = &unk_141750583;
        v48 = v49;
        sub_1412C36A0(&v51, &v37);
      }
      sub_14034ED40(v19);
    }
  }
  sub_141684120(a1, &v20, 232);
  return a1;
}