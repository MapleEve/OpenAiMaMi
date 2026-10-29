// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d14680 | name sub_140D14680
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D14680(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // [rsp+28h] [rbp-18h]
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+30h] [rbp-10h]
  _QWORD *v16; // [rsp+38h] [rbp-8h]
  __int64 v17; // [rsp+38h] [rbp-8h]

  result = *(unsigned __int8 *)(a1 + 840);
  switch ( *(_BYTE *)(a1 + 840) )
  {
    case 0:
      v3 = *(_QWORD *)(a1 + 8);
      v16 = (_QWORD *)a1;
      v12 = *(_QWORD *)(a1 + 16);
      v14 = 0;
      while ( v12 != v14 )
      {
        ++v14;
        v4 = v3 + 256;
        sub_14038CFC0(v3);
        v3 = v4;
      }
      if ( *v16 )
        sub_140001660(v16[1], *v16 << 8, 8);
      sub_140409B40(v16 + 6);
      result = (__int64)v16;
      v10 = v16[3];
      if ( v10 != -1 && v10 )
      {
        v9 = v16[4];
        v11 = 1;
        goto LABEL_19;
      }
      return result;
    case 3:
      v17 = a1;
      sub_140D13150(a1 + 848);
      goto LABEL_7;
    case 4:
      v17 = a1;
      sub_140D13740(a1 + 848);
LABEL_7:
      sub_14038CFC0(v17 + 416);
      if ( *(_DWORD *)(v17 + 256) != -1 )
        sub_140402280(v17 + 256);
      sub_140409B40(v17 + 224);
      goto LABEL_11;
    case 5:
      v17 = a1;
      sub_140D13740(a1 + 848);
      sub_140409B40(v17 + 224);
LABEL_11:
      v5 = *(_QWORD *)(v17 + 184);
      if ( v5 != -1 && v5 )
        sub_140001660(*(_QWORD *)(v17 + 192), v5, 1);
      *(_BYTE *)(v17 + 841) = 0;
      v6 = *(_QWORD *)(v17 + 144);
      v13 = *(_QWORD *)(v17 + 152);
      v15 = 0;
      while ( v13 != v15 )
      {
        ++v15;
        v7 = v6 + 256;
        sub_14038CFC0(v6);
        v6 = v7;
      }
      result = v17;
      v8 = *(_QWORD *)(v17 + 136);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v17 + 144);
        v10 = v8 << 8;
        v11 = 8;
LABEL_19:
        result = sub_140001660(v9, v10, v11);
      }
      break;
    default:
      return result;
  }
  return result;
}
