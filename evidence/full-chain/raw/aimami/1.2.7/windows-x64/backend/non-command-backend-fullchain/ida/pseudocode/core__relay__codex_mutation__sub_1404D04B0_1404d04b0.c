// win 1.2.7 | module src/core/relay/codex_mutation.rs | ea 0x1404d04b0 | name sub_1404D04B0
__m128i *__fastcall sub_1404D04B0(__m128i *a1, const __m128i *a2, volatile signed __int64 *a3)
{
  __m128i *v4; // rsi
  __int8 *v5; // r14
  __int64 *v6; // rdi
  int v7; // eax
  const __m128i *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __m128i si128; // xmm0
  __m128i v14; // xmm2
  __int64 v15; // rdx
  __m128i v16; // xmm3
  _QWORD *v18; // rax
  __int64 v19; // rax
  void (__fastcall **v20)(volatile signed __int64 *); // rdx
  volatile signed __int64 *v21; // rcx
  void (__fastcall *v22)(volatile signed __int64 *); // rdx
  char *v23; // rbx
  char v24; // al
  __int8 v26; // al
  _QWORD v27[2]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Address; // [rsp+40h] [rbp-40h]
  void (__fastcall **v29)(volatile signed __int64 *); // [rsp+48h] [rbp-38h]
  __m128i v30; // [rsp+50h] [rbp-30h] BYREF
  int v31; // [rsp+6Ch] [rbp-14h]
  volatile signed __int64 *v32; // [rsp+70h] [rbp-10h] BYREF
  const __m128i *v33; // [rsp+78h] [rbp-8h]
  volatile signed __int64 *v34; // [rsp+80h] [rbp+0h]
  char v35; // [rsp+8Fh] [rbp+Fh]
  __int64 v36; // [rsp+90h] [rbp+10h]

  v36 = -2;
  v4 = a1;
  v27[0] = aCodexmateLibCo;
  v27[1] = 61;
  v5 = &a2[17].m128i_i8[8];
  v32 = a3;
  LOBYTE(a1) = 1;
  v33 = a2;
  if ( _InterlockedCompareExchange8(&a2[17].m128i_i8[8], 1, 0) )
  {
    v35 = 1;
    sub_141937480(&a2[17].m128i_u64[1]);
  }
  v6 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v7 = 0;
    v8 = v33;
    v9 = v33[17].m128i_u8[9];
    if ( !(_BYTE)v9 )
      goto LABEL_5;
LABEL_31:
    v30.m128i_i64[0] = (__int64)v5;
    v30.m128i_i8[8] = v7;
    sub_141939040(
      (unsigned int)aCalledResultUn_8,
      43,
      (unsigned int)&v30,
      (unsigned int)&off_141A11358,
      (__int64)&off_141A0B518);
  }
  v35 = 1;
  v7 = sub_141938160(a1);
  LOBYTE(v7) = v7 ^ 1;
  v8 = v33;
  v9 = v33[17].m128i_u8[9];
  if ( (_BYTE)v9 )
    goto LABEL_31;
LABEL_5:
  if ( v8[19].m128i_i64[1] )
  {
    v10 = v8[18].m128i_i64[0];
    v9 = v8[18].m128i_i64[1];
    v11 = 0x719E9AF3DC16BC48LL;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A08300);
    v14 = _mm_load_si128((const __m128i *)&xmmword_141A08310);
    while ( 1 )
    {
      v15 = v9 & v11;
      v16 = _mm_loadu_si128((const __m128i *)(v10 + v15));
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v16, si128));
      if ( _R9D )
      {
        do
        {
          __asm { tzcnt   r10d, r9d }
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v10 - 32 * (v9 & (v15 + _R10)) - 32)), v14)) == 0xFFFF )
          {
            if ( !(_BYTE)v7 )
            {
              if ( 2 * *v6 )
              {
                v35 = 1;
                if ( !(unsigned __int8)sub_141938160(v9) )
                  v33[17].m128i_i8[9] = 1;
              }
            }
            v26 = *v5;
            *v5 = 0;
            if ( v26 == 2 )
            {
              v35 = 1;
              WakeByAddressSingle(v5);
            }
            if ( !_InterlockedDecrement64(v32) )
              sub_1409E3900(&v32, v15, v12);
            v30.m128i_i64[0] = (__int64)v27;
            v30.m128i_i64[1] = (__int64)sub_140186EE0;
            sub_1419392A0(&unk_141A0BAA4, &v30, &off_141A0BAD8);
          }
          _R10 = (unsigned int)(_R9D - 1);
          LOWORD(_R10) = _R9D & (_R9D - 1);
          _R9D = _R10;
        }
        while ( (_WORD)_R10 );
      }
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v16, (__m128i)-1LL)) )
        break;
      v11 = v12 + v15 + 16;
      v12 += 16;
    }
  }
  v31 = v7;
  Address = v5;
  v30.m128i_i64[0] = (__int64)v32;
  nullsub_1(v9);
  v18 = (_QWORD *)sub_140001650(8, 8);
  if ( !v18 )
  {
    v34 = v32;
    sub_141938D11(8, 8);
  }
  *v18 = v32;
  v30 = _mm_loadu_si128((const __m128i *)&xmmword_141A0B7A0);
  v19 = sub_1403A5D60(&v8[18], &v30, v18, &off_141A0B7B0);
  if ( v19 )
  {
    v34 = (volatile signed __int64 *)v19;
    v29 = v20;
    if ( *v20 )
      (*v20)(v34);
    v22 = v29[1];
    v21 = v34;
    if ( v22 )
      sub_140001660(v34, v22, v29[2]);
  }
  v23 = (char *)Address;
  if ( !(_BYTE)v31 )
  {
    if ( 2 * *v6 )
    {
      v35 = 0;
      if ( !(unsigned __int8)sub_141938160(v21) )
        v33[17].m128i_i8[9] = 1;
    }
  }
  v24 = *v23;
  *v23 = 0;
  if ( v24 == 2 )
  {
    v35 = 0;
    WakeByAddressSingle(v23);
  }
  sub_1418F44E0(v4, v33, 0x158u);
  return v4;
}
