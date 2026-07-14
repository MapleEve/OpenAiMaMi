// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x1001e47d0 depth=2
size_t *__fastcall _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he012ef89ab8ef3d5(
        size_t *a1,
        __int64 *a2)
{
  if ( a2[2] ) /*0x1001e47d6*/
  {
    if ( !*a2 ) /*0x1001e47e3*/
      core::option::unwrap_failed::h44626cade04bbf1e((__int64)&anon_0bcfb5f5de49270c5675714f036928d0_658); /*0x1001e481e*/
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::ha760529b977a82bd( /*0x1001e47ef*/
      a1,
      *a2,
      a2[1]);
    return a1; /*0x1001e47f4*/
  }
  else
  {
    *a1 = 0; /*0x1001e47fe*/
    a1[2] = 0; /*0x1001e4805*/
    return a1; /*0x1001e480d*/
  }
}