// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND responses_to_sse_payload node 0x1001c81f0 depth=2
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

  result = *(unsigned __int8 *)a1; /*0x1001c8201*/
  if ( (unsigned int)result >= 3 ) /*0x1001c8207*/
  {
    if ( (_DWORD)result == 3 ) /*0x1001c820d*/
    {
      if ( !a1[1] ) /*0x1001c824e*/
        return result; /*0x1001c824e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c824e*/
    }
    if ( (_DWORD)result == 4 ) /*0x1001c8212*/
    {
      v3 = a1[3] + 1LL; /*0x1001c821f*/
      v4 = a1[2]; /*0x1001c8222*/
      while ( v3 != 1 ) /*0x1001c8234*/
      {
        --v3; /*0x1001c823a*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(); /*0x1001c823d*/
        v4 += 32; /*0x1001c8242*/
      }
      if ( a1[1] ) /*0x1001c8297*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001c82ad*/
    }
    else
    {
      v5 = a1[1]; /*0x1001c825f*/
      if ( v5 ) /*0x1001c8266*/
      {
        v6 = a1[2]; /*0x1001c8268*/
        v7 = a1[3]; /*0x1001c826c*/
        v9[1] = 0; /*0x1001c8270*/
        v9[2] = v5; /*0x1001c8278*/
        v9[3] = v6; /*0x1001c827c*/
        v9[5] = 0; /*0x1001c8280*/
        v9[6] = v5; /*0x1001c8288*/
        v9[7] = v6; /*0x1001c828c*/
        v8 = 1; /*0x1001c8290*/
      }
      else
      {
        v8 = 0; /*0x1001c82c0*/
        v7 = 0; /*0x1001c82c2*/
      }
      v9[0] = v8; /*0x1001c82c4*/
      v9[4] = v8; /*0x1001c82c8*/
      v9[8] = v7; /*0x1001c82cc*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f(v9); /*0x1001c82d4*/
    }
  }
  return result; /*0x1001c82ad*/
}