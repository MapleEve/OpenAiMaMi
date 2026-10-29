// win 1.2.7 latest-exe | module src/core/analytics/index.rs | ea 0x14092d870 | successor of pre-update 0x140eba2b0 | session <审计会话>
// match evidence: {"body_sim": 0.899, "str_ov": 0, "anchor": 0.259, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_14092D870(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r14
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v20 = -2;
  v6 = sub_1416AE140(a1);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v11 = *(_QWORD *)v6;
    v12 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v16 = v6;
    v11 = sub_1416C5230(v8, v7, v9, v10);
    v6 = v16;
    *(_QWORD *)v16 = v11;
    *(_QWORD *)(v16 + 8) = v12;
    *(_BYTE *)(v16 + 16) = 1;
  }
  *(_QWORD *)v6 = v11 + 1;
  v18 = xmmword_141A57990;
  v17 = *(_OWORD *)&off_141A57980;
  *(_QWORD *)&v19 = v11;
  *((_QWORD *)&v19 + 1) = v12;
  result = sub_140861240(&v17, a2, a3);
  v14 = v17;
  v15 = v18;
  a1[2] = v19;
  a1[1] = v15;
  *a1 = v14;
  return result;
}
