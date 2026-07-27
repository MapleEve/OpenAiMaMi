// module: codexmate_lib/platform/process
// addr: 0x14034d6c0
// name: sub_14034D6C0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned int __fastcall sub_14034D6C0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int result; // eax

  if ( *(_QWORD *)a1 )
    sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = (_QWORD *)(v2 + 16);
    do
    {
      v5 = *(v4 - 1);
      if ( v5 )
        sub_140001660(*v4, v5, 1);
      v4 += 5;
      --v3;
    }
    while ( v3 );
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
    sub_140001660(v2, 40 * v6, 8);
  sub_140321B60(a1 + 136);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 > 0 )
    sub_140001660(*(_QWORD *)(a1 + 64), v7, 1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 4) <= 0xFFFFFFFA )
  {
    CloseHandle(*(HANDLE *)(a1 + 96));
    if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 4) > 0xFFFFFFFA )
    {
LABEL_14:
      result = *(_DWORD *)(a1 + 120) - 4;
      if ( result > 0xFFFFFFFA )
        return result;
      return CloseHandle(*(HANDLE *)(a1 + 128));
    }
  }
  else if ( (unsigned int)(*(_DWORD *)(a1 + 104) - 4) > 0xFFFFFFFA )
  {
    goto LABEL_14;
  }
  CloseHandle(*(HANDLE *)(a1 + 112));
  result = *(_DWORD *)(a1 + 120) - 4;
  if ( result <= 0xFFFFFFFA )
    return CloseHandle(*(HANDLE *)(a1 + 128));
  return result;
}