// module: codexmate_lib/core/voice/workspace
// addr: 0x1414a4730
// name: sub_1414A4730
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1414A4730(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // edi
  __int64 v6; // [rsp+24h] [rbp-Ch] BYREF
  int v7; // [rsp+2Ch] [rbp-4h]

  if ( (unsigned int)a2 >= 0xC0 )
  {
    v4 = a2;
    sub_1414A4610(&v6, a2, &off_141A42198);
    *(_DWORD *)a1 = v4;
    *(_QWORD *)(a1 + 4) = 0;
    if ( (_DWORD)v6 != -1 )
    {
      *(_DWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = v6;
    }
  }
  else
  {
    v3 = a2 | 0x20;
    if ( (unsigned int)(a2 - 65) >= 0x1A )
      v3 = a2;
    *(_DWORD *)a1 = v3;
    *(_QWORD *)(a1 + 4) = 0;
  }
  return a1;
}