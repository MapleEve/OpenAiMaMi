// __ZN13codexmate_lib4core5voice9workspace21save_processing_modes @ 0x100b03070 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::save_processing_modes::heced82663aa80ea0(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __m128i a4)
{
  __int64 v5; // r13
  __int64 v6; // r14
  char v7; // bl
  char v8; // r14
  double v9; // xmm0_8
  char *v10; // rdi
  bool v11; // zf
  __int64 v12; // r14
  __int64 *v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[12]; // [rsp+8h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-158h] BYREF
  _QWORD v22[12]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-E8h]
  __int64 v25; // [rsp+E0h] [rbp-E0h]
  __int64 v26; // [rsp+E8h] [rbp-D8h]
  __int64 v27; // [rsp+F0h] [rbp-D0h]
  __int64 v28; // [rsp+F8h] [rbp-C8h] BYREF
  _QWORD v29[17]; // [rsp+100h] [rbp-C0h] BYREF
  __int64 *v30; // [rsp+188h] [rbp-38h]
  __int64 v31; // [rsp+190h] [rbp-30h]

  v30 = a3; /*0x100b03084*/
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(&v28); /*0x100b03095*/
  v5 = v28; /*0x100b0309a*/
  v6 = v29[0]; /*0x100b030a1*/
  v7 = v29[1]; /*0x100b030a8*/
  if ( v28 != 11 ) /*0x100b030b3*/
  {
    memcpy((char *)a1 + 17, (char *)&v29[1] + 1, 0x4Fu); /*0x100b0314b*/
    *a1 = v5; /*0x100b03150*/
    a1[1] = v6; /*0x100b03153*/
    *((_BYTE *)a1 + 16) = v7; /*0x100b03157*/
LABEL_7:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v30); /*0x100b0315b*/
    return a1; /*0x100b03164*/
  }
  v31 = v29[0]; /*0x100b030b9*/
  v8 = v29[1]; /*0x100b030ca*/
  v9 = codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(&v28, a2, a4); /*0x100b030cd*/
  qmemcpy(v20, v29, sizeof(v20)); /*0x100b030fa*/
  if ( v28 == 0x8000000000000000LL ) /*0x100b03100*/
  {
    qmemcpy(a1, v20, 0x60u); /*0x100b03111*/
    v10 = (char *)(a1 + 12); /*0x100b03111*/
    v11 = (v8 & 1) == 0; /*0x100b03114*/
    v12 = v31; /*0x100b03118*/
    if ( v11 /*0x100b032a9*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v10,
                             &v21,
                             0x8000000000000000LL,
                             0) )
    {
      *(_BYTE *)(v12 + 8) = 1; /*0x100b032b6*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v12); /*0x100b03134*/
    goto LABEL_7; /*0x100b03139*/
  }
  v27 = v29[16]; /*0x100b0316d*/
  v26 = v29[15]; /*0x100b03178*/
  v25 = v29[14]; /*0x100b03183*/
  v24 = v29[13]; /*0x100b03192*/
  v23 = v29[12]; /*0x100b03199*/
  qmemcpy(v22, v20, sizeof(v22)); /*0x100b031b3*/
  v13 = &v23; /*0x100b031b3*/
  v21 = v28; /*0x100b031b6*/
  if ( LOBYTE(v22[11]) != 6 ) /*0x100b031cb*/
  {
    v13 = &v22[11]; /*0x100b031cd*/
    v9 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v22[11]); /*0x100b031d0*/
  }
  v25 = v30[3]; /*0x100b031dd*/
  v24 = v30[2]; /*0x100b031e5*/
  v14 = *v30; /*0x100b031e9*/
  v23 = v30[1]; /*0x100b031f0*/
  v22[11] = v14; /*0x100b031f4*/
  LODWORD(v27) = 1; /*0x100b031f8*/
  v20[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v13, &v21); /*0x100b03207*/
  LODWORD(v20[1]) = v15; /*0x100b0320e*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v28, v20, 0, 0); /*0x100b03226*/
  if ( (_BYTE)v28 ) /*0x100b03232*/
    v16 = 0; /*0x100b0323d*/
  else
    v16 = v29[0]; /*0x100b03234*/
  v26 = v16; /*0x100b0323f*/
  codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(&v21); /*0x100b0324d*/
  codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(a1, (__int64)a2, (__int64)&v21, v9); /*0x100b0325f*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v21); /*0x100b0326e*/
  if ( (v8 & 1) == 0 /*0x100b032c0*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v21, a2, v17, v18) )
  {
    *(_BYTE *)(v31 + 8) = 1; /*0x100b032cd*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v31); /*0x100b0328f*/
  return a1; /*0x100b03297*/
}