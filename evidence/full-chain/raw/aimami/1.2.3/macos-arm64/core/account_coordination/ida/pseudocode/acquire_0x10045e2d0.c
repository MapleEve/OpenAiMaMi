// __ZN13codexmate_lib4core20account_coordination19AccountSnapshotLock7acquire @ 0x10045e2d0
__int64 __fastcall codexmate_lib::core::account_coordination::AccountSnapshotLock::acquire::h470b55c48e4ac62c(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
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

  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)&v14, a2, a3); /*0x10045e2e5*/
  v4 = v15; /*0x10045e2ea*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x10045e309*/
    &v11,
    v15,
    v16,
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v5 = v11; /*0x10045e30e*/
  v6 = v12; /*0x10045e315*/
  if ( v11 != 11 ) /*0x10045e31c*/
  {
    v7 = &v13; /*0x10045e31e*/
    v8 = (_DWORD *)(a1 + 12); /*0x10045e322*/
    for ( i = 21; i; --i ) /*0x10045e326*/
    {
      *v8 = *(_DWORD *)v7; /*0x10045e32b*/
      v7 += 4; /*0x10045e32b*/
      ++v8; /*0x10045e32b*/
    }
  }
  *(_DWORD *)(a1 + 8) = v6; /*0x10045e32d*/
  *(_QWORD *)a1 = v5; /*0x10045e331*/
  if ( v14 ) /*0x10045e33b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v14, 1); /*0x10045e345*/
  return a1; /*0x10045e34d*/
}