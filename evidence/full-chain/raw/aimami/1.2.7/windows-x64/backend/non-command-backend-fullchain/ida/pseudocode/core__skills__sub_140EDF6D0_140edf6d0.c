// win 1.2.7 | module src/core/skills.rs | ea 0x140edf6d0 | name sub_140EDF6D0
// win 1.2.7 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EDF6D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i si128; // xmm6
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  __int128 v16; // xmm0
  char v17[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  _OWORD v20[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v22[8]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v23; // [rsp+E4h] [rbp+64h] BYREF
  _OWORD v24[4]; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v25; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v26; // [rsp+140h] [rbp+C0h]
  __int64 v27; // [rsp+150h] [rbp+D0h]
  unsigned __int64 v28; // [rsp+158h] [rbp+D8h]
  char v29; // [rsp+167h] [rbp+E7h]
  __int64 v30; // [rsp+168h] [rbp+E8h]

  v30 = -2;
  if ( !a5 )
    goto LABEL_18;
  sub_141681AF0(&v21, a4, a5);
  do
    sub_1416A1CC0(v24, &v21);
  while ( LOBYTE(v24[0]) == 9 );
  if ( LOBYTE(v24[0]) == 255 )
  {
    sub_141681D30(&v25, a2, a3);
    sub_141681AF0(v20, a4, a5);
    v24[3] = v20[3];
    v24[2] = v20[2];
    v24[1] = v20[1];
    v24[0] = v20[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_1419E4470);
    do
    {
      while ( 1 )
      {
        sub_1416A1CC0(v17, v24);
        result = (unsigned __int8)v17[0];
        if ( (unsigned __int8)v17[0] == 255 )
        {
          v16 = v25;
          *(_OWORD *)(a1 + 24) = v26;
          *(_OWORD *)(a1 + 8) = v16;
          *(_QWORD *)a1 = -1;
          return result;
        }
        if ( v17[0] != 9 )
          sub_1419392A0("internal error: entered unreachable code: validated above", 115, &off_141A5A460);
        sub_141691590(&v25, v18, v19);
        sub_141695550(&v21, *((_QWORD *)&v25 + 1), v26);
        v12 = v21;
        v13 = v22[0];
        if ( v21 != 2 )
          break;
        v27 = 2;
        v14 = v22[0] & 3;
        v28 = v22[0];
        switch ( v22[0] & 3 )
        {
          case 0:
            v29 = 1;
            v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v22[0], v11) + 8);
            v29 = 1;
            result = v15(HIDWORD(v28));
            v13 = v28;
            goto LABEL_14;
          case 1:
            result = HIDWORD(v22[0]);
LABEL_14:
            if ( (_BYTE)result )
            {
              *(_QWORD *)a1 = 2;
              *(_QWORD *)(a1 + 8) = v13;
              goto LABEL_25;
            }
            if ( (unsigned int)(v14 - 2) >= 2 )
            {
LABEL_16:
              if ( v14 )
              {
                v22[0] = v28 - 1;
                LOBYTE(v21) = 3;
                v29 = 0;
                sub_1416BCB00(v22);
              }
            }
            break;
          default:
            goto LABEL_16;
        }
      }
    }
    while ( _mm_movemask_pd((__m128d)_mm_cmpeq_epi32(
                                       _mm_and_si128(
                                         _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)&v23), 80),
                                         si128),
                                       (__m128i)0LL)) );
    v28 = v22[0];
    nullsub_1(v22[0]);
    result = sub_140001650(53, 1);
    if ( !result )
    {
      v27 = v12;
      v29 = 1;
      sub_141938D2B(1, 53);
    }
    qmemcpy((void *)result, "Skill backup target must not traverse a symbolic link", 53);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 53;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 53;
LABEL_25:
    if ( (_QWORD)v25 )
      return sub_140001660(*((_QWORD *)&v25 + 1), v25, 1);
  }
  else
  {
LABEL_18:
    nullsub_1(a1);
    result = sub_140001650(46, 1);
    if ( !result )
      sub_141938D2B(1, 46);
    qmemcpy((void *)result, "Skill backup contains an invalid relative path", 46);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 46;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 46;
  }
  return result;
}
