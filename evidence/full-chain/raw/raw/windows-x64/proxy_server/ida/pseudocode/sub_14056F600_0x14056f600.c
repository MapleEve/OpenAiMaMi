// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14056f600
// name: sub_14056F600
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14056F600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __m128i v14; // xmm0
  __m128i v15; // xmm6
  __int64 (__fastcall *i)(); // rdx
  unsigned __int64 v17; // rax
  __m128i v18; // xmm8
  __int64 v20; // rsi
  int v21; // eax
  bool v22; // zf
  unsigned __int64 v23; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  unsigned int v27; // r14d
  __int64 j; // r8
  unsigned __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v32; // r10
  unsigned int v33; // r14d
  int v34; // eax
  __int64 v35; // rdi
  __m128i *v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v42; // rdx
  _BYTE v43[360]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v44[45]; // [rsp+1A0h] [rbp+120h] BYREF
  _DWORD v45[4]; // [rsp+308h] [rbp+288h] BYREF
  __m128i *v46; // [rsp+318h] [rbp+298h]
  void (__fastcall **v47)(__m128i *); // [rsp+320h] [rbp+2A0h]
  __m128i v48; // [rsp+470h] [rbp+3F0h] BYREF
  __m128i *v49; // [rsp+480h] [rbp+400h]
  void (__fastcall **v50)(__m128i *); // [rsp+488h] [rbp+408h]
  __int64 v51; // [rsp+5E0h] [rbp+560h] BYREF
  __int64 v52; // [rsp+5E8h] [rbp+568h]
  __m128i *v53; // [rsp+5F0h] [rbp+570h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+5F8h] [rbp+578h]
  _BYTE v55[32]; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v56; // [rsp+768h] [rbp+6E8h] BYREF
  __int64 v57; // [rsp+770h] [rbp+6F0h]
  __int64 v58; // [rsp+780h] [rbp+700h]
  __m128i v59; // [rsp+788h] [rbp+708h] BYREF
  __int64 v60; // [rsp+798h] [rbp+718h] BYREF
  int v61; // [rsp+7A0h] [rbp+720h]
  __m128i v62; // [rsp+7F0h] [rbp+770h] BYREF
  __m128i *v63; // [rsp+800h] [rbp+780h]
  _QWORD v64[2]; // [rsp+808h] [rbp+788h] BYREF
  __int64 v65; // [rsp+818h] [rbp+798h]
  __m128i *v66; // [rsp+820h] [rbp+7A0h]
  __int64 (__fastcall *v67)(); // [rsp+828h] [rbp+7A8h]
  char v68; // [rsp+834h] [rbp+7B4h]
  char v69; // [rsp+835h] [rbp+7B5h]
  char v70; // [rsp+836h] [rbp+7B6h]
  char v71; // [rsp+837h] [rbp+7B7h]
  __int64 v72; // [rsp+838h] [rbp+7B8h]

  v72 = -2;
  v65 = a4;
  v68 = 1;
  sub_14056F2B0((__int64)v55, a1);
  sub_141684120(v43, v65, 360);
  v71 = 1;
  v8 = sub_140FA36F0(a2, a3);
  if ( v8 )
  {
    v36 = v7;
    v69 = 1;
    sub_1404FC6D0(v43);
    v35 = -1;
    goto LABEL_48;
  }
  v9 = v60;
  if ( !*(_QWORD *)(v60 + 200) )
    goto LABEL_22;
  v10 = sub_1403795A0(v60 + 208, a2, a3);
  _RCX = v10 >> 57;
  v12 = *(_QWORD *)(v9 + 176);
  v13 = *(_QWORD *)(v9 + 184);
  v14 = _mm_cvtsi32_si128(v10 >> 57);
  v15 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v14, v14), 0), 68);
  for ( i = nullptr; ; i = (__int64 (__fastcall *)())((char *)i + 16) )
  {
    v17 = v13 & v10;
    v18 = _mm_loadu_si128((const __m128i *)(v12 + v17));
    _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v18, v15));
    if ( _R13D )
      break;
LABEL_9:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v18, (__m128i)-1LL));
    if ( (_DWORD)_RCX )
      goto LABEL_22;
    v10 = (unsigned __int64)i + v17 + 16;
  }
  v66 = (__m128i *)v17;
  v67 = i;
  while ( 1 )
  {
    __asm { tzcnt   ecx, r13d }
    _RCX = -(__int64)(v13 & (v17 + _RCX));
    if ( a3 == *(_QWORD *)(v12 + 24 * _RCX - 16) )
    {
      v20 = v12 + 24 * _RCX;
      if ( !(unsigned int)sub_1416847B0(a2, *(_QWORD *)(v20 - 24) + 16LL, a3) )
        break;
    }
    v21 = _R13D - 1;
    LOWORD(v21) = _R13D & (_R13D - 1);
    v22 = (_WORD)v21 == 0;
    _R13D = v21;
    v17 = (unsigned __int64)v66;
    i = v67;
    if ( v22 )
      goto LABEL_9;
  }
  if ( !v58 )
    goto LABEL_22;
  v23 = sub_140378990(&v59, (int *)(v20 - 8));
  v25 = _mm_cvtsi32_si128(v23 >> 57);
  v26 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 0), 68);
  v27 = *(_DWORD *)(v20 - 8);
  for ( j = 0; ; j += 16 )
  {
    v29 = v57 & v23;
    v30 = _mm_loadu_si128((const __m128i *)(v56 + v29));
    _R9D = _mm_movemask_epi8(_mm_cmpeq_epi8(v30, v26));
    if ( _R9D )
      break;
LABEL_16:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v30, (__m128i)-1LL)) )
      goto LABEL_22;
    v23 = j + v29 + 16;
  }
  while ( 1 )
  {
    __asm { tzcnt   r10d, r9d }
    v32 = -368LL * (v57 & (v29 + _R10));
    if ( v27 == *(_DWORD *)(v56 + v32 - 368) )
      break;
    _R10 = (unsigned int)(_R9D - 1);
    LOWORD(_R10) = _R9D & (_R9D - 1);
    _R9D = _R10;
    if ( !(_WORD)_R10 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v32 + v56 - 360) == -1 )
  {
LABEL_22:
    sub_141684120(v45, v43, 360);
    if ( v61 == -1 )
    {
      v70 = 1;
      sub_1416C3000(aOverU32MaxRout, 71, &off_141761800);
    }
    v33 = ++v61;
    v64[0] = a2;
    v64[1] = a3;
    v70 = 1;
    v34 = sub_140570DC0(&v60);
    v70 = 1;
    sub_1404F3410((unsigned int)&v62, v34, a2, a3, v33);
    if ( v62.m128i_i64[0] == -1 )
      goto LABEL_29;
    v49 = v63;
    v48 = _mm_loadu_si128(&v62);
    v51 = (__int64)v64;
    v52 = (__int64)sub_14041F4E0;
    v53 = &v48;
    v54 = sub_140FADBC0;
    sub_14149C0F0(v44, &unk_141760BB0, &v51);
    if ( v48.m128i_i64[0] > 0 )
      sub_140001660(v48.m128i_i64[1], v48.m128i_i64[0], 1);
    v35 = v44[0];
    if ( v44[0] == -1 )
    {
LABEL_29:
      sub_141684120(&v51, v45, 360);
      v70 = 0;
      sub_1404746E0(&v48, &v56, v33, &v51);
      if ( v48.m128i_i64[0] == -2 )
        goto LABEL_37;
      if ( v48.m128i_i32[0] != -1 )
      {
        v70 = 0;
        sub_1404FC6D0(&v48);
        goto LABEL_37;
      }
      v66 = v49;
      v67 = (__int64 (__fastcall *)())v50;
      if ( *v50 )
        (*v50)(v66);
      goto LABEL_41;
    }
    v8 = v44[1];
    v36 = (__m128i *)v44[2];
    if ( v45[0] == -1 )
    {
      v66 = v46;
      v67 = (__int64 (__fastcall *)())v47;
      if ( *v47 )
        (*v47)(v66);
      v37 = *((_QWORD *)v67 + 1);
      if ( v37 )
        sub_140001660(v66, v37, *((_QWORD *)v67 + 2));
    }
    else
    {
      v71 = 0;
      sub_1404FC6D0(v45);
    }
    if ( v35 == -2 )
      goto LABEL_37;
LABEL_48:
    v51 = v35;
    v52 = v8;
    v53 = v36;
    v48.m128i_i64[0] = (__int64)&v51;
    v48.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_1416C32C0(&unk_141760212, &v48, a5);
  }
  v71 = 1;
  sub_140B99800(&v48, v32 + v56 - 360, j);
  sub_141684120(&v51, v43, 360);
  v71 = 0;
  sub_140B8FF70((unsigned int)v44, (unsigned int)&v48, a2, a3, (__int64)&v51, (__int64)&off_141761818);
  sub_141684120(&v48, v44, 360);
  v71 = 0;
  sub_1404746E0(&v51, &v56, v27, &v48);
  if ( v51 == -2 )
    goto LABEL_37;
  if ( (_DWORD)v51 != -1 )
  {
    v71 = 0;
    sub_1404FC6D0(&v51);
    goto LABEL_37;
  }
  v66 = v53;
  v67 = v54;
  if ( *(_QWORD *)v54 )
    (*(void (__fastcall **)(__m128i *))v54)(v66);
LABEL_41:
  v42 = *((_QWORD *)v67 + 1);
  if ( v42 )
    sub_140001660(v66, v42, *((_QWORD *)v67 + 2));
LABEL_37:
  sub_141684120(&v53, v55, 168);
  v51 = 1;
  v52 = 1;
  nullsub_1(v38);
  v39 = sub_140001650(184, 8);
  if ( !v39 )
    sub_1416C2D31(8, 184);
  v40 = v39;
  sub_141684120(v39, &v51, 184);
  return v40;
}