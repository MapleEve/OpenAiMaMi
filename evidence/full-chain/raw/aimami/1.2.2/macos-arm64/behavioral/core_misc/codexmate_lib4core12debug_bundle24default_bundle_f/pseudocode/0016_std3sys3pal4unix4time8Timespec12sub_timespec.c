// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x10135a840 d=3
__int64 __fastcall std::sys::pal::unix::time::Timespec::sub_timespec::h8e18678a0803d2e9(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // edi
  bool v9; // r10
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // edx
  _QWORD v16[2]; // [rsp+0h] [rbp-20h] BYREF
  int v17; // [rsp+10h] [rbp-10h]

  v5 = *a2; /*0x10135a84f*/
  v6 = *a3; /*0x10135a852*/
  v7 = *((_DWORD *)a2 + 2); /*0x10135a855*/
  v8 = *((_DWORD *)a3 + 2); /*0x10135a859*/
  v9 = v5 >= *a3; /*0x10135a86c*/
  if ( v5 == *a3 ) /*0x10135a870*/
    v9 = v7 >= v8; /*0x10135a870*/
  if ( v9 ) /*0x10135a877*/
  {
    v10 = v7 + 1000000000; /*0x10135a879*/
    v11 = -v6; /*0x10135a883*/
    v12 = ~v6; /*0x10135a889*/
    if ( v7 >= v8 ) /*0x10135a88c*/
    {
      v10 = v7; /*0x10135a88c*/
      v12 = v11; /*0x10135a890*/
    }
    v13 = v5 + v12; /*0x10135a894*/
    result = v10 - v8; /*0x10135a897*/
    if ( (unsigned int)result >= 0x3B9ACA00 ) /*0x10135a89e*/
    {
      if ( v13 == -1 ) /*0x10135a8a4*/
        core::option::expect_failed::ha75f8bdcbd673567( /*0x10135a905*/
          (__int64)"overflow in Duration::newdescription() is deprecated; use Displaymid > lencalled `Result::unwrap()` on an `Err` valueWouldBlock",
          25,
          (__int64)&off_1019269A0);
      ++v13; /*0x10135a8a6*/
      result = (unsigned int)(result - 1000000000); /*0x10135a8a9*/
    }
    *(_QWORD *)(a1 + 8) = v13; /*0x10135a8ae*/
    *(_DWORD *)(a1 + 16) = result; /*0x10135a8b2*/
    *(_QWORD *)a1 = 0; /*0x10135a8b5*/
  }
  else
  {
    std::sys::pal::unix::time::Timespec::sub_timespec::h8e18678a0803d2e9(v16, a3, a2); /*0x10135a8cd*/
    v15 = v17; /*0x10135a8da*/
    result = v16[0] ^ 1LL; /*0x10135a8dd*/
    *(_QWORD *)(a1 + 8) = v16[1]; /*0x10135a8e1*/
    *(_DWORD *)(a1 + 16) = v15; /*0x10135a8e5*/
    *(_QWORD *)a1 = result; /*0x10135a8e8*/
  }
  return result; /*0x10135a8bc*/
}