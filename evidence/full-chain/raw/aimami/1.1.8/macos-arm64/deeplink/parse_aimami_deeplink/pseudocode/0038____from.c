// mac 1.1.8 parse_aimami_deeplink node va=0x10107b530 depth=3
// _::from
char __fastcall _$LT$url..parser..SchemeType$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::h148f01d8723d4332(
        __int64 a1)
{
  __int64 v1; // rax
  char result; // al
  unsigned __int32 v3; // eax
  bool v4; // zf

  v1 = *(_QWORD *)(a1 + 8); /*0x10107b542*/
  switch ( *(_QWORD *)(a1 + 16) ) /*0x10107b554*/
  {
    case 2LL: /*0x10107b554*/
      if ( *(_WORD *)v1 == 29559 ) /*0x10107b55b*/
        return 1; /*0x10107b55b*/
      goto LABEL_3; /*0x10107b55b*/
    case 3LL: /*0x10107b554*/
      if ( !(*(_WORD *)v1 ^ 0x7377 | *(unsigned __int8 *)(v1 + 2) ^ 0x73) ) /*0x10107b5ae*/
        return 1; /*0x10107b5ae*/
      v4 = (*(_WORD *)v1 ^ 0x7466 | *(unsigned __int8 *)(v1 + 2) ^ 0x70) == 0; /*0x10107b5c0*/
      goto LABEL_9; /*0x10107b5c0*/
    case 4LL: /*0x10107b554*/
      if ( *(_DWORD *)v1 == 1886680168 ) /*0x10107b567*/
        return 1; /*0x10107b5cc*/
      v3 = _byteswap_ulong(*(_DWORD *)v1); /*0x10107b56b*/
      return 2 * ((char)((v3 >= 0x66696C66) - (v3 < 0x66696C65)) != 0); /*0x10107b588*/
    case 5LL: /*0x10107b554*/
      v4 = (*(_DWORD *)v1 ^ 0x70747468 | *(unsigned __int8 *)(v1 + 4) ^ 0x73) == 0; /*0x10107b597*/
LABEL_9:
      result = 2 - v4; /*0x10107b5c3*/
      break; /*0x10107b5cb*/
    default:
LABEL_3:
      result = 2; /*0x10107b55d*/
      break; /*0x10107b560*/
  }
  return result; /*0x10107b55f*/
}