// module: codexmate_lib/core/relay/invariants
// addr: 0x14048cfe0
// name: verify_router_on_http_contract
// win 1.2.3 | = mac codexmate_lib::core::relay::invariants::verify_router_on_http_contract | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall verify_router_on_http_contract(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // kr00_16
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h] BYREF
  __int128 v30; // [rsp+80h] [rbp+0h]
  __int64 v31; // [rsp+90h] [rbp+10h]
  __int64 v32; // [rsp+98h] [rbp+18h]
  __int128 v33; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+30h]
  __int128 v35; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+50h]
  __int64 v37; // [rsp+E0h] [rbp+60h]
  __int64 v38; // [rsp+E8h] [rbp+68h]
  __int64 v39; // [rsp+F0h] [rbp+70h]

  v39 = -2;
  sub_14148D130(&v29, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  if ( v29 != -1 )
  {
    v38 = v29;
    v32 = v30;
    router_http_contract_issues((unsigned int)&v29, v30, DWORD2(v30), a3, a4);
    if ( (_DWORD)v29 == 1 )
    {
      v36 = v31;
      v35 = v30;
      nullsub_1(v8);
      v9 = sub_140001650(32, 8);
      if ( !v9 )
        sub_1416C2D31(8, 32);
      v37 = v9;
      *(_QWORD *)&v33 = &v35;
      *((_QWORD *)&v33 + 1) = sub_1400015F0;
      sub_14149C0F0(&v23, &unk_141759C56, &v33);
      v10 = v37;
      *(_QWORD *)(v37 + 16) = v24;
      *(_OWORD *)v10 = v23;
      *(_BYTE *)(v10 + 24) = 0;
      *a1 = 1;
      a1[1] = v10;
      a1[2] = 1;
      if ( (_QWORD)v35 )
        sub_140001660(*((_QWORD *)&v35 + 1), v35, 1);
      v11 = v38;
      goto LABEL_23;
    }
    if ( v31 )
    {
      v14 = v30;
      v15 = v31;
      nullsub_1(v8);
      v37 = sub_140001650(32, 8);
      if ( !v37 )
        sub_1416C2D31(8, 32);
      sub_140440300((unsigned int)&v35, DWORD2(v14), v15, (unsigned int)&unk_141759C30, 2);
      v34 = v36;
      v33 = v35;
      *(_QWORD *)&v35 = &v33;
      *((_QWORD *)&v35 + 1) = sub_1400015F0;
      sub_14149C0F0(&v25, &unk_141759C32, &v35);
      if ( (_QWORD)v33 )
        sub_140001660(*((_QWORD *)&v33 + 1), v33, 1);
      v16 = v37;
      *(_QWORD *)(v37 + 16) = v26;
      *(_OWORD *)v16 = v25;
      *(_BYTE *)(v16 + 24) = 0;
      *a1 = 1;
      a1[1] = v16;
      a1[2] = 1;
      v17 = (_QWORD *)(*((_QWORD *)&v14 + 1) + 8LL);
      do
      {
        v18 = *(v17 - 1);
        if ( v18 )
          sub_140001660(*v17, v18, 1);
        v17 += 3;
        --v15;
      }
      while ( v15 );
      v11 = v38;
      if ( !(_QWORD)v14 )
        goto LABEL_23;
      v19 = 24 * v14;
      v20 = *((_QWORD *)&v14 + 1);
    }
    else
    {
      v20 = *((_QWORD *)&v30 + 1);
      v21 = v30;
      *a1 = 0;
      a1[1] = 8;
      a1[2] = 0;
      v11 = v38;
      if ( !v21 )
        goto LABEL_23;
      v19 = 24 * v21;
    }
    sub_140001660(v20, v19, 8);
LABEL_23:
    if ( v11 )
      sub_140001660(v32, v11, 1);
    return a1;
  }
  *(_QWORD *)&v33 = v30;
  nullsub_1(v7);
  v12 = sub_140001650(32, 8);
  if ( !v12 )
    sub_1416C2D31(8, 32);
  v38 = v12;
  *(_QWORD *)&v35 = &v33;
  *((_QWORD *)&v35 + 1) = sub_141490720;
  sub_14149C0F0(&v27, &unk_141759C92, &v35);
  v13 = v38;
  *(_QWORD *)(v38 + 16) = v28;
  *(_OWORD *)v13 = v27;
  *(_BYTE *)(v13 + 24) = 0;
  *a1 = 1;
  a1[1] = v13;
  a1[2] = 1;
  sub_140018650(&v33);
  return a1;
}