// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1005eb5c0 depth=1
__int64 __fastcall core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // r13
  _QWORD *v4; // rdi

  result = *(unsigned __int8 *)a1; /*0x1005eb5ce*/
  if ( (unsigned int)result < 3 ) /*0x1005eb5d4*/
    return result; /*0x1005eb5d4*/
  if ( (_DWORD)result == 3 ) /*0x1005eb5e5*/
  {
    if ( !a1[1] ) /*0x1005eb61e*/
      return result; /*0x1005eb61e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005eb666*/
  }
  if ( (_DWORD)result != 4 ) /*0x1005eb5ea*/
    return _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h2f0071d6e7b6a562(a1 + 1); /*0x1005eb63d*/
  v3 = a1[3] + 1LL; /*0x1005eb5f7*/
  v4 = (_QWORD *)a1[2]; /*0x1005eb5fa*/
  while ( v3 != 1 ) /*0x1005eb604*/
  {
    --v3; /*0x1005eb60a*/
    result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v4); /*0x1005eb60d*/
    v4 += 4; /*0x1005eb612*/
  }
  if ( a1[1] ) /*0x1005eb642*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005eb64a*/
  return result; /*0x1005eb5da*/
}