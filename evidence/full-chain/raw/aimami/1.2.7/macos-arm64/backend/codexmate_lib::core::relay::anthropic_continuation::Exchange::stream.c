// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_continuation::Exchange::stream::h22442c5fe7648e69; addr: 0x100878900; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:38Z
void *__fastcall codexmate_lib::core::relay::anthropic_continuation::Exchange::stream::h22442c5fe7648e69(
        _QWORD *__src,
        void *a2,
        const void *a3,
        size_t a4,
        _QWORD *a5,
        _QWORD *a6)
{
  volatile signed __int64 *v6; // rax
  __int64 v7; // r12
  volatile signed __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rax
  void *v16; // rax
  void *v17; // rbx
  _BYTE v19[968]; // [rsp+8h] [rbp-1008h] BYREF
  _BYTE __dst[784]; // [rsp+3D0h] [rbp-C40h] BYREF
  _QWORD __srca[294]; // [rsp+6E0h] [rbp-930h] BYREF

  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::with_tool_maps::hfb91061ccf0df0c4( /*0x10087892b*/
    (__int64)__srca,
    a3,
    a4,
    a5,
    a6);
  v6 = (volatile signed __int64 *)__src[22]; /*0x100878930*/
  if ( v6 ) /*0x10087893a*/
  {
    if ( _InterlockedIncrement64(v6) <= 0 ) /*0x100878940*/
      goto LABEL_17; /*0x100878940*/
    v7 = __src[22]; /*0x100878946*/
    v8 = (volatile signed __int64 *)__srca[79]; /*0x10087894d*/
    if ( !__srca[79] ) /*0x100878957*/
      goto LABEL_8; /*0x100878957*/
  }
  else
  {
    v7 = 0; /*0x10087895b*/
    v8 = (volatile signed __int64 *)__srca[79]; /*0x10087895e*/
    if ( !__srca[79] ) /*0x100878968*/
      goto LABEL_8; /*0x100878968*/
  }
  if ( !_InterlockedDecrement64(v8) ) /*0x10087896a*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h2d791ba5ef2cfc3f(&__srca[79]); /*0x100878977*/
LABEL_8:
  __srca[79] = v7; /*0x10087897c*/
  memcpy(__dst, __srca, sizeof(__dst)); /*0x100878999*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::enable_server_continuation::ha88826dd809fd764( /*0x1008789a8*/
    (__int64)__dst,
    (__int64)(__src + 15));
  memcpy(__srca, a2, 0x88u); /*0x1008789bf*/
  v9 = reqwest::async_impl::response::Response::bytes_stream::h4afb02b64d51c5f9(__srca); /*0x1008789ca*/
  v11 = (volatile signed __int64 *)__src[22]; /*0x1008789cf*/
  if ( v11 ) /*0x1008789d9*/
  {
    if ( _InterlockedIncrement64(v11) > 0 ) /*0x1008789df*/
    {
      v12 = __src[22]; /*0x1008789e5*/
      goto LABEL_12; /*0x1008789ec*/
    }
LABEL_17:
    BUG(); /*0x100878b62*/
  }
  v12 = 0; /*0x1008789ee*/
LABEL_12:
  __srca[0] = v9; /*0x1008789f0*/
  __srca[1] = v10; /*0x1008789f7*/
  __srca[2] = v12; /*0x1008789fe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca); /*0x100878a05*/
  v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x100878a14*/
  if ( !v13 ) /*0x100878a1c*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100878b4c*/
  v14 = (_QWORD *)v13; /*0x100878a22*/
  *(_QWORD *)(v13 + 16) = __srca[2]; /*0x100878a2c*/
  v15 = __srca[0]; /*0x100878a30*/
  v14[1] = __srca[1]; /*0x100878a3e*/
  *v14 = v15; /*0x100878a42*/
  memcpy(&v19[784], __src, 0xB8u); /*0x100878a54*/
  memcpy(v19, __dst, 0x310u); /*0x100878a6f*/
  __srca[0] = 0; /*0x100878a74*/
  memcpy(&__srca[1], v19, 0x3C8u); /*0x100878a8e*/
  __srca[122] = 0; /*0x100878a93*/
  __srca[123] = 1; /*0x100878a9e*/
  __srca[124] = 0; /*0x100878aa9*/
  __srca[125] = &off_101C02EB8; /*0x100878abb*/
  __srca[126] = 1; /*0x100878ac2*/
  __srca[127] = 0; /*0x100878acd*/
  __srca[128] = 0; /*0x100878ad8*/
  __srca[129] = v14; /*0x100878ae3*/
  __srca[130] = &off_101C01C30; /*0x100878af1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__srca[1]); /*0x100878af8*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2320, 8); /*0x100878b07*/
  if ( !v16 ) /*0x100878b0f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 2320); /*0x100878b5d*/
  v17 = v16; /*0x100878b20*/
  memcpy(v16, __srca, 0x910u); /*0x100878b23*/
  return v17; /*0x100878b32*/
}