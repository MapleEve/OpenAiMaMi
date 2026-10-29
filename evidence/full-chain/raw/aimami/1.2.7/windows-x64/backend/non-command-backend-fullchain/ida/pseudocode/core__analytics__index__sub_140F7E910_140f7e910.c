// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f7e910 | name sub_140F7E910
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F7E910(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  _BYTE v7[72]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v8[4]; // [rsp+70h] [rbp-10h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v10; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v11; // [rsp+D0h] [rbp+50h]
  __int128 v12; // [rsp+E0h] [rbp+60h]
  __int128 v13; // [rsp+F0h] [rbp+70h]
  __int64 v14; // [rsp+100h] [rbp+80h]

  v14 = -2;
  result = sub_140EC0780(v7, a2, aInsertIntoMeta_0, 95);
  if ( *(_DWORD *)v7 == 1 )
  {
    v13 = *(_OWORD *)&v7[56];
    v12 = *(_OWORD *)&v7[40];
    v11 = *(_OWORD *)&v7[24];
    v10 = *(_OWORD *)&v7[8];
    if ( *(_QWORD *)&v7[8] != -1 )
    {
LABEL_3:
      *(_OWORD *)&v7[48] = v13;
      *(_OWORD *)&v7[32] = v12;
      *(_OWORD *)&v7[16] = v11;
      *(_OWORD *)v7 = v10;
      v9[0] = v7;
      v9[1] = sub_141404740;
      sub_1416ABFD0(v8, &unk_141A6499F, v9);
      v4 = *(_QWORD *)&v8[0];
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)v8 + 8);
      result = sub_140E96F40(v7);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = v4;
      return result;
    }
  }
  else
  {
    v8[3] = *(_OWORD *)&v7[56];
    v8[2] = *(_OWORD *)&v7[40];
    v8[1] = *(_OWORD *)&v7[24];
    v8[0] = *(_OWORD *)&v7[8];
    v5 = *(_QWORD *)&v7[64];
    v6 = sub_1417A9630(*(_QWORD *)&v7[64]);
    if ( v6 )
    {
      v10 = 0x8000000000000013uLL;
      *(_QWORD *)&v11 = v6;
    }
    else
    {
      sub_140EBD680(&v10, *(_QWORD *)&v8[0], v5);
    }
    result = sub_140E970D0(v8);
    if ( (_QWORD)v10 != -1 )
      goto LABEL_3;
  }
  *(_QWORD *)a1 = -1;
  return result;
}
