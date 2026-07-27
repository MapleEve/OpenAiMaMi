// __ZN13codexmate_lib4core5voice7runtime28is_supported_trigger_binding @ 0x100688d00 | 基线 same-set
bool __fastcall codexmate_lib::core::voice::runtime::is_supported_trigger_binding::h2b1d2cbff051f00d(
        __int64 a1,
        int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  bool result; // al
  __int64 v6; // rcx

  v2 = 10354688; /*0x100688d04*/
  if ( (unsigned __int64)(a1 - 64) <= 0x3A ) /*0x100688d11*/
  {
    v3 = 0x542AEBF04018001LL; /*0x100688d13*/
    if ( _bittest64(&v3, a1 - 64) ) /*0x100688d1d*/
      v2 = 1966080; /*0x100688d23*/
  }
  LODWORD(v4) = a2 & v2; /*0x100688d28*/
  if ( (_DWORD)v4 ) /*0x100688d2a*/
  {
    if ( a1 <= 999 ) /*0x100688d33*/
      result = (((unsigned __int8)(0x3F7u >> (a1 - 54)) & ((unsigned __int64)(a1 - 54) < 0xA)) == 0 /*0x100688d85*/
             || (v6 = qword_101605D48[a1 - 54], v4 = v6 | (unsigned int)v4, v4 != v6))
            && (v4 & 0x9C0000) != 0;
    else
      return 0; /*0x100688d35*/
  }
  else
  {
    result = 1; /*0x100688d43*/
    switch ( a1 ) /*0x100688d53*/
    {
      case '6': /*0x100688d53*/
      case ':': /*0x100688d53*/
      case '=': /*0x100688d53*/
      case '>': /*0x100688d53*/
      case '?': /*0x100688d53*/
      case '`': /*0x100688d53*/
      case 'a': /*0x100688d53*/
      case 'b': /*0x100688d53*/
      case 'c': /*0x100688d53*/
      case 'd': /*0x100688d53*/
      case 'e': /*0x100688d53*/
      case 'g': /*0x100688d53*/
      case 'm': /*0x100688d53*/
      case 'o': /*0x100688d53*/
      case 'v': /*0x100688d53*/
      case 'x': /*0x100688d53*/
      case 'z': /*0x100688d53*/
        return result;
      default:
        result = a1 >= 1002; /*0x100688d9a*/
        break; /*0x100688d9a*/
    }
  }
  return result; /*0x100688d37*/
}