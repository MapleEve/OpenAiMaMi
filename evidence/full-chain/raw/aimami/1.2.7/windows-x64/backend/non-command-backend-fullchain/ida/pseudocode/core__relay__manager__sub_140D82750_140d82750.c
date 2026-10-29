// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d82750 | name sub_140D82750
// win 1.2.7 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_140D82750(__m128i *a1, __int64 *a2, const __m128i *a3, const __m128i *a4)
{
  __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __int64 v18; // r14
  __int64 *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  char *v26; // rdi
  char v27; // al
  __int8 v29; // r12
  const __m128i *v30; // rax
  __int64 v31; // rcx
  const __m128i *v32; // rcx
  char v33; // dl
  __m128i *v34; // rax
  __m128i *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __int64 v45; // rbx
  __int64 v46; // rdi
  __m128i v47; // [rsp+30h] [rbp-50h] BYREF
  __m128i v48; // [rsp+40h] [rbp-40h] BYREF
  __m128i v49; // [rsp+50h] [rbp-30h] BYREF
  __m128i v50; // [rsp+60h] [rbp-20h]
  __m128i v51; // [rsp+70h] [rbp-10h]
  __m128i v52; // [rsp+80h] [rbp+0h]
  __m128i v53; // [rsp+90h] [rbp+10h]
  __m128i v54; // [rsp+A0h] [rbp+20h]
  __int64 v55; // [rsp+B8h] [rbp+38h]
  __int64 v56; // [rsp+C0h] [rbp+40h]
  __m128i v57[2]; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v58; // [rsp+188h] [rbp+108h]
  unsigned __int8 v59; // [rsp+19Ch] [rbp+11Ch]
  __m128i v60; // [rsp+19Dh] [rbp+11Dh] BYREF
  __int8 v61; // [rsp+1ADh] [rbp+12Dh]
  unsigned __int8 v62; // [rsp+1AEh] [rbp+12Eh]
  _QWORD v63[5]; // [rsp+1B0h] [rbp+130h] BYREF
  __m128i v64; // [rsp+1D8h] [rbp+158h] BYREF
  __m128i v65[5]; // [rsp+1E8h] [rbp+168h] BYREF
  _QWORD v66[2]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v67; // [rsp+248h] [rbp+1C8h]
  __m128i v68; // [rsp+250h] [rbp+1D0h] BYREF
  __int8 v69; // [rsp+260h] [rbp+1E0h]
  const __m128i *v70; // [rsp+270h] [rbp+1F0h]
  __int64 v71; // [rsp+278h] [rbp+1F8h]
  __int64 v72; // [rsp+280h] [rbp+200h]
  __m128i *v73; // [rsp+288h] [rbp+208h]
  __m128i v74; // [rsp+290h] [rbp+210h] BYREF
  __m128i v75; // [rsp+2A0h] [rbp+220h] BYREF
  __m128i v76; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v77; // [rsp+2C0h] [rbp+240h]
  __m128i v78; // [rsp+2D0h] [rbp+250h]
  __m128i v79; // [rsp+2E0h] [rbp+260h]
  unsigned int v80; // [rsp+2F8h] [rbp+278h]
  char v81; // [rsp+2FDh] [rbp+27Dh]
  char v82; // [rsp+2FEh] [rbp+27Eh]
  char v83; // [rsp+2FFh] [rbp+27Fh]
  __int64 v84; // [rsp+300h] [rbp+280h]

  v84 = -2;
  v6 = a2[2];
  v67 = *(_QWORD *)(v6 + 16);
  v70 = a3;
  if ( v67 == -1 )
  {
    sub_1418F44E0(&v47, a3, 0x180u);
    v83 = 1;
    sub_1410217C0(&v74, v55, v56);
    if ( v74.m128i_i32[0] != -1 )
    {
      a1[5] = v79;
      a1[4] = v78;
      v11 = _mm_loadu_si128(&v74);
      v12 = _mm_loadu_si128(&v75);
      v13 = v76;
      a1[3] = v77;
      a1[2] = v13;
      a1[1] = v12;
      *a1 = v11;
LABEL_22:
      sub_1407ADB20(&v47);
      return a1;
    }
    v14 = a2[3];
    v83 = 1;
    sub_140D83350(&v74, v14);
    if ( v50.m128i_i64[0] )
      sub_140001660(v50.m128i_i64[1], v50.m128i_i64[0], 1);
    if ( v51.m128i_i64[1] )
      sub_140001660(v52.m128i_i64[0], v51.m128i_i64[1], 1);
    if ( v53.m128i_i64[0] != -1 && v53.m128i_i64[0] )
      sub_140001660(v53.m128i_i64[1], v53.m128i_i64[0], 1);
    v54 = v78;
    v16 = _mm_loadu_si128(&v74);
    v17 = _mm_loadu_si128(&v75);
    v53 = v77;
    v52 = v76;
    v51 = v17;
    v50 = v16;
    v18 = a2[1];
    LOBYTE(v15) = 1;
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v18 + 16), 1, 0) )
    {
      v83 = 1;
      sub_141937480((volatile void *)(v18 + 16));
    }
    v19 = off_1421E7210;
    if ( 2 * *off_1421E7210 )
    {
      v83 = 1;
      v20 = sub_141938160(v15);
      LOBYTE(v20) = v20 ^ 1;
      if ( !*(_BYTE *)(v18 + 17) )
      {
LABEL_16:
        v80 = v20;
        v71 = v18 + 16;
        v21 = *a2;
        v82 = 1;
        sub_140D8B880(&v74, v21, v18 + 24);
        if ( v74.m128i_i32[0] != -1 )
        {
LABEL_17:
          a1[5] = v79;
          a1[4] = v78;
          v23 = _mm_loadu_si128(&v74);
          v24 = _mm_loadu_si128(&v75);
          v25 = v76;
          a1[3] = v77;
          a1[2] = v25;
          a1[1] = v24;
          *a1 = v23;
          goto LABEL_18;
        }
        v29 = a4->m128i_i8[0];
        if ( a4->m128i_i8[0] == 1 )
        {
          v82 = 1;
          sub_140C751D0((__int64)&v74, v21 + 16);
          if ( v74.m128i_i32[0] != -1 )
            goto LABEL_17;
          v30 = a4;
        }
        else
        {
          v31 = v59;
          if ( v59 != *(_BYTE *)(v18 + 388) || (v30 = a4, v59) && (v31 = v62, v62 != *(_BYTE *)(v18 + 406)) )
          {
            nullsub_1(v31);
            v35 = (__m128i *)sub_140001650(71, 1);
            v26 = (char *)(v18 + 16);
            if ( !v35 )
            {
              v82 = 1;
              sub_141938D2B(1, 71);
            }
            qmemcpy(&v35[1], "FLICT: active route changes require a transition commit", 55);
            *v35 = _mm_loadu_si128((const __m128i *)&xmmword_141A4A42B);
            v22 = 0x74696D6D6F63206ELL;
            a1->m128i_i64[0] = 10;
            a1->m128i_i64[1] = 71;
            a1[1].m128i_i64[0] = (__int64)v35;
            a1[1].m128i_i64[1] = 71;
            if ( (_BYTE)v80 )
              goto LABEL_20;
            goto LABEL_19;
          }
        }
        v32 = (const __m128i *)(v18 + 389);
        v33 = *(_BYTE *)(v18 + 389);
        if ( v60.m128i_i8[0] )
        {
          if ( !v33
            || _mm_movemask_epi8(
                 _mm_cmpeq_epi8(
                   _mm_loadu_si128((const __m128i *)(v18 + 390)),
                   _mm_loadu_si128((const __m128i *)&v60.m128i_i8[1]))) != 0xFFFF )
          {
LABEL_33:
            if ( v29
              || v59 != *(_BYTE *)(v18 + 388)
              || (v30 = (const __m128i *)(v18 + 389), v62 != *(_BYTE *)(v18 + 406)) )
            {
              nullsub_1(v32);
              v34 = (__m128i *)sub_140001650(88, 1);
              if ( !v34 )
              {
                v82 = 1;
                sub_141938D2B(1, 88);
              }
              qmemcpy(&v34[1], "FLICT: route changed after this state snapshot; retry from current state", 72);
              *v34 = _mm_loadu_si128((const __m128i *)&xmmword_141A4A3D3);
              v22 = 0x657461747320746ELL;
              a1->m128i_i64[0] = 10;
              a1->m128i_i64[1] = 88;
              a1[1].m128i_i64[0] = (__int64)v34;
              a1[1].m128i_i64[1] = 88;
LABEL_18:
              v26 = (char *)(v18 + 16);
              if ( (_BYTE)v80 )
              {
LABEL_20:
                v27 = *v26;
                *v26 = 0;
                if ( v27 == 2 )
                {
                  v83 = 1;
                  WakeByAddressSingle(v26);
                }
                goto LABEL_22;
              }
LABEL_19:
              if ( 2 * *v19 )
              {
                v83 = 1;
                if ( !(unsigned __int8)sub_141938160(v22) )
                  *(_BYTE *)(v18 + 17) = 1;
              }
              goto LABEL_20;
            }
LABEL_43:
            v69 = v30[1].m128i_i8[0];
            v68 = _mm_loadu_si128(v30);
LABEL_44:
            v61 = v69;
            v60 = _mm_load_si128(&v68);
            v36 = v21 + 16;
            v82 = 1;
            sub_140F70980(&v74, v36, &v47);
            v22 = v74.m128i_i64[1];
            v37 = v74.m128i_i64[0];
            if ( v74.m128i_i64[0] != -1 )
            {
              a1[5] = v79;
              v38 = _mm_loadu_si128(&v75);
              v39 = _mm_loadu_si128(&v76);
              v40 = v77;
              a1[4] = v78;
              a1[3] = v40;
              a1[2] = v39;
              a1[1] = v38;
              a1->m128i_i64[0] = v37;
              a1->m128i_i64[1] = v22;
              goto LABEL_18;
            }
            v72 = v74.m128i_i64[1];
            if ( v74.m128i_i64[1] )
            {
              v81 = 1;
              sub_140F70560(&v64, v36, &v47);
              if ( v64.m128i_i32[0] != -1 )
              {
                v79 = v65[4];
                v78 = v65[3];
                v41 = _mm_loadu_si128(&v64);
                v42 = _mm_loadu_si128(v65);
                v77 = v65[2];
                v76 = v65[1];
                v75 = v42;
                v74 = v41;
                if ( *(_QWORD *)off_1421E6EC0 >= 2u )
                {
                  v66[0] = &v74;
                  v66[1] = sub_14104A7D0;
                  v63[0] = aCodexmateLibCo_36;
                  v63[1] = 35;
                  v63[2] = aCodexmateLibCo_36;
                  v63[3] = 35;
                  v63[4] = &off_141A4A398;
                  sub_140BAD520(&unk_141A4A358, v66, 2, v63);
                }
                v81 = 1;
                sub_140D1BEA0(&v74);
              }
            }
            v43 = _mm_loadu_si128((const __m128i *)(v18 + 336));
            v57[0] = v43;
            v44 = _mm_loadu_si128((const __m128i *)(v18 + 352));
            v58 = *(_OWORD *)(v18 + 368);
            v57[1] = v44;
            if ( v59 == *(_BYTE *)(v18 + 388) && v62 == *(_BYTE *)(v18 + 406) )
            {
              v81 = 1;
              sub_140DB7C10((__int64)&v64, v47.m128i_i32[2], v48.m128i_i32[0], v49.m128i_i32[0], v49.m128i_i64[1]);
              sub_140DB7C10(
                (__int64)&v74,
                *(_QWORD *)(v18 + 32),
                *(_QWORD *)(v18 + 40),
                *(_QWORD *)(v18 + 56),
                *(_QWORD *)(v18 + 64));
              if ( v65[0].m128i_i64[0] == v75.m128i_i64[0] )
              {
                v45 = v74.m128i_i64[1];
                v46 = v64.m128i_i64[1];
                if ( !(unsigned int)sub_1418F4B70(v64.m128i_i64[1], v74.m128i_i64[1]) )
                {
                  if ( v74.m128i_i64[0] )
                    sub_140001660(v45, v74.m128i_i64[0], 1);
                  if ( v64.m128i_i64[0] )
                    sub_140001660(v46, v64.m128i_i64[0], 1);
                  goto LABEL_61;
                }
              }
              if ( v74.m128i_i64[0] )
                sub_140001660(v74.m128i_i64[1], v74.m128i_i64[0], 1);
              if ( v64.m128i_i64[0] )
                sub_140001660(v64.m128i_i64[1], v64.m128i_i64[0], 1);
              v43 = _mm_loadu_si128(v57);
            }
            v57[0] = _mm_sub_epi64(v43, (__m128i)-1LL);
            WORD4(v58) = -2;
LABEL_61:
            v73 = (__m128i *)(v18 + 24);
            sub_1407ADB20(v18 + 24);
            sub_1418F44E0(v73, &v47, 0x180u);
            a1->m128i_i64[1] = v72;
            a1->m128i_i64[0] = -1;
            v83 = 0;
            sub_140028CC0(v71, v80);
            return a1;
          }
        }
        else if ( v33 )
        {
          goto LABEL_33;
        }
        v69 = *(_BYTE *)(v18 + 405);
        v68 = _mm_loadu_si128(v32);
        if ( !v29 )
          goto LABEL_44;
        goto LABEL_43;
      }
    }
    else
    {
      v20 = 0;
      if ( !*(_BYTE *)(v18 + 17) )
        goto LABEL_16;
    }
    v74.m128i_i64[0] = v18 + 16;
    v74.m128i_i8[8] = v20;
    sub_141939040(
      (unsigned int)aRelayStatePois_0,
      20,
      (unsigned int)&v74,
      (unsigned int)&off_141A49A88,
      (__int64)&off_141A4A340);
  }
  sub_1416AC440(&v47.m128i_u64[1], v6 + 16);
  v47.m128i_i64[0] = 9;
  a1[5] = v52;
  v7 = _mm_loadu_si128(&v48);
  v8 = _mm_loadu_si128(&v49);
  v9 = v50;
  a1[4] = v51;
  a1[3] = v9;
  a1[2] = v8;
  a1[1] = v7;
  *a1 = v47;
  sub_1407ADB20(v70);
  return a1;
}
