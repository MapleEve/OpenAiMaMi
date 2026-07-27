// __ZN13codexmate_lib4core5voice10aliyun_asr20aliyun_language_hint @ 0x100337020 | 基线 same-set
char *__fastcall codexmate_lib::core::voice::aliyun_asr::aliyun_language_hint::h4f74094dc5218316(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int32 v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  char *result; // rax
  bool v9; // zf

  v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x100337024*/
  switch ( v3 ) /*0x10033702d*/
  {
    case 2LL: /*0x10033702d*/
      if ( *(_WORD *)v2 == 26746 ) /*0x100337099*/
        return (char *)&unk_1015E536A; /*0x100337099*/
      if ( *(_WORD *)v2 == 28261 ) /*0x1003370a0*/
        return "enja"; /*0x1003370a0*/
      v9 = *(_WORD *)v2 == 24938; /*0x1003370a2*/
      result = nullptr; /*0x1003370a7*/
      if ( v9 ) /*0x1003370b3*/
        return "ja"; /*0x1003370b3*/
      break;
    case 7LL: /*0x10033702d*/
      v6 = *(_DWORD *)v2 ^ 0x482D687A; /*0x100337079*/
      v7 = *(_DWORD *)(v2 + 3) ^ 0x736E6148; /*0x100337080*/
      result = nullptr; /*0x100337083*/
      if ( !(v6 | v7) ) /*0x100337085*/
        return (char *)&unk_1015E536A; /*0x10033708e*/
      break;
    case 5LL: /*0x10033702d*/
      if ( *(_DWORD *)v2 ^ 0x432D687A | *(unsigned __int8 *)(v2 + 4) ^ 0x4E ) /*0x100337049*/
      {
        if ( *(_DWORD *)v2 ^ 0x552D6E65 | *(unsigned __int8 *)(v2 + 4) ^ 0x53 ) /*0x10033705b*/
        {
          v4 = _byteswap_ulong(*(_DWORD *)v2); /*0x100337061*/
          if ( v4 == 1784753482 ) /*0x100337069*/
            v5 = *(unsigned __int8 *)(v2 + 4) - 80; /*0x10033706f*/
          else
            v5 = 2 * (v4 >= 0x6A612D4A) - 1; /*0x1003370d5*/
          result = nullptr; /*0x1003370d9*/
          if ( !v5 ) /*0x1003370e4*/
            return "ja"; /*0x1003370e4*/
          return result; /*0x1003370e4*/
        }
        return "enja"; /*0x1003370ce*/
      }
      return (char *)&unk_1015E536A; /*0x1003370c5*/
    default:
      return nullptr; /*0x1003370bc*/
  }
  return result; /*0x100337092*/
}