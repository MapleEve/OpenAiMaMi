// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405dd9a0
// name: sub_1405DD9A0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DD9A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // [rsp+28h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  _QWORD *v15; // [rsp+38h] [rbp-8h]
  __int64 v16; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 584);
  switch ( *(_BYTE *)(a1 + 584) )
  {
    case 0:
      v3 = *(_QWORD *)(a1 + 8);
      v15 = (_QWORD *)a1;
      v11 = *(_QWORD *)(a1 + 16);
      v13 = 0;
      while ( v11 != v13 )
      {
        ++v13;
        v4 = v3 + 232;
        sub_140018960(v3);
        v3 = v4;
      }
      if ( *v15 )
        sub_140001660(v15[1], 232LL * *v15, 8);
      sub_1400104F0(v15 + 6);
      result = (__int64)v15;
      v9 = v15[3];
      if ( v9 != -1 && v9 )
      {
        v8 = v15[4];
        v10 = 1;
        goto LABEL_19;
      }
      return result;
    case 3:
      v16 = a1;
      sub_1405DC8C0(a1 + 592);
      goto LABEL_7;
    case 4:
      v16 = a1;
      sub_1405DCF80(a1 + 592);
LABEL_7:
      if ( *(_DWORD *)(v16 + 256) != -1 )
        sub_1405AE950(v16 + 256);
      sub_1400104F0(v16 + 224);
      goto LABEL_11;
    case 5:
      v16 = a1;
      sub_1405DCF80(a1 + 592);
      sub_1400104F0(v16 + 224);
LABEL_11:
      v5 = *(_QWORD *)(v16 + 184);
      if ( v5 != -1 && v5 )
        sub_140001660(*(_QWORD *)(v16 + 192), v5, 1);
      *(_BYTE *)(v16 + 585) = 0;
      v6 = *(_QWORD *)(v16 + 144);
      v12 = *(_QWORD *)(v16 + 152);
      v14 = 0;
      while ( v12 != v14 )
      {
        ++v14;
        v7 = v6 + 232;
        sub_140018960(v6);
        v6 = v7;
      }
      result = *(_QWORD *)(v16 + 136);
      if ( result )
      {
        v8 = *(_QWORD *)(v16 + 144);
        v9 = 232 * result;
        v10 = 8;
LABEL_19:
        result = sub_140001660(v8, v9, v10);
      }
      break;
    default:
      return result;
  }
  return result;
}