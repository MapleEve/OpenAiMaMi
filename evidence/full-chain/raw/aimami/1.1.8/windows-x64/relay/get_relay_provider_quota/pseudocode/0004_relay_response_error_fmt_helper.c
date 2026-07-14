// aimami 1.1.8 windows-x64 — relay_response_error_fmt_helper_sys (candidate name; PE stripped)
// va: 0x1409802F0 (sub_1409802F0) — shared helper called from the core dispatcher (0x140976010)
// and 3 sibling provider-family aggregator functions (sub_14097E710/14097EF80/14097F640).
// size=1754B, basic_blocks=60, cyclomatic_complexity=12, callees=21 (all resolved).
// decompile: near-full (295 chars truncated at tail, tail is compiler drop-glue boilerplate only).
//
// Role: builds a formatted error/diagnostic string via alloc::string's Display-trampoline
// (embedded literal "a Display implementation returned an error unexpectedly" — the same
// rustc panic-guard string seen at the owner's error-serialization path, confirming this is
// generic Rust `alloc::fmt` string-building machinery reused for quota-response error messages,
// not quota-specific business logic itself). 5-way switch on a discriminant byte routes to
// different string-assembly branches (short-provider-name vs long-URL-with-detail variants).

char __fastcall sub_1409802F0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v5;             // rax
  __int64 v6;             // rbx
  __int64 v7;             // r14
  __int128 *v8;           // r15
  unsigned __int64 v9;    // rdx
  __int64 v10;            // r13
  __int64 v11;            // rcx
  __int64 v12;            // r14
  __int16 v13;            // r12
  const __m128i *v14;     // rbx
  __m128i *v15;           // rax
  __int64 v16;            // rax
  const __m128i *v17;     // rcx
  __int64 v18;            // rdx
  unsigned __int64 v19;   // rbx
  char result;            // al
  __int64 *v21;           // r15
  __int64 v22;            // r14
  __int64 *v23;           // rdi
  __int16 v24;            // cx
  const __m128i *v25, *v26; // rax/rdx
  __m128i v27, v28, v29;  // xmm1/xmm2/xmm3
  const __m128i *v30;     // rbx
  __int16 v31;            // r14
  const __m128i *v32;     // r14
  __int16 v33;            // r15
  __int64 v34;            // r12
  __int64 *v35;           // r13
  _QWORD *v36;            // rdi
  unsigned __int64 v37;   // rax
  __int64 v38;            // rdx
  __int64 *v39;           // stack BYREF
  __int128 v40;           // stack
  __int128 v41;           // stack BYREF
  _OWORD v42[16];         // stack
  __int128 v43;           // stack
  __m128i v44, v45, v46, v47, v48, v49, v50; // stack
  __int128 v51;           // stack BYREF
  __int64 v52;            // stack
  __int128 v53;           // stack
  __int64 v54;            // stack
  __int128 v55;           // stack
  __int64 v56, v57;        // stack
  __int64 *v58;            // stack
  __int16 v59;             // stack
  __int64 v60;             // stack
  __int128 v61;            // stack
  __int128 v62;            // stack BYREF
  __int64 v63, v64;        // stack
  __int64 *v65;            // stack
  char v66;                // stack BYREF
  const __m128i *v67;      // stack
  char v68;                // stack
  __int64 v69;             // stack

  v69 = -2;
  v5 = a2[3].m128i_u8[0];   // discriminant byte
  v67 = a2;
  switch ( v5 )
  {
    case 0LL:      // "short" variant: provider-name + one string literal
      v6 = a2[1].m128i_i64[1];
      v7 = a2[2].m128i_i64[0];
      v8 = (__int128 *)a2[2].m128i_i64[1];
      sub_1402CE8F0((unsigned int)&v41, *(_QWORD *)a2->m128i_i64[0], (unsigned int)&unk_141326FE8,
                     a2->m128i_i64[1], a2[1].m128i_i64[0]);
      sub_1402CEB20(&v39, &v41, v6, v7);
      v9 = *((_QWORD *)v8 + 10);
      v10 = 4 * v9;
      v11 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v11) = v9 >> 62 != 0 || 4 * v9 > 0x7FFFFFFFFFFFFFFELL;   // overflow-checked capacity calc
      if ( (_BYTE)v11 )
      {
        v12 = 0;
        goto LABEL_4;
      }
      v65 = *((__int64 **)v8 + 10);
      v13 = *((_WORD *)v8 + 44);
      v60 = 4 * v9;
      if ( v10 )
      {
        v14 = *((const __m128i **)v8 + 9);
        nullsub_1(v11, v9);   // no-op guard hook (compiler-inserted, verified 0 real effect elsewhere)
      }
      /* ... remaining 4 switch branches (cases 1-4) build progressively longer diagnostic strings,
         each terminating in the same alloc::string reallocation + copy pattern; case 4 embeds the
         "a Display implementation returned an error unexpectedly"-style panic guard shared with the
         owner's error path. Full per-case detail elided (compiler-generated string-builder
         boilerplate, not quota-specific business logic); see analyze_function(addr=0x1409802F0)
         live call for the complete 60-basic-block CFG if needed. */
      break;
  }
  return result;
}

/* strings (confirmed via decompile()):
   "a Display implementation returned an error unexpectedly/rustc/ac68faa20c58cbccd01ee7208bf3b6e93a7d7f96/library\\alloc\\src\\string.rs" */
