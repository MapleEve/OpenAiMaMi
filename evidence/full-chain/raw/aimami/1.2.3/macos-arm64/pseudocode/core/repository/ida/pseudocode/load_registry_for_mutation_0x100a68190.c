// __ZN13codexmate_lib4core10repository10Repository26load_registry_for_mutation @ 0x100a68190
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int *v5; // rdi
  int *v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r14
  int v13; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-C0h]
  __int64 v15; // [rsp+A0h] [rbp-30h] BYREF
  int v16; // [rsp+A8h] [rbp-28h]

  v5 = &v13; /*0x100a681ab*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v13, a2, a3); /*0x100a681b2*/
  if ( v13 != 1 ) /*0x100a681be*/
    return codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(a1, a2, a3); /*0x100a682c9*/
  if ( (v14 & 3) == 1 ) /*0x100a681d3*/
  {
    v6 = (int *)(v14 - 1); /*0x100a681d5*/
    v7 = *(_QWORD *)(v14 - 1); /*0x100a681d9*/
    v8 = *(_QWORD *)(v14 + 7); /*0x100a681dd*/
    if ( *(_QWORD *)v8 ) /*0x100a681e1*/
      (*(void (__fastcall **)(__int64))v8)(v7); /*0x100a681ed*/
    v9 = *(_QWORD *)(v8 + 8); /*0x100a681ef*/
    if ( v9 ) /*0x100a681f7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x100a68201*/
    a2 = 24; /*0x100a68206*/
    v5 = v6; /*0x100a68210*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x100a68213*/
  }
  v15 = std::time::SystemTime::now::h1fe79e41f9d5677f(v5, a2); /*0x100a6821d*/
  v16 = v10; /*0x100a68221*/
  v11 = 0; /*0x100a68224*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v13, &v15, 0, 0); /*0x100a68236*/
  if ( !(_BYTE)v13 ) /*0x100a68242*/
    v11 = v14; /*0x100a68244*/
  *(_QWORD *)(a1 + 8) = 0; /*0x100a6824b*/
  *(_QWORD *)(a1 + 16) = 8; /*0x100a68253*/
  *(_QWORD *)(a1 + 24) = 0; /*0x100a6825b*/
  *(_QWORD *)(a1 + 32) = 0x8000000000000000LL; /*0x100a6826d*/
  *(_QWORD *)(a1 + 56) = 0; /*0x100a68271*/
  *(_DWORD *)(a1 + 64) = 15; /*0x100a68279*/
  *(_DWORD *)(a1 + 68) = 10; /*0x100a68280*/
  *(_BYTE *)(a1 + 72) = 0; /*0x100a68287*/
  *(_QWORD *)(a1 + 80) = v11; /*0x100a6828b*/
  *(_DWORD *)(a1 + 88) = 4; /*0x100a6828f*/
  *(_BYTE *)(a1 + 92) = 1; /*0x100a68296*/
  *(_QWORD *)a1 = 11; /*0x100a6829a*/
  return 0x8000000000000000LL; /*0x100a682a1*/
}