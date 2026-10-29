// win 1.2.7 | module src/core/sessions/health.rs | ea 0x14035b7d0 | name sub_14035B7D0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14035B7D0(__int64 a1, __int64 a2, const __m128i **a3)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r15
  const __m128i *v10; // rbx
  __m128i *v11; // rax
  __m128i *v12; // rax
  __int128 v14; // xmm0
  __m128i v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 result; // rax
  const __m128i *v20; // rdx
  const __m128i *v21; // r15
  __m128i si128; // xmm0
  const __m128i *v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rdx
  const __m128i *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // r15
  __int64 v30; // r8
  const __m128i *v32; // rdx
  const __m128i *v33; // r15
  int v34; // ebx
  __int64 v35; // r13
  __m128i v36; // xmm0
  const __m128i *v37; // rdi
  const __m128i *v38; // r14
  __int64 v39; // rdx
  int v40; // ebx
  __m128i v41; // xmm0
  __int128 v42; // xmm1
  __int64 v43; // [rsp+20h] [rbp-60h]
  __m128i v44[24]; // [rsp+28h] [rbp-58h] BYREF
  __m128i *v45; // [rsp+1A8h] [rbp+128h] BYREF
  __m128i v46; // [rsp+1B0h] [rbp+130h]
  __int128 v47; // [rsp+1C0h] [rbp+140h]
  __int128 v48; // [rsp+1D0h] [rbp+150h]
  __int64 v49; // [rsp+1E0h] [rbp+160h]
  __int128 v50; // [rsp+1E8h] [rbp+168h]
  __int128 v51; // [rsp+1F8h] [rbp+178h]
  __m128i v52; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v53; // [rsp+340h] [rbp+2C0h]
  __int128 v54; // [rsp+350h] [rbp+2D0h]
  __int64 v55; // [rsp+360h] [rbp+2E0h]
  __int128 v56; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v57; // [rsp+4C8h] [rbp+448h]
  __m128i v58; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v59; // [rsp+4E0h] [rbp+460h]
  __m128i v60; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v61; // [rsp+500h] [rbp+480h]
  __m128i v62; // [rsp+510h] [rbp+490h] BYREF
  __int128 v63; // [rsp+520h] [rbp+4A0h]
  __int128 v64; // [rsp+530h] [rbp+4B0h]
  __int64 v65; // [rsp+540h] [rbp+4C0h]
  __int64 v66; // [rsp+550h] [rbp+4D0h]
  __int64 v67; // [rsp+558h] [rbp+4D8h]
  __int64 v68; // [rsp+560h] [rbp+4E0h]
  const __m128i *v69; // [rsp+568h] [rbp+4E8h]
  const __m128i *v70; // [rsp+570h] [rbp+4F0h]
  __int64 v71; // [rsp+578h] [rbp+4F8h]
  __int16 v72; // [rsp+580h] [rbp+500h]
  __int64 v73; // [rsp+588h] [rbp+508h]
  __int64 v74; // [rsp+590h] [rbp+510h]
  const __m128i *v75; // [rsp+598h] [rbp+518h]
  __int64 v76; // [rsp+5A0h] [rbp+520h]
  __int64 v77; // [rsp+5A8h] [rbp+528h] BYREF
  __int64 v78; // [rsp+5B0h] [rbp+530h]
  __int64 v79; // [rsp+5B8h] [rbp+538h]
  char v80; // [rsp+5C0h] [rbp+540h]
  const __m128i *v81; // [rsp+5C8h] [rbp+548h]
  __int64 v82; // [rsp+5D0h] [rbp+550h]
  const __m128i **v83; // [rsp+5D8h] [rbp+558h]
  __int64 v84; // [rsp+5E0h] [rbp+560h]
  __int64 v85; // [rsp+5E8h] [rbp+568h]
  __int64 v86; // [rsp+5F0h] [rbp+570h]
  __int64 v87; // [rsp+5F8h] [rbp+578h]
  const __m128i *v88; // [rsp+600h] [rbp+580h]
  char v89; // [rsp+60Eh] [rbp+58Eh]
  char v90; // [rsp+60Fh] [rbp+58Fh]
  __int64 v91; // [rsp+610h] [rbp+590h]

  v91 = -2;
  v83 = a3;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v90 = 1;
    sub_1401B8620((__int64)&v77, v6, v7);
    v8 = v78;
    v4 = v79;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 976);
    if ( v4 < 0 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    if ( v4 )
    {
      v9 = a2;
      v10 = *(const __m128i **)(a2 + 968);
      nullsub_1(a1);
      v5 = 1;
      v11 = (__m128i *)sub_140001650(v4, 1);
      if ( !v11 )
      {
LABEL_4:
        v90 = 1;
        sub_141938D2B(v5, v4);
      }
      v8 = (__int64)v11;
      v77 = v4;
      v78 = (__int64)v11;
      sub_1418F44E0(v11, v10, v4);
      v79 = v4;
      a2 = v9;
    }
    else
    {
      v77 = 0;
      v78 = 1;
      v79 = 0;
      v8 = 1;
    }
    v80 = *(_BYTE *)(a2 + 984);
  }
  v89 = 1;
  v86 = v8;
  sub_1402C9920((__int64)&v45, v8, v4);
  v12 = v45;
  v52 = v46;
  v53 = v47;
  v54 = v48;
  _RCX = v49;
  v55 = v49;
  if ( v45 != (__m128i *)-1LL )
  {
    v14 = v50;
    *(_OWORD *)(a1 + 80) = v51;
    *(_OWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 56) = v55;
    v15 = v52;
    v16 = v53;
    *(_OWORD *)(a1 + 40) = v54;
    *(_OWORD *)(a1 + 24) = v16;
    *(__m128i *)(a1 + 8) = v15;
    *(_QWORD *)a1 = v12;
    v17 = v77;
    v18 = v86;
    if ( !v77 )
      return sub_140298940(v83, v17);
LABEL_13:
    sub_140001660(v18, v17, 1);
    return sub_140298940(v83, v17);
  }
  v62 = _mm_load_si128(&v52);
  v63 = v53;
  v64 = v54;
  v65 = v55;
  if ( (v55 & 1) == 0 )
  {
    v74 = v55;
    v52.m128i_i64[0] = v86;
    v52.m128i_i64[1] = v4;
    v45 = &v52;
    v46.m128i_i64[0] = (__int64)sub_14169F630;
    sub_1416ABFD0(&v56, &unk_1419EA59E, &v45);
    *(_QWORD *)(a1 + 24) = v57;
    *(_OWORD *)(a1 + 8) = v56;
    *(_QWORD *)a1 = 10;
    sub_140298940(&v62, v25);
    v17 = v77;
    v18 = v86;
    if ( !v77 )
      return sub_140298940(v83, v17);
    goto LABEL_13;
  }
  v20 = *v83;
  v21 = v83[1];
  si128 = _mm_load_si128(*v83);
  v23 = v83[3];
  if ( v21 )
  {
    v8 = 417LL * (_QWORD)v21 + 433;
    _RCX = (__int64)v20[-26 * (_QWORD)v21 - 26].m128i_i64;
    v24 = 16;
  }
  else
  {
    v24 = 0;
  }
  _R11D = ~_mm_movemask_epi8(si128);
  result = (__int64)v21->m128i_i64 + (_QWORD)v20 + 1;
  v66 = v24;
  v67 = v8;
  v68 = _RCX;
  v69 = v20;
  v88 = v20 + 1;
  v70 = v20 + 1;
  v71 = result;
  v72 = _R11D;
  v73 = (__int64)v23;
  if ( v23 )
  {
    v74 = v55;
    v84 = _RCX;
    v85 = v24;
    v76 = v8;
    v75 = v21;
    while ( 1 )
    {
      v27 = v88;
      if ( !(_WORD)_R11D )
      {
        do
        {
          v28 = _mm_load_si128(v27);
          v20 -= 416;
          ++v27;
          _R11D = _mm_movemask_epi8(v28) ^ 0xFFFF;
        }
        while ( !_R11D );
        v88 = v27;
      }
      __asm { tzcnt   ecx, r11d }
      v82 = _R11D & (unsigned int)(_R11D - 1);
      v87 = (__int64)&v23[-1].m128i_i64[1] + 7;
      v61 = v20[-26 * _RCX - 25].m128i_i64[0];
      v60 = v20[-26 * _RCX - 26];
      v29 = *((_QWORD *)&v20[-26 * _RCX - 24] - 1);
      v81 = v20;
      sub_1418F44E0(v44, &v20[-26 * _RCX - 24], 0x180u);
      if ( v29 == 2 )
        break;
      v59 = v61;
      v58 = _mm_load_si128(&v60);
      v52.m128i_i64[0] = v29;
      sub_1418F44E0((__m128i *)&v52.m128i_u64[1], v44, 0x180u);
      sub_1403A9A10(&v45, &v62, &v58, &v52, v43);
      if ( (_DWORD)v45 != 2 )
        sub_14029DBD0(&v45);
      v23 = (const __m128i *)v87;
      v20 = v81;
      _R11D = v82;
      if ( !v87 )
      {
        v72 = v82;
        v69 = v81;
        result = (__int64)v88;
        v70 = v88;
        v33 = v75;
        v8 = v76;
        v30 = v85;
        _RCX = v84;
        goto LABEL_43;
      }
    }
    _R9D = v82;
    v72 = v82;
    v32 = v81;
    v69 = v81;
    v70 = v88;
    result = v87;
    v73 = v87;
    v33 = v75;
    v8 = v76;
    v30 = v85;
    _RCX = v84;
    if ( !v87 )
    {
LABEL_43:
      if ( !v33 )
        goto LABEL_46;
      goto LABEL_44;
    }
    do
    {
      if ( !(_WORD)_R9D )
      {
        result = (__int64)v88;
        do
        {
          v36 = _mm_load_si128((const __m128i *)result);
          v32 -= 416;
          result += 16;
          _R9D = _mm_movemask_epi8(v36) ^ 0xFFFF;
        }
        while ( !_R9D );
        v88 = (const __m128i *)result;
      }
      __asm { tzcnt   eax, r9d }
      v37 = &v32[-26 * result];
      v38 = v32;
      v39 = v37[-26].m128i_i64[0];
      if ( v39 )
      {
        v40 = _R9D;
        sub_140001660(v37[-26].m128i_i64[1], v39, 1);
        _R9D = v40;
      }
      v34 = _R9D & (_R9D - 1);
      v35 = v87 - 1;
      HIDWORD(result) = (unsigned __int64)sub_14029DBD0(&v37[-25].m128i_u64[1]) >> 32;
      _R9D = v34;
      v87 = v35;
      _RCX = v84;
      v32 = v38;
    }
    while ( v35 );
    result = (__int64)v88;
    v70 = v88;
    v69 = v38;
    v30 = v85;
    if ( v33 )
      goto LABEL_44;
  }
  else
  {
    v30 = v24;
    if ( v21 )
    {
LABEL_44:
      if ( v8 )
        result = sub_140001660(_RCX, v8, v30);
    }
  }
LABEL_46:
  v41 = v62;
  v42 = v63;
  *(_OWORD *)(a1 + 40) = v64;
  *(_OWORD *)(a1 + 24) = v42;
  *(__m128i *)(a1 + 8) = v41;
  *(_QWORD *)a1 = -1;
  if ( v77 )
    return sub_140001660(v86, v77, 1);
  return result;
}
