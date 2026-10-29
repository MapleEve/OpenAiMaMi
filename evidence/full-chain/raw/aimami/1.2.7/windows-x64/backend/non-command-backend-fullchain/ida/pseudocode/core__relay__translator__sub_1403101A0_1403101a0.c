// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1403101a0 | name sub_1403101A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_WORD *__fastcall sub_1403101A0(signed __int64 *a1, const __m128i *a2, signed __int64 a3)
{
  __int64 v6; // rax
  signed __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int64 v9; // rdi
  const __m128i *v10; // r14
  __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  _WORD *result; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  __m128i *v17; // rax
  __int64 v18; // rdi
  __m128i *v19; // rax
  __m128i *v20; // r15
  _OWORD v21[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  signed __int64 v25; // [rsp+70h] [rbp-10h]
  _OWORD v26[2]; // [rsp+78h] [rbp-8h] BYREF
  signed __int64 v27; // [rsp+98h] [rbp+18h] BYREF
  signed __int64 v28; // [rsp+A0h] [rbp+20h]
  signed __int64 v29; // [rsp+A8h] [rbp+28h]
  char v30; // [rsp+B7h] [rbp+37h]
  __int64 v31; // [rsp+B8h] [rbp+38h]

  v31 = -2;
  v6 = sub_140E91160(a2, a3);
  if ( v7 )
  {
    v9 = v7;
    v22[0] = v6;
    v22[1] = v7;
    v23 = 0;
    v10 = (const __m128i *)v6;
    v24 = v6;
    v25 = v7;
    sub_14062D280(v26, v22);
    if ( LOBYTE(v26[0]) != 0xFF )
    {
      v30 = v26[0];
      v21[1] = v26[1];
      v21[0] = v26[0];
      sub_1402E2C00((__int64)v22, (unsigned __int8 *)v21);
      sub_14029FA00(&v27, v22);
      v12 = v28;
      if ( v27 != -1 )
      {
        v13 = v29;
        *a1 = v27;
        a1[1] = v12;
        a1[2] = v13;
LABEL_18:
        sub_14002F9D0(v22);
        return (_WORD *)sub_14002F9D0(v26);
      }
      v27 = v28;
      if ( v9 >= 0 )
      {
        nullsub_1(-1);
        v16 = 1;
        v19 = (__m128i *)sub_140001650(v9, 1);
        if ( v19 )
        {
          v20 = v19;
          sub_1418F44E0(v19, v10, v9);
          *a1 = v9;
          a1[1] = (signed __int64)v20;
          a1[2] = v9;
          sub_14002F910(&v27);
          goto LABEL_18;
        }
      }
      else
      {
        v16 = 0;
      }
      sub_141938D2B(v16, v9);
    }
    if ( a3 < 0 )
    {
      v15 = 0;
      goto LABEL_9;
    }
    if ( a3 )
    {
      nullsub_1(v11);
      v15 = 1;
      v17 = (__m128i *)sub_140001650(a3, 1);
      if ( !v17 )
      {
LABEL_9:
        v30 = -1;
        sub_141938D2B(v15, a3);
      }
      v18 = (__int64)v17;
      sub_1418F44E0(v17, a2, a3);
    }
    else
    {
      v18 = 1;
    }
    *a1 = a3;
    a1[1] = v18;
    a1[2] = a3;
    return (_WORD *)sub_14002F910((char *)v26 + 8);
  }
  else
  {
    nullsub_1(v8);
    result = (_WORD *)sub_140001650(2, 1);
    if ( !result )
      sub_141938D2B(1, 2);
    *result = 32123;
    *a1 = 2;
    a1[1] = (signed __int64)result;
    a1[2] = 2;
  }
  return result;
}
