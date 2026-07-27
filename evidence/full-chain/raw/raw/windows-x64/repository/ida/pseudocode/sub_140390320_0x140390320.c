// module: codexmate_lib/core/repository
// addr: 0x140390320
// name: sub_140390320
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140390320(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  _OWORD v6[6]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v7[12]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v8; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v9; // [rsp+F0h] [rbp+70h]
  __int128 v10; // [rsp+100h] [rbp+80h]
  __int128 v11; // [rsp+110h] [rbp+90h]
  __int128 v12; // [rsp+120h] [rbp+A0h]
  __int128 v13; // [rsp+130h] [rbp+B0h]
  _QWORD v14[2]; // [rsp+148h] [rbp+C8h] BYREF
  char v15; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v16; // [rsp+160h] [rbp+E0h]

  v16 = -2;
  result = sub_1403C75B0(v6);
  if ( LODWORD(v6[0]) == -1 )
  {
    *(_QWORD *)a1 = -1;
  }
  else
  {
    v13 = v6[5];
    v12 = v6[4];
    v11 = v6[3];
    v10 = v6[2];
    v9 = v6[1];
    v8 = v6[0];
    result = *(_QWORD *)off_141EC8D80;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v14[0] = &v8;
      v14[1] = sub_140B036A0;
      v7[0] = 0;
      v7[1] = aCodexmateLibCo_16;
      v7[2] = 31;
      v7[3] = 0;
      v7[4] = aSrcCoreReposit;
      v7[5] = 22;
      v7[6] = 2;
      v7[7] = aCodexmateLibCo_16;
      v7[8] = 31;
      v7[9] = 0x94200000001LL;
      v7[10] = &unk_14174E9C1;
      v7[11] = v14;
      result = sub_1412C36A0(&v15, v7);
    }
    *(_OWORD *)(a1 + 80) = v13;
    *(_OWORD *)(a1 + 64) = v12;
    v3 = v8;
    v4 = v9;
    v5 = v10;
    *(_OWORD *)(a1 + 48) = v11;
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
  return result;
}