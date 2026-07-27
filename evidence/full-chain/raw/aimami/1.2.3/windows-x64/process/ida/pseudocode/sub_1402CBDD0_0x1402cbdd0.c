// module: codexmate_lib/platform/process
// addr: 0x1402cbdd0
// name: sub_1402CBDD0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char **__fastcall sub_1402CBDD0(char **a1, char **a2)
{
  char *v3; // rax
  __int128 *v4; // r12
  __int128 *v5; // r13
  __int128 v6; // xmm6
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r14
  char *v10; // rax
  char *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  char *v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  char *v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  char **v26; // [rsp+68h] [rbp-18h]
  char **v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  char *v29; // [rsp+80h] [rbp+0h]
  __int64 v30; // [rsp+88h] [rbp+8h]

  v30 = -2;
  v22 = a2[2];
  v3 = *a2;
  v4 = (__int128 *)a2[1];
  v27 = a2;
  v5 = (__int128 *)a2[3];
  v24 = v3;
LABEL_2:
  v29 = v3;
  while ( v4 != v5 )
  {
    v26 = *((char ***)v4 + 1);
    v6 = *v4;
    v28 = *((_QWORD *)v4 + 2);
    v7 = *((_QWORD *)v4 + 3);
    v4 += 2;
    v27[1] = (char *)v4;
    sub_140401AA0((__int64)&v19, (__int64)a2);
    v8 = v20;
    v25 = v19;
    v23 = v20;
    if ( v19 == -1 )
      v8 = 0;
    v9 = sub_1404021E0(v28, v7, v8, v21);
    a2 = (char **)v25;
    if ( v25 > 0 )
      sub_140001660(v23, v25, 1);
    if ( v9 )
    {
      v10 = v29;
      *(_OWORD *)v29 = v6;
      *((_QWORD *)v10 + 2) = v28;
      *((_QWORD *)v10 + 3) = v7;
      v3 = v10 + 32;
      goto LABEL_2;
    }
    a2 = v26;
    if ( v26 )
      sub_140001660(v28, v26, 1);
  }
  v11 = v27[1];
  v12 = v27[3] - v11;
  if ( v12 )
  {
    v13 = v12 >> 5;
    v14 = v11 + 16;
    do
    {
      v15 = *(v14 - 1);
      if ( v15 )
        sub_140001660(*v14, v15, 1);
      v14 += 4;
      --v13;
    }
    while ( v13 );
  }
  v16 = v24;
  v17 = (unsigned __int64)(v29 - v24) >> 5;
  *a1 = v22;
  a1[1] = v16;
  a1[2] = (char *)v17;
  return a1;
}