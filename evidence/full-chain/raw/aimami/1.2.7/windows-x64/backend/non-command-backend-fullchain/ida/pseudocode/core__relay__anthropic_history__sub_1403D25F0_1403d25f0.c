// win 1.2.7 | module src/core/relay/anthropic_history.rs | ea 0x1403d25f0 | name sub_1403D25F0
// win 1.2.7 | module src/core/relay/anthropic_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_1403D25F0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+80h] [rbp+0h] BYREF
  __int64 v11; // [rsp+90h] [rbp+10h]
  __int128 v12; // [rsp+98h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h]
  __int128 v14; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+40h]
  __int64 v16; // [rsp+C8h] [rbp+48h]
  __int64 v17; // [rsp+D0h] [rbp+50h]
  __int64 v18; // [rsp+D8h] [rbp+58h]

  v18 = -2;
  sub_1403E5020(&v12);
  v3 = v12;
  if ( (_QWORD)v12 == -1 )
  {
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  else
  {
    v4 = *((_QWORD *)&v12 + 1);
    nullsub_1(v2);
    v5 = sub_140001650(96, 8);
    if ( !v5 )
    {
      v16 = v4;
      v17 = v3;
      sub_141938D2B(8, 96);
    }
    v6 = v5;
    *(_QWORD *)(v5 + 16) = v13;
    *(_OWORD *)v5 = v12;
    *(_QWORD *)&v14 = 4;
    *((_QWORD *)&v14 + 1) = v5;
    v15 = 1;
    for ( i = 1; ; v15 = i )
    {
      sub_1403E5020(&v10);
      if ( (_QWORD)v10 == -1 )
        break;
      if ( i == (_QWORD)v14 )
      {
        v16 = *((_QWORD *)&v10 + 1);
        v17 = v10;
        sub_14190D590((unsigned int)&v14, i, 1, 8, 24);
        v6 = *((_QWORD *)&v14 + 1);
      }
      v8 = 3 * i;
      *(_QWORD *)(v6 + 8 * v8 + 16) = v11;
      *(_OWORD *)(v6 + 8 * v8) = v10;
      ++i;
    }
    a1[2] = v15;
    *(_OWORD *)a1 = v14;
  }
  return a1;
}
