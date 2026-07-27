// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14031b0c0
// name: sub_14031B0C0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
_QWORD *__fastcall sub_14031B0C0(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+68h] [rbp-8h]
  __int64 v22; // [rsp+70h] [rbp+0h]

  v22 = -2;
  *(_QWORD *)&v20 = a2 + 2;
  v3 = *a2;
  v4 = a2[1];
  if ( *a2 == v4 )
    goto LABEL_17;
  while ( 1 )
  {
    v6 = v3 + 112;
    *a2 = v3 + 112;
    *(_QWORD *)&v18 = v3;
    if ( (unsigned __int8)sub_1407B95B0(&v20, &v18) )
      break;
    v3 += 112;
    if ( v6 == v4 )
      goto LABEL_17;
  }
  if ( !v3 )
  {
LABEL_17:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  else
  {
    nullsub_1(v7);
    v8 = (_QWORD *)sub_140001650(32, 8);
    if ( !v8 )
      sub_1416C2D4B(8, 32);
    *v8 = v3;
    *(_QWORD *)&v20 = 4;
    v17 = v8;
    *((_QWORD *)&v20 + 1) = v8;
    v21 = 1;
    v19 = a2[2];
    v18 = *(_OWORD *)a2;
    v16 = &v19;
    v10 = *((_QWORD *)&v18 + 1);
    v9 = v18;
    if ( (_QWORD)v18 != *((_QWORD *)&v18 + 1) )
    {
      v11 = 1;
      do
      {
        while ( 1 )
        {
          v12 = v9 + 112;
          *(_QWORD *)&v18 = v9 + 112;
          v15 = v9;
          if ( (unsigned __int8)sub_1407B95B0(&v16, &v15) )
            break;
          v9 += 112;
          if ( v12 == v10 )
            goto LABEL_16;
        }
        if ( !v9 )
          break;
        v13 = v17;
        if ( v11 == (_QWORD)v20 )
        {
          sub_141688D30((unsigned int)&v20, v11, 1, 8, 8);
          v13 = *((_QWORD **)&v20 + 1);
        }
        v17 = v13;
        v13[v11++] = v9;
        v21 = v11;
        v16 = &v19;
        v10 = *((_QWORD *)&v18 + 1);
        v9 = v18;
      }
      while ( (_QWORD)v18 != *((_QWORD *)&v18 + 1) );
    }
LABEL_16:
    a1[2] = v21;
    *(_OWORD *)a1 = v20;
  }
  return a1;
}