// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13process_shape 0x10135d980 d=2
__int64 __fastcall std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 result; // rax
  _QWORD v13[8]; // [rsp+0h] [rbp-40h] BYREF

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x10135d996*/
    v13,
    a2,
    a3);
  v7 = v13[0]; /*0x10135d99b*/
  v8 = v13[1]; /*0x10135d99f*/
  if ( !__OFSUB__(-v13[0], 1) ) /*0x10135d9a9*/
  {
    *(_BYTE *)(a1 + 192) = 1; /*0x10135d9ab*/
    v9 = alloc::wtf8::_$LT$impl$u20$core..wtf8..Wtf8$GT$::into_box::h60be101a61a42e4f("<string-with-nul>", 0x12u); /*0x10135d9c3*/
    if ( v7 ) /*0x10135d9c9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10135d9d6*/
    v8 = v9; /*0x10135d9db*/
  }
  v10 = *(_QWORD *)(a1 + 16); /*0x10135d9de*/
  v11 = v10 - 1; /*0x10135d9e5*/
  if ( !v10 ) /*0x10135d9e9*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v11, 0, &off_1019263E0, v4, v5, v6); /*0x10135da2b*/
  result = *(_QWORD *)(a1 + 8); /*0x10135d9eb*/
  *(_QWORD *)(result + 8 * v11) = v8; /*0x10135d9ef*/
  if ( v10 == *(_QWORD *)a1 ) /*0x10135d9f6*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hba190b810e68ac72(a1); /*0x10135da17*/
    result = *(_QWORD *)(a1 + 8); /*0x10135da1c*/
  }
  *(_QWORD *)(result + 8 * v10) = 0; /*0x10135d9f8*/
  *(_QWORD *)(a1 + 16) = v10 + 1; /*0x10135da03*/
  return result; /*0x10135da07*/
}