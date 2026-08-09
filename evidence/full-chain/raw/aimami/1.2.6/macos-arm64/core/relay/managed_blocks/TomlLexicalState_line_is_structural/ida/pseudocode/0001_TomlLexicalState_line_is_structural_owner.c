// codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural
// owner_ea: 0x1007c0a00, size: 0x1d5
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Pure function: TOML lexical state machine. 0 callees, 19 callers, 39 BBs

// 1.2.4→1.2.6 delta 新增函数: TOML 词法状态机谓词。判断给定行在状态机扫描后是否落回结构性状态(0=双引号串内,1=单引号串内,2=结构性)。识别三重引号/转义/注释。19 个调用者(router config parse/codex_writer)。纯函数无副作用。A-level owner for managed_blocks::TomlLexicalState::line_is_structural
bool __fastcall codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::h8bbafe1f19cb1f18(
        char *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char v3; // al
  unsigned __int64 v4; // rcx
  char v5; // r9
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int v8; // r8d
  unsigned __int64 v9; // rcx
  int v11; // r8d

  v3 = *a1;
  if ( !a3 )
    return v3 == 2;
  v4 = 0;
  v5 = *a1;
  while ( v5 != 2 )
  {
    if ( (v5 & 1) != 0 )
    {
      v7 = v4 + 3;
      if ( v4 + 3 <= a3 && !(*(_WORD *)(a2 + v4) ^ 0x2727 | *(unsigned __int8 *)(a2 + v4 + 2) ^ 0x27) )
        goto LABEL_39;
      v6 = v4 + 1;
      v5 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a2 + v4) == 92 )
      {
        v6 = v4 + 2;
        if ( a3 < v6 )
          v6 = a3;
      }
      else
      {
        v7 = v4 + 3;
        if ( v4 + 3 <= a3 && !(*(_WORD *)(a2 + v4) ^ 0x2222 | *(unsigned __int8 *)(a2 + v4 + 2) ^ 0x22) )
        {
LABEL_39:
          *a1 = 2;
          v5 = 2;
          goto LABEL_5;
        }
        v6 = v4 + 1;
      }
      v5 = 0;
    }
LABEL_4:
    v7 = v6;
LABEL_5:
    v4 = v7;
    if ( v7 >= a3 )
      return v3 == 2;
  }
  v8 = *(unsigned __int8 *)(a2 + v4);
  if ( v8 == 34 )
  {
    v7 = v4 + 3;
    if ( v4 + 3 <= a3 && !(*(_WORD *)(a2 + v4) ^ 0x2222 | *(unsigned __int8 *)(a2 + v4 + 2) ^ 0x22) )
    {
      *a1 = 0;
      v5 = 0;
      goto LABEL_5;
    }
    v6 = v4 + 1;
    v5 = 2;
    if ( v6 < a3 )
    {
      while ( 1 )
      {
        v11 = *(unsigned __int8 *)(a2 + v6);
        if ( v11 == 92 )
        {
          v6 += 2LL;
          if ( a3 < v6 )
            v6 = a3;
        }
        else
        {
          ++v6;
          if ( v11 == 34 )
            goto LABEL_4;
        }
        if ( v6 >= a3 )
          goto LABEL_4;
      }
    }
    goto LABEL_4;
  }
  if ( v8 != 39 )
  {
    if ( v8 == 35 )
      return v3 == 2;
    v6 = v4 + 1;
    v5 = 2;
    goto LABEL_4;
  }
  v7 = v4 + 3;
  if ( v4 + 3 <= a3 && !(*(_WORD *)(a2 + v4) ^ 0x2727 | *(unsigned __int8 *)(a2 + v4 + 2) ^ 0x27) )
  {
    *a1 = 1;
    v5 = 1;
    goto LABEL_5;
  }
  v9 = v4 + 1;
  while ( v9 < a3 )
  {
    v7 = v9 + 1;
    if ( *(_BYTE *)(a2 + v9++) == 39 )
    {
      v5 = 2;
      goto LABEL_5;
    }
  }
  return v3 == 2;
}

