// __ZN13codexmate_lib4core6skills20is_regular_directory @ 0x10034e4d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::skills::is_regular_directory::hdbc469608c3f2638(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-B0h]

  std::sys::fs::symlink_metadata::hd69903fe66faddbd(&v8, a2, a3); /*0x10034e4ec*/
  v3 = v9; /*0x10034e4f1*/
  if ( v8 == 1 ) /*0x10034e4ff*/
  {
    result = std::io::error::Error::kind::hbe3dd139aa56fd1b(v9); /*0x10034e504*/
    if ( (_BYTE)result ) /*0x10034e50b*/
    {
      *a1 = 2; /*0x10034e50d*/
      a1[1] = v3; /*0x10034e514*/
    }
    else
    {
      *((_BYTE *)a1 + 8) = 0; /*0x10034e541*/
      *a1 = 11; /*0x10034e545*/
      result = v3 & 3; /*0x10034e54f*/
      if ( (_DWORD)result == 1 ) /*0x10034e555*/
      {
        v5 = *(_QWORD *)(v3 - 1); /*0x10034e56b*/
        v6 = *(_QWORD *)(v3 + 7); /*0x10034e56f*/
        if ( *(_QWORD *)v6 ) /*0x10034e573*/
          (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v3 - 1)); /*0x10034e57f*/
        v7 = *(_QWORD *)(v6 + 8); /*0x10034e581*/
        if ( v7 ) /*0x10034e589*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16)); /*0x10034e593*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3 - 1, 24, 8); /*0x10034e5b4*/
      }
    }
  }
  else
  {
    *((_BYTE *)a1 + 8) = (v9 & 0xF00000000000LL) == 0x400000000000LL; /*0x10034e534*/
    *a1 = 11; /*0x10034e538*/
    return 0x400000000000LL; /*0x10034e527*/
  }
  return result; /*0x10034e557*/
}