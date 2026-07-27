// module: codexmate_lib/core/voice/runtime
// addr: 0x1412f1ca0
// name: sub_1412F1CA0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1412F1CA0(_BYTE *a1)
{
  char v1; // bl
  __int64 v2; // rax
  _BYTE *v3; // rsi
  int v4; // eax

  if ( *a1 == 1 )
  {
    v1 = a1[1];
    v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
    v3 = (_BYTE *)(v2 + 432);
    v4 = *(unsigned __int8 *)(v2 + 504);
    if ( v4 != 1 )
    {
      if ( v4 == 2 )
        return;
      sub_14148BBF0(v3, sub_1412F8D00);
      v3[72] = 1;
    }
    v3[68] = 1;
    v3[69] = v1;
  }
}