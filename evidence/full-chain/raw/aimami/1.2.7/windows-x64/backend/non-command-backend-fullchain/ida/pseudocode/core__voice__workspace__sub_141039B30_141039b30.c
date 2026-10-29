// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x141039b30 | name sub_141039B30
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_141039B30(unsigned __int64 *a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  const __m128i *v10; // r14
  __m128i *v11; // rax
  __m128i *v12; // rbx

  v3 = *a2;
  if ( *a2 == -1 )
  {
LABEL_12:
    *a1 = -1;
    return;
  }
  v4 = a2[1];
  v5 = sub_140E91160(v4, a2[2]);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  if ( !v6 )
  {
    if ( v3 )
      sub_140001660(v4, v3, 1);
    goto LABEL_12;
  }
  v10 = (const __m128i *)v5;
  nullsub_1(v7);
  v9 = 1;
  v11 = (__m128i *)sub_140001650(v8, 1);
  if ( !v11 )
LABEL_4:
    sub_141938D2B(v9, v8);
  v12 = v11;
  sub_1418F44E0(v11, v10, v8);
  if ( v3 )
    sub_140001660(v4, v3, 1);
  *a1 = v8;
  a1[1] = (unsigned __int64)v12;
  a1[2] = v8;
}
