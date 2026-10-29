// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140876c50 | successor of pre-update 0x1402c8ea0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.463, "str_ov": 0.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140876C50(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int128 v10; // xmm0
  int v11; // ebx
  int v12; // r14d
  int v13; // eax
  char v14; // cl
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  _BYTE v20[40]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  _QWORD v22[6]; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+A0h] [rbp+20h]
  __int64 v24; // [rsp+B0h] [rbp+30h]
  __int128 v25; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+50h]
  __int64 v27; // [rsp+D8h] [rbp+58h]

  v27 = -2;
  if ( !a4 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 8;
    *(_OWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 8;
    *(_QWORD *)(a1 + 72) = 0;
LABEL_11:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  sub_1401EE760(v20);
  v6 = *(_QWORD *)v20;
  v25 = *(_OWORD *)&v20[8];
  v7 = *(_QWORD *)&v20[32];
  v26 = *(_QWORD *)&v20[24];
  v8 = v21;
  v9 = v22[0];
  if ( *(_QWORD *)v20 == -1 )
  {
    v24 = v26;
    v23 = v25;
    *(_QWORD *)v20 = v21;
    *(_QWORD *)&v20[8] = v21;
    *(_QWORD *)&v20[16] = *(_QWORD *)&v20[32];
    *(_QWORD *)&v20[24] = v21 + 48LL * v22[0];
    sub_1401B5030(&v25, v20);
    v11 = v24;
    if ( v24 )
    {
      v12 = DWORD2(v23);
      v13 = sub_140D6E640(aChatgpt, 7);
      v14 = 1;
      if ( v13 != 1 )
        v14 = (unsigned int)sub_140D6E640(aCodex_2, 5) == 1;
      sub_140A77E50((unsigned int)&v18, a2, v12, v11, v14);
    }
    else
    {
      *(_QWORD *)&v18 = 0;
      *((_QWORD *)&v18 + 1) = 8;
      v19 = 0;
    }
    *(_QWORD *)&v20[16] = v24;
    v15 = v23;
    *(_OWORD *)v20 = v23;
    v21 = v26;
    *(_OWORD *)&v20[24] = v25;
    v22[2] = v19;
    v16 = v18;
    *(_OWORD *)v22 = v18;
    *(_QWORD *)(a1 + 72) = v19;
    *(_OWORD *)(a1 + 56) = v16;
    *(_OWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v20[32];
    *(_QWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v20[16];
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 88) = v22[5];
  v10 = *(_OWORD *)&v22[1];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v22[3];
  *(_OWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 24) = v26;
  *(_OWORD *)(a1 + 8) = v25;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 48) = v9;
  return a1;
}
