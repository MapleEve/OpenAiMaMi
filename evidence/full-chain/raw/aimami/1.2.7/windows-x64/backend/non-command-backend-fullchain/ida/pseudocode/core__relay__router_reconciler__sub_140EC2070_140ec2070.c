// win 1.2.7 | module src/core/relay/router_reconciler.rs | ea 0x140ec2070 | name sub_140EC2070
// win 1.2.7 | module src/core/relay/router_reconciler.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EC2070(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v7; // r14
  __int64 v8; // rdi
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rbx
  __int64 v13; // r15
  _QWORD *v14; // r12
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // edx
  __int128 v20; // kr10_16
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  _BYTE v24[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+48h] [rbp-38h]
  unsigned __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  __m256i v30; // [rsp+80h] [rbp+0h] BYREF
  __int128 v31; // [rsp+A0h] [rbp+20h]
  __int128 v32; // [rsp+B0h] [rbp+30h]
  __int128 v33; // [rsp+C0h] [rbp+40h]
  __int128 v34; // [rsp+D0h] [rbp+50h]
  __int128 v35; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v36; // [rsp+F0h] [rbp+70h]
  int v37; // [rsp+100h] [rbp+80h] BYREF
  char v38; // [rsp+107h] [rbp+87h] BYREF
  __int64 v39; // [rsp+108h] [rbp+88h]

  v39 = -2;
  v25 = sub_14167FC00();
  v26 = v2;
  sub_140EE9280(&v30);
  v3 = v30.m256i_i64[0];
  v35 = *(_OWORD *)&v30.m256i_u64[1];
  v36 = v30.m256i_i64[3];
  if ( v30.m256i_i64[0] == -1 )
  {
    v28 = v35;
    v7 = v36;
    v29 = v36;
    v8 = *((_QWORD *)&v35 + 1);
    sub_1403EC400(&v35, *((_QWORD *)&v35 + 1), *((_QWORD *)&v35 + 1) + 32 * v36);
    v37 = v7;
    v38 = 0;
    sub_140EEF140(&v30, &v38);
    if ( v30.m256i_i32[0] == -1 )
    {
      v18 = sub_14167FD50(&v25);
      v27 = 0x3E8 * (unsigned __int128)(unsigned __int64)v18 + v19 / 0xF4240uLL;
      v30.m256i_i64[0] = (__int64)&v37;
      v30.m256i_i64[1] = (__int64)sub_1416BBD00;
      v30.m256i_i64[2] = (__int64)&v27;
      v30.m256i_i64[3] = (__int64)sub_1416B95D0;
      sub_1416ABFD0(v24, &unk_141A59750, &v30);
      sub_14019B500((unsigned int)aCodexProcessLi, 23, (unsigned int)aForceCloseComp, 20, (__int64)v24);
      *(_OWORD *)((char *)v30.m256i_i64 + 4) = v35;
      *(__int64 *)((char *)&v30.m256i_i64[2] + 4) = v36;
      *(_DWORD *)(a1 + 8) = v37;
      v20 = *(_OWORD *)((char *)&v30.m256i_u64[1] + 4);
      *(_OWORD *)(a1 + 12) = *(_OWORD *)v30.m256i_i8;
      *(_OWORD *)(a1 + 24) = v20;
      *(_QWORD *)a1 = -1;
      if ( v7 )
      {
        v21 = (_QWORD *)(v8 + 16);
        do
        {
          v22 = *(v21 - 1);
          if ( v22 )
            sub_140001660(*v21, v22, 1);
          v21 += 4;
          --v7;
        }
        while ( v7 );
      }
    }
    else
    {
      *(_OWORD *)(a1 + 80) = v34;
      *(_OWORD *)(a1 + 64) = v33;
      v9 = *(_OWORD *)v30.m256i_i8;
      v10 = *(_OWORD *)&v30.m256i_u64[2];
      v11 = v31;
      *(_OWORD *)(a1 + 48) = v32;
      *(_OWORD *)(a1 + 32) = v11;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
      v12 = *((_QWORD *)&v35 + 1);
      v13 = v36;
      if ( v36 )
      {
        v14 = (_QWORD *)(*((_QWORD *)&v35 + 1) + 8LL);
        do
        {
          v15 = *(v14 - 1);
          if ( v15 )
            sub_140001660(*v14, v15, 1);
          v14 += 3;
          --v13;
        }
        while ( v13 );
      }
      if ( (_QWORD)v35 )
        sub_140001660(v12, 24 * v35, 8);
      if ( v7 )
      {
        v16 = (_QWORD *)(v8 + 16);
        do
        {
          v17 = *(v16 - 1);
          if ( v17 )
            sub_140001660(*v16, v17, 1);
          v16 += 4;
          --v7;
        }
        while ( v7 );
      }
    }
    if ( (_QWORD)v28 )
      sub_140001660(v8, 32 * v28, 8);
  }
  else
  {
    v4 = v31;
    v5 = v32;
    v6 = v33;
    *(_OWORD *)(a1 + 80) = v34;
    *(_OWORD *)(a1 + 64) = v6;
    *(_OWORD *)(a1 + 48) = v5;
    *(_OWORD *)(a1 + 32) = v4;
    *(_QWORD *)(a1 + 24) = v36;
    *(_OWORD *)(a1 + 8) = v35;
    *(_QWORD *)a1 = v3;
  }
  return a1;
}
