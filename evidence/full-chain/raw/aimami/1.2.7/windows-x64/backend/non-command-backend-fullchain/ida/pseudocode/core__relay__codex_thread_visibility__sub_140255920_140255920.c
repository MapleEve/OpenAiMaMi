// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140255920 | name sub_140255920
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void *__fastcall sub_140255920(__int64 a1, int a2, const __m128i *a3, __int64 a4)
{
  __m128i *v6; // rax
  const __m128i *v7; // rdi
  __int64 v8; // rcx
  __int128 v9; // xmm6
  __int64 v10; // rdi
  void *result; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  __int64 v16; // r12
  __int64 i; // rbx
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  const __m128i *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  void *v24; // rdx
  const __m128i *v25; // rsi
  __int64 v26; // rdi
  const __m128i *v28; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int128 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-28h]
  char v33; // [rsp+60h] [rbp-20h]
  void *v34; // [rsp+70h] [rbp-10h] BYREF
  __int128 v35; // [rsp+78h] [rbp-8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+8h]
  __int64 v37; // [rsp+90h] [rbp+10h] BYREF
  const __m128i *v38; // [rsp+98h] [rbp+18h]
  unsigned __int64 v39; // [rsp+A0h] [rbp+20h]
  __int64 v40; // [rsp+B0h] [rbp+30h]
  const __m128i *v41; // [rsp+B8h] [rbp+38h]
  const __m128i *v42; // [rsp+C0h] [rbp+40h]
  __int64 v43; // [rsp+C8h] [rbp+48h]

  v43 = -2;
  v41 = a3;
  nullsub_1(a1);
  v6 = (__m128i *)sub_140001650(128, 1);
  if ( !v6 )
    sub_141938D2B(1, 128);
  v37 = 128;
  v38 = v6;
  *(_QWORD *)&v30 = &v37;
  *((_QWORD *)&v30 + 1) = asc_1419D4588;
  v31 = 2;
  v32 = 1;
  v33 = 0;
  v6->m128i_i8[0] = 123;
  v39 = 1;
  LOWORD(v35) = 256;
  *((_QWORD *)&v35 + 1) = &v30;
  v7 = (const __m128i *)sub_140BFA250(&v35, "versionentries", 7, a4 + 24);
  if ( v7 )
    goto LABEL_6;
  if ( (_BYTE)v35 == 1 )
  {
    v7 = (const __m128i *)sub_141934E70();
    goto LABEL_6;
  }
  v7 = (const __m128i *)sub_140BF21E0(&v35, "entries", 7, a4);
  if ( v7 )
  {
LABEL_6:
    if ( v37 )
      sub_140001660(v38, v37, 1);
    goto LABEL_8;
  }
  if ( (v35 & 1) == 0 && BYTE1(v35) )
  {
    v12 = *((_QWORD *)&v35 + 1);
    v13 = **((_QWORD ***)&v35 + 1);
    v14 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 24LL) - 1LL;
    *(_QWORD *)(*((_QWORD *)&v35 + 1) + 24LL) = v14;
    if ( *(_BYTE *)(v12 + 32) == 1 )
    {
      sub_1403B45A0(v13, asc_1419D6548, 1);
      if ( v14 )
      {
        v42 = *(const __m128i **)(v12 + 8);
        v15 = *(_QWORD *)(v12 + 16);
        v16 = v13[2];
        for ( i = 0; i != v14; ++i )
        {
          if ( v15 > *v13 - v16 )
          {
            sub_14190D590((_DWORD)v13, v16, v15, 1, 1);
            v16 = v13[2];
          }
          else if ( !v15 )
          {
            goto LABEL_17;
          }
          sub_1418F44E0((__m128i *)(v16 + v13[1]), v42, v15);
LABEL_17:
          v16 += v15;
          v13[2] = v16;
        }
      }
    }
    v18 = v13[2];
    if ( *v13 == v18 )
    {
      sub_14190D590((_DWORD)v13, v18, 1, 1, 1);
      v18 = v13[2];
    }
    *(_BYTE *)(v13[1] + v18) = 125;
    v13[2] = v18 + 1;
  }
  v19 = v37;
  v7 = v38;
  if ( v37 == -1 )
  {
LABEL_8:
    *(_QWORD *)&v35 = v7;
    v37 = (__int64)&v35;
    v38 = (const __m128i *)sub_14163CE40;
    sub_1416ABFD0(&v30, &unk_1419D787C, &v37);
    v9 = v30;
    v10 = v31;
    result = (void *)sub_14002F910(&v35);
    *(_QWORD *)a1 = 10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 24) = v10;
    return result;
  }
  v20 = v39;
  if ( v39 <= 0x800000 )
  {
    v40 = v37;
    v42 = v38;
    sub_1416828D0((unsigned int)&v37, a2, (_DWORD)v41, (unsigned int)&unk_1419DFCCD, 36);
    v23 = v39;
    v41 = v38;
    if ( (sub_140222E10(v38, v39, v42, v20) & 1) != 0
      || (result = (void *)sub_1401BD880(v24), (v24 = result) != nullptr) )
    {
      v34 = v24;
      v28 = v41;
      v29 = v23;
      *(_QWORD *)&v30 = &v28;
      *((_QWORD *)&v30 + 1) = sub_14169F630;
      v31 = (__int64)&v34;
      v32 = (__int64)sub_1416BB0B0;
      sub_1416ABFD0(&v35, &unk_1419D78AF, &v30);
      v30 = v35;
      v31 = v36;
      if ( ((unsigned __int8)v34 & 3u) - 2 >= 2 && ((unsigned __int8)v34 & 3) != 0 )
      {
        v29 = (unsigned __int64)v34 - 1;
        LOBYTE(v28) = 3;
        sub_1416BCB00(&v29);
      }
      *(_QWORD *)a1 = 10;
      *(_OWORD *)(a1 + 8) = v30;
      result = (void *)v31;
      *(_QWORD *)(a1 + 24) = v31;
    }
    else
    {
      *(_QWORD *)a1 = -1;
    }
    v25 = v42;
    v26 = v40;
    if ( v37 )
      result = (void *)sub_140001660(v41, v37, 1);
    if ( v26 )
    {
      v21 = v25;
      v22 = v26;
      return (void *)sub_140001660(v21, v22, 1);
    }
  }
  else
  {
    nullsub_1(v8);
    result = (void *)sub_140001650(52, 1);
    if ( !result )
    {
      v40 = v19;
      v42 = v7;
      sub_141938D2B(1, 52);
    }
    qmemcpy(result, "no-account model restore journal exceeds write limit", 52);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 52;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 52;
    if ( v19 )
    {
      v21 = v7;
      v22 = v19;
      return (void *)sub_140001660(v21, v22, 1);
    }
  }
  return result;
}
