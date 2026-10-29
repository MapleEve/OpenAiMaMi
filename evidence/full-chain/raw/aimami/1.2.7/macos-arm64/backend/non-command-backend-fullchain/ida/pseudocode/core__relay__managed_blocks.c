// aimami 1.2.7 mac truly_undone deep reverse — cluster core/relay/managed_blocks
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hdb0ae72dca934a7a @ 0x100303890 size=469 lines=120 =====
bool __fastcall codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hdb0ae72dca934a7a(
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

// ===== codexmate_lib::core::relay::managed_blocks::lines_with_complete_strings::_$u7b$$u7b$closure$u7d$$u7d$::h4a9067f914f19f0f @ 0x1003a19d0 size=325 lines=92 =====
__int64 __fastcall codexmate_lib::core::relay::managed_blocks::lines_with_complete_strings::_$u7b$$u7b$closure$u7d$$u7d$::h4a9067f914f19f0f(
        __int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  int v15[4]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+10h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-38h]
  char v18[41]; // [rsp+27h] [rbp-29h] BYREF

  v1 = a1[2];
  v18[0] = 2;
  if ( *((_BYTE *)a1 + 89) )
    return 0;
  v17 = v1;
  v3 = a1 + 5;
  while ( 1 )
  {
    v4 = *v3;
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792(
      v15,
      v3);
    if ( v15[0] == 1 )
    {
      v5 = v16;
      v6 = a1[3];
      a1[3] = v16;
      v7 = v5 - v6;
      v8 = v6 + v4;
      goto LABEL_8;
    }
    if ( *((_BYTE *)a1 + 89) )
      break;
    *((_BYTE *)a1 + 89) = 1;
    v9 = a1[3];
    v7 = a1[4] - v9;
    if ( (*((_BYTE *)a1 + 88) | (a1[4] != v9)) != 1 )
      break;
    v8 = *v3 + v9;
LABEL_8:
    v10 = v7 + a1[2];
    a1[2] = v10;
    codexmate_lib::core::relay::managed_blocks::TomlLexicalState::line_is_structural::hdb0ae72dca934a7a(v18, v8, v7);
    if ( v18[0] == 2 || *((_BYTE *)a1 + 89) )
    {
      v11 = v17;
      if ( v10 <= v17 )
        return 0;
      goto LABEL_11;
    }
  }
  v10 = a1[2];
  v11 = v17;
  if ( v10 <= v17 )
    return 0;
LABEL_11:
  v12 = *a1;
  v13 = a1[1];
  if ( v11 )
  {
    if ( v11 >= v13 )
    {
      if ( v11 != v13 )
        goto LABEL_20;
    }
    else if ( *(char *)(v12 + v11) < -64 )
    {
LABEL_20:
      core::str::slice_error_fail::h480e51fbd8b15eba(v12, v13, v11, v10, &off_101BF5C88);
    }
  }
  if ( v10 >= v13 )
  {
    if ( v10 != v13 )
      goto LABEL_20;
  }
  else if ( *(char *)(v12 + v10) <= -65 )
  {
    goto LABEL_20;
  }
  return v12 + v11;
}

