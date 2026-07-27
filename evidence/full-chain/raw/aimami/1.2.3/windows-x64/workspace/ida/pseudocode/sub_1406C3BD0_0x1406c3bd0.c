// module: codexmate_lib/core/voice/workspace
// addr: 0x1406c3bd0
// name: sub_1406C3BD0
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_1406C3BD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 i; // rbx
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rsi
  _OWORD *result; // rax
  _OWORD v20[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+90h] [rbp+10h]
  __int128 v22; // [rsp+98h] [rbp+18h] BYREF
  __int128 v23; // [rsp+A8h] [rbp+28h]
  __int128 v24; // [rsp+B8h] [rbp+38h]
  __int128 v25; // [rsp+C8h] [rbp+48h]
  __int128 v26; // [rsp+D8h] [rbp+58h]
  __int128 v27; // [rsp+E8h] [rbp+68h]
  __int64 v28; // [rsp+F8h] [rbp+78h]
  __int64 v29; // [rsp+100h] [rbp+80h]
  __int64 v30; // [rsp+108h] [rbp+88h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  __int128 v32; // [rsp+118h] [rbp+98h] BYREF
  __int64 v33; // [rsp+128h] [rbp+A8h]
  __int64 v34; // [rsp+130h] [rbp+B0h]

  v34 = -2;
  v30 = a2;
  v29 = a1;
  v7 = 0;
  v8 = a3;
  if ( a5 > a7 )
    v8 = 0;
  if ( v8 < 0 )
LABEL_4:
    sub_1416C2D4B(v7, a3);
  v31 = a3;
  if ( v8 )
  {
    v9 = a4;
    nullsub_1(a1);
    v7 = 1;
    v10 = sub_140001650(v8, 1);
    a3 = v31;
    if ( !v10 )
      goto LABEL_4;
    a4 = v9;
    v11 = v31;
  }
  else
  {
    v10 = 1;
    v11 = 0;
    LODWORD(a3) = v31;
  }
  *(_QWORD *)&v32 = v11;
  *((_QWORD *)&v32 + 1) = v10;
  v33 = 0;
  sub_1414A2990((unsigned int)&v22, v30, a3, a4, a5);
  v21 = v28;
  v20[5] = v27;
  v20[4] = v26;
  v20[3] = v25;
  v20[2] = v24;
  v20[1] = v23;
  v20[0] = v22;
  v12 = 0;
  for ( i = 0; ; i = v15 )
  {
    sub_1407BEE50(&v22, v20);
    if ( !(_BYTE)v22 )
      break;
    v14 = *((_QWORD *)&v22 + 1);
    v15 = v23;
    v16 = *((_QWORD *)&v22 + 1) - i;
    if ( *((_QWORD *)&v22 + 1) - i <= (unsigned __int64)(v32 - v12) )
    {
      if ( *((_QWORD *)&v22 + 1) == i )
        goto LABEL_16;
LABEL_15:
      sub_141684120(v12 + *((_QWORD *)&v32 + 1), v30 + i, v16);
      goto LABEL_16;
    }
    sub_141688D30((unsigned int)&v32, v12, DWORD2(v22) - i, 1, 1);
    v12 = v33;
    if ( v14 != i )
      goto LABEL_15;
LABEL_16:
    v17 = v16 + v12;
    v33 = v17;
    if ( a7 > (__int64)v32 - v17 )
    {
      sub_141688D30((unsigned int)&v32, v17, a7, 1, 1);
      v17 = v33;
LABEL_10:
      sub_141684120(v17 + *((_QWORD *)&v32 + 1), a6, a7);
      goto LABEL_11;
    }
    if ( a7 )
      goto LABEL_10;
LABEL_11:
    v12 = a7 + v17;
    v33 = v12;
  }
  v18 = v31 - i;
  if ( v31 - i > (unsigned __int64)(v32 - v12) )
  {
    sub_141688D30((unsigned int)&v32, v12, v31 - i, 1, 1);
    v12 = v33;
    if ( v31 != i )
LABEL_24:
      sub_141684120(v12 + *((_QWORD *)&v32 + 1), i + v30, v18);
  }
  else if ( v31 != i )
  {
    goto LABEL_24;
  }
  v33 = v18 + v12;
  result = (_OWORD *)v29;
  *(_QWORD *)(v29 + 16) = v18 + v12;
  *result = v32;
  return result;
}