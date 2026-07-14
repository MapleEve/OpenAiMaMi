// mac 1.1.8 test_relay_provider_stream node va=0x1000cd400 depth=2
// core3ptr45drop_in_place::h4a8fc95b8a96a585E_0
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v9[15]; // [rsp+8h] [rbp-78h] BYREF

  result = *(unsigned __int8 *)a1; /*0x1000cd411*/
  if ( (unsigned int)result >= 3 ) /*0x1000cd417*/
  {
    if ( (_DWORD)result == 3 ) /*0x1000cd41d*/
    {
      if ( !a1[1] ) /*0x1000cd45e*/
        return result; /*0x1000cd45e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cd45e*/
    }
    if ( (_DWORD)result == 4 ) /*0x1000cd422*/
    {
      v3 = a1[3] + 1LL; /*0x1000cd42f*/
      v4 = a1[2]; /*0x1000cd432*/
      while ( v3 != 1 ) /*0x1000cd444*/
      {
        --v3; /*0x1000cd44a*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(); /*0x1000cd44d*/
        v4 += 32; /*0x1000cd452*/
      }
      if ( a1[1] ) /*0x1000cd4a7*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1000cd4bd*/
    }
    else
    {
      v5 = a1[1]; /*0x1000cd46f*/
      if ( v5 ) /*0x1000cd476*/
      {
        v6 = a1[2]; /*0x1000cd478*/
        v7 = a1[3]; /*0x1000cd47c*/
        v9[1] = 0; /*0x1000cd480*/
        v9[2] = v5; /*0x1000cd488*/
        v9[3] = v6; /*0x1000cd48c*/
        v9[5] = 0; /*0x1000cd490*/
        v9[6] = v5; /*0x1000cd498*/
        v9[7] = v6; /*0x1000cd49c*/
        v8 = 1; /*0x1000cd4a0*/
      }
      else
      {
        v8 = 0; /*0x1000cd4d0*/
        v7 = 0; /*0x1000cd4d2*/
      }
      v9[0] = v8; /*0x1000cd4d4*/
      v9[4] = v8; /*0x1000cd4d8*/
      v9[8] = v7; /*0x1000cd4dc*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f(v9); /*0x1000cd4e4*/
    }
  }
  return result; /*0x1000cd4bd*/
}