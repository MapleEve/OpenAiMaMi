// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140f7d510 | name sub_140F7D510
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F7D510(signed __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  signed __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r15
  const __m128i *v16; // r14
  __m128i *v17; // rax
  __int64 v18; // rbx
  _BYTE v19[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]

  v4 = sub_141682C30(a2, a3);
  if ( v4 )
  {
    sub_1416B3AE0(v19, v4, v5);
    v6 = 0;
    if ( !v19[0] )
      v6 = v21;
    v7 = 1;
    if ( !v19[0] )
      v7 = v20;
  }
  else
  {
    v7 = 1;
    v6 = 0;
  }
  v8 = sub_140E91690(v7, v6, aZst, 4);
  result = sub_140E91690(v8, v9, aJsonl, 6);
  v12 = 0;
  if ( v11 >= 0x24 )
    v12 = v11 - 36;
  v13 = v11 - v12;
  if ( v11 <= 0x24 || v11 <= v12 || *(char *)(result + v12) >= -64 )
    v14 = result + v12;
  else
    v14 = 0;
  if ( v14 )
    result = v14;
  else
    v13 = v11;
  if ( v13 < 0 )
  {
    v15 = 0;
    goto LABEL_19;
  }
  if ( v13 )
  {
    v16 = (const __m128i *)result;
    nullsub_1(v14);
    v15 = 1;
    v17 = (__m128i *)sub_140001650(v13, 1);
    if ( !v17 )
LABEL_19:
      sub_141938D2B(v15, v13);
    v18 = (__int64)v17;
    result = sub_1418F44E0(v17, v16, v13);
  }
  else
  {
    v18 = 1;
  }
  *a1 = v13;
  a1[1] = v18;
  a1[2] = v13;
  return result;
}
