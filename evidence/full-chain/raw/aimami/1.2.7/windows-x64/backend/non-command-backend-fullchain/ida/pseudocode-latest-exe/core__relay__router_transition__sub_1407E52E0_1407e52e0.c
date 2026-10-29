// win 1.2.7 latest-exe | module src/core/relay/router_transition.rs | ea 0x1407e52e0 | successor of pre-update 0x14023d790 | session <审计会话>
// match evidence: {"body_sim": 0.973, "str_ov": 0, "anchor": 0.697, "conf": true, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_1407E52E0(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-88h] BYREF
  __int128 v16; // [rsp+30h] [rbp-78h]
  __int128 v17; // [rsp+40h] [rbp-68h]
  __int128 v18; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+60h] [rbp-48h]
  __int128 v20; // [rsp+70h] [rbp-38h]

  sub_140A924F0(&v15);
  if ( (_DWORD)v15 == -1
    && (sub_1407F9AF0((__int64)&v15, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784)), (_DWORD)v15 == -1) )
  {
    v8 = *((_QWORD *)&v15 + 1);
    v10 = *((_QWORD *)&v16 + 1);
    v9 = v16;
    if ( *((_QWORD *)&v16 + 1) )
    {
      v11 = (_QWORD *)(v16 + 56);
      do
      {
        v12 = *(v11 - 7);
        if ( v12 )
          sub_140001660(*(v11 - 6), v12, 1);
        v13 = *(v11 - 1);
        if ( v13 > 0 )
          sub_140001660(*v11, v13, 1);
        v14 = *(v11 - 4);
        if ( v14 )
          sub_140001660(*(v11 - 3), v14, 1);
        v11 += 9;
        --v10;
      }
      while ( v10 );
    }
    if ( v8 )
      sub_140001660(v9, 72 * v8, 8);
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v20;
    *(_OWORD *)(a1 + 64) = v19;
    v4 = v15;
    v5 = v16;
    v6 = v17;
    *(_OWORD *)(a1 + 48) = v18;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
  }
  return a1;
}
