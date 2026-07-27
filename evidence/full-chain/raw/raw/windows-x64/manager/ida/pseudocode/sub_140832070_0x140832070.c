// module: codexmate_lib/core/relay/manager
// addr: 0x140832070
// name: sub_140832070
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 *__fastcall sub_140832070(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  __int64 *result; // rax
  __int64 v5; // rdi
  __int64 v8; // r15
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD v12[3]; // [rsp+20h] [rbp-58h] BYREF
  char v13; // [rsp+38h] [rbp-40h]
  char v14; // [rsp+39h] [rbp-3Fh]

  v3 = **(_BYTE **)a1 + 1;
  **(_BYTE **)a1 = v3;
  result = *(__int64 **)(a1 + 8);
  v5 = *result;
  if ( *result )
  {
    v8 = result[1];
    v9 = **(_BYTE **)(a1 + 16);
    nullsub_1(a1);
    v10 = sub_140001650(a3, 1);
    if ( !v10 )
      sub_1416C2D4B(1, a3);
    v11 = v10;
    sub_141684120(v10, a2, a3);
    v12[0] = a3;
    v12[1] = v11;
    v12[2] = a3;
    v13 = v3;
    v14 = v9;
    return (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(v8 + 40))(v5, v12);
  }
  return result;
}