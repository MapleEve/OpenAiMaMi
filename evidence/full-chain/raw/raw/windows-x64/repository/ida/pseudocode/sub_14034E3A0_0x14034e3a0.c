// module: codexmate_lib/core/repository
// addr: 0x14034e3a0
// name: sub_14034E3A0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14034E3A0(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _OWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v10[6]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v11[12]; // [rsp+E8h] [rbp+68h] BYREF
  _QWORD v12[2]; // [rsp+148h] [rbp+C8h] BYREF
  _QWORD *v13; // [rsp+158h] [rbp+D8h]
  char v14; // [rsp+167h] [rbp+E7h] BYREF
  __int64 v15; // [rsp+168h] [rbp+E8h]

  v15 = -2;
  v1 = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 56) == 1 )
  {
    v13 = (_QWORD *)a1;
    result = rollback(v9, a1);
    if ( LODWORD(v9[0]) != -1 )
    {
      v10[5] = v9[5];
      v10[4] = v9[4];
      v10[3] = v9[3];
      v10[2] = v9[2];
      v10[1] = v9[1];
      v10[0] = v9[0];
      if ( *(_QWORD *)off_141EC8D80 )
      {
        v12[0] = v10;
        v12[1] = sub_140B036A0;
        v11[0] = 0;
        v11[1] = aCodexmateLibCo_16;
        v11[2] = 31;
        v11[3] = 0;
        v11[4] = aSrcCoreReposit;
        v11[5] = 22;
        v11[6] = 1;
        v11[7] = aCodexmateLibCo_16;
        v11[8] = 31;
        v11[9] = 0x16B00000001LL;
        v11[10] = &unk_141753B92;
        v11[11] = v12;
        sub_1412C36A0(&v14, v11);
      }
      result = sub_14034ED40(v10);
    }
    v1 = v13;
  }
  if ( *v1 )
    result = sub_140001660(v1[1], *v1, 1);
  v3 = v1[5];
  v4 = v1[6];
  if ( v4 )
  {
    v5 = (_QWORD *)(v3 + 40);
    do
    {
      v6 = *(v5 - 5);
      if ( v6 )
        result = sub_140001660(*(v5 - 4), v6, 1);
      v7 = *(v5 - 1);
      if ( v7 )
        result = sub_140001660(*v5, v7, 1);
      v5 += 8;
      --v4;
    }
    while ( v4 );
  }
  v8 = v1[4];
  if ( v8 )
    return sub_140001660(v3, v8 << 6, 8);
  return result;
}