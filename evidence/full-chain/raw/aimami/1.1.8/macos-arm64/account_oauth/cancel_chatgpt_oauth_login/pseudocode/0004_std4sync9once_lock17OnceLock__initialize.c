// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x1010fb74c depth=1
// std4sync9once_lock17OnceLock::initialize
__int64 __fastcall std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h852cedb77c47d30e(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // [rsp-28h] [rbp-28h] BYREF
  __int64 *v8; // [rsp-18h] [rbp-18h] BYREF
  char v9; // [rsp-9h] [rbp-9h] BYREF

  result = qword_1015B1AE0; /*0x1010fb74c*/
  if ( qword_1015B1AE0 ) /*0x1010fb756*/
  {
    v8 = &v7; /*0x1010fb77b*/
    return ((__int64 (__fastcall *)(__int64 *, __int64, __int64 **, void *, char **, __int64, __int64 *, char *))std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c)( /*0x1010fb796*/
             &qword_1015B1AE0,
             1,
             &v8,
             &anon_fdfbeb4f975d8e02b9c40da81dc33589_345,
             &anon_fdfbeb4f975d8e02b9c40da81dc33589_338,
             a6,
             &codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13,
             &v9);
  }
  return result; /*0x1010fb758*/
}