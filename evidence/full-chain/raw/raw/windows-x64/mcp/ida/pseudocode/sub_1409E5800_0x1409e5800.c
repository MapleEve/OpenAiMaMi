// module: codexmate_lib/core/mcp
// addr: 0x1409e5800
// name: sub_1409E5800
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_1409E5800(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  bool v8; // zf
  __int128 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  char v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rsi
  char v27; // al
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _OWORD *result; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  char v35[24]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int128 v38; // [rsp+60h] [rbp-20h] BYREF
  __int128 v39; // [rsp+70h] [rbp-10h]
  __int128 v40; // [rsp+80h] [rbp+0h]
  __int128 v41; // [rsp+90h] [rbp+10h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+20h]
  __int64 v43; // [rsp+A8h] [rbp+28h]
  __m128i v44; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v45; // [rsp+C0h] [rbp+40h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  __int64 v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  char v50; // [rsp+E8h] [rbp+68h]
  __int16 v51; // [rsp+F0h] [rbp+70h]
  __int64 v52; // [rsp+F8h] [rbp+78h]
  __int64 v53; // [rsp+100h] [rbp+80h]
  __int64 v54; // [rsp+108h] [rbp+88h]
  __int64 v55; // [rsp+110h] [rbp+90h]
  __int64 v56; // [rsp+118h] [rbp+98h]
  __m128i v57; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v58; // [rsp+130h] [rbp+B0h]
  __int64 v59; // [rsp+138h] [rbp+B8h]
  __int64 v60; // [rsp+140h] [rbp+C0h]

  v60 = -2;
  v44.m128i_i64[0] = 0;
  v44.m128i_i64[1] = a3;
  v45 = a2;
  v46 = a3;
  v47 = 0;
  v48 = a3;
  v49 = 0xA0000000ALL;
  v50 = 1;
  v51 = 0;
  sub_140312FC0(&v41, &v44);
  v6 = sub_141470CD0(v5, v4);
  v7 = v6;
  v8 = *(_BYTE *)(v6 + 16) == 1;
  v43 = a1;
  if ( v8 )
  {
    v9 = *(_OWORD *)v6;
  }
  else
  {
    *(_QWORD *)&v9 = sub_141486EF0();
    *(_OWORD *)v7 = v9;
    *(_BYTE *)(v7 + 16) = 1;
  }
  *(_QWORD *)v7 = v9 + 1;
  v39 = xmmword_1417A47A0;
  v38 = *(_OWORD *)&off_1417A4790;
  v40 = v9;
  v57.m128i_i64[0] = -1;
  v10 = *((_QWORD *)&v41 + 1);
  v11 = v42;
  v52 = *((_QWORD *)&v41 + 1) + 24 * v42;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v53 = v10;
    if ( v10 == v52 )
      break;
    v14 = v12;
    v15 = sub_1409E5DC0(*(_QWORD *)(v10 + 8));
    v17 = sub_14033BC10(v15, v16);
    if ( v18 < 0 )
    {
      v31 = 0;
      goto LABEL_37;
    }
    v10 = v53 + 24;
    ++v12;
    v59 = 1;
    if ( v18 )
    {
      v19 = v18;
      v20 = v17;
      nullsub_1(1);
      v21 = sub_140001650(v19, 1);
      if ( !v21 )
      {
        v59 = v19;
        v31 = 1;
LABEL_37:
        sub_1416C2D4B(v31, v59);
      }
      v59 = v21;
      sub_141684120(v21, v20, v19);
      if ( *(_BYTE *)v59 == 91 && *(_BYTE *)(v59 + v19 - 1) == 93 )
      {
        v23 = v19;
        v24 = v19 - 1;
        v54 = v23;
        if ( !v24 || *(char *)(v59 + 1) < -64 )
          sub_1416C2F60(v59, v23, 1, v24, (__int64)&off_1417A7620);
        sub_1409E74F0(&v44, v59 + 1, v23 - 2, v22);
        v25 = v57.m128i_i64[0];
        if ( v57.m128i_i64[0] == -1 )
        {
          v27 = 1;
          v26 = v44.m128i_i64[0];
        }
        else
        {
          v26 = v44.m128i_i64[0];
          if ( (v13 & 1) != 0 )
          {
            if ( v44.m128i_i64[0] != -1
              && v45 == v58
              && !(unsigned int)sub_1416847B0(v44.m128i_i64[1], v57.m128i_i64[1], v45) )
            {
              v13 = 1;
              v30 = v44.m128i_i64[1];
              v28 = v54;
              if ( v26 )
LABEL_27:
                sub_140001660(v30, v26, 1);
LABEL_28:
              v29 = v59;
              v14 = v55;
              goto LABEL_29;
            }
            v56 = v26;
            sub_14149C500(&v36, &v57);
            sub_140472C30((__int64)v35, (__int64)&v38, &v36, v55, v14);
            if ( v25 )
              sub_140001660(v57.m128i_i64[1], v25, 1);
            v57.m128i_i64[0] = -1;
            v27 = 1;
            v13 = 0;
            v26 = v56;
          }
          else
          {
            v27 = 0;
            v13 = 0;
          }
        }
        v28 = v54;
        if ( v26 == -1 )
          goto LABEL_32;
        if ( !v27 )
        {
          v30 = v44.m128i_i64[1];
          if ( v26 )
            goto LABEL_27;
          goto LABEL_28;
        }
        v58 = v45;
        v57 = v44;
        v13 = 1;
        v29 = v59;
LABEL_29:
        v55 = v14;
        if ( v46 != -1 && v46 )
        {
          sub_140001660(v47, v46, 1);
LABEL_32:
          v29 = v59;
        }
        sub_140001660(v29, v28, 1);
      }
      else
      {
        sub_140001660(v59, v19, 1);
      }
    }
  }
  if ( ((unsigned __int8)v13 & (v57.m128i_i64[0] != -1)) != 0 )
  {
    v37 = v58;
    v36 = v57;
    sub_140472C30((__int64)&v44, (__int64)&v38, &v36, v55, v11);
  }
  else if ( (unsigned __int64)(v57.m128i_i64[0] - 1) < 0xFFFFFFFFFFFFFFFEuLL )
  {
    sub_140001660(v57.m128i_i64[1], v57.m128i_i64[0], 1);
  }
  result = (_OWORD *)v43;
  *(_QWORD *)(v43 + 16) = v42;
  *result = v41;
  v33 = v39;
  v34 = v40;
  *(_OWORD *)((char *)result + 24) = v38;
  *(_OWORD *)((char *)result + 40) = v33;
  *(_OWORD *)((char *)result + 56) = v34;
  return result;
}