// module: codexmate_lib/core/relay/translator
// addr: 0x1409c55e0
// name: sub_1409C55E0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409C55E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _BOOL8 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  _BOOL8 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  v6 = sub_141433D50(aInputTokens_0, 12, a2);
  LOBYTE(v7) = 1;
  if ( v6 && *(_BYTE *)v6 == 2 )
  {
    v8 = *(_QWORD *)(v6 + 8);
    if ( v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v2 = *(_QWORD *)(v6 + 16);
        LOBYTE(v7) = 0;
      }
    }
    else
    {
      v2 = *(_QWORD *)(v6 + 16);
      v7 = v2 >> 63;
    }
  }
  v9 = sub_141433D50(aCacheReadInput, 23, a2);
  if ( v9 && *(_BYTE *)v9 == 2 && (v10 = *(_QWORD *)(v9 + 8), v10 != 2) )
  {
    v3 = *(_QWORD *)(v9 + 16);
    v11 = (_DWORD)v10 == 1 || v3 >= 0;
  }
  else
  {
    v11 = 0;
  }
  v12 = sub_141433D50(aCacheCreationI, 27, a2);
  if ( v12 && *(_BYTE *)v12 == 2 && (v13 = *(_QWORD *)(v12 + 8), v13 != 2) )
  {
    if ( (_DWORD)v13 == 1 )
    {
      v12 = *(_QWORD *)(v12 + 16);
      v14 = 1;
      if ( !(_BYTE)v7 )
        goto LABEL_21;
    }
    else
    {
      v12 = *(_QWORD *)(v12 + 16);
      v14 = v12 >= 0;
      if ( !(_BYTE)v7 )
        goto LABEL_21;
    }
  }
  else
  {
    v14 = 0;
    if ( !(_BYTE)v7 )
      goto LABEL_21;
  }
  if ( !v11 && !v14 )
    goto LABEL_26;
  v2 = 0;
LABEL_21:
  if ( !v11 )
    v3 = 0;
  if ( !v14 )
    v12 = 0;
  *(_QWORD *)(a1 + 336) = v2 + v3 + v12;
  *(_BYTE *)(a1 + 366) = 1;
LABEL_26:
  result = sub_141433D50(aOutputTokens_0, 13, a2);
  if ( result && *(_BYTE *)result == 2 )
  {
    v16 = *(_QWORD *)(result + 8);
    if ( v16 )
    {
      if ( (_DWORD)v16 == 2 )
        return result;
      result = *(_QWORD *)(result + 16);
    }
    else
    {
      result = *(_QWORD *)(result + 16);
      if ( result < 0 )
        return result;
    }
    if ( result >= *(_QWORD *)(a1 + 344) )
      *(_QWORD *)(a1 + 344) = result;
    *(_BYTE *)(a1 + 366) = 1;
  }
  return result;
}