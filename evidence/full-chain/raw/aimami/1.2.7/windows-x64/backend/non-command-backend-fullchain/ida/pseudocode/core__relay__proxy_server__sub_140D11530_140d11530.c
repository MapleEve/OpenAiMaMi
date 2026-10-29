// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140d11530 | name sub_140D11530
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D11530(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]

  v1 = a1;
  result = *(unsigned __int8 *)(a1 + 720);
  if ( *(_BYTE *)(a1 + 720) )
  {
    if ( (_DWORD)result != 3 )
    {
      if ( (_DWORD)result != 4 )
        return result;
      if ( *(_BYTE *)(a1 + 833) == 3 )
      {
        sub_140D1A820(*(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 808));
        *(_BYTE *)(a1 + 832) = 0;
      }
      else if ( !*(_BYTE *)(a1 + 833) )
      {
        sub_140409B40(a1 + 768);
      }
      v1 = a1;
      *(_BYTE *)(a1 + 724) = 0;
      *(_BYTE *)(a1 + 721) = 0;
    }
    v4 = *(_QWORD *)(v1 + 696);
    if ( v4 )
      sub_140001660(*(_QWORD *)(v1 + 704), v4, 1);
    sub_140409B40(v1 + 664);
    *(_BYTE *)(a1 + 722) = 0;
    v5 = *(_QWORD *)(a1 + 648);
    v9 = *(_QWORD *)(a1 + 656);
    v10 = 0;
    while ( v9 != v10 )
    {
      ++v10;
      v6 = v5 + 32;
      sub_1403880E0(v5);
      v5 = v6;
    }
    v7 = *(_QWORD *)(a1 + 640);
    if ( v7 )
      sub_140001660(*(_QWORD *)(a1 + 648), 32 * v7, 8);
    *(_BYTE *)(a1 + 723) = 0;
    sub_140402120(a1 + 504);
    v8 = *(_QWORD **)(a1 + 632);
    if ( *v8 )
      sub_140001660(v8[1], *v8, 1);
    sub_140001660(v8, 88, 8);
    return sub_140D1D140(a1 + 320);
  }
  else
  {
    sub_140D1D140(a1);
    sub_140402120(a1 + 184);
    v3 = *(_QWORD **)(a1 + 312);
    if ( *v3 )
      sub_140001660(v3[1], *v3, 1);
    return sub_140001660(v3, 88, 8);
  }
}
