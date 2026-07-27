// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404119E0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  bool v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  bool v11; // cf
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _BYTE *v15; // r14
  __int64 v16; // r13
  __int64 v17; // r8
  _BYTE *v18; // rcx
  __int128 *v19; // rdx
  __int64 v20; // r8
  _BYTE *v21; // rcx
  __int128 *v22; // rdx
  bool v23; // zf
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // [rsp+28h] [rbp-58h]
  _QWORD v31[5]; // [rsp+38h] [rbp-48h] BYREF
  char v32; // [rsp+60h] [rbp-20h]
  __int16 v33; // [rsp+68h] [rbp-18h]
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+0h]
  __int128 v36; // [rsp+88h] [rbp+8h] BYREF
  __int64 v37; // [rsp+98h] [rbp+18h]
  __int64 v38; // [rsp+A0h] [rbp+20h]

  v38 = -2; /*0x1404119fb*/
  *(_QWORD *)&v36 = 0; /*0x140411a06*/
  *((_QWORD *)&v36 + 1) = 8; /*0x140411a0e*/
  v37 = 0; /*0x140411a16*/
  v29 = 0; /*0x140411a1e*/
  v31[0] = a2; /*0x140411a2e*/
  v31[1] = a3; /*0x140411a32*/
  v31[2] = 0; /*0x140411a36*/
  v31[3] = a3; /*0x140411a3e*/
  v31[4] = 0xA0000000ALL; /*0x140411a4c*/
  v32 = 1; /*0x140411a50*/
  v33 = 0; /*0x140411a54*/
  v4 = 0; /*0x140411a5a*/
  v5 = 0; /*0x140411a67*/
  while ( (v4 & 1) == 0 ) /*0x140411a76*/
  {
    v6 = v31[0]; /*0x140411a7c*/
    sub_140421EE0(&v34, v31); /*0x140411a86*/
    if ( (_DWORD)v34 == 1 ) /*0x140411a90*/
    {
      v7 = v29; /*0x140411a96*/
      v29 = v35; /*0x140411a9a*/
      v8 = v35 - v7; /*0x140411a9e*/
      v9 = v7 + v6; /*0x140411aa1*/
      v10 = v35 - v7; /*0x140411aa4*/
      v11 = v10 == 0; /*0x140411aa7*/
      v12 = v10 - 1; /*0x140411aa7*/
      if ( v11 ) /*0x140411aab*/
        goto LABEL_17; /*0x140411aab*/
LABEL_10:
      if ( *(_BYTE *)(v9 + v12) == 10 ) /*0x140411ae9*/
      {
        v8 -= 2; /*0x140411aeb*/
        if ( !v12 || (v13 = v9, *(_BYTE *)(v9 + v8) != 13) ) /*0x140411afc*/
          v13 = 0; /*0x140411afe*/
        if ( v13 ) /*0x140411b03*/
          v9 = v13; /*0x140411b07*/
        else
          v8 = v12; /*0x140411b03*/
      }
      goto LABEL_17; /*0x140411b07*/
    }
    if ( HIBYTE(v33) ) /*0x140411ab4*/
      break; /*0x140411ab4*/
    HIBYTE(v33) = 1; /*0x140411aba*/
    v8 = a3 - v29; /*0x140411ac6*/
    if ( ((unsigned __int8)v33 | (a3 != v29)) != 1 ) /*0x140411ad1*/
      break; /*0x140411ad1*/
    v9 = v31[0] + v29; /*0x140411ad7*/
    v12 = v8 - 1; /*0x140411ade*/
    if ( v8 ) /*0x140411ae2*/
      goto LABEL_10; /*0x140411ae2*/
LABEL_17:
    v15 = (_BYTE *)sub_14033BC10(v9, v8); /*0x140411b13*/
    v16 = v14; /*0x140411b16*/
    switch ( v14 ) /*0x140411b2a*/
    {
      case 30LL: /*0x140411b2a*/
        v17 = 30; /*0x140411b2c*/
        v18 = v15; /*0x140411b32*/
        v19 = &xmmword_14175304F; /*0x140411b35*/
        goto LABEL_25; /*0x140411b3c*/
      case 36LL: /*0x140411b2a*/
        v17 = 36; /*0x140411b80*/
        v18 = v15; /*0x140411b86*/
        v19 = (__int128 *)"# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALL" /*0x140411b89*/
                          "Y)router-takeover-backup.json";
        goto LABEL_25; /*0x140411b89*/
      case 39LL: /*0x140411b2a*/
        v17 = 39; /*0x140411b3e*/
        v18 = v15; /*0x140411b44*/
        v19 = &xmmword_141753237; /*0x140411b47*/
LABEL_25:
        v24 = sub_1416847B0(v18, v19, v17); /*0x140411b90*/
        v23 = v24 != 0 && !v5; /*0x140411ba0*/
        v5 = v24 != 0; /*0x140411ba4*/
        if ( v23 ) /*0x140411ba7*/
          goto LABEL_30; /*0x140411ba7*/
        goto LABEL_2; /*0x140411ba7*/
      case 55LL: /*0x140411b2a*/
        v20 = 55; /*0x140411baf*/
        v21 = v15; /*0x140411bb5*/
        v22 = &xmmword_141752F5B; /*0x140411bb8*/
        goto LABEL_29; /*0x140411bbf*/
      case 60LL: /*0x140411b2a*/
        v20 = 60; /*0x140411bc1*/
        v21 = v15; /*0x140411bc7*/
        v22 = (__int128 *)"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)router-takeover-backup.json"; /*0x140411bca*/
        goto LABEL_29; /*0x140411bca*/
      case 64LL: /*0x140411b2a*/
        v20 = 64; /*0x140411b50*/
        v21 = v15; /*0x140411b56*/
        v22 = &xmmword_1417530C4; /*0x140411b59*/
LABEL_29:
        v23 = (unsigned int)sub_1416847B0(v21, v22, v20) != 0 && !v5; /*0x140411bd1*/
        v5 = 1; /*0x140411be2*/
        if ( v23 ) /*0x140411be5*/
          goto LABEL_30; /*0x140411be5*/
        goto LABEL_2; /*0x140411be5*/
      default:
        v23 = !v5; /*0x140411b62*/
        v5 = 1; /*0x140411b66*/
        if ( v23 ) /*0x140411b69*/
        {
          if ( v14 ) /*0x140411b72*/
          {
LABEL_30:
            if ( *v15 == 91 ) /*0x140411bef*/
            {
              if ( v15[v16 - 1] == 93 ) /*0x140411bf7*/
              {
                if ( v16 == 1 || (char)v15[1] <= -65 ) /*0x140411c0c*/
                  sub_1416C2F60((_DWORD)v15, v16, 1, v16 - 1, (__int64)&off_141782B88); /*0x140411cc9*/
                sub_140411D70(&v34, v15 + 1, v16 - 2); /*0x140411c22*/
                v25 = v37; /*0x140411c28*/
                if ( v37 == (_QWORD)v36 ) /*0x140411c30*/
                  sub_141689AB0(&v36); /*0x140411c36*/
                v26 = *((_QWORD *)&v36 + 1); /*0x140411c3c*/
                v27 = 3 * v25; /*0x140411c40*/
                *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v27 + 16) = v35; /*0x140411c48*/
                *(_OWORD *)(v26 + 8 * v27) = v34; /*0x140411c51*/
                v37 = v25 + 1; /*0x140411c58*/
                v5 = 0; /*0x140411c5c*/
                v4 = HIBYTE(v33); /*0x140411c5f*/
              }
              else
              {
                v5 = 0; /*0x140411c7c*/
                v4 = HIBYTE(v33); /*0x140411c7f*/
              }
            }
            else
            {
              v5 = 0; /*0x140411c70*/
              v4 = HIBYTE(v33); /*0x140411c73*/
            }
          }
          else
          {
            v5 = 0; /*0x140411b74*/
            v4 = HIBYTE(v33); /*0x140411b77*/
          }
        }
        else
        {
LABEL_2:
          v4 = HIBYTE(v33); /*0x140411a70*/
        }
        break; /*0x140411b7b*/
    }
  }
  result = v37; /*0x140411c88*/
  *(_QWORD *)(a1 + 16) = v37; /*0x140411c8c*/
  *(_OWORD *)a1 = v36; /*0x140411c94*/
  return result; /*0x140411c97*/
}