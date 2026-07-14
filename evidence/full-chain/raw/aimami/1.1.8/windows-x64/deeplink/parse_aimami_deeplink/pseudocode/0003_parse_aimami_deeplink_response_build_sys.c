// parse_aimami_deeplink_response_build_sys @ 0x1407ad6d0 (renamed this session from sub_1407AD6D0)
// AiMaMi 1.1.8 win64.exe, session <审计会话>
// Role: command-specific response envelope builder. xrefs_to confirmed 3 call sites, single caller =
// parse_aimami_deeplink_owner_sys @ 0x1403d6000 (owner-only, not shared — safe B-level rename).
//
// Takes the core parser's Result<200B success struct, String> (a2) plus a copy of the InvokeMessage's
// trailing struct (a1, 0x168B), re-serializes the Err(String) case by round-tripping it through a
// Display::fmt call (sub_140037E80 + sub_140E156C0, same "a Display implementation returned an error
// unexpectedly" 55B panic guard pattern seen in the core parser and the arg-extract wrapper), then
// hands the final envelope to the SHARED invoke_resolver_respond_sys to resolve/reject the Tauri IPC
// promise. This is the last hop before the IPC boundary — terminated_reason=response_serialize.

volatile signed __int64 *__fastcall parse_aimami_deeplink_response_build_sys(const __m128i *a1, const __m128i *a2)
{
  const __m128i *v3; // rdi
  __int64 v4; // r10
  bool v5; // of
  __int128 v6; // xmm0
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  __m128i v13[12]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v14[22]; // [rsp+118h] [rbp+98h] BYREF
  _OWORD v15[3]; // [rsp+280h] [rbp+200h] BYREF
  _BYTE v16[48]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v17; // [rsp+2E0h] [rbp+260h]
  __int64 v18; // [rsp+2E8h] [rbp+268h] BYREF
  __m256i v19; // [rsp+2F0h] [rbp+270h]
  _BYTE v20[31]; // [rsp+310h] [rbp+290h] BYREF
  __int64 v21; // [rsp+330h] [rbp+2B0h]
  const __m128i *v22; // [rsp+338h] [rbp+2B8h]
  char v23; // [rsp+346h] [rbp+2C6h] BYREF
  char v24; // [rsp+347h] [rbp+2C7h]
  __int64 v25; // [rsp+348h] [rbp+2C8h]

  v25 = -2; /*0x1407ad6e2*/
  v3 = a1; /*0x1407ad6f0*/
  sub_1412762D0(v14, a1, 0x168u); /*0x1407ad703*/  // copy InvokeMessage trailing struct
  v4 = v3[24].m128i_i64[0]; /*0x1407ad70b*/
  v17 = v4; /*0x1407ad712*/
  v5 = __OFSUB__(0, a2->m128i_i64[0]); /*0x1407ad71b*/  // check a2 tag: 0 (Ok) vs 0x8000... (Err)
  v22 = v3; /*0x1407ad71e*/
  v21 = v4; /*0x1407ad725*/
  if ( v5 ) /*0x1407ad72c*/
  {
    // Ok path: pass the 200B success struct straight through
    v6 = *(__int128 *)((char *)a2 + 8); /*0x1407ad72e*/
    *(__m128i *)&v19.m256i_u64[2] = *(const __m128i *)((char *)a2 + 24); /*0x1407ad736*/
    *(_OWORD *)v19.m256i_i8 = v6; /*0x1407ad73d*/
    v18 = 1; /*0x1407ad744*/
  }
  else
  {
    // Err(String) path: re-format the error through Display::fmt (fmt::Arguments::new_v1 shape,
    // same pattern as parse_aimami_deeplink_core_sys's own error trampoline)
    sub_1412762D0(v13, a2, 0xC8u); /*0x1407ad761*/
    v24 = 1; /*0x1407ad766*/
    sub_140037E80(v16, v13); /*0x1407ad777*/
    if ( *(_QWORD *)v16 == 0x8000000000000025uLL ) /*0x1407ad78e*/
    {
      v19 = *(__m256i *)&v16[8]; /*0x1407ad79e*/
      v8 = 0; /*0x1407ad7ac*/
    }
    else
    {
      v15[2] = *(_OWORD *)&v16[32]; /*0x1407ad7c8*/
      v15[1] = *(_OWORD *)&v16[16]; /*0x1407ad7cf*/
      v15[0] = *(_OWORD *)v16; /*0x1407ad7d6*/
      *(_QWORD *)v20 = 0; /*0x1407ad7dd*/
      *(_QWORD *)&v20[8] = 1; /*0x1407ad7e8*/
      *(_QWORD *)&v20[16] = 0; /*0x1407ad7f3*/
      v19.m256i_i64[1] = 1610612768; /*0x1407ad7fe*/
      v18 = (__int64)v20; /*0x1407ad810*/
      v19.m256i_i64[0] = (__int64)&off_141357FD0; /*0x1407ad81e*/
      if ( (unsigned __int8)sub_140E156C0(v15, &v18, v7) ) /*0x1407ad833*/  // fmt::write
        sub_1412AD780( /*0x1407ad918*/
          (unsigned int)aADisplayImplem_8,   // "a Display implementation returned an error unexpectedly"
          55,
          (unsigned int)&v23,
          (unsigned int)&unk_141358170,
          (__int64)&off_141358088);
      v9 = *(_QWORD *)&v20[16]; /*0x1407ad841*/
      *(_OWORD *)&v20[7] = *(_OWORD *)v20; /*0x1407ad84f*/
      *(_QWORD *)&v20[23] = v9; /*0x1407ad856*/
      v24 = 1; /*0x1407ad85d*/
      sub_1407A30E0(v15); /*0x1407ad86b*/  // drop formatter temporaries
      v19.m256i_i8[0] = 3; /*0x1407ad871*/  // tag=3: formatted-String error variant
      *(_OWORD *)&v19.m256i_i8[1] = *(_OWORD *)v20; /*0x1407ad886*/
      *(_OWORD *)&v19.m256i_u64[2] = *(_OWORD *)&v20[15]; /*0x1407ad88d*/
      v8 = 1; /*0x1407ad894*/
    }
    v18 = v8; /*0x1407ad899*/
    v3 = v22; /*0x1407ad8a0*/
    v4 = v21; /*0x1407ad8a7*/
  }
  v10 = v3[24].m128i_i32[2]; /*0x1407ad8b5*/
  v11 = v3[24].m128i_i32[3]; /*0x1407ad8bb*/
  v24 = 0; /*0x1407ad8c1*/
  // terminal edge: resolve/reject the Tauri IPC InvokeResolver promise (SHARED, already named this
  // session across many other leaves; terminated_reason=response_serialize)
  return invoke_resolver_respond_sys(v14, v4, (__int64)&v18, (__int128 *)&v3[22].m128i_u64[1], v10, v11); /*0x1407ad8e7*/
}
