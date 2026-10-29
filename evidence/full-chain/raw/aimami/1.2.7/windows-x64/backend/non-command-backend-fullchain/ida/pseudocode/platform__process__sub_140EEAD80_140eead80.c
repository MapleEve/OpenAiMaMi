// win 1.2.7 | module src/platform/process.rs | ea 0x140eead80 | name sub_140EEAD80
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EEAD80(__int64 a1, const __m128i *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r14
  __m128i *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r14
  _WORD *v13; // rax
  __int64 v14; // rcx
  _WORD *v15; // r15
  _WORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 i; // r15
  unsigned int v19; // r14d
  _DWORD *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  const __m128i *v28; // r14
  __m128i *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // r8
  __int64 result; // rax
  __int64 v34; // rcx
  unsigned int *v35; // rcx
  __int64 v36; // rdx
  _DWORD *v37; // r9
  unsigned int v38; // r10d
  unsigned int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  char v46[10]; // [rsp+2Eh] [rbp-52h] BYREF
  __int64 v47; // [rsp+38h] [rbp-48h]
  __int64 v48; // [rsp+40h] [rbp-40h]
  unsigned __int64 v49; // [rsp+48h] [rbp-38h]
  __int64 v50; // [rsp+50h] [rbp-30h]
  __int128 v51; // [rsp+58h] [rbp-28h] BYREF
  __int64 v52; // [rsp+68h] [rbp-18h]
  char v53; // [rsp+77h] [rbp-9h] BYREF
  __int64 v54; // [rsp+78h] [rbp-8h]
  _QWORD *v55; // [rsp+80h] [rbp+0h]
  char v56; // [rsp+8Fh] [rbp+Fh]
  __int64 v57; // [rsp+90h] [rbp+10h]

  v57 = -2;
  v3 = a1;
  if ( !a3 )
  {
    v8 = 4;
    v9 = 0;
    v4 = 0;
    goto LABEL_6;
  }
  v4 = a3;
  v6 = 4 * a3;
  nullsub_1(a1);
  v7 = (__m128i *)sub_140001650(v6, 4);
  if ( !v7 )
    sub_141938D2B(4, v6);
  v8 = (__int64)v7;
  sub_1418F44E0(v7, a2, v6);
  v9 = 1;
  if ( v4 == 1 )
  {
    v4 = 1;
    goto LABEL_6;
  }
  if ( v4 >= 0x15 )
  {
    v50 = v8;
    v49 = v4;
    v56 = 0;
    sub_140EA2490((__m128i *)v8, v4, (__int64)&v53);
  }
  else
  {
    v35 = (unsigned int *)(v8 + 4);
    v36 = 4;
    do
    {
      v38 = *(v35 - 1);
      v39 = *v35;
      if ( *v35 < v38 )
      {
        v40 = v36;
        do
        {
          *(_DWORD *)(v8 + v40) = v38;
          if ( v40 == 4 )
          {
            v37 = (_DWORD *)v8;
            goto LABEL_30;
          }
          v38 = *(_DWORD *)(v8 + v40 - 8);
          v40 -= 4;
        }
        while ( v39 < v38 );
        v37 = (_DWORD *)(v8 + v40);
LABEL_30:
        *v37 = v39;
      }
      ++v35;
      v36 += 4;
    }
    while ( v35 != (unsigned int *)(v8 + 4 * v4) );
  }
  v41 = 0;
  while ( 1 )
  {
    a1 = *(unsigned int *)(v8 + 4 * v41 + 4);
    if ( (_DWORD)a1 == *(_DWORD *)(v8 + 4 * v41) )
      break;
    if ( v4 - 1 == ++v41 )
    {
      v9 = v4;
      goto LABEL_6;
    }
  }
  a1 = v41 + 2;
  v42 = v41 + 1;
  if ( v41 + 2 < v4 )
  {
    if ( (((_BYTE)v4 - (_BYTE)v41) & 1) != 0 )
    {
      v43 = *(_DWORD *)(v8 + 4 * v41 + 8);
      if ( v43 != *(_DWORD *)(v8 + 4 * v41) )
      {
        *(_DWORD *)(v8 + 4 * v41 + 4) = v43;
        v42 = v41 + 2;
      }
      a1 = v41 + 3;
    }
    if ( v4 - 3 != v41 )
    {
      do
      {
        v44 = *(_DWORD *)(v8 + 4 * a1);
        if ( v44 == *(_DWORD *)(v8 + 4 * v42 - 4) )
        {
          v45 = *(_DWORD *)(v8 + 4 * a1 + 4);
          if ( v45 != *(_DWORD *)(v8 + 4 * v42 - 4) )
            goto LABEL_59;
        }
        else
        {
          *(_DWORD *)(v8 + 4 * v42++) = v44;
          v45 = *(_DWORD *)(v8 + 4 * a1 + 4);
          if ( v45 != *(_DWORD *)(v8 + 4 * v42 - 4) )
LABEL_59:
            *(_DWORD *)(v8 + 4 * v42++) = v45;
        }
        a1 += 2;
      }
      while ( v4 != a1 );
    }
  }
  v9 = v4;
  v4 = v42;
LABEL_6:
  nullsub_1(a1);
  v10 = sub_140001650(48, 8);
  if ( !v10 )
  {
    v50 = v8;
    v49 = v9;
    v56 = 0;
    sub_141938D11(8, 48);
  }
  v12 = (_QWORD *)v10;
  nullsub_1(v11);
  v13 = (_WORD *)sub_140001650(2, 1);
  v48 = v8;
  v47 = v9;
  if ( !v13 )
  {
    v55 = v12;
    sub_141938D2B(1, 2);
  }
  v15 = v13;
  *v13 = 17967;
  nullsub_1(v14);
  v16 = (_WORD *)sub_140001650(2, 1);
  if ( !v16 )
  {
    v54 = (__int64)v15;
    v55 = v12;
    sub_141938D2B(1, 2);
  }
  *v16 = 21551;
  *v12 = 2;
  v12[1] = v15;
  v12[2] = 2;
  v12[3] = 2;
  v12[4] = v16;
  v12[5] = 2;
  *(_QWORD *)&v51 = 2;
  *((_QWORD *)&v51 + 1) = v12;
  v52 = 2;
  for ( i = v8 + 4 * v4; v8 != i; v52 = v30 + 1 )
  {
    v19 = *(_DWORD *)v8;
    nullsub_1(v17);
    v20 = (_DWORD *)sub_140001650(4, 1);
    if ( !v20 )
      sub_141938D2B(1, 4);
    v55 = v20;
    *v20 = 1145655343;
    v21 = v52;
    if ( v52 == (_QWORD)v51 )
      sub_14190FDC0(&v51);
    v22 = *((_QWORD *)&v51 + 1);
    v23 = 3 * v21;
    *(_QWORD *)(*((_QWORD *)&v51 + 1) + 8 * v23) = 4;
    *(_QWORD *)(v22 + 8 * v23 + 8) = v55;
    *(_QWORD *)(v22 + 8 * v23 + 16) = 4;
    v52 = v21 + 1;
    v24 = sub_1416B24D0(v19, v46, 10);
    v27 = v25;
    if ( v25 < 0 )
    {
      v34 = 0;
      goto LABEL_25;
    }
    v55 = (_QWORD *)v25;
    if ( v25 )
    {
      v28 = (const __m128i *)v24;
      nullsub_1(v26);
      v29 = (__m128i *)sub_140001650(v27, 1);
      if ( !v29 )
      {
        v54 = v27;
        v34 = 1;
LABEL_25:
        sub_141938D2B(v34, v54);
      }
      v54 = (__int64)v29;
      sub_1418F44E0(v29, v28, v27);
      v30 = v52;
      if ( v52 == (_QWORD)v51 )
LABEL_19:
        sub_14190FDC0(&v51);
    }
    else
    {
      v54 = 1;
      v30 = v52;
      if ( v52 == (_QWORD)v51 )
        goto LABEL_19;
    }
    v8 += 4;
    v31 = *((_QWORD *)&v51 + 1);
    v17 = 3 * v30;
    v32 = v55;
    *(_QWORD *)(*((_QWORD *)&v51 + 1) + 8 * v17) = v55;
    *(_QWORD *)(v31 + 8 * v17 + 8) = v54;
    *(_QWORD *)(v31 + 8 * v17 + 16) = v32;
  }
  if ( v47 )
    sub_140001660(v48, 4 * v47, 4);
  result = v52;
  *(_QWORD *)(v3 + 16) = v52;
  *(_OWORD *)v3 = v51;
  return result;
}
