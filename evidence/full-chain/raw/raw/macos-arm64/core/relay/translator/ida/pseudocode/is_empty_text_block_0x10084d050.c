// __ZN13codexmate_lib4core5relay10translator19is_empty_text_block @ 0x10084d050 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::translator::is_empty_text_block::h62c6e45706795874(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rdx

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084d068*/
         &anon_10420c9971c21f44d230d15b39fb3fec_75,
         4,
         a1);
  if ( !v1 || *(_BYTE *)v1 != 3 ) /*0x10084d075*/
    return 0; /*0x10084d075*/
  v2 = *(_QWORD *)(v1 + 16); /*0x10084d077*/
  v3 = *(_QWORD *)(v1 + 24); /*0x10084d07b*/
  if ( v3 == 11 ) /*0x10084d083*/
  {
    if ( !(*(_QWORD *)v2 ^ 0x745F74757074756FLL | *(_QWORD *)(v2 + 3) ^ 0x747865745F747570LL) ) /*0x10084d0dc*/
      goto LABEL_12; /*0x10084d0df*/
    return 0; /*0x10084d0b8*/
  }
  if ( v3 == 10 ) /*0x10084d089*/
  {
    if ( !(*(_QWORD *)v2 ^ 0x65745F7475706E69LL | *(unsigned __int16 *)(v2 + 8) ^ 0x7478LL) ) /*0x10084d0b6*/
      goto LABEL_12; /*0x10084d0b6*/
    return 0; /*0x10084d0b6*/
  }
  if ( v3 != 4 || *(_DWORD *)v2 != 1954047348 ) /*0x10084d097*/
    return 0; /*0x10084d097*/
LABEL_12:
  v5 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10084d0e1*/
         &anon_10420c9971c21f44d230d15b39fb3fec_110,
         4,
         a1);
  result = 1; /*0x10084d0f8*/
  if ( v5 ) /*0x10084d0fd*/
  {
    if ( *(_BYTE *)v5 == 3 ) /*0x10084d102*/
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)(v5 + 16), *(_QWORD *)(v5 + 24)); /*0x10084d10c*/
      return v6 == 0; /*0x10084d114*/
    }
  }
  return result; /*0x10084d0be*/
}