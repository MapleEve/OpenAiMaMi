// mac 1.2.2 NEW set_voice_overlay_style 0x10063ea00 d=1
char *__fastcall codexmate_lib::commands::voice::load_voice_workspace::h43f44162deddc894(char *__dst, __int64 a2)
{
  pthread_mutex_t *v3; // rdi
  bool v4; // r13
  __int64 v5; // r15
  __int64 v6; // r12
  bool v7; // cl
  char v8; // r13
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[4]; // [rsp+0h] [rbp-330h] BYREF
  _BYTE v15[96]; // [rsp+20h] [rbp-310h] BYREF
  _QWORD v16[15]; // [rsp+80h] [rbp-2B0h] BYREF
  _QWORD __src[26]; // [rsp+F8h] [rbp-238h] BYREF
  _QWORD v18[12]; // [rsp+1C8h] [rbp-168h] BYREF
  __int64 v19; // [rsp+228h] [rbp-108h]
  __int64 v20; // [rsp+230h] [rbp-100h]
  __int64 v21; // [rsp+238h] [rbp-F8h]
  _QWORD *v22; // [rsp+240h] [rbp-F0h] BYREF
  _QWORD v23[20]; // [rsp+248h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+2E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+2F0h] [rbp-40h]
  __int64 v26; // [rsp+2F8h] [rbp-38h]
  _DWORD v27[12]; // [rsp+300h] [rbp-30h]

  v3 = *(pthread_mutex_t **)a2; /*0x10063ea1a*/
  if ( !*(_QWORD *)a2 ) /*0x10063ea1a*/
    v3 = (pthread_mutex_t *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hebbf97d60bb488fa((volatile signed __int64 *)a2); /*0x10063eb3f*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v3); /*0x10063ea26*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x10063ea35*/
  {
    v4 = !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(); /*0x10063eb4f*/
    if ( *(_BYTE *)(a2 + 8) ) /*0x10063eb53*/
      goto LABEL_5; /*0x10063eb59*/
LABEL_10:
    codexmate_lib::core::voice::workspace::read_workspace_file::h2f88f6533835c561(__src); /*0x10063eb5f*/
    qmemcpy(v18, &__src[1], sizeof(v18)); /*0x10063eb9a*/
    if ( __src[0] == 0x8000000000000000LL ) /*0x10063eba0*/
    {
      qmemcpy(v16, v18, 0x60u); /*0x10063ebb5*/
    }
    else
    {
      v23[16] = __src[17]; /*0x10063ebc4*/
      v23[15] = __src[16]; /*0x10063ebcf*/
      v23[14] = __src[15]; /*0x10063ebda*/
      v23[13] = __src[14]; /*0x10063ebec*/
      v23[12] = __src[13]; /*0x10063ebf0*/
      qmemcpy(v23, v18, 0x60u); /*0x10063ec0a*/
      v22 = (_QWORD *)__src[0]; /*0x10063ec0d*/
      codexmate_lib::core::voice::workspace::to_payload::h317c26750f3a7742( /*0x10063ec30*/
        __src,
        *(_QWORD *)(a2 + 552),
        *(_QWORD *)(a2 + 560),
        &v22);
      v10 = __src[0]; /*0x10063ec35*/
      qmemcpy(v16, &__src[1], sizeof(v16)); /*0x10063ec4f*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hb9eb38359947e5a2(&v22); /*0x10063ec59*/
      if ( v10 != 0x8000000000000000LL ) /*0x10063ec68*/
      {
        v23[19] = v16[2]; /*0x10063ed51*/
        v23[18] = v16[1]; /*0x10063ed63*/
        v23[17] = v16[0]; /*0x10063ed67*/
        qmemcpy(v15, &v16[3], sizeof(v15)); /*0x10063ed7e*/
        v19 = v16[0]; /*0x10063ed89*/
        v14[0] = v10; /*0x10063ed94*/
        v14[1] = v16[0]; /*0x10063ed9b*/
        v14[2] = v16[1]; /*0x10063eda2*/
        v14[3] = v16[2]; /*0x10063eda9*/
        ((void (__fastcall *)(_QWORD *, _QWORD *))codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfbcde04dea04a030)( /*0x10063edbe*/
          __src,
          v14);
        memcpy(__dst, __src, 0xD0u); /*0x10063edd2*/
        if ( v4 ) /*0x10063edda*/
        {
LABEL_18:
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a2); /*0x10063edf5*/
          return __dst; /*0x10063edf8*/
        }
LABEL_17:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 /*0x10063ee72*/
          && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
        {
          *(_BYTE *)(a2 + 8) = 1; /*0x10063ee7f*/
        }
        goto LABEL_18; /*0x10063ee83*/
      }
    }
    qmemcpy(__src, v16, 0x60u); /*0x10063ec84*/
    v18[0] = 0; /*0x10063ec87*/
    v18[1] = 1; /*0x10063ec92*/
    v18[2] = 0; /*0x10063ec9d*/
    v23[1] = 1610612768; /*0x10063eca8*/
    v22 = v18; /*0x10063ecb3*/
    v23[0] = &anon_ff51a8651aab3676c852b8266a775073_242; /*0x10063ecc1*/
    if ( _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::he4d5504da360e3b1( /*0x10063ecd2*/
           __src,
           (__int64 *)&v22) )
    {
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10063ee6b*/
        (__int64)&anon_ff51a8651aab3676c852b8266a775073_243,
        55,
        (__int64)&v24,
        (__int64)&anon_ff51a8651aab3676c852b8266a775073_277,
        (__int64)&anon_ff51a8651aab3676c852b8266a775073_245);
    }
    v24 = v18[0]; /*0x10063eced*/
    v25 = v18[1]; /*0x10063ecf1*/
    v26 = v18[2]; /*0x10063ecfc*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hc89363eea30df8bc(v16); /*0x10063ed07*/
    v11 = v24; /*0x10063ed10*/
    v12 = v25; /*0x10063ed14*/
    v19 = v24; /*0x10063ed18*/
    v20 = v25; /*0x10063ed1f*/
    v21 = v26; /*0x10063ed26*/
    *((_QWORD *)__dst + 3) = v26; /*0x10063ed2d*/
    *((_QWORD *)__dst + 2) = v12; /*0x10063ed31*/
    *((_QWORD *)__dst + 1) = v11; /*0x10063ed35*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10063ed39*/
    if ( v4 ) /*0x10063ed3f*/
      goto LABEL_18; /*0x10063ed3f*/
    goto LABEL_17; /*0x10063ed3f*/
  }
  v4 = 0; /*0x10063ea41*/
  if ( !*(_BYTE *)(a2 + 8) ) /*0x10063ea4a*/
    goto LABEL_10; /*0x10063ea4a*/
LABEL_5:
  v22 = nullptr; /*0x10063ea50*/
  v23[0] = 1; /*0x10063ea5b*/
  v23[1] = 0; /*0x10063ea66*/
  __src[2] = 1610612768; /*0x10063ea71*/
  __src[0] = &v22; /*0x10063ea83*/
  __src[1] = &anon_ff51a8651aab3676c852b8266a775073_242; /*0x10063ea91*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x10063eaab*/
                          (__int64)&anon_f7eb15af4f65309b05b1b96532dfcdc2_1124,
                          41,
                          (__int64)__src) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10063ee30*/
      (__int64)&anon_ff51a8651aab3676c852b8266a775073_243,
      55,
      (__int64)&v24,
      (__int64)&anon_ff51a8651aab3676c852b8266a775073_277,
      (__int64)&anon_ff51a8651aab3676c852b8266a775073_245);
  v5 = (__int64)v22; /*0x10063eabb*/
  v6 = v23[0]; /*0x10063eac2*/
  v7 = v4; /*0x10063eac9*/
  v8 = v23[1]; /*0x10063eacc*/
  v27[0] = *(_DWORD *)((char *)&v23[1] + 1); /*0x10063eada*/
  *(_DWORD *)((char *)v27 + 3) = HIDWORD(v23[1]); /*0x10063eae3*/
  if ( !v7 /*0x10063ee37*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd() )
  {
    *(_BYTE *)(a2 + 8) = 1; /*0x10063ee44*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(pthread_mutex_t **)a2); /*0x10063eb03*/
  *((_QWORD *)__dst + 1) = v5; /*0x10063eb08*/
  *((_QWORD *)__dst + 2) = v6; /*0x10063eb0c*/
  __dst[24] = v8; /*0x10063eb10*/
  v9 = *(_DWORD *)((char *)v27 + 3); /*0x10063eb17*/
  *(_DWORD *)(__dst + 25) = v27[0]; /*0x10063eb1a*/
  *((_DWORD *)__dst + 7) = v9; /*0x10063eb1e*/
  *(_QWORD *)__dst = 0x8000000000000000LL; /*0x10063eb2f*/
  return __dst; /*0x10063ee00*/
}