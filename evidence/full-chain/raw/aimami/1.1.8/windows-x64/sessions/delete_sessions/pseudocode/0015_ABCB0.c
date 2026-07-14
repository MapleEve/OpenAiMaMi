// win 1.1.8 delete_sessions node va=0x1412abcb0 depth=2
// ABCB0
signed __int8 __fastcall sub_1412ABCB0(signed __int8 *Address)
{
  signed __int8 result; // al
  int v3; // ecx
  bool v4; // zf
  int v5; // ecx
  char CompareAddress[33]; // [rsp+2Fh] [rbp-1h] BYREF

  result = *Address; /*0x1412abcc2*/
  if ( *Address == 1 ) /*0x1412abcc7*/
  {
    v3 = -99; /*0x1412abcc9*/
    do /*0x1412abcde*/
    {
      _mm_pause(); /*0x1412abcd0*/
      result = *Address; /*0x1412abcd2*/
      if ( *Address != 1 ) /*0x1412abcd7*/
        break; /*0x1412abcd7*/
      v4 = v3++ == 0; /*0x1412abcd9*/
    }
    while ( !v4 ); /*0x1412abcde*/
  }
  if ( result || (result = _InterlockedCompareExchange8(Address, 1, 0)) != 0 ) /*0x1412abcec*/
  {
    while ( 1 ) /*0x1412abd12*/
    {
      if ( result != 2 ) /*0x1412abd12*/
      {
        result = *Address; /*0x1412abd16*/
        *Address = 2; /*0x1412abd16*/
        if ( !result ) /*0x1412abd1a*/
          break; /*0x1412abd1a*/
      }
      CompareAddress[0] = 2; /*0x1412abd1c*/
      if ( !WaitOnAddress(Address, CompareAddress, 1u, 0xFFFFFFFF) ) /*0x1412abd37*/
        GetLastError(); /*0x1412abd39*/
      result = *Address; /*0x1412abd3c*/
      if ( *Address == 1 ) /*0x1412abd41*/
      {
        v5 = -99; /*0x1412abd43*/
        do /*0x1412abd60*/
        {
          _mm_pause(); /*0x1412abd50*/
          result = *Address; /*0x1412abd52*/
          if ( *Address != 1 ) /*0x1412abd5a*/
            break; /*0x1412abd5a*/
          v4 = v5++ == 0; /*0x1412abd5c*/
        }
        while ( !v4 ); /*0x1412abd60*/
      }
    }
  }
  return result; /*0x1412abcee*/
}