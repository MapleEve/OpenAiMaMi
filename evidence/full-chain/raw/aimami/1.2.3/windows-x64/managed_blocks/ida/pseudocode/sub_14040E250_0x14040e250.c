// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_14040E250(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __m128i si128; // xmm6
  __m128i v6; // xmm7
  char v7; // bl
  bool v8; // zf
  __int64 v9; // r12
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r15
  _QWORD *v27; // r14
  __int64 *i; // rax
  __int64 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  _QWORD *result; // rax
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v43; // [rsp+30h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v46; // [rsp+48h] [rbp-38h]
  __int64 v47; // [rsp+50h] [rbp-30h]
  __int64 *v48; // [rsp+58h] [rbp-28h]
  __int64 v49; // [rsp+60h] [rbp-20h]
  char v50; // [rsp+68h] [rbp-18h]
  __int16 v51; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+78h] [rbp-8h]
  __int64 v53; // [rsp+80h] [rbp+0h]
  __int64 v54; // [rsp+88h] [rbp+8h] BYREF
  __int64 v55; // [rsp+90h] [rbp+10h]
  __int64 *v56; // [rsp+98h] [rbp+18h]
  __int64 *v57; // [rsp+A0h] [rbp+20h]
  _QWORD *v58; // [rsp+A8h] [rbp+28h]
  __int64 v59; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v60; // [rsp+B8h] [rbp+38h]
  __int64 v61; // [rsp+C0h] [rbp+40h]
  __int64 v62; // [rsp+C8h] [rbp+48h]
  __int64 v63; // [rsp+D0h] [rbp+50h]
  __int64 v64; // [rsp+D8h] [rbp+58h]

  v64 = -2; /*0x14040e273*/
  v58 = a1; /*0x14040e27f*/
  v59 = 0; /*0x14040e283*/
  v60 = 8; /*0x14040e28b*/
  v61 = 0; /*0x14040e293*/
  v43 = nullptr; /*0x14040e29b*/
  v45 = a2; /*0x14040e2ab*/
  v46 = a3; /*0x14040e2af*/
  v47 = 0; /*0x14040e2b3*/
  v48 = a3; /*0x14040e2bb*/
  v49 = 0xA0000000ALL; /*0x14040e2c9*/
  v50 = 1; /*0x14040e2cd*/
  v51 = 0; /*0x14040e2d1*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748E40); /*0x14040e2e2*/
  v6 = _mm_load_si128((const __m128i *)&xmmword_141748E50); /*0x14040e2ea*/
  while ( 1 ) /*0x14040e2f2*/
  {
    v7 = 0; /*0x14040e2f2*/
LABEL_4:
    if ( HIBYTE(v51) ) /*0x14040e30f*/
      break; /*0x14040e30f*/
    v9 = v45; /*0x14040e315*/
    sub_140421EE0(&v54, &v45); /*0x14040e31f*/
    if ( (_DWORD)v54 != 1 ) /*0x14040e329*/
    {
      if ( HIBYTE(v51) ) /*0x14040e354*/
        break; /*0x14040e354*/
      HIBYTE(v51) = 1; /*0x14040e35a*/
      v11 = (char *)a3 - (char *)v43; /*0x14040e366*/
      if ( ((unsigned __int8)v51 | (a3 != v43)) != 1 ) /*0x14040e371*/
        break; /*0x14040e371*/
      v12 = (__int64)v43 + v45; /*0x14040e377*/
      v13 = v11 - 1; /*0x14040e37e*/
      if ( !v11 ) /*0x14040e382*/
        goto LABEL_18; /*0x14040e382*/
LABEL_11:
      if ( *(_BYTE *)(v12 + v13) == 10 ) /*0x14040e389*/
      {
        v11 -= 2; /*0x14040e38b*/
        if ( !v13 || (v14 = v12, *(_BYTE *)(v12 + v11) != 13) ) /*0x14040e39c*/
          v14 = 0; /*0x14040e39e*/
        if ( v14 ) /*0x14040e3a3*/
          v12 = v14; /*0x14040e3a7*/
        else
          v11 = v13; /*0x14040e3a3*/
      }
      goto LABEL_18; /*0x14040e3a7*/
    }
    v10 = v43; /*0x14040e32f*/
    v43 = v56; /*0x14040e333*/
    v11 = (char *)v56 - (char *)v10; /*0x14040e337*/
    v12 = (__int64)v10 + v9; /*0x14040e33a*/
    v13 = (char *)v56 - (char *)v10 - 1; /*0x14040e340*/
    if ( v56 != v10 ) /*0x14040e344*/
      goto LABEL_11; /*0x14040e344*/
LABEL_18:
    v63 = v11; /*0x14040e3ae*/
    v15 = sub_14033BC10(v12, v11); /*0x14040e3b2*/
    v16 = (_BYTE *)v15; /*0x14040e3b7*/
    v18 = v17; /*0x14040e3ba*/
    switch ( v17 ) /*0x14040e3ce*/
    {
      case 0LL: /*0x14040e3ce*/
        goto LABEL_3;
      case 30LL: /*0x14040e3ce*/
        if ( _mm_movemask_epi8( /*0x14040e3ee*/
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v15 + 14)), si128),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v15), v6))) == 0xFFFF )
          goto LABEL_4; /*0x14040e3ee*/
        goto LABEL_30; /*0x14040e3ee*/
      case 36LL: /*0x14040e3ce*/
        if ( !(unsigned int)sub_1416847B0( /*0x14040e445*/
                              v15,
                              "# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MAN"
                              "UALLY)router-takeover-backup.json",
                              36) )
          goto LABEL_4; /*0x14040e44c*/
        goto LABEL_30; /*0x14040e44c*/
      case 39LL: /*0x14040e3ce*/
        if ( !(unsigned int)sub_1416847B0(v15, &xmmword_141753237, 39) ) /*0x14040e463*/
          goto LABEL_4; /*0x14040e46a*/
        goto LABEL_30; /*0x14040e46a*/
      case 55LL: /*0x14040e3ce*/
        if ( (unsigned int)sub_1416847B0(v15, &xmmword_141752F5B, 55) ) /*0x14040e481*/
          goto LABEL_30; /*0x14040e488*/
        goto LABEL_4; /*0x14040e488*/
      case 60LL: /*0x14040e3ce*/
        if ( !(unsigned int)sub_1416847B0( /*0x14040e409*/
                              v15,
                              "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json",
                              60) )
          goto LABEL_4; /*0x14040e410*/
        goto LABEL_30; /*0x14040e410*/
      case 64LL: /*0x14040e3ce*/
        if ( !(unsigned int)sub_1416847B0(v15, &xmmword_1417530C4, 64) ) /*0x14040e427*/
          goto LABEL_4; /*0x14040e42e*/
        goto LABEL_30; /*0x14040e42e*/
      default:
LABEL_30:
        if ( *v16 == 91 && v16[v18 - 1] == 93 ) /*0x14040e49f*/
        {
          if ( v18 == 1 || (v7 = 1, (char)v16[1] <= -65) ) /*0x14040e4b5*/
            sub_1416C2F60((_DWORD)v16, v18, 1, v18 - 1, (__int64)&off_141782B88); /*0x14040e7e7*/
          goto LABEL_4; /*0x14040e4b5*/
        }
LABEL_3:
        v8 = (v7 & 1) == 0; /*0x14040e300*/
        v7 = 1; /*0x14040e303*/
        if ( !v8 ) /*0x14040e305*/
          goto LABEL_4; /*0x14040e305*/
        sub_14040C750(&v54, v16, v18); /*0x14040e4c9*/
        if ( v54 != -1 ) /*0x14040e4d7*/
        {
          if ( v54 ) /*0x14040e4e0*/
            sub_140001660(v55, v54, 1); /*0x14040e4ec*/
          if ( v63 < 0 ) /*0x14040e4f6*/
          {
            v41 = 0; /*0x14040e7bb*/
            goto LABEL_78; /*0x14040e7bb*/
          }
          if ( v63 ) /*0x14040e4fc*/
          {
            nullsub_1(v19); /*0x14040e4fe*/
            v20 = v63; /*0x14040e508*/
            v21 = sub_140001650(v63, 1); /*0x14040e50f*/
            if ( !v21 ) /*0x14040e517*/
            {
              v62 = v20; /*0x14040e7ef*/
              v41 = 1; /*0x14040e7f3*/
LABEL_78:
              sub_1416C2D4B(v41, v62); /*0x14040e7bd*/
            }
            v62 = v21; /*0x14040e51d*/
            sub_141684120(v21, v12, v20); /*0x14040e52a*/
          }
          else
          {
            v62 = 1; /*0x14040e536*/
          }
          v22 = v61; /*0x14040e53a*/
          if ( v61 == v59 ) /*0x14040e542*/
            sub_141689AB0(&v59); /*0x14040e548*/
          v23 = v60; /*0x14040e54e*/
          v24 = 3 * v22; /*0x14040e552*/
          v25 = v63; /*0x14040e556*/
          *(_QWORD *)(v60 + 8 * v24) = v63; /*0x14040e55a*/
          *(_QWORD *)(v23 + 8 * v24 + 8) = v62; /*0x14040e562*/
          *(_QWORD *)(v23 + 8 * v24 + 16) = v25; /*0x14040e567*/
          v61 = v22 + 1; /*0x14040e56f*/
        }
        break; /*0x14040e573*/
    }
  }
  v52 = v59; /*0x14040e578*/
  v45 = v59; /*0x14040e597*/
  v57 = (__int64 *)(v60 + 24 * v61); /*0x14040e59b*/
  v46 = v57; /*0x14040e59f*/
  v26 = 24 * v61 - 24; /*0x14040e5a3*/
  v27 = (_QWORD *)(v60 + 32); /*0x14040e5a8*/
  v53 = v60; /*0x14040e5ac*/
  for ( i = (__int64 *)v60; i != v57; i = v29 ) /*0x14040e5b0*/
  {
    v29 = i + 3; /*0x14040e5d5*/
    if ( *i == -1 ) /*0x14040e5e4*/
    {
      if ( v57 != v29 ) /*0x14040e680*/
      {
        v36 = v26 / 0x18; /*0x14040e695*/
        do /*0x14040e6a7*/
        {
          v37 = *(v27 - 1); /*0x14040e6a9*/
          if ( v37 ) /*0x14040e6b0*/
            sub_140001660(*v27, v37, 1); /*0x14040e6bb*/
          v27 += 3; /*0x14040e6a0*/
          --v36; /*0x14040e6a4*/
        }
        while ( v36 ); /*0x14040e6a7*/
      }
      break; /*0x14040e6a7*/
    }
    v63 = *i; /*0x14040e5ea*/
    v30 = i[2]; /*0x14040e5f2*/
    v62 = i[1]; /*0x14040e5f6*/
    v31 = sub_14033BC10(v62, v30); /*0x14040e5ff*/
    v33 = v32; /*0x14040e602*/
    sub_14040C750(&v54, v31, v32); /*0x14040e60f*/
    v34 = v54; /*0x14040e615*/
    if ( v54 != -1 ) /*0x14040e61d*/
    {
      if ( v56 == a5 ) /*0x14040e62a*/
      {
        v35 = v55; /*0x14040e62c*/
        if ( !(unsigned int)sub_1416847B0(v55, a4, a5) ) /*0x14040e63e*/
        {
          if ( v34 ) /*0x14040e70c*/
            sub_140001660(v35, v34, 1); /*0x14040e71a*/
          sub_14040C9F0(v58, v31, v33); /*0x14040e72a*/
          if ( v63 ) /*0x14040e737*/
            sub_140001660(v62, v63, 1); /*0x14040e743*/
          if ( v57 != v29 ) /*0x14040e74c*/
          {
            v39 = v26 / 0x18; /*0x14040e761*/
            do /*0x14040e777*/
            {
              v40 = *(v27 - 1); /*0x14040e779*/
              if ( v40 ) /*0x14040e780*/
                sub_140001660(*v27, v40, 1); /*0x14040e78b*/
              v27 += 3; /*0x14040e770*/
              --v39; /*0x14040e774*/
            }
            while ( v39 ); /*0x14040e777*/
          }
          if ( v52 ) /*0x14040e799*/
            sub_140001660(v53, 24 * v52, 8); /*0x14040e7ad*/
          return v58; /*0x14040e7b6*/
        }
      }
      if ( v34 ) /*0x14040e647*/
        sub_140001660(v55, v34, 1); /*0x14040e656*/
    }
    if ( v63 ) /*0x14040e662*/
      sub_140001660(v62, v63, 1); /*0x14040e672*/
    v26 -= 24LL; /*0x14040e5c0*/
    v27 += 3; /*0x14040e5c4*/
  }
  if ( v52 ) /*0x14040e6c9*/
    sub_140001660(v53, 24 * v52, 8); /*0x14040e6dd*/
  result = v58; /*0x14040e6e2*/
  *v58 = -1; /*0x14040e6e6*/
  return result; /*0x14040e6ed*/
}