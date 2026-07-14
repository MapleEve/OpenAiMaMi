// win 1.1.8 detect_api_proxy_config node va=0x1400d59c0 depth=2
// D59C0
volatile signed __int64 *__fastcall sub_1400D59C0(__int64 *a1)
{
  __int64 v1; // rdx
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[41]) ) /*0x1400d59de*/
    sub_140E0A8A0(a1 + 41); /*0x1400d59ef*/
  v1 = a1[19]; /*0x1400d59f9*/
  if ( v1 ) /*0x1400d5a03*/
    sub_140001370(a1[20], v1, 1); /*0x1400d5a12*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[17]) ) /*0x1400d5a1e*/
    sub_1404E9190(a1 + 17); /*0x1400d5a2f*/
  sub_14004C1B0((__int64)a1); /*0x1400d5a39*/
  if ( !_InterlockedDecrement64((volatile signed __int64 *)a1[42]) ) /*0x1400d5a4a*/
    sub_140E0B010(a1 + 42); /*0x1400d5a5b*/
  sub_1400453B0((__int64)(a1 + 22)); /*0x1400d5a6c*/
  result = (volatile signed __int64 *)a1[43]; /*0x1400d5a76*/
  if ( !_InterlockedDecrement64(result) ) /*0x1400d5a7d*/
    return (volatile signed __int64 *)sub_140E0ACC0(a1 + 43); /*0x1400d5a90*/
  return result; /*0x1400d5a8a*/
}