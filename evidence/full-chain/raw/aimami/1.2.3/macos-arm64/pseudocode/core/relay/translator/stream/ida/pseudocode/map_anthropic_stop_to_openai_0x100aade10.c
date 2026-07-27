// __ZN13codexmate_lib4core5relay10translator6stream28map_anthropic_stop_to_openai @ 0x100aade10 | 基线 same-set
char *__fastcall codexmate_lib::core::relay::translator::stream::map_anthropic_stop_to_openai::h82fcdef1cbb1ee95(
        __int64 a1,
        __int64 a2)
{
  char *result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // edx

  switch ( a2 ) /*0x100aade18*/
  {
    case 8LL: /*0x100aade18*/
      result = "stop"; /*0x100aadee6*/
      if ( *(_QWORD *)a1 == 0x6573755F6C6F6F74LL ) /*0x100aadeed*/
        return "tool_callsfinish_reasonprompt_tokenscompletion_tokensid"; /*0x100aadeed*/
      break;
    case 13LL: /*0x100aade18*/
      v3 = 0x73746F705F736571LL; /*0x100aade67*/
      v4 = _byteswap_uint64(*(_QWORD *)a1); /*0x100aade74*/
      if ( v4 != 0x73746F705F736571LL /*0x100aade92*/
        || (v3 = 0x73657175656E6365LL, v4 = _byteswap_uint64(*(_QWORD *)(a1 + 5)), v5 = 0, v4 != 0x73657175656E6365LL) )
      {
        v5 = 2 * (v4 >= v3) - 1; /*0x100aade9c*/
      }
      result = "stop"; /*0x100aadeb7*/
      if ( !v5 ) /*0x100aadebe*/
        return "content_filterlengthresponse.in_progress"; /*0x100aadebe*/
      break;
    case 10LL: /*0x100aade18*/
      result = "stop"; /*0x100aade5a*/
      if ( !(*(_QWORD *)a1 ^ 0x656B6F745F78616DLL | *(unsigned __int16 *)(a1 + 8) ^ 0x736ELL) ) /*0x100aade48*/
        return "lengthresponse.in_progress"; /*0x100aade61*/
      break;
    default:
      return "stop"; /*0x100aadef3*/
  }
  return result; /*0x100aade65*/
}