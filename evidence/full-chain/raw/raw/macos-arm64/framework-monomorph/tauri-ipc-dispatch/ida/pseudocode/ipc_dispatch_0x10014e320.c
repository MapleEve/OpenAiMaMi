/* addr=0x10014e320 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=73 brace_balanced=True truncation_markers=[]
 */
bool __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h385ef52e5aaac561(
        char *__src,
        __int64 a2)
{
  __int64 v2; // r12
  char v3; // cl
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 __dst[45]; // [rsp+8h] [rbp-1E8h] BYREF
  _QWORD v8[5]; // [rsp+170h] [rbp-80h] BYREF
  _QWORD v9[3]; // [rsp+198h] [rbp-58h] BYREF
  __int64 v10; // [rsp+1B0h] [rbp-40h]
  __int64 v11; // [rsp+1B8h] [rbp-38h]
  __int64 v12; // [rsp+1C0h] [rbp-30h]
  __int64 v13; // [rsp+1C8h] [rbp-28h]

  switch ( __src[5264] )
  {
    case 0:
      *(_WORD *)(__src + 5265) = 257;
      __src[5267] = 1;
      memcpy(__src + 2824, __src + 392, 0x980u);
      break;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      break;
  }
  codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h440340148908fd07(
    __dst,
    (__int64)(__src + 2824),
    a2);
  v2 = __dst[0];
  if ( __dst[0] == 2 )
  {
    v3 = 3;
  }
  else
  {
    v13 = __dst[4];
    v12 = __dst[3];
    v11 = __dst[2];
    v10 = __dst[1];
    core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1cf6d6c3663a8f4d((__int64)(__src + 2824));
    v8[4] = v13;
    v8[3] = v12;
    v8[2] = v11;
    v8[1] = v10;
    v8[0] = v2;
    __src[5267] = 0;
    memcpy(__dst, __src, sizeof(__dst));
    __src[5266] = 0;
    v4 = *((_QWORD *)__src + 48);
    __src[5265] = 0;
    v9[2] = *((_QWORD *)__src + 47);
    v5 = *((_QWORD *)__src + 45);
    v9[1] = *((_QWORD *)__src + 46);
    v9[0] = v5;
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
      __dst,
      v4,
      v8,
      v9,
      *((unsigned int *)__src + 1314),
      *((unsigned int *)__src + 1315));
    v3 = 1;
  }
  __src[5264] = v3;
  return (_DWORD)v2 == 2;
}
