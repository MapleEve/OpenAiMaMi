// win 1.2.1 NEW upload_debug_report 0x1415ef110 d=2
signed __int8 __fastcall sub_1415EF110(signed __int8 *Address)
{
  signed __int8 result; // al
  int v3; // ecx
  bool v4; // zf
  int v5; // ecx
  char CompareAddress[33]; // [rsp+2Fh] [rbp-1h] BYREF

  result = *Address; /*0x1415ef122*/
  if ( *Address == 1 ) /*0x1415ef127*/
  {
    v3 = -99; /*0x1415ef129*/
    do /*0x1415ef13e*/
    {
      _mm_pause(); /*0x1415ef130*/
      result = *Address; /*0x1415ef132*/
      if ( *Address != 1 ) /*0x1415ef137*/
        break; /*0x1415ef137*/
      v4 = v3++ == 0; /*0x1415ef139*/
    }
    while ( !v4 ); /*0x1415ef13e*/
  }
  if ( result || (result = _InterlockedCompareExchange8(Address, 1, 0)) != 0 ) /*0x1415ef14c*/
  {
    while ( 1 ) /*0x1415ef172*/
    {
      if ( result != 2 ) /*0x1415ef172*/
      {
        result = *Address; /*0x1415ef176*/
        *Address = 2; /*0x1415ef176*/
        if ( !result ) /*0x1415ef17a*/
          break; /*0x1415ef17a*/
      }
      CompareAddress[0] = 2; /*0x1415ef17c*/
      if ( !WaitOnAddress(Address, CompareAddress, 1u, 0xFFFFFFFF) ) /*0x1415ef197*/
        GetLastError(); /*0x1415ef199*/
      result = *Address; /*0x1415ef19c*/
      if ( *Address == 1 ) /*0x1415ef1a1*/
      {
        v5 = -99; /*0x1415ef1a3*/
        do /*0x1415ef1c0*/
        {
          _mm_pause(); /*0x1415ef1b0*/
          result = *Address; /*0x1415ef1b2*/
          if ( *Address != 1 ) /*0x1415ef1ba*/
            break; /*0x1415ef1ba*/
          v4 = v5++ == 0; /*0x1415ef1bc*/
        }
        while ( !v4 ); /*0x1415ef1c0*/
      }
    }
  }
  return result; /*0x1415ef14e*/
}