// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12thread_shape 0x10044ffc0 d=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rdi

  result = *(unsigned __int8 *)a1; /*0x10044ffce*/
  if ( (unsigned int)result < 3 ) /*0x10044ffd4*/
    return result; /*0x10044ffd4*/
  if ( (_DWORD)result == 3 ) /*0x10044ffe5*/
  {
    if ( !a1[1] ) /*0x10045001e*/
      return result; /*0x10045001e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100450066*/
  }
  if ( (_DWORD)result != 4 ) /*0x10044ffea*/
    return _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h91ff500dbdf8a806(a1 + 1); /*0x10045003d*/
  v3 = a1[3] + 1LL; /*0x10044fff7*/
  v4 = a1[2]; /*0x10044fffa*/
  while ( v3 != 1 ) /*0x100450004*/
  {
    --v3; /*0x10045000a*/
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(v4); /*0x10045000d*/
    v4 += 32; /*0x100450012*/
  }
  if ( a1[1] ) /*0x100450042*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10045004a*/
  return result; /*0x10044ffda*/
}