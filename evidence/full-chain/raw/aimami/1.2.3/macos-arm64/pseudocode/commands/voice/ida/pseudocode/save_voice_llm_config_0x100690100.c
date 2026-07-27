// __ZN13codexmate_lib8commands5voice21save_voice_llm_config @ 0x100690100 | 基线 same-set
_QWORD *__fastcall codexmate_lib::commands::voice::save_voice_llm_config::h1dd181bea181fb2e(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        double a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-1B0h] BYREF
  _QWORD v14[12]; // [rsp+8h] [rbp-1A8h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-148h] BYREF
  _BYTE v16[72]; // [rsp+88h] [rbp-128h] BYREF
  __int64 v17[12]; // [rsp+D0h] [rbp-E0h] BYREF
  _QWORD v18[3]; // [rsp+130h] [rbp-80h] BYREF
  __int64 v19; // [rsp+148h] [rbp-68h]
  __int64 v20; // [rsp+150h] [rbp-60h]
  __int64 v21; // [rsp+158h] [rbp-58h]
  __int64 v22; // [rsp+160h] [rbp-50h] BYREF
  __int64 v23; // [rsp+168h] [rbp-48h]
  __int64 v24; // [rsp+170h] [rbp-40h]
  __int64 v25; // [rsp+178h] [rbp-38h]
  __int64 v26; // [rsp+180h] [rbp-30h]
  __int64 v27; // [rsp+188h] [rbp-28h]
  char v28[25]; // [rsp+197h] [rbp-19h] BYREF

  v17[2] = a2[2]; /*0x100690117*/
  v6 = *a2; /*0x10069011e*/
  v17[1] = a2[1]; /*0x100690125*/
  v17[0] = v6; /*0x10069012c*/
  v17[5] = a3[2]; /*0x100690137*/
  v7 = *a3; /*0x10069013e*/
  v17[4] = a3[1]; /*0x100690145*/
  v17[3] = v7; /*0x10069014c*/
  v17[8] = a4[2]; /*0x100690157*/
  v8 = *a4; /*0x10069015e*/
  v17[7] = a4[1]; /*0x100690165*/
  v17[6] = v8; /*0x10069016c*/
  v9 = a5[1]; /*0x100690176*/
  v17[9] = *a5; /*0x10069017a*/
  v17[10] = v9; /*0x100690181*/
  v17[11] = a5[2]; /*0x10069018c*/
  codexmate_lib::core::voice::llm::save_config::h1de424331238f291(&v13, v17, a6); /*0x1006901a1*/
  if ( __OFSUB__(-v13, 1) ) /*0x1006901b0*/
  {
    qmemcpy(v17, v14, sizeof(v17)); /*0x1006901d2*/
    v22 = 0; /*0x1006901d5*/
    v23 = 1; /*0x1006901dd*/
    v24 = 0; /*0x1006901e5*/
    v18[2] = 1610612768; /*0x1006901ed*/
    v18[0] = &v22; /*0x1006901f9*/
    v18[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x100690204*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x10069020f*/
                            v17,
                            v18) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100690306*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v28,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v25 = v22; /*0x10069022e*/
    v26 = v23; /*0x100690232*/
    v27 = v24; /*0x10069023a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v14); /*0x100690241*/
    v21 = v27; /*0x10069024a*/
    v10 = v25; /*0x10069024e*/
    v11 = v26; /*0x100690252*/
    v20 = v26; /*0x100690256*/
    v19 = v25; /*0x10069025a*/
    a1[3] = v27; /*0x10069025e*/
    a1[2] = v11; /*0x100690262*/
    a1[1] = v10; /*0x100690266*/
    *a1 = 0x8000000000000000LL; /*0x10069026a*/
  }
  else
  {
    v27 = v14[2]; /*0x100690273*/
    v26 = v14[1]; /*0x10069027e*/
    v25 = v14[0]; /*0x100690282*/
    qmemcpy(v16, &v14[3], sizeof(v16)); /*0x100690299*/
    v19 = v14[0]; /*0x1006902a4*/
    v15[0] = v13; /*0x1006902ac*/
    v15[1] = v14[0]; /*0x1006902b3*/
    v15[2] = v14[1]; /*0x1006902ba*/
    v15[3] = v14[2]; /*0x1006902c1*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf36b6214f86127c9((__int64)a1, v15); /*0x1006902d2*/
  }
  return a1; /*0x1006902da*/
}