// __ZN13codexmate_lib4core4auth17current_timestamp @ 0x1008ebef0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rbx
  _BYTE v5[8]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v6; // [rsp+8h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-18h] BYREF
  int v8; // [rsp+20h] [rbp-10h]

  v7 = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x1008ebefe*/
  v8 = v2; /*0x1008ebf02*/
  v3 = 0; /*0x1008ebf05*/
  std::time::SystemTime::duration_since::had059553cab94f96(v5, &v7, 0, 0); /*0x1008ebf13*/
  if ( !v5[0] ) /*0x1008ebf1c*/
    return v6; /*0x1008ebf1e*/
  return v3; /*0x1008ebf25*/
}