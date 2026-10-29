// win 1.2.7 | module src/core/repository.rs | ea 0x1401d0220 | name sub_1401D0220
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401D0220(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // di
  int v9; // edx
  __int64 v10; // rax
  int v11; // ecx
  _OWORD v13[6]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[96]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v15[2]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v16; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v17; // [rsp+100h] [rbp+80h]
  __int128 v18; // [rsp+110h] [rbp+90h]
  __int128 v19; // [rsp+120h] [rbp+A0h]
  __int128 v20; // [rsp+130h] [rbp+B0h]
  void *v21; // [rsp+140h] [rbp+C0h]
  _QWORD *v22; // [rsp+148h] [rbp+C8h]
  char v23; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v24; // [rsp+160h] [rbp+E0h]

  v24 = -2;
  v3 = *(_QWORD *)(a2 + 296);
  v4 = *(_QWORD *)(a2 + 304);
  sub_1401C7E40(v14, v3, v4);
  if ( *(_DWORD *)v14 != -1 )
  {
    v13[5] = *(_OWORD *)&v14[80];
    v13[4] = *(_OWORD *)&v14[64];
    v13[3] = *(_OWORD *)&v14[48];
    v13[2] = *(_OWORD *)&v14[32];
    v13[1] = *(_OWORD *)&v14[16];
    v13[0] = *(_OWORD *)v14;
    sub_141695A00(&v16, v3, v4);
    if ( (_DWORD)v16 == 2 )
    {
      v6 = BYTE8(v16) & 3;
      v5 = (unsigned int)(v6 - 2);
      if ( (unsigned int)v5 >= 2 && (BYTE8(v16) & 3) != 0 )
      {
        --*((_QWORD *)&v16 + 1);
        LOBYTE(v16) = 3;
        sub_1416BCB00((char *)&v16 + 8);
      }
    }
    else if ( *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      v15[0] = v13;
      v15[1] = sub_14104A7D0;
      *(_QWORD *)&v19 = 2;
      *((_QWORD *)&v19 + 1) = aCodexmateLibCo_21;
      *(_QWORD *)&v20 = 31;
      v21 = &unk_1419D6D25;
      v22 = v15;
      *(_QWORD *)&v16 = 0;
      *((_QWORD *)&v16 + 1) = aCodexmateLibCo_21;
      v17 = 0x1Fu;
      *(_QWORD *)&v18 = aSrcCoreReposit;
      *((_QWORD *)&v18 + 1) = 22;
      *((_QWORD *)&v20 + 1) = 0x9BF00000001LL;
      sub_1414D53A0(&v23, &v16);
    }
    LODWORD(v15[0]) = sub_141683E80(v6, v5, v7);
    HIDWORD(v15[0]) = v9;
    sub_141683E30(&v16, v15, 3577643008LL, 27111902);
    v8 = 0;
    if ( (_BYTE)v16 )
      v10 = 0;
    else
      v10 = *((_QWORD *)&v16 + 1);
    LODWORD(v21) = 4;
    *((_QWORD *)&v20 + 1) = v10;
    *((_QWORD *)&v17 + 1) = -1;
    *(_QWORD *)&v16 = 0;
    *((_QWORD *)&v16 + 1) = 8;
    *(_QWORD *)&v17 = 0;
    *(_QWORD *)&v19 = 0;
    *((_QWORD *)&v19 + 1) = 0xA0000000FLL;
    LOBYTE(v20) = 0;
    BYTE4(v21) = 1;
    sub_1401954F0(v13);
    v13[0] = v19;
    *(_DWORD *)v14 = *(_DWORD *)((char *)&v20 + 1);
    *(_DWORD *)&v14[3] = DWORD1(v20);
    goto LABEL_14;
  }
  v20 = *(_OWORD *)&v14[72];
  v21 = *(void **)&v14[88];
  v19 = *(_OWORD *)&v14[56];
  v18 = *(_OWORD *)&v14[40];
  v17 = *(_OWORD *)&v14[24];
  v16 = *(_OWORD *)&v14[8];
  v8 = v14[72];
  v13[0] = *(_OWORD *)&v14[56];
  *(_DWORD *)v14 = *(_QWORD *)&v14[72] >> 8;
  *(_DWORD *)&v14[3] = *(_DWORD *)&v14[76];
  if ( v14[72] != 2 )
  {
LABEL_14:
    *(_OWORD *)a1 = v13[0];
    v11 = *(_DWORD *)&v14[3];
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v14;
    *(_DWORD *)(a1 + 20) = v11;
    goto LABEL_15;
  }
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0xA0000000FLL;
  v8 = 0;
LABEL_15:
  *(_BYTE *)(a1 + 16) = v8;
  sub_140033D80(&v16);
  return a1;
}
