// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x141474ac0
// name: sub_141474AC0
// win 1.2.3 | module core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
char **__fastcall sub_141474AC0(void **a1, __int128 *a2)
{
  unsigned __int128 v2; // xmm0
  void *v3; // rcx
  char **result; // rax
  const FILETIME *v5; // rdx
  const FILETIME *v6; // r8
  const FILETIME *v7; // r9
  BOOL v8; // ecx
  __int64 v9; // rax
  unsigned __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v11[60]; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&v11[16] = *((_DWORD *)a2 + 8);
  v2 = *a2;
  *(_OWORD *)v11 = a2[1];
  v10 = v2;
  v3 = *a1;
  result = &off_141A3AEA0;
  if ( ((_DWORD)v2 != 1 || __PAIR64__((unsigned __int64)(v2 >> 32) >> 32, DWORD1(v2)))
    && (HIDWORD(v10) != 1 || *(_QWORD *)v11)
    && (*(_DWORD *)&v11[8] != 1 || *(_QWORD *)&v11[12]) )
  {
    result = &off_141A3AE68;
    if ( (((DWORD1(v2) & ((unsigned __int64)(v2 >> 32) >> 32)) == -1) & (unsigned __int8)v2) == 0
      && (((*(_DWORD *)v11 & *(_DWORD *)&v11[4]) == -1) & BYTE12(v10)) == 0
      && (((*(_DWORD *)&v11[12] & *(_DWORD *)&v11[16]) == -1) & v11[8]) == 0 )
    {
      v5 = (const FILETIME *)&v11[12];
      if ( (v11[8] & 1) == 0 )
        v5 = nullptr;
      v6 = (const FILETIME *)((char *)&v10 + 4);
      if ( (v2 & 1) == 0 )
        v6 = nullptr;
      v7 = (const FILETIME *)v11;
      if ( (BYTE12(v10) & 1) == 0 )
        v7 = nullptr;
      v8 = SetFileTime(v3, v5, v6, v7);
      result = nullptr;
      if ( !v8 )
      {
        LODWORD(v9) = GetLastError();
        return (char **)((v9 << 32) | 2);
      }
    }
  }
  return result;
}