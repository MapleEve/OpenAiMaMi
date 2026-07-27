// __ZN13codexmate_lib8commands5voice20load_voice_workspace @ 0x10068f0d0 | 基线 same-set
char *__fastcall codexmate_lib::commands::voice::load_voice_workspace::haf5686e07f691f6c(char *__dst, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r13
  _QWORD *v8; // r15
  __int64 v9; // r12
  char v10; // cl
  char v11; // r13
  int v12; // ecx
  __int64 v13; // r15
  _QWORD **v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD v19[4]; // [rsp+0h] [rbp-330h] BYREF
  _BYTE v20[96]; // [rsp+20h] [rbp-310h] BYREF
  _QWORD v21[15]; // [rsp+80h] [rbp-2B0h] BYREF
  _QWORD __src[26]; // [rsp+F8h] [rbp-238h] BYREF
  _QWORD v23[12]; // [rsp+1C8h] [rbp-168h] BYREF
  __int64 v24; // [rsp+228h] [rbp-108h]
  __int64 v25; // [rsp+230h] [rbp-100h]
  __int64 v26; // [rsp+238h] [rbp-F8h]
  _QWORD *v27; // [rsp+240h] [rbp-F0h] BYREF
  _QWORD v28[20]; // [rsp+248h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+2E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+2F0h] [rbp-40h]
  __int64 v31; // [rsp+2F8h] [rbp-38h]
  _DWORD v32[12]; // [rsp+300h] [rbp-30h]

  v4 = *a2; /*0x10068f0ea*/
  if ( !*a2 ) /*0x10068f0ea*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x10068f20f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x10068f0f6*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10068f105*/
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6) ^ 1; /*0x10068f21f*/
    if ( *((_BYTE *)a2 + 8) ) /*0x10068f223*/
      goto LABEL_5; /*0x10068f229*/
LABEL_10:
    codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(__src, a2 + 2); /*0x10068f22f*/
    qmemcpy(v23, &__src[1], sizeof(v23)); /*0x10068f26a*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10068f270*/
    {
      qmemcpy(v21, v23, 0x60u); /*0x10068f285*/
    }
    else
    {
      v28[16] = __src[17]; /*0x10068f294*/
      v28[15] = __src[16]; /*0x10068f29f*/
      v28[14] = __src[15]; /*0x10068f2aa*/
      v28[13] = __src[14]; /*0x10068f2bc*/
      v28[12] = __src[13]; /*0x10068f2c0*/
      qmemcpy(v28, v23, 0x60u); /*0x10068f2da*/
      v27 = (_QWORD *)__src[0]; /*0x10068f2dd*/
      codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47(__src, a2[69], a2[70], &v27); /*0x10068f300*/
      v13 = __src[0]; /*0x10068f305*/
      qmemcpy(v21, &__src[1], sizeof(v21)); /*0x10068f31f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v27); /*0x10068f329*/
      if ( v13 != 0x8000000000000000LL ) /*0x10068f338*/
      {
        v28[19] = v21[2]; /*0x10068f421*/
        v28[18] = v21[1]; /*0x10068f433*/
        v28[17] = v21[0]; /*0x10068f437*/
        qmemcpy(v20, &v21[3], sizeof(v20)); /*0x10068f44e*/
        v24 = v21[0]; /*0x10068f459*/
        v19[0] = v13; /*0x10068f464*/
        v19[1] = v21[0]; /*0x10068f46b*/
        v19[2] = v21[1]; /*0x10068f472*/
        v19[3] = v21[2]; /*0x10068f479*/
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf8831ad64c2bad91((__int64)__src, v19); /*0x10068f48e*/
        v14 = (_QWORD **)__src; /*0x10068f493*/
        v15 = __dst; /*0x10068f49f*/
        memcpy(__dst, __src, 0xD0u); /*0x10068f4a2*/
        if ( v7 ) /*0x10068f4aa*/
        {
LABEL_18:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10068f4c5*/
          return __dst; /*0x10068f4c8*/
        }
LABEL_17:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10068f542*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 v15,
                                 v14,
                                 v17,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *((_BYTE *)a2 + 8) = 1; /*0x10068f54f*/
        }
        goto LABEL_18; /*0x10068f553*/
      }
    }
    qmemcpy(__src, v21, 0x60u); /*0x10068f354*/
    v23[0] = 0; /*0x10068f357*/
    v23[1] = 1; /*0x10068f362*/
    v23[2] = 0; /*0x10068f36d*/
    v28[1] = 1610612768; /*0x10068f378*/
    v27 = v23; /*0x10068f383*/
    v28[0] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068f391*/
    v14 = &v27; /*0x10068f398*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10068f3a2*/
                            __src,
                            &v27) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068f53b*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v29,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v29 = v23[0]; /*0x10068f3bd*/
    v30 = v23[1]; /*0x10068f3c1*/
    v31 = v23[2]; /*0x10068f3cc*/
    v15 = v21; /*0x10068f3d0*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v21); /*0x10068f3d7*/
    v16 = v29; /*0x10068f3e0*/
    v17 = v30; /*0x10068f3e4*/
    v24 = v29; /*0x10068f3e8*/
    v25 = v30; /*0x10068f3ef*/
    v26 = v31; /*0x10068f3f6*/
    *((_QWORD *)__dst + 3) = v31; /*0x10068f3fd*/
    *((_QWORD *)__dst + 2) = v17; /*0x10068f401*/
    *((_QWORD *)__dst + 1) = v16; /*0x10068f405*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10068f409*/
    if ( v7 ) /*0x10068f40f*/
      goto LABEL_18; /*0x10068f40f*/
    goto LABEL_17; /*0x10068f40f*/
  }
  v7 = 0; /*0x10068f111*/
  if ( !*((_BYTE *)a2 + 8) ) /*0x10068f11a*/
    goto LABEL_10; /*0x10068f11a*/
LABEL_5:
  v27 = nullptr; /*0x10068f120*/
  v28[0] = 1; /*0x10068f12b*/
  v28[1] = 0; /*0x10068f136*/
  __src[2] = 1610612768; /*0x10068f141*/
  __src[0] = &v27; /*0x10068f153*/
  __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068f161*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          __src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10068f500*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v29,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v8 = v27; /*0x10068f18b*/
  v9 = v28[0]; /*0x10068f192*/
  v10 = v7; /*0x10068f199*/
  v11 = v28[1]; /*0x10068f19c*/
  v32[0] = *(_DWORD *)((char *)&v28[1] + 1); /*0x10068f1aa*/
  *(_DWORD *)((char *)v32 + 3) = HIDWORD(v28[1]); /*0x10068f1b3*/
  if ( !v10
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x10068f514*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x10068f1d3*/
  *((_QWORD *)__dst + 1) = v8; /*0x10068f1d8*/
  *((_QWORD *)__dst + 2) = v9; /*0x10068f1dc*/
  __dst[24] = v11; /*0x10068f1e0*/
  v12 = *(_DWORD *)((char *)v32 + 3); /*0x10068f1e7*/
  *(_DWORD *)(__dst + 25) = v32[0]; /*0x10068f1ea*/
  *((_DWORD *)__dst + 7) = v12; /*0x10068f1ee*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10068f1ff*/
  return __dst; /*0x10068f4d0*/
}