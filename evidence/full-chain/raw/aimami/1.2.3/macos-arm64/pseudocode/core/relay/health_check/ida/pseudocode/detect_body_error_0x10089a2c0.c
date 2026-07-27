// __ZN13codexmate_lib4core5relay12health_check17detect_body_error @ 0x10089a2c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::health_check::detect_body_error::hda5d5a078b6f58c3(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-90h]
  _DWORD v20[4]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v21; // [rsp+18h] [rbp-78h]
  __int64 v22; // [rsp+20h] [rbp-70h]
  __int64 v23; // [rsp+28h] [rbp-68h]
  _QWORD v24[5]; // [rsp+30h] [rbp-60h] BYREF
  char v25; // [rsp+58h] [rbp-38h]
  __int16 v26; // [rsp+60h] [rbp-30h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x10089a2da*/
  if ( v4 ) /*0x10089a2e2*/
  {
    v5 = v3; /*0x10089a2e8*/
    v6 = v4; /*0x10089a2eb*/
    codexmate_lib::core::relay::health_check::error_message_from_json::hb4424646a1d8d349(a1, v3, v4); /*0x10089a2f4*/
    if ( __OFSUB__(0, *a1) ) /*0x10089a2fb*/
    {
      v22 = 0; /*0x10089a304*/
      v23 = v6; /*0x10089a30c*/
      v24[0] = v5; /*0x10089a314*/
      v24[1] = v6; /*0x10089a318*/
      v24[2] = 0; /*0x10089a31c*/
      v24[3] = v6; /*0x10089a324*/
      v24[4] = 0xA0000000ALL; /*0x10089a332*/
      v25 = 1; /*0x10089a336*/
      v26 = 0; /*0x10089a33a*/
      while ( 1 ) /*0x10089a39a*/
      {
        v11 = v24[0]; /*0x10089a39a*/
        ((void (__fastcall *)(_DWORD *, _QWORD *, unsigned __int64, __int64, __int64, __int64, __int64))_$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792)( /*0x10089a3a4*/
          v20,
          v24,
          v7,
          v8,
          v9,
          v10,
          v19);
        if ( v20[0] == 1 ) /*0x10089a3b0*/
        {
          v12 = v22; /*0x10089a3b6*/
          v22 = v21; /*0x10089a3ba*/
          v13 = v21 - v12; /*0x10089a3be*/
          v14 = v12 + v11; /*0x10089a3c1*/
          if ( v21 == v12 ) /*0x10089a3c7*/
            goto LABEL_17; /*0x10089a3c7*/
        }
        else
        {
          if ( HIBYTE(v26) ) /*0x10089a3d4*/
            goto LABEL_23; /*0x10089a3d4*/
          HIBYTE(v26) = 1; /*0x10089a3da*/
          v13 = v23 - v22; /*0x10089a3e6*/
          if ( ((unsigned __int8)v26 | (v23 != v22)) != 1 ) /*0x10089a3f2*/
            goto LABEL_23; /*0x10089a3f2*/
          v14 = v24[0] + v22; /*0x10089a3f4*/
          if ( !v13 ) /*0x10089a3fb*/
            goto LABEL_17; /*0x10089a3fb*/
        }
        v15 = v13; /*0x10089a403*/
        if ( *(_BYTE *)(v14 + v13 - 1) == 10 ) /*0x10089a406*/
        {
          v15 = v13 - 1; /*0x10089a40b*/
          if ( v13 != 1 && *(_BYTE *)(v14 + v13 - 2) == 13 ) /*0x10089a416*/
          {
            v13 -= 2; /*0x10089a418*/
LABEL_17:
            v15 = v13; /*0x10089a41c*/
          }
        }
        v16 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v14, v15); /*0x10089a41f*/
        if ( v7 >= 5 ) /*0x10089a42b*/
        {
          v8 = *(_DWORD *)v16 ^ 0x61746164u; /*0x10089a433*/
          if ( !((unsigned int)v8 | *(unsigned __int8 *)(v16 + 4) ^ 0x3A) ) /*0x10089a43d*/
          {
            v17 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16 + 5, v7 - 5); /*0x10089a453*/
            if ( v7 == 6 ) /*0x10089a45c*/
            {
              v8 = *(_DWORD *)v17 ^ 0x4E4F445Bu; /*0x10089a356*/
              if ( (unsigned int)v8 | *(unsigned __int16 *)(v17 + 4) ^ 0x5D45 ) /*0x10089a362*/
                goto LABEL_5; /*0x10089a364*/
            }
            else if ( v7 ) /*0x10089a465*/
            {
LABEL_5:
              codexmate_lib::core::relay::health_check::error_message_from_json::hb4424646a1d8d349(a1, v17, v7); /*0x10089a366*/
              if ( *a1 != 0x8000000000000000LL ) /*0x10089a37e*/
                return a1; /*0x10089a37e*/
            }
          }
        }
        if ( HIBYTE(v26) ) /*0x10089a394*/
          goto LABEL_23; /*0x10089a394*/
      }
    }
  }
  else
  {
LABEL_23:
    *a1 = 0x8000000000000000LL; /*0x10089a470*/
  }
  return a1; /*0x10089a480*/
}