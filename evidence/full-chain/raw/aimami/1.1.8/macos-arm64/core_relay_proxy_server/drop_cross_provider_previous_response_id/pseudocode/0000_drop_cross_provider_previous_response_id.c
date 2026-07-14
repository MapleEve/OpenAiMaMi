// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND drop_cross_provider_previous_response_id node 0x1005bd5e0 depth=0
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::drop_cross_provider_previous_response_id::h59187192d0f9ac07(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_BYTE *)a2 == 5 ) /*0x1005bd5f4*/
  {
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::ha4a32ae9a99cdf0e( /*0x1005bd60a*/
      v4,
      a2 + 1,
      &unk_1012CAC09,
      0x14u);
    if ( LOBYTE(v4[0]) != 6 ) /*0x1005bd613*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v4); /*0x1005bd619*/
  }
  a1[3] = a2[3]; /*0x1005bd622*/
  a1[2] = a2[2]; /*0x1005bd62a*/
  v2 = *a2; /*0x1005bd62e*/
  a1[1] = a2[1]; /*0x1005bd635*/
  *a1 = v2; /*0x1005bd639*/
  return a1; /*0x1005bd63f*/
}