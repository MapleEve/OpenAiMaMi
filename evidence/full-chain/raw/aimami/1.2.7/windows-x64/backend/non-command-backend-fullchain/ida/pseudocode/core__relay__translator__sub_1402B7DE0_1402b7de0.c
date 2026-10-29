// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402b7de0 | name sub_1402B7DE0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD **__fastcall sub_1402B7DE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD **result; // rax
  __int128 v6; // xmm0
  _OWORD *v7; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+40h] [rbp-40h]
  __int128 v10; // [rsp+50h] [rbp-30h]
  _OWORD v11[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+80h] [rbp+0h]
  char v13; // [rsp+8Fh] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+10h]

  v14 = -2;
  result = (_QWORD **)sub_1416419F0(aType_4, 4, a2);
  if ( !result )
    result = (_QWORD **)off_1421E7108;
  if ( *(_BYTE *)result == 3 && result[3] == (_QWORD *)9 )
  {
    result = (_QWORD **)(*result[2] ^ 0x6E696E6F73616572LL | *((unsigned __int8 *)result[2] + 8) ^ 0x67LL);
    if ( !result )
    {
      result = (_QWORD **)sub_1402F5AF0(v8, a2);
      if ( LOBYTE(v8[0]) != 0xFF )
      {
        v11[1] = v8[1];
        v11[0] = v8[0];
        if ( *(_BYTE *)(a1 + 58) )
        {
          LOBYTE(v2) = *(_BYTE *)(a1 + 56);
          LOBYTE(v9) = 2;
          *((_QWORD *)&v9 + 1) = 0;
          *(_QWORD *)&v10 = ((_BYTE)v2 != 2) + 1LL;
          v13 = 1;
          v12 = sub_141641AF0(aAimamiToolForm_0, 18, v11);
          sub_14002F9D0(v12);
          v6 = v9;
          v7 = (_OWORD *)v12;
          *(_OWORD *)(v12 + 16) = v10;
          *v7 = v6;
          if ( (_BYTE)v2 != 2 )
            sub_1401C6120(v2, *(unsigned __int8 *)(a1 + 57), v11);
        }
        if ( *(_QWORD *)a1 != -1 )
          sub_1401C31F0(a1, v11);
        sub_140302A40(a2, v11);
        return (_QWORD **)sub_14002F9D0(v11);
      }
    }
  }
  return result;
}
