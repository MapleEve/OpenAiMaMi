// win 1.2.7 | module src/core/repository.rs | ea 0x140194f00 | name sub_140194F00
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140194F00(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
    result = sub_140001660(*(_QWORD *)(a1 + 152), v2, 1);
  if ( *(_DWORD *)(a1 + 96) != 2 )
  {
    v4 = *(_QWORD *)(a1 + 112);
    if ( v4 != -1 )
    {
      if ( v4 )
        return sub_140001660(*(_QWORD *)(a1 + 120), v4, 1);
    }
  }
  return result;
}
