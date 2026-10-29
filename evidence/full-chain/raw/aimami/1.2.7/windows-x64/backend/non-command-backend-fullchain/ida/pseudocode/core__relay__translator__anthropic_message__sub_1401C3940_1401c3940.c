// win 1.2.7 | module src/core/relay/translator/anthropic_message.rs | ea 0x1401c3940 | name sub_1401C3940
// win 1.2.7 | module src/core/relay/translator/anthropic_message.rs | attributed via panic-Location xref (win-native)
char *__fastcall sub_1401C3940(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r14
  char *result; // rax
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rax
  void *v16; // rax
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  const __m128i *v20; // r14
  unsigned __int64 v21; // rbx
  int v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // r8
  char v30; // r11
  bool v31; // cf
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r8
  char v36; // r11
  void *v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r13
  char v44; // r9
  __int64 v45; // rax
  void *v46; // r15
  void *v47; // r12
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rsi
  const char *v53; // r14
  const char *v54; // r12
  __int64 v55; // r13
  _BYTE *v56; // rax
  _QWORD *v57; // rcx
  int v58; // ecx
  void *v59; // rax
  const __m128i *v60; // r12
  unsigned __int64 v61; // r15
  __m128i si128; // xmm0
  __m128i *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rcx
  _BYTE *v70; // rax
  bool v71; // zf
  _BYTE *v72; // rax
  __m128i v73; // xmm0
  __m128i *v74; // rax
  _BYTE *v75; // rax
  _BYTE *v76; // rsi
  void *v77; // rax
  _QWORD *v78; // rsi
  __int64 v79; // rax
  const __m128i *v80; // rbx
  unsigned __int64 v81; // rdi
  __int64 v82; // rdx
  __m128i v83; // [rsp+30h] [rbp-50h] BYREF
  __m128i v84; // [rsp+40h] [rbp-40h] BYREF
  __int64 v85; // [rsp+50h] [rbp-30h]
  __m128i *v86; // [rsp+58h] [rbp-28h]
  unsigned __int128 v87; // [rsp+60h] [rbp-20h] BYREF
  __m128i v88; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v89; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int128 v90; // [rsp+90h] [rbp+10h] BYREF
  __m128i v91; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v92; // [rsp+B0h] [rbp+30h]
  __int64 v93; // [rsp+B8h] [rbp+38h]
  __m128i *v94; // [rsp+C0h] [rbp+40h]
  char v95; // [rsp+CDh] [rbp+4Dh]
  char v96; // [rsp+CEh] [rbp+4Eh]
  char v97; // [rsp+CFh] [rbp+4Fh]
  __int64 v98; // [rsp+D0h] [rbp+50h]

  v98 = -2;
  v4 = (_QWORD *)sub_1416419F0(aType_3, 4, a2);
  if ( !v4 )
    v4 = off_1421E7108;
  if ( *(_BYTE *)v4 == 3 )
  {
    v5 = v4[2];
    v6 = v4[3];
  }
  else
  {
    v5 = 1;
    v6 = 0;
  }
  v7 = (_QWORD *)sub_1416419F0(aIndex_0, 5, a2);
  if ( !v7 )
    v7 = off_1421E7108;
  if ( *(_BYTE *)v7 == 2 && !v7[1] )
    v8 = v7[2];
  else
    v8 = 0;
  v89 = v8;
  result = nullptr;
  switch ( v6 )
  {
    case 12LL:
      if ( *(_QWORD *)v5 ^ 0x5F6567617373656DLL | *(unsigned int *)(v5 + 8) ^ 0x706F7473LL )
        return nullptr;
      v10 = (void *)sub_1416419F0(aUsage_0, 5, a2);
      if ( !v10 )
        v10 = off_1421E7108;
      sub_1401C3340(a1, v10);
      if ( *a1 == -1 )
        return &aMaxTokensanthr[71];
      if ( a1[2] == 10 && !(*(_QWORD *)a1[1] ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(a1[1] + 8) ^ 0x736ELL) )
        return nullptr;
      result = (char *)a1[16];
      if ( !result )
      {
        result = &aMaxTokensanthr[10];
        if ( !a1[12] )
          return nullptr;
      }
      return result;
    case 13LL:
      if ( *(_QWORD *)v5 ^ 0x5F6567617373656DLL | *(_QWORD *)(v5 + 5) ^ 0x74726174735F6567LL )
      {
        if ( !(*(_QWORD *)v5 ^ 0x5F6567617373656DLL | *(_QWORD *)(v5 + 5) ^ 0x61746C65645F6567LL) )
        {
          v16 = (void *)sub_1416419F0(aUsage_0, 5, a2);
          v17 = off_1421E7108;
          if ( !v16 )
            v16 = off_1421E7108;
          sub_1401C3340(a1, v16);
          v18 = sub_1416419F0(aDelta_1, 5, a2);
          if ( !v18 )
            v18 = (__int64)v17;
          v19 = sub_1416419F0(aStopReason_0, 11, v18);
          if ( !v19 )
            v19 = (__int64)v17;
          if ( *(_BYTE *)v19 == 3 )
          {
            v20 = *(const __m128i **)(v19 + 16);
            v21 = *(_QWORD *)(v19 + 24);
            if ( *a1 != -1 )
            {
              result = (char *)&unk_1419D92B9;
              if ( a1[2] != v21 )
                return result;
              v22 = sub_1418F4B70(a1[1], v20);
              result = (char *)&unk_1419D92B9;
              if ( v22 )
                return result;
            }
            sub_14072C410((unsigned int)&v90, v21, 0, 1, 1);
            v23 = *((_QWORD *)&v90 + 1);
            if ( (_BYTE)v90 )
              sub_141938D2B(*((_QWORD *)&v90 + 1), v91.m128i_i64[0]);
            v24 = v91.m128i_i64[0];
            if ( v21 )
              sub_1418F44E0((__m128i *)v91.m128i_i64[0], v20, v21);
            v25 = *a1;
            if ( *a1 != -1 && v25 )
              sub_140001660(a1[1], v25, 1);
            *a1 = v23;
            a1[1] = v24;
            a1[2] = v21;
          }
        }
      }
      else
      {
        if ( *((_BYTE *)a1 + 144) )
          return (char *)&unk_1419D9523;
        *((_BYTE *)a1 + 144) = 1;
        v37 = (void *)sub_1416419F0("messagecontenttext", 7, a2);
        v38 = off_1421E7108;
        if ( !v37 )
          v37 = off_1421E7108;
        v39 = sub_1416419F0(aUsage_0, 5, v37);
        if ( v39 )
          v38 = (void *)v39;
        sub_1401C3340(a1, v38);
      }
      return nullptr;
    case 18LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v5 + 16)), (__m128i)xmmword_1419D34D0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1419D34C0))) != 0xFFFF )
        return nullptr;
      if ( !(unsigned __int8)sub_140DEFD40(a1 + 10, &v89) )
        return "Anthropic block_stop has no open block";
      sub_140DEFF90(&v90, a1 + 13, &v89);
      if ( (_QWORD)v90 != -1 )
      {
        v11 = *((_QWORD *)&v90 + 1);
        v12 = v91.m128i_i64[0];
        if ( v91.m128i_i64[0] )
        {
          v94 = (__m128i *)v90;
          v90 = __PAIR128__(v91.m128i_u64[0], *((unsigned __int64 *)&v90 + 1));
          v91 = 0;
          v85 = v11;
          v92 = v11;
          v93 = v12;
          sub_14062D280(&v83, &v90);
          if ( v83.m128i_u8[0] == 255 )
          {
            a1[16] = (__int64)"Invalid Anthropic tool input JSONAnthropic block_stop has no open block";
            a1[17] = 33;
            sub_14018FBE0(&v83);
          }
          else if ( v83.m128i_u8[0] == 5 )
          {
            v13 = sub_140DF02E0(a1 + 7, &v89);
            if ( !v13 )
            {
              v97 = 1;
              sub_141939020(&off_1419D92E0);
            }
            v97 = 1;
            v86 = (__m128i *)sub_141641AF0(aInput, 5, v13);
            sub_14002F9D0(v86);
            v14 = _mm_loadu_si128(&v83);
            v15 = v86;
            v86[1] = _mm_loadu_si128(&v84);
            *v15 = v14;
          }
          else
          {
            a1[16] = (__int64)"Anthropic tool input is not an objectInvalid Anthropic tool input JSONAnthropic block_stop"
                              " has no open block";
            a1[17] = 37;
            sub_14002F9D0(&v83);
          }
          if ( v94 )
            sub_140001660(v85, v94, 1);
        }
        else if ( (_QWORD)v90 )
        {
          sub_140001660(*((_QWORD *)&v90 + 1), v90, 1);
        }
      }
      return nullptr;
    case 19LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1419D34C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v5 + 3)), (__m128i)xmmword_1419D34E0))) == 0xFFFF )
      {
        result = (char *)&unk_1419D94CE;
        if ( *a1 != -1 )
          return result;
        v32 = a1[7];
        if ( v32 )
        {
          v33 = a1[8];
          while ( 1 )
          {
            v34 = 8 * (unsigned int)*(unsigned __int16 *)(v32 + 450);
            v35 = -1;
            do
            {
              if ( !v34 )
              {
                v35 = *(unsigned __int16 *)(v32 + 450);
                goto LABEL_71;
              }
              v36 = (v8 > *(_QWORD *)(v32 + 8 * v35 + 368)) - (v8 < *(_QWORD *)(v32 + 8 * v35 + 368));
              ++v35;
              v34 -= 8;
            }
            while ( v36 == 1 );
            if ( !v36 )
              return result;
LABEL_71:
            v31 = v33-- == 0;
            if ( v31 )
              break;
            v32 = *(_QWORD *)(v32 + 8 * v35 + 456);
          }
        }
        v56 = (_BYTE *)sub_1416419F0(aContentBlock, 13, a2);
        if ( !v56 )
          v56 = off_1421E7108;
        if ( *v56 != 5 )
          return (char *)&unk_1419D9504;
        sub_140287C70(&v90, v56);
        sub_140E7F100(&v87, a1 + 7, v8, &v90);
        if ( (_BYTE)v87 != 0xFF )
          sub_14002F9D0(&v87);
        sub_140E7E8A0(a1 + 10, v8);
        return nullptr;
      }
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_1419D3500),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v5 + 3)), (__m128i)xmmword_1419D34F0))) != 0xFFFF )
        return nullptr;
      v26 = a1[10];
      result = (char *)&unk_1419D94AD;
      if ( v26 )
      {
        v27 = a1[11];
LABEL_51:
        v28 = 8 * (unsigned int)*(unsigned __int16 *)(v26 + 98);
        v29 = -1;
        do
        {
          if ( !v28 )
          {
            v29 = *(unsigned __int16 *)(v26 + 98);
LABEL_57:
            v31 = v27-- == 0;
            if ( v31 )
              return result;
            v26 = *(_QWORD *)(v26 + 8 * v29 + 104);
            goto LABEL_51;
          }
          v30 = (v8 > *(_QWORD *)(v26 + 8 * v29 + 16)) - (v8 < *(_QWORD *)(v26 + 8 * v29 + 16));
          ++v29;
          v28 -= 8;
        }
        while ( v30 == 1 );
        if ( v30 )
          goto LABEL_57;
        v40 = a1[7];
        if ( !v40 )
LABEL_174:
          sub_141939020(&off_1419D9368);
        v41 = a1[8];
LABEL_84:
        v42 = -1;
        v43 = 0;
        do
        {
          if ( !(v43 + 32 * (unsigned int)*(unsigned __int16 *)(v40 + 450)) )
          {
            v42 = *(unsigned __int16 *)(v40 + 450);
LABEL_90:
            v31 = v41-- == 0;
            if ( v31 )
              goto LABEL_174;
            v40 = *(_QWORD *)(v40 + 8 * v42 + 456);
            goto LABEL_84;
          }
          v44 = (v8 > *(_QWORD *)(v40 + 8 * v42 + 368)) - (v8 < *(_QWORD *)(v40 + 8 * v42 + 368));
          v43 -= 32;
          ++v42;
        }
        while ( v44 == 1 );
        if ( v44 )
          goto LABEL_90;
        v45 = sub_1416419F0(aDelta_1, 5, a2);
        v46 = (void *)v45;
        v47 = off_1421E7108;
        if ( !v45 )
          v46 = off_1421E7108;
        v48 = sub_1416419F0(aType_3, 4, v46);
        if ( !v48 )
          v48 = (__int64)v47;
        result = (char *)&unk_1419D948A;
        if ( *(_BYTE *)v48 == 3 )
        {
          v49 = *(_QWORD *)(v48 + 24);
          v50 = v40 - v43 - 32;
          v51 = *(_QWORD *)(v48 + 16);
          switch ( v49 )
          {
            case 10LL:
              if ( !(*(_QWORD *)v51 ^ 0x6C65645F74786574LL | *(unsigned __int16 *)(v51 + 8) ^ 0x6174LL) )
              {
                v52 = 4;
                v53 = "text";
                v54 = "text";
                v55 = 4;
                goto LABEL_121;
              }
              return result;
            case 14LL:
              if ( !(*(_QWORD *)v51 ^ 0x676E696B6E696874LL | *(_QWORD *)(v51 + 6) ^ 0x61746C65645F676ELL) )
              {
                v52 = 8;
                v53 = aThinking;
                v54 = aThinking;
                v55 = 8;
                goto LABEL_121;
              }
              return result;
            case 15LL:
              if ( *(_QWORD *)v51 ^ 0x6E6F697461746963LL | *(_QWORD *)(v51 + 7) ^ 0x61746C65645F736ELL )
              {
                if ( !(*(_QWORD *)v51 ^ 0x727574616E676973LL | *(_QWORD *)(v51 + 7) ^ 0x61746C65645F6572LL) )
                {
                  v55 = 8;
                  v54 = aThinking;
                  v52 = 9;
                  v53 = aSignature;
LABEL_121:
                  v57 = (_QWORD *)sub_1416419F0(aType_3, 4, v50);
                  if ( !v57 )
                    v57 = off_1421E7108;
                  result = &aInvalidAnthrop[56];
                  if ( *(_BYTE *)v57 == 3 && v57[3] == v55 )
                  {
                    v58 = sub_1418F4B70(v57[2], v54);
                    result = &aInvalidAnthrop[56];
                    if ( !v58 )
                    {
                      v59 = (void *)sub_1416419F0(v53, v52, v46);
                      if ( !v59 )
                        v59 = off_1421E7108;
                      if ( *(_BYTE *)v59 == 3 )
                      {
                        v60 = *((const __m128i **)v59 + 2);
                        v61 = *((_QWORD *)v59 + 3);
                        if ( !sub_1416419F0(v53, v52, v50) )
                        {
                          sub_14040FB10(&v90, &unk_1419D74C8);
                          if ( (_BYTE)v90 == 0xFF )
                          {
                            *(_QWORD *)&v87 = *((_QWORD *)&v90 + 1);
                            sub_141939040(
                              (unsigned int)aCalledResultUn_0,
                              43,
                              (unsigned int)&v87,
                              (unsigned int)&off_1419D7F48,
                              (__int64)&off_1419D9380);
                          }
                          v88 = v91;
                          v87 = v90;
                          v96 = 1;
                          v94 = (__m128i *)sub_141641AF0(v53, v52, v50);
                          sub_14002F9D0(v94);
                          si128 = _mm_load_si128((const __m128i *)&v87);
                          v63 = v94;
                          v94[1] = _mm_load_si128(&v88);
                          *v63 = si128;
                        }
                        v64 = sub_1416419F0(v53, v52, v50);
                        result = aInvalidAnthrop;
                        if ( v64 && *(_BYTE *)v64 == 3 )
                        {
                          v65 = *(_QWORD *)(v64 + 24);
                          if ( v61 > *(_QWORD *)(v64 + 8) - v65 )
                          {
                            sub_14190D590(v64 + 8, v65, v61, 1, 1);
                            v65 = *(_QWORD *)(v64 + 24);
                          }
                          else if ( !v61 )
                          {
LABEL_137:
                            *(_QWORD *)(v64 + 24) = v61 + v65;
                            return nullptr;
                          }
                          sub_1418F44E0((__m128i *)(*(_QWORD *)(v64 + 16) + v65), v60, v61);
                          v65 = *(_QWORD *)(v64 + 24);
                          goto LABEL_137;
                        }
                      }
                      else
                      {
                        return &aInvalidAnthrop[28];
                      }
                    }
                  }
                }
                return result;
              }
              v69 = (_QWORD *)sub_1416419F0(aType_3, 4, v50);
              if ( !v69 )
                v69 = off_1421E7108;
              result = (char *)&unk_1419D9417;
              if ( *(_BYTE *)v69 != 3 || v69[3] != 4 || *(_DWORD *)v69[2] != 1954047348 )
                return result;
              v70 = (_BYTE *)sub_1416419F0(aCitation, 8, v46);
              if ( !v70 )
                v70 = off_1421E7108;
              v71 = *v70 == 5;
              result = (char *)&unk_1419D9417;
              if ( !v71 )
                return result;
              v72 = (_BYTE *)sub_1416419F0(aCitations_0, 9, v50);
              if ( !v72 || !*v72 )
              {
                *((_QWORD *)&v90 + 1) = 0;
                v91 = (__m128i)8uLL;
                LOBYTE(v90) = 4;
                v95 = 1;
                v94 = (__m128i *)sub_141641AF0(aCitations_0, 9, v50);
                sub_14002F9D0(v94);
                v73 = _mm_loadu_si128((const __m128i *)&v90);
                v74 = v94;
                v94[1] = _mm_loadu_si128(&v91);
                *v74 = v73;
              }
              v75 = (_BYTE *)sub_141641AF0(aCitations_0, 9, v50);
              if ( *v75 != 4 )
                return (char *)&unk_1419D93FC;
              v76 = v75 + 8;
              v77 = (void *)sub_1416419F0(aCitation, 8, v46);
              if ( !v77 )
                v77 = off_1421E7108;
              sub_140287C70(&v90, v77);
              sub_1401F46A0(v76, &v90);
              return nullptr;
            case 16LL:
              if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v51), (__m128i)xmmword_1419D3510)) != 0xFFFF )
                return result;
              v66 = (_QWORD *)sub_1416419F0(aType_3, 4, v50);
              if ( !v66 )
                v66 = off_1421E7108;
              result = (char *)&unk_1419D9460;
              if ( *(_BYTE *)v66 != 3 )
                return result;
              v67 = (_QWORD *)v66[2];
              v68 = v66[3];
              if ( v68 == 15 )
              {
                if ( *v67 ^ 0x745F726576726573LL | *(_QWORD *)((char *)v67 + 7) ^ 0x6573755F6C6F6F74LL )
                  return result;
              }
              else if ( v68 != 8 || *v67 != 0x6573755F6C6F6F74LL )
              {
                return result;
              }
              sub_140E7F040(&v90, a1 + 13, v8);
              v78 = (_QWORD *)sub_140E61EE0(&v90);
              v79 = sub_1416419F0(aPartialJson, 12, v46);
              if ( !v79 )
                v79 = (__int64)v47;
              if ( *(_BYTE *)v79 == 3 )
              {
                v80 = *(const __m128i **)(v79 + 16);
                v81 = *(_QWORD *)(v79 + 24);
                v82 = v78[2];
                if ( v81 > *v78 - v82 )
                {
                  sub_14190D590((_DWORD)v78, v82, v81, 1, 1);
                  v82 = v78[2];
                }
                else if ( !v81 )
                {
LABEL_168:
                  v78[2] = v81 + v82;
                  return nullptr;
                }
                sub_1418F44E0((__m128i *)(v78[1] + v82), v80, v81);
                v82 = v78[2];
                goto LABEL_168;
              }
              result = (char *)&unk_1419D9443;
              break;
            default:
              return result;
          }
        }
      }
      return result;
    default:
      return result;
  }
}
