// win 1.2.7 latest-exe | module src/core/relay/codex_mutation.rs | ea 0x14050f910 | successor of pre-update 0x1404d04b0 | session <审计会话>
// match evidence: {"body_sim": 0.852, "str_ov": 0, "anchor": 0.655, "conf": false, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_14050F910(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  __int64 v4; // rsi
  char *v5; // r14
  __int64 *v6; // rdi
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __m128i si128; // xmm0
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  _QWORD *v17; // rax
  __int64 v18; // rax
  void (__fastcall **v19)(volatile signed __int64 *); // rdx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // r8
  char *v22; // rbx
  char v23; // al
  char v25; // al
  _QWORD v26[2]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Address; // [rsp+40h] [rbp-40h]
  void (__fastcall **v28)(volatile signed __int64 *); // [rsp+48h] [rbp-38h]
  __m128i v29; // [rsp+50h] [rbp-30h] BYREF
  int v30; // [rsp+6Ch] [rbp-14h]
  volatile signed __int64 *v31; // [rsp+70h] [rbp-10h] BYREF
  __int64 v32; // [rsp+78h] [rbp-8h]
  volatile signed __int64 *v33; // [rsp+80h] [rbp+0h]
  char v34; // [rsp+8Fh] [rbp+Fh]
  __int64 v35; // [rsp+90h] [rbp+10h]

  v35 = -2;
  v4 = a1;
  v26[0] = aCodexmateLibCo;
  v26[1] = 61;
  v5 = (char *)(a2 + 280);
  v31 = a3;
  LOBYTE(a1) = 1;
  v32 = a2;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 280), 1, 0) )
  {
    v34 = 1;
    sub_141969A30((volatile void *)(a2 + 280));
  }
  v6 = off_142240260;
  if ( !(2 * *off_142240260) )
  {
    v7 = 0;
    v8 = (_QWORD *)v32;
    v9 = *(unsigned __int8 *)(v32 + 281);
    if ( !(_BYTE)v9 )
      goto LABEL_5;
LABEL_31:
    v29.m128i_i64[0] = (__int64)v5;
    v29.m128i_i8[8] = v7;
    sub_14196B5F0(
      (unsigned int)aCalledResultUn_5,
      43,
      (unsigned int)&v29,
      (unsigned int)&off_141A2CB18,
      (__int64)&off_141A25AE0);
  }
  v34 = 1;
  v7 = sub_14196A710(a1, a2, a3);
  LOBYTE(v7) = v7 ^ 1;
  v8 = (_QWORD *)v32;
  v9 = *(unsigned __int8 *)(v32 + 281);
  if ( (_BYTE)v9 )
    goto LABEL_31;
LABEL_5:
  if ( v8[39] )
  {
    v10 = v8[36];
    v9 = v8[37];
    v11 = 0x4920A1AF6580B947LL;
    v12 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A22350);
    v14 = _mm_load_si128((const __m128i *)&xmmword_141A22360);
    while ( 1 )
    {
      a2 = v9 & v11;
      v15 = _mm_loadu_si128((const __m128i *)(v10 + a2));
      _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, si128));
      if ( _R9D )
      {
        do
        {
          __asm { tzcnt   r10d, r9d }
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v10 - 32 * (v9 & (a2 + _R10)) - 32)), v14)) == 0xFFFF )
          {
            if ( !(_BYTE)v7 )
            {
              if ( 2 * *v6 )
              {
                v34 = 1;
                if ( !(unsigned __int8)sub_14196A710(v9, a2, v12) )
                  *(_BYTE *)(v32 + 281) = 1;
              }
            }
            v25 = *v5;
            *v5 = 0;
            if ( v25 == 2 )
            {
              v34 = 1;
              WakeByAddressSingle(v5);
            }
            if ( !_InterlockedDecrement64(v31) )
              sub_140CA3110(&v31);
            v29.m128i_i64[0] = (__int64)v26;
            v29.m128i_i64[1] = (__int64)sub_140191200;
            sub_14196B850(&unk_141A2649C, &v29, &off_141A264D0);
          }
          _R10 = (unsigned int)(_R9D - 1);
          LOWORD(_R10) = _R9D & (_R9D - 1);
          _R9D = _R10;
        }
        while ( (_WORD)_R10 );
      }
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)-1LL)) )
        break;
      v11 = v12 + a2 + 16;
      v12 += 16;
    }
  }
  v30 = v7;
  Address = v5;
  v29.m128i_i64[0] = (__int64)v31;
  nullsub_1(v9, a2);
  v17 = (_QWORD *)sub_140001650(8, 8);
  if ( !v17 )
  {
    v33 = v31;
    sub_14196B2C1(8, 8);
  }
  *v17 = v31;
  v29 = _mm_loadu_si128((const __m128i *)&xmmword_141A25D68);
  v18 = sub_14086C040(v8 + 36, &v29, v17, &off_141A25D78);
  if ( v18 )
  {
    v33 = (volatile signed __int64 *)v18;
    v28 = v19;
    if ( *v19 )
      (*v19)(v33);
    v19 = (void (__fastcall **)(volatile signed __int64 *))v28[1];
    v20 = v33;
    if ( v19 )
      sub_140001660(v33, v19, v28[2]);
  }
  v22 = (char *)Address;
  if ( !(_BYTE)v30 )
  {
    if ( 2 * *v6 )
    {
      v34 = 0;
      if ( !(unsigned __int8)sub_14196A710(v20, v19, v21) )
        *(_BYTE *)(v32 + 281) = 1;
    }
  }
  v23 = *v22;
  *v22 = 0;
  if ( v23 == 2 )
  {
    v34 = 0;
    WakeByAddressSingle(v22);
  }
  sub_1419234B0(v4, v32, 344);
  return v4;
}
