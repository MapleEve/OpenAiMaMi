// win 1.2.7 latest-exe | module src/core/relay/keychain.rs | ea 0x14022b180 | successor of pre-update 0x1403f0270 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.968, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 *__fastcall sub_14022B180(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11

  v2 = *a2;
  v3 = a2[1] - *a2;
  if ( v3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( v3 )
  {
    v6 = a1;
    nullsub_1(a1, a2);
    v4 = 1;
    v7 = sub_140001650(v3, 1);
    if ( !v7 )
LABEL_3:
      sub_14196B2DB(v4, v3);
    v9 = v7;
    v10 = a2[2];
    v11 = a2[3];
    v12 = *(_QWORD *)(v11 + 16);
    v13 = 0;
    a1 = v6;
    do
    {
      if ( !v12 )
        sub_14196B970(&off_141A52660, v8, v10);
      if ( (v12 | (v10 + v13)) >> 32 )
        v8 = (v10 + v13) % v12;
      else
        v8 = ((int)v10 + (int)v13) % (unsigned int)v12;
      *(_BYTE *)(v7 + v13) = *(_BYTE *)(*(_QWORD *)(v11 + 8) + v8) ^ *(_BYTE *)(v2 + v13);
      ++v13;
    }
    while ( v3 != v13 );
  }
  else
  {
    v9 = 1;
  }
  *a1 = v3;
  a1[1] = v9;
  a1[2] = v3;
  return a1;
}
