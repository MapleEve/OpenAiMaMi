// win 1.2.7 | module src/platform/process.rs | ea 0x140eefac0 | name sub_140EEFAC0
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EEFAC0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, _BYTE *a5)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // r15
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
  char *v23[4]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v24[24]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int128 v30; // [rsp+A0h] [rbp+20h]
  __int64 v31; // [rsp+B0h] [rbp+30h]
  __m256i v32; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v33; // [rsp+E0h] [rbp+60h]
  __int128 v34; // [rsp+F0h] [rbp+70h]
  __int128 v35; // [rsp+100h] [rbp+80h]
  __int128 v36; // [rsp+110h] [rbp+90h]
  __int64 v37; // [rsp+120h] [rbp+A0h]

  v37 = -2;
  if ( a3 )
  {
    if ( a4 )
    {
      sub_140EED040(&v32);
      v6 = v32.m256i_i64[0];
      *(_OWORD *)v24 = *(_OWORD *)&v32.m256i_u64[1];
      *(_QWORD *)&v24[16] = v32.m256i_i64[3];
      if ( v32.m256i_i64[0] == -1 )
      {
        v30 = *(_OWORD *)v24;
        v10 = *(_QWORD *)&v24[16];
        v31 = *(_QWORD *)&v24[16];
        v11 = *(_QWORD *)&v24[8];
        sub_1403EBCF0((unsigned __int64 *)v24, *(__int64 *)&v24[8], *(_QWORD *)&v24[8] + 32LL * *(_QWORD *)&v24[16]);
        sub_140EECB20(&v32, v24);
        if ( v32.m256i_i32[0] == -1 )
        {
          sub_140EE8460((__int64)&v32);
          v15 = v32.m256i_i64[0];
          v16 = v32.m256i_i64[2];
          if ( v32.m256i_i64[0] == -1 )
          {
            v23[0] = (char *)v32.m256i_i64[2];
            v23[1] = (char *)v32.m256i_i64[2];
            v23[2] = (char *)v32.m256i_i64[1];
            v23[3] = (char *)(v32.m256i_i64[2] + 32 * v32.m256i_i64[3]);
            sub_140391650((char **)&v24[8], v23);
            *(_OWORD *)v32.m256i_i8 = *(_OWORD *)&v24[8];
            v32.m256i_i64[2] = v25;
            sub_140EEC130(a1, *(_QWORD *)&v24[16], v25, a5);
            sub_140025D00(&v32);
          }
          else
          {
            v17 = v33;
            v18 = v34;
            v19 = v35;
            v29 = v36;
            v28 = v35;
            v27 = v34;
            v26 = v33;
            *(_OWORD *)&v24[8] = *(_OWORD *)&v32.m256i_u64[1];
            v25 = v32.m256i_i64[3];
            v32.m256i_i64[2] = v32.m256i_i64[3];
            v32.m256i_i64[0] = v32.m256i_i64[1];
            v32.m256i_i64[1] = v16;
            *(_OWORD *)(a1 + 80) = v36;
            *(_OWORD *)(a1 + 64) = v19;
            *(_OWORD *)(a1 + 48) = v18;
            *(_OWORD *)(a1 + 32) = v17;
            *(_QWORD *)(a1 + 24) = v32.m256i_i64[2];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v32.m256i_i8;
            *(_QWORD *)a1 = v15;
          }
        }
        else
        {
          *(_OWORD *)(a1 + 80) = v36;
          *(_OWORD *)(a1 + 64) = v35;
          v12 = *(_OWORD *)v32.m256i_i8;
          v13 = *(_OWORD *)&v32.m256i_u64[2];
          v14 = v33;
          *(_OWORD *)(a1 + 48) = v34;
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
        if ( (_QWORD)v30 )
          sub_140001660(v11, 32 * v30, 8);
      }
      else
      {
        v7 = v33;
        v8 = v34;
        v9 = v35;
        *(_OWORD *)(a1 + 80) = v36;
        *(_OWORD *)(a1 + 64) = v9;
        *(_OWORD *)(a1 + 48) = v8;
        *(_OWORD *)(a1 + 32) = v7;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v24[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v24;
        *(_QWORD *)a1 = v6;
      }
    }
    else if ( a5 )
    {
      sub_140EE9750(a1, a2, a3, a5);
    }
    else
    {
      sub_140EE4DC0(a1, a2, a3);
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
