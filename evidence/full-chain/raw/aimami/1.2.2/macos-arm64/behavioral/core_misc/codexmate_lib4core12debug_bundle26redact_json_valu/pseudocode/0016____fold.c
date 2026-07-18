// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1006b3940 d=2
void __fastcall _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h939c732c6fc111fa(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int64 **a3)
{
  unsigned __int8 *v5; // r15
  __int64 v6; // rcx
  int v7; // esi
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  _QWORD v11[3]; // [rsp-60h] [rbp-60h] BYREF
  int v12; // [rsp-48h] [rbp-48h]
  __int64 v13; // [rsp-40h] [rbp-40h] BYREF
  int v14; // [rsp-38h] [rbp-38h]

  if ( a1 != a2 ) /*0x1006b3943*/
  {
    v5 = a1; /*0x1006b3960*/
    do /*0x1006b39c1*/
    {
      v7 = *v5; /*0x1006b39c1*/
      if ( (v7 & 0x80u) != 0 ) /*0x1006b39c8*/
      {
        v8 = v7 & 0x1F; /*0x1006b39e2*/
        v9 = v5[1] & 0x3F; /*0x1006b39ea*/
        if ( (unsigned __int8)v7 <= 0xDFu ) /*0x1006b39f1*/
        {
          v5 += 2; /*0x1006b3a34*/
          v7 = v9 | (v8 << 6); /*0x1006b3a3d*/
          if ( (unsigned int)(v7 - 48) < 0xA ) /*0x1006b3a45*/
            goto LABEL_3; /*0x1006b3a45*/
        }
        else
        {
          v10 = (v9 << 6) | v5[2] & 0x3F; /*0x1006b39fe*/
          if ( (unsigned __int8)v7 < 0xF0u ) /*0x1006b3a04*/
          {
            v5 += 3; /*0x1006b3a4c*/
            v7 = (v8 << 12) | v10; /*0x1006b3a55*/
            if ( (unsigned int)(v7 - 48) < 0xA ) /*0x1006b3a5d*/
              goto LABEL_3; /*0x1006b3a5d*/
          }
          else
          {
            v7 = ((v7 & 7) << 18) | (v10 << 6) | v5[3] & 0x3F; /*0x1006b3a19*/
            if ( v7 == 1114112 ) /*0x1006b3a21*/
              return; /*0x1006b3a21*/
            v5 += 4; /*0x1006b3a23*/
            if ( (unsigned int)(v7 - 48) < 0xA ) /*0x1006b3a2d*/
            {
LABEL_3:
              core::unicode::unicode_data::conversions::to_lower::h2af512d1fec7c9a4(&v13); /*0x1006b3970*/
              v6 = 2LL - (HIDWORD(v13) == 0); /*0x1006b3985*/
              if ( v14 ) /*0x1006b3990*/
                v6 = 3; /*0x1006b3990*/
              v11[0] = 0; /*0x1006b3994*/
              v11[1] = v6; /*0x1006b399c*/
              v12 = v14; /*0x1006b39a0*/
              v11[2] = v13; /*0x1006b39a9*/
              _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hb44de6d37d090585( /*0x1006b39b3*/
                v11,
                a3);
              continue; /*0x1006b39b3*/
            }
          }
        }
      }
      else
      {
        ++v5; /*0x1006b39ca*/
        if ( (unsigned int)(v7 - 48) < 0xA ) /*0x1006b39d3*/
          goto LABEL_3; /*0x1006b39d3*/
      }
      if ( (v7 & 0xFFFFFFDF) - 65 <= 0x19 ) /*0x1006b3a7b*/
        goto LABEL_3; /*0x1006b3a7b*/
    }
    while ( v5 != a2 ); /*0x1006b39c1*/
  }
}