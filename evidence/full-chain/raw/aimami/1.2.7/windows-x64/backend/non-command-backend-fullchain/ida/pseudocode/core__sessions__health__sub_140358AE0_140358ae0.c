// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140358ae0 | name sub_140358AE0
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140358AE0(__int64 a1, __int64 a2)
{
  __m128i v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __m128i si128; // xmm6
  __m128i v9; // xmm7
  unsigned __int64 v10; // rbx
  const __m128i *v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v21[37]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v22; // [rsp+280h] [rbp+200h] BYREF
  __m128i v23[37]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v24; // [rsp+4E0h] [rbp+460h]
  __m128i v25[39]; // [rsp+740h] [rbp+6C0h] BYREF
  __m128i v26; // [rsp+9B0h] [rbp+930h] BYREF
  __m128i v27[38]; // [rsp+9C0h] [rbp+940h] BYREF
  __m128i v28; // [rsp+C20h] [rbp+BA0h] BYREF
  unsigned int v29; // [rsp+C3Ch] [rbp+BBCh]
  unsigned int v30; // [rsp+C40h] [rbp+BC0h]
  unsigned int v31; // [rsp+C44h] [rbp+BC4h]
  unsigned int v32; // [rsp+C48h] [rbp+BC8h]
  char v33; // [rsp+C4Fh] [rbp+BCFh]
  _QWORD v34[2]; // [rsp+E78h] [rbp+DF8h] BYREF
  __int64 v35; // [rsp+E88h] [rbp+E08h] BYREF
  __int64 v36; // [rsp+E90h] [rbp+E10h]
  __int64 v37; // [rsp+E98h] [rbp+E18h]
  __int64 v38; // [rsp+EA8h] [rbp+E28h]
  __int64 v39; // [rsp+EB0h] [rbp+E30h]
  __int64 v40; // [rsp+EB8h] [rbp+E38h]
  __int64 v41; // [rsp+EC0h] [rbp+E40h]
  __m128i v42; // [rsp+EC8h] [rbp+E48h] BYREF
  __int64 v43; // [rsp+ED8h] [rbp+E58h]
  __m128i *v44; // [rsp+EE8h] [rbp+E68h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+EF0h] [rbp+E70h]
  __int64 v46; // [rsp+EF8h] [rbp+E78h]
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // [rsp+F00h] [rbp+E80h]
  __int128 v48; // [rsp+F08h] [rbp+E88h] BYREF
  __int64 v49; // [rsp+F18h] [rbp+E98h]
  __m128i *v50; // [rsp+F20h] [rbp+EA0h]
  __m128i v51; // [rsp+F28h] [rbp+EA8h] BYREF
  const char *v52; // [rsp+F38h] [rbp+EB8h] BYREF
  _BYTE v53[24]; // [rsp+F40h] [rbp+EC0h]
  __int64 v54; // [rsp+F58h] [rbp+ED8h] BYREF
  __int64 v55; // [rsp+F60h] [rbp+EE0h]
  __int64 v56; // [rsp+F68h] [rbp+EE8h]
  _BYTE v57[2]; // [rsp+F76h] [rbp+EF6h] BYREF
  __int64 v58; // [rsp+F78h] [rbp+EF8h]

  v58 = -2;
  sub_141695AF0(&v22, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v3 = v22;
  if ( v22.m128i_i64[0] != 2 )
  {
    v38 = a1;
    sub_1418F44E0(v27, v23, 0x260u);
    v26 = v3;
    v57[1] = 1;
    LODWORD(v50) = sub_141683E80(v5, v4, v6);
    HIDWORD(v50) = v7;
    *(_QWORD *)&v48 = 0;
    *((_QWORD *)&v48 + 1) = 8;
    v49 = 0;
    sub_1418F44E0(v25, &v26, 0x270u);
    v22.m128i_i64[0] = 0;
    v24 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1419E46C0);
    v9 = _mm_load_si128((const __m128i *)&xmmword_1419E46D0);
    v39 = 0;
    v40 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_140289710(v21, &v22);
        if ( !v21[0].m128i_i64[0] )
        {
          sub_140191C80(&v22);
          a1 = v38;
          *(_QWORD *)(v38 + 24) = v49;
          *(_OWORD *)(a1 + 8) = v48;
          *(_QWORD *)(a1 + 32) = v40;
          *(_QWORD *)(a1 + 40) = v39;
          *(_QWORD *)a1 = -1;
          return a1;
        }
        sub_1418F44E0(&v28, v21, 0x258u);
        sub_14168A770(&v35, &v28);
        v55 = v36;
        sub_1416B3AE0(&v51, v36, v37);
        if ( v51.m128i_i32[0] == 1 )
          break;
        v10 = (unsigned __int64)v52;
        if ( (unsigned __int64)v52 < 0x1E )
          break;
        v11 = (const __m128i *)v51.m128i_i64[1];
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v51.m128i_i64[1] + 14)), si128),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v51.m128i_i64[1]), v9))) != 0xFFFF )
          break;
        if ( (v28.m128i_i8[8] & 0x10) != 0 )
          break;
        if ( (v33 & 0x20) != 0 && (v28.m128i_i16[4] & 0x400) != 0 )
          break;
        v12 = v32;
        v13 = v31;
        v44 = v50;
        sub_141683E30(&v51, &v44, v29, v30);
        if ( v51.m128i_i32[0] == 1 || v51.m128i_i64[1] < 0x384uLL )
          break;
        sub_14168A660(&v51, &v28);
        v14 = sub_140BAE130(&v51);
        if ( v14 )
        {
          v54 = v14;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            sub_14168A660(&v42, &v28);
            v56 = v42.m128i_i64[1];
            v34[0] = v42.m128i_i64[1];
            v34[1] = v43;
            v44 = (__m128i *)v34;
            v45 = (__int64 (__fastcall **)())sub_14169F630;
            v46 = (__int64)&v54;
            v47 = sub_1416BB0B0;
            v51.m128i_i64[0] = (__int64)aCodexmateLibCo_27;
            v51.m128i_i64[1] = 37;
            v52 = aCodexmateLibCo_27;
            *(_QWORD *)v53 = 37;
            *(_QWORD *)&v53[8] = &off_1419EA520;
            sub_140BAD520(&unk_1419EA4DE, &v44, 2, &v51);
            if ( v42.m128i_i64[0] )
              sub_140001660(v56, v42.m128i_i64[0], 1);
          }
          sub_14072C410((unsigned int)&v44, v10, 0, 1, 1);
          v56 = (__int64)v45;
          if ( (_BYTE)v44 )
            sub_141938D2B(v56, v46);
          v41 = v46;
          sub_1418F44E0((__m128i *)v46, v11, v10);
          v42.m128i_i64[0] = 0;
          v42.m128i_i64[1] = 1;
          v43 = 0;
          v46 = 1610612768;
          v44 = &v42;
          v45 = &off_1419E98E0;
          if ( (unsigned __int8)sub_1416BB0B0(&v54, &v44) )
            sub_141939040(
              (unsigned int)aADisplayImplem_0,
              55,
              (unsigned int)v57,
              (unsigned int)&unk_1419E6AE0,
              (__int64)&off_1419EB798);
          *(_QWORD *)&v53[16] = v43;
          *(__m128i *)v53 = _mm_loadu_si128(&v42);
          v51.m128i_i64[0] = v56;
          v51.m128i_i64[1] = v41;
          v52 = (const char *)v10;
          v15 = v49;
          if ( v49 == (_QWORD)v48 )
            sub_14190F490(&v48);
          v16 = *((_QWORD *)&v48 + 1);
          v17 = 48 * v15;
          v18 = _mm_loadu_si128(&v51);
          v19 = _mm_loadu_si128((const __m128i *)&v52);
          *(_OWORD *)(*((_QWORD *)&v48 + 1) + v17 + 32) = *(_OWORD *)&v53[8];
          *(__m128i *)(v16 + v17 + 16) = v19;
          *(__m128i *)(v16 + v17) = v18;
          v49 = v15 + 1;
          if ( (unsigned int)(v54 & 3) - 2 >= 2 && (v54 & 3) != 0 )
          {
            v51.m128i_i64[1] = v54 - 1;
            v51.m128i_i8[0] = 3;
            sub_1416BCB00(&v51.m128i_u64[1]);
          }
        }
        else
        {
          ++v40;
          v39 += v12 | (v13 << 32);
        }
        if ( v35 )
          sub_140001660(v55, v35, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v28.m128i_i64[0]) )
          goto LABEL_11;
      }
      if ( v35 )
        sub_140001660(v55, v35, 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v28.m128i_i64[0]) )
LABEL_11:
        sub_14119A730(&v28);
    }
  }
  *(_OWORD *)a1 = __PAIR128__(v22.m128i_u64[1], 2);
  return a1;
}
