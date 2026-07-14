// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1010a73a0 depth=1
// std3sys7process4unix6common7Command3arg
__int64 __fastcall std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 result; // rax
  _QWORD v10[8]; // [rsp+0h] [rbp-40h] BYREF

  _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8( /*0x1010a73b6*/
    v10,
    a2,
    a3);
  v4 = v10[0]; /*0x1010a73bb*/
  v5 = v10[1]; /*0x1010a73bf*/
  if ( !__OFSUB__(-v10[0], 1) ) /*0x1010a73c9*/
  {
    *(_BYTE *)(a1 + 192) = 1; /*0x1010a73cb*/
    v6 = alloc::wtf8::_$LT$impl$u20$core..wtf8..Wtf8$GT$::into_box::h60be101a61a42e4f("<string-with-nul>", 0x12u); /*0x1010a73e3*/
    if ( v4 ) /*0x1010a73e9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010a73f6*/
    v5 = v6; /*0x1010a73fb*/
  }
  v7 = *(_QWORD *)(a1 + 16); /*0x1010a73fe*/
  v8 = v7 - 1; /*0x1010a7405*/
  if ( !v7 ) /*0x1010a7409*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v8, 0, &off_1015AE4C0); /*0x1010a744b*/
  result = *(_QWORD *)(a1 + 8); /*0x1010a740b*/
  *(_QWORD *)(result + 8 * v8) = v5; /*0x1010a740f*/
  if ( v7 == *(_QWORD *)a1 ) /*0x1010a7416*/
  {
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hba190b810e68ac72(a1); /*0x1010a7437*/
    result = *(_QWORD *)(a1 + 8); /*0x1010a743c*/
  }
  *(_QWORD *)(result + 8 * v7) = 0; /*0x1010a7418*/
  *(_QWORD *)(a1 + 16) = v7 + 1; /*0x1010a7423*/
  return result; /*0x1010a7427*/
}