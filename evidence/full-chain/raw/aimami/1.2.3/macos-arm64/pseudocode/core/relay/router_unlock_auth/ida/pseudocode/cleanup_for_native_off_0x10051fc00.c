// __ZN13codexmate_lib4core5relay18router_unlock_auth22cleanup_for_native_off @ 0x10051fc00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::cleanup_for_native_off::hf6c64171c633b030(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r13
  char v3; // r12
  char v4; // r15
  __int64 v5; // r12
  char v6; // r14
  _BYTE __dst[87]; // [rsp+1h] [rbp-DFh] BYREF
  __int64 v9; // [rsp+58h] [rbp-88h] BYREF
  char v10; // [rsp+60h] [rbp-80h]
  _BYTE __src[87]; // [rsp+61h] [rbp-7Fh] BYREF

  if ( (unsigned __int8)codexmate_lib::core::relay::legacy_virtual_auth::marker_exists::h09278a33efdd7fab(a2) ) /*0x10051fc1d*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2) ) /*0x10051fc29*/
    {
      codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(&v9, a2); /*0x10051fc3c*/
      v2 = v9; /*0x10051fc41*/
      v3 = v10; /*0x10051fc48*/
      if ( v9 != 11 ) /*0x10051fc51*/
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x10051fc63*/
LABEL_14:
        *(_QWORD *)a1 = v2; /*0x10051fd01*/
        *(_BYTE *)(a1 + 8) = v3; /*0x10051fd04*/
        memcpy((void *)(a1 + 9), __dst, 0x57u); /*0x10051fd1b*/
        return a1; /*0x10051fd20*/
      }
    }
    else
    {
      v3 = 0; /*0x10051fc7e*/
    }
    codexmate_lib::core::relay::legacy_virtual_auth::cleanup::h4e431c2ba7f134fc(&v9, a2); /*0x10051fc8b*/
    v2 = v9; /*0x10051fc90*/
    if ( v9 != 11 ) /*0x10051fca0*/
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x10051fcf9*/
      v3 = v10; /*0x10051fcfe*/
      goto LABEL_14; /*0x10051fcfe*/
    }
    v4 = v3 | v10; /*0x10051fca2*/
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2) ) /*0x10051fca8*/
      goto LABEL_10; /*0x10051fcaf*/
  }
  else
  {
    v4 = 0; /*0x10051fc6d*/
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2) ) /*0x10051fc73*/
    {
LABEL_10:
      codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(&v9, a2); /*0x10051fcb1*/
      v5 = v9; /*0x10051fcc0*/
      v6 = v10; /*0x10051fcc7*/
      if ( v9 != 11 ) /*0x10051fcd0*/
      {
        memcpy((void *)(a1 + 9), __src, 0x57u); /*0x10051fd2f*/
        *(_QWORD *)a1 = v5; /*0x10051fd34*/
        *(_BYTE *)(a1 + 8) = v6; /*0x10051fd37*/
        return a1; /*0x10051fd37*/
      }
      v4 |= v10; /*0x10051fcd5*/
    }
  }
  *(_BYTE *)(a1 + 8) = v4 & 1; /*0x10051fcd8*/
  *(_QWORD *)a1 = 11; /*0x10051fce0*/
  return a1; /*0x10051fd3e*/
}