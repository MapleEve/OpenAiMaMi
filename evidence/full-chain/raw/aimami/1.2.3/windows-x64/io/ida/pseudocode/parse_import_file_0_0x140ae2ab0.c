// module: codexmate_lib/core/relay/io
// addr: 0x140ae2ab0
// name: parse_import_file_0
// win 1.2.3 | = mac codexmate_lib::core::relay::io::parse_import_file | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall parse_import_file_0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int128 v8; // xmm6
  __int64 v9; // rdi
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  unsigned __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned __int128 v15; // xmm2
  unsigned __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned __int128 v18; // xmm2
  _OWORD v20[4]; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+78h] [rbp-8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+8h]
  _OWORD v25[4]; // [rsp+90h] [rbp+10h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h]
  unsigned __int128 v27; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v28; // [rsp+F0h] [rbp+70h]
  unsigned __int128 v29; // [rsp+100h] [rbp+80h]
  __int128 v30; // [rsp+110h] [rbp+90h]
  __int128 v31; // [rsp+120h] [rbp+A0h]
  __int64 v32; // [rsp+130h] [rbp+B0h]
  unsigned __int128 v33; // [rsp+140h] [rbp+C0h]
  __int128 v34; // [rsp+150h] [rbp+D0h]
  unsigned __int128 v35; // [rsp+160h] [rbp+E0h]
  __int128 v36; // [rsp+170h] [rbp+F0h] BYREF
  _QWORD *v37; // [rsp+188h] [rbp+108h]
  unsigned __int128 v38; // [rsp+190h] [rbp+110h] BYREF
  __int128 v39; // [rsp+1A0h] [rbp+120h]
  unsigned __int128 v40; // [rsp+1B0h] [rbp+130h]
  __int128 v41; // [rsp+1C0h] [rbp+140h]
  __int128 v42; // [rsp+1D0h] [rbp+150h]
  __int64 v43; // [rsp+1E0h] [rbp+160h]
  _QWORD *v44; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v45; // [rsp+1F0h] [rbp+170h]
  __int64 v46; // [rsp+1F8h] [rbp+178h]
  _QWORD *v47; // [rsp+200h] [rbp+180h]
  __int64 v48; // [rsp+208h] [rbp+188h]

  v48 = -2;
  sub_141486710(&v38, a2, a3);
  if ( (_DWORD)v38 == 2 )
  {
    *((_QWORD *)&v27 + 1) = *((_QWORD *)&v38 + 1);
    *(_QWORD *)&v27 = 2;
LABEL_4:
    sub_140018650((char *)&v27 + 8);
    goto LABEL_5;
  }
  v27 = v38;
  v32 = v43;
  v31 = v42;
  v30 = v41;
  v29 = v40;
  v28 = v39;
  if ( (_QWORD)v38 == 2 )
    goto LABEL_4;
  if ( *((_QWORD *)&v30 + 1) >= 0xA00001u )
  {
    *(_QWORD *)&v20[0] = *((_QWORD *)&v30 + 1);
    *(_QWORD *)&v38 = v20;
    *((_QWORD *)&v38 + 1) = sub_1414AC520;
    *(_QWORD *)&v39 = &unk_1417AFA70;
    *((_QWORD *)&v39 + 1) = sub_1414AC520;
    sub_14149C0F0(a1 + 8, &unk_1417AFA78, &v38);
    *(_QWORD *)a1 = 9;
    return a1;
  }
LABEL_5:
  sub_14148D130(&v27, a2, a3);
  if ( (_QWORD)v27 == -1 )
  {
    *(_QWORD *)&v25[0] = *((_QWORD *)&v27 + 1);
    *(_QWORD *)&v20[0] = v25;
    *((_QWORD *)&v20[0] + 1) = sub_141490720;
    sub_14149C0F0(&v38, &unk_1417AE8E5, v20);
    v8 = v38;
    v9 = v39;
    sub_140018650(v25);
    *(_OWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)a1 = 10;
  }
  else
  {
    v46 = v27;
    v38 = __PAIR128__(v28, *((unsigned __int64 *)&v27 + 1));
    v39 = 0;
    v45 = *((_QWORD *)&v27 + 1);
    v40 = __PAIR128__(v28, *((unsigned __int64 *)&v27 + 1));
    sub_1408A8010(&v27, &v38);
    if ( (_QWORD)v27 == -1 )
    {
      v44 = *((_QWORD **)&v27 + 1);
      *(_QWORD *)&v38 = &v44;
      *((_QWORD *)&v38 + 1) = sub_14142D3F0;
      sub_14149C0F0(&v21, &unk_1417AE901, &v38);
      *(_QWORD *)&v39 = v22;
      v38 = v21;
      v10 = *v44;
      v11 = *v44 == 1;
      v47 = v44;
      if ( v11 )
      {
        sub_140018650(v44 + 1);
      }
      else if ( !v10 )
      {
        v12 = v47[2];
        if ( v12 )
          sub_140001660(v47[1], v12, 1);
      }
      sub_140001660(v47, 40, 8);
      v20[0] = v38;
      v25[0] = v38;
      v25[1] = v39;
      v25[2] = v40;
      v25[3] = v41;
      v16 = v38;
      v17 = v39;
      v18 = v40;
      *(_OWORD *)(a1 + 56) = v41;
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 9;
    }
    else
    {
      v25[0] = v27;
      v33 = v27;
      v34 = v28;
      v35 = v29;
      v36 = v30;
      if ( SDWORD2(v30) <= 1 )
      {
        v13 = v33;
        v14 = v34;
        v15 = v35;
        *(_OWORD *)(a1 + 56) = v36;
        *(_OWORD *)(a1 + 40) = v15;
        *(_OWORD *)(a1 + 24) = v14;
        *(_OWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = -1;
      }
      else
      {
        *(_QWORD *)&v38 = (char *)&v36 + 8;
        *((_QWORD *)&v38 + 1) = sub_1414AB890;
        *(_QWORD *)&v39 = &unk_1417AF5F4;
        *((_QWORD *)&v39 + 1) = sub_1414AB890;
        sub_14149C0F0(&v23, &unk_1417AFAC8, &v38);
        *(_QWORD *)(a1 + 24) = v24;
        *(_OWORD *)(a1 + 8) = v23;
        *(_QWORD *)a1 = 9;
        if ( (_QWORD)v33 )
          sub_140001660(*((_QWORD *)&v33 + 1), v33, 1);
        v37 = *((_QWORD **)&v35 + 1);
        v6 = v35;
        v47 = nullptr;
        v26 = v35;
        while ( v37 != v47 )
        {
          v47 = (_QWORD *)((char *)v47 + 1);
          v7 = v6 + 176;
          sub_1402C7F80();
          v6 = v7;
        }
        if ( *((_QWORD *)&v34 + 1) )
          sub_140001660(v35, 176LL * *((_QWORD *)&v34 + 1), 8);
      }
    }
    if ( v46 )
      sub_140001660(v45, v46, 1);
  }
  return a1;
}