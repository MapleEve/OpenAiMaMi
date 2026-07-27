// __ZN13codexmate_lib4core5relay10translator37remove_anthropic_output_config_effort @ 0x10087d950 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::relay::translator::remove_anthropic_output_config_effort::hd25abaccb71c0d64(
        _BYTE *a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // r14
  _BYTE v3[48]; // [rsp+0h] [rbp-30h] BYREF

  result = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x10087d96d*/
                      "output_config",
                      13,
                      a1);
  if ( result && *result == 5 ) /*0x10087d97a*/
  {
    v2 = result; /*0x10087d97c*/
    result = (_BYTE *)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10087d996*/
                        v3,
                        result + 8,
                        "effortoutput_config",
                        6);
    if ( v3[0] != 6 ) /*0x10087d99f*/
      result = (_BYTE *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v3); /*0x10087d9a5*/
    if ( !*((_QWORD *)v2 + 3) && *a1 == 5 ) /*0x10087d9b4*/
    {
      result = (_BYTE *)alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x10087d9cd*/
                          v3,
                          a1 + 8,
                          "output_config",
                          13);
      if ( v3[0] != 6 ) /*0x10087d9d6*/
        return (_BYTE *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v3); /*0x10087d9dc*/
    }
  }
  return result; /*0x10087d9e1*/
}