// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x1403118f0
// name: sub_1403118F0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
_QWORD *__fastcall sub_1403118F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 *v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-48h]
  int v29; // [rsp+30h] [rbp-40h] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+60h] [rbp-10h]
  __int64 v35; // [rsp+68h] [rbp-8h]
  __int64 v36; // [rsp+70h] [rbp+0h]

  v36 = -2;
  if ( a2 == a3 )
  {
LABEL_9:
    *a1 = 0;
    a1[1] = 8;
    a1[2] = 0;
  }
  else
  {
    v5 = a2;
    while ( 1 )
    {
      v6 = sub_1414742C0(*(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
      if ( v6 )
      {
        sub_1414A3C90(&v29, v6, v7);
        if ( v29 != 1 )
          break;
      }
      v5 += 32;
      if ( v5 == a3 )
        goto LABEL_9;
    }
    v9 = v31;
    v10 = v5 + 32;
    if ( v31 < 0 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    if ( v31 )
    {
      v13 = v30;
      nullsub_1(v8);
      v11 = 1;
      v14 = sub_140001650(v9, 1);
      if ( !v14 )
LABEL_8:
        sub_1416C2D4B(v11, v9);
      v15 = v14;
      sub_141684120(v14, v13, v9);
      v16 = v15;
    }
    else
    {
      v16 = 1;
    }
    nullsub_1(v8);
    v17 = (__int64 *)sub_140001650(96, 8);
    if ( !v17 )
    {
      v34 = v16;
      v35 = v9;
      sub_1416C2D4B(8, 96);
    }
    v18 = v17;
    *v17 = v9;
    v17[1] = v16;
    v17[2] = v9;
    *(_QWORD *)&v32 = 4;
    *((_QWORD *)&v32 + 1) = v17;
    v19 = 1;
LABEL_17:
    v33 = v19;
    while ( v10 != a3 )
    {
      v20 = sub_1414742C0(*(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
      v10 += 32;
      if ( v20 )
      {
        sub_1414A3C90(&v29, v20, v21);
        if ( v29 != 1 )
        {
          v23 = v31;
          if ( v31 < 0 )
          {
            v24 = 0;
            goto LABEL_31;
          }
          v35 = v31;
          if ( v31 )
          {
            v28 = v30;
            nullsub_1(v22);
            v24 = 1;
            v25 = sub_140001650(v35, 1);
            v23 = v35;
            if ( v25 )
            {
              v34 = v25;
              sub_141684120(v25, v28, v35);
              goto LABEL_26;
            }
LABEL_31:
            sub_1416C2D4B(v24, v23);
          }
          v34 = 1;
LABEL_26:
          if ( v19 == (_QWORD)v32 )
          {
            sub_141688D30((unsigned int)&v32, v19, 1, 8, 24);
            v18 = *((__int64 **)&v32 + 1);
          }
          v26 = 3 * v19;
          v27 = v35;
          v18[v26] = v35;
          v18[v26 + 1] = v34;
          v18[v26 + 2] = v27;
          ++v19;
          goto LABEL_17;
        }
      }
    }
    a1[2] = v33;
    *(_OWORD *)a1 = v32;
  }
  return a1;
}