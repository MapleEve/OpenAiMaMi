// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e694d0 | name sub_140E694D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140E694D0(__int64 a1, _QWORD *a2)
{
  const __m128i *v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  const __m128i *v8; // [rsp+30h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-18h]
  const __m128i *v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]

  v11 = -2;
  if ( !*(_BYTE *)(a1 + 100) )
  {
    *(_BYTE *)(a1 + 100) = 1;
    sub_140E68A00(&v7, a1);
    v3 = v8;
    v4 = v9;
    v5 = a2[2];
    result = *a2 - v5;
    if ( v9 > result )
    {
      v10 = v8;
      sub_14190D590((_DWORD)a2, v5, v9, 1, 1);
      v5 = a2[2];
      v3 = v10;
    }
    else if ( !v9 )
    {
      goto LABEL_5;
    }
    result = sub_1418F44E0((__m128i *)(v5 + a2[1]), v3, v4);
LABEL_5:
    a2[2] = v4 + v5;
    if ( v7 )
      return sub_140001660(v3, v7, 1);
  }
  return result;
}
