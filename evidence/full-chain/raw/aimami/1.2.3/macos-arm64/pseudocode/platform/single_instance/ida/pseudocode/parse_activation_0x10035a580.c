// __ZN13codexmate_lib8platform15single_instance16parse_activation @ 0x10035a580 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::single_instance::parse_activation::hacebbcacef2f6f0c(
        unsigned __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-80h] BYREF
  __int64 v12; // [rsp+8h] [rbp-78h]
  unsigned __int64 v13; // [rsp+18h] [rbp-68h]
  _BYTE *v14; // [rsp+20h] [rbp-60h]
  unsigned __int64 v15; // [rsp+28h] [rbp-58h]
  _BYTE *v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  _BYTE *v20; // [rsp+50h] [rbp-30h]
  unsigned __int64 v21; // [rsp+58h] [rbp-28h]

  v4 = 0x8000000000000000LL; /*0x10035a592*/
  if ( a3 && *a2 == 123 ) /*0x10035a5a4*/
  {
    v16 = a2; /*0x10035a5a6*/
    v17 = a3; /*0x10035a5aa*/
    v18 = 0; /*0x10035a5ae*/
    v19 = 0; /*0x10035a5b6*/
    v20 = a2; /*0x10035a5be*/
    v21 = a3; /*0x10035a5c2*/
    serde_json::de::from_trait::h221484c488175e40(&v11, &v16); /*0x10035a5ce*/
    v5 = v11; /*0x10035a5d3*/
    if ( v11 == 0x8000000000000000LL ) /*0x10035a5da*/
    {
      *a1 = 0x8000000000000001LL; /*0x10035a5df*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..platform..single_instance..ActivationRecord$C$serde_json..error..Error$GT$$GT$::h98432058c5db475d(&v11); /*0x10035a5e6*/
    }
    else
    {
      v7 = v12; /*0x10035a600*/
      if ( v13 != 0x8000000000000000LL ) /*0x10035a60b*/
      {
        if ( v15 ) /*0x10035a612*/
        {
          v17 = v15; /*0x10035a61f*/
          v16 = v14; /*0x10035a623*/
          v4 = v13; /*0x10035a627*/
        }
        else if ( v13 ) /*0x10035a62f*/
        {
          v8 = v12; /*0x10035a63a*/
          v9 = v11; /*0x10035a640*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10035a646*/
          v7 = v8; /*0x10035a64b*/
          v5 = v9; /*0x10035a64e*/
        }
      }
      *a1 = v4; /*0x10035a651*/
      v10 = v17; /*0x10035a658*/
      a1[1] = (unsigned __int64)v16; /*0x10035a65c*/
      a1[2] = v10; /*0x10035a660*/
      if ( v5 ) /*0x10035a667*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v5, 1); /*0x10035a66e*/
    }
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x10035a5ed*/
  }
  return a1; /*0x10035a5f3*/
}