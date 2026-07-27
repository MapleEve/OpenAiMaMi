// __ZN13codexmate_lib8platform7process32quiesce_codex_transition_targets @ 0x1003681a0
_QWORD *__fastcall codexmate_lib::platform::process::quiesce_codex_transition_targets::h08e03280cfcb606f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r13
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rsi
  _QWORD v20[4]; // [rsp+0h] [rbp-130h] BYREF
  __int64 v21; // [rsp+20h] [rbp-110h]
  __int64 v22; // [rsp+28h] [rbp-108h]
  __int64 v23; // [rsp+30h] [rbp-100h]
  __int64 v24; // [rsp+38h] [rbp-F8h]
  __int64 v25; // [rsp+40h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-E0h]
  __int64 v28; // [rsp+58h] [rbp-D8h]
  __int64 v29; // [rsp+60h] [rbp-D0h]
  __int64 v30; // [rsp+68h] [rbp-C8h]
  __int64 v31; // [rsp+70h] [rbp-C0h]
  __int64 v32; // [rsp+78h] [rbp-B8h]
  __int64 v33; // [rsp+80h] [rbp-B0h]
  __int64 v34; // [rsp+88h] [rbp-A8h]
  __int64 v35; // [rsp+90h] [rbp-A0h]
  __int64 v36; // [rsp+98h] [rbp-98h]
  __int64 v37; // [rsp+A0h] [rbp-90h]
  _QWORD v38[17]; // [rsp+A8h] [rbp-88h] BYREF

  if ( a3 ) /*0x1003681ba*/
  {
    if ( a4 ) /*0x1003681c2*/
    {
      codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(v38); /*0x1003681cf*/
      v4 = v38[0]; /*0x1003681d4*/
      v25 = v38[1]; /*0x1003681df*/
      v26 = v38[2]; /*0x1003681ea*/
      v27 = v38[3]; /*0x1003681f5*/
      if ( v38[0] == 11 ) /*0x100368200*/
      {
        v5 = v26; /*0x10036820d*/
        v21 = v25; /*0x100368214*/
        v22 = v26; /*0x10036821b*/
        v6 = v27; /*0x100368222*/
        v23 = v27; /*0x100368229*/
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h6a3eb4fa4cee287e( /*0x100368244*/
          &v25,
          v26,
          v26 + 32 * v27);
        codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(v38, &v25); /*0x100368257*/
        if ( LODWORD(v38[0]) == 11 ) /*0x100368263*/
        {
          codexmate_lib::platform::process::list_codex_processes_matching::h0a0e1238c317b39e(v38); /*0x100368270*/
          v7 = v38[0]; /*0x100368275*/
          v8 = v38[1]; /*0x10036827c*/
          v9 = v38[2]; /*0x100368280*/
          if ( v38[0] == 11 ) /*0x10036828c*/
          {
            v20[0] = v38[2]; /*0x100368299*/
            v20[1] = v38[2]; /*0x1003682a0*/
            v20[2] = v38[1]; /*0x1003682a7*/
            v20[3] = v38[2] + 32LL * v38[3]; /*0x1003682ae*/
            alloc::vec::in_place_collect::from_iter_in_place::hd366b5e978c41658(&v26, v20); /*0x1003682c6*/
            v24 = v26; /*0x1003682d3*/
            v38[0] = v26; /*0x1003682da*/
            v38[1] = v27; /*0x1003682e1*/
            v10 = v28; /*0x1003682e5*/
            v38[2] = v28; /*0x1003682e9*/
            v37 = v27; /*0x1003682f0*/
            codexmate_lib::platform::process::force_kill_targets::hd831432c308f755c(a1, v27, v28); /*0x1003682fa*/
            if ( v10 ) /*0x100368302*/
            {
              v11 = (_QWORD *)(v37 + 16); /*0x10036830f*/
              do /*0x100368327*/
              {
                v12 = *(v11 - 1); /*0x10036832d*/
                if ( v12 ) /*0x100368334*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v11, v12, 1); /*0x10036833e*/
                v11 += 4; /*0x100368320*/
                --v10; /*0x100368324*/
              }
              while ( v10 ); /*0x100368327*/
            }
            if ( v24 ) /*0x1003684dc*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 32 * v24, 8); /*0x1003684ee*/
          }
          else
          {
            v36 = v38[11]; /*0x1003683e2*/
            v35 = v38[10]; /*0x1003683ed*/
            v34 = v38[9]; /*0x1003683f8*/
            v33 = v38[8]; /*0x100368403*/
            v32 = v38[7]; /*0x10036840e*/
            v31 = v38[6]; /*0x100368419*/
            v30 = v38[5]; /*0x100368428*/
            v29 = v38[4]; /*0x10036842f*/
            v26 = v38[1]; /*0x100368436*/
            v27 = v38[2]; /*0x10036843d*/
            v28 = v38[3]; /*0x100368444*/
            v38[2] = v38[3]; /*0x10036844b*/
            v38[1] = v9; /*0x10036844f*/
            v38[0] = v8; /*0x100368453*/
            a1[11] = v38[11]; /*0x100368461*/
            a1[10] = v35; /*0x10036846c*/
            a1[9] = v34; /*0x100368477*/
            a1[8] = v33; /*0x100368482*/
            a1[7] = v32; /*0x10036848d*/
            a1[6] = v31; /*0x100368498*/
            v15 = v29; /*0x10036849c*/
            a1[5] = v30; /*0x1003684aa*/
            a1[4] = v15; /*0x1003684ae*/
            a1[3] = v38[2]; /*0x1003684b6*/
            v16 = v38[0]; /*0x1003684ba*/
            a1[2] = v38[1]; /*0x1003684c5*/
            a1[1] = v16; /*0x1003684c9*/
            *a1 = v7; /*0x1003684cd*/
          }
        }
        else
        {
          qmemcpy(a1, v38, 0x60u); /*0x1003683d6*/
        }
        if ( v6 ) /*0x1003684f6*/
        {
          v17 = (_QWORD *)(v5 + 8); /*0x1003684f8*/
          do /*0x100368507*/
          {
            v18 = *(v17 - 1); /*0x100368509*/
            if ( v18 ) /*0x100368510*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x10036851a*/
            v17 += 4; /*0x100368500*/
            --v6; /*0x100368504*/
          }
          while ( v6 ); /*0x100368507*/
        }
        if ( v21 ) /*0x10036852b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 32 * v21, 8); /*0x100368539*/
      }
      else
      {
        a1[11] = v38[11]; /*0x100368362*/
        a1[10] = v38[10]; /*0x10036836a*/
        a1[9] = v38[9]; /*0x100368372*/
        a1[8] = v38[8]; /*0x10036837a*/
        a1[7] = v38[7]; /*0x100368382*/
        a1[6] = v38[6]; /*0x10036838a*/
        v13 = v38[4]; /*0x10036838e*/
        a1[5] = v38[5]; /*0x100368396*/
        a1[4] = v13; /*0x10036839a*/
        a1[3] = v27; /*0x1003683a5*/
        v14 = v25; /*0x1003683a9*/
        a1[2] = v26; /*0x1003683b7*/
        a1[1] = v14; /*0x1003683bb*/
        *a1 = v4; /*0x1003683bf*/
      }
    }
    else
    {
      codexmate_lib::platform::process::force_kill_targets::hd831432c308f755c(a1, a2, a3); /*0x100368354*/
    }
  }
  else
  {
    *a1 = 11; /*0x100368345*/
  }
  return a1; /*0x100368541*/
}