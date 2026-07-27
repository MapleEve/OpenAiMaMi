// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1407641E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  __m128i si128; // xmm6
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // r15
  __int64 result; // rax
  __m128i v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h]
  __m128i v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  _QWORD v31[5]; // [rsp+70h] [rbp-10h] BYREF
  char v32; // [rsp+98h] [rbp+18h]
  __int16 v33; // [rsp+A0h] [rbp+20h]
  __int64 *v34; // [rsp+A8h] [rbp+28h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+B0h] [rbp+30h]
  __int64 v36; // [rsp+B8h] [rbp+38h]
  __int64 v37; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v38; // [rsp+C8h] [rbp+48h]
  __int128 v39; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v40; // [rsp+E0h] [rbp+60h]
  __int64 v41; // [rsp+E8h] [rbp+68h]

  v41 = -2; /*0x1407641ff*/
  *(_QWORD *)&v39 = 0; /*0x14076420d*/
  *((_QWORD *)&v39 + 1) = 8; /*0x140764215*/
  v40 = 0; /*0x14076421d*/
  v29 = 0; /*0x140764225*/
  v30 = a3; /*0x14076422d*/
  v31[0] = a2; /*0x140764235*/
  v31[1] = a3; /*0x140764239*/
  v31[2] = 0; /*0x14076423d*/
  v31[3] = a3; /*0x140764245*/
  v31[4] = 0xA0000000ALL; /*0x140764253*/
  v32 = 1; /*0x140764257*/
  v33 = 0; /*0x14076425b*/
  v6 = 0; /*0x140764261*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748EC0); /*0x140764271*/
  while ( (v6 & 1) == 0 ) /*0x1407642a6*/
  {
    v11 = v31[0]; /*0x1407642ac*/
    sub_1407BC790(&v34, v31); /*0x1407642b6*/
    if ( (_DWORD)v34 == 1 ) /*0x1407642c0*/
    {
      v12 = v29; /*0x1407642c6*/
      v29 = v36; /*0x1407642ca*/
      v13 = v36 - v12; /*0x1407642ce*/
      v14 = v12 + v11; /*0x1407642d1*/
      if ( v36 == v12 ) /*0x1407642d7*/
        goto LABEL_18; /*0x1407642d7*/
LABEL_12:
      if ( *(_BYTE *)(v14 + v13 - 1) == 10 ) /*0x140764316*/
      {
        if ( v13 == 1 ) /*0x14076431e*/
        {
          v13 = 0; /*0x14076432e*/
        }
        else if ( *(_BYTE *)(v14 + v13 - 2) == 13 ) /*0x140764326*/
        {
          v13 -= 2; /*0x140764328*/
        }
        else
        {
          --v13; /*0x140764332*/
        }
      }
      goto LABEL_18; /*0x14076432c*/
    }
    if ( HIBYTE(v33) ) /*0x1407642e4*/
      break; /*0x1407642e4*/
    HIBYTE(v33) = 1; /*0x1407642ea*/
    v13 = v30 - v29; /*0x1407642f6*/
    if ( ((unsigned __int8)v33 | (v30 != v29)) != 1 ) /*0x140764301*/
      break; /*0x140764301*/
    v14 = v31[0] + v29; /*0x140764307*/
    if ( v13 ) /*0x14076430e*/
      goto LABEL_12; /*0x14076430e*/
LABEL_18:
    v15 = sub_14033BC10(v14, v13); /*0x140764340*/
    if ( !v16 || *(_BYTE *)v15 != 91 || *(_BYTE *)(v15 + v16 - 1) != 93 ) /*0x140764360*/
      goto LABEL_4; /*0x140764360*/
    if ( v16 == 1 || *(char *)(v15 + 1) <= -65 ) /*0x140764374*/
      sub_1416C2F60(v15, v16, 1, v16 - 1, (__int64)&off_141782B88); /*0x14076459e*/
    if ( (unsigned __int64)(v16 - 2) < 0x10 ) /*0x140764382*/
    {
      if ( (unsigned __int64)(v16 - 2) < 9 ) /*0x140764388*/
        goto LABEL_4; /*0x140764388*/
LABEL_27:
      if ( !(*(_QWORD *)(v15 + 1) ^ 0x73656C69666F7270LL | *(unsigned __int8 *)(v15 + 9) ^ 0x2ELL) ) /*0x1407643b5*/
      {
        v17 = sub_14033BE90(v15 + 10, v16 - 11, 34); /*0x1407643d2*/
        v19 = v18; /*0x1407643d5*/
        v37 = v17; /*0x1407643d8*/
        v38 = v18; /*0x1407643dc*/
        if ( !(unsigned __int8)sub_140763330(v17, v18, a4) ) /*0x1407643e6*/
        {
          if ( v19 == 12 ) /*0x1407643f7*/
          {
            if ( *(_QWORD *)v17 ^ 0x725F696D616D6961LL | *(_DWORD *)(v17 + 8) ^ 0x79616C65u ) /*0x140764412*/
              goto LABEL_38; /*0x140764415*/
          }
          else if ( v19 <= 0xC || *(_QWORD *)v17 ^ 0x725F696D616D6961LL | *(_QWORD *)(v17 + 5) ^ 0x5F79616C65725F69LL ) /*0x14076449a*/
          {
LABEL_38:
            v34 = &v37; /*0x1407644a3*/
            v35 = sub_14041F680; /*0x1407644b2*/
            sub_14149C0F0(&v25, &unk_14178C49A, &v34); /*0x1407644c4*/
            v23 = v40; /*0x1407644ca*/
            if ( v40 == (_QWORD)v39 ) /*0x1407644d2*/
              sub_141689AB0(&v39); /*0x1407644dc*/
            v8 = *((_QWORD *)&v39 + 1); /*0x14076427b*/
            v9 = 3 * v23; /*0x14076427f*/
            *(_QWORD *)(*((_QWORD *)&v39 + 1) + 24 * v23 + 16) = v26; /*0x140764287*/
            v10 = _mm_loadu_si128(&v25); /*0x14076428c*/
LABEL_3:
            *(__m128i *)(v8 + 8 * v9) = v10; /*0x140764291*/
            v40 = v23 + 1; /*0x140764299*/
            goto LABEL_4; /*0x140764299*/
          }
        }
      }
      goto LABEL_4; /*0x140764415*/
    }
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v15 + 1)), si128)) != 0xFFFF ) /*0x1407643a3*/
      goto LABEL_27; /*0x1407643a3*/
    v20 = sub_14033BE90(v15 + 17, v16 - 18, 34); /*0x140764434*/
    v22 = v21; /*0x140764437*/
    v37 = v20; /*0x14076443a*/
    v38 = v21; /*0x14076443e*/
    if ( !(unsigned __int8)sub_140763330(v20, v21, a4) ) /*0x140764448*/
    {
      if ( v22 == 12 ) /*0x140764459*/
      {
        if ( *(_QWORD *)v20 ^ 0x725F696D616D6961LL | *(_DWORD *)(v20 + 8) ^ 0x79616C65u ) /*0x140764474*/
          goto LABEL_42; /*0x140764477*/
      }
      else if ( v22 <= 0xC || *(_QWORD *)v20 ^ 0x725F696D616D6961LL | *(_QWORD *)(v20 + 5) ^ 0x5F79616C65725F69LL ) /*0x1407644ff*/
      {
LABEL_42:
        v34 = &v37; /*0x140764508*/
        v35 = sub_14041F680; /*0x140764517*/
        sub_14149C0F0(&v27, &unk_14178C4A9, &v34); /*0x140764529*/
        v23 = v40; /*0x14076452f*/
        if ( v40 == (_QWORD)v39 ) /*0x140764537*/
          sub_141689AB0(&v39); /*0x14076453d*/
        v8 = *((_QWORD *)&v39 + 1); /*0x140764543*/
        v9 = 3 * v23; /*0x140764547*/
        *(_QWORD *)(*((_QWORD *)&v39 + 1) + 24 * v23 + 16) = v28; /*0x14076454f*/
        v10 = _mm_loadu_si128(&v27); /*0x140764554*/
        goto LABEL_3; /*0x140764559*/
      }
    }
LABEL_4:
    v6 = HIBYTE(v33); /*0x1407642a0*/
  }
  result = v40; /*0x14076455e*/
  *(_QWORD *)(a1 + 16) = v40; /*0x140764562*/
  *(_OWORD *)a1 = v39; /*0x14076456a*/
  return result; /*0x14076456d*/
}