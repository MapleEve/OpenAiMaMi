// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x140f066b0 | name sub_140F066B0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F066B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r14
  char v9; // al
  int v10; // r12d
  __int16 v11; // r15
  char *v12; // rax
  char *v13; // rdx
  char *v14; // rdx
  char *v15; // rcx
  char v16; // r8
  char *v17; // rdx
  __int64 result; // rax
  char v19; // r13
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+48h] [rbp-8h]
  __int64 v23; // [rsp+50h] [rbp+0h]

  v23 = -2;
  v6 = a5;
  if ( !a5 )
    return sub_141681D30(a1, a2, a3);
  sub_1416AB9B0(&v20, a2, a3);
  v8 = v21;
  v9 = 1;
  v10 = 0;
  if ( v21 >= 3
    && (*(_BYTE *)(*((_QWORD *)&v20 + 1) + v21 - 2) & 0xF0) == 0xA0
    && *(_BYTE *)(*((_QWORD *)&v20 + 1) + v21 - 3) == 0xED )
  {
    v10 = ((*(_BYTE *)(*((_QWORD *)&v20 + 1) + v21 - 2) & 0xF) << 16)
        | ((*(_BYTE *)(*((_QWORD *)&v20 + 1) + v21 - 1) & 0x3F) << 10);
    v9 = 0;
  }
  if ( a5 < 3
    || *(_BYTE *)a4 != 0xED
    || (v11 = *(unsigned __int8 *)(a4 + 1), ((*(_BYTE *)(a4 + 1) & 0xF0) != 0xB0) | (unsigned __int8)v9) )
  {
    if ( !(_BYTE)v22 )
      goto LABEL_34;
    v12 = (char *)(a4 + a5);
    v13 = (char *)a4;
    while ( 1 )
    {
      v15 = v13 + 1;
      v16 = *v13;
      if ( *v13 < 0 )
      {
        if ( (unsigned __int8)v16 < 0xE0u )
        {
          v14 = v13 + 2;
          if ( v15 != v12 )
            v15 = v14;
        }
        else if ( v16 == -19 )
        {
          if ( v15 == v12 || v13 + 2 == v12 )
            goto LABEL_34;
          if ( (unsigned __int8)v13[1] > 0x9Fu )
          {
            LOBYTE(v22) = 0;
LABEL_34:
            if ( a5 > (unsigned __int64)v20 - v21 )
            {
              sub_14190D590((unsigned int)&v20, v21, a5, 1, 1);
              v8 = v21;
            }
            sub_1418F44E0((__m128i *)(v8 + *((_QWORD *)&v20 + 1)), (const __m128i *)a4, a5);
            goto LABEL_37;
          }
          v15 = v13 + 3;
        }
        else
        {
          v17 = v13 + 2;
          if ( v15 == v12 )
            v17 = v15;
          v15 = &v17[v17 != v12];
          if ( (unsigned __int8)v16 >= 0xF0u )
            v15 += v15 != v12;
        }
      }
      v13 = v15;
      if ( v15 == v12 )
        goto LABEL_34;
    }
  }
  if ( v21 >= 3 )
  {
    v8 = v21 - 3;
    v21 -= 3LL;
  }
  v19 = *(_BYTE *)(a4 + 2);
  if ( a5 + 1 > (unsigned __int64)v20 - v8 )
    sub_14190D590((unsigned int)&v20, v8, a5 + 1, 1, 1);
  sub_1416AA100(&v20, (v19 & 0x3F | v10 | (v11 << 6) & 0x3C0u) + 0x10000);
  v6 = a5 - 3;
  v8 = v21;
  if ( a5 - 3 > (unsigned __int64)v20 - v21 )
  {
    sub_14190D590((unsigned int)&v20, v21, v6, 1, 1);
    v8 = v21;
  }
  else if ( a5 == 3 )
  {
    goto LABEL_37;
  }
  sub_1418F44E0((__m128i *)(*((_QWORD *)&v20 + 1) + v8), (const __m128i *)(a4 + 3), v6);
  v8 = v21;
LABEL_37:
  v21 = v6 + v8;
  *(_OWORD *)a1 = v20;
  *(_QWORD *)(a1 + 16) = v21;
  result = v22;
  *(_QWORD *)(a1 + 24) = v22;
  return result;
}
