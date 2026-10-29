// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f0fc90 | name sub_140F0FC90
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140F0FC90(_QWORD *a1, __int64 a2, __int64 a3)
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
  __int64 v16; // rcx
  const char *v17; // rdx
  char v18; // cl
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  _QWORD *result; // rax
  _OWORD *v29; // rcx
  int v30; // [rsp+20h] [rbp-60h] BYREF
  __int64 v31; // [rsp+28h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  unsigned __int64 v34; // [rsp+40h] [rbp-40h]
  __int64 v35; // [rsp+48h] [rbp-38h]
  _QWORD v36[5]; // [rsp+50h] [rbp-30h] BYREF
  char v37; // [rsp+78h] [rbp-8h]
  __int16 v38; // [rsp+80h] [rbp+0h]
  _QWORD *v39; // [rsp+88h] [rbp+8h]
  __int128 v40; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp+20h]
  _QWORD v42[5]; // [rsp+A8h] [rbp+28h] BYREF
  char v43; // [rsp+D0h] [rbp+50h]
  __int16 v44; // [rsp+D8h] [rbp+58h]
  char v45; // [rsp+E7h] [rbp+67h] BYREF
  __int64 v46; // [rsp+E8h] [rbp+68h]

  v46 = -2;
  v39 = a1;
  v45 = 2;
  v34 = 0;
  v35 = a3;
  v36[0] = a2;
  v36[1] = a3;
  v36[2] = 0;
  v36[3] = a3;
  v36[4] = 0xA0000000ALL;
  v37 = 1;
  v38 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  v6 = 0;
  while ( 1 )
  {
    v8 = v36[0];
    sub_140F9C6A0(&v40, v36);
    if ( (_DWORD)v40 == 1 )
    {
      v9 = v34;
      v34 = v41;
      v10 = v41 - v9;
      v11 = v9 + v8;
      if ( v41 == v9 )
        goto LABEL_15;
    }
    else
    {
      if ( HIBYTE(v38) || (HIBYTE(v38) = 1, v10 = v35 - v34, ((unsigned __int8)v38 | (v35 != v34)) != 1) )
      {
LABEL_59:
        result = v39;
        *v39 = -1;
        return result;
      }
      v11 = v36[0] + v34;
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
    v13 = sub_140E91160(v11, v12);
    v15 = v14;
    if ( (unsigned __int8)sub_1402B5F80(&v45, v11, v12) )
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
    if ( HIBYTE(v38) )
      goto LABEL_59;
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
      if ( !(unsigned int)sub_1418F4B70(v13, aAimamiRelayMan_4) )
        goto LABEL_3;
      goto LABEL_27;
    case 0x27uLL:
      if ( !(unsigned int)sub_1418F4B70(v13, aAimamiRelayCod_0) )
        goto LABEL_3;
      goto LABEL_27;
    case 0x37uLL:
      v16 = v13;
      v17 = aAimamiRelayMan_1;
      goto LABEL_33;
    case 0x3CuLL:
      v16 = v13;
      v17 = aAimamiRelayMan_2;
      goto LABEL_33;
    case 0x40uLL:
      v16 = v13;
      v17 = aAimamiRelayCod;
LABEL_33:
      v18 = v3 | ((unsigned int)sub_1418F4B70(v16, v17) == 0);
      v7 = 1;
      if ( (v18 & 1) == 0 )
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
      v41 = v15;
      v42[0] = v13;
      v42[1] = v15;
      v42[2] = 0;
      v42[3] = v15;
      v42[4] = 0x3D0000003DLL;
      v43 = 1;
      v44 = 1;
      v40 = 1u;
      sub_140F9C6A0(&v30, v42);
      if ( v30 == 1 )
      {
        v19 = v32;
        *((_QWORD *)&v40 + 1) = v32;
        goto LABEL_40;
      }
      if ( HIBYTE(v44) )
        goto LABEL_50;
      HIBYTE(v44) = 1;
      v19 = *((_QWORD *)&v40 + 1);
      if ( !(_BYTE)v44 && v41 == *((_QWORD *)&v40 + 1) )
        goto LABEL_50;
LABEL_40:
      if ( !(_QWORD)v40 )
        goto LABEL_50;
      if ( (_QWORD)v40 == 1 )
      {
        if ( !HIBYTE(v44) )
          goto LABEL_43;
        goto LABEL_50;
      }
      *(_QWORD *)&v40 = v40 - 1;
      if ( HIBYTE(v44) )
        goto LABEL_50;
      v22 = v42[0];
      sub_140F9C6A0(&v30, v42);
      if ( v30 == 1 )
      {
        v20 = v31 - *((_QWORD *)&v40 + 1);
        v21 = *((_QWORD *)&v40 + 1) + v22;
        goto LABEL_53;
      }
      if ( HIBYTE(v44) )
        goto LABEL_50;
      v19 = *((_QWORD *)&v40 + 1);
LABEL_43:
      v20 = v41 - v19;
      if ( ((unsigned __int8)v44 | (v41 != v19)) != 1 )
      {
LABEL_50:
        *(_QWORD *)&v40 = 0;
        *((_QWORD *)&v40 + 1) = 1;
LABEL_22:
        v6 = 0;
        goto LABEL_3;
      }
      v21 = v42[0] + v19;
LABEL_53:
      v23 = sub_140E91160(v21, v20);
      v25 = sub_140E913E0(v23, v24, 34);
      v27 = v26;
      sub_140F24640(&v40, v25, v26);
      if ( !v27
        || (v33 = *((_QWORD *)&v40 + 1), (unsigned __int8)sub_140F9CFB0(
                                                            aCodexRouterV1_0,
                                                            16,
                                                            *((_QWORD *)&v40 + 1),
                                                            v41)) )
      {
        if ( (_QWORD)v40 )
          sub_140001660(*((_QWORD *)&v40 + 1), v40, 1);
        goto LABEL_22;
      }
      result = (_QWORD *)v41;
      v29 = v39;
      v39[2] = v41;
      *v29 = v40;
      return result;
  }
}
