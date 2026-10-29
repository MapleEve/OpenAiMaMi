// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140e9f030 | successor of pre-update 0x140d82750 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_140E9F030(__int64 a1, __int64 *a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __m128i v9; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // r12
  __int64 *v22; // r13
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int128 v29; // xmm2
  __int8 v30; // r15
  __m128i v31; // xmm1
  __m128i *v32; // rax
  char *v33; // rdi
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  unsigned __int64 v36; // rax
  __m128i si128; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // rcx
  __m128i *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r15
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __int128 v46; // xmm2
  char v47; // al
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  __int64 v52; // r14
  __int64 v53; // rbx
  unsigned int v54; // eax
  __int64 v55; // [rsp+28h] [rbp-58h] BYREF
  __int64 v56; // [rsp+30h] [rbp-50h] BYREF
  __int128 v57; // [rsp+38h] [rbp-48h]
  __int128 v58; // [rsp+48h] [rbp-38h]
  __m128i v59; // [rsp+58h] [rbp-28h]
  __m128i v60; // [rsp+68h] [rbp-18h]
  __int128 v61; // [rsp+78h] [rbp-8h]
  __int128 v62; // [rsp+88h] [rbp+8h]
  __int128 v63; // [rsp+98h] [rbp+18h]
  __int64 v64; // [rsp+B0h] [rbp+30h]
  __int64 v65; // [rsp+B8h] [rbp+38h]
  __m128i v66[2]; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v67; // [rsp+180h] [rbp+100h]
  unsigned __int8 v68; // [rsp+194h] [rbp+114h]
  __m128i v69; // [rsp+195h] [rbp+115h] BYREF
  __int8 v70; // [rsp+1A5h] [rbp+125h]
  unsigned __int8 v71; // [rsp+1A6h] [rbp+126h]
  _QWORD v72[2]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v73; // [rsp+1B8h] [rbp+138h]
  __m128i v74; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v75; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v76; // [rsp+1E0h] [rbp+160h]
  __m128i v77; // [rsp+1F0h] [rbp+170h]
  __int64 v78; // [rsp+200h] [rbp+180h]
  __m128i v79; // [rsp+210h] [rbp+190h] BYREF
  __int8 v80; // [rsp+220h] [rbp+1A0h]
  __int64 v81; // [rsp+230h] [rbp+1B0h]
  __int64 v82; // [rsp+238h] [rbp+1B8h]
  _BYTE v83[80]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v84; // [rsp+290h] [rbp+210h]
  __m512i v85; // [rsp+2A0h] [rbp+220h] BYREF
  __int128 v86; // [rsp+2E0h] [rbp+260h]
  __int128 v87; // [rsp+2F0h] [rbp+270h]
  __int64 v88; // [rsp+300h] [rbp+280h]
  unsigned int v89; // [rsp+308h] [rbp+288h]
  char v90; // [rsp+30Fh] [rbp+28Fh]
  __int64 v91; // [rsp+310h] [rbp+290h]

  v91 = -2;
  v6 = a2[2];
  v73 = *(_QWORD *)(v6 + 16);
  v81 = a3;
  if ( v73 != -1 )
  {
    sub_1416DB410(&v56, v6 + 16);
    v55 = 9;
    *(_OWORD *)(a1 + 80) = v61;
    v7 = v57;
    v8 = v58;
    v9 = v59;
    *(__m128i *)(a1 + 64) = v60;
    *(__m128i *)(a1 + 48) = v9;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_QWORD *)a1 = v55;
    *(_QWORD *)(a1 + 8) = v56;
    return sub_140292E20(v81);
  }
  sub_1419234B0(&v55, a3, 384);
  v90 = 1;
  sub_140D67510(&v85, v64, v65);
  if ( v85.m512i_i32[0] != -1 )
  {
    *(_OWORD *)(a1 + 80) = v87;
    *(_OWORD *)(a1 + 64) = v86;
    v12 = _mm_loadu_si128((const __m128i *)&v85);
    v13 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[2]);
    v14 = *(_OWORD *)&v85.m512i_u64[4];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v85.m512i_u64[6];
    *(_OWORD *)(a1 + 32) = v14;
    *(__m128i *)(a1 + 16) = v13;
    *(__m128i *)a1 = v12;
    return sub_140292E20(&v55);
  }
  v15 = a2[3];
  v90 = 1;
  sub_140E9FD60(&v85, v15);
  if ( v59.m128i_i64[0] )
    sub_140001660(v59.m128i_i64[1], v59.m128i_i64[0], 1);
  if ( v60.m128i_i64[1] )
    sub_140001660(v61, v60.m128i_i64[1], 1);
  v18 = v62;
  if ( (_QWORD)v62 != -1 && (_QWORD)v62 )
    sub_140001660(*((_QWORD *)&v62 + 1), v62, 1);
  v63 = v86;
  v19 = _mm_loadu_si128((const __m128i *)&v85);
  v20 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[2]);
  v62 = *(_OWORD *)&v85.m512i_u64[6];
  v61 = *(_OWORD *)&v85.m512i_u64[4];
  v60 = v20;
  v59 = v19;
  v21 = a2[1];
  LOBYTE(v16) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v21 + 16), 1, 0) )
  {
    v90 = 1;
    sub_141969A30((volatile void *)(v21 + 16));
  }
  v22 = off_142240260;
  if ( !(2 * *off_142240260) )
  {
    v89 = 0;
    if ( !*(_BYTE *)(v21 + 17) )
      goto LABEL_16;
LABEL_75:
    v85.m512i_i64[0] = v21 + 16;
    v85.m512i_i8[8] = v89;
    sub_14196B5F0(
      (unsigned int)aRelayStatePois_1,
      20,
      (unsigned int)&v85,
      (unsigned int)&off_141A9F520,
      (__int64)&off_141A9F740);
  }
  v90 = 1;
  v54 = sub_14196A710(v16, v18, v17);
  LOBYTE(v54) = v54 ^ 1;
  v89 = v54;
  if ( *(_BYTE *)(v21 + 17) )
    goto LABEL_75;
LABEL_16:
  v82 = v21 + 16;
  v23 = *a2;
  sub_140EA81D0(&v85, v23, v21 + 24);
  if ( v85.m512i_i32[0] != -1 )
  {
    *(_OWORD *)(a1 + 80) = v87;
    *(_OWORD *)(a1 + 64) = v86;
    v27 = _mm_loadu_si128((const __m128i *)&v85);
    v28 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[2]);
    v29 = *(_OWORD *)&v85.m512i_u64[4];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v85.m512i_u64[6];
    *(_OWORD *)(a1 + 32) = v29;
    *(__m128i *)(a1 + 16) = v28;
    *(__m128i *)a1 = v27;
LABEL_46:
    v33 = (char *)(v21 + 16);
LABEL_47:
    if ( !(_BYTE)v89 )
    {
      if ( 2 * *v22 )
      {
        v90 = 1;
        if ( !(unsigned __int8)sub_14196A710(v25, v24, v26) )
          *(_BYTE *)(v21 + 17) = 1;
      }
    }
    v47 = *v33;
    *v33 = 0;
    if ( v47 == 2 )
    {
      v90 = 1;
      WakeByAddressSingle(v33);
    }
    return sub_140292E20(&v55);
  }
  v30 = a4->m128i_i8[0];
  if ( a4->m128i_i8[0] == 1 )
  {
    sub_1407D5CC0(&v85);
    v74 = *(__m128i *)&v85.m512i_u64[1];
    v75 = *(__m128i *)&v85.m512i_u64[3];
    v76 = *(_OWORD *)&v85.m512i_u64[5];
    v77 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[7]);
    v78 = *((_QWORD *)&v86 + 1);
    if ( v85.m512i_i64[0] != -1 )
    {
      v84 = v87;
      v31 = _mm_load_si128(&v75);
      *(__m128i *)&v83[8] = _mm_load_si128(&v74);
      *(__m128i *)&v83[24] = v31;
      *(_OWORD *)&v83[40] = v76;
      *(__m128i *)&v83[56] = v77;
      *(_QWORD *)&v83[72] = v78;
      *(_QWORD *)v83 = v85.m512i_i64[0];
LABEL_32:
      *(_OWORD *)(a1 + 80) = v84;
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v83[64];
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v83[72];
      v25 = *(_QWORD *)&v83[8];
      v36 = *(_QWORD *)v83;
      si128 = _mm_load_si128((const __m128i *)&v83[16]);
      v38 = _mm_load_si128((const __m128i *)&v83[32]);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v83[48];
      *(__m128i *)(a1 + 32) = v38;
      *(__m128i *)(a1 + 16) = si128;
      *(_OWORD *)a1 = __PAIR128__(v25, v36);
      goto LABEL_46;
    }
    if ( v74.m128i_i64[0] != -1 )
      sub_14002F660(&v74);
    sub_1407E52E0((__int64)&v85, v23 + 16);
    if ( v85.m512i_i32[0] == -1 )
    {
      sub_1408D1F30(v83, v23 + 16);
    }
    else
    {
      v84 = v87;
      *(_OWORD *)&v83[64] = v86;
      v34 = _mm_loadu_si128((const __m128i *)&v85);
      v35 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[2]);
      *(_OWORD *)&v83[48] = *(_OWORD *)&v85.m512i_u64[6];
      *(_OWORD *)&v83[32] = *(_OWORD *)&v85.m512i_u64[4];
      *(__m128i *)&v83[16] = v35;
      *(__m128i *)v83 = v34;
    }
    if ( *(_QWORD *)v83 != -1 )
      goto LABEL_32;
  }
  else if ( v68 != *(_BYTE *)(v21 + 388) || v68 && v71 != *(_BYTE *)(v21 + 406) )
  {
    nullsub_1(v25, v24);
    v32 = (__m128i *)sub_140001650(71, 1);
    v33 = (char *)(v21 + 16);
    if ( !v32 )
      sub_14196B2DB(1, 71);
    qmemcpy(&v32[1], "FLICT: active route changes require a transition commit", 55);
    *v32 = _mm_loadu_si128((const __m128i *)&xmmword_141A9F82B);
    v25 = 0x74696D6D6F63206ELL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 71;
    *(_QWORD *)(a1 + 16) = v32;
    *(_QWORD *)(a1 + 24) = 71;
    goto LABEL_47;
  }
  v39 = *(unsigned __int8 *)(v21 + 389);
  if ( !v69.m128i_i8[0] )
  {
    if ( (_BYTE)v39 )
      goto LABEL_36;
LABEL_42:
    v80 = *(_BYTE *)(v21 + 405);
    v79 = _mm_loadu_si128((const __m128i *)(v21 + 389));
    if ( !v30 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( (_BYTE)v39 )
  {
    v39 = (unsigned int)_mm_movemask_epi8(
                          _mm_cmpeq_epi8(
                            _mm_loadu_si128((const __m128i *)(v21 + 390)),
                            _mm_loadu_si128((const __m128i *)&v69.m128i_i8[1])));
    if ( (_DWORD)v39 == 0xFFFF )
      goto LABEL_42;
  }
LABEL_36:
  if ( v30
    || (v39 = v68, v68 != *(_BYTE *)(v21 + 388))
    || (v39 = v71, a4 = (const __m128i *)(v21 + 389), v71 != *(_BYTE *)(v21 + 406)) )
  {
    nullsub_1(v39, v24);
    v40 = (__m128i *)sub_140001650(88, 1);
    if ( !v40 )
      sub_14196B2DB(1, 88);
    qmemcpy(&v40[1], "FLICT: route changed after this state snapshot; retry from current state", 72);
    *v40 = _mm_loadu_si128((const __m128i *)&xmmword_141A9F7D3);
    v25 = 0x657461747320746ELL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 88;
    *(_QWORD *)(a1 + 16) = v40;
    *(_QWORD *)(a1 + 24) = 88;
    goto LABEL_46;
  }
LABEL_43:
  v80 = a4[1].m128i_i8[0];
  v79 = _mm_loadu_si128(a4);
LABEL_44:
  v70 = v80;
  v69 = _mm_load_si128(&v79);
  v41 = v23 + 16;
  sub_140747E70(&v85, v41, &v55);
  v43 = v85.m512i_i64[1];
  v42 = v85.m512i_i64[0];
  if ( v85.m512i_i64[0] != -1 )
  {
    *(_OWORD *)(a1 + 80) = v87;
    v44 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[2]);
    v45 = _mm_loadu_si128((const __m128i *)&v85.m512i_u64[4]);
    v46 = *(_OWORD *)&v85.m512i_u64[6];
    *(_OWORD *)(a1 + 64) = v86;
    *(_OWORD *)(a1 + 48) = v46;
    *(__m128i *)(a1 + 32) = v45;
    *(__m128i *)(a1 + 16) = v44;
    *(_QWORD *)a1 = v42;
    *(_QWORD *)(a1 + 8) = v43;
    goto LABEL_46;
  }
  if ( v85.m512i_i64[1] )
  {
    v88 = v85.m512i_i64[1];
    sub_140747A60((__int64)v83, v41, (__int64)&v55);
    if ( *(_DWORD *)v83 != -1 )
    {
      v87 = v84;
      v86 = *(_OWORD *)&v83[64];
      v48 = _mm_loadu_si128((const __m128i *)v83);
      v49 = _mm_loadu_si128((const __m128i *)&v83[16]);
      *(_OWORD *)&v85.m512i_u64[6] = *(_OWORD *)&v83[48];
      *(_OWORD *)&v85.m512i_u64[4] = *(_OWORD *)&v83[32];
      *(__m128i *)&v85.m512i_u64[2] = v49;
      *(__m128i *)v85.m512i_i8 = v48;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v72[0] = &v85;
        v72[1] = sub_140D76130;
        v74.m128i_i64[0] = (__int64)aCodexmateLibCo_50;
        v74.m128i_i64[1] = 35;
        v75.m128i_i64[0] = (__int64)aCodexmateLibCo_50;
        v75.m128i_i64[1] = 35;
        *(_QWORD *)&v76 = &off_141A9F798;
        sub_140AF72B0(&unk_141A9F758, v72, 2, &v74);
      }
      sub_140D8A3A0(&v85);
    }
    v43 = v88;
  }
  v50 = _mm_loadu_si128((const __m128i *)(v21 + 336));
  v66[0] = v50;
  v51 = _mm_loadu_si128((const __m128i *)(v21 + 352));
  v67 = *(_OWORD *)(v21 + 368);
  v66[1] = v51;
  if ( v68 == *(_BYTE *)(v21 + 388) && v71 == *(_BYTE *)(v21 + 406) )
  {
    v88 = v43;
    sub_1401F5580((__int64)v83, v56, v57, v58, *((__int64 *)&v58 + 1));
    sub_1401F5580(
      (__int64)&v85,
      *(_QWORD *)(v21 + 32),
      *(_QWORD *)(v21 + 40),
      *(_QWORD *)(v21 + 56),
      *(_QWORD *)(v21 + 64));
    if ( *(_QWORD *)&v83[16] == v85.m512i_i64[2] )
    {
      v52 = v85.m512i_i64[1];
      v53 = *(_QWORD *)&v83[8];
      if ( !(unsigned int)sub_141923B40(*(_QWORD *)&v83[8], v85.m512i_i64[1], *(_QWORD *)&v83[16]) )
      {
        if ( v85.m512i_i64[0] )
          sub_140001660(v52, v85.m512i_i64[0], 1);
        if ( *(_QWORD *)v83 )
          sub_140001660(v53, *(_QWORD *)v83, 1);
        v43 = v88;
        goto LABEL_68;
      }
    }
    v43 = v88;
    if ( v85.m512i_i64[0] )
      sub_140001660(v85.m512i_i64[1], v85.m512i_i64[0], 1);
    if ( *(_QWORD *)v83 )
      sub_140001660(*(_QWORD *)&v83[8], *(_QWORD *)v83, 1);
    v50 = _mm_loadu_si128(v66);
  }
  v66[0] = _mm_sub_epi64(v50, (__m128i)-1LL);
  WORD4(v67) = -2;
LABEL_68:
  sub_140292E20(v21 + 24);
  sub_1419234B0(v21 + 24, &v55, 384);
  *(_QWORD *)(a1 + 8) = v43;
  *(_QWORD *)a1 = -1;
  v90 = 0;
  return sub_14002B980(v82, v89);
}
