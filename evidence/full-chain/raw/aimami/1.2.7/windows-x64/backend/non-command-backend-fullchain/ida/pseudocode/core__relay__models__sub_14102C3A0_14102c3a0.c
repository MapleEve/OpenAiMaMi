// win 1.2.7 | module src/core/relay/models.rs | ea 0x14102c3a0 | name sub_14102C3A0
// win 1.2.7 | module src/core/relay/models.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char *__fastcall sub_14102C3A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  const __m128i *v7; // rbx
  signed __int64 v8; // rdi
  const __m128i *v9; // rcx
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // r10d
  int v13; // edx
  unsigned __int8 v14; // r9
  __int64 v15; // rdi
  char *result; // rax
  __int64 v17; // r14
  __m128i *v18; // rax
  __m128i *v19; // r15
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = sub_140E91160(a2, a3);
  if ( !v5 )
  {
    nullsub_1(v6);
    v15 = 1;
    result = (char *)sub_140001650(30, 1);
    if ( !result )
      sub_141938D2B(1, 30);
    qmemcpy(result, "relay model id cannot be empty", 30);
    a1[1] = 30;
    a1[2] = (__int64)result;
    a1[3] = 30;
    goto LABEL_28;
  }
  v7 = (const __m128i *)v4;
  v8 = v5;
  if ( v5 < 0x20 )
  {
    if ( (unsigned __int64)sub_1416B3A20(v4, v5) <= 0x100 )
      goto LABEL_4;
LABEL_22:
    v20[0] = &unk_141A70F60;
    v20[1] = sub_1416BCB10;
    result = (char *)sub_1416ABFD0(a1 + 1, &unk_141A70F68, v20);
    v15 = 1;
    goto LABEL_28;
  }
  if ( (unsigned __int64)sub_1416B3400(v4, v5) > 0x100 )
    goto LABEL_22;
LABEL_4:
  v9 = v7;
  do
  {
    if ( v9 == (const __m128i *)&v7->m128i_i8[v8] )
    {
      if ( v8 >= 0 )
      {
        nullsub_1(v9);
        v17 = 1;
        v18 = (__m128i *)sub_140001650(v8, 1);
        if ( v18 )
        {
          v19 = v18;
          result = (char *)sub_1418F44E0(v18, v7, v8);
          a1[1] = v8;
          a1[2] = (__int64)v19;
          a1[3] = v8;
          v15 = 0;
          goto LABEL_28;
        }
      }
      else
      {
        v17 = 0;
      }
      sub_141938D2B(v17, v8);
    }
    v10 = v9->m128i_u8[0];
    if ( v9->m128i_i8[0] < 0 )
    {
      v11 = v10 & 0x1F;
      v12 = v9->m128i_i8[1] & 0x3F;
      if ( (unsigned __int8)v10 <= 0xDFu )
      {
        v9 = (const __m128i *)((char *)v9 + 2);
        v10 = v12 | (v11 << 6);
        if ( v10 < 0x20 )
          break;
      }
      else
      {
        v13 = (v12 << 6) | v9->m128i_i8[2] & 0x3F;
        if ( v9->m128i_i8[0] < 0xF0u )
        {
          v9 = (const __m128i *)((char *)v9 + 3);
          v10 = (v11 << 12) | v13;
          if ( v10 < 0x20 )
            break;
        }
        else
        {
          v14 = v9->m128i_u8[3];
          v9 = (const __m128i *)((char *)v9 + 4);
          v10 = ((v11 & 7) << 18) | (v13 << 6) | v14 & 0x3F;
          if ( v10 < 0x20 )
            break;
        }
      }
    }
    else
    {
      v9 = (const __m128i *)((char *)v9 + 1);
      if ( v10 < 0x20 )
        break;
    }
  }
  while ( v10 - 127 >= 0x21 );
  nullsub_1(v9);
  v15 = 1;
  result = (char *)sub_140001650(42, 1);
  if ( !result )
    sub_141938D2B(1, 42);
  qmemcpy(result, "relay model id contains control characters", 42);
  a1[1] = 42;
  a1[2] = (__int64)result;
  a1[3] = 42;
LABEL_28:
  *a1 = v15;
  return result;
}
