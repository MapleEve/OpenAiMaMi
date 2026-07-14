// mac 1.1.8 behavioral keychain_delete_api_key 0x1010fb960 d=2
__int64 __fastcall _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc057c681e800330e(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v4; // [rsp+18h] [rbp-28h] BYREF
  __int64 v5; // [rsp+20h] [rbp-20h]
  __int64 v6; // [rsp+28h] [rbp-18h]
  _BYTE v7[9]; // [rsp+37h] [rbp-9h] BYREF

  v4 = 0; /*0x1010fb96f*/
  v5 = 1; /*0x1010fb977*/
  v6 = 0; /*0x1010fb97f*/
  v3[2] = 1610612768; /*0x1010fb987*/
  v3[0] = &v4; /*0x1010fb993*/
  v3[1] = &anon_fdfbeb4f975d8e02b9c40da81dc33589_434; /*0x1010fb99e*/
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _QWORD *))_$LT$security_framework..base..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8fc3889bd8b7561e)( /*0x1010fb9a9*/
                          a2,
                          v3) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1010fb9ee*/
      (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_435,
      55,
      (__int64)v7,
      (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_449,
      (__int64)&anon_fdfbeb4f975d8e02b9c40da81dc33589_437);
  a1[2] = v6; /*0x1010fb9b6*/
  result = v4; /*0x1010fb9ba*/
  a1[1] = v5; /*0x1010fb9c2*/
  *a1 = result; /*0x1010fb9c6*/
  return result; /*0x1010fb9c9*/
}