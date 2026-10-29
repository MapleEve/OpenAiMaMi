// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140248260 | name sub_140248260
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140248260(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __m128i *result; // rax
  __int128 v7; // kr00_16
  __int128 v8; // kr10_16
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int128 v14; // kr20_16
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i si128; // xmm2
  unsigned __int128 v19; // kr30_16
  char v20; // al
  char v21; // al
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __m128i v29; // xmm1
  _BYTE *v30; // rax
  _BYTE *v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  _BYTE *v35; // rax
  _BYTE *v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // r15
  __m128i *v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int128 v44; // kr40_16
  __int128 v45; // kr50_16
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i v48; // xmm2
  int v49; // edx
  __m128i v50; // xmm0
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // [rsp+38h] [rbp-48h] BYREF
  __int64 v54; // [rsp+48h] [rbp-38h]
  __int64 v55; // [rsp+50h] [rbp-30h] BYREF
  __m128i v56; // [rsp+58h] [rbp-28h]
  __m128i v57; // [rsp+68h] [rbp-18h]
  __m128i v58; // [rsp+78h] [rbp-8h]
  __int128 v59; // [rsp+88h] [rbp+8h]
  __int128 v60; // [rsp+98h] [rbp+18h]
  __m128i v61; // [rsp+A8h] [rbp+28h]
  __int128 v62; // [rsp+B8h] [rbp+38h]
  __int128 v63; // [rsp+C8h] [rbp+48h]
  __int64 v64; // [rsp+D8h] [rbp+58h]
  _OWORD v65[2]; // [rsp+E0h] [rbp+60h] BYREF
  __m128i v66; // [rsp+108h] [rbp+88h] BYREF
  __int64 v67; // [rsp+118h] [rbp+98h]
  _QWORD v68[3]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v69; // [rsp+138h] [rbp+B8h]
  __m128i v70; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v71; // [rsp+150h] [rbp+D0h]
  __m128i v72; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v73; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v74; // [rsp+180h] [rbp+100h] BYREF
  __m128i v75; // [rsp+190h] [rbp+110h] BYREF
  __m512i v76; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v77[40]; // [rsp+1E8h] [rbp+168h] BYREF
  __m512i v78; // [rsp+210h] [rbp+190h] BYREF
  __int128 v79; // [rsp+250h] [rbp+1D0h]
  __int128 v80; // [rsp+260h] [rbp+1E0h]
  __int64 v81; // [rsp+270h] [rbp+1F0h]
  __int64 v82; // [rsp+278h] [rbp+1F8h]
  __int64 v83; // [rsp+280h] [rbp+200h]
  __int64 v84; // [rsp+288h] [rbp+208h]
  __int64 v85; // [rsp+290h] [rbp+210h]
  __int64 v86; // [rsp+298h] [rbp+218h]
  __int64 v87; // [rsp+2A0h] [rbp+220h]
  char v88; // [rsp+2ADh] [rbp+22Dh]
  char v89; // [rsp+2AEh] [rbp+22Eh]
  char v90; // [rsp+2AFh] [rbp+22Fh]
  __int64 v91; // [rsp+2B0h] [rbp+230h]

  v91 = -2;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  result = (__m128i *)sub_14023B160((unsigned int)v77, v4, v5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v74 = *(__m128i *)&v77[8];
  v75 = *(__m128i *)&v77[24];
  v76 = v78;
  if ( *(_QWORD *)v77 == -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v76.m512i_u64[6];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v76.m512i_u64[4];
    v16 = _mm_load_si128(&v74);
    v17 = _mm_load_si128(&v75);
    si128 = _mm_load_si128((const __m128i *)&v76);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v76.m512i_u64[2];
    *(__m128i *)(a1 + 32) = si128;
    *(__m128i *)(a1 + 16) = v17;
    *(__m128i *)a1 = v16;
    return result;
  }
  v64 = v81;
  v63 = v80;
  v62 = v79;
  v56 = v74;
  v57 = _mm_load_si128(&v75);
  v58 = _mm_load_si128((const __m128i *)&v76);
  v59 = *(_OWORD *)&v76.m512i_u64[2];
  v60 = *(_OWORD *)&v76.m512i_u64[4];
  v61 = _mm_load_si128((const __m128i *)&v76.m512i_u64[6]);
  v85 = *(_QWORD *)v77;
  v55 = *(_QWORD *)v77;
  v89 = 0;
  v84 = v4;
  v69 = v5;
  sub_140232D30(v77, &v55, v4, v5);
  v7 = *(_OWORD *)v77;
  v8 = *(_OWORD *)&v77[16];
  v10 = v78.m512i_i64[0];
  v9 = *(_QWORD *)&v77[32];
  result = (__m128i *)v78.m512i_i64[2];
  v11 = v78.m512i_i64[1];
  v14 = *(_OWORD *)&v78.m512i_u64[3];
  v13 = v14 >> 64;
  v12 = v14;
  if ( *(_QWORD *)v77 != -1 )
  {
    *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)&v78.m512i_u64[5]);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v7 + 1);
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 32) = v9;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(a1 + 48) = v11;
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a1 + 64) = v12;
    *(_QWORD *)(a1 + 72) = v13;
    v15 = v85;
    *(_QWORD *)a1 = v7;
    if ( !v15 )
      goto LABEL_30;
    goto LABEL_28;
  }
  v19 = *(_OWORD *)&v78.m512i_u64[2];
  v87 = v19 >> 64;
  v83 = v19;
  v86 = v78.m512i_i64[0];
  v82 = *(_QWORD *)&v77[32];
  if ( *(_QWORD *)&v77[8] != -1 )
  {
    v20 = sub_140237AF0(*(_QWORD *)&v77[16], *(_QWORD *)&v77[24]);
    v10 = v86;
    v9 = v82;
    v12 = v87;
    if ( !v20 )
    {
      if ( !*((_QWORD *)&v7 + 1) )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  if ( v9 != -1 && (v21 = sub_140237AF0(v10, v11), v10 = v86, v12 = v87, !v21)
    || v83 != -1 && (v22 = sub_140237AF0(v87, v13), v10 = v86, v12 = v87, !v22) )
  {
    if ( (unsigned __int64)(*((_QWORD *)&v7 + 1) - 1LL) >= 0xFFFFFFFFFFFFFFFEuLL )
    {
LABEL_23:
      v15 = v85;
      if ( (unsigned __int64)(v82 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_140001660(v10, v82, 1);
        v12 = v87;
      }
      result = (__m128i *)(v83 - 1);
      if ( (unsigned __int64)(v83 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = (__m128i *)sub_140001660(v12, v83, 1);
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = v7;
      if ( !v15 )
        goto LABEL_30;
LABEL_28:
      v27 = v56.m128i_i64[0];
      v28 = v15;
      goto LABEL_29;
    }
LABEL_22:
    sub_140001660(v8, *((_QWORD *)&v7 + 1), 1);
    v10 = v86;
    v12 = v87;
    goto LABEL_23;
  }
  if ( (unsigned __int64)(*((_QWORD *)&v7 + 1) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v23 = v82;
    if ( (unsigned __int64)(v82 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_14;
LABEL_37:
    sub_140001660(v10, v23, 1);
    v12 = v87;
    v24 = v83;
    if ( (unsigned __int64)(v83 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    goto LABEL_15;
  }
  sub_140001660(v8, *((_QWORD *)&v7 + 1), 1);
  v10 = v86;
  v12 = v87;
  v23 = v82;
  if ( (unsigned __int64)(v82 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_37;
LABEL_14:
  v24 = v83;
  if ( (unsigned __int64)(v83 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_15:
    sub_140001660(v12, v24, 1);
LABEL_16:
  v25 = v56.m128i_i64[1];
  v87 = v56.m128i_i64[0];
  sub_1401A4B40(v77, v56.m128i_i64[0], v56.m128i_i64[1]);
  if ( _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 72)), _mm_loadu_si128((const __m128i *)&v77[16])),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 56)), _mm_loadu_si128((const __m128i *)v77)))) == 0xFFFF )
  {
    *(_QWORD *)v77 = v87;
    *(_QWORD *)&v77[8] = v25;
    *(_OWORD *)&v77[16] = 0;
    *(_QWORD *)&v77[32] = v87;
    v78.m512i_i64[0] = v25;
    sub_14062D280(&v74, v77);
    if ( v74.m128i_i8[0] == -1 )
    {
      sub_1401B21E0(v77, v74.m128i_i64[1]);
      result = *(__m128i **)v77;
      v72 = *(__m128i *)&v77[8];
      v73 = *(__m128i *)&v77[24];
      *(_QWORD *)(a1 + 88) = v78.m512i_i64[6];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v78.m512i_u64[4];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v78.m512i_u64[2];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)v78.m512i_i8;
      v33 = _mm_load_si128(&v72);
      v34 = _mm_load_si128(&v73);
      v70 = v33;
      v71 = v34;
      *(__m128i *)(a1 + 24) = v34;
      *(__m128i *)(a1 + 8) = v33;
      *(_QWORD *)a1 = result;
    }
    else
    {
      v29 = _mm_loadu_si128(&v75);
      v65[0] = _mm_loadu_si128(&v74);
      v65[1] = v29;
      v30 = (_BYTE *)sub_141642800(v65, aPayloadBaseIns, 26);
      if ( v30
        && *v30 == 5
        && (v31 = v30 + 8, (v32 = sub_140DEB9A0(v30 + 8, "text", 4)) != 0)
        && *(_BYTE *)v32 == 3
        && !*(_QWORD *)(v32 + 24)
        && ((v35 = (_BYTE *)sub_140DEB9A0(v31, aProvenance, 10)) == nullptr || !*v35) )
      {
        sub_140287C70(&v72, v65);
        v36 = (_BYTE *)sub_1416419F0(aPayload_0, 7, &v72);
        v38 = v36;
        if ( v36 && *v36 == 5 )
        {
          nullsub_1(v37);
          v39 = (__m128i *)sub_140001650(17, 1);
          if ( !v39 )
            sub_141938D2B(1, 17);
          *v39 = _mm_loadu_si128((const __m128i *)aBaseInstructio);
          v39[1].m128i_i8[0] = 115;
          v68[0] = 17;
          v68[1] = v39;
          v68[2] = 17;
          v66.m128i_i64[0] = 0;
          v67 = 0;
          nullsub_1(v40);
          v41 = (_DWORD *)sub_140001650(4, 1);
          if ( !v41 )
            sub_141938D2B(1, 4);
          *v41 = 1954047348;
          v70.m128i_i64[0] = 4;
          v70.m128i_i64[1] = (__int64)v41;
          v71.m128i_i64[0] = 4;
          v90 = 1;
          sub_14040FB10(v77, &off_1419DF370);
          if ( v77[0] == 0xFF )
          {
            v74.m128i_i64[0] = *(_QWORD *)&v77[8];
            sub_141939040(
              (unsigned int)aCalledResultUn_0,
              43,
              (unsigned int)&v74,
              (unsigned int)&off_1419D7F48,
              (__int64)&off_1419DF380);
          }
          v42 = _mm_loadu_si128((const __m128i *)v77);
          v75 = _mm_loadu_si128((const __m128i *)&v77[16]);
          v74 = v42;
          v90 = 0;
          sub_140E72AA0(v77, &v66, &v70, &v74);
          if ( v77[0] != 0xFF )
            sub_14002F9D0(v77);
          *(__m128i *)&v77[8] = _mm_loadu_si128(&v66);
          *(_QWORD *)&v77[24] = v67;
          v77[0] = 5;
          v88 = 0;
          sub_140E72AA0(&v74, v38 + 8, v68, v77);
          if ( v74.m128i_i8[0] != -1 )
            sub_14002F9D0(&v74);
        }
        sub_1401977E0(&v74, (__int64)&v72);
        v43 = v74.m128i_i64[1];
        if ( v74.m128i_i64[0] == -1 )
        {
          *(_QWORD *)a1 = 3;
          *(_QWORD *)(a1 + 8) = v43;
        }
        else
        {
          v53 = v74;
          v54 = v75.m128i_i64[0];
          sub_1402815E0(v77, v87, v25, &v53);
          v44 = *(_OWORD *)v77;
          v45 = *(_OWORD *)&v77[16];
          if ( *(_QWORD *)v77 == -1 )
          {
            v86 = *(_QWORD *)&v77[8];
            v49 = v84;
            v84 = *(_QWORD *)&v77[16];
            sub_14023D390((unsigned int)v77, v49, v69, *(_DWORD *)&v77[16], *(__int64 *)&v77[24], v87, v25);
            if ( *(_DWORD *)v77 == -1 )
            {
              *(_BYTE *)(a1 + 8) = 1;
              *(_QWORD *)a1 = -1;
              if ( v86 )
                sub_140001660(v84, v86, 1);
              sub_14002F9D0(&v72);
              result = (__m128i *)sub_14002F9D0(v65);
              if ( !v85 )
                goto LABEL_30;
              v27 = v87;
              v28 = v85;
              goto LABEL_29;
            }
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v78.m512i_u64[5];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v78.m512i_u64[3];
            v50 = _mm_loadu_si128((const __m128i *)v77);
            v51 = _mm_loadu_si128((const __m128i *)&v77[16]);
            v52 = _mm_loadu_si128((const __m128i *)&v77[32]);
            *(_OWORD *)(a1 + 48) = *(_OWORD *)&v78.m512i_u64[1];
            *(__m128i *)(a1 + 32) = v52;
            *(__m128i *)(a1 + 16) = v51;
            *(__m128i *)a1 = v50;
            if ( v86 )
              sub_140001660(v84, v86, 1);
          }
          else
          {
            v46 = _mm_loadu_si128((const __m128i *)&v77[32]);
            v47 = _mm_loadu_si128((const __m128i *)&v78.m512i_u64[1]);
            v48 = _mm_loadu_si128((const __m128i *)&v78.m512i_u64[3]);
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v78.m512i_u64[5];
            *(__m128i *)(a1 + 64) = v48;
            *(__m128i *)(a1 + 48) = v47;
            *(__m128i *)(a1 + 32) = v46;
            *(_QWORD *)(a1 + 8) = *((_QWORD *)&v44 + 1);
            *(_OWORD *)(a1 + 16) = v45;
            *(_QWORD *)a1 = v44;
          }
        }
        sub_14002F9D0(&v72);
      }
      else
      {
        *(_BYTE *)(a1 + 8) = 0;
        *(_QWORD *)a1 = -1;
      }
      result = (__m128i *)sub_14002F9D0(v65);
    }
  }
  else
  {
    nullsub_1(v26);
    result = (__m128i *)sub_140001650(67, 1);
    if ( !result )
      sub_141938D2B(1, 67);
    qmemcpy(&result[1], "anged after instruction preparation; retry required", 51);
    *result = _mm_loadu_si128((const __m128i *)&xmmword_1419DF398);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 67;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 67;
  }
  v28 = v85;
  if ( !v85 )
    goto LABEL_30;
  v27 = v87;
LABEL_29:
  result = (__m128i *)sub_140001660(v27, v28, 1);
LABEL_30:
  if ( v58.m128i_i64[1] )
    result = (__m128i *)sub_140001660(v59, v58.m128i_i64[1], 1);
  if ( v61.m128i_i64[1] != -1 )
  {
    if ( v61.m128i_i64[1] )
      return (__m128i *)sub_140001660(v62, v61.m128i_i64[1], 1);
  }
  return result;
}
