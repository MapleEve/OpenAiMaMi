// module: codexmate_lib/core/relay/codex_catalog
// addr: 0x140a4a270
// name: write_catalog
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_catalog::write_catalog | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall write_catalog(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rax
  __int128 v12; // kr00_16
  __int128 v13; // kr10_16
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 v20; // xmm0
  __int128 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+70h] [rbp-10h]
  __int128 v26; // [rsp+80h] [rbp+0h]
  __int128 v27; // [rsp+90h] [rbp+10h]
  __int128 v28; // [rsp+A0h] [rbp+20h]
  __int128 v29; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h]
  __int64 v31; // [rsp+C8h] [rbp+48h]
  __int64 v32; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int128 v33; // [rsp+D8h] [rbp+58h]
  __int64 v34; // [rsp+E8h] [rbp+68h]

  v34 = -2;
  v11 = sub_140712590(a2);
  if ( v11 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v11;
    return a1;
  }
  build_catalog_bytes((__int64)&v23, a2, a3, a4, a5, a6, a7);
  v12 = v23;
  v13 = v24;
  if ( (_QWORD)v23 != -1 )
  {
    v14 = v25;
    v15 = v26;
    v16 = v27;
    *(_OWORD *)(a1 + 80) = v28;
    *(_OWORD *)(a1 + 64) = v16;
    *(_OWORD *)(a1 + 48) = v15;
    *(_OWORD *)(a1 + 32) = v14;
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v12 + 1);
    *(_OWORD *)(a1 + 16) = v13;
    *(_QWORD *)a1 = v12;
    return a1;
  }
  v33 = __PAIR128__(*((unsigned __int64 *)&v23 + 1), v24);
  sub_141473FA0((unsigned int)&v23, *(_QWORD *)(a2 + 776), *(_QWORD *)(a2 + 784), (unsigned int)&unk_1417A8AF0, 25);
  v31 = *((_QWORD *)&v23 + 1);
  v17 = sub_1408726C0(*((__int64 *)&v23 + 1), v24, v33, *((unsigned __int64 *)&v13 + 1));
  if ( !v17 )
  {
    v20 = v23;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)a1 = -1;
    v18 = *((_QWORD *)&v33 + 1);
    if ( !*((_QWORD *)&v33 + 1) )
      return a1;
    goto LABEL_9;
  }
  v32 = v17;
  *(_QWORD *)&v29 = &v32;
  *((_QWORD *)&v29 + 1) = sub_141490720;
  sub_14149C0F0(&v21, &unk_1417A5031, &v29);
  v29 = v21;
  v30 = v22;
  sub_140018650(&v32);
  *(_QWORD *)(a1 + 24) = v30;
  *(_OWORD *)(a1 + 8) = v29;
  *(_QWORD *)a1 = 10;
  if ( (_QWORD)v23 )
    sub_140001660(v31, v23, 1);
  v18 = *((_QWORD *)&v33 + 1);
  if ( *((_QWORD *)&v33 + 1) )
LABEL_9:
    sub_140001660(v33, v18, 1);
  return a1;
}