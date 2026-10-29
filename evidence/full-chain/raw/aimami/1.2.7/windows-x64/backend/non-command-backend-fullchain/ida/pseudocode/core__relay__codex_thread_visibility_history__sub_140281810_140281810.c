// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140281810 | name sub_140281810
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via panic-Location xref (win-native)
void *__fastcall sub_140281810(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // r10
  char v10; // r11
  char v11; // di
  int v12; // edi
  int v13; // r11d
  bool v14; // cf
  unsigned __int64 v15; // rdx
  void *result; // rax

  v4 = a1;
  v5 = (_QWORD *)a3[2];
  if ( (unsigned __int64)v5 <= a2 )
    goto LABEL_21;
  v6 = a3[1];
  v7 = (__int64)v5 + v6;
  while ( 1 )
  {
    v8 = *(char *)(v7 - 1);
    if ( v8 < 0 )
    {
      v10 = *(_BYTE *)(v7 - 2);
      if ( v10 >= -64 )
      {
        v9 = v7 - 2;
        v13 = v10 & 0x1F;
      }
      else
      {
        v11 = *(_BYTE *)(v7 - 3);
        if ( v11 >= -64 )
        {
          v9 = v7 - 3;
          v12 = v11 & 0xF;
        }
        else
        {
          v9 = v7 - 4;
          v12 = ((*(_BYTE *)(v7 - 4) & 7) << 6) | v11 & 0x3F;
        }
        v13 = (v12 << 6) | v10 & 0x3F;
      }
      v8 = (v13 << 6) | v8 & 0x3F;
      if ( v8 == 32 )
        goto LABEL_3;
    }
    else
    {
      v9 = v7 - 1;
      if ( v8 == 32 )
        goto LABEL_3;
    }
    if ( v8 != 9 )
      break;
LABEL_3:
    v7 = v9;
    if ( v6 == v9 )
    {
      a1 = nullptr;
      goto LABEL_20;
    }
  }
  a1 = (_QWORD *)(v7 - v6);
  if ( a1 > v5 )
    goto LABEL_21;
  if ( a1 < v5 && *((char *)a1 + v6) <= -65 )
    sub_141939280(aAssertionFaile_69, 48, &off_1419E1B68);
LABEL_20:
  a3[2] = a1;
  v5 = a1;
LABEL_21:
  v14 = a2 < (unsigned __int64)v5;
  v15 = a2 - (_QWORD)v5;
  if ( v14 )
  {
    nullsub_1(a1);
    result = (void *)sub_140001650(107, 1);
    if ( !result )
      sub_141938D2B(1, 107);
    qmemcpy(
      result,
      "ROUTER_HISTORY_LAYOUT_PROTECTED: native paginated history cannot grow an existing record; history preserved",
      107);
    *v4 = 10;
    v4[1] = 107;
    v4[2] = result;
    v4[3] = 107;
    if ( *a3 )
      return (void *)sub_140001660(a3[1], *a3, 1);
  }
  else
  {
    sub_14071D960(a3, v15, v15 == 0 ? -1 : 0x20);
    result = (void *)a3[2];
    v4[3] = result;
    *(_OWORD *)(v4 + 1) = *(_OWORD *)a3;
    *v4 = -1;
  }
  return result;
}
