// __ZN13codexmate_lib4core10repository29refresh_subscription_metadata @ 0x100a7f7c0
// 1.2.3 NEW-delta | codexmate_lib::core::repository::refresh_subscription_metadata | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void *__fastcall codexmate_lib::core::repository::refresh_subscription_metadata::hcbe8bf490ef7aa58(
        void *__dst,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rcx
  char v16; // al
  bool v17; // zf
  _DWORD v19[24]; // [rsp+0h] [rbp-280h] BYREF
  _QWORD v20[12]; // [rsp+60h] [rbp-220h] BYREF
  _QWORD v21[29]; // [rsp+C0h] [rbp-1C0h] BYREF
  _QWORD __dsta[18]; // [rsp+1A8h] [rbp-D8h] BYREF
  _QWORD v23[2]; // [rsp+238h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+248h] [rbp-38h] BYREF
  _BYTE v25[33]; // [rsp+25Fh] [rbp-21h] BYREF

  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v21, a2, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40)); /*0x100a7f7e7*/
  v5 = v21[0]; /*0x100a7f7ec*/
  if ( v21[0] == 2 ) /*0x100a7f7fe*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v21[1]); /*0x100a7f803*/
  else
    memcpy(__dsta, &v21[1], sizeof(__dsta)); /*0x100a7f816*/
  v21[6] = 2; /*0x100a7f81b*/
  v21[0] = 0; /*0x100a7f826*/
  v21[2] = 0; /*0x100a7f831*/
  v21[4] = 0; /*0x100a7f83c*/
  v21[9] = v5; /*0x100a7f847*/
  memcpy(&v21[10], __dsta, 0x90u); /*0x100a7f861*/
  LOBYTE(v21[28]) = 0; /*0x100a7f866*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__dsta); /*0x100a7f874*/
  v6 = (SLODWORD(__dsta[0]) >> 13) - 1; /*0x100a7f884*/
  v7 = 0; /*0x100a7f887*/
  if ( SLODWORD(__dsta[0]) >> 13 <= 0 ) /*0x100a7f88b*/
  {
    v8 = (1 - (SLODWORD(__dsta[0]) >> 13)) / 0x190u + 1; /*0x100a7f89f*/
    v6 += 400 * v8; /*0x100a7f8a7*/
    v7 = -146097 * v8; /*0x100a7f8a9*/
  }
  v9 = 1000 /*0x100a7f911*/
     * (HIDWORD(__dsta[0])
      + 86400LL
      * (((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + ((LODWORD(__dsta[0]) >> 4) & 0x1FF) - v6 / 100 - 719163))
     + LODWORD(__dsta[1]) / 0xF4240uLL;
  v10 = *(_QWORD *)(a3 + 8); /*0x100a7f917*/
  if ( *(_DWORD *)(a3 + 16) != 1 ) /*0x100a7f920*/
    goto LABEL_35; /*0x100a7f920*/
  v11 = *(_QWORD *)(a3 + 24); /*0x100a7f922*/
  v12 = 1000 * v11; /*0x100a7f92a*/
  if ( (unsigned __int64)(v11 - 1) >= 0x2540BE3FFLL ) /*0x100a7f93e*/
    v12 = *(_QWORD *)(a3 + 24); /*0x100a7f93e*/
  if ( v9 < v12 || v9 - v12 >= 21600000 ) /*0x100a7f951*/
  {
LABEL_35:
    if ( !*(_QWORD *)a3 ) /*0x100a7f914*/
      goto LABEL_16; /*0x100a7f914*/
    v13 = 1000 * v10; /*0x100a7f964*/
    if ( (unsigned __int64)(v10 - 1) >= 0x2540BE3FFLL ) /*0x100a7f978*/
      v13 = *(_QWORD *)(a3 + 8); /*0x100a7f978*/
    if ( v9 < v13 || v9 - v13 >= 300000 ) /*0x100a7f98b*/
      goto LABEL_16; /*0x100a7f98e*/
  }
  if ( *(_BYTE *)(a3 + 64) ) /*0x100a7f994*/
  {
LABEL_16:
    v21[0] = 1; /*0x100a7f99f*/
    v21[1] = v9; /*0x100a7f9aa*/
    codexmate_lib::core::account_metadata::fetch_subscription_metadata::h596dc23d37c0ec18( /*0x100a7f9c0*/
      v20,
      *(_QWORD *)(a3 + 48),
      *(_QWORD *)(a3 + 56));
    if ( LODWORD(v20[0]) == 11 ) /*0x100a7f9cc*/
    {
      v21[2] = 1; /*0x100a7f9ee*/
      v21[3] = v9; /*0x100a7f9f9*/
      if ( v20[1] != 2 && (BYTE2(v20[3]) == 0 || BYTE1(v20[3]) != 2) | v20[1] & 1 ) /*0x100a7fa1b*/
      {
        v21[4] = 1; /*0x100a7fa21*/
        v21[5] = v9; /*0x100a7fa2c*/
      }
      v21[6] = v20[1]; /*0x100a7fa33*/
      v21[7] = v20[2]; /*0x100a7fa3d*/
      v21[8] = v20[3]; /*0x100a7fa48*/
    }
    else
    {
      qmemcpy(v19, v20, sizeof(v19)); /*0x100a7fa86*/
      LOBYTE(v21[28]) = 1; /*0x100a7fa89*/
      if ( v19[0] == 6 ) /*0x100a7fa97*/
      {
        if ( (unsigned __int8)reqwest::error::Error::is_connect::hb890ef19b00685f7(&v19[2]) ) /*0x100a7faa3*/
        {
          v14 = 7; /*0x100a7faac*/
          v15 = &unk_10167C8D7; /*0x100a7fab1*/
        }
        else
        {
          v16 = reqwest::error::Error::is_timeout::hc378dcce9ef81bc8(&v19[2]); /*0x100a7facb*/
          v15 = &unk_10167C8C6; /*0x100a7fad7*/
          v17 = v16 == 0; /*0x100a7fade*/
          if ( v16 ) /*0x100a7fae0*/
            v15 = &unk_10167C8D7; /*0x100a7fae0*/
          v14 = 17; /*0x100a7fae9*/
          if ( !v17 ) /*0x100a7faee*/
            v14 = 7; /*0x100a7faee*/
        }
      }
      else
      {
        v14 = 17; /*0x100a7faba*/
        v15 = &unk_10167C8C6; /*0x100a7fabf*/
      }
      v24[0] = v15; /*0x100a7faf2*/
      v24[1] = v14; /*0x100a7faf6*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a7fb08*/
      {
        v23[0] = v24; /*0x100a7fb12*/
        v23[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a7fb1d*/
        __dsta[6] = 2; /*0x100a7fb21*/
        __dsta[7] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7fb33*/
        __dsta[8] = 31; /*0x100a7fb3a*/
        __dsta[10] = &unk_1017C9D74; /*0x100a7fb4c*/
        __dsta[11] = v23; /*0x100a7fb57*/
        __dsta[0] = 0; /*0x100a7fb5b*/
        __dsta[1] = "codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a7fb66*/
        __dsta[2] = 31; /*0x100a7fb6d*/
        __dsta[3] = 0; /*0x100a7fb78*/
        __dsta[4] = "src/core/repository.rs"; /*0x100a7fb8a*/
        __dsta[5] = 22; /*0x100a7fb91*/
        __dsta[9] = 0xE9400000001LL; /*0x100a7fba6*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v25, __dsta); /*0x100a7fbb8*/
      }
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v19); /*0x100a7fbc4*/
    }
  }
  memcpy(__dst, v21, 0xE8u); /*0x100a7fbd8*/
  return __dst; /*0x100a7fbe0*/
}