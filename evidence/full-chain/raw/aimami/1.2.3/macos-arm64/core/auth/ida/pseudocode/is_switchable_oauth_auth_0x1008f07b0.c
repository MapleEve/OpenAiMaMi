// __ZN13codexmate_lib4core4auth24is_switchable_oauth_auth @ 0x1008f07b0 | 基线 same-set
bool __fastcall codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(_QWORD *a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r12
  bool result; // al
  _WORD *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  _BYTE v8[24]; // [rsp+8h] [rbp-68h] BYREF
  _WORD *v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  char v14; // [rsp+48h] [rbp-28h]

  if ( (unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(a1) /*0x1008f07d2*/
    || codexmate_lib::core::auth::is_api_key_auth::h123048d1ccd9695c(a1) )
  {
    return 0; /*0x1008f07d9*/
  }
  if ( __OFSUB__(0, a1[6]) ) /*0x1008f07e5*/
    goto LABEL_13; /*0x1008f07e5*/
  v1 = (_WORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[7], a1[8]); /*0x1008f07ef*/
  if ( !v2 || v2 != 1 && *v1 == 24415 ) /*0x1008f0804*/
    goto LABEL_13; /*0x1008f0804*/
  v9 = v1; /*0x1008f0806*/
  v10 = v2; /*0x1008f080a*/
  v11 = 0; /*0x1008f080e*/
  v12 = v2; /*0x1008f0816*/
  v13 = 0x2E0000002ELL; /*0x1008f0824*/
  v14 = 1; /*0x1008f0828*/
  v3 = -1; /*0x1008f082c*/
  do /*0x1008f0852*/
  {
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008f0846*/
      v8,
      &v9);
    ++v3; /*0x1008f084b*/
  }
  while ( v8[0] ); /*0x1008f0852*/
  result = 1; /*0x1008f0854*/
  if ( v3 <= 1 ) /*0x1008f085a*/
  {
LABEL_13:
    if ( a1[9] != 0x8000000000000000LL ) /*0x1008f086e*/
    {
      v5 = (_WORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[10], a1[11]); /*0x1008f0878*/
      if ( v6 ) /*0x1008f0880*/
      {
        if ( v6 == 1 || *v5 != 24415 ) /*0x1008f088d*/
        {
          v9 = v5; /*0x1008f088f*/
          v10 = v6; /*0x1008f0893*/
          v11 = 0; /*0x1008f0897*/
          v12 = v6; /*0x1008f089f*/
          v13 = 0x2E0000002ELL; /*0x1008f08ad*/
          v14 = 1; /*0x1008f08b1*/
          v7 = -1; /*0x1008f08b5*/
          do /*0x1008f08e2*/
          {
            _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1008f08d6*/
              v8,
              &v9);
            ++v7; /*0x1008f08db*/
          }
          while ( v8[0] ); /*0x1008f08e2*/
          return v7 >= 2; /*0x1008f08eb*/
        }
      }
    }
    return 0; /*0x1008f08ed*/
  }
  return result; /*0x1008f08ef*/
}