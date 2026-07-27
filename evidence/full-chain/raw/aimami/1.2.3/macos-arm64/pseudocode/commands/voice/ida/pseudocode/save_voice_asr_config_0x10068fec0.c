// __ZN13codexmate_lib8commands5voice21save_voice_asr_config @ 0x10068fec0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::save_voice_asr_config::hcabd4a8b90193064(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD v13[12]; // [rsp+8h] [rbp-1A8h] BYREF
  _QWORD v14[4]; // [rsp+68h] [rbp-148h] BYREF
  _BYTE v15[72]; // [rsp+88h] [rbp-128h] BYREF
  _QWORD v16[12]; // [rsp+D0h] [rbp-E0h] BYREF
  _QWORD v17[3]; // [rsp+130h] [rbp-80h] BYREF
  __int64 v18; // [rsp+148h] [rbp-68h]
  __int64 v19; // [rsp+150h] [rbp-60h]
  __int64 v20; // [rsp+158h] [rbp-58h]
  __int64 v21; // [rsp+160h] [rbp-50h] BYREF
  __int64 v22; // [rsp+168h] [rbp-48h]
  __int64 v23; // [rsp+170h] [rbp-40h]
  __int64 v24; // [rsp+178h] [rbp-38h]
  __int64 v25; // [rsp+180h] [rbp-30h]
  __int64 v26; // [rsp+188h] [rbp-28h]
  char v27[25]; // [rsp+197h] [rbp-19h] BYREF

  v16[2] = a2[2]; /*0x10068fed7*/
  v5 = *a2; /*0x10068fede*/
  v16[1] = a2[1]; /*0x10068fee5*/
  v16[0] = v5; /*0x10068feec*/
  v16[5] = a3[2]; /*0x10068fef7*/
  v6 = *a3; /*0x10068fefe*/
  v16[4] = a3[1]; /*0x10068ff05*/
  v16[3] = v6; /*0x10068ff0c*/
  v16[8] = a4[2]; /*0x10068ff17*/
  v7 = *a4; /*0x10068ff1e*/
  v16[7] = a4[1]; /*0x10068ff25*/
  v16[6] = v7; /*0x10068ff2c*/
  v8 = a5[1]; /*0x10068ff36*/
  v16[9] = *a5; /*0x10068ff3a*/
  v16[10] = v8; /*0x10068ff41*/
  v16[11] = a5[2]; /*0x10068ff4c*/
  codexmate_lib::core::voice::asr::save_config::h93fccfa62f68a897(&v12, v16); /*0x10068ff61*/
  if ( __OFSUB__(-v12, 1) ) /*0x10068ff70*/
  {
    qmemcpy(v16, v13, sizeof(v16)); /*0x10068ff92*/
    v21 = 0; /*0x10068ff95*/
    v22 = 1; /*0x10068ff9d*/
    v23 = 0; /*0x10068ffa5*/
    v17[2] = 1610612768; /*0x10068ffad*/
    v17[0] = &v21; /*0x10068ffb9*/
    v17[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10068ffc4*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10068ffcf*/
                            v16,
                            v17) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006900c6*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v27,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v24 = v21; /*0x10068ffee*/
    v25 = v22; /*0x10068fff2*/
    v26 = v23; /*0x10068fffa*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v13); /*0x100690001*/
    v20 = v26; /*0x10069000a*/
    v9 = v24; /*0x10069000e*/
    v10 = v25; /*0x100690012*/
    v19 = v25; /*0x100690016*/
    v18 = v24; /*0x10069001a*/
    a1[3] = v26; /*0x10069001e*/
    a1[2] = v10; /*0x100690022*/
    a1[1] = v9; /*0x100690026*/
    *a1 = 0x8000000000000000LL; /*0x10069002a*/
  }
  else
  {
    v26 = v13[2]; /*0x100690033*/
    v25 = v13[1]; /*0x10069003e*/
    v24 = v13[0]; /*0x100690042*/
    qmemcpy(v15, &v13[3], sizeof(v15)); /*0x100690059*/
    v18 = v13[0]; /*0x100690064*/
    v14[0] = v12; /*0x10069006c*/
    v14[1] = v13[0]; /*0x100690073*/
    v14[2] = v13[1]; /*0x10069007a*/
    v14[3] = v13[2]; /*0x100690081*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf36b6214f86127c9((__int64)a1, v14); /*0x100690092*/
  }
  return a1; /*0x10069009a*/
}