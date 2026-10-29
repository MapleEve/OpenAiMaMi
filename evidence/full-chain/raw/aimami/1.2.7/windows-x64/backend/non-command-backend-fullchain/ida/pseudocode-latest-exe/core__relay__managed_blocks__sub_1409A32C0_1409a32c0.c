// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1409a32c0 | successor of pre-update 0x140f0fc90 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.933, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_1409A32C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  char v6; // r15
  char v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // rcx
  const char *v18; // rdx
  char v19; // cl
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  _QWORD *result; // rax
  _OWORD *v30; // rcx
  int v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h]
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  unsigned __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  _QWORD v37[5]; // [rsp+50h] [rbp-30h] BYREF
  char v38; // [rsp+78h] [rbp-8h]
  __int16 v39; // [rsp+80h] [rbp+0h]
  _QWORD *v40; // [rsp+88h] [rbp+8h]
  __int128 v41; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int64 v42; // [rsp+A0h] [rbp+20h]
  _QWORD v43[5]; // [rsp+A8h] [rbp+28h] BYREF
  char v44; // [rsp+D0h] [rbp+50h]
  __int16 v45; // [rsp+D8h] [rbp+58h]
  char v46; // [rsp+E7h] [rbp+67h] BYREF
  __int64 v47; // [rsp+E8h] [rbp+68h]

  v47 = -2;
  v40 = a1;
  v46 = 2;
  v35 = 0;
  v36 = a3;
  v37[0] = a2;
  v37[1] = a3;
  v37[2] = 0;
  v37[3] = a3;
  v37[4] = 0xA0000000ALL;
  v38 = 1;
  v39 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  v6 = 0;
  while ( 1 )
  {
    v8 = v37[0];
    sub_140A09020(&v41, v37);
    if ( (_DWORD)v41 == 1 )
    {
      v9 = v35;
      v35 = v42;
      v10 = v42 - v9;
      v11 = v9 + v8;
      if ( v42 == v9 )
        goto LABEL_15;
    }
    else
    {
      if ( HIBYTE(v39) || (HIBYTE(v39) = 1, v10 = v36 - v35, ((unsigned __int8)v39 | (v36 != v35)) != 1) )
      {
LABEL_62:
        result = v40;
        *v40 = -1;
        return result;
      }
      v11 = v37[0] + v35;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = v10;
    if ( *(_BYTE *)(v11 + v10 - 1) == 10 )
    {
      v12 = v10 - 1;
      if ( v10 != 1 && *(_BYTE *)(v11 + v10 - 2) == 13 )
      {
        v10 -= 2LL;
LABEL_15:
        v12 = v10;
      }
    }
    v13 = sub_1408FEA60(v11, v12);
    v15 = v14;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v46, v11, v12) )
      break;
    v7 = 1;
    if ( (v3 & 1) != 0 )
      goto LABEL_4;
    if ( v6 != 1 )
      goto LABEL_22;
LABEL_2:
    v6 = 1;
LABEL_3:
    v7 = 0;
LABEL_4:
    v3 = v7;
    if ( HIBYTE(v39) )
      goto LABEL_62;
  }
  switch ( v15 )
  {
    case 0x1EuLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 + 14)), si128),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v13), v5))) == 0xFFFF )
        goto LABEL_3;
      goto LABEL_27;
    case 0x24uLL:
      if ( !(unsigned int)sub_141923B40(v13, aAimamiRelayMan_4, 36) )
        goto LABEL_3;
      goto LABEL_27;
    case 0x27uLL:
      if ( !(unsigned int)sub_141923B40(v13, aAimamiRelayCod_0, 39) )
        goto LABEL_3;
      goto LABEL_27;
    case 0x37uLL:
      v16 = 55;
      v17 = v13;
      v18 = aAimamiRelayMan_2;
      goto LABEL_33;
    case 0x3CuLL:
      v16 = 60;
      v17 = v13;
      v18 = aAimamiRelayMan_0;
      goto LABEL_33;
    case 0x40uLL:
      v16 = 64;
      v17 = v13;
      v18 = aAimamiRelayCod;
LABEL_33:
      v19 = v3 | ((unsigned int)sub_141923B40(v17, v18, v16) == 0);
      v7 = 1;
      if ( (v19 & 1) == 0 )
        goto LABEL_34;
      goto LABEL_4;
    default:
LABEL_27:
      v7 = 1;
      if ( (v3 & 1) != 0 )
        goto LABEL_4;
      if ( !v15 )
      {
        if ( (v6 & 1) == 0 )
          goto LABEL_22;
        goto LABEL_2;
      }
LABEL_34:
      if ( *(_BYTE *)v13 == 91 || (v6 & 1) != 0 )
        goto LABEL_2;
      if ( *(_BYTE *)v13 == 35
        || v15 < 0xF
        || *(_QWORD *)v13 ^ 0x625F69616E65706FLL | *(_QWORD *)(v13 + 7) ^ 0x6C72755F65736162LL )
      {
        goto LABEL_22;
      }
      v42 = v15;
      v43[0] = v13;
      v43[1] = v15;
      v43[2] = 0;
      v43[3] = v15;
      v43[4] = 0x3D0000003DLL;
      v44 = 1;
      v45 = 1;
      v41 = 1u;
      sub_140A09020(&v31, v43);
      if ( v31 == 1 )
      {
        v20 = v33;
        *((_QWORD *)&v41 + 1) = v33;
        goto LABEL_40;
      }
      if ( HIBYTE(v45) )
        goto LABEL_52;
      HIBYTE(v45) = 1;
      v20 = *((_QWORD *)&v41 + 1);
      if ( !(_BYTE)v45 && v42 == *((_QWORD *)&v41 + 1) )
        goto LABEL_52;
LABEL_40:
      if ( !(_QWORD)v41 )
        goto LABEL_52;
      if ( (_QWORD)v41 == 1 )
      {
        if ( !HIBYTE(v45) && ((_BYTE)v45 || v42 != v20) )
        {
          v21 = v42 - v20;
          goto LABEL_46;
        }
LABEL_52:
        *(_QWORD *)&v41 = 0;
        *((_QWORD *)&v41 + 1) = 1;
LABEL_22:
        v6 = 0;
        goto LABEL_3;
      }
      *(_QWORD *)&v41 = v41 - 1;
      if ( HIBYTE(v45) )
        goto LABEL_52;
      v23 = v43[0];
      sub_140A09020(&v31, v43);
      if ( v31 == 1 )
      {
        v21 = v32 - *((_QWORD *)&v41 + 1);
        v22 = *((_QWORD *)&v41 + 1) + v23;
      }
      else
      {
        if ( HIBYTE(v45) )
          goto LABEL_52;
        v20 = *((_QWORD *)&v41 + 1);
        v21 = v42 - *((_QWORD *)&v41 + 1);
        if ( ((unsigned __int8)v45 | (v42 != *((_QWORD *)&v41 + 1))) != 1 )
          goto LABEL_52;
LABEL_46:
        v22 = v43[0] + v20;
      }
      v24 = sub_1408FEA60(v22, v21);
      v26 = sub_1408FECE0(v24, v25, 34);
      v28 = v27;
      sub_1409B7E30(&v41, v26, v27);
      if ( !v28
        || (v34 = *((_QWORD *)&v41 + 1), (unsigned __int8)sub_140A09D60(
                                                            aCodexRouterV1_0,
                                                            16,
                                                            *((_QWORD *)&v41 + 1),
                                                            v42)) )
      {
        if ( (_QWORD)v41 )
          sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
        goto LABEL_22;
      }
      result = (_QWORD *)v42;
      v30 = v40;
      v40[2] = v42;
      *v30 = v41;
      return result;
  }
}
