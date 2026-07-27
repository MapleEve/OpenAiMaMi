// module: codexmate_lib/commands/analytics
// addr: 0x140acb650
// name: sub_140ACB650
// win 1.2.1 | module src/commands/analytics.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140ACB650(__int64 a1, __int128 *a2)
{
  _WORD *v4; // rax
  __int64 v5; // rcx
  _WORD *v6; // rbx
  _DWORD *v7; // rax
  __int128 v8; // xmm0

  nullsub_1(a1);
  v4 = (_WORD *)sub_140001650(2, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 2);
  v6 = v4;
  *v4 = 27503;
  nullsub_1(v5);
  v7 = (_DWORD *)sub_140001650(7, 1);
  if ( !v7 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v7 + 3) = 1936942435;
  *v7 = 1667462483;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)a2 + 4);
  v8 = *a2;
  *(_OWORD *)(a1 + 88) = a2[1];
  *(_OWORD *)(a1 + 72) = v8;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 1;
  *(_QWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 24) = 7;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = 7;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 8;
  *(_QWORD *)(a1 + 64) = 0;
  return a1;
}