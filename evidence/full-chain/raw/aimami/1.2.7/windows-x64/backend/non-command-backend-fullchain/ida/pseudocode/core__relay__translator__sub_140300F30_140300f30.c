// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140300f30 | name sub_140300F30
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140300F30(__int64 a1, _QWORD *a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  _QWORD *v6; // rsi
  __int64 v7; // r15
  __m128i *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  signed __int64 v12; // rdi
  __int64 v13; // r15
  const __m128i *v14; // r14
  __m128i *v15; // rax
  __int64 v16; // rbx
  __int128 v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+30h] [rbp-40h]
  const __m128i *v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  _OWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+70h] [rbp+0h]

  v22 = -2;
  v6 = (_QWORD *)a1;
  if ( a3 != 11 )
    goto LABEL_3;
  a1 = *a2 ^ 0x61705F796C707061LL | *(_QWORD *)((char *)a2 + 3) ^ 0x68637461705F796CLL;
  if ( a1 )
    goto LABEL_3;
  *(_QWORD *)&v17 = a4;
  *((_QWORD *)&v17 + 1) = a5;
  v18 = 0;
  v19 = a4;
  v20 = a5;
  sub_14062D280(v21, &v17);
  if ( LOBYTE(v21[0]) == 0xFF )
  {
    sub_14002F910((char *)v21 + 8);
  }
  else
  {
    v18 = v21[1];
    v17 = v21[0];
    v10 = sub_1416419F0(aInput_0, 5, &v17);
    if ( (v10 || (v10 = sub_1416419F0(aPatch_0, 5, &v17)) != 0) && *(_BYTE *)v10 == 3 )
    {
      v12 = *(_QWORD *)(v10 + 24);
      if ( v12 < 0 )
      {
        v13 = 0;
        goto LABEL_15;
      }
      if ( v12 )
      {
        v14 = *(const __m128i **)(v10 + 16);
        nullsub_1(v11);
        v13 = 1;
        v15 = (__m128i *)sub_140001650(v12, 1);
        if ( !v15 )
LABEL_15:
          sub_141938D2B(v13, v12);
        v16 = (__int64)v15;
        sub_1418F44E0(v15, v14, v12);
      }
      else
      {
        v16 = 1;
      }
      *v6 = v12;
      v6[1] = v16;
      v6[2] = v12;
      sub_14002F9D0(v21);
      return;
    }
    sub_14002F9D0(v21);
  }
LABEL_3:
  if ( a5 < 0 )
  {
    v7 = 0;
    goto LABEL_5;
  }
  if ( a5 )
  {
    nullsub_1(a1);
    v7 = 1;
    v8 = (__m128i *)sub_140001650(a5, 1);
    if ( !v8 )
LABEL_5:
      sub_141938D2B(v7, a5);
    v9 = (__int64)v8;
    sub_1418F44E0(v8, a4, a5);
  }
  else
  {
    v9 = 1;
  }
  *v6 = a5;
  v6[1] = v9;
  v6[2] = a5;
}
