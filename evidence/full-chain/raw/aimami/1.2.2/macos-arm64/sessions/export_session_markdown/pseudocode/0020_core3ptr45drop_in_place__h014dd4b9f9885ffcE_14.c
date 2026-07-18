// mac 1.2.2 NEW export_session_markdown 0x100a46970 d=1
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

  result = *(unsigned __int8 *)a1; /*0x100a46981*/
  if ( (unsigned int)result >= 3 ) /*0x100a46987*/
  {
    if ( (_DWORD)result == 3 ) /*0x100a4698d*/
    {
      if ( !a1[1] ) /*0x100a469ce*/
        return result; /*0x100a469ce*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a469ce*/
    }
    if ( (_DWORD)result == 4 ) /*0x100a46992*/
    {
      v3 = a1[3] + 1LL; /*0x100a4699f*/
      v4 = a1[2]; /*0x100a469a2*/
      while ( v3 != 1 ) /*0x100a469b4*/
      {
        --v3; /*0x100a469ba*/
        result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(); /*0x100a469bd*/
        v4 += 32; /*0x100a469c2*/
      }
      if ( a1[1] ) /*0x100a46a17*/
        return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a46a2d*/
    }
    else
    {
      v5 = a1[1]; /*0x100a469df*/
      if ( v5 ) /*0x100a469e6*/
      {
        v6 = a1[2]; /*0x100a469e8*/
        v7 = a1[3]; /*0x100a469ec*/
        v9[1] = 0; /*0x100a469f0*/
        v9[2] = v5; /*0x100a469f8*/
        v9[3] = v6; /*0x100a469fc*/
        v9[5] = 0; /*0x100a46a00*/
        v9[6] = v5; /*0x100a46a08*/
        v9[7] = v6; /*0x100a46a0c*/
        v8 = 1; /*0x100a46a10*/
      }
      else
      {
        v8 = 0; /*0x100a46a40*/
        v7 = 0; /*0x100a46a42*/
      }
      v9[0] = v8; /*0x100a46a44*/
      v9[4] = v8; /*0x100a46a48*/
      v9[8] = v7; /*0x100a46a4c*/
      return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h252483725707d674(v9); /*0x100a46a54*/
    }
  }
  return result; /*0x100a46a2d*/
}