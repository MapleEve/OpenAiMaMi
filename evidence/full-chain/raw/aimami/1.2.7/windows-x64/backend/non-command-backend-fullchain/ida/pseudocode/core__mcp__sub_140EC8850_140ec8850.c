// win 1.2.7 | module src/core/mcp.rs | ea 0x140ec8850 | name sub_140EC8850
// win 1.2.7 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
const __m128i *__fastcall sub_140EC8850(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  const __m128i *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  const __m128i *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  __m128i *v17; // rcx
  const __m128i *v18; // rdx
  signed __int64 v19; // rdi
  __int64 v20; // r15
  const __m128i *v21; // r15
  __int64 v22; // rax
  const __m128i *v23; // r14
  __m128i *v24; // rax
  __int64 v25; // rbx
  int v26; // [rsp+30h] [rbp-50h] BYREF
  __int128 v27; // [rsp+38h] [rbp-48h] BYREF
  __int128 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  __int64 v31; // [rsp+70h] [rbp-10h]
  __int64 v32; // [rsp+78h] [rbp-8h]
  __int64 v33; // [rsp+80h] [rbp+0h]
  _OWORD v34[2]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+40h]
  __int64 v37; // [rsp+C8h] [rbp+48h]
  __int64 v38; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+58h]
  __int64 v40; // [rsp+E0h] [rbp+60h]
  __int64 v41; // [rsp+E8h] [rbp+68h]

  v41 = -2;
  v38 = a2;
  v39 = a3;
  *(_QWORD *)&v34[0] = &v38;
  *((_QWORD *)&v34[0] + 1) = sub_140186EE0;
  sub_1416ABFD0(&v35, &unk_141A59AAE, v34);
  v40 = v36;
  sub_141150CD0(&v26, v36, v37);
  if ( v26 != 2 )
  {
    if ( (_QWORD)v28 )
      sub_140001660(*((_QWORD *)&v28 + 1), v28, 1);
    if ( v32 != -1 && v32 )
      sub_140001660(v33, v32, 1);
    v5 = v30;
    v6 = v31;
    if ( v31 )
    {
      v7 = (_QWORD *)(v30 + 8);
      do
      {
        v8 = *(v7 - 1);
        if ( v8 )
          sub_140001660(*v7, v8, 1);
        v7 += 3;
        --v6;
      }
      while ( v6 );
    }
    if ( v29 )
      sub_140001660(v5, 24 * v29, 8);
LABEL_17:
    if ( v35 )
      sub_140001660(v40, v35, 1);
    result = (const __m128i *)sub_140E91160(v38, v39);
    v12 = v10;
    if ( (unsigned __int64)v10 <= 1 )
    {
      if ( !v10 )
        goto LABEL_40;
    }
    else
    {
      v11 = result->m128i_u8[0];
      if ( (_DWORD)v11 == 39 )
      {
        if ( result->m128i_i8[v10 - 1] == 39 )
          goto LABEL_23;
      }
      else if ( (_DWORD)v11 == 34 && result->m128i_i8[v10 - 1] == 34 )
      {
LABEL_23:
        if ( result->m128i_i8[1] <= -65 )
          sub_141938F40((_DWORD)result, v10, 1, v10 - 1, (__int64)&off_141A59AC0);
        v12 = v10 - 2;
        if ( v10 - 2 < 0 )
          sub_141938D2B(0, v12);
        if ( v10 != 2 )
        {
          v21 = result;
          nullsub_1(v11);
          v22 = sub_140001650(v12, 1);
          if ( !v22 )
            sub_141938D2B(1, v12);
          v16 = v22;
          v18 = (const __m128i *)&v21->m128i_i8[1];
          v17 = (__m128i *)v22;
          goto LABEL_29;
        }
LABEL_40:
        v16 = 1;
        goto LABEL_41;
      }
      if ( v10 < 0 )
      {
        v14 = 0;
        goto LABEL_33;
      }
    }
    v13 = result;
    nullsub_1(v11);
    v14 = 1;
    v15 = sub_140001650(v12, 1);
    if ( v15 )
    {
      v16 = v15;
      v17 = (__m128i *)v15;
      v18 = v13;
LABEL_29:
      result = (const __m128i *)sub_1418F44E0(v17, v18, v12);
LABEL_41:
      *a1 = v12;
      a1[1] = v16;
      a1[2] = v12;
      return result;
    }
LABEL_33:
    sub_141938D2B(v14, v12);
  }
  v34[1] = v28;
  v34[0] = v27;
  v4 = sub_141150BD0(aValue, 5, v34);
  if ( !v4 || *(_BYTE *)v4 )
  {
    sub_140194020(&v27);
    goto LABEL_17;
  }
  v19 = *(_QWORD *)(v4 + 24);
  if ( v19 < 0 )
  {
    v20 = 0;
    goto LABEL_36;
  }
  if ( v19 )
  {
    v23 = *(const __m128i **)(v4 + 16);
    nullsub_1(&v27);
    v20 = 1;
    v24 = (__m128i *)sub_140001650(v19, 1);
    if ( !v24 )
LABEL_36:
      sub_141938D2B(v20, v19);
    v25 = (__int64)v24;
    sub_1418F44E0(v24, v23, v19);
  }
  else
  {
    v25 = 1;
  }
  *a1 = v19;
  a1[1] = v25;
  a1[2] = v19;
  result = (const __m128i *)sub_140194020(&v27);
  if ( v35 )
    return (const __m128i *)sub_140001660(v40, v35, 1);
  return result;
}
