// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x1004175b0 depth=0
// parse_activation_owner
unsigned __int64 *__fastcall codexmate_lib::platform::single_instance::parse_activation::h05978808bc3c5244(
        unsigned __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-68h]
  _BYTE *v10; // [rsp+20h] [rbp-60h]
  unsigned __int64 v11; // [rsp+28h] [rbp-58h]
  _BYTE *v12; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  _BYTE *v16; // [rsp+50h] [rbp-30h]
  unsigned __int64 v17; // [rsp+58h] [rbp-28h]

  v3 = 0x8000000000000000LL; /*0x1004175c2*/
  if ( a3 && *a2 == 123 ) /*0x1004175d4*/
  {
    v12 = a2; /*0x1004175d6*/
    v13 = a3; /*0x1004175da*/
    v14 = 0; /*0x1004175de*/
    v15 = 0; /*0x1004175e6*/
    v16 = a2; /*0x1004175ee*/
    v17 = a3; /*0x1004175f2*/
    serde_json::de::from_trait::h610526fee2614dd6(&v8, &v12); /*0x1004175fe*/
    v4 = v8; /*0x100417603*/
    if ( v8 == 0x8000000000000000LL ) /*0x10041760a*/
    {
      *a1 = 0x8000000000000001LL; /*0x10041760f*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..platform..single_instance..ActivationRecord$C$serde_json..error..Error$GT$$GT$::h00f0fc36fc9f16fd(&v8); /*0x100417616*/
    }
    else
    {
      if ( v9 != 0x8000000000000000LL ) /*0x10041763b*/
      {
        if ( v11 ) /*0x100417642*/
        {
          v13 = v11; /*0x10041764f*/
          v12 = v10; /*0x100417653*/
          v3 = v9; /*0x100417657*/
        }
        else if ( v9 ) /*0x10041765f*/
        {
          v6 = v8; /*0x100417670*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417676*/
          v4 = v6; /*0x10041767e*/
        }
      }
      *a1 = v3; /*0x100417681*/
      v7 = v13; /*0x100417688*/
      a1[1] = (unsigned __int64)v12; /*0x10041768c*/
      a1[2] = v7; /*0x100417690*/
      if ( v4 ) /*0x100417697*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10041769e*/
    }
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x10041761d*/
  }
  return a1; /*0x100417623*/
}