// win 1.2.7 | module src/core/repository.rs | ea 0x1416a31d0 | name sub_1416A31D0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1416A31D0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __m128i v5[36]; // [rsp+20h] [rbp-60h] BYREF
  int v6; // [rsp+268h] [rbp+1E8h] BYREF
  __int64 v7; // [rsp+270h] [rbp+1F0h]
  __int64 v8; // [rsp+278h] [rbp+1F8h]
  __m128i v9[38]; // [rsp+280h] [rbp+200h] BYREF

  sub_1416A0550(&v6);
  if ( v6 == 1 )
  {
    v2 = v7;
    v3 = v8;
    if ( v7 )
      sub_1418F44E0(v5, v9, 0x248u);
    *(_QWORD *)(a1 + 8) = v2;
    *(_QWORD *)(a1 + 16) = v3;
    sub_1418F44E0((__m128i *)(a1 + 24), v5, 0x248u);
    *(_QWORD *)a1 = 1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
  }
  return a1;
}
