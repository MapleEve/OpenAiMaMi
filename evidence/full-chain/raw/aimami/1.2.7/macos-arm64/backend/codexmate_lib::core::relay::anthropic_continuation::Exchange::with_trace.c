// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_continuation::Exchange::with_trace::hf6575fd794a21339; addr: 0x100877e80; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
void *__fastcall codexmate_lib::core::relay::anthropic_continuation::Exchange::with_trace::hf6575fd794a21339(
        void *__dst,
        _QWORD *__src,
        __int64 a3)
{
  volatile signed __int64 *v4; // rax

  v4 = (volatile signed __int64 *)__src[22]; /*0x100877e93*/
  if ( v4 && !_InterlockedDecrement64(v4) ) /*0x100877e9f*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h2d791ba5ef2cfc3f(__src + 22); /*0x100877eac*/
  __src[22] = a3; /*0x100877eb1*/
  memcpy(__dst, __src, 0xB8u); /*0x100877ec3*/
  return __dst; /*0x100877ecf*/
}