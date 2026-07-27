// module: codexmate_lib/core/relay/image_compat
// addr: 0x14031beb0
// name: replace_image_blocks
// win 1.2.3 | = mac codexmate_lib::core::relay::image_compat::replace_image_blocks | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall replace_image_blocks(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // rsi
  _QWORD *v5; // r13
  unsigned __int8 *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  unsigned __int8 *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 *v17; // rbx
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // r15
  _QWORD *v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]
  __int64 v25; // [rsp+50h] [rbp+0h]

  v25 = -2;
  v4 = a2;
  v5 = a1;
  if ( a2 == a3 )
    goto LABEL_13;
  while ( 1 )
  {
    v6 = v4;
    v7 = *v4;
    if ( v7 != 5 )
      break;
    v8 = sub_141433D50(aText_10, 4, v4);
    if ( v8 && *(_BYTE *)v8 == 3 )
      goto LABEL_15;
    v8 = sub_141433D50(aInputText_1, 10, v4);
    if ( v8 )
    {
      if ( *(_BYTE *)v8 == 3 )
        goto LABEL_15;
    }
    v8 = sub_141433D50(aContent_6, 7, v4);
    if ( v8 )
    {
      if ( *(_BYTE *)v8 == 3 )
        goto LABEL_15;
    }
LABEL_4:
    v4 += 32;
    if ( v6 + 32 == a3 )
      goto LABEL_13;
  }
  if ( v7 != 3 )
    goto LABEL_4;
  v8 = (__int64)v4;
LABEL_15:
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 24);
  v11 = v4 + 32;
  if ( !v9 )
  {
LABEL_13:
    *v5 = 0;
    v5[1] = 8;
    v5[2] = 0;
    return v5;
  }
  v22 = v5;
  nullsub_1(a1);
  v12 = (_QWORD *)sub_140001650(64, 8);
  if ( !v12 )
    sub_1416C2D4B(8, 64);
  v13 = v12;
  *v12 = v9;
  v12[1] = v10;
  *(_QWORD *)&v23 = 4;
  *((_QWORD *)&v23 + 1) = v12;
  v14 = 1;
LABEL_19:
  v24 = v14;
  while ( v11 != a3 )
  {
    v17 = v11;
    v11 += 32;
    v18 = *v17;
    if ( v18 == 5 )
    {
      v16 = sub_141433D50(aText_10, 4, v17);
      if ( v16 && *(_BYTE *)v16 == 3
        || (v16 = sub_141433D50(aInputText_1, 10, v17)) != 0 && *(_BYTE *)v16 == 3
        || (v16 = sub_141433D50(aContent_6, 7, v17)) != 0 && *(_BYTE *)v16 == 3 )
      {
LABEL_29:
        v19 = *(_QWORD *)(v16 + 16);
        v20 = *(_QWORD *)(v16 + 24);
        if ( !v19 )
          break;
        if ( v14 == (_QWORD)v23 )
        {
          sub_141688D30((unsigned int)&v23, v14, 1, 8, 16);
          v13 = *((_QWORD **)&v23 + 1);
        }
        v15 = 2 * v14;
        v13[v15] = v19;
        v13[v15 + 1] = v20;
        ++v14;
        goto LABEL_19;
      }
    }
    else
    {
      v16 = (__int64)v17;
      if ( v18 == 3 )
        goto LABEL_29;
    }
  }
  v5 = v22;
  v22[2] = v24;
  *(_OWORD *)v22 = v23;
  return v5;
}