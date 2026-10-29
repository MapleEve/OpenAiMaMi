// win 1.2.7 latest-exe | module src/core/analytics/parser/paths.rs | ea 0x1408f3b10 | successor of pre-update 0x140f948e0 | session <审计会话>
// match evidence: {"body_sim": 0.755, "str_ov": 0, "anchor": 0.341, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1408F3B10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  _QWORD v23[8]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]
  __int64 v27; // [rsp+88h] [rbp+8h]
  __int64 v28; // [rsp+90h] [rbp+10h]

  v28 = -2;
  sub_140869900(&v24);
  if ( v24 == -1 )
  {
    v23[0] = aUnresolvedPath;
    v23[1] = 15;
    v23[2] = a5;
    v23[3] = a6;
    v23[4] = a7;
    v23[5] = a8;
    v23[6] = a2;
    v23[7] = a3;
    sub_14082F330(a1, v23, 4);
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    v12 = v26;
    v13 = v26 - 1;
    if ( !v26 )
      sub_14196B673(v13, 0, &off_141A55A20);
    v14 = v25;
    v15 = *(_QWORD *)(v25 + 24 * v13 + 16);
    if ( v15 < 0 )
    {
      v16 = 0;
      goto LABEL_5;
    }
    v17 = v24;
    if ( v15 )
    {
      v27 = *(_QWORD *)(v25 + 24 * v13 + 8);
      nullsub_1(v13, v11);
      v16 = 1;
      v18 = sub_140001650(v15, 1);
      if ( !v18 )
LABEL_5:
        sub_14196B2DB(v16, v15);
      v19 = v18;
      sub_1419234B0(v18, v27, v15);
    }
    else
    {
      v19 = 1;
    }
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = v15;
    *(_BYTE *)(a1 + 24) = 1;
    v20 = (_QWORD *)(v14 + 8);
    do
    {
      v21 = *(v20 - 1);
      if ( v21 )
        sub_140001660(*v20, v21, 1);
      v20 += 3;
      --v12;
    }
    while ( v12 );
    if ( v17 )
      sub_140001660(v14, 24 * v17, 8);
  }
  return a1;
}
