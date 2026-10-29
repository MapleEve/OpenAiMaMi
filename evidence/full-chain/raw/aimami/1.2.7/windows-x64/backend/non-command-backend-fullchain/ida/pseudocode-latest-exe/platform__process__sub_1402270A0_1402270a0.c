// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x1402270a0 | successor of pre-update 0x1403ec260 | session <审计会话>
// match evidence: {"body_sim": 0.897, "str_ov": 0, "anchor": 0.271, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
unsigned __int64 *__fastcall sub_1402270A0(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h]
  _QWORD v12[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 *v15; // [rsp+68h] [rbp-18h]
  unsigned __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h]

  v19 = -2;
  v3 = a2;
  v4 = (unsigned __int64)(a3 - a2) >> 5;
  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0uLL )
  {
    v5 = 0;
    goto LABEL_3;
  }
  if ( a3 == a2 )
  {
    v16 = 0;
    v17 = 8;
    v4 = 0;
  }
  else
  {
    v15 = a1;
    nullsub_1(a1, 0xAAAAAAAAAAAAAAA0uLL);
    v5 = 8;
    v6 = sub_140001650(24 * v4, 8);
    if ( !v6 )
LABEL_3:
      sub_14196B2DB(v5, 24 * v4);
    v7 = v6;
    v16 = v4;
    v17 = v6;
    v8 = 0;
    do
    {
      v18 = v8;
      v14 = v3;
      v13 = v3 + 8;
      v12[0] = &v14;
      v12[1] = sub_140763650;
      v12[2] = &v13;
      v12[3] = sub_14021E5E0;
      sub_1416DAFA0(&v10, &unk_141A51AE7, v12);
      *(_QWORD *)(v7 + 16) = v11;
      *(_OWORD *)v7 = v10;
      v8 = v18 + 1;
      v3 += 32;
      v7 += 24;
    }
    while ( v4 != v18 + 1 );
    a1 = v15;
  }
  a1[2] = v4;
  *a1 = v16;
  a1[1] = v17;
  return a1;
}
