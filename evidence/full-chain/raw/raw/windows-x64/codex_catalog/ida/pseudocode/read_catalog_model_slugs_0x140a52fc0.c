// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x140a52fc0
// name: read_catalog_model_slugs
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::read_catalog_model_slugs | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_catalog_model_slugs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int128 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm6
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rdx
  __int128 v24; // xmm0
  __int128 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  _OWORD v27[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD v29[2]; // [rsp+70h] [rbp-10h] BYREF
  _OWORD v30[2]; // [rsp+90h] [rbp+10h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v32; // [rsp+C0h] [rbp+40h]
  __int128 v33; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v34; // [rsp+E0h] [rbp+60h]
  __int128 v35; // [rsp+F0h] [rbp+70h]
  __int128 v36; // [rsp+100h] [rbp+80h]
  __int128 v37; // [rsp+110h] [rbp+90h]
  __int128 v38; // [rsp+120h] [rbp+A0h]
  _QWORD *v39; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v40; // [rsp+140h] [rbp+C0h]
  __int64 v41; // [rsp+148h] [rbp+C8h]
  _QWORD *v42; // [rsp+150h] [rbp+D0h]
  __int64 v43; // [rsp+158h] [rbp+D8h]

  v43 = -2;
  sub_14148D3C0(v29, a2, a3);
  if ( *(_QWORD *)&v29[0] == -1 )
  {
    *(_QWORD *)&v30[0] = *((_QWORD *)&v29[0] + 1);
    *(_QWORD *)&v27[0] = a2;
    *((_QWORD *)&v27[0] + 1) = a3;
    *(_QWORD *)&v33 = v27;
    *((_QWORD *)&v33 + 1) = sub_14148F3A0;
    *(_QWORD *)&v34 = v30;
    *((_QWORD *)&v34 + 1) = sub_141490720;
    sub_14149C0F0(&v31, &unk_1417A5084, &v33);
    v16 = v31;
    v17 = v32;
    sub_140018650(v30);
    *(_OWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)a1 = 10;
  }
  else
  {
    v40 = *((_QWORD *)&v29[0] + 1);
    v41 = *(_QWORD *)&v29[0];
    v33 = *(_OWORD *)((char *)v29 + 8);
    v34 = 0;
    sub_1408A8DF0(&v31, &v33);
    if ( (_BYTE)v31 == 0xFF )
    {
      v39 = *((_QWORD **)&v31 + 1);
      v28[0] = a2;
      v28[1] = a3;
      *(_QWORD *)&v33 = v28;
      *((_QWORD *)&v33 + 1) = sub_14148F3A0;
      *(_QWORD *)&v34 = &v39;
      *((_QWORD *)&v34 + 1) = sub_14142D3F0;
      sub_14149C0F0(&v25, &unk_1417A50D9, &v33);
      *(_QWORD *)&v34 = v26;
      v33 = v25;
      v21 = *v39;
      v22 = *v39 == 1;
      v42 = v39;
      if ( v22 )
      {
        sub_140018650(v39 + 1);
      }
      else if ( !v21 )
      {
        v23 = v42[2];
        if ( v23 )
          sub_140001660(v42[1], v23, 1);
      }
      sub_140001660(v42, 40, 8);
      v24 = v33;
      v29[0] = v33;
      v27[1] = v34;
      v27[0] = v33;
      *(_OWORD *)(a1 + 24) = v34;
      *(_OWORD *)(a1 + 8) = v24;
      *(_QWORD *)a1 = 10;
      v19 = v41;
      if ( v41 )
        goto LABEL_11;
    }
    else
    {
      v30[0] = v31;
      v30[1] = v32;
      v6 = sub_141433D50(aModels_3, 6, v30);
      if ( v6 && *(_BYTE *)v6 == 4 )
      {
        v9 = *(_QWORD *)(v6 + 16);
        v10 = *(_QWORD *)(v6 + 24);
        v11 = sub_141470CD0(v8, v7);
        v12 = v11;
        if ( *(_BYTE *)(v11 + 16) == 1 )
        {
          v13 = *(_OWORD *)v11;
        }
        else
        {
          *(_QWORD *)&v13 = sub_141486EF0();
          *(_OWORD *)v12 = v13;
          *(_BYTE *)(v12 + 16) = 1;
        }
        *(_QWORD *)v12 = v13 + 1;
        v34 = xmmword_1417A47A0;
        v33 = *(_OWORD *)&off_1417A4790;
        v35 = v13;
        sub_140992110(v9, v9 + 32 * v10, &v33);
        v14 = v33;
        v15 = v34;
        *(_OWORD *)(a1 + 40) = v35;
        *(_OWORD *)(a1 + 24) = v15;
        *(_OWORD *)(a1 + 8) = v14;
        *(_QWORD *)a1 = -1;
        sub_1400104F0(v30);
      }
      else
      {
        *(_QWORD *)&v29[0] = a2;
        *((_QWORD *)&v29[0] + 1) = a3;
        *(_QWORD *)&v31 = v29;
        *((_QWORD *)&v31 + 1) = sub_14148F3A0;
        sub_14149C0F0((char *)&v33 + 8, &unk_1417A50AC, &v31);
        v18 = *((_QWORD *)&v33 + 1);
        *(_OWORD *)(a1 + 80) = v38;
        *(_OWORD *)(a1 + 64) = v37;
        *(_OWORD *)(a1 + 48) = v36;
        *(_OWORD *)(a1 + 32) = v35;
        *(_OWORD *)(a1 + 16) = v34;
        *(_QWORD *)a1 = 10;
        *(_QWORD *)(a1 + 8) = v18;
        sub_1400104F0(v30);
      }
      v19 = v41;
      if ( v41 )
LABEL_11:
        sub_140001660(v40, v19, 1);
    }
  }
  return a1;
}