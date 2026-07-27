// module: codexmate_lib/core/relay/managed_blocks
// addr: 0x140411d70
// name: sub_140411D70
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140411D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // [rsp+28h] [rbp-58h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char v11; // [rsp+60h] [rbp-20h]
  __int16 v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+0h]
  __int64 v16; // [rsp+88h] [rbp+8h]
  __int64 v17; // [rsp+90h] [rbp+10h]

  v17 = -2;
  *(_QWORD *)&v5 = 0;
  *((_QWORD *)&v5 + 1) = a3;
  v6 = a2;
  v7 = a3;
  v8 = 0;
  v9 = a3;
  v10 = 0x2E0000002ELL;
  v11 = 1;
  v12 = 1;
  sub_14031C180(&v13, &v5);
  v16 = v14;
  sub_1404408C0((unsigned int)&v5, v14, v15, (unsigned int)asc_14174E576, 1);
  result = v6;
  *(_QWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  if ( v13 )
    return sub_140001660(v16, 16 * v13, 8);
  return result;
}