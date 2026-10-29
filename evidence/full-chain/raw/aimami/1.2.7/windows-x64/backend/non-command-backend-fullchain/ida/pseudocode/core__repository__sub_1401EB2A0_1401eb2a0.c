// win 1.2.7 | module src/core/repository.rs | ea 0x1401eb2a0 | name sub_1401EB2A0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401EB2A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  __int64 (__fastcall *v11)(unsigned __int64); // rax
  char v12; // cl
  __int64 result; // rax
  char *v14; // rdx
  __int128 *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  _OWORD v22[2]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v23[4]; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v24[6]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v25; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v26; // [rsp+F8h] [rbp+78h]
  __int128 v27; // [rsp+100h] [rbp+80h]
  __int128 v28; // [rsp+110h] [rbp+90h]
  __int128 v29; // [rsp+120h] [rbp+A0h]
  __int128 v30; // [rsp+130h] [rbp+B0h]
  _QWORD v31[4]; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v32; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v33; // [rsp+170h] [rbp+F0h]
  __int128 v34; // [rsp+180h] [rbp+100h] BYREF
  __int128 v35; // [rsp+190h] [rbp+110h]
  __int128 v36; // [rsp+1A0h] [rbp+120h]
  __int128 v37; // [rsp+1B0h] [rbp+130h]
  __int128 v38; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v39; // [rsp+1D0h] [rbp+150h]
  __int128 v40; // [rsp+1E0h] [rbp+160h]
  __int128 v41; // [rsp+1F0h] [rbp+170h]
  __int128 v42; // [rsp+200h] [rbp+180h]
  __int128 v43; // [rsp+210h] [rbp+190h]
  __int128 v44; // [rsp+220h] [rbp+1A0h]
  __int64 v45; // [rsp+230h] [rbp+1B0h]
  char v46; // [rsp+246h] [rbp+1C6h]
  char v47; // [rsp+247h] [rbp+1C7h]
  __int64 v48; // [rsp+248h] [rbp+1C8h]

  v48 = -2;
  sub_1401EB710(&v38, a2[81], a2[82]);
  if ( (_DWORD)v38 == -1 )
  {
    *(_QWORD *)&v32 = -1;
  }
  else
  {
    v37 = v43;
    v36 = v42;
    v35 = v41;
    v34 = v40;
    v33 = v39;
    v32 = v38;
  }
  v4 = a2[85];
  v5 = a2[86];
  v47 = 0;
  v6 = sub_141695140(v4, v5);
  *(_QWORD *)&v24[0] = v6;
  if ( v6 )
  {
    v9 = v6 & 3;
    switch ( v6 & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(v6 + 16) )
          goto LABEL_11;
        goto LABEL_14;
      case 1LL:
        if ( !*(_BYTE *)(v6 + 31) )
          goto LABEL_14;
        goto LABEL_11;
      case 2LL:
        v46 = 1;
        v10 = v6;
        v11 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v8, v7) + 8);
        v46 = 1;
        v12 = v11(HIDWORD(v10));
        v6 = v10;
        if ( !v12 )
          goto LABEL_14;
        goto LABEL_11;
      case 3LL:
        if ( !BYTE4(v6) )
        {
LABEL_14:
          if ( (unsigned int)(v9 - 2) >= 2 )
          {
            if ( v9 )
            {
              *((_QWORD *)&v38 + 1) = v6 - 1;
              LOBYTE(v38) = 3;
              v46 = 0;
              sub_1416BCB00((char *)&v38 + 8);
            }
          }
          goto LABEL_17;
        }
LABEL_11:
        *(_QWORD *)&v22[0] = 2;
        *((_QWORD *)&v22[0] + 1) = v6;
        if ( (_QWORD)v32 != -1 )
        {
          v24[5] = v37;
          v24[4] = v36;
          v24[3] = v35;
          v24[2] = v34;
          v24[1] = v33;
          v24[0] = v32;
          v43 = v23[3];
          v42 = v23[2];
          v41 = v23[1];
          v40 = v23[0];
          v39 = v22[1];
          v38 = v22[0];
          v31[0] = v24;
          v31[1] = sub_14104A7D0;
          v31[2] = &v38;
          v31[3] = sub_14104A7D0;
          sub_1416ABFD0(&v25, &unk_1419DC1F6, v31);
          v44 = v25;
          v45 = v26;
          sub_1401954F0(&v38);
          v47 = 1;
          sub_1401954F0(v24);
          result = 10;
          goto LABEL_22;
        }
        v14 = (char *)v22 + 8;
        v15 = v23;
        result = 2;
        break;
    }
  }
  else
  {
LABEL_17:
    result = v32;
    if ( (_QWORD)v32 == -1 )
    {
      *(_QWORD *)a1 = -1;
      return result;
    }
    v14 = (char *)&v32 + 8;
    v15 = &v34;
  }
  v45 = *((_QWORD *)v14 + 2);
  v44 = *(_OWORD *)v14;
  v16 = v15[1];
  v17 = v15[2];
  v18 = v15[3];
  v27 = *v15;
  v28 = v16;
  v29 = v17;
  v30 = v18;
LABEL_22:
  *(_QWORD *)a1 = result;
  *(_OWORD *)(a1 + 8) = v44;
  result = v45;
  *(_QWORD *)(a1 + 24) = v45;
  v19 = v28;
  v20 = v29;
  v21 = v30;
  *(_OWORD *)(a1 + 32) = v27;
  *(_OWORD *)(a1 + 48) = v19;
  *(_OWORD *)(a1 + 64) = v20;
  *(_OWORD *)(a1 + 80) = v21;
  return result;
}
