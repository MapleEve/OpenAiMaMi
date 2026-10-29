// win 1.2.7 latest-exe | module src/core/relay/anthropic_history.rs | ea 0x140216eb0 | successor of pre-update 0x1403d25f0 | session <审计会话>
// match evidence: {"body_sim": 0.489, "str_ov": 0, "verdict": "CONFIRMED_GLOBALDIFF"}
__int64 __fastcall sub_140216EB0(__int64 a1, __int128 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rbx
  __int64 i; // r12
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rsi
  _OWORD v20[5]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+80h] [rbp+0h] BYREF
  __int128 v22; // [rsp+88h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+18h]
  __int64 v24; // [rsp+A0h] [rbp+20h]

  v24 = -2;
  v4 = sub_140854610(a2, a2 + 5);
  if ( v4 )
  {
    v7 = v4;
    v8 = v5;
    v21 = a1;
    nullsub_1(v6, v5);
    v9 = (__int64 *)sub_140001650(64, 8);
    if ( !v9 )
      sub_14196B2DB(8, 64);
    v10 = v9;
    *v9 = v7;
    v9[1] = v8;
    *(_QWORD *)&v22 = 4;
    *((_QWORD *)&v22 + 1) = v9;
    v23 = 1;
    v20[4] = a2[4];
    v11 = *a2;
    v12 = a2[1];
    v13 = a2[2];
    v20[3] = a2[3];
    v20[2] = v13;
    v20[1] = v12;
    v20[0] = v11;
    v14 = 1;
    for ( i = 3; ; i += 2 )
    {
      v17 = sub_140854610(v20, &v21);
      if ( !v17 )
        break;
      v18 = v16;
      if ( v14 == (_QWORD)v22 )
      {
        sub_141939070((unsigned int)&v22, v14, 1, 8, 16);
        v10 = *((__int64 **)&v22 + 1);
      }
      v10[i - 1] = v17;
      v10[i] = v18;
      v23 = ++v14;
    }
    a1 = v21;
    *(_QWORD *)(v21 + 16) = v23;
    *(_OWORD *)a1 = v22;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 8;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
