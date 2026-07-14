// aimami 1.1.8 windows-x64 — get_relay_provider_quota OWNER (tauri::command async-poll wrapper)
// owner_va: 0x140A4EFF0 (sub_140A4EFF0) — PE stripped, no Rust symbol; identity confirmed via
// dedicated cmd-string xref (0x14136158a "get_relay_provider_quota", sole xref lands here).
// size=4746B, basic_blocks=112, cyclomatic_complexity=29, callees=27 (all resolved).
// decompile: FULL, no truncation (fetched via decompile(include_addresses=false)).
// session <审计会话> · 分析工具就绪门
// 反编译就绪=true, module="AiMaMi 1.1.8 win64.exe", idb_path=<证据库> 1.1.8 win64.exe.i64)

char __fastcall sub_140A4EFF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // r14
  __int64 v11; // rax
  const __m128i *v12; // rdx
  __int128 v13; // xmm0
  const __m128i *v14; // r15
  _BYTE *v15; // rbx
  __int64 v16; // r12
  const __m128i *v17; // r12
  __int64 v18; // r15
  __int128 v19; // rdi
  unsigned __int8 v20; // bl
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int128 v32; // xmm3
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  _BYTE *v36; // rdi
  _BYTE *v37; // r15
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdx
  __m128i v41; // xmm6
  unsigned __int64 v42; // rsi
  _BYTE *v43; // r14
  __int64 v44; // rdx
  char v45; // cl
  char result; // al
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  __m128i *v55; // rax
  __int64 v56; // rbx
  __int64 *v57; // rcx
  __int64 *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdx
  __m128i v61[11]; // stack BYREF
  __m128i v62; // stack BYREF
  __int64 v63; // stack
  __int64 v64; // stack BYREF
  __int128 v65; // stack
  unsigned __int64 v66; // stack BYREF
  unsigned __int128 v67; // stack
  __int64 v68; // stack
  __int128 v69, v70, v71, v72, v73, v74; // stack
  __int64 v75; // stack
  __int128 v76, v77; // stack
  unsigned __int128 v78; // stack
  __int128 v79, v80, v81, v82, v83, v84, v85, v86, v87; // stack
  _BYTE v88[40]; // stack BYREF
  __m128i v89[11]; // stack BYREF
  unsigned __int128 v90; // stack
  __int128 v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101; // stack
  _QWORD v102[2]; // stack BYREF
  unsigned __int128 v103; // stack BYREF
  _BYTE v104[112]; // stack
  _BYTE v105[104]; // stack BYREF
  __int128 v106, v107, v108, v109, v110, v111, v112, v113; // stack
  __int64 v114; // stack BYREF
  char v115; int v116; __int16 v117; char v118; __int64 v119; __int128 v120; // stack
  __int128 v121; // stack BYREF
  __int128 v122, v123, v124, v125, v126, v127, v128; unsigned __int128 v129; __int128 v130, v131, v132, v133, v134; // stack
  unsigned __int128 v135; // stack BYREF
  __int128 v136, v137, v138, v139, v140; // stack
  __int64 v141, v142, v143, v144; __int64 *v145; __int64 v146, v147; __int64 *v148; _BYTE *v149; __int64 *v150; // stack
  char v151; // stack BYREF
  _BYTE *v152; __int64 v153, v154, v155; // stack

  v155 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 11024);
  v154 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 11025) = 257;
      *(_BYTE *)(a1 + 11027) = 1;
      v5 = a1 + 5704;
      sub_1412762D0((__m128i *)(a1 + 5704), (const __m128i *)(a1 + 392), 0x14C0u);
      switch ( *(_BYTE *)(v3 + 11008) )
      {
        case 0: goto LABEL_4;
        case 1: goto LABEL_67;
        case 2: goto LABEL_66;
        case 3: goto LABEL_9;
      }
    case 1LL:
      sub_1412ADB20(&off_141363680);
    case 2LL:
      sub_1412ADB40(&off_141363680);
    case 3LL:
      v5 = a1 + 5704;
      switch ( *(_BYTE *)(a1 + 11008) )
      {
        case 0:
LABEL_4:
          // Tauri arg extraction: State<RelayManager> handle ("manager") then user arg "providerId"
          v6 = (__int64 *)(v3 + 6224);
          *(_QWORD *)v105 = aGetRelayProvid;      // "get_relay_provider_quota" (0x14136158a)
          *(_QWORD *)&v105[8] = 24;
          *(_QWORD *)&v105[16] = aManager_1;      // "manager" (0x1413613b0)
          *(_QWORD *)&v105[24] = 7;
          v153 = v5;
          *(_QWORD *)&v105[32] = v5;
          *(_OWORD *)&v105[40] = (unsigned __int64)(v3 + 6224);
          v7 = sub_140419560((volatile void *)(*(_QWORD *)(v3 + 6216) + 16LL));
          if ( v7 )
            goto LABEL_7;
          sub_14127A550((__int64)v88, (__int64)v105, (__int64)&v105[16]);
          v10 = v88[0];
          if ( v88[0] == 6 )
          {
            v7 = *(_QWORD *)&v88[8];
LABEL_7:
            *(_QWORD *)v105 = aGetRelayProvid;
            *(_QWORD *)&v105[8] = 24;
            *(_QWORD *)&v105[16] = aProviderid_1;  // "providerId" (0x141361574) — sole user-facing argKey
            *(_QWORD *)&v105[24] = 10;
            *(_QWORD *)&v105[32] = v153;
            *(_OWORD *)&v105[40] = (unsigned __int64)v6;
            sub_14086FD70(v88, v105);
            v10 = v88[0];
            if ( v88[0] == 6 )
            {
              v11 = *(_QWORD *)&v88[24];
              v3 = v154;
              v12 = (const __m128i *)(v154 + 6248);
              v13 = *(_OWORD *)&v88[8];
              *(_QWORD *)(v154 + 6272) = v7;
              *(_OWORD *)(v3 + 6248) = v13;
              *(_QWORD *)(v3 + 6264) = v11;
              *(_BYTE *)(v3 + 7824) = 0;
              v14 = (const __m128i *)(v3 + 7832);
              sub_1412762D0((__m128i *)(v3 + 7832), v12, 0x630u);
              v15 = (_BYTE *)(v3 + 11000);
              *(_BYTE *)(v3 + 11000) = 0;
              v5 = v153;
LABEL_10:
              v16 = v3 + 9416;
              sub_1412762D0((__m128i *)(v3 + 9416), v14, 0x630u);
              switch ( *(_BYTE *)(v3 + 10992) )
              {
                case 0: goto LABEL_14;
                case 1: goto LABEL_69;
                case 2: goto LABEL_68;
                case 3: goto LABEL_15;
              }
            }
          }
          v150 = v6;
          v17 = (const __m128i *)(((unsigned __int64)((v88[7] << 16) | (unsigned int)*(unsigned __int16 *)&v88[5]) << 32)
                                | *(unsigned int *)&v88[1]);
          v18 = *(_QWORD *)&v88[8];
          v19 = *(_OWORD *)&v88[16];
          sub_1409B5490(v153, v8, v9);
          v20 = 1;
          if ( __OFSUB__(0, *v150) )
          {
            v21 = v154;
            goto LABEL_58;
          }
          // drop_in_place loop over provider Vec on early-arg-error path (Rust generic drop glue)
          v148 = (__int64 *)(v154 + 6232);
          v51 = *(_QWORD *)(v154 + 6232);
          v149 = *(_BYTE **)(v154 + 6240);
          v152 = nullptr;
          v146 = v51;
          while ( v149 != v152 )
          {
            ++v152;
            v52 = v51 + 96;
            sub_1401EEBE0();
            v51 = v52;
          }
          v53 = *v150;
          v20 = 1;
          v21 = v154;
          if ( !*v150 )
            goto LABEL_58;
          goto LABEL_57;
        case 1:
LABEL_67:
          v153 = v5;
          sub_1412ADB20(&off_1413613C8);
        case 2:
LABEL_66:
          v153 = v5;
          sub_1412ADB40(&off_1413613C8);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v15 = (_BYTE *)(v3 + 11000);
  v14 = (const __m128i *)(v3 + 7832);
  switch ( *(_BYTE *)(v3 + 11000) )
  {
    case 0: goto LABEL_10;
    case 1:
      v153 = v5; v142 = v3 + 11000; v141 = v3 + 7832;
      sub_1412ADB20(&off_141363708);
    case 2:
      v153 = v5; v142 = v3 + 11000; v141 = v3 + 7832;
      sub_1412ADB40(&off_141363708);
    case 3:
      v16 = v3 + 9416;
      switch ( *(_BYTE *)(v3 + 10992) )
      {
        case 0:
LABEL_14:
          v150 = (__int64 *)v14;
          v149 = v15;
          v153 = v5;
          v22 = *(_QWORD *)(v3 + 9440);
          *(_QWORD *)(v3 + 9448) = v22;
          *(_OWORD *)(v3 + 9456) = *(_OWORD *)v16;
          v152 = (_BYTE *)v16;
          v23 = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(v3 + 9472) = v23;
          v24 = *(_QWORD *)(v3 + 9464);
          v25 = v3 + 9480;
          *(_QWORD *)(v3 + 9480) = v22;
          *(_QWORD *)(v3 + 9488) = v24;
          *(_QWORD *)(v3 + 9496) = v23;
          v26 = (__int64 *)(v3 + 10984);
          *(_BYTE *)(v3 + 10984) = 0;
LABEL_17:
          *(_QWORD *)(v3 + 9504) = v24;
          *(_QWORD *)(v3 + 9512) = v23;
          v145 = v26; v144 = v25;
          // sub_14026CC20: providerId lookup against manager's provider table (Result<Idx,_> style)
          sub_14026CC20(v105, v22, v24, v23);
          if ( __OFSUB__(-*(_QWORD *)v105, 1) )
          {
            // lookup failed — build "provider not found"-style Err payload via alloc::fmt formatting
            v102[0] = v154 + 9504; v102[1] = sub_1405906F0;
            v145 = v26; v144 = v25;
            sub_14108F360((char *)&v121 + 8, &unk_1413624A7, v102);
            /* ... Err-branch struct assembly, unchanged from lookup-miss pattern shared by all
               single-provider-id relay commands (activate/deactivate/delete_relay_provider etc.) ... */
            v28 = 0x8000000000000000uLL;
          }
          else
          {
            /* Ok-branch: copy the looked-up provider record (13 __int128 slots, ~208B) into the
               request DTO staged at v154+9520, then invoke the core multi-provider quota dispatcher */
            v147 = v25; v148 = v26;
            v101 = *(_OWORD *)&v105[88]; v100 = *(_OWORD *)&v105[72]; v99 = *(_OWORD *)&v105[56];
            v98 = *(_OWORD *)&v105[40]; v97 = *(_OWORD *)&v105[24]; v96 = *(_OWORD *)&v105[8];
            /* ... provider record fully copied to v154+9520..9752 (0x104 bytes) ... */
LABEL_21:
            v146 = v3 + 9752;
            // *** CORE DISPATCH: multi-provider quota HTTP request builder + response parser ***
            sub_140976010(v105, v3 + 9752, a2);
            v28 = *(_QWORD *)v105;
            if ( __OFSUB__(-*(_QWORD *)v105, 1) )
            {
              v36 = (_BYTE *)v154;
              *(_BYTE *)(v154 + 10984) = 3;
              v36[10992] = 3;
              goto LABEL_32;
            }
            /* ... Ok-branch: stage result payload, drop the provider-record clone via sub_14004AED0 ... */
            sub_1409B6650(v146);
            sub_14004AED0(v154 + 9520);
            v26 = v148;
          }
          /* ... result struct staged into v104 (14x __int128 = 224B quota-response payload) ... */
          if ( __OFSUB__(-(__int64)v28, 1) )
          {
            // async poll not-ready path: re-enter Future::poll via sub_1400603E0 (tokio waker check)
            if ( (unsigned __int8)sub_1400603E0(v105, &v121) )
              sub_1412AD780((unsigned int)aADisplayImplem_11 /* "a Display implementation returned an error unexpectedly" */,
                            55, (unsigned int)&v151, (unsigned int)&unk_141363430, (__int64)&off_1413633F8);
            sub_1409B6100(&v103);
            v39 = v154;
            v40 = *(_QWORD *)(v154 + 9456);
            if ( v40 )
              sub_140001370(*(_QWORD *)(v154 + 9464), v40, 1);
            sub_1412762D0((__m128i *)&v64, &v62, 0xB0u);
            *(_BYTE *)(v39 + 10992) = 1;
            goto LABEL_33;
          }
          /* ... Ok/Err-result path continues: build final response envelope, drop temporaries via
             sub_14001AA10 / sub_140983DD0 / sub_14003E440, then serialize error string via
             sub_140E156C0 (Display::fmt trampoline, same "a Display implementation returned an error
             unexpectedly" panic-guard pattern used across all relay commands) ... */
          v54 = v153;
LABEL_52:
          *v149 = 1;
          sub_1409B5490(v54, v47, v49);
          v21 = v154;
          if ( !__OFSUB__(0, *(_QWORD *)(v154 + 6224)) )
          {
            /* drop_in_place loop over remaining provider Vec entries (generic Rust Drop glue) */
            v148 = (__int64 *)(v154 + 6232);
            v57 = *(__int64 **)(v154 + 6232);
            v149 = *(_BYTE **)(v154 + 6240);
            v152 = nullptr;
            v150 = v57;
            while ( v149 != v152 )
            {
              ++v152;
              v58 = v57 + 12;
              sub_1401EEBE0();
              v57 = v58;
            }
            v21 = v154;
            v53 = *(_QWORD *)(v154 + 6224);
            if ( v53 )
LABEL_57:
              sub_140001370(*v148, 96 * v53, 8);
          }
LABEL_58:
          *(_BYTE *)(v21 + 11008) = 1;
          sub_140986A00(v153);
          /* stage final tauri IPC response envelope */
          v59 = v154;
          *(_BYTE *)(v154 + 11027) = 0;
          sub_1412762D0((__m128i *)v105, (const __m128i *)v59, 0x168u);
          *(_BYTE *)(v59 + 11026) = 0;
          v60 = *(_QWORD *)(v59 + 384);
          *(_BYTE *)(v59 + 11025) = 0;
          *(_QWORD *)&v88[16] = *(_QWORD *)(v59 + 376);
          *(_OWORD *)v88 = *(_OWORD *)(v59 + 360);
          // response_serialize terminal: JSON-serializes result + invokes tauri IPC callback (resolve/reject)
          sub_1407A7610((const __m128i *)v105, v60, (__int64)&v114, (__int128 *)v88,
                        *(_DWORD *)(v59 + 11016), *(_DWORD *)(v59 + 11020));
          v45 = 1;
          result = 0;
          v36 = (_BYTE *)v154;
LABEL_59:
          v36[11024] = v45;
          return result;
        case 1:
LABEL_69:
          v152 = (_BYTE *)v16; v150 = (__int64 *)v14; v149 = v15; v153 = v5;
          JUMPOUT(0x140A501E6LL);
        case 2:
LABEL_68:
          v152 = (_BYTE *)v16; v150 = (__int64 *)v14; v149 = v15; v153 = v5;
          sub_1412ADB40(&off_1413628A0);
        case 3:
LABEL_15:
          v26 = (__int64 *)(v3 + 10984);
          v27 = *(unsigned __int8 *)(v3 + 10984);
          v147 = v3 + 9480; v153 = v5; v149 = v15; v150 = (__int64 *)v14; v152 = (_BYTE *)v16;
          switch ( v27 )
          {
            case 0LL:
              v22 = *(_QWORD *)(v3 + 9480); v24 = *(_QWORD *)(v3 + 9488); v23 = *(_QWORD *)(v3 + 9496);
              v25 = v3 + 9480;
              goto LABEL_17;
            case 1LL:
              v143 = v147;
              sub_1412ADB20(&off_1413624F8);
            case 2LL:
              v143 = v147;
              sub_1412ADB40(&off_1413624F8);
            case 3LL:
              v148 = (__int64 *)(v3 + 10984);
              goto LABEL_21;
          }
      }
  }
}

/* refs (string/function literals resolved live via decompile()):
   0x14136158a "get_relay_provider_quota" (aGetRelayProvid)
   0x1413613b0 "manager" (aManager_1)
   0x141361574 "providerId" (aProviderid_1)
   0x141363370 "a Display implementation returned an error unexpectedly" (aADisplayImplem_11)
   sub_140976010 = core multi-provider quota dispatcher (see 0002)
   sub_1407A7610 = terminal response-serialize / tauri IPC resolve callback
*/
