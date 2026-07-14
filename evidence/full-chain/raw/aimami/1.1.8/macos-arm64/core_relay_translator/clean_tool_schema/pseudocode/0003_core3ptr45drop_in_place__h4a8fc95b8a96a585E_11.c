// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND clean_tool_schema node 0x10069e9d0 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v9[15]; // [rsp+8h] [rbp-78h] BYREF

  result = *(unsigned __int8 *)a1; /*0x10069e9e1*/
  if ( (unsigned int)result >= 3 ) /*0x10069e9e7*/
  {
    if ( (_DWORD)result == 3 ) /*0x10069e9ed*/
    {
      if ( !a1[1] ) /*0x10069ea2e*/
        return result; /*0x10069ea2e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069ea2e*/
    }
    if ( (_DWORD)result == 4 ) /*0x10069e9f2*/
    {
      v3 = a1[3] + 1LL; /*0x10069e9ff*/
      v4 = (_QWORD *)a1[2]; /*0x10069ea02*/
      while ( v3 != 1 ) /*0x10069ea14*/
      {
        --v3; /*0x10069ea1a*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v4); /*0x10069ea1d*/
        v4 += 4; /*0x10069ea22*/
      }
      if ( a1[1] ) /*0x10069ea77*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10069ea8d*/
    }
    else
    {
      v5 = a1[1]; /*0x10069ea3f*/
      if ( v5 ) /*0x10069ea46*/
      {
        v6 = a1[2]; /*0x10069ea48*/
        v7 = a1[3]; /*0x10069ea4c*/
        v9[1] = 0; /*0x10069ea50*/
        v9[2] = v5; /*0x10069ea58*/
        v9[3] = v6; /*0x10069ea5c*/
        v9[5] = 0; /*0x10069ea60*/
        v9[6] = v5; /*0x10069ea68*/
        v9[7] = v6; /*0x10069ea6c*/
        v8 = 1; /*0x10069ea70*/
      }
      else
      {
        v8 = 0; /*0x10069eaa0*/
        v7 = 0; /*0x10069eaa2*/
      }
      v9[0] = v8; /*0x10069eaa4*/
      v9[4] = v8; /*0x10069eaa8*/
      v9[8] = v7; /*0x10069eaac*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f((__int64)v9); /*0x10069eab4*/
    }
  }
  return result; /*0x10069ea8d*/
}