// module: codexmate_lib/platform/process
// addr: 0x14041ca70
// name: sub_14041CA70
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14041CA70(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  _BYTE *v6; // rbx
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  int v12; // edx
  __int64 v13; // rdi
  char v14[10]; // [rsp+36h] [rbp-2Ah] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  char v17; // [rsp+5Fh] [rbp-1h]
  __int64 v18; // [rsp+60h] [rbp+0h]

  v18 = -2;
  nullsub_1(a1);
  if ( a2 < 0 )
  {
    v4 = 11;
    v7 = 1;
    v8 = (_BYTE *)sub_140001650(11, 1);
    if ( !v8 )
    {
      v17 = 0;
      sub_1416C2D4B(1, 11);
    }
    v6 = v8;
    *(_QWORD *)&v15 = 11;
    *((_QWORD *)&v15 + 1) = v8;
    *v8 = 45;
    v16 = 1;
    a2 = -a2;
  }
  else
  {
    v4 = 10;
    v5 = sub_140001650(10, 1);
    if ( !v5 )
    {
      v17 = 0;
      sub_1416C2D4B(1, 10);
    }
    v6 = (_BYTE *)v5;
    *(_QWORD *)&v15 = 10;
    *((_QWORD *)&v15 + 1) = v5;
    v16 = 0;
    v7 = 0;
  }
  v17 = 1;
  result = sub_1414A26D0((unsigned int)a2, v14, 10);
  v11 = v10;
  if ( v10 > v4 - v7 )
  {
    v17 = 1;
    v12 = v7;
    v13 = result;
    sub_141688D30((unsigned int)&v15, v12, v11, 1, 1);
    result = v13;
    v6 = *((_BYTE **)&v15 + 1);
    v7 = v16;
    goto LABEL_8;
  }
  if ( v10 )
LABEL_8:
    result = sub_141684120(&v6[v7], result, v11);
  v16 = v11 + v7;
  *(_QWORD *)(a1 + 16) = v11 + v7;
  *(_OWORD *)a1 = v15;
  return result;
}