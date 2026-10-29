// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140421120 | name sub_140421120
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140421120(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r13
  __int8 v12; // al
  __int8 v13; // cl
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // rsi
  __int64 v27; // rax
  _QWORD v28[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-20h]
  _QWORD v32[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+28h]
  char v34; // [rsp+B0h] [rbp+30h] BYREF
  _BYTE v35[31]; // [rsp+B1h] [rbp+31h]
  __int64 v36; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+58h]
  __int64 v38; // [rsp+E0h] [rbp+60h]
  __int64 v39; // [rsp+E8h] [rbp+68h]
  _BYTE *v40; // [rsp+F0h] [rbp+70h]
  __m256i v41; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v42; // [rsp+118h] [rbp+98h]
  __int64 v43; // [rsp+120h] [rbp+A0h]
  __int64 v44; // [rsp+128h] [rbp+A8h]
  __int64 v45; // [rsp+130h] [rbp+B0h]
  __int64 v46; // [rsp+138h] [rbp+B8h]
  _BYTE v47[2]; // [rsp+146h] [rbp+C6h] BYREF
  __int64 v48; // [rsp+148h] [rbp+C8h]
  __int64 v49; // [rsp+150h] [rbp+D0h]

  v49 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)a2;
  v40 = a2;
  if ( v4 == 4 )
  {
    sub_140644F20(a1, a2 + 1);
    return v3;
  }
  if ( v4 != 5 )
  {
    a1[1] = sub_14190A750(a2, v47, &unk_1419F0088);
    *v3 = -1;
    if ( (v4 & 6) != 4 )
      goto LABEL_43;
    return v3;
  }
  v46 = (__int64)a1;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = 0;
  v9 = v7;
  if ( !v5 )
    v9 = 0;
  LOBYTE(v8) = v5 != 0;
  v32[0] = v8;
  v32[1] = 0;
  v32[2] = v5;
  v32[3] = v6;
  v32[4] = v8;
  v32[5] = 0;
  v32[6] = v5;
  v32[7] = v6;
  v33 = v9;
  v34 = -1;
  v29 = -1;
  v10 = -1;
  v48 = -2;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v45 = v48;
        v11 = v10;
        v44 = v10;
        sub_14071B2E0(&v41, v32);
        if ( v41.m256i_i8[0] == 1 )
        {
          v14 = v41.m256i_i64[1];
LABEL_30:
          v3 = (_QWORD *)v46;
          v21 = v43;
          goto LABEL_31;
        }
        if ( v41.m256i_u8[1] != 2 )
          break;
        v12 = v34;
        v34 = -1;
        if ( v12 == -1 )
        {
          v45 = v48;
          v44 = v11;
          v14 = sub_141911F40(aValueIsMissing, 16);
          goto LABEL_30;
        }
        v41.m256i_i8[0] = v12;
        *(_OWORD *)&v41.m256i_u64[2] = *(_OWORD *)&v35[15];
        *(_OWORD *)&v41.m256i_i8[1] = *(_OWORD *)v35;
        v45 = v48;
        v44 = v11;
        sub_140409B40(&v41);
        v10 = v11;
      }
      if ( v41.m256i_i8[1] )
        break;
      if ( v11 != -1 )
      {
        v36 = (__int64)aData_5;
        v37 = 4;
        v41.m256i_i64[0] = (__int64)&v36;
        v41.m256i_i64[1] = (__int64)sub_140186EE0;
        v45 = v48;
        v44 = v11;
        v14 = sub_141911DB0(&unk_141A506A4, &v41);
        goto LABEL_30;
      }
      v13 = v34;
      v34 = -1;
      if ( v13 == -1 )
      {
        v45 = v48;
        v44 = -1;
        v14 = sub_141911F40(aValueIsMissing, 16);
        goto LABEL_46;
      }
      v41.m256i_i8[0] = v13;
      *(_OWORD *)&v41.m256i_u64[2] = *(_OWORD *)&v35[15];
      *(_OWORD *)&v41.m256i_i8[1] = *(_OWORD *)v35;
      v47[1] = v13;
      if ( v13 != 4 )
      {
        v37 = sub_14190A750(&v41, v47, &unk_1419EFCE8);
        v36 = -1;
        v45 = v48;
        v44 = -1;
        v26 = v37;
        sub_140409B40(&v41);
        v14 = v26;
LABEL_46:
        v21 = v43;
        v11 = -1;
        v3 = (_QWORD *)v46;
LABEL_31:
        v22 = v48;
        v3[1] = v14;
        *v3 = -1;
        if ( v22 > 0 )
          sub_140001660(v21, v22, 1);
        if ( v11 != -1 )
        {
LABEL_34:
          v46 = v11;
          v48 = 0;
          v23 = v42;
          while ( v39 != v48 )
          {
            ++v48;
            v24 = v23 + 32;
            sub_1403880E0(v23);
            v23 = v24;
          }
          if ( v46 )
            sub_140001660(v42, 32 * v46, 8);
        }
LABEL_39:
        sub_140DF2FD0(v32);
        goto LABEL_40;
      }
      sub_14063CF10(&v36, &v41.m256i_u64[1]);
      v10 = v36;
      v14 = v37;
      if ( v36 == -1 )
        goto LABEL_46;
      v29 = v36;
      v30 = v37;
      v39 = v38;
      v31 = v38;
      v42 = v37;
    }
    if ( v41.m256i_u8[1] != 1 )
      break;
    if ( v48 != -2 )
    {
      v36 = (__int64)aNextcursor;
      v37 = 10;
      v41.m256i_i64[0] = (__int64)&v36;
      v41.m256i_i64[1] = (__int64)sub_140186EE0;
      v45 = v48;
      v44 = v11;
      v14 = sub_141911DB0(&unk_141A506A4, &v41);
      goto LABEL_30;
    }
    v45 = -2;
    v44 = v11;
    sub_14071D210(&v41, v32);
    if ( v41.m256i_i64[0] == -2 )
    {
      v3 = (_QWORD *)v46;
      *(_QWORD *)(v46 + 8) = v41.m256i_i64[1];
      *v3 = -1;
      if ( v11 != -1 )
        goto LABEL_34;
      goto LABEL_39;
    }
    v43 = v41.m256i_i64[1];
    v48 = v41.m256i_i64[0];
    v2 = v41.m256i_i64[2];
    v10 = v11;
  }
  if ( v11 == -1 )
  {
    v36 = (__int64)aData_5;
    v37 = 4;
    v41.m256i_i64[0] = (__int64)&v36;
    v41.m256i_i64[1] = (__int64)sub_140186EE0;
    v45 = v48;
    v44 = -1;
    v14 = sub_141911DB0(&unk_141A50628, &v41);
    v11 = -1;
    goto LABEL_30;
  }
  v15 = -1;
  if ( v48 != -2 )
    v15 = v48;
  v3 = (_QWORD *)v46;
  *(_QWORD *)v46 = v11;
  v3[1] = v42;
  v3[2] = v39;
  v3[3] = v15;
  v3[4] = v43;
  v3[5] = v2;
  v16 = v3[1];
  v17 = v3[2];
  v18 = v3[3];
  v19 = v3[4];
  v20 = v3[5];
  v28[0] = *v3;
  v28[1] = v16;
  v28[2] = v17;
  v28[3] = v18;
  v28[4] = v19;
  v28[5] = v20;
  if ( v33 )
  {
    v27 = sub_1419120F0(v7, &off_1419EFC30, &unk_1419EFC40);
    v3 = (_QWORD *)v46;
    *(_QWORD *)(v46 + 8) = v27;
    *v3 = -1;
    sub_14040CDE0(v28);
  }
  sub_140DF2FD0(v32);
LABEL_40:
  if ( v34 != -1 )
    sub_140409B40(&v34);
  if ( (*v40 & 6) != 4 )
LABEL_43:
    sub_140409B40(v40);
  return v3;
}
