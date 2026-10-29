// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140da5480 | name sub_140DA5480
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DA5480(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int32 v2; // eax
  bool v3; // of
  signed __int32 v4; // eax
  int v5; // ett
  __int64 v6; // rt0
  __int64 result; // rax
  __int64 v8; // rt0
  __int64 v9; // rcx
  __int64 v10; // rsi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(v1 + 16);
  if ( v2 <= 0x3FFFFFFD )
  {
    v5 = *(_DWORD *)(v1 + 16);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 16), v2 + 1, v2);
    v3 = __OFSUB__(v5, v4);
    if ( v5 == v4 )
    {
      v6 = _InterlockedIncrement64(*(volatile signed __int64 **)(v1 + 32));
      if ( !((v6 < 0) ^ v3 | (v6 == 0)) )
        goto LABEL_4;
LABEL_7:
      BUG();
    }
  }
  sub_141937550((volatile void *)(v1 + 16));
  v8 = _InterlockedIncrement64(*(volatile signed __int64 **)(v1 + 32));
  if ( (v8 < 0) ^ v3 | (v8 == 0) )
    goto LABEL_7;
LABEL_4:
  result = *(_QWORD *)(v1 + 32);
  if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v1 + 16)) & 0xBFFFFFFF), 1) )
  {
    v9 = v1 + 16;
    v10 = result;
    sub_141937840(v9);
    return v10;
  }
  return result;
}
