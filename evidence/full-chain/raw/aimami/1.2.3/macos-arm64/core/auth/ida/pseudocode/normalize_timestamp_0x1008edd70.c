// __ZN13codexmate_lib4core4auth19normalize_timestamp @ 0x1008edd70 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  char v9; // cl
  double v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r14
  int v16; // eax
  __int64 v18; // [rsp+8h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-48h] BYREF
  __int128 v20; // [rsp+20h] [rbp-40h]
  _DWORD v21[12]; // [rsp+30h] [rbp-30h] BYREF

  if ( !a2 ) /*0x1008edd85*/
    goto LABEL_16; /*0x1008edd85*/
  v4 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008edd91*/
  if ( !v5 ) /*0x1008edd99*/
    goto LABEL_16; /*0x1008edd99*/
  v6 = v4; /*0x1008edd9f*/
  v7 = v5; /*0x1008edda9*/
  core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::he4c24a427e6bb1fc( /*0x1008eddac*/
    &v19,
    v4,
    v5);
  if ( (_BYTE)v19 != 1 ) /*0x1008eddb5*/
  {
    v10 = *(double *)&v20; /*0x1008ede0c*/
    if ( *(double *)&v20 > 1.0e11 ) /*0x1008ede19*/
      v10 = *(double *)&v20 / 1000.0; /*0x1008ede1b*/
    v11 = 0x7FFFFFFFFFFFFFFFLL; /*0x1008ede30*/
    if ( v10 <= 9.223372036854775e18 ) /*0x1008ede3a*/
      v11 = (unsigned int)(int)v10; /*0x1008ede3a*/
    v12 = v11; /*0x1008ede44*/
    v13 = v11 / 86400; /*0x1008ede63*/
    v14 = (v12 % 86400) >> 63; /*0x1008ede76*/
    v15 = v12 % 86400 + 86400; /*0x1008ede80*/
    if ( v12 % 86400 >= 0 ) /*0x1008ede88*/
      v15 = v12 % 86400; /*0x1008ede88*/
    if ( (unsigned __int64)(v14 + v13 - 2146764485) >= 0xFFFFFFFF00000000LL ) /*0x1008edea1*/
    {
      v16 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v13 + v14 + 719163)); /*0x1008edeac*/
      if ( v16 ) /*0x1008edeb3*/
      {
        v21[0] = v16; /*0x1008edeb5*/
        v21[1] = v15; /*0x1008edeb8*/
        v21[2] = 0; /*0x1008edebc*/
        chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339::h4e0440ad218358de(a1, v21); /*0x1008edeca*/
        return a1; /*0x1008edecf*/
      }
    }
LABEL_16:
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1008eded1*/
    return a1; /*0x1008ededb*/
  }
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x1008eddcb*/
    v21,
    v6,
    v7);
  if ( v21[0] /*0x1008eddfe*/
    && (chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339::h4e0440ad218358de(&v19, v21),
        v8 = v19,
        v9 = v20,
        v18 = *(_QWORD *)((char *)&v20 + 1),
        v19 != 0x8000000000000000LL) )
  {
    *(_QWORD *)(a1 + 16) = *((_QWORD *)&v20 + 1); /*0x1008edef6*/
    *(_QWORD *)(a1 + 9) = v18; /*0x1008edefa*/
    *(_QWORD *)a1 = v8; /*0x1008edefe*/
    *(_BYTE *)(a1 + 8) = v9; /*0x1008edf01*/
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1008ede04*/
  }
  return a1; /*0x1008edee1*/
}