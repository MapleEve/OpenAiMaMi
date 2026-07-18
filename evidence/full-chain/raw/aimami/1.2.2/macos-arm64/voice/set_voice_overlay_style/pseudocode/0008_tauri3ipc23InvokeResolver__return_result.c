// mac 1.2.2 NEW set_voice_overlay_style 0x100601170 d=1
volatile signed __int64 *__fastcall tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h093f7e920846df9e(
        void *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5,
        int a6)
{
  pthread_mutex_t *v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  pthread_mutex_t **v15; // rbx
  volatile signed __int64 *result; // rax
  __int64 v17; // [rsp+0h] [rbp-210h] BYREF
  __int64 v18; // [rsp+8h] [rbp-208h]
  __int64 v19; // [rsp+10h] [rbp-200h]
  __int64 v20; // [rsp+18h] [rbp-1F8h]
  __int64 v21; // [rsp+20h] [rbp-1F0h]
  _BYTE __dst[360]; // [rsp+28h] [rbp-1E8h] BYREF
  _QWORD v23[3]; // [rsp+190h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+1A8h] [rbp-68h]
  int v25; // [rsp+1ACh] [rbp-64h]
  __int64 *v26; // [rsp+1B0h] [rbp-60h]
  void *__src; // [rsp+1B8h] [rbp-58h]
  int v28; // [rsp+1C4h] [rbp-4Ch]
  __int64 v29; // [rsp+1C8h] [rbp-48h]
  volatile signed __int64 *v30; // [rsp+1D0h] [rbp-40h] BYREF
  pthread_mutex_t **v31; // [rsp+1D8h] [rbp-38h]
  int v32; // [rsp+1E4h] [rbp-2Ch]

  v26 = a3; /*0x10060118d*/
  __src = a1; /*0x100601194*/
  v30 = (volatile signed __int64 *)a2; /*0x100601198*/
  v9 = *(pthread_mutex_t **)(a2 + 16); /*0x1006011a0*/
  if ( !v9 ) /*0x1006011a7*/
    v9 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)(a2 + 16)); /*0x100601304*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v9); /*0x1006011ad*/
  if ( !(2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) ) /*0x1006011bc*/
  {
    v10 = 0; /*0x1006011c8*/
    if ( !*(_BYTE *)(a2 + 24) ) /*0x1006011ca*/
      goto LABEL_5; /*0x1006011d1*/
LABEL_14:
    v17 = a2 + 16; /*0x100601320*/
    LOBYTE(v18) = v10; /*0x100601327*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10060134e*/
      (__int64)"called `Result::unwrap()` on an `Err` value/ErrorInitScriptErrorRpcScriptErrorReceiverErrorSenderErrorMes"
               "sageSenderIoHttpErrorProxyEndpointCreationFailedWindowHandleErrorUnsupportedWindowHandleUtf8ErrorNotMainT"
               "hreadCustomProtocolTaskInvalidUrlSchemeRegisterErrorDuplicateCustomProtocolContextDuplicateCustomProtocol"
               "DataStoreInUseByteCountNotDivisibleBy4byte_countDimensionsVsPixelCountwidth_x_heightpixel_countOsErrorRun"
               "timeWindowLabelAlreadyExistsWebviewLabelAlreadyExistsCannotReparentWebviewWindowAssetNotFoundInvalidIconI"
               "nvalidArgsSetupPluginInitializationInvalidUrlJoinErrorInvalidWebviewUrlGlobPatternInvalidWindowHandleFail"
               "edToReceiveMessageBadMenuIconBadTrayIconNoExtensionNoBasenameCurrentDirUnknownPathWindowNotFoundBadResour"
               "ceIdAnyhowWebviewNotFoundUnstableFeatureNotSupportedCannotDeserializeScopeRawHandleErrorCsprngInvokeKey",
      43,
      (__int64)&v17,
      (__int64)&off_101893368,
      (__int64)&off_101893B58);
  }
  LOBYTE(v10) = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x100601311*/
  if ( *(_BYTE *)(a2 + 24) ) /*0x100601313*/
    goto LABEL_14; /*0x10060131a*/
LABEL_5:
  v28 = a6; /*0x1006011d7*/
  v32 = v10; /*0x1006011db*/
  v31 = (pthread_mutex_t **)(a2 + 16); /*0x1006011de*/
  v11 = *(_QWORD *)(a2 + 32); /*0x1006011e2*/
  v12 = *(_QWORD *)(a2 + 40); /*0x1006011e6*/
  *(_QWORD *)(a2 + 32) = 0; /*0x1006011ea*/
  if ( !v11 ) /*0x1006011f5*/
    core::option::expect_failed::ha75f8bdcbd673567("resolver consumedinvalid IPC request URL", 17, &off_101893B70); /*0x100601368*/
  v29 = v11; /*0x1006011fb*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x100601213*/
  v13 = a4[1]; /*0x100601220*/
  v23[0] = *a4; /*0x100601225*/
  v23[1] = v13; /*0x100601229*/
  v23[2] = a4[2]; /*0x100601232*/
  v14 = v26[1]; /*0x100601239*/
  v17 = *v26; /*0x10060123d*/
  v18 = v14; /*0x100601244*/
  v19 = v26[2]; /*0x10060124f*/
  v20 = v26[3]; /*0x10060125a*/
  v21 = v26[4]; /*0x100601269*/
  v24 = a5; /*0x100601270*/
  v25 = v28; /*0x100601277*/
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD *, __int64 *, _QWORD))(v12 + 24))(v11, __dst, v23, &v17, a5); /*0x10060128f*/
  if ( *(_QWORD *)(v12 + 8) ) /*0x100601293*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006012a3*/
  v15 = v31; /*0x1006012ac*/
  if ( !(_BYTE)v32 /*0x10060136f*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(a2 + 24) = 1; /*0x10060137c*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v15); /*0x1006012d2*/
  result = v30; /*0x1006012d7*/
  if ( !_InterlockedDecrement64(v30) ) /*0x1006012db*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h5d19b466b6439485(&v30); /*0x1006012e5*/
  return result; /*0x1006012ea*/
}