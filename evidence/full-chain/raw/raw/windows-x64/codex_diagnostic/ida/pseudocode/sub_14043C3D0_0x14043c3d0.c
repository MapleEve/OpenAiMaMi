// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14043c3d0
// name: sub_14043C3D0
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_14043C3D0(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 1216);
  if ( v1 )
  {
    if ( (_DWORD)v1 == 2 )
      goto LABEL_6;
    sub_1414908A0((HANDLE *)(a1 + 1224));
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1232)) )
    sub_140F8A980(a1 + 1232);
LABEL_6:
  result = (volatile signed __int64 *)a1;
  if ( *(_QWORD *)a1 )
  {
    result = *(volatile signed __int64 **)(a1 + 8);
    if ( result )
    {
      if ( !_InterlockedDecrement64(result) )
        result = (volatile signed __int64 *)sub_140F8A980(a1 + 8);
    }
  }
  if ( *(_QWORD *)(a1 + 608) )
  {
    result = *(volatile signed __int64 **)(a1 + 616);
    if ( result )
    {
      if ( !_InterlockedDecrement64(result) )
        return (volatile signed __int64 *)sub_140F8A980(a1 + 616);
    }
  }
  return result;
}