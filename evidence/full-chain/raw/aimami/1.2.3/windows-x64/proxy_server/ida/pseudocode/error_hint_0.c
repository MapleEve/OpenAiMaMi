// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x1406372e0  size: 0x45a6  tier: B  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: PARTIAL Hex-Rays pseudocode (server-side decompile response cap hit; full text was collapsed to first 1024 chars + '[N chars total]' marker, both with and without include_addresses).
//         Recovered to FULL completeness via chunked basic_blocks/disasm pagination (page size 350 instructions, below the ~450-instruction / ~50KB server response-size ceiling discovered empirically).
//         Companion files: error_hint_0_disasm.json (raw paginated instruction JSON), error_hint_0_disasm.txt (linear listing, this file's body below the partial Hex-Rays declarations).
//
// Functional summary:
//   TRUNCATED by server-side decompile cap (109018 chars total pseudocode collapsed to 1024; recovered
//   via chunked disasm, see error_hint_0_disasm.json/.txt, 3076 instructions, full coverage
//   0x1406372e0..0x14063b886). Cross-platform match: codexmate_lib::core::relay::models::error_hint.
//   Given the module (models) and refs ('no relay provider configured for codex', tracing target
//   'proxy.upstream', field 'model'), this produces the human-readable hint text appended to relay error
//   responses depending on the failure class (e.g. missing provider config vs. bad model name).
//
// Referenced strings/symbols:
//   0x14066b160  sub_14066B160
//   0x1417684c3  aNoRelayProvide   "no relay provider configured for codex"
//   0x14177c428  aProxyUpstream   "proxy.upstream"
//   0x141433d50  sub_141433D50
//   0x141766c05  aModel_2   "model"
//   0x1416c2d4b  sub_1416C2D4B
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x141684120  sub_141684120
//   0x140667920  sub_140667920
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::models::error_hint | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall error_hint_0(__m128i *a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  __int16 *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  _OWORD *v25; // rsi
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rbx
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  char *v34; // r14
  __int64 v35; // rax
  __int64 v... [109018 chars total]

/* ---- FULL DISASSEMBLY (chunked via basic_blocks/disasm pagination, complete instruction coverage) ---- */
/* 3076 instructions, 1406372e0 .. 14063b881 */
/*
  1406372e0: push rbp
  1406372e1: push r15
  1406372e3: push r14
  1406372e5: push r13
  1406372e7: push r12
  1406372e9: push rsi
  1406372ea: push rdi
  1406372eb: push rbx
  1406372ec: sub rsp, 0B98h
  1406372f3: lea rbp, [rsp+80h]
  1406372fb: movaps [rbp+0B50h+var_50], xmm8
  140637303: movaps [rbp+0B50h+var_60], xmm7
  14063730a: movaps [rbp+0B50h+var_70], xmm6
  140637311: mov [rbp+0B50h+var_78], 0FFFFFFFFFFFFFFFEh
  14063731c: mov [rbp+0B50h+var_B8], r8
  140637323: mov rdi, rdx
  140637326: mov [rbp+0B50h+var_330], rcx
  14063732d: movzx eax, byte ptr [rdx+248h]
  140637334: lea rcx, jpt_140637349
  14063733b: movsxd rax, ds:(jpt_140637349 - 14177E824h)[rcx+rax*4]; switch 6 cases
  14063733f: add rax, rcx
  140637342: mov [rbp+0B50h+var_80], rdx
  140637349: jmp rax; switch jump
loc_14063734B:
  14063734b: mov rax, [rdi+50h]; jumptable 0000000140637349 case 0
  14063734f: mov [rdi+80h], rax
  140637356: movups xmm0, xmmword ptr [rdi]
  140637359: movups xmmword ptr [rdi+88h], xmm0
  140637360: mov rax, [rdi+10h]
  140637364: mov [rdi+98h], rax
  14063736b: mov byte ptr [rdi+249h], 1
  140637372: movups xmm0, xmmword ptr [rdi+30h]
  140637376: movups xmm1, xmmword ptr [rdi+40h]
  14063737a: movaps [rbp+0B50h+var_860], xmm1
  140637381: movaps [rbp+0B50h+var_870], xmm0
  140637388: mov r9, [rdi+68h]
  14063738c: mov r8, [rdi+60h]
  140637390: movups xmm0, xmmword ptr [rdi+58h]
  140637394: movups xmmword ptr [rdi+0A0h], xmm0
  14063739b: mov [rdi+0B0h], r9
  1406373a2: movups xmm0, xmmword ptr [rdi+18h]
  1406373a6: movups xmmword ptr [rdi+0B8h], xmm0
  1406373ad: mov rax, [rdi+28h]
  1406373b1: mov [rdi+0C8h], rax
  1406373b8: movdqu xmm0, xmmword ptr [rdi+70h]
  1406373bd: movdqu xmmword ptr [rdi+0D0h], xmm0
  1406373c5: cmp qword ptr [rdi+98h], 0
  1406373cd: jz loc_1406374BE
loc_1406373D3:
  1406373d3: lea rcx, aCompact; "compact"
  1406373da: mov edx, 7
  1406373df: call sub_140681590
  1406373e4: nop
  1406373e5: test al, al
  1406373e7: jz loc_1406374F6
  1406373ed: lea rcx, aModel_2; "model"
  1406373f4: lea r8, [rbp+0B50h+var_870]
  1406373fb: mov edx, 5
  140637400: call sub_141433D50
  140637405: nop
  140637406: test rax, rax
  140637409: jz loc_14063761D
  14063740f: xor ecx, ecx
  140637411: cmp byte ptr [rax], 3
  140637414: mov rsi, [rax+18h]
  140637418: mov r9d, 1
  14063741e: mov rbx, [rax+10h]
  140637422: cmovnz rbx, r9
  140637426: mov edi, 0
  14063742b: cmovz rdi, rsi
  14063742f: test rdi, rdi
  140637432: jns loc_140637765
loc_140637438:
  140637438: mov rdx, rdi
  14063743b: call sub_1416C2D4B
  140637441: jmp loc_14063B877
loc_140637446:
  140637446: lea rax, [rdi+460h]; jumptable 0000000140637349 case 3
  14063744d: mov [rbp+0B50h+var_A8], rax
  140637454: movzx eax, byte ptr [rdi+460h]
  14063745b: lea rcx, [rdi+250h]
  140637462: mov [rbp+0B50h+var_98], rcx
  140637469: lea rcx, jpt_140637477
  140637470: movsxd rax, ds:(jpt_140637477 - 14177E83Ch)[rcx+rax*4]; switch 7 cases
  140637474: add rax, rcx
  140637477: jmp rax; switch jump
loc_140637479:
  140637479: movdqu xmm0, xmmword ptr [rdi+270h]; jumptable 0000000140637477 case 0
  140637481: mov r9, [rdi+280h]
  140637488: mov rax, [rdi+288h]
  14063748f: mov rcx, [rdi+290h]
  140637496: mov rdx, [rdi+298h]
  14063749d: mov r8, [rdi+2A0h]
  1406374a4: mov r13, [rdi+2A8h]
  1406374ab: mov r12, [rdi+2B0h]
  1406374b2: lea rsi, [rdi+250h]
  1406374b9: jmp loc_1406379C8
loc_1406374BE:
  1406374be: lea rax, aProxyUpstream; "proxy.upstream"
  1406374c5: mov [rsp+0BD0h+var_BB0], rax
  1406374ca: mov qword ptr [rsp+0BD0h+var_BA8], 0Eh
  1406374d3: lea r8, aNoRelayProvide; "no relay provider configured for codex"
  1406374da: lea rcx, [rbp+0B50h+var_850]
  1406374e1: mov r9d, 26h ; '&'
  1406374e7: mov dx, 1F6h
  1406374eb: call sub_14066B160
  1406374f0: nop
  1406374f1: jmp loc_14063AE86
loc_1406374F6:
  1406374f6: mov rax, [rbp+0B50h+var_80]
  1406374fd: mov byte ptr [rax+249h], 0
  140637504: movdqa xmm0, [rbp+0B50h+var_870]
  14063750c: movaps xmm1, [rbp+0B50h+var_860]
  140637513: movaps [rbp+0B50h+var_300], xmm1
  14063751a: movdqa [rbp+0B50h+var_310], xmm0
  140637522: lea rbx, [rax+0E0h]
  140637529: lea rdx, [rbp+0B50h+var_310]
  140637530: mov rcx, rbx
  140637533: call expand_aimami_compactions_for_upstream
  140637538: nop
  140637539: mov rax, [rbp+0B50h+var_80]
  140637540: mov rax, [rax+80h]
  140637547: mov rax, [rax+10h]
  14063754b: mov rcx, [rax+58h]
  14063754f: mov rdx, [rax+60h]
loc_140637553:
  140637553: call sub_140ADC070
  140637558: nop
  140637559: test al, al
  14063755b: jz loc_14063770C
  140637561: lea rcx, aTools_2; "tools"
  140637568: mov edx, 5
  14063756d: mov r8, rbx
  140637570: call sub_141433D50
  140637575: nop
  140637576: test rax, rax
  140637579: jz loc_1406376D0
  14063757f: cmp byte ptr [rax], 4
  140637582: jnz loc_1406376D0
  140637588: mov rcx, rax
  14063758b: add rcx, 8
  14063758f: mov rsi, [rax+18h]
  140637593: mov rdi, rax
  140637596: call sub_1402AE3F0
  14063759b: nop
  14063759c: sub rsi, [rdi+18h]
  1406375a0: jmp loc_1406376D2
loc_1406375A5:
  1406375a5: jmp loc_1406380FC; jumptable 0000000140637477 case 6
loc_1406375AA:
  1406375aa: jmp loc_1406389F3; jumptable 0000000140637477 case 5
loc_1406375AF:
  1406375af: lea r14, [rdi+56Bh]; jumptable 0000000140637477 case 3
  1406375b6: movzx eax, byte ptr [rdi+56Bh]
  1406375bd: lea rcx, [rdi+480h]
  1406375c4: mov [rbp+0B50h+var_90], rcx
  1406375cb: lea rcx, jpt_1406375D9
  1406375d2: movsxd rax, ds:(jpt_1406375D9 - 14177E858h)[rcx+rax*4]; switch 5 cases
  1406375d6: add rax, rcx
  1406375d9: jmp rax; switch jump
loc_1406375DB:
  1406375db: mov rax, [rdi+550h]; jumptable 00000001406375D9 case 0
  1406375e2: mov rcx, [rdi+558h]
  1406375e9: mov rdx, [rdi+500h]
  1406375f0: mov rbx, [rdi+508h]
  1406375f7: mov r12, [rdi+560h]
  1406375fe: mov r11, [rdi+510h]
  140637605: mov r9, [rdi+518h]
  14063760c: lea r8, [rdi+480h]
  140637613: jmp loc_140637CD1
loc_140637618:
  140637618: jmp loc_14063870A; jumptable 0000000140637477 case 4
loc_14063761D:
  14063761d: mov r9d, 1
loc_140637623:
  140637623: xor esi, esi
loc_140637625:
  140637625: mov [rbp+0B50h+var_90], r9
  14063762c: mov [rbp+0B50h+var_98], rsi
  140637633: mov rax, [rbp+0B50h+var_80]
  14063763a: mov rcx, [rax+80h]
  140637641: mov rdx, [rax+0A8h]
  140637648: mov r8, [rax+0B0h]
loc_14063764F:
  14063764f: lea rax, aLocalCompactCo; "local compact compatibility response"
  140637656: mov qword ptr [rsp+0BD0h+var_B80], rax
  14063765b: pxor xmm0, xmm0
  14063765f: movdqu [rsp+0BD0h+var_BA8], xmm0
  140637665: mov [rsp+0BD0h+var_BB0], rsi
  14063766a: mov qword ptr [rsp+0BD0h+var_B80+8], 24h ; '$'
  140637673: mov [rsp+0BD0h+var_B88], 0C8h
  14063767a: mov [rsp+0BD0h+var_B90], 1
  140637681: call sub_140667920
  140637686: nop
  140637687: lea rcx, [rbp+0B50h+var_850]
  14063768e: lea rdx, [rbp+0B50h+var_870]
  140637695: mov r8, [rbp+0B50h+var_90]
  14063769c: mov r9, [rbp+0B50h+var_98]
  1406376a3: call codex_local_compact_compat_response
  1406376a8: nop
  1406376a9: mov rcx, [rbp+0B50h+var_90]
  1406376b0: mov rdx, [rbp+0B50h+var_98]
  1406376b7: test rdx, rdx
  1406376ba: jz loc_14063AE86
  1406376c0: mov r8d, 1
  1406376c6: call sub_140001660
  1406376cb: jmp loc_14063AE86
loc_1406376D0:
  1406376d0: xor esi, esi
loc_1406376D2:
  1406376d2: mov qword ptr [rbp+0B50h+var_310], rsi
loc_1406376D9:
  1406376d9: lea rcx, aInput_3; "input"
  1406376e0: mov edx, 5
  1406376e5: mov r8, rbx
  1406376e8: call sub_141433D50
  1406376ed: nop
  1406376ee: test rax, rax
  1406376f1: jz short loc_14063770C
  1406376f3: cmp byte ptr [rax], 4
  1406376f6: jnz short loc_14063770C
  1406376f8: add rax, 8
  1406376fc: lea rdx, [rbp+0B50h+var_310]
  140637703: mov rcx, rax
  140637706: call sub_1402AD370
  14063770b: nop
loc_14063770C:
  14063770c: mov r10, [rbp+0B50h+var_80]
  140637713: mov qword ptr [r10+100h], 0FFFFFFFFFFFFFFFFh
  14063771e: mov rax, [r10+90h]
  140637725: mov rcx, [r10+98h]
  14063772c: mov [r10+180h], rcx
  140637733: imul rcx, 0E8h
  14063773a: add rcx, rax
  14063773d: mov [r10+188h], rax
  140637744: mov [r10+190h], rcx
  14063774b: mov qword ptr [r10+198h], 0
  140637756: jmp loc_14063785C
loc_14063775B:
  14063775b: jmp loc_140639204; jumptable 00000001406375D9 case 3
loc_140637760:
  140637760: jmp loc_140639D26; jumptable 00000001406375D9 case 4
loc_140637765:
  140637765: jz loc_140637623
  14063776b: call nullsub_1
  140637770: mov edx, 1
  140637775: mov rcx, rdi
  140637778: call sub_140001650
  14063777d: mov ecx, 1
  140637782: test rax, rax
  140637785: jz loc_140637438
  14063778b: mov rcx, rax
  14063778e: mov rdx, rbx
  140637791: mov r8, rdi
  140637794: mov rdi, rax
  140637797: call sub_141684120
  14063779c: mov r9, rdi
  14063779f: jmp loc_140637625
loc_1406377A4:
  1406377a4: lea rcx, off_1417684F0; jumptable 0000000140637349 case 1
  1406377ab: call sub_1416C3400
  1406377b0: ud2
loc_1406377B2:
  1406377b2: lea rcx, off_1417684F0; jumptable 0000000140637349 case 2
  1406377b9: call sub_1416C3420
  1406377be: ud2
loc_1406377C0:
  1406377c0: mov rax, [rbp+0B50h+var_98]; jumptable 0000000140637477 case 1
  1406377c8: mov dword ptr [rbp+0B50h+var_4E0], eax
loc_1406377CE:
  1406377ce: lea rcx, off_141768150; "src\\core\\relay\\proxy_server.rs"
  1406377d5: call sub_1416C3400
  1406377db: jmp loc_14063B877
loc_1406377E0:
  1406377e0: mov rax, [rbp+0B50h+var_98]; jumptable 0000000140637477 case 2
  1406377e7: mov [rbp+0B50h+var_4E0], rax
  1406377ee: lea rcx, off_141768150; "src\\core\\relay\\proxy_server.rs"
  1406377f5: call sub_1416C3420
  1406377fb: jmp loc_14063B877
loc_140637800:
  140637800: mov rax, [rbp+0B50h+var_98]; jumptable 00000001406375D9 case 1
  140637807: mov [rbp+0B50h+var_340], rax
  140637810: test eax, eax
  140637812: or al, [rax]
  140637814: add [rax-77h], cl
  140637817: test [rax], ecx
  140637819: or [rax], al
loc_14063781C:
  14063781c: lea rcx, off_141768580; "src\\core\\relay\\proxy_server.rs"
  140637823: call sub_1416C3400
  140637829: jmp loc_14063B877
loc_14063782E:
  14063782e: mov rax, [rbp+0B50h+var_98]; jumptable 00000001406375D9 case 2
  140637835: mov [rbp+0B50h+var_340], rax
  14063783c: mov rax, [rbp+0B50h+var_90]
  140637843: mov [rbp+0B50h+var_348], rax
  14063784a: lea rcx, off_141768580; "src\\core\\relay\\proxy_server.rs"
  140637851: call sub_1416C3420
  140637857: jmp loc_14063B877
loc_14063785C:
  14063785c: cmp rax, rcx
  14063785f: jz loc_14063B307
  140637865: lea rcx, [rax+0E8h]
  14063786c: mov [r10+188h], rcx
  140637873: mov rcx, [r10+198h]
  14063787a: inc rcx
  14063787d: mov [r10+198h], rcx
  140637884: mov [r10+1A0h], rax
  14063788b: mov [r10+1A8h], rcx
  140637892: movzx eax, byte ptr [rax+0E6h]
  140637899: lea rdx, [r10+0E0h]
  1406378a0: test eax, eax
  1406378a2: jz short loc_1406378D5
  1406378a4: cmp eax, 1
  1406378a7: jnz short loc_1406378E4
  1406378a9: movzx eax, byte ptr [rdx]
  1406378ac: lea rcx, jpt_1406378BA
  1406378b3: movsxd rax, ds:(jpt_1406378BA - 14177E86Ch)[rcx+rax*4]; switch 6 cases
  1406378b7: add rax, rcx
  1406378ba: jmp rax; switch jump
loc_1406378BC:
  1406378bc: movdqu xmm0, xmmword ptr [rdx]; jumptable 00000001406378BA cases 1,2
  1406378c0: movups xmm1, xmmword ptr [rdx+10h]
  1406378c4: movaps [rbp+0B50h+var_480], xmm1
  1406378cb: movdqa [rbp+0B50h+var_490], xmm0
  1406378d3: jmp short loc_1406378F1
loc_1406378D5:
  1406378d5: lea rcx, [rbp+0B50h+var_490]
  1406378dc: call sub_140A096D0
  1406378e1: nop
  1406378e2: jmp short loc_1406378F1
loc_1406378E4:
  1406378e4: lea rcx, [rbp+0B50h+var_490]
  1406378eb: call sub_140A11380
  1406378f0: nop
loc_1406378F1:
  1406378f1: mov rdi, [rbp+0B50h+var_80]
  1406378f8: mov r10, [rdi+1A0h]
  1406378ff: mov r11, [rdi+80h]
  140637906: mov r9, [rdi+0A0h]
  14063790d: mov rax, [rdi+0A8h]
  140637914: mov rcx, [rdi+0B0h]
  14063791b: xor edx, edx
  14063791d: cmp qword ptr [rdi+0B8h], 0FFFFFFFFFFFFFFFFh
  140637925: mov r8, [rdi+0C8h]
  14063792c: jz short loc_140637935
  14063792e: mov rdx, [rdi+0C0h]
loc_140637935:
  140637935: mov r13, [rdi+0D0h]
  14063793c: mov r12, [rdi+0D8h]
  140637943: lea rsi, [rdi+250h]
  14063794a: movaps xmm0, [rbp+0B50h+var_490]
  140637951: movaps xmm1, [rbp+0B50h+var_480]
  140637958: movups xmmword ptr [rdi+250h], xmm0
  14063795f: movups xmmword ptr [rdi+260h], xmm1
  140637966: mov [rdi+270h], r11
  14063796d: mov [rdi+278h], r10
  140637974: mov [rdi+280h], r9
  14063797b: mov [rdi+288h], rax
  140637982: mov [rdi+290h], rcx
  140637989: mov [rdi+298h], rdx
  140637990: mov [rdi+2A0h], r8
  140637997: mov [rdi+2A8h], r13
  14063799e: mov [rdi+2B0h], r12
  1406379a5: lea rbx, [rdi+460h]
  1406379ac: mov [rbp+0B50h+var_A8], rbx
  1406379b3: mov byte ptr [rdi+460h], 0
  1406379ba: movq xmm1, r10
  1406379bf: movq xmm0, r11
  1406379c4: punpcklqdq xmm0, xmm1
loc_1406379C8:
  1406379c8: mov dword ptr [rdi+462h], 1
  1406379d2: movdqu xmmword ptr [rdi+2B8h], xmm0
  1406379da: mov [rdi+2C8h], r9
  1406379e1: lea r15, [rdi+2D0h]
  1406379e8: movups xmm0, xmmword ptr [rsi]
  1406379eb: movups xmm1, xmmword ptr [rsi+10h]
  1406379ef: movups xmmword ptr [rdi+2D0h], xmm0
  1406379f6: movups xmmword ptr [rdi+2E0h], xmm1
  1406379fd: mov [rdi+2F0h], rax
  140637a04: mov [rdi+2F8h], rcx
  140637a0b: mov [rdi+300h], rdx
  140637a12: mov [rdi+308h], r8
  140637a19: mov [rbp+0B50h+var_C8], rsi
loc_140637A20:
  140637a20: lea rcx, aStream; "stream"
  140637a27: mov edx, 6
  140637a2c: mov r8, r15
  140637a2f: call sub_141433D50
  140637a34: nop
  140637a35: mov rdi, rsi
  140637a38: xor ecx, ecx
  140637a3a: test rax, rax
  140637a3d: jz short loc_140637A48
  140637a3f: cmp byte ptr [rax], 1
  140637a42: setz cl
  140637a45: and cl, [rax+1]
loc_140637A48:
  140637a48: mov r9, [rbp+0B50h+var_80]
  140637a4f: mov [r9+461h], cl
  140637a56: mov rdx, [r9+2C0h]
  140637a5d: movzx eax, byte ptr [rdx+0E6h]
  140637a64: cmp eax, 2
  140637a67: mov [rbp+0B50h+var_98], rdi
  140637a6e: jz loc_140637DBC
  140637a74: cmp eax, 1
  140637a77: jnz loc_140638321
  140637a7d: mov rbx, [rdx+38h]
  140637a81: mov r14, [rdx+40h]
  140637a85: mov r8, [r9+2F0h]
  140637a8c: mov r9, [r9+2F8h]
  140637a93: mov [rbp+0B50h+var_C8], rdi
  140637a9a: lea rcx, aCompact; "compact"
  140637aa1: mov edx, 7
  140637aa6: call sub_140681590
  140637aab: nop
  140637aac: movzx eax, al
  140637aaf: lea rcx, ds:0Ah[rax*8]
  140637ab7: lea rdx, unk_14177C5D8
  140637abe: lea r9, unk_14177C5CE
  140637ac5: test al, al
  140637ac7: cmovnz r9, rdx
  140637acb: mov rax, [rbp+0B50h+var_80]
  140637ad2: lea rsi, [rax+468h]
  140637ad9: mov [rbp+0B50h+var_C8], rdi
  140637ae0: mov [rsp+0BD0h+var_BB0], rcx
  140637ae5: mov rcx, rsi
  140637ae8: mov rdx, rbx
  140637aeb: mov r8, r14
  140637aee: call sub_140A49320
  140637af3: nop
loc_140637AF4:
  140637af4: mov rdi, [rbp+0B50h+var_80]
  140637afb: mov rbx, [rdi+478h]
  140637b02: test r13, r13
  140637b05: jz short loc_140637B71
  140637b07: mov [rbp+0B50h+var_90], rsi
  140637b0e: cmp [rsi], rbx
  140637b11: jz loc_14063B787
loc_140637B17:
  140637b17: mov rdi, [rbp+0B50h+var_80]
  140637b1e: mov rax, [rdi+470h]
  140637b25: mov byte ptr [rax+rbx], 3Fh ; '?'
  140637b29: inc rbx
  140637b2c: mov [rdi+478h], rbx
  140637b33: mov rax, [rdi+468h]
  140637b3a: sub rax, rbx
  140637b3d: cmp r12, rax
  140637b40: ja loc_14063B7B1
  140637b46: test r12, r12
  140637b49: jz short loc_140637B67
loc_140637B4B:
  140637b4b: add rbx, [rdi+470h]
  140637b52: mov rcx, rbx
  140637b55: mov rdx, r13
  140637b58: mov r8, r12
  140637b5b: call sub_141684120
  140637b60: mov rbx, [rdi+478h]
loc_140637B67:
  140637b67: add rbx, r12
  140637b6a: mov [rdi+478h], rbx
loc_140637B71:
  140637b71: mov rax, [rdi+2B8h]
  140637b78: mov rcx, [rdi+2C0h]
  140637b7f: mov rdx, [rdi+470h]
  140637b86: mov byte ptr [rdi+462h], 0
  140637b8d: movups xmm0, xmmword ptr [r15]
  140637b91: movups xmm1, xmmword ptr [r15+10h]
  140637b96: movups [rbp+0B50h+var_2C0], xmm1
  140637b9d: movups [rbp+0B50h+var_2D0], xmm0
  140637ba4: mov r12, [rdi+2C8h]
  140637bab: mov r11, [rdi+2F0h]
  140637bb2: mov r9, [rdi+2F8h]
  140637bb9: movups xmm2, [rbp+0B50h+var_2A0]
  140637bc0: movaps [rbp+0B50h+var_760], xmm2
  140637bc7: movups xmm2, [rbp+0B50h+var_2B0]
  140637bce: movaps [rbp+0B50h+var_770], xmm2
  140637bd5: movaps [rbp+0B50h+var_780], xmm1
  140637bdc: movaps [rbp+0B50h+var_790], xmm0
  140637be3: movups xmm0, [rbp+0B50h+var_310]
  140637bea: movups xmm1, [rbp+0B50h+var_300]
  140637bf1: movups xmm2, [rbp+0B50h+var_2F0]
  140637bf8: movups xmm3, [rbp+0B50h+var_2E0]
  140637bff: movaps [rbp+0B50h+var_7A0], xmm3
  140637c06: movaps [rbp+0B50h+var_7B0], xmm2
  140637c0d: movaps [rbp+0B50h+var_7C0], xmm1
  140637c14: movaps [rbp+0B50h+var_7D0], xmm0
  140637c1b: lea r8, [rdi+480h]
  140637c22: movaps xmm0, [rbp+0B50h+var_760]
  140637c29: movups xmmword ptr [rdi+4F0h], xmm0
  140637c30: movaps xmm0, [rbp+0B50h+var_770]
  140637c37: movups xmmword ptr [rdi+4E0h], xmm0
  140637c3e: movaps xmm0, [rbp+0B50h+var_780]
  140637c45: movups xmmword ptr [rdi+4D0h], xmm0
  140637c4c: movaps xmm0, [rbp+0B50h+var_790]
  140637c53: movups xmmword ptr [rdi+4C0h], xmm0
  140637c5a: movaps xmm0, [rbp+0B50h+var_7D0]
  140637c61: movaps xmm1, [rbp+0B50h+var_7C0]
  140637c68: movaps xmm2, [rbp+0B50h+var_7B0]
  140637c6f: movaps xmm3, [rbp+0B50h+var_7A0]
  140637c76: movups xmmword ptr [rdi+4B0h], xmm3
  140637c7d: movups xmmword ptr [rdi+4A0h], xmm2
  140637c84: movups xmmword ptr [rdi+490h], xmm1
  140637c8b: movups xmmword ptr [rdi+480h], xmm0
  140637c92: mov [rdi+500h], rdx
  140637c99: mov [rdi+508h], rbx
  140637ca0: mov [rdi+510h], r11
  140637ca7: mov [rdi+518h], r9
  140637cae: mov [rdi+550h], rax
  140637cb5: mov [rdi+558h], rcx
  140637cbc: mov [rdi+560h], r12
  140637cc3: lea r14, [rdi+56Bh]
  140637cca: mov byte ptr [rdi+56Bh], 0
loc_140637CD1:
  140637cd1: mov word ptr [rdi+569h], 100h
  140637cda: mov byte ptr [rdi+568h], 0
  140637ce1: mov [rdi+520h], rax
  140637ce8: mov [rdi+528h], rcx
  140637cef: mov [rdi+4E0h], rdx
  140637cf6: mov [rdi+4E8h], rbx
  140637cfd: movdqu xmm0, xmmword ptr [rdi+4C0h]
  140637d05: movups xmm1, xmmword ptr [rdi+4D0h]
  140637d0c: movups xmmword ptr [r8+10h], xmm1
  140637d11: movdqu xmmword ptr [r8], xmm0
  140637d16: mov [rdi+4F0h], r11
  140637d1d: mov [rdi+4F8h], r9
  140637d24: mov rax, [rbp+0B50h+var_98]
  140637d2b: mov [rbp+0B50h+var_4B8], rax
  140637d32: mov [rbp+0B50h+var_4C0], r8
loc_140637D39:
  140637d39: lea rcx, aModel_2; "model"
  140637d40: mov edx, 5
  140637d45: mov [rbp+0B50h+var_90], r8
  140637d4c: call sub_141433D50
  140637d51: nop
  140637d52: mov rdx, [rbp+0B50h+var_878]
  140637d59: mov r15d, 1
  140637d5f: xor ecx, ecx
  140637d61: test rax, rax
  140637d64: mov rdi, [rbp+0B50h+var_80]
  140637d6b: jz loc_140638F21
  140637d71: xor ecx, ecx
  140637d73: cmp byte ptr [rax], 3
  140637d76: mov rsi, [rax+18h]
  140637d7a: mov rbx, [rax+10h]
  140637d7e: cmovnz rbx, r15
  140637d82: mov r13d, 0
  140637d88: cmovz r13, rsi
  140637d8c: test r13, r13
  140637d8f: jns loc_140638EEB
loc_140637D95:
  140637d95: mov rax, [rbp+0B50h+var_98]
  140637d9c: mov [rbp+0B50h+var_4B8], rax
  140637da3: mov rax, [rbp+0B50h+var_90]
  140637daa: mov [rbp+0B50h+var_4C0], rax
  140637db1: call sub_1416C2D4B
  140637db7: jmp loc_14063B877
loc_140637DBC:
  140637dbc: mov r8, [r9+2C8h]
  140637dc3: lea rsi, [r9+468h]
  140637dca: mov [rbp+0B50h+var_C8], rdi
loc_140637DD1:
  140637dd1: mov rcx, rsi
  140637dd4: mov rdx, r15
  140637dd7: call sub_14066F760
  140637ddc: nop
  140637ddd: mov [rbp+0B50h+var_110], rsi
  140637de4: mov rdx, [rbp+0B50h+var_80]
  140637deb: mov rax, [rdx+2C0h]
  140637df2: mov r8, [rax+68h]
  140637df6: mov r9, [rax+70h]
  140637dfa: xor eax, eax
  140637dfc: cmp qword ptr [rdx+468h], 0FFFFFFFFFFFFFFFFh
  140637e04: mov rcx, [rdx+478h]
  140637e0b: jz short loc_140637E14
  140637e0d: mov rax, [rdx+470h]
loc_140637E14:
  140637e14: mov qword ptr [rsp+0BD0h+var_BA8], rcx
  140637e19: mov [rsp+0BD0h+var_BB0], rax
  140637e1e: lea rcx, [rbp+0B50h+var_310]
  140637e25: mov rdx, r15
  140637e28: call sub_140A28E20
  140637e2d: nop
  140637e2e: mov rsi, [rbp+0B50h+var_80]
  140637e35: lea rax, [rsi+4F8h]
  140637e3c: mov [rbp+0B50h+var_C0], rax
  140637e43: movups xmm0, [rbp+0B50h+var_310]
  140637e4a: movups xmm1, [rbp+0B50h+var_300]
  140637e51: movups xmmword ptr [rsi+508h], xmm1
  140637e58: movups xmmword ptr [rsi+4F8h], xmm0
  140637e5f: lea rax, [rsi+498h]
  140637e66: mov [rbp+0B50h+var_90], rax
  140637e6d: movups xmm0, [rbp+0B50h+var_2F0]
  140637e74: movups xmm1, [rbp+0B50h+var_2E0]
  140637e7b: movups xmm2, [rbp+0B50h+var_2D0]
  140637e82: movups xmmword ptr [rsi+498h], xmm0
  140637e89: movups xmmword ptr [rsi+4A8h], xmm1
  140637e90: movups xmmword ptr [rsi+4B8h], xmm2
  140637e97: cmp byte ptr [rsi+4F8h], 5
  140637e9e: jnz loc_140637F3D
  140637ea4: call nullsub_1
  140637ea9: mov ecx, 6
  140637eae: mov edx, 1
  140637eb3: call sub_140001650
  140637eb8: test rax, rax
  140637ebb: jz loc_14063B84E
  140637ec1: mov word ptr [rax+4], 6D61h
  140637ec7: mov dword ptr [rax], 65727473h
  140637ecd: mov qword ptr [rbp+0B50h+var_7D0], 6
  140637ed8: mov qword ptr [rbp+0B50h+var_7D0+8], rax
  140637edf: mov qword ptr [rbp+0B50h+var_7C0], 6
  140637eea: lea rdx, [rsi+500h]
  140637ef1: movzx eax, byte ptr [rsi+461h]
  140637ef8: mov byte ptr [rbp+0B50h+var_310+1], al
  140637efe: mov byte ptr [rbp+0B50h+var_310], 1
loc_140637F05:
  140637f05: lea rcx, [rbp+0B50h+var_470]
  140637f0c: lea r8, [rbp+0B50h+var_7D0]
  140637f13: lea r9, [rbp+0B50h+var_310]
  140637f1a: call sub_140307860
  140637f1f: nop
  140637f20: cmp byte ptr [rbp+0B50h+var_470], 0FFh
  140637f27: jz short loc_140637F36
  140637f29: lea rcx, [rbp+0B50h+var_470]
  140637f30: call sub_1400104F0
  140637f35: nop
loc_140637F36:
  140637f36: mov rsi, [rbp+0B50h+var_80]
loc_140637F3D:
  140637f3d: mov rax, [rsi+2C0h]
  140637f44: mov rdx, [rax+38h]
  140637f48: mov r8, [rax+40h]
  140637f4c: lea rcx, [rsi+480h]
  140637f53: mov [rsp+0BD0h+var_BB0], 0Ch
  140637f5c: lea r9, aV1MessagesV1Ch; "/v1/messages/v1/chat/completions/v1/res"...
  140637f63: mov [rbp+0B50h+var_128], rcx
  140637f6a: call sub_140A49320
  140637f6f: nop
  140637f70: mov rax, [rbp+0B50h+var_80]
  140637f77: movups xmm6, xmmword ptr [rax+2B8h]
  140637f7e: mov rcx, [rax+488h]
  140637f85: mov [rbp+0B50h+var_F0], rcx
  140637f8c: mov r14, [rax+490h]
  140637f93: mov rcx, [rbp+0B50h+var_C0]
  140637f9a: movups xmm0, xmmword ptr [rcx]
  140637f9d: movups xmm1, xmmword ptr [rcx+10h]
  140637fa1: movaps [rbp+0B50h+var_300], xmm1
  140637fa8: movaps [rbp+0B50h+var_310], xmm0
  140637faf: mov r15, [rax+2C8h]
  140637fb6: mov r12, [rax+2F0h]
  140637fbd: movzx ecx, byte ptr [rax+461h]
  140637fc4: mov byte ptr [rbp+0B50h+var_C0], cl
  140637fca: mov r13, [rax+2F8h]
  140637fd1: mov rsi, [rax+300h]
  140637fd8: mov rdi, [rax+308h]
loc_140637FDF:
  140637fdf: call sub_141470CD0
  140637fe4: nop
  140637fe5: mov rbx, rax
  140637fe8: cmp byte ptr [rax+10h], 1
  140637fec: jnz loc_14063B75C
  140637ff2: mov rax, [rbx]
  140637ff5: mov rdx, [rbx+8]
loc_140637FF9:
  140637ff9: lea rcx, [rax+1]
  140637ffd: mov [rbx], rcx
  140638000: movups xmm0, cs:xmmword_1417664A0
  140638007: mov rcx, [rbp+0B50h+var_80]
  14063800e: movups xmmword ptr [rcx+4D8h], xmm0
  140638015: movups xmm0, xmmword ptr cs:off_141766490
  14063801c: movups xmmword ptr [rcx+4C8h], xmm0
  140638023: mov [rcx+4E8h], rax
  14063802a: mov [rcx+4F0h], rdx
  140638031: movaps xmm0, [rbp+0B50h+var_310]
  140638038: movaps xmm1, [rbp+0B50h+var_300]
  14063803f: movups [rbp+0B50h+var_B28], xmm0
  140638043: movups [rbp+0B50h+var_B18], xmm1
  140638047: movups xmmword ptr [rcx+568h], xmm1
  14063804e: movups xmmword ptr [rcx+558h], xmm0
  140638055: movdqu xmm0, [rbp+0B50h+var_B68]
  14063805a: movups xmm1, [rbp+0B50h+var_B58]
  14063805e: movups xmm2, [rbp+0B50h+var_B48]
  140638062: movups xmm3, [rbp+0B50h+var_B38]
  140638066: movups xmmword ptr [rcx+548h], xmm3
  14063806d: movups xmmword ptr [rcx+538h], xmm2
  140638074: movups xmmword ptr [rcx+528h], xmm1
  14063807b: movdqu xmmword ptr [rcx+518h], xmm0
  140638083: mov [rcx+578h], rsi
  14063808a: mov [rcx+580h], rdi
  140638091: mov rdi, rcx
  140638094: mov rax, [rbp+0B50h+var_F0]
  14063809b: mov [rcx+5A8h], rax
  1406380a2: mov [rcx+5B0h], r14
  1406380a9: mov [rcx+5B8h], r12
  1406380b0: mov [rcx+5C0h], r13
  1406380b7: movups xmmword ptr [rcx+698h], xmm6
  1406380be: mov [rcx+6A8h], r15
  1406380c5: mov rax, [rbp+0B50h+var_90]
  1406380cc: mov [rcx+6B0h], rax
  1406380d3: lea rax, [rcx+4C8h]
  1406380da: mov [rcx+6B8h], rax
  1406380e1: mov byte ptr [rcx+6C8h], 0
  1406380e8: movzx eax, byte ptr [rbp+0B50h+var_C0]
  1406380ef: mov [rcx+6C9h], al
  1406380f5: mov byte ptr [rcx+6CAh], 1
loc_1406380FC:
  1406380fc: lea rdx, [rdi+518h]
loc_140638103:
  140638103: lea rcx, [rbp+0B50h+var_310]
  14063810a: mov [rbp+0B50h+var_90], rdx
  140638111: mov r8, [rbp+0B50h+var_B8]
  140638118: call sub_14063DED0
  14063811d: nop
  14063811e: mov r14, qword ptr [rbp+0B50h+var_310]
  140638125: cmp r14, 0FFFFFFFFFFFFFFFFh
  140638129: jz loc_14063B3A5
  14063812f: mov rax, qword ptr [rbp+0B50h+var_2A0+8]
  140638136: mov [rbp+0B50h+var_570], rax
  14063813d: movups xmm0, [rbp+0B50h+var_2B0+8]
  140638144: movaps [rbp+0B50h+var_580], xmm0
  14063814b: movups xmm0, [rbp+0B50h+var_2C0+8]
  140638152: movaps [rbp+0B50h+var_590], xmm0
  140638159: movups xmm0, [rbp+0B50h+var_2D0+8]
  140638160: movaps [rbp+0B50h+var_5A0], xmm0
  140638167: movdqu xmm0, [rbp+0B50h+var_310+8]
  14063816f: movups xmm1, [rbp+0B50h+var_300+8]
  140638176: movups xmm2, [rbp+0B50h+var_2F0+8]
  14063817d: movups xmm3, [rbp+0B50h+var_2E0+8]
  140638184: movaps [rbp+0B50h+var_5B0], xmm3
  14063818b: movaps [rbp+0B50h+var_5C0], xmm2
  140638192: movaps [rbp+0B50h+var_5D0], xmm1
  140638199: movdqa [rbp+0B50h+var_5E0], xmm0
  1406381a1: mov r15, [rbp+0B50h+var_290]
  1406381a8: mov r12, [rbp+0B50h+var_288]
  1406381af: mov r13, [rbp+0B50h+var_280]
loc_1406381B6:
  1406381b6: mov rcx, [rbp+0B50h+var_90]
  1406381bd: call sub_1405DE130
  1406381c2: nop
  1406381c3: mov rsi, [rbp+0B50h+var_80]
  1406381ca: mov rdx, [rsi+480h]
  1406381d1: test rdx, rdx
  1406381d4: jz short loc_1406381E8
  1406381d6: mov rcx, [rsi+488h]
  1406381dd: mov r8d, 1
  1406381e3: call sub_140001660
loc_1406381E8:
  1406381e8: lea rcx, [rsi+498h]
  1406381ef: call sub_14067EB80
  1406381f4: mov rdx, [rsi+468h]
  1406381fb: cmp rdx, 0FFFFFFFFFFFFFFFFh
  1406381ff: mov rdi, [rbp+0B50h+var_98]
  140638206: jz short loc_14063821F
  140638208: test rdx, rdx
  14063820b: jz short loc_14063821F
  14063820d: mov rcx, [rsi+470h]
  140638214: mov r8d, 1
  14063821a: call sub_140001660
loc_14063821F:
  14063821f: mov rbx, [rsi+4D0h]
  140638226: test rbx, rbx
  140638229: jz loc_140638ED9
  14063822f: mov [rbp+0B50h+var_A8], r12
  140638236: mov [rbp+0B50h+var_90], r15
  14063823d: mov rdi, [rsi+4E0h]
  140638244: test rdi, rdi
  140638247: jz loc_1406382D9
  14063824d: mov rax, [rbp+0B50h+var_80]
  140638254: mov rsi, [rax+4C8h]
  14063825b: movdqa xmm0, xmmword ptr [rsi]
  14063825f: lea r15, [rsi+10h]
  140638263: pmovmskb r12d, xmm0
  140638268: not r12d
  14063826b: jmp short loc_140638283
loc_140638270:
  140638270: dec rdi
  140638273: lea eax, [r12-1]
  140638278: and eax, r12d
  14063827b: mov r12d, eax
  14063827e: test rdi, rdi
  140638281: jz short loc_1406382D9
loc_140638283:
  140638283: test r12w, r12w
  140638287: jnz short loc_1406382AE
  140638289: nop dword ptr [rax+00000000h]
loc_140638290:
  140638290: movdqa xmm0, xmmword ptr [r15]
  140638295: add rsi, 0FFFFFFFFFFFFFE80h
  14063829c: add r15, 10h
  1406382a0: pmovmskb r12d, xmm0
  1406382a5: xor r12d, 0FFFFh
  1406382ac: jz short loc_140638290
loc_1406382AE:
  1406382ae: tzcnt eax, r12d
  1406382b3: neg rax
  1406382b6: lea rax, [rax+rax*2]
  1406382ba: mov rdx, [rsi+rax*8-18h]
  1406382bf: test rdx, rdx
  1406382c2: jz short loc_140638270
  1406382c4: lea rax, [rsi+rax*8]
  1406382c8: mov rcx, [rax-10h]
  1406382cc: mov r8d, 1
  1406382d2: call sub_140001660
  1406382d7: jmp short loc_140638270
loc_1406382D9:
  1406382d9: lea rax, [rbx+rbx*2]
  1406382dd: lea rax, ds:27h[rax*8]
  1406382e5: and rax, 0FFFFFFFFFFFFFFF0h
  1406382e9: add rbx, rax
  1406382ec: add rbx, 11h
  1406382f0: mov rdi, [rbp+0B50h+var_98]
  1406382f7: jz loc_1406385A1
  1406382fd: mov rsi, [rbp+0B50h+var_80]
  140638304: mov rcx, [rsi+4C8h]
  14063830b: sub rcx, rax
  14063830e: mov r8d, 10h
  140638314: mov rdx, rbx
  140638317: call sub_140001660
  14063831c: jmp loc_1406385A8
loc_140638321:
  140638321: movzx eax, byte ptr [rdx+0E7h]
  140638328: test al, al
  14063832a: jnz short loc_14063834F
  14063832c: mov rcx, [rdx+68h]
  140638330: mov rdx, [rdx+70h]
  140638334: mov [rbp+0B50h+var_C8], rdi
loc_14063833B:
  14063833b: call sub_140AE5B30
  140638340: nop
  140638341: mov rcx, [rbp+0B50h+var_80]
  140638348: mov rdx, [rcx+2C0h]
loc_14063834F:
  14063834f: mov r8, [rdx+68h]
  140638353: mov r9, [rdx+70h]
  140638357: mov [rbp+0B50h+var_C8], rdi
  14063835e: mov byte ptr [rsp+0BD0h+var_BB0], al
  140638362: lea rcx, [rbp+0B50h+var_310]
  140638369: mov rdx, r15
  14063836c: call sub_1409EF3F0
  140638371: nop
  140638372: mov rsi, [rbp+0B50h+var_80]
  140638379: mov byte ptr [rsi+465h], 1
  140638380: lea r12, [rsi+310h]
  140638387: movups xmm0, [rbp+0B50h+var_310]
  14063838e: movups xmm1, [rbp+0B50h+var_300]
  140638395: movups xmmword ptr [rsi+310h], xmm0
  14063839c: movups xmmword ptr [rsi+320h], xmm1
  1406383a3: lea r14, [rsi+330h]
  1406383aa: movdqu xmm0, [rbp+0B50h+var_2F0]
  1406383b2: movups xmm1, [rbp+0B50h+var_2E0]
  1406383b9: movups xmm2, [rbp+0B50h+var_2D0]
  1406383c0: movdqu xmmword ptr [rsi+330h], xmm0
  1406383c8: movups xmmword ptr [rsi+340h], xmm1
  1406383cf: movups xmmword ptr [rsi+350h], xmm2
  1406383d6: cmp byte ptr [rsi+310h], 5
  1406383dd: jnz loc_14063848A
  1406383e3: call nullsub_1
  1406383e8: mov ecx, 6
  1406383ed: mov edx, 1
  1406383f2: call sub_140001650
  1406383f7: test rax, rax
  1406383fa: jz loc_14063B860
  140638400: mov word ptr [rax+4], 6D61h
  140638406: mov dword ptr [rax], 65727473h
  14063840c: mov qword ptr [rbp+0B50h+var_7D0], 6
  140638417: mov qword ptr [rbp+0B50h+var_7D0+8], rax
  14063841e: mov qword ptr [rbp+0B50h+var_7C0], 6
  140638429: lea rdx, [rsi+318h]
  140638430: movzx eax, byte ptr [rsi+461h]
  140638437: mov byte ptr [rbp+0B50h+var_310+1], al
  14063843d: mov byte ptr [rbp+0B50h+var_310], 1
  140638444: mov [rbp+0B50h+var_108], rdi
loc_14063844B:
  14063844b: lea rcx, [rbp+0B50h+var_470]
  140638452: lea r8, [rbp+0B50h+var_7D0]
  140638459: lea r9, [rbp+0B50h+var_310]
  140638460: call sub_140307860
  140638465: nop
  140638466: cmp byte ptr [rbp+0B50h+var_470], 0FFh
  14063846d: jz short loc_140638483
  14063846f: mov [rbp+0B50h+var_108], rdi
  140638476: lea rcx, [rbp+0B50h+var_470]
  14063847d: call sub_1400104F0
  140638482: nop
loc_140638483:
  140638483: mov rsi, [rbp+0B50h+var_80]
loc_14063848A:
  14063848a: mov rcx, [rsi+2C0h]
  140638491: mov r8, [rsi+2C8h]
  140638498: mov [rbp+0B50h+var_108], rdi
  14063849f: mov rdx, r15
  1406384a2: mov r9, r12
  1406384a5: call sub_14066C080
  1406384aa: nop
  1406384ab: mov rax, [rbp+0B50h+var_80]
  1406384b2: mov rax, [rax+2C0h]
  1406384b9: mov rdx, [rax+68h]
  1406384bd: mov r8, [rax+70h]
  1406384c1: mov [rbp+0B50h+var_108], rdi
  1406384c8: mov rcx, r12
  1406384cb: call sub_140ADD330
  1406384d0: nop
  1406384d1: mov [rbp+0B50h+var_108], rdi
  1406384d8: lea rcx, aTools; "tools"
  1406384df: mov edx, 5
  1406384e4: mov r8, r15
  1406384e7: call sub_141433D50
  1406384ec: nop
  1406384ed: mov rcx, [rbp+0B50h+var_80]
  1406384f4: lea rbx, [rcx+360h]
  1406384fb: mov [rbp+0B50h+var_108], rdi
  140638502: mov rcx, rbx
  140638505: mov rdx, rax
  140638508: call sub_140A1FE60
  14063850d: nop
  14063850e: mov rcx, [rbp+0B50h+var_80]
  140638515: mov rax, [rcx+2C0h]
  14063851c: mov rdx, [rax+38h]
  140638520: mov r8, [rax+40h]
  140638524: add rcx, 390h
  14063852b: mov [rbp+0B50h+var_608], rdi
loc_140638532:
  140638532: mov [rsp+0BD0h+var_BB0], 14h
  14063853b: lea r9, aV1MessagesV1Ch+0Ch; "/v1/chat/completions/v1/responses"
  140638542: call sub_140A49320
  140638547: nop
  140638548: mov [rbp+0B50h+var_600], rdi
loc_14063854F:
  14063854f: mov rcx, r12
  140638552: call sub_1409EBB20
  140638557: nop
  140638558: test al, al
  14063855a: jz short loc_1406385C8
  14063855c: mov [rbp+0B50h+var_338], rdi
loc_140638563:
  140638563: lea rcx, [rbp+0B50h+var_310]
  14063856a: mov rdx, r12
  14063856d: call sub_1409EB440
  140638572: nop
  140638573: mov rdi, [rbp+0B50h+var_80]
  14063857a: mov byte ptr [rdi+463h], 1
  140638581: movdqu xmm0, [rbp+0B50h+var_310]
  140638589: movups xmm1, [rbp+0B50h+var_300]
  140638590: movdqu xmmword ptr [rdi+3A8h], xmm0
  140638598: movups xmmword ptr [rdi+3B8h], xmm1
  14063859f: jmp short loc_1406385DD
loc_1406385A1:
  1406385a1: mov rsi, [rbp+0B50h+var_80]
loc_1406385A8:
  1406385a8: mov r15, [rbp+0B50h+var_90]
  1406385af: mov r12, [rbp+0B50h+var_A8]
  1406385b6: cmp byte ptr [rsi+462h], 0
  1406385bd: jnz loc_14063A74C
  1406385c3: jmp loc_14063A767
loc_1406385C8:
  1406385c8: mov rdi, [rbp+0B50h+var_80]
  1406385cf: mov byte ptr [rdi+463h], 1
  1406385d6: mov byte ptr [rdi+3A8h], 0FFh
loc_1406385DD:
  1406385dd: movups xmm0, xmmword ptr [rdi+398h]
  1406385e4: mov byte ptr [rdi+465h], 0
  1406385eb: movups xmm1, xmmword ptr [r12]
  1406385f0: movups xmm2, xmmword ptr [r12+10h]
  1406385f6: movups [rbp+0B50h+var_2C0], xmm2
  1406385fd: movups [rbp+0B50h+var_2D0], xmm1
  140638604: mov rcx, [rdi+2C8h]
  14063860b: movzx eax, byte ptr [rdi+461h]
  140638612: movups xmm3, xmmword ptr [rdi+2F0h]
  140638619: movups xmm4, xmmword ptr [rdi+300h]
  140638620: movups xmm5, [rbp+0B50h+var_310]
  140638627: movups xmm6, [rbp+0B50h+var_300]
  14063862e: movups xmm7, [rbp+0B50h+var_2F0]
  140638635: movups xmm8, [rbp+0B50h+var_2E0]
  14063863d: movaps [rbp+0B50h+var_470], xmm5
  140638644: movaps [rbp+0B50h+var_460], xmm6
  14063864b: movaps [rbp+0B50h+var_450], xmm7
  140638652: movaps [rbp+0B50h+var_440], xmm8
  14063865a: movaps [rbp+0B50h+var_430], xmm1
  140638661: movaps [rbp+0B50h+var_420], xmm2
  140638668: movaps xmm1, [rbp+0B50h+var_420]
  14063866f: movups xmmword ptr [rdi+4B8h], xmm1
  140638676: movaps xmm1, [rbp+0B50h+var_430]
  14063867d: movups xmmword ptr [rdi+4A8h], xmm1
  140638684: movaps xmm1, [rbp+0B50h+var_470]
  14063868b: movaps xmm2, [rbp+0B50h+var_460]
  140638692: movaps xmm5, [rbp+0B50h+var_450]
  140638699: movaps xmm6, [rbp+0B50h+var_440]
  1406386a0: movups xmmword ptr [rdi+498h], xmm6
  1406386a7: movups xmmword ptr [rdi+488h], xmm5
  1406386ae: movups xmmword ptr [rdi+478h], xmm2
  1406386b5: movups xmmword ptr [rdi+468h], xmm1
  1406386bc: movups xmmword ptr [rdi+4C8h], xmm4
  1406386c3: movups xmmword ptr [rdi+4F8h], xmm0
  1406386ca: movups xmmword ptr [rdi+508h], xmm3
  1406386d1: movdqu xmm0, xmmword ptr [rdi+2B8h]
  1406386d9: movdqu xmmword ptr [rdi+5E8h], xmm0
  1406386e1: mov [rdi+5F8h], rcx
  1406386e8: mov [rdi+600h], r14
  1406386ef: mov [rdi+608h], rbx
  1406386f6: mov byte ptr [rdi+618h], 0
  1406386fd: mov [rdi+619h], al
  140638703: mov byte ptr [rdi+61Ah], 0
loc_14063870A:
  14063870a: lea rdx, [rdi+468h]
loc_140638711:
  140638711: lea rcx, [rbp+0B50h+var_AA8]
  140638718: mov [rbp+0B50h+var_90], rdx
  14063871f: mov r8, [rbp+0B50h+var_B8]
  140638726: call sub_14063DED0
  14063872b: nop
loc_14063872C:
  14063872c: cmp dword ptr [rbp+0B50h+var_AA8], 0FFFFFFFFh
  140638733: jz loc_14063B3A1
  140638739: mov rax, [rbp+0B50h+var_80]
  140638740: lea rcx, [rax+3C8h]
  140638747: lea rdx, [rbp+0B50h+var_AA8]
  14063874e: mov r8d, 98h
  140638754: call sub_141684120
  140638759: mov rdi, [rbp+0B50h+var_98]
  140638760: mov [rbp+0B50h+var_358], rdi
loc_140638767:
  140638767: mov rbx, [rbp+0B50h+var_90]
  14063876e: mov rcx, rbx
  140638771: call sub_1405DE130
  140638776: nop
  140638777: mov rsi, [rbp+0B50h+var_80]
  14063877e: cmp byte ptr [rsi+3A8h], 0FFh
  140638785: jz loc_140638D00
  14063878b: lea rax, [rsi+3A8h]
  140638792: mov word ptr [rsi+463h], 100h
  14063879b: movdqu xmm0, xmmword ptr [rax]
  14063879f: movups xmm1, xmmword ptr [rax+10h]
  1406387a3: movaps [rbp+0B50h+var_7C0], xmm1
  1406387aa: movdqa [rbp+0B50h+var_7D0], xmm0
  1406387b2: cmp dword ptr [rsi+3C8h], 3
  1406387b9: jnb loc_140638CD7
  1406387bf: mov r8, [rsi+450h]
  1406387c6: mov r9, [rsi+458h]
  1406387cd: mov rax, [rbp+0B50h+var_98]
  1406387d4: mov [rbp+0B50h+var_350], rax
loc_1406387DB:
  1406387db: lea rcx, aImageUrl_1; "image_url"
  1406387e2: mov edx, 9
  1406387e7: call sub_140681590
  1406387ec: nop
  1406387ed: test al, al
  1406387ef: mov rdi, [rbp+0B50h+var_80]
  1406387f6: jz loc_140638CD7
  1406387fc: mov rax, cs:off_141EC8D80
  140638803: mov rax, [rax]
  140638806: cmp rax, 3
  14063880a: jb loc_1406388C8
  140638810: mov qword ptr [rbp+0B50h+var_310], 0
  14063881b: lea rax, aCodexmateLibCo_26; "codexmate_lib::core::relay::proxy_serve"...
  140638822: mov qword ptr [rbp+0B50h+var_310+8], rax
  140638829: mov qword ptr [rbp+0B50h+var_300], 28h ; '('
  140638834: mov qword ptr [rbp+0B50h+var_300+8], 0
  14063883f: lea rcx, aSrcCoreRelayPr; "src\\core\\relay\\proxy_server.rs"
  140638846: mov qword ptr [rbp+0B50h+var_2F0], rcx
  14063884d: mov qword ptr [rbp+0B50h+var_2F0+8], 1Eh
  140638858: mov qword ptr [rbp+0B50h+var_2E0], 3
  140638863: mov qword ptr [rbp+0B50h+var_2E0+8], rax
  14063886a: mov qword ptr [rbp+0B50h+var_2D0], 28h ; '('
  140638875: mov rax, 6A200000001h
  14063887f: mov qword ptr [rbp+0B50h+var_2D0+8], rax
  140638886: lea rax, aAimamiImageUrl; "[AiMaMi] image_url rejected by upstream"...
  14063888d: mov qword ptr [rbp+0B50h+var_2C0], rax
  140638894: mov qword ptr [rbp+0B50h+var_2C0+8], 89h
  14063889f: mov rax, [rbp+0B50h+var_98]
  1406388a6: mov [rbp+0B50h+var_350], rax
  1406388ad: lea rcx, [rbp+0B50h+var_A9]
  1406388b4: lea rdx, [rbp+0B50h+var_310]
  1406388bb: call sub_1412C36A0
  1406388c0: nop
  1406388c1: mov rdi, [rbp+0B50h+var_80]
loc_1406388C8:
  1406388c8: movups xmm0, xmmword ptr [rdi+398h]
  1406388cf: mov byte ptr [rdi+464h], 0
  1406388d6: movaps xmm1, [rbp+0B50h+var_7D0]
  1406388dd: movaps xmm2, [rbp+0B50h+var_7C0]
  1406388e4: movups [rbp+0B50h+var_2C0], xmm2
  1406388eb: movups [rbp+0B50h+var_2D0], xmm1
  1406388f2: mov rcx, [rdi+2C8h]
  1406388f9: movzx eax, byte ptr [rdi+461h]
  140638900: movups xmm3, xmmword ptr [rdi+2F0h]
  140638907: movups xmm4, xmmword ptr [rdi+300h]
  14063890e: lea rdx, [rdi+330h]
  140638915: lea r8, [rdi+360h]
  14063891c: movups xmm5, [rbp+0B50h+var_310]
  140638923: movups xmm6, [rbp+0B50h+var_300]
  14063892a: movups xmm7, [rbp+0B50h+var_2F0]
  140638931: movups xmm8, [rbp+0B50h+var_2E0]
  140638939: movaps [rbp+0B50h+var_470], xmm5
  140638940: movaps [rbp+0B50h+var_460], xmm6
  140638947: movaps [rbp+0B50h+var_450], xmm7
  14063894e: movaps [rbp+0B50h+var_440], xmm8
  140638956: movaps [rbp+0B50h+var_430], xmm1
  14063895d: movaps [rbp+0B50h+var_420], xmm2
  140638964: movaps xmm1, [rbp+0B50h+var_420]
  14063896b: movups xmmword ptr [rbx+50h], xmm1
  14063896f: movaps xmm1, [rbp+0B50h+var_430]
  140638976: movups xmmword ptr [rbx+40h], xmm1
  14063897a: movaps xmm1, [rbp+0B50h+var_470]
  140638981: movaps xmm2, [rbp+0B50h+var_460]
  140638988: movaps xmm5, [rbp+0B50h+var_450]
  14063898f: movaps xmm6, [rbp+0B50h+var_440]
  140638996: movups xmmword ptr [rbx+30h], xmm6
  14063899a: movups xmmword ptr [rbx+20h], xmm5
  14063899e: movups xmmword ptr [rbx+10h], xmm2
  1406389a2: movups xmmword ptr [rbx], xmm1
  1406389a5: movups xmmword ptr [rdi+4C8h], xmm4
  1406389ac: movups xmmword ptr [rdi+4F8h], xmm0
  1406389b3: movups xmmword ptr [rdi+508h], xmm3
  1406389ba: movdqu xmm0, xmmword ptr [rdi+2B8h]
  1406389c2: movdqu xmmword ptr [rdi+5E8h], xmm0
  1406389ca: mov [rdi+5F8h], rcx
  1406389d1: mov [rdi+600h], rdx
  1406389d8: mov [rdi+608h], r8
  1406389df: mov byte ptr [rdi+618h], 0
  1406389e6: mov [rdi+619h], al
  1406389ec: mov byte ptr [rdi+61Ah], 0
loc_1406389F3:
  1406389f3: lea rdx, [rdi+468h]
loc_1406389FA:
  1406389fa: lea rcx, [rbp+0B50h+var_310]
  140638a01: mov [rbp+0B50h+var_90], rdx
  140638a08: mov r8, [rbp+0B50h+var_B8]
  140638a0f: call sub_14063DED0
  140638a14: nop
  140638a15: mov r14, qword ptr [rbp+0B50h+var_310]
  140638a1c: cmp r14, 0FFFFFFFFFFFFFFFFh
  140638a20: jz loc_14063B3C2
  140638a26: mov rax, qword ptr [rbp+0B50h+var_2A0+8]
  140638a2d: mov [rbp+0B50h+var_570], rax
  140638a34: movups xmm0, [rbp+0B50h+var_2B0+8]
  140638a3b: movaps [rbp+0B50h+var_580], xmm0
  140638a42: movups xmm0, [rbp+0B50h+var_2C0+8]
  140638a49: movaps [rbp+0B50h+var_590], xmm0
  140638a50: movups xmm0, [rbp+0B50h+var_2D0+8]
  140638a57: movaps [rbp+0B50h+var_5A0], xmm0
  140638a5e: movdqu xmm0, [rbp+0B50h+var_310+8]
  140638a66: movups xmm1, [rbp+0B50h+var_300+8]
  140638a6d: movups xmm2, [rbp+0B50h+var_2F0+8]
  140638a74: movups xmm3, [rbp+0B50h+var_2E0+8]
  140638a7b: movaps [rbp+0B50h+var_5B0], xmm3
  140638a82: movaps [rbp+0B50h+var_5C0], xmm2
  140638a89: movaps [rbp+0B50h+var_5D0], xmm1
  140638a90: movdqa [rbp+0B50h+var_5E0], xmm0
  140638a98: mov r15, [rbp+0B50h+var_290]
  140638a9f: mov r12, [rbp+0B50h+var_288]
  140638aa6: mov r13, [rbp+0B50h+var_280]
  140638aad: mov rdi, [rbp+0B50h+var_98]
  140638ab4: mov [rbp+0B50h+var_350], rdi
loc_140638ABB:
  140638abb: mov rcx, [rbp+0B50h+var_90]
  140638ac2: call sub_1405DE130
  140638ac7: nop
  140638ac8: mov rax, [rbp+0B50h+var_80]
  140638acf: mov byte ptr [rax+464h], 0
  140638ad6: lea rcx, [rax+3C8h]
  140638add: mov [rbp+0B50h+var_358], rdi
loc_140638AE4:
  140638ae4: call sub_1405E7A20
  140638ae9: nop
  140638aea: mov rsi, [rbp+0B50h+var_80]
  140638af1: mov byte ptr [rsi+463h], 0
  140638af8: mov rdx, [rsi+390h]
  140638aff: test rdx, rdx
  140638b02: jz short loc_140638B16
  140638b04: mov rcx, [rsi+398h]
  140638b0b: mov r8d, 1
  140638b11: call sub_140001660
loc_140638B16:
  140638b16: mov rbx, [rsi+368h]
  140638b1d: test rbx, rbx
  140638b20: jz loc_140638C26
  140638b26: mov [rbp+0B50h+var_A8], r12
  140638b2d: mov [rbp+0B50h+var_90], r15
  140638b34: mov rdi, [rsi+378h]
  140638b3b: test rdi, rdi
  140638b3e: jz loc_140638BD9
  140638b44: mov rax, [rbp+0B50h+var_80]
  140638b4b: mov rsi, [rax+360h]
  140638b52: movdqa xmm0, xmmword ptr [rsi]
  140638b56: lea r15, [rsi+10h]
  140638b5a: pmovmskb r12d, xmm0
  140638b5f: not r12d
  140638b62: jmp short loc_140638B83
loc_140638B70:
  140638b70: dec rdi
  140638b73: lea eax, [r12-1]
  140638b78: and eax, r12d
  140638b7b: mov r12d, eax
  140638b7e: test rdi, rdi
  140638b81: jz short loc_140638BD9
loc_140638B83:
  140638b83: test r12w, r12w
  140638b87: jnz short loc_140638BAE
  140638b89: nop dword ptr [rax+00000000h]
loc_140638B90:
  140638b90: movdqa xmm0, xmmword ptr [r15]
  140638b95: add rsi, 0FFFFFFFFFFFFFE80h
  140638b9c: add r15, 10h
  140638ba0: pmovmskb r12d, xmm0
  140638ba5: xor r12d, 0FFFFh
  140638bac: jz short loc_140638B90
loc_140638BAE:
  140638bae: tzcnt eax, r12d
  140638bb3: neg rax
  140638bb6: lea rax, [rax+rax*2]
  140638bba: mov rdx, [rsi+rax*8-18h]
  140638bbf: test rdx, rdx
  140638bc2: jz short loc_140638B70
  140638bc4: lea rax, [rsi+rax*8]
  140638bc8: mov rcx, [rax-10h]
  140638bcc: mov r8d, 1
  140638bd2: call sub_140001660
  140638bd7: jmp short loc_140638B70
loc_140638BD9:
  140638bd9: lea rax, [rbx+rbx*2]
  140638bdd: lea rax, ds:27h[rax*8]
  140638be5: and rax, 0FFFFFFFFFFFFFFF0h
  140638be9: add rbx, rax
  140638bec: add rbx, 11h
  140638bf0: mov rsi, [rbp+0B50h+var_80]
  140638bf7: mov rdi, [rbp+0B50h+var_98]
  140638bfe: mov r15, [rbp+0B50h+var_90]
  140638c05: mov r12, [rbp+0B50h+var_A8]
  140638c0c: jz short loc_140638C26
  140638c0e: mov rcx, [rsi+360h]
  140638c15: sub rcx, rax
  140638c18: mov r8d, 10h
  140638c1e: mov rdx, rbx
  140638c21: call sub_140001660
loc_140638C26:
  140638c26: lea rcx, [rsi+330h]
  140638c2d: call sub_14067EB80
  140638c32: mov byte ptr [rsi+465h], 0
  140638c39: lea rcx, [rsi+2D0h]
  140638c40: mov [rbp+0B50h+var_360], rdi
loc_140638C47:
  140638c47: call sub_1400104F0
  140638c4c: nop
  140638c4d: mov rsi, [rbp+0B50h+var_80]
  140638c54: mov byte ptr [rsi+462h], 0
  140638c5b: mov rax, [rbp+0B50h+var_570]
  140638c62: mov [rbp+0B50h+var_880], rax
  140638c69: movaps xmm0, [rbp+0B50h+var_580]
  140638c70: movaps [rbp+0B50h+var_890], xmm0
  140638c77: movaps xmm0, [rbp+0B50h+var_590]
  140638c7e: movaps [rbp+0B50h+var_8A0], xmm0
  140638c85: movaps xmm0, [rbp+0B50h+var_5A0]
  140638c8c: movaps [rbp+0B50h+var_8B0], xmm0
  140638c93: movaps xmm0, [rbp+0B50h+var_5E0]
  140638c9a: movaps xmm1, [rbp+0B50h+var_5D0]
  140638ca1: movaps xmm2, [rbp+0B50h+var_5C0]
  140638ca8: movaps xmm3, [rbp+0B50h+var_5B0]
  140638caf: movaps [rbp+0B50h+var_8C0], xmm3
  140638cb6: movaps [rbp+0B50h+var_8D0], xmm2
  140638cbd: movaps [rbp+0B50h+var_8E0], xmm1
  140638cc4: movaps [rbp+0B50h+var_8F0], xmm0
  140638ccb: mov byte ptr [rsi+460h], 1
  140638cd2: jmp loc_14063A7F6
loc_140638CD7:
  140638cd7: mov rdi, [rbp+0B50h+var_98]
  140638cde: mov [rbp+0B50h+var_4D8], rdi
loc_140638CE5:
  140638ce5: lea rcx, [rbp+0B50h+var_7D0]
  140638cec: call sub_1400104F0
  140638cf1: nop
loc_140638CF2:
  140638cf2: mov rsi, [rbp+0B50h+var_80]
  140638cf9: mov byte ptr [rsi+464h], 0
loc_140638D00:
  140638d00: mov r14, [rsi+3C8h]
  140638d07: mov rax, [rsi+440h]
  140638d0e: mov [rbp+0B50h+var_570], rax
  140638d15: movups xmm0, xmmword ptr [rsi+430h]
  140638d1c: movaps [rbp+0B50h+var_580], xmm0
  140638d23: movups xmm0, xmmword ptr [rsi+420h]
  140638d2a: movaps [rbp+0B50h+var_590], xmm0
  140638d31: movups xmm0, xmmword ptr [rsi+410h]
  140638d38: movaps [rbp+0B50h+var_5A0], xmm0
  140638d3f: movups xmm0, xmmword ptr [rsi+400h]
  140638d46: movaps [rbp+0B50h+var_5B0], xmm0
  140638d4d: movups xmm0, xmmword ptr [rsi+3F0h]
  140638d54: movaps [rbp+0B50h+var_5C0], xmm0
  140638d5b: movups xmm0, xmmword ptr [rsi+3E0h]
  140638d62: movaps [rbp+0B50h+var_5D0], xmm0
  140638d69: movdqu xmm0, xmmword ptr [rsi+3D0h]
  140638d71: movdqa [rbp+0B50h+var_5E0], xmm0
  140638d79: mov rdx, [rsi+390h]
  140638d80: mov r15, [rsi+448h]
  140638d87: mov r12, [rsi+450h]
  140638d8e: mov r13, [rsi+458h]
  140638d95: mov byte ptr [rsi+463h], 0
  140638d9c: test rdx, rdx
  140638d9f: jz short loc_140638DB3
  140638da1: mov rcx, [rsi+398h]
  140638da8: mov r8d, 1
  140638dae: call sub_140001660
loc_140638DB3:
  140638db3: mov rbx, [rsi+368h]
  140638dba: test rbx, rbx
  140638dbd: jz loc_140638EC6
  140638dc3: mov [rbp+0B50h+var_A8], r12
  140638dca: mov [rbp+0B50h+var_90], r15
  140638dd1: mov rdi, [rsi+378h]
  140638dd8: test rdi, rdi
  140638ddb: jz loc_140638E79
  140638de1: mov rax, [rbp+0B50h+var_80]
  140638de8: mov rsi, [rax+360h]
  140638def: movdqa xmm0, xmmword ptr [rsi]
  140638df3: lea r15, [rsi+10h]
  140638df7: pmovmskb r12d, xmm0
  140638dfc: not r12d
  140638dff: jmp short loc_140638E23
loc_140638E10:
  140638e10: dec rdi
  140638e13: lea eax, [r12-1]
  140638e18: and eax, r12d
  140638e1b: mov r12d, eax
  140638e1e: test rdi, rdi
  140638e21: jz short loc_140638E79
loc_140638E23:
  140638e23: test r12w, r12w
  140638e27: jnz short loc_140638E4E
  140638e29: nop dword ptr [rax+00000000h]
loc_140638E30:
  140638e30: movdqa xmm0, xmmword ptr [r15]
  140638e35: add rsi, 0FFFFFFFFFFFFFE80h
  140638e3c: add r15, 10h
  140638e40: pmovmskb r12d, xmm0
  140638e45: xor r12d, 0FFFFh
  140638e4c: jz short loc_140638E30
loc_140638E4E:
  140638e4e: tzcnt eax, r12d
  140638e53: neg rax
  140638e56: lea rax, [rax+rax*2]
  140638e5a: mov rdx, [rsi+rax*8-18h]
  140638e5f: test rdx, rdx
  140638e62: jz short loc_140638E10
  140638e64: lea rax, [rsi+rax*8]
  140638e68: mov rcx, [rax-10h]
  140638e6c: mov r8d, 1
  140638e72: call sub_140001660
  140638e77: jmp short loc_140638E10
loc_140638E79:
  140638e79: lea rax, [rbx+rbx*2]
  140638e7d: lea rax, ds:27h[rax*8]
  140638e85: and rax, 0FFFFFFFFFFFFFFF0h
  140638e89: add rbx, rax
  140638e8c: add rbx, 11h
  140638e90: mov rsi, [rbp+0B50h+var_80]
  140638e97: mov rdi, [rbp+0B50h+var_98]
  140638e9e: mov r15, [rbp+0B50h+var_90]
  140638ea5: mov r12, [rbp+0B50h+var_A8]
  140638eac: jz short loc_140638EC6
  140638eae: mov rcx, [rsi+360h]
  140638eb5: sub rcx, rax
  140638eb8: mov r8d, 10h
  140638ebe: mov rdx, rbx
  140638ec1: call sub_140001660
loc_140638EC6:
  140638ec6: lea rcx, [rsi+330h]
  140638ecd: call sub_14067EB80
  140638ed2: mov byte ptr [rsi+465h], 0
loc_140638ED9:
  140638ed9: cmp byte ptr [rsi+462h], 0
  140638ee0: jnz loc_14063A74C
  140638ee6: jmp loc_14063A767
loc_140638EEB:
  140638eeb: xor ecx, ecx
  140638eed: test r13, r13
  140638ef0: jz short loc_140638F21
  140638ef2: call nullsub_1
  140638ef7: mov edx, 1
  140638efc: mov rcx, r13
  140638eff: call sub_140001650
  140638f04: test rax, rax
  140638f07: jz loc_14063B879
  140638f0d: mov r15, rax
  140638f10: mov rcx, rax
  140638f13: mov rdx, rbx
  140638f16: mov r8, r13
  140638f19: call sub_141684120
  140638f1e: mov rcx, rsi
loc_140638F21:
  140638f21: mov [rdi+530h], rcx
  140638f28: mov [rdi+538h], r15
  140638f2f: mov [rdi+540h], rcx
  140638f36: mov byte ptr [rdi+56Ah], 0
  140638f3d: lea rbx, [rdi+4A0h]
  140638f44: mov rsi, [rbp+0B50h+var_90]
  140638f4b: movdqu xmm0, xmmword ptr [rsi]
  140638f4f: movups xmm1, xmmword ptr [rsi+10h]
  140638f53: movdqu xmmword ptr [rdi+4A0h], xmm0
  140638f5b: movups xmmword ptr [rdi+4B0h], xmm1
  140638f62: mov rcx, [rdi+528h]
  140638f69: mov rdi, [rbp+0B50h+var_98]
  140638f70: mov [rbp+0B50h+var_4A8], rdi
  140638f77: mov [rbp+0B50h+var_4B0], rsi
loc_140638F7E:
  140638f7e: mov rdx, rbx
  140638f81: call sub_140AE0B10
  140638f86: nop
  140638f87: mov rax, [rbp+0B50h+var_80]
  140638f8e: mov rax, [rax+528h]
  140638f95: mov rdx, [rax+68h]
  140638f99: mov r8, [rax+70h]
  140638f9d: mov [rbp+0B50h+var_4A8], rdi
  140638fa4: mov [rbp+0B50h+var_4B0], rsi
  140638fab: mov rcx, rbx
  140638fae: call sub_140ADD330
  140638fb3: nop
  140638fb4: mov rax, [rbp+0B50h+var_80]
  140638fbb: mov rdx, [rax+528h]
  140638fc2: mov [rbp+0B50h+var_498], rdi
  140638fc9: mov [rbp+0B50h+var_4A0], rsi
loc_140638FD0:
  140638fd0: lea rcx, [rbp+0B50h+var_B08]
  140638fd4: mov r8, r12
  140638fd7: mov r9, rbx
  140638fda: call sub_14066FE10
  140638fdf: nop
  140638fe0: mov r13, [rbp+0B50h+var_D0]
  140638fe7: mov rcx, [rbp+0B50h+var_80]
  140638fee: mov byte ptr [rcx+569h], 1
  140638ff5: mov rax, [rcx+520h]
  140638ffc: mov rcx, [rcx+528h]
  140639003: cmp byte ptr [rcx+0E5h], 1
  14063900a: jnz short loc_140639086
  14063900c: mov rsi, [rax+20h]
  140639010: lea r12, [rsi+10h]
  140639014: mov eax, [rsi+10h]
  140639017: cmp eax, 3FFFFFFDh
  14063901c: ja loc_14063B716
  140639022: lea ecx, [rax+1]
  140639025: lock cmpxchg [r12], ecx
  14063902b: jnz loc_14063B716
loc_140639031:
  140639031: movzx eax, byte ptr [rsi+18h]
  140639035: mov rax, [rsi+20h]
  140639039: lock inc qword ptr [rax]
  14063903d: jle loc_14063B877
  140639043: mov rdx, [rsi+20h]
  140639047: mov eax, 0FFFFFFFFh
  14063904c: lock xadd [rsi+10h], eax
  140639051: dec eax
  140639053: mov ecx, eax
  140639055: and ecx, 0BFFFFFFFh
  14063905b: neg ecx
  14063905d: jno short loc_1406390DD
  14063905f: mov [rbp+0B50h+var_118], rdi
  140639066: mov rcx, [rbp+0B50h+var_90]
  14063906d: mov [rbp+0B50h+var_120], rcx
loc_140639074:
  140639074: mov rcx, r12
  140639077: mov rsi, rdx
  14063907a: mov edx, eax
  14063907c: call sub_1416C1970
  140639081: mov rdx, rsi
  140639084: jmp short loc_1406390DD
loc_140639086:
  140639086: mov rsi, [rax+18h]
  14063908a: lea r12, [rsi+10h]
  14063908e: mov eax, [rsi+10h]
  140639091: cmp eax, 3FFFFFFDh
  140639096: ja loc_14063B739
  14063909c: lea ecx, [rax+1]
  14063909f: lock cmpxchg [r12], ecx
  1406390a5: jnz loc_14063B739
loc_1406390AB:
  1406390ab: movzx eax, byte ptr [rsi+18h]
  1406390af: mov rax, [rsi+20h]
  1406390b3: lock inc qword ptr [rax]
  1406390b7: jle loc_14063B877
  1406390bd: mov rdx, [rsi+20h]
  1406390c1: mov eax, 0FFFFFFFFh
  1406390c6: lock xadd [rsi+10h], eax
  1406390cb: dec eax
  1406390cd: mov ecx, eax
  1406390cf: and ecx, 0BFFFFFFFh
  1406390d5: neg ecx
  1406390d7: jo loc_14063B815
loc_1406390DD:
  1406390dd: mov rax, [rbp+0B50h+var_80]
  1406390e4: mov [rax+548h], rdx
  1406390eb: mov r9, [rax+4E0h]
  1406390f2: mov rax, [rax+4E8h]
  1406390f9: mov [rbp+0B50h+var_E0], rdi
  140639100: mov rsi, [rbp+0B50h+var_90]
  140639107: mov [rbp+0B50h+var_E8], rsi
loc_14063910E:
  14063910e: mov [rsp+0BD0h+var_BB0], rax
  140639113: lea r8, unk_141764700
  14063911a: lea rcx, [rbp+0B50h+var_310]
  140639121: call sub_1405A48C0
  140639126: nop
  140639127: mov rax, [rbp+0B50h+var_80]
  14063912e: mov byte ptr [rax+569h], 0
  140639135: movups xmm0, [rbp+0B50h+var_AB8]
  14063913c: movaps [rbp+0B50h+var_620], xmm0
  140639143: movups xmm0, [rbp+0B50h+var_AC8]
  14063914a: movaps [rbp+0B50h+var_630], xmm0
  140639151: movdqu xmm0, [rbp+0B50h+var_B08]
  140639156: movups xmm1, [rbp+0B50h+var_AF8]
  14063915a: movups xmm2, [rbp+0B50h+var_AE8]
  14063915e: movups xmm3, [rbp+0B50h+var_AD8]
  140639162: movaps [rbp+0B50h+var_640], xmm3
  140639169: movaps [rbp+0B50h+var_650], xmm2
  140639170: movaps [rbp+0B50h+var_660], xmm1
  140639177: movdqa [rbp+0B50h+var_670], xmm0
  14063917f: mov [rbp+0B50h+var_E0], rdi
  140639186: mov [rbp+0B50h+var_E8], rsi
  14063918d: lea rcx, [rbp+0B50h+var_470]
  140639194: lea rdx, [rbp+0B50h+var_310]
  14063919b: lea r8, [rbp+0B50h+var_670]
  1406391a2: call sub_14103C250
  1406391a7: nop
  1406391a8: mov [rbp+0B50h+var_E0], rdi
  1406391af: mov [rbp+0B50h+var_E8], rsi
  1406391b6: lea rcx, [rbp+0B50h+var_310]
  1406391bd: lea rdx, [rbp+0B50h+var_470]
  1406391c4: mov r8, rbx
  1406391c7: call sub_1406C67E0
  1406391cc: nop
  1406391cd: mov [rbp+0B50h+var_E0], rdi
  1406391d4: mov [rbp+0B50h+var_E8], rsi
  1406391db: lea rcx, [rbp+0B50h+var_310]
  1406391e2: call sub_14103C180
  1406391e7: nop
  1406391e8: mov rdi, [rbp+0B50h+var_80]
  1406391ef: mov [rdi+570h], rax
  1406391f6: mov [rdi+578h], rdx
  1406391fd: mov [rbp+0B50h+var_878], r15
loc_140639204:
  140639204: lea rdx, [rdi+570h]
loc_14063920B:
  14063920b: lea rcx, [rbp+0B50h+var_310]
  140639212: mov [rbp+0B50h+var_D0], rdx
  140639219: mov r8, [rbp+0B50h+var_B8]
  140639220: call sub_14104DCF0
  140639225: nop
  140639226: mov rsi, qword ptr [rbp+0B50h+var_310]
  14063922d: cmp rsi, 0FFFFFFFFFFFFFFFEh
  140639231: jz loc_14063B39D
  140639237: mov rdi, qword ptr [rbp+0B50h+var_310+8]
  14063923e: movups xmm0, [rbp+0B50h+var_300]
  140639245: movaps [rbp+0B50h+var_A10], xmm0
  14063924c: movups xmm0, [rbp+0B50h+var_2F0]
  140639253: movaps [rbp+0B50h+var_A00], xmm0
  14063925a: movups xmm0, [rbp+0B50h+var_2E0]
  140639261: movaps [rbp+0B50h+var_9F0], xmm0
  140639268: movups xmm0, [rbp+0B50h+var_2D0]
  14063926f: movaps [rbp+0B50h+var_9E0], xmm0
  140639276: movups xmm0, [rbp+0B50h+var_2C0]
  14063927d: movaps [rbp+0B50h+var_9D0], xmm0
  140639284: movups xmm0, [rbp+0B50h+var_2B0]
  14063928b: movaps [rbp+0B50h+var_9C0], xmm0
  140639292: movdqu xmm0, [rbp+0B50h+var_2A0]
  14063929a: movdqa [rbp+0B50h+var_9B0], xmm0
  1406392a2: mov rax, [rbp+0B50h+var_290]
  1406392a9: mov [rbp+0B50h+var_9A0], rax
  1406392b0: mov rax, [rbp+0B50h+var_98]
  1406392b7: mov [rbp+0B50h+var_E0], rax
  1406392be: mov rax, [rbp+0B50h+var_90]
  1406392c5: mov [rbp+0B50h+var_E8], rax
loc_1406392CC:
  1406392cc: mov rcx, [rbp+0B50h+var_D0]
  1406392d3: call sub_1405E6830
  1406392d8: nop
  1406392d9: cmp esi, 0FFFFFFFFh
  1406392dc: jz loc_1406393E2
  1406392e2: mov rax, [rbp+0B50h+var_80]
  1406392e9: mov byte ptr [rax+568h], 1
  1406392f0: mov [rax+578h], rsi
  1406392f7: mov [rax+580h], rdi
  1406392fe: mov rdi, rax
  140639301: movaps xmm0, [rbp+0B50h+var_A10]
  140639308: movaps xmm1, [rbp+0B50h+var_A00]
  14063930f: movaps xmm2, [rbp+0B50h+var_9F0]
  140639316: movaps xmm3, [rbp+0B50h+var_9E0]
  14063931d: movups xmmword ptr [rax+588h], xmm0
  140639324: movups xmmword ptr [rax+598h], xmm1
  14063932b: movups xmmword ptr [rax+5A8h], xmm2
  140639332: movups xmmword ptr [rax+5B8h], xmm3
  140639339: movaps xmm0, [rbp+0B50h+var_9D0]
  140639340: movups xmmword ptr [rax+5C8h], xmm0
  140639347: movaps xmm0, [rbp+0B50h+var_9C0]
  14063934e: movups xmmword ptr [rax+5D8h], xmm0
  140639355: movdqa xmm0, [rbp+0B50h+var_9B0]
  14063935d: movdqu xmmword ptr [rax+5E8h], xmm0
  140639365: mov rax, [rbp+0B50h+var_9A0]
  14063936c: mov [rdi+5F8h], rax
  140639373: movzx eax, word ptr [rdi+5E0h]
  14063937a: mov [rdi+570h], ax
  140639381: mov rdx, [rdi+5C8h]
  140639388: lea r8, ds:0[rdx*4]
  140639390: mov rax, rdx
  140639393: shr rax, 3Eh
  140639397: setnz al
  14063939a: mov rcx, 7FFFFFFFFFFFFFFEh
  1406393a4: cmp r8, rcx
  1406393a7: setnbe cl
  1406393aa: or cl, al
  1406393ac: jz loc_1406395E0
  1406393b2: xor r14d, r14d
loc_1406393B5:
  1406393b5: mov rax, [rbp+0B50h+var_98]
  1406393bc: mov [rbp+0B50h+var_130], rax
  1406393c3: mov rax, [rbp+0B50h+var_90]
  1406393ca: mov [rbp+0B50h+var_138], rax
loc_1406393D1:
  1406393d1: mov rcx, r14
  1406393d4: mov rdx, r8
  1406393d7: call sub_1416C2D4B
  1406393dd: jmp loc_14063B877
loc_1406393E2:
  1406393e2: mov [rbp+0B50h+var_328], rdi
  1406393e9: mov rax, [rbp+0B50h+var_80]
  1406393f0: mov rcx, [rax+520h]
loc_1406393F7:
  1406393f7: call sub_140660A60
  1406393fc: nop
  1406393fd: lea rax, [rbp+0B50h+var_328]
  140639404: mov qword ptr [rbp+0B50h+var_470], rax
  14063940b: lea rax, sub_141031F10
  140639412: mov qword ptr [rbp+0B50h+var_470+8], rax
  140639419: lea rdx, unk_141767F78
  140639420: lea rcx, [rbp+0B50h+var_310]
  140639427: lea r8, [rbp+0B50h+var_470]
  14063942e: call sub_14149C0F0
  140639433: nop
  140639434: movdqu xmm0, [rbp+0B50h+var_310]
  14063943c: movdqa [rbp+0B50h+var_670], xmm0
  140639444: mov r14, qword ptr [rbp+0B50h+var_300]
  14063944b: mov qword ptr [rbp+0B50h+var_660], r14
  140639452: mov rsi, [rbp+0B50h+var_80]
  140639459: mov rcx, [rsi+520h]
  140639460: mov rdx, [rsi+4F0h]
  140639467: mov r8, [rsi+4F8h]
  14063946e: mov r9, [rsi+538h]
  140639475: mov rax, [rsi+540h]
  14063947c: mov r10, [rsi+528h]
  140639483: mov r11, [rsi+4E0h]
  14063948a: mov rsi, [rsi+4E8h]
  140639491: mov rbx, qword ptr [rbp+0B50h+var_670+8]
loc_140639498:
  140639498: mov qword ptr [rsp+0BD0h+var_B80+8], r14
  14063949d: mov qword ptr [rsp+0BD0h+var_B80], rbx
  1406394a2: mov [rsp+0BD0h+var_B98], rsi
  1406394a7: mov qword ptr [rsp+0BD0h+var_BA8+8], r11
  1406394ac: mov qword ptr [rsp+0BD0h+var_BA8], r10
  1406394b1: mov [rsp+0BD0h+var_BB0], rax
  1406394b6: mov [rsp+0BD0h+var_B90], 0
  1406394bd: call sub_140667920
  1406394c2: nop
  1406394c3: lea rcx, [rbp+0B50h+var_470]
  1406394ca: lea rdx, [rbp+0B50h+var_670]
  1406394d1: call sub_14149C500
  1406394d6: nop
loc_1406394D7:
  1406394d7: lea rax, aProxyUpstream; "proxy.upstream"
  1406394de: mov [rsp+0BD0h+var_BB0], rax
  1406394e3: mov qword ptr [rsp+0BD0h+var_BA8], 0Eh
  1406394ec: lea rcx, [rbp+0B50h+var_310]
  1406394f3: mov dx, 1F6h
  1406394f7: mov r8, rbx
  1406394fa: mov r9, r14
  1406394fd: call sub_14066B160
  140639502: nop
  140639503: mov r14, qword ptr [rbp+0B50h+var_310]
  14063950a: movups xmm0, [rbp+0B50h+var_310+8]
  140639511: movaps [rbp+0B50h+var_560], xmm0
  140639518: movups xmm0, [rbp+0B50h+var_300+8]
  14063951f: movaps [rbp+0B50h+var_550], xmm0
  140639526: movups xmm0, [rbp+0B50h+var_2F0+8]
  14063952d: movaps [rbp+0B50h+var_540], xmm0
  140639534: movups xmm0, [rbp+0B50h+var_2E0+8]
  14063953b: movaps [rbp+0B50h+var_530], xmm0
  140639542: movups xmm0, [rbp+0B50h+var_2D0+8]
  140639549: movaps [rbp+0B50h+var_520], xmm0
  140639550: movups xmm0, [rbp+0B50h+var_2C0+8]
  140639557: movaps [rbp+0B50h+var_510], xmm0
  14063955e: movdqu xmm0, [rbp+0B50h+var_2B0+8]
  140639566: movdqa [rbp+0B50h+var_500], xmm0
  14063956e: mov rax, qword ptr [rbp+0B50h+var_2A0+8]
  140639575: mov [rbp+0B50h+var_4F0], rax
  14063957c: mov r15, qword ptr [rbp+0B50h+var_470]
  140639583: mov r13, qword ptr [rbp+0B50h+var_470+8]
  14063958a: mov rax, qword ptr [rbp+0B50h+var_460]
  140639591: mov [rbp+0B50h+var_D8], rax
  140639598: mov rdx, qword ptr [rbp+0B50h+var_670]
  14063959f: test rdx, rdx
  1406395a2: jz short loc_1406395B2
  1406395a4: mov r8d, 1
  1406395aa: mov rcx, rbx
  1406395ad: call sub_140001660
loc_1406395B2:
  1406395b2: mov rdi, [rbp+0B50h+var_98]
  1406395b9: mov [rbp+0B50h+var_E0], rdi
  1406395c0: mov rax, [rbp+0B50h+var_90]
  1406395c7: mov [rbp+0B50h+var_E8], rax
loc_1406395CE:
  1406395ce: lea rcx, [rbp+0B50h+var_328]
  1406395d5: call sub_1405E12D0
  1406395da: nop
loc_1406395DB:
  1406395db: jmp loc_14063A568
loc_1406395E0:
  1406395e0: mov [rbp+0B50h+var_C0], rdx
  1406395e7: lea r15, [rdi+578h]
  1406395ee: lea r12, [rdi+7A8h]
  1406395f5: movzx esi, word ptr [rdi+5D0h]
  1406395fc: mov eax, 2
  140639601: mov [rbp+0B50h+var_F0], rax
  140639608: mov [rbp+0B50h+var_128], r8
  14063960f: test r8, r8
  140639612: jz short loc_14063968A
  140639614: mov rbx, r13
  140639617: mov r12, r14
  14063961a: mov rax, [rdi+5C0h]
  140639621: mov [rbp+0B50h+var_110], rax
  140639628: call nullsub_1
  14063962d: mov r14d, 2
  140639633: mov edx, 2
  140639638: mov r13, [rbp+0B50h+var_C0]
  14063963f: lea r15, ds:0[r13*4]
  140639647: mov rcx, r15
  14063964a: call sub_140001650
  14063964f: mov r8, r15
  140639652: test rax, rax
  140639655: jz loc_1406393B5
  14063965b: test r13, r13
  14063965e: mov [rbp+0B50h+var_F0], rax
  140639665: jz short loc_140639676
  140639667: mov rcx, rax
  14063966a: mov rdx, [rbp+0B50h+var_110]
  140639671: call sub_141684120
loc_140639676:
  140639676: mov r14, r12
  140639679: lea r12, [rdi+7A8h]
  140639680: lea r15, [rdi+578h]
  140639687: mov r13, rbx
loc_14063968A:
  14063968a: lea rdx, [rdi+590h]
loc_140639691:
  140639691: lea rcx, [rbp+0B50h+var_470]
  140639698: call sub_14032BA10
  14063969d: nop
  14063969e: lea rdx, [rdi+5A8h]
loc_1406396A5:
  1406396a5: lea rcx, [rbp+0B50h+var_310]
  1406396ac: call sub_14032B840
  1406396b1: nop
  1406396b2: mov [rdi+800h], si
  1406396b9: mov rax, [rbp+0B50h+var_F0]
  1406396c0: mov [rdi+7F0h], rax
  1406396c7: mov rax, [rbp+0B50h+var_C0]
  1406396ce: mov [rdi+7F8h], rax
  1406396d5: mov rax, qword ptr [rbp+0B50h+var_460]
  1406396dc: mov [rdi+7D0h], rax
  1406396e3: movups xmm0, [rbp+0B50h+var_470]
  1406396ea: movups xmmword ptr [rdi+7C0h], xmm0
  1406396f1: mov rax, qword ptr [rbp+0B50h+var_300]
  1406396f8: mov [rdi+7E8h], rax
  1406396ff: movups xmm0, [rbp+0B50h+var_310]
  140639706: movups xmmword ptr [rdi+7D8h], xmm0
  14063970d: movdqu xmm0, xmmword ptr [r15]
  140639712: movdqu xmmword ptr [r12], xmm0
  140639718: mov rax, [r15+10h]
  14063971c: mov [r12+10h], rax
  140639721: mov eax, [rdi+570h]
  140639727: lea ecx, [rax-0C8h]
  14063972d: cmp cx, 64h ; 'd'
  140639731: jnb loc_140639CEE
  140639737: mov rcx, [rdi+520h]
  14063973e: mov rdx, [rdi+4F0h]
  140639745: mov r8, [rdi+4F8h]
  14063974c: mov r9, [rdi+538h]
  140639753: mov r10, [rdi+540h]
  14063975a: mov r11, [rdi+528h]
  140639761: mov rsi, [rdi+4E0h]
  140639768: mov rdi, [rdi+4E8h]
  14063976f: mov rbx, [rbp+0B50h+var_98]
  140639776: mov [rbp+0B50h+var_F8], rbx
  14063977d: mov r14, [rbp+0B50h+var_90]
  140639784: mov [rbp+0B50h+var_100], r14
loc_14063978B:
  14063978b: mov [rsp+0BD0h+var_B88], ax
  140639790: mov [rsp+0BD0h+var_B98], rdi
  140639795: mov rdi, rbx
  140639798: mov qword ptr [rsp+0BD0h+var_BA8+8], rsi
  14063979d: mov qword ptr [rsp+0BD0h+var_BA8], r11
  1406397a2: mov [rsp+0BD0h+var_BB0], r10
  1406397a7: mov qword ptr [rsp+0BD0h+var_B80], 0
  1406397b0: mov [rsp+0BD0h+var_B90], 1
  1406397b7: call sub_140667920
  1406397bc: nop
  1406397bd: mov [rbp+0B50h+var_F8], rdi
  1406397c4: mov rax, [rbp+0B50h+var_90]
  1406397cb: mov [rbp+0B50h+var_100], rax
  1406397d2: lea rcx, [rbp+0B50h+var_310]
  1406397d9: call sub_141442B90
  1406397de: nop
  1406397df: mov rax, [rbp+0B50h+var_D0]
  1406397e6: movzx edx, word ptr [rax]
  1406397e9: mov rax, qword ptr [rbp+0B50h+var_310]
  1406397f0: movups xmm0, [rbp+0B50h+var_310+8]
  1406397f7: movaps [rbp+0B50h+var_470], xmm0
  1406397fe: movups xmm0, [rbp+0B50h+var_300+8]
  140639805: movaps [rbp+0B50h+var_460], xmm0
  14063980c: movups xmm0, [rbp+0B50h+var_2F0+8]
  140639813: movaps [rbp+0B50h+var_450], xmm0
  14063981a: movups xmm0, [rbp+0B50h+var_2E0+8]
  140639821: movaps [rbp+0B50h+var_440], xmm0
  140639828: movups xmm0, [rbp+0B50h+var_2D0+8]
  14063982f: movaps [rbp+0B50h+var_430], xmm0
  140639836: movups xmm0, [rbp+0B50h+var_2C0+8]
  14063983d: movaps [rbp+0B50h+var_420], xmm0
  140639844: movzx ecx, word ptr [rbp+0B50h+var_2B0+8]
  14063984b: mov r8d, dword ptr [rbp+0B50h+var_2B0+0Ah]
  140639852: mov dword ptr [rbp+0B50h+var_670], r8d
  140639859: movzx r8d, word ptr [rbp+0B50h+var_2B0+0Eh]
  140639861: mov word ptr [rbp+0B50h+var_670+4], r8w
  140639869: cmp rax, 0FFFFFFFFFFFFFFFFh
  14063986d: jz short loc_1406398EA
  14063986f: lea r8, [rbp+0B50h+var_310+8]
  140639876: lea ecx, [rdx-3E8h]
  14063987c: movzx ecx, cx
  14063987f: cmp ecx, 0FC7Ch
  140639885: mov ecx, 0C8h
  14063988a: cmovnb ecx, edx
  14063988d: movups xmm0, xmmword ptr [r8+50h]
  140639892: movaps [rbp+0B50h+var_420], xmm0
  140639899: movups xmm0, xmmword ptr [r8+40h]
  14063989e: movaps [rbp+0B50h+var_430], xmm0
  1406398a5: movups xmm0, xmmword ptr [r8]
  1406398a9: movups xmm1, xmmword ptr [r8+10h]
  1406398ae: movups xmm2, xmmword ptr [r8+20h]
  1406398b3: movups xmm3, xmmword ptr [r8+30h]
  1406398b8: movaps [rbp+0B50h+var_440], xmm3
  1406398bf: movaps [rbp+0B50h+var_450], xmm2
  1406398c6: movaps [rbp+0B50h+var_460], xmm1
  1406398cd: movaps [rbp+0B50h+var_470], xmm0
  1406398d4: mov edx, [r8+62h]
  1406398d8: mov dword ptr [rbp+0B50h+var_670], edx
  1406398de: movzx edx, word ptr [r8+66h]
  1406398e3: mov word ptr [rbp+0B50h+var_670+4], dx
loc_1406398EA:
  1406398ea: mov qword ptr [rbp+0B50h+var_750], rax
  1406398f1: movaps xmm0, [rbp+0B50h+var_470]
  1406398f8: movaps xmm1, [rbp+0B50h+var_460]
  1406398ff: movaps xmm2, [rbp+0B50h+var_450]
  140639906: movaps xmm3, [rbp+0B50h+var_440]
  14063990d: movups [rbp+0B50h+var_750+8], xmm0
  140639914: movups [rbp+0B50h+var_738], xmm1
  14063991b: movups [rbp+0B50h+var_728], xmm2
  140639922: movups [rbp+0B50h+var_718], xmm3
  140639929: movaps xmm0, [rbp+0B50h+var_430]
  140639930: movups [rbp+0B50h+var_708], xmm0
  140639937: movdqa xmm0, [rbp+0B50h+var_420]
  14063993f: movdqu [rbp+0B50h+var_6F8], xmm0
  140639947: mov word ptr [rbp+0B50h+var_6E8], cx
  14063994e: mov eax, dword ptr [rbp+0B50h+var_670]
  140639954: mov dword ptr [rbp+0B50h+var_6E8+2], eax
  14063995a: movzx eax, word ptr [rbp+0B50h+var_670+4]
  140639961: mov word ptr [rbp+0B50h+var_6E8+6], ax
  140639968: mov [rbp+0B50h+var_81], 0
loc_14063996F:
  14063996f: lea rcx, [rbp+0B50h+var_310]
  140639976: lea r8, [rbp+0B50h+var_750]
  14063997d: mov rdx, r12
  140639980: call sub_140675E20
  140639985: nop
  140639986: movups xmm0, [rbp+0B50h+var_2B0]
  14063998d: movaps [rbp+0B50h+var_6F8+8], xmm0
  140639994: movups xmm0, [rbp+0B50h+var_2C0]
  14063999b: movaps [rbp+0B50h+var_708+8], xmm0
  1406399a2: movups xmm0, [rbp+0B50h+var_2D0]
  1406399a9: movaps [rbp+0B50h+var_718+8], xmm0
  1406399b0: movdqu xmm0, [rbp+0B50h+var_310]
  1406399b8: movups xmm1, [rbp+0B50h+var_300]
  1406399bf: movups xmm2, [rbp+0B50h+var_2F0]
  1406399c6: movups xmm3, [rbp+0B50h+var_2E0]
  1406399cd: movaps [rbp+0B50h+var_728+8], xmm3
  1406399d4: movaps [rbp+0B50h+var_738+8], xmm2
  1406399db: movaps xmmword ptr [rbp+410h], xmm1
  1406399e2: movdqa [rbp+0B50h+var_750], xmm0
  1406399ea: lea rax, aXAimamiRoute; "x-aimami-route"
  1406399f1: mov qword ptr [rbp+0B50h+var_470], rax
  1406399f8: mov qword ptr [rbp+0B50h+var_470+8], 0Eh
  140639a03: lea rax, aRelayResponses; "relay-responses-native"
  140639a0a: mov qword ptr [rbp+0B50h+var_460], rax
  140639a11: mov qword ptr [rbp+0B50h+var_460+8], 16h
  140639a1c: mov [rbp+0B50h+var_81], 0
  140639a23: lea rcx, [rbp+0B50h+var_310]
  140639a2a: lea rdx, [rbp+0B50h+var_750]
  140639a31: lea r8, [rbp+0B50h+var_470]
  140639a38: call sub_1406C5590
  140639a3d: nop
loc_140639A3E:
  140639a3e: movups xmm0, [rbp+0B50h+var_310]
  140639a45: movups xmm1, [rbp+0B50h+var_300]
  140639a4c: movups xmm2, [rbp+0B50h+var_2F0]
  140639a53: movups xmm3, [rbp+0B50h+var_2E0]
  140639a5a: movaps [rbp+0B50h+var_750], xmm0
  140639a61: movaps xmmword ptr [rbp+410h], xmm1
  140639a68: movaps [rbp+0B50h+var_738+8], xmm2
  140639a6f: movaps [rbp+0B50h+var_728+8], xmm3
  140639a76: movups xmm0, [rbp+0B50h+var_2D0]
  140639a7d: movaps [rbp+0B50h+var_718+8], xmm0
  140639a84: movups xmm0, [rbp+0B50h+var_2C0]
  140639a8b: movaps [rbp+0B50h+var_708+8], xmm0
  140639a92: movdqu xmm0, [rbp+0B50h+var_2B0]
  140639a9a: movdqa [rbp+0B50h+var_6F8+8], xmm0
  140639aa2: mov rax, [rbp+0B50h+var_80]
  140639aa9: mov byte ptr [rax+568h], 0
  140639ab0: lea rbx, [rbp+0B50h+var_310]
  140639ab7: mov r8d, 88h
  140639abd: mov rcx, rbx
  140639ac0: mov rdx, r15
  140639ac3: call sub_141684120
  140639ac8: mov [rbp+0B50h+var_81], 1
loc_140639ACF:
  140639acf: mov rcx, rbx
  140639ad2: call sub_140EA3B00
  140639ad7: mov [rbp+0B50h+var_D0], rax
  140639ade: mov [rbp+0B50h+var_A8], rdx
  140639ae5: mov rcx, [rbp+0B50h+var_80]
  140639aec: mov rax, [rcx+520h]
  140639af3: mov rsi, [rax]
  140639af6: lock inc qword ptr [rsi]
  140639afa: jle loc_14063B877
  140639b00: mov [rbp+0B50h+var_5F8], rsi
  140639b07: mov rax, [rcx+520h]
  140639b0e: mov rbx, [rax+8]
  140639b12: lock inc qword ptr [rbx]
  140639b16: jle loc_14063B877
  140639b1c: mov [rbp+0B50h+var_328], rbx
  140639b23: mov rdx, [rcx+528h]
  140639b2a: mov [rbp+0B50h+var_99], 1
loc_140639B31:
  140639b31: lea rcx, [rbp+0B50h+var_310]
  140639b38: call sub_14149C500
  140639b3d: nop
loc_140639B3E:
  140639b3e: mov qword ptr [rbp+0B50h+var_670], rsi
  140639b45: mov qword ptr [rbp+0B50h+var_470], rbx
  140639b4c: call nullsub_1
  140639b51: mov ecx, 18h
  140639b56: mov edx, 8
  140639b5b: call sub_140001650
  140639b60: test rax, rax
  140639b63: jz loc_14063B7E6
  140639b69: mov qword ptr [rax], 1
  140639b70: mov qword ptr [rax+8], 1
  140639b78: mov byte ptr [rax+10h], 0
  140639b7c: mov rcx, qword ptr [rbp+0B50h+var_310]
  140639b83: cmp rcx, 0FFFFFFFFFFFFFFFFh
  140639b87: mov rdi, [rbp+0B50h+var_98]
  140639b8e: jz loc_14063B7FF
  140639b94: movdqu xmm0, [rbp+0B50h+var_310+8]
  140639b9c: mov qword ptr [rbp+0B50h+var_300+8], rax
  140639ba3: lea rax, aCodexNativeRes; "codex native responses stream failed"
  140639baa: mov qword ptr [rbp+0B50h+var_2F0], rax
  140639bb1: mov qword ptr [rbp+0B50h+var_2F0+8], 24h ; '$'
  140639bbc: mov qword ptr [rbp+0B50h+var_2E0], rbx
  140639bc3: mov qword ptr [rbp+0B50h+var_2E0+8], rsi
  140639bca: mov rax, [rbp+0B50h+var_D0]
  140639bd1: mov qword ptr [rbp+0B50h+var_2D0], rax
  140639bd8: mov rax, [rbp+0B50h+var_A8]
  140639bdf: mov qword ptr [rbp+0B50h+var_2D0+8], rax
  140639be6: mov qword ptr [rbp+0B50h+var_310], rcx
  140639bed: movdqu [rbp+0B50h+var_310+8], xmm0
  140639bf5: call nullsub_1
  140639bfa: mov ecx, 50h ; 'P'
  140639bff: mov edx, 8
  140639c04: call sub_140001650
  140639c09: test rax, rax
  140639c0c: jz loc_14063B772
  140639c12: movups xmm0, [rbp+0B50h+var_2D0]
  140639c19: movups xmmword ptr [rax+40h], xmm0
  140639c1d: movdqu xmm0, [rbp+0B50h+var_310]
  140639c25: movups xmm1, [rbp+0B50h+var_300]
  140639c2c: movups xmm2, [rbp+0B50h+var_2F0]
  140639c33: movups xmm3, [rbp+0B50h+var_2E0]
  140639c3a: movups xmmword ptr [rax+30h], xmm3
  140639c3e: movups xmmword ptr [rax+20h], xmm2
  140639c42: movups xmmword ptr [rax+10h], xmm1
  140639c46: movdqu xmmword ptr [rax], xmm0
  140639c4a: mov r8, qword ptr [rbp+0B50h+var_750]
  140639c51: cmp r8, 0FFFFFFFFFFFFFFFFh
  140639c55: jz loc_14063B01B
  140639c5b: movzx ecx, word ptr [rbp+0B50h+var_750+8]
  140639c62: movups xmm0, [rbp+0B50h+var_750+0Ah]
  140639c69: movups [rbp+0B50h+var_310+0Ah], xmm0
  140639c70: movups xmm0, [rbp+0B50h+var_738+2]
  140639c77: movups [rbp+0B50h+var_300+0Ah], xmm0
  140639c7e: movups xmm0, [rbp+0B50h+var_728+2]
  140639c85: movups [rbp+0B50h+var_2F0+0Ah], xmm0
  140639c8c: movups xmm0, [rbp+0B50h+var_718+2]
  140639c93: movups [rbp+0B50h+var_2E0+0Ah], xmm0
  140639c9a: movups xmm0, [rbp+0B50h+var_708+2]
  140639ca1: movups [rbp+0B50h+var_2D0+0Ah], xmm0
  140639ca8: movdqu xmm0, [rbp+0B50h+var_6F8+2]
  140639cb0: movdqu [rbp+0B50h+var_2C0+0Ah], xmm0
  140639cb8: mov rdx, [rbp+0B50h+var_6E8]
  140639cbf: mov qword ptr [rbp+0B50h+var_2B0+8], rdx
  140639cc6: mov qword ptr [rbp+0B50h+var_310], r8
  140639ccd: mov word ptr [rbp+0B50h+var_310+8], cx
  140639cd4: mov qword ptr [rbp+0B50h+var_2A0], rax
  140639cdb: lea r15, off_1417B3C10
  140639ce2: mov qword ptr [rbp+0B50h+var_2A0+8], r15
  140639ce9: jmp loc_14063B08A
loc_140639CEE:
  140639cee: mov byte ptr [rdi+568h], 0
  140639cf5: lea rcx, [rdi+600h]
  140639cfc: mov r8d, 88h
  140639d02: mov rdx, r15
  140639d05: call sub_141684120
  140639d0a: mov byte ptr [rdi+7A0h], 0
  140639d11: mov [rbp+0B50h+var_110], r13
  140639d18: mov rax, [rbp+0B50h+var_D8]
  140639d1f: mov [rbp+0B50h+var_128], rax
loc_140639D26:
  140639d26: lea rdx, [rdi+600h]
loc_140639D2D:
  140639d2d: lea rcx, [rbp+0B50h+var_310]
  140639d34: mov [rbp+0B50h+var_D8], rdx
  140639d3b: mov r8, [rbp+0B50h+var_B8]
  140639d42: call sub_14061E020
  140639d47: nop
  140639d48: cmp dword ptr [rbp+0B50h+var_310], 1
  140639d4f: jz loc_14063B3A9
  140639d55: movdqu xmm0, [rbp+0B50h+var_310+8]
  140639d5d: movups xmm1, [rbp+0B50h+var_300+8]
  140639d64: movaps [rbp+0B50h+var_980], xmm1
  140639d6b: movdqa [rbp+0B50h+var_990], xmm0
  140639d73: mov rsi, [rbp+0B50h+var_98]
  140639d7a: mov [rbp+0B50h+var_F8], rsi
  140639d81: mov rax, [rbp+0B50h+var_90]
  140639d88: mov [rbp+0B50h+var_100], rax
loc_140639D8F:
  140639d8f: mov rcx, [rbp+0B50h+var_D8]
  140639d96: call sub_1405DA6C0
  140639d9b: nop
  140639d9c: cmp qword ptr [rbp+0B50h+var_990], 0
  140639da4: jz short loc_140639DD4
  140639da6: movdqa xmm0, [rbp+0B50h+var_990]
  140639dae: movaps xmm1, [rbp+0B50h+var_980]
  140639db5: movdqa [rbp+0B50h+var_670], xmm0
  140639dbd: movaps [rbp+0B50h+var_660], xmm1
  140639dc4: mov rdi, qword ptr [rbp+0B50h+var_670+8]
  140639dcb: mov r14, qword ptr [rbp+0B50h+var_660]
  140639dd2: jmp short loc_140639E23
loc_140639DD4:
  140639dd4: mov qword ptr [rbp+0B50h+var_670+8], 1
  140639ddf: pxor xmm0, xmm0
  140639de3: movdqa [rbp+0B50h+var_660], xmm0
  140639deb: lea rax, off_14177A978
  140639df2: mov qword ptr [rbp+0B50h+var_670], rax
  140639df9: lea rcx, [rbp+0B50h+var_990+8]
  140639e00: mov [rbp+0B50h+var_F8], rsi
  140639e07: mov rax, [rbp+0B50h+var_90]
  140639e0e: mov [rbp+0B50h+var_100], rax
  140639e15: mov edi, 1
  140639e1a: xor r14d, r14d
  140639e1d: call sub_1405E12D0
  140639e22: nop
loc_140639E23:
  140639e23: mov rsi, [rbp+0B50h+var_80]
  140639e2a: movzx edx, word ptr [rsi+570h]
  140639e31: mov [rbp+0B50h+var_AB], 1
loc_140639E38:
  140639e38: lea rbx, [rbp+0B50h+var_5F8]
  140639e3f: mov rcx, rbx
  140639e42: mov [rbp+0B50h+var_D8], rdi
  140639e49: mov r8, rdi
  140639e4c: mov [rbp+0B50h+var_D0], r14
  140639e53: mov r9, r14
  140639e56: call sub_14066AA20
  140639e5b: nop
  140639e5c: lea r13, [rsi+570h]
  140639e63: mov rax, cs:off_141EC8D80
  140639e6a: mov rax, [rax]
  140639e6d: cmp rax, 2
  140639e71: mov rdi, rsi
  140639e74: jb loc_140639F74
  140639e7a: lea rax, [rdi+4F0h]
  140639e81: mov rcx, [rdi+528h]
  140639e88: mov qword ptr [rbp+0B50h+var_470], rax
  140639e8f: lea rax, sub_14041F680
  140639e96: mov qword ptr [rbp+0B50h+var_470+8], rax
  140639e9d: mov qword ptr [rbp+0B50h+var_460], rcx
  140639ea4: lea rax, sub_1400015F0
  140639eab: mov qword ptr [rbp+0B50h+var_460+8], rax
  140639eb2: mov qword ptr [rbp+0B50h+var_450], rbx
  140639eb9: mov qword ptr [rbp+0B50h+var_450+8], rax
  140639ec0: mov qword ptr [rbp+0B50h+var_310], 0
  140639ecb: lea rax, aCodexmateLibCo_26; "codexmate_lib::core::relay::proxy_serve"...
  140639ed2: mov qword ptr [rbp+0B50h+var_310+8], rax
  140639ed9: mov qword ptr [rbp+0B50h+var_300], 28h ; '('
  140639ee4: mov qword ptr [rbp+0B50h+var_300+8], 0
  140639eef: lea rcx, aSrcCoreRelayPr; "src\\core\\relay\\proxy_server.rs"
  140639ef6: mov qword ptr [rbp+0B50h+var_2F0], rcx
  140639efd: mov qword ptr [rbp+0B50h+var_2F0+8], 1Eh
  140639f08: mov qword ptr [rbp+0B50h+var_2E0], 2
  140639f13: mov qword ptr [rbp+0B50h+var_2E0+8], rax
  140639f1a: mov qword ptr [rbp+0B50h+var_2D0], 28h ; '('
  140639f25: mov rax, 0A2700000001h
  140639f2f: mov qword ptr [rbp+0B50h+var_2D0+8], rax
  140639f36: lea rax, unk_1417685E0
  140639f3d: mov qword ptr [rbp+0B50h+var_2C0], rax
  140639f44: lea rax, [rbp+0B50h+var_470]
  140639f4b: mov qword ptr [rbp+0B50h+var_2C0+8], rax
  140639f52: mov [rbp+0B50h+var_82], 1
loc_140639F59:
  140639f59: lea rcx, [rbp+0B50h+var_A9]
  140639f60: lea rdx, [rbp+0B50h+var_310]
  140639f67: call sub_1412C36A0
  140639f6c: nop
  140639f6d: mov rdi, [rbp+0B50h+var_80]
loc_140639F74:
  140639f74: mov rcx, [rdi+520h]
  140639f7b: mov rdx, [rdi+4F0h]
  140639f82: mov r8, [rdi+4F8h]
  140639f89: mov r9, [rdi+538h]
  140639f90: mov rax, [rdi+540h]
  140639f97: mov r10, [rdi+528h]
  140639f9e: mov r11, [rdi+4E0h]
  140639fa5: mov rsi, [rdi+4E8h]
  140639fac: mov di, [rdi+570h]
  140639fb3: movdqu xmm0, [rbp+0B50h+var_5F0]
  140639fbb: mov [rbp+0B50h+var_82], 1
  140639fc2: movdqu [rsp+0BD0h+var_B80], xmm0
  140639fc8: mov [rsp+0BD0h+var_B88], di
  140639fcd: mov [rsp+0BD0h+var_B98], rsi
  140639fd2: mov qword ptr [rsp+0BD0h+var_BA8+8], r11
  140639fd7: mov qword ptr [rsp+0BD0h+var_BA8], r10
  140639fdc: mov [rsp+0BD0h+var_BB0], rax
  140639fe1: mov [rsp+0BD0h+var_B90], 1
  140639fe8: call sub_140667920
  140639fed: nop
  140639fee: mov eax, [r13+0]
  140639ff2: lea ecx, [rax-3E8h]
  140639ff8: movzx ecx, cx
  140639ffb: cmp ecx, 0FC7Ch
  14063a001: mov r14d, 1F6h
  14063a007: cmovnb r14d, eax
  14063a00b: mov [rbp+0B50h+var_82], 1
  14063a012: lea rcx, [rbp+0B50h+var_310]
  14063a019: call sub_141442B90
  14063a01e: nop
  14063a01f: mov rax, qword ptr [rbp+0B50h+var_310]
  14063a026: movups xmm0, [rbp+0B50h+var_310+8]
  14063a02d: movaps [rbp+0B50h+var_470], xmm0
  14063a034: movups xmm0, [rbp+0B50h+var_300+8]
  14063a03b: movaps [rbp+0B50h+var_460], xmm0
  14063a042: movups xmm0, [rbp+0B50h+var_2F0+8]
  14063a049: movaps [rbp+0B50h+var_450], xmm0
  14063a050: movups xmm0, [rbp+0B50h+var_2E0+8]
  14063a057: movaps [rbp+0B50h+var_440], xmm0
  14063a05e: movups xmm0, [rbp+0B50h+var_2D0+8]
  14063a065: movaps [rbp+0B50h+var_430], xmm0
  14063a06c: movups xmm0, [rbp+0B50h+var_2C0+8]
  14063a073: movaps [rbp+0B50h+var_420], xmm0
  14063a07a: movzx ecx, word ptr [rbp+0B50h+var_2B0+8]
  14063a081: mov edx, dword ptr [rbp+0B50h+var_2B0+0Ah]
  14063a087: mov dword ptr [rbp+0B50h+var_328], edx
  14063a08d: movzx edx, word ptr [rbp+0B50h+var_2B0+0Eh]
  14063a094: mov word ptr [rbp+0B50h+var_328+4], dx
  14063a09b: cmp rax, 0FFFFFFFFFFFFFFFFh
  14063a09f: jz short loc_14063A100
  14063a0a1: lea rcx, [rbp+0B50h+var_310+8]
  14063a0a8: movups xmm0, xmmword ptr [rcx+50h]
  14063a0ac: movaps [rbp+0B50h+var_420], xmm0
  14063a0b3: movups xmm0, xmmword ptr [rcx+40h]
  14063a0b7: movaps [rbp+0B50h+var_430], xmm0
  14063a0be: movups xmm0, xmmword ptr [rcx]
  14063a0c1: movups xmm1, xmmword ptr [rcx+10h]
  14063a0c5: movups xmm2, xmmword ptr [rcx+20h]
  14063a0c9: movups xmm3, xmmword ptr [rcx+30h]
  14063a0cd: movaps [rbp+0B50h+var_440], xmm3
  14063a0d4: movaps [rbp+0B50h+var_450], xmm2
  14063a0db: movaps [rbp+0B50h+var_460], xmm1
  14063a0e2: movaps [rbp+0B50h+var_470], xmm0
  14063a0e9: mov edx, [rcx+62h]
  14063a0ec: mov dword ptr [rbp+0B50h+var_328], edx
  14063a0f2: movzx ecx, word ptr [rcx+66h]
  14063a0f6: mov word ptr [rbp+0B50h+var_328+4], cx
  14063a0fd: mov ecx, r14d
loc_14063A100:
  14063a100: mov qword ptr [rbp+0B50h+var_6E0], rax
  14063a107: movaps xmm0, [rbp+0B50h+var_470]
  14063a10e: movaps xmm1, [rbp+0B50h+var_460]
  14063a115: movaps xmm2, [rbp+0B50h+var_450]
  14063a11c: movaps xmm3, [rbp+0B50h+var_440]
  14063a123: movups [rbp+0B50h+var_6E0+8], xmm0
  14063a12a: movups [rbp+0B50h+var_6C8], xmm1
  14063a131: movups [rbp+0B50h+var_6B8], xmm2
  14063a138: movups [rbp+0B50h+var_6A8], xmm3
  14063a13f: movaps xmm0, [rbp+0B50h+var_430]
  14063a146: movups [rbp+0B50h+var_698], xmm0
  14063a14d: movdqa xmm0, [rbp+0B50h+var_420]
  14063a155: movdqu [rbp+0B50h+var_688], xmm0
  14063a15d: mov word ptr [rbp+0B50h+var_678], cx
  14063a164: mov eax, dword ptr [rbp+0B50h+var_328]
  14063a16a: mov dword ptr [rbp+0B50h+var_678+2], eax
  14063a170: movzx eax, word ptr [rbp+0B50h+var_328+4]
  14063a177: mov word ptr [rbp+0B50h+var_678+6], ax
  14063a17e: mov rax, [rbp+0B50h+var_80]
  14063a185: lea r12, [rax+7A8h]
  14063a18c: mov [rbp+0B50h+var_82], 1
  14063a193: lea rcx, [rbp+0B50h+var_310]
  14063a19a: lea r8, [rbp+0B50h+var_6E0]
  14063a1a1: mov rdx, r12
  14063a1a4: call sub_140675E20
  14063a1a9: nop
  14063a1aa: movups xmm0, [rbp+0B50h+var_2B0]
  14063a1b1: movaps [rbp+0B50h+var_688+8], xmm0
  14063a1b8: movups xmm0, [rbp+0B50h+var_2C0]
  14063a1bf: movaps [rbp+0B50h+var_698+8], xmm0
  14063a1c6: movups xmm0, [rbp+0B50h+var_2D0]
  14063a1cd: movaps [rbp+0B50h+var_6A8+8], xmm0
  14063a1d4: movdqu xmm0, [rbp+0B50h+var_310]
  14063a1dc: movups xmm1, [rbp+0B50h+var_300]
  14063a1e3: movups xmm2, [rbp+0B50h+var_2F0]
  14063a1ea: movups xmm3, [rbp+0B50h+var_2E0]
  14063a1f1: movaps [rbp+0B50h+var_6B8+8], xmm3
  14063a1f8: movaps [rbp+0B50h+var_6C8+8], xmm2
  14063a1ff: movaps xmmword ptr [rbp+480h], xmm1
  14063a206: movdqa [rbp+0B50h+var_6E0], xmm0
  14063a20e: lea rax, aXAimamiRoute; "x-aimami-route"
  14063a215: mov qword ptr [rbp+0B50h+var_470], rax
  14063a21c: mov qword ptr [rbp+0B50h+var_470+8], 0Eh
  14063a227: lea rax, aRelayResponses; "relay-responses-native"
  14063a22e: mov qword ptr [rbp+0B50h+var_460], rax
  14063a235: mov qword ptr [rbp+0B50h+var_460+8], 16h
  14063a240: mov [rbp+0B50h+var_82], 1
  14063a247: lea rcx, [rbp+0B50h+var_310]
  14063a24e: lea rdx, [rbp+0B50h+var_6E0]
  14063a255: lea r8, [rbp+0B50h+var_470]
  14063a25c: call sub_1406C5590
  14063a261: nop
  14063a262: movups xmm0, [rbp+0B50h+var_310]
  14063a269: movups xmm1, [rbp+0B50h+var_300]
  14063a270: movups xmm2, [rbp+0B50h+var_2F0]
  14063a277: movups xmm3, [rbp+0B50h+var_2E0]
  14063a27e: movaps [rbp+0B50h+var_6E0], xmm0
  14063a285: movaps xmmword ptr [rbp+480h], xmm1
  14063a28c: movaps [rbp+0B50h+var_6C8+8], xmm2
  14063a293: movaps [rbp+0B50h+var_6B8+8], xmm3
  14063a29a: movups xmm0, [rbp+0B50h+var_2D0]
  14063a2a1: movaps [rbp+0B50h+var_6A8+8], xmm0
  14063a2a8: movups xmm0, [rbp+0B50h+var_2C0]
  14063a2af: movaps [rbp+0B50h+var_698+8], xmm0
  14063a2b6: movups xmm0, [rbp+0B50h+var_2B0]
  14063a2bd: movaps [rbp+0B50h+var_688+8], xmm0
  14063a2c4: movdqa xmm0, [rbp+0B50h+var_670]
  14063a2cc: movaps xmm1, [rbp+0B50h+var_660]
  14063a2d3: movaps [rbp+0B50h+var_300], xmm1
  14063a2da: movdqa [rbp+0B50h+var_310], xmm0
  14063a2e2: mov [rbp+0B50h+var_AA], 1
loc_14063A2E9:
  14063a2e9: lea rcx, [rbp+0B50h+var_310]
  14063a2f0: call sub_140FB1000
  14063a2f5: nop
  14063a2f6: mov r8, qword ptr [rbp+0B50h+var_6E0]
  14063a2fd: cmp r8, 0FFFFFFFFFFFFFFFFh
  14063a301: jz loc_14063A390
  14063a307: movzx ecx, word ptr [rbp+0B50h+var_6E0+8]
  14063a30e: movups xmm0, [rbp+0B50h+var_6E0+0Ah]
  14063a315: movups [rbp+0B50h+var_310+0Ah], xmm0
  14063a31c: movups xmm0, [rbp+0B50h+var_6C8+2]
  14063a323: movups [rbp+0B50h+var_300+0Ah], xmm0
  14063a32a: movups xmm0, [rbp+0B50h+var_6B8+2]
  14063a331: movups [rbp+0B50h+var_2F0+0Ah], xmm0
  14063a338: movups xmm0, [rbp+0B50h+var_6A8+2]
  14063a33f: movups [rbp+0B50h+var_2E0+0Ah], xmm0
  14063a346: movups xmm0, [rbp+0B50h+var_698+2]
  14063a34d: movups [rbp+0B50h+var_2D0+0Ah], xmm0
  14063a354: movdqu xmm0, [rbp+0B50h+var_688+2]
  14063a35c: movdqu [rbp+0B50h+var_2C0+0Ah], xmm0
  14063a364: mov r9, [rbp+0B50h+var_678]
  14063a36b: mov qword ptr [rbp+0B50h+var_2B0+8], r9
  14063a372: mov qword ptr [rbp+0B50h+var_310], r8
  14063a379: mov word ptr [rbp+0B50h+var_310+8], cx
  14063a380: mov qword ptr [rbp+0B50h+var_2A0], rax
  14063a387: mov qword ptr [rbp+0B50h+var_2A0+8], rdx
  14063a38e: jmp short loc_14063A409
loc_14063A390:
  14063a390: mov [rbp+0B50h+var_C0], rax
  14063a397: mov [rbp+0B50h+var_F0], rdx
  14063a39e: mov rax, [rdx]
  14063a3a1: test rax, rax
  14063a3a4: jz short loc_14063A3B0
loc_14063A3A6:
  14063a3a6: mov rcx, [rbp+0B50h+var_C0]
  14063a3ad: call rax
  14063a3af: nop
loc_14063A3B0:
  14063a3b0: mov rax, [rbp+0B50h+var_F0]
  14063a3b7: mov rdx, [rax+8]
  14063a3bb: test rdx, rdx
  14063a3be: jz short loc_14063A3D0
  14063a3c0: mov r8, [rax+10h]
  14063a3c4: mov rcx, [rbp+0B50h+var_C0]
  14063a3cb: call sub_140001660
loc_14063A3D0:
  14063a3d0: mov [rbp+0B50h+var_82], 0
loc_14063A3D7:
  14063a3d7: lea rax, aProxyUpstream; "proxy.upstream"
  14063a3de: mov [rsp+0BD0h+var_BB0], rax
  14063a3e3: mov qword ptr [rsp+0BD0h+var_BA8], 0Eh
  14063a3ec: lea r8, aBuildErrorPass; "build error passthrough body failed"
  14063a3f3: lea rcx, [rbp+0B50h+var_310]
  14063a3fa: mov r9d, 23h ; '#'
  14063a400: mov edx, r14d
  14063a403: call sub_14066B160
  14063a408: nop
loc_14063A409:
  14063a409: mov rax, [rbp+0B50h+var_80]
  14063a410: mov rax, [rax+528h]
  14063a417: add rax, 18h
  14063a41b: mov qword ptr [rbp+0B50h+var_470], r13
  14063a422: lea rcx, sub_14143ED80
  14063a429: mov qword ptr [rbp+0B50h+var_470+8], rcx
  14063a430: mov qword ptr [rbp+0B50h+var_460], rax
  14063a437: lea rax, sub_1400015F0
  14063a43e: mov qword ptr [rbp+0B50h+var_460+8], rax
loc_14063A445:
  14063a445: lea rdx, unk_141768089
  14063a44c: lea rcx, [rbp+0B50h+var_328]
  14063a453: lea r8, [rbp+0B50h+var_470]
  14063a45a: call sub_14149C0F0
  14063a45f: nop
  14063a460: mov r15, [rbp+0B50h+var_328]
  14063a467: mov rcx, [rbp+0B50h+var_320]
  14063a46e: mov rax, [rbp+0B50h+var_318]
  14063a475: mov [rbp+0B50h+var_D8], rax
  14063a47c: movzx eax, word ptr [r13+0]
  14063a481: lea edx, [rax-1F4h]
  14063a487: cmp dx, 64h ; 'd'
  14063a48b: jb short loc_14063A4A9
  14063a48d: add eax, 0FFFFFE6Fh
  14063a492: cmp eax, 1Ch
  14063a495: ja loc_14063AF55
  14063a49b: mov edx, 100001CDh
  14063a4a0: bt edx, eax
  14063a4a3: jnb loc_14063AF55
loc_14063A4A9:
  14063a4a9: mov r14, qword ptr [rbp+0B50h+var_310]
  14063a4b0: movups xmm0, [rbp+0B50h+var_310+8]
  14063a4b7: movaps [rbp+0B50h+var_560], xmm0
  14063a4be: movups xmm0, [rbp+0B50h+var_300+8]
  14063a4c5: movaps [rbp+0B50h+var_550], xmm0
  14063a4cc: movups xmm0, [rbp+0B50h+var_2F0+8]
  14063a4d3: movaps [rbp+0B50h+var_540], xmm0
  14063a4da: movups xmm0, [rbp+0B50h+var_2E0+8]
  14063a4e1: movaps [rbp+0B50h+var_530], xmm0
  14063a4e8: movups xmm0, [rbp+0B50h+var_2D0+8]
  14063a4ef: movaps [rbp+0B50h+var_520], xmm0
  14063a4f6: movups xmm0, [rbp+0B50h+var_2C0+8]
  14063a4fd: movaps [rbp+0B50h+var_510], xmm0
  14063a504: movdqu xmm0, [rbp+0B50h+var_2B0+8]
  14063a50c: movdqa [rbp+0B50h+var_500], xmm0
  14063a514: mov rax, qword ptr [rbp+0B50h+var_2A0+8]
  14063a51b: mov [rbp+0B50h+var_4F0], rax
  14063a522: mov rdi, [rbp+0B50h+var_98]
  14063a529: mov r13, rcx
  14063a52c: mov rdx, [rbp+0B50h+var_5F8]
  14063a533: test rdx, rdx
  14063a536: jz short loc_14063A54A
loc_14063A538:
  14063a538: mov rcx, qword ptr [rbp+0B50h+var_5F0]
  14063a53f: mov r8d, 1
  14063a545: call sub_140001660
loc_14063A54A:
  14063a54a: mov [rbp+0B50h+var_130], rdi
  14063a551: mov rax, [rbp+0B50h+var_90]
  14063a558: mov [rbp+0B50h+var_138], rax
loc_14063A55F:
  14063a55f: mov rcx, r12
  14063a562: call sub_140017140
  14063a567: nop
loc_14063A568:
  14063a568: mov rax, [rbp+0B50h+var_80]
  14063a56f: mov byte ptr [rax+568h], 0
  14063a576: mov rax, [rax+548h]
  14063a57d: lock dec qword ptr [rax]
  14063a581: jnz short loc_14063A5AC
  14063a583: mov rax, [rbp+0B50h+var_80]
  14063a58a: lea rcx, [rax+548h]
  14063a591: mov [rbp+0B50h+var_118], rdi
  14063a598: mov rax, [rbp+0B50h+var_90]
  14063a59f: mov [rbp+0B50h+var_120], rax
loc_14063A5A6:
  14063a5a6: call sub_141018B80
  14063a5ab: nop
loc_14063A5AC:
  14063a5ac: mov rax, [rbp+0B50h+var_80]
  14063a5b3: mov byte ptr [rax+569h], 0
  14063a5ba: lea rcx, [rax+4A0h]
  14063a5c1: mov [rbp+0B50h+var_4C8], rdi
  14063a5c8: mov rbx, [rbp+0B50h+var_90]
  14063a5cf: mov [rbp+0B50h+var_4D0], rbx
loc_14063A5D6:
  14063a5d6: call sub_1400104F0
  14063a5db: nop
  14063a5dc: mov rsi, [rbp+0B50h+var_80]
  14063a5e3: mov rdx, [rsi+530h]
  14063a5ea: test rdx, rdx
  14063a5ed: jz short loc_14063A601
  14063a5ef: mov rcx, [rsi+538h]
  14063a5f6: mov r8d, 1
  14063a5fc: call sub_140001660
loc_14063A601:
  14063a601: mov byte ptr [rsi+56Ah], 0
  14063a608: mov rax, [rbp+0B50h+var_4F0]
  14063a60f: mov [rbp+0B50h+var_900], rax
  14063a616: movaps xmm0, [rbp+0B50h+var_500]
  14063a61d: movaps [rbp+0B50h+var_910], xmm0
  14063a624: movaps xmm0, [rbp+0B50h+var_510]
  14063a62b: movaps [rbp+0B50h+var_920], xmm0
  14063a632: movaps xmm0, [rbp+0B50h+var_520]
  14063a639: movaps [rbp+0B50h+var_930], xmm0
  14063a640: movdqa xmm0, [rbp+0B50h+var_560]
  14063a648: movaps xmm1, [rbp+0B50h+var_550]
  14063a64f: movaps xmm2, [rbp+0B50h+var_540]
  14063a656: movaps xmm3, [rbp+0B50h+var_530]
  14063a65d: movaps [rbp+0B50h+var_940], xmm3
  14063a664: movaps [rbp+0B50h+var_950], xmm2
  14063a66b: movaps [rbp+0B50h+var_960], xmm1
  14063a672: movdqa [rbp+0B50h+var_970], xmm0
  14063a67a: mov byte ptr [rsi+56Bh], 1
  14063a681: cmp r14, 0FFFFFFFFFFFFFFFFh
  14063a685: jz loc_14063B3B5
loc_14063A68B:
  14063a68b: mov rax, [rbp+0B50h+var_900]
  14063a692: mov [rbp+0B50h+var_570], rax
  14063a699: movaps xmm0, [rbp+0B50h+var_910]
  14063a6a0: movaps [rbp+0B50h+var_580], xmm0
  14063a6a7: movaps xmm0, [rbp+0B50h+var_920]
  14063a6ae: movaps [rbp+0B50h+var_590], xmm0
  14063a6b5: movaps xmm0, [rbp+0B50h+var_930]
  14063a6bc: movaps [rbp+0B50h+var_5A0], xmm0
  14063a6c3: movdqa xmm0, [rbp+0B50h+var_970]
  14063a6cb: movaps xmm1, [rbp+0B50h+var_960]
  14063a6d2: movaps xmm2, [rbp+0B50h+var_950]
  14063a6d9: movaps xmm3, [rbp+0B50h+var_940]
  14063a6e0: movaps [rbp+0B50h+var_5B0], xmm3
  14063a6e7: movaps [rbp+0B50h+var_5C0], xmm2
  14063a6ee: movaps [rbp+0B50h+var_5D0], xmm1
  14063a6f5: movdqa [rbp+0B50h+var_5E0], xmm0
  14063a6fd: mov [rbp+0B50h+var_610], rdi
loc_14063A704:
  14063a704: mov rcx, rbx
  14063a707: call sub_1405DDF50
  14063a70c: nop
  14063a70d: mov rsi, [rbp+0B50h+var_80]
  14063a714: mov rdx, [rsi+468h]
  14063a71b: test rdx, rdx
  14063a71e: jz short loc_14063A732
  14063a720: mov rcx, [rsi+470h]
  14063a727: mov r8d, 1
  14063a72d: call sub_140001660
loc_14063A732:
  14063a732: mov [rbp+0B50h+var_D0], r13
  14063a739: mov r12, r13
  14063a73c: mov r13, [rbp+0B50h+var_D8]
  14063a743: cmp byte ptr [rsi+462h], 0
  14063a74a: jz short loc_14063A767
loc_14063A74C:
  14063a74c: mov rax, [rbp+0B50h+var_80]
  14063a753: lea rcx, [rax+2D0h]
  14063a75a: mov [rbp+0B50h+var_360], rdi
loc_14063A761:
  14063a761: call sub_1400104F0
  14063a766: nop
loc_14063A767:
  14063a767: mov rsi, [rbp+0B50h+var_80]
  14063a76e: mov byte ptr [rsi+462h], 0
  14063a775: mov rax, [rbp+0B50h+var_570]
  14063a77c: mov [rbp+0B50h+var_880], rax
  14063a783: movaps xmm0, [rbp+0B50h+var_580]
  14063a78a: movaps [rbp+0B50h+var_890], xmm0
  14063a791: movaps xmm0, [rbp+0B50h+var_590]
  14063a798: movaps [rbp+0B50h+var_8A0], xmm0
  14063a79f: movaps xmm0, [rbp+0B50h+var_5A0]
  14063a7a6: movaps [rbp+0B50h+var_8B0], xmm0
  14063a7ad: movaps xmm0, [rbp+0B50h+var_5E0]
  14063a7b4: movaps xmm1, [rbp+0B50h+var_5D0]
  14063a7bb: movaps xmm2, [rbp+0B50h+var_5C0]
  14063a7c2: movaps xmm3, [rbp+0B50h+var_5B0]
  14063a7c9: movaps [rbp+0B50h+var_8C0], xmm3
  14063a7d0: movaps [rbp+0B50h+var_8D0], xmm2
  14063a7d7: movaps [rbp+0B50h+var_8E0], xmm1
  14063a7de: movaps [rbp+0B50h+var_8F0], xmm0
  14063a7e5: mov byte ptr [rsi+460h], 1
  14063a7ec: cmp r14, 0FFFFFFFFFFFFFFFFh
  14063a7f0: jz loc_14063B3D4
loc_14063A7F6:
  14063a7f6: mov [rsi+1B0h], r14
  14063a7fd: movaps xmm0, [rbp+0B50h+var_8F0]
  14063a804: movaps xmm1, [rbp+0B50h+var_8E0]
  14063a80b: movaps xmm2, [rbp+0B50h+var_8D0]
  14063a812: movaps xmm3, [rbp+0B50h+var_8C0]
  14063a819: movups xmmword ptr [rsi+1B8h], xmm0
  14063a820: movups xmmword ptr [rsi+1C8h], xmm1
  14063a827: movups xmmword ptr [rsi+1D8h], xmm2
  14063a82e: movups xmmword ptr [rsi+1E8h], xmm3
  14063a835: movaps xmm0, [rbp+0B50h+var_8B0]
  14063a83c: movups xmmword ptr [rsi+1F8h], xmm0
  14063a843: movaps xmm0, [rbp+0B50h+var_8A0]
  14063a84a: movups xmmword ptr [rsi+208h], xmm0
  14063a851: movaps xmm0, [rbp+0B50h+var_890]
  14063a858: movups xmmword ptr [rsi+218h], xmm0
  14063a85f: mov rax, [rbp+0B50h+var_880]
  14063a866: mov [rsi+228h], rax
  14063a86d: mov [rsi+230h], r15
  14063a874: mov [rsi+238h], r12
  14063a87b: mov [rsi+240h], r13
loc_14063A882:
  14063a882: mov rbx, rdi
  14063a885: mov rcx, rdi
  14063a888: call sub_1405DC8C0
  14063a88d: nop
  14063a88e: mov rdi, [rbp+0B50h+var_80]
  14063a895: lea rax, [rdi+1B0h]
  14063a89c: mov rdx, [rax]
  14063a89f: sub rdx, 3
  14063a8a3: mov ecx, 1
  14063a8a8: cmovnb rcx, rdx
  14063a8ac: cmp rcx, 1
  14063a8b0: jnz loc_14063AC61
  14063a8b6: lea rcx, [rdi+230h]
  14063a8bd: movups xmm0, xmmword ptr [rax+70h]
  14063a8c1: movaps [rbp+0B50h+var_2A0], xmm0
  14063a8c8: movups xmm0, xmmword ptr [rax+60h]
  14063a8cc: movaps [rbp+0B50h+var_2B0], xmm0
  14063a8d3: movups xmm0, xmmword ptr [rax+50h]
  14063a8d7: movaps [rbp+0B50h+var_2C0], xmm0
  14063a8de: movups xmm0, xmmword ptr [rax+40h]
  14063a8e2: movaps [rbp+0B50h+var_2D0], xmm0
  14063a8e9: movups xmm0, xmmword ptr [rax]
  14063a8ec: movups xmm1, xmmword ptr [rax+10h]
  14063a8f0: movups xmm2, xmmword ptr [rax+20h]
  14063a8f4: movups xmm3, xmmword ptr [rax+30h]
  14063a8f8: movaps [rbp+0B50h+var_2E0], xmm3
  14063a8ff: movaps [rbp+0B50h+var_2F0], xmm2
  14063a906: movaps [rbp+0B50h+var_300], xmm1
  14063a90d: movaps [rbp+0B50h+var_310], xmm0
  14063a914: mov rax, [rcx+10h]
  14063a918: mov qword ptr [rbp+0B50h+var_7C0], rax
  14063a91f: movups xmm0, xmmword ptr [rcx]
  14063a922: movaps [rbp+0B50h+var_7D0], xmm0
  14063a929: mov rbx, [rdi+80h]
  14063a930: mov rax, [rdi+1A0h]
  14063a937: mov r15, [rax+8]
  14063a93b: mov r12, [rax+10h]
  14063a93f: mov [rbp+0B50h+var_9A], 1
loc_14063A946:
  14063a946: lea rcx, [rbp+0B50h+var_470]
  14063a94d: call sub_140FFA6E0
  14063a952: nop
  14063a953: add rbx, 8
  14063a957: mov eax, dword ptr [rbp+0B50h+var_470]
  14063a95d: mov r8d, eax
  14063a960: sar r8d, 0Dh
  14063a964: lea edx, [r8-1]
  14063a968: xor ecx, ecx
  14063a96a: test r8d, r8d
  14063a96d: jg short loc_14063A994
  14063a96f: mov ecx, 1
  14063a974: sub ecx, r8d
  14063a977: imul rcx, 51EB851Fh
  14063a97e: shr rcx, 27h
  14063a982: inc ecx
  14063a984: imul r8d, ecx, 190h
  14063a98b: add edx, r8d
  14063a98e: imul ecx, 0FFFDC54Fh
loc_14063A994:
  14063a994: movsxd r8, edx
  14063a997: imul rdx, r8, 51EB851Fh
  14063a99e: mov r9, rdx
  14063a9a1: shr r9, 3Fh
  14063a9a5: sar rdx, 25h
  14063a9a9: add edx, r9d
  14063a9ac: imul r8d, 5B5h
  14063a9b3: sar r8d, 2
  14063a9b7: shr eax, 4
  14063a9ba: and eax, 1FFh
  14063a9bf: add eax, ecx
  14063a9c1: mov ecx, dword ptr [rbp+0B50h+var_470+4]
  14063a9c7: mov r9d, dword ptr [rbp+0B50h+var_470+8]
  14063a9ce: sub eax, edx
  14063a9d0: sar edx, 2
  14063a9d3: add eax, r8d
  14063a9d6: add eax, edx
  14063a9d8: add eax, 0FFF506C5h
  14063a9dd: cdqe
  14063a9df: imul rax, 15180h
  14063a9e6: add rax, rcx
  14063a9e9: imul rax, 3E8h
  14063a9f0: imul r9, 431BDE83h
  14063a9f7: shr r9, 32h
  14063a9fb: add r9, rax
  14063a9fe: mov [rbp+0B50h+var_9A], 1
  14063aa05: mov rcx, rbx
  14063aa08: mov rdx, r15
  14063aa0b: mov r8, r12
  14063aa0e: call sub_1404D3750
  14063aa13: nop
  14063aa14: mov qword ptr [rbp+0B50h+var_560], rax
  14063aa1b: mov rax, cs:off_141EC8D80
  14063aa22: mov rax, [rax]
  14063aa25: cmp rax, 2
  14063aa29: jb loc_14063AB61
  14063aa2f: mov rdx, [rbp+0B50h+var_80]
  14063aa36: mov rax, [rdx+1A0h]
  14063aa3d: lea rcx, [rdx+180h]
  14063aa44: add rdx, 1A8h
  14063aa4b: mov [rbp+0B50h+var_AA8], rax
  14063aa52: lea rax, sub_1400015F0
  14063aa59: mov [rbp+0B50h+var_AA0], rax
  14063aa60: mov [rbp+0B50h+var_A98], rdx
  14063aa67: lea rdx, sub_1414AC520
  14063aa6e: mov [rbp+0B50h+var_A90], rdx
  14063aa75: mov [rbp+0B50h+var_A88], rcx
  14063aa7c: mov [rbp+0B50h+var_A80], rdx
  14063aa83: lea rcx, [rbp+0B50h+var_560]
  14063aa8a: mov [rbp+0B50h+var_A78], rcx
  14063aa91: lea rcx, sub_1414AC5F0
  14063aa98: mov [rbp+0B50h+var_A70], rcx
  14063aa9f: lea rcx, [rbp+0B50h+var_7D0]
  14063aaa6: mov [rbp+0B50h+var_A68], rcx
  14063aaad: mov [rbp+0B50h+var_A60], rax
  14063aab4: mov qword ptr [rbp+0B50h+var_470], 0
  14063aabf: lea rax, aCodexmateLibCo_26; "codexmate_lib::core::relay::proxy_serve"...
  14063aac6: mov qword ptr [rbp+0B50h+var_470+8], rax
  14063aacd: mov qword ptr [rbp+0B50h+var_460], 28h ; '('
  14063aad8: mov qword ptr [rbp+0B50h+var_460+8], 0
  14063aae3: lea rcx, aSrcCoreRelayPr; "src\\core\\relay\\proxy_server.rs"
  14063aaea: mov qword ptr [rbp+0B50h+var_450], rcx
  14063aaf1: mov qword ptr [rbp+0B50h+var_450+8], 1Eh
  14063aafc: mov qword ptr [rbp+0B50h+var_440], 2
  14063ab07: mov qword ptr [rbp+0B50h+var_440+8], rax
  14063ab0e: mov qword ptr [rbp+0B50h+var_430], 28h ; '('
  14063ab19: mov rax, 63500000001h
  14063ab23: mov qword ptr [rbp+0B50h+var_430+8], rax
  14063ab2a: lea rax, unk_141768508
  14063ab31: mov qword ptr [rbp+0B50h+var_420], rax
  14063ab38: lea rax, [rbp+0B50h+var_AA8]
  14063ab3f: mov qword ptr [rbp+0B50h+var_420+8], rax
  14063ab46: mov [rbp+0B50h+var_9A], 1
  14063ab4d: lea rcx, [rbp+0B50h+var_A9]
  14063ab54: lea rdx, [rbp+0B50h+var_470]
  14063ab5b: call sub_1412C36A0
  14063ab60: nop
loc_14063AB61:
  14063ab61: mov rax, [rbp+0B50h+var_80]
  14063ab68: mov rcx, [rax+80h]
  14063ab6f: mov rax, [rax+1A0h]
  14063ab76: mov rdx, [rax+8]
  14063ab7a: mov r8, [rax+10h]
  14063ab7e: mov r9, qword ptr [rbp+0B50h+var_7D0+8]
  14063ab85: mov rax, qword ptr [rbp+0B50h+var_7C0]
  14063ab8c: mov [rbp+0B50h+var_9A], 1
  14063ab93: mov [rsp+0BD0h+var_BB0], rax
  14063ab98: call sub_14066A050
  14063ab9d: nop
  14063ab9e: mov rax, [rbp+0B50h+var_80]
  14063aba5: lea rcx, [rax+100h]
  14063abac: mov [rbp+0B50h+var_98], rcx
  14063abb3: cmp dword ptr [rax+100h], 0FFFFFFFFh
  14063abba: jz short loc_14063ABC9
loc_14063ABBC:
  14063abbc: mov rcx, [rbp+0B50h+var_98]
  14063abc3: call sub_1405AE950
  14063abc8: nop
loc_14063ABC9:
  14063abc9: movaps xmm0, [rbp+0B50h+var_2A0]
  14063abd0: mov rax, [rbp+0B50h+var_98]
  14063abd7: movups xmmword ptr [rax+70h], xmm0
  14063abdb: movaps xmm0, [rbp+0B50h+var_2B0]
  14063abe2: movups xmmword ptr [rax+60h], xmm0
  14063abe6: movaps xmm0, [rbp+0B50h+var_2C0]
  14063abed: movups xmmword ptr [rax+50h], xmm0
  14063abf1: movaps xmm0, [rbp+0B50h+var_2D0]
  14063abf8: movups xmmword ptr [rax+40h], xmm0
  14063abfc: movdqa xmm0, [rbp+0B50h+var_310]
  14063ac04: movaps xmm1, [rbp+0B50h+var_300]
  14063ac0b: movaps xmm2, [rbp+0B50h+var_2F0]
  14063ac12: movaps xmm3, [rbp+0B50h+var_2E0]
  14063ac19: movups xmmword ptr [rax+30h], xmm3
  14063ac1d: movups xmmword ptr [rax+20h], xmm2
  14063ac21: movups xmmword ptr [rax+10h], xmm1
  14063ac25: movdqu xmmword ptr [rax], xmm0
  14063ac29: mov rdx, qword ptr [rbp+0B50h+var_7D0]
  14063ac30: test rdx, rdx
  14063ac33: jz short loc_14063AC47
  14063ac35: mov rcx, qword ptr [rbp+0B50h+var_7D0+8]
  14063ac3c: mov r8d, 1
  14063ac42: call sub_140001660
loc_14063AC47:
  14063ac47: mov r10, [rbp+0B50h+var_80]
  14063ac4e: mov rax, [r10+188h]
  14063ac55: mov rcx, [r10+190h]
  14063ac5c: jmp loc_14063785C
loc_14063AC61:
  14063ac61: lea rax, [rdi+1B8h]
  14063ac68: test rcx, rcx
  14063ac6b: jnz loc_14063AD5D
  14063ac71: movups xmm0, xmmword ptr [rax+70h]
  14063ac75: movaps [rbp+0B50h+var_2A0], xmm0
  14063ac7c: movups xmm0, xmmword ptr [rax+60h]
  14063ac80: movaps [rbp+0B50h+var_2B0], xmm0
  14063ac87: movups xmm0, xmmword ptr [rax+50h]
  14063ac8b: movaps [rbp+0B50h+var_2C0], xmm0
  14063ac92: movups xmm0, xmmword ptr [rax+40h]
  14063ac96: movaps [rbp+0B50h+var_2D0], xmm0
  14063ac9d: movups xmm0, xmmword ptr [rax]
  14063aca0: movups xmm1, xmmword ptr [rax+10h]
  14063aca4: movups xmm2, xmmword ptr [rax+20h]
  14063aca8: movups xmm3, xmmword ptr [rax+30h]
  14063acac: movaps [rbp+0B50h+var_2E0], xmm3
  14063acb3: movaps [rbp+0B50h+var_2F0], xmm2
  14063acba: movaps [rbp+0B50h+var_300], xmm1
  14063acc1: movaps [rbp+0B50h+var_310], xmm0
  14063acc8: mov rcx, [rdi+80h]
  14063accf: mov rax, [rdi+1A0h]
  14063acd6: mov rdx, [rax+8]
  14063acda: mov r8, [rax+10h]
  14063acde: add rcx, 8
loc_14063ACE2:
  14063ace2: call sub_1404D3BF0
  14063ace7: nop
  14063ace8: movaps xmm0, [rbp+0B50h+var_2A0]
  14063acef: movaps [rbp+0B50h+var_7E0], xmm0
  14063acf6: movaps xmm0, [rbp+0B50h+var_2B0]
  14063acfd: movaps [rbp+0B50h+var_7F0], xmm0
  14063ad04: movaps xmm0, [rbp+0B50h+var_2C0]
  14063ad0b: movaps [rbp+0B50h+var_800], xmm0
  14063ad12: movaps xmm0, [rbp+0B50h+var_2D0]
  14063ad19: movaps [rbp+0B50h+var_810], xmm0
  14063ad20: movaps xmm0, [rbp+0B50h+var_310]
  14063ad27: movaps xmm1, [rbp+0B50h+var_300]
  14063ad2e: movaps xmm2, [rbp+0B50h+var_2F0]
  14063ad35: movaps xmm3, [rbp+0B50h+var_2E0]
  14063ad3c: movaps [rbp+0B50h+var_820], xmm3
  14063ad43: movaps [rbp+0B50h+var_830], xmm2
  14063ad4a: movaps [rbp+0B50h+var_840], xmm1
  14063ad51: movaps [rbp+0B50h+var_850], xmm0
  14063ad58: jmp loc_14063AE4E
loc_14063AD5D:
  14063ad5d: movups xmm0, xmmword ptr [rax]
  14063ad60: movups xmm1, xmmword ptr [rax+10h]
  14063ad64: movups xmm2, xmmword ptr [rax+20h]
  14063ad68: movups xmm3, xmmword ptr [rax+30h]
  14063ad6c: movups xmm4, xmmword ptr [rax+40h]
  14063ad70: movups xmm5, xmmword ptr [rax+50h]
  14063ad74: movups xmm6, xmmword ptr [rax+60h]
  14063ad78: movups xmm7, xmmword ptr [rax+70h]
  14063ad7c: movups xmmword ptr [rbx+70h], xmm7
  14063ad80: movups xmmword ptr [rbx+60h], xmm6
  14063ad84: movups xmmword ptr [rbx+50h], xmm5
  14063ad88: movups xmmword ptr [rbx+40h], xmm4
  14063ad8c: movups xmmword ptr [rbx+30h], xmm3
  14063ad90: movups xmmword ptr [rbx+20h], xmm2
  14063ad94: movups xmmword ptr [rbx+10h], xmm1
  14063ad98: movups xmmword ptr [rbx], xmm0
  14063ad9b: mov byte ptr [rdi+420h], 0
loc_14063ADA2:
  14063ada2: lea rdx, [rdi+250h]; jumptable 0000000140637349 case 4
loc_14063ADA9:
  14063ada9: lea rcx, [rbp+0B50h+var_310]
  14063adb0: mov [rbp+0B50h+var_98], rdx
  14063adb7: mov r8, [rbp+0B50h+var_B8]
  14063adbe: call sub_140634EA0
  14063adc3: nop
  14063adc4: cmp dword ptr [rbp+0B50h+var_310], 0FFFFFFFFh
  14063adcb: jz loc_14063AF40
  14063add1: movups xmm0, [rbp+0B50h+var_2A0]
  14063add8: movaps [rbp+0B50h+var_7E0], xmm0
  14063addf: movups xmm0, [rbp+0B50h+var_2B0]
  14063ade6: movaps [rbp+0B50h+var_7F0], xmm0
  14063aded: movups xmm0, [rbp+0B50h+var_2C0]
  14063adf4: movaps [rbp+0B50h+var_800], xmm0
  14063adfb: movups xmm0, [rbp+0B50h+var_2D0]
  14063ae02: movaps [rbp+0B50h+var_810], xmm0
  14063ae09: movups xmm0, [rbp+0B50h+var_310]
  14063ae10: movups xmm1, [rbp+0B50h+var_300]
  14063ae17: movups xmm2, [rbp+0B50h+var_2F0]
  14063ae1e: movups xmm3, [rbp+0B50h+var_2E0]
  14063ae25: movaps [rbp+0B50h+var_820], xmm3
  14063ae2c: movaps [rbp+0B50h+var_830], xmm2
  14063ae33: movaps [rbp+0B50h+var_840], xmm1
  14063ae3a: movaps [rbp+0B50h+var_850], xmm0
loc_14063AE41:
  14063ae41: mov rcx, [rbp+0B50h+var_98]
  14063ae48: call sub_1405DCF80
  14063ae4d: nop
loc_14063AE4E:
  14063ae4e: mov rax, [rbp+0B50h+var_80]
  14063ae55: cmp dword ptr [rax+100h], 0FFFFFFFFh
  14063ae5c: jz short loc_14063AE72
loc_14063AE5E:
  14063ae5e: mov rax, [rbp+0B50h+var_80]
  14063ae65: lea rcx, [rax+100h]
  14063ae6c: call sub_1405AE950
  14063ae71: nop
loc_14063AE72:
  14063ae72: mov rax, [rbp+0B50h+var_80]
  14063ae79: lea rcx, [rax+0E0h]
loc_14063AE80:
  14063ae80: call sub_1400104F0
  14063ae85: nop
loc_14063AE86:
  14063ae86: mov rsi, [rbp+0B50h+var_80]
  14063ae8d: mov rdx, [rsi+0B8h]
  14063ae94: cmp rdx, 0FFFFFFFFFFFFFFFFh
  14063ae98: jz short loc_14063AEB1
  14063ae9a: test rdx, rdx
  14063ae9d: jz short loc_14063AEB1
  14063ae9f: mov rcx, [rsi+0C0h]
  14063aea6: mov r8d, 1
  14063aeac: call sub_140001660
loc_14063AEB1:
  14063aeb1: cmp byte ptr [rsi+249h], 0
  14063aeb8: jz short loc_14063AEC7
loc_14063AEBA:
  14063aeba: lea rcx, [rbp+0B50h+var_870]
  14063aec1: call sub_1400104F0
  14063aec6: nop
loc_14063AEC7:
  14063aec7: mov rax, [rbp+0B50h+var_80]
  14063aece: mov byte ptr [rax+249h], 0
  14063aed5: lea rcx, [rax+90h]
  14063aedc: mov [rbp+0B50h+var_B8], rcx
  14063aee3: mov rcx, [rax+90h]
  14063aeea: mov rax, [rax+98h]
  14063aef1: mov [rbp+0B50h+var_90], rax
  14063aef8: mov [rbp+0B50h+var_98], 0
  14063af03: mov [rbp+0B50h+var_A8], rcx
  14063af0a: nop word ptr [rax+rax+00h]
loc_14063AF10:
  14063af10: mov rax, [rbp+0B50h+var_98]
  14063af17: cmp [rbp+0B50h+var_90], rax
  14063af1e: jz loc_14063B63C
  14063af24: inc rax
  14063af27: mov [rbp+0B50h+var_98], rax
  14063af2e: lea rsi, [rcx+0E8h]
loc_14063AF35:
  14063af35: call sub_140018960
  14063af3a: nop
  14063af3b: mov rcx, rsi
  14063af3e: jmp short loc_14063AF10
loc_14063AF40:
  14063af40: mov rax, [rbp+0B50h+var_330]
  14063af47: mov qword ptr [rax], 0FFFFFFFFFFFFFFFFh
  14063af4e: mov al, 4
  14063af50: jmp loc_14063B6DF
loc_14063AF55:
  14063af55: mov rax, qword ptr [rbp+0B50h+var_2A0]
  14063af5c: mov [rbp+0B50h+var_4F0], rax
  14063af63: movups xmm0, [rbp+0B50h+var_2B0]
  14063af6a: movaps [rbp+0B50h+var_500], xmm0
  14063af71: movups xmm0, [rbp+0B50h+var_2C0]
  14063af78: movaps [rbp+0B50h+var_510], xmm0
  14063af7f: movups xmm0, [rbp+0B50h+var_2D0]
  14063af86: movaps [rbp+0B50h+var_520], xmm0
  14063af8d: movdqu xmm0, [rbp+0B50h+var_310]
  14063af95: movups xmm1, [rbp+0B50h+var_300]
  14063af9c: movups xmm2, [rbp+0B50h+var_2F0]
  14063afa3: movups xmm3, [rbp+0B50h+var_2E0]
  14063afaa: movaps [rbp+0B50h+var_530], xmm3
  14063afb1: movaps [rbp+0B50h+var_540], xmm2
  14063afb8: movaps [rbp+0B50h+var_550], xmm1
  14063afbf: movdqa [rbp+0B50h+var_560], xmm0
  14063afc7: mov rsi, qword ptr [rbp+0B50h+var_2A0+8]
  14063afce: mov r14d, 5
  14063afd4: test r15, r15
  14063afd7: mov rdi, [rbp+0B50h+var_98]
  14063afde: jz short loc_14063AFEE
  14063afe0: mov r8d, 1
  14063afe6: mov rdx, r15
  14063afe9: call sub_140001660
loc_14063AFEE:
  14063afee: mov r15, rsi
  14063aff1: mov r13, [rbp+0B50h+var_110]
  14063aff8: mov rax, [rbp+0B50h+var_128]
  14063afff: mov [rbp+0B50h+var_D8], rax
  14063b006: mov rdx, [rbp+0B50h+var_5F8]
  14063b00d: test rdx, rdx
  14063b010: jnz loc_14063A538
  14063b016: jmp loc_14063A54A
loc_14063B01B:
  14063b01b: mov [rbp+0B50h+var_A8], rax
  14063b022: mov rcx, rax
  14063b025: call sub_140B22C80
  14063b02a: nop
  14063b02b: mov edx, 50h ; 'P'
  14063b030: mov r8d, 8
  14063b036: mov rcx, [rbp+0B50h+var_A8]
  14063b03d: call sub_140001660
  14063b042: mov [rbp+0B50h+var_81], 0
loc_14063B049:
  14063b049: lea rax, aProxyUpstream; "proxy.upstream"
  14063b050: mov [rsp+0BD0h+var_BB0], rax
  14063b055: mov qword ptr [rsp+0BD0h+var_BA8], 0Eh
  14063b05e: lea r8, aBuildStreaming; "build streaming body failed"
  14063b065: lea rcx, [rbp+0B50h+var_310]
  14063b06c: mov r9d, 1Bh
  14063b072: mov dx, 1F4h
  14063b076: call sub_14066B160
  14063b07b: nop
  14063b07c: mov r15, qword ptr [rbp+0B50h+var_2A0+8]
  14063b083: mov rdi, [rbp+0B50h+var_98]
loc_14063B08A:
  14063b08a: mov rax, qword ptr [rbp+0B50h+var_2A0]
  14063b091: mov [rbp+0B50h+var_4F0], rax
  14063b098: mov rax, qword ptr [rbp+0B50h+var_2B0]
  14063b09f: mov qword ptr [rbp+0B50h+var_500], rax
  14063b0a6: mov rax, qword ptr [rbp+0B50h+var_2B0+8]
  14063b0ad: mov qword ptr [rbp+0B50h+var_500+8], rax
  14063b0b4: movups xmm0, [rbp+0B50h+var_2C0]
  14063b0bb: movaps [rbp+0B50h+var_510], xmm0
  14063b0c2: movups xmm0, [rbp+0B50h+var_2D0]
  14063b0c9: movaps [rbp+0B50h+var_520], xmm0
  14063b0d0: mov rax, qword ptr [rbp+0B50h+var_310]
  14063b0d7: movzx ecx, word ptr [rbp+0B50h+var_310+8]
  14063b0de: mov edx, dword ptr [rbp+0B50h+var_310+0Ah]
  14063b0e4: movzx r8d, word ptr [rbp+0B50h+var_310+0Eh]
  14063b0ec: movdqu xmm0, [rbp+0B50h+var_300]
  14063b0f4: movups xmm1, [rbp+0B50h+var_2F0]
  14063b0fb: movups xmm2, [rbp+0B50h+var_2E0]
  14063b102: movaps [rbp+0B50h+var_530], xmm2
  14063b109: movaps [rbp+0B50h+var_540], xmm1
  14063b110: movdqa [rbp+0B50h+var_550], xmm0
  14063b118: mov qword ptr [rbp+0B50h+var_560], rax
  14063b11f: mov word ptr [rbp+0B50h+var_560+8], cx
  14063b126: mov dword ptr [rbp+0B50h+var_560+0Ah], edx
  14063b12c: mov word ptr [rbp+0B50h+var_560+0Eh], r8w
  14063b134: mov [rbp+0B50h+var_130], rdi
  14063b13b: mov rax, [rbp+0B50h+var_90]
  14063b142: mov [rbp+0B50h+var_138], rax
loc_14063B149:
  14063b149: mov rcx, r12
  14063b14c: call sub_140017140
  14063b151: nop
  14063b152: mov rax, [rbp+0B50h+var_80]
  14063b159: mov byte ptr [rax+568h], 0
  14063b160: mov rax, [rax+548h]
  14063b167: lock dec qword ptr [rax]
  14063b16b: jnz short loc_14063B196
  14063b16d: mov rax, [rbp+0B50h+var_80]
  14063b174: lea rcx, [rax+548h]
  14063b17b: mov [rbp+0B50h+var_118], rdi
  14063b182: mov rax, [rbp+0B50h+var_90]
  14063b189: mov [rbp+0B50h+var_120], rax
loc_14063B190:
  14063b190: call sub_141018B80
  14063b195: nop
loc_14063B196:
  14063b196: mov rax, [rbp+0B50h+var_80]
  14063b19d: mov byte ptr [rax+569h], 0
  14063b1a4: lea rcx, [rax+4A0h]
  14063b1ab: mov [rbp+0B50h+var_4C8], rdi
  14063b1b2: mov rbx, [rbp+0B50h+var_90]
  14063b1b9: mov [rbp+0B50h+var_4D0], rbx
loc_14063B1C0:
  14063b1c0: call sub_1400104F0
  14063b1c5: nop
  14063b1c6: mov rsi, [rbp+0B50h+var_80]
  14063b1cd: mov rdx, [rsi+530h]
  14063b1d4: test rdx, rdx
  14063b1d7: jz short loc_14063B1EB
  14063b1d9: mov rcx, [rsi+538h]
  14063b1e0: mov r8d, 1
  14063b1e6: call sub_140001660
loc_14063B1EB:
  14063b1eb: mov byte ptr [rsi+56Ah], 0
  14063b1f2: mov rax, [rbp+0B50h+var_4F0]
  14063b1f9: mov [rbp+0B50h+var_900], rax
  14063b200: movaps xmm0, [rbp+0B50h+var_500]
  14063b207: movaps [rbp+0B50h+var_910], xmm0
  14063b20e: movaps xmm0, [rbp+0B50h+var_510]
  14063b215: movaps [rbp+0B50h+var_920], xmm0
  14063b21c: movaps xmm0, [rbp+0B50h+var_520]
  14063b223: movaps [rbp+0B50h+var_930], xmm0
  14063b22a: movdqa xmm0, [rbp+0B50h+var_560]
  14063b232: movaps xmm1, [rbp+0B50h+var_550]
  14063b239: movaps xmm2, [rbp+0B50h+var_540]
  14063b240: movaps xmm3, [rbp+0B50h+var_530]
  14063b247: movaps [rbp+0B50h+var_940], xmm3
  14063b24e: movaps [rbp+0B50h+var_950], xmm2
  14063b255: movaps [rbp+0B50h+var_960], xmm1
  14063b25c: movdqa [rbp+0B50h+var_970], xmm0
  14063b264: mov byte ptr [rsi+56Bh], 1
  14063b26b: mov r14d, 3
  14063b271: jmp loc_14063A68B
loc_14063B276:
  14063b276: lea rcx, [rbp+0B50h+var_490+8]; jumptable 00000001406378BA case 4
  14063b27d: mov rdx, [r10+0F0h]
  14063b284: mov r8, [r10+0F8h]
loc_14063B28B:
  14063b28b: call sub_1402CE260
  14063b290: nop
  14063b291: mov byte ptr [rbp+0B50h+var_490], 4
  14063b298: jmp loc_1406378F1
loc_14063B29D:
  14063b29d: mov byte ptr [rbp+0B50h+var_490], 0; jumptable 00000001406378BA case 0
  14063b2a4: jmp loc_1406378F1
loc_14063B2A9:
  14063b2a9: lea rdx, [r10+0E8h]; jumptable 00000001406378BA case 3
  14063b2b0: lea rcx, [rbp+0B50h+var_490+8]
  14063b2b7: call sub_14149C500
  14063b2bc: nop
  14063b2bd: mov byte ptr [rbp+0B50h+var_490], 3
  14063b2c4: jmp loc_1406378F1
loc_14063B2C9:
  14063b2c9: cmp qword ptr [r10+0F8h], 0; jumptable 00000001406378BA case 5
  14063b2d1: jz loc_14063B3E9
  14063b2d7: mov rdx, [r10+0E8h]
  14063b2de: test rdx, rdx
  14063b2e1: jz loc_14063B83F
  14063b2e7: lea rcx, [rbp+0B50h+var_490+8]
  14063b2ee: mov r8, [r10+0F0h]
  14063b2f5: call sub_1402CCD80
  14063b2fa: nop
  14063b2fb: mov byte ptr [rbp+0B50h+var_490], 5
  14063b302: jmp loc_1406378F1
loc_14063B307:
  14063b307: mov rax, [r10+100h]
  14063b30e: cmp rax, 0FFFFFFFFFFFFFFFFh
  14063b312: jz loc_14063B40B
  14063b318: mov qword ptr [rbp+0B50h+var_470], rax
  14063b31f: movups xmm0, xmmword ptr [r10+108h]
  14063b327: movups xmm1, xmmword ptr [r10+118h]
  14063b32f: movups xmm2, xmmword ptr [r10+128h]
  14063b337: movups xmm3, xmmword ptr [r10+138h]
  14063b33f: movups [rbp+0B50h+var_470+8], xmm0
  14063b346: movups [rbp+0B50h+var_460+8], xmm1
  14063b34d: movups [rbp+0B50h+var_450+8], xmm2
  14063b354: movups [rbp+0B50h+var_440+8], xmm3
  14063b35b: movups xmm0, xmmword ptr [r10+148h]
  14063b363: movups [rbp+0B50h+var_430+8], xmm0
  14063b36a: movups xmm0, xmmword ptr [r10+158h]
  14063b372: movups [rbp+0B50h+var_420+8], xmm0
  14063b379: movdqu xmm0, xmmword ptr [r10+168h]
  14063b382: movdqu xmmword ptr [rbp+0B50h+var_408], xmm0
  14063b38a: mov rax, [r10+178h]
  14063b391: mov qword ptr [rbp+0B50h+var_408+10h], rax
  14063b398: jmp loc_14063B43E
loc_14063B39D:
  14063b39d: mov al, 3
  14063b39f: jmp short loc_14063B3AB
loc_14063B3A1:
  14063b3a1: mov al, 4
  14063b3a3: jmp short loc_14063B3C4
loc_14063B3A5:
  14063b3a5: mov al, 6
  14063b3a7: jmp short loc_14063B3C4
loc_14063B3A9:
  14063b3a9: mov al, 4
loc_14063B3AB:
  14063b3ab: mov [r14], al
  14063b3ae: mov rsi, [rbp+0B50h+var_80]
loc_14063B3B5:
  14063b3b5: mov al, 3
  14063b3b7: mov rcx, [rbp+0B50h+var_A8]
  14063b3be: mov [rcx], al
  14063b3c0: jmp short loc_14063B3D4
loc_14063B3C2:
  14063b3c2: mov al, 5
loc_14063B3C4:
  14063b3c4: mov rcx, [rbp+0B50h+var_A8]
  14063b3cb: mov [rcx], al
  14063b3cd: mov rsi, [rbp+0B50h+var_80]
loc_14063B3D4:
  14063b3d4: mov rax, [rbp+0B50h+var_330]
  14063b3db: mov qword ptr [rax], 0FFFFFFFFFFFFFFFFh
  14063b3e2: mov al, 3
  14063b3e4: jmp loc_14063B6E6
loc_14063B3E9:
  14063b3e9: mov qword ptr [rbp+0B50h+var_490+8], 0
  14063b3f4: mov qword ptr [rbp+0B50h+var_480+8], 0
  14063b3ff: mov byte ptr [rbp+0B50h+var_490], 5
  14063b406: jmp loc_1406378F1
loc_14063B40B:
  14063b40b: lea rax, aProxyUpstream; "proxy.upstream"
  14063b412: mov [rsp+0BD0h+var_BB0], rax
  14063b417: mov qword ptr [rsp+0BD0h+var_BA8], 0Eh
  14063b420: lea r8, aAllCodexRelayP; "all codex relay providers failed; pleas"...
  14063b427: lea rcx, [rbp+0B50h+var_470]
  14063b42e: mov r9d, 48h ; 'H'
  14063b434: mov dx, 1F6h
  14063b438: call sub_14066B160
  14063b43d: nop
loc_14063B43E:
  14063b43e: mov rax, qword ptr [rbp+0B50h+var_408+8]
  14063b445: mov qword ptr [rbp+0B50h+var_2A0], rax
  14063b44c: mov rax, qword ptr [rbp+0B50h+var_408+10h]
  14063b453: mov qword ptr [rbp+0B50h+var_2A0+8], rax
  14063b45a: movups xmm0, xmmword ptr [rbp+740h]
  14063b461: movaps [rbp+0B50h+var_2B0], xmm0
  14063b468: movups xmm0, [rbp+0B50h+var_420]
  14063b46f: movaps [rbp+0B50h+var_2C0], xmm0
  14063b476: movups xmm0, [rbp+0B50h+var_430]
  14063b47d: movaps [rbp+0B50h+var_2D0], xmm0
  14063b484: movdqu xmm0, [rbp+0B50h+var_470]
  14063b48c: movups xmm1, [rbp+0B50h+var_460]
  14063b493: movups xmm2, [rbp+0B50h+var_450]
  14063b49a: movups xmm3, [rbp+0B50h+var_440]
  14063b4a1: movaps [rbp+0B50h+var_2E0], xmm3
  14063b4a8: movaps [rbp+0B50h+var_2F0], xmm2
  14063b4af: movaps [rbp+0B50h+var_300], xmm1
  14063b4b6: movdqa [rbp+0B50h+var_310], xmm0
  14063b4be: mov rdi, [rbp+0B50h+var_80]
  14063b4c5: lea rcx, [rdi+250h]
  14063b4cc: lea rdx, [rbp+0B50h+var_310]
  14063b4d3: mov r8d, 1D0h
  14063b4d9: call sub_141684120
  14063b4de: mov byte ptr [rdi+420h], 0
loc_14063B4E5:
  14063b4e5: lea rdx, [rdi+250h]; jumptable 0000000140637349 case 5
loc_14063B4EC:
  14063b4ec: lea rcx, [rbp+0B50h+var_470]
  14063b4f3: mov [rbp+0B50h+var_98], rdx
  14063b4fa: mov r8, [rbp+0B50h+var_B8]
  14063b501: call sub_140634EA0
  14063b506: nop
  14063b507: cmp dword ptr [rbp+0B50h+var_470], 0FFFFFFFFh
  14063b50e: jz loc_14063B6CF
  14063b514: movups xmm0, xmmword ptr [rbp+0B50h+var_408+8]
  14063b51b: movaps [rbp+0B50h+var_7E0], xmm0
  14063b522: movups xmm0, xmmword ptr [rbp+740h]
  14063b529: movaps [rbp+0B50h+var_7F0], xmm0
  14063b530: movups xmm0, [rbp+0B50h+var_420]
  14063b537: movaps [rbp+0B50h+var_800], xmm0
  14063b53e: movups xmm0, [rbp+0B50h+var_430]
  14063b545: movaps [rbp+0B50h+var_810], xmm0
  14063b54c: movdqu xmm0, [rbp+0B50h+var_470]
  14063b554: movups xmm1, [rbp+0B50h+var_460]
  14063b55b: movups xmm2, [rbp+0B50h+var_450]
  14063b562: movups xmm3, [rbp+0B50h+var_440]
  14063b569: movaps [rbp+0B50h+var_820], xmm3
  14063b570: movaps [rbp+0B50h+var_830], xmm2
  14063b577: movaps [rbp+0B50h+var_840], xmm1
  14063b57e: movdqa [rbp+0B50h+var_850], xmm0
loc_14063B586:
  14063b586: mov rcx, [rbp+0B50h+var_98]
  14063b58d: call sub_1405DCF80
  14063b592: nop
  14063b593: mov rax, [rbp+0B50h+var_80]
  14063b59a: lea rcx, [rax+0E0h]
loc_14063B5A1:
  14063b5a1: call sub_1400104F0
  14063b5a6: nop
  14063b5a7: mov rsi, [rbp+0B50h+var_80]
  14063b5ae: mov rdx, [rsi+0B8h]
  14063b5b5: cmp rdx, 0FFFFFFFFFFFFFFFFh
  14063b5b9: jz short loc_14063B5D2
  14063b5bb: test rdx, rdx
  14063b5be: jz short loc_14063B5D2
  14063b5c0: mov rcx, [rsi+0C0h]
  14063b5c7: mov r8d, 1
  14063b5cd: call sub_140001660
loc_14063B5D2:
  14063b5d2: mov byte ptr [rsi+249h], 0
  14063b5d9: lea rax, [rsi+90h]
  14063b5e0: mov [rbp+0B50h+var_B8], rax
  14063b5e7: mov rcx, [rsi+90h]
  14063b5ee: mov rax, [rsi+98h]
  14063b5f5: mov [rbp+0B50h+var_90], rax
  14063b5fc: mov [rbp+0B50h+var_98], 0
  14063b607: mov [rbp+0B50h+var_A8], rcx
  14063b60e: xchg ax, ax
loc_14063B610:
  14063b610: mov rax, [rbp+0B50h+var_98]
  14063b617: cmp [rbp+0B50h+var_90], rax
  14063b61e: jz short loc_14063B63C
  14063b620: inc rax
  14063b623: mov [rbp+0B50h+var_98], rax
  14063b62a: lea rsi, [rcx+0E8h]
loc_14063B631:
  14063b631: call sub_140018960
  14063b636: nop
  14063b637: mov rcx, rsi
  14063b63a: jmp short loc_14063B610
loc_14063B63C:
  14063b63c: mov rsi, [rbp+0B50h+var_80]
  14063b643: mov rax, [rsi+88h]
  14063b64a: test rax, rax
  14063b64d: jz short loc_14063B66B
  14063b64f: mov rcx, [rbp+0B50h+var_B8]
  14063b656: mov rcx, [rcx]
  14063b659: imul rdx, rax, 0E8h
  14063b660: mov r8d, 8
  14063b666: call sub_140001660
loc_14063B66B:
  14063b66b: movaps xmm0, [rbp+0B50h+var_7E0]
  14063b672: mov rax, [rbp+0B50h+var_330]
  14063b679: movups xmmword ptr [rax+70h], xmm0
  14063b67d: movaps xmm0, [rbp+0B50h+var_7F0]
  14063b684: movups xmmword ptr [rax+60h], xmm0
  14063b688: movaps xmm0, [rbp+0B50h+var_800]
  14063b68f: movups xmmword ptr [rax+50h], xmm0
  14063b693: movaps xmm0, [rbp+0B50h+var_810]
  14063b69a: movups xmmword ptr [rax+40h], xmm0
  14063b69e: movdqa xmm0, [rbp+0B50h+var_850]
  14063b6a6: movaps xmm1, [rbp+0B50h+var_840]
  14063b6ad: movaps xmm2, [rbp+0B50h+var_830]
  14063b6b4: movaps xmm3, [rbp+0B50h+var_820]
  14063b6bb: movups xmmword ptr [rax+30h], xmm3
  14063b6bf: movups xmmword ptr [rax+20h], xmm2
  14063b6c3: movups xmmword ptr [rax+10h], xmm1
  14063b6c7: movdqu xmmword ptr [rax], xmm0
  14063b6cb: mov al, 1
  14063b6cd: jmp short loc_14063B6E6
loc_14063B6CF:
  14063b6cf: mov rax, [rbp+0B50h+var_330]
  14063b6d6: mov qword ptr [rax], 0FFFFFFFFFFFFFFFFh
  14063b6dd: mov al, 5
loc_14063B6DF:
  14063b6df: mov rsi, [rbp+0B50h+var_80]
loc_14063B6E6:
  14063b6e6: mov [rsi+248h], al
  14063b6ec: movaps xmm6, [rbp+0B50h+var_70]
  14063b6f3: movaps xmm7, [rbp+0B50h+var_60]
  14063b6fa: movaps xmm8, [rbp+0B50h+var_50]
  14063b702: add rsp, 0B98h
  14063b709: pop rbx
  14063b70a: pop rdi
  14063b70b: pop rsi
  14063b70c: pop r12
  14063b70e: pop r13
  14063b710: pop r14
  14063b712: pop r15
  14063b714: pop rbp
  14063b715: retn
loc_14063B716:
  14063b716: mov [rbp+0B50h+var_118], rdi
  14063b71d: mov rax, [rbp+0B50h+var_90]
  14063b724: mov [rbp+0B50h+var_120], rax
loc_14063B72B:
  14063b72b: mov rcx, r12; Address
  14063b72e: call sub_1416C1680
  14063b733: nop
  14063b734: jmp loc_140639031
loc_14063B739:
  14063b739: mov [rbp+0B50h+var_118], rdi
  14063b740: mov rax, [rbp+0B50h+var_90]
  14063b747: mov [rbp+0B50h+var_120], rax
  14063b74e: mov rcx, r12; Address
  14063b751: call sub_1416C1680
  14063b756: nop
  14063b757: jmp loc_1406390AB
loc_14063B75C:
  14063b75c: call sub_141486EF0
  14063b761: nop
  14063b762: mov [rbx], rax
  14063b765: mov [rbx+8], rdx
  14063b769: mov byte ptr [rbx+10h], 1
  14063b76d: jmp loc_140637FF9
loc_14063B772:
  14063b772: mov ecx, 8
  14063b777: mov edx, 50h ; 'P'
  14063b77c: call sub_1416C2D31
  14063b782: jmp loc_14063B877
loc_14063B787:
  14063b787: mov [rsp+0BD0h+var_BB0], 1
  14063b790: mov r8d, 1
  14063b796: mov r9d, 1
  14063b79c: mov rcx, [rbp+0B50h+var_90]
  14063b7a3: mov rdx, rbx
  14063b7a6: call sub_141688D30
  14063b7ab: nop
  14063b7ac: jmp loc_140637B17
loc_14063B7B1:
  14063b7b1: mov [rsp+0BD0h+var_BB0], 1
  14063b7ba: mov r9d, 1
  14063b7c0: mov rcx, [rbp+0B50h+var_90]
  14063b7c7: mov rdx, rbx
  14063b7ca: mov r8, r12
  14063b7cd: call sub_141688D30
  14063b7d2: nop
  14063b7d3: mov rdi, [rbp+0B50h+var_80]
  14063b7da: mov rbx, [rdi+478h]
  14063b7e1: jmp loc_140637B4B
loc_14063B7E6:
  14063b7e6: mov [rbp+0B50h+var_B8], rbx
  14063b7ed: mov ecx, 8
  14063b7f2: mov edx, 18h
  14063b7f7: call sub_1416C2D31
  14063b7fd: jmp short loc_14063B877
loc_14063B7FF:
  14063b7ff: mov [rbp+0B50h+var_81], 1
loc_14063B806:
  14063b806: lea rcx, off_1417B3BC8; "C:\\Users\\runneradmin\\.cargo\\registr"...
  14063b80d: call sub_1416C3040
  14063b813: jmp short loc_14063B877
loc_14063B815:
  14063b815: mov [rbp+0B50h+var_118], rdi
  14063b81c: mov rcx, [rbp+0B50h+var_90]
  14063b823: mov [rbp+0B50h+var_120], rcx
loc_14063B82A:
  14063b82a: mov rcx, r12
  14063b82d: mov rsi, rdx
  14063b830: mov edx, eax
  14063b832: call sub_1416C1970
  14063b837: mov rdx, rsi
  14063b83a: jmp loc_1406390DD
loc_14063B83F:
  14063b83f: lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
  14063b846: call sub_1416C3040
  14063b84c: jmp short loc_14063B877
loc_14063B84E:
  14063b84e: mov ecx, 1
  14063b853: mov edx, 6
  14063b858: call sub_1416C2D4B
  14063b85e: jmp short loc_14063B877
loc_14063B860:
  14063b860: mov [rbp+0B50h+var_108], rdi
loc_14063B867:
  14063b867: mov ecx, 1
  14063b86c: mov edx, 6
  14063b871: call sub_1416C2D4B
loc_14063B877:
  14063b877: ud2
loc_14063B879:
  14063b879: mov rdx, rsi
  14063b87c: mov ecx, 1
  14063b881: jmp loc_140637D95
*/
