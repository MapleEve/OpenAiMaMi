// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140e6ef30 | name sub_140E6EF30
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140E6EF30(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r13
  int v13; // eax
  char v14; // cl
  __int64 v20; // [rsp+40h] [rbp-48h]

  v3 = a1;
  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    v6 = a3[1];
    v7 = a3[2];
    while ( 2 )
    {
      v8 = v4 + 8;
      v20 = *(unsigned __int16 *)(v4 + 538);
      v9 = 3LL * (unsigned int)(8 * v20);
      v10 = -1;
      do
      {
        if ( !v9 )
        {
          v10 = v20;
          goto LABEL_11;
        }
        v11 = v8 + 24;
        v12 = v7 - *(_QWORD *)(v8 + 16);
        v13 = sub_1418F4B70(v6, *(_QWORD *)(v8 + 8));
        if ( v13 )
          v12 = v13;
        v14 = (v12 > 0) - (v12 < 0);
        ++v10;
        v9 -= 24;
        v8 = v11;
      }
      while ( v14 == 1 );
      if ( !v14 )
      {
        v3 = a1;
        a1[1] = v4;
        a1[2] = v5;
        a1[3] = v10;
        a1[4] = a2;
        *a1 = -1;
        if ( *a3 )
          sub_140001660(v6, *a3, 1);
        return v3;
      }
LABEL_11:
      if ( v5-- != 0 )
      {
        v4 = *(_QWORD *)(v4 + 8 * v10 + 544);
        continue;
      }
      break;
    }
    v3 = a1;
    a1[2] = a3[2];
    *(_OWORD *)a1 = *(_OWORD *)a3;
    a1[3] = a2;
    a1[4] = v4;
    a1[5] = 0;
    a1[6] = v10;
  }
  else
  {
    a1[2] = a3[2];
    *(_OWORD *)a1 = *(_OWORD *)a3;
    a1[3] = a2;
    a1[4] = 0;
  }
  return v3;
}
