// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140247b30 | name sub_140247B30
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140247B30(__int64 a1, _QWORD *a2, unsigned __int64 a3, const __m128i *a4, unsigned __int64 a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rbx
  _QWORD *v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rcx
  _QWORD *v19; // rsi
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __m128i v25[11]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v26[11]; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v27; // [rsp+188h] [rbp+108h] BYREF
  __int128 v28; // [rsp+190h] [rbp+110h]
  __int128 v29; // [rsp+1A0h] [rbp+120h]
  __int128 v30; // [rsp+1B0h] [rbp+130h]
  __int128 v31; // [rsp+1C0h] [rbp+140h]
  __int128 v32; // [rsp+1D0h] [rbp+150h]
  __int128 v33; // [rsp+1E0h] [rbp+160h]
  __m128i v34; // [rsp+330h] [rbp+2B0h] BYREF
  _QWORD *v35; // [rsp+340h] [rbp+2C0h]
  _BYTE v36[96]; // [rsp+348h] [rbp+2C8h] BYREF
  __int64 v37; // [rsp+4E0h] [rbp+460h]
  _QWORD *v38; // [rsp+4E8h] [rbp+468h]
  _QWORD *v39; // [rsp+4F0h] [rbp+470h]
  __m128i v40; // [rsp+4F8h] [rbp+478h] BYREF
  _QWORD *v41; // [rsp+508h] [rbp+488h]
  __int128 v42; // [rsp+510h] [rbp+490h] BYREF
  _QWORD *v43; // [rsp+520h] [rbp+4A0h]
  _QWORD *v44; // [rsp+528h] [rbp+4A8h]
  _QWORD *v45; // [rsp+530h] [rbp+4B0h]
  char v46; // [rsp+53Fh] [rbp+4BFh]
  __int64 v47; // [rsp+540h] [rbp+4C0h]

  v47 = -2;
  v5 = 424 * a3;
  if ( a3 > 0x4D4873ECADE304LL )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = a1;
  if ( v5 )
  {
    v10 = a2;
    v11 = a3;
    nullsub_1(a1);
    v6 = 8;
    v12 = sub_140001650(v5, 8);
    if ( !v12 )
LABEL_3:
      sub_141938D2B(v6, v5);
    a3 = v11;
    v13 = v11;
    a2 = v10;
    v8 = a1;
  }
  else
  {
    v12 = 8;
    v13 = 0;
  }
  *(_QWORD *)&v42 = v13;
  *((_QWORD *)&v42 + 1) = v12;
  v43 = nullptr;
  v40.m128i_i64[0] = 0;
  v40.m128i_i64[1] = 8;
  v41 = nullptr;
  v39 = &a2[13 * a3];
  while ( 1 )
  {
    v44 = a2;
    if ( a2 == v39 )
      break;
    sub_140242C40((__int64)&v27, a2, a4, a5);
    if ( v27 == -1 )
    {
      *(_OWORD *)&v36[80] = v33;
      *(_OWORD *)&v36[64] = v32;
      *(_OWORD *)&v36[48] = v31;
      *(_OWORD *)&v36[32] = v30;
      *(_OWORD *)&v36[16] = v29;
      *(_OWORD *)v36 = v28;
      v35 = v41;
      v34 = v40;
      *(__m128i *)v8 = v40;
      *(_QWORD *)(v8 + 112) = *(_QWORD *)&v36[88];
      *(_OWORD *)(v8 + 32) = *(_OWORD *)&v36[8];
      *(_QWORD *)(v8 + 16) = v35;
      *(_QWORD *)(v8 + 24) = *(_QWORD *)v36;
      *(_OWORD *)(v8 + 96) = *(_OWORD *)&v36[72];
      *(_OWORD *)(v8 + 80) = *(_OWORD *)&v36[56];
      *(_OWORD *)(v8 + 48) = *(_OWORD *)&v36[24];
      *(_OWORD *)(v8 + 64) = *(_OWORD *)&v36[40];
      v23 = *((_QWORD *)&v42 + 1);
      v44 = v43;
      v45 = nullptr;
      v39 = *((_QWORD **)&v42 + 1);
      while ( v44 != v45 )
      {
        v45 = (_QWORD *)((char *)v45 + 1);
        v24 = v23 + 424;
        sub_14038CC60();
        v23 = v24;
      }
      result = v42;
      if ( (_QWORD)v42 )
      {
        v21 = *((_QWORD *)&v42 + 1);
        v22 = 424 * v42;
        return sub_140001660(v21, v22, 8);
      }
      return result;
    }
    sub_1418F44E0(&v34, (const __m128i *)&v27, 0x1A8u);
    if ( *(_QWORD *)v36 != -1 )
    {
      v46 = 1;
      sub_140284530(v25, v36);
      sub_1418F44E0(v26, v25, 0xB0u);
      v15 = (__int64)v41;
      if ( v41 == (_QWORD *)v40.m128i_i64[0] )
        sub_14190FFF0(&v40);
      sub_1418F44E0((__m128i *)(v40.m128i_i64[1] + 176 * v15), v26, 0xB0u);
      v41 = (_QWORD *)(v15 + 1);
    }
    v16 = v8;
    v17 = (__int64)v43;
    if ( v43 == (_QWORD *)v42 )
      sub_14190F880(&v42);
    v14 = v44 + 13;
    sub_1418F44E0((__m128i *)(*((_QWORD *)&v42 + 1) + 424 * v17), &v34, 0x1A8u);
    v43 = (_QWORD *)(v17 + 1);
    a2 = v14;
    v8 = v16;
  }
  *(_QWORD *)(v8 + 16) = v43;
  *(_OWORD *)v8 = v42;
  *(_QWORD *)(v8 + 24) = -1;
  v18 = (_QWORD *)v40.m128i_i64[1];
  v38 = v41;
  v45 = nullptr;
  v37 = v40.m128i_i64[1];
  while ( v38 != v45 )
  {
    v45 = (_QWORD *)((char *)v45 + 1);
    v19 = v18 + 22;
    sub_140196740(v18);
    v18 = v19;
  }
  result = v40.m128i_i64[0];
  if ( v40.m128i_i64[0] )
  {
    v21 = v40.m128i_i64[1];
    v22 = 176 * v40.m128i_i64[0];
    return sub_140001660(v21, v22, 8);
  }
  return result;
}
