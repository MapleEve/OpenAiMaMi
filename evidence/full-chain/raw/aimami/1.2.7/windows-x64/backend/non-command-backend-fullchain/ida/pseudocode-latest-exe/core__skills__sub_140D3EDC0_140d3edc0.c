// win 1.2.7 latest-exe | module src/core/skills.rs | ea 0x140d3edc0 | successor of pre-update 0x140edf6d0 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
double __fastcall sub_140D3EDC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128d v9; // xmm0
  __m128i si128; // xmm6
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  unsigned __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  _BYTE v20[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  _OWORD v23[4]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD v24[4]; // [rsp+A0h] [rbp+20h] BYREF
  _OWORD v25[4]; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v26; // [rsp+128h] [rbp+A8h]
  __int64 v27; // [rsp+138h] [rbp+B8h]
  _OWORD v28[4]; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v29; // [rsp+180h] [rbp+100h] BYREF
  __int64 v30; // [rsp+190h] [rbp+110h]
  __m128d v31; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v32; // [rsp+1B0h] [rbp+130h]
  char v33; // [rsp+1C6h] [rbp+146h]
  char v34; // [rsp+1C7h] [rbp+147h]
  __int64 v35; // [rsp+1C8h] [rbp+148h]

  v35 = -2;
  if ( !a5 )
    goto LABEL_20;
  sub_1416B0AC0(v25, a4, a5);
  do
    sub_1416D0C90(v28, v25);
  while ( LOBYTE(v28[0]) == 9 );
  if ( LOBYTE(v28[0]) == 255 )
  {
    sub_1416B0D00(&v31, a2, a3);
    sub_1416B0AC0(v23, a4, a5);
    v9.m128d_f64[0] = *(double *)v23;
    v24[3] = v23[3];
    v24[2] = v23[2];
    v24[1] = v23[1];
    v24[0] = v23[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_141A687C0);
    do
    {
      while ( 1 )
      {
        sub_1416D0C90(v20, v24);
        if ( v20[0] == 255 )
        {
          v9 = v31;
          *(_OWORD *)(a1 + 24) = v32;
          *(__m128d *)(a1 + 8) = v9;
          *(_QWORD *)a1 = -1;
          return v9.m128d_f64[0];
        }
        if ( v20[0] != 9 )
          sub_14196B850("internal error: entered unreachable code: validated above", 115, &off_141A96B98);
        sub_1416C0560(&v31, v21, v22);
        sub_1416C4520(v25, *(_QWORD *)&v31.m128d_f64[1], v32);
        if ( LODWORD(v25[0]) == 2 )
        {
          v13 = *((_QWORD *)&v25[0] + 1);
          *((_QWORD *)&v28[0] + 1) = *((_QWORD *)&v25[0] + 1);
          *(_QWORD *)&v28[0] = 2;
          v14 = BYTE8(v25[0]) & 3;
          switch ( BYTE8(v25[0]) & 3 )
          {
            case 0:
              goto LABEL_14;
            case 1:
              goto LABEL_15;
            default:
              goto LABEL_18;
          }
        }
        v28[0] = v25[0];
        v30 = v27;
        *(_QWORD *)&v9.m128d_f64[0] = v26;
        v29 = v26;
        v28[3] = v25[3];
        v28[2] = v25[2];
        v28[1] = v25[1];
        if ( *(_QWORD *)&v25[0] != 2 )
          break;
        v13 = *((_QWORD *)&v28[0] + 1);
        v14 = BYTE8(v28[0]) & 3;
        switch ( BYTE8(v28[0]) & 3 )
        {
          case 0:
LABEL_14:
            v34 = 1;
            v33 = 1;
            v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v12, v11) + 8);
            v34 = 1;
            v33 = 1;
            LOBYTE(v16) = v15(HIDWORD(v13));
            goto LABEL_16;
          case 1:
LABEL_15:
            v16 = HIDWORD(v13);
LABEL_16:
            if ( (_BYTE)v16 )
            {
              *(_QWORD *)a1 = 2;
              *(_QWORD *)(a1 + 8) = v13;
              goto LABEL_27;
            }
            if ( (unsigned int)(v14 - 2) >= 2 )
            {
LABEL_18:
              if ( v14 )
              {
                *((_QWORD *)&v25[0] + 1) = v13 - 1;
                LOBYTE(v25[0]) = 3;
                v34 = 1;
                v33 = 0;
                sub_1416EBAD0((char *)v25 + 8);
              }
            }
            break;
          default:
            goto LABEL_18;
        }
      }
      v9 = (__m128d)_mm_cmpeq_epi32(
                      _mm_and_si128(_mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)((char *)&v29 + 12)), 80), si128),
                      (__m128i)0LL);
    }
    while ( _mm_movemask_pd(v9) );
    nullsub_1(v12, v11);
    v18 = (void *)sub_140001650(53, 1);
    if ( !v18 )
    {
      v34 = 0;
      v33 = 1;
      sub_14196B2DB(1, 53);
    }
    v9.m128d_f64[0] = 1.274222743419665e161;
    qmemcpy(v18, "Skill backup target must not traverse a symbolic link", 53);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 53;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = 53;
LABEL_27:
    if ( *(_QWORD *)&v31.m128d_f64[0] )
      v9.m128d_f64[0] = sub_140001660(*(_QWORD *)&v31.m128d_f64[1], *(_QWORD *)&v31.m128d_f64[0], 1);
  }
  else
  {
LABEL_20:
    nullsub_1(a1, a2);
    v17 = (void *)sub_140001650(46, 1);
    if ( !v17 )
      sub_14196B2DB(1, 46);
    qmemcpy(v17, "Skill backup contains an invalid relative path", 46);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 46;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = 46;
    v9.m128d_f64[0] = 1.274222743419665e161;
  }
  return v9.m128d_f64[0];
}
