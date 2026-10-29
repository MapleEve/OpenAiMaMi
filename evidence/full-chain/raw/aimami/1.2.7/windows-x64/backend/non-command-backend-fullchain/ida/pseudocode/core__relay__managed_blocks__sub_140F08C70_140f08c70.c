// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f08c70 | name sub_140F08C70
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140F08C70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
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
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+38h] [rbp-48h]
  _QWORD v34[5]; // [rsp+48h] [rbp-38h] BYREF
  char v35; // [rsp+70h] [rbp-10h]
  __int16 v36; // [rsp+78h] [rbp-8h]
  __int64 *v37; // [rsp+80h] [rbp+0h]
  __int64 v38; // [rsp+88h] [rbp+8h]
  __m128i v39; // [rsp+90h] [rbp+10h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+20h]
  __int64 v41; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v43; // [rsp+B8h] [rbp+38h]
  __m128i v44; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+50h]
  __int128 v46; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v47; // [rsp+F0h] [rbp+70h]
  __int64 v48; // [rsp+F8h] [rbp+78h]
  __int64 v49; // [rsp+100h] [rbp+80h]
  __int64 v50; // [rsp+108h] [rbp+88h]
  char v51; // [rsp+116h] [rbp+96h] BYREF
  char v52; // [rsp+117h] [rbp+97h]
  __int64 v53; // [rsp+118h] [rbp+98h]

  v53 = -2;
  v37 = a4;
  *(_QWORD *)&v46 = 0;
  *((_QWORD *)&v46 + 1) = 8;
  v47 = 0;
  v51 = 2;
  v32 = 0;
  v34[0] = a2;
  v34[1] = a3;
  v34[2] = 0;
  v34[3] = a3;
  v34[4] = 0xA0000000ALL;
  v35 = 1;
  v36 = 0;
  v6 = -1;
  v7 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1419EC580);
  while ( 1 )
  {
    v50 = v6;
    if ( (v7 & 1) != 0 )
      break;
    v9 = v34[0];
    v49 = v6;
    v52 = 0;
    sub_140F9C6A0(&v39, v34);
    if ( v39.m128i_i32[0] != 1 )
    {
      if ( HIBYTE(v36) || (HIBYTE(v36) = 1, v11 = a3 - v32, ((unsigned __int8)v36 | (a3 != v32)) != 1) )
      {
        v6 = v50;
        break;
      }
      v12 = v34[0] + v32;
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
    v10 = v32;
    v32 = v40;
    v11 = v40 - v10;
    v12 = v10 + v9;
    if ( v40 != v10 )
      goto LABEL_10;
LABEL_16:
    v13 = sub_140E91160(v12, v11);
    v15 = v14;
    if ( (unsigned __int8)sub_1402B5F80(&v51, v12, v11) )
    {
      v6 = v50;
      if ( v15 && *(_BYTE *)v13 == 91 && *(_BYTE *)(v13 + v15 - 1) == 93 )
      {
        v16 = v15 - 1;
        if ( v15 == 1 || *(char *)(v13 + 1) <= -65 )
        {
          v49 = v50;
          v52 = 0;
          sub_141938F40(v13, v15, 1, v16, (__int64)&off_1419E98C8);
        }
        if ( v50 != -1 )
        {
          if ( v4 != 1 || (v5 & 1) != 0 )
          {
            if ( v50 )
              sub_140001660(v48, v50, 1);
          }
          else
          {
            v17 = v47;
            if ( v47 == (_QWORD)v46 )
              sub_14190FDC0(&v46);
            v18 = *((_QWORD *)&v46 + 1);
            v19 = 3 * v17;
            *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v19) = v50;
            *(_QWORD *)(v18 + 8 * v19 + 8) = v48;
            *(_QWORD *)(v18 + 8 * v19 + 16) = v38;
            v47 = v17 + 1;
          }
        }
        if ( (unsigned __int64)(v15 - 2) >= 0x10 )
        {
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 + 1)), si128)) == 0xFFFF )
          {
            v49 = -1;
            v52 = 0;
            sub_140F04AB0(&v41, v13 + 17, v15 - 18, v16);
            v23 = v42;
            v24 = v43;
            v6 = -1;
            if ( sub_140F06440(v42, v43, v37) )
              goto LABEL_50;
            v5 = sub_140F3F640(v23, v24);
            v44.m128i_i64[0] = (__int64)&v41;
            v44.m128i_i64[1] = (__int64)sub_1400015F0;
            sub_1416ABFD0(&v39, &unk_141A5CBA7, &v44);
            v44 = _mm_loadu_si128(&v39);
            v45 = v40;
            if ( v5 )
            {
              sub_1416AC440(&v39, &v44);
              v22 = v47;
              if ( v47 == (_QWORD)v46 )
                goto LABEL_47;
              goto LABEL_48;
            }
LABEL_49:
            v48 = v44.m128i_i64[1];
            v6 = v44.m128i_i64[0];
            v38 = v45;
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
        v49 = -1;
        v52 = 0;
        sub_140F04AB0(&v41, v13 + 10, v15 - 11, v16);
        v20 = v42;
        v21 = v43;
        if ( !sub_140F06440(v42, v43, v37) )
        {
          v5 = sub_140F3F640(v20, v21);
          v44.m128i_i64[0] = (__int64)&v41;
          v44.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_1416ABFD0(&v39, &unk_141A5CB98, &v44);
          v44 = _mm_loadu_si128(&v39);
          v45 = v40;
          if ( v5 )
          {
            sub_1416AC440(&v39, &v44);
            v22 = v47;
            if ( v47 == (_QWORD)v46 )
LABEL_47:
              sub_14190FDC0(&v46);
LABEL_48:
            v25 = *((_QWORD *)&v46 + 1);
            v26 = 3 * v22;
            *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v26 + 16) = v40;
            *(__m128i *)(v25 + 8 * v26) = _mm_loadu_si128(&v39);
            v47 = v22 + 1;
          }
          goto LABEL_49;
        }
LABEL_50:
        if ( !v41 )
          goto LABEL_32;
        sub_140001660(v42, v41, 1);
        v7 = HIBYTE(v36);
      }
      else
      {
        if ( v50 != -1 && (v5 & 1) == 0 && (v4 & 1) == 0 )
        {
          v49 = v50;
          v52 = 0;
          v4 = sub_140F32E80(v13, v15);
          v5 = 0;
        }
LABEL_32:
        v7 = HIBYTE(v36);
      }
    }
    else
    {
      v6 = v50;
      v7 = HIBYTE(v36);
    }
  }
  if ( v6 != -1 )
  {
    if ( v4 != 1 || (v5 & 1) != 0 )
    {
      if ( v6 )
        sub_140001660(v48, v6, 1);
    }
    else
    {
      v27 = v47;
      if ( v47 == (_QWORD)v46 )
        sub_14190FDC0(&v46);
      v28 = *((_QWORD *)&v46 + 1);
      v29 = 3 * v27;
      *(_QWORD *)(*((_QWORD *)&v46 + 1) + 8 * v29) = v50;
      *(_QWORD *)(v28 + 8 * v29 + 8) = v48;
      *(_QWORD *)(v28 + 8 * v29 + 16) = v38;
      v47 = v27 + 1;
    }
  }
  result = v47;
  *(_QWORD *)(a1 + 16) = v47;
  *(_OWORD *)a1 = v46;
  return result;
}
