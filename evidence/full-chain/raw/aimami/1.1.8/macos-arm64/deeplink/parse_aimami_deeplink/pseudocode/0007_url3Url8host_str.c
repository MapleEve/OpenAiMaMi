// mac 1.1.8 parse_aimami_deeplink node va=0x101071870 depth=1
// url3Url8host_str
__int64 __fastcall url::Url::host_str::h951633b861c322f2(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rsi

  if ( !*(_BYTE *)(a1 + 64) ) /*0x101071870*/
    return 0; /*0x10107189a*/
  v1 = *(unsigned int *)(a1 + 52); /*0x101071876*/
  v2 = *(unsigned int *)(a1 + 56); /*0x101071879*/
  v3 = *(_QWORD *)(a1 + 8); /*0x10107187c*/
  v4 = *(_QWORD *)(a1 + 16); /*0x101071880*/
  if ( (unsigned int)v1 > (unsigned int)v2 ) /*0x101071886*/
    goto LABEL_12; /*0x101071886*/
  if ( *(_DWORD *)(a1 + 52) ) /*0x101071876*/
  {
    if ( v4 <= v1 ) /*0x101071890*/
    {
      if ( v4 != v1 ) /*0x1010718a0*/
        goto LABEL_12; /*0x1010718a0*/
    }
    else if ( *(char *)(v3 + v1) <= -65 ) /*0x101071896*/
    {
LABEL_12:
      core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x1010718b2*/
    }
  }
  if ( *(_DWORD *)(a1 + 56) ) /*0x101071879*/
  {
    if ( v4 <= v2 ) /*0x1010718aa*/
    {
      if ( v4 != v2 ) /*0x1010718c5*/
        goto LABEL_12; /*0x1010718c5*/
    }
    else if ( *(char *)(v3 + v2) <= -65 ) /*0x1010718b0*/
    {
      goto LABEL_12; /*0x1010718b0*/
    }
  }
  return v1 + v3; /*0x10107189f*/
}