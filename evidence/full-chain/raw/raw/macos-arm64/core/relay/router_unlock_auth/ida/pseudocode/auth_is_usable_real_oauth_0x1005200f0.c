// __ZN13codexmate_lib4core5relay18router_unlock_auth25auth_is_usable_real_oauth @ 0x1005200f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(
        _QWORD *a1)
{
  unsigned __int64 v1; // r14
  _WORD *v2; // rax
  __int64 v3; // rdx
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  _WORD *v7; // rax
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+48h] [rbp-38h]
  _WORD *v12; // [rsp+50h] [rbp-30h]

  LODWORD(v1) = 0; /*0x100520109*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(a1) /*0x100520122*/
    && a1[9] != 0x8000000000000000LL )
  {
    v2 = (_WORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[10], a1[11]); /*0x10052012c*/
    if ( !v3 || v3 != 1 && *v2 == 24415 ) /*0x100520144*/
      goto LABEL_9; /*0x100520144*/
    v12 = v2; /*0x100520146*/
    v10[0] = v2; /*0x10052014a*/
    v10[1] = v3; /*0x10052014e*/
    v10[2] = 0; /*0x100520152*/
    v10[3] = v3; /*0x10052015a*/
    v10[4] = 0x2E0000002ELL; /*0x100520168*/
    v11 = 1; /*0x10052016c*/
    v1 = -1; /*0x100520170*/
    do /*0x100520192*/
    {
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100520186*/
        v9,
        v10);
      ++v1; /*0x10052018b*/
    }
    while ( v9[0] ); /*0x100520192*/
    if ( v1 < 2 ) /*0x100520198*/
      goto LABEL_9; /*0x100520198*/
    v5 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(v12); /*0x1005201b6*/
    LOBYTE(v1) = 1; /*0x1005201c7*/
    if ( (v5 & (v6 < 301)) != 1 ) /*0x1005201cd*/
      return (unsigned int)v1; /*0x1005201cd*/
    if ( a1[12] != 0x8000000000000000LL /*0x1005201ef*/
      && (v7 = (_WORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1[13], a1[14]), v8) )
    {
      if ( v8 != 1 ) /*0x1005201f5*/
        LOBYTE(v1) = *v7 != 24415; /*0x1005201fc*/
    }
    else
    {
LABEL_9:
      LODWORD(v1) = 0; /*0x10052019a*/
    }
  }
  return (unsigned int)v1; /*0x1005201a0*/
}