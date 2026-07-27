// module: codexmate_lib/platform/process
// addr: 0x140348e70
// name: sub_140348E70
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140348E70(__int64 *a1)
{
  __int64 v2; // rbx
  int result; // eax
  void *v4; // rdi

  v2 = *a1;
  if ( *a1 == 2 )
    return sub_140018650(a1 + 1);
  v4 = (void *)a1[7];
  CloseHandle((HANDLE)a1[6]);
  result = CloseHandle(v4);
  if ( v2 )
    result = CloseHandle((HANDLE)a1[1]);
  if ( a1[2] )
    result = CloseHandle((HANDLE)a1[3]);
  if ( a1[4] )
    return CloseHandle((HANDLE)a1[5]);
  return result;
}