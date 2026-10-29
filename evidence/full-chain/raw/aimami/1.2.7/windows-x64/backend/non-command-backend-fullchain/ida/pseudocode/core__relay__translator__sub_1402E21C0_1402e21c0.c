// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e21c0 | name sub_1402E21C0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402E21C0(__int64 a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+28h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp-8h]
  __int64 v10; // [rsp+60h] [rbp+0h]

  v10 = -2;
  result = *a2;
  if ( (_DWORD)result == 3 )
    return sub_1416AC440(a1, a2 + 8);
  if ( (_DWORD)result == 4 )
  {
    sub_1403DFDA0(&v6, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 2) + 32LL * *((_QWORD *)a2 + 3));
    v9 = v7;
    sub_140D1F3D0((unsigned int)&v4, v7, v8, (unsigned int)&unk_1419E808A, 1);
    result = v5;
    *(_QWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    if ( v6 )
      return sub_140001660(v9, 16 * v6, 8);
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return result;
}
