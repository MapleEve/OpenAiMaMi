// module: codexmate_lib/core/relay/manager
// addr: 0x1408321b0
// name: sub_1408321B0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1408321B0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v4; // [rsp+30h] [rbp-10h]
  __int64 v5; // [rsp+38h] [rbp-8h]

  v5 = -2;
  v4 = a2;
  v3[0] = a2;
  v3[1] = sub_1400015F0;
  sub_14149C0F0(a1, &unk_1417957DD, v3);
  result = (__int64)v4;
  if ( *v4 )
    return sub_140001660(v4[1], *v4, 1);
  return result;
}