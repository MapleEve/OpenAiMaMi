// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140300e30 | name sub_140300E30
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
unsigned __int64 *__fastcall sub_140300E30(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  const __m128i *v15; // r14
  __m128i *v16; // rax
  __int64 v17; // rbx

  sub_140E91B30(a2, a3);
  v7 = a3 - v6;
  if ( a3 != v6 )
  {
    if ( v7 >= a3 )
    {
      if ( !v6 )
      {
LABEL_10:
        *a1 = -1;
        return a1;
      }
    }
    else if ( *(char *)(a2 + v7) >= -64 )
    {
      goto LABEL_4;
    }
    sub_141938F40(a2, a3, v7, a3, (__int64)&off_1419E8B10);
  }
LABEL_4:
  if ( v6 < 7 )
    goto LABEL_10;
  v8 = (_DWORD *)(v7 + a2);
  if ( *v8 ^ 0x6968743C | *(_DWORD *)((char *)v8 + 3) ^ 0x3E6B6E69 )
    goto LABEL_10;
  v9 = sub_140E91160((char *)v8 + 7, v6 - 7);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = 0;
    goto LABEL_8;
  }
  if ( v10 )
  {
    v15 = (const __m128i *)v9;
    nullsub_1(v11);
    v13 = 1;
    v16 = (__m128i *)sub_140001650(v12, 1);
    if ( !v16 )
LABEL_8:
      sub_141938D2B(v13, v12);
    v17 = (__int64)v16;
    sub_1418F44E0(v16, v15, v12);
  }
  else
  {
    v17 = 1;
  }
  *a1 = v12;
  a1[1] = v17;
  a1[2] = v12;
  return a1;
}
