// module: codexmate_lib/core/voice/runtime
// addr: 0x1405742e0
// name: sub_1405742E0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405742E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-8h]
  __int64 v11; // [rsp+40h] [rbp+0h]

  v11 = -2;
  v1 = *a1 + 128;
  v10 = *a1;
  v2 = v10 + 416;
  sub_1406AE4C0(v9, v10 + 416, v1);
  v3 = v9[0];
  if ( v9[0] <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    do
    {
      if ( v3 )
        sub_140001660(v9[1], 2 * v3, 2);
      sub_1406AE4C0(v9, v2, v1);
      v3 = v9[0];
    }
    while ( v9[0] < 0xFFFFFFFFFFFFFFFEuLL );
  }
  v4 = v10;
  v5 = *(_QWORD *)(v10 + 424);
  do
  {
    v6 = *(_QWORD *)(v5 + 776);
    sub_140001660(v5, 800, 8);
    v5 = v6;
  }
  while ( v6 );
  result = *(_QWORD *)(v4 + 256);
  if ( result )
    result = (*(__int64 (__fastcall **)(_QWORD))(result + 24))(*(_QWORD *)(v10 + 264));
  v8 = v10;
  if ( v10 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v10 + 8)) )
    return sub_140001660(v8, 512, 128);
  return result;
}