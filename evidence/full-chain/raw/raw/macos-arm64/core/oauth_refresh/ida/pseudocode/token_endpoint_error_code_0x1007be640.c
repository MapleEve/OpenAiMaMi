// __ZN13codexmate_lib4core13oauth_refresh25token_endpoint_error_code @ 0x1007be640
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::token_endpoint_error_code | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::token_endpoint_error_code::h68362271bd0989f4(
        size_t *a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  size_t v6; // rdx
  unsigned __int8 *v7; // r15
  size_t v8; // r14
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  void *v13; // rax
  size_t v14; // r12

  result = a2[3]; /*0x1007be658*/
  if ( __OFSUB__(-result, 1) ) /*0x1007be662*/
  {
    v4 = 0; /*0x1007be693*/
    if ( a2[6] == 0x8000000000000000LL ) /*0x1007be699*/
      goto LABEL_11; /*0x1007be699*/
  }
  else
  {
    if ( result == 0x8000000000000001LL ) /*0x1007be671*/
    {
      v4 = a2[5]; /*0x1007be689*/
      result = a2[6]; /*0x1007be68d*/
      goto LABEL_13; /*0x1007be691*/
    }
    if ( result == 0x8000000000000002LL ) /*0x1007be680*/
    {
      if ( *a2 == 0x8000000000000000LL ) /*0x1007be685*/
        goto LABEL_19; /*0x1007be685*/
LABEL_17:
      v4 = a2[1]; /*0x1007be6d3*/
      result = a2[2]; /*0x1007be6d7*/
      goto LABEL_18; /*0x1007be6d7*/
    }
    v4 = a2[4]; /*0x1007be6a6*/
    result = a2[5]; /*0x1007be6aa*/
    if ( a2[6] == 0x8000000000000000LL ) /*0x1007be6b2*/
    {
LABEL_11:
      v5 = 0; /*0x1007be6b4*/
      if ( v4 ) /*0x1007be6b9*/
        goto LABEL_13; /*0x1007be6b9*/
      goto LABEL_12; /*0x1007be6b9*/
    }
  }
  v5 = a2[7]; /*0x1007be69b*/
  if ( !v4 ) /*0x1007be6a2*/
  {
LABEL_12:
    result = a2[8]; /*0x1007be6bb*/
    v4 = v5; /*0x1007be6bf*/
  }
LABEL_13:
  if ( *a2 == 0x8000000000000000LL ) /*0x1007be6c5*/
  {
    if ( !v4 ) /*0x1007be6ca*/
      goto LABEL_19; /*0x1007be6ca*/
    goto LABEL_18; /*0x1007be6ca*/
  }
  if ( !v4 ) /*0x1007be6d1*/
    goto LABEL_17; /*0x1007be6d1*/
LABEL_18:
  v7 = (unsigned __int8 *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, result); /*0x1007be6db*/
  result = v6 - 65; /*0x1007be6e6*/
  if ( v6 - 65 >= 0xFFFFFFFFFFFFFFC0LL ) /*0x1007be6ee*/
  {
    v8 = v6; /*0x1007be6f8*/
    result = 0; /*0x1007be6fb*/
    v9 = 0x4000000000003LL; /*0x1007be6fd*/
    while ( 1 ) /*0x1007be718*/
    {
      v10 = v7[result]; /*0x1007be718*/
      v11 = (unsigned int)(v10 - 48); /*0x1007be71d*/
      if ( (unsigned __int8)(v10 - 48) >= 0xAu ) /*0x1007be724*/
      {
        v11 = v7[result]; /*0x1007be726*/
        LOBYTE(v11) = (v10 & 0xDF) - 65; /*0x1007be72c*/
        if ( (unsigned __int8)v11 >= 0x1Au ) /*0x1007be734*/
        {
          v12 = (unsigned int)(v10 - 45); /*0x1007be736*/
          if ( (unsigned int)v12 > 0x32 || !_bittest64(&v9, v12) ) /*0x1007be742*/
            break; /*0x1007be742*/
        }
      }
      if ( v8 == ++result ) /*0x1007be716*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v11); /*0x1007be746*/
        v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1007be753*/
        if ( !v13 ) /*0x1007be75b*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x1007be78a*/
        v14 = (size_t)v13; /*0x1007be75d*/
        result = (__int64)memcpy(v13, v7, v8); /*0x1007be769*/
        *a1 = v8; /*0x1007be76e*/
        a1[1] = v14; /*0x1007be771*/
        a1[2] = v8; /*0x1007be775*/
        return result; /*0x1007be781*/
      }
    }
  }
LABEL_19:
  *a1 = 0x8000000000000000LL; /*0x1007be6f0*/
  return result; /*0x1007be779*/
}