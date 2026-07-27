// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14067c640
// name: sub_14067C640
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_OWORD *__fastcall sub_14067C640(_OWORD *a1, const __m128i **a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  unsigned __int128 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  _OWORD *result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  const __m128i *v15; // rdi
  const __m128i *v17; // r12
  unsigned __int64 v19; // r8
  const __m128i *v20; // rbx
  __int64 v21; // rsi
  __m128i si128; // xmm0
  __int64 v23; // r13
  const __m128i *v24; // r13
  __int64 v25; // rcx
  __m128i v26; // xmm0
  __int128 v27; // xmm1
  unsigned __int64 v28; // rdx
  __m128i v30; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v31[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-28h]
  _OWORD *v33; // [rsp+60h] [rbp-20h]
  const __m128i **v34; // [rsp+68h] [rbp-18h]
  const __m128i *v35; // [rsp+70h] [rbp-10h]
  __int128 v36; // [rsp+78h] [rbp-8h]
  unsigned __int64 v37; // [rsp+88h] [rbp+8h]
  const __m128i *v38; // [rsp+90h] [rbp+10h]
  unsigned __int64 v39; // [rsp+98h] [rbp+18h]
  __int64 v40; // [rsp+A0h] [rbp+20h]

  v40 = -2;
  v2 = (unsigned __int64)a2[1];
  if ( !v2 )
  {
    a1[1] = xmmword_1417664A0;
    *a1 = *(_OWORD *)&off_141766490;
    return a1;
  }
  v33 = a1;
  v4 = 48;
  v5 = 0x30 * (unsigned __int128)(v2 + 1);
  if ( is_mul_ok(0x30u, v2 + 1) )
  {
    v6 = v2 + 17;
    v7 = v2 + 17 + v5;
    v4 = 0x7FFFFFFFFFFFFFF0LL;
    LOBYTE(v4) = __CFADD__(v2 + 17, (_QWORD)v5) || v7 > 0x7FFFFFFFFFFFFFF0LL;
    if ( !(_BYTE)v4 )
    {
      if ( v7 )
      {
        nullsub_1(v4);
        v13 = sub_140001650(v7, 16);
        v6 = v2 + 17;
        if ( !v13 )
        {
          LOBYTE(v14) = 1;
          v8 = sub_141499B70(v14, 16, v7);
          goto LABEL_5;
        }
      }
      else
      {
        v13 = 16;
      }
      v11 = v13 + 48 * (v2 + 1);
      v10 = ((v2 + 1) & 0xFFFFFFFFFFFFFFF8uLL) - ((v2 + 1) >> 3);
      if ( v2 < 8 )
        v10 = v2;
      goto LABEL_13;
    }
  }
  LOBYTE(v4) = 1;
  v8 = sub_141499B40(v4, *((_QWORD *)&v5 + 1));
LABEL_5:
  v2 = v8;
  v10 = v9;
  v6 = v8 + 17;
  v11 = 0;
LABEL_13:
  v39 = v11;
  *(_QWORD *)&v36 = v11;
  *((_QWORD *)&v36 + 1) = v2;
  v37 = v10;
  v38 = nullptr;
  v15 = *a2;
  sub_141684120(v11, *a2, v6);
  v17 = v15 + 1;
  _R14D = ~_mm_movemask_epi8(_mm_load_si128(v15));
  v34 = a2;
  v19 = 0;
  v20 = v15;
  v35 = a2[3];
  v21 = (__int64)&v35[-1].m128i_i64[1] + 7;
  if ( v35 )
  {
    do
    {
      v32 = v19;
      if ( !(_WORD)_R14D )
      {
        do
        {
          si128 = _mm_load_si128(v17);
          v20 -= 48;
          ++v17;
          _R14D = _mm_movemask_epi8(si128) ^ 0xFFFF;
        }
        while ( !_R14D );
      }
      __asm { tzcnt   eax, r14d }
      v23 = -3 * _RAX;
      sub_14149C500(&v30, &v20[-3 * _RAX - 3]);
      v24 = &v20[v23];
      sub_14149C500((char *)v31 + 8, &v24[-2].m128i_u64[1]);
      _RAX = _R14D & (unsigned int)(_R14D - 1);
      v25 = -16 * (v15 - v24);
      v26 = _mm_loadu_si128(&v30);
      v27 = v31[0];
      v28 = v39;
      *(_OWORD *)(v39 + v25 - 16) = v31[1];
      *(_OWORD *)(v28 + v25 - 32) = v27;
      *(__m128i *)(v28 + v25 - 48) = v26;
      v19 = 0xAAAAAAAAAAAAAAABuLL * (v15 - v24) + 1;
      _R14D &= _R14D - 1;
    }
    while ( v21-- != 0 );
  }
  v38 = v35;
  v37 = (unsigned __int64)v34[2];
  result = v33;
  *v33 = v36;
  *((_QWORD *)result + 2) = v37;
  *((_QWORD *)result + 3) = v38;
  return result;
}