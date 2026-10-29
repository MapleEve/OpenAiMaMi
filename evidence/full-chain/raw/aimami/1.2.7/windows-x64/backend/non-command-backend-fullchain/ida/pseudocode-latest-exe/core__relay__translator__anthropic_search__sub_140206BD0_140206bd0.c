// win 1.2.7 latest-exe | module src/core/relay/translator/anthropic_search.rs | ea 0x140206bd0 | successor of pre-update 0x1403d3050 | session <审计会话>
// match evidence: {"body_sim": 0.467, "str_ov": 0, "anchor": 0.169, "conf": false, "verdict": "CONFIRMED_FINAL"}
_QWORD *__fastcall sub_140206BD0(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // r13
  __int64 *v4; // r12
  __int64 *v5; // r13
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // cf
  _QWORD *result; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+48h] [rbp-38h]
  __int128 *v24; // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v25)(); // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+80h] [rbp+0h]
  __int128 v31; // [rsp+88h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+18h]
  _QWORD *v33; // [rsp+A0h] [rbp+20h]
  __int64 v34; // [rsp+A8h] [rbp+28h]
  __int64 v35; // [rsp+B0h] [rbp+30h]

  v35 = -2;
  v33 = a1;
  v2 = a2[2];
  if ( !v2 || (v4 = a2[1], *a2 == v4) )
  {
LABEL_8:
    result = v33;
    *v33 = 0;
    result[1] = 8;
    result[2] = 0;
  }
  else
  {
    v5 = (__int64 *)((char *)v2 - 1);
    v6 = *a2 + 1;
    while ( 1 )
    {
      *a2 = v6;
      a2[2] = v5;
      v7 = *(v6 - 1);
      if ( *(_QWORD *)(v7 + 136) != -1 )
      {
        v31 = *(_OWORD *)(v7 + 144);
        v22 = v7 + 32;
        v23 = sub_1400015F0;
        v24 = &v31;
        v25 = sub_140191200;
        sub_1416DAFA0(&v26, &unk_141A58FE9, &v22);
        if ( v26 != -1 )
          break;
      }
      v10 = v5 == nullptr;
      v5 = (__int64 *)((char *)v5 - 1);
      if ( !v10 && v6++ != v4 )
        continue;
      goto LABEL_8;
    }
    v34 = v26;
    v13 = v27;
    v14 = v28;
    nullsub_1(v9, v8);
    v15 = (__int64 *)sub_140001650(96, 8);
    if ( !v15 )
    {
      v33 = v13;
      sub_14196B2DB(8, 96);
    }
    v16 = v15;
    *v15 = v34;
    v15[1] = (__int64)v13;
    v15[2] = v14;
    *(_QWORD *)&v31 = 4;
    *((_QWORD *)&v31 + 1) = v15;
    v32 = 1;
    if ( v5 )
    {
      v34 = 1;
      do
      {
        if ( v6 == v4 )
          break;
        v5 = (__int64 *)((char *)v5 - 1);
        v18 = *v6++;
        if ( *(_QWORD *)(v18 + 136) != -1 )
        {
          v20 = *(_OWORD *)(v18 + 144);
          v22 = v18 + 32;
          v23 = sub_1400015F0;
          v24 = &v20;
          v25 = sub_140191200;
          sub_1416DAFA0(&v26, &unk_141A58FE9, &v22);
          if ( v26 != -1 )
          {
            v30 = v26;
            v29 = (__int64)v27;
            v21 = v28;
            v19 = v34;
            if ( v34 == (_QWORD)v31 )
            {
              sub_141939070((unsigned int)&v31, v34, 1, 8, 24);
              v16 = *((__int64 **)&v31 + 1);
              v19 = v34;
            }
            v17 = 3 * v19;
            v16[v17] = v30;
            v16[v17 + 1] = v29;
            v16[v17 + 2] = v21;
            v34 = v19 + 1;
            v32 = v19 + 1;
          }
        }
      }
      while ( v5 );
    }
    result = v33;
    v33[2] = v32;
    *(_OWORD *)result = v31;
  }
  return result;
}
