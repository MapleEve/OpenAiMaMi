// module: codexmate_lib/core/relay/quota
// addr: 0x1414a2fc0
// name: sub_1414A2FC0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1414A2FC0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned __int8 *v5; // r12
  unsigned __int8 v7; // al
  unsigned __int8 (__fastcall *v8)(__int64, unsigned __int8 *, __int64); // r14
  __int64 v9; // rbx
  unsigned __int8 *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // ecx
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r8
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+0h]

  v5 = a3;
  if ( (a4 & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, unsigned __int64))(a2 + 24))(a1, a3, a4 >> 1);
  v7 = *a3;
  if ( !*a3 )
    return 0;
  v8 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(a2 + 24);
  v9 = 0;
  while ( 1 )
  {
    v10 = v5 + 1;
    v11 = v7;
    if ( (v7 & 0x80u) == 0 )
    {
      if ( v8(a1, v5 + 1, v7) )
        return 1;
      v10 += v11;
      goto LABEL_4;
    }
    if ( v7 != 0x80 )
      break;
    v13 = *(unsigned __int16 *)(v5 + 1);
    if ( v8(a1, v5 + 3, v13) )
      return 1;
    v10 = &v5[v13 + 3];
LABEL_4:
    v7 = *v10;
    v5 = v10;
    if ( !*v10 )
      return 0;
  }
  if ( v7 == 192 )
  {
    v12 = 16 * v9;
    v20 = 1610612768;
    goto LABEL_26;
  }
  v14 = 1610612768;
  if ( (v7 & 1) != 0 )
  {
    v14 = *(_DWORD *)(v5 + 1);
    v10 = v5 + 5;
  }
  if ( (v7 & 2) != 0 )
  {
    v15 = *(_WORD *)v10;
    v10 += 2;
    if ( (v7 & 4) == 0 )
      goto LABEL_20;
LABEL_17:
    v16 = *(_WORD *)v10;
    v10 += 2;
    if ( (v7 & 8) != 0 )
    {
LABEL_21:
      v9 = *(unsigned __int16 *)v10;
      v10 += 2;
    }
  }
  else
  {
    v15 = 0;
    if ( (v7 & 4) != 0 )
      goto LABEL_17;
LABEL_20:
    v16 = 0;
    if ( (v7 & 8) != 0 )
      goto LABEL_21;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v15 = *(_WORD *)(a4 + 16 * (unsigned int)v15 + 8);
    if ( (v7 & 0x20) != 0 )
LABEL_24:
      v16 = *(_WORD *)(a4 + 16 * (unsigned int)v16 + 8);
  }
  else if ( (v7 & 0x20) != 0 )
  {
    goto LABEL_24;
  }
  v12 = 16 * v9;
  LODWORD(v20) = v14;
  WORD2(v20) = v15;
  HIWORD(v20) = v16;
LABEL_26:
  v19[0] = a1;
  v19[1] = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(a4 + v12 + 8))(*(_QWORD *)(a4 + v12), v19) )
  {
    ++v9;
    goto LABEL_4;
  }
  return 1;
}