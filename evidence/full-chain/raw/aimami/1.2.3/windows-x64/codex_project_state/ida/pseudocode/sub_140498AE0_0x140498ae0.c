// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x140498ae0
// name: sub_140498AE0
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140498AE0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r9
  char *v4; // r13
  char *v5; // r14
  __int64 v6; // rcx
  char *v7; // rdi
  char *v8; // rax
  _QWORD *v9; // rbx
  char *v10; // r15
  _QWORD *v11; // r12
  char *v12; // rbx
  char *v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r13
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  _OWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 result; // rax
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  __int64 v37; // [rsp+50h] [rbp-30h]
  char *v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h] BYREF
  char *v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+70h] [rbp-10h]
  _QWORD *v42; // [rsp+78h] [rbp-8h] BYREF
  char *v43; // [rsp+80h] [rbp+0h]
  __int64 v44; // [rsp+88h] [rbp+8h]
  char *v45; // [rsp+90h] [rbp+10h]
  _QWORD *v46; // [rsp+98h] [rbp+18h]
  char *v47; // [rsp+A0h] [rbp+20h]
  __int64 v48; // [rsp+A8h] [rbp+28h]
  char *v49; // [rsp+B0h] [rbp+30h]
  __int64 v50; // [rsp+B8h] [rbp+38h]
  __int64 v51; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v52; // [rsp+C8h] [rbp+48h]
  __int64 v53; // [rsp+D0h] [rbp+50h]
  __int64 v54; // [rsp+D8h] [rbp+58h]
  char *v55; // [rsp+E0h] [rbp+60h]
  __int64 v56; // [rsp+E8h] [rbp+68h]
  __int128 v57; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v58; // [rsp+100h] [rbp+80h]
  __int64 v59; // [rsp+108h] [rbp+88h]
  __int64 v60; // [rsp+110h] [rbp+90h]
  char v61; // [rsp+11Fh] [rbp+9Fh]
  __int64 v62; // [rsp+120h] [rbp+A0h]

  v62 = -2;
  v36 = a1;
  v39 = 0;
  v41 = 0;
  *(_QWORD *)&v57 = 0;
  *((_QWORD *)&v57 + 1) = 8;
  v58 = 0;
  v3 = *a2;
  v4 = (char *)a2[1];
  v5 = &v4[24 * a2[2]];
  v6 = *a3;
  v7 = (char *)a3[1];
  v8 = &v7[24 * a3[2]];
  v42 = v4;
  v43 = v4;
  v44 = v3;
  v45 = v5;
  v46 = v7;
  v47 = v7;
  v37 = v6;
  v48 = v6;
  v55 = v8;
  v49 = v8;
  v34 = v3;
  v35 = 24 * v3;
  v9 = v32;
  v38 = v7;
  v10 = v4;
  while ( 1 )
  {
    v11 = v9;
    if ( v10 )
    {
      v12 = v5;
      if ( v4 != v5 )
      {
        v12 = v4 + 24;
        v43 = v4 + 24;
        if ( *(_QWORD *)v4 != -1 )
        {
          v60 = *(_QWORD *)v4;
          v13 = v4;
          v4 += 24;
          goto LABEL_18;
        }
        if ( v5 != v12 )
        {
          v14 = (v5 - v12) / 0x18uLL;
          v15 = v4 + 32;
          do
          {
            v16 = *(v15 - 1);
            if ( v16 )
              sub_140001660(*v15, v16, 1);
            v15 += 3;
            --v14;
          }
          while ( v14 );
        }
      }
      if ( v34 )
        sub_140001660(v10, v35, 8);
      v42 = nullptr;
      if ( v7 == v55 )
        goto LABEL_33;
    }
    else
    {
      v12 = v4;
      if ( v7 == v55 )
        goto LABEL_33;
    }
    v17 = v7 + 24;
    v47 = v7 + 24;
    if ( *(_QWORD *)v7 == -1 )
      break;
    v60 = *(_QWORD *)v7;
    v13 = v7;
    v7 += 24;
    v4 = v12;
    v10 = nullptr;
LABEL_18:
    v18 = *((_QWORD *)v13 + 2);
    v54 = *((_QWORD *)v13 + 1);
    sub_140499BF0(&v51, v54, v18);
    v9 = v11;
    v19 = v53;
    if ( v53 && (v61 = 1, sub_14149C500(v11, &v51), v61 = 1, !sub_140307390(&v39, v11)) )
    {
      v59 = v51;
      v56 = v52;
      v21 = v58;
      if ( v58 == (_QWORD)v57 )
        sub_141689AB0(&v57);
      v22 = *((_QWORD *)&v57 + 1);
      v23 = 3 * v21;
      *(_QWORD *)(*((_QWORD *)&v57 + 1) + 8 * v23) = v59;
      *(_QWORD *)(v22 + 8 * v23 + 8) = v56;
      *(_QWORD *)(v22 + 8 * v23 + 16) = v19;
      v58 = v21 + 1;
      v9 = v11;
      v20 = v60;
      if ( v60 )
LABEL_27:
        sub_140001660(v54, v20, 1);
    }
    else
    {
      if ( v51 )
        sub_140001660(v52, v51, 1);
      v20 = v60;
      if ( v60 )
        goto LABEL_27;
    }
  }
  if ( v55 != v17 )
  {
    v24 = (v55 - v17) / 0x18uLL;
    v25 = v7 + 32;
    do
    {
      v26 = *(v25 - 1);
      if ( v26 )
        sub_140001660(*v25, v26, 1);
      v25 += 3;
      --v24;
    }
    while ( v24 );
  }
LABEL_33:
  if ( v37 )
    sub_140001660(v38, 24 * v37, 8);
  v27 = (_OWORD *)v36;
  *(_QWORD *)(v36 + 16) = v58;
  *v27 = v57;
  if ( v39 )
  {
    v28 = v41;
    v43 = nullptr;
    v44 = v39;
    v45 = v40;
    v47 = nullptr;
    v48 = v39;
    v49 = v40;
    v29 = 1;
  }
  else
  {
    v29 = 0;
    v28 = 0;
  }
  v42 = (_QWORD *)v29;
  v46 = (_QWORD *)v29;
  v50 = v28;
  sub_140308850(v32, &v42);
  for ( result = v32[0]; v32[0]; result = v32[0] )
  {
    v31 = *(_QWORD *)(result + 24 * v33 + 8);
    if ( v31 )
      sub_140001660(*(_QWORD *)(result + 24 * v33 + 16), v31, 1);
    sub_140308850(v32, &v42);
  }
  return result;
}