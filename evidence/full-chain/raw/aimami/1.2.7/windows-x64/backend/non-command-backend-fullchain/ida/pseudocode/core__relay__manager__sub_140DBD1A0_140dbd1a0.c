// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140dbd1a0 | name sub_140DBD1A0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DBD1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+58h] [rbp-8h]
  __int64 v14; // [rsp+60h] [rbp+0h]

  v14 = -2;
  sub_1403EBE40(&v11, a2, a2 + 32 * a3);
  v4 = v12;
  v5 = v13;
  sub_140D1EE10((unsigned int)&v9, v12, v13, (unsigned int)&unk_141A4AB0B, 3);
  *(_QWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 8);
    do
    {
      v7 = *(v6 - 1);
      if ( v7 )
        sub_140001660(*v6, v7, 1);
      v6 += 3;
      --v5;
    }
    while ( v5 );
  }
  result = v11;
  if ( v11 )
    return sub_140001660(v4, 24 * v11, 8);
  return result;
}
