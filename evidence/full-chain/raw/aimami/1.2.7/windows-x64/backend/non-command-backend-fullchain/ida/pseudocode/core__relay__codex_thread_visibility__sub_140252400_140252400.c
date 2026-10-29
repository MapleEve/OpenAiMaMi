// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140252400 | name sub_140252400
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140252400(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  const __m128i *v29; // r14
  __m128i si128; // xmm0
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rbx
  __m128i v38; // [rsp+20h] [rbp-60h] BYREF
  __int128 v39; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+40h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-38h]
  char *v42; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int64 *v43; // [rsp+58h] [rbp-28h]
  __int128 *v44; // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v45)(); // [rsp+68h] [rbp-18h]
  __int64 *v46; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v47)(); // [rsp+78h] [rbp-8h]
  __int64 v48; // [rsp+80h] [rbp+0h] BYREF
  __int64 v49; // [rsp+88h] [rbp+8h]
  unsigned __int64 v50; // [rsp+90h] [rbp+10h]
  __int64 *v51; // [rsp+98h] [rbp+18h]
  char *v52; // [rsp+A0h] [rbp+20h] BYREF
  volatile signed __int64 *v53; // [rsp+A8h] [rbp+28h]
  __int128 v54; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v55; // [rsp+C0h] [rbp+40h] BYREF
  char *v56; // [rsp+C8h] [rbp+48h] BYREF
  const char *v57; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v58; // [rsp+D8h] [rbp+58h]
  volatile signed __int64 *v59; // [rsp+E0h] [rbp+60h]
  const char *v60; // [rsp+E8h] [rbp+68h]
  __int64 v61; // [rsp+F0h] [rbp+70h]
  __int64 v62; // [rsp+F8h] [rbp+78h]
  const char *v63; // [rsp+100h] [rbp+80h]
  __int64 v64; // [rsp+108h] [rbp+88h]
  __int64 v65; // [rsp+110h] [rbp+90h]
  void *v66; // [rsp+118h] [rbp+98h]
  char **v67; // [rsp+120h] [rbp+A0h]
  char v68; // [rsp+12Eh] [rbp+AEh] BYREF
  char v69; // [rsp+12Fh] [rbp+AFh]
  __int64 v70; // [rsp+130h] [rbp+B0h]

  v70 = -2;
  v51 = a2;
  v54 = 0;
  v55 = 0;
  v69 = 1;
  v5 = sub_14167F170(a1);
  if ( *(_BYTE *)(v5 + 16) == 1 )
  {
    v10 = *(_QWORD *)v5;
    v11 = *(_QWORD *)(v5 + 8);
  }
  else
  {
    v69 = 1;
    v37 = v5;
    v10 = sub_141696260(v7, v6, v8, v9);
    v5 = v37;
    *(_QWORD *)v37 = v10;
    *(_QWORD *)(v37 + 8) = v11;
    *(_BYTE *)(v37 + 16) = 1;
  }
  *(_QWORD *)v5 = v10 + 1;
  v39 = xmmword_1419D6520;
  v38 = _mm_loadu_si128((const __m128i *)&off_1419D6510);
  v40 = v10;
  v41 = v11;
  v12 = *v51;
  v13 = 88 * v51[2];
  v56 = (char *)v51[1];
  v57 = v56;
  v58 = v12;
  v59 = (volatile signed __int64 *)&v56[v13];
  v60 = a3;
  v61 = (__int64)&v38;
  sub_140391130(&v48, &v56);
  v14 = v49;
  v15 = v50;
  *(_QWORD *)&v54 = v50;
  if ( v50 <= 7 )
  {
    v16 = sub_14024B340(v49, v50);
    v18 = v19;
  }
  else
  {
    v56 = nullptr;
    v58 = 4;
    v59 = nullptr;
    v61 = 1;
    v62 = (__int64)&unk_14193C958;
    v63 = nullptr;
    v65 = 0;
    LOWORD(v67) = 0;
    sub_14000B630(&v42, &v56);
    if ( v42 == (char *)-1LL )
    {
      v56 = (char *)v43;
      v16 = sub_14000CA40(v43 + 16, v14, v15);
      v18 = v36;
      sub_1411C79D0(&v56);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v56) )
        sub_1411C66E0(&v56);
    }
    else
    {
      v52 = v42;
      v53 = v43;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v42 = (char *)&v52;
        v43 = (volatile signed __int64 *)sub_1411C6B40;
        v62 = 2;
        v63 = aCodexmateLibCo_0;
        v64 = 51;
        v66 = &unk_1419DFB81;
        v67 = &v42;
        v56 = nullptr;
        v57 = aCodexmateLibCo_0;
        v58 = 51;
        v59 = nullptr;
        v60 = aSrcCoreRelayCo_0;
        v61 = 41;
        v65 = 0x256D00000001LL;
        sub_1414D53A0(&v68, &v56);
      }
      v16 = sub_14024B340(v14, v15);
      v18 = v17;
      if ( (unsigned int)v52 >= 2 && ((unsigned __int8)v53 & 3u) - 2 >= 2 && ((unsigned __int8)v53 & 3) != 0 )
      {
        v57 = (char *)v53 - 1;
        LOBYTE(v56) = 3;
        sub_1416BCB00(&v57);
      }
    }
  }
  *((_QWORD *)&v54 + 1) = v16;
  v55 = v18;
  if ( v16 && *(_QWORD *)off_1421E6EC0 >= 3u )
  {
    v42 = (char *)&v54 + 8;
    v43 = (volatile signed __int64 *)sub_1416BCB10;
    v44 = &v54;
    v45 = sub_1416BCB10;
    v46 = &v55;
    v47 = sub_1416BCB10;
    v62 = 3;
    v63 = aCodexmateLibCo_0;
    v64 = 51;
    v66 = &unk_1419DFB40;
    v67 = &v42;
    v56 = nullptr;
    v57 = aCodexmateLibCo_0;
    v58 = 51;
    v59 = nullptr;
    v60 = aSrcCoreRelayCo_0;
    v61 = 41;
    v65 = 0x254600000001LL;
    sub_1414D53A0(&v68, &v56);
  }
  *(_QWORD *)(a1 + 16) = v55;
  *(_OWORD *)a1 = v54;
  v20 = v49;
  v21 = v50;
  if ( v50 )
  {
    v22 = (_QWORD *)(v49 + 32);
    do
    {
      v23 = *(v22 - 4);
      if ( v23 )
        sub_140001660(*(v22 - 3), v23, 1);
      v24 = *(v22 - 1);
      if ( v24 )
        sub_140001660(*v22, v24, 1);
      v22 += 11;
      --v21;
    }
    while ( v21 );
  }
  result = v48;
  if ( v48 )
    result = sub_140001660(v20, 88 * v48, 8);
  v26 = v38.m128i_i64[1];
  if ( v38.m128i_i64[1] )
  {
    v27 = *((_QWORD *)&v39 + 1);
    if ( *((_QWORD *)&v39 + 1) )
    {
      v28 = v38.m128i_i64[0];
      v29 = (const __m128i *)(v38.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v38.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            si128 = _mm_load_si128(v29);
            v28 -= 512;
            ++v29;
            _R15D = _mm_movemask_epi8(si128) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   ecx, r15d }
        v33 = v28 - (unsigned int)(32 * _ECX);
        v34 = *(_QWORD *)(v33 - 32);
        if ( v34 )
          sub_140001660(*(_QWORD *)(v33 - 24), v34, 1);
        --v27;
        _R15D &= _R15D - 1;
      }
      while ( v27 );
    }
    result = 32 * v26;
    v35 = 33 * v26 + 49;
    if ( v35 )
      return sub_140001660(v38.m128i_i64[0] - result - 32, v35, 16);
  }
  return result;
}
