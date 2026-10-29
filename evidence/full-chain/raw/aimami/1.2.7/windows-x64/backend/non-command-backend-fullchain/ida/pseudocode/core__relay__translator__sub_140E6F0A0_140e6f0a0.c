// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e6f0a0 | name sub_140E6F0A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140E6F0A0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbp
  int v14; // eax
  char v15; // cl
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+28h] [rbp-C0h]
  _QWORD *v24; // [rsp+40h] [rbp-A8h]
  __int64 v25; // [rsp+48h] [rbp-A0h]
  _QWORD v26[7]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v27[96]; // [rsp+88h] [rbp-60h] BYREF

  v5 = a1;
  v6 = *a2;
  if ( *a2 )
  {
    v21 = a4;
    v24 = a2;
    v7 = a2[1];
    v8 = a3[1];
    v9 = a3[2];
    while ( 2 )
    {
      v10 = v6 + 8;
      v25 = *(unsigned __int16 *)(v6 + 538);
      v11 = 3LL * (unsigned int)(8 * v25);
      v4 = -1;
      do
      {
        if ( !v11 )
        {
          v4 = v25;
          goto LABEL_11;
        }
        v12 = v10 + 24;
        v13 = v9 - *(_QWORD *)(v10 + 16);
        v14 = sub_1418F4B70(v8, *(_QWORD *)(v10 + 8));
        if ( v14 )
          v13 = v14;
        v15 = (v13 > 0) - (v13 < 0);
        ++v4;
        v11 -= 24;
        v10 = v12;
      }
      while ( v15 == 1 );
      if ( !v15 )
      {
        if ( *a3 )
          sub_140001660(v8, *a3, 1);
        v5 = a1;
        a4 = v21;
        goto LABEL_20;
      }
LABEL_11:
      if ( v7-- != 0 )
      {
        v6 = *(_QWORD *)(v6 + 8 * v4 + 544);
        continue;
      }
      break;
    }
    v17 = v6;
    v6 = v8;
    v5 = a1;
    a4 = v21;
    a2 = v24;
    v18 = *a3;
    if ( *a3 == -1 )
      goto LABEL_19;
LABEL_17:
    v26[0] = v18;
    v26[1] = v6;
    v26[2] = v9;
    v26[3] = a2;
    v26[4] = v17;
    v26[5] = 0;
    v26[6] = v4;
    sub_140E62D00(v27, v26, a4);
    *v5 = -1;
    return v5;
  }
  v6 = a3[1];
  v9 = a3[2];
  v17 = 0;
  v18 = *a3;
  if ( *a3 != -1 )
    goto LABEL_17;
LABEL_19:
  v4 = (__int64)a2;
LABEL_20:
  v19 = 3 * v4;
  v5[2] = *(_QWORD *)(v6 + 24 * v4 + 288);
  *(_OWORD *)v5 = *(_OWORD *)(v6 + 24 * v4 + 272);
  *(_OWORD *)(v6 + 8 * v19 + 272) = *(_OWORD *)a4;
  *(_QWORD *)(v6 + 8 * v19 + 288) = *(_QWORD *)(a4 + 16);
  return v5;
}
