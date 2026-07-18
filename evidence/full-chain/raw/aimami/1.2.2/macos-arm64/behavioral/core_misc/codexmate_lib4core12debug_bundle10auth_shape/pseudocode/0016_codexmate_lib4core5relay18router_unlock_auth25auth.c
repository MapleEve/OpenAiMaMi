// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x10055b6c0 d=1
__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h30033325e6399d11(
        __int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int8 *v2; // rax
  __int64 v3; // rdx
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+8h] [rbp-78h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-60h] BYREF
  char v11; // [rsp+48h] [rbp-38h]
  unsigned __int8 *v12; // [rsp+50h] [rbp-30h]

  LODWORD(v1) = 0; /*0x10055b6d9*/
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::ha2b2474904704ca2() /*0x10055b6f2*/
    && *(_QWORD *)(a1 + 72) != 0x8000000000000000LL )
  {
    v2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14( /*0x10055b6fc*/
           *(unsigned __int8 **)(a1 + 80),
           *(_QWORD *)(a1 + 88));
    if ( !v3 || v3 != 1 && *(_WORD *)v2 == 24415 ) /*0x10055b714*/
      goto LABEL_9; /*0x10055b714*/
    v12 = v2; /*0x10055b716*/
    v10[0] = v2; /*0x10055b71a*/
    v10[1] = v3; /*0x10055b71e*/
    v10[2] = 0; /*0x10055b722*/
    v10[3] = v3; /*0x10055b72a*/
    v10[4] = 0x2E0000002ELL; /*0x10055b738*/
    v11 = 1; /*0x10055b73c*/
    v1 = -1; /*0x10055b740*/
    do /*0x10055b762*/
    {
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10055b756*/
        v9,
        v10);
      ++v1; /*0x10055b75b*/
    }
    while ( v9[0] ); /*0x10055b762*/
    if ( v1 < 2 ) /*0x10055b768*/
      goto LABEL_9; /*0x10055b768*/
    v5 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h84b17a541fcbc801(v12); /*0x10055b786*/
    LOBYTE(v1) = 1; /*0x10055b797*/
    if ( (v5 & (v6 < 301)) != 1 ) /*0x10055b79d*/
      return (unsigned int)v1; /*0x10055b79d*/
    if ( *(_QWORD *)(a1 + 96) != 0x8000000000000000LL /*0x10055b7bf*/
      && (v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(
                 *(unsigned __int8 **)(a1 + 104),
                 *(_QWORD *)(a1 + 112)),
          v8) )
    {
      if ( v8 != 1 ) /*0x10055b7c5*/
        LOBYTE(v1) = *(_WORD *)v7 != 24415; /*0x10055b7cc*/
    }
    else
    {
LABEL_9:
      LODWORD(v1) = 0; /*0x10055b76a*/
    }
  }
  return (unsigned int)v1; /*0x10055b770*/
}