// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140ef8790 | name sub_140EF8790
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EF8790(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-48h]
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int64 v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+0h]
  __int64 v22; // [rsp+88h] [rbp+8h]
  char v23; // [rsp+90h] [rbp+10h]
  __int16 v24; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A0h] [rbp+20h]

  v25 = -2;
  v16 = 0;
  v17 = a2;
  v18 = a1;
  v19 = a2;
  v20 = 0;
  v21 = a2;
  v22 = 0x2E0000002ELL;
  v23 = 1;
  v24 = 1;
  sub_1403DEFC0(v14, &v16);
  v16 = 0;
  v17 = a4;
  v18 = a3;
  v19 = a4;
  v20 = 0;
  v21 = a4;
  v22 = 0x2E0000002ELL;
  v23 = 1;
  v24 = 1;
  sub_1403DEFC0(v12, &v16);
  v6 = v14[1];
  v7 = v15;
  v8 = v12[1];
  if ( v13 < v15 )
    v7 = v13;
  LOBYTE(a3) = 1;
  if ( v7 )
  {
    v9 = 16 * v7;
    v10 = 0;
    while ( *(_QWORD *)(v6 + v10 + 8) == *(_QWORD *)(v8 + v10 + 8)
         && !(unsigned int)sub_1418F4B70(*(_QWORD *)(v6 + v10), *(_QWORD *)(v8 + v10)) )
    {
      v10 += 16;
      if ( v9 == v10 )
        goto LABEL_10;
    }
    LODWORD(a3) = 0;
  }
LABEL_10:
  if ( v12[0] )
    sub_140001660(v8, 16LL * v12[0], 8);
  if ( v14[0] )
    sub_140001660(v6, 16LL * v14[0], 8);
  return (unsigned int)a3;
}
