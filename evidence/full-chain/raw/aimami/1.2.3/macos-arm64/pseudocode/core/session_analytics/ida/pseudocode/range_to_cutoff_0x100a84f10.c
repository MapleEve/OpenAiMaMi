// __ZN13codexmate_lib4core17session_analytics15range_to_cutoff @ 0x100a84f10 | 基线 same-set
__int64 __fastcall codexmate_lib::core::session_analytics::range_to_cutoff::hbe9b944a87b55264(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // r14d
  int v12; // esi
  int v13; // edx
  unsigned int v14; // edx
  unsigned __int64 v15; // [rsp+0h] [rbp-70h] BYREF
  int v16; // [rsp+8h] [rbp-68h]
  int v17; // [rsp+Ch] [rbp-64h] BYREF
  unsigned int v18; // [rsp+10h] [rbp-60h]
  unsigned int v19; // [rsp+14h] [rbp-5Ch]
  __int64 v20; // [rsp+18h] [rbp-58h] BYREF
  int v21; // [rsp+20h] [rbp-50h]
  _BYTE v22[12]; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h]
  _BYTE v25[25]; // [rsp+57h] [rbp-19h] BYREF

  v20 = std::time::SystemTime::now::h1fe79e41f9d5677f(a1, a2); /*0x100a84f28*/
  v21 = v2; /*0x100a84f2c*/
  v3 = 0; /*0x100a84f2f*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v23, &v20, 0, 0); /*0x100a84f3d*/
  if ( !(_BYTE)v23 ) /*0x100a84f46*/
    v3 = v24; /*0x100a84f48*/
  if ( a2 != 5 ) /*0x100a84f50*/
    return v3 - 604800; /*0x100a84f50*/
  if ( *(_DWORD *)a1 ^ 0x61646F74 | *(unsigned __int8 *)(a1 + 4) ^ 0x79 ) /*0x100a84f68*/
  {
    if ( !(*(_DWORD *)a1 ^ 0x746E6F6D | *(unsigned __int8 *)(a1 + 4) ^ 0x68) ) /*0x100a84f7c*/
      return v3 - 2592000; /*0x100a84f87*/
    return v3 - 604800; /*0x100a84f90*/
  }
  v6 = v3 / 86400; /*0x100a84fc0*/
  v7 = (v3 % 86400) >> 63; /*0x100a84fd3*/
  v8 = v3 % 86400 + 86400; /*0x100a84fdd*/
  if ( v3 % 86400 >= 0 ) /*0x100a84fe5*/
    v8 = v3 % 86400; /*0x100a84fe5*/
  if ( (unsigned __int64)(v7 + v6 - 2146764485) >= 0xFFFFFFFF00000000LL /*0x100a85010*/
    && (v9 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v6 + v7 + 719163))) != 0 )
  {
    v23 = __PAIR64__(v8, v9); /*0x100a85012*/
    LODWORD(v24) = 0; /*0x100a85019*/
  }
  else
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v23); /*0x100a85026*/
  }
  v16 = v24; /*0x100a8502e*/
  v15 = v23; /*0x100a85035*/
  v10 = _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_utc_datetime::h4d545212521a5e1d( /*0x100a85042*/
          1,
          &v23);
  chrono::naive::datetime::NaiveDateTime::checked_add_offset::h9b6d7eabe1f89a82(&v23, &v15, v10); /*0x100a85051*/
  if ( !(_DWORD)v23 ) /*0x100a8505b*/
    core::option::expect_failed::ha75f8bdcbd673567("Local time out of range for `NaiveDateTime`", 43, &off_101974140); /*0x100a85193*/
  *(_DWORD *)v22 = v23; /*0x100a85061*/
  *(_QWORD *)&v22[4] = 0; /*0x100a85064*/
  _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h9c582ad8c322b284( /*0x100a85078*/
    &v17,
    v25,
    v22);
  if ( v17 ) /*0x100a85082*/
  {
    if ( v17 == 1 ) /*0x100a85087*/
    {
      v11 = v19; /*0x100a85090*/
      LODWORD(v24) = *(_DWORD *)&v22[8]; /*0x100a85097*/
      v23 = *(_QWORD *)v22; /*0x100a8509e*/
      chrono::naive::datetime::NaiveDateTime::checked_sub_offset::h74ef1717b84bb014(&v20, &v23, v18); /*0x100a850aa*/
      LODWORD(v24) = *(_DWORD *)&v22[8]; /*0x100a850b2*/
      v23 = *(_QWORD *)v22; /*0x100a850b9*/
      chrono::naive::datetime::NaiveDateTime::checked_sub_offset::h74ef1717b84bb014(&v20, &v23, v11); /*0x100a850c8*/
    }
    return v3 - 86400; /*0x100a850cd*/
  }
  LODWORD(v24) = *(_DWORD *)&v22[8]; /*0x100a850d8*/
  v23 = *(_QWORD *)v22; /*0x100a850df*/
  chrono::naive::datetime::NaiveDateTime::checked_sub_offset::h74ef1717b84bb014(&v20, &v23, v18); /*0x100a850eb*/
  if ( !(_DWORD)v20 ) /*0x100a850f5*/
    return v3 - 86400; /*0x100a8517b*/
  v12 = ((int)v20 >> 13) - 1; /*0x100a850ff*/
  v13 = 0; /*0x100a85102*/
  if ( (int)v20 >> 13 <= 0 ) /*0x100a85106*/
  {
    v14 = (1 - ((int)v20 >> 13)) / 0x190u + 1; /*0x100a8511a*/
    v12 += 400 * v14; /*0x100a85122*/
    v13 = -146097 * v14; /*0x100a85124*/
  }
  return HIDWORD(v20) /*0x100a84f9a*/
       + 86400LL
       * (int)(((v12 / 100) >> 2) + ((1461 * v12) >> 2) + v13 + (((unsigned int)v20 >> 4) & 0x1FF) - v12 / 100 - 719163);
}