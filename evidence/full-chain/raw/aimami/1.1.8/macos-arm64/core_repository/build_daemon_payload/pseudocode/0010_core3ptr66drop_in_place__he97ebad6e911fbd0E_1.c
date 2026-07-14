// mac 1.1.8 BEHAVIORAL-BACKEND build_daemon_payload node 0x10054b020 depth=1
// core3ptr66drop_in_place::he97ebad6e911fbd0E_1
__int64 __fastcall core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(
        __int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 result; // rax

  if ( !__OFSUB__(-a1[3], 1) && a1[3] ) /*0x10054b035*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054b048*/
  v2 = a1[2] + 1; /*0x10054b055*/
  v3 = a1[1]; /*0x10054b058*/
  while ( v2 != 1 ) /*0x10054b064*/
  {
    --v2; /*0x10054b06d*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h3ff0f72072d7b435(v3); /*0x10054b070*/
    v3 += 360; /*0x10054b075*/
  }
  result = *a1; /*0x10054b07a*/
  if ( *a1 ) /*0x10054b07a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054b09f*/
  return result; /*0x10054b095*/
}