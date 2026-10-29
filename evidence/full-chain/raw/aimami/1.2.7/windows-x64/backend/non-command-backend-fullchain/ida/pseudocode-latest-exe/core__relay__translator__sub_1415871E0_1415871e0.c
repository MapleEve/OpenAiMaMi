// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x1415871e0 | successor of pre-update 0x14037eaa0 | session <审计会话>
// match evidence: {"body_sim": 0.485, "verdict": "CONFIRMED_DIFF_CAND"}
void __fastcall sub_1415871E0(_QWORD *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 i; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  _QWORD v16[9]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h]
  _QWORD *v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+88h] [rbp+8h]
  _QWORD *v21; // [rsp+90h] [rbp+10h]
  __int64 v22; // [rsp+98h] [rbp+18h]
  __int64 v23; // [rsp+A0h] [rbp+20h]
  __int64 v24; // [rsp+A8h] [rbp+28h]

  v24 = -2;
  v1 = *(unsigned __int8 *)a1;
  if ( v1 < 3 )
    return;
  if ( v1 == 3 )
  {
    v5 = a1[1];
    if ( !v5 )
      return;
    v6 = a1[2];
    v7 = 1;
    goto LABEL_14;
  }
  if ( v1 == 4 )
  {
    v2 = a1[2];
    v21 = a1;
    v20 = a1[3];
    v22 = 0;
    v23 = v2;
    v3 = v2;
    while ( v20 != v22 )
    {
      ++v22;
      v4 = v3 + 32;
      sub_141589060();
      v3 = v4;
    }
    v12 = v21[1];
    if ( !v12 )
      return;
    v5 = 32 * v12;
    v7 = 8;
    v6 = v23;
LABEL_14:
    sub_140001660(v6, v5, v7);
    return;
  }
  v8 = a1[1];
  if ( v8 )
  {
    v9 = a1[2];
    v10 = a1[3];
    v16[1] = 0;
    v16[2] = v8;
    v16[3] = v9;
    v16[5] = 0;
    v16[6] = v8;
    v16[7] = v9;
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  v16[0] = v11;
  v16[4] = v11;
  v16[8] = v10;
  sub_141587AB0(v17, v16);
  for ( i = v17[0]; v17[0]; i = v17[0] )
  {
    v14 = v18;
    v19 = v16;
    v15 = *(_QWORD *)(i + 24 * v18 + 360);
    if ( v15 )
      sub_140001660(*(_QWORD *)(i + 24 * v18 + 368), v15, 1);
    sub_1415871E0(32 * v14 + i);
    sub_141587AB0(v17, v16);
  }
}
