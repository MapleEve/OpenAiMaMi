// __ZN13codexmate_lib4core5relay10translator23chat_body_has_image_url @ 0x10084de80 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::chat_body_has_image_url::h51ecc00b0b61d74c(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084de9d*/
         "messagesobjectpropertiesdescriptionparametersstrict",
         8,
         a1);
  if ( !v1 ) /*0x10084dea5*/
    return 0; /*0x10084dea5*/
  if ( *(_BYTE *)v1 != 4 ) /*0x10084deae*/
    return 0; /*0x10084deae*/
  v2 = *(_QWORD *)(v1 + 24); /*0x10084deb4*/
  if ( !v2 ) /*0x10084debb*/
    return 0; /*0x10084df70*/
  v3 = *(_QWORD *)(v1 + 16); /*0x10084dec1*/
  v4 = v3 + 32 * v2; /*0x10084dec9*/
  while ( 1 ) /*0x10084defc*/
  {
    v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084defc*/
           "contentpattern.output_modehead_limit",
           7,
           v3);
    if ( v5 ) /*0x10084df04*/
    {
      if ( *(_BYTE *)v5 == 4 ) /*0x10084df09*/
      {
        v6 = *(_QWORD *)(v5 + 24); /*0x10084df0b*/
        if ( v6 ) /*0x10084df12*/
          break; /*0x10084df12*/
      }
    }
LABEL_5:
    v3 += 32; /*0x10084dee0*/
    if ( v3 == v4 ) /*0x10084dee7*/
      return 0; /*0x10084dee7*/
  }
  v7 = *(_QWORD *)(v5 + 16); /*0x10084df14*/
  v8 = 32 * v6; /*0x10084df18*/
  while ( 1 ) /*0x10084df35*/
  {
    v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084df35*/
           &anon_10420c9971c21f44d230d15b39fb3fec_75,
           4,
           v7);
    if ( v9 ) /*0x10084df3d*/
    {
      if ( *(_BYTE *)v9 == 3 /*0x10084df67*/
        && *(_QWORD *)(v9 + 24) == 9
        && !(**(_QWORD **)(v9 + 16) ^ 0x72755F6567616D69LL | *(unsigned __int8 *)(*(_QWORD *)(v9 + 16) + 8LL) ^ 0x6CLL) )
      {
        return 1; /*0x10084df76*/
      }
    }
    v7 += 32; /*0x10084df20*/
    v8 -= 32; /*0x10084df24*/
    if ( !v8 ) /*0x10084df28*/
      goto LABEL_5; /*0x10084df28*/
  }
}