// module: codexmate_lib/core/voice/runtime
// addr: 0x140656a30
// name: sub_140656A30
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140656A30(_BYTE *a1, unsigned int a2)
{
  int v2; // r8d
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // r9
  int v6; // r11d
  char v7; // di
  bool v8; // zf
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  int v11; // ebx
  int v12; // r8d
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  int v15; // r11d
  __int64 v16; // rsi
  unsigned __int64 v17; // r9
  int v18; // ebx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx

  v2 = 0;
  if ( *a1 )
  {
    if ( *a1 == 2 )
    {
      return 0;
    }
    else
    {
      v12 = 0;
      v13 = 12;
      v14 = 20;
      v15 = 0;
      result = 630;
      while ( 1 )
      {
        v16 = *(unsigned int *)((char *)&unk_141770A58 + v13 + 4);
        v17 = v16 + v14;
        if ( v17 > 0x9DB2 )
          break;
        v18 = *(_DWORD *)((char *)&unk_141770A58 + v13);
        if ( (unsigned int)v16 >= 0x10 && v18 == 544501094 )
        {
          a2 = *(_DWORD *)((char *)&unk_141770A58 + v13 + 16);
          v15 = 1;
          v7 = 1;
          v8 = v12 == 1;
          v12 = 0;
          if ( v8 )
            goto LABEL_30;
        }
        else
        {
          v7 = 1;
          if ( v18 == 1635017060 )
          {
            v12 = 1;
            LODWORD(a1) = v16;
          }
          if ( v15 && v12 == 1 )
            goto LABEL_30;
        }
        v13 = v17 + (v16 & 1);
        v14 = v13 + 8;
        if ( v13 > 0x9DAA )
        {
          v7 = v12;
          if ( (v15 & 1) == 0 )
            return result;
          goto LABEL_30;
        }
      }
    }
  }
  else
  {
    v4 = 12;
    v5 = 20;
    v6 = 0;
    result = 630;
    while ( 1 )
    {
      v9 = *(unsigned int *)((char *)&unk_1417696C0 + v4 + 4);
      v10 = v9 + v5;
      if ( v10 > 0x7398 )
        break;
      v11 = *(_DWORD *)((char *)&unk_1417696C0 + v4);
      if ( (unsigned int)v9 >= 0x10 && v11 == 544501094 )
      {
        a2 = *(_DWORD *)((char *)&unk_1417696C0 + v4 + 16);
        v6 = 1;
        v7 = 1;
        v8 = v2 == 1;
        v2 = 0;
        if ( v8 )
          goto LABEL_30;
      }
      else
      {
        v7 = 1;
        if ( v11 == 1635017060 )
        {
          v2 = 1;
          LODWORD(a1) = v9;
        }
        if ( v6 && v2 == 1 )
          goto LABEL_30;
      }
      v4 = v10 + (v9 & 1);
      v5 = v4 + 8;
      if ( v4 > 0x7390 )
      {
        v7 = v2;
        if ( (v6 & 1) == 0 )
          return result;
LABEL_30:
        if ( a2 && (v7 & 1) != 0 )
        {
          v19 = a2;
          v20 = 1000LL * (unsigned int)a1;
          if ( (v20 & 0x3FF00000000LL) != 0 )
          {
            v21 = v20 / a2;
            v22 = 1000 * (unsigned __int64)(unsigned int)a1 % a2;
          }
          else
          {
            v22 = (unsigned int)v20 % a2;
            v21 = (unsigned int)v20 / v19;
          }
          return v21 - ((v22 == 0) - 1LL) + 130;
        }
        return result;
      }
    }
  }
  return result;
}