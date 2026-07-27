// __ZN13codexmate_lib4core5relay16codex_diagnostic31is_valid_codex_reasoning_effort @ 0x10050e720 | 基线 same-set
char __fastcall codexmate_lib::core::relay::codex_diagnostic::is_valid_codex_reasoning_effort::ha785e284deba20f7(
        __int64 a1,
        __int64 a2)
{
  char result; // al

  switch ( a2 ) /*0x10050e740*/
  {
    case 3LL: /*0x10050e740*/
      if ( !(*(_WORD *)a1 ^ 0x6F6C | *(unsigned __int8 *)(a1 + 2) ^ 0x77) ) /*0x10050e754*/
        return 1; /*0x10050e754*/
      return (*(_WORD *)a1 ^ 0x616D | *(unsigned __int8 *)(a1 + 2) ^ 0x78) == 0; /*0x10050e76c*/
    case 4LL: /*0x10050e740*/
      result = 1; /*0x10050e7ba*/
      if ( *(_DWORD *)a1 == 1701736302 || *(_DWORD *)a1 == 1869903201 ) /*0x10050e7ca*/
        return result; /*0x10050e7ca*/
      return *(_DWORD *)a1 == 1751607656; /*0x10050e7cc*/
    case 5LL: /*0x10050e740*/
      if ( !(*(_DWORD *)a1 ^ 0x67696878 | *(unsigned __int8 *)(a1 + 4) ^ 0x68) ) /*0x10050e78f*/
        return 1; /*0x10050e7db*/
      return (*(_DWORD *)a1 ^ 0x72746C75 | *(unsigned __int8 *)(a1 + 4) ^ 0x61) == 0;
    case 6LL: /*0x10050e740*/
      return (*(_DWORD *)a1 ^ 0x6964656D | *(unsigned __int16 *)(a1 + 4) ^ 0x6D75) == 0; /*0x10050e7b8*/
    case 7LL: /*0x10050e740*/
      return (*(_DWORD *)a1 ^ 0x696E696D | *(_DWORD *)(a1 + 3) ^ 0x6C616D69) == 0; /*0x10050e77f*/
    default:
      return 0; /*0x10050e7da*/
  }
}