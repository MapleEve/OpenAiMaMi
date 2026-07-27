// module: codexmate_lib/platform/process
// addr: 0x1403fb4e0
// name: sub_1403FB4E0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FB4E0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int128 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 i; // rdi
  __int64 v29; // [rsp+28h] [rbp-58h]
  __int64 v30; // [rsp+30h] [rbp-50h]
  __m256i v31; // [rsp+40h] [rbp-40h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h]
  __m256i v33; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v34[4]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+58h]
  __int128 v36; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+70h]
  __int64 v38; // [rsp+100h] [rbp+80h]
  __int64 v39; // [rsp+108h] [rbp+88h]
  __int64 v40; // [rsp+110h] [rbp+90h]
  char v41; // [rsp+11Fh] [rbp+9Fh]
  __int64 v42; // [rsp+120h] [rbp+A0h]

  v42 = -2;
  sub_1403FA730(&v33);
  result = v33.m256i_i64[0];
  *(_OWORD *)v31.m256i_i8 = *(_OWORD *)&v33.m256i_u64[1];
  v31.m256i_i64[2] = v33.m256i_i64[3];
  if ( v33.m256i_i64[0] == -1 )
  {
    v36 = *(_OWORD *)v31.m256i_i8;
    v7 = v31.m256i_i64[2];
    v37 = v31.m256i_i64[2];
    v38 = v31.m256i_i64[1];
    v8 = sub_141470CD0(v33.m256i_i64[3], v2);
    v10 = v8;
    if ( *(_BYTE *)(v8 + 16) == 1 )
    {
      v11 = *(_OWORD *)v8;
    }
    else
    {
      *(_QWORD *)&v11 = sub_141486EF0();
      *(_OWORD *)v10 = v11;
      *(_BYTE *)(v10 + 16) = 1;
    }
    *(_QWORD *)v10 = v11 + 1;
    v33 = off_14174C6F0;
    v34[0] = v11;
    if ( v7 )
    {
      LOBYTE(v9) = 1;
      sub_141696060(&v33, v7, v34, v9);
      for ( i = 0; i != v7; ++i )
        sub_140476780(&v33, *(unsigned int *)(v38 + 32 * i));
    }
    v32 = v34[0];
    v31 = v33;
    sub_1403FE220(&v33);
    v35 = v7;
    v13 = v33.m256i_i64[1];
    v12 = v33.m256i_i64[0];
    v14 = v33.m256i_i64[1] + 32 * v33.m256i_i64[2];
    v33.m256i_i64[0] = v33.m256i_i64[1];
    v29 = v12;
    v33.m256i_i64[2] = v12;
    v33.m256i_i64[3] = v14;
    v15 = v14 - 32;
    v30 = v33.m256i_i64[1];
LABEL_7:
    v16 = v15 - v13;
    v17 = (_QWORD *)(v13 + 48);
    while ( v13 != v14 )
    {
      v18 = v13;
      v13 += 32;
      v33.m256i_i64[1] = v13;
      if ( *(_QWORD *)(v18 + 8) == -1 )
      {
        if ( v14 != v13 )
        {
          v25 = v16 >> 5;
          do
          {
            v26 = *(v17 - 1);
            if ( v26 )
              sub_140001660(*v17, v26, 1);
            v17 += 4;
            --v25;
          }
          while ( v25 );
        }
        break;
      }
      v40 = *(_QWORD *)(v18 + 8);
      v19 = *(_DWORD *)v18;
      v20 = *(_QWORD *)(v18 + 16);
      v21 = *(_QWORD *)(v18 + 24);
      v41 = 1;
      v39 = v20;
      if ( (unsigned __int8)sub_140403090(v20) )
      {
        v41 = 1;
        if ( !(unsigned __int8)sub_140476780(&v31, v19) )
        {
          v22 = v35;
          if ( v35 == (_QWORD)v36 )
          {
            sub_1416890A0(&v36);
            v38 = *((_QWORD *)&v36 + 1);
          }
          v23 = 32 * v22;
          v24 = v38;
          *(_DWORD *)(v38 + v23) = v19;
          *(_QWORD *)(v24 + v23 + 8) = v40;
          *(_QWORD *)(v24 + v23 + 16) = v39;
          *(_QWORD *)(v24 + v23 + 24) = v21;
          v35 = v22 + 1;
          v37 = v22 + 1;
          v15 = v14 - 32;
          goto LABEL_7;
        }
      }
      if ( v40 )
        sub_140001660(v39, v40, 1);
      v16 -= 32LL;
      v17 += 4;
    }
    if ( v29 )
      sub_140001660(v30, 32 * v29, 8);
    if ( v31.m256i_i64[1] )
    {
      v27 = (4 * v31.m256i_i64[1] + 19) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v27 + v31.m256i_i64[1] != -17 )
        sub_140001660(v31.m256i_i64[0] - v27, v27 + v31.m256i_i64[1] + 17, 16);
    }
    result = v37;
    *(_QWORD *)(a1 + 24) = v37;
    *(_OWORD *)(a1 + 8) = v36;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    v4 = v34[0];
    v5 = v34[1];
    v6 = v34[2];
    *(_OWORD *)(a1 + 80) = v34[3];
    *(_OWORD *)(a1 + 64) = v6;
    *(_OWORD *)(a1 + 48) = v5;
    *(_OWORD *)(a1 + 32) = v4;
    *(_QWORD *)(a1 + 24) = v31.m256i_i64[2];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v31.m256i_i8;
    *(_QWORD *)a1 = result;
  }
  return result;
}