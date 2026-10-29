// win 1.2.7 | module src/core/mcp.rs | ea 0x140ec8c00 | name sub_140EC8C00
// win 1.2.7 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EC8C00(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // r14
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r11
  _QWORD *v24; // r10
  __int64 v25; // r14
  __int64 v26; // rcx
  unsigned __int128 v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rsi
  __int64 v36; // rdx
  _OWORD *v37; // rcx
  __int64 result; // rax
  __int64 v39; // [rsp+20h] [rbp-60h] BYREF
  __int64 v40; // [rsp+28h] [rbp-58h]
  _QWORD *v41; // [rsp+30h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-48h]
  unsigned __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+48h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+68h] [rbp-18h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  _QWORD *v50; // [rsp+78h] [rbp-8h]
  _QWORD *v51; // [rsp+80h] [rbp+0h]
  char v52; // [rsp+8Fh] [rbp+Fh]
  __int64 v53; // [rsp+90h] [rbp+10h]

  v53 = -2;
  v4 = a2[2];
  v51 = a2;
  v50 = a3;
  if ( v4 )
  {
    v5 = a2[1];
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_140E91160(*(_QWORD *)(v5 + v7 + 8), *(_QWORD *)(v5 + v7 + 16));
      if ( v9 == 55 && !(unsigned int)sub_1418F4B70(v8, aAimamiRelayMan_1) )
        break;
      ++v6;
      v7 += 24;
      if ( 24 * v4 == v7 )
      {
        v6 = v4;
        v10 = v51;
        goto LABEL_9;
      }
    }
    v10 = v51;
    a3 = v50;
    if ( !v6 )
      goto LABEL_25;
LABEL_9:
    v48 = a1;
    v49 = -(__int64)v6;
    v11 = 24 * v6;
    while ( 1 )
    {
      v12 = v10[1];
      v13 = v10[2];
      v14 = v6 - 1;
      if ( v6 - 1 >= v13 )
        break;
      v15 = *(_QWORD *)(v12 + v11 - 16);
      sub_140E91160(v15, *(_QWORD *)(v12 + v11 - 8));
      if ( v16 )
        break;
      v17 = *(_QWORD *)(v12 + v11 - 24);
      sub_1418F44E0((__m128i *)(v12 + v11 - 24), (const __m128i *)(v11 + v12), 24 * (v13 + v49));
      v18 = v13 - 1;
      v10 = v51;
      v51[2] = v18;
      if ( v17 )
      {
        if ( v17 == -1 )
        {
          v52 = 1;
          sub_141938DFB(v6 - 1, v18, &off_141A59AF0);
        }
        sub_140001660(v15, v17, 1);
        v10 = v51;
      }
      ++v49;
      v11 -= 24;
      --v6;
      if ( !v14 )
      {
        v4 = v10[2];
        a1 = v48;
        a3 = v50;
        goto LABEL_25;
      }
    }
    if ( v6 > v13 )
    {
      v52 = 1;
      sub_141938D74(v6, v13, &off_141A59AD8);
    }
    v19 = v51;
    if ( v13 == *v51 )
    {
      v52 = 1;
      sub_14190FDC0(v51);
      v12 = v51[1];
      v19 = v51;
    }
    if ( v6 < v13 )
    {
      sub_1418F44E0((__m128i *)(v12 + v11 + 24), (const __m128i *)(v12 + v11), 24 * (v13 + v49));
      v19 = v51;
    }
    *(_QWORD *)(v12 + v11) = 0;
    *(_QWORD *)(v12 + v11 + 8) = 1;
    *(_QWORD *)(v12 + v11 + 16) = 0;
    v4 = v13 + 1;
    v19[2] = v13 + 1;
    v20 = v6 + 1;
    if ( v6 > v13 )
      sub_1419392D0(0, v20, v13 + 1, &off_141A59A70);
    a1 = v48;
    a3 = v50;
  }
  else
  {
    v4 = 0;
LABEL_25:
    v20 = 0;
  }
  v21 = *a3;
  v22 = a3[1];
  v23 = a3[2];
  v24 = v51;
  v51[2] = v20;
  v39 = v24[1] + 24 * v20;
  v40 = v39;
  v41 = v24;
  v42 = v20;
  v43 = v4 - v20;
  v44 = v22;
  v45 = v22;
  v46 = v21;
  v47 = v22 + 24 * v23;
  sub_140E8D930(&v39);
  v25 = v39;
  v26 = v40;
  v27 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v40 - v39);
  v39 = 8;
  v40 = 8;
  v28 = v41;
  if ( v26 != v25 )
  {
    v29 = *((_QWORD *)&v27 + 1) >> 4;
    v30 = (_QWORD *)(v25 + 8);
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        sub_140001660(*v30, v31, 1);
      v30 += 3;
      --v29;
    }
    while ( v29 );
  }
  v32 = v43;
  if ( v43 )
  {
    v33 = v28[2];
    if ( v42 != v33 )
      sub_1418F44E0((__m128i *)(v28[1] + 24 * v33), (const __m128i *)(v28[1] + 24 * v42), 24 * v43);
    v28[2] = v32 + v33;
  }
  if ( v47 != v45 )
  {
    v34 = (v47 - v45) / 0x18uLL;
    v35 = (_QWORD *)(v45 + 8);
    do
    {
      v36 = *(v35 - 1);
      if ( v36 )
        sub_140001660(*v35, v36, 1);
      v35 += 3;
      --v34;
    }
    while ( v34 );
  }
  if ( v46 )
    sub_140001660(v44, 24 * v46, 8);
  v37 = v51;
  result = v51[2];
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *v37;
  return result;
}
