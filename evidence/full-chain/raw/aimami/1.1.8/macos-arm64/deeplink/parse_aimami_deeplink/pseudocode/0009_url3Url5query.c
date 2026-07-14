// mac 1.1.8 parse_aimami_deeplink node va=0x101071710 depth=1
// url3Url5query
__int64 __fastcall url::Url::query::h1af7b45471000a3f(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 24) != 1 ) /*0x101071718*/
    return 0; /*0x10107174c*/
  v1 = (unsigned int)(*(_DWORD *)(a1 + 28) + 1); /*0x10107171d*/
  v2 = *(_QWORD *)(a1 + 8); /*0x10107171f*/
  v3 = *(_QWORD *)(a1 + 16); /*0x101071723*/
  if ( !*(_BYTE *)(a1 + 32) ) /*0x10107172b*/
  {
    if ( *(_DWORD *)(a1 + 28) != -1 ) /*0x101071750*/
    {
      if ( v3 <= v1 ) /*0x101071755*/
      {
        if ( v3 != v1 ) /*0x10107176f*/
LABEL_12:
          core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x10107175d*/
      }
      else if ( *(char *)(v2 + v1) <= -65 ) /*0x10107175b*/
      {
        goto LABEL_12; /*0x10107175b*/
      }
    }
    return v1 + v2; /*0x10107177e*/
  }
  v4 = *(unsigned int *)(a1 + 36); /*0x10107172d*/
  if ( (unsigned int)v1 > (unsigned int)v4 ) /*0x101071732*/
    goto LABEL_19; /*0x101071732*/
  if ( *(_DWORD *)(a1 + 28) != -1 ) /*0x101071737*/
  {
    if ( v3 <= v1 ) /*0x10107173c*/
    {
      if ( v3 != v1 ) /*0x10107177f*/
        goto LABEL_19; /*0x10107177f*/
    }
    else if ( *(char *)(v2 + v1) <= -65 ) /*0x101071742*/
    {
LABEL_19:
      core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x101071791*/
    }
  }
  if ( *(_DWORD *)(a1 + 36) ) /*0x10107172d*/
  {
    if ( v3 <= v4 ) /*0x101071789*/
    {
      if ( v3 != v4 ) /*0x1010717a0*/
        goto LABEL_19; /*0x1010717a0*/
    }
    else if ( *(char *)(v2 + v4) <= -65 ) /*0x10107178f*/
    {
      goto LABEL_19; /*0x10107178f*/
    }
  }
  return v1 + v2; /*0x10107174b*/
}