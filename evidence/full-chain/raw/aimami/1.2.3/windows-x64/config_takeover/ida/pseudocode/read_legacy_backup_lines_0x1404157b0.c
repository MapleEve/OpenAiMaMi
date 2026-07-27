// module: codexmate_lib/core/relay/config_takeover
// addr: 0x1404157b0
// name: read_legacy_backup_lines
// win 1.2.3 | = mac codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall read_legacy_backup_lines(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  unsigned __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  __int128 v18; // [rsp+70h] [rbp-10h]
  unsigned __int128 v19; // [rsp+80h] [rbp+0h]
  __int64 v20; // [rsp+90h] [rbp+10h]
  unsigned __int64 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  __int64 v23; // [rsp+A8h] [rbp+28h]
  unsigned __int128 v24; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h]
  _QWORD v26[4]; // [rsp+D0h] [rbp+50h] BYREF

  v26[1] = -2;
  sub_141473FA0((unsigned int)&v14, a2, a3, (unsigned int)&unk_141753678, 34);
  v20 = v15;
  sub_14148D130(&v17, v15, v16);
  v4 = *((_QWORD *)&v17 + 1);
  if ( (_QWORD)v17 == -1 )
  {
    if ( (unsigned __int8)sub_1403887F0(*((_QWORD *)&v17 + 1)) )
    {
      v26[0] = v4;
      *(_QWORD *)&v24 = v26;
      *((_QWORD *)&v24 + 1) = sub_141490720;
      sub_14149C0F0(&v12, &unk_14175379B, &v24);
      *(_QWORD *)(a1 + 24) = v13;
      *(_OWORD *)(a1 + 8) = v12;
      *(_QWORD *)a1 = 10;
      result = sub_140018650(v26);
    }
    else
    {
      *(_QWORD *)&v24 = v4;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 8;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)a1 = -1;
      result = sub_140018650(&v24);
    }
    goto LABEL_15;
  }
  v22 = v17;
  v17 = __PAIR128__(v18, *((unsigned __int64 *)&v17 + 1));
  v18 = 0;
  v21 = v4;
  v19 = __PAIR128__(*((unsigned __int64 *)&v17 + 1), v4);
  sub_1408A7520(&v24, &v17);
  result = *((_QWORD *)&v24 + 1);
  if ( (_QWORD)v24 != -1 )
  {
    v6 = v25;
    *(_OWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)a1 = -1;
    v7 = v22;
    v8 = v21;
    if ( !v22 )
      goto LABEL_15;
LABEL_14:
    result = sub_140001660(v8, v7, 1);
    goto LABEL_15;
  }
  v26[0] = *((_QWORD *)&v24 + 1);
  *(_QWORD *)&v24 = v26;
  *((_QWORD *)&v24 + 1) = sub_14142D3F0;
  sub_14149C0F0(&v17, &unk_14174D84A, &v24);
  v25 = v18;
  v24 = v17;
  v9 = *(_QWORD *)v26[0];
  v10 = *(_QWORD *)v26[0] == 1;
  v23 = v26[0];
  if ( v10 )
  {
    sub_140018650(v26[0] + 8LL);
  }
  else if ( !v9 )
  {
    v11 = *(_QWORD *)(v23 + 16);
    if ( v11 )
      sub_140001660(*(_QWORD *)(v23 + 8), v11, 1);
  }
  sub_140001660(v23, 40, 8);
  *(_QWORD *)a1 = 9;
  *(_OWORD *)(a1 + 8) = v24;
  result = v25;
  *(_QWORD *)(a1 + 24) = v25;
  v7 = v22;
  v8 = v21;
  if ( v22 )
    goto LABEL_14;
LABEL_15:
  if ( v14 )
    return sub_140001660(v20, v14, 1);
  return result;
}