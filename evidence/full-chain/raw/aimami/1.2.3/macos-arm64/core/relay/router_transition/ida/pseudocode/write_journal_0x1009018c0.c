// __ZN13codexmate_lib4core5relay17router_transition13write_journal @ 0x1009018c0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_transition::write_journal::hd43509eae63b5eab(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        void *a5,
        __int64 a6)
{
  _QWORD *result; // rax
  _BYTE v7[96]; // [rsp+10h] [rbp-140h] BYREF
  _QWORD v8[12]; // [rsp+70h] [rbp-E0h] BYREF
  _QWORD v9[12]; // [rsp+D0h] [rbp-80h] BYREF
  _QWORD v10[2]; // [rsp+130h] [rbp-20h] BYREF
  _BYTE v11[9]; // [rsp+147h] [rbp-9h] BYREF

  result = codexmate_lib::core::relay::transition_journal::write::heff5963509896719(v8, a1, a2, a3, a4, a5, a6); /*0x1009018e8*/
  if ( LODWORD(v8[0]) != 11 ) /*0x1009018f4*/
  {
    qmemcpy(v7, v8, sizeof(v7)); /*0x100901910*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100901921*/
    {
      v10[0] = v7; /*0x100901927*/
      v10[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100901932*/
      v9[6] = 2; /*0x100901936*/
      v9[7] = &unk_101677721; /*0x100901945*/
      v9[8] = 45; /*0x100901949*/
      v9[10] = &unk_1017C763F; /*0x100901958*/
      v9[11] = v10; /*0x100901960*/
      v9[0] = 0; /*0x100901964*/
      v9[1] = &unk_101677721; /*0x10090196c*/
      v9[2] = 45; /*0x100901970*/
      v9[3] = 0; /*0x100901978*/
      v9[4] = "src/core/relay/router_transition.rs"; /*0x100901987*/
      v9[5] = 35; /*0x10090198b*/
      v9[9] = 0x15F00000001LL; /*0x10090199d*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v11, v9); /*0x1009019a9*/
    }
    return (_QWORD *)core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v7); /*0x1009019b5*/
  }
  return result; /*0x1009019ba*/
}