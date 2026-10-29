// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1403283c0 | name sub_1403283C0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_1403283C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rdi
  int v17; // eax
  char v18; // cl
  __int64 v19; // rcx
  void *v20; // rdi
  __int64 v21; // rax
  void *v22; // rax
  __m128i v23; // xmm0
  char v24; // bl
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  __m128i v27; // xmm0
  __m128i v28; // xmm7
  __int64 i; // r14
  __int64 v30; // rbx
  __m128i v32; // xmm8
  __int64 v34; // rax
  int v35; // eax
  _BYTE v37[32]; // [rsp+30h] [rbp-50h] BYREF
  char v38[8]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v39; // [rsp+58h] [rbp-28h]
  __int64 v40; // [rsp+68h] [rbp-18h]
  __m128i v41[2]; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v42[2]; // [rsp+90h] [rbp+10h] BYREF
  _QWORD v43[3]; // [rsp+B8h] [rbp+38h] BYREF
  __m128i v44; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v45; // [rsp+E0h] [rbp+60h]
  __int64 v46; // [rsp+E8h] [rbp+68h]
  __int64 v47; // [rsp+F0h] [rbp+70h]
  __int64 v48; // [rsp+F8h] [rbp+78h]
  _QWORD *v49; // [rsp+100h] [rbp+80h]
  __int64 v50; // [rsp+108h] [rbp+88h]
  __int64 v51; // [rsp+110h] [rbp+90h]
  __int64 v52; // [rsp+118h] [rbp+98h]
  __int64 v53; // [rsp+120h] [rbp+A0h]
  __int64 v54; // [rsp+128h] [rbp+A8h]
  __int64 v55; // [rsp+130h] [rbp+B0h]
  __int64 v56; // [rsp+138h] [rbp+B8h]
  char v57; // [rsp+147h] [rbp+C7h]
  __int64 v58; // [rsp+148h] [rbp+C8h]

  v58 = -2;
  v4 = a1;
  v5 = a1 + 32 * a2;
  v52 = *(_QWORD *)(a3 + 32);
  v47 = *(_QWORD *)(a3 + 40);
  v48 = a4[3];
  v49 = a4 + 4;
  v54 = *a4;
  v53 = a4[1];
  v55 = v5;
LABEL_2:
  while ( 1 )
  {
    v6 = v4;
    if ( v4 == v5 )
      return v6 != v5;
    v7 = (_QWORD *)sub_1416419F0(aName_2, 4, v4);
    if ( !v7 )
      v7 = off_1421E7108;
    if ( *(_BYTE *)v7 == 3 )
    {
      v56 = v7[2];
      v8 = v7[3];
    }
    else
    {
      v56 = 1;
      v8 = 0;
    }
    v9 = (_QWORD *)sub_1416419F0(aType_4, 4, v6);
    if ( !v9 )
      v9 = off_1421E7108;
    v4 = v6 + 32;
    if ( *(_BYTE *)v9 == 3 && v9[3] == 8 && *(_QWORD *)v9[2] == 0x6573755F6C6F6F74LL )
    {
      if ( v52 )
      {
        v51 = v47;
        v10 = v52;
LABEL_15:
        v11 = v10 + 8;
        v50 = v10;
        v46 = *(unsigned __int16 *)(v10 + 1066);
        v12 = 9LL * (unsigned int)(8 * v46);
        v13 = -1;
        v14 = 0;
        do
        {
          if ( v12 == v14 )
          {
            v13 = v46;
LABEL_23:
            v5 = v55;
            v4 = v6 + 32;
            if ( !v51 )
              goto LABEL_37;
            --v51;
            v10 = *(_QWORD *)(v50 + 8 * v13 + 1072);
            goto LABEL_15;
          }
          v15 = v11 + 24;
          v16 = v8 - *(_QWORD *)(v11 + 16);
          v17 = sub_1418F4B70(v56, *(_QWORD *)(v11 + 8));
          if ( v17 )
            v16 = v17;
          v18 = (v16 > 0) - (v16 < 0);
          v14 += 72;
          ++v13;
          v11 = v15;
        }
        while ( v18 == 1 );
        if ( v18 )
          goto LABEL_23;
        v5 = v55;
        v4 = v6 + 32;
        if ( *(_QWORD *)(v50 + v14 + 240) == 6
          && !(**(_DWORD **)(v50 + v14 + 232) ^ 0x74737563
             | *(unsigned __int16 *)(*(_QWORD *)(v50 + v14 + 232) + 4LL) ^ 0x6D6F) )
        {
          goto LABEL_27;
        }
      }
      else
      {
LABEL_37:
        if ( v48 )
        {
          v25 = sub_140D2CC10(v49, v56, v8);
          v4 = v6 + 32;
          v26 = v25;
          v27 = _mm_cvtsi32_si128(v25 >> 57);
          v28 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v27, v27), 0), 68);
          for ( i = 0; ; i += 16 )
          {
            v30 = v53 & v26;
            HIDWORD(_RAX) = HIDWORD(v54);
            v32 = _mm_loadu_si128((const __m128i *)(v54 + v30));
            _ESI = _mm_movemask_epi8(_mm_cmpeq_epi8(v32, v28));
            if ( _ESI )
              break;
LABEL_43:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v32, (__m128i)-1LL)) )
              goto LABEL_2;
            v26 = i + v30 + 16;
          }
          while ( 1 )
          {
            __asm { tzcnt   eax, esi }
            v34 = -3 * (v53 & (v30 + _RAX));
            if ( v8 == *(_QWORD *)(v54 + 8 * v34 - 8) )
            {
              v35 = sub_1418F4B70(v56, *(_QWORD *)(v54 + 8 * v34 - 16));
              v4 = v6 + 32;
              if ( !v35 )
                break;
            }
            _RAX = (unsigned int)(_ESI - 1);
            LOWORD(_RAX) = _ESI & (_ESI - 1);
            _ESI = _RAX;
            if ( !(_WORD)_RAX )
              goto LABEL_43;
          }
LABEL_27:
          v20 = (void *)sub_1416419F0(aInput_0, 5, v6);
          if ( !v20 )
            v20 = off_1421E7108;
          v44.m128i_i64[0] = 0;
          v45 = 0;
          nullsub_1(v19);
          v21 = sub_140001650(5, 1);
          if ( !v21 )
            sub_141938D2B(1, 5);
          *(_BYTE *)(v21 + 4) = 116;
          *(_DWORD *)v21 = 1970302569;
          v43[0] = 5;
          v56 = v21;
          v43[1] = v21;
          v43[2] = 5;
          v22 = (void *)sub_1416419F0(aInput_0, 5, v6);
          if ( !v22 )
            v22 = off_1421E7108;
          sub_140314E80(v37, v22);
          v57 = 1;
          sub_140412420(v41, v37);
          if ( v41[0].m128i_i8[0] == -1 )
          {
            *(_QWORD *)&v42[0] = v41[0].m128i_i64[1];
            sub_141939040(
              (unsigned int)aCalledResultUn_2,
              43,
              (unsigned int)v42,
              (unsigned int)&off_1419E6A30,
              (__int64)&off_1419E6218);
          }
          v23 = _mm_loadu_si128(v41);
          v42[1] = v41[1];
          v42[0] = v23;
          v57 = 0;
          sub_140E72AA0(v41, &v44, v43, v42);
          if ( v41[0].m128i_i8[0] != -1 )
            sub_14002F9D0(v41);
          sub_14002F9D0(v37);
          v40 = v45;
          v39 = _mm_loadu_si128(&v44);
          v38[0] = 5;
          v24 = sub_14036ACA0(v20, v38);
          sub_14002F9D0(v38);
          v5 = v55;
          v4 = v6 + 32;
          if ( !v24 )
            return v6 != v5;
        }
      }
    }
  }
}
