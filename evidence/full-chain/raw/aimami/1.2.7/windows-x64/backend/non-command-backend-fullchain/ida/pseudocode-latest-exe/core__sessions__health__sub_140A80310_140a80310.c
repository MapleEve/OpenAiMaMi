// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a80310 | successor of pre-update 0x14035b7d0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.749, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140A80310(__int64 a1, __int64 a2, const __m128i **a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 m128i_i64; // rdx
  __m128i *v12; // rax
  __int128 v13; // xmm0
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  const __m128i *v17; // r9
  const __m128i *v18; // rax
  const __m128i *v19; // rbx
  __m128i si128; // xmm0
  __int64 v21; // r11
  const __m128i *v23; // rdx
  const __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rbx
  __int64 v28; // r8
  const __m128i *v30; // rdx
  const __m128i *v31; // rax
  const __m128i *v32; // rbx
  __m128i v33; // xmm0
  const __m128i *v34; // r15
  const __m128i *v35; // rdi
  const __m128i *v36; // r14
  __int64 v37; // rdx
  __int128 v38; // xmm1
  _BYTE v40[384]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v41; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v42; // [rsp+1B0h] [rbp+130h]
  __int128 v43; // [rsp+1C0h] [rbp+140h]
  __int64 v44; // [rsp+1D0h] [rbp+150h]
  __m128i *v45; // [rsp+330h] [rbp+2B0h] BYREF
  __m128i v46; // [rsp+338h] [rbp+2B8h]
  __int128 v47; // [rsp+348h] [rbp+2C8h]
  __int128 v48; // [rsp+358h] [rbp+2D8h]
  __int64 v49; // [rsp+368h] [rbp+2E8h]
  __int128 v50; // [rsp+370h] [rbp+2F0h]
  __int128 v51; // [rsp+380h] [rbp+300h]
  __int64 v52; // [rsp+390h] [rbp+310h]
  __int64 v53; // [rsp+3A0h] [rbp+320h]
  __int64 v54; // [rsp+3A8h] [rbp+328h]
  __int64 v55; // [rsp+3B8h] [rbp+338h]
  __int64 v56; // [rsp+3C0h] [rbp+340h]
  __int64 v57; // [rsp+3D0h] [rbp+350h]
  __int64 v58; // [rsp+3D8h] [rbp+358h]
  __int64 v59; // [rsp+3E8h] [rbp+368h]
  __int64 v60; // [rsp+3F0h] [rbp+370h]
  __int64 v61; // [rsp+400h] [rbp+380h]
  __int64 v62; // [rsp+408h] [rbp+388h]
  __int64 v63; // [rsp+418h] [rbp+398h]
  __int64 v64; // [rsp+420h] [rbp+3A0h]
  __int64 v65; // [rsp+430h] [rbp+3B0h]
  __int64 v66; // [rsp+438h] [rbp+3B8h]
  __int64 v67; // [rsp+448h] [rbp+3C8h]
  __int64 v68; // [rsp+450h] [rbp+3D0h]
  __int64 v69; // [rsp+460h] [rbp+3E0h]
  __int64 v70; // [rsp+468h] [rbp+3E8h]
  __int64 v71; // [rsp+478h] [rbp+3F8h]
  __int64 v72; // [rsp+480h] [rbp+400h]
  __int64 v73; // [rsp+490h] [rbp+410h]
  __int64 v74; // [rsp+498h] [rbp+418h]
  __m128i v75; // [rsp+4B8h] [rbp+438h] BYREF
  __int64 v76; // [rsp+4C8h] [rbp+448h]
  __m128i v77; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v78; // [rsp+4E0h] [rbp+460h]
  __m128i v79; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v80; // [rsp+500h] [rbp+480h]
  __m128i v81; // [rsp+510h] [rbp+490h] BYREF
  __int128 v82; // [rsp+520h] [rbp+4A0h]
  __int128 v83; // [rsp+530h] [rbp+4B0h]
  __int64 v84; // [rsp+540h] [rbp+4C0h]
  __int64 v85; // [rsp+550h] [rbp+4D0h]
  __int64 v86; // [rsp+558h] [rbp+4D8h]
  __int64 v87; // [rsp+560h] [rbp+4E0h]
  __int64 v88; // [rsp+568h] [rbp+4E8h]
  const __m128i *v89; // [rsp+570h] [rbp+4F0h]
  const __m128i *v90; // [rsp+578h] [rbp+4F8h]
  __int64 v91; // [rsp+580h] [rbp+500h]
  __int16 v92; // [rsp+588h] [rbp+508h]
  const __m128i *v93; // [rsp+590h] [rbp+510h]
  __int64 v94; // [rsp+598h] [rbp+518h]
  __int64 v95; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v96; // [rsp+5A8h] [rbp+528h]
  __int64 v97; // [rsp+5B0h] [rbp+530h]
  char v98; // [rsp+5B8h] [rbp+538h]
  const __m128i *v99; // [rsp+5C0h] [rbp+540h]
  const __m128i *v100; // [rsp+5C8h] [rbp+548h]
  const __m128i **v101; // [rsp+5D0h] [rbp+550h]
  const __m128i *v102; // [rsp+5D8h] [rbp+558h]
  __int64 v103; // [rsp+5E0h] [rbp+560h]
  char v104; // [rsp+5EEh] [rbp+56Eh]
  char v105; // [rsp+5EFh] [rbp+56Fh]
  __int64 v106; // [rsp+5F0h] [rbp+570h]

  v106 = -2;
  v101 = a3;
  if ( *(_QWORD *)(a2 + 960) == -1 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(a2 + 16);
    v105 = 1;
    sub_140A2DA60(&v95, v9, v10);
    v8 = v96;
    v5 = v97;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 976);
    if ( v5 )
    {
      v6 = *(_QWORD *)(a2 + 968);
      nullsub_1(a1, a2);
      v7 = sub_140001650(v5, 1);
      if ( !v7 )
      {
        v105 = 1;
        sub_14196B2DB(1, v5);
      }
      v8 = v7;
      v95 = v5;
      v96 = v7;
      sub_1419234B0(v7, v6, v5);
      v97 = v5;
    }
    else
    {
      v95 = 0;
      v96 = 1;
      v97 = 0;
      v8 = 1;
    }
    v98 = *(_BYTE *)(a2 + 984);
  }
  v104 = 1;
  sub_140876E90(&v45, v8, v5);
  v12 = v45;
  v41 = v46;
  v42 = v47;
  v43 = v48;
  v44 = v49;
  if ( v45 != (__m128i *)-1LL )
  {
    v13 = v50;
    *(_OWORD *)(a1 + 80) = v51;
    *(_OWORD *)(a1 + 64) = v13;
    *(_QWORD *)(a1 + 56) = v44;
    v14 = _mm_load_si128(&v41);
    v15 = v42;
    *(_OWORD *)(a1 + 40) = v43;
    *(_OWORD *)(a1 + 24) = v15;
    *(__m128i *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v12;
LABEL_14:
    if ( v95 )
      *(double *)v14.m128i_i64 = sub_140001660(v8, v95, 1);
    sub_14018FA70(v101);
    return *(double *)v14.m128i_i64;
  }
  v81 = _mm_load_si128(&v41);
  v82 = v42;
  v83 = v43;
  v84 = v44;
  v85 = v44;
  if ( (v44 & 1) == 0 )
  {
    v41.m128i_i64[0] = v8;
    v41.m128i_i64[1] = v5;
    v45 = &v41;
    v46.m128i_i64[0] = (__int64)sub_1416CE600;
    sub_1416DAFA0(&v75, &unk_141A6BADD, &v45);
    *(_QWORD *)(a1 + 24) = v76;
    v14 = _mm_loadu_si128(&v75);
    *(__m128i *)(a1 + 8) = v14;
    *(_QWORD *)a1 = 10;
    v104 = 1;
    sub_14018FA70(&v81);
    goto LABEL_14;
  }
  _RCX = (__int64)v101;
  v17 = *v101;
  v18 = v101[1];
  v19 = v101[3];
  si128 = _mm_load_si128(*v101);
  if ( v18 )
  {
    _RCX = 417LL * (_QWORD)v18 + 433;
    m128i_i64 = (__int64)v17[-26 * (_QWORD)v18 - 26].m128i_i64;
    v21 = 16;
  }
  else
  {
    v21 = 0;
  }
  _R10D = ~_mm_movemask_epi8(si128);
  v94 = v21;
  v86 = v21;
  v87 = _RCX;
  v88 = m128i_i64;
  v89 = v17;
  v102 = v17 + 1;
  v90 = v17 + 1;
  v91 = (__int64)v18->m128i_i64 + (_QWORD)v17 + 1;
  v92 = _R10D;
  v93 = v19;
  if ( v19 )
  {
    v23 = v17;
    while ( 1 )
    {
      if ( !(_WORD)_R10D )
      {
        v24 = v102;
        do
        {
          v25 = _mm_load_si128(v24);
          v23 -= 416;
          ++v24;
          _R10D = _mm_movemask_epi8(v25) ^ 0xFFFF;
        }
        while ( !_R10D );
        v102 = v24;
      }
      __asm { tzcnt   ecx, r10d }
      v103 = _R10D & (unsigned int)(_R10D - 1);
      v99 = (const __m128i *)((char *)v19 - 1);
      v80 = v23[-26 * _RCX - 25].m128i_i64[0];
      v79 = v23[-26 * _RCX - 26];
      v26 = *((_QWORD *)&v23[-26 * _RCX - 24] - 1);
      v100 = v23;
      sub_1419234B0(v40, &v23[-26 * _RCX - 24], 384);
      if ( v26 == 2 )
        break;
      v78 = v80;
      v77 = _mm_load_si128(&v79);
      v41.m128i_i64[0] = v26;
      sub_1419234B0(&v41.m128i_u64[1], v40, 384);
      sub_140870A60(&v45, &v81, &v77, &v41);
      v19 = v99;
      _R10D = v103;
      if ( (_DWORD)v45 != 2 )
      {
        if ( v46.m128i_i64[1] )
        {
          sub_140001660(v47, v46.m128i_i64[1], 1);
          _R10D = v103;
        }
        if ( (_QWORD)v50 != -1 && (_QWORD)v50 )
        {
          sub_140001660(*((_QWORD *)&v50 + 1), v50, 1);
          _R10D = v103;
        }
        if ( *((_QWORD *)&v51 + 1) != -1 && *((_QWORD *)&v51 + 1) )
        {
          sub_140001660(v52, *((_QWORD *)&v51 + 1), 1);
          _R10D = v103;
        }
        if ( (_QWORD)v48 )
        {
          sub_140001660(*((_QWORD *)&v48 + 1), v48, 1);
          _R10D = v103;
        }
        if ( v53 != -1 && v53 )
        {
          sub_140001660(v54, v53, 1);
          _R10D = v103;
        }
        if ( v55 != -1 && v55 )
        {
          sub_140001660(v56, v55, 1);
          _R10D = v103;
        }
        if ( v57 != -1 && v57 )
        {
          sub_140001660(v58, v57, 1);
          _R10D = v103;
        }
        if ( v59 != -1 && v59 )
        {
          sub_140001660(v60, v59, 1);
          _R10D = v103;
        }
        if ( v61 != -1 && v61 )
        {
          sub_140001660(v62, v61, 1);
          _R10D = v103;
        }
        if ( v63 != -1 && v63 )
        {
          sub_140001660(v64, v63, 1);
          _R10D = v103;
        }
        if ( v65 != -1 && v65 )
        {
          sub_140001660(v66, v65, 1);
          _R10D = v103;
        }
        if ( v67 != -1 && v67 )
        {
          sub_140001660(v68, v67, 1);
          _R10D = v103;
        }
        if ( v69 != -1 && v69 )
        {
          sub_140001660(v70, v69, 1);
          _R10D = v103;
        }
        if ( v71 != -1 && v71 )
        {
          sub_140001660(v72, v71, 1);
          _R10D = v103;
        }
        if ( v73 != -1 && v73 )
        {
          sub_140001660(v74, v73, 1);
          _R10D = v103;
        }
      }
      v23 = v100;
      if ( !v19 )
        goto LABEL_71;
    }
    _R12D = v103;
    v92 = v103;
    v30 = v100;
    v89 = v100;
    v31 = v102;
    v90 = v102;
    v32 = v99;
    v93 = v99;
    v28 = v94;
    if ( v99 )
    {
      do
      {
        if ( !(_WORD)_R12D )
        {
          do
          {
            v33 = _mm_load_si128(v31);
            v30 -= 416;
            ++v31;
            _R12D = _mm_movemask_epi8(v33) ^ 0xFFFF;
          }
          while ( !_R12D );
          v90 = v31;
          v89 = v30;
        }
        v34 = v31;
        __asm { tzcnt   ecx, r12d }
        _R12D &= _R12D - 1;
        v92 = _R12D;
        v35 = &v30[-26 * _RCX];
        v32 = (const __m128i *)((char *)v32 - 1);
        v93 = v32;
        v36 = v30;
        v37 = v35[-26].m128i_i64[0];
        if ( v37 )
          sub_140001660(v35[-26].m128i_i64[1], v37, 1);
        sub_140038430(&v35[-25].m128i_u64[1], v37, v28);
        v30 = v36;
        v31 = v34;
      }
      while ( v32 );
      v28 = v86;
    }
  }
  else
  {
LABEL_71:
    v28 = v94;
  }
  if ( v28 && v87 )
    sub_140001660(v88, v87, v28);
  v14 = _mm_load_si128(&v81);
  v38 = v82;
  *(_OWORD *)(a1 + 40) = v83;
  *(_OWORD *)(a1 + 24) = v38;
  *(__m128i *)(a1 + 8) = v14;
  *(_QWORD *)a1 = -1;
  if ( v95 )
    *(double *)v14.m128i_i64 = sub_140001660(v96, v95, 1);
  return *(double *)v14.m128i_i64;
}
