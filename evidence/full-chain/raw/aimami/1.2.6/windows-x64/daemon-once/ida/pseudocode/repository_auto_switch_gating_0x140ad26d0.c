// sub_140AD26D0 @ 0x140ad26d0 | windows-x64 1.2.6 | role: core::repository gating check for auto-switch daemon-once
// ("should run now" decision). Module identity confirmed via panic-location string "src\core\repository.rs"
// (0x14185bdec) and tracing target literal "codexmate_lib::core::repository" (0x14185be03), both referenced
// directly in this function body when a debug/trace-level log fires (behind `*(_QWORD*)off_141FB9E30 >= 2` verbosity
// gate). Confirmed SHARED by two different commands in this pass: called from sub_14018C940 (run_daemon_once CLI
// core, this leaf) AND from sub_140ADFDA0 (a DIFFERENT sibling command implementing "pending_auto_switch"
// confirm/reconcile flow, string "pending_auto_switch"@0x14185e242 -- NOT part of the run_daemon_once P0 scope,
// decompiled only to rule it out as the run_daemon_once blocking-closure candidate; see manifest.json). This
// confirms sub_140AD26D0 is a core::repository module method (matches macOS symbol
// codexmate_lib::core::repository::Repository::auto_switch_config), not private/inlined run_daemon_once logic.
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06
__int64 __fastcall sub_140AD26D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  int v10; // edx
  __int64 v11; // rax
  int v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h]
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  __int128 v20; // [rsp+80h] [rbp+0h] BYREF
  __int128 v21; // [rsp+90h] [rbp+10h]
  __int128 v22; // [rsp+A0h] [rbp+20h]
  __int128 v23; // [rsp+B0h] [rbp+30h]
  __int128 v24; // [rsp+C0h] [rbp+40h]
  void *v25; // [rsp+D0h] [rbp+50h]
  _BYTE v26[96]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v27; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v28; // [rsp+150h] [rbp+D0h]
  __int128 v29; // [rsp+160h] [rbp+E0h]
  __int128 v30; // [rsp+170h] [rbp+F0h]
  __int128 v31; // [rsp+180h] [rbp+100h]
  void *v32; // [rsp+190h] [rbp+110h]
  __int128 *v33; // [rsp+198h] [rbp+118h]
  char v34; // [rsp+1AFh] [rbp+12Fh] BYREF
  __int64 v35; // [rsp+1B0h] [rbp+130h]

  v35 = -2; /*0x140ad26e3*/
  v3 = *(_QWORD *)(a2 + 296); /*0x140ad26f1*/
  v4 = *(_QWORD *)(a2 + 304); /*0x140ad26f8*/
  sub_140ACAD60(v26, v3, v4); /*0x140ad2709*/
  if ( *(_DWORD *)v26 != -1 ) /*0x140ad2712*/
  {
    v19 = *(_OWORD *)&v26[80]; /*0x140ad271b*/
    v18 = *(_OWORD *)&v26[64]; /*0x140ad2726*/
    v17 = *(_OWORD *)&v26[48]; /*0x140ad2740*/
    v16 = *(_OWORD *)&v26[32]; /*0x140ad2744*/
    v15 = *(_OWORD *)&v26[16]; /*0x140ad2748*/
    v14 = *(_OWORD *)v26; /*0x140ad274c*/
    sub_14152E0B0(&v27, v3, v4); /*0x140ad275d*/
    if ( (_DWORD)v27 == 2 ) /*0x140ad276a*/
    {
      *((_QWORD *)&v20 + 1) = *((_QWORD *)&v27 + 1); /*0x140ad2777*/
      *(_QWORD *)&v20 = 2; /*0x140ad277b*/
    }
    else
    {
      v20 = v27; /*0x140ad2835*/
      v25 = v32; /*0x140ad2840*/
      v24 = v31; /*0x140ad284b*/
      v23 = v30; /*0x140ad284f*/
      v22 = v29; /*0x140ad2853*/
      v21 = v28; /*0x140ad2857*/
      if ( (_QWORD)v27 != 2 ) /*0x140ad2860*/
      {
        if ( *(_QWORD *)off_141FB9E30 >= 2u ) /*0x140ad297b*/
        {
          // debug/trace-level tracing::event! -- target codexmate_lib::core::repository, file src\core\repository.rs
          *(_QWORD *)&v20 = &v14; /*0x140ad2985*/
          *((_QWORD *)&v20 + 1) = sub_1405060F0; /*0x140ad2990*/
          *(_QWORD *)&v27 = 0; /*0x140ad2994*/
          *((_QWORD *)&v27 + 1) = aCodexmateLibCo_36; /*0x140ad29a6*/
          v28 = 0x1Fu; /*0x140ad29ad*/
          *(_QWORD *)&v29 = aSrcCoreReposit; /*0x140ad29ca*/
          *((_QWORD *)&v29 + 1) = 22; /*0x140ad29d1*/
          *(_QWORD *)&v30 = 2; /*0x140ad29dc*/
          *((_QWORD *)&v30 + 1) = aCodexmateLibCo_36; /*0x140ad29e7*/
          *(_QWORD *)&v31 = 31; /*0x140ad29ee*/
          *((_QWORD *)&v31 + 1) = 0x90E00000001LL; /*0x140ad2a03*/
          v32 = &unk_14185BF55; /*0x140ad2a11*/
          v33 = &v20; /*0x140ad2a1b*/
          sub_14136A9F0(&v34, &v27); /*0x140ad2a30*/
        }
        goto LABEL_8; /*0x140ad2a36*/
      }
    }
    sub_1400478E0((char *)&v20 + 8); /*0x140ad286a*/
LABEL_8:
    LODWORD(v20) = sub_14151CAC0( /*0x140ad2870*/
                     v6,
                     v5,
                     v7,
                     v8,
                     v14,
                     *((_QWORD *)&v14 + 1),
                     v15,
                     *((_QWORD *)&v15 + 1),
                     v16,
                     *((_QWORD *)&v16 + 1),
                     v17,
                     *((_QWORD *)&v17 + 1),
                     v18,
                     *((_QWORD *)&v18 + 1),
                     v19,
                     *((_QWORD *)&v19 + 1),
                     v20,
                     *((_QWORD *)&v20 + 1),
                     v21,
                     *((_QWORD *)&v21 + 1),
                     v22,
                     *((_QWORD *)&v22 + 1),
                     v23);
    DWORD1(v20) = v10; /*0x140ad2879*/
    sub_14151CA70(&v27, &v20, 3577643008LL, 27111902); /*0x140ad2892*/
    v9 = 0; /*0x140ad2898*/
    if ( (_BYTE)v27 ) /*0x140ad28a1*/
      v11 = 0; /*0x140ad28ac*/
    else
      v11 = *((_QWORD *)&v27 + 1); /*0x140ad28a3*/
    LODWORD(v32) = 4; /*0x140ad28ae*/
    *((_QWORD *)&v31 + 1) = v11; /*0x140ad28b8*/
    *((_QWORD *)&v28 + 1) = -1; /*0x140ad28bf*/
    *(_QWORD *)&v27 = 0; /*0x140ad28ca*/
    *((_QWORD *)&v27 + 1) = 8; /*0x140ad28d5*/
    *(_QWORD *)&v28 = 0; /*0x140ad28e0*/
    *(_QWORD *)&v30 = 0; /*0x140ad28eb*/
    *((_QWORD *)&v30 + 1) = 0xA0000000FLL; /*0x140ad2900*/
    LOBYTE(v31) = 0; /*0x140ad2907*/
    BYTE4(v32) = 1; /*0x140ad290e*/
    sub_140A9E920(&v14); /*0x140ad2919*/
    v14 = v30; /*0x140ad2925*/
    *(_DWORD *)v26 = *(_DWORD *)((char *)&v31 + 1); /*0x140ad292f*/
    *(_DWORD *)&v26[3] = DWORD1(v31); /*0x140ad2938*/
    goto LABEL_12; /*0x140ad2938*/
  }
  v31 = *(_OWORD *)&v26[72]; /*0x140ad278f*/
  v32 = *(void **)&v26[88]; /*0x140ad279d*/
  v30 = *(_OWORD *)&v26[56]; /*0x140ad27ba*/
  v29 = *(_OWORD *)&v26[40]; /*0x140ad27c1*/
  v28 = *(_OWORD *)&v26[24]; /*0x140ad27c8*/
  v27 = *(_OWORD *)&v26[8]; /*0x140ad27cf*/
  v9 = v26[72]; /*0x140ad27d6*/
  v14 = *(_OWORD *)&v26[56]; /*0x140ad27dd*/
  *(_DWORD *)v26 = *(_QWORD *)&v26[72] >> 8; /*0x140ad27e7*/
  *(_DWORD *)&v26[3] = *(_DWORD *)&v26[76]; /*0x140ad27f0*/
  if ( v26[72] != 2 ) /*0x140ad27f7*/
  {
LABEL_12:
    *(_OWORD *)a1 = v14; /*0x140ad293b*/
    v12 = *(_DWORD *)&v26[3]; /*0x140ad2945*/
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v26; /*0x140ad2948*/
    *(_DWORD *)(a1 + 20) = v12; /*0x140ad294b*/
    goto LABEL_13; /*0x140ad294b*/
  }
  *(_QWORD *)a1 = 0; /*0x140ad27fd*/
  *(_QWORD *)(a1 + 8) = 0xA0000000FLL; /*0x140ad280e*/
  v9 = 0; /*0x140ad2812*/
LABEL_13:
  *(_BYTE *)(a1 + 16) = v9; /*0x140ad294e*/
  sub_1408691A0(&v27); /*0x140ad2959*/
  return a1;
}

// refs: sub_140ACAD60, sub_14152E0B0, sub_1405060F0, aCodexmateLibCo_36="codexmate_lib::core::repository"@0x14185be03,
// aSrcCoreReposit="src\\core\\repository.rs"@0x14185bdec, unk_14185BF55, sub_14136A9F0, off_141FB9E30 (verbosity gate),
// sub_1400478E0, sub_14151CAC0, sub_14151CA70, sub_140A9E920, sub_1408691A0
