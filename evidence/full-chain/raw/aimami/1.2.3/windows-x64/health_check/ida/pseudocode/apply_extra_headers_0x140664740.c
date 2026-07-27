// module: codexmate_lib/core/relay/health_check
// addr: 0x140664740
// name: apply_extra_headers
// win 1.2.3 | = mac codexmate_lib::core::relay::health_check::apply_extra_headers | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall apply_extra_headers(__int64 a1, _BOOL8 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  _BOOL8 v12; // r8
  __m128i si128; // xmm6
  __m128i v14; // xmm11
  __m128i v15; // xmm12
  __m128i v16; // xmm14
  __m128i v17; // xmm9
  __m128i v18; // xmm8
  __m128i v19; // xmm7
  __m128i v20; // xmm15
  __m128i v21; // xmm10
  __m128i v22; // xmm13
  unsigned __int64 v23; // r13
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm2
  __m128i v31; // xmm3
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rax
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  __int64 i; // rax
  unsigned __int8 v39; // cl
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  void (__fastcall *v42)(unsigned __int64 *, __int64, __int64); // rax
  int v43; // r14d
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int32 v47; // eax
  unsigned int v48; // ecx
  unsigned __int16 v49; // ax
  bool v50; // cf
  unsigned __int64 v51; // rax
  int v52; // edx
  bool v53; // cf
  unsigned __int32 v54; // eax
  unsigned __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  const char *v58; // rdx
  __int64 v59; // rcx
  _OWORD v60[2]; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v61[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v62; // [rsp+70h] [rbp-10h]
  _OWORD v63[2]; // [rsp+78h] [rbp-8h] BYREF
  __int64 v64; // [rsp+98h] [rbp+18h]
  __m128i v65; // [rsp+A0h] [rbp+20h]
  __m128i v66; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v67; // [rsp+C0h] [rbp+40h]
  __m128i v68; // [rsp+D0h] [rbp+50h] BYREF
  __m128i v69; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v70; // [rsp+F0h] [rbp+70h]
  _BOOL8 v71; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v72; // [rsp+100h] [rbp+80h]
  unsigned __int128 v73; // [rsp+108h] [rbp+88h]
  _BOOL8 v74; // [rsp+118h] [rbp+98h]
  __int64 v75; // [rsp+120h] [rbp+A0h]
  __int64 v76; // [rsp+128h] [rbp+A8h]
  __int64 v77; // [rsp+130h] [rbp+B0h]
  __int64 v78; // [rsp+138h] [rbp+B8h]
  __m128i v79; // [rsp+140h] [rbp+C0h] BYREF
  __m128i v80; // [rsp+150h] [rbp+D0h]
  __m128i v81; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v82; // [rsp+170h] [rbp+F0h] BYREF
  __m128i v83; // [rsp+180h] [rbp+100h] BYREF
  __m128i v84; // [rsp+190h] [rbp+110h] BYREF
  _QWORD v85[4]; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v86; // [rsp+1C0h] [rbp+140h]
  __int64 v87; // [rsp+1C8h] [rbp+148h]
  char v88; // [rsp+1D6h] [rbp+156h] BYREF
  char v89; // [rsp+1D7h] [rbp+157h]
  __int64 v90; // [rsp+1D8h] [rbp+158h]

  v90 = -2;
  v5 = a3;
  result = sub_14033BC10(a2, a3);
  if ( v9 )
  {
    v71 = a2;
    v72 = v5;
    v73 = 0;
    v74 = a2;
    v75 = v5;
    sub_1408A5B40(&v83, &v71);
    if ( v83.m128i_i8[0] )
      return sub_1405ADBE0(&v83);
    v11 = v83.m128i_i64[1];
    if ( v83.m128i_i64[1] )
      v11 = v84.m128i_i64[1];
    v12 = v83.m128i_i64[1] != 0;
    v71 = v12;
    v72 = 0;
    v73 = __PAIR128__(v84.m128i_u64[0], v83.m128i_u64[1]);
    v74 = v12;
    v75 = 0;
    v76 = v83.m128i_i64[1];
    v77 = v84.m128i_i64[0];
    v78 = v11;
    si128 = _mm_load_si128((const __m128i *)&xmmword_141763FC0);
    v14 = _mm_load_si128((const __m128i *)&xmmword_141763F40);
    v15 = _mm_cvtsi32_si128(0x67u);
    v16 = _mm_cvtsi32_si128(0x6Fu);
    v17 = _mm_load_si128((const __m128i *)&xmmword_141742480);
    v18 = _mm_load_si128((const __m128i *)&xmmword_141742490);
    v19 = _mm_load_si128((const __m128i *)&xmmword_1417424A0);
    v20 = _mm_load_si128((const __m128i *)&xmmword_141742460);
    v21 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0);
    v22 = _mm_load_si128((const __m128i *)&xmmword_141742470);
    while ( 1 )
    {
      sub_140308C30(&v83, &v71, v12, v10);
      if ( !v83.m128i_i64[0] || *(_QWORD *)(v83.m128i_i64[0] + 24 * v84.m128i_i64[0] + 360) == -1 )
        return sub_14033B570(&v71);
      v86 = *(_QWORD *)(v83.m128i_i64[0] + 24 * v84.m128i_i64[0] + 360);
      v87 = *(_QWORD *)(v83.m128i_i64[0] + 24 * v84.m128i_i64[0] + 368);
      v23 = *(_QWORD *)(v83.m128i_i64[0] + 24 * v84.m128i_i64[0] + 376);
      v24 = _mm_loadu_si128((const __m128i *)(v83.m128i_i64[0] + 32 * v84.m128i_i64[0]));
      v80 = _mm_loadu_si128((const __m128i *)(v83.m128i_i64[0] + 32 * v84.m128i_i64[0] + 16));
      v79 = v24;
      if ( !a4 )
        goto LABEL_27;
      if ( (v23 & 0x8000000000000000uLL) != 0LL )
      {
        v59 = 0;
        goto LABEL_123;
      }
      if ( !v23 )
        break;
      nullsub_1(32 * v84.m128i_i64[0]);
      v25 = sub_140001650(v23, 1);
      if ( !v25 )
      {
        v5 = v23;
        v59 = 1;
LABEL_123:
        sub_1416C2D4B(v59, v5);
      }
      v5 = v25;
      sub_141684120(v25, v87, v23);
      if ( v23 < 8 )
      {
        v26 = 0;
        goto LABEL_46;
      }
      if ( v23 < 0x20 )
      {
        v26 = 0;
LABEL_23:
        v32 = v26;
        v26 = v23 & 0x7FFFFFFFFFFFFFF8LL;
        do
        {
          v33 = _mm_loadl_epi64((const __m128i *)(v5 + v32));
          v34 = _mm_add_epi8(v33, v17);
          *(_QWORD *)(v5 + v32) = _mm_or_si128(_mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v34, v18), v34), v19), v33).m128i_u64[0];
          v32 += 8;
        }
        while ( v26 != v32 );
        goto LABEL_47;
      }
      v26 = v23 & 0x7FFFFFFFFFFFFFE0LL;
      v27 = 0;
      do
      {
        v28 = _mm_loadu_si128((const __m128i *)(v5 + v27));
        v29 = _mm_loadu_si128((const __m128i *)(v5 + v27 + 16));
        v30 = _mm_add_epi8(v28, v20);
        v31 = _mm_add_epi8(v29, v20);
        *(__m128i *)(v5 + v27) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v30, v21), v30), v22), v28);
        *(__m128i *)(v5 + v27 + 16) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v31, v21), v31), v22), v29);
        v27 += 32;
      }
      while ( v26 != v27 );
      if ( v23 != v26 )
      {
        if ( (v23 & 0x18) != 0 )
          goto LABEL_23;
        do
        {
LABEL_46:
          *(_BYTE *)(v5 + v26) |= 32 * ((unsigned __int8)(*(_BYTE *)(v5 + v26) - 65) < 0x1Au);
          ++v26;
LABEL_47:
          ;
        }
        while ( v23 != v26 );
      }
      if ( v23 >= 4 && *(_DWORD *)v5 == 761488755 )
      {
LABEL_113:
        sub_140001660(v5, v23, 1);
        goto LABEL_44;
      }
      switch ( v23 )
      {
        case 2uLL:
          v43 = (unsigned __int16)__ROL2__(*(_WORD *)v5, 8) - 29797;
          break;
        case 3uLL:
          v49 = __ROL2__(*(_WORD *)v5, 8);
          v50 = v49 < 0x7669u;
          if ( v49 != 30313 )
            goto LABEL_121;
          v43 = *(unsigned __int8 *)(v5 + 2) - 97;
          break;
        case 4uLL:
          v54 = _byteswap_ulong(*(_DWORD *)v5);
          v43 = (char)((v54 >= 0x686F7375) - (v54 < 0x686F7374));
          break;
        case 6uLL:
          if ( !(*(_DWORD *)v5 ^ 0x65707865 | *(unsigned __int16 *)(v5 + 4) ^ 0x7463)
            || !(*(_DWORD *)v5 ^ 0x6B6F6F63 | *(unsigned __int16 *)(v5 + 4) ^ 0x6569)
            || !(*(_DWORD *)v5 ^ 0x6769726F | *(unsigned __int16 *)(v5 + 4) ^ 0x6E69) )
          {
            goto LABEL_113;
          }
          v47 = _byteswap_ulong(*(_DWORD *)v5);
          v48 = 1667640690;
          if ( v47 != 1667640690 )
            goto LABEL_80;
          v47 = (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 4), 8);
          v48 = 24953;
          if ( (unsigned __int16)v47 != 24953 )
            goto LABEL_80;
          goto LABEL_112;
        case 7uLL:
          if ( !(*(_DWORD *)v5 ^ 0x72677075 | *(_DWORD *)(v5 + 3) ^ 0x65646172) )
            goto LABEL_113;
          v47 = _byteswap_ulong(*(_DWORD *)v5);
          v48 = 1919247973;
          if ( v47 == 1919247973 )
          {
            v47 = _byteswap_ulong(*(_DWORD *)(v5 + 3));
            v48 = 1701995890;
            if ( v47 == 1701995890 )
              goto LABEL_112;
          }
LABEL_80:
          v52 = 0;
          v53 = v47 < v48;
          goto LABEL_115;
        case 8uLL:
          v51 = _byteswap_uint64(*(_QWORD *)v5);
          v43 = (char)((v51 > 0x747261696C657273LL) - (v51 < 0x747261696C657273LL));
          break;
        case 9uLL:
          if ( !(*(_QWORD *)v5 ^ 0x656B2D6970612D78LL | *(unsigned __int8 *)(v5 + 8) ^ 0x79LL)
            || !(*(_QWORD *)v5 ^ 0x6564726177726F66LL | *(unsigned __int8 *)(v5 + 8) ^ 0x64LL)
            || !(*(_QWORD *)v5 ^ 0x692D6C6165722D78LL | *(unsigned __int8 *)(v5 + 8) ^ 0x70LL) )
          {
            goto LABEL_113;
          }
          v55 = _byteswap_uint64(*(_QWORD *)v5);
          v50 = v55 < 0x636C69656E742D69LL;
          if ( v55 == 0x636C69656E742D69LL )
            v43 = *(unsigned __int8 *)(v5 + 8) - 112;
          else
LABEL_121:
            v43 = 2 * !v50 - 1;
          break;
        case 0xAuLL:
          if ( !(*(_QWORD *)v5 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v5 + 8) ^ 0x6E6FLL)
            || !(*(_QWORD *)v5 ^ 0x696C612D7065656BLL | *(unsigned __int16 *)(v5 + 8) ^ 0x6576LL)
            || !(*(_QWORD *)v5 ^ 0x6B6F6F632D746573LL | *(unsigned __int16 *)(v5 + 8) ^ 0x6569LL)
            || !(*(_QWORD *)v5 ^ 0x74697369762D6663LL | *(unsigned __int16 *)(v5 + 8) ^ 0x726FLL) )
          {
            goto LABEL_113;
          }
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x782D74726163652DLL;
          if ( v44 != 0x782D74726163652DLL )
            goto LABEL_114;
          v44 = (unsigned __int16)__ROL2__(*(_WORD *)(v5 + 8), 8);
          if ( (unsigned __int16)v44 == 26980 )
            goto LABEL_112;
          v45 = 26980;
          goto LABEL_114;
        case 0xBuLL:
          if ( !(*(_QWORD *)v5 ^ 0x746E65696C632D78LL | *(_QWORD *)(v5 + 3) ^ 0x70692D746E65696CLL)
            || !(*(_QWORD *)v5 ^ 0x2D6572757A612D78LL | *(_QWORD *)(v5 + 3) ^ 0x6665722D6572757ALL) )
          {
            goto LABEL_113;
          }
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x782D62332D737061LL;
          if ( v44 != 0x782D62332D737061LL )
            goto LABEL_114;
          v44 = _byteswap_uint64(*(_QWORD *)(v5 + 3));
          v46 = 0x332D7370616E6964LL;
          goto LABEL_111;
        case 0xCuLL:
          if ( !(*(_QWORD *)v5 ^ 0x756F6370692D6663LL | *(unsigned int *)(v5 + 8) ^ 0x7972746ELL)
            || !(*(_QWORD *)v5 ^ 0x2D6572757A612D78LL | *(unsigned int *)(v5 + 8) ^ 0x64696466LL)
            || !(*(_QWORD *)v5 ^ 0x7365757165722D78LL | *(unsigned int *)(v5 + 8) ^ 0x64692D74LL)
            || !(*(_QWORD *)v5 ^ 0x6172742D33622D78LL | *(unsigned int *)(v5 + 8) ^ 0x64696563LL)
            || !(*(_QWORD *)v5 ^ 0x6D61732D33622D78LL | *(unsigned int *)(v5 + 8) ^ 0x64656C70LL) )
          {
            goto LABEL_113;
          }
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x636F6E74656E742DLL;
          if ( v44 != 0x636F6E74656E742DLL )
            goto LABEL_114;
          v44 = _byteswap_ulong(*(_DWORD *)(v5 + 8));
          if ( (_DWORD)v44 == 1954115685 )
            goto LABEL_112;
          v45 = 1954115685;
          goto LABEL_114;
        case 0xDuLL:
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x617574686F72697ALL;
          if ( v44 != 0x617574686F72697ALL )
            goto LABEL_114;
          v44 = _byteswap_uint64(*(_QWORD *)(v5 + 5));
          v46 = 0x72697A6174696F6ELL;
          goto LABEL_111;
        case 0xEuLL:
          if ( !(*(_QWORD *)v5 ^ 0x2D746E65746E6F63LL | *(_QWORD *)(v5 + 6) ^ 0x6874676E656C2D74LL) )
            goto LABEL_113;
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x747275652D636C69LL;
          if ( v44 != 0x747275652D636C69LL )
            goto LABEL_114;
          v44 = _byteswap_uint64(*(_QWORD *)(v5 + 6));
          v46 = 0x6C69656E742D6970LL;
          goto LABEL_111;
        case 0xFuLL:
          if ( !(*(_QWORD *)v5 ^ 0x726177726F662D78LL | *(_QWORD *)(v5 + 7) ^ 0x726F662D64656472LL)
            || !(*(_QWORD *)v5 ^ 0x742D6E7A6D612D78LL | *(_QWORD *)(v5 + 7) ^ 0x64692D6563617274LL) )
          {
            goto LABEL_113;
          }
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x6163636570742D65LL;
          if ( v44 != 0x6163636570742D65LL )
            goto LABEL_114;
          v44 = _byteswap_uint64(*(_QWORD *)(v5 + 7));
          v46 = 0x656E636F64696E67LL;
          goto LABEL_111;
        case 0x10uLL:
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), si128)) == 0xFFFF
            || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141763FD0)) == 0xFFFF
            || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141763FE0)) == 0xFFFF
            || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141763FF0)) == 0xFFFF
            || _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141764000)) == 0xFFFF )
          {
            goto LABEL_113;
          }
          v44 = _byteswap_uint64(*(_QWORD *)v5);
          v45 = 0x782D636F7272656CLL;
          if ( v44 != 0x782D636F7272656CLL )
            goto LABEL_114;
          v44 = _byteswap_uint64(*(_QWORD *)(v5 + 8));
          v46 = 0x6174696F6E2D6964LL;
LABEL_111:
          v45 = v46;
          if ( v44 == v46 )
          {
LABEL_112:
            v43 = 0;
          }
          else
          {
LABEL_114:
            v52 = 0;
            v53 = v44 < v45;
LABEL_115:
            LOBYTE(v52) = !v53;
            v43 = 2 * v52 - 1;
          }
          break;
        case 0x11uLL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v5 + 16)), v15),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), v14))) == 0xFFFF
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v5 + 16)), v16),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141764010))) == 0xFFFF
            || _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v5 + 16)), (__m128i)xmmword_1416C6610),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_141764020))) == 0xFFFF )
          {
            goto LABEL_113;
          }
          v56 = 17;
          v57 = v5;
          v58 = aXB3Parentspani;
          goto LABEL_118;
        case 0x12uLL:
          v56 = 18;
          v57 = v5;
          v58 = aProxyAuthentic;
          goto LABEL_118;
        case 0x13uLL:
          v56 = 19;
          v57 = v5;
          v58 = (const char *)&unk_14176806D;
          goto LABEL_118;
        case 0x1AuLL:
          v56 = 26;
          v57 = v5;
          v58 = aXAkamaiConfigL;
LABEL_118:
          v43 = sub_1416847B0(v57, v58, v56);
          break;
        default:
          sub_140001660(v5, v23, 1);
          goto LABEL_27;
      }
      sub_140001660(v5, v23, 1);
      if ( v43 )
        goto LABEL_27;
LABEL_44:
      sub_1400104F0(&v79);
      if ( v86 )
        sub_140001660(v87, v86, 1);
    }
    v5 = 1;
LABEL_27:
    sub_141441C10(&v68, v87, v23);
    v35 = 0;
    if ( v79.m128i_i8[0] == 3 )
      v35 = v80.m128i_i64[0];
    v36 = _mm_loadu_si128(&v69);
    v83 = _mm_loadu_si128(&v68);
    v84 = v36;
    v85[0] = v70;
    v85[1] = v35;
    v85[2] = v80.m128i_i64[1];
    if ( v83.m128i_i8[0] & 1 | (v79.m128i_i8[0] != 3) )
    {
      if ( (v83.m128i_i8[0] & 1) == 0 && v83.m128i_i64[1] )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v83.m128i_i64[1] + 32))(
          v85,
          v84.m128i_i64[0],
          v84.m128i_i64[1]);
      goto LABEL_44;
    }
    v37 = _mm_loadu_si128((const __m128i *)&v83.m128i_u64[1]);
    v82 = _mm_loadu_si128((const __m128i *)&v84.m128i_u64[1]);
    v81 = v37;
    if ( v80.m128i_i64[1] )
    {
      for ( i = 0; v80.m128i_i64[1] != i; ++i )
      {
        v39 = *(_BYTE *)(v80.m128i_i64[0] + i);
        if ( v39 > 0x1Fu )
        {
          if ( v39 == 127 )
            goto LABEL_39;
        }
        else if ( v39 != 9 )
        {
LABEL_39:
          if ( v81.m128i_i64[0] )
            (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v81.m128i_i64[0] + 32))(
              &v82.m128i_u64[1],
              v81.m128i_i64[1],
              v82.m128i_i64[0]);
          goto LABEL_44;
        }
      }
    }
    v89 = 1;
    sub_1414464F0(v63, v80.m128i_i64[0], v80.m128i_i64[1]);
    LOBYTE(v64) = 0;
    v62 = v64;
    v61[1] = v63[1];
    v61[0] = v63[0];
    v40 = _mm_load_si128(&v81);
    v60[1] = _mm_load_si128(&v82);
    v60[0] = v40;
    v89 = 0;
    sub_1405A0840(&v68, a1, v60, v61);
    if ( (_BYTE)v70 == 0xFF )
    {
      v89 = 0;
      sub_1416C3060(
        (unsigned int)aSizeOverflowsM_0,
        23,
        (unsigned int)&v88,
        (unsigned int)&unk_1417693B8,
        (__int64)&off_1417646D0);
    }
    v67 = v70;
    v41 = _mm_loadu_si128(&v68);
    v66 = _mm_loadu_si128(&v69);
    v65 = v41;
    if ( (_BYTE)v70 != 2 )
    {
      v42 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v65.m128i_i64[0] + 32);
      v89 = 0;
      v42(&v66.m128i_u64[1], v65.m128i_i64[1], v66.m128i_i64[0]);
    }
    goto LABEL_44;
  }
  return result;
}