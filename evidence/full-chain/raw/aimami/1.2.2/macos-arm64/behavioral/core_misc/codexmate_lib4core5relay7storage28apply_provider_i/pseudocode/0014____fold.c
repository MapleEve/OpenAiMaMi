// mac 1.2.2 NEW codexmate_lib4core5relay7storage28apply_provider_i 0x1006b2410 d=2
__int64 __fastcall _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5f3e4613bc99f770(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r14
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+38h] [rbp-78h] BYREF
  size_t v7[3]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v8; // [rsp+68h] [rbp-48h]
  size_t v9; // [rsp+70h] [rbp-40h] BYREF
  size_t v10; // [rsp+78h] [rbp-38h]
  size_t v11; // [rsp+80h] [rbp-30h]

  v8 = a3; /*0x1006b2424*/
  if ( a1 != a2 ) /*0x1006b242b*/
  {
    v3 = a1; /*0x1006b2434*/
    v4 = (unsigned __int64)(a2 - a1) >> 6; /*0x1006b243a*/
    do /*0x1006b2457*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v9, v3); /*0x1006b2463*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v7, v3 + 24); /*0x1006b246f*/
      v6[2] = v11; /*0x1006b24b3*/
      v6[1] = v10; /*0x1006b24c5*/
      v6[0] = v9; /*0x1006b24c9*/
      v9 = v7[0]; /*0x1006b24d4*/
      v10 = v7[1]; /*0x1006b24d8*/
      v11 = v7[2]; /*0x1006b24e0*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9e0cadb496f0a352(v7, v8, v6, &v9); /*0x1006b24f2*/
      result = -v7[0]; /*0x1006b24fe*/
      if ( !__OFSUB__(-v7[0], 1) ) /*0x1006b2501*/
      {
        if ( v7[0] ) /*0x1006b2507*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1006b2516*/
      }
      v3 += 64; /*0x1006b2450*/
      --v4; /*0x1006b2454*/
    }
    while ( v4 ); /*0x1006b2457*/
  }
  return result; /*0x1006b2520*/
}