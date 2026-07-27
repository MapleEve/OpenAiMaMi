// __ZN13codexmate_lib4core20account_coordination12LiveAuthLock7acquire @ 0x10045de90
__int64 __fastcall codexmate_lib::core::account_coordination::LiveAuthLock::acquire::h76d9b27c8b3ac4f8(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  int v6; // edx
  char *v7; // rsi
  _DWORD *v8; // rdi
  __int64 i; // rcx
  __int64 v11; // [rsp+8h] [rbp-88h] BYREF
  int v12; // [rsp+10h] [rbp-80h]
  char v13; // [rsp+14h] [rbp-7Ch] BYREF
  __int64 v14; // [rsp+68h] [rbp-28h] BYREF
  __int64 v15; // [rsp+70h] [rbp-20h]
  __int64 v16; // [rsp+78h] [rbp-18h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v14, a2, a3, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15); /*0x10045deb2*/
  v4 = v15; /*0x10045deb7*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x10045ded6*/
    &v11,
    v15,
    v16,
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v5 = v11; /*0x10045dedb*/
  v6 = v12; /*0x10045dee2*/
  if ( v11 != 11 ) /*0x10045dee9*/
  {
    v7 = &v13; /*0x10045deeb*/
    v8 = (_DWORD *)(a1 + 12); /*0x10045deef*/
    for ( i = 21; i; --i ) /*0x10045def3*/
    {
      *v8 = *(_DWORD *)v7; /*0x10045def8*/
      v7 += 4; /*0x10045def8*/
      ++v8; /*0x10045def8*/
    }
  }
  *(_DWORD *)(a1 + 8) = v6; /*0x10045defa*/
  *(_QWORD *)a1 = v5; /*0x10045defd*/
  if ( v14 ) /*0x10045df07*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v14, 1); /*0x10045df11*/
  return a1; /*0x10045df19*/
}