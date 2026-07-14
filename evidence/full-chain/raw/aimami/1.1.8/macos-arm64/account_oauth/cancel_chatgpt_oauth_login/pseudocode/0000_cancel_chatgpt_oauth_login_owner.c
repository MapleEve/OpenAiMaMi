// mac 1.1.8 cancel_chatgpt_oauth_login node va=0x1001e9900 depth=0
// cancel_chatgpt_oauth_login_owner
_QWORD *__fastcall codexmate_lib::commands::account_oauth::cancel_chatgpt_oauth_login::h601be7664e294980(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // r14
  int v8; // eax

  if ( qword_1015B1AE0 ) /*0x1001e9918*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h852cedb77c47d30e(); /*0x1001e99b0*/
    v5 = codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13; /*0x1001e99b5*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13 ) /*0x1001e99bf*/
      goto LABEL_3; /*0x1001e99bf*/
  }
  else
  {
    v5 = codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13; /*0x1001e991e*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13 ) /*0x1001e9928*/
      goto LABEL_3; /*0x1001e9928*/
  }
  v5 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(&codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13); /*0x1001e99d1*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1001e992e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1001e993e*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, a3, a4) ^ 1; /*0x1001e99e1*/
    if ( byte_1015B1AC8 ) /*0x1001e99f8*/
      goto LABEL_7; /*0x1001e99f8*/
  }
  else
  {
    v7 = 0; /*0x1001e994a*/
    if ( byte_1015B1AC8 ) /*0x1001e9960*/
      goto LABEL_7; /*0x1001e9960*/
  }
  v8 = qword_1015B1AD0; /*0x1001e9962*/
  v5 = qword_1015B1AD8; /*0x1001e9968*/
  qword_1015B1AD0 = 0; /*0x1001e996f*/
  if ( v8 == 1 ) /*0x1001e997d*/
    tokio::sync::oneshot::Sender$LT$T$GT$::send::heafe28e776b52930(qword_1015B1AD8); /*0x1001e997f*/
LABEL_7:
  if ( !v7 /*0x1001e99ff*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, a3, a4) )
  {
    byte_1015B1AC8 = 1; /*0x1001e9a08*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d( /*0x1001e9999*/
    codexmate_lib::commands::account_oauth::OAUTH_CANCEL::hded344914467cb13,
    a2,
    v6,
    a3,
    a4);
  *a1 = 0x8000000000000000LL; /*0x1001e99a1*/
  return a1; /*0x1001e99a7*/
}