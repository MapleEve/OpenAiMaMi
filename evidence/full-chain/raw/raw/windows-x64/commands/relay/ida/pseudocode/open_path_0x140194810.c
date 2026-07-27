// ICF-FOLDED SHARED DISPATCHER (win-native): this address is NOT a standalone open_path leaf function.
// It is the shared Tauri IPC command-string dispatcher: switches on invoke-arg length then matches
// (memcmp/SIMD movemask over fixed byte/xmmword literals) against 26+ distinct command name strings,
// among them open_path, load_relay_state, get_relay_active, reveal_relay_api_key, export_relay_config,
// import_relay_config, set_api_proxy_config, upsert_mcp_server, remove_mcp_server, focus_main_window,
// get_autostart_state/set_autostart_enabled, voice-capture/voice-template/voice-llm/voice-asr commands,
// hotspot/mcp/registry/codex-kill utility commands, and (per owner-map evidence) get_codex_router_auth_readiness.
// Not owner-map "AMBIGUOUS-oversized-fn-suspected-shared-dispatcher" is confirmed by decompilation: this
// single win-native function cannot be split per-command without re-deriving each branch's control flow,
// which duplicates work already done standalone on macOS. For per-command ground truth, DEFER TO MAC:
//   macos-arm64/commands/system/ida/pseudocode/open_path_0x1007cda80.c            (open_path, 89 lines)
//   macos-arm64/commands/relay/ida/pseudocode/get_codex_router_auth_readiness_0x10053fd20.c (29 lines)
// This win file is retained for reference (arg-matching order, which commands share this trampoline,
// case dispatch by first-arg length) but is NOT to be treated as the ground-truth implementation of
// open_path or get_codex_router_auth_readiness individually — use the Mac per-command files for that.
// win 1.2.1 | tauri command handler = open_path | mapped via command-name string xref (win-native, ground-truth)
char __fastcall open_path(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  _BYTE v22[384]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+1B0h] [rbp+130h]
  int v24; // [rsp+1B8h] [rbp+138h]
  int v25; // [rsp+1BCh] [rbp+13Ch]
  _BYTE v26[520]; // [rsp+1C0h] [rbp+140h] BYREF
  __m128i v27; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v28; // [rsp+3D8h] [rbp+358h]
  __m128i v29; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v30; // [rsp+540h] [rbp+4C0h]
  __m128i v31; // [rsp+558h] [rbp+4D8h]
  __int64 v32; // [rsp+568h] [rbp+4E8h]
  char v33; // [rsp+5E0h] [rbp+560h]
  char v34; // [rsp+628h] [rbp+5A8h]
  char v35; // [rsp+7C0h] [rbp+740h]
  char v36; // [rsp+7D8h] [rbp+758h]
  char v37; // [rsp+7F0h] [rbp+770h]
  char v38; // [rsp+838h] [rbp+7B8h]
  char v39; // [rsp+A18h] [rbp+998h]
  char v40; // [rsp+A78h] [rbp+9F8h]
  char v41; // [rsp+B38h] [rbp+AB8h]
  char v42; // [rsp+B80h] [rbp+B00h]
  char v43; // [rsp+BE0h] [rbp+B60h]
  char v44; // [rsp+FE8h] [rbp+F68h]
  char v45; // [rsp+1000h] [rbp+F80h]
  char v46; // [rsp+1030h] [rbp+FB0h]
  char v47; // [rsp+1090h] [rbp+1010h]
  char v48; // [rsp+10F0h] [rbp+1070h]
  char v49; // [rsp+1180h] [rbp+1100h]
  char v50; // [rsp+11F8h] [rbp+1178h]
  char v51; // [rsp+1228h] [rbp+11A8h]
  char v52; // [rsp+1270h] [rbp+11F0h]
  char v53; // [rsp+1348h] [rbp+12C8h]
  char v54; // [rsp+1450h] [rbp+13D0h]
  char v55; // [rsp+1588h] [rbp+1508h]
  char v56; // [rsp+1678h] [rbp+15F8h]
  char v57; // [rsp+1690h] [rbp+1610h]
  char v58; // [rsp+1A08h] [rbp+1988h]
  _QWORD v59[3]; // [rsp+1A10h] [rbp+1990h] BYREF
  _QWORD v60[3]; // [rsp+1A28h] [rbp+19A8h] BYREF
  const char *v61; // [rsp+1A40h] [rbp+19C0h] BYREF
  __int64 v62; // [rsp+1A48h] [rbp+19C8h]
  const char *v63; // [rsp+1A50h] [rbp+19D0h] BYREF
  __int64 v64; // [rsp+1A58h] [rbp+19D8h]
  _BYTE *v65; // [rsp+1A60h] [rbp+19E0h]
  __m128i *v66; // [rsp+1A68h] [rbp+19E8h]
  __int64 v67; // [rsp+1A70h] [rbp+19F0h]
  _BYTE v68[512]; // [rsp+1BD0h] [rbp+1B50h] BYREF
  __int64 v69; // [rsp+1DD0h] [rbp+1D50h]
  __m128i v70; // [rsp+1DD8h] [rbp+1D58h] BYREF
  __int64 v71; // [rsp+1DE8h] [rbp+1D68h]
  char v72; // [rsp+1E58h] [rbp+1DD8h]
  char v73; // [rsp+1EA0h] [rbp+1E20h]
  char v74; // [rsp+1EB8h] [rbp+1E38h]
  char v75; // [rsp+1ED0h] [rbp+1E50h]
  char v76; // [rsp+1EE8h] [rbp+1E68h]
  __int128 v77; // [rsp+1F68h] [rbp+1EE8h]
  __int64 v78; // [rsp+1F78h] [rbp+1EF8h]
  __m128i v79; // [rsp+1F80h] [rbp+1F00h] BYREF
  __int64 v80; // [rsp+1F90h] [rbp+1F10h]
  __int64 v81; // [rsp+1F98h] [rbp+1F18h]
  _BYTE v82[48]; // [rsp+1FA0h] [rbp+1F20h] BYREF
  __int128 v83; // [rsp+1FD0h] [rbp+1F50h]
  __int128 v84; // [rsp+1FE0h] [rbp+1F60h]
  __int128 v85; // [rsp+1FF0h] [rbp+1F70h]
  __int128 v86; // [rsp+2000h] [rbp+1F80h]
  __m256i v87; // [rsp+2010h] [rbp+1F90h] BYREF
  __int128 v88; // [rsp+2030h] [rbp+1FB0h]
  __int128 v89; // [rsp+2040h] [rbp+1FC0h]
  __int128 v90; // [rsp+2050h] [rbp+1FD0h]
  __int128 v91; // [rsp+2060h] [rbp+1FE0h]
  __int128 v92; // [rsp+2070h] [rbp+1FF0h]
  __m128i v93; // [rsp+2080h] [rbp+2000h] BYREF
  __m128i v94; // [rsp+2090h] [rbp+2010h] BYREF
  __m128i v95; // [rsp+20A0h] [rbp+2020h] BYREF
  __int64 v96; // [rsp+20B0h] [rbp+2030h]
  char v97; // [rsp+20C0h] [rbp+2040h]
  char v98; // [rsp+20C2h] [rbp+2042h]
  char v99; // [rsp+20C4h] [rbp+2044h]
  char v100; // [rsp+20C6h] [rbp+2046h]
  char v101; // [rsp+20C8h] [rbp+2048h]
  char v102; // [rsp+20CAh] [rbp+204Ah]
  char v103; // [rsp+20CBh] [rbp+204Bh]
  char v104; // [rsp+20CCh] [rbp+204Ch]
  char v105; // [rsp+20CDh] [rbp+204Dh]
  char v106; // [rsp+20CEh] [rbp+204Eh]
  char v107; // [rsp+20CFh] [rbp+204Fh]
  __int64 v108; // [rsp+20D0h] [rbp+2050h]

  v108 = -2;
  v3 = *(_QWORD *)(a2 + 464);
  switch ( *(_QWORD *)(a2 + 472) )
  {
    case 5LL:
      if ( *(_DWORD *)v3 ^ 0x61656C63 | *(unsigned __int8 *)(v3 + 4) ^ 0x6E )
        goto LABEL_179;
      sub_141684120(&v27, a2 + 520, 400);
      sub_141684120(v68, a2, 520);
      sub_141684120(v22, a2 + 520, 400);
      v96 = *(_QWORD *)(a2 + 936);
      v95 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v67 = 0;
      v61 = aClean;
      v62 = 5;
      v63 = aRepo;
      v64 = 4;
      v65 = v68;
      v66 = &v95;
      v106 = 1;
      v4 = sub_140003640((volatile void *)(v69 + 16));
      if ( v4 )
        goto LABEL_4;
      v106 = 1;
      sub_1416850A0(&v93, &v61, &v63);
      if ( v93.m128i_i8[0] == -1 )
      {
        v4 = v93.m128i_i64[1];
LABEL_4:
        v106 = 1;
        sub_1403DA810(&v87, v4);
        sub_141684120(&v61, &v27, 400);
        if ( v87.m256i_i64[0] == -1 )
        {
          v102 = 1;
          sub_1401BDB30(&v93, &v87.m256i_u64[1]);
          v20 = _mm_loadu_si128(&v93);
          *(__m128i *)&v82[24] = _mm_loadu_si128(&v94);
          *(__m128i *)&v82[8] = v20;
          *(_QWORD *)v82 = -1;
        }
        else
        {
          v85 = v91;
          v84 = v90;
          v5 = _mm_loadu_si128((const __m128i *)&v87);
          v6 = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[2]);
          v83 = v89;
          *(_OWORD *)&v82[32] = v88;
          *(__m128i *)&v82[16] = v6;
          *(__m128i *)v82 = v5;
        }
        v102 = 0;
        sub_140432F90(&v61, v82);
      }
      else
      {
        *(__m128i *)&v82[24] = _mm_loadu_si128(&v94);
        *(__m128i *)&v82[8] = v93;
        sub_141684120(&v61, &v27, 360);
        *(__m128i *)v87.m256i_i8 = _mm_loadu_si128(&v29);
        v87.m256i_i64[2] = v30;
        *(_QWORD *)v82 = 1;
        v106 = 0;
        sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v87, v24, v25);
      }
      if ( v95.m128i_i64[0] == -1 )
        goto LABEL_289;
      goto LABEL_286;
    case 6LL:
      if ( *(_DWORD *)v3 ^ 0x6F676F6C | *(unsigned __int16 *)(v3 + 4) ^ 0x7475 )
        goto LABEL_179;
      sub_141684120(v68, a2, 520);
      sub_141684120(&v70, a2 + 520, 400);
      v77 = *(_OWORD *)(a2 + 920);
      v78 = *(_QWORD *)(a2 + 936);
      v28 = *(_QWORD *)(a2 + 936);
      v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      sub_141684120(v26, a2, 520);
      v49 = 0;
      sub_14042FB50(&v70, v26);
      return 1;
    case 8LL:
      if ( *(_QWORD *)v3 != 0x65736F6E67616964LL )
        goto LABEL_179;
      sub_141684120(v68, a2, 520);
      sub_141684120(&v70, a2 + 520, 400);
      v77 = *(_OWORD *)(a2 + 920);
      v78 = *(_QWORD *)(a2 + 936);
      v28 = *(_QWORD *)(a2 + 936);
      v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      sub_141684120(v26, a2, 520);
      v33 = 0;
      sub_1404305A0(&v70, v26);
      return 1;
    case 9LL:
      if ( *(_QWORD *)v3 ^ 0x7461705F6E65706FLL | *(unsigned __int8 *)(v3 + 8) ^ 0x68LL )
      {
        if ( *(_QWORD *)v3 ^ 0x63746F6E5F736168LL | *(unsigned __int8 *)(v3 + 8) ^ 0x68LL )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        has_notch(v26);
      }
      else
      {
        sub_141684120(&v27, a2 + 520, 400);
        sub_141684120(v68, a2, 520);
        sub_141684120(v22, a2 + 520, 400);
        v96 = *(_QWORD *)(a2 + 936);
        v95 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v67 = 0;
        v61 = aOpenPath;
        v62 = 9;
        v63 = aPath_2;
        v64 = 4;
        v65 = v68;
        v66 = &v95;
        v103 = 1;
        sub_1409757B0(&v87, &v61);
        if ( v87.m256i_i8[0] == -1 )
        {
          v94.m128i_i64[0] = v87.m256i_i64[3];
          v93 = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[1]);
          v103 = 1;
          sub_1403DAC80(v60, &v93);
          sub_141684120(&v61, &v27, 400);
          if ( v60[0] == -1 )
          {
            v87.m256i_i8[0] = -1;
          }
          else
          {
            v101 = 1;
            sub_1401BDB30(v82, v60);
            v18 = _mm_loadu_si128((const __m128i *)v82);
            *(__m128i *)&v87.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v82[16]);
            *(__m128i *)v87.m256i_i8 = v18;
          }
          v101 = 0;
          sub_14043A970(&v61, &v87);
        }
        else
        {
          *(__m128i *)&v82[24] = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[2]);
          *(_OWORD *)&v82[8] = *(_OWORD *)v87.m256i_i8;
          sub_141684120(&v61, &v27, 360);
          v93 = _mm_loadu_si128(&v29);
          v94.m128i_i64[0] = v30;
          *(_QWORD *)v82 = 1;
          v103 = 0;
          sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v93, v24, v25);
        }
        if ( v95.m128i_i64[0] != -1 )
        {
LABEL_286:
          sub_140335120(&v95);
          v12 = v95.m128i_i64[0];
          if ( v95.m128i_i64[0] )
          {
            v13 = v95.m128i_i64[1];
LABEL_288:
            sub_140001660(v13, 96 * v12, 8);
          }
        }
LABEL_289:
        sub_140014270(v68);
      }
      return 1;
    case 0xCLL:
      if ( *(_QWORD *)v3 ^ 0x735F74726F706D69LL | *(unsigned int *)(v3 + 8) ^ 0x6C6C696BLL )
      {
        if ( *(_QWORD *)v3 ^ 0x735F65766F6D6572LL | *(unsigned int *)(v3 + 8) ^ 0x6C6C696BLL )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v46 = 0;
        sub_14042F3C0(&v70, v26);
      }
      else
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v46 = 0;
        sub_14042F470(&v70, v26);
      }
      return 1;
    case 0xDLL:
      if ( *(_QWORD *)v3 ^ 0x616E735F64616F6CLL | *(_QWORD *)(v3 + 5) ^ 0x746F687370616E73LL )
      {
        if ( *(_QWORD *)v3 ^ 0x7365735F64616F6CLL | *(_QWORD *)(v3 + 5) ^ 0x736E6F6973736573LL )
        {
          if ( *(_QWORD *)v3 ^ 0x5F74726174736572LL | *(_QWORD *)(v3 + 5) ^ 0x7865646F635F7472LL )
          {
            if ( *(_QWORD *)v3 ^ 0x697665645F746567LL | *(_QWORD *)(v3 + 5) ^ 0x64695F6563697665LL )
            {
              if ( *(_QWORD *)v3 ^ 0x5F746F7073746F68LL | *(_QWORD *)(v3 + 5) ^ 0x79646165725F746FLL )
                goto LABEL_179;
              sub_141684120(v26, a2, 520);
              sub_141684120(&v27, a2 + 520, 400);
              v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
              v32 = *(_QWORD *)(a2 + 936);
              hotspot_ready(v26);
            }
            else
            {
              sub_141684120(v26, a2, 520);
              sub_141684120(&v27, a2 + 520, 400);
              v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
              v32 = *(_QWORD *)(a2 + 936);
              get_device_id(v26);
            }
          }
          else
          {
            sub_141684120(v68, a2, 520);
            sub_141684120(&v70, a2 + 520, 400);
            v77 = *(_OWORD *)(a2 + 920);
            v78 = *(_QWORD *)(a2 + 936);
            v28 = *(_QWORD *)(a2 + 936);
            v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
            sub_141684120(v26, a2, 520);
            v33 = 0;
            sub_1404304F0(&v70, v26);
          }
        }
        else
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = *(__m128i *)(a2 + 920);
          v32 = *(_QWORD *)(a2 + 936);
          v71 = *(_QWORD *)(a2 + 936);
          v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          sub_141684120(v68, a2, 520);
          v72 = 0;
          sub_14042F100(&v27, v68);
        }
      }
      else
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v43 = 0;
        sub_140430020(&v70, v26);
      }
      return 1;
    case 0xELL:
      if ( *(_QWORD *)v3 ^ 0x615F686374697773LL | *(_QWORD *)(v3 + 6) ^ 0x746E756F6363615FLL )
        goto LABEL_179;
      sub_141684120(v68, a2, 520);
      sub_141684120(&v70, a2 + 520, 400);
      v77 = *(_OWORD *)(a2 + 920);
      v78 = *(_QWORD *)(a2 + 936);
      v28 = *(_QWORD *)(a2 + 936);
      v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      sub_141684120(v26, a2, 520);
      v39 = 0;
      sub_14042FD60(&v70, v26);
      return 1;
    case 0xFLL:
      if ( *(_QWORD *)v3 ^ 0x615F65766F6D6572LL | *(_QWORD *)(v3 + 7) ^ 0x73746E756F636361LL )
      {
        if ( *(_QWORD *)v3 ^ 0x735F6574656C6564LL | *(_QWORD *)(v3 + 7) ^ 0x736E6F6973736573LL )
        {
          if ( *(_QWORD *)v3 ^ 0x6F7475615F746573LL | *(_QWORD *)(v3 + 7) ^ 0x6863746977735F6FLL )
          {
            if ( *(_QWORD *)v3 ^ 0x6D6561645F6E7572LL | *(_QWORD *)(v3 + 7) ^ 0x65636E6F5F6E6F6DLL )
            {
              if ( *(_QWORD *)v3 ^ 0x747379735F746567LL | *(_QWORD *)(v3 + 7) ^ 0x6F666E695F6D6574LL )
                goto LABEL_179;
              sub_141684120(v26, a2, 520);
              sub_141684120(&v27, a2 + 520, 400);
              v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
              v32 = *(_QWORD *)(a2 + 936);
              sub_140188DF0(v26);
            }
            else
            {
              sub_141684120(v68, a2, 520);
              sub_141684120(&v70, a2 + 520, 400);
              v77 = *(_OWORD *)(a2 + 920);
              v78 = *(_QWORD *)(a2 + 936);
              v28 = *(_QWORD *)(a2 + 936);
              v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
              sub_141684120(v26, a2, 520);
              v33 = 0;
              sub_140430650(&v70, v26);
            }
          }
          else
          {
            sub_141684120(v68, a2, 520);
            sub_141684120(&v70, a2 + 520, 400);
            v77 = *(_OWORD *)(a2 + 920);
            v78 = *(_QWORD *)(a2 + 936);
            v28 = *(_QWORD *)(a2 + 936);
            v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
            sub_141684120(v26, a2, 520);
            v50 = 0;
            sub_14042EEF0(&v70, v26);
          }
        }
        else
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          delete_sessions(v26);
        }
      }
      else
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v52 = 0;
        sub_14042FC00(&v70, v26);
      }
      return 1;
    case 0x10LL:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6BE0)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_mcp_servers(v26);
      }
      else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6BF0)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        rebuild_registry(v26);
      }
      else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C00)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        force_kill_codex(v26);
      }
      else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C10)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_14016B7A0(v26);
      }
      else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C20)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_image_compat(v26);
      }
      else if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C30)) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_relay_state(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C40)) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_relay_active(v26);
      }
      return 1;
    case 0x11LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v3 + 16)), (__m128i)xmmword_1416C6B80),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B70))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        upsert_mcp_server(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v3 + 16)), (__m128i)xmmword_1416C6B80),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B90))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        remove_mcp_server(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v3 + 16)), (__m128i)xmmword_1416C6BB0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6BA0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v74 = 0;
        sub_14042F730(&v27, v68);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v3 + 16)), (__m128i)xmmword_1416C6BD0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6BC0))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        focus_main_window(v26);
      }
      return 1;
    case 0x12LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v3 + 16)), (__m128i)xmmword_1416C6B20),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B10))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v44 = 0;
        sub_14042F520(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v3 + 16)), (__m128i)xmmword_1416C6B40),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B30))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        stop_voice_capture(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v3 + 16)), (__m128i)xmmword_1416C6B60),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B50))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v48 = 0;
        sub_140430E90(&v70, v26);
      }
      return 1;
    case 0x13LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7380),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7370))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_autostart_state((__int64)v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C73A0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7390))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v46 = 0;
        sub_14042F260(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C73C0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C73B0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_14017DE40(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C73E0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C73D0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        start_voice_capture(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7400),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C73F0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v73 = 0;
        sub_1404302E0(&v27, v68);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7420),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7410))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v50 = 0;
        sub_140430FF0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7440),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7430))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v47 = 0;
        sub_140430C80(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7460),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7450))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_hotspot_enabled(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7470),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7450))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_hotspot_enabled(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7490),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C7480))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_140187B10(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C74B0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C74A0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        export_relay_config(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C74C0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 3)), (__m128i)xmmword_1416C74A0))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        import_relay_config(v26);
      }
      return 1;
    case 0x14LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6A50),
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6A40))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v46 = 0;
        sub_14042F310(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6A70),
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6A60))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_voice_workspace(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6A90),
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6A80))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_api_proxy_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6AB0),
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6AA0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_bootstrap_state(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6AD0),
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6AC0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v45 = 0;
        sub_140430F40(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6AE0),
                    _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6AC0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v47 = 0;
        sub_140430D30(&v70, v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6B00),
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(_DWORD *)(v3 + 16)), (__m128i)xmmword_1416C6AF0))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        reveal_relay_api_key(v26);
      }
      return 1;
    case 0x15LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7180),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7170))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_autostart_enabled((__int64)v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C71A0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7190))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v44 = 0;
        sub_14042F5D0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C71C0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C71B0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        upsert_voice_template(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C71E0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C71D0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        remove_voice_template(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7200),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C71F0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v41 = 0;
        sub_14042F1B0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7220),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7210))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_voice_llm_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7230),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7210))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        save_voice_llm_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7240),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7210))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        test_voice_llm_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7260),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7250))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_voice_asr_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7270),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7250))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        save_voice_asr_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7280),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7250))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        test_voice_asr_config(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6DF0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C6F30))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_trigger_key(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C72A0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C7290))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        voice_processing_done(v26);
      }
      else
      {
        v7 = *(_QWORD *)(a2 + 464);
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C72C0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 5)), (__m128i)xmmword_1416C72B0))) == 0xFFFF )
        {
          sub_141684120(v68, a2, 520);
          sub_141684120(&v70, a2 + 520, 400);
          v77 = *(_OWORD *)(a2 + 920);
          v78 = *(_QWORD *)(a2 + 936);
          v28 = *(_QWORD *)(a2 + 936);
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          sub_141684120(v26, a2, 520);
          v51 = 0;
          sub_140430860(&v70, v26);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C72D0),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C6D20))) == 0xFFFF )
        {
          sub_141684120(v68, a2, 520);
          sub_141684120(&v70, a2 + 520, 400);
          v77 = *(_OWORD *)(a2 + 920);
          v78 = *(_QWORD *)(a2 + 936);
          v28 = *(_QWORD *)(a2 + 936);
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          sub_141684120(v26, a2, 520);
          v34 = 0;
          sub_1404307B0(&v70, v26);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C72F0),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C72E0))) == 0xFFFF )
        {
          sub_141684120(v68, a2, 520);
          sub_141684120(&v70, a2 + 520, 400);
          v77 = *(_OWORD *)(a2 + 920);
          v78 = *(_QWORD *)(a2 + 936);
          v28 = *(_QWORD *)(a2 + 936);
          v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          sub_141684120(v26, a2, 520);
          v47 = 0;
          sub_140430BD0(&v70, v26);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C7310),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C7300))) == 0xFFFF )
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          upsert_relay_provider(v26);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C7320),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C6D40))) == 0xFFFF )
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          delete_relay_provider(v26);
        }
        else if ( _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C7340),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C7330))) == 0xFFFF )
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          sub_140187580(v26);
        }
        else
        {
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_1416C7360),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 5)), (__m128i)xmmword_1416C7350))) != 0xFFFF )
            goto LABEL_179;
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          parse_aimami_deeplink(v26);
        }
      }
      return 1;
    case 0x16LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C70A0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C7090))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v42 = 0;
        sub_14042FF70(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C70C0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C70B0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v37 = 0;
        sub_14042F940(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C70E0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C70D0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_mcp_server_enabled(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7100),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C70F0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        write_client_debug_log(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7120),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C7110))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v47 = 0;
        sub_140430DE0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7140),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C7130))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_relay_proxy_status(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7160),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 6)), (__m128i)xmmword_1416C7150))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v73 = 0;
        sub_14042F680(&v27, v68);
      }
      return 1;
    case 0x17LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C60),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6C50))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v38 = 0;
        sub_14042F9F0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C80),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6C70))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        upsert_voice_vocabulary(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6C90),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6C70))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        remove_voice_vocabulary(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6CB0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6CA0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_overlay_style(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6CD0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6CC0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_mode_shortcut(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6CF0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6CE0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_14017A5A0(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6D10),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6D00))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v76 = 0;
        sub_14042F050(&v27, v68);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6D30),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6D20))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v33 = 0;
        sub_140430700(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6D50),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6D40))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        activate_relay_provider(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6D70),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6D60))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        reorder_relay_providers(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6D90),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 7)), (__m128i)xmmword_1416C6D80))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v58 = 0;
        sub_140430A70(&v70, v26);
      }
      return 1;
    case 0x18LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6890),
               _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C6880))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v75 = 0;
        sub_14042EFA0(&v27, v68);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C68B0),
                    _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C68A0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_pending_auto_switch(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C68D0),
                    _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C68C0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v54 = 0;
        sub_1404309C0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C68F0),
                    _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C68E0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v56 = 0;
        sub_140430910(&v70, v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6910),
                 _mm_cmpeq_epi8(_mm_loadl_epi64((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C6900))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v36 = 0;
        sub_140430230(&v70, v26);
      }
      return 1;
    case 0x19LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6EA0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6DA0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v55 = 0;
        sub_14042FAA0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6EC0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6EB0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v53 = 0;
        sub_14042F890(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6EE0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6ED0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_voice_runtime_status(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F00),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6EF0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        request_voice_permissions(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F20),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6F10))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_global_shortcut(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F40),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6F30))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v33 = 0;
        sub_14042F7E0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F60),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6F50))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        show_voice_search_overlay(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F70),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6F50))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_140179500(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F80),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C69C0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_mystery_unlock_grants(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6F90),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6D40))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        deactivate_relay_provider(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6FB0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 9)), (__m128i)xmmword_1416C6FA0))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v36 = 0;
        sub_140430180(&v70, v26);
      }
      return 1;
    case 0x1ALL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6DB0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6DA0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_1401860A0(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6DD0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6DC0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        remove_voice_history_entry(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6DF0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6DE0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_trigger_bindings(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E00),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6CC0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        remove_voice_mode_shortcut(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E20),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6E10))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_140178E70(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E40),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6E30))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_usage_refresh_interval(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E50),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6E30))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_usage_refresh_interval(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E70),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6E60))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_relay_provider_network(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6E90),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 10)), (__m128i)xmmword_1416C6E80))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v57 = 0;
        sub_140430B20(&v70, v26);
      }
      return 1;
    case 0x1BLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6930),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6920))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        load_voice_processing_modes(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6940),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6920))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        save_voice_processing_modes(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6960),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6950))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_14018BF50(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6980),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6970))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_14018BAB0(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C69A0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6990))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        dismiss_pending_auto_switch(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C69B0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C6990))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v35 = 0;
        sub_140430440(&v70, v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C69D0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 11)), (__m128i)xmmword_1416C69C0))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        merge_mystery_unlock_grants(v26);
      }
      return 1;
    case 0x1CLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7020),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 12)), (__m128i)xmmword_1416C7010))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v40 = 0;
        sub_14042FE10(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7040),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 12)), (__m128i)xmmword_1416C7030))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_140183410(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7060),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 12)), (__m128i)xmmword_1416C7050))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        set_voice_processing_mode_id(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C7080),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 12)), (__m128i)xmmword_1416C7070))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = *(__m128i *)(a2 + 920);
        v32 = *(_QWORD *)(a2 + 936);
        v71 = *(_QWORD *)(a2 + 936);
        v70 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v68, a2, 520);
        v72 = 0;
        sub_14042FEC0(&v27, v68);
      }
      return 1;
    case 0x1DLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C69F0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 13)), (__m128i)xmmword_1416C69E0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        replace_voice_vocabulary_kind(v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6A10),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 13)), (__m128i)xmmword_1416C6A00))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        update_voice_runtime_settings(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6A30),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 13)), (__m128i)xmmword_1416C6A20))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        get_notification_client_state(v26);
      }
      return 1;
    case 0x1ELL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6870),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 14)), (__m128i)xmmword_1416C6860))) != 0xFFFF )
        goto LABEL_179;
      sub_141684120(&v27, a2 + 520, 400);
      sub_141684120(v68, a2, 520);
      sub_141684120(v22, a2 + 520, 400);
      v94.m128i_i64[0] = *(_QWORD *)(a2 + 936);
      v93 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v98 = 1;
      sub_1407363F0(&v87);
      sub_141684120(&v61, &v27, 400);
      *(_QWORD *)&v82[24] = v87.m256i_i64[2];
      *(__m128i *)&v82[8] = _mm_loadu_si128((const __m128i *)&v87);
      v82[0] = -1;
      v98 = 0;
      sub_140438B60(&v61, v82);
      if ( v93.m128i_i64[0] == -1 )
        goto LABEL_289;
      v81 = v93.m128i_i64[0];
      sub_140335120(&v93);
      v12 = v81;
      if ( !v81 )
        goto LABEL_289;
      v13 = v93.m128i_i64[1];
      goto LABEL_288;
    case 0x1FLL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6850),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 15)), (__m128i)xmmword_1416C6840))) != 0xFFFF )
        goto LABEL_179;
      sub_141684120(&v27, a2 + 520, 400);
      sub_141684120(v68, a2, 520);
      sub_141684120(v22, a2 + 520, 400);
      v96 = *(_QWORD *)(a2 + 936);
      v95 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v67 = 0;
      v61 = aGetCodexRouter;
      v62 = 31;
      v63 = aManager_0;
      v64 = 7;
      v65 = v68;
      v66 = &v95;
      v104 = 1;
      v9 = sub_140004B10((volatile void *)(v69 + 16));
      if ( v9 )
        goto LABEL_47;
      v104 = 1;
      sub_1416850A0(&v93, &v61, &v63);
      if ( v93.m128i_i8[0] == -1 )
      {
        v9 = v93.m128i_i64[1];
LABEL_47:
        v104 = 1;
        sub_1404878D0(&v87, v9);
        sub_141684120(&v61, &v27, 400);
        if ( v87.m256i_i64[0] == -1 )
        {
          v97 = 1;
          sub_1401BDB30(&v93, &v87.m256i_u64[1]);
          v19 = _mm_loadu_si128(&v93);
          *(__m128i *)&v82[24] = _mm_loadu_si128(&v94);
          *(__m128i *)&v82[8] = v19;
          *(_QWORD *)v82 = -1;
        }
        else
        {
          v86 = v92;
          v85 = v91;
          v84 = v90;
          v10 = _mm_loadu_si128((const __m128i *)&v87);
          v11 = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[2]);
          v83 = v89;
          *(_OWORD *)&v82[32] = v88;
          *(__m128i *)&v82[16] = v11;
          *(__m128i *)v82 = v10;
        }
        v97 = 0;
        sub_140436710(&v61, v82);
      }
      else
      {
        *(__m128i *)&v82[24] = _mm_loadu_si128(&v94);
        *(__m128i *)&v82[8] = v93;
        sub_141684120(&v61, &v27, 360);
        *(__m128i *)v87.m256i_i8 = _mm_loadu_si128(&v29);
        v87.m256i_i64[2] = v30;
        *(_QWORD *)v82 = 1;
        v104 = 0;
        sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v87, v24, v25);
      }
      if ( v95.m128i_i64[0] != -1 )
        goto LABEL_286;
      goto LABEL_289;
    case 0x20LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6FD0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C6FC0))) == 0xFFFF )
      {
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v39 = 0;
        sub_14042FCB0(&v70, v26);
      }
      else if ( _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6FF0),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C6FE0))) == 0xFFFF )
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        request_accessibility_permission(v26);
      }
      else
      {
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v3), (__m128i)xmmword_1416C6910),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v3 + 16)), (__m128i)xmmword_1416C7000))) != 0xFFFF )
          goto LABEL_179;
        sub_141684120(v68, a2, 520);
        sub_141684120(&v70, a2 + 520, 400);
        v77 = *(_OWORD *)(a2 + 920);
        v78 = *(_QWORD *)(a2 + 936);
        v28 = *(_QWORD *)(a2 + 936);
        v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        sub_141684120(v26, a2, 520);
        v36 = 0;
        sub_1404300D0(&v70, v26);
      }
      return 1;
    case 0x21LL:
      v8 = *(_QWORD *)(a2 + 464);
      if ( (unsigned int)sub_1416847B0(v3, aRemoveVoiceVoc, 33) )
      {
        if ( (unsigned int)sub_1416847B0(v8, aUpsertVoiceVoc, 33) )
        {
          if ( (unsigned int)sub_1416847B0(v8, aResolveVoiceVo, 33) )
          {
LABEL_179:
            sub_1400144E0(a2);
            return 0;
          }
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          sub_140170790(v26);
        }
        else
        {
          sub_141684120(v26, a2, 520);
          sub_141684120(&v27, a2 + 520, 400);
          v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
          v32 = *(_QWORD *)(a2 + 936);
          sub_140170D00(v26);
        }
      }
      else
      {
        sub_141684120(v26, a2, 520);
        sub_141684120(&v27, a2 + 520, 400);
        v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
        v32 = *(_QWORD *)(a2 + 936);
        sub_140171760(v26);
      }
      return 1;
    case 0x22LL:
      if ( (unsigned int)sub_1416847B0(v3, &unk_1416CD9B9, 34) )
        goto LABEL_179;
      sub_141684120(&v27, a2 + 520, 400);
      sub_141684120(v68, a2, 520);
      sub_141684120(v22, a2 + 520, 400);
      v96 = *(_QWORD *)(a2 + 936);
      v95 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v67 = 0;
      v61 = (const char *)&unk_1416CD9B9;
      v62 = 34;
      v63 = aRepo;
      v64 = 4;
      v65 = v68;
      v66 = &v95;
      v105 = 1;
      v16 = sub_140003640((volatile void *)(v69 + 16));
      if ( v16 )
        goto LABEL_202;
      v105 = 1;
      sub_1416850A0(&v87, &v61, &v63);
      if ( v87.m256i_i8[0] == -1 )
      {
        v16 = v87.m256i_i64[1];
LABEL_202:
        v105 = 1;
        sub_1403D5940(&v93, v16);
        sub_141684120(&v61, &v27, 400);
        if ( v93.m128i_i32[0] == 1 )
        {
          v100 = 1;
          sub_1401BDB30(v82, &v93.m128i_u64[1]);
          v17 = _mm_loadu_si128((const __m128i *)v82);
          *(__m128i *)&v87.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v82[16]);
          *(__m128i *)v87.m256i_i8 = v17;
        }
        else
        {
          v87.m256i_i64[3] = v94.m128i_i64[1];
          *(__m128i *)&v87.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&v93.m128i_u64[1]);
          v87.m256i_i8[0] = -1;
        }
        v100 = 0;
        sub_140438B60(&v61, &v87);
      }
      else
      {
        *(__m128i *)&v82[24] = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[2]);
        *(_OWORD *)&v82[8] = *(_OWORD *)v87.m256i_i8;
        sub_141684120(&v61, &v27, 360);
        v93 = _mm_loadu_si128(&v29);
        v94.m128i_i64[0] = v30;
        *(_QWORD *)v82 = 1;
        v105 = 0;
        sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v93, v24, v25);
      }
      if ( v95.m128i_i64[0] != -1 )
        goto LABEL_286;
      goto LABEL_289;
    case 0x24LL:
      if ( (unsigned int)sub_1416847B0(v3, &unk_1416CD98F, 36) )
        goto LABEL_179;
      sub_141684120(&v27, a2 + 520, 400);
      sub_141684120(v68, a2, 520);
      sub_141684120(v22, a2 + 520, 400);
      v80 = *(_QWORD *)(a2 + 936);
      v79 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v67 = 0;
      v61 = (const char *)&unk_1416CD98F;
      v62 = 36;
      v63 = aRepo;
      v64 = 4;
      v65 = v68;
      v66 = &v79;
      v107 = 1;
      v14 = sub_140003640((volatile void *)(v69 + 16));
      if ( v14 )
        goto LABEL_176;
      v107 = 1;
      sub_1416850A0(&v93, &v61, &v63);
      if ( v93.m128i_i8[0] == -1 )
      {
        v14 = v93.m128i_i64[1];
LABEL_176:
        v67 = 0;
        v61 = (const char *)&unk_1416CD98F;
        v62 = 36;
        v63 = aSecret;
        v64 = 6;
        v65 = v68;
        v66 = &v79;
        v107 = 1;
        sub_1409757B0(&v87, &v61);
        if ( v87.m256i_i8[0] == -1 )
        {
          v96 = v87.m256i_i64[3];
          v95 = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[1]);
          v107 = 1;
          sub_1403D6250(v59, v14, &v95);
          sub_141684120(&v61, &v27, 400);
          if ( v59[0] == -1 )
          {
            v87.m256i_i8[0] = -1;
          }
          else
          {
            v99 = 1;
            sub_1401BDB30(v82, v59);
            v21 = _mm_loadu_si128((const __m128i *)v82);
            *(__m128i *)&v87.m256i_u64[2] = _mm_loadu_si128((const __m128i *)&v82[16]);
            *(__m128i *)v87.m256i_i8 = v21;
          }
          v99 = 0;
          sub_14043A970(&v61, &v87);
        }
        else
        {
          *(__m128i *)&v82[24] = _mm_loadu_si128((const __m128i *)&v87.m256i_u64[2]);
          *(_OWORD *)&v82[8] = *(_OWORD *)v87.m256i_i8;
          sub_141684120(&v61, &v27, 360);
          v95 = _mm_loadu_si128(&v29);
          v96 = v30;
          *(_QWORD *)v82 = 1;
          v107 = 0;
          sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v95, v24, v25);
        }
      }
      else
      {
        *(__m128i *)&v82[24] = _mm_loadu_si128(&v94);
        *(__m128i *)&v82[8] = v93;
        sub_141684120(&v61, &v27, 360);
        *(__m128i *)v87.m256i_i8 = _mm_loadu_si128(&v29);
        v87.m256i_i64[2] = v30;
        *(_QWORD *)v82 = 1;
        v107 = 0;
        sub_14047E370((unsigned int)&v61, v23, (unsigned int)v82, (unsigned int)&v87, v24, v25);
      }
      if ( v79.m128i_i64[0] == -1 )
        goto LABEL_289;
      sub_140335120(&v79);
      v12 = v79.m128i_i64[0];
      if ( !v79.m128i_i64[0] )
        goto LABEL_289;
      v13 = v79.m128i_i64[1];
      goto LABEL_288;
    case 0x25LL:
      if ( (unsigned int)sub_1416847B0(v3, aSetVoiceTrigge_1, 37) )
        goto LABEL_179;
      sub_141684120(v26, a2, 520);
      sub_141684120(&v27, a2 + 520, 400);
      v31 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      v32 = *(_QWORD *)(a2 + 936);
      sub_140182C20(v26);
      return 1;
    case 0x2DLL:
      if ( (unsigned int)sub_1416847B0(v3, aConfirmPending, 45) )
        goto LABEL_179;
      sub_141684120(v68, a2, 520);
      sub_141684120(&v70, a2 + 520, 400);
      v77 = *(_OWORD *)(a2 + 920);
      v78 = *(_QWORD *)(a2 + 936);
      v28 = *(_QWORD *)(a2 + 936);
      v27 = _mm_loadu_si128((const __m128i *)(a2 + 920));
      sub_141684120(v26, a2, 520);
      v35 = 0;
      sub_140430390(&v70, v26);
      return 1;
    default:
      goto LABEL_179;
  }
}
