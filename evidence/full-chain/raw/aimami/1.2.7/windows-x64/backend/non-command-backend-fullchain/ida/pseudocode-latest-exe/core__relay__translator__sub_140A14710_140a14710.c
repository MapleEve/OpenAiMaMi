// win 1.2.7 latest-exe | module src/core/relay/translator.rs | ea 0x140a14710 | successor of pre-update 0x140dedb20 | session <审计会话>
// match evidence: {"body_sim": 0.63, "str_ov": 0, "anchor": 0.1, "conf": false, "verdict": "CONFIRMED_FINAL"}
_QWORD *__fastcall sub_140A14710(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  __int64 v12; // r12
  int v13; // eax
  char v14; // cl
  __int64 v19; // [rsp+38h] [rbp-120h]
  _QWORD v20[4]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v22[224]; // [rsp+78h] [rbp-E0h] BYREF

  v3 = *a2;
  if ( !*a2 )
    goto LABEL_19;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(_QWORD *)(a3 + 16);
  v6 = a2[1];
LABEL_3:
  v7 = v3 + 1768;
  v19 = *(unsigned __int16 *)(v3 + 2034);
  v8 = 3LL * (unsigned int)(8 * v19);
  v9 = -1;
  do
  {
    if ( !v8 )
    {
      v9 = v19;
LABEL_13:
      if ( v6-- == 0 )
        goto LABEL_19;
      v3 = *(_QWORD *)(v3 + 8 * v9 + 2040);
      goto LABEL_3;
    }
    v10 = v7 + 24;
    v11 = *(_QWORD *)(v7 + 16);
    v12 = v5 - v11;
    if ( v5 < v11 )
      v11 = v5;
    v13 = sub_141923B40(v4, *(_QWORD *)(v7 + 8), v11);
    if ( v13 )
      v12 = v13;
    v14 = (v12 > 0) - (v12 < 0);
    ++v9;
    v8 -= 24;
    v7 = v10;
  }
  while ( v14 == 1 );
  if ( v14 )
    goto LABEL_13;
  v20[0] = v3;
  v20[1] = v6;
  v20[2] = v9;
  v20[3] = a2;
  sub_140A59B90(v21, v20);
  if ( v21[0] == -1 )
  {
LABEL_19:
    *a1 = -1;
    return a1;
  }
  else
  {
    if ( v21[0] )
      sub_140001660(v21[1], v21[0], 1);
    sub_1419234B0(a1, v22, 160);
    return a1;
  }
}
