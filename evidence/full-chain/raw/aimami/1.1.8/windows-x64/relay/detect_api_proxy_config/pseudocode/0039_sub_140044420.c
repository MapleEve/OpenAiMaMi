// win 1.1.8 detect_api_proxy_config node va=0x140044420 depth=2
// sub_140044420
__int64 __fastcall sub_140044420(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-18h]
  __int64 v5; // [rsp+30h] [rbp-10h]

  result = *a1; /*0x140044432*/
  if ( *a1 != 0x8000000000000002uLL ) /*0x140044442*/
  {
    if ( __OFSUB__(-result, 1) ) /*0x140044450*/
    {
      v3 = a1[1]; /*0x1400444a4*/
      if ( v3 ) /*0x1400444ab*/
        return sub_140001370(a1[2], v3, 1); /*0x1400444bc*/
    }
    else if ( result == 0x8000000000000001uLL ) /*0x14004445f*/
    {
      result = a1[2]; /*0x140044461*/
      v4 = result; /*0x140044465*/
      if ( result ) /*0x14004446c*/
      {
        v5 = a1[3]; /*0x140044472*/
        if ( *(_QWORD *)v5 ) /*0x140044476*/
          (*(void (__fastcall **)(__int64))v5)(result); /*0x140044482*/
        result = v5; /*0x140044485*/
        v2 = *(_QWORD *)(v5 + 8); /*0x140044489*/
        if ( v2 ) /*0x140044490*/
          return sub_140001370(v4, v2, *(_QWORD *)(v5 + 16)); /*0x14004449f*/
      }
    }
    else
    {
      return sub_1400414A0(a1); /*0x1400444c6*/
    }
  }
  return result; /*0x140044444*/
}