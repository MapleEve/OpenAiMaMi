// win 1.2.7 | module src/core/voice/workspace.rs | ea 0x1416b42c0 | name sub_1416B42C0
// win 1.2.7 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1416B42C0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // edi
  __int64 v6; // [rsp+24h] [rbp-Ch] BYREF
  int v7; // [rsp+2Ch] [rbp-4h]

  if ( (unsigned int)a2 >= 0xC0 )
  {
    v4 = a2;
    sub_1416B41A0(&v6, a2, &off_141CF4DC0);
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
