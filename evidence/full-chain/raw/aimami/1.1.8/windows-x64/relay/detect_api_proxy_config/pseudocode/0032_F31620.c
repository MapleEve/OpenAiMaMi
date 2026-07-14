// win 1.1.8 detect_api_proxy_config node va=0x140f31620 depth=2
// F31620
__int64 __fastcall sub_140F31620(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x140f31635*/
  sub_140F30440(*a1 + 16); /*0x140f3163d*/
  sub_140F30440(v2 + 208); /*0x140f3164e*/
  sub_140F30440(v2 + 400); /*0x140f3165f*/
  sub_140F30440(v2 + 592); /*0x140f31670*/
  sub_140F30440(v2 + 784); /*0x140f31681*/
  sub_140F30440(v2 + 976); /*0x140f31692*/
  sub_140F30440(v2 + 1168); /*0x140f316a3*/
  result = sub_140F30440(v2 + 1360); /*0x140f316b4*/
  if ( v2 != -1 ) /*0x140f316bf*/
  {
    result = v2; /*0x140f316c1*/
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x140f316c5*/
      return sub_140001370(v2, 1552, 8); /*0x140f316e0*/
  }
  return result; /*0x140f316db*/
}