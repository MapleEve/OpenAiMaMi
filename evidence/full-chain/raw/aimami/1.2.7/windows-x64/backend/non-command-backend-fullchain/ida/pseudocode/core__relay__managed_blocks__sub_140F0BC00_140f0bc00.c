// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f0bc00 | name sub_140F0BC00
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F0BC00(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __m128i *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int32 v17; // edx
  unsigned __int128 v18; // kr00_16
  unsigned __int64 v19; // rdx
  __int64 (__fastcall *v20)(unsigned __int64); // rax
  char v21; // al
  __int64 v22; // r14
  __m128i v23; // xmm0
  unsigned __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rbx
  __int64 v33; // r15
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r12
  _QWORD *v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // r12
  __int64 v41; // rdx
  __m128i v42; // [rsp+30h] [rbp-50h] BYREF
  __m128i *v43; // [rsp+40h] [rbp-40h]
  __int64 (__fastcall *v44)(); // [rsp+48h] [rbp-38h]
  unsigned __int64 v45; // [rsp+50h] [rbp-30h]
  __m128i v46; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v47; // [rsp+2B0h] [rbp+230h]
  __m128i v48; // [rsp+518h] [rbp+498h] BYREF
  __int64 v49; // [rsp+528h] [rbp+4A8h]
  __m128i v50; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v51; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v52; // [rsp+548h] [rbp+4C8h]
  __int64 v53; // [rsp+550h] [rbp+4D0h]
  unsigned __int128 v54; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v55; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v56; // [rsp+578h] [rbp+4F8h]
  __int64 v57; // [rsp+580h] [rbp+500h]
  __int64 v58; // [rsp+588h] [rbp+508h]
  __int64 v59; // [rsp+590h] [rbp+510h]
  __int64 v60; // [rsp+598h] [rbp+518h]
  __m128i v61; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v62; // [rsp+5B0h] [rbp+530h]
  unsigned __int64 v63; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v64; // [rsp+5C8h] [rbp+548h]
  __int64 v65; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v66; // [rsp+5D8h] [rbp+558h] BYREF
  __int64 v67; // [rsp+5E0h] [rbp+560h]
  __int64 v68; // [rsp+5E8h] [rbp+568h]
  char v69; // [rsp+5F7h] [rbp+577h] BYREF
  __int64 v70; // [rsp+5F8h] [rbp+578h]
  unsigned __int64 v71; // [rsp+600h] [rbp+580h]
  char v72; // [rsp+60Eh] [rbp+58Eh]
  char v73; // [rsp+60Fh] [rbp+58Fh]
  __int64 v74; // [rsp+610h] [rbp+590h]

  v74 = -2;
  sub_14169D480(&v42, a2[9], a2[10]);
  v5 = v42.m128i_i64[1];
  v71 = v42.m128i_u64[1];
  if ( v42.m128i_i64[0] == -1 )
  {
    v16 = v42.m128i_i8[8] & 3;
    switch ( v42.m128i_i8[8] & 3 )
    {
      case 0:
        if ( *(_BYTE *)(v42.m128i_i64[1] + 16) )
          goto LABEL_30;
        goto LABEL_34;
      case 1:
        if ( !*(_BYTE *)(v42.m128i_i64[1] + 31) )
          goto LABEL_34;
        goto LABEL_30;
      case 2:
        v73 = 1;
        v20 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v4, v42.m128i_i64[1]) + 8);
        v73 = 1;
        v21 = v20(HIDWORD(v71));
        v5 = v71;
        if ( !v21 )
          goto LABEL_34;
        goto LABEL_30;
      case 3:
        if ( v42.m128i_i8[12] )
        {
LABEL_30:
          v61.m128i_i64[0] = v5;
          v46.m128i_i64[0] = (__int64)&v61;
          v46.m128i_i64[1] = (__int64)sub_1416BB0B0;
          sub_1416ABFD0(&v48, &unk_141A5D746, &v46);
          *(_QWORD *)(a1 + 24) = v49;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v48);
          *(_QWORD *)a1 = 10;
          result = v61.m128i_i64[0];
          if ( (v61.m128i_i8[0] & 3u) - 2 >= 2 && (v61.m128i_i8[0] & 3) != 0 )
          {
            v46.m128i_i64[1] = v61.m128i_i64[0] - 1;
            v46.m128i_i8[0] = 3;
            v73 = 0;
            result = sub_1416BCB00(&v46.m128i_u64[1]);
          }
        }
        else
        {
LABEL_34:
          *(_OWORD *)a1 = -1;
          result = (unsigned int)(v16 - 2);
          if ( (unsigned int)result >= 2 && v16 )
          {
            v46.m128i_i64[1] = v71 - 1;
            v46.m128i_i8[0] = 3;
            v73 = 0;
            result = sub_1416BCB00(&v46.m128i_u64[1]);
          }
        }
        break;
    }
    return result;
  }
  v70 = v42.m128i_i64[0];
  v6 = v43;
  sub_1416828D0((unsigned int)&v51, a2[97], a2[98], (unsigned int)&unk_141A5D721, 14);
  v42.m128i_i8[0] = 1;
  v7 = v53;
  v67 = v52;
  v8 = sub_14168A790(&v42, v52, v53);
  if ( v8 )
  {
    v65 = v8;
    v46.m128i_i64[0] = (__int64)&v65;
    v46.m128i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v42, &unk_141A578E8, &v46);
    v46 = v42;
    v47 = (unsigned __int64)v43;
    if ( (unsigned int)(v65 & 3) - 2 >= 2 && (v65 & 3) != 0 )
    {
      v61.m128i_i64[1] = v65 - 1;
      v61.m128i_i8[0] = 3;
      sub_1416BCB00(&v61.m128i_u64[1]);
    }
    result = v47;
    *(_QWORD *)(a1 + 24) = v47;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v46);
    *(_QWORD *)a1 = 10;
    goto LABEL_7;
  }
  v46.m128i_i32[0] = sub_141683E80(v10, v9, v11);
  v46.m128i_i32[1] = v17;
  sub_141683E30(&v42, &v46, 3577643008LL, 27111902);
  v18 = 0u;
  if ( !v42.m128i_i8[0] )
    v18 = v42.m128i_u64[1] * (unsigned __int128)0x3E8uLL + (unsigned int)v43 / 0xF4240uLL;
  v54 = v18;
  sub_141568C20(&v42);
  v50 = v42;
  v42.m128i_i64[0] = (__int64)&v54;
  v42.m128i_i64[1] = (__int64)sub_1416B95D0;
  v43 = &v50;
  v44 = sub_14028A180;
  sub_1416ABFD0(&v55, &unk_141A5D72F, &v42);
  v68 = v56;
  sub_1416828D0((unsigned int)&v61, v67, v7, v56, v57);
  if ( v55 )
    sub_140001660(v68, v55, 1);
  v68 = v61.m128i_i64[1];
  if ( (sub_140222E10(v61.m128i_i64[1], v62, v71, v6) & 1) != 0 )
  {
    v63 = v19;
    v46.m128i_i64[0] = (__int64)&v63;
    v46.m128i_i64[1] = (__int64)sub_1416BB0B0;
    sub_1416ABFD0(&v42, &unk_141A57912, &v46);
    v46 = v42;
    v47 = (unsigned __int64)v43;
    if ( (v63 & 3) - 2 >= 2 && (v63 & 3) != 0 )
    {
      v66 = v63 - 1;
      LOBYTE(v65) = 3;
      sub_1416BCB00(&v66);
    }
    result = v47;
    *(_QWORD *)(a1 + 24) = v47;
    *(__m128i *)(a1 + 8) = _mm_load_si128(&v46);
    *(_QWORD *)a1 = 10;
    if ( v61.m128i_i64[0] )
      result = sub_140001660(v68, v61.m128i_i64[0], 1);
LABEL_7:
    v13 = v70;
    if ( v51 )
      result = sub_140001660(v67, v51, 1);
    if ( v13 )
    {
      v14 = v71;
      v15 = v13;
      return sub_140001660(v14, v15, 1);
    }
    return result;
  }
  sub_1401BD710(v19, v19);
  sub_141695AF0(&v42, v67, v7);
  if ( v42.m128i_i32[0] == 2 )
  {
    v46.m128i_i64[1] = v42.m128i_i64[1];
    v46.m128i_i64[0] = 2;
LABEL_38:
    result = sub_14018FC00(&v46);
LABEL_39:
    v22 = v70;
    goto LABEL_40;
  }
  sub_1418F44E0(&v46, &v42, 0x270u);
  if ( v46.m128i_i64[0] == 2 )
    goto LABEL_38;
  sub_1418F44E0(&v42, &v46, 0x270u);
  result = sub_1403D9570(&v46, &v42);
  v24 = v47;
  if ( v47 >= 0x15 )
  {
    v29 = v46.m128i_i64[1];
    v72 = 1;
    sub_14065B1E0(v46.m128i_i64[1], v47, &v69);
    v30 = v24 - 20;
    v31 = 32 * v24;
    v32 = v29 + v31;
    v42.m128i_i64[0] = v29;
    v58 = v46.m128i_i64[0];
    v43 = (__m128i *)v46.m128i_i64[0];
    v44 = (__int64 (__fastcall *)())(v29 + v31);
    v33 = v31 - 32;
    v34 = (_QWORD *)(v29 + 40);
    v59 = v29;
    result = v29;
    while ( 1 )
    {
      v45 = --v30;
      if ( result == v32 )
        break;
      v35 = v33;
      v36 = v34;
      v37 = result + 32;
      v42.m128i_i64[1] = result + 32;
      if ( *(_QWORD *)result != -1 )
      {
        v64 = *(_QWORD *)result;
        v38 = *(_QWORD *)(result + 16);
        v60 = *(_QWORD *)(result + 8);
        v39 = sub_141695140(v60, v38);
        if ( v64 )
          sub_140001660(v60, v64, 1);
        if ( v39 && (unsigned int)(v39 & 3) - 2 >= 2 && (v39 & 3) != 0 )
        {
          v66 = v39 - 1;
          LOBYTE(v65) = 3;
          sub_1416BCB00(&v66);
        }
        v33 = v35 - 32;
        v34 = v36 + 4;
        result = v37;
        if ( v30 )
          continue;
      }
      if ( v32 != v37 )
      {
        v40 = v35 >> 5;
        do
        {
          v41 = *(v36 - 1);
          if ( v41 )
            result = sub_140001660(*v36, v41, 1);
          v36 += 4;
          --v40;
        }
        while ( v40 );
      }
      break;
    }
    if ( v58 )
      result = sub_140001660(v59, 32 * v58, 8);
    goto LABEL_39;
  }
  v25 = v46.m128i_i64[1];
  v22 = v70;
  if ( v47 )
  {
    v26 = 32 * v47;
    v27 = 0;
    do
    {
      v28 = *(_QWORD *)(v25 + v27);
      if ( v28 )
        result = sub_140001660(*(_QWORD *)(v25 + v27 + 8), v28, 1);
      v27 += 32;
    }
    while ( v26 != v27 );
  }
  if ( v46.m128i_i64[0] )
    result = sub_140001660(v25, 32 * v46.m128i_i64[0], 8);
LABEL_40:
  v23 = _mm_loadu_si128(&v61);
  *(_OWORD *)(a1 + 24) = v62;
  *(__m128i *)(a1 + 8) = v23;
  *(_QWORD *)a1 = -1;
  if ( v51 )
    result = sub_140001660(v67, v51, 1);
  if ( v22 )
  {
    v14 = v71;
    v15 = v22;
    return sub_140001660(v14, v15, 1);
  }
  return result;
}
