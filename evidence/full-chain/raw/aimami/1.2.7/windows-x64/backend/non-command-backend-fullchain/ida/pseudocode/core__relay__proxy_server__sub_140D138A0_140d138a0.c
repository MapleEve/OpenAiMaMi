// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d138a0 | name sub_140D138A0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D138A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  __int64 v14; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 744);
  switch ( *(_BYTE *)(a1 + 744) )
  {
    case 0:
      v3 = *(_QWORD *)(a1 + 48);
      v13 = a1;
      v9 = *(_QWORD *)(a1 + 56);
      v11 = 0;
      while ( v9 != v11 )
      {
        ++v11;
        v4 = v3 + 256;
        sub_14038CFC0(v3);
        v3 = v4;
      }
      v8 = *(_QWORD *)(v13 + 40);
      if ( v8 )
        sub_140001660(*(_QWORD *)(v13 + 48), v8 << 8, 8);
      return sub_140409B40(v13 + 8);
    case 3:
      v14 = a1;
      sub_140D12720(a1 + 752);
      goto LABEL_7;
    case 4:
      v14 = a1;
      sub_140D13740(a1 + 752);
LABEL_7:
      sub_14038CFC0(v14 + 320);
      if ( *(_DWORD *)(v14 + 160) != -1 )
        sub_140402280(v14 + 160);
      goto LABEL_10;
    case 5:
      v14 = a1;
      sub_140D13740(a1 + 752);
LABEL_10:
      sub_140409B40(v14 + 128);
      v5 = *(_QWORD *)(v14 + 96);
      v10 = *(_QWORD *)(v14 + 104);
      v12 = 0;
      while ( v10 != v12 )
      {
        ++v12;
        v6 = v5 + 256;
        sub_14038CFC0(v5);
        v5 = v6;
      }
      result = v14;
      v7 = *(_QWORD *)(v14 + 88);
      if ( v7 )
        result = sub_140001660(*(_QWORD *)(v14 + 96), v7 << 8, 8);
      break;
    default:
      return result;
  }
  return result;
}
