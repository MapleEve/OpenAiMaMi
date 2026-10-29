// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140dbcea0 | name sub_140DBCEA0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DBCEA0(_QWORD *a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+28h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-38h]
  _QWORD v6[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+0h]

  v9 = -2;
  if ( *(_QWORD *)a2 == -1 )
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
  }
  else
  {
    v8 = *((_QWORD *)a2 + 2);
    v7 = *a2;
    v6[0] = &v7;
    v6[1] = sub_1400015F0;
    sub_1416ABFD0(&v4, &unk_141A47B74, v6);
    if ( (_QWORD)v7 )
      sub_140001660(*((_QWORD *)&v7 + 1), v7, 1);
    result = v5;
    a1[2] = v5;
    *(_OWORD *)a1 = v4;
  }
  return result;
}
