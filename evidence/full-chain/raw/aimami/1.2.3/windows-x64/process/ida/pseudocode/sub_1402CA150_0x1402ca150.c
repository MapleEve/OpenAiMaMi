// module: codexmate_lib/platform/process
// addr: 0x1402ca150
// name: sub_1402CA150
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 *__fastcall sub_1402CA150(unsigned __int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  char *v6; // r14
  char *v7; // rbx
  __int64 v8; // rdi
  char *v9; // rax
  int v10; // ecx
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rdx
  unsigned __int64 *result; // rax
  __int64 v19; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  unsigned __int64 *v23; // [rsp+48h] [rbp-38h]
  unsigned __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h] BYREF
  __int128 *v29; // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v30)(_QWORD, _QWORD); // [rsp+98h] [rbp+18h]
  __int128 *v31; // [rsp+A8h] [rbp+28h]
  int v32; // [rsp+B4h] [rbp+34h] BYREF
  _QWORD *v33; // [rsp+B8h] [rbp+38h]
  __int64 v34; // [rsp+C0h] [rbp+40h]

  v34 = -2;
  v2 = a2;
  v23 = a1;
  v3 = *a2;
  v31 = (__int128 *)a2[2];
  v4 = 32LL * (_QWORD)v31;
  v5 = (0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(32LL * (_QWORD)v31)) >> 64;
  v6 = (char *)a2[1];
  v7 = (char *)a2[3];
  v33 = a2;
  if ( v6 == v7 )
  {
    v8 = v3;
  }
  else
  {
    v25 = 32LL * (_QWORD)v31;
    v24 = (0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(32LL * (_QWORD)v31)) >> 64;
    v8 = v3;
    do
    {
      v9 = v6;
      v10 = *(_DWORD *)v6;
      v6 += 32;
      v2[1] = v6;
      v21 = v3;
      v22 = v8;
      v32 = v10;
      v26 = *(_OWORD *)(v9 + 8);
      v27 = *((_QWORD *)v9 + 3);
      v11 = -1;
      if ( !(unsigned __int8)sub_140403090(*((_QWORD *)&v26 + 1)) )
      {
        *(_QWORD *)&v28 = &v32;
        *((_QWORD *)&v28 + 1) = sub_1414AB780;
        v29 = &v26;
        v30 = sub_1400015F0;
        sub_14149C0F0(&v19, &unk_14174623A, &v28);
        v11 = v19;
        v28 = v20;
      }
      if ( (_QWORD)v26 )
        sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
      if ( v11 != -1 )
      {
        *(_QWORD *)v8 = v11;
        *(_OWORD *)(v8 + 8) = v28;
        v8 += 24;
      }
      v2 = v33;
    }
    while ( v6 != v7 );
    v6 = (char *)v33[1];
    v7 = (char *)v33[3];
    v5 = v24;
    v4 = v25;
  }
  v12 = v5 >> 4;
  v13 = 0xAAAAAAAAAAAAAAABuLL * ((unsigned __int64)(v8 - v3) >> 3);
  *(_QWORD *)&v28 = v3;
  *((_QWORD *)&v28 + 1) = v13;
  v29 = v31;
  v2[2] = 0;
  *v2 = 8;
  v2[1] = 8;
  v2[3] = 8;
  v14 = v7 - v6;
  if ( v14 )
  {
    v15 = v14 >> 5;
    v16 = v6 + 16;
    do
    {
      v17 = *(v16 - 1);
      if ( v17 )
        sub_140001660(*v16, v17, 1);
      v16 += 4;
      --v15;
    }
    while ( v15 );
  }
  if ( v4 != 24 * v12 && v31 != nullptr )
  {
    if ( v4 )
    {
      v3 = sub_140001670(v3, v4, 8, 24 * v12);
      if ( !v3 )
        sub_1416C2D31(8, 24 * v12);
    }
    else
    {
      v3 = 8;
    }
  }
  result = v23;
  *v23 = v12;
  result[1] = v3;
  result[2] = v13;
  return result;
}