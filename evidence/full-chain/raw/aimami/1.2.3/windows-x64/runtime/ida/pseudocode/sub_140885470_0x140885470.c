// module: codexmate_lib/core/voice/runtime
// addr: 0x140885470
// name: sub_140885470
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140885470(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 result; // rax

  v6 = sub_14033BC10(a2, a3);
  if ( v7 )
  {
    v9 = v7;
    if ( v7 < 0 )
      sub_1416C2D4B(0, v7);
    v11 = v6;
    nullsub_1(v8);
    v12 = sub_140001650(v9, 1);
    if ( !v12 )
      sub_1416C2D4B(1, v9);
  }
  else
  {
    v10 = 8 * (unsigned int)a4;
    v9 = *(_QWORD *)((char *)&unk_141799830 + v10);
    v11 = *(__int64 *)((char *)&off_141799850 + v10);
    nullsub_1(&off_141799850);
    v12 = sub_140001650(v9, 1);
    if ( !v12 )
      sub_1416C2D4B(1, v9);
  }
  v13 = v12;
  result = sub_141684120(v12, v11, v9);
  *a1 = v9;
  a1[1] = v13;
  a1[2] = v9;
  return result;
}