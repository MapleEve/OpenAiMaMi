// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140c1e360 | name sub_140C1E360
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C1E360(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int128 v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+80h] [rbp+0h]
  __int128 v24; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+30h]
  __int64 v26; // [rsp+B8h] [rbp+38h]
  __int64 v27; // [rsp+C0h] [rbp+40h]

  v27 = -2;
  if ( *(_QWORD *)a2 )
  {
    if ( (unsigned int)*(_QWORD *)a2 == 1 )
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
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 24);
      *(_OWORD *)(a1 + 72) = v7;
      *(_OWORD *)(a1 + 56) = v6;
      *(_OWORD *)(a1 + 40) = v5;
      *(_OWORD *)(a1 + 24) = v4;
      *(_OWORD *)(a1 + 8) = v3;
      *(_QWORD *)a1 = -1;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      v26 = a2;
      v13 = *(_QWORD *)(a2 + 24);
      sub_140D1EE10((unsigned int)&v19, v12, v13, (unsigned int)&unk_141A39BD6, 3);
      v25 = v20;
      v24 = v19;
      *(_QWORD *)&v19 = &v24;
      *((_QWORD *)&v19 + 1) = sub_1400015F0;
      sub_1416ABFD0(&v17, &unk_141A3C516, &v19);
      if ( (_QWORD)v24 )
        sub_140001660(*((_QWORD *)&v24 + 1), v24, 1);
      *(_QWORD *)(a1 + 24) = v18;
      *(_OWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = 10;
      if ( v13 )
      {
        v14 = (_QWORD *)(v12 + 8);
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
      if ( v11 )
        sub_140001660(v12, 24 * v11, 8);
      sub_140BAD350(v26 + 32);
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
  return a1;
}
