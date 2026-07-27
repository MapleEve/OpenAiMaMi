// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405de2e0
// name: sub_1405DE2E0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405DE2E0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 425);
  if ( !*(_BYTE *)(a1 + 425) )
  {
    sub_140017140(a1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 104) + 32LL))(
             a1 + 128,
             *(_QWORD *)(a1 + 112),
             *(_QWORD *)(a1 + 120));
  }
  if ( (_DWORD)result == 3 )
  {
    if ( *(_BYTE *)(a1 + 416) == 3 )
    {
      if ( *(_BYTE *)(a1 + 394) == 3 )
      {
        sub_1405E6830(a1 + 344);
        *(_WORD *)(a1 + 392) = 0;
        if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 272)) )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !*(_BYTE *)(a1 + 394) )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 312) + 32LL))(
          a1 + 336,
          *(_QWORD *)(a1 + 320),
          *(_QWORD *)(a1 + 328));
    }
    else if ( !*(_BYTE *)(a1 + 416) )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 280) + 32LL))(
        a1 + 304,
        *(_QWORD *)(a1 + 288),
        *(_QWORD *)(a1 + 296));
    }
    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 272)) )
    {
LABEL_13:
      *(_BYTE *)(a1 + 426) = 0;
      return sub_140017140(a1 + 144);
    }
LABEL_12:
    sub_141018B80(a1 + 272);
    goto LABEL_13;
  }
  return result;
}