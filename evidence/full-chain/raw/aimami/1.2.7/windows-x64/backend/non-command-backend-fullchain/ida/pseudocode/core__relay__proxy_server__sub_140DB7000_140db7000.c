// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140db7000 | name sub_140DB7000
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DB7000(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int64 v5; // rbx
  char v7; // [rsp+27h] [rbp-91h] BYREF
  __int64 v8; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v10[15]; // [rsp+40h] [rbp-78h] BYREF

  v4 = (_BYTE *)sub_1416419F0(aStore, 5, a2);
  if ( v4 && *v4 == 1 && !v4[1] )
    v5 = sub_140272C60(a2);
  else
    v5 = 0;
  v8 = sub_140272630(a2);
  if ( v8 && *(_QWORD *)off_1421E6EC0 >= 3u )
  {
    v9[0] = &v8;
    v9[1] = sub_1416BCB10;
    v10[6] = 3;
    v10[7] = aCodexmateLibCo_8;
    v10[8] = 40;
    v10[10] = &unk_141A4DF2E;
    v10[11] = v9;
    v10[0] = 0;
    v10[1] = aCodexmateLibCo_8;
    v10[2] = 40;
    v10[3] = 0;
    v10[4] = aSrcCoreRelayPr_0;
    v10[5] = 30;
    v10[9] = 0xA9500000001LL;
    sub_1414D53A0(&v7, v10);
  }
  if ( (unsigned __int8)sub_140C75300(a1, *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), *(unsigned __int8 *)(a1 + 254)) )
    sub_140C757A0(a2);
  return v5;
}
