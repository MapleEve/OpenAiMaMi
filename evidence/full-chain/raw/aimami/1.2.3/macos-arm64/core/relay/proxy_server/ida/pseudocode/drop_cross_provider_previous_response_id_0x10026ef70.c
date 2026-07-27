// __ZN13codexmate_lib4core5relay12proxy_server40drop_cross_provider_previous_response_id @ 0x10026ef70 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::proxy_server::drop_cross_provider_previous_response_id::h40e9e7b8e03be2ad(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _BYTE v4[48]; // [rsp+0h] [rbp-30h] BYREF

  if ( *(_BYTE *)a2 == 5 ) /*0x10026ef84*/
  {
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10026ef9a*/
      v4,
      a2 + 1,
      "previous_response_idweb_search[AiMaMi] web_search tool rejected by upstream; retrying without itcodex responses tr"
      "anslated stream failedcodex-router",
      20);
    if ( v4[0] != 6 ) /*0x10026efa3*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v4); /*0x10026efa9*/
  }
  a1[3] = a2[3]; /*0x10026efb2*/
  a1[2] = a2[2]; /*0x10026efba*/
  v2 = *a2; /*0x10026efbe*/
  a1[1] = a2[1]; /*0x10026efc5*/
  *a1 = v2; /*0x10026efc9*/
  return a1; /*0x10026efcf*/
}