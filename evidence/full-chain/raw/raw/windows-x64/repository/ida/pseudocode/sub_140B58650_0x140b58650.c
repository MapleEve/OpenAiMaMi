// module: codexmate_lib/core/repository
// addr: 0x140b58650
// name: sub_140B58650
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140B58650(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  char *v5; // rdi
  int v6; // r9d
  char v7; // bl
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // r12d
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  char result; // al
  char v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+1030h] [rbp+FB0h]
  __int64 v16; // [rsp+1038h] [rbp+FB8h]
  __int64 v17; // [rsp+1040h] [rbp+FC0h]
  char v18; // [rsp+104Fh] [rbp+FCFh]
  __int64 v19; // [rsp+1050h] [rbp+FD0h]

  v19 = -2;
  v3 = a2 - (a2 >> 1);
  v4 = 250000;
  if ( a2 < 0x3D090 )
    v4 = a2;
  if ( v4 <= v3 )
    v4 = a2 - (a2 >> 1);
  if ( v4 < 0x81 )
  {
    v5 = &v14;
    v6 = 128;
    v7 = 0;
    goto LABEL_12;
  }
  if ( v3 >> 59 != 0 || 32 * v4 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v8 = 0;
    goto LABEL_9;
  }
  v9 = a3;
  v10 = a1;
  v11 = a2;
  nullsub_1(a1);
  v8 = 8;
  v12 = sub_140001650(32 * v4, 8);
  if ( !v12 )
  {
LABEL_9:
    v18 = 0;
    sub_1416C2D4B(v8, 32 * v4);
  }
  v5 = (char *)v12;
  v15 = v4;
  v16 = v12;
  v17 = 0;
  v7 = 1;
  v6 = v4;
  a2 = v11;
  LODWORD(a1) = v10;
  a3 = v9;
LABEL_12:
  v18 = v7;
  sub_1406FD150(a1, a2, (_DWORD)v5, v6, a2 < 0x41, a3);
  result = v4 != 0;
  if ( ((unsigned __int8)v7 & (v4 != 0)) != 0 )
    return sub_140001660(v5, 32 * v4, 8);
  return result;
}