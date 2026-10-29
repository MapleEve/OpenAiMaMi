// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x140227bd0 | name sub_140227BD0
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140227BD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  _DWORD *v4; // rax
  __int64 result; // rax

  if ( !a2 )
  {
    nullsub_1(a1);
    v3 = 7;
    v4 = (_DWORD *)sub_140001650(7, 1);
    if ( v4 )
    {
      *(_DWORD *)((char *)v4 + 3) = 1735289203;
      *v4 = 1936943469;
      goto LABEL_8;
    }
LABEL_15:
    sub_141938D2B(1, 7);
  }
  if ( *(_BYTE *)a2 != 2 || *(_QWORD *)(a2 + 8) )
  {
    nullsub_1(a1);
    v3 = 7;
    v4 = (_DWORD *)sub_140001650(7, 1);
    if ( v4 )
    {
      *(_DWORD *)((char *)v4 + 3) = 1684630625;
      *v4 = 1635151465;
LABEL_8:
      *(_BYTE *)a1 = 3;
      *(_QWORD *)(a1 + 8) = 7;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v3 = *(_QWORD *)(a2 + 16);
  if ( !(v3 >> 53) )
  {
    *(_BYTE *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
    result = 16;
    goto LABEL_10;
  }
  nullsub_1(a1);
  v3 = 12;
  v4 = (_DWORD *)sub_140001650(12, 1);
  if ( !v4 )
    sub_141938D2B(1, 12);
  qmemcpy(v4, "out_of_range", 12);
  *(_BYTE *)a1 = 3;
  *(_QWORD *)(a1 + 8) = 12;
LABEL_9:
  *(_QWORD *)(a1 + 16) = v4;
  result = 24;
LABEL_10:
  *(_QWORD *)(a1 + result) = v3;
  return result;
}
