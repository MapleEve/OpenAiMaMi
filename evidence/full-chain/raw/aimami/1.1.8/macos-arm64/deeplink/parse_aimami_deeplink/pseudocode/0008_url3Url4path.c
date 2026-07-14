// mac 1.1.8 parse_aimami_deeplink node va=0x101071670 depth=1
// url3Url4path
__int64 __fastcall url::Url::path::hdacd300d547f5011(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx

  if ( *(_DWORD *)(a1 + 24) == 1 ) /*0x101071678*/
  {
    v1 = (unsigned int *)(a1 + 28); /*0x10107167a*/
LABEL_5:
    v2 = *v1; /*0x10107168a*/
    v3 = *(unsigned int *)(a1 + 60); /*0x10107168c*/
    v4 = *(_QWORD *)(a1 + 8); /*0x10107168f*/
    v5 = *(_QWORD *)(a1 + 16); /*0x101071693*/
    if ( (unsigned int)v3 > (unsigned int)v2 ) /*0x101071699*/
      goto LABEL_20; /*0x101071699*/
    if ( *(_DWORD *)(a1 + 60) ) /*0x10107168c*/
    {
      if ( v5 <= v3 ) /*0x1010716a3*/
      {
        if ( v5 != v3 ) /*0x1010716ca*/
          goto LABEL_20; /*0x1010716ca*/
      }
      else if ( *(char *)(v4 + v3) <= -65 ) /*0x1010716a9*/
      {
        goto LABEL_20; /*0x1010716a9*/
      }
    }
    if ( v2 ) /*0x1010716cf*/
    {
      if ( v5 <= v2 ) /*0x1010716d4*/
      {
        if ( v5 != v2 ) /*0x1010716de*/
          goto LABEL_20; /*0x1010716de*/
      }
      else if ( *(char *)(v4 + v2) <= -65 ) /*0x1010716da*/
      {
LABEL_20:
        core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x1010716e0*/
      }
    }
    return v3 + v4; /*0x1010716da*/
  }
  if ( *(_BYTE *)(a1 + 32) ) /*0x101071680*/
  {
    v1 = (unsigned int *)(a1 + 36); /*0x101071686*/
    goto LABEL_5; /*0x101071686*/
  }
  v3 = *(unsigned int *)(a1 + 60); /*0x1010716ad*/
  v4 = *(_QWORD *)(a1 + 8); /*0x1010716b0*/
  v6 = *(_QWORD *)(a1 + 16); /*0x1010716b4*/
  if ( *(_DWORD *)(a1 + 60) ) /*0x1010716ad*/
  {
    if ( v6 <= v3 ) /*0x1010716c0*/
    {
      if ( v6 == v3 ) /*0x1010716ef*/
        return v3 + v4; /*0x1010716ef*/
    }
    else if ( *(char *)(v4 + v3) > -65 ) /*0x1010716c6*/
    {
      return v3 + v4; /*0x1010716c6*/
    }
    core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x101071709*/
  }
  return v3 + v4; /*0x1010716fa*/
}