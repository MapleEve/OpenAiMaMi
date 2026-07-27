// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dd0e0
// name: sub_1405DD0E0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DD0E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+38h] [rbp-8h]
  __int64 v13; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 488);
  switch ( *(_BYTE *)(a1 + 488) )
  {
    case 0:
      v3 = *(_QWORD *)(a1 + 48);
      v12 = a1;
      v8 = *(_QWORD *)(a1 + 56);
      v10 = 0;
      while ( v8 != v10 )
      {
        ++v10;
        v4 = v3 + 232;
        sub_140018960(v3);
        v3 = v4;
      }
      v7 = *(_QWORD *)(v12 + 40);
      if ( v7 )
        sub_140001660(*(_QWORD *)(v12 + 48), 232 * v7, 8);
      return sub_1400104F0(v12 + 8);
    case 3:
      v13 = a1;
      sub_1405DBD60(a1 + 496);
      goto LABEL_7;
    case 4:
      v13 = a1;
      sub_1405DCF80(a1 + 496);
LABEL_7:
      if ( *(_DWORD *)(v13 + 160) != -1 )
        sub_1405AE950(v13 + 160);
      goto LABEL_10;
    case 5:
      v13 = a1;
      sub_1405DCF80(a1 + 496);
LABEL_10:
      sub_1400104F0(v13 + 128);
      v5 = *(_QWORD *)(v13 + 96);
      v9 = *(_QWORD *)(v13 + 104);
      v11 = 0;
      while ( v9 != v11 )
      {
        ++v11;
        v6 = v5 + 232;
        sub_140018960(v5);
        v5 = v6;
      }
      result = *(_QWORD *)(v13 + 88);
      if ( result )
        result = sub_140001660(*(_QWORD *)(v13 + 96), 232 * result, 8);
      break;
    default:
      return result;
  }
  return result;
}