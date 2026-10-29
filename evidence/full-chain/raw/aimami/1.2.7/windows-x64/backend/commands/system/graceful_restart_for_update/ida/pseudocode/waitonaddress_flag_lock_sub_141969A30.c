// waitonaddress_flag_lock_sub_141969A30.c — 0x141969A30
// win 1.2.7 最新 exe | IDA <审计环境> | session <审计会话>
// restart flag 三态锁（0=free/1=in-progress/2=acquired）：_mm_pause 自旋(已为1时) + CAS 0→1 + WaitOnAddress(flag==2, INFINITE) 循环。
// 重启已在途时调用方阻塞等待（进程即将退出），保证重复调用不双重启。
signed __int8 __fastcall sub_141969A30(signed __int8 *Address)
{
  signed __int8 result; // al
  int v3; // ecx
  bool v4; // zf
  int v5; // ecx
  char CompareAddress[33]; // [rsp+2Fh] [rbp-1h] BYREF

  result = *Address; /*0x141969a42*/
  if ( *Address == 1 ) /*0x141969a47*/
  {
    v3 = -99; /*0x141969a49*/
    do /*0x141969a5e*/
    {
      _mm_pause(); /*0x141969a50*/
      result = *Address; /*0x141969a52*/
      if ( *Address != 1 ) /*0x141969a57*/
        break; /*0x141969a57*/
      v4 = v3++ == 0; /*0x141969a59*/
    }
    while ( !v4 ); /*0x141969a5e*/
  }
  if ( result || (result = _InterlockedCompareExchange8(Address, 1, 0)) != 0 ) /*0x141969a6c*/
  {
    while ( 1 ) /*0x141969a92*/
    {
      if ( result != 2 ) /*0x141969a92*/
      {
        result = *Address; /*0x141969a96*/
        *Address = 2; /*0x141969a96*/
        if ( !result ) /*0x141969a9a*/
          break; /*0x141969a9a*/
      }
      CompareAddress[0] = 2; /*0x141969a9c*/
      if ( !WaitOnAddress(Address, CompareAddress, 1u, 0xFFFFFFFF) ) /*0x141969ab7*/
        GetLastError(); /*0x141969ab9*/
      result = *Address; /*0x141969abc*/
      if ( *Address == 1 ) /*0x141969ac1*/
      {
        v5 = -99; /*0x141969ac3*/
        do /*0x141969ae0*/
        {
          _mm_pause(); /*0x141969ad0*/
          result = *Address; /*0x141969ad2*/
          if ( *Address != 1 ) /*0x141969ada*/
            break; /*0x141969ada*/
          v4 = v5++ == 0; /*0x141969adc*/
        }
        while ( !v4 ); /*0x141969ae0*/
      }
    }
  }
  return result; /*0x141969a6e*/
}
