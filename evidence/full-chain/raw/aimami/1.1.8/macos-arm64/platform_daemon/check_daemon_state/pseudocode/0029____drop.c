// mac 1.1.8 BEHAVIORAL-BACKEND check_daemon_state node 0x1001e4c00 depth=2
// _::drop
__int64 __fastcall _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h4b67788ff456eb2d(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 i; // r15
  __int64 v7; // r12
  _QWORD *v8; // rax
  _QWORD v9[9]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]

  v1 = *a1; /*0x1001e4c0f*/
  if ( *a1 ) /*0x1001e4c0f*/
  {
    v2 = a1[1]; /*0x1001e4c17*/
    v3 = a1[2]; /*0x1001e4c1b*/
    v9[1] = 0; /*0x1001e4c1f*/
    v9[2] = v1; /*0x1001e4c27*/
    v9[3] = v2; /*0x1001e4c2b*/
    v9[5] = 0; /*0x1001e4c2f*/
    v9[6] = v1; /*0x1001e4c37*/
    v9[7] = v2; /*0x1001e4c3b*/
    v4 = 1; /*0x1001e4c3f*/
  }
  else
  {
    v4 = 0; /*0x1001e4c46*/
    v3 = 0; /*0x1001e4c48*/
  }
  v9[0] = v4; /*0x1001e4c4a*/
  v9[4] = v4; /*0x1001e4c4e*/
  v9[8] = v3; /*0x1001e4c52*/
  result = alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h877cf5622139861f(v10, v9); /*0x1001e4c5e*/
  for ( i = v10[0]; v10[0]; i = v10[0] ) /*0x1001e4c6a*/
  {
    v7 = 3 * v11; /*0x1001e4c98*/
    if ( *(_QWORD *)(i + 24 * v11 + 8) ) /*0x1001e4c9c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e4cb4*/
    v8 = (_QWORD *)(i + 8 * v7 + 272); /*0x1001e4cb9*/
    if ( !__OFSUB__(-*v8, 1) ) /*0x1001e4cca*/
    {
      if ( *v8 ) /*0x1001e4cc4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e4cd7*/
    }
    result = alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h877cf5622139861f(v10, v9); /*0x1001e4c86*/
  }
  return result; /*0x1001e4cde*/
}