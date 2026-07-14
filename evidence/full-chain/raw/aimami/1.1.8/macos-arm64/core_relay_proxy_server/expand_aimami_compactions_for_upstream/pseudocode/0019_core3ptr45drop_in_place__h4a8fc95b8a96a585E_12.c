// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x1006ddbd0 depth=1
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

  result = *(unsigned __int8 *)a1; /*0x1006ddbe1*/
  if ( (unsigned int)result >= 3 ) /*0x1006ddbe7*/
  {
    if ( (_DWORD)result == 3 ) /*0x1006ddbed*/
    {
      if ( !a1[1] ) /*0x1006ddc2e*/
        return result; /*0x1006ddc2e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ddc2e*/
    }
    if ( (_DWORD)result == 4 ) /*0x1006ddbf2*/
    {
      v3 = a1[3] + 1LL; /*0x1006ddbff*/
      v4 = a1[2]; /*0x1006ddc02*/
      while ( v3 != 1 ) /*0x1006ddc14*/
      {
        --v3; /*0x1006ddc1a*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(); /*0x1006ddc1d*/
        v4 += 32; /*0x1006ddc22*/
      }
      if ( a1[1] ) /*0x1006ddc77*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006ddc8d*/
    }
    else
    {
      v5 = a1[1]; /*0x1006ddc3f*/
      if ( v5 ) /*0x1006ddc46*/
      {
        v6 = a1[2]; /*0x1006ddc48*/
        v7 = a1[3]; /*0x1006ddc4c*/
        v9[1] = 0; /*0x1006ddc50*/
        v9[2] = v5; /*0x1006ddc58*/
        v9[3] = v6; /*0x1006ddc5c*/
        v9[5] = 0; /*0x1006ddc60*/
        v9[6] = v5; /*0x1006ddc68*/
        v9[7] = v6; /*0x1006ddc6c*/
        v8 = 1; /*0x1006ddc70*/
      }
      else
      {
        v8 = 0; /*0x1006ddca0*/
        v7 = 0; /*0x1006ddca2*/
      }
      v9[0] = v8; /*0x1006ddca4*/
      v9[4] = v8; /*0x1006ddca8*/
      v9[8] = v7; /*0x1006ddcac*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f(v9); /*0x1006ddcb4*/
    }
  }
  return result; /*0x1006ddc8d*/
}