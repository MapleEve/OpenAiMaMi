// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x14099a090 | successor of pre-update 0x140f08c70 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
__int64 __fastcall sub_14099A090(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rbx
  char v7; // al
  __m128i si128; // xmm6
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v31; // [rsp+38h] [rbp-48h]
  _QWORD v33[5]; // [rsp+48h] [rbp-38h] BYREF
  char v34; // [rsp+70h] [rbp-10h]
  __int16 v35; // [rsp+78h] [rbp-8h]
  __int64 v36; // [rsp+80h] [rbp+0h]
  __int64 v37; // [rsp+88h] [rbp+8h]
  __m128i v38; // [rsp+90h] [rbp+10h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+20h]
  __int64 v40; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+30h]
  __int64 v42; // [rsp+B8h] [rbp+38h]
  __m128i v43; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+50h]
  __int128 v45; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v46; // [rsp+F0h] [rbp+70h]
  __int64 v47; // [rsp+F8h] [rbp+78h]
  __int64 v48; // [rsp+100h] [rbp+80h]
  __int64 v49; // [rsp+108h] [rbp+88h]
  char v50; // [rsp+116h] [rbp+96h] BYREF
  char v51; // [rsp+117h] [rbp+97h]
  __int64 v52; // [rsp+118h] [rbp+98h]

  v52 = -2;
  v36 = a4;
  *(_QWORD *)&v45 = 0;
  *((_QWORD *)&v45 + 1) = 8;
  v46 = 0;
  v50 = 2;
  v31 = 0;
  v33[0] = a2;
  v33[1] = a3;
  v33[2] = 0;
  v33[3] = a3;
  v33[4] = 0xA0000000ALL;
  v34 = 1;
  v35 = 0;
  v6 = -1;
  v7 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A04550);
  while ( 1 )
  {
    v49 = v6;
    if ( (v7 & 1) != 0 )
      break;
    v9 = v33[0];
    v48 = v6;
    v51 = 0;
    sub_140A09020(&v38, v33);
    if ( v38.m128i_i32[0] != 1 )
    {
      if ( HIBYTE(v35) || (HIBYTE(v35) = 1, v11 = a3 - v31, ((unsigned __int8)v35 | (a3 != v31)) != 1) )
      {
        v6 = v49;
        break;
      }
      v12 = v33[0] + v31;
      if ( !v11 )
        goto LABEL_16;
LABEL_10:
      if ( *(_BYTE *)(v12 + v11 - 1) == 10 )
      {
        if ( v11 == 1 )
        {
          v11 = 0;
        }
        else if ( *(_BYTE *)(v12 + v11 - 2) == 13 )
        {
          v11 -= 2;
        }
        else
        {
          --v11;
        }
      }
      goto LABEL_16;
    }
    v10 = v31;
    v31 = v39;
    v11 = v39 - v10;
    v12 = v10 + v9;
    if ( v39 != v10 )
      goto LABEL_10;
LABEL_16:
    v13 = sub_1408FEA60(v12, v11);
    v15 = v14;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v50, v12, v11) )
    {
      v6 = v49;
      if ( v15 && *(_BYTE *)v13 == 91 && *(_BYTE *)(v13 + v15 - 1) == 93 )
      {
        if ( v15 == 1 || *(char *)(v13 + 1) <= -65 )
        {
          v48 = v49;
          v51 = 0;
          sub_14196B4F0(v13, v15, 1, v15 - 1, (__int64)&off_141A496C8);
        }
        if ( v49 != -1 )
        {
          if ( v4 != 1 || (v5 & 1) != 0 )
          {
            if ( v49 )
              sub_140001660(v47, v49, 1);
          }
          else
          {
            v16 = v46;
            if ( v46 == (_QWORD)v45 )
              sub_141939F90(&v45);
            v17 = *((_QWORD *)&v45 + 1);
            v18 = 3 * v16;
            *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8 * v18) = v49;
            *(_QWORD *)(v17 + 8 * v18 + 8) = v47;
            *(_QWORD *)(v17 + 8 * v18 + 16) = v37;
            v46 = v16 + 1;
          }
        }
        if ( (unsigned __int64)(v15 - 2) >= 0x10 )
        {
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 + 1)), si128)) == 0xFFFF )
          {
            v48 = -1;
            v51 = 0;
            sub_1409951E0(&v40, v13 + 17, v15 - 18);
            v22 = v41;
            v23 = v42;
            v6 = -1;
            if ( (unsigned __int8)sub_140996F40(v41, v42, v36) )
              goto LABEL_50;
            v5 = sub_1409D4510(v22, v23);
            v43.m128i_i64[0] = (__int64)&v40;
            v43.m128i_i64[1] = (__int64)sub_1400015F0;
            sub_1416DAFA0(&v38, &unk_141A5F029, &v43);
            v43 = _mm_loadu_si128(&v38);
            v44 = v39;
            if ( v5 )
            {
              sub_1416DB410(&v38, &v43);
              v21 = v46;
              if ( v46 == (_QWORD)v45 )
                goto LABEL_47;
              goto LABEL_48;
            }
LABEL_49:
            v47 = v43.m128i_i64[1];
            v6 = v43.m128i_i64[0];
            v37 = v44;
            v4 = 0;
            goto LABEL_50;
          }
        }
        else
        {
          v6 = -1;
          if ( (unsigned __int64)(v15 - 2) < 9 )
            goto LABEL_32;
        }
        v6 = -1;
        if ( *(_QWORD *)(v13 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v13 + 9) ^ 0x2ELL )
          goto LABEL_32;
        v48 = -1;
        v51 = 0;
        sub_1409951E0(&v40, v13 + 10, v15 - 11);
        v19 = v41;
        v20 = v42;
        if ( !(unsigned __int8)sub_140996F40(v41, v42, v36) )
        {
          v5 = sub_1409D4510(v19, v20);
          v43.m128i_i64[0] = (__int64)&v40;
          v43.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_1416DAFA0(&v38, &unk_141A5F01A, &v43);
          v43 = _mm_loadu_si128(&v38);
          v44 = v39;
          if ( v5 )
          {
            sub_1416DB410(&v38, &v43);
            v21 = v46;
            if ( v46 == (_QWORD)v45 )
LABEL_47:
              sub_141939F90(&v45);
LABEL_48:
            v24 = *((_QWORD *)&v45 + 1);
            v25 = 3 * v21;
            *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8 * v25 + 16) = v39;
            *(__m128i *)(v24 + 8 * v25) = _mm_loadu_si128(&v38);
            v46 = v21 + 1;
          }
          goto LABEL_49;
        }
LABEL_50:
        if ( !v40 )
          goto LABEL_32;
        sub_140001660(v41, v40, 1);
        v7 = HIBYTE(v35);
      }
      else
      {
        if ( v49 != -1 && (v5 & 1) == 0 && (v4 & 1) == 0 )
        {
          v48 = v49;
          v51 = 0;
          v4 = sub_1409C7D10(v13, v15);
          v5 = 0;
        }
LABEL_32:
        v7 = HIBYTE(v35);
      }
    }
    else
    {
      v6 = v49;
      v7 = HIBYTE(v35);
    }
  }
  if ( v6 != -1 )
  {
    if ( v4 != 1 || (v5 & 1) != 0 )
    {
      if ( v6 )
        sub_140001660(v47, v6, 1);
    }
    else
    {
      v26 = v46;
      if ( v46 == (_QWORD)v45 )
        sub_141939F90(&v45);
      v27 = *((_QWORD *)&v45 + 1);
      v28 = 3 * v26;
      *(_QWORD *)(*((_QWORD *)&v45 + 1) + 8 * v28) = v49;
      *(_QWORD *)(v27 + 8 * v28 + 8) = v47;
      *(_QWORD *)(v27 + 8 * v28 + 16) = v37;
      v46 = v26 + 1;
    }
  }
  result = v46;
  *(_QWORD *)(a1 + 16) = v46;
  *(_OWORD *)a1 = v45;
  return result;
}
