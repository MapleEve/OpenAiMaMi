// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405e9c00
// name: sub_1405E9C00
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1405E9C00(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  char v9; // cl
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r15
  bool v12; // dl
  unsigned __int64 v13; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r10
  __int128 *v21; // rdi
  __int64 v22; // rdx
  char v23; // [rsp+30h] [rbp-30h] BYREF
  char v24; // [rsp+31h] [rbp-2Fh]
  __int128 **v25; // [rsp+38h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int128 *v28; // [rsp+58h] [rbp-8h] BYREF
  __int64 v29[6]; // [rsp+60h] [rbp+0h] BYREF

  v29[0] = -2;
  nullsub_1(a1);
  v4 = sub_140001650(128, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v26 = 128;
  *((_QWORD *)&v26 + 1) = v4;
  v27 = 0;
  v28 = &v26;
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      *(_DWORD *)v4 = 1819047278;
      goto LABEL_13;
    case 1:
      if ( *(_BYTE *)(a2 + 1) )
      {
        *(_DWORD *)v4 = 1702195828;
LABEL_13:
        v27 = 4;
      }
      else
      {
        *(_BYTE *)(v4 + 4) = 101;
        *(_DWORD *)v4 = 1936482662;
        v27 = 5;
      }
      goto LABEL_54;
    case 2:
      result = sub_140446860(a2 + 8, &v28);
      goto LABEL_6;
    case 3:
      v7 = sub_140441880(&v28, v29, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
      if ( !v7 )
        goto LABEL_54;
      result = sub_1416BEE10(v7);
      goto LABEL_7;
    case 4:
      result = sub_140469A80(&v28, a2 + 8);
LABEL_6:
      if ( result )
        goto LABEL_7;
      goto LABEL_54;
    case 5:
      v8 = *(_QWORD *)(a2 + 24);
      *(_BYTE *)v4 = 123;
      v27 = 1;
      v9 = 1;
      if ( !v8 )
      {
        *(_BYTE *)(v4 + 1) = 125;
        v27 = 2;
        v9 = 0;
      }
      v23 = 0;
      v24 = v9;
      v25 = &v28;
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a2 + 16);
      v12 = v10 != 0;
      if ( !v10 )
        v8 = 0;
      v13 = 0;
      break;
  }
  while ( v8-- != 0 )
  {
    if ( !v12 )
      sub_1416C3040(&off_1417477D8);
    if ( v13 )
    {
      if ( v11 < *(unsigned __int16 *)(v13 + 626) )
        goto LABEL_23;
      goto LABEL_34;
    }
    if ( !v11 )
    {
      v13 = v10;
      goto LABEL_33;
    }
    v13 = v10;
    if ( (v11 & 7) == 0 )
    {
      v18 = v11;
      if ( v11 < 8 )
        goto LABEL_33;
      do
      {
LABEL_32:
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 632)
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v18 -= 8LL;
      }
      while ( v18 );
      goto LABEL_33;
    }
    v17 = 0;
    do
    {
      v13 = *(_QWORD *)(v13 + 632);
      ++v17;
    }
    while ( (v11 & 7) != v17 );
    v18 = v11 - v17;
    if ( v11 >= 8 )
      goto LABEL_32;
LABEL_33:
    v11 = 0;
    v10 = 0;
    if ( *(_WORD *)(v13 + 626) )
    {
LABEL_23:
      v15 = v13;
      v16 = v11;
      goto LABEL_36;
    }
    do
    {
LABEL_34:
      v15 = *(_QWORD *)(v13 + 352);
      if ( !v15 )
        sub_1416C3040(&off_141746158);
      ++v10;
      v16 = *(unsigned __int16 *)(v13 + 624);
      v13 = *(_QWORD *)(v13 + 352);
    }
    while ( (unsigned __int16)v16 >= *(_WORD *)(v15 + 626) );
LABEL_36:
    if ( !v10 )
    {
      v11 = v16 + 1;
      v13 = v15;
      goto LABEL_44;
    }
    v19 = v15 + 8 * v16 + 640;
    if ( (v10 & 7) != 0 )
    {
      v20 = 0;
      do
      {
        v13 = *(_QWORD *)v19;
        v19 = *(_QWORD *)v19 + 632LL;
        ++v20;
      }
      while ( (v10 & 7) != v20 );
      v5 = v10 - v20;
      if ( v10 < 8 )
        goto LABEL_42;
      do
      {
LABEL_41:
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v19 = v13 + 632;
        v5 -= 8LL;
      }
      while ( v5 );
      goto LABEL_42;
    }
    v5 = v10;
    if ( v10 >= 8 )
      goto LABEL_41;
LABEL_42:
    v11 = 0;
LABEL_44:
    result = sub_140457380(&v23, v15 + 24 * v16 + 360, v15 + 32 * v16, v5);
    v12 = 1;
    v10 = 0;
    if ( result )
    {
LABEL_7:
      a1[1] = result;
      *a1 = -1;
      if ( (_QWORD)v26 )
        return sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
      return result;
    }
  }
  if ( v23 == 1 )
    sub_1416C32A0(aInternalErrorE_124, 40, &off_14177D390);
  if ( v24 )
  {
    v21 = *v25;
    v22 = *((_QWORD *)*v25 + 2);
    if ( *(_QWORD *)*v25 == v22 )
    {
      sub_141688D30((_DWORD)v21, v22, 1, 1, 1);
      v22 = *((_QWORD *)v21 + 2);
    }
    *(_BYTE *)(*((_QWORD *)v21 + 1) + v22) = 125;
    *((_QWORD *)v21 + 2) = v22 + 1;
  }
LABEL_54:
  result = v27;
  a1[2] = v27;
  *(_OWORD *)a1 = v26;
  return result;
}