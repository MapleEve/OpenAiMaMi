// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140c751d0 | name sub_140C751D0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C751D0(__int64 a1, __int64 a2)
{
  __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // kr00_16
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v14; // [rsp+20h] [rbp-A8h] BYREF
  __m256i v15; // [rsp+30h] [rbp-98h]
  __int128 v16; // [rsp+50h] [rbp-78h]
  __int128 v17; // [rsp+60h] [rbp-68h]
  __int128 v18; // [rsp+70h] [rbp-58h]
  __int128 v19; // [rsp+80h] [rbp-48h]
  __int128 v20; // [rsp+90h] [rbp-38h]

  sub_1410257E0(&v14);
  v4 = v14;
  v5 = v15.m256i_i64[0];
  if ( (_QWORD)v14 == -1 )
  {
    if ( *((_QWORD *)&v14 + 1) != -1 )
    {
      v9 = *(_OWORD *)&v15.m256i_u64[2];
      if ( *((_QWORD *)&v14 + 1) )
        sub_140001660(v15.m256i_i64[0], *((_QWORD *)&v14 + 1), 1);
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(*((_QWORD *)&v9 + 1), v9, 1);
    }
    sub_14023D790(&v14, a2);
    if ( (_DWORD)v14 == -1 )
    {
      sub_140EFE1A0(a1);
    }
    else
    {
      *(_OWORD *)(a1 + 80) = v18;
      *(_OWORD *)(a1 + 64) = v17;
      v10 = v14;
      v11 = *(_OWORD *)v15.m256i_i8;
      v12 = *(_OWORD *)&v15.m256i_u64[2];
      *(_OWORD *)(a1 + 48) = v16;
      *(_OWORD *)(a1 + 32) = v12;
      *(_OWORD *)(a1 + 16) = v11;
      *(_OWORD *)a1 = v10;
    }
  }
  else
  {
    v6 = v15.m256i_i64[3];
    v19 = v16;
    v20 = v17;
    *(_OWORD *)(a1 + 80) = v18;
    v7 = *(_OWORD *)&v15.m256i_u64[1];
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v4 + 1);
    *(_QWORD *)(a1 + 16) = v5;
    *(_OWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 40) = v6;
    v8 = v20;
    *(_OWORD *)(a1 + 48) = v19;
    *(_OWORD *)(a1 + 64) = v8;
    *(_QWORD *)a1 = v4;
  }
  return a1;
}
