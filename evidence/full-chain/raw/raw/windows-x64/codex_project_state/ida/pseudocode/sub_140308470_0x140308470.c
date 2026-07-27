// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140308470
// name: sub_140308470
// 
// win 1.2.3 recheck | attributed via call-graph propagation (FANIN_CAP=12, decompile-verified real logic not generic glue, caller-module-purity cross-checked no conflicting non-relay module attribution) | target=/codexmate_lib/core/relay/codex_project_state
__int64 *__fastcall sub_140308470(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 *result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rcx
  unsigned __int64 v17; // r8
  __int64 *v18; // rbx
  __int64 *v19; // rax
  __int64 *v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  __int64 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx

  v3 = a2[8];
  if ( v3 )
  {
    a2[8] = v3 - 1;
    if ( *(_DWORD *)a2 != 1 )
      sub_1416C3040(&off_141743CE0);
    v4 = (__int64 *)a2[1];
    if ( v4 )
    {
LABEL_11:
      result = (__int64 *)a2[2];
      v9 = a2[3];
      if ( v9 >= *((unsigned __int16 *)v4 + 269) )
      {
        v23 = a2;
        do
        {
          v11 = (__int64 *)*v4;
          if ( !*v4 )
          {
            v28 = 640;
            if ( !result )
              v28 = 544;
            sub_140001660(v4, v28, 8);
            sub_1416C3040(&off_141745798);
          }
          v10 = (unsigned __int64)result + 1;
          v9 = *((unsigned __int16 *)v4 + 268);
          v24 = 640;
          if ( !result )
            v24 = 544;
          sub_140001660(v4, v24, 8);
          v4 = v11;
          result = (__int64 *)v10;
        }
        while ( (unsigned __int16)v9 >= *((_WORD *)v11 + 269) );
        a2 = v23;
        if ( v10 )
          goto LABEL_13;
      }
      else
      {
        v10 = a2[2];
        v11 = v4;
        if ( result )
        {
LABEL_13:
          result = &v11[v9 + 69];
          if ( (v10 & 7) != 0 )
          {
            v12 = 0;
            do
            {
              v4 = (__int64 *)*result;
              result = (__int64 *)(*result + 544);
              ++v12;
            }
            while ( (v10 & 7) != v12 );
            v13 = v10 - v12;
            v14 = 0;
            if ( v10 < 8 )
              goto LABEL_34;
            goto LABEL_33;
          }
          v13 = v10;
          v14 = 0;
          if ( v10 >= 8 )
          {
            do
            {
LABEL_33:
              v4 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*result + 544)
                                                                                           + 544LL)
                                                                               + 544LL)
                                                                   + 544LL)
                                                       + 544LL)
                                           + 544LL)
                               + 544LL);
              result = v4 + 68;
              v13 -= 8LL;
            }
            while ( v13 );
          }
LABEL_34:
          a2[1] = (__int64)v4;
          a2[2] = 0;
          a2[3] = v14;
          *a1 = v11;
          a1[1] = v10;
          a1[2] = v9;
          return result;
        }
      }
      v14 = v9 + 1;
      v4 = v11;
      goto LABEL_34;
    }
    v4 = (__int64 *)a2[2];
    v5 = a2[3];
    if ( v5 )
    {
      if ( (v5 & 7) != 0 )
      {
        v6 = 0;
        do
        {
          v4 = (__int64 *)v4[68];
          ++v6;
        }
        while ( (a2[3] & 7) != v6 );
        v7 = v5 - v6;
        if ( v5 < 8 )
          goto LABEL_10;
        goto LABEL_9;
      }
      v7 = a2[3];
      if ( v5 >= 8 )
      {
        do
        {
LABEL_9:
          v4 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4[68] + 544)
                                                                                       + 544LL)
                                                                           + 544LL)
                                                               + 544LL)
                                                   + 544LL)
                                       + 544LL)
                           + 544LL);
          v7 -= 8;
        }
        while ( v7 );
      }
    }
LABEL_10:
    *a2 = 1;
    a2[1] = (__int64)v4;
    *((_OWORD *)a2 + 1) = 0;
    goto LABEL_11;
  }
  v15 = *a2;
  v16 = (__int64 *)a2[1];
  result = (__int64 *)a2[2];
  v17 = a2[3];
  *a2 = 0;
  if ( v15 == 1 )
  {
    if ( v16 )
    {
      v18 = result;
      v19 = (__int64 *)*v16;
      if ( *v16 )
        goto LABEL_21;
      goto LABEL_47;
    }
    if ( !v17 )
      goto LABEL_40;
    if ( (v17 & 7) != 0 )
    {
      v25 = 0;
      do
      {
        result = (__int64 *)result[68];
        ++v25;
      }
      while ( (v17 & 7) != v25 );
      v26 = v17 - v25;
      if ( v17 < 8 )
        goto LABEL_40;
    }
    else
    {
      v26 = v17;
      if ( v17 < 8 )
      {
LABEL_40:
        v18 = nullptr;
        goto LABEL_46;
      }
    }
    v18 = nullptr;
    do
    {
      result = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result[68] + 544)
                                                                                       + 544LL)
                                                                           + 544LL)
                                                               + 544LL)
                                                   + 544LL)
                                       + 544LL)
                           + 544LL);
      v26 -= 8LL;
    }
    while ( v26 );
LABEL_46:
    v16 = result;
    v19 = (__int64 *)*result;
    if ( v19 )
    {
      do
      {
LABEL_21:
        v20 = v19;
        v21 = v18 == nullptr;
        v18 = (__int64 *)((char *)v18 + 1);
        v22 = 640;
        if ( v21 )
          v22 = 544;
        sub_140001660(v16, v22, 8);
        v19 = (__int64 *)*v20;
        v16 = v20;
      }
      while ( *v20 );
      goto LABEL_48;
    }
LABEL_47:
    v20 = v16;
LABEL_48:
    v27 = 640;
    if ( !v18 )
      v27 = 544;
    result = (__int64 *)sub_140001660(v20, v27, 8);
  }
  *a1 = 0;
  return result;
}