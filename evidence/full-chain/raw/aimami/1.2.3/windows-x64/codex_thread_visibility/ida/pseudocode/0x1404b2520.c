// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1666 fetched=1666 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | router_model_restore_3 | changelog ③模型回退 (win-native 锚点逆)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::fallback_relay_model_threads | 跨平台字符串签名匹配(名↔函数一致)
__int64 *__fastcall sub_1404B2520(__int64 *a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v4; // rsi
  const char *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r14
  const char *v9; // r15
  __int64 *i; // rax
  __int64 v11; // r8
  unsigned __int128 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  bool v16; // bl
  unsigned int v17; // r14d
  char v18; // bl
  int v19; // eax
  __int64 v20; // r14
  int v21; // r12d
  char *v22; // rcx
  _QWORD *v23; // rsi
  _QWORD *v24; // r8
  unsigned __int64 v25; // rsi
  unsigned int v26; // r15d
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30... [44620 chars total]

// ---- full disassembly reconstruction (1666/1666 instructions) ----
fallback_relay_model_threads: /*1404b2520*/ push rbp
/*1404b2521*/  push r15
/*1404b2523*/  push r14
/*1404b2525*/  push r13
/*1404b2527*/  push r12
/*1404b2529*/  push rsi
/*1404b252a*/  push rdi
/*1404b252b*/  push rbx
/*1404b252c*/  sub rsp, 488h
/*1404b2533*/  lea rbp, [rsp+80h]
/*1404b253b*/  mov [rbp+440h+var_40], 0FFFFFFFFFFFFFFFEh
/*1404b2546*/  mov rsi, r9
/*1404b2549*/  mov rdi, r8
/*1404b254c*/  mov rbx, rdx
/*1404b254f*/  mov [rbp+440h+var_260], rcx
/*1404b2556*/  mov rcx, r8
/*1404b2559*/  mov rdx, r9
/*1404b255c*/  call sub_14033BC10
/*1404b2561*/  test rdx, rdx
/*1404b2564*/  mov r14d, 7
/*1404b256a*/  cmovz rsi, r14
/*1404b256e*/  lea r15, aGpt55; "gpt-5.5"
/*1404b2575*/  cmovz rdi, r15
/*1404b2579*/  mov [rbp+440h+var_280], 0
/*1404b2584*/  mov [rbp+440h+var_278], 8
/*1404b258f*/  mov [rbp+440h+var_270], 0
loc_1404B259A: /*1404b259a*/ lea rcx, [rbp+440h+var_C0]
/*1404b25a1*/  mov [rbp+440h+var_390], rbx
/*1404b25a8*/  mov rdx, rbx
/*1404b25ab*/  call sub_140712830
/*1404b25b0*/  nop
/*1404b25b1*/  mov rax, qword ptr [rbp+440h+var_C0]
/*1404b25b8*/  mov rcx, qword ptr [rbp+440h+var_C0+8]
/*1404b25bf*/  mov rdx, qword ptr [rbp+440h+var_B0]
/*1404b25c6*/  shl rdx, 5
/*1404b25ca*/  lea r8, [rcx+rdx]
/*1404b25ce*/  mov [rbp+440h+var_400], rcx
/*1404b25d2*/  mov [rbp+440h+var_348], rax
/*1404b25d9*/  mov [rbp+440h+var_3F0], rax
/*1404b25dd*/  mov [rbp+440h+var_330], r8
/*1404b25e4*/  mov [rbp+440h+var_3E8], r8
/*1404b25e8*/  test rsi, rsi
/*1404b25eb*/  mov [rbp+440h+var_388], rdi
/*1404b25f2*/  cmovnz r15, rdi
/*1404b25f6*/  mov [rbp+440h+var_320], r15
/*1404b25fd*/  mov [rbp+440h+var_318], rsi
/*1404b2604*/  cmovnz r14, rsi
/*1404b2608*/  mov [rbp+440h+var_328], r14
/*1404b260f*/  add rdx, 0FFFFFFFFFFFFFFE0h
/*1404b2613*/  mov [rbp+440h+var_C8], rdx
/*1404b261a*/  lea rax, [rcx+28h]
/*1404b261e*/  mov [rbp+440h+var_268], rax
/*1404b2625*/  mov [rbp+440h+var_358], rcx
/*1404b262c*/  mov rax, rcx
/*1404b262f*/  jmp short loc_1404B2657
loc_1404B2640: /*1404b2640*/ add [rbp+440h+var_C8], 0FFFFFFFFFFFFFFE0h
/*1404b2648*/  add [rbp+440h+var_268], 20h ; ' '
/*1404b2650*/  mov rax, [rbp+440h+var_340]
loc_1404B2657: /*1404b2657*/ cmp rax, [rbp+440h+var_330]
/*1404b265e*/  jz loc_1404B41A4
/*1404b2664*/  lea rcx, [rax+20h]
/*1404b2668*/  mov [rbp+440h+var_340], rcx
/*1404b266f*/  mov [rbp+440h+var_3F8], rcx
/*1404b2673*/  mov rcx, [rax]
/*1404b2676*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1404b267a*/  jz loc_1404B414E
loc_1404B2680: /*1404b2680*/ mov [rbp+440h+var_338], rcx
/*1404b2687*/  mov rdx, [rax+8]
/*1404b268b*/  mov r8, [rax+10h]
/*1404b268f*/  lea rcx, [rbp+440h+var_C0]
/*1404b2696*/  mov [rbp+440h+var_50], rdx
/*1404b269d*/  mov [rbp+440h+var_D0], r8
/*1404b26a4*/  call sub_141486710
/*1404b26a9*/  nop
/*1404b26aa*/  cmp dword ptr [rbp+440h+var_C0], 2
/*1404b26b1*/  jnz short loc_1404B26D0
/*1404b26b3*/  mov rax, qword ptr [rbp+440h+var_C0+8]
/*1404b26ba*/  mov qword ptr [rbp+440h+var_250+8], rax
/*1404b26c1*/  mov qword ptr [rbp+440h+var_250], 2
/*1404b26cc*/  jmp short loc_1404B2732
loc_1404B26D0: /*1404b26d0*/ movups xmm0, [rbp+440h+var_C0]
/*1404b26d7*/  movups xmm1, [rbp+440h+var_B0]
/*1404b26de*/  movups xmm2, [rbp+440h+var_A0]
/*1404b26e5*/  movups xmm3, [rbp+440h+var_90]
/*1404b26ec*/  movaps [rbp+440h+var_250], xmm0
/*1404b26f3*/  mov rax, [rbp+440h+var_70]
/*1404b26fa*/  mov [rbp+440h+var_200], rax
/*1404b2701*/  movups xmm0, [rbp+440h+var_80]
/*1404b2708*/  movaps [rbp+440h+var_210], xmm0
/*1404b270f*/  movaps [rbp+440h+var_220], xmm3
/*1404b2716*/  movaps [rbp+440h+var_230], xmm2
/*1404b271d*/  movaps [rbp+440h+var_240], xmm1
/*1404b2724*/  cmp qword ptr [rbp+440h+var_250], 2
/*1404b272c*/  jnz loc_1404B2800
loc_1404B2732: /*1404b2732*/ lea rcx, [rbp+440h+var_250+8]
/*1404b2739*/  call sub_140018650
/*1404b273e*/  nop
loc_1404B273F: /*1404b273f*/ mov esi, 8
/*1404b2744*/  xor ebx, ebx
/*1404b2746*/  xor r15d, r15d
loc_1404B2749: /*1404b2749*/ mov rax, r15
/*1404b274c*/  shl rax, 4
/*1404b2750*/  lea r14, [rax+rax*2]
/*1404b2754*/  lea rax, [rsi+r14]
/*1404b2758*/  mov qword ptr [rbp+440h+var_C0], rsi
/*1404b275f*/  mov qword ptr [rbp+440h+var_B0], rbx
/*1404b2766*/  mov qword ptr [rbp+440h+var_C0+8], rsi
/*1404b276d*/  mov qword ptr [rbp+440h+var_B0+8], rax
/*1404b2774*/  mov rax, [rbp+440h+var_280]
/*1404b277b*/  mov rdi, [rbp+440h+var_270]
/*1404b2782*/  sub rax, rdi
/*1404b2785*/  cmp r15, rax
/*1404b2788*/  ja loc_1404B3D10
/*1404b278e*/  test r15, r15
/*1404b2791*/  jz short loc_1404B27AD
loc_1404B2793: /*1404b2793*/ lea rcx, [rdi+rdi*2]
/*1404b2797*/  shl rcx, 4
/*1404b279b*/  add rcx, [rbp+440h+var_278]
/*1404b27a2*/  mov rdx, rsi
/*1404b27a5*/  mov r8, r14
/*1404b27a8*/  call sub_141684120
loc_1404B27AD: /*1404b27ad*/ add rdi, r15
/*1404b27b0*/  mov [rbp+440h+var_270], rdi
/*1404b27b7*/  test rbx, rbx
/*1404b27ba*/  jz short loc_1404B27D2
/*1404b27bc*/  shl rbx, 4
/*1404b27c0*/  lea rdx, [rbx+rbx*2]
/*1404b27c4*/  mov r8d, 8
/*1404b27ca*/  mov rcx, rsi
/*1404b27cd*/  call sub_140001660
loc_1404B27D2: /*1404b27d2*/ mov rdx, [rbp+440h+var_338]
/*1404b27d9*/  test rdx, rdx
/*1404b27dc*/  jz loc_1404B2640
/*1404b27e2*/  mov r8d, 1
/*1404b27e8*/  mov rcx, [rbp+440h+var_50]
/*1404b27ef*/  call sub_140001660
/*1404b27f4*/  jmp loc_1404B2640
loc_1404B2800: /*1404b2800*/ mov [rbp+440h+var_360], 4
/*1404b280b*/  xor eax, eax
/*1404b280d*/  cmp rax, 4
/*1404b2811*/  jnb loc_1404B4726
/*1404b2817*/  nop word ptr [rax+rax+00000000h]
loc_1404B2820: /*1404b2820*/ mov [rbp+440h+var_3A0], rax
/*1404b2827*/  inc rax
/*1404b282a*/  mov [rbp+440h+var_398], rax
/*1404b2831*/  mov [rbp+440h+var_3A8], rax
loc_1404B2838: /*1404b2838*/ lea rcx, [rbp+440h+var_C0]
/*1404b283f*/  mov rdx, [rbp+440h+var_50]
/*1404b2846*/  mov r8, [rbp+440h+var_D0]
/*1404b284d*/  call open_codex_db_for_convergence
/*1404b2852*/  nop
/*1404b2853*/  movzx eax, [rbp+440h+var_58]
/*1404b285a*/  mov r13, qword ptr [rbp+440h+var_C0]
/*1404b2861*/  mov rdi, qword ptr [rbp+440h+var_C0+8]
/*1404b2868*/  mov rsi, qword ptr [rbp+440h+var_B0]
/*1404b286f*/  mov r15, qword ptr [rbp+440h+var_B0+8]
/*1404b2876*/  lea r9, [rbp+440h+var_A0]
/*1404b287d*/  movups xmm0, xmmword ptr [r9]
/*1404b2881*/  movups xmm1, xmmword ptr [r9+10h]
/*1404b2886*/  movups xmm2, xmmword ptr [r9+20h]
/*1404b288b*/  movups xmm3, xmmword ptr [r9+30h]
/*1404b2890*/  movaps [rbp+440h+var_140], xmm0
/*1404b2897*/  movaps [rbp+440h+var_130], xmm1
/*1404b289e*/  movaps [rbp+440h+var_120], xmm2
/*1404b28a5*/  movaps [rbp+440h+var_110], xmm3
/*1404b28ac*/  cmp al, 0FFh
/*1404b28ae*/  jz loc_1404B3C88
/*1404b28b4*/  movzx ecx, [rbp+440h+var_60]
/*1404b28bb*/  mov edx, [r9+41h]
/*1404b28bf*/  mov r8d, [r9+44h]
/*1404b28c3*/  lea r10, [rbp+440h+var_1EF]
/*1404b28ca*/  mov [r10+3], r8d
/*1404b28ce*/  mov [r10], edx
/*1404b28d1*/  mov edx, [r9+49h]
/*1404b28d5*/  mov r8d, [r9+4Ch]
/*1404b28d9*/  mov [r10+0Bh], r8d
/*1404b28dd*/  mov [r10+8], edx
/*1404b28e1*/  movaps xmm0, [rbp+440h+var_140]
/*1404b28e8*/  movaps xmm1, [rbp+440h+var_130]
/*1404b28ef*/  movaps xmm2, [rbp+440h+var_120]
/*1404b28f6*/  movaps xmm3, [rbp+440h+var_110]
/*1404b28fd*/  movaps [rbp+440h+var_1E0], xmm0
/*1404b2904*/  movaps [rbp+440h+var_1D0], xmm1
/*1404b290b*/  movaps [rbp+440h+var_1C0], xmm2
/*1404b2912*/  movaps [rbp+440h+var_1B0], xmm3
/*1404b2919*/  mov qword ptr [rbp+440h+var_250], r13
/*1404b2920*/  mov qword ptr [rbp+440h+var_250+8], rdi
/*1404b2927*/  mov qword ptr [rbp+440h+var_240], rsi
/*1404b292e*/  mov qword ptr [rbp+440h+var_240+8], r15
/*1404b2935*/  movaps xmm0, [rbp+440h+var_1E0]
/*1404b293c*/  movaps xmm1, [rbp+440h+var_1D0]
/*1404b2943*/  movaps xmm2, [rbp+440h+var_1C0]
/*1404b294a*/  movaps xmm3, [rbp+440h+var_1B0]
/*1404b2951*/  movups xmmword ptr [r10-11h], xmm3
/*1404b2956*/  movups xmmword ptr [r10-21h], xmm2
/*1404b295b*/  movups xmmword ptr [r10-31h], xmm1
/*1404b2960*/  movups xmmword ptr [r10-41h], xmm0
/*1404b2965*/  mov [rbp+440h+var_1F0], cl
/*1404b296b*/  mov [rbp+440h+var_1E8], al
loc_1404B2971: /*1404b2971*/ lea rcx, [rbp+440h+var_C0]
/*1404b2978*/  lea rdx, [rbp+440h+var_250]
/*1404b297f*/  call sub_1404A3CD0
/*1404b2984*/  nop
/*1404b2985*/  mov r13, qword ptr [rbp+440h+var_C0]
/*1404b298c*/  movzx edi, byte ptr [rbp+440h+var_C0+8]
/*1404b2993*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404b2997*/  jnz loc_1404B3EAA
/*1404b299d*/  cmp dil, 1
/*1404b29a1*/  jnz loc_1404B3CD9
/*1404b29a7*/  mov r15b, byte ptr [rbp+440h+var_C0+9]
/*1404b29ae*/  mov r9d, 63h ; 'c'
/*1404b29b4*/  lea rcx, [rbp+440h+var_C0]
/*1404b29bb*/  lea rdx, [rbp+440h+var_250]
/*1404b29c2*/  lea r8, aSelectIdRollou_1; "SELECT id, rollout_path, model, model_p"...
/*1404b29c9*/  call sub_14046F850
/*1404b29ce*/  nop
/*1404b29cf*/  cmp dword ptr [rbp+440h+var_C0], 1
/*1404b29d6*/  jnz loc_1404B2AC0
/*1404b29dc*/  lea rax, [rbp+440h+var_A0]
/*1404b29e3*/  movups xmm0, xmmword ptr [rax-18h]
/*1404b29e7*/  movups xmm1, xmmword ptr [rax-8]
/*1404b29eb*/  movups xmm2, xmmword ptr [rax+8]
/*1404b29ef*/  movups xmm3, xmmword ptr [rax+18h]
/*1404b29f3*/  movaps [rbp+440h+var_110], xmm3
/*1404b29fa*/  movaps [rbp+440h+var_120], xmm2
/*1404b2a01*/  movaps [rbp+440h+var_130], xmm1
/*1404b2a08*/  movaps [rbp+440h+var_140], xmm0
/*1404b2a0f*/  lea rax, unk_141757FDF
/*1404b2a16*/  mov qword ptr [rbp+440h+var_190], rax
/*1404b2a1d*/  xor eax, eax
/*1404b2a1f*/  cmp rax, qword ptr [rbp+440h+var_140]
/*1404b2a26*/  mov qword ptr [rbp+440h+var_190+8], 1Eh
/*1404b2a31*/  seto bl
/*1404b2a34*/  movzx ecx, byte ptr [rbp+440h+var_120+4]
/*1404b2a3b*/  mov r14d, 3158h
/*1404b2a41*/  shr r14d, cl
/*1404b2a44*/  lea rax, [rbp+440h+var_190]
/*1404b2a4b*/  mov qword ptr [rbp+440h+var_2D0], rax
/*1404b2a52*/  lea rax, sub_14041F680
/*1404b2a59*/  mov qword ptr [rbp+440h+var_2D0+8], rax
/*1404b2a60*/  lea r12, [rbp+440h+var_140]
/*1404b2a67*/  mov qword ptr [rbp+440h+var_2C0], r12
/*1404b2a6e*/  lea rax, sub_140FB8910
/*1404b2a75*/  mov qword ptr [rbp+440h+var_2C0+8], rax
loc_1404B2A7C: /*1404b2a7c*/ lea rcx, [rbp+440h+var_178]
/*1404b2a83*/  lea rdx, unk_141757B59
/*1404b2a8a*/  lea r8, [rbp+440h+var_2D0]
/*1404b2a91*/  call sub_14149C0F0
/*1404b2a96*/  nop
/*1404b2a97*/  mov rdi, qword ptr [rbp+440h+var_178]
/*1404b2a9e*/  mov rsi, qword ptr [rbp+440h+var_178+8]
/*1404b2aa5*/  mov r15, [rbp+440h+var_168]
loc_1404B2AAC: /*1404b2aac*/ mov rcx, r12
/*1404b2aaf*/  call sub_14043D020
/*1404b2ab4*/  nop
loc_1404B2AB5: /*1404b2ab5*/ and bl, r14b
/*1404b2ab8*/  jmp loc_1404B2BD5
loc_1404B2AC0: /*1404b2ac0*/ movups xmm0, [rbp+440h+var_C0+8]
/*1404b2ac7*/  mov rax, qword ptr [rbp+440h+var_B0+8]
/*1404b2ace*/  lea rdx, [rbp+440h+var_A0]
/*1404b2ad5*/  mov rcx, [rdx+20h]
/*1404b2ad9*/  lea r8, [rbp+440h+var_1D0+8]
/*1404b2ae0*/  mov [r8+20h], rcx
/*1404b2ae4*/  movups xmm1, xmmword ptr [rdx]
/*1404b2ae7*/  movups xmm2, xmmword ptr [rdx+10h]
/*1404b2aeb*/  movups xmmword ptr [r8+10h], xmm2
/*1404b2af0*/  movups xmmword ptr [r8], xmm1
/*1404b2af4*/  movups [rbp+440h+var_1E0], xmm0
/*1404b2afb*/  mov qword ptr [rbp+440h+var_1D0], rax
/*1404b2b02*/  mov rcx, qword ptr [rbp+440h+var_1B0+8]
/*1404b2b09*/  call sub_1414B6B70
/*1404b2b0e*/  movsxd r8, eax
/*1404b2b11*/  test eax, eax
/*1404b2b13*/  jz loc_1404B2E86
/*1404b2b19*/  mov rax, 8000000000000013h
/*1404b2b23*/  mov qword ptr [rbp+440h+var_C0], rax
/*1404b2b2a*/  mov qword ptr [rbp+440h+var_C0+8], 0
/*1404b2b35*/  mov qword ptr [rbp+440h+var_B0], r8
/*1404b2b3c*/  lea rax, aQueryModelFall; "query model fallback threads"
/*1404b2b43*/  mov qword ptr [rbp+440h+var_178], rax
/*1404b2b4a*/  mov qword ptr [rbp+440h+var_178+8], 1Ch
/*1404b2b55*/  lea rax, [rbp+440h+var_178]
/*1404b2b5c*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b2b63*/  lea rax, sub_14041F680
/*1404b2b6a*/  mov qword ptr [rbp+440h+var_140+8], rax
/*1404b2b71*/  lea rbx, [rbp+440h+var_C0]
/*1404b2b78*/  mov qword ptr [rbp+440h+var_130], rbx
/*1404b2b7f*/  lea rax, sub_140FB8910
/*1404b2b86*/  mov qword ptr [rbp+440h+var_130+8], rax
loc_1404B2B8D: /*1404b2b8d*/ lea rcx, [rbp+440h+var_2D0]
/*1404b2b94*/  lea rdx, unk_141757B59
/*1404b2b9b*/  lea r8, [rbp+440h+var_140]
/*1404b2ba2*/  call sub_14149C0F0
/*1404b2ba7*/  nop
/*1404b2ba8*/  mov rdi, qword ptr [rbp+440h+var_2D0]
/*1404b2baf*/  mov rsi, qword ptr [rbp+440h+var_2D0+8]
/*1404b2bb6*/  mov r15, qword ptr [rbp+440h+var_2C0]
loc_1404B2BBD: /*1404b2bbd*/ mov rcx, rbx
/*1404b2bc0*/  call sub_14043D020
/*1404b2bc5*/  nop
loc_1404B2BC6: /*1404b2bc6*/ lea rcx, [rbp+440h+var_1E0]
/*1404b2bcd*/  call sub_14043D1B0
/*1404b2bd2*/  nop
/*1404b2bd3*/  xor ebx, ebx
loc_1404B2BD5: /*1404b2bd5*/ lea rcx, [rbp+440h+var_250]
/*1404b2bdc*/  call sub_14043C900
/*1404b2be1*/  nop
/*1404b2be2*/  mov r14, rdi
/*1404b2be5*/  shr r14, 10h
/*1404b2be9*/  mov r12d, edi
/*1404b2bec*/  shr r12d, 8
/*1404b2bf0*/  mov r13d, 0Ah
/*1404b2bf6*/  test bl, bl
/*1404b2bf8*/  jz loc_1404B3F14
loc_1404B2BFE: /*1404b2bfe*/ mov qword ptr [rbp+440h+var_C0], r13
/*1404b2c05*/  shl r14, 10h
/*1404b2c09*/  movzx eax, r12b
/*1404b2c0d*/  shl eax, 8
/*1404b2c10*/  or rax, r14
/*1404b2c13*/  movzx ecx, dil
/*1404b2c17*/  or rcx, rax
/*1404b2c1a*/  mov qword ptr [rbp+440h+var_C0+8], rcx
/*1404b2c21*/  mov qword ptr [rbp+440h+var_B0], rsi
/*1404b2c28*/  mov qword ptr [rbp+440h+var_B0+8], r15
/*1404b2c2f*/  movaps xmm0, [rbp+440h+var_310]
/*1404b2c36*/  movaps xmm1, [rbp+440h+var_300]
/*1404b2c3d*/  movaps xmm2, [rbp+440h+var_2F0]
/*1404b2c44*/  movaps xmm3, [rbp+440h+var_2E0]
/*1404b2c4b*/  lea rdx, [rbp+440h+var_A0]
/*1404b2c52*/  movups xmmword ptr [rdx+30h], xmm3
/*1404b2c56*/  movups xmmword ptr [rdx+20h], xmm2
/*1404b2c5a*/  movups xmmword ptr [rdx+10h], xmm1
/*1404b2c5e*/  movups xmmword ptr [rdx], xmm0
/*1404b2c61*/  mov [rbp+440h+var_60], 1
/*1404b2c68*/  mov eax, dword ptr [rbp+440h+var_D8]
/*1404b2c6e*/  mov ecx, dword ptr [rbp+440h+var_D8+3]
/*1404b2c74*/  mov [rdx+44h], ecx
/*1404b2c77*/  mov [rdx+41h], eax
/*1404b2c7a*/  mov rcx, [rbp+440h+var_3A0]
/*1404b2c81*/  cmp rcx, 3
/*1404b2c85*/  jz loc_1404B3F5A
/*1404b2c8b*/  shl rcx, 4
/*1404b2c8f*/  lea rax, unk_14175C050
/*1404b2c96*/  add rcx, rax
/*1404b2c99*/  mov rax, cs:off_141EC8D80
/*1404b2ca0*/  mov rax, [rax]
/*1404b2ca3*/  cmp rax, 1
/*1404b2ca7*/  jbe loc_1404B2E50
loc_1404B2CAD: /*1404b2cad*/ mov rsi, rcx
/*1404b2cb0*/  lea rcx, [rbp+440h+var_1E0]
/*1404b2cb7*/  mov rdx, [rbp+440h+var_50]
/*1404b2cbe*/  mov r8, [rbp+440h+var_D0]
/*1404b2cc5*/  call codex_db_log_path
/*1404b2cca*/  nop
/*1404b2ccb*/  mov r8, rsi
/*1404b2cce*/  mov rsi, [rsi]
/*1404b2cd1*/  mov rax, rsi
/*1404b2cd4*/  mov ecx, 3E8h
/*1404b2cd9*/  mul rcx
/*1404b2cdc*/  mov r15d, [r8+8]
/*1404b2ce0*/  imul rcx, r15, 431BDE83h
/*1404b2ce7*/  shr rcx, 32h
/*1404b2ceb*/  add rcx, rax
/*1404b2cee*/  adc rdx, 0
/*1404b2cf2*/  mov qword ptr [rbp+440h+var_2D0], rcx
/*1404b2cf9*/  mov qword ptr [rbp+440h+var_2D0+8], rdx
/*1404b2d00*/  lea rax, [rbp+440h+var_1E0]
/*1404b2d07*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b2d0e*/  lea rax, sub_1400015F0
/*1404b2d15*/  mov qword ptr [rbp+440h+var_140+8], rax
/*1404b2d1c*/  lea rax, [rbp+440h+var_3A8]
/*1404b2d23*/  mov qword ptr [rbp+440h+var_130], rax
/*1404b2d2a*/  lea rax, sub_1414AC520
/*1404b2d31*/  mov qword ptr [rbp+440h+var_130+8], rax
/*1404b2d38*/  lea rcx, [rbp+440h+var_360]
/*1404b2d3f*/  mov qword ptr [rbp+440h+var_120], rcx
/*1404b2d46*/  mov qword ptr [rbp+440h+var_120+8], rax
/*1404b2d4d*/  lea rax, [rbp+440h+var_C0]
/*1404b2d54*/  mov qword ptr [rbp+440h+var_110], rax
/*1404b2d5b*/  lea rax, sub_140B036A0
/*1404b2d62*/  mov qword ptr [rbp+440h+var_110+8], rax
/*1404b2d69*/  lea rax, [rbp+440h+var_2D0]
/*1404b2d70*/  mov [rbp+440h+var_100], rax
/*1404b2d77*/  lea rax, sub_1414A9600
/*1404b2d7e*/  mov [rbp+440h+var_F8], rax
/*1404b2d85*/  mov qword ptr [rbp+440h+var_250], 0
/*1404b2d90*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404b2d97*/  mov qword ptr [rbp+440h+var_250+8], rax
/*1404b2d9e*/  mov qword ptr [rbp+440h+var_240], 33h ; '3'
/*1404b2da9*/  mov qword ptr [rbp+440h+var_240+8], 0
/*1404b2db4*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404b2dbb*/  mov qword ptr [rbp+440h+var_230], rcx
/*1404b2dc2*/  mov qword ptr [rbp+440h+var_230+8], 29h ; ')'
/*1404b2dcd*/  mov qword ptr [rbp+440h+var_220], 2
/*1404b2dd8*/  mov qword ptr [rbp+440h+var_220+8], rax
/*1404b2ddf*/  mov qword ptr [rbp+440h+var_210], 33h ; '3'
/*1404b2dea*/  mov rax, 0A6700000001h
/*1404b2df4*/  mov qword ptr [rbp+440h+var_210+8], rax
/*1404b2dfb*/  lea rax, unk_14175C6BD
/*1404b2e02*/  mov [rbp+440h+var_200], rax
/*1404b2e09*/  lea rax, [rbp+440h+var_140]
/*1404b2e10*/  mov [rbp+440h+var_1F8], rax
loc_1404B2E17: /*1404b2e17*/ lea rcx, [rbp+440h+var_44]
/*1404b2e1e*/  lea rdx, [rbp+440h+var_250]
/*1404b2e25*/  call sub_1412C36A0
/*1404b2e2a*/  nop
/*1404b2e2b*/  mov rdx, qword ptr [rbp+440h+var_1E0]
/*1404b2e32*/  test rdx, rdx
/*1404b2e35*/  jz short loc_1404B2E57
/*1404b2e37*/  mov rcx, qword ptr [rbp+440h+var_1E0+8]
/*1404b2e3e*/  mov r8d, 1
/*1404b2e44*/  call sub_140001660
/*1404b2e49*/  jmp short loc_1404B2E57
loc_1404B2E50: /*1404b2e50*/ mov rsi, [rcx]
/*1404b2e53*/  mov r15d, [rcx+8]
loc_1404B2E57: /*1404b2e57*/ mov rcx, rsi
/*1404b2e5a*/  mov edx, r15d
/*1404b2e5d*/  call sub_141487490
/*1404b2e62*/  nop
loc_1404B2E63: /*1404b2e63*/ lea rcx, [rbp+440h+var_C0]
/*1404b2e6a*/  call sub_14043E650
/*1404b2e6f*/  nop
/*1404b2e70*/  mov rax, [rbp+440h+var_398]
/*1404b2e77*/  cmp rax, 4
/*1404b2e7b*/  jb loc_1404B2820
/*1404b2e81*/  jmp loc_1404B4726
loc_1404B2E86: /*1404b2e86*/ lea rcx, [rbp+440h+var_140]
/*1404b2e8d*/  lea rdx, [rbp+440h+var_1E0]
/*1404b2e94*/  call sub_1409889A0
/*1404b2e99*/  nop
/*1404b2e9a*/  cmp qword ptr [rbp+440h+var_140], 0FFFFFFFFFFFFFFFFh
/*1404b2ea2*/  jz loc_1404B2F98
/*1404b2ea8*/  movups xmm0, [rbp+440h+var_140]
/*1404b2eaf*/  movups xmm1, [rbp+440h+var_130]
/*1404b2eb6*/  movups xmm2, [rbp+440h+var_120]
/*1404b2ebd*/  movups xmm3, [rbp+440h+var_110]
/*1404b2ec4*/  movaps [rbp+440h+var_90], xmm3
/*1404b2ecb*/  movaps [rbp+440h+var_A0], xmm2
/*1404b2ed2*/  movaps [rbp+440h+var_B0], xmm1
/*1404b2ed9*/  movaps [rbp+440h+var_C0], xmm0
/*1404b2ee0*/  lea rax, unk_141758019
/*1404b2ee7*/  mov [rbp+440h+var_158], rax
/*1404b2eee*/  xor eax, eax
/*1404b2ef0*/  cmp rax, qword ptr [rbp+440h+var_C0]
/*1404b2ef7*/  mov [rbp+440h+var_150], 1Eh
/*1404b2f02*/  seto bl
/*1404b2f05*/  movzx ecx, byte ptr [rbp+440h+var_A0+4]
/*1404b2f0c*/  mov r14d, 3158h
/*1404b2f12*/  shr r14d, cl
/*1404b2f15*/  lea rax, [rbp+440h+var_158]
/*1404b2f1c*/  mov qword ptr [rbp+440h+var_2D0], rax
/*1404b2f23*/  lea rax, sub_14041F680
/*1404b2f2a*/  mov qword ptr [rbp+440h+var_2D0+8], rax
/*1404b2f31*/  lea r12, [rbp+440h+var_C0]
/*1404b2f38*/  mov qword ptr [rbp+440h+var_2C0], r12
/*1404b2f3f*/  lea rax, sub_140FB8910
/*1404b2f46*/  mov qword ptr [rbp+440h+var_2C0+8], rax
loc_1404B2F4D: /*1404b2f4d*/ lea rcx, [rbp+440h+var_190]
/*1404b2f54*/  lea rdx, unk_141757B59
/*1404b2f5b*/  lea r8, [rbp+440h+var_2D0]
/*1404b2f62*/  call sub_14149C0F0
/*1404b2f67*/  nop
/*1404b2f68*/  mov rdi, qword ptr [rbp+440h+var_190]
/*1404b2f6f*/  mov rsi, qword ptr [rbp+440h+var_190+8]
/*1404b2f76*/  mov r15, [rbp+440h+var_180]
loc_1404B2F7D: /*1404b2f7d*/ mov rcx, r12
/*1404b2f80*/  call sub_14043D020
/*1404b2f85*/  nop
loc_1404B2F86: /*1404b2f86*/ lea rcx, [rbp+440h+var_1E0]
/*1404b2f8d*/  call sub_14043D1B0
/*1404b2f92*/  nop
/*1404b2f93*/  jmp loc_1404B2AB5
loc_1404B2F98: /*1404b2f98*/ mov rax, qword ptr [rbp+440h+var_140+8]
/*1404b2f9f*/  mov rcx, qword ptr [rbp+440h+var_130]
/*1404b2fa6*/  imul rdx, qword ptr [rbp+440h+var_130+8], 78h ; 'x'
/*1404b2fae*/  add rdx, rcx
/*1404b2fb1*/  mov qword ptr [rbp+440h+var_178], rcx
/*1404b2fb8*/  mov qword ptr [rbp+440h+var_178+8], rcx
/*1404b2fbf*/  mov [rbp+440h+var_168], rax
/*1404b2fc6*/  mov [rbp+440h+var_160], rdx
loc_1404B2FCD: /*1404b2fcd*/ lea rcx, [rbp+440h+var_380]
/*1404b2fd4*/  lea rdx, [rbp+440h+var_178]
/*1404b2fdb*/  call sub_1402CA740
/*1404b2fe0*/  nop
loc_1404B2FE1: /*1404b2fe1*/ lea rcx, [rbp+440h+var_1E0]
/*1404b2fe8*/  call sub_14043D1B0
/*1404b2fed*/  nop
/*1404b2fee*/  mov r14, [rbp+440h+var_370]
/*1404b2ff5*/  test r14, r14
/*1404b2ff8*/  mov [rbp+440h+var_350], r14
/*1404b2fff*/  jz loc_1404B30F3
/*1404b3005*/  mov rax, [rbp+440h+var_320]
/*1404b300c*/  mov [rbp+440h+var_3C8], rax
/*1404b3010*/  mov rax, [rbp+440h+var_328]
/*1404b3017*/  mov [rbp+440h+var_3C0], rax
/*1404b301e*/  movzx eax, [rbp+440h+var_1E8]
/*1404b3025*/  shl eax, 3
/*1404b3028*/  lea rcx, off_14175ED60
/*1404b302f*/  mov r8, [rax+rcx]
/*1404b3033*/  lea rcx, qword_14175ED78
/*1404b303a*/  mov r9, [rax+rcx]
/*1404b303e*/  mov [rbp+440h+var_43], 1
loc_1404B3045: /*1404b3045*/ lea rcx, [rbp+440h+var_140]
/*1404b304c*/  lea rdx, [rbp+440h+var_250]
/*1404b3053*/  call sub_140FB96B0
/*1404b3058*/  nop
/*1404b3059*/  mov rax, qword ptr [rbp+440h+var_140]
/*1404b3060*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404b3064*/  jz loc_1404B3197
/*1404b306a*/  mov rcx, qword ptr [rbp+440h+var_140+8]
/*1404b3071*/  movzx edx, byte ptr [rbp+440h+var_130]
/*1404b3078*/  lea r8, [rbp+440h+var_130+1]
/*1404b307f*/  movups xmm0, xmmword ptr [r8]
/*1404b3083*/  movups xmm1, xmmword ptr [r8+10h]
/*1404b3088*/  movups xmm2, xmmword ptr [r8+1Fh]
/*1404b308d*/  lea r8, [rbp+440h+var_A0]
/*1404b3094*/  movups xmmword ptr [r8+10h], xmm2
/*1404b3099*/  movups xmmword ptr [r8+1], xmm1
/*1404b309e*/  movups xmmword ptr [r8-0Fh], xmm0
/*1404b30a3*/  mov qword ptr [rbp+440h+var_C0], rax
/*1404b30aa*/  mov qword ptr [rbp+440h+var_C0+8], rcx
/*1404b30b1*/  mov byte ptr [rbp+440h+var_B0], dl
/*1404b30b7*/  lea rcx, aBeginModelFall; "begin model fallback transaction"
/*1404b30be*/  mov qword ptr [rbp+440h+var_2D0], rcx
/*1404b30c5*/  mov qword ptr [rbp+440h+var_2D0+8], 20h ; ' '
/*1404b30d0*/  neg rax
/*1404b30d3*/  jno short loc_1404B3111
/*1404b30d5*/  movzx eax, byte ptr [rbp+440h+var_A0+4]
/*1404b30dc*/  add al, 0FDh
/*1404b30de*/  cmp al, 0Ah
/*1404b30e0*/  ja short loc_1404B3111
/*1404b30e2*/  movzx eax, al
/*1404b30e5*/  lea rcx, byte_14175ED50
/*1404b30ec*/  movzx r12d, byte ptr [rax+rcx]
/*1404b30f1*/  jmp short loc_1404B3114
loc_1404B30F3: /*1404b30f3*/ mov r13, 0FFFFFFFFFFFFFFFFh
/*1404b30fa*/  mov bl, 1
/*1404b30fc*/  mov esi, 8
/*1404b3101*/  xor r14d, r14d
/*1404b3104*/  xor r12d, r12d
/*1404b3107*/  xor edi, edi
/*1404b3109*/  xor r15d, r15d
/*1404b310c*/  jmp loc_1404B3C29
loc_1404B3111: /*1404b3111*/ xor r12d, r12d
loc_1404B3114: /*1404b3114*/ lea rax, [rbp+440h+var_2D0]
/*1404b311b*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b3122*/  lea rax, sub_14041F680
/*1404b3129*/  mov qword ptr [rbp+440h+var_140+8], rax
/*1404b3130*/  lea rbx, [rbp+440h+var_C0]
/*1404b3137*/  mov qword ptr [rbp+440h+var_130], rbx
/*1404b313e*/  lea rax, sub_140FB8910
/*1404b3145*/  mov qword ptr [rbp+440h+var_130+8], rax
loc_1404B314C: /*1404b314c*/ lea rcx, [rbp+440h+var_1E0]
/*1404b3153*/  lea rdx, unk_141757B59
/*1404b315a*/  lea r8, [rbp+440h+var_140]
/*1404b3161*/  call sub_14149C0F0
/*1404b3166*/  nop
/*1404b3167*/  mov rdi, qword ptr [rbp+440h+var_1E0]
/*1404b316e*/  mov rsi, qword ptr [rbp+440h+var_1E0+8]
/*1404b3175*/  mov r15, qword ptr [rbp+440h+var_1D0]
/*1404b317c*/  mov [rbp+440h+var_43], 1
loc_1404B3183: /*1404b3183*/ mov rcx, rbx
/*1404b3186*/  call sub_14043D020
/*1404b318b*/  nop
/*1404b318c*/  mov r13d, 0Ah
/*1404b3192*/  jmp loc_1404B3C18
loc_1404B3197: /*1404b3197*/ mov [rbp+440h+var_368], 0
/*1404b31a2*/  mov [rbp+440h+var_158], 0
/*1404b31ad*/  mov [rbp+440h+var_150], 8
/*1404b31b8*/  mov [rbp+440h+var_148], 0
/*1404b31c3*/  mov rax, [rbp+440h+var_378]
/*1404b31ca*/  imul r13, r14, 68h ; 'h'
/*1404b31ce*/  add r13, rax
/*1404b31d1*/  xor edi, edi
/*1404b31d3*/  mov [rbp+440h+var_258], rax
/*1404b31da*/  mov r14, rax
/*1404b31dd*/  jmp short loc_1404B31EE
loc_1404B31E0: /*1404b31e0*/ add r14, 68h ; 'h'
/*1404b31e4*/  inc rdi
/*1404b31e7*/  mov [rbp+440h+var_368], rdi
loc_1404B31EE: /*1404b31ee*/ cmp r14, r13
/*1404b31f1*/  jz loc_1404B35C4
/*1404b31f7*/  mov rdx, [r14+20h]
/*1404b31fb*/  mov r8, [r14+28h]
/*1404b31ff*/  mov rsi, [r14+40h]
/*1404b3203*/  mov rbx, [r14+48h]
/*1404b3207*/  mov [rbp+440h+var_41], 1
/*1404b320e*/  mov [rbp+440h+var_42], 1
loc_1404B3215: /*1404b3215*/ mov rax, [rbp+440h+var_328]
/*1404b321c*/  mov [rsp+4C0h+var_490], rax
/*1404b3221*/  mov rax, [rbp+440h+var_320]
/*1404b3228*/  mov [rsp+4C0h+var_498], rax
/*1404b322d*/  mov [rsp+4C0h+var_4A0], rbx
/*1404b3232*/  lea rcx, [rbp+440h+var_1E0]
/*1404b3239*/  mov r9, rsi
/*1404b323c*/  call patch_model_fallback_rollout
/*1404b3241*/  nop
/*1404b3242*/  mov rax, qword ptr [rbp+440h+var_1E0]
/*1404b3249*/  cmp rax, 0FFFFFFFFFFFFFFFEh
/*1404b324d*/  jz loc_1404B37EE
/*1404b3253*/  lea rdx, [rbp+440h+var_1D0+8]
/*1404b325a*/  mov rcx, [rdx+30h]
/*1404b325e*/  mov [rbp+440h+var_290], rcx
/*1404b3265*/  movups xmm0, xmmword ptr [rdx-10h]
/*1404b3269*/  movups xmm1, xmmword ptr [rdx]
/*1404b326c*/  movups xmm2, xmmword ptr [rdx+10h]
/*1404b3270*/  movups xmm3, xmmword ptr [rdx+20h]
/*1404b3274*/  movaps [rbp+440h+var_2A0], xmm3
/*1404b327b*/  movaps [rbp+440h+var_2B0], xmm2
/*1404b3282*/  movaps [rbp+440h+var_2C0], xmm1
/*1404b3289*/  movaps [rbp+440h+var_2D0], xmm0
/*1404b3290*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404b3294*/  jz loc_1404B3350
/*1404b329a*/  mov qword ptr [rbp+440h+var_C0], rax
/*1404b32a1*/  mov rax, [rbp+440h+var_290]
/*1404b32a8*/  lea rcx, [rbp+440h+var_A0]
/*1404b32af*/  mov [rcx+28h], rax
/*1404b32b3*/  movaps xmm0, [rbp+440h+var_2D0]
/*1404b32ba*/  movaps xmm1, [rbp+440h+var_2C0]
/*1404b32c1*/  movaps xmm2, [rbp+440h+var_2B0]
/*1404b32c8*/  movaps xmm3, [rbp+440h+var_2A0]
/*1404b32cf*/  movups xmmword ptr [rcx+18h], xmm3
/*1404b32d3*/  movups xmmword ptr [rcx+8], xmm2
/*1404b32d7*/  movups xmmword ptr [rcx-8], xmm1
/*1404b32db*/  movups xmmword ptr [rcx-18h], xmm0
/*1404b32df*/  mov r12, [rbp+440h+var_148]
/*1404b32e6*/  cmp r12, [rbp+440h+var_158]
/*1404b32ed*/  jnz short loc_1404B32FC
loc_1404B32EF: /*1404b32ef*/ lea rcx, [rbp+440h+var_158]
/*1404b32f6*/  call sub_141689180
/*1404b32fb*/  nop
loc_1404B32FC: /*1404b32fc*/ mov rax, [rbp+440h+var_150]
/*1404b3303*/  lea rcx, [r12+r12*4]
/*1404b3307*/  shl rcx, 4
/*1404b330b*/  movups xmm0, [rbp+440h+var_80]
/*1404b3312*/  movups xmmword ptr [rax+rcx+40h], xmm0
/*1404b3317*/  movups xmm0, [rbp+440h+var_C0]
/*1404b331e*/  movups xmm1, [rbp+440h+var_B0]
/*1404b3325*/  movups xmm2, [rbp+440h+var_A0]
/*1404b332c*/  movups xmm3, [rbp+440h+var_90]
/*1404b3333*/  movups xmmword ptr [rax+rcx+30h], xmm3
/*1404b3338*/  movups xmmword ptr [rax+rcx+20h], xmm2
/*1404b333d*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404b3342*/  movups xmmword ptr [rax+rcx], xmm0
/*1404b3346*/  inc r12
/*1404b3349*/  mov [rbp+440h+var_148], r12
loc_1404B3350: /*1404b3350*/ movups xmm0, xmmword ptr [r14+8]
/*1404b3355*/  movups [rbp+440h+var_3B8], xmm0
/*1404b335c*/  mov qword ptr [rbp+440h+var_190], rsi
/*1404b3363*/  mov qword ptr [rbp+440h+var_190+8], rbx
/*1404b336a*/  mov rax, [rbp+440h+var_320]
/*1404b3371*/  mov qword ptr [rbp+440h+var_178], rax
/*1404b3378*/  mov rax, [rbp+440h+var_328]
/*1404b337f*/  mov qword ptr [rbp+440h+var_178+8], rax
/*1404b3386*/  lea rax, [rbp+440h+var_3B8]
/*1404b338d*/  test r15b, r15b
/*1404b3390*/  jz loc_1404B3430
/*1404b3396*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b339d*/  lea rcx, unk_14175B0F8
/*1404b33a4*/  mov qword ptr [rbp+440h+var_140+8], rcx
/*1404b33ab*/  lea rax, [rbp+440h+var_190]
/*1404b33b2*/  mov qword ptr [rbp+440h+var_130], rax
/*1404b33b9*/  mov qword ptr [rbp+440h+var_130+8], rcx
/*1404b33c0*/  lea rax, [rbp+440h+var_178]
/*1404b33c7*/  mov qword ptr [rbp+440h+var_120], rax
/*1404b33ce*/  lea rax, unk_14175B150
/*1404b33d5*/  mov qword ptr [rbp+440h+var_120+8], rax
/*1404b33dc*/  mov [rbp+440h+var_41], 1
/*1404b33e3*/  mov [rbp+440h+var_42], 1
loc_1404B33EA: /*1404b33ea*/ lea rax, [rbp+440h+var_140]
/*1404b33f1*/  mov [rsp+4C0h+var_4A0], rax
/*1404b33f6*/  mov [rsp+4C0h+var_498], 3
/*1404b33ff*/  mov r9d, 40h ; '@'
/*1404b3405*/  lea rcx, [rbp+440h+var_C0]
/*1404b340c*/  lea rdx, [rbp+440h+var_250]
/*1404b3413*/  lea r8, aUpdateThreadsS_1; "UPDATE threads SET model_provider = ?2,"...
/*1404b341a*/  call sub_140429E20
/*1404b341f*/  nop
/*1404b3420*/  jmp loc_1404B34BA
loc_1404B3430: /*1404b3430*/ mov qword ptr [rbp+440h+var_140], rax
/*1404b3437*/  lea rcx, unk_14175B0F8
/*1404b343e*/  mov qword ptr [rbp+440h+var_140+8], rcx
/*1404b3445*/  lea rax, [rbp+440h+var_190]
/*1404b344c*/  mov qword ptr [rbp+440h+var_130], rax
/*1404b3453*/  mov qword ptr [rbp+440h+var_130+8], rcx
/*1404b345a*/  lea rax, [rbp+440h+var_178]
/*1404b3461*/  mov qword ptr [rbp+440h+var_120], rax
/*1404b3468*/  lea rax, unk_14175B150
/*1404b346f*/  mov qword ptr [rbp+440h+var_120+8], rax
/*1404b3476*/  mov [rbp+440h+var_41], 1
/*1404b347d*/  mov [rbp+440h+var_42], 1
/*1404b3484*/  lea rax, [rbp+440h+var_140]
/*1404b348b*/  mov [rsp+4C0h+var_4A0], rax
/*1404b3490*/  mov [rsp+4C0h+var_498], 3
/*1404b3499*/  mov r9d, 40h ; '@'
/*1404b349f*/  lea rcx, [rbp+440h+var_C0]
/*1404b34a6*/  lea rdx, [rbp+440h+var_250]
/*1404b34ad*/  lea r8, aUpdateThreadsS_1; "UPDATE threads SET model_provider = ?2,"...
/*1404b34b4*/  call sub_140429E20
/*1404b34b9*/  nop
loc_1404B34BA: /*1404b34ba*/ mov rax, qword ptr [rbp+440h+var_C0]
/*1404b34c1*/  mov rcx, qword ptr [rbp+440h+var_C0+8]
/*1404b34c8*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404b34cc*/  jnz loc_1404B399A
/*1404b34d2*/  test rcx, rcx
/*1404b34d5*/  jnz loc_1404B31E0
/*1404b34db*/  mov rax, cs:off_141EC8D80
/*1404b34e2*/  mov rax, [rax]
/*1404b34e5*/  cmp rax, 3
/*1404b34e9*/  jb loc_1404B31E0
/*1404b34ef*/  lea rax, [rbp+440h+var_3B8]
/*1404b34f6*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b34fd*/  lea rax, sub_14041F680
/*1404b3504*/  mov qword ptr [rbp+440h+var_140+8], rax
/*1404b350b*/  mov qword ptr [rbp+440h+var_C0], 0
/*1404b3516*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404b351d*/  mov qword ptr [rbp+440h+var_C0+8], rax
/*1404b3524*/  mov qword ptr [rbp+440h+var_B0], 33h ; '3'
/*1404b352f*/  mov qword ptr [rbp+440h+var_B0+8], 0
/*1404b353a*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404b3541*/  mov qword ptr [rbp+440h+var_A0], rcx
/*1404b3548*/  mov qword ptr [rbp+440h+var_A0+8], 29h ; ')'
/*1404b3553*/  mov qword ptr [rbp+440h+var_90], 3
/*1404b355e*/  mov qword ptr [rbp+440h+var_90+8], rax
/*1404b3565*/  mov qword ptr [rbp+440h+var_80], 33h ; '3'
/*1404b3570*/  mov rax, 0C2E00000001h
/*1404b357a*/  mov qword ptr [rbp+440h+var_80+8], rax
/*1404b3581*/  lea rax, unk_14175B1B0
/*1404b3588*/  mov [rbp+440h+var_70], rax
/*1404b358f*/  lea rax, [rbp+440h+var_140]
/*1404b3596*/  mov [rbp+440h+var_68], rax
/*1404b359d*/  mov [rbp+440h+var_41], 1
/*1404b35a4*/  mov [rbp+440h+var_42], 1
/*1404b35ab*/  lea rcx, [rbp+440h+var_44]
/*1404b35b2*/  lea rdx, [rbp+440h+var_C0]
/*1404b35b9*/  call sub_1412C36A0
/*1404b35be*/  nop
/*1404b35bf*/  jmp loc_1404B31E0
loc_1404B35C4: /*1404b35c4*/ mov r9d, 6
/*1404b35ca*/  lea rcx, [rbp+440h+var_2D0]
/*1404b35d1*/  lea rdx, [rbp+440h+var_250]
/*1404b35d8*/  lea r8, aCommit_0; "COMMIT"
/*1404b35df*/  call sub_140FB96B0
/*1404b35e4*/  nop
/*1404b35e5*/  mov rax, qword ptr [rbp+440h+var_250]
/*1404b35ec*/  mov rcx, 7FFFFFFFFFFFFFFFh
/*1404b35f6*/  cmp rax, rcx
/*1404b35f9*/  jnb loc_1404B486E
/*1404b35ff*/  inc rax
/*1404b3602*/  mov qword ptr [rbp+440h+var_250], rax
/*1404b3609*/  mov rcx, qword ptr [rbp+440h+var_240]
/*1404b3610*/  call sub_1414BC9F0
/*1404b3615*/  dec qword ptr [rbp+440h+var_250]
/*1404b361c*/  test eax, eax
/*1404b361e*/  jnz short loc_1404B3674
/*1404b3620*/  mov [rbp+440h+var_41], 0
/*1404b3627*/  mov [rbp+440h+var_42], 1
loc_1404B362E: /*1404b362e*/ mov r9d, 8
/*1404b3634*/  lea rcx, [rbp+440h+var_C0]
/*1404b363b*/  lea rdx, [rbp+440h+var_250]
/*1404b3642*/  lea r8, aRollback_0; "ROLLBACK"
/*1404b3649*/  call sub_140FB96B0
/*1404b364e*/  nop
/*1404b364f*/  cmp qword ptr [rbp+440h+var_C0], 0FFFFFFFFFFFFFFFFh
/*1404b3657*/  jz short loc_1404B3674
/*1404b3659*/  mov [rbp+440h+var_41], 0
/*1404b3660*/  mov [rbp+440h+var_42], 1
/*1404b3667*/  lea rcx, [rbp+440h+var_C0]
/*1404b366e*/  call sub_14043D020
/*1404b3673*/  nop
loc_1404B3674: /*1404b3674*/ cmp qword ptr [rbp+440h+var_2D0], 0FFFFFFFFFFFFFFFFh
/*1404b367c*/  jz loc_1404B3D3E
/*1404b3682*/  movups xmm0, [rbp+440h+var_2D0]
/*1404b3689*/  movups xmm1, [rbp+440h+var_2C0]
/*1404b3690*/  movups xmm2, [rbp+440h+var_2B0]
/*1404b3697*/  movups xmm3, [rbp+440h+var_2A0]
/*1404b369e*/  movaps [rbp+440h+var_1B0], xmm3
/*1404b36a5*/  movaps [rbp+440h+var_1C0], xmm2
/*1404b36ac*/  movaps [rbp+440h+var_1D0], xmm1
/*1404b36b3*/  movaps [rbp+440h+var_1E0], xmm0
/*1404b36ba*/  mov rsi, [rbp+440h+var_150]
/*1404b36c1*/  mov rdi, [rbp+440h+var_148]
/*1404b36c8*/  mov rbx, qword ptr [rbp+440h+var_1E0]
/*1404b36cf*/  mov r15b, byte ptr [rbp+440h+var_1C0+4]
/*1404b36d6*/  lea rax, [rbp+440h+var_1E0]
/*1404b36dd*/  mov qword ptr [rbp+440h+var_190], rax
/*1404b36e4*/  lea rax, sub_140FB8910
/*1404b36eb*/  mov qword ptr [rbp+440h+var_190+8], rax
loc_1404B36F2: /*1404b36f2*/ lea rcx, [rbp+440h+var_178]
/*1404b36f9*/  lea rdx, unk_141758057
/*1404b3700*/  lea r8, [rbp+440h+var_190]
/*1404b3707*/  call sub_14149C0F0
/*1404b370c*/  nop
/*1404b370d*/  neg rbx
/*1404b3710*/  seto al
/*1404b3713*/  mov r8d, 3158h
/*1404b3719*/  mov ecx, r15d
/*1404b371c*/  shr r8d, cl
/*1404b371f*/  and r8b, al
/*1404b3722*/  mov rax, [rbp+440h+var_168]
/*1404b3729*/  lea rcx, [rbp+440h+var_130+1]
/*1404b3730*/  mov [rcx+7], rax
/*1404b3734*/  movups xmm0, [rbp+440h+var_178]
/*1404b373b*/  movups xmmword ptr [rcx-9], xmm0
/*1404b373f*/  mov qword ptr [rbp+440h+var_140], 0Ah
/*1404b374a*/  mov [rsp+4C0h+var_4A0], rdi
/*1404b374f*/  lea rcx, [rbp+440h+var_C0]
/*1404b3756*/  lea rdx, [rbp+440h+var_140]
/*1404b375d*/  mov r9, rsi
/*1404b3760*/  call sub_1404B9C20
/*1404b3765*/  nop
/*1404b3766*/  mov [rbp+440h+var_41], 0
/*1404b376d*/  mov [rbp+440h+var_42], 1
loc_1404B3774: /*1404b3774*/ lea rcx, [rbp+440h+var_1E0]
/*1404b377b*/  call sub_14043D020
/*1404b3780*/  nop
/*1404b3781*/  mov r13, qword ptr [rbp+440h+var_C0]
/*1404b3788*/  mov rdi, qword ptr [rbp+440h+var_C0+8]
/*1404b378f*/  mov rsi, qword ptr [rbp+440h+var_B0]
/*1404b3796*/  mov r15, qword ptr [rbp+440h+var_B0+8]
/*1404b379d*/  lea rcx, [rbp+440h+var_A0]
/*1404b37a4*/  movups xmm0, xmmword ptr [rcx]
/*1404b37a7*/  movups xmm1, xmmword ptr [rcx+10h]
/*1404b37ab*/  movups xmm2, xmmword ptr [rcx+20h]
/*1404b37af*/  movups xmm3, xmmword ptr [rcx+30h]
/*1404b37b3*/  movaps [rbp+440h+var_310], xmm0
/*1404b37ba*/  movaps [rbp+440h+var_300], xmm1
/*1404b37c1*/  movaps [rbp+440h+var_2F0], xmm2
/*1404b37c8*/  movaps [rbp+440h+var_2E0], xmm3
/*1404b37cf*/  movzx r12d, [rbp+440h+var_60]
/*1404b37d7*/  mov eax, [rcx+41h]
/*1404b37da*/  mov ecx, [rcx+44h]
/*1404b37dd*/  mov dword ptr [rbp+440h+var_D8], eax
/*1404b37e3*/  mov dword ptr [rbp+440h+var_D8+3], ecx
/*1404b37e9*/  jmp loc_1404B3B7E
loc_1404B37EE: /*1404b37ee*/ lea rcx, [rbp+440h+var_1D0+8]
/*1404b37f5*/  mov rax, [rcx]
/*1404b37f8*/  mov [rbp+440h+var_180], rax
/*1404b37ff*/  movups xmm0, xmmword ptr [rcx-10h]
/*1404b3803*/  movaps [rbp+440h+var_190], xmm0
/*1404b380a*/  mov rax, qword ptr [rbp+440h+var_250]
/*1404b3811*/  mov rcx, 7FFFFFFFFFFFFFFFh
/*1404b381b*/  cmp rax, rcx
/*1404b381e*/  jnb loc_1404B488B
/*1404b3824*/  inc rax
/*1404b3827*/  mov qword ptr [rbp+440h+var_250], rax
/*1404b382e*/  mov rcx, qword ptr [rbp+440h+var_240]
/*1404b3835*/  call sub_1414BC9F0
/*1404b383a*/  dec qword ptr [rbp+440h+var_250]
/*1404b3841*/  test eax, eax
/*1404b3843*/  jnz short loc_1404B387D
loc_1404B3845: /*1404b3845*/ mov r9d, 8
/*1404b384b*/  lea rcx, [rbp+440h+var_C0]
/*1404b3852*/  lea rdx, [rbp+440h+var_250]
/*1404b3859*/  lea r8, aRollback_0; "ROLLBACK"
/*1404b3860*/  call sub_140FB96B0
/*1404b3865*/  nop
/*1404b3866*/  cmp qword ptr [rbp+440h+var_C0], 0FFFFFFFFFFFFFFFFh
/*1404b386e*/  jz short loc_1404B387D
/*1404b3870*/  lea rcx, [rbp+440h+var_C0]
/*1404b3877*/  call sub_14043D020
/*1404b387c*/  nop
loc_1404B387D: /*1404b387d*/ mov qword ptr [rbp+440h+var_178], r14
/*1404b3884*/  lea rax, sub_1400015F0
/*1404b388b*/  mov qword ptr [rbp+440h+var_178+8], rax
/*1404b3892*/  lea rcx, [rbp+440h+var_190]
/*1404b3899*/  mov [rbp+440h+var_168], rcx
/*1404b38a0*/  mov [rbp+440h+var_160], rax
/*1404b38a7*/  lea rcx, [rbp+440h+var_458]
/*1404b38ab*/  lea rdx, unk_14175CDF6
/*1404b38b2*/  lea r8, [rbp+440h+var_178]
/*1404b38b9*/  call sub_14149C0F0
/*1404b38be*/  nop
/*1404b38bf*/  mov rax, [rbp+440h+var_448]
/*1404b38c3*/  lea rcx, [rbp+440h+var_130+1]
/*1404b38ca*/  mov [rcx+7], rax
/*1404b38ce*/  movups xmm0, [rbp+440h+var_458]
/*1404b38d2*/  movups xmmword ptr [rcx-9], xmm0
/*1404b38d6*/  mov qword ptr [rbp+440h+var_140], 0Ah
/*1404b38e1*/  mov r9, [rbp+440h+var_150]
/*1404b38e8*/  mov rax, [rbp+440h+var_148]
/*1404b38ef*/  mov [rsp+4C0h+var_4A0], rax
/*1404b38f4*/  lea rcx, [rbp+440h+var_C0]
/*1404b38fb*/  lea rdx, [rbp+440h+var_140]
/*1404b3902*/  xor r8d, r8d
/*1404b3905*/  call sub_1404B9C20
/*1404b390a*/  nop
/*1404b390b*/  mov r13, qword ptr [rbp+440h+var_C0]
/*1404b3912*/  mov rdi, qword ptr [rbp+440h+var_C0+8]
/*1404b3919*/  mov rsi, qword ptr [rbp+440h+var_B0]
/*1404b3920*/  mov r15, qword ptr [rbp+440h+var_B0+8]
/*1404b3927*/  lea rcx, [rbp+440h+var_A0]
/*1404b392e*/  movups xmm0, xmmword ptr [rcx]
/*1404b3931*/  movups xmm1, xmmword ptr [rcx+10h]
/*1404b3935*/  movups xmm2, xmmword ptr [rcx+20h]
/*1404b3939*/  movups xmm3, xmmword ptr [rcx+30h]
/*1404b393d*/  movaps [rbp+440h+var_310], xmm0
/*1404b3944*/  movaps [rbp+440h+var_300], xmm1
/*1404b394b*/  movaps [rbp+440h+var_2F0], xmm2
/*1404b3952*/  movaps [rbp+440h+var_2E0], xmm3
/*1404b3959*/  movzx r12d, [rbp+440h+var_60]
/*1404b3961*/  mov eax, [rcx+41h]
/*1404b3964*/  mov ecx, [rcx+44h]
/*1404b3967*/  mov dword ptr [rbp+440h+var_D8], eax
/*1404b396d*/  mov dword ptr [rbp+440h+var_D8+3], ecx
/*1404b3973*/  mov rdx, qword ptr [rbp+440h+var_190]
/*1404b397a*/  test rdx, rdx
/*1404b397d*/  jz loc_1404B3B7E
/*1404b3983*/  mov rcx, qword ptr [rbp+440h+var_190+8]
/*1404b398a*/  mov r8d, 1
/*1404b3990*/  call sub_140001660
/*1404b3995*/  jmp loc_1404B3B7E
loc_1404B399A: /*1404b399a*/ lea rdx, [rbp+440h+var_A0]
/*1404b39a1*/  movups xmm0, xmmword ptr [rdx-10h]
/*1404b39a5*/  movups xmm1, xmmword ptr [rdx]
/*1404b39a8*/  movups xmm2, xmmword ptr [rdx+10h]
/*1404b39ac*/  lea rdx, [rbp+440h+var_1D0+8]
/*1404b39b3*/  movups xmmword ptr [rdx+18h], xmm2
/*1404b39b7*/  movups xmmword ptr [rdx+8], xmm1
/*1404b39bb*/  movups xmmword ptr [rdx-8], xmm0
/*1404b39bf*/  mov qword ptr [rbp+440h+var_1E0], rax
/*1404b39c6*/  mov qword ptr [rbp+440h+var_1E0+8], rcx
/*1404b39cd*/  movzx ecx, byte ptr [rbp+440h+var_1C0+4]
/*1404b39d4*/  neg rax
/*1404b39d7*/  seto al
/*1404b39da*/  cmp cl, 0Eh
/*1404b39dd*/  setb dl
/*1404b39e0*/  test al, dl
/*1404b39e2*/  jz short loc_1404B39ED
/*1404b39e4*/  mov esi, 3158h
/*1404b39e9*/  shr esi, cl
/*1404b39eb*/  jmp short loc_1404B39EF
loc_1404B39ED: /*1404b39ed*/ xor esi, esi
loc_1404B39EF: /*1404b39ef*/ mov rax, qword ptr [rbp+440h+var_250]
/*1404b39f6*/  mov rcx, 7FFFFFFFFFFFFFFFh
/*1404b3a00*/  cmp rax, rcx
/*1404b3a03*/  jnb loc_1404B489A
/*1404b3a09*/  inc rax
/*1404b3a0c*/  mov qword ptr [rbp+440h+var_250], rax
/*1404b3a13*/  mov rcx, qword ptr [rbp+440h+var_240]
/*1404b3a1a*/  call sub_1414BC9F0
/*1404b3a1f*/  dec qword ptr [rbp+440h+var_250]
/*1404b3a26*/  test eax, eax
/*1404b3a28*/  jnz short loc_1404B3A62
loc_1404B3A2A: /*1404b3a2a*/ mov r9d, 8
/*1404b3a30*/  lea rcx, [rbp+440h+var_C0]
/*1404b3a37*/  lea rdx, [rbp+440h+var_250]
/*1404b3a3e*/  lea r8, aRollback_0; "ROLLBACK"
/*1404b3a45*/  call sub_140FB96B0
/*1404b3a4a*/  nop
/*1404b3a4b*/  cmp qword ptr [rbp+440h+var_C0], 0FFFFFFFFFFFFFFFFh
/*1404b3a53*/  jz short loc_1404B3A62
/*1404b3a55*/  lea rcx, [rbp+440h+var_C0]
/*1404b3a5c*/  call sub_14043D020
/*1404b3a61*/  nop
loc_1404B3A62: /*1404b3a62*/ mov qword ptr [rbp+440h+var_178], r14
/*1404b3a69*/  lea rax, sub_1400015F0
/*1404b3a70*/  mov qword ptr [rbp+440h+var_178+8], rax
/*1404b3a77*/  lea rax, [rbp+440h+var_1E0]
/*1404b3a7e*/  mov [rbp+440h+var_168], rax
/*1404b3a85*/  lea rax, sub_140FB8910
/*1404b3a8c*/  mov [rbp+440h+var_160], rax
/*1404b3a93*/  lea rcx, [rbp+440h+var_470]
/*1404b3a97*/  lea rdx, unk_14175CDCB
/*1404b3a9e*/  lea r8, [rbp+440h+var_178]
/*1404b3aa5*/  call sub_14149C0F0
/*1404b3aaa*/  nop
/*1404b3aab*/  mov rax, [rbp+440h+var_460]
/*1404b3aaf*/  lea rcx, [rbp+440h+var_130+1]
/*1404b3ab6*/  mov [rcx+7], rax
/*1404b3aba*/  movups xmm0, [rbp+440h+var_470]
/*1404b3abe*/  movups xmmword ptr [rcx-9], xmm0
/*1404b3ac2*/  mov qword ptr [rbp+440h+var_140], 0Ah
/*1404b3acd*/  mov r9, [rbp+440h+var_150]
/*1404b3ad4*/  mov rax, [rbp+440h+var_148]
/*1404b3adb*/  mov [rsp+4C0h+var_4A0], rax
/*1404b3ae0*/  and sil, 1
/*1404b3ae4*/  lea rcx, [rbp+440h+var_C0]
/*1404b3aeb*/  lea rdx, [rbp+440h+var_140]
/*1404b3af2*/  mov r8d, esi
/*1404b3af5*/  call sub_1404B9C20
/*1404b3afa*/  nop
/*1404b3afb*/  mov r13, qword ptr [rbp+440h+var_C0]
/*1404b3b02*/  mov rdi, qword ptr [rbp+440h+var_C0+8]
/*1404b3b09*/  mov rsi, qword ptr [rbp+440h+var_B0]
/*1404b3b10*/  mov r15, qword ptr [rbp+440h+var_B0+8]
/*1404b3b17*/  lea rcx, [rbp+440h+var_A0]
/*1404b3b1e*/  movups xmm0, xmmword ptr [rcx]
/*1404b3b21*/  movups xmm1, xmmword ptr [rcx+10h]
/*1404b3b25*/  movups xmm2, xmmword ptr [rcx+20h]
/*1404b3b29*/  movups xmm3, xmmword ptr [rcx+30h]
/*1404b3b2d*/  movaps [rbp+440h+var_2E0], xmm3
/*1404b3b34*/  movaps [rbp+440h+var_2F0], xmm2
/*1404b3b3b*/  movaps [rbp+440h+var_300], xmm1
/*1404b3b42*/  movaps [rbp+440h+var_310], xmm0
/*1404b3b49*/  movzx r12d, [rbp+440h+var_60]
/*1404b3b51*/  mov eax, [rcx+41h]
/*1404b3b54*/  mov ecx, [rcx+44h]
/*1404b3b57*/  mov dword ptr [rbp+440h+var_D8+3], ecx
/*1404b3b5d*/  mov dword ptr [rbp+440h+var_D8], eax
/*1404b3b63*/  mov [rbp+440h+var_41], 0
/*1404b3b6a*/  mov [rbp+440h+var_42], 1
loc_1404B3B71: /*1404b3b71*/ lea rcx, [rbp+440h+var_1E0]
/*1404b3b78*/  call sub_14043D020
/*1404b3b7d*/  nop
loc_1404B3B7E: /*1404b3b7e*/ mov rbx, [rbp+440h+var_148]
/*1404b3b85*/  test rbx, rbx
/*1404b3b88*/  jz short loc_1404B3BF2
/*1404b3b8a*/  mov r14, [rbp+440h+var_150]
/*1404b3b91*/  add r14, 40h ; '@'
/*1404b3b95*/  jmp short loc_1404B3BA9
loc_1404B3BA0: /*1404b3ba0*/ add r14, 50h ; 'P'
/*1404b3ba4*/  dec rbx
/*1404b3ba7*/  jz short loc_1404B3BF2
loc_1404B3BA9: /*1404b3ba9*/ mov rdx, [r14-40h]
/*1404b3bad*/  test rdx, rdx
/*1404b3bb0*/  jz short loc_1404B3BC1
/*1404b3bb2*/  mov rcx, [r14-38h]
/*1404b3bb6*/  mov r8d, 1
/*1404b3bbc*/  call sub_140001660
loc_1404B3BC1: /*1404b3bc1*/ mov rdx, [r14-20h]
/*1404b3bc5*/  test rdx, rdx
/*1404b3bc8*/  jz short loc_1404B3BD9
/*1404b3bca*/  mov rcx, [r14-18h]
/*1404b3bce*/  mov r8d, 1
/*1404b3bd4*/  call sub_140001660
loc_1404B3BD9: /*1404b3bd9*/ mov rdx, [r14-8]
/*1404b3bdd*/  test rdx, rdx
/*1404b3be0*/  jz short loc_1404B3BA0
/*1404b3be2*/  mov rcx, [r14]
/*1404b3be5*/  mov r8d, 1
/*1404b3beb*/  call sub_140001660
/*1404b3bf0*/  jmp short loc_1404B3BA0
loc_1404B3BF2: /*1404b3bf2*/ mov rax, [rbp+440h+var_158]
/*1404b3bf9*/  test rax, rax
/*1404b3bfc*/  jz short loc_1404B3C18
/*1404b3bfe*/  mov rcx, [rbp+440h+var_150]
/*1404b3c05*/  shl rax, 4
/*1404b3c09*/  lea rdx, [rax+rax*4]
/*1404b3c0d*/  mov r8d, 8
/*1404b3c13*/  call sub_140001660
loc_1404B3C18: /*1404b3c18*/ mov ebx, r12d
/*1404b3c1b*/  mov r12d, edi
/*1404b3c1e*/  shr r12d, 8
/*1404b3c22*/  mov r14, rdi
/*1404b3c25*/  shr r14, 10h
loc_1404B3C29: /*1404b3c29*/ mov rcx, [rbp+440h+var_378]
loc_1404B3C30: /*1404b3c30*/ mov [rbp+440h+var_258], rcx
/*1404b3c37*/  mov rdx, [rbp+440h+var_350]
/*1404b3c3e*/  call sub_1402C98B0
/*1404b3c43*/  nop
/*1404b3c44*/  mov rax, [rbp+440h+var_380]
/*1404b3c4b*/  test rax, rax
/*1404b3c4e*/  jz short loc_1404B3C67
/*1404b3c50*/  imul rdx, rax, 68h ; 'h'
/*1404b3c54*/  mov r8d, 8
/*1404b3c5a*/  mov rcx, [rbp+440h+var_258]
/*1404b3c61*/  call sub_140001660
/*1404b3c66*/  nop
loc_1404B3C67: /*1404b3c67*/ lea rcx, [rbp+440h+var_250]
/*1404b3c6e*/  call sub_14043C900
/*1404b3c73*/  nop
/*1404b3c74*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404b3c78*/  jz short loc_1404B3CF6
/*1404b3c7a*/  test bl, 1
/*1404b3c7d*/  jnz loc_1404B2BFE
/*1404b3c83*/  jmp loc_1404B3F14
loc_1404B3C88: /*1404b3c88*/ movaps xmm0, [rbp+440h+var_140]
/*1404b3c8f*/  movaps xmm1, [rbp+440h+var_130]
/*1404b3c96*/  movaps xmm2, [rbp+440h+var_120]
/*1404b3c9d*/  movaps xmm3, [rbp+440h+var_110]
/*1404b3ca4*/  mov r12d, edi
/*1404b3ca7*/  shr r12d, 8
/*1404b3cab*/  mov r14, rdi
/*1404b3cae*/  shr r14, 10h
/*1404b3cb2*/  movaps [rbp+440h+var_310], xmm0
/*1404b3cb9*/  movaps [rbp+440h+var_300], xmm1
/*1404b3cc0*/  movaps [rbp+440h+var_2F0], xmm2
/*1404b3cc7*/  movaps [rbp+440h+var_2E0], xmm3
/*1404b3cce*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404b3cd2*/  jz short loc_1404B3CF6
/*1404b3cd4*/  jmp loc_1404B3F14
loc_1404B3CD9: /*1404b3cd9*/ mov esi, 8
/*1404b3cde*/  xor r15d, r15d
/*1404b3ce1*/  xor edi, edi
/*1404b3ce3*/  xor r12d, r12d
/*1404b3ce6*/  xor r14d, r14d
loc_1404B3CE9: /*1404b3ce9*/ lea rcx, [rbp+440h+var_250]
/*1404b3cf0*/  call sub_14043C900
/*1404b3cf5*/  nop
loc_1404B3CF6: /*1404b3cf6*/ shl r14, 10h
/*1404b3cfa*/  movzx eax, r12b
/*1404b3cfe*/  shl eax, 8
/*1404b3d01*/  or rax, r14
/*1404b3d04*/  movzx ebx, dil
/*1404b3d08*/  or rbx, rax
/*1404b3d0b*/  jmp loc_1404B2749
loc_1404B3D10: /*1404b3d10*/ mov [rsp+4C0h+var_4A0], 30h ; '0'
/*1404b3d19*/  mov r9d, 8
/*1404b3d1f*/  lea rcx, [rbp+440h+var_280]
/*1404b3d26*/  mov rdx, rdi
/*1404b3d29*/  mov r8, r15
/*1404b3d2c*/  call sub_141688D30
/*1404b3d31*/  nop
/*1404b3d32*/  mov rdi, [rbp+440h+var_270]
/*1404b3d39*/  jmp loc_1404B2793
loc_1404B3D3E: /*1404b3d3e*/ mov rax, [rbp+440h+var_50]
/*1404b3d45*/  mov qword ptr [rbp+440h+var_140], rax
/*1404b3d4c*/  mov rax, [rbp+440h+var_D0]
/*1404b3d53*/  mov qword ptr [rbp+440h+var_140+8], rax
/*1404b3d5a*/  mov rax, [rbp+440h+var_350]
/*1404b3d61*/  mov qword ptr [rbp+440h+var_1E0], rax
/*1404b3d68*/  lea rax, [rbp+440h+var_140]
/*1404b3d6f*/  mov qword ptr [rbp+440h+var_C0], rax
/*1404b3d76*/  lea rax, sub_14148F3A0
/*1404b3d7d*/  mov qword ptr [rbp+440h+var_C0+8], rax
/*1404b3d84*/  lea rax, [rbp+440h+var_3C8]
/*1404b3d88*/  mov qword ptr [rbp+440h+var_B0], rax
/*1404b3d8f*/  lea rax, sub_14041F680
/*1404b3d96*/  mov qword ptr [rbp+440h+var_B0+8], rax
/*1404b3d9d*/  lea rax, [rbp+440h+var_1E0]
/*1404b3da4*/  mov qword ptr [rbp+440h+var_A0], rax
/*1404b3dab*/  lea rax, sub_1414AC520
/*1404b3db2*/  mov qword ptr [rbp+440h+var_A0+8], rax
/*1404b3db9*/  lea rcx, [rbp+440h+var_368]
/*1404b3dc0*/  mov qword ptr [rbp+440h+var_90], rcx
/*1404b3dc7*/  mov qword ptr [rbp+440h+var_90+8], rax
/*1404b3dce*/  mov [rbp+440h+var_41], 0
/*1404b3dd5*/  mov [rbp+440h+var_42], 1
loc_1404B3DDC: /*1404b3ddc*/ lea rcx, [rbp+440h+var_488]
/*1404b3de0*/  lea rdx, unk_14175CE25
/*1404b3de7*/  lea r8, [rbp+440h+var_C0]
/*1404b3dee*/  call sub_14149C0F0
/*1404b3df3*/  nop
/*1404b3df4*/  mov [rbp+440h+var_41], 0
/*1404b3dfb*/  mov [rbp+440h+var_42], 1
/*1404b3e02*/  lea rax, [rbp+440h+var_488]
/*1404b3e06*/  mov [rsp+4C0h+var_4A0], rax
/*1404b3e0b*/  mov edx, 14h
/*1404b3e10*/  mov r9d, 9
/*1404b3e16*/  lea rcx, aRelayModelFall; "relay_model_fallback"
/*1404b3e1d*/  lea r8, aConverged; "converged"
/*1404b3e24*/  call sub_1403565C0
/*1404b3e29*/  nop
/*1404b3e2a*/  mov rax, [rbp+440h+var_380]
/*1404b3e31*/  mov rcx, [rbp+440h+var_258]
/*1404b3e38*/  mov qword ptr [rbp+440h+var_C0], rcx
/*1404b3e3f*/  mov qword ptr [rbp+440h+var_C0+8], rcx
/*1404b3e46*/  mov qword ptr [rbp+440h+var_B0], rax
/*1404b3e4d*/  mov qword ptr [rbp+440h+var_B0+8], r13
/*1404b3e54*/  mov [rbp+440h+var_41], 0
/*1404b3e5b*/  mov [rbp+440h+var_42], 0
/*1404b3e62*/  lea rcx, [rbp+440h+var_140]
/*1404b3e69*/  lea rdx, [rbp+440h+var_C0]
/*1404b3e70*/  call sub_1402CB260
/*1404b3e75*/  nop
/*1404b3e76*/  mov rdi, qword ptr [rbp+440h+var_140]
/*1404b3e7d*/  mov rsi, qword ptr [rbp+440h+var_140+8]
/*1404b3e84*/  mov r15, qword ptr [rbp+440h+var_130]
/*1404b3e8b*/  lea rcx, [rbp+440h+var_158]
/*1404b3e92*/  call sub_14043B3B0
/*1404b3e97*/  mov r14, rdi
/*1404b3e9a*/  shr r14, 10h
/*1404b3e9e*/  mov r12d, edi
/*1404b3ea1*/  shr r12d, 8
/*1404b3ea5*/  jmp loc_1404B3CE9
loc_1404B3EAA: /*1404b3eaa*/ movzx r12d, byte ptr [rbp+440h+var_C0+9]
/*1404b3eb2*/  mov ebx, dword ptr [rbp+440h+var_C0+0Ah]
/*1404b3eb8*/  movzx r14d, word ptr [rbp+440h+var_C0+0Eh]
/*1404b3ec0*/  mov rsi, qword ptr [rbp+440h+var_B0]
/*1404b3ec7*/  mov r15, qword ptr [rbp+440h+var_B0+8]
/*1404b3ece*/  lea rax, [rbp+440h+var_A0]
/*1404b3ed5*/  movups xmm0, xmmword ptr [rax]
/*1404b3ed8*/  movups xmm1, xmmword ptr [rax+10h]
/*1404b3edc*/  movups xmm2, xmmword ptr [rax+20h]
/*1404b3ee0*/  movups xmm3, xmmword ptr [rax+30h]
/*1404b3ee4*/  movaps [rbp+440h+var_310], xmm0
/*1404b3eeb*/  movaps [rbp+440h+var_300], xmm1
/*1404b3ef2*/  movaps [rbp+440h+var_2F0], xmm2
/*1404b3ef9*/  movaps [rbp+440h+var_2E0], xmm3
loc_1404B3F00: /*1404b3f00*/ lea rcx, [rbp+440h+var_250]
/*1404b3f07*/  call sub_14043C900
/*1404b3f0c*/  nop
/*1404b3f0d*/  shl r14, 20h
/*1404b3f11*/  or r14, rbx
loc_1404B3F14: /*1404b3f14*/ shl r14, 10h
/*1404b3f18*/  movzx eax, r12b
/*1404b3f1c*/  shl eax, 8
/*1404b3f1f*/  or rax, r14
/*1404b3f22*/  movzx edi, dil
/*1404b3f26*/  or rdi, rax
/*1404b3f29*/  movaps xmm0, [rbp+440h+var_310]
/*1404b3f30*/  movaps xmm1, [rbp+440h+var_300]
/*1404b3f37*/  movaps xmm2, [rbp+440h+var_2F0]
/*1404b3f3e*/  movaps xmm3, [rbp+440h+var_2E0]
/*1404b3f45*/  movaps [rbp+440h+var_410], xmm3
/*1404b3f49*/  movaps [rbp+440h+var_420], xmm2
/*1404b3f4d*/  movaps [rbp+440h+var_430], xmm1
/*1404b3f51*/  movaps [rbp+440h+var_440], xmm0
/*1404b3f55*/  jmp loc_1404B401A
loc_1404B3F5A: /*1404b3f5a*/ lea rsi, [rbp+440h+var_140]
/*1404b3f61*/  mov rcx, rsi
/*1404b3f64*/  mov rdx, [rbp+440h+var_50]
/*1404b3f6b*/  mov r8, [rbp+440h+var_D0]
/*1404b3f72*/  call codex_db_log_path
/*1404b3f77*/  nop
/*1404b3f78*/  mov qword ptr [rbp+440h+var_250], rsi
/*1404b3f7f*/  lea rax, sub_1400015F0
/*1404b3f86*/  mov qword ptr [rbp+440h+var_250+8], rax
/*1404b3f8d*/  lea rax, [rbp+440h+var_360]
/*1404b3f94*/  mov qword ptr [rbp+440h+var_240], rax
/*1404b3f9b*/  lea rax, sub_1414AC520
/*1404b3fa2*/  mov qword ptr [rbp+440h+var_240+8], rax
/*1404b3fa9*/  lea rax, [rbp+440h+var_C0]
/*1404b3fb0*/  mov qword ptr [rbp+440h+var_230], rax
/*1404b3fb7*/  lea rax, sub_140B036A0
/*1404b3fbe*/  mov qword ptr [rbp+440h+var_230+8], rax
loc_1404B3FC5: /*1404b3fc5*/ lea rdx, unk_14175C678
/*1404b3fcc*/  lea rcx, [rbp+440h+var_3E0]
/*1404b3fd0*/  lea r8, [rbp+440h+var_250]
/*1404b3fd7*/  call sub_14149C0F0
/*1404b3fdc*/  nop
/*1404b3fdd*/  mov rdx, qword ptr [rbp+440h+var_140]
/*1404b3fe4*/  test rdx, rdx
/*1404b3fe7*/  jz short loc_1404B3FFB
/*1404b3fe9*/  mov rcx, qword ptr [rbp+440h+var_140+8]
/*1404b3ff0*/  mov r8d, 1
/*1404b3ff6*/  call sub_140001660
loc_1404B3FFB: /*1404b3ffb*/ mov rdi, [rbp+440h+var_3E0]
/*1404b3fff*/  mov rsi, [rbp+440h+var_3D8]
/*1404b4003*/  mov r15, [rbp+440h+var_3D0]
loc_1404B4007: /*1404b4007*/ lea rcx, [rbp+440h+var_C0]
/*1404b400e*/  call sub_14043E650
/*1404b4013*/  nop
/*1404b4014*/  mov r13d, 0Ah
loc_1404B401A: /*1404b401a*/ mov rax, [rbp+440h+var_260]
/*1404b4021*/  mov [rax], r13
/*1404b4024*/  mov [rax+8], rdi
/*1404b4028*/  mov [rax+10h], rsi
/*1404b402c*/  mov [rax+18h], r15
/*1404b4030*/  movaps xmm0, [rbp+440h+var_440]
/*1404b4034*/  movaps xmm1, [rbp+440h+var_430]
/*1404b4038*/  movaps xmm2, [rbp+440h+var_420]
/*1404b403c*/  movaps xmm3, [rbp+440h+var_410]
/*1404b4040*/  movups xmmword ptr [rax+20h], xmm0
/*1404b4044*/  movups xmmword ptr [rax+30h], xmm1
/*1404b4048*/  movups xmmword ptr [rax+40h], xmm2
/*1404b404c*/  movups xmmword ptr [rax+50h], xmm3
/*1404b4050*/  mov rdx, [rbp+440h+var_338]
/*1404b4057*/  test rdx, rdx
/*1404b405a*/  jz short loc_1404B406E
/*1404b405c*/  mov r8d, 1
/*1404b4062*/  mov rcx, [rbp+440h+var_50]
/*1404b4069*/  call sub_140001660
loc_1404B406E: /*1404b406e*/ mov rax, [rbp+440h+var_340]
/*1404b4075*/  cmp [rbp+440h+var_330], rax
/*1404b407c*/  mov rax, [rbp+440h+var_348]
/*1404b4083*/  mov rsi, [rbp+440h+var_268]
/*1404b408a*/  jz short loc_1404B40CD
/*1404b408c*/  shr [rbp+440h+var_C8], 5
/*1404b4094*/  jmp short loc_1404B40AD
loc_1404B40A0: /*1404b40a0*/ add rsi, 20h ; ' '
/*1404b40a4*/  dec [rbp+440h+var_C8]
/*1404b40ab*/  jz short loc_1404B40CD
loc_1404B40AD: /*1404b40ad*/ mov rdx, [rsi-8]
/*1404b40b1*/  test rdx, rdx
/*1404b40b4*/  jz short loc_1404B40A0
/*1404b40b6*/  mov rcx, [rsi]
/*1404b40b9*/  mov r8d, 1
/*1404b40bf*/  call sub_140001660
/*1404b40c4*/  mov rax, [rbp+440h+var_348]
/*1404b40cb*/  jmp short loc_1404B40A0
loc_1404B40CD: /*1404b40cd*/ test rax, rax
/*1404b40d0*/  jz short loc_1404B40EB
/*1404b40d2*/  shl rax, 5
/*1404b40d6*/  mov r8d, 8
/*1404b40dc*/  mov rcx, [rbp+440h+var_358]
/*1404b40e3*/  mov rdx, rax
/*1404b40e6*/  call sub_140001660
loc_1404B40EB: /*1404b40eb*/ mov rsi, [rbp+440h+var_278]
/*1404b40f2*/  mov rdi, [rbp+440h+var_270]
/*1404b40f9*/  test rdi, rdi
/*1404b40fc*/  jz loc_1404B45C1
/*1404b4102*/  lea rbx, [rsi+20h]
/*1404b4106*/  jmp short loc_1404B411D
loc_1404B4110: /*1404b4110*/ add rbx, 30h ; '0'
/*1404b4114*/  dec rdi
/*1404b4117*/  jz loc_1404B45C1
loc_1404B411D: /*1404b411d*/ mov rdx, [rbx-20h]
/*1404b4121*/  test rdx, rdx
/*1404b4124*/  jz short loc_1404B4135
/*1404b4126*/  mov rcx, [rbx-18h]
/*1404b412a*/  mov r8d, 1
/*1404b4130*/  call sub_140001660
loc_1404B4135: /*1404b4135*/ mov rdx, [rbx-8]
/*1404b4139*/  test rdx, rdx
/*1404b413c*/  jz short loc_1404B4110
/*1404b413e*/  mov rcx, [rbx]
/*1404b4141*/  mov r8d, 1
/*1404b4147*/  call sub_140001660
/*1404b414c*/  jmp short loc_1404B4110
loc_1404B414E: /*1404b414e*/ mov rax, [rbp+440h+var_340]
/*1404b4155*/  cmp [rbp+440h+var_330], rax
/*1404b415c*/  jz short loc_1404B41A4
/*1404b415e*/  shr [rbp+440h+var_C8], 5
/*1404b4166*/  jmp short loc_1404B4184
loc_1404B4170: /*1404b4170*/ add rsi, 20h ; ' '
/*1404b4174*/  mov [rbp+440h+var_268], rsi
/*1404b417b*/  dec [rbp+440h+var_C8]
/*1404b4182*/  jz short loc_1404B41A4
loc_1404B4184: /*1404b4184*/ mov rsi, [rbp+440h+var_268]
/*1404b418b*/  mov rdx, [rsi-8]
/*1404b418f*/  test rdx, rdx
/*1404b4192*/  jz short loc_1404B4170
/*1404b4194*/  mov rcx, [rsi]
/*1404b4197*/  mov r8d, 1
/*1404b419d*/  call sub_140001660
/*1404b41a2*/  jmp short loc_1404B4170
loc_1404B41A4: /*1404b41a4*/ mov rdx, [rbp+440h+var_348]
/*1404b41ab*/  test rdx, rdx
/*1404b41ae*/  jz short loc_1404B41C6
/*1404b41b0*/  shl rdx, 5
/*1404b41b4*/  mov r8d, 8
/*1404b41ba*/  mov rcx, [rbp+440h+var_358]
/*1404b41c1*/  call sub_140001660
loc_1404B41C6: /*1404b41c6*/ mov rsi, [rbp+440h+var_278]
/*1404b41cd*/  mov r14, [rbp+440h+var_270]
/*1404b41d4*/  test r14, r14
/*1404b41d7*/  jz loc_1404B45AB
loc_1404B41DD: /*1404b41dd*/ mov rax, [rbp+440h+var_390]
/*1404b41e4*/  mov rdx, [rax+308h]
/*1404b41eb*/  mov r8, [rax+310h]
/*1404b41f2*/  lea rcx, [rbp+440h+var_140]
/*1404b41f9*/  mov [rbp+440h+var_50], rdx
/*1404b4200*/  mov [rbp+440h+var_D0], r8
/*1404b4207*/  call load_model_restore_journal
/*1404b420c*/  nop
/*1404b420d*/  mov dword ptr [rbp+440h+var_130+8], 1
/*1404b4217*/  lea rdi, [r14+r14*2]
/*1404b421b*/  shl rdi, 4
/*1404b421f*/  add rdi, rsi
/*1404b4222*/  lea r15, [rbp+440h+var_140]
/*1404b4229*/  lea r12, [rbp+440h+var_1E0]
/*1404b4230*/  mov r13, rsi
/*1404b4233*/  cmp r13, rdi
/*1404b4236*/  jz loc_1404B43AC
loc_1404B423C: /*1404b423c*/ mov rcx, r15
/*1404b423f*/  mov rdx, r13
/*1404b4242*/  call sub_1402B0ED0
/*1404b4247*/  nop
/*1404b4248*/  mov rcx, r12
/*1404b424b*/  mov rdx, r13
/*1404b424e*/  call sub_14149C500
/*1404b4253*/  nop
loc_1404B4254: /*1404b4254*/ lea rdx, [r13+18h]
/*1404b4258*/  lea rcx, [rbp+440h+var_250]
/*1404b425f*/  call sub_14149C500
/*1404b4264*/  nop
loc_1404B4265: /*1404b4265*/ add r13, 30h ; '0'
/*1404b4269*/  cmp [rbp+440h+var_318], 0
/*1404b4271*/  js loc_1404B4597
/*1404b4277*/  mov [rbp+440h+var_C8], rsi
/*1404b427e*/  mov rsi, r15
/*1404b4281*/  jz short loc_1404B42C2
/*1404b4283*/  call nullsub_1
/*1404b4288*/  mov r12d, 1
/*1404b428e*/  mov edx, 1
/*1404b4293*/  mov r15, [rbp+440h+var_318]
/*1404b429a*/  mov rcx, r15
/*1404b429d*/  call sub_140001650
/*1404b42a2*/  test rax, rax
/*1404b42a5*/  jz loc_1404B48A9
/*1404b42ab*/  mov rbx, rax
/*1404b42ae*/  mov rcx, rax
/*1404b42b1*/  mov rdx, [rbp+440h+var_388]
/*1404b42b8*/  mov r8, r15
/*1404b42bb*/  call sub_141684120
/*1404b42c0*/  jmp short loc_1404B42CE
loc_1404B42C2: /*1404b42c2*/ mov ebx, 1
/*1404b42c7*/  mov r15, [rbp+440h+var_318]
loc_1404B42CE: /*1404b42ce*/ mov rax, qword ptr [rbp+440h+var_1D0]
/*1404b42d5*/  mov qword ptr [rbp+440h+var_B0], rax
/*1404b42dc*/  movups xmm0, [rbp+440h+var_1E0]
/*1404b42e3*/  movaps [rbp+440h+var_C0], xmm0
/*1404b42ea*/  mov rax, qword ptr [rbp+440h+var_240]
/*1404b42f1*/  lea rcx, [rbp+440h+var_B0+8]
/*1404b42f8*/  mov [rcx+10h], rax
/*1404b42fc*/  movups xmm0, [rbp+440h+var_250]
/*1404b4303*/  movups xmmword ptr [rcx], xmm0
/*1404b4306*/  mov qword ptr [rbp+440h+var_90], r15
/*1404b430d*/  mov qword ptr [rbp+440h+var_90+8], rbx
/*1404b4314*/  mov qword ptr [rbp+440h+var_80], r15
/*1404b431b*/  mov dword ptr [rbp+440h+var_80+8], 0
/*1404b4325*/  mov r12, qword ptr [rbp+440h+var_130]
/*1404b432c*/  cmp r12, qword ptr [rbp+440h+var_140]
/*1404b4333*/  mov r15, rsi
/*1404b4336*/  jnz short loc_1404B4341
loc_1404B4338: /*1404b4338*/ mov rcx, r15
/*1404b433b*/  call sub_141689180
/*1404b4340*/  nop
loc_1404B4341: /*1404b4341*/ mov rax, qword ptr [rbp+440h+var_140+8]
/*1404b4348*/  lea rcx, [r12+r12*4]
/*1404b434c*/  shl rcx, 4
/*1404b4350*/  movaps xmm0, [rbp+440h+var_80]
/*1404b4357*/  movups xmmword ptr [rax+rcx+40h], xmm0
/*1404b435c*/  movaps xmm0, [rbp+440h+var_C0]
/*1404b4363*/  movaps xmm1, [rbp+440h+var_B0]
/*1404b436a*/  movaps xmm2, [rbp+440h+var_A0]
/*1404b4371*/  movaps xmm3, [rbp+440h+var_90]
/*1404b4378*/  movups xmmword ptr [rax+rcx+30h], xmm3
/*1404b437d*/  movups xmmword ptr [rax+rcx+20h], xmm2
/*1404b4382*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404b4387*/  movups xmmword ptr [rax+rcx], xmm0
/*1404b438b*/  inc r12
/*1404b438e*/  mov qword ptr [rbp+440h+var_130], r12
/*1404b4395*/  mov rsi, [rbp+440h+var_C8]
/*1404b439c*/  lea r12, [rbp+440h+var_1E0]
/*1404b43a3*/  cmp r13, rdi
/*1404b43a6*/  jnz loc_1404B423C
loc_1404B43AC: /*1404b43ac*/ mov [rsp+4C0h+var_4A0], 19h
/*1404b43b5*/  lea r9, unk_14175B73B
/*1404b43bc*/  lea rcx, [rbp+440h+var_250]
/*1404b43c3*/  mov rdx, [rbp+440h+var_50]
/*1404b43ca*/  mov r8, [rbp+440h+var_D0]
/*1404b43d1*/  call sub_141473FA0
/*1404b43d6*/  nop
/*1404b43d7*/  mov rcx, qword ptr [rbp+440h+var_250+8]
/*1404b43de*/  mov rdi, qword ptr [rbp+440h+var_240]
loc_1404B43E5: /*1404b43e5*/ mov [rbp+440h+var_C8], rcx
/*1404b43ec*/  mov rdx, rdi
/*1404b43ef*/  call sub_1414740B0
/*1404b43f4*/  nop
/*1404b43f5*/  test rax, rax
/*1404b43f8*/  jz short loc_1404B442D
/*1404b43fa*/  mov r8, rdx
/*1404b43fd*/  mov byte ptr [rbp+440h+var_C0], 1
/*1404b4404*/  lea rcx, [rbp+440h+var_C0]
/*1404b440b*/  mov rdx, rax
/*1404b440e*/  call sub_14147B9A0
/*1404b4413*/  nop
/*1404b4414*/  mov qword ptr [rbp+440h+var_C0], rax
/*1404b441b*/  test rax, rax
/*1404b441e*/  jz short loc_1404B442D
/*1404b4420*/  lea rcx, [rbp+440h+var_C0]
/*1404b4427*/  call sub_140018650
/*1404b442c*/  nop
loc_1404B442D: /*1404b442d*/ lea rcx, [rbp+440h+var_1E0]
/*1404b4434*/  lea rdx, [rbp+440h+var_140]
/*1404b443b*/  call sub_140440F40
/*1404b4440*/  nop
/*1404b4441*/  mov rax, qword ptr [rbp+440h+var_1E0]
/*1404b4448*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404b444c*/  jz loc_1404B45FE
/*1404b4452*/  mov [rbp+440h+var_50], rax
/*1404b4459*/  mov r8, qword ptr [rbp+440h+var_1E0+8]
/*1404b4460*/  mov r9, qword ptr [rbp+440h+var_1D0]
loc_1404B4467: /*1404b4467*/ mov rcx, [rbp+440h+var_C8]
/*1404b446e*/  mov rdx, rdi
/*1404b4471*/  mov [rbp+440h+var_D0], r8
/*1404b4478*/  call sub_14148D5C0
/*1404b447d*/  nop
/*1404b447e*/  mov rdi, rax
/*1404b4481*/  mov rdx, [rbp+440h+var_50]
/*1404b4488*/  test rdx, rdx
/*1404b448b*/  jz short loc_1404B449F
/*1404b448d*/  mov r8d, 1
/*1404b4493*/  mov rcx, [rbp+440h+var_D0]
/*1404b449a*/  call sub_140001660
loc_1404B449F: /*1404b449f*/ test rdi, rdi
/*1404b44a2*/  jz loc_1404B4765
/*1404b44a8*/  mov qword ptr [rbp+440h+var_310], rdi
/*1404b44af*/  mov rax, cs:off_141EC8D80
/*1404b44b6*/  mov rax, [rax]
/*1404b44b9*/  cmp rax, 2
/*1404b44bd*/  jb loc_1404B4585
/*1404b44c3*/  lea rax, [rbp+440h+var_310]
/*1404b44ca*/  mov qword ptr [rbp+440h+var_2D0], rax
/*1404b44d1*/  lea rax, sub_141490720
/*1404b44d8*/  mov qword ptr [rbp+440h+var_2D0+8], rax
/*1404b44df*/  mov qword ptr [rbp+440h+var_C0], 0
/*1404b44ea*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404b44f1*/  mov qword ptr [rbp+440h+var_C0+8], rax
/*1404b44f8*/  mov qword ptr [rbp+440h+var_B0], 33h ; '3'
/*1404b4503*/  mov qword ptr [rbp+440h+var_B0+8], 0
/*1404b450e*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404b4515*/  mov qword ptr [rbp+440h+var_A0], rcx
/*1404b451c*/  mov qword ptr [rbp+440h+var_A0+8], 29h ; ')'
/*1404b4527*/  mov qword ptr [rbp+440h+var_90], 2
/*1404b4532*/  mov qword ptr [rbp+440h+var_90+8], rax
/*1404b4539*/  mov qword ptr [rbp+440h+var_80], 33h ; '3'
/*1404b4544*/  mov rax, 93500000001h
/*1404b454e*/  mov qword ptr [rbp+440h+var_80+8], rax
/*1404b4555*/  lea rax, unk_14175BF53
/*1404b455c*/  mov [rbp+440h+var_70], rax
/*1404b4563*/  lea rax, [rbp+440h+var_2D0]
/*1404b456a*/  mov [rbp+440h+var_68], rax
loc_1404B4571: /*1404b4571*/ lea rcx, [rbp+440h+var_44]
/*1404b4578*/  lea rdx, [rbp+440h+var_C0]
/*1404b457f*/  call sub_1412C36A0
/*1404b4584*/  nop
loc_1404B4585: /*1404b4585*/ lea rcx, [rbp+440h+var_310]
/*1404b458c*/  call sub_140018650
/*1404b4591*/  nop
/*1404b4592*/  jmp loc_1404B4765
loc_1404B4597: /*1404b4597*/ xor r12d, r12d
loc_1404B459A: /*1404b459a*/ mov rcx, r12
/*1404b459d*/  mov rdx, rbx
/*1404b45a0*/  call sub_1416C2D4B
/*1404b45a6*/  jmp loc_1404B48A7
loc_1404B45AB: /*1404b45ab*/ mov rax, [rbp+440h+var_260]
/*1404b45b2*/  mov qword ptr [rax+8], 0
/*1404b45ba*/  mov qword ptr [rax], 0FFFFFFFFFFFFFFFFh
loc_1404B45C1: /*1404b45c1*/ mov rax, [rbp+440h+var_280]
/*1404b45c8*/  test rax, rax
/*1404b45cb*/  jz short loc_1404B45E3
/*1404b45cd*/  shl rax, 4
/*1404b45d1*/  lea rdx, [rax+rax*2]
/*1404b45d5*/  mov r8d, 8
/*1404b45db*/  mov rcx, rsi
/*1404b45de*/  call sub_140001660
loc_1404B45E3: /*1404b45e3*/ mov rax, [rbp+440h+var_260]
/*1404b45ea*/  add rsp, 488h
/*1404b45f1*/  pop rbx
/*1404b45f2*/  pop rdi
/*1404b45f3*/  pop rsi
/*1404b45f4*/  pop r12
/*1404b45f6*/  pop r13
/*1404b45f8*/  pop r14
/*1404b45fa*/  pop r15
/*1404b45fc*/  pop rbp
/*1404b45fd*/  retn
loc_1404B45FE: /*1404b45fe*/ mov rcx, qword ptr [rbp+440h+var_1E0+8]
/*1404b4605*/  mov qword ptr [rbp+440h+var_310], rcx
/*1404b460c*/  mov rax, cs:off_141EC8D80
/*1404b4613*/  mov rax, [rax]
/*1404b4616*/  cmp rax, 2
/*1404b461a*/  jb loc_1404B46E9
/*1404b4620*/  lea rax, [rbp+440h+var_310]
/*1404b4627*/  mov qword ptr [rbp+440h+var_2D0], rax
/*1404b462e*/  lea rax, sub_14142D3F0
/*1404b4635*/  mov qword ptr [rbp+440h+var_2D0+8], rax
/*1404b463c*/  mov qword ptr [rbp+440h+var_C0], 0
/*1404b4647*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404b464e*/  mov qword ptr [rbp+440h+var_C0+8], rax
/*1404b4655*/  mov qword ptr [rbp+440h+var_B0], 33h ; '3'
/*1404b4660*/  mov qword ptr [rbp+440h+var_B0+8], 0
/*1404b466b*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404b4672*/  mov qword ptr [rbp+440h+var_A0], rcx
/*1404b4679*/  mov qword ptr [rbp+440h+var_A0+8], 29h ; ')'
/*1404b4684*/  mov qword ptr [rbp+440h+var_90], 2
/*1404b468f*/  mov qword ptr [rbp+440h+var_90+8], rax
/*1404b4696*/  mov qword ptr [rbp+440h+var_80], 33h ; '3'
/*1404b46a1*/  mov rax, 93800000001h
/*1404b46ab*/  mov qword ptr [rbp+440h+var_80+8], rax
/*1404b46b2*/  lea rax, unk_14175BF84
/*1404b46b9*/  mov [rbp+440h+var_70], rax
/*1404b46c0*/  lea rax, [rbp+440h+var_2D0]
/*1404b46c7*/  mov [rbp+440h+var_68], rax
loc_1404B46CE: /*1404b46ce*/ lea rcx, [rbp+440h+var_44]
/*1404b46d5*/  lea rdx, [rbp+440h+var_C0]
/*1404b46dc*/  call sub_1412C36A0
/*1404b46e1*/  nop
/*1404b46e2*/  mov rcx, qword ptr [rbp+440h+var_310]
loc_1404B46E9: /*1404b46e9*/ mov rax, [rcx]
/*1404b46ec*/  cmp rax, 1
/*1404b46f0*/  mov [rbp+440h+var_50], rcx
/*1404b46f7*/  jz short loc_1404B4744
/*1404b46f9*/  test rax, rax
/*1404b46fc*/  jnz short loc_1404B474E
/*1404b46fe*/  mov rax, [rbp+440h+var_50]
/*1404b4705*/  mov rdx, [rax+10h]
/*1404b4709*/  test rdx, rdx
/*1404b470c*/  jz short loc_1404B474E
/*1404b470e*/  mov rax, [rbp+440h+var_50]
/*1404b4715*/  mov rcx, [rax+8]
/*1404b4719*/  mov r8d, 1
/*1404b471f*/  call sub_140001660
/*1404b4724*/  jmp short loc_1404B474E
loc_1404B4726: /*1404b4726*/ lea rcx, aInternalErrorE_2; "internal error: entered unreachable cod"...
/*1404b472d*/  lea r8, off_14175C660; "src\\core\\relay\\codex_thread_visibili"...
/*1404b4734*/  mov edx, 0A5h
/*1404b4739*/  call sub_1416C32C0
/*1404b473f*/  jmp loc_1404B48A7
loc_1404B4744: /*1404b4744*/ add rcx, 8
loc_1404B4748: /*1404b4748*/ call sub_140018650
/*1404b474d*/  nop
loc_1404B474E: /*1404b474e*/ mov edx, 28h ; '('
/*1404b4753*/  mov r8d, 8
/*1404b4759*/  mov rcx, [rbp+440h+var_50]
/*1404b4760*/  call sub_140001660
loc_1404B4765: /*1404b4765*/ mov rdx, qword ptr [rbp+440h+var_250]
/*1404b476c*/  test rdx, rdx
/*1404b476f*/  jz short loc_1404B4783
/*1404b4771*/  mov r8d, 1
/*1404b4777*/  mov rcx, [rbp+440h+var_C8]
/*1404b477e*/  call sub_140001660
loc_1404B4783: /*1404b4783*/ mov rdi, qword ptr [rbp+440h+var_130]
/*1404b478a*/  test rdi, rdi
/*1404b478d*/  jz short loc_1404B47F2
/*1404b478f*/  mov rbx, qword ptr [rbp+440h+var_140+8]
/*1404b4796*/  add rbx, 38h ; '8'
/*1404b479a*/  jmp short loc_1404B47A9
loc_1404B47A0: /*1404b47a0*/ add rbx, 50h ; 'P'
/*1404b47a4*/  dec rdi
/*1404b47a7*/  jz short loc_1404B47F2
loc_1404B47A9: /*1404b47a9*/ mov rdx, [rbx-38h]
/*1404b47ad*/  test rdx, rdx
/*1404b47b0*/  jz short loc_1404B47C1
/*1404b47b2*/  mov rcx, [rbx-30h]
/*1404b47b6*/  mov r8d, 1
/*1404b47bc*/  call sub_140001660
loc_1404B47C1: /*1404b47c1*/ mov rdx, [rbx-20h]
/*1404b47c5*/  test rdx, rdx
/*1404b47c8*/  jz short loc_1404B47D9
/*1404b47ca*/  mov rcx, [rbx-18h]
/*1404b47ce*/  mov r8d, 1
/*1404b47d4*/  call sub_140001660
loc_1404B47D9: /*1404b47d9*/ mov rdx, [rbx-8]
/*1404b47dd*/  test rdx, rdx
/*1404b47e0*/  jz short loc_1404B47A0
/*1404b47e2*/  mov rcx, [rbx]
/*1404b47e5*/  mov r8d, 1
/*1404b47eb*/  call sub_140001660
/*1404b47f0*/  jmp short loc_1404B47A0
loc_1404B47F2: /*1404b47f2*/ mov rax, qword ptr [rbp+440h+var_140]
/*1404b47f9*/  test rax, rax
/*1404b47fc*/  jz short loc_1404B4818
/*1404b47fe*/  mov rcx, qword ptr [rbp+440h+var_140+8]
/*1404b4805*/  shl rax, 4
/*1404b4809*/  lea rdx, [rax+rax*4]
/*1404b480d*/  mov r8d, 8
/*1404b4813*/  call sub_140001660
loc_1404B4818: /*1404b4818*/ mov rax, [rbp+440h+var_260]
/*1404b481f*/  mov [rax+8], r14
/*1404b4823*/  mov qword ptr [rax], 0FFFFFFFFFFFFFFFFh
/*1404b482a*/  lea rdi, [rsi+20h]
/*1404b482e*/  jmp short loc_1404B483D
loc_1404B4830: /*1404b4830*/ add rdi, 30h ; '0'
/*1404b4834*/  dec r14
/*1404b4837*/  jz loc_1404B45C1
loc_1404B483D: /*1404b483d*/ mov rdx, [rdi-20h]
/*1404b4841*/  test rdx, rdx
/*1404b4844*/  jz short loc_1404B4855
/*1404b4846*/  mov rcx, [rdi-18h]
/*1404b484a*/  mov r8d, 1
/*1404b4850*/  call sub_140001660
loc_1404B4855: /*1404b4855*/ mov rdx, [rdi-8]
/*1404b4859*/  test rdx, rdx
/*1404b485c*/  jz short loc_1404B4830
/*1404b485e*/  mov rcx, [rdi]
/*1404b4861*/  mov r8d, 1
/*1404b4867*/  call sub_140001660
/*1404b486c*/  jmp short loc_1404B4830
loc_1404B486E: /*1404b486e*/ mov [rbp+440h+var_41], 0
/*1404b4875*/  mov [rbp+440h+var_42], 1
loc_1404B487C: /*1404b487c*/ lea rcx, off_141758678; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1404b4883*/  call sub_1416C2FC0
/*1404b4889*/  jmp short loc_1404B48A7
loc_1404B488B: /*1404b488b*/ lea rcx, off_141758678; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1404b4892*/  call sub_1416C2FC0
/*1404b4898*/  jmp short loc_1404B48A7
loc_1404B489A: /*1404b489a*/ lea rcx, off_141758678; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1404b48a1*/  call sub_1416C2FC0
loc_1404B48A7: /*1404b48a7*/ ud2
loc_1404B48A9: /*1404b48a9*/ mov rbx, r15
/*1404b48ac*/  jmp loc_1404B459A
