// mac 1.2.2 NEW codexmate_lib4core12debug_bundle15inspection_json 0x1008d8c40 d=2
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD v9[15]; // [rsp+8h] [rbp-78h] BYREF

  result = *(unsigned __int8 *)a1; /*0x1008d8c51*/
  if ( (unsigned int)result >= 3 ) /*0x1008d8c57*/
  {
    if ( (_DWORD)result == 3 ) /*0x1008d8c5d*/
    {
      if ( !a1[1] ) /*0x1008d8c9e*/
        return result; /*0x1008d8c9e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008d8c9e*/
    }
    if ( (_DWORD)result == 4 ) /*0x1008d8c62*/
    {
      v3 = a1[3] + 1LL; /*0x1008d8c6f*/
      v4 = a1[2]; /*0x1008d8c72*/
      while ( v3 != 1 ) /*0x1008d8c84*/
      {
        --v3; /*0x1008d8c8a*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v4); /*0x1008d8c8d*/
        v4 += 32; /*0x1008d8c92*/
      }
      if ( a1[1] ) /*0x1008d8ce7*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1008d8cfd*/
    }
    else
    {
      v5 = a1[1]; /*0x1008d8caf*/
      if ( v5 ) /*0x1008d8cb6*/
      {
        v6 = a1[2]; /*0x1008d8cb8*/
        v7 = a1[3]; /*0x1008d8cbc*/
        v9[1] = 0; /*0x1008d8cc0*/
        v9[2] = v5; /*0x1008d8cc8*/
        v9[3] = v6; /*0x1008d8ccc*/
        v9[5] = 0; /*0x1008d8cd0*/
        v9[6] = v5; /*0x1008d8cd8*/
        v9[7] = v6; /*0x1008d8cdc*/
        v8 = 1; /*0x1008d8ce0*/
      }
      else
      {
        v8 = 0; /*0x1008d8d10*/
        v7 = 0; /*0x1008d8d12*/
      }
      v9[0] = v8; /*0x1008d8d14*/
      v9[4] = v8; /*0x1008d8d18*/
      v9[8] = v7; /*0x1008d8d1c*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h252483725707d674(v9); /*0x1008d8d24*/
    }
  }
  return result; /*0x1008d8cfd*/
}