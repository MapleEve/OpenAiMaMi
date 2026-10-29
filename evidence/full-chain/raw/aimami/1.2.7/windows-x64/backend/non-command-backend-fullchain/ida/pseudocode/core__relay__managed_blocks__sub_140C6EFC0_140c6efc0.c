// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140c6efc0 | name sub_140C6EFC0
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C6EFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  int v16; // r13d
  _QWORD *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h]
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+58h] [rbp-8h]
  __int64 v28; // [rsp+60h] [rbp+0h]

  v28 = -2;
  v26 = a3;
  sub_140C72050(&v20, a1, a2);
  v5 = v21;
  v6 = v22;
  if ( !v22 )
  {
    LODWORD(v8) = 0;
    goto LABEL_13;
  }
  v7 = 24 * v22;
  v8 = 0;
  v27 = v21;
  while ( 1 )
  {
    v10 = sub_140E91160(*(_QWORD *)(v5 + v8 + 8), *(_QWORD *)(v5 + v8 + 16));
    sub_140C70C30(&v23, v10, v11);
    v12 = v23;
    if ( v23 != -1 )
    {
      if ( v25 != a4 )
      {
        if ( v23 )
          sub_140001660(v24, v23, 1);
        goto LABEL_4;
      }
      v13 = v7;
      v14 = v24;
      v15 = a4;
      v16 = sub_1418F4B70(v24, v26);
      if ( v12 )
        sub_140001660(v14, v12, 1);
      v9 = v16 == 0;
      a4 = v15;
      v7 = v13;
      v5 = v27;
      if ( v9 )
        break;
    }
LABEL_4:
    v8 += 24;
    if ( v7 == v8 )
    {
      LODWORD(v8) = 0;
      goto LABEL_17;
    }
  }
  LOBYTE(v8) = 1;
LABEL_17:
  v18 = (_QWORD *)(v5 + 8);
  do
  {
    v19 = *(v18 - 1);
    if ( v19 )
      sub_140001660(*v18, v19, 1);
    v18 += 3;
    --v6;
  }
  while ( v6 );
LABEL_13:
  if ( v20 )
    sub_140001660(v5, 24 * v20, 8);
  return (unsigned int)v8;
}
