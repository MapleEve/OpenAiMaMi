// module: codexmate_lib/platform/process
// addr: 0x1404017d0
// name: sub_1404017D0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404017D0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v10; // r14
  __int64 v11; // rdi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // r8
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  char *v22[4]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  __int128 v27; // [rsp+80h] [rbp+0h]
  __int128 v28; // [rsp+90h] [rbp+10h]
  __int128 v29; // [rsp+A0h] [rbp+20h]
  __int64 v30; // [rsp+B0h] [rbp+30h]
  __m256i v31; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v32; // [rsp+E0h] [rbp+60h]
  __int128 v33; // [rsp+F0h] [rbp+70h]
  __int128 v34; // [rsp+100h] [rbp+80h]
  __int128 v35; // [rsp+110h] [rbp+90h]
  __int64 v36; // [rsp+128h] [rbp+A8h]

  v36 = -2;
  if ( a3 )
  {
    if ( a4 )
    {
      sub_1403FD520(&v31);
      v5 = v31.m256i_i64[0];
      *(_OWORD *)v23 = *(_OWORD *)&v31.m256i_u64[1];
      *(_QWORD *)&v23[16] = v31.m256i_i64[3];
      if ( v31.m256i_i64[0] == -1 )
      {
        v29 = *(_OWORD *)v23;
        v10 = *(_QWORD *)&v23[16];
        v30 = *(_QWORD *)&v23[16];
        v11 = *(_QWORD *)&v23[8];
        sub_1403289D0((unsigned __int64 *)v23, *(__int64 *)&v23[8], *(_QWORD *)&v23[8] + 32LL * *(_QWORD *)&v23[16]);
        sub_1403FCD20(&v31, v23);
        if ( v31.m256i_i32[0] == -1 )
        {
          sub_1403FA730(&v31);
          v15 = v31.m256i_i64[0];
          v16 = v31.m256i_i64[2];
          if ( v31.m256i_i64[0] == -1 )
          {
            v22[0] = (char *)v31.m256i_i64[2];
            v22[1] = (char *)v31.m256i_i64[2];
            v22[2] = (char *)v31.m256i_i64[1];
            v22[3] = (char *)(v31.m256i_i64[2] + 32 * v31.m256i_i64[3]);
            sub_1402CBDD0((char **)&v23[8], v22);
            *(_OWORD *)v31.m256i_i8 = *(_OWORD *)&v23[8];
            v31.m256i_i64[2] = v24;
            sub_1403F7AA0(a1, *(__int64 *)&v23[16], v24);
            sub_14000A3B0(&v31);
          }
          else
          {
            v17 = v32;
            v18 = v33;
            v19 = v34;
            v28 = v35;
            v27 = v34;
            v26 = v33;
            v25 = v32;
            *(_OWORD *)&v23[8] = *(_OWORD *)&v31.m256i_u64[1];
            v24 = v31.m256i_u64[3];
            v31.m256i_i64[2] = v31.m256i_i64[3];
            v31.m256i_i64[0] = v31.m256i_i64[1];
            v31.m256i_i64[1] = v16;
            *(_OWORD *)(a1 + 80) = v35;
            *(_OWORD *)(a1 + 64) = v19;
            *(_OWORD *)(a1 + 48) = v18;
            *(_OWORD *)(a1 + 32) = v17;
            *(_QWORD *)(a1 + 24) = v31.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v31.m256i_i8;
            *(_QWORD *)a1 = v15;
          }
        }
        else
        {
          *(_OWORD *)(a1 + 80) = v35;
          *(_OWORD *)(a1 + 64) = v34;
          v12 = *(_OWORD *)v31.m256i_i8;
          v13 = *(_OWORD *)&v31.m256i_u64[2];
          v14 = v32;
          *(_OWORD *)(a1 + 48) = v33;
          *(_OWORD *)(a1 + 32) = v14;
          *(_OWORD *)(a1 + 16) = v13;
          *(_OWORD *)a1 = v12;
        }
        if ( v10 )
        {
          v20 = (_QWORD *)(v11 + 8);
          do
          {
            v21 = *(v20 - 1);
            if ( v21 )
              sub_140001660(*v20, v21, 1);
            v20 += 4;
            --v10;
          }
          while ( v10 );
        }
        if ( (_QWORD)v29 )
          sub_140001660(v11, 32 * v29, 8);
      }
      else
      {
        v6 = v32;
        v7 = v33;
        v8 = v34;
        *(_OWORD *)(a1 + 80) = v35;
        *(_OWORD *)(a1 + 64) = v8;
        *(_OWORD *)(a1 + 48) = v7;
        *(_OWORD *)(a1 + 32) = v6;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v23[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v23;
        *(_QWORD *)a1 = v5;
      }
    }
    else
    {
      sub_1403F7AA0(a1, a2, a3);
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return a1;
}