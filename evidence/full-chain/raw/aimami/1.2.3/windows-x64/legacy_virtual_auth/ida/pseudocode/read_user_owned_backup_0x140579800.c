// module: codexmate_lib/core/relay/legacy_virtual_auth
// addr: 0x140579800
// name: read_user_owned_backup
// win 1.2.1 | module src/core/relay/legacy_virtual_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_user_owned_backup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int128 v8; // xmm6
  __int64 v9; // rdi
  __int64 result; // rax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __m128i v18; // [rsp+50h] [rbp-30h]
  const __m128i *v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+68h] [rbp-18h]
  __int128 v21; // [rsp+78h] [rbp-8h]
  __int128 v22; // [rsp+88h] [rbp+8h]
  __int128 v23; // [rsp+98h] [rbp+18h]
  __int128 v24; // [rsp+A8h] [rbp+28h]
  __int128 v25; // [rsp+B8h] [rbp+38h]
  __int128 v26; // [rsp+C8h] [rbp+48h]
  __int128 v27; // [rsp+D8h] [rbp+58h]
  __int64 v28; // [rsp+E8h] [rbp+68h]
  __int128 v29; // [rsp+F0h] [rbp+70h] BYREF
  __m128i v30; // [rsp+100h] [rbp+80h]
  const __m128i *v31; // [rsp+110h] [rbp+90h]
  __int128 v32; // [rsp+118h] [rbp+98h]
  __int128 v33; // [rsp+128h] [rbp+A8h]
  __int128 v34; // [rsp+138h] [rbp+B8h]
  __int128 v35; // [rsp+148h] [rbp+C8h]
  __int128 v36; // [rsp+158h] [rbp+D8h]
  __int128 v37; // [rsp+168h] [rbp+E8h]
  __int128 v38; // [rsp+178h] [rbp+F8h]
  __int128 v39; // [rsp+188h] [rbp+108h]
  __int64 v40; // [rsp+198h] [rbp+118h]
  __m128i v41; // [rsp+1A0h] [rbp+120h] BYREF
  const __m128i *v42; // [rsp+1B0h] [rbp+130h]
  unsigned __int128 v43; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v44; // [rsp+1D0h] [rbp+150h]
  __m128i v45; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v46; // [rsp+1F0h] [rbp+170h]
  _QWORD *v47; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 v48; // [rsp+200h] [rbp+180h]
  _QWORD *v49; // [rsp+208h] [rbp+188h]
  __int64 v50; // [rsp+210h] [rbp+190h]
  __int64 v51; // [rsp+218h] [rbp+198h]

  v51 = -2;
  sub_14148D3C0(&v29, a2, a3);
  if ( (_QWORD)v29 == -1 )
  {
    v45.m128i_i64[0] = *((_QWORD *)&v29 + 1);
    *(_QWORD *)&v43 = &v45;
    *((_QWORD *)&v43 + 1) = sub_141490720;
    sub_14149C0F0(&v17, &unk_141760C44, &v43);
    v8 = v17;
    v9 = v18.m128i_i64[0];
    result = sub_140018650(&v45);
    *(_OWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)a1 = 10;
    return result;
  }
  v50 = v29;
  v4 = v30.m128i_i64[0];
  v48 = *((_QWORD *)&v29 + 1);
  v43 = __PAIR128__(v30.m128i_u64[0], *((unsigned __int64 *)&v29 + 1));
  v44 = 0;
  sub_1408A9B00(&v17, &v43);
  if ( (_QWORD)v17 == -2 )
  {
    v47 = *((_QWORD **)&v17 + 1);
    v45.m128i_i64[0] = (__int64)&v47;
    v45.m128i_i64[1] = (__int64)sub_14142D3F0;
    sub_14149C0F0(&v43, &unk_141760C60, &v45);
    v46 = v44;
    v45 = _mm_loadu_si128((const __m128i *)&v43);
    v5 = *v47;
    v6 = *v47 == 1;
    v49 = v47;
    if ( v6 )
    {
      sub_140018650(v47 + 1);
    }
    else if ( !v5 )
    {
      v7 = v49[2];
      if ( v7 )
        sub_140001660(v49[1], v7, 1);
    }
    sub_140001660(v49, 40, 8);
    v16 = _mm_load_si128(&v45);
    v41 = v16;
    result = v46;
    *(_QWORD *)(a1 + 24) = v46;
    *(__m128i *)(a1 + 8) = v16;
    *(_QWORD *)a1 = 10;
    v14 = v50;
    v15 = v48;
    if ( v50 )
      return sub_140001660(v15, v14, 1);
  }
  else
  {
    v41 = v18;
    v42 = v19;
    v32 = v20;
    v33 = v21;
    v34 = v22;
    v35 = v23;
    v36 = v24;
    v37 = v25;
    v38 = v26;
    v39 = v27;
    v40 = v28;
    v11 = _mm_load_si128(&v41);
    v31 = v19;
    v30 = v11;
    v29 = v17;
    if ( !(unsigned __int8)sub_1403CCAD0(&v29)
      && (v30.m128i_i64[1] == -1
       || (unsigned __int64)v32 <= 0x16
       || _mm_movemask_epi8(
            _mm_and_si128(
              _mm_cmpeq_epi8(_mm_loadu_si128(v31), (__m128i)xmmword_141748DB0),
              _mm_cmpeq_epi8(
                _mm_loadu_si128((const __m128i *)((char *)&v31->m128i_u32[1] + 3)),
                (__m128i)xmmword_141748DA0))) != 0xFFFF)
      && ((unsigned __int8)sub_1403CBE70(&v29) || (unsigned __int8)sub_1403C9270(&v29)) )
    {
      *(_QWORD *)(a1 + 8) = v50;
      *(_QWORD *)(a1 + 16) = v48;
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)a1 = -1;
      return sub_14052D960(&v29);
    }
    nullsub_1(v12);
    v13 = (__m128i *)sub_140001650(63, 1);
    if ( !v13 )
      sub_1416C2D4B(1, 63);
    qmemcpy(&v13[1], "up is not user-owned auth; backup was preserved", 47);
    *v13 = _mm_loadu_si128((const __m128i *)&xmmword_1417623EB);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 63;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 24) = 63;
    result = sub_14052D960(&v29);
    v14 = v50;
    v15 = v48;
    if ( v50 )
      return sub_140001660(v15, v14, 1);
  }
  return result;
}