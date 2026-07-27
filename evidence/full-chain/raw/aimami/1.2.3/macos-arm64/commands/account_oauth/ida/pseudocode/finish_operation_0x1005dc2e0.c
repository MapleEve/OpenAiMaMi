// __ZN13codexmate_lib8commands13account_oauth16finish_operation @ 0x1005dc2e0
__int64 __fastcall codexmate_lib::commands::account_oauth::finish_operation::h46eb88193c04da46(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // r14

  if ( qword_1019FECC8 ) /*0x1005dc2f8*/
  {
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h5ccbe8a0da919cd8(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc3d3*/
    v3 = (__int64 *)codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc3d8*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc3e2*/
      goto LABEL_3; /*0x1005dc3e2*/
  }
  else
  {
    v3 = (__int64 *)codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454; /*0x1005dc2fe*/
    if ( codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454 ) /*0x1005dc308*/
      goto LABEL_3; /*0x1005dc308*/
  }
  v3 = (__int64 *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(&codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc3f4*/
LABEL_3:
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x1005dc30e*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1005dc31d*/
  {
    v6 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) ^ 1; /*0x1005dc403*/
    if ( byte_1019FECA0 ) /*0x1005dc419*/
      goto LABEL_15; /*0x1005dc419*/
  }
  else
  {
    v6 = 0; /*0x1005dc329*/
    if ( byte_1019FECA0 ) /*0x1005dc33e*/
      goto LABEL_15; /*0x1005dc33e*/
  }
  if ( qword_1019FECA8 != 2 && qword_1019FECB8 == a1 ) /*0x1005dc354*/
  {
    if ( qword_1019FECA8 ) /*0x1005dc359*/
    {
      v7 = qword_1019FECB0; /*0x1005dc35b*/
      if ( qword_1019FECB0 ) /*0x1005dc365*/
      {
        v3 = (__int64 *)(qword_1019FECB0 + 48); /*0x1005dc367*/
        if ( (tokio::sync::oneshot::State::set_complete::h59099fb12c33618f(qword_1019FECB0 + 48) & 5) == 1 ) /*0x1005dc376*/
        {
          v3 = *(__int64 **)(v7 + 40); /*0x1005dc37c*/
          (*(void (__fastcall **)(__int64 *))(*(_QWORD *)(v7 + 32) + 16LL))(v3); /*0x1005dc380*/
        }
        if ( qword_1019FECB0 && !_InterlockedDecrement64((volatile signed __int64 *)qword_1019FECB0) ) /*0x1005dc38f*/
        {
          v3 = &qword_1019FECB0; /*0x1005dc395*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h0c4e0b817f20a841(&qword_1019FECB0); /*0x1005dc39c*/
        }
      }
    }
    qword_1019FECA8 = 2; /*0x1005dc3a1*/
  }
LABEL_15:
  if ( !v6 /*0x1005dc420*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v3, a2, v4, v5) )
  {
    byte_1019FECA0 = 1; /*0x1005dc429*/
  }
  return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(codexmate_lib::commands::account_oauth::OAUTH_OPERATION::ha9329add9e027454); /*0x1005dc3bf*/
}