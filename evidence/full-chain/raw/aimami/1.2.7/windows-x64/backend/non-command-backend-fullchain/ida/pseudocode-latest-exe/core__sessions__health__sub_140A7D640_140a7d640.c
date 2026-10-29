// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140a7d640 | successor of pre-update 0x140358ae0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.9, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140A7D640(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  __m128i si128; // xmm6
  __m128i v10; // xmm7
  const char *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  _QWORD v23[75]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v24[2]; // [rsp+288h] [rbp+208h] BYREF
  _BYTE v25[592]; // [rsp+298h] [rbp+218h] BYREF
  __int64 v26; // [rsp+4E8h] [rbp+468h]
  _BYTE v27[624]; // [rsp+748h] [rbp+6C8h] BYREF
  _QWORD v28[2]; // [rsp+9B8h] [rbp+938h] BYREF
  _BYTE v29[608]; // [rsp+9C8h] [rbp+948h] BYREF
  volatile signed __int64 *v30; // [rsp+C28h] [rbp+BA8h] BYREF
  int v31; // [rsp+C30h] [rbp+BB0h]
  unsigned int v32; // [rsp+C44h] [rbp+BC4h]
  unsigned int v33; // [rsp+C48h] [rbp+BC8h]
  unsigned int v34; // [rsp+C4Ch] [rbp+BCCh]
  unsigned int v35; // [rsp+C50h] [rbp+BD0h]
  char v36; // [rsp+C57h] [rbp+BD7h]
  _QWORD v37[2]; // [rsp+E80h] [rbp+E00h] BYREF
  __int64 v38; // [rsp+E90h] [rbp+E10h] BYREF
  __int64 v39; // [rsp+E98h] [rbp+E18h]
  __int64 v40; // [rsp+EA0h] [rbp+E20h]
  __int64 v41; // [rsp+EB0h] [rbp+E30h]
  __int64 v42; // [rsp+EB8h] [rbp+E38h]
  __int64 v43; // [rsp+EC0h] [rbp+E40h]
  __int64 v44; // [rsp+EC8h] [rbp+E48h]
  __m128i v45; // [rsp+ED0h] [rbp+E50h] BYREF
  __int64 v46; // [rsp+EE0h] [rbp+E60h]
  __m128i *v47; // [rsp+EF0h] [rbp+E70h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+EF8h] [rbp+E78h]
  __int64 v49; // [rsp+F00h] [rbp+E80h]
  __int64 (__fastcall *v50)(_QWORD, _QWORD); // [rsp+F08h] [rbp+E88h]
  __int128 v51; // [rsp+F10h] [rbp+E90h] BYREF
  __int64 v52; // [rsp+F20h] [rbp+EA0h]
  __m128i *v53; // [rsp+F28h] [rbp+EA8h]
  __m128i v54; // [rsp+F30h] [rbp+EB0h] BYREF
  const char *v55; // [rsp+F40h] [rbp+EC0h] BYREF
  _BYTE v56[24]; // [rsp+F48h] [rbp+EC8h]
  __int64 v57; // [rsp+F60h] [rbp+EE0h] BYREF
  __int64 v58; // [rsp+F68h] [rbp+EE8h]
  char v59; // [rsp+F77h] [rbp+EF7h] BYREF
  __int64 v60; // [rsp+F78h] [rbp+EF8h]
  char v61; // [rsp+F87h] [rbp+F07h]
  __int64 v62; // [rsp+F88h] [rbp+F08h]

  v62 = -2;
  sub_1416C4AC0(v24, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v3 = v24[0];
  v4 = v24[1];
  if ( v24[0] != 2 )
  {
    v41 = a1;
    sub_1419234B0(v29, v25, 608);
    v28[0] = v3;
    v28[1] = v4;
    v61 = 1;
    LODWORD(v53) = sub_1416B2E50(v6, v5, v7);
    HIDWORD(v53) = v8;
    *(_QWORD *)&v51 = 0;
    *((_QWORD *)&v51 + 1) = 8;
    v52 = 0;
    sub_1419234B0(v27, v28, 624);
    v24[0] = 0;
    v26 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A687E0);
    v10 = _mm_load_si128((const __m128i *)&xmmword_141A687F0);
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_140841050(v23, v24);
        if ( !v23[0] )
        {
          sub_1401A6690(v24);
          a1 = v41;
          *(_QWORD *)(v41 + 24) = v52;
          *(_OWORD *)(a1 + 8) = v51;
          *(_QWORD *)(a1 + 32) = v43;
          *(_QWORD *)(a1 + 40) = v42;
          *(_QWORD *)a1 = -1;
          return a1;
        }
        sub_1419234B0(&v30, v23, 600);
        sub_1416B9740(&v38, &v30);
        v58 = v39;
        sub_1416E2AB0(&v54, v39, v40);
        if ( v54.m128i_i32[0] == 1 )
          break;
        v11 = v55;
        if ( (unsigned __int64)v55 < 0x1E )
          break;
        v12 = v54.m128i_i64[1];
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v54.m128i_i64[1] + 14)), si128),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v54.m128i_i64[1]), v10))) != 0xFFFF )
          break;
        if ( (v31 & 0x10) != 0 )
          break;
        if ( (v36 & 0x20) != 0 && (v31 & 0x400) != 0 )
          break;
        v13 = v35;
        v14 = v34;
        v47 = v53;
        sub_1416B2E00(&v54, &v47, v32, v33);
        if ( v54.m128i_i32[0] == 1 || v54.m128i_i64[1] < 0x384uLL )
          break;
        sub_1416B9630(&v54, &v30);
        v60 = v54.m128i_i64[1];
        v15 = sub_1416C4110(v54.m128i_i64[1], v55);
        if ( v54.m128i_i64[0] )
        {
          v16 = v60;
          v60 = v15;
          sub_140001660(v16, v54.m128i_i64[0], 1);
          v15 = v60;
        }
        if ( v15 )
        {
          v57 = v15;
          if ( *(_QWORD *)off_14223FF10 >= 2u )
          {
            sub_1416B9630(&v45, &v30);
            v60 = v45.m128i_i64[1];
            v37[0] = v45.m128i_i64[1];
            v37[1] = v46;
            v47 = (__m128i *)v37;
            v48 = (__int64 (__fastcall **)())sub_1416CE600;
            v49 = (__int64)&v57;
            v50 = sub_1416EA080;
            v54.m128i_i64[0] = (__int64)aCodexmateLibCo_41;
            v54.m128i_i64[1] = 37;
            v55 = aCodexmateLibCo_41;
            *(_QWORD *)v56 = 37;
            *(_QWORD *)&v56[8] = &off_141A6BA68;
            sub_140AF72B0(&unk_141A6BA26, &v47, 2, &v54);
            if ( v45.m128i_i64[0] )
              sub_140001660(v60, v45.m128i_i64[0], 1);
          }
          sub_1401E7560((unsigned int)&v47, (_DWORD)v11, 0, 1, 1);
          v60 = (__int64)v48;
          if ( (_BYTE)v47 )
            sub_14196B2DB(v60, v49);
          v44 = v49;
          sub_1419234B0(v49, v12, v11);
          v45.m128i_i64[0] = 0;
          v45.m128i_i64[1] = 1;
          v46 = 0;
          v49 = 1610612768;
          v47 = &v45;
          v48 = &off_141A6D298;
          if ( (unsigned __int8)sub_1416EA080(&v57, &v47) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v59,
              (unsigned int)&unk_141A69A18,
              (__int64)&off_141A6D350);
          *(_QWORD *)&v56[16] = v46;
          *(__m128i *)v56 = _mm_loadu_si128(&v45);
          v54.m128i_i64[0] = v60;
          v54.m128i_i64[1] = v44;
          v55 = v11;
          v17 = v52;
          if ( v52 == (_QWORD)v51 )
            sub_1419396D0(&v51);
          v18 = *((_QWORD *)&v51 + 1);
          v19 = 48 * v17;
          v20 = _mm_loadu_si128(&v54);
          v21 = _mm_loadu_si128((const __m128i *)&v55);
          *(_OWORD *)(*((_QWORD *)&v51 + 1) + v19 + 32) = *(_OWORD *)&v56[8];
          *(__m128i *)(v18 + v19 + 16) = v21;
          *(__m128i *)(v18 + v19) = v20;
          v52 = v17 + 1;
          if ( (unsigned int)(v57 & 3) - 2 >= 2 && (v57 & 3) != 0 )
          {
            v54.m128i_i64[1] = v57 - 1;
            v54.m128i_i8[0] = 3;
            sub_1416EBAD0(&v54.m128i_u64[1]);
          }
        }
        else
        {
          ++v43;
          v42 += v13 | (v14 << 32);
        }
        if ( v38 )
          sub_140001660(v58, v38, 1);
        if ( !_InterlockedDecrement64(v30) )
          goto LABEL_11;
      }
      if ( v38 )
        sub_140001660(v58, v38, 1);
      if ( !_InterlockedDecrement64(v30) )
LABEL_11:
        sub_141141760(&v30);
    }
  }
  *(_QWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = v4;
  return a1;
}
