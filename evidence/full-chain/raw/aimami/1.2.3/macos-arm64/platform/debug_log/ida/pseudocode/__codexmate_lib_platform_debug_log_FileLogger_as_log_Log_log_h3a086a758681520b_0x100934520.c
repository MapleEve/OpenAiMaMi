// 1.2.3 census-gap-fill (real_body,on_disk=false) | _<codexmate_lib::platform::debug_log::FileLogger as log::Log>::log::h3a086a758681520b @ 0x100934520 | full-body via py_exec_file(ida_hexrays.decompile direct write)
double __fastcall _$LT$codexmate_lib..platform..debug_log..FileLogger$u20$as$u20$log..Log$GT$::log::h3a086a758681520b(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  double result; // xmm0_8
  _QWORD v5[6]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v6[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  _QWORD *v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF

  if ( a2[6] <= 2u && !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de )
  {
    v11 = a2[6];
    v2 = a2[8];
    v6[0] = a2[7];
    v6[1] = v2;
    v10 = a2 + 10;
    v5[0] = &v11;
    v5[1] = _$LT$log..Level$u20$as$u20$core..fmt..Display$GT$::fmt::hdbc574d63787b6e9;
    v5[2] = v6;
    v5[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    v5[4] = &v10;
    v5[5] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h100edfb7e871c5e3;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v7, &unk_1017C7F30, v5);
    v3 = v8;
    result = codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc((__int64)&unk_1019FF248, v8, v9);
    if ( v7 )
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v7, 1);
  }
  return result;
}
