// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1407bc170
// name: sub_1407BC170
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
double __fastcall sub_1407BC170(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r12
  double result; // xmm0_8
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  _BYTE v8[584]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v10; // [rsp+278h] [rbp+1F8h]
  __int64 v11; // [rsp+280h] [rbp+200h]
  _BYTE v12[584]; // [rsp+288h] [rbp+208h] BYREF
  HANDLE *v13; // [rsp+4D0h] [rbp+450h]
  _QWORD *v14; // [rsp+4D8h] [rbp+458h]
  _QWORD *v15; // [rsp+4E0h] [rbp+460h]
  volatile signed __int64 **v16; // [rsp+4E8h] [rbp+468h]
  __int64 v17; // [rsp+4F0h] [rbp+470h]

  v17 = -2;
  v15 = a1;
  v2 = (_QWORD *)(a2 + 1216);
  v13 = (HANDLE *)(a2 + 1224);
  v16 = (volatile signed __int64 **)(a2 + 1232);
  v14 = (_QWORD *)(a2 + 1216);
  if ( *(_DWORD *)(a2 + 1216) == 2 )
  {
LABEL_12:
    *v15 = 0;
    return result;
  }
  while ( 1 )
  {
    sub_141493590(&v9);
    if ( v9 )
    {
      v3 = v10;
      v4 = v11;
      result = sub_141684120(v8, v12, 584);
      goto LABEL_10;
    }
    if ( *v2 )
    {
      if ( (unsigned int)*v2 == 2 )
        goto LABEL_9;
      sub_1414908A0(v13);
    }
    if ( !_InterlockedDecrement64(*v16) )
      sub_140F8A980(v16);
LABEL_9:
    v2 = v14;
    *v14 = 2;
    v6 = v9;
    v3 = v10;
    v4 = v11;
    result = sub_141684120(v8, v12, 584);
    if ( v6 != 1 )
      goto LABEL_12;
LABEL_10:
    if ( v3 )
      break;
    sub_1401DD260(v4);
    if ( *(_DWORD *)v2 == 2 )
      goto LABEL_12;
  }
  v7 = v15;
  *v15 = v3;
  v7[1] = v4;
  return sub_141684120(v7 + 2, v8, 584);
}