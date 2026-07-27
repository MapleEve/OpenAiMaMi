// __ZN13codexmate_lib4core10repository10Repository33clear_pending_auto_switch_request @ 0x100a709f0
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::Repository::clear_pending_auto_switch_request::heb8bdf3af6a6b862(
        _QWORD *a1,
        void *a2,
        size_t a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi

  result = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x100a70a04*/
  if ( result ) /*0x100a70a0c*/
  {
    v4 = result; /*0x100a70a0e*/
    result = std::io::error::Error::kind::hbe3dd139aa56fd1b(result); /*0x100a70a14*/
    if ( (_BYTE)result ) /*0x100a70a1b*/
    {
      *a1 = 2; /*0x100a70a1d*/
      a1[1] = v4; /*0x100a70a24*/
    }
    else
    {
      *a1 = 11; /*0x100a70a33*/
      result = v4 & 3; /*0x100a70a3d*/
      if ( (_DWORD)result == 1 ) /*0x100a70a43*/
      {
        v5 = *(_QWORD *)(v4 - 1); /*0x100a70a54*/
        v6 = *(_QWORD *)(v4 + 7); /*0x100a70a58*/
        if ( *(_QWORD *)v6 ) /*0x100a70a5c*/
          (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v4 - 1)); /*0x100a70a68*/
        v7 = *(_QWORD *)(v6 + 8); /*0x100a70a6a*/
        if ( v7 ) /*0x100a70a72*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x100a70a7c*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4 - 1, 24, 8); /*0x100a70a96*/
      }
    }
  }
  else
  {
    *a1 = 11; /*0x100a70a2a*/
  }
  return result; /*0x100a70a45*/
}