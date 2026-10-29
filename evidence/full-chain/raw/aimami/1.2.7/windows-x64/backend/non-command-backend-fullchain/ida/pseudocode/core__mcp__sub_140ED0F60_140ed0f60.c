// win 1.2.7 | module src/core/mcp.rs | ea 0x140ed0f60 | name sub_140ED0F60
// win 1.2.7 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140ED0F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  bool v11; // zf
  __int128 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r12
  char v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  const __m128i *v23; // r13
  __m128i *v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rsi
  char v30; // al
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 result; // rax
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  char v39[24]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v40; // [rsp+40h] [rbp-40h] BYREF
  __int64 v41; // [rsp+50h] [rbp-30h]
  __int128 v42; // [rsp+60h] [rbp-20h] BYREF
  __int128 v43; // [rsp+70h] [rbp-10h]
  __int128 v44; // [rsp+80h] [rbp+0h]
  __int128 v45; // [rsp+90h] [rbp+10h] BYREF
  __int64 v46; // [rsp+A0h] [rbp+20h]
  __int64 v47; // [rsp+A8h] [rbp+28h]
  __m128i v48; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v49; // [rsp+C0h] [rbp+40h]
  __int64 v50; // [rsp+C8h] [rbp+48h]
  __int64 v51; // [rsp+D0h] [rbp+50h]
  __int64 v52; // [rsp+D8h] [rbp+58h]
  __int64 v53; // [rsp+E0h] [rbp+60h]
  char v54; // [rsp+E8h] [rbp+68h]
  __int16 v55; // [rsp+F0h] [rbp+70h]
  __int64 v56; // [rsp+F8h] [rbp+78h]
  __int64 v57; // [rsp+100h] [rbp+80h]
  unsigned __int64 v58; // [rsp+108h] [rbp+88h]
  __int64 v59; // [rsp+110h] [rbp+90h]
  __int64 v60; // [rsp+118h] [rbp+98h]
  __m128i v61; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v62; // [rsp+130h] [rbp+B0h]
  __int64 v63; // [rsp+138h] [rbp+B8h]
  __int64 v64; // [rsp+140h] [rbp+C0h]

  v64 = -2;
  v48.m128i_i64[0] = 0;
  v48.m128i_i64[1] = a3;
  v49 = a2;
  v50 = a3;
  v51 = 0;
  v52 = a3;
  v53 = 0xA0000000ALL;
  v54 = 1;
  v55 = 0;
  sub_1403D3D70(&v45, &v48);
  v5 = sub_14167F170(v4);
  v10 = v5;
  v11 = *(_BYTE *)(v5 + 16) == 1;
  v47 = a1;
  if ( v11 )
  {
    v12 = *(_OWORD *)v5;
  }
  else
  {
    *(_QWORD *)&v12 = sub_141696260(v7, v6, v8, v9);
    *(_OWORD *)v10 = v12;
    *(_BYTE *)(v10 + 16) = 1;
  }
  *(_QWORD *)v10 = v12 + 1;
  v43 = *(&off_141A56DB0 + 1);
  v42 = off_141A56DB0;
  v44 = v12;
  v61.m128i_i64[0] = -1;
  v13 = *((_QWORD *)&v45 + 1);
  v14 = v46;
  v57 = *((_QWORD *)&v45 + 1) + 24 * v46;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v56 = v13;
    if ( v13 == v57 )
      break;
    v17 = v15;
    v18 = sub_140ED1520(*(_QWORD *)(v13 + 8));
    v13 = v56 + 24;
    ++v15;
    v20 = sub_140E91160(v18, v19);
    if ( v21 < 0 )
    {
      v34 = 0;
      goto LABEL_37;
    }
    v63 = 1;
    if ( v21 )
    {
      v22 = v21;
      v23 = (const __m128i *)v20;
      nullsub_1(1);
      v24 = (__m128i *)sub_140001650(v22, 1);
      if ( !v24 )
      {
        v63 = v22;
        v34 = 1;
LABEL_37:
        sub_141938D2B(v34, v63);
      }
      v63 = (__int64)v24;
      sub_1418F44E0(v24, v23, v22);
      if ( *(_BYTE *)v63 == 91 && *(_BYTE *)(v63 + v22 - 1) == 93 )
      {
        v26 = v22;
        v27 = v22 - 1;
        v58 = v26;
        if ( !v27 || *(char *)(v63 + 1) <= -65 )
          sub_141938F40(v63, v26, 1, v27, (__int64)&off_141A59C50);
        sub_140ED3250(&v48, v63 + 1, v26 - 2, v25);
        v28 = v61.m128i_i64[0];
        if ( v61.m128i_i64[0] == -1 )
        {
          v30 = 1;
          v29 = v48.m128i_i64[0];
        }
        else
        {
          v29 = v48.m128i_i64[0];
          if ( (v16 & 1) != 0 )
          {
            if ( v48.m128i_i64[0] != -1
              && v49 == v62
              && !(unsigned int)sub_1418F4B70(v48.m128i_i64[1], v61.m128i_i64[1]) )
            {
              v16 = 1;
              v33 = v48.m128i_i64[1];
              v31 = v58;
              if ( v29 )
LABEL_27:
                sub_140001660(v33, v29, 1);
LABEL_28:
              v32 = v63;
              v17 = v59;
              goto LABEL_29;
            }
            v60 = v29;
            sub_1416AC440(&v40, &v61);
            sub_1403A8FE0((__int64)v39, (__int64)&v42, &v40, v59, v17);
            if ( v28 )
              sub_140001660(v61.m128i_i64[1], v28, 1);
            v61.m128i_i64[0] = -1;
            v30 = 1;
            v16 = 0;
            v29 = v60;
          }
          else
          {
            v30 = 0;
            v16 = 0;
          }
        }
        v31 = v58;
        if ( v29 == -1 )
          goto LABEL_32;
        if ( !v30 )
        {
          v33 = v48.m128i_i64[1];
          if ( v29 )
            goto LABEL_27;
          goto LABEL_28;
        }
        v62 = v49;
        v61 = v48;
        v16 = 1;
        v32 = v63;
LABEL_29:
        v59 = v17;
        if ( v50 != -1 && v50 )
        {
          sub_140001660(v51, v50, 1);
LABEL_32:
          v32 = v63;
        }
        sub_140001660(v32, v31, 1);
      }
      else
      {
        sub_140001660(v63, v22, 1);
      }
    }
  }
  if ( ((unsigned __int8)v16 & (v61.m128i_i64[0] != -1)) != 0 )
  {
    v41 = v62;
    v40 = v61;
    sub_1403A8FE0((__int64)&v48, (__int64)&v42, &v40, v59, v14);
  }
  else if ( (unsigned __int64)(v61.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
  {
    sub_140001660(v61.m128i_i64[1], v61.m128i_i64[0], 1);
  }
  result = v46;
  v36 = (_OWORD *)v47;
  *(_QWORD *)(v47 + 16) = v46;
  *v36 = v45;
  v37 = v43;
  v38 = v44;
  *(_OWORD *)((char *)v36 + 24) = v42;
  *(_OWORD *)((char *)v36 + 40) = v37;
  *(_OWORD *)((char *)v36 + 56) = v38;
  return result;
}
