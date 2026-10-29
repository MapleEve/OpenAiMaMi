// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140dbc550 | name sub_140DBC550
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DBC550(__int64 *a1, const __m128i *a2, signed __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r12
  const __m128i *v10; // r15
  __m128i *v11; // rax
  __int64 v13; // rdx
  __int8 *v14; // rcx
  const __m128i *v15; // rax
  const __m128i *v16; // r8
  __int64 v17; // r10
  __int64 v18; // rdi
  __int64 v20; // r11
  char v22; // bl
  unsigned __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // r9
  __int64 v26; // rdi
  char v27; // r9
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rcx
  char v33; // cl
  const __m128i *v34; // rbx
  const __m128i *v35; // rbx
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // r11
  __int64 v40; // rsi
  char v41; // cl
  _QWORD v42[3]; // [rsp+20h] [rbp-50h] BYREF
  const __m128i *v43; // [rsp+38h] [rbp-38h]
  unsigned __int64 v44; // [rsp+40h] [rbp-30h]
  _QWORD v45[3]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v46; // [rsp+60h] [rbp-10h]
  int v47; // [rsp+6Ch] [rbp-4h]
  __int64 v48; // [rsp+70h] [rbp+0h]

  v48 = -2;
  v6 = *a1;
  LOBYTE(a1) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v6 + 16), 1, 0) )
  {
    v34 = a2;
    sub_141937480((volatile void *)(v6 + 16));
    a2 = v34;
  }
  v7 = off_1421E7210;
  if ( 2 * *off_1421E7210 )
  {
    v35 = a2;
    v36 = sub_141938160(a1);
    a2 = v35;
    LOBYTE(v36) = v36 ^ 1;
    v47 = v36;
  }
  else
  {
    v47 = 0;
  }
  v8 = v6 + 24;
  v46 = v6;
  if ( a3 < 0 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v10 = a2;
    nullsub_1(a1);
    v9 = 1;
    v11 = (__m128i *)sub_140001650(a3, 1);
    if ( !v11 )
LABEL_7:
      sub_141938D2B(v9, a3);
    _R14 = (__int64)v11;
    sub_1418F44E0(v11, v10, a3);
  }
  else
  {
    _R14 = 1;
  }
  v45[0] = a3;
  v45[1] = _R14;
  v45[2] = a3;
  sub_1403A3820(v42, v8, v45);
  v13 = v42[0];
  v14 = (__int8 *)v42[1];
  if ( v42[0] != -1 )
  {
    v15 = v43;
    v16 = (const __m128i *)v43->m128i_i64[0];
    v17 = v43->m128i_i64[1];
    v18 = v44 & v17;
    _EBX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)(v43->m128i_i64[0] + (v44 & v17))));
    if ( !_EBX )
    {
      v38 = 16;
      do
      {
        v18 = v17 & (v38 + v18);
        _EBX = _mm_movemask_epi8(_mm_loadu_si128((const __m128i *)((char *)v16 + v18)));
        v38 += 16;
      }
      while ( !_EBX );
    }
    v20 = v42[2];
    __asm { tzcnt   r14d, ebx }
    _R14 = v17 & (v18 + _R14);
    v22 = v16->m128i_i8[_R14];
    if ( v22 >= 0 )
    {
      _EDI = _mm_movemask_epi8(_mm_load_si128(v16));
      __asm { tzcnt   r14d, edi }
      v22 = v16->m128i_i8[_R14];
    }
    v23 = v44 >> 57;
    v16->m128i_i8[_R14] = v44 >> 57;
    v16[1].m128i_i8[v17 & (_R14 - 16)] = v23;
    v24 = -_R14;
    v25 = 5 * v24;
    *((_QWORD *)&v16[-2] + v25 - 1) = v13;
    v16[-2].m128i_i64[v25] = (__int64)v14;
    v14 = &v16->m128i_i8[40 * v24];
    *((_QWORD *)&v16[-1] + v25 - 1) = v20;
    v16[-1].m128i_i64[v25] = 0;
    v16->m128i_i32[2 * v25 - 2] = 0;
    v15[1] = _mm_sub_epi64(
               _mm_loadu_si128(v15 + 1),
               (__m128i)_mm_shuffle_pd((__m128d)_mm_cvtsi32_si128(v22 & 1), (__m128d)xmmword_1419D3560, 2));
  }
  v26 = v46;
  v27 = v47;
  v28 = -1;
  if ( *((_DWORD *)v14 - 2) != -1 )
    v28 = *((_DWORD *)v14 - 2) + 1;
  v29 = 300000;
  if ( v28 == 2 )
    v29 = 30000;
  v30 = 5000;
  if ( v28 != 1 )
    v30 = v29;
  *((_DWORD *)v14 - 2) = v28;
  result = a4 + v30;
  *((_QWORD *)v14 - 2) = result;
  if ( !v27 )
  {
    v32 = 2 * *v7;
    if ( v32 )
    {
      v40 = result;
      v41 = sub_141938160(v32);
      result = v40;
      if ( !v41 )
        *(_BYTE *)(v26 + 17) = 1;
    }
  }
  v33 = *(_BYTE *)(v26 + 16);
  *(_BYTE *)(v26 + 16) = 0;
  if ( v33 == 2 )
  {
    v37 = result;
    WakeByAddressSingle((PVOID)(v26 + 16));
    return v37;
  }
  return result;
}
