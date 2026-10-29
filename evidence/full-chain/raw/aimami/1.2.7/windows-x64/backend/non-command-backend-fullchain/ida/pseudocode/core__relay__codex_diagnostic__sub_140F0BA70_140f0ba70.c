// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f0ba70 | name sub_140F0BA70
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F0BA70(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 result; // rax

  nullsub_1(a1);
  v2 = sub_140001650(48, 8);
  if ( !v2 )
    sub_141938D11(8, 48);
  v4 = (_QWORD *)v2;
  nullsub_1(v3);
  v5 = sub_140001650(19, 1);
  if ( !v5 )
    sub_141938D2B(1, 19);
  v7 = v5;
  *(_OWORD *)v5 = *(_OWORD *)aDbOrphanProvid;
  *(_DWORD *)(v5 + 15) = 1936876900;
  nullsub_1(v6);
  result = sub_140001650(24, 1);
  if ( !result )
    sub_141938D2B(1, 24);
  *(_OWORD *)result = *(_OWORD *)aRolloutOrphanP;
  *(_QWORD *)(result + 16) = 0x7372656469766F72LL;
  *v4 = 19;
  v4[1] = v7;
  v4[2] = 19;
  v4[3] = 24;
  v4[4] = result;
  v4[5] = 24;
  *a1 = 2;
  a1[1] = v4;
  a1[2] = 2;
  return result;
}
