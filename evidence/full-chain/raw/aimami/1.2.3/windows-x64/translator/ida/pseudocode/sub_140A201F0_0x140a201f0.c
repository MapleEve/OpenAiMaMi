// module: codexmate_lib/core/relay/translator
// addr: 0x140a201f0
// name: sub_140A201F0
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_BYTE *__fastcall sub_140A201F0(_BYTE *a1)
{
  _BYTE *result; // rax
  _BYTE *v3; // rdi
  _BYTE v4[48]; // [rsp+28h] [rbp-30h] BYREF

  result = (_BYTE *)sub_141433D50(aOutputConfig, 13, a1);
  if ( result && *result == 5 )
  {
    v3 = result;
    result = (_BYTE *)sub_1402B4580(v4, result + 8, aEffort_0, 6);
    if ( v4[0] != 0xFF )
      result = (_BYTE *)sub_1400104F0(v4);
    if ( !*((_QWORD *)v3 + 3) && *a1 == 5 )
    {
      result = (_BYTE *)sub_1402B4580(v4, a1 + 8, aOutputConfig, 13);
      if ( v4[0] != 0xFF )
        return (_BYTE *)sub_1400104F0(v4);
    }
  }
  return result;
}