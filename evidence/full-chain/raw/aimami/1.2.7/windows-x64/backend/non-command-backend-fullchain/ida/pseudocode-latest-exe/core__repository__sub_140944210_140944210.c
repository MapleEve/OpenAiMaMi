// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140944210 | successor of pre-update 0x1402069a0 | session <审计会话>
// match evidence: {"body_sim": 0.907, "str_ov": 0, "anchor": 0.567, "conf": false, "verdict": "CONFIRMED_FINAL"}
__int64 __fastcall sub_140944210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm0
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h]
  __int128 v24; // [rsp+80h] [rbp+0h]
  __int128 v25; // [rsp+90h] [rbp+10h] BYREF
  __int128 v26; // [rsp+A0h] [rbp+20h]
  __int64 v27; // [rsp+B8h] [rbp+38h]
  __int64 v28; // [rsp+C0h] [rbp+40h]

  v28 = -2;
  if ( a3 && (v8 = *(_QWORD *)(a3 + 16)) != 0 )
  {
    v9 = *(_QWORD *)(a3 + 8);
    v10 = 424 * v8;
    v11 = 0;
    while ( *(_QWORD *)(v9 + v11 + 208) != a5 || (unsigned int)sub_141923B40(*(_QWORD *)(v9 + v11 + 200), a4, a5) )
    {
      v11 += 424;
      if ( v10 == v11 )
        goto LABEL_8;
    }
    sub_1416DA980(&v19, *(_QWORD *)(v9 + v11 + 224), *(_QWORD *)(v9 + v11 + 232));
    v26 = v20;
    v25 = v19;
    v12 = *(_QWORD *)(a2 + 328);
    v13 = *(_QWORD *)(a2 + 336);
  }
  else
  {
LABEL_8:
    v12 = *(_QWORD *)(a2 + 328);
    v13 = *(_QWORD *)(a2 + 336);
    sub_14071B420((unsigned int)&v25, v12, v13, a4, a5);
  }
  v27 = *((_QWORD *)&v25 + 1);
  sub_14071E1C0(&v19, *((__int64 *)&v25 + 1), v26, v12, v13);
  if ( (_DWORD)v19 == -1 )
  {
    v17 = v25;
    *(_OWORD *)(a1 + 24) = v26;
    *(_OWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v24;
    *(_OWORD *)(a1 + 64) = v23;
    v14 = v19;
    v15 = v20;
    v16 = v21;
    *(_OWORD *)(a1 + 48) = v22;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    if ( (_QWORD)v25 )
      sub_140001660(v27, v25, 1);
  }
  return a1;
}
