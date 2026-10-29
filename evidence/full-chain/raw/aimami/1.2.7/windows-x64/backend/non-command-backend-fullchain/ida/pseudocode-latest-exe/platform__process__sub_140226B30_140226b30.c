// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x140226b30 | successor of pre-update 0x1403ebcf0 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_CALLER"}
unsigned __int64 *__fastcall sub_140226B30(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]

  v16 = -2;
  v4 = (unsigned __int64)(a3 - a2) >> 5;
  if ( (unsigned __int64)(a3 - a2) > 0xAAAAAAAAAAAAAAA0uLL )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v6 = a2;
  if ( a3 == a2 )
  {
    v13 = 0;
    v14 = 8;
    v4 = 0;
  }
  else
  {
    nullsub_1(0xAAAAAAAAAAAAAAA0uLL, a2);
    v5 = 8;
    v7 = sub_140001650(24 * v4, 8);
    if ( !v7 )
LABEL_3:
      sub_14196B2DB(v5, 24 * v4);
    v8 = v7;
    v13 = v4;
    v14 = v7;
    v9 = 0;
    do
    {
      v15 = v9;
      sub_14092FEA0(&v11, v6);
      *(_QWORD *)(v8 + 16) = v12;
      *(_OWORD *)v8 = v11;
      v9 = v15 + 1;
      v6 += 32;
      v8 += 24;
    }
    while ( v4 != v15 + 1 );
  }
  a1[2] = v4;
  *a1 = v13;
  a1[1] = v14;
  return a1;
}
