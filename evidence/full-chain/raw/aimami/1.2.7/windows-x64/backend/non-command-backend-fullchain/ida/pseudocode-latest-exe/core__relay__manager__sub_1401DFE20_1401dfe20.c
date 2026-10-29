// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x1401dfe20 | successor of pre-update 0x1401bda50 | session <审计会话>
// match evidence: {"body_sim": 0.556, "str_ov": 0, "anchor": 0.0, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1401DFE20(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  char v10; // bl
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r15
  _QWORD v15[32]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v16; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v17; // [rsp+138h] [rbp+B8h]
  __int64 v18; // [rsp+228h] [rbp+1A8h] BYREF
  __int64 v19; // [rsp+230h] [rbp+1B0h]
  __int64 v20; // [rsp+238h] [rbp+1B8h]
  __int128 v21; // [rsp+240h] [rbp+1C0h]
  __int64 v22; // [rsp+250h] [rbp+1D0h]
  __int128 v23; // [rsp+258h] [rbp+1D8h] BYREF
  __int64 v24; // [rsp+268h] [rbp+1E8h]
  __int64 v25; // [rsp+270h] [rbp+1F0h]

  v25 = -2;
  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 || (v5 = *(_QWORD *)(a2 + 8), sub_140222B30(v15, v5), v15[0] == -1) )
  {
    *(_QWORD *)&v21 = 0;
    *((_QWORD *)&v21 + 1) = 8;
    v22 = 0;
  }
  else
  {
    nullsub_1(v7, v6);
    v8 = sub_140001650(1024, 8);
    if ( !v8 )
      sub_14196B2DB(8, 1024);
    v9 = v8;
    sub_1419234B0(v8, v15, 256);
    *(_QWORD *)&v23 = 4;
    *((_QWORD *)&v23 + 1) = v9;
    v24 = 1;
    if ( v4 != 1 )
    {
      v12 = v5 + (v4 << 8);
      v13 = v5 + 256;
      v14 = 1;
      do
      {
        sub_140222B30(&v16, v13);
        if ( (_QWORD)v16 == -1 )
          break;
        if ( v14 == (_QWORD)v23 )
        {
          sub_141939070((unsigned int)&v23, v14, 1, 8, 256);
          v9 = *((_QWORD *)&v23 + 1);
        }
        v13 += 256;
        sub_1419234B0(v9 + (v14++ << 8), &v16, 256);
        v24 = v14;
      }
      while ( v13 != v12 );
    }
    v21 = v23;
    v22 = v24;
  }
  sub_1401F5A00(&v16, a2);
  v10 = *(_BYTE *)(a2 + 382);
  if ( v10 )
  {
    sub_1402311B0(&v18, a2 + 128);
  }
  else
  {
    v18 = 0;
    v19 = 8;
    v20 = 0;
  }
  *(_QWORD *)(a1 + 112) = v22;
  *(_OWORD *)(a1 + 96) = v21;
  *(_OWORD *)(a1 + 120) = v16;
  *(_QWORD *)(a1 + 136) = v17;
  *(_BYTE *)(a1 + 168) = v10;
  *(_QWORD *)(a1 + 144) = v18;
  *(_QWORD *)(a1 + 152) = v19;
  *(_QWORD *)(a1 + 160) = v20;
  *(_QWORD *)a1 = -1;
  return a1;
}
