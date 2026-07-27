// __ZN13codexmate_lib4core10repository10Repository16save_quota_store @ 0x100a5bd30 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::repository::Repository::save_quota_store::hd848fe86f04414c9(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  _QWORD *result; // rax
  _BYTE v5[96]; // [rsp+0h] [rbp-140h] BYREF
  _QWORD v6[12]; // [rsp+60h] [rbp-E0h] BYREF
  _QWORD v7[12]; // [rsp+C0h] [rbp-80h] BYREF
  _QWORD v8[2]; // [rsp+120h] [rbp-20h] BYREF
  _BYTE v9[9]; // [rsp+137h] [rbp-9h] BYREF

  result = codexmate_lib::core::quota_store::save::hd48f951445e3a620(v6, a2, a3, a4); /*0x100a5bd46*/
  if ( LODWORD(v6[0]) == 11 ) /*0x100a5bd52*/
  {
    *a1 = 11; /*0x100a5bd54*/
  }
  else
  {
    result = v5; /*0x100a5bd65*/
    qmemcpy(v5, v6, sizeof(v5)); /*0x100a5bd7b*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a5bd8c*/
    {
      v8[0] = v5; /*0x100a5bd92*/
      v8[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a5bd9d*/
      v7[6] = 2; /*0x100a5bda1*/
      v7[7] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5bdb0*/
      v7[8] = 31; /*0x100a5bdb4*/
      v7[10] = &unk_1017C9021; /*0x100a5bdc3*/
      v7[11] = v8; /*0x100a5bdcb*/
      v7[0] = 0; /*0x100a5bdcf*/
      v7[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5bdd7*/
      v7[2] = 31; /*0x100a5bddb*/
      v7[3] = 0; /*0x100a5bde3*/
      v7[4] = "src/core/repository.rs"; /*0x100a5bdf2*/
      v7[5] = 22; /*0x100a5bdf6*/
      v7[9] = 0x94200000001LL; /*0x100a5be08*/
      result = (_QWORD *)_$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v9, v7); /*0x100a5be14*/
    }
    qmemcpy(a1, v5, 0x60u); /*0x100a5be28*/
  }
  return result; /*0x100a5bd5b*/
}