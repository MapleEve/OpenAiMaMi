// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x140867170 | successor of pre-update 0x140ebbf00 | session <审计会话>
// match evidence: {"body_sim": 0.944, "str_ov": 0, "anchor": 0.593, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140867170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // ebx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r14
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // [rsp+28h] [rbp-58h] BYREF
  __int64 v39; // [rsp+30h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-48h]
  __int64 v41; // [rsp+40h] [rbp-40h]
  __int64 v42; // [rsp+48h] [rbp-38h]
  __int64 v43; // [rsp+50h] [rbp-30h]
  __int64 v44; // [rsp+58h] [rbp-28h]
  __int64 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+68h] [rbp-18h]
  __int64 v47; // [rsp+70h] [rbp-10h]
  char v48; // [rsp+7Fh] [rbp-1h]
  __int64 v49; // [rsp+80h] [rbp+0h]

  v49 = -2;
  v10 = sub_1408FEA60(a3, a4);
  sub_1408D1C90(&v38, v10, v11);
  result = v38;
  if ( v38 == -1 )
    return result;
  v45 = a3;
  v44 = a4;
  v47 = v38;
  v46 = v39;
  v13 = v40;
  if ( !a2 )
  {
LABEL_10:
    v43 = a5[1];
    v17 = a5[2];
    v41 = 3 * v17;
    v42 = v17;
    if ( v17 )
    {
      v18 = v43;
      v19 = v43 + 8 * v41;
      do
      {
        v20 = *(_QWORD *)(v18 + 8);
        v21 = *(_QWORD *)(v18 + 16);
        v48 = 0;
        v22 = sub_1408FEA60(v20, v21);
        v48 = 0;
        sub_1408D1C90(&v38, v22, v23);
        v24 = v38;
        if ( v38 != -1 )
        {
          if ( v40 == v13 )
          {
            v25 = v39;
            v26 = sub_141923B40(v39, v46, v13);
            if ( v24 )
              sub_140001660(v25, v24, 1);
            if ( !v26 )
              goto LABEL_7;
          }
          else if ( v38 )
          {
            sub_140001660(v39, v38, 1);
          }
        }
        v18 += 24;
      }
      while ( v18 != v19 );
    }
    v27 = a6[2];
    if ( v27 == *a6 )
      sub_141939F90(a6);
    v28 = a6[1];
    v29 = 3 * v27;
    *(_QWORD *)(v28 + 8 * v29) = v47;
    v30 = v46;
    *(_QWORD *)(v28 + 8 * v29 + 8) = v46;
    *(_QWORD *)(v28 + 8 * v29 + 16) = v13;
    a6[2] = v27 + 1;
    v31 = v44;
    if ( v44 < 0 )
    {
      v32 = 0;
      goto LABEL_24;
    }
    if ( v44 )
    {
      nullsub_1(v29, v30);
      v32 = 1;
      v33 = sub_140001650(v31, 1);
      v34 = v42;
      if ( !v33 )
      {
LABEL_24:
        v48 = 1;
        sub_14196B2DB(v32, v31);
      }
      v35 = v33;
      sub_1419234B0(v33, v45, v31);
      v36 = a5;
      if ( v34 != *a5 )
      {
LABEL_31:
        result = v41;
        v37 = v43;
        *(_QWORD *)(v43 + 8 * v41) = v31;
        *(_QWORD *)(v37 + 8 * result + 8) = v35;
        *(_QWORD *)(v37 + 8 * result + 16) = v31;
        v36[2] = v34 + 1;
        return result;
      }
    }
    else
    {
      v35 = 1;
      v34 = v42;
      v36 = a5;
      if ( v42 != *a5 )
        goto LABEL_31;
    }
    v45 = v35;
    sub_141939F90(v36);
    v43 = v36[1];
    v31 = v44;
    v35 = v45;
    goto LABEL_31;
  }
  v14 = 0;
  while ( *(_QWORD *)(a1 + v14 + 16) != v13 || (unsigned int)sub_141923B40(*(_QWORD *)(a1 + v14 + 8), v46, v13) )
  {
    v14 += 24;
    if ( 24 * a2 == v14 )
      goto LABEL_10;
  }
LABEL_7:
  v15 = a6[8];
  if ( v15 == a6[6] )
    sub_141939F90(a6 + 6);
  result = a6[7];
  v16 = 3 * v15;
  *(_QWORD *)(result + 8 * v16) = v47;
  *(_QWORD *)(result + 8 * v16 + 8) = v46;
  *(_QWORD *)(result + 8 * v16 + 16) = v13;
  a6[8] = v15 + 1;
  return result;
}
