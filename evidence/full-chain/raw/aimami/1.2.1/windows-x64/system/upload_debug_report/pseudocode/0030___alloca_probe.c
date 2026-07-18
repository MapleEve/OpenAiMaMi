// win 1.2.1 NEW upload_debug_report 0x1415acda0 d=2
unsigned __int64 __fastcall _alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result; /*0x1415acdb5*/
  if ( (unsigned __int64)&v3 < result ) /*0x1415acdb8*/
    v1 = nullptr; /*0x1415acdb8*/
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit; /*0x1415acdbc*/
  if ( v1 < StackLimit ) /*0x1415acdc8*/
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000; /*0x1415acdca*/
    do /*0x1415acdde*/
    {
      StackLimit -= 4096; /*0x1415acdd0*/
      *StackLimit = 0; /*0x1415acdd7*/
    }
    while ( v1 != StackLimit ); /*0x1415acdde*/
  }
  return result; /*0x1415acde9*/
}