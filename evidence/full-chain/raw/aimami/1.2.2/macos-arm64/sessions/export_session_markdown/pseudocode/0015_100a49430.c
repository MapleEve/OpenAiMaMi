// mac 1.2.2 NEW export_session_markdown 0x100a49430 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::ha9b120268625f5ba(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi

  result = -a1; /*0x100a4943e*/
  if ( __OFSUB__(-a1, 1) ) /*0x100a49441*/
  {
    result = a2 & 3; /*0x100a49462*/
    if ( (_DWORD)result == 1 ) /*0x100a49468*/
    {
      v3 = a2 - 1; /*0x100a49473*/
      v4 = *(_QWORD *)(a2 - 1); /*0x100a49477*/
      v5 = *(_QWORD *)(a2 + 7); /*0x100a4947b*/
      if ( *(_QWORD *)v5 ) /*0x100a4947f*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(a2 - 1)); /*0x100a4948b*/
      v6 = *(_QWORD *)(v5 + 8); /*0x100a4948d*/
      if ( v6 ) /*0x100a49495*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x100a4949f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x100a494b1*/
    }
  }
  else if ( a1 ) /*0x100a49443*/
  {
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a2, a1, 1); /*0x100a4945b*/
  }
  return result; /*0x100a49453*/
}