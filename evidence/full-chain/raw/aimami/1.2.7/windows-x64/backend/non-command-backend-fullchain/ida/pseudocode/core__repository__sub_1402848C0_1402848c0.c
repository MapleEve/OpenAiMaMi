// win 1.2.7 | module src/core/repository.rs | ea 0x1402848c0 | name sub_1402848C0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_1402848C0(__int64 a1, double *a2)
{
  char v2; // al
  char v3; // al

  if ( *(double *)(a1 + 24) != a2[3] || *(_DWORD *)(a1 + 32) != *((_DWORD *)a2 + 8) )
    return 0;
  v2 = *((_BYTE *)a2 + 16);
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( !v2 || *(_DWORD *)(a1 + 20) != *((_DWORD *)a2 + 5) )
      return 0;
  }
  else if ( v2 )
  {
    return 0;
  }
  v3 = *(_BYTE *)a2;
  if ( *(_BYTE *)a1 )
  {
    if ( v3 )
      return *(_QWORD *)(a1 + 8) == *((_QWORD *)a2 + 1);
    return 0;
  }
  return v3 ^ 1;
}
