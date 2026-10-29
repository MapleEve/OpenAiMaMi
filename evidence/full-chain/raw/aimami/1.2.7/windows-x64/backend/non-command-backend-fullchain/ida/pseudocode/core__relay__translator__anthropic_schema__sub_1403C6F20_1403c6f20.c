// win 1.2.7 | module src/core/relay/translator/anthropic_schema.rs | ea 0x1403c6f20 | name sub_1403C6F20
// win 1.2.7 | module src/core/relay/translator/anthropic_schema.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1403C6F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v7; // rax
  __m128 *v8; // rax
  __m128 *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _BYTE *v12; // rax
  unsigned __int64 v13; // rax
  __m128 v14; // xmm0
  __int64 v15; // rcx
  _BYTE *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rax
  _BYTE v23[23]; // [rsp+51h] [rbp-2Fh]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int128 v25; // [rsp+70h] [rbp-10h] BYREF
  __int64 v26; // [rsp+80h] [rbp+0h]
  __int128 v27; // [rsp+88h] [rbp+8h] BYREF
  __int128 v28; // [rsp+98h] [rbp+18h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+28h]
  __int64 v30; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+38h]
  __m128 v32; // [rsp+C0h] [rbp+40h]
  __int128 v33; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v34; // [rsp+E0h] [rbp+60h]
  __int64 v35; // [rsp+F8h] [rbp+78h] BYREF
  _DWORD *v36; // [rsp+100h] [rbp+80h]
  __int64 v37; // [rsp+108h] [rbp+88h]
  char v38; // [rsp+116h] [rbp+96h]
  char v39; // [rsp+117h] [rbp+97h]
  __int64 v40; // [rsp+118h] [rbp+98h]

  v40 = -2;
  v7 = (_BYTE *)sub_1416419F0(aText_4, 4, a2);
  if ( !v7 )
    goto LABEL_23;
  if ( *v7 != 5 )
  {
    if ( *v7 )
    {
      *(_QWORD *)(a1 + 8) = aInvalidRespons;
      *(_QWORD *)(a1 + 16) = 36;
      *(_BYTE *)a1 = -2;
      return a1;
    }
LABEL_23:
    *(_BYTE *)a1 = -1;
    return a1;
  }
  v8 = (__m128 *)sub_1416419F0(aFormat_3, 6, v7);
  if ( !v8 )
    goto LABEL_23;
  v9 = v8;
  if ( !v8->m128_i8[0] )
    goto LABEL_23;
  v10 = (_QWORD *)sub_1416419F0(aType_5, 4, v8);
  if ( !v10 )
    v10 = off_1421E7108;
  if ( *(_BYTE *)v10 == 3 && v10[3] == 4 && *(_DWORD *)v10[2] == 1954047348 )
    goto LABEL_23;
  v11 = (_QWORD *)sub_1416419F0(aType_5, 4, v9);
  if ( !v11 )
    v11 = off_1421E7108;
  if ( *(_BYTE *)v11 != 3
    || v11[3] != 11
    || *(_QWORD *)v11[2] ^ 0x6863735F6E6F736ALL | *(_QWORD *)(v11[2] + 3LL) ^ 0x616D656863735F6ELL )
  {
    goto LABEL_25;
  }
  v12 = (_BYTE *)sub_1416419F0(aSchema_1, 6, v9);
  if ( !v12 )
    v12 = off_1421E7108;
  if ( *v12 == 5 )
  {
    if ( v9->m128_i8[0] != 5 )
      sub_141939020(&off_1419EDCF0);
    v13 = v9->m128_u64[1];
    if ( v13 )
    {
      v14 = v9[1];
      v15 = 1;
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    v27 = (unsigned __int64)v15;
    *(_QWORD *)&v28 = v13;
    _mm_storel_ps((double *)&v28 + 1, v14);
    v29 = v15;
    v30 = 0;
    v31 = v13;
    v32 = v14;
    if ( (unsigned __int8)sub_14039A750(&v27)
      || (v17 = (_BYTE *)sub_1416419F0(aStrict_1, 6, v9)) != nullptr && *v17 > 1u )
    {
      *(_QWORD *)(a1 + 8) = aUnsupportedRes;
      *(_QWORD *)(a1 + 16) = 42;
      *(_BYTE *)a1 = -2;
    }
    else if ( (unsigned __int8)sub_14022EF30(a3, a4) )
    {
      *(_QWORD *)&v25 = 0;
      v26 = 0;
      nullsub_1(v18);
      v19 = (_DWORD *)sub_140001650(4, 1);
      if ( !v19 )
        sub_141938D2B(1, 4);
      *v19 = 1701869940;
      v35 = 4;
      v36 = v19;
      v37 = 4;
      v38 = 1;
      sub_14040FB10(&v27, &off_1419EDC50);
      if ( (_BYTE)v27 == 0xFF )
      {
        *(_QWORD *)&v33 = *((_QWORD *)&v27 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_5,
          43,
          (unsigned int)&v33,
          (unsigned int)&off_1419ED3F8,
          (__int64)&off_1419EDCA8);
      }
      v34 = v28;
      v33 = v27;
      v38 = 0;
      sub_140E72AA0(&v27, &v25, &v35, &v33);
      if ( (_BYTE)v27 != 0xFF )
        sub_1403880E0(&v27);
      nullsub_1(v20);
      v21 = sub_140001650(6, 1);
      if ( !v21 )
        sub_141938D2B(1, 6);
      *(_WORD *)(v21 + 4) = 24941;
      *(_DWORD *)v21 = 1701340019;
      v35 = 6;
      v36 = (_DWORD *)v21;
      v37 = 6;
      v39 = 1;
      v22 = (void *)sub_1416419F0(aSchema_1, 6, v9);
      if ( !v22 )
        v22 = off_1421E7108;
      v39 = 1;
      sub_140412420(&v27, v22);
      if ( (_BYTE)v27 == 0xFF )
      {
        *(_QWORD *)&v33 = *((_QWORD *)&v27 + 1);
        sub_141939040(
          (unsigned int)aCalledResultUn_5,
          43,
          (unsigned int)&v33,
          (unsigned int)&off_1419ED3F8,
          (__int64)&off_1419EDCA8);
      }
      v34 = v28;
      v33 = v27;
      v39 = 0;
      sub_140E72AA0(&v27, &v25, &v35, &v33);
      if ( (_BYTE)v27 != 0xFF )
        sub_1403880E0(&v27);
      *(_OWORD *)&v23[7] = v25;
      v24 = v26;
      *(_BYTE *)a1 = 5;
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v23;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v23[15];
      *(_QWORD *)(a1 + 24) = v24;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = aStructuredOutp;
      *(_QWORD *)(a1 + 16) = 69;
      *(_BYTE *)a1 = -2;
    }
  }
  else
  {
LABEL_25:
    *(_QWORD *)(a1 + 8) = aAnthropicOutpu_1;
    *(_QWORD *)(a1 + 16) = 74;
    *(_BYTE *)a1 = -2;
  }
  return a1;
}
