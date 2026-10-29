// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1403408d0 | name sub_1403408D0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1403408D0(__int64 a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v4; // rax
  const __m128i *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD v31[2]; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v32[2]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+30h]
  __int128 v35; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+48h]
  __m128i v37; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v38; // [rsp+E0h] [rbp+60h]
  __int64 v39; // [rsp+F8h] [rbp+78h] BYREF
  _DWORD *v40; // [rsp+100h] [rbp+80h]
  __int64 v41; // [rsp+108h] [rbp+88h]
  _BYTE v42[7]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v43; // [rsp+117h] [rbp+97h] BYREF
  __int64 v44; // [rsp+127h] [rbp+A7h]
  char v45; // [rsp+133h] [rbp+B3h]
  char v46; // [rsp+134h] [rbp+B4h]
  char v47; // [rsp+135h] [rbp+B5h]
  char v48; // [rsp+136h] [rbp+B6h]
  char v49; // [rsp+137h] [rbp+B7h]
  __int64 v50; // [rsp+138h] [rbp+B8h]

  v50 = -2;
  result = sub_1402F5AF0((__m128i *)v42, a2);
  if ( v42[0] == 0xFF )
  {
    *(_BYTE *)a1 = -1;
    return result;
  }
  v32[1] = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
  v32[0] = _mm_loadu_si128((const __m128i *)v42);
  v4 = sub_1416419F0(aType_4, 4, v32);
  if ( v4 && *(_BYTE *)v4 == 3 )
  {
    v5 = *(const __m128i **)(v4 + 16);
    v6 = *(_QWORD *)(v4 + 24);
    if ( v6 == 17 )
    {
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(v5[1].m128i_u8[0]), (__m128i)xmmword_1419D35A0),
               _mm_cmpeq_epi8(_mm_loadu_si128(v5), (__m128i)xmmword_1419D3590))) == 0xFFFF )
      {
        v10 = sub_1416419F0(aData_4, 4, v32);
        if ( v10 )
        {
          if ( *(_BYTE *)v10 == 3 )
          {
            v11 = *(_QWORD *)(v10 + 16);
            v12 = *(_QWORD *)(v10 + 24);
            v33 = v11;
            v34 = v12;
            if ( v12 )
            {
              *(_QWORD *)&v35 = 0;
              v36 = 0;
              nullsub_1(v11);
              v13 = (_DWORD *)sub_140001650(4, 1);
              if ( !v13 )
                sub_141938D2B(1, 4);
              *v13 = 1701869940;
              v39 = 4;
              v40 = v13;
              v41 = 4;
              v49 = 1;
              sub_14040FB10(v42, &off_1419E97B0);
              if ( v42[0] == 0xFF )
              {
                v37.m128i_i64[0] = *(_QWORD *)((char *)&v43 + 1);
                sub_141939040(
                  (unsigned int)aCalledResultUn_2,
                  43,
                  (unsigned int)&v37,
                  (unsigned int)&off_1419E6A30,
                  (__int64)&off_1419E97C0);
              }
              v14 = _mm_loadu_si128((const __m128i *)v42);
              v38 = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
              v37 = v14;
              v49 = 0;
              sub_140E72AA0(v42, &v35, &v39, &v37);
              if ( v42[0] != 0xFF )
                sub_14002F9D0(v42);
              nullsub_1(v15);
              v16 = (_DWORD *)sub_140001650(4, 1);
              if ( !v16 )
                sub_141938D2B(1, 4);
              *v16 = 1635017060;
              v39 = 4;
              v40 = v16;
              v41 = 4;
              v48 = 1;
              sub_14040FB10(v42, &v33);
              if ( v42[0] == 0xFF )
              {
                v37.m128i_i64[0] = *(_QWORD *)((char *)&v43 + 1);
                sub_141939040(
                  (unsigned int)aCalledResultUn_2,
                  43,
                  (unsigned int)&v37,
                  (unsigned int)&off_1419E6A30,
                  (__int64)&off_1419E97C0);
              }
              v17 = _mm_loadu_si128((const __m128i *)v42);
              v38 = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
              v37 = v17;
              v48 = 0;
              sub_140E72AA0(v42, &v35, &v39, &v37);
              if ( v42[0] != 0xFF )
                sub_14002F9D0(v42);
              goto LABEL_41;
            }
          }
        }
      }
    }
    else if ( v6 == 8 && v5->m128i_i64[0] == 0x676E696B6E696874LL )
    {
      v7 = sub_1416419F0(aThinking_0, 8, v32);
      v8 = 1;
      if ( v7 && *(_BYTE *)v7 == 3 )
      {
        v8 = *(_QWORD *)(v7 + 16);
        v9 = *(_QWORD *)(v7 + 24);
      }
      else
      {
        v9 = 0;
      }
      v31[0] = v8;
      v31[1] = v9;
      v18 = sub_1416419F0(aSignature_0, 9, v32);
      if ( v18 )
      {
        if ( *(_BYTE *)v18 == 3 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          v20 = *(_QWORD *)(v18 + 24);
          v33 = v19;
          v34 = v20;
          if ( v20 )
          {
            *(_QWORD *)&v35 = 0;
            v36 = 0;
            nullsub_1(v19);
            v21 = (_DWORD *)sub_140001650(4, 1);
            if ( !v21 )
              sub_141938D2B(1, 4);
            *v21 = 1701869940;
            v39 = 4;
            v40 = v21;
            v41 = 4;
            v47 = 1;
            sub_14040FB10(v42, &off_1419E97D8);
            if ( v42[0] == 0xFF )
            {
              v37.m128i_i64[0] = *(_QWORD *)((char *)&v43 + 1);
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v37,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E97E8);
            }
            v22 = _mm_loadu_si128((const __m128i *)v42);
            v38 = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
            v37 = v22;
            v47 = 0;
            sub_140E72AA0(v42, &v35, &v39, &v37);
            if ( v42[0] != 0xFF )
              sub_14002F9D0(v42);
            nullsub_1(v23);
            v24 = (_QWORD *)sub_140001650(8, 1);
            if ( !v24 )
              sub_141938D2B(1, 8);
            *v24 = 0x676E696B6E696874LL;
            v39 = 8;
            v40 = v24;
            v41 = 8;
            v46 = 1;
            sub_14040FB10(v42, v31);
            if ( v42[0] == 0xFF )
            {
              v37.m128i_i64[0] = *(_QWORD *)((char *)&v43 + 1);
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v37,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E97E8);
            }
            v25 = _mm_loadu_si128((const __m128i *)v42);
            v38 = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
            v37 = v25;
            v46 = 0;
            sub_140E72AA0(v42, &v35, &v39, &v37);
            if ( v42[0] != 0xFF )
              sub_14002F9D0(v42);
            nullsub_1(v26);
            v27 = sub_140001650(9, 1);
            if ( !v27 )
              sub_141938D2B(1, 9);
            *(_QWORD *)v27 = 0x727574616E676973LL;
            *(_BYTE *)(v27 + 8) = 101;
            v39 = 9;
            v40 = (_DWORD *)v27;
            v41 = 9;
            v45 = 1;
            sub_14040FB10(v42, &v33);
            if ( v42[0] == 0xFF )
            {
              v37.m128i_i64[0] = *(_QWORD *)((char *)&v43 + 1);
              sub_141939040(
                (unsigned int)aCalledResultUn_2,
                43,
                (unsigned int)&v37,
                (unsigned int)&off_1419E6A30,
                (__int64)&off_1419E97E8);
            }
            v28 = _mm_loadu_si128((const __m128i *)v42);
            v38 = _mm_loadu_si128((const __m128i *)((char *)&v43 + 9));
            v37 = v28;
            v45 = 0;
            sub_140E72AA0(v42, &v35, &v39, &v37);
            if ( v42[0] != 0xFF )
              sub_14002F9D0(v42);
LABEL_41:
            v43 = v35;
            v44 = v36;
            *(_BYTE *)a1 = 5;
            v29 = *((_QWORD *)&v43 + 1);
            v30 = v44;
            *(__m128i *)(a1 + 1) = _mm_loadu_si128((const __m128i *)v42);
            *(_QWORD *)(a1 + 16) = v29;
            *(_QWORD *)(a1 + 24) = v30;
            return (__m128i *)sub_14002F9D0(v32);
          }
        }
      }
    }
  }
  *(_BYTE *)a1 = -1;
  return (__m128i *)sub_14002F9D0(v32);
}
