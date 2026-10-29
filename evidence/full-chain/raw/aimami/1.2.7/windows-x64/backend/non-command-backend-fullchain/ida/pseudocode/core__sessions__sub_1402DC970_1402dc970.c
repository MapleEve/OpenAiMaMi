// win 1.2.7 | module src/core/sessions.rs | ea 0x1402dc970 | name sub_1402DC970
// win 1.2.7 | module src/core/sessions.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402DC970(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __m128d v6; // xmm1
  double v7; // xmm0_8
  char v8; // cl
  int v9; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  _QWORD v14[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v15; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h]
  __int64 v17; // [rsp+A8h] [rbp+28h]
  __int64 v18; // [rsp+B0h] [rbp+30h]

  v18 = -2;
  if ( *(_QWORD *)(a2 + 88) == -1 )
  {
    *(_QWORD *)&v15 = -1;
    result = 0;
    goto LABEL_12;
  }
  sub_1416AC440(&v15, a2 + 88);
  if ( (_QWORD)v15 == -1 )
  {
LABEL_7:
    result = 0;
LABEL_12:
    v7 = *(double *)(a2 + 376);
    goto LABEL_13;
  }
  v14[1] = *((_QWORD *)&v15 + 1);
  v17 = v15;
  sub_141695A00(&v9, *((_QWORD *)&v15 + 1), v16);
  if ( v9 == 2 )
  {
    if ( (v10 & 3) - 2 >= 2 && (v10 & 3) != 0 )
    {
      --v10;
      LOBYTE(v9) = 3;
      sub_1416BCB00(&v10);
    }
    goto LABEL_7;
  }
  v2 = v13;
  v14[0] = v12;
  sub_141683E30(&v9, v14, 3577643008LL, 27111902);
  if ( v9 == 1 )
  {
    result = 1;
    goto LABEL_12;
  }
  v6 = _mm_sub_pd((__m128d)_mm_unpacklo_ps((__m128)v10, (__m128)xmmword_1419D3490), (__m128d)xmmword_1419D34A0);
  v7 = (double)v11 / 1000000000.0 + _mm_unpackhi_pd(v6, v6).m128d_f64[0] + v6.m128d_f64[0];
  result = 1;
  if ( v7 <= 0.0 )
    goto LABEL_12;
LABEL_13:
  *(_QWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 16) = v15;
  v8 = *(_BYTE *)(a2 + 388);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v2;
  *(_BYTE *)(a1 + 48) = v8;
  *(double *)(a1 + 40) = v7;
  return result;
}
