// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x1404b80b0
// name: sub_1404B80B0
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404B80B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h]
  __int64 v14; // [rsp+B8h] [rbp+38h]

  v14 = -2;
  find_first_session_meta_line(&v9, a1, a2);
  if ( (_DWORD)v9 != -1 )
  {
    sub_14043E650(&v9);
LABEL_3:
    LODWORD(a4) = 0;
    return (unsigned int)a4;
  }
  if ( *((_QWORD *)&v9 + 1) == -1 )
    goto LABEL_3;
  v13 = *((_QWORD *)&v9 + 1);
  v9 = v10;
  v10 = 0;
  v12 = v9;
  v11 = v9;
  sub_1408A6200(v8, &v9);
  if ( LOBYTE(v8[0]) == 0xFF )
  {
    sub_140348CF0(v8);
    if ( v13 )
      sub_140001660(v12, v13, 1);
    goto LABEL_3;
  }
  v10 = v8[1];
  v9 = v8[0];
  v7 = sub_14142E200(&v9, aPayloadId, 11);
  if ( v7 && *(_BYTE *)v7 == 3 && *(_QWORD *)(v7 + 24) == a4 )
    LOBYTE(a4) = (unsigned int)sub_1416847B0(*(_QWORD *)(v7 + 16), a3, a4) == 0;
  else
    LODWORD(a4) = 0;
  sub_1400104F0(&v9);
  if ( v13 )
    sub_140001660(v12, v13, 1);
  return (unsigned int)a4;
}