// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140f008d0 | name sub_140F008D0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140F008D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  _BYTE *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  char result; // al
  char v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // r15
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r14
  const __m128i *v37; // rbx
  __m128i *v38; // rax
  __int64 v39; // rdx
  char v40; // si
  char v41; // si
  __m128i v42; // [rsp+20h] [rbp-60h] BYREF
  __int128 v43; // [rsp+30h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-40h]
  __int64 v45; // [rsp+48h] [rbp-38h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v50; // [rsp+70h] [rbp-10h]
  __int64 v51; // [rsp+78h] [rbp-8h]
  __int64 v52; // [rsp+80h] [rbp+0h]
  __m128i v53[9]; // [rsp+88h] [rbp+8h] BYREF
  __int64 v54; // [rsp+118h] [rbp+98h] BYREF
  _BYTE v55[24]; // [rsp+120h] [rbp+A0h]
  __int64 v56; // [rsp+138h] [rbp+B8h]
  __int64 v57; // [rsp+140h] [rbp+C0h]
  __int64 v58; // [rsp+148h] [rbp+C8h]
  __int64 v59; // [rsp+150h] [rbp+D0h]
  __int64 v60; // [rsp+158h] [rbp+D8h]
  __int64 v61; // [rsp+160h] [rbp+E0h]
  __int64 v62; // [rsp+168h] [rbp+E8h]
  __int64 v63; // [rsp+170h] [rbp+F0h]
  __int64 v64; // [rsp+178h] [rbp+F8h]
  __m128i v65[9]; // [rsp+180h] [rbp+100h] BYREF
  __int64 v66; // [rsp+210h] [rbp+190h]
  __int64 v67; // [rsp+218h] [rbp+198h]
  __int64 v68; // [rsp+220h] [rbp+1A0h]
  __int64 v69; // [rsp+228h] [rbp+1A8h]
  __int64 v70; // [rsp+230h] [rbp+1B0h]
  __int64 v71; // [rsp+238h] [rbp+1B8h]
  _BYTE v72[15]; // [rsp+240h] [rbp+1C0h]
  char v73; // [rsp+250h] [rbp+1D0h] BYREF
  _BYTE v74[15]; // [rsp+251h] [rbp+1D1h]
  __int64 v75; // [rsp+260h] [rbp+1E0h]
  __int64 v76; // [rsp+268h] [rbp+1E8h]
  _QWORD v77[2]; // [rsp+270h] [rbp+1F0h]
  _QWORD v78[2]; // [rsp+280h] [rbp+200h]
  __m128i v79; // [rsp+290h] [rbp+210h] BYREF
  __int64 v80; // [rsp+2A0h] [rbp+220h]
  _QWORD v81[2]; // [rsp+2B0h] [rbp+230h]
  __m128i v82; // [rsp+2C0h] [rbp+240h]
  __int64 v83; // [rsp+2D0h] [rbp+250h]
  __int64 v84; // [rsp+2D8h] [rbp+258h]
  __int64 v85; // [rsp+2E0h] [rbp+260h]

  v85 = -2;
  v8 = (_BYTE *)sub_140E91160(a3, a4);
  sub_140EFDF00(v42.m128i_i64, v8, v9);
  if ( v42.m128i_i64[0] == -1 )
    return 0;
  v82 = v42;
  v10 = v43;
  v11 = (_BYTE *)sub_140E91160(a3, a4);
  sub_140EFDF00(v42.m128i_i64, v11, v12);
  if ( v42.m128i_i64[0] == -1 )
    goto LABEL_32;
  v84 = v10;
  v67 = a1;
  v66 = a2;
  v80 = v43;
  v79 = _mm_loadu_si128(&v42);
  sub_1411D2A40(&v54);
  v13 = v54;
  v14 = *(_QWORD *)v55;
  v15 = v55[8];
  v77[0] = *(_QWORD *)&v55[9];
  *(_QWORD *)((char *)v77 + 7) = *(_QWORD *)&v55[16];
  v16 = v56;
  v17 = v57;
  v18 = v59;
  v19 = v60;
  v20 = v61;
  v21 = v62;
  v22 = v63;
  if ( v54 == 2 )
  {
    v81[0] = v77[0];
    *(_QWORD *)((char *)v81 + 7) = *(_QWORD *)((char *)v77 + 7);
    v78[0] = v81[0];
    *(_QWORD *)((char *)v78 + 7) = *(_QWORD *)((char *)v77 + 7);
    if ( *(_QWORD *)v55 == 2 )
      goto LABEL_5;
LABEL_18:
    v31 = v18;
    if ( v16 )
    {
      v32 = v21;
      v33 = v22;
      sub_140001660(v17, v16, 1);
      v22 = v33;
      v21 = v32;
    }
    if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v22, v21, 1);
    if ( v20 )
    {
      v34 = (_QWORD *)(v19 + 8);
      do
      {
        v35 = *(v34 - 1);
        if ( v35 )
          sub_140001660(*v34, v35, 1);
        v34 += 3;
        --v20;
      }
      while ( v20 );
    }
    if ( v31 )
      sub_140001660(v19, 24 * v31, 8);
    goto LABEL_30;
  }
  v68 = v60;
  v69 = v58;
  v83 = v64;
  v70 = v59;
  v29 = v55[8];
  v30 = v62;
  v71 = v63;
  sub_1418F44E0(v53, v65, 0x90u);
  v81[0] = v77[0];
  *(_QWORD *)((char *)v81 + 7) = *(_QWORD *)((char *)v77 + 7);
  v42.m128i_i64[0] = v13;
  v42.m128i_i64[1] = v14;
  LOBYTE(v43) = v29;
  *(_QWORD *)((char *)&v43 + 1) = v81[0];
  *((_QWORD *)&v43 + 1) = *(_QWORD *)((char *)v77 + 7);
  v44 = v16;
  v45 = v17;
  v46 = v69;
  v47 = v70;
  v48 = v68;
  v49 = v20;
  v50 = v30;
  v51 = v71;
  v52 = v83;
  sub_1401ABC50((__m128i *)&v54, (__int64)&v42);
  v15 = v55[0];
  v78[0] = *(_QWORD *)&v55[1];
  *(_QWORD *)((char *)v78 + 7) = *(_QWORD *)&v55[8];
  if ( v54 != 2 )
  {
    v18 = v58;
    v19 = v59;
    v20 = v60;
    v21 = v61;
    v22 = v62;
    v16 = *(_QWORD *)&v55[16];
    v17 = v56;
    goto LABEL_18;
  }
  v16 = *(_QWORD *)&v55[16];
  v17 = v56;
LABEL_5:
  *(_QWORD *)&v72[7] = *(_QWORD *)((char *)v78 + 7);
  *(_QWORD *)v72 = v78[0];
  if ( (_BYTE)v15 == 0xFF )
    goto LABEL_30;
  *(_QWORD *)&v74[7] = *(_QWORD *)&v72[7];
  *(_QWORD *)v74 = *(_QWORD *)v72;
  v75 = v16;
  v76 = v17;
  v73 = v15;
  v23 = sub_14114ED80(
          &v79,
          &v73,
          v15,
          v21,
          v42.m128i_i64[0],
          v42.m128i_i64[1],
          v43,
          *((_QWORD *)&v43 + 1),
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
  if ( !v23 )
  {
    sub_140194020(&v73);
LABEL_30:
    if ( v79.m128i_i64[0] )
      sub_140001660(v79.m128i_i64[1], v79.m128i_i64[0], 1);
LABEL_32:
    v26 = v82.m128i_i64[0];
LABEL_33:
    if ( v26 )
      sub_140001660(v82.m128i_i64[1], v26, 1);
    return 0;
  }
  if ( *(_BYTE *)v23 )
  {
    v25 = -1;
    goto LABEL_9;
  }
  v25 = *(_QWORD *)(v23 + 24);
  if ( v25 < 0 )
  {
    v36 = 0;
    goto LABEL_39;
  }
  if ( v25 )
  {
    v37 = *(const __m128i **)(v23 + 16);
    nullsub_1(v24);
    v36 = 1;
    v38 = (__m128i *)sub_140001650(v25, 1);
    if ( !v38 )
LABEL_39:
      sub_141938D2B(v36, v25);
    v83 = (__int64)v38;
    sub_1418F44E0(v38, v37, v25);
  }
  else
  {
    v83 = 1;
    v25 = 0;
  }
LABEL_9:
  sub_140194020(&v73);
  if ( v79.m128i_i64[0] )
    sub_140001660(v79.m128i_i64[1], v79.m128i_i64[0], 1);
  v26 = v82.m128i_i64[0];
  if ( v25 == -1 )
    goto LABEL_33;
  v27 = v82.m128i_i64[0];
  result = 0;
  switch ( v84 )
  {
    case 5LL:
      if ( *(_DWORD *)v82.m128i_i64[1] ^ 0x65646F6D | *(unsigned __int8 *)(v82.m128i_i64[1] + 4) ^ 0x6C )
        goto LABEL_50;
      v84 = v25;
      result = sub_140C71530(v83, v25);
      goto LABEL_53;
    case 7LL:
      if ( !(*(_DWORD *)v82.m128i_i64[1] ^ 0x666F7270 | *(_DWORD *)(v82.m128i_i64[1] + 3) ^ 0x656C6966) )
        goto LABEL_46;
      goto LABEL_50;
    case 14LL:
      if ( *(_QWORD *)v82.m128i_i64[1] ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v82.m128i_i64[1] + 6) ^ 0x72656469766F7270LL )
        goto LABEL_50;
LABEL_46:
      v84 = v25;
      result = sub_140C738C0(v83, v25);
      goto LABEL_53;
    case 15LL:
      if ( *(_QWORD *)v82.m128i_i64[1] ^ 0x625F69616E65706FLL | *(_QWORD *)(v82.m128i_i64[1] + 7) ^ 0x6C72755F65736162LL )
        goto LABEL_50;
      v84 = v25;
      result = (unsigned __int16)sub_140C72440(v83, v25) == 1;
      goto LABEL_53;
    case 18LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(
                 _mm_cvtsi32_si128(*(unsigned __int16 *)(v82.m128i_i64[1] + 16)),
                 (__m128i)xmmword_141A555C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v82.m128i_i64[1]), (__m128i)xmmword_141A555B0))) == 0xFFFF )
      {
        v84 = v25;
        result = sub_140EFC0C0(v67, v66, v83, v25);
LABEL_53:
        v27 = v82.m128i_i64[0];
        v25 = v84;
      }
      else
      {
LABEL_50:
        result = 0;
      }
LABEL_54:
      if ( v25 )
      {
        v39 = v25;
        v40 = result;
        sub_140001660(v83, v39, 1);
        result = v40;
      }
      if ( v27 )
      {
        v41 = result;
        sub_140001660(v82.m128i_i64[1], v27, 1);
        result = v41;
      }
      break;
    default:
      goto LABEL_54;
  }
  return result;
}
