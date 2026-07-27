// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140499bf0
// name: sub_140499BF0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140499BF0(__int64 *a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  char v14; // r9
  char v15; // r10
  int v16; // r10d
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r14
  __int64 v23; // rax

  v6 = (_DWORD *)sub_14033BC10(a2, a3);
  if ( v7 >= 4 && *v6 == 1547656284 )
  {
    v9 = v7 - 4;
    v8 = (__int64)(v6 + 1);
    v10 = 1;
    if ( v9 )
      goto LABEL_4;
LABEL_22:
    v20 = 0;
    goto LABEL_23;
  }
  v8 = sub_14033BC10(a2, a3);
  v10 = 1;
  if ( !v9 )
    goto LABEL_22;
LABEL_4:
  v11 = v8 + v9;
  while ( 1 )
  {
    v12 = (unsigned int)*(char *)(v11 - 1);
    if ( (int)v12 < 0 )
    {
      v14 = *(_BYTE *)(v11 - 2);
      if ( v14 >= -64 )
      {
        v13 = v11 - 2;
        v17 = v14 & 0x1F;
      }
      else
      {
        v15 = *(_BYTE *)(v11 - 3);
        if ( v15 >= -64 )
        {
          v13 = v11 - 3;
          v16 = v15 & 0xF;
        }
        else
        {
          v13 = v11 - 4;
          v16 = ((*(_BYTE *)(v11 - 4) & 7) << 6) | v15 & 0x3F;
        }
        v17 = (v16 << 6) | v14 & 0x3F;
      }
      v12 = (v17 << 6) | *(_BYTE *)(v11 - 1) & 0x3Fu;
      if ( (_DWORD)v12 == 92 )
        goto LABEL_6;
    }
    else
    {
      v13 = v11 - 1;
      if ( (_DWORD)v12 == 92 )
        goto LABEL_6;
    }
    if ( (_DWORD)v12 != 47 )
      break;
LABEL_6:
    v11 = v13;
    if ( v8 == v13 )
      goto LABEL_22;
  }
  v18 = v11 - v8;
  if ( v18 < 0 )
  {
    v19 = 0;
    goto LABEL_20;
  }
  v22 = v8;
  v20 = v18;
  nullsub_1(v12);
  v23 = sub_140001650(v20, 1);
  v19 = 1;
  v18 = v20;
  if ( !v23 )
LABEL_20:
    sub_1416C2D4B(v19, v18);
  v10 = v23;
  sub_141684120(v23, v22, v20);
LABEL_23:
  *a1 = v20;
  a1[1] = v10;
  a1[2] = v20;
  return a1;
}