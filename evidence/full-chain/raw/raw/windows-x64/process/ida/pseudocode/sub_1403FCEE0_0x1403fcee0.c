// module: codexmate_lib/platform/process
// addr: 0x1403fcee0
// name: sub_1403FCEE0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FCEE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  unsigned int *v15; // rcx
  __int64 v16; // rax
  unsigned int *v17; // r11
  __int64 v18; // rdx
  unsigned int *v19; // r9
  unsigned int v20; // r10d
  unsigned int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  int v29; // edx
  __int64 v30; // [rsp+20h] [rbp-60h] BYREF
  __int128 v31; // [rsp+28h] [rbp-58h]
  unsigned __int64 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+40h] [rbp-40h]
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int128 v36; // [rsp+70h] [rbp-10h]
  __int128 v37; // [rsp+80h] [rbp+0h]
  unsigned __int64 v38; // [rsp+90h] [rbp+10h]
  __int64 v39; // [rsp+98h] [rbp+18h]
  __int128 v40; // [rsp+A0h] [rbp+20h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp+30h]
  char v42; // [rsp+BFh] [rbp+3Fh] BYREF
  __int64 v43; // [rsp+C0h] [rbp+40h]

  v43 = -2;
  sub_1403FA730(&v30);
  result = v30;
  v40 = v31;
  v41 = v32;
  if ( v30 != -1 )
  {
    v7 = v33;
    v8 = v34;
    v9 = v35;
    *(_OWORD *)(a1 + 80) = v36;
    *(_OWORD *)(a1 + 64) = v9;
    *(_OWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 24) = v41;
    *(_OWORD *)(a1 + 8) = v40;
    *(_QWORD *)a1 = result;
    return result;
  }
  v37 = v40;
  v38 = v41;
  v30 = *((_QWORD *)&v40 + 1);
  *(_QWORD *)&v31 = *((_QWORD *)&v40 + 1) + 32 * v41;
  *((_QWORD *)&v31 + 1) = a2;
  v32 = a3;
  sub_14031F0B0(&v40, &v30);
  v10 = v41;
  if ( v41 >= 2 )
  {
    v15 = *((unsigned int **)&v40 + 1);
    if ( v41 >= 0x15 )
    {
      v39 = *((_QWORD *)&v40 + 1);
      sub_140B5B300(*((_QWORD *)&v40 + 1), v41, &v42);
      v23 = v39;
    }
    else
    {
      v16 = *((_QWORD *)&v40 + 1) + 4 * v41;
      v17 = (unsigned int *)(*((_QWORD *)&v40 + 1) + 4LL);
      v18 = 4;
      do
      {
        v20 = *(v17 - 1);
        v21 = *v17;
        if ( *v17 < v20 )
        {
          v22 = v18;
          do
          {
            *(unsigned int *)((char *)v15 + v22) = v20;
            if ( v22 == 4 )
            {
              v19 = v15;
              goto LABEL_15;
            }
            v20 = *(unsigned int *)((char *)v15 + v22 - 8);
            v22 -= 4;
          }
          while ( v21 < v20 );
          v19 = (unsigned int *)((char *)v15 + v22);
LABEL_15:
          *v19 = v21;
        }
        ++v17;
        v18 += 4;
      }
      while ( v17 != (unsigned int *)v16 );
      v10 = v41;
      if ( v41 < 2 )
        goto LABEL_4;
      v23 = *((_QWORD *)&v40 + 1);
    }
    v24 = 0;
    while ( *(_DWORD *)(v23 + 4 * v24 + 4) != *(_DWORD *)(v23 + 4 * v24) )
    {
      if ( v10 - 1 == ++v24 )
        goto LABEL_4;
    }
    v25 = v24 + 2;
    v26 = v24 + 1;
    if ( v24 + 2 >= v10 )
      goto LABEL_34;
    if ( (((_BYTE)v10 - (_BYTE)v24) & 1) != 0 )
    {
      v27 = *(_DWORD *)(v23 + 4 * v24 + 8);
      if ( v27 != *(_DWORD *)(v23 + 4 * v24) )
      {
        *(_DWORD *)(v23 + 4 * v24 + 4) = v27;
        v26 = v24 + 2;
      }
      v25 = v24 + 3;
    }
    if ( v10 - 3 == v24 )
    {
LABEL_34:
      v41 = v26;
      goto LABEL_4;
    }
    while ( 1 )
    {
      v28 = *(_DWORD *)(v23 + 4 * v25);
      if ( v28 == *(_DWORD *)(v23 + 4 * v26 - 4) )
      {
        v29 = *(_DWORD *)(v23 + 4 * v25 + 4);
        if ( v29 != *(_DWORD *)(v23 + 4 * v26 - 4) )
          goto LABEL_41;
      }
      else
      {
        *(_DWORD *)(v23 + 4 * v26++) = v28;
        v29 = *(_DWORD *)(v23 + 4 * v25 + 4);
        if ( v29 != *(_DWORD *)(v23 + 4 * v26 - 4) )
LABEL_41:
          *(_DWORD *)(v23 + 4 * v26++) = v29;
      }
      v25 += 2;
      if ( v10 == v25 )
        goto LABEL_34;
    }
  }
LABEL_4:
  result = v41;
  *(_QWORD *)(a1 + 24) = v41;
  *(_OWORD *)(a1 + 8) = v40;
  *(_QWORD *)a1 = -1;
  v11 = *((_QWORD *)&v37 + 1);
  v12 = v38;
  if ( v38 )
  {
    v13 = (_QWORD *)(*((_QWORD *)&v37 + 1) + 16LL);
    do
    {
      v14 = *(v13 - 1);
      if ( v14 )
        result = sub_140001660(*v13, v14, 1);
      v13 += 4;
      --v12;
    }
    while ( v12 );
  }
  if ( (_QWORD)v37 )
    return sub_140001660(v11, 32 * v37, 8);
  return result;
}