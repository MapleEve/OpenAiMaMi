// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eb8e30 | successor of pre-update 0x140c1e360 | session <审计会话>
// match evidence: {"body_sim": 0.955, "str_ov": 0, "anchor": 0.501, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140EB8E30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int128 v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+90h] [rbp+10h]
  __int128 v25; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+30h]
  __int64 v27; // [rsp+C0h] [rbp+40h]
  __int64 v28; // [rsp+C8h] [rbp+48h]

  v28 = -2;
  result = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_OWORD *)(a2 + 32);
      v4 = *(_OWORD *)(a2 + 48);
      v5 = *(_OWORD *)(a2 + 64);
      v22 = *(_OWORD *)(a2 + 80);
      v6 = v22;
      v21 = v5;
      v20 = v4;
      v19 = v3;
      v23 = *(_OWORD *)(a2 + 8);
      v7 = v23;
      result = *(_QWORD *)(a2 + 24);
      v24 = result;
      *(_QWORD *)(a1 + 88) = result;
      *(_OWORD *)(a1 + 72) = v7;
      *(_OWORD *)(a1 + 56) = v6;
      *(_OWORD *)(a1 + 40) = v5;
      *(_OWORD *)(a1 + 24) = v4;
      *(_OWORD *)(a1 + 8) = v3;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
      v27 = a2;
      v14 = *(_QWORD *)(a2 + 24);
      sub_1406C5480((unsigned int)&v19, v13, v14, (unsigned int)&unk_141A9B28E, 3);
      v26 = v20;
      v25 = v19;
      *(_QWORD *)&v19 = &v25;
      *((_QWORD *)&v19 + 1) = sub_1400015F0;
      sub_1416DAFA0(&v17, &unk_141AA101C, &v19);
      if ( (_QWORD)v25 )
        sub_140001660(*((_QWORD *)&v25 + 1), v25, 1);
      *(_QWORD *)(a1 + 24) = v18;
      *(_OWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = 10;
      if ( v14 )
      {
        v15 = (_QWORD *)(v13 + 8);
        do
        {
          v16 = *(v15 - 1);
          if ( v16 )
            sub_140001660(*v15, v16, 1);
          v15 += 3;
          --v14;
        }
        while ( v14 );
      }
      if ( v12 )
        sub_140001660(v13, 24 * v12, 8);
      return sub_140D8A7D0(v27 + 32);
    }
  }
  else
  {
    v8 = *(_OWORD *)(a2 + 8);
    v9 = *(_OWORD *)(a2 + 24);
    v10 = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(a1 + 40) = v10;
    *(_OWORD *)(a1 + 24) = v9;
    *(_OWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 8;
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)a1 = -1;
  }
  return result;
}
