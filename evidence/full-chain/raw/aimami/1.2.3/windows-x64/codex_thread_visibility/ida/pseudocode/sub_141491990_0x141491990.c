// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x141491990
// name: sub_141491990
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_141491990(HANDLE *a1, void *a2, ULONG a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-10h]
  __int64 v7; // [rsp+28h] [rbp-8h]
  unsigned __int64 v8; // [rsp+30h] [rbp+0h] BYREF

  v3 = 0;
  v7 = sub_141475B00(*a1, a2, a3, v6);
  v8 = v4;
  if ( v7 == 1 )
  {
    switch ( v4 & 3 )
    {
      case 0uLL:
        v3 = 1;
        if ( *(_BYTE *)(v4 + 16) == 11 )
          goto LABEL_8;
        break;
      case 1uLL:
        v3 = 1;
        if ( *(_BYTE *)(v4 + 15) == 11 )
          goto LABEL_8;
        break;
      case 2uLL:
        v3 = 1;
        if ( (unsigned __int8)sub_14148C310(HIDWORD(v4)) == 11 )
          goto LABEL_8;
        break;
      case 3uLL:
        v3 = 1;
        if ( BYTE4(v4) == 11 )
        {
LABEL_8:
          sub_14146D880(&v8);
          v3 = 0;
        }
        break;
    }
  }
  return v3;
}