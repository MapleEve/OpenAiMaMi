// __ZN13codexmate_lib4core10repository14ExactFileState7restore @ 0x100a76a50
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::ExactFileState::restore::ha530469f23048e2f(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi

  if ( !__OFSUB__(0, *(_QWORD *)(a2 + 24)) ) /*0x100a76a64*/
  {
    result = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100a76aad*/
               *(void **)(a2 + 8),
               *(_QWORD *)(a2 + 16));
    if ( result ) /*0x100a76ab5*/
    {
      *a1 = 2; /*0x100a76ab7*/
      a1[1] = result; /*0x100a76abe*/
      return result; /*0x100a76ac2*/
    }
    goto LABEL_7; /*0x100a76ab5*/
  }
  result = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(*(void **)(a2 + 8), *(_QWORD *)(a2 + 16)); /*0x100a76a6e*/
  if ( !result ) /*0x100a76a76*/
  {
LABEL_7:
    *a1 = 11; /*0x100a76ac4*/
    return result; /*0x100a76ac4*/
  }
  v3 = result; /*0x100a76a78*/
  result = std::io::error::Error::kind::hbe3dd139aa56fd1b(result); /*0x100a76a7e*/
  if ( (_BYTE)result ) /*0x100a76a85*/
  {
    *a1 = 2; /*0x100a76a87*/
    a1[1] = v3; /*0x100a76a8e*/
  }
  else
  {
    *a1 = 11; /*0x100a76ad4*/
    result = v3 & 3; /*0x100a76ade*/
    if ( (_DWORD)result == 1 ) /*0x100a76ae4*/
    {
      v4 = *(_QWORD *)(v3 - 1); /*0x100a76aec*/
      v5 = *(_QWORD *)(v3 + 7); /*0x100a76af0*/
      if ( *(_QWORD *)v5 ) /*0x100a76af4*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v3 - 1)); /*0x100a76b00*/
      v6 = *(_QWORD *)(v5 + 8); /*0x100a76b02*/
      if ( v6 ) /*0x100a76b0a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x100a76b14*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x100a76b2e*/
    }
  }
  return result; /*0x100a76acb*/
}