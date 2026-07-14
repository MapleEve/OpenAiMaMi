// aimami 1.1.8 windows-x64 — reveal_relay_api_key_respond_dispatch_sys (renamed in IDB this session)
// VA: 0x1407af810, size=642B (0x282), basic_blocks=13, cyclomatic_complexity=2.
// FULL decompile, 0 truncation.
// Sole caller: reveal_relay_api_key_owner_sys (1 xref) -> DEDICATED, not shared.
// session <审计会话> / machine <本地机器> / model claude-sonnet-5
//
// This is the final success-or-error dispatch wrapper: on the Ok branch (v5 = overflow-flag from
// `__OFSUB__(0, *(_QWORD*)a2)`) it forwards the already-built response payload straight to
// invoke_resolver_respond_sys (shared, 48+ callers elsewhere this session; terminated_reason=
// response_serialize). On any Err branch it first runs the value through sub_14003A6B0 (a
// dedicated, 1-caller Display-trait error-formatting helper) before forwarding the formatted
// error to the same invoke_resolver_respond_sys terminus. If Display-formatting itself fails,
// it panics via the generic shared aADisplayImplem_8 string
// "a Display implementation returned an error unexpectedly" (terminated_reason=error_return).

volatile signed __int64 *__fastcall reveal_relay_api_key_respond_dispatch_sys(const __m128i *a1, __int128 *a2)
{
  const __m128i *v3; // rdi
  __int64 v4; // rdx
  bool v5; // of
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // ecx
  __m128i v16[22]; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v17[6]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v18; // [rsp+210h] [rbp+190h]
  _OWORD v19[3]; // [rsp+220h] [rbp+1A0h] BYREF
  _BYTE v20[48]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v21; // [rsp+280h] [rbp+200h]
  __int64 v22; // [rsp+288h] [rbp+208h] BYREF
  __m256i v23; // [rsp+290h] [rbp+210h]
  _BYTE v24[31]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v25; // [rsp+2D0h] [rbp+250h]
  const __m128i *v26; // [rsp+2D8h] [rbp+258h]
  char v27; // [rsp+2E6h] [rbp+266h] BYREF
  char v28; // [rsp+2E7h] [rbp+267h]
  __int64 v29; // [rsp+2E8h] [rbp+268h]

  v29 = -2;
  v3 = a1;
  sub_1412762D0(v16, a1, 0x168u);
  v4 = v3[24].m128i_i64[0];
  v21 = v4;
  v5 = __OFSUB__(0, *(_QWORD *)a2);
  v26 = v3;
  v25 = v4;
  if ( v5 )
  {
    // Ok branch: pass response payload through unchanged
    v6 = *(__int128 *)((char *)a2 + 8);
    *(_OWORD *)&v23.m256i_u64[2] = *(__int128 *)((char *)a2 + 24);
    *(_OWORD *)v23.m256i_i8 = v6;
    v22 = 1;
  }
  else
  {
    // Err branch: format via sub_14003A6B0 (Display-trait error formatter, dedicated, 1 caller = this fn)
    v18 = *((_QWORD *)a2 + 12);
    v17[5] = a2[5];
    v17[4] = a2[4];
    v7 = *a2;
    v8 = a2[1];
    v9 = a2[2];
    v17[3] = a2[3];
    v17[2] = v9;
    v17[1] = v8;
    v17[0] = v7;
    v28 = 1;
    sub_14003A6B0(v20, v17);
    if ( *(_QWORD *)v20 == 0x8000000000000025uLL )
    {
      v23 = *(__m256i *)&v20[8];
      v11 = 0;
    }
    else
    {
      v19[2] = *(_OWORD *)&v20[32];
      v19[1] = *(_OWORD *)&v20[16];
      v19[0] = *(_OWORD *)v20;
      *(_QWORD *)v24 = 0;
      *(_QWORD *)&v24[8] = 1;
      *(_QWORD *)&v24[16] = 0;
      v23.m256i_i64[1] = 1610612768;
      v22 = (__int64)v24;
      v23.m256i_i64[0] = (__int64)&off_141357FD0;
      if ( (unsigned __int8)sub_140E156C0(v19, &v22, v10) )
        // Display-formatting itself failed -> panic (shared generic string, error_return terminus)
        sub_1412AD780(
          (unsigned int)aADisplayImplem_8,   // "a Display implementation returned an error unexpectedly"
          55,
          (unsigned int)&v27,
          (unsigned int)&unk_141358170,
          (__int64)&off_141358088);
      v12 = *(_QWORD *)&v24[16];
      *(_OWORD *)&v24[7] = *(_OWORD *)v24;
      *(_QWORD *)&v24[23] = v12;
      v28 = 1;
      sub_1407A30E0(v19);
      v23.m256i_i8[0] = 3;
      *(_OWORD *)&v23.m256i_i8[1] = *(_OWORD *)v24;
      *(_OWORD *)&v23.m256i_u64[2] = *(_OWORD *)&v24[15];
      v11 = 1;
    }
    v22 = v11;
    v3 = v26;
    v4 = v25;
  }
  v13 = v3[24].m128i_i32[2];
  v14 = v3[24].m128i_i32[3];
  v28 = 0;
  return invoke_resolver_respond_sys(v16, v4, (__int64)&v22, (__int128 *)&v3[22].m128i_u64[1], v13, v14);   // terminated_reason=response_serialize (shared, 48+ callers)
}
