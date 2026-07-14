// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1001e5600 depth=1
unsigned __int64 __fastcall _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hebbee9ea7572bb11(
        __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v3; // [rsp+10h] [rbp-30h]
  _QWORD v4[5]; // [rsp+18h] [rbp-28h] BYREF

  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb(v2, a1); /*0x1001e5617*/
  for ( result = v2[0]; v2[0]; result = v2[0] ) /*0x1001e5623*/
  {
    v4[1] = a1; /*0x1001e5634*/
    v4[0] = result + 32 * v3; /*0x1001e5643*/
    if ( *(_QWORD *)(result + 24 * v3 + 360) ) /*0x1001e5647*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1001e5665*/
    _$LT$alloc..collections..btree..node..Handle$LT$alloc..collections..btree..node..NodeRef$LT$alloc..collections..btree..node..marker..Dying$C$K$C$V$C$NodeType$GT$$C$alloc..collections..btree..node..marker..KV$GT$..drop_key_val..Dropper$LT$T$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd340e17426926cb0(v4); /*0x1001e566d*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb(v2, a1); /*0x1001e5678*/
  }
  return result; /*0x1001e5686*/
}