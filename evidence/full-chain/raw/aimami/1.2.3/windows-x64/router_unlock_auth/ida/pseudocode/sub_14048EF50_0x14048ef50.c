// module: codexmate_lib/core/relay/router_unlock_auth
// addr: 0x14048ef50
// name: sub_14048EF50
// win 1.2.1 | module src/core/relay/router_unlock_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14048EF50(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 *v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  _QWORD *v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]

  v17 = -2;
  nullsub_1(a1);
  v4 = sub_140001650(128, 1);
  if ( !v4 )
    sub_1416C2D4B(1, 128);
  v12 = 128;
  v13 = (_QWORD *)v4;
  v14 = 0;
  v11 = &v12;
  sub_140444020(a2, &v11);
  v5 = (__int64)v13;
  if ( v12 == -1 )
  {
    v7 = *v13;
    v8 = *v13 == 1;
    v16 = v13;
    if ( v8 )
    {
      sub_140018650(v13 + 1);
    }
    else if ( !v7 )
    {
      v9 = v16[2];
      if ( v9 )
        sub_140001660(v16[1], v9, 1);
    }
    sub_140001660(v16, 40, 8);
    v5 = 1;
    v15 = 0;
    v6 = 0;
  }
  else
  {
    v15 = v12;
    v6 = v14;
  }
  v16 = (_QWORD *)v5;
  result = sub_140443D50(a1, "", v5, v6);
  if ( v15 )
    return sub_140001660(v16, v15, 1);
  return result;
}