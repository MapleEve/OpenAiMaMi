// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc4c837173834897; addr: 0x100974520; session: <审计会话>; decompiled_at: 2026-10-26T03:50:07Z
void __fastcall _$LT$std..sync..mpmc..Sender$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hfc4c837173834897(
        _QWORD *a1)
{
  __int64 v1; // rbx
  char v2; // al
  signed __int64 v3; // rax
  __int64 v4; // rcx
  signed __int64 v5; // rtt
  char v6; // al
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  char v11; // al

  v1 = a1[1];
  if ( !*a1 )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v1 + 512)) )
      return;
    v3 = *(_QWORD *)(v1 + 128);
    v4 = *(_QWORD *)(v1 + 272);
    do
    {
      v5 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 128), v4 | v3, v3);
    }
    while ( v5 != v3 );
    if ( (v3 & *(_QWORD *)(v1 + 272)) != 0 )
    {
      v6 = *(_BYTE *)(v1 + 528);
      *(_BYTE *)(v1 + 528) = 1;
      if ( !v6 )
        return;
    }
    else
    {
      std::sync::mpmc::waker::SyncWaker::disconnect::h2fb0539aab41377f(v1 + 352);
      v11 = *(_BYTE *)(v1 + 528);
      *(_BYTE *)(v1 + 528) = 1;
      if ( !v11 )
        return;
    }
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$core..option..Option$LT$tao..monitor..MonitorHandle$GT$$GT$$GT$$GT$$GT$::h49f77db6437fbe2d(v1);
    return;
  }
  if ( (unsigned int)*a1 == 1 )
  {
    if ( _InterlockedDecrement64((volatile signed __int64 *)(v1 + 384)) )
      return;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 128), 0) )
    {
      v2 = *(_BYTE *)(v1 + 400);
      *(_BYTE *)(v1 + 400) = 1;
      if ( !v2 )
        return;
    }
    else
    {
      std::sync::mpmc::waker::SyncWaker::disconnect::h2fb0539aab41377f(v1 + 256);
      v10 = *(_BYTE *)(v1 + 400);
      *(_BYTE *)(v1 + 400) = 1;
      if ( !v10 )
        return;
    }
    core::ptr::drop_in_place$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..list..Channel$LT$core..option..Option$LT$tao..monitor..MonitorHandle$GT$$GT$$GT$$GT$::hb430c9726620009c(v1);
    v8 = 512;
    v9 = 128;
LABEL_18:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v8, v9);
    return;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v1) )
  {
    std::sync::mpmc::zero::Channel$LT$T$GT$::disconnect::hfb6c6a930a406647(v1 + 16);
    v7 = *(_BYTE *)(v1 + 136);
    *(_BYTE *)(v1 + 136) = 1;
    if ( v7 )
    {
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..Mutex$LT$std..sync..mpmc..zero..Inner$GT$$GT$::h7cc0a4a62f14b8e6(v1 + 16);
      v8 = 144;
      v9 = 8;
      goto LABEL_18;
    }
  }
}