// win 1.2.7 | module src/platform/process.rs | ea 0x140e95780 | name sub_140E95780
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140E95780(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  void *v4; // rdi
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a1;
  if ( *a1 == 2 )
  {
    v3 = a1[1];
    if ( (unsigned int)(v3 & 3) - 2 >= 2 && (v3 & 3) != 0 )
    {
      v6[0] = v3 - 1;
      LODWORD(v3) = sub_1416BCB00(v6);
    }
  }
  else
  {
    v4 = (void *)a1[7];
    CloseHandle((HANDLE)a1[6]);
    LODWORD(v3) = CloseHandle(v4);
    if ( v2 )
      LODWORD(v3) = CloseHandle((HANDLE)a1[1]);
    if ( a1[2] )
      LODWORD(v3) = CloseHandle((HANDLE)a1[3]);
    if ( a1[4] )
      LODWORD(v3) = CloseHandle((HANDLE)a1[5]);
  }
  return v3;
}
