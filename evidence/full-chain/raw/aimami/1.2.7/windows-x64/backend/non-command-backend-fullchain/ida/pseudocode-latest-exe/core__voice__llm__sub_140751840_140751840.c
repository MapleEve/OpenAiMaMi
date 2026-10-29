// win 1.2.7 latest-exe | module src/core/voice/llm.rs | ea 0x140751840 | successor of pre-update 0x14034dd60 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.887, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 *__fastcall sub_140751840(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // r14
  _BYTE v22[104]; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp+20h]
  __int64 *v25; // [rsp+B0h] [rbp+30h]
  _QWORD *v26; // [rsp+B8h] [rbp+38h]
  __int64 v27; // [rsp+C0h] [rbp+40h]
  __int64 v28; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+50h]
  __int64 v30; // [rsp+D8h] [rbp+58h]
  __int64 v31; // [rsp+E0h] [rbp+60h]

  v31 = -2;
  v25 = a1;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  v2 = a2[1];
  v26 = a2;
  v3 = a2[2];
  v4 = 1;
  v5 = 0;
  v27 = v2;
  while ( 1 )
  {
    sub_1416E1760((unsigned int)v22, v2, v3, (unsigned int)aThink_0, 7);
    sub_14076F380(&v23, v22);
    if ( v23 != 1 )
      break;
    v6 = v24;
    if ( v24 )
    {
      if ( v24 >= v3 )
      {
        if ( v24 != v3 )
LABEL_43:
          sub_14196B4F0(v2, v3, 0, v24, (__int64)&off_141A40290);
      }
      else if ( *(char *)(v2 + v24) <= -65 )
      {
        goto LABEL_43;
      }
      if ( v24 > v28 - v5 )
      {
        sub_141939070((unsigned int)&v28, v5, v24, 1, 1);
        v4 = v29;
        v5 = v30;
      }
      sub_1419234B0(v4 + v5, v2, v6);
      v5 += v6;
      v30 = v5;
      v7 = v6 + 7;
      if ( !v7 )
      {
        v8 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v7 = 7;
    }
    if ( v7 >= v3 )
    {
      v8 = v3;
      if ( v7 != v3 )
LABEL_42:
        sub_14196B4F0(v2, v3, v7, v3, (__int64)&off_141A402A8);
    }
    else
    {
      if ( *(char *)(v2 + v7) < -64 )
        goto LABEL_42;
      v8 = v7;
    }
LABEL_20:
    v9 = v3 - v8;
    v10 = v8 + v2;
    sub_1416E1760((unsigned int)v22, v10, v9, (unsigned int)aThink_1, 8);
    sub_14076F380(&v23, v22);
    if ( v23 != 1 )
      goto LABEL_29;
    v11 = v24 + 8;
    if ( v24 != -8 )
    {
      if ( v9 > v11 )
      {
        if ( *(char *)(v10 + v11) < -64 )
          goto LABEL_44;
      }
      else if ( v9 != v11 )
      {
LABEL_44:
        sub_14196B4F0(v10, v9, v11, v9, (__int64)&off_141A402C0);
      }
    }
    v3 = v9 - v11;
    v2 = v11 + v10;
  }
  if ( v3 > v28 - v5 )
  {
    sub_141939070((unsigned int)&v28, v5, v3, 1, 1);
    v4 = v29;
    v5 = v30;
LABEL_27:
    sub_1419234B0(v5 + v4, v2, v3);
  }
  else if ( v3 )
  {
    goto LABEL_27;
  }
  v5 += v3;
LABEL_29:
  v12 = sub_1408FEA60(v4, v5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = 0;
    goto LABEL_31;
  }
  if ( v13 )
  {
    v17 = v12;
    nullsub_1(v14, v13);
    v16 = 1;
    v18 = sub_140001650(v15, 1);
    if ( !v18 )
LABEL_31:
      sub_14196B2DB(v16, v15);
    v19 = v18;
    sub_1419234B0(v18, v17, v15);
  }
  else
  {
    v19 = 1;
  }
  v20 = v25;
  *v25 = v15;
  v20[1] = v19;
  v20[2] = v15;
  if ( v28 )
    sub_140001660(v4, v28, 1);
  if ( *v26 )
    sub_140001660(v27, *v26, 1);
  return v20;
}
