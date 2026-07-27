// module: codexmate_lib/core/voice/workspace
// addr: 0x140b5a680
// name: sub_140B5A680
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140B5A680(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r13
  char *v5; // rsi
  int v6; // r9d
  char v7; // di
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // r15d
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  char result; // al
  char v14; // [rsp+38h] [rbp-48h] BYREF
  char *v15; // [rsp+1038h] [rbp+FB8h]
  unsigned __int64 v16; // [rsp+1040h] [rbp+FC0h]
  char v17; // [rsp+104Fh] [rbp+FCFh]
  __int64 v18; // [rsp+1050h] [rbp+FD0h]

  v18 = -2;
  v3 = a2 - (a2 >> 1);
  v4 = 1000000;
  if ( a2 < 0xF4240 )
    v4 = a2;
  if ( v4 <= v3 )
    v4 = a2 - (a2 >> 1);
  v16 = v4;
  if ( v4 < 0x201 )
  {
    v5 = &v14;
    v6 = 512;
    v7 = 0;
    goto LABEL_12;
  }
  if ( v3 >> 61 != 0 || 8 * v4 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v8 = 0;
    goto LABEL_9;
  }
  v9 = a3;
  v10 = a1;
  v11 = a2;
  nullsub_1(a1);
  v8 = 8;
  v12 = sub_140001650(8 * v4, 8);
  if ( !v12 )
  {
LABEL_9:
    v17 = 0;
    sub_1416C2D4B(v8, 8 * v4);
  }
  v5 = (char *)v12;
  v7 = 1;
  v6 = v4;
  a2 = v11;
  LODWORD(a1) = v10;
  a3 = v9;
LABEL_12:
  v15 = v5;
  v17 = v7;
  sub_140708B90(a1, a2, (_DWORD)v5, v6, a2 < 0x41, a3);
  result = v16 != 0;
  if ( ((unsigned __int8)v7 & (v16 != 0)) != 0 )
    return sub_140001660(v5, 8 * v16, 8);
  return result;
}