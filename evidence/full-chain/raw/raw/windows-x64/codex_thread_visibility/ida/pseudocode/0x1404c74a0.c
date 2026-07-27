// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=2849 fetched=2849 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::repair_missing_rollouts_for_convergence | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall repair_missing_rollouts_for_convergence(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int128 v10; // kr10_16
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  const char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int128 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; ... [93161 chars total]

// ---- full disassembly reconstruction (2849/2849 instructions) ----
repair_missing_rollouts_for_convergence: /*1404c74a0*/ push rbp
/*1404c74a1*/  push r15
/*1404c74a3*/  push r14
/*1404c74a5*/  push r13
/*1404c74a7*/  push r12
/*1404c74a9*/  push rsi
/*1404c74aa*/  push rdi
/*1404c74ab*/  push rbx
/*1404c74ac*/  sub rsp, 538h
/*1404c74b3*/  lea rbp, [rsp+80h]
/*1404c74bb*/  mov [rbp+4F0h+var_40], 0FFFFFFFFFFFFFFFEh
/*1404c74c6*/  mov r13, rdx
/*1404c74c9*/  mov [rbp+4F0h+var_1E8], rcx
/*1404c74d0*/  xorps xmm0, xmm0
/*1404c74d3*/  movups [rbp+4F0h+var_3E8+8], xmm0
/*1404c74da*/  movups [rbp+4F0h+var_3F8+8], xmm0
/*1404c74e1*/  mov qword ptr [rbp+4F0h+var_3D8+8], 0
/*1404c74ec*/  mov qword ptr [rbp+4F0h+var_418+8], 0FFFFFFFFFFFFFFFFh
/*1404c74f7*/  mov qword ptr [rbp+4F0h+var_428], 0
/*1404c7502*/  mov qword ptr [rbp+4F0h+var_428+8], 8
/*1404c750d*/  mov qword ptr [rbp+4F0h+var_418], 0
/*1404c7518*/  mov [rbp+4F0h+var_1D0], 0
/*1404c7523*/  mov [rbp+4F0h+var_1C8], 8
/*1404c752e*/  mov [rbp+4F0h+var_1C0], 0
loc_1404C7539: /*1404c7539*/ lea rcx, [rbp+4F0h+var_110]
/*1404c7540*/  call sub_140712830
/*1404c7545*/  nop
/*1404c7546*/  mov rax, qword ptr [rbp+4F0h+var_110]
/*1404c754d*/  mov [rbp+4F0h+var_458], rax
/*1404c7554*/  mov r14, qword ptr [rbp+4F0h+var_110+8]
/*1404c755b*/  mov rax, qword ptr [rbp+4F0h+var_100]
/*1404c7562*/  shl rax, 5
/*1404c7566*/  lea rdx, [r14+rax]
/*1404c756a*/  mov [rbp+4F0h+var_3C8], rdx
/*1404c7571*/  lea rsi, [r14+rax]
/*1404c7575*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*1404c7579*/  mov rax, [r13+308h]
/*1404c7580*/  mov [rbp+4F0h+var_4E8], rax
/*1404c7584*/  mov rax, [r13+310h]
/*1404c758b*/  mov [rbp+4F0h+var_4E0], rax
/*1404c758f*/  lea rdi, [rbp+4F0h+var_280+8]
/*1404c7596*/  lea r12, [rbp+4F0h+var_110]
/*1404c759d*/  mov [rbp+4F0h+var_450], r14
/*1404c75a4*/  mov [rbp+4F0h+var_4D8], rsi
loc_1404C75A8: /*1404c75a8*/ sub rsi, r14
/*1404c75ab*/  lea rbx, [r14+28h]
/*1404c75af*/  mov rax, r14
/*1404c75b2*/  jmp short loc_1404C7612
loc_1404C75C0: /*1404c75c0*/ mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c75c7*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404c75ce*/  mov qword ptr [rbp+4F0h+var_280], 2
loc_1404C75D9: /*1404c75d9*/ mov rcx, rdi
/*1404c75dc*/  call sub_140018650
/*1404c75e1*/  nop
loc_1404C75E2: /*1404c75e2*/ mov rsi, [rbp+4F0h+var_1B0]
/*1404c75e9*/  add rsi, 0FFFFFFFFFFFFFFE0h
/*1404c75ed*/  mov rbx, [rbp+4F0h+var_460]
/*1404c75f4*/  add rbx, 20h ; ' '
/*1404c75f8*/  mov r14, [rbp+4F0h+var_98]
/*1404c75ff*/  mov rax, r14
/*1404c7602*/  mov rdx, [rbp+4F0h+var_90]
/*1404c7609*/  test rdx, rdx
/*1404c760c*/  jnz loc_1404C7850
loc_1404C7612: /*1404c7612*/ cmp rax, [rbp+4F0h+var_3C8]
/*1404c7619*/  jz loc_1404C93A2
/*1404c761f*/  lea rcx, [rax+20h]
/*1404c7623*/  mov rdx, [rax]
/*1404c7626*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404c762a*/  jz loc_1404C9366
/*1404c7630*/  mov [rbp+4F0h+var_90], rdx
/*1404c7637*/  mov [rbp+4F0h+var_98], rcx
/*1404c763e*/  mov [rbp+4F0h+var_460], rbx
/*1404c7645*/  mov [rbp+4F0h+var_1B0], rsi
/*1404c764c*/  mov rdx, [rax+8]
/*1404c7650*/  mov r15, [rax+10h]
/*1404c7654*/  mov rcx, r12
/*1404c7657*/  mov [rbp+4F0h+var_1F0], rdx
/*1404c765e*/  mov r8, r15
/*1404c7661*/  call sub_141486710
/*1404c7666*/  nop
/*1404c7667*/  cmp dword ptr [rbp+4F0h+var_110], 2
/*1404c766e*/  jz loc_1404C75C0
/*1404c7674*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c767b*/  movups xmm1, [rbp+4F0h+var_100]
/*1404c7682*/  movups xmm2, [rbp+4F0h+var_F0]
/*1404c7689*/  movups xmm3, [rbp+4F0h+var_E0]
/*1404c7690*/  movaps [rbp+4F0h+var_280], xmm0
/*1404c7697*/  mov rax, qword ptr [rbp+4F0h+var_C0]
/*1404c769e*/  mov qword ptr [rbp+4F0h+var_230], rax
/*1404c76a5*/  movups xmm0, [rbp+4F0h+var_D0]
/*1404c76ac*/  movaps [rbp+4F0h+var_240], xmm0
/*1404c76b3*/  movaps [rbp+4F0h+var_250], xmm3
/*1404c76ba*/  movaps [rbp+4F0h+var_260], xmm2
/*1404c76c1*/  movaps [rbp+4F0h+var_270], xmm1
/*1404c76c8*/  cmp qword ptr [rbp+4F0h+var_280], 2
/*1404c76d0*/  jz loc_1404C75D9
/*1404c76d6*/  mov rcx, r12
/*1404c76d9*/  mov rdx, [rbp+4F0h+var_1F0]
/*1404c76e0*/  mov r8, r15
/*1404c76e3*/  call open_codex_db_for_convergence
/*1404c76e8*/  nop
/*1404c76e9*/  movzx eax, [rbp+4F0h+var_A8]
/*1404c76f0*/  cmp al, 0FFh
/*1404c76f2*/  jz loc_1404C957D
/*1404c76f8*/  mov rcx, [rbp+4F0h+var_B0]
/*1404c76ff*/  mov [rbp+4F0h+var_120], rcx
/*1404c7706*/  movups xmm0, [rbp+4F0h+var_C0]
/*1404c770d*/  movaps [rbp+4F0h+var_130], xmm0
/*1404c7714*/  movups xmm0, [rbp+4F0h+var_D0]
/*1404c771b*/  movaps [rbp+4F0h+var_140], xmm0
/*1404c7722*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c7729*/  movups xmm1, [rbp+4F0h+var_100]
/*1404c7730*/  movups xmm2, [rbp+4F0h+var_F0]
/*1404c7737*/  movups xmm3, [rbp+4F0h+var_E0]
/*1404c773e*/  movaps [rbp+4F0h+var_150], xmm3
/*1404c7745*/  movaps [rbp+4F0h+var_160], xmm2
/*1404c774c*/  movaps [rbp+4F0h+var_170], xmm1
/*1404c7753*/  movaps [rbp+4F0h+var_180], xmm0
/*1404c775a*/  lea rdx, [rbp+4F0h+var_A7]
/*1404c7761*/  mov ecx, [rdx]
/*1404c7763*/  mov edx, [rdx+3]
/*1404c7766*/  lea r8, [rbp+4F0h+var_217]
/*1404c776d*/  mov [r8+3], edx
/*1404c7771*/  mov [r8], ecx
/*1404c7774*/  movaps xmm0, [rbp+4F0h+var_180]
/*1404c777b*/  movaps xmm1, [rbp+4F0h+var_170]
/*1404c7782*/  movaps xmm2, [rbp+4F0h+var_160]
/*1404c7789*/  movaps xmm3, [rbp+4F0h+var_150]
/*1404c7790*/  movaps [rbp+4F0h+var_280], xmm0
/*1404c7797*/  movaps [rbp+4F0h+var_270], xmm1
/*1404c779e*/  movaps [rbp+4F0h+var_260], xmm2
/*1404c77a5*/  movaps [rbp+4F0h+var_250], xmm3
/*1404c77ac*/  movaps xmm0, [rbp+4F0h+var_140]
/*1404c77b3*/  movaps [rbp+4F0h+var_240], xmm0
/*1404c77ba*/  movaps xmm0, [rbp+4F0h+var_130]
/*1404c77c1*/  movaps [rbp+4F0h+var_230], xmm0
/*1404c77c8*/  mov rcx, [rbp+4F0h+var_120]
/*1404c77cf*/  mov [rbp+4F0h+var_220], rcx
/*1404c77d6*/  mov [rbp+4F0h+var_218], al
loc_1404C77DC: /*1404c77dc*/ mov rcx, r12
/*1404c77df*/  lea rdx, [rbp+4F0h+var_280]
/*1404c77e6*/  call collect_provider_convergence_targets
/*1404c77eb*/  nop
/*1404c77ec*/  mov r8, qword ptr [rbp+4F0h+var_110]
/*1404c77f3*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c77fa*/  mov rcx, qword ptr [rbp+4F0h+var_100]
/*1404c7801*/  mov rdx, qword ptr [rbp+4F0h+var_100+8]
/*1404c7808*/  cmp r8, 0FFFFFFFFFFFFFFFFh
/*1404c780c*/  jnz loc_1404C95F9
/*1404c7812*/  add qword ptr [rbp+4F0h+var_3F8+8], rdx
/*1404c7819*/  test rdx, rdx
/*1404c781c*/  jnz short loc_1404C786B
/*1404c781e*/  test rax, rax
/*1404c7821*/  jz short loc_1404C7837
/*1404c7823*/  shl rax, 4
/*1404c7827*/  lea rdx, [rax+rax*4]
/*1404c782b*/  mov r8d, 8
/*1404c7831*/  call sub_140001660
/*1404c7836*/  nop
loc_1404C7837: /*1404c7837*/ lea rcx, [rbp+4F0h+var_280]
/*1404c783e*/  call sub_14043C900
/*1404c7843*/  nop
/*1404c7844*/  jmp loc_1404C75E2
loc_1404C7850: /*1404c7850*/ mov rsi, [rbp+4F0h+var_4D8]
loc_1404C7854: /*1404c7854*/ mov r8d, 1
/*1404c785a*/  mov rcx, [rbp+4F0h+var_1F0]
/*1404c7861*/  call sub_140001660
/*1404c7866*/  jmp loc_1404C75A8
loc_1404C786B: /*1404c786b*/ mov [rbp+4F0h+var_4D0], r13
/*1404c786f*/  lea rsi, [rdx+rdx*4]
/*1404c7873*/  shl rsi, 4
/*1404c7877*/  add rsi, rcx
/*1404c787a*/  mov qword ptr [rbp+4F0h+var_480], rcx
/*1404c787e*/  mov qword ptr [rbp+4F0h+var_480+8], rcx
/*1404c7882*/  mov [rbp+4F0h+var_470], rax
/*1404c7889*/  mov [rbp+4F0h+var_468], rsi
/*1404c7890*/  mov [rbp+4F0h+var_2A8], 0
/*1404c789a*/  mov [rbp+4F0h+var_2A4], 0
loc_1404C78A4: /*1404c78a4*/ cmp rcx, rsi
/*1404c78a7*/  jz loc_1404C9308
/*1404c78ad*/  lea rax, [rcx+50h]
/*1404c78b1*/  mov [rbp+4F0h+var_4C8], rax
/*1404c78b5*/  mov qword ptr [rbp+4F0h+var_480+8], rax
/*1404c78b9*/  mov rax, [rcx]
/*1404c78bc*/  mov rdx, [rcx+48h]
/*1404c78c0*/  mov [rbp+4F0h+var_2B0], rdx
/*1404c78c7*/  movups xmm0, xmmword ptr [rcx+38h]
/*1404c78cb*/  movaps [rbp+4F0h+var_2C0], xmm0
/*1404c78d2*/  movups xmm0, xmmword ptr [rcx+28h]
/*1404c78d6*/  movaps [rbp+4F0h+var_2D0], xmm0
/*1404c78dd*/  movups xmm0, xmmword ptr [rcx+18h]
/*1404c78e1*/  movaps [rbp+4F0h+var_2E0], xmm0
/*1404c78e8*/  movups xmm0, xmmword ptr [rcx+8]
/*1404c78ec*/  movaps [rbp+4F0h+var_2F0], xmm0
/*1404c78f3*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404c78f7*/  jz loc_1404C9308
/*1404c78fd*/  mov qword ptr [rbp+4F0h+var_358], rax
/*1404c7904*/  mov rax, [rbp+4F0h+var_2B0]
/*1404c790b*/  lea rcx, [rbp+4F0h+var_358+8]
/*1404c7912*/  mov [rcx+40h], rax
/*1404c7916*/  movaps xmm0, [rbp+4F0h+var_2F0]
/*1404c791d*/  movaps xmm1, [rbp+4F0h+var_2E0]
/*1404c7924*/  movaps xmm2, [rbp+4F0h+var_2D0]
/*1404c792b*/  movaps xmm3, [rbp+4F0h+var_2C0]
/*1404c7932*/  movups xmmword ptr [rcx+30h], xmm3
/*1404c7936*/  movups xmmword ptr [rcx+20h], xmm2
/*1404c793a*/  movups xmmword ptr [rcx+10h], xmm1
/*1404c793e*/  movups xmmword ptr [rcx], xmm0
/*1404c7941*/  mov r13, [rbp+4F0h+var_328]
/*1404c7948*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404c794c*/  jz loc_1404C845C
/*1404c7952*/  mov rdx, [rbp+4F0h+var_320]
/*1404c7959*/  mov r8, [rbp+4F0h+var_318]
loc_1404C7960: /*1404c7960*/ mov rcx, r12
/*1404c7963*/  call sub_141486710
/*1404c7968*/  nop
/*1404c7969*/  cmp dword ptr [rbp+4F0h+var_110], 2
/*1404c7970*/  jnz short loc_1404C798D
/*1404c7972*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c7979*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404c7980*/  mov qword ptr [rbp+4F0h+var_180], 2
/*1404c798b*/  jmp short loc_1404C79EF
loc_1404C798D: /*1404c798d*/ movups xmm0, [rbp+4F0h+var_110]
/*1404c7994*/  movups xmm1, [rbp+4F0h+var_100]
/*1404c799b*/  movups xmm2, [rbp+4F0h+var_F0]
/*1404c79a2*/  movups xmm3, [rbp+4F0h+var_E0]
/*1404c79a9*/  movaps [rbp+4F0h+var_180], xmm0
/*1404c79b0*/  mov rax, qword ptr [rbp+4F0h+var_C0]
/*1404c79b7*/  mov qword ptr [rbp+4F0h+var_130], rax
/*1404c79be*/  movups xmm0, [rbp+4F0h+var_D0]
/*1404c79c5*/  movaps [rbp+4F0h+var_140], xmm0
/*1404c79cc*/  movaps [rbp+4F0h+var_150], xmm3
/*1404c79d3*/  movaps [rbp+4F0h+var_160], xmm2
/*1404c79da*/  movaps [rbp+4F0h+var_170], xmm1
/*1404c79e1*/  cmp qword ptr [rbp+4F0h+var_180], 2
/*1404c79e9*/  jnz loc_1404C87D9
loc_1404C79EF: /*1404c79ef*/ lea rcx, [rbp+4F0h+var_180+8]
/*1404c79f6*/  call sub_140018650
/*1404c79fb*/  nop
/*1404c79fc*/  inc qword ptr [rbp+4F0h+var_3E8]
/*1404c7a03*/  mov r8, qword ptr [rbp+4F0h+var_358+8]
/*1404c7a0a*/  mov r9, [rbp+4F0h+var_348]
/*1404c7a11*/  mov rcx, [rbp+4F0h+var_320]
/*1404c7a18*/  mov rax, [rbp+4F0h+var_318]
/*1404c7a1f*/  mov [rbp+4F0h+var_60], rax
/*1404c7a26*/  mov [rsp+570h+var_548], rax
/*1404c7a2b*/  mov [rbp+4F0h+var_50], rcx
/*1404c7a32*/  mov [rsp+570h+var_550], rcx
/*1404c7a37*/  lea rcx, [rbp+4F0h+var_1A8]
/*1404c7a3e*/  mov rdx, [rbp+4F0h+var_4D0]
/*1404c7a42*/  call sub_1404A7190
/*1404c7a47*/  nop
/*1404c7a48*/  mov rax, qword ptr [rbp+4F0h+var_1A8]
/*1404c7a4f*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404c7a53*/  jz loc_1404C8617
/*1404c7a59*/  mov [rbp+4F0h+var_448], rax
/*1404c7a60*/  mov rax, qword ptr [rbp+4F0h+var_1A8+8]
/*1404c7a67*/  mov [rbp+4F0h+var_118], rax
/*1404c7a6e*/  mov rax, [rbp+4F0h+var_198]
/*1404c7a75*/  mov [rbp+4F0h+var_1B8], rax
/*1404c7a7c*/  movups xmm0, [rbp+4F0h+var_358+8]
/*1404c7a83*/  movups [rbp+4F0h+var_438], xmm0
loc_1404C7A8A: /*1404c7a8a*/ lea rcx, [rbp+4F0h+var_180]
/*1404c7a91*/  mov rdx, [rbp+4F0h+var_50]
/*1404c7a98*/  mov r8, [rbp+4F0h+var_60]
/*1404c7a9f*/  call sub_141486710
/*1404c7aa4*/  nop
/*1404c7aa5*/  cmp dword ptr [rbp+4F0h+var_180], 2
/*1404c7aac*/  jnz short loc_1404C7AC9
/*1404c7aae*/  mov rax, qword ptr [rbp+4F0h+var_180+8]
/*1404c7ab5*/  mov qword ptr [rbp+4F0h+var_3B0+8], rax
/*1404c7abc*/  mov qword ptr [rbp+4F0h+var_3B0], 2
/*1404c7ac7*/  jmp short loc_1404C7B2B
loc_1404C7AC9: /*1404c7ac9*/ movups xmm0, [rbp+4F0h+var_180]
/*1404c7ad0*/  movups xmm1, [rbp+4F0h+var_170]
/*1404c7ad7*/  movups xmm2, [rbp+4F0h+var_160]
/*1404c7ade*/  movups xmm3, [rbp+4F0h+var_150]
/*1404c7ae5*/  movaps [rbp+4F0h+var_3B0], xmm0
/*1404c7aec*/  mov rax, qword ptr [rbp+4F0h+var_130]
/*1404c7af3*/  mov [rbp+4F0h+var_360], rax
/*1404c7afa*/  movups xmm0, [rbp+4F0h+var_140]
/*1404c7b01*/  movaps [rbp+4F0h+var_370], xmm0
/*1404c7b08*/  movaps [rbp+4F0h+var_380], xmm3
/*1404c7b0f*/  movaps [rbp+4F0h+var_390], xmm2
/*1404c7b16*/  movaps [rbp+4F0h+var_3A0], xmm1
/*1404c7b1d*/  cmp qword ptr [rbp+4F0h+var_3B0], 2
/*1404c7b25*/  jnz loc_1404C7EB3
loc_1404C7B2B: /*1404c7b2b*/ lea rcx, [rbp+4F0h+var_3B0+8]
/*1404c7b32*/  call sub_140018650
/*1404c7b37*/  nop
/*1404c7b38*/  mov r8, qword ptr [rbp+4F0h+var_438]
/*1404c7b3f*/  mov r9, qword ptr [rbp+4F0h+var_438+8]
/*1404c7b46*/  mov rcx, [rbp+4F0h+var_118]
/*1404c7b4d*/  mov rdx, [rbp+4F0h+var_1B8]
/*1404c7b54*/  call sub_1404B80B0
/*1404c7b59*/  nop
/*1404c7b5a*/  test al, al
/*1404c7b5c*/  jz loc_1404CA97D
/*1404c7b62*/  mov rcx, [rbp+4F0h+var_50]
/*1404c7b69*/  mov rdx, [rbp+4F0h+var_60]
/*1404c7b70*/  call sub_1414740B0
/*1404c7b75*/  nop
/*1404c7b76*/  mov r13, rax
/*1404c7b79*/  test rax, rax
/*1404c7b7c*/  jz loc_1404CAA16
/*1404c7b82*/  mov r14, rdx
/*1404c7b85*/  mov byte ptr [rbp+4F0h+var_180], 1
/*1404c7b8c*/  lea rcx, [rbp+4F0h+var_180]
/*1404c7b93*/  mov rdx, r13
/*1404c7b96*/  mov r8, r14
/*1404c7b99*/  call sub_14147B9A0
/*1404c7b9e*/  nop
/*1404c7b9f*/  test rax, rax
/*1404c7ba2*/  jnz loc_1404CAA75
/*1404c7ba8*/  mov rcx, [rbp+4F0h+var_50]
/*1404c7baf*/  mov rdx, [rbp+4F0h+var_60]
/*1404c7bb6*/  call sub_1414742C0
/*1404c7bbb*/  nop
/*1404c7bbc*/  test rax, rax
/*1404c7bbf*/  jz short loc_1404C7BFF
/*1404c7bc1*/  mov r8, rdx
/*1404c7bc4*/  lea rcx, [rbp+4F0h+var_180]
/*1404c7bcb*/  mov rdx, rax
/*1404c7bce*/  call sub_1414A3C90
/*1404c7bd3*/  nop
/*1404c7bd4*/  cmp byte ptr [rbp+4F0h+var_180], 0
/*1404c7bdb*/  mov rax, qword ptr [rbp+4F0h+var_180+8]
/*1404c7be2*/  lea rcx, aRollout; "rollout"
/*1404c7be9*/  cmovnz rax, rcx
/*1404c7bed*/  mov rcx, qword ptr [rbp+4F0h+var_170]
/*1404c7bf4*/  mov edx, 7
/*1404c7bf9*/  cmovnz rcx, rdx
/*1404c7bfd*/  jmp short loc_1404C7C0B
loc_1404C7BFF: /*1404c7bff*/ mov ecx, 7
/*1404c7c04*/  lea rax, aRollout; "rollout"
loc_1404C7C0B: /*1404c7c0b*/ mov [rbp+4F0h+var_518], rax
/*1404c7c0f*/  mov [rbp+4F0h+var_510], rcx
/*1404c7c13*/  call GetCurrentProcessId
/*1404c7c18*/  nop
/*1404c7c19*/  mov [rbp+4F0h+var_494], eax
/*1404c7c1c*/  lea rcx, [rbp+4F0h+var_180]
/*1404c7c23*/  call sub_141356270
/*1404c7c28*/  nop
/*1404c7c29*/  movups xmm0, [rbp+4F0h+var_180]
/*1404c7c30*/  movaps [rbp+4F0h+var_1E0], xmm0
/*1404c7c37*/  lea rax, [rbp+4F0h+var_518]
/*1404c7c3b*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404c7c42*/  lea rax, sub_14041F680
/*1404c7c49*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404c7c50*/  lea rax, [rbp+4F0h+var_494]
/*1404c7c54*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404c7c5b*/  lea rax, sub_1414AB780
/*1404c7c62*/  mov qword ptr [rbp+4F0h+var_170+8], rax
/*1404c7c69*/  lea rax, [rbp+4F0h+var_1E0]
/*1404c7c70*/  mov qword ptr [rbp+4F0h+var_160], rax
/*1404c7c77*/  lea rax, sub_140421AE0
/*1404c7c7e*/  mov qword ptr [rbp+4F0h+var_160+8], rax
/*1404c7c85*/  lea rcx, [rbp+4F0h+var_308]
/*1404c7c8c*/  lea rdx, unk_14175CA69
/*1404c7c93*/  lea r8, [rbp+4F0h+var_180]
/*1404c7c9a*/  call sub_14149C0F0
/*1404c7c9f*/  nop
/*1404c7ca0*/  mov r9, [rbp+4F0h+var_300]
/*1404c7ca7*/  mov rax, [rbp+4F0h+var_2F8]
loc_1404C7CAE: /*1404c7cae*/ mov [rsp+570h+var_550], rax
/*1404c7cb3*/  lea rcx, [rbp+4F0h+var_3B0]
/*1404c7cba*/  mov rdx, r13
/*1404c7cbd*/  mov r8, r14
/*1404c7cc0*/  mov [rbp+4F0h+var_188], r9
/*1404c7cc7*/  call sub_141473FA0
/*1404c7ccc*/  nop
/*1404c7ccd*/  mov rdx, [rbp+4F0h+var_308]
/*1404c7cd4*/  test rdx, rdx
/*1404c7cd7*/  jz short loc_1404C7CEB
/*1404c7cd9*/  mov r8d, 1
/*1404c7cdf*/  mov rcx, [rbp+4F0h+var_188]
/*1404c7ce6*/  call sub_140001660
loc_1404C7CEB: /*1404c7ceb*/ mov r8, qword ptr [rbp+4F0h+var_3B0+8]
/*1404c7cf2*/  mov rbx, qword ptr [rbp+4F0h+var_3A0]
loc_1404C7CF9: /*1404c7cf9*/ mov rcx, [rbp+4F0h+var_118]
/*1404c7d00*/  mov rdx, [rbp+4F0h+var_1B8]
/*1404c7d07*/  mov [rbp+4F0h+var_188], r8
/*1404c7d0e*/  mov r9, rbx
/*1404c7d11*/  call sub_141486360
/*1404c7d16*/  nop
/*1404c7d17*/  cmp rax, 1
/*1404c7d1b*/  jz loc_1404CAA8C
/*1404c7d21*/  mov rcx, [rbp+4F0h+var_188]
/*1404c7d28*/  mov rdx, rbx
/*1404c7d2b*/  mov r8, [rbp+4F0h+var_50]
/*1404c7d32*/  mov r9, [rbp+4F0h+var_60]
/*1404c7d39*/  call sub_1404A2FA0
/*1404c7d3e*/  nop
/*1404c7d3f*/  test rax, rax
/*1404c7d42*/  jnz loc_1404CAB48
/*1404c7d48*/  mov dword ptr [rbp+4F0h+var_180], 0
/*1404c7d52*/  mov qword ptr [rbp+4F0h+var_180+8], 0
/*1404c7d5d*/  mov dword ptr [rbp+4F0h+var_170], 7
/*1404c7d67*/  lea rax, [rbp+4F0h+var_180+8]
/*1404c7d6e*/  mov qword ptr [rax+11h], 0
/*1404c7d76*/  mov qword ptr [rax+0Ch], 0
/*1404c7d7e*/  mov byte ptr [rbp+4F0h+var_170+8], 1
/*1404c7d85*/  lea rcx, [rbp+4F0h+var_180]
/*1404c7d8c*/  mov rdx, r13
/*1404c7d8f*/  mov r8, r14
/*1404c7d92*/  call sub_141481480
/*1404c7d97*/  nop
/*1404c7d98*/  mov qword ptr [rbp+4F0h+var_1E0], rax
/*1404c7d9f*/  mov qword ptr [rbp+4F0h+var_1E0+8], rdx
/*1404c7da6*/  test al, 1
/*1404c7da8*/  jz short loc_1404C7DB9
/*1404c7daa*/  lea rcx, [rbp+4F0h+var_1E0+8]
/*1404c7db1*/  call sub_140018650
/*1404c7db6*/  nop
/*1404c7db7*/  jmp short loc_1404C7DEF
loc_1404C7DB9: /*1404c7db9*/ mov [rbp+4F0h+hObject], rdx
/*1404c7dbd*/  mov [rbp+4F0h+var_518], rdx
loc_1404C7DC1: /*1404c7dc1*/ lea rcx, [rbp+4F0h+var_518]
/*1404c7dc5*/  call sub_141474A80
/*1404c7dca*/  nop
/*1404c7dcb*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404c7dd2*/  test rax, rax
/*1404c7dd5*/  jz short loc_1404C7DE4
/*1404c7dd7*/  lea rcx, [rbp+4F0h+var_180]
/*1404c7dde*/  call sub_140018650
/*1404c7de3*/  nop
loc_1404C7DE4: /*1404c7de4*/ mov rcx, [rbp+4F0h+hObject]; hObject
/*1404c7de8*/  call cs:__imp_CloseHandle
/*1404c7dee*/  nop
loc_1404C7DEF: /*1404c7def*/ lea rcx, [rbp+4F0h+var_180]
/*1404c7df6*/  mov rdx, [rbp+4F0h+var_118]
/*1404c7dfd*/  mov r8, [rbp+4F0h+var_1B8]
/*1404c7e04*/  call sub_141486710
/*1404c7e09*/  nop
/*1404c7e0a*/  cmp dword ptr [rbp+4F0h+var_180], 2
/*1404c7e11*/  jnz short loc_1404C7E41
/*1404c7e13*/  mov rax, qword ptr [rbp+4F0h+var_180+8]
/*1404c7e1a*/  mov qword ptr [rbp+4F0h+var_1E0+8], rax
/*1404c7e21*/  mov dword ptr [rbp+4F0h+var_1E0], 1
/*1404c7e2b*/  mov [rbp+4F0h+var_504], 0
/*1404c7e32*/  lea rcx, [rbp+4F0h+var_1E0+8]
/*1404c7e39*/  call sub_140018650
/*1404c7e3e*/  nop
/*1404c7e3f*/  jmp short loc_1404C7E53
loc_1404C7E41: /*1404c7e41*/ mov rax, qword ptr [rbp+4F0h+var_150]
/*1404c7e48*/  mov [rbp+4F0h+var_500], rax
/*1404c7e4c*/  mov [rbp+4F0h+var_504], 1
loc_1404C7E53: /*1404c7e53*/ mov rcx, [rbp+4F0h+var_50]
/*1404c7e5a*/  mov rdx, [rbp+4F0h+var_60]
/*1404c7e61*/  lea r8, [rbp+4F0h+var_504]
/*1404c7e65*/  call restore_rollout_mtime_best_effort
/*1404c7e6a*/  nop
/*1404c7e6b*/  mov r8, qword ptr [rbp+4F0h+var_438]
/*1404c7e72*/  mov r9, qword ptr [rbp+4F0h+var_438+8]
/*1404c7e79*/  mov rcx, [rbp+4F0h+var_50]
/*1404c7e80*/  mov rdx, [rbp+4F0h+var_60]
/*1404c7e87*/  call sub_1404B80B0
/*1404c7e8c*/  nop
/*1404c7e8d*/  test al, al
/*1404c7e8f*/  jz loc_1404CAC04
/*1404c7e95*/  mov rdx, qword ptr [rbp+4F0h+var_3B0]
/*1404c7e9c*/  test rdx, rdx
/*1404c7e9f*/  jz short loc_1404C7EB3
/*1404c7ea1*/  mov r8d, 1
/*1404c7ea7*/  mov rcx, [rbp+4F0h+var_188]
/*1404c7eae*/  call sub_140001660
loc_1404C7EB3: /*1404c7eb3*/ inc qword ptr [rbp+4F0h+var_3E8+8]
/*1404c7eba*/  mov rax, [rbp+4F0h+var_118]
/*1404c7ec1*/  mov qword ptr [rbp+4F0h+var_3B0], rax
/*1404c7ec8*/  mov rax, [rbp+4F0h+var_1B8]
/*1404c7ecf*/  mov qword ptr [rbp+4F0h+var_3B0+8], rax
/*1404c7ed6*/  lea rax, [rbp+4F0h+var_358]
/*1404c7edd*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c7ee4*/  lea rax, sub_1400015F0
/*1404c7eeb*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c7ef2*/  lea rax, [rbp+4F0h+var_3B0]
/*1404c7ef9*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c7f00*/  lea rax, sub_14148F3A0
/*1404c7f07*/  mov qword ptr [rbp+4F0h+var_100+8], rax
loc_1404C7F0E: /*1404c7f0e*/ lea rcx, [rbp+4F0h+var_180]
/*1404c7f15*/  lea rdx, unk_14175D088
/*1404c7f1c*/  mov r8, r12
/*1404c7f1f*/  call sub_14149C0F0
/*1404c7f24*/  nop
/*1404c7f25*/  mov [rbp+4F0h+var_3C0], rsi
/*1404c7f2c*/  movups xmm0, [rbp+4F0h+var_180]
/*1404c7f33*/  movaps [rbp+4F0h+var_2A0], xmm0
/*1404c7f3a*/  mov rax, qword ptr [rbp+4F0h+var_170]
/*1404c7f41*/  mov [rbp+4F0h+var_290], rax
loc_1404C7F48: /*1404c7f48*/ mov rcx, r12
/*1404c7f4b*/  lea rdx, [rbp+4F0h+var_2A0]
/*1404c7f52*/  call sub_14149C500
/*1404c7f57*/  nop
/*1404c7f58*/  mov rsi, qword ptr [rbp+4F0h+var_418]
/*1404c7f5f*/  cmp rsi, qword ptr [rbp+4F0h+var_428]
/*1404c7f66*/  jnz short loc_1404C7F75
loc_1404C7F68: /*1404c7f68*/ lea rcx, [rbp+4F0h+var_428]
/*1404c7f6f*/  call sub_141689AB0
/*1404c7f74*/  nop
loc_1404C7F75: /*1404c7f75*/ mov rax, qword ptr [rbp+4F0h+var_428+8]
/*1404c7f7c*/  lea rcx, [rsi+rsi*2]
/*1404c7f80*/  mov rdx, qword ptr [rbp+4F0h+var_100]
/*1404c7f87*/  mov [rax+rcx*8+10h], rdx
/*1404c7f8c*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c7f93*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404c7f97*/  inc rsi
/*1404c7f9a*/  mov qword ptr [rbp+4F0h+var_418], rsi
/*1404c7fa1*/  mov qword ptr [rbp+4F0h+var_210], 0
/*1404c7fac*/  mov [rbp+4F0h+var_200], 0
/*1404c7fb7*/  call nullsub_1
/*1404c7fbc*/  mov ecx, 6
/*1404c7fc1*/  mov edx, 1
/*1404c7fc6*/  call sub_140001650
/*1404c7fcb*/  test rax, rax
/*1404c7fce*/  jz loc_1404CB0E9
/*1404c7fd4*/  mov word ptr [rax+4], 6E6Fh
/*1404c7fda*/  mov dword ptr [rax], 69746361h
/*1404c7fe0*/  mov qword ptr [rbp+4F0h+var_80], 6
/*1404c7feb*/  mov qword ptr [rbp+4F0h+var_80+8], rax
/*1404c7ff2*/  mov [rbp+4F0h+var_70], 6
/*1404c7ffd*/  call nullsub_1
/*1404c8002*/  mov ecx, 7
/*1404c8007*/  mov edx, 1
/*1404c800c*/  call sub_140001650
/*1404c8011*/  test rax, rax
/*1404c8014*/  mov [rbp+4F0h+var_188], rax
/*1404c801b*/  jz loc_1404CB0FE
/*1404c8021*/  mov dword ptr [rax+3], 65726F74h
/*1404c8028*/  mov dword ptr [rax], 74736572h
/*1404c802e*/  mov byte ptr [rbp+4F0h+var_110], 3
/*1404c8035*/  mov qword ptr [rbp+4F0h+var_110+8], 7
/*1404c8040*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c8047*/  mov qword ptr [rbp+4F0h+var_100+8], 7
loc_1404C8052: /*1404c8052*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8059*/  lea rdx, [rbp+4F0h+var_210]
/*1404c8060*/  lea r8, [rbp+4F0h+var_80]
/*1404c8067*/  mov r9, r12
/*1404c806a*/  call sub_140307860
/*1404c806f*/  nop
/*1404c8070*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c8077*/  jz short loc_1404C8086
loc_1404C8079: /*1404c8079*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8080*/  call sub_1400104F0
/*1404c8085*/  nop
loc_1404C8086: /*1404c8086*/ call nullsub_1
/*1404c808b*/  mov ecx, 8
/*1404c8090*/  mov edx, 1
/*1404c8095*/  call sub_140001650
/*1404c809a*/  test rax, rax
/*1404c809d*/  jz loc_1404CB113
/*1404c80a3*/  mov rcx, 6449646165726874h
/*1404c80ad*/  mov [rax], rcx
/*1404c80b0*/  mov qword ptr [rbp+4F0h+var_80], 8
/*1404c80bb*/  mov qword ptr [rbp+4F0h+var_80+8], rax
/*1404c80c2*/  mov [rbp+4F0h+var_70], 8
/*1404c80cd*/  mov r14, [rbp+4F0h+var_348]
/*1404c80d4*/  test r14, r14
/*1404c80d7*/  js loc_1404C9F05
/*1404c80dd*/  jz short loc_1404C8119
/*1404c80df*/  mov r13, qword ptr [rbp+4F0h+var_358+8]
/*1404c80e6*/  call nullsub_1
/*1404c80eb*/  mov esi, 1
/*1404c80f0*/  mov edx, 1
/*1404c80f5*/  mov rcx, r14
/*1404c80f8*/  call sub_140001650
/*1404c80fd*/  test rax, rax
/*1404c8100*/  jz loc_1404C9F07
/*1404c8106*/  mov rbx, rax
/*1404c8109*/  mov rcx, rax
/*1404c810c*/  mov rdx, r13
/*1404c810f*/  mov r8, r14
/*1404c8112*/  call sub_141684120
/*1404c8117*/  jmp short loc_1404C811E
loc_1404C8119: /*1404c8119*/ mov ebx, 1
loc_1404C811E: /*1404c811e*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c8125*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c812c*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c8133*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c813a*/  mov [rbp+4F0h+var_81], 0
loc_1404C8141: /*1404c8141*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8148*/  lea rdx, [rbp+4F0h+var_210]
/*1404c814f*/  lea r8, [rbp+4F0h+var_80]
/*1404c8156*/  mov r9, r12
/*1404c8159*/  call sub_140307860
/*1404c815e*/  nop
/*1404c815f*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c8166*/  jz short loc_1404C8175
loc_1404C8168: /*1404c8168*/ lea rcx, [rbp+4F0h+var_180]
/*1404c816f*/  call sub_1400104F0
/*1404c8174*/  nop
loc_1404C8175: /*1404c8175*/ call nullsub_1
/*1404c817a*/  mov ecx, 0Bh
/*1404c817f*/  mov edx, 1
/*1404c8184*/  call sub_140001650
/*1404c8189*/  test rax, rax
/*1404c818c*/  jz loc_1404CB128
/*1404c8192*/  mov rcx, rax
/*1404c8195*/  mov rax, 5074756F6C6C6F72h
/*1404c819f*/  mov [rcx], rax
/*1404c81a2*/  mov dword ptr [rcx+7], 68746150h
/*1404c81a9*/  mov qword ptr [rbp+4F0h+var_80], 0Bh
/*1404c81b4*/  mov [rbp+4F0h+var_188], rcx
/*1404c81bb*/  mov qword ptr [rbp+4F0h+var_80+8], rcx
/*1404c81c2*/  mov [rbp+4F0h+var_70], 0Bh
/*1404c81cd*/  mov rax, [rbp+4F0h+var_50]
/*1404c81d4*/  mov [rbp+4F0h+var_308], rax
/*1404c81db*/  mov rax, [rbp+4F0h+var_60]
/*1404c81e2*/  mov [rbp+4F0h+var_300], rax
/*1404c81e9*/  mov qword ptr [rbp+4F0h+var_180], 0
/*1404c81f4*/  mov qword ptr [rbp+4F0h+var_180+8], 1
/*1404c81ff*/  mov qword ptr [rbp+4F0h+var_170], 0
/*1404c820a*/  mov qword ptr [rbp+4F0h+var_100], 60000020h
/*1404c8215*/  lea rax, [rbp+4F0h+var_180]
/*1404c821c*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c8223*/  lea rax, off_14175E8C8
/*1404c822a*/  mov qword ptr [rbp+4F0h+var_110+8], rax
loc_1404C8231: /*1404c8231*/ lea rcx, [rbp+4F0h+var_308]
/*1404c8238*/  mov rdx, r12
/*1404c823b*/  call sub_14148F3A0
/*1404c8240*/  nop
loc_1404C8241: /*1404c8241*/ test al, al
/*1404c8243*/  jnz loc_1404CAF4C
/*1404c8249*/  mov rax, qword ptr [rbp+4F0h+var_180]
/*1404c8250*/  mov r13, qword ptr [rbp+4F0h+var_180+8]
/*1404c8257*/  mov r14, qword ptr [rbp+4F0h+var_170]
/*1404c825e*/  test r14, r14
/*1404c8261*/  mov [rbp+4F0h+var_60], rax
/*1404c8268*/  mov [rbp+4F0h+var_50], r13
/*1404c826f*/  js loc_1404CA92F
/*1404c8275*/  jz short loc_1404C82AA
/*1404c8277*/  call nullsub_1
/*1404c827c*/  mov esi, 1
/*1404c8281*/  mov edx, 1
/*1404c8286*/  mov rcx, r14
/*1404c8289*/  call sub_140001650
/*1404c828e*/  test rax, rax
/*1404c8291*/  jz loc_1404CA931
/*1404c8297*/  mov rbx, rax
/*1404c829a*/  mov rcx, rax
/*1404c829d*/  mov rdx, r13
/*1404c82a0*/  mov r8, r14
/*1404c82a3*/  call sub_141684120
/*1404c82a8*/  jmp short loc_1404C82AF
loc_1404C82AA: /*1404c82aa*/ mov ebx, 1
loc_1404C82AF: /*1404c82af*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c82b6*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c82bd*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c82c4*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c82cb*/  mov [rbp+4F0h+var_82], 0
loc_1404C82D2: /*1404c82d2*/ lea rcx, [rbp+4F0h+var_180]
/*1404c82d9*/  lea rdx, [rbp+4F0h+var_210]
/*1404c82e0*/  lea r8, [rbp+4F0h+var_80]
/*1404c82e7*/  mov r9, r12
/*1404c82ea*/  call sub_140307860
/*1404c82ef*/  nop
/*1404c82f0*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c82f7*/  jz short loc_1404C8306
loc_1404C82F9: /*1404c82f9*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8300*/  call sub_1400104F0
/*1404c8305*/  nop
loc_1404C8306: /*1404c8306*/ mov rdx, [rbp+4F0h+var_60]
/*1404c830d*/  test rdx, rdx
/*1404c8310*/  jz short loc_1404C8324
/*1404c8312*/  mov r8d, 1
/*1404c8318*/  mov rcx, [rbp+4F0h+var_50]
/*1404c831f*/  call sub_140001660
loc_1404C8324: /*1404c8324*/ call nullsub_1
/*1404c8329*/  mov ecx, 0Ah
/*1404c832e*/  mov edx, 1
/*1404c8333*/  call sub_140001650
/*1404c8338*/  test rax, rax
/*1404c833b*/  jz loc_1404CB13D
/*1404c8341*/  mov rcx, rax
/*1404c8344*/  mov rax, 615070756B636162h
/*1404c834e*/  mov [rcx], rax
/*1404c8351*/  mov word ptr [rcx+8], 6874h
/*1404c8357*/  mov qword ptr [rbp+4F0h+var_80], 0Ah
/*1404c8362*/  mov [rbp+4F0h+var_60], rcx
/*1404c8369*/  mov qword ptr [rbp+4F0h+var_80+8], rcx
/*1404c8370*/  mov [rbp+4F0h+var_70], 0Ah
/*1404c837b*/  mov rax, [rbp+4F0h+var_118]
/*1404c8382*/  mov [rbp+4F0h+var_308], rax
/*1404c8389*/  mov rax, [rbp+4F0h+var_1B8]
/*1404c8390*/  mov [rbp+4F0h+var_300], rax
/*1404c8397*/  mov qword ptr [rbp+4F0h+var_180], 0
/*1404c83a2*/  mov qword ptr [rbp+4F0h+var_180+8], 1
/*1404c83ad*/  mov qword ptr [rbp+4F0h+var_170], 0
/*1404c83b8*/  mov qword ptr [rbp+4F0h+var_100], 60000020h
/*1404c83c3*/  lea rax, [rbp+4F0h+var_180]
/*1404c83ca*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c83d1*/  lea rax, off_14175E8C8
/*1404c83d8*/  mov qword ptr [rbp+4F0h+var_110+8], rax
loc_1404C83DF: /*1404c83df*/ lea rcx, [rbp+4F0h+var_308]
/*1404c83e6*/  mov rdx, r12
/*1404c83e9*/  call sub_14148F3A0
/*1404c83ee*/  nop
loc_1404C83EF: /*1404c83ef*/ test al, al
/*1404c83f1*/  jnz loc_1404CAF7D
/*1404c83f7*/  mov r13, qword ptr [rbp+4F0h+var_180]
/*1404c83fe*/  mov rax, qword ptr [rbp+4F0h+var_180+8]
/*1404c8405*/  mov [rbp+4F0h+var_50], rax
/*1404c840c*/  mov r14, qword ptr [rbp+4F0h+var_170]
/*1404c8413*/  test r14, r14
/*1404c8416*/  mov [rbp+4F0h+var_60], r13
/*1404c841d*/  js loc_1404CA949
/*1404c8423*/  jz short loc_1404C8473
/*1404c8425*/  call nullsub_1
/*1404c842a*/  mov esi, 1
/*1404c842f*/  mov edx, 1
/*1404c8434*/  mov rcx, r14
/*1404c8437*/  call sub_140001650
/*1404c843c*/  test rax, rax
/*1404c843f*/  jz loc_1404CA94B
/*1404c8445*/  mov rbx, rax
/*1404c8448*/  mov rcx, rax
/*1404c844b*/  mov rdx, [rbp+4F0h+var_50]
/*1404c8452*/  mov r8, r14
/*1404c8455*/  call sub_141684120
/*1404c845a*/  jmp short loc_1404C8478
loc_1404C845C: /*1404c845c*/ inc qword ptr [rbp+4F0h+var_3E8]
/*1404c8463*/  mov [rbp+4F0h+var_60], 0
/*1404c846e*/  jmp loc_1404C8625
loc_1404C8473: /*1404c8473*/ mov ebx, 1
loc_1404C8478: /*1404c8478*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c847f*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c8486*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c848d*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c8494*/  mov [rbp+4F0h+var_83], 0
loc_1404C849B: /*1404c849b*/ lea rcx, [rbp+4F0h+var_180]
/*1404c84a2*/  lea rdx, [rbp+4F0h+var_210]
/*1404c84a9*/  lea r8, [rbp+4F0h+var_80]
/*1404c84b0*/  mov r9, r12
/*1404c84b3*/  call sub_140307860
/*1404c84b8*/  nop
/*1404c84b9*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c84c0*/  jz short loc_1404C84CF
loc_1404C84C2: /*1404c84c2*/ lea rcx, [rbp+4F0h+var_180]
/*1404c84c9*/  call sub_1400104F0
/*1404c84ce*/  nop
loc_1404C84CF: /*1404c84cf*/ mov rdx, [rbp+4F0h+var_60]
/*1404c84d6*/  test rdx, rdx
/*1404c84d9*/  jz short loc_1404C84ED
/*1404c84db*/  mov r8d, 1
/*1404c84e1*/  mov rcx, [rbp+4F0h+var_50]
/*1404c84e8*/  call sub_140001660
loc_1404C84ED: /*1404c84ed*/ call nullsub_1
/*1404c84f2*/  mov ecx, 6
/*1404c84f7*/  mov edx, 1
/*1404c84fc*/  call sub_140001650
/*1404c8501*/  test rax, rax
/*1404c8504*/  jz loc_1404CB14F
/*1404c850a*/  mov word ptr [rax+4], 6874h
/*1404c8510*/  mov dword ptr [rax], 61506264h
/*1404c8516*/  mov qword ptr [rbp+4F0h+var_80], 6
/*1404c8521*/  mov [rbp+4F0h+var_60], rax
/*1404c8528*/  mov qword ptr [rbp+4F0h+var_80+8], rax
/*1404c852f*/  mov [rbp+4F0h+var_70], 6
/*1404c853a*/  mov rax, [rbp+4F0h+var_1F0]
/*1404c8541*/  mov [rbp+4F0h+var_308], rax
/*1404c8548*/  mov [rbp+4F0h+var_300], r15
/*1404c854f*/  mov qword ptr [rbp+4F0h+var_180], 0
/*1404c855a*/  mov qword ptr [rbp+4F0h+var_180+8], 1
/*1404c8565*/  mov qword ptr [rbp+4F0h+var_170], 0
/*1404c8570*/  mov qword ptr [rbp+4F0h+var_100], 60000020h
/*1404c857b*/  lea rax, [rbp+4F0h+var_180]
/*1404c8582*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c8589*/  lea rax, off_14175E8C8
/*1404c8590*/  mov qword ptr [rbp+4F0h+var_110+8], rax
loc_1404C8597: /*1404c8597*/ lea rcx, [rbp+4F0h+var_308]
/*1404c859e*/  mov rdx, r12
/*1404c85a1*/  call sub_14148F3A0
/*1404c85a6*/  nop
loc_1404C85A7: /*1404c85a7*/ test al, al
/*1404c85a9*/  jnz loc_1404CAFAE
/*1404c85af*/  mov rax, qword ptr [rbp+4F0h+var_180]
/*1404c85b6*/  mov [rbp+4F0h+var_60], rax
/*1404c85bd*/  mov r13, qword ptr [rbp+4F0h+var_180+8]
/*1404c85c4*/  mov r14, qword ptr [rbp+4F0h+var_170]
/*1404c85cb*/  test r14, r14
/*1404c85ce*/  mov [rbp+4F0h+var_50], r13
/*1404c85d5*/  js loc_1404CA963
/*1404c85db*/  jz loc_1404C86AD
/*1404c85e1*/  call nullsub_1
/*1404c85e6*/  mov esi, 1
/*1404c85eb*/  mov edx, 1
/*1404c85f0*/  mov rcx, r14
/*1404c85f3*/  call sub_140001650
/*1404c85f8*/  test rax, rax
/*1404c85fb*/  jz loc_1404CA965
/*1404c8601*/  mov rbx, rax
/*1404c8604*/  mov rcx, rax
/*1404c8607*/  mov rdx, r13
/*1404c860a*/  mov r8, r14
/*1404c860d*/  call sub_141684120
/*1404c8612*/  jmp loc_1404C86B2
loc_1404C8617: /*1404c8617*/ lea rax, [rbp+4F0h+var_328]
/*1404c861e*/  mov [rbp+4F0h+var_60], rax
loc_1404C8625: /*1404c8625*/ test byte ptr [rbp+4F0h+var_2A8], 1
/*1404c862c*/  mov [rbp+4F0h+var_3C0], rsi
/*1404c8633*/  jnz loc_1404C8B14
loc_1404C8639: /*1404c8639*/ mov [rsp+570h+var_550], 10h
/*1404c8642*/  lea rcx, [rbp+4F0h+var_3B0]
/*1404c8649*/  mov rdx, [rbp+4F0h+var_4E8]
/*1404c864d*/  mov r8, [rbp+4F0h+var_4E0]
/*1404c8651*/  lea r9, unk_14175D129
/*1404c8658*/  call sub_141473FA0
/*1404c865d*/  nop
/*1404c865e*/  mov byte ptr [rbp+4F0h+var_110], 1
/*1404c8665*/  mov rdx, qword ptr [rbp+4F0h+var_3B0+8]
/*1404c866c*/  mov r14, qword ptr [rbp+4F0h+var_3A0]
loc_1404C8673: /*1404c8673*/ mov rcx, r12
/*1404c8676*/  mov [rbp+4F0h+var_50], rdx
/*1404c867d*/  mov r8, r14
/*1404c8680*/  call sub_14147B9A0
/*1404c8685*/  nop
/*1404c8686*/  mov rsi, rax
/*1404c8689*/  test rax, rax
/*1404c868c*/  mov rbx, [rbp+4F0h+var_3B8]
/*1404c8693*/  jz loc_1404C8842
/*1404c8699*/  mov eax, 2
/*1404c869e*/  mov [rbp+4F0h+var_118], rax
/*1404c86a5*/  xor r14d, r14d
/*1404c86a8*/  jmp loc_1404C8ABE
loc_1404C86AD: /*1404c86ad*/ mov ebx, 1
loc_1404C86B2: /*1404c86b2*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c86b9*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c86c0*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c86c7*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c86ce*/  mov [rbp+4F0h+var_84], 0
loc_1404C86D5: /*1404c86d5*/ lea rcx, [rbp+4F0h+var_180]
/*1404c86dc*/  lea rdx, [rbp+4F0h+var_210]
/*1404c86e3*/  lea r8, [rbp+4F0h+var_80]
/*1404c86ea*/  mov r9, r12
/*1404c86ed*/  call sub_140307860
/*1404c86f2*/  nop
/*1404c86f3*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c86fa*/  jz short loc_1404C8709
loc_1404C86FC: /*1404c86fc*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8703*/  call sub_1400104F0
/*1404c8708*/  nop
loc_1404C8709: /*1404c8709*/ mov rdx, [rbp+4F0h+var_60]
/*1404c8710*/  test rdx, rdx
/*1404c8713*/  jz short loc_1404C8727
/*1404c8715*/  mov r8d, 1
/*1404c871b*/  mov rcx, [rbp+4F0h+var_50]
/*1404c8722*/  call sub_140001660
loc_1404C8727: /*1404c8727*/ mov rax, [rbp+4F0h+var_200]
/*1404c872e*/  lea rcx, [rbp+4F0h+var_3B0+8]
/*1404c8735*/  mov [rcx+10h], rax
/*1404c8739*/  movups xmm0, [rbp+4F0h+var_210]
/*1404c8740*/  movups xmmword ptr [rcx], xmm0
/*1404c8743*/  mov byte ptr [rbp+4F0h+var_3B0], 5
/*1404c874a*/  mov rsi, [rbp+4F0h+var_1C0]
/*1404c8751*/  cmp rsi, [rbp+4F0h+var_1D0]
/*1404c8758*/  jnz short loc_1404C8767
loc_1404C875A: /*1404c875a*/ lea rcx, [rbp+4F0h+var_1D0]
/*1404c8761*/  call sub_1416890A0
/*1404c8766*/  nop
loc_1404C8767: /*1404c8767*/ mov rax, [rbp+4F0h+var_1C8]
/*1404c876e*/  mov rcx, rsi
/*1404c8771*/  shl rcx, 5
/*1404c8775*/  movups xmm0, [rbp+4F0h+var_3B0]
/*1404c877c*/  movups xmm1, [rbp+4F0h+var_3A0]
/*1404c8783*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404c8788*/  movups xmmword ptr [rax+rcx], xmm0
/*1404c878c*/  inc rsi
/*1404c878f*/  mov [rbp+4F0h+var_1C0], rsi
/*1404c8796*/  mov rdx, qword ptr [rbp+4F0h+var_2A0]
/*1404c879d*/  test rdx, rdx
/*1404c87a0*/  jz short loc_1404C87B4
/*1404c87a2*/  mov rcx, qword ptr [rbp+4F0h+var_2A0+8]
/*1404c87a9*/  mov r8d, 1
/*1404c87af*/  call sub_140001660
loc_1404C87B4: /*1404c87b4*/ mov rdx, [rbp+4F0h+var_448]
/*1404c87bb*/  test rdx, rdx
/*1404c87be*/  mov rsi, [rbp+4F0h+var_3C0]
/*1404c87c5*/  jz short loc_1404C87D9
/*1404c87c7*/  mov r8d, 1
/*1404c87cd*/  mov rcx, [rbp+4F0h+var_118]
/*1404c87d4*/  call sub_140001660
loc_1404C87D9: /*1404c87d9*/ mov rdx, qword ptr [rbp+4F0h+var_358]
/*1404c87e0*/  test rdx, rdx
/*1404c87e3*/  jz short loc_1404C87F7
/*1404c87e5*/  mov rcx, qword ptr [rbp+4F0h+var_358+8]
/*1404c87ec*/  mov r8d, 1
/*1404c87f2*/  call sub_140001660
loc_1404C87F7: /*1404c87f7*/ mov rdx, [rbp+4F0h+var_328]
/*1404c87fe*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404c8802*/  jz short loc_1404C881B
/*1404c8804*/  test rdx, rdx
/*1404c8807*/  jz short loc_1404C881B
/*1404c8809*/  mov rcx, [rbp+4F0h+var_320]
/*1404c8810*/  mov r8d, 1
/*1404c8816*/  call sub_140001660
loc_1404C881B: /*1404c881b*/ mov rdx, [rbp+4F0h+var_340]
/*1404c8822*/  test rdx, rdx
/*1404c8825*/  jz short loc_1404C8839
/*1404c8827*/  mov rcx, [rbp+4F0h+var_338]
/*1404c882e*/  mov r8d, 1
/*1404c8834*/  call sub_140001660
loc_1404C8839: /*1404c8839*/ mov rcx, [rbp+4F0h+var_4C8]
/*1404c883d*/  jmp loc_1404C78A4
loc_1404C8842: /*1404c8842*/ call sub_141475580
/*1404c8847*/  nop
/*1404c8848*/  mov dword ptr [rbp+4F0h+var_180], eax
/*1404c884e*/  mov dword ptr [rbp+4F0h+var_180+4], edx
/*1404c8854*/  mov rcx, r12
/*1404c8857*/  lea rdx, [rbp+4F0h+var_180]
/*1404c885e*/  mov r8d, 0D53E8000h
/*1404c8864*/  mov r9d, 19DB1DEh
/*1404c886a*/  call sub_141475530
/*1404c886f*/  nop
/*1404c8870*/  cmp byte ptr [rbp+4F0h+var_110], 0
/*1404c8877*/  jnz short loc_1404C8882
/*1404c8879*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c8880*/  jmp short loc_1404C8884
loc_1404C8882: /*1404c8882*/ xor eax, eax
loc_1404C8884: /*1404c8884*/ mov [rbp+4F0h+var_308], rax
/*1404c888b*/  mov rcx, [rbp+4F0h+var_1F0]
/*1404c8892*/  mov rdx, r15
/*1404c8895*/  call sub_1414742C0
/*1404c889a*/  nop
/*1404c889b*/  test rax, rax
/*1404c889e*/  jz short loc_1404C88DA
/*1404c88a0*/  mov r8, rdx
/*1404c88a3*/  mov rcx, r12
/*1404c88a6*/  mov rdx, rax
/*1404c88a9*/  call sub_1414A3C90
/*1404c88ae*/  nop
/*1404c88af*/  cmp byte ptr [rbp+4F0h+var_110], 0
/*1404c88b6*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c88bd*/  lea rcx, aStateSqlite; "state.sqlite"
/*1404c88c4*/  cmovnz rax, rcx
/*1404c88c8*/  mov rcx, qword ptr [rbp+4F0h+var_100]
/*1404c88cf*/  mov edx, 0Ch
/*1404c88d4*/  cmovnz rcx, rdx
/*1404c88d8*/  jmp short loc_1404C88E6
loc_1404C88DA: /*1404c88da*/ mov ecx, 0Ch
/*1404c88df*/  lea rax, aStateSqlite; "state.sqlite"
loc_1404C88E6: /*1404c88e6*/ mov qword ptr [rbp+4F0h+var_210], rax
/*1404c88ed*/  mov qword ptr [rbp+4F0h+var_210+8], rcx
/*1404c88f4*/  mov rcx, r12
/*1404c88f7*/  call sub_141356270
/*1404c88fc*/  nop
/*1404c88fd*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c8904*/  movaps [rbp+4F0h+var_80], xmm0
/*1404c890b*/  lea rax, [rbp+4F0h+var_308]
/*1404c8912*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c8919*/  lea rax, sub_1414AC520
/*1404c8920*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c8927*/  lea rax, [rbp+4F0h+var_80]
/*1404c892e*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c8935*/  lea rax, sub_140421AE0
/*1404c893c*/  mov qword ptr [rbp+4F0h+var_100+8], rax
/*1404c8943*/  lea rax, [rbp+4F0h+var_210]
/*1404c894a*/  mov qword ptr [rbp+4F0h+var_F0], rax
/*1404c8951*/  lea rax, sub_14041F680
/*1404c8958*/  mov qword ptr [rbp+4F0h+var_F0+8], rax
/*1404c895f*/  lea rcx, [rbp+4F0h+var_1A8]
/*1404c8966*/  lea rdx, unk_14175D145
/*1404c896d*/  mov r8, r12
/*1404c8970*/  call sub_14149C0F0
/*1404c8975*/  nop
/*1404c8976*/  mov r9, qword ptr [rbp+4F0h+var_1A8+8]
/*1404c897d*/  mov rax, [rbp+4F0h+var_198]
loc_1404C8984: /*1404c8984*/ mov [rsp+570h+var_550], rax
/*1404c8989*/  lea rcx, [rbp+4F0h+var_180]
/*1404c8990*/  mov rdx, [rbp+4F0h+var_50]
/*1404c8997*/  mov r8, r14
/*1404c899a*/  mov [rbp+4F0h+var_118], r9
/*1404c89a1*/  call sub_141473FA0
/*1404c89a6*/  nop
/*1404c89a7*/  mov rdx, qword ptr [rbp+4F0h+var_1A8]
/*1404c89ae*/  test rdx, rdx
/*1404c89b1*/  jz short loc_1404C89C5
/*1404c89b3*/  mov r8d, 1
/*1404c89b9*/  mov rcx, [rbp+4F0h+var_118]
/*1404c89c0*/  call sub_140001660
loc_1404C89C5: /*1404c89c5*/ mov r8, qword ptr [rbp+4F0h+var_180+8]
/*1404c89cc*/  mov rsi, qword ptr [rbp+4F0h+var_170]
loc_1404C89D3: /*1404c89d3*/ mov rcx, [rbp+4F0h+var_1F0]
/*1404c89da*/  mov rdx, r15
/*1404c89dd*/  mov [rbp+4F0h+var_1B8], r8
/*1404c89e4*/  mov r9, rsi
/*1404c89e7*/  call sub_141486360
/*1404c89ec*/  nop
/*1404c89ed*/  cmp rax, 1
/*1404c89f1*/  jnz loc_1404C8A93
/*1404c89f7*/  mov qword ptr [rbp+4F0h+var_2A0], rdx
/*1404c89fe*/  lea rbx, [rbp+4F0h+var_2A0]
/*1404c8a05*/  mov qword ptr [rbp+4F0h+var_80], rbx
/*1404c8a0c*/  lea rax, sub_141490720
/*1404c8a13*/  mov qword ptr [rbp+4F0h+var_80+8], rax
loc_1404C8A1A: /*1404c8a1a*/ mov rcx, r12
/*1404c8a1d*/  lea rdx, unk_1417580A2
/*1404c8a24*/  lea r8, [rbp+4F0h+var_80]
/*1404c8a2b*/  call sub_14149C0F0
/*1404c8a30*/  nop
/*1404c8a31*/  mov rsi, qword ptr [rbp+4F0h+var_110]
/*1404c8a38*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c8a3f*/  mov [rbp+4F0h+var_3B8], rax
/*1404c8a46*/  mov rax, qword ptr [rbp+4F0h+var_100]
loc_1404C8A4D: /*1404c8a4d*/ mov rcx, rbx
/*1404c8a50*/  mov rbx, rax
/*1404c8a53*/  call sub_140018650
/*1404c8a58*/  nop
/*1404c8a59*/  mov [rbp+4F0h+var_4A0], rbx
/*1404c8a5d*/  mov rdx, qword ptr [rbp+4F0h+var_180]
/*1404c8a64*/  test rdx, rdx
/*1404c8a67*/  jz short loc_1404C8A7B
/*1404c8a69*/  mov r8d, 1
/*1404c8a6f*/  mov rcx, [rbp+4F0h+var_1B8]
/*1404c8a76*/  call sub_140001660
loc_1404C8A7B: /*1404c8a7b*/ mov eax, 0Ah
/*1404c8a80*/  mov [rbp+4F0h+var_118], rax
/*1404c8a87*/  xor r14d, r14d
/*1404c8a8a*/  mov rbx, [rbp+4F0h+var_3B8]
/*1404c8a91*/  jmp short loc_1404C8ABE
loc_1404C8A93: /*1404c8a93*/ mov [rbp+4F0h+var_4A0], rsi
/*1404c8a97*/  mov rsi, qword ptr [rbp+4F0h+var_180]
/*1404c8a9e*/  mov rax, qword ptr [rbp+4F0h+var_170+8]
/*1404c8aa5*/  mov [rbp+4F0h+var_520], rax
/*1404c8aa9*/  mov [rbp+4F0h+var_118], 0FFFFFFFFFFFFFFFFh
/*1404c8ab4*/  mov r14b, 1
/*1404c8ab7*/  mov rbx, [rbp+4F0h+var_1B8]
loc_1404C8ABE: /*1404c8abe*/ mov rdx, qword ptr [rbp+4F0h+var_3B0]
/*1404c8ac5*/  test rdx, rdx
/*1404c8ac8*/  jz short loc_1404C8ADC
/*1404c8aca*/  mov r8d, 1
/*1404c8ad0*/  mov rcx, [rbp+4F0h+var_50]
/*1404c8ad7*/  call sub_140001660
loc_1404C8ADC: /*1404c8adc*/ test r14b, r14b
/*1404c8adf*/  jz loc_1404CAEC7
/*1404c8ae5*/  mov [rbp+4F0h+var_3B8], rbx
/*1404c8aec*/  test rsi, rsi
/*1404c8aef*/  jz short loc_1404C8B06
/*1404c8af1*/  mov r8d, 1
/*1404c8af7*/  mov rcx, [rbp+4F0h+var_3B8]
/*1404c8afe*/  mov rdx, rsi
/*1404c8b01*/  call sub_140001660
loc_1404C8B06: /*1404c8b06*/ inc qword ptr [rbp+4F0h+var_3D8+8]
/*1404c8b0d*/  mov rsi, [rbp+4F0h+var_3C0]
loc_1404C8B14: /*1404c8b14*/ movups xmm0, [rbp+4F0h+var_358+8]
/*1404c8b1b*/  movups [rbp+4F0h+var_210], xmm0
/*1404c8b22*/  lea rax, [rbp+4F0h+var_210]
/*1404c8b29*/  mov qword ptr [rbp+4F0h+var_80], rax
/*1404c8b30*/  lea rax, unk_14175B0F8
/*1404c8b37*/  mov qword ptr [rbp+4F0h+var_80+8], rax
loc_1404C8B3E: /*1404c8b3e*/ lea rax, [rbp+4F0h+var_80]
/*1404c8b45*/  mov [rsp+570h+var_550], rax
/*1404c8b4a*/  mov [rsp+570h+var_548], 1
/*1404c8b53*/  mov r9d, 4Bh ; 'K'
/*1404c8b59*/  lea rcx, [rbp+4F0h+var_180]
/*1404c8b60*/  lea rdx, [rbp+4F0h+var_280]
/*1404c8b67*/  lea r8, aUpdateThreadsS_3; "UPDATE threads SET archived = 1 WHERE i"...
/*1404c8b6e*/  call sub_140429E20
/*1404c8b73*/  nop
/*1404c8b74*/  cmp qword ptr [rbp+4F0h+var_180], 0FFFFFFFFFFFFFFFFh
/*1404c8b7c*/  jnz loc_1404CAE05
/*1404c8b82*/  cmp qword ptr [rbp+4F0h+var_180+8], 0
/*1404c8b8a*/  jz loc_1404C9297
/*1404c8b90*/  inc qword ptr [rbp+4F0h+var_3D8]
/*1404c8b97*/  lea rax, [rbp+4F0h+var_358]
/*1404c8b9e*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404c8ba5*/  lea rax, sub_1400015F0
/*1404c8bac*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404c8bb3*/  mov rcx, r12
/*1404c8bb6*/  lea rdx, unk_14175D09C
/*1404c8bbd*/  lea r8, [rbp+4F0h+var_180]
/*1404c8bc4*/  call sub_14149C0F0
/*1404c8bc9*/  nop
/*1404c8bca*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c8bd1*/  movaps [rbp+4F0h+var_210], xmm0
/*1404c8bd8*/  mov rax, qword ptr [rbp+4F0h+var_100]
/*1404c8bdf*/  mov [rbp+4F0h+var_200], rax
loc_1404C8BE6: /*1404c8be6*/ mov rcx, r12
/*1404c8be9*/  lea rdx, [rbp+4F0h+var_210]
/*1404c8bf0*/  call sub_14149C500
/*1404c8bf5*/  nop
/*1404c8bf6*/  mov rsi, qword ptr [rbp+4F0h+var_418]
/*1404c8bfd*/  cmp rsi, qword ptr [rbp+4F0h+var_428]
/*1404c8c04*/  jnz short loc_1404C8C13
loc_1404C8C06: /*1404c8c06*/ lea rcx, [rbp+4F0h+var_428]
/*1404c8c0d*/  call sub_141689AB0
/*1404c8c12*/  nop
loc_1404C8C13: /*1404c8c13*/ mov rax, qword ptr [rbp+4F0h+var_428+8]
/*1404c8c1a*/  lea rcx, [rsi+rsi*2]
/*1404c8c1e*/  mov rdx, qword ptr [rbp+4F0h+var_100]
/*1404c8c25*/  mov [rax+rcx*8+10h], rdx
/*1404c8c2a*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c8c31*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404c8c35*/  inc rsi
/*1404c8c38*/  mov qword ptr [rbp+4F0h+var_418], rsi
/*1404c8c3f*/  mov qword ptr [rbp+4F0h+var_80], 0
/*1404c8c4a*/  mov [rbp+4F0h+var_70], 0
/*1404c8c55*/  call nullsub_1
/*1404c8c5a*/  mov ecx, 6
/*1404c8c5f*/  mov edx, 1
/*1404c8c64*/  call sub_140001650
/*1404c8c69*/  test rax, rax
/*1404c8c6c*/  jz loc_1404CB161
/*1404c8c72*/  mov word ptr [rax+4], 6E6Fh
/*1404c8c78*/  mov dword ptr [rax], 69746361h
/*1404c8c7e*/  mov qword ptr [rbp+4F0h+var_1A8], 6
/*1404c8c89*/  mov qword ptr [rbp+4F0h+var_1A8+8], rax
/*1404c8c90*/  mov [rbp+4F0h+var_198], 6
/*1404c8c9b*/  call nullsub_1
/*1404c8ca0*/  mov ecx, 7
/*1404c8ca5*/  mov edx, 1
/*1404c8caa*/  call sub_140001650
/*1404c8caf*/  test rax, rax
/*1404c8cb2*/  mov [rbp+4F0h+var_50], rax
/*1404c8cb9*/  jz loc_1404CB173
/*1404c8cbf*/  mov dword ptr [rax+3], 6574616Ch
/*1404c8cc6*/  mov dword ptr [rax], 6C6F7369h
/*1404c8ccc*/  mov byte ptr [rbp+4F0h+var_110], 3
/*1404c8cd3*/  mov qword ptr [rbp+4F0h+var_110+8], 7
/*1404c8cde*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c8ce5*/  mov qword ptr [rbp+4F0h+var_100+8], 7
loc_1404C8CF0: /*1404c8cf0*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8cf7*/  lea rdx, [rbp+4F0h+var_80]
/*1404c8cfe*/  lea r8, [rbp+4F0h+var_1A8]
/*1404c8d05*/  mov r9, r12
/*1404c8d08*/  call sub_140307860
/*1404c8d0d*/  nop
/*1404c8d0e*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c8d15*/  jz short loc_1404C8D24
loc_1404C8D17: /*1404c8d17*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8d1e*/  call sub_1400104F0
/*1404c8d23*/  nop
loc_1404C8D24: /*1404c8d24*/ call nullsub_1
/*1404c8d29*/  mov ecx, 8
/*1404c8d2e*/  mov edx, 1
/*1404c8d33*/  call sub_140001650
/*1404c8d38*/  test rax, rax
/*1404c8d3b*/  jz loc_1404CB185
/*1404c8d41*/  mov rcx, 6449646165726874h
/*1404c8d4b*/  mov [rax], rcx
/*1404c8d4e*/  mov qword ptr [rbp+4F0h+var_1A8], 8
/*1404c8d59*/  mov qword ptr [rbp+4F0h+var_1A8+8], rax
/*1404c8d60*/  mov [rbp+4F0h+var_198], 8
/*1404c8d6b*/  mov r14, [rbp+4F0h+var_348]
/*1404c8d72*/  test r14, r14
/*1404c8d75*/  js loc_1404CA9FC
/*1404c8d7b*/  jz short loc_1404C8DC2
/*1404c8d7d*/  mov rax, qword ptr [rbp+4F0h+var_358+8]
/*1404c8d84*/  mov [rbp+4F0h+var_50], rax
/*1404c8d8b*/  call nullsub_1
/*1404c8d90*/  mov esi, 1
/*1404c8d95*/  mov edx, 1
/*1404c8d9a*/  mov rcx, r14
/*1404c8d9d*/  call sub_140001650
/*1404c8da2*/  test rax, rax
/*1404c8da5*/  jz loc_1404CA9FE
/*1404c8dab*/  mov rbx, rax
/*1404c8dae*/  mov rcx, rax
/*1404c8db1*/  mov rdx, [rbp+4F0h+var_50]
/*1404c8db8*/  mov r8, r14
/*1404c8dbb*/  call sub_141684120
/*1404c8dc0*/  jmp short loc_1404C8DC7
loc_1404C8DC2: /*1404c8dc2*/ mov ebx, 1
loc_1404C8DC7: /*1404c8dc7*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c8dce*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c8dd5*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c8ddc*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c8de3*/  mov [rbp+4F0h+var_85], 0
loc_1404C8DEA: /*1404c8dea*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8df1*/  lea rdx, [rbp+4F0h+var_80]
/*1404c8df8*/  lea r8, [rbp+4F0h+var_1A8]
/*1404c8dff*/  mov r9, r12
/*1404c8e02*/  call sub_140307860
/*1404c8e07*/  nop
/*1404c8e08*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c8e0f*/  jz short loc_1404C8E1E
loc_1404C8E11: /*1404c8e11*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8e18*/  call sub_1400104F0
/*1404c8e1d*/  nop
loc_1404C8E1E: /*1404c8e1e*/ call nullsub_1
/*1404c8e23*/  mov ecx, 0Bh
/*1404c8e28*/  mov edx, 1
/*1404c8e2d*/  call sub_140001650
/*1404c8e32*/  test rax, rax
/*1404c8e35*/  jz loc_1404CB197
/*1404c8e3b*/  mov rcx, rax
/*1404c8e3e*/  mov rax, 5074756F6C6C6F72h
/*1404c8e48*/  mov [rcx], rax
/*1404c8e4b*/  mov dword ptr [rcx+7], 68746150h
/*1404c8e52*/  mov qword ptr [rbp+4F0h+var_1A8], 0Bh
/*1404c8e5d*/  mov qword ptr [rbp+4F0h+var_1A8+8], rcx
/*1404c8e64*/  mov [rbp+4F0h+var_198], 0Bh
/*1404c8e6f*/  mov r14, 0FFFFFFFFFFFFFFFFh
/*1404c8e76*/  mov sil, 1
/*1404c8e79*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404c8e7d*/  mov r8, [rbp+4F0h+var_440]
/*1404c8e84*/  jz loc_1404C8F8B
/*1404c8e8a*/  mov [rbp+4F0h+var_50], rcx
/*1404c8e91*/  mov rax, [rbp+4F0h+var_60]
/*1404c8e98*/  movups xmm0, xmmword ptr [rax+8]
/*1404c8e9c*/  movups [rbp+4F0h+var_2A0], xmm0
/*1404c8ea3*/  mov qword ptr [rbp+4F0h+var_180], 0
/*1404c8eae*/  mov qword ptr [rbp+4F0h+var_180+8], 1
/*1404c8eb9*/  mov qword ptr [rbp+4F0h+var_170], 0
/*1404c8ec4*/  mov qword ptr [rbp+4F0h+var_100], 60000020h
/*1404c8ecf*/  lea rax, [rbp+4F0h+var_180]
/*1404c8ed6*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c8edd*/  lea rax, off_14175E8C8
/*1404c8ee4*/  mov qword ptr [rbp+4F0h+var_110+8], rax
loc_1404C8EEB: /*1404c8eeb*/ lea rcx, [rbp+4F0h+var_2A0]
/*1404c8ef2*/  mov rdx, r12
/*1404c8ef5*/  call sub_14148F3A0
/*1404c8efa*/  nop
loc_1404C8EFB: /*1404c8efb*/ test al, al
/*1404c8efd*/  jnz loc_1404CB010
/*1404c8f03*/  mov r13, qword ptr [rbp+4F0h+var_180]
/*1404c8f0a*/  mov r8, qword ptr [rbp+4F0h+var_180+8]
/*1404c8f11*/  cmp r13, 0FFFFFFFFFFFFFFFFh
/*1404c8f15*/  mov rax, [rbp+4F0h+var_4B8]
/*1404c8f19*/  mov rcx, [rbp+4F0h+var_4B0]
/*1404c8f1d*/  mov rdx, [rbp+4F0h+var_4A8]
/*1404c8f21*/  jz short loc_1404C8F9C
/*1404c8f23*/  mov rdx, qword ptr [rbp+4F0h+var_170]
/*1404c8f2a*/  test rdx, rdx
/*1404c8f2d*/  js loc_1404CADCA
/*1404c8f33*/  mov r9b, 3
/*1404c8f36*/  jz short loc_1404C8FA1
/*1404c8f38*/  mov rsi, rdx
/*1404c8f3b*/  mov r14, r8
/*1404c8f3e*/  call nullsub_1
/*1404c8f43*/  mov ebx, 1
/*1404c8f48*/  mov edx, 1
/*1404c8f4d*/  mov rcx, rsi
/*1404c8f50*/  call sub_140001650
/*1404c8f55*/  mov r8, r14
/*1404c8f58*/  mov rdx, rsi
/*1404c8f5b*/  test rax, rax
/*1404c8f5e*/  jz loc_1404CADCC
/*1404c8f64*/  mov rcx, rax
/*1404c8f67*/  mov rdx, r8
/*1404c8f6a*/  mov r8, rsi
/*1404c8f6d*/  mov rbx, rax
/*1404c8f70*/  call sub_141684120
/*1404c8f75*/  mov rcx, rbx
/*1404c8f78*/  mov r8, r14
/*1404c8f7b*/  mov rax, rsi
/*1404c8f7e*/  xor esi, esi
/*1404c8f80*/  mov r14, r13
/*1404c8f83*/  mov rdx, rax
/*1404c8f86*/  mov r9b, 3
/*1404c8f89*/  jmp short loc_1404C8FAF
loc_1404C8F8B: /*1404c8f8b*/ xor r9d, r9d
/*1404c8f8e*/  mov rax, [rbp+4F0h+var_4B8]
/*1404c8f92*/  mov rcx, [rbp+4F0h+var_4B0]
/*1404c8f96*/  mov rdx, [rbp+4F0h+var_4A8]
/*1404c8f9a*/  jmp short loc_1404C8FAF
loc_1404C8F9C: /*1404c8f9c*/ xor r9d, r9d
/*1404c8f9f*/  jmp short loc_1404C8FAF
loc_1404C8FA1: /*1404c8fa1*/ mov ecx, 1
/*1404c8fa6*/  xor esi, esi
/*1404c8fa8*/  mov r14, r13
/*1404c8fab*/  xor eax, eax
/*1404c8fad*/  xor edx, edx
loc_1404C8FAF: /*1404c8faf*/ mov byte ptr [rbp+4F0h+var_110], r9b
/*1404c8fb6*/  mov [rbp+4F0h+var_4B8], rax
/*1404c8fba*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c8fc1*/  mov [rbp+4F0h+var_4B0], rcx
/*1404c8fc5*/  mov qword ptr [rbp+4F0h+var_100], rcx
/*1404c8fcc*/  mov [rbp+4F0h+var_4A8], rdx
/*1404c8fd0*/  mov qword ptr [rbp+4F0h+var_100+8], rdx
/*1404c8fd7*/  mov [rbp+4F0h+var_86], sil
/*1404c8fde*/  mov [rbp+4F0h+var_440], r8
/*1404c8fe5*/  mov [rbp+4F0h+var_4F0], r8
/*1404c8fe9*/  mov [rbp+4F0h+var_4F8], r14
/*1404c8fed*/  mov [rbp+4F0h+var_87], 0
loc_1404C8FF4: /*1404c8ff4*/ lea rcx, [rbp+4F0h+var_180]
/*1404c8ffb*/  lea rdx, [rbp+4F0h+var_80]
/*1404c9002*/  lea r8, [rbp+4F0h+var_1A8]
/*1404c9009*/  mov r9, r12
/*1404c900c*/  call sub_140307860
/*1404c9011*/  nop
/*1404c9012*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c9019*/  jz short loc_1404C903E
/*1404c901b*/  mov [rbp+4F0h+var_53], sil
/*1404c9022*/  mov rax, [rbp+4F0h+var_440]
/*1404c9029*/  mov [rbp+4F0h+var_488], rax
/*1404c902d*/  mov [rbp+4F0h+var_490], r14
loc_1404C9031: /*1404c9031*/ lea rcx, [rbp+4F0h+var_180]
/*1404c9038*/  call sub_1400104F0
/*1404c903d*/  nop
loc_1404C903E: /*1404c903e*/ test r14, r14
/*1404c9041*/  setz al
/*1404c9044*/  or sil, al
/*1404c9047*/  jnz short loc_1404C905E
/*1404c9049*/  mov r8d, 1
/*1404c904f*/  mov rcx, [rbp+4F0h+var_440]
/*1404c9056*/  mov rdx, r14
/*1404c9059*/  call sub_140001660
loc_1404C905E: /*1404c905e*/ call nullsub_1
/*1404c9063*/  mov ecx, 6
/*1404c9068*/  mov edx, 1
/*1404c906d*/  call sub_140001650
/*1404c9072*/  test rax, rax
/*1404c9075*/  jz loc_1404CB1BB
/*1404c907b*/  mov word ptr [rax+4], 6874h
/*1404c9081*/  mov dword ptr [rax], 61506264h
/*1404c9087*/  mov qword ptr [rbp+4F0h+var_1A8], 6
/*1404c9092*/  mov [rbp+4F0h+var_60], rax
/*1404c9099*/  mov qword ptr [rbp+4F0h+var_1A8+8], rax
/*1404c90a0*/  mov [rbp+4F0h+var_198], 6
/*1404c90ab*/  mov rax, [rbp+4F0h+var_1F0]
/*1404c90b2*/  mov qword ptr [rbp+4F0h+var_2A0], rax
/*1404c90b9*/  mov qword ptr [rbp+4F0h+var_2A0+8], r15
/*1404c90c0*/  mov qword ptr [rbp+4F0h+var_180], 0
/*1404c90cb*/  mov qword ptr [rbp+4F0h+var_180+8], 1
/*1404c90d6*/  mov qword ptr [rbp+4F0h+var_170], 0
/*1404c90e1*/  mov qword ptr [rbp+4F0h+var_100], 60000020h
/*1404c90ec*/  lea rax, [rbp+4F0h+var_180]
/*1404c90f3*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c90fa*/  lea rax, off_14175E8C8
/*1404c9101*/  mov qword ptr [rbp+4F0h+var_110+8], rax
loc_1404C9108: /*1404c9108*/ lea rcx, [rbp+4F0h+var_2A0]
/*1404c910f*/  mov rdx, r12
/*1404c9112*/  call sub_14148F3A0
/*1404c9117*/  nop
loc_1404C9118: /*1404c9118*/ test al, al
/*1404c911a*/  jnz loc_1404CAFDF
/*1404c9120*/  mov rax, qword ptr [rbp+4F0h+var_180]
/*1404c9127*/  mov [rbp+4F0h+var_60], rax
/*1404c912e*/  mov r13, qword ptr [rbp+4F0h+var_180+8]
/*1404c9135*/  mov r14, qword ptr [rbp+4F0h+var_170]
/*1404c913c*/  test r14, r14
/*1404c913f*/  mov [rbp+4F0h+var_50], r13
/*1404c9146*/  js loc_1404CADB0
/*1404c914c*/  jz short loc_1404C9181
/*1404c914e*/  call nullsub_1
/*1404c9153*/  mov esi, 1
/*1404c9158*/  mov edx, 1
/*1404c915d*/  mov rcx, r14
/*1404c9160*/  call sub_140001650
/*1404c9165*/  test rax, rax
/*1404c9168*/  jz loc_1404CADB2
/*1404c916e*/  mov rbx, rax
/*1404c9171*/  mov rcx, rax
/*1404c9174*/  mov rdx, r13
/*1404c9177*/  mov r8, r14
/*1404c917a*/  call sub_141684120
/*1404c917f*/  jmp short loc_1404C9186
loc_1404C9181: /*1404c9181*/ mov ebx, 1
loc_1404C9186: /*1404c9186*/ mov byte ptr [rbp+4F0h+var_110], 3
/*1404c918d*/  mov qword ptr [rbp+4F0h+var_110+8], r14
/*1404c9194*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c919b*/  mov qword ptr [rbp+4F0h+var_100+8], r14
/*1404c91a2*/  mov [rbp+4F0h+var_88], 0
loc_1404C91A9: /*1404c91a9*/ lea rcx, [rbp+4F0h+var_180]
/*1404c91b0*/  lea rdx, [rbp+4F0h+var_80]
/*1404c91b7*/  lea r8, [rbp+4F0h+var_1A8]
/*1404c91be*/  mov r9, r12
/*1404c91c1*/  call sub_140307860
/*1404c91c6*/  nop
/*1404c91c7*/  cmp byte ptr [rbp+4F0h+var_180], 0FFh
/*1404c91ce*/  jz short loc_1404C91DD
loc_1404C91D0: /*1404c91d0*/ lea rcx, [rbp+4F0h+var_180]
/*1404c91d7*/  call sub_1400104F0
/*1404c91dc*/  nop
loc_1404C91DD: /*1404c91dd*/ mov rdx, [rbp+4F0h+var_60]
/*1404c91e4*/  test rdx, rdx
/*1404c91e7*/  jz short loc_1404C91FB
/*1404c91e9*/  mov r8d, 1
/*1404c91ef*/  mov rcx, [rbp+4F0h+var_50]
/*1404c91f6*/  call sub_140001660
loc_1404C91FB: /*1404c91fb*/ mov rax, [rbp+4F0h+var_70]
/*1404c9202*/  lea rcx, [rbp+4F0h+var_3B0+8]
/*1404c9209*/  mov [rcx+10h], rax
/*1404c920d*/  movups xmm0, [rbp+4F0h+var_80]
/*1404c9214*/  movups xmmword ptr [rcx], xmm0
/*1404c9217*/  mov byte ptr [rbp+4F0h+var_3B0], 5
/*1404c921e*/  mov rsi, [rbp+4F0h+var_1C0]
/*1404c9225*/  cmp rsi, [rbp+4F0h+var_1D0]
/*1404c922c*/  jnz short loc_1404C923B
loc_1404C922E: /*1404c922e*/ lea rcx, [rbp+4F0h+var_1D0]
/*1404c9235*/  call sub_1416890A0
/*1404c923a*/  nop
loc_1404C923B: /*1404c923b*/ mov rax, [rbp+4F0h+var_1C8]
/*1404c9242*/  mov rcx, rsi
/*1404c9245*/  shl rcx, 5
/*1404c9249*/  movups xmm0, [rbp+4F0h+var_3B0]
/*1404c9250*/  movups xmm1, [rbp+4F0h+var_3A0]
/*1404c9257*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404c925c*/  movups xmmword ptr [rax+rcx], xmm0
/*1404c9260*/  inc rsi
/*1404c9263*/  mov [rbp+4F0h+var_1C0], rsi
/*1404c926a*/  mov rdx, qword ptr [rbp+4F0h+var_210]
/*1404c9271*/  test rdx, rdx
/*1404c9274*/  jz short loc_1404C9288
/*1404c9276*/  mov rcx, qword ptr [rbp+4F0h+var_210+8]
/*1404c927d*/  mov r8d, 1
/*1404c9283*/  call sub_140001660
loc_1404C9288: /*1404c9288*/ mov al, 1
/*1404c928a*/  mov [rbp+4F0h+var_2A4], eax
/*1404c9290*/  mov rsi, [rbp+4F0h+var_3C0]
loc_1404C9297: /*1404c9297*/ mov rdx, qword ptr [rbp+4F0h+var_358]
/*1404c929e*/  test rdx, rdx
/*1404c92a1*/  jz short loc_1404C92B5
/*1404c92a3*/  mov rcx, qword ptr [rbp+4F0h+var_358+8]
/*1404c92aa*/  mov r8d, 1
/*1404c92b0*/  call sub_140001660
loc_1404C92B5: /*1404c92b5*/ mov rdx, [rbp+4F0h+var_328]
/*1404c92bc*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404c92c0*/  jz short loc_1404C92D9
/*1404c92c2*/  test rdx, rdx
/*1404c92c5*/  jz short loc_1404C92D9
/*1404c92c7*/  mov rcx, [rbp+4F0h+var_320]
/*1404c92ce*/  mov r8d, 1
/*1404c92d4*/  call sub_140001660
loc_1404C92D9: /*1404c92d9*/ mov rdx, [rbp+4F0h+var_340]
/*1404c92e0*/  test rdx, rdx
/*1404c92e3*/  jz short loc_1404C92F7
/*1404c92e5*/  mov rcx, [rbp+4F0h+var_338]
/*1404c92ec*/  mov r8d, 1
/*1404c92f2*/  call sub_140001660
loc_1404C92F7: /*1404c92f7*/ mov al, 1
/*1404c92f9*/  mov [rbp+4F0h+var_2A8], eax
/*1404c92ff*/  mov rcx, [rbp+4F0h+var_4C8]
/*1404c9303*/  jmp loc_1404C78A4
loc_1404C9308: /*1404c9308*/ lea rcx, [rbp+4F0h+var_480]
/*1404c930c*/  call sub_1403333D0
/*1404c9311*/  nop
/*1404c9312*/  mov r13, [rbp+4F0h+var_4D0]
/*1404c9316*/  test byte ptr [rbp+4F0h+var_2A4], 1
/*1404c931d*/  jz short loc_1404C9339
/*1404c931f*/  mov r8d, 16h
/*1404c9325*/  lea rcx, [rbp+4F0h+var_280]
/*1404c932c*/  lea rdx, aMissingRollout; "missing-rollout repair"
/*1404c9333*/  call checkpoint_after_committed_write
/*1404c9338*/  nop
loc_1404C9339: /*1404c9339*/ lea rcx, [rbp+4F0h+var_280]
/*1404c9340*/  call sub_14043C900
/*1404c9345*/  nop
/*1404c9346*/  mov rdx, [rbp+4F0h+var_90]
/*1404c934d*/  test rdx, rdx
/*1404c9350*/  mov r14, [rbp+4F0h+var_98]
/*1404c9357*/  mov rsi, [rbp+4F0h+var_4D8]
/*1404c935b*/  jnz loc_1404C7854
/*1404c9361*/  jmp loc_1404C75A8
loc_1404C9366: /*1404c9366*/ cmp [rbp+4F0h+var_3C8], rcx
/*1404c936d*/  jz short loc_1404C93A2
/*1404c936f*/  shr rsi, 5
/*1404c9373*/  jmp short loc_1404C9389
loc_1404C9380: /*1404c9380*/ add rbx, 20h ; ' '
/*1404c9384*/  dec rsi
/*1404c9387*/  jz short loc_1404C93A2
loc_1404C9389: /*1404c9389*/ mov rdx, [rbx-8]
/*1404c938d*/  test rdx, rdx
/*1404c9390*/  jz short loc_1404C9380
/*1404c9392*/  mov rcx, [rbx]
/*1404c9395*/  mov r8d, 1
/*1404c939b*/  call sub_140001660
/*1404c93a0*/  jmp short loc_1404C9380
loc_1404C93A2: /*1404c93a2*/ mov rdx, [rbp+4F0h+var_458]
/*1404c93a9*/  test rdx, rdx
/*1404c93ac*/  jz short loc_1404C93C4
/*1404c93ae*/  shl rdx, 5
/*1404c93b2*/  mov r8d, 8
/*1404c93b8*/  mov rcx, [rbp+4F0h+var_450]
/*1404c93bf*/  call sub_140001660
loc_1404C93C4: /*1404c93c4*/ mov rax, qword ptr [rbp+4F0h+var_3D8]
/*1404c93cb*/  or rax, qword ptr [rbp+4F0h+var_3E8+8]
/*1404c93d2*/  jz loc_1404CA141
/*1404c93d8*/  mov rdi, [rbp+4F0h+var_1C8]
/*1404c93df*/  mov r14, [rbp+4F0h+var_1C0]
loc_1404C93E6: /*1404c93e6*/ mov [rsp+570h+var_550], 16h
/*1404c93ef*/  lea r9, unk_14175CC22
/*1404c93f6*/  lea rcx, [rbp+4F0h+var_358]
/*1404c93fd*/  mov rdx, [rbp+4F0h+var_4E8]
/*1404c9401*/  mov r8, [rbp+4F0h+var_4E0]
/*1404c9405*/  call sub_141473FA0
/*1404c940a*/  nop
/*1404c940b*/  mov byte ptr [rbp+4F0h+var_110], 1
/*1404c9412*/  mov rdx, qword ptr [rbp+4F0h+var_358+8]
/*1404c9419*/  mov r15, [rbp+4F0h+var_348]
loc_1404C9420: /*1404c9420*/ lea rcx, [rbp+4F0h+var_110]
/*1404c9427*/  mov [rbp+4F0h+var_98], rdx
/*1404c942e*/  mov r8, r15
/*1404c9431*/  call sub_14147B9A0
/*1404c9436*/  nop
/*1404c9437*/  test rax, rax
/*1404c943a*/  jz loc_1404C952F
/*1404c9440*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404c9447*/  mov rax, cs:off_141EC8D80
/*1404c944e*/  mov rax, [rax]
/*1404c9451*/  cmp rax, 2
/*1404c9455*/  jb loc_1404C951D
/*1404c945b*/  lea rax, [rbp+4F0h+var_180]
/*1404c9462*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404c9469*/  lea rax, sub_141490720
/*1404c9470*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404c9477*/  mov qword ptr [rbp+4F0h+var_110], 0
/*1404c9482*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404c9489*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c9490*/  mov qword ptr [rbp+4F0h+var_100], 33h ; '3'
/*1404c949b*/  mov qword ptr [rbp+4F0h+var_100+8], 0
/*1404c94a6*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404c94ad*/  mov qword ptr [rbp+4F0h+var_F0], rcx
/*1404c94b4*/  mov qword ptr [rbp+4F0h+var_F0+8], 29h ; ')'
/*1404c94bf*/  mov qword ptr [rbp+4F0h+var_E0], 2
/*1404c94ca*/  mov qword ptr [rbp+4F0h+var_E0+8], rax
/*1404c94d1*/  mov qword ptr [rbp+4F0h+var_D0], 33h ; '3'
/*1404c94dc*/  mov rax, 7B900000001h
/*1404c94e6*/  mov qword ptr [rbp+4F0h+var_D0+8], rax
/*1404c94ed*/  lea rax, unk_14175CC38
/*1404c94f4*/  mov qword ptr [rbp+4F0h+var_C0], rax
/*1404c94fb*/  lea rax, [rbp+4F0h+var_280]
/*1404c9502*/  mov qword ptr [rbp+4F0h+var_C0+8], rax
loc_1404C9509: /*1404c9509*/ lea rcx, [rbp+4F0h+var_41]
/*1404c9510*/  lea rdx, [rbp+4F0h+var_110]
/*1404c9517*/  call sub_1412C36A0
/*1404c951c*/  nop
loc_1404C951D: /*1404c951d*/ lea rcx, [rbp+4F0h+var_180]
/*1404c9524*/  call sub_140018650
/*1404c9529*/  nop
/*1404c952a*/  jmp loc_1404C9FAB
loc_1404C952F: /*1404c952f*/ call sub_141475580
/*1404c9534*/  nop
/*1404c9535*/  mov dword ptr [rbp+4F0h+var_280], eax
/*1404c953b*/  mov dword ptr [rbp+4F0h+var_280+4], edx
/*1404c9541*/  lea rcx, [rbp+4F0h+var_110]
/*1404c9548*/  lea rbx, [rbp+4F0h+var_280]
/*1404c954f*/  mov rdx, rbx
/*1404c9552*/  mov r8d, 0D53E8000h
/*1404c9558*/  mov r9d, 19DB1DEh
/*1404c955e*/  call sub_141475530
/*1404c9563*/  nop
/*1404c9564*/  cmp byte ptr [rbp+4F0h+var_110], 0
/*1404c956b*/  jnz loc_1404C96E4
/*1404c9571*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c9578*/  jmp loc_1404C96E6
loc_1404C957D: /*1404c957d*/ movups xmm0, [rbp+4F0h+var_C0]
/*1404c9584*/  movaps [rbp+4F0h+var_130], xmm0
/*1404c958b*/  movups xmm1, [rbp+4F0h+var_D0]
/*1404c9592*/  movaps [rbp+4F0h+var_140], xmm1
/*1404c9599*/  movups xmm2, [rbp+4F0h+var_110]
/*1404c95a0*/  movups xmm3, [rbp+4F0h+var_100]
/*1404c95a7*/  movups xmm4, [rbp+4F0h+var_F0]
/*1404c95ae*/  movups xmm5, [rbp+4F0h+var_E0]
/*1404c95b5*/  movaps [rbp+4F0h+var_150], xmm5
/*1404c95bc*/  movaps [rbp+4F0h+var_160], xmm4
/*1404c95c3*/  movaps [rbp+4F0h+var_170], xmm3
/*1404c95ca*/  movaps [rbp+4F0h+var_180], xmm2
/*1404c95d1*/  mov rax, [rbp+4F0h+var_1E8]
/*1404c95d8*/  movups xmmword ptr [rax+58h], xmm0
/*1404c95dc*/  movups xmmword ptr [rax+48h], xmm1
/*1404c95e0*/  movups xmmword ptr [rax+38h], xmm5
/*1404c95e4*/  movups xmmword ptr [rax+28h], xmm4
/*1404c95e8*/  movups xmmword ptr [rax+18h], xmm3
/*1404c95ec*/  movups xmmword ptr [rax+8], xmm2
/*1404c95f0*/  mov qword ptr [rax], 1
/*1404c95f7*/  jmp short loc_1404C9654
loc_1404C95F9: /*1404c95f9*/ movups xmm0, [rbp+4F0h+var_F0]
/*1404c9600*/  movups xmm1, [rbp+4F0h+var_E0]
/*1404c9607*/  movups xmm2, [rbp+4F0h+var_D0]
/*1404c960e*/  movups xmm3, [rbp+4F0h+var_C0]
/*1404c9615*/  mov r9, [rbp+4F0h+var_1E8]
/*1404c961c*/  movups xmmword ptr [r9+58h], xmm3
/*1404c9621*/  movups xmmword ptr [r9+48h], xmm2
/*1404c9626*/  movups xmmword ptr [r9+38h], xmm1
/*1404c962b*/  movups xmmword ptr [r9+28h], xmm0
/*1404c9630*/  mov [r9+10h], rax
/*1404c9634*/  mov [r9+18h], rcx
/*1404c9638*/  mov [r9+20h], rdx
/*1404c963c*/  mov [r9+8], r8
/*1404c9640*/  mov qword ptr [r9], 1
loc_1404C9647: /*1404c9647*/ lea rcx, [rbp+4F0h+var_280]
/*1404c964e*/  call sub_14043C900
/*1404c9653*/  nop
loc_1404C9654: /*1404c9654*/ mov rdx, [rbp+4F0h+var_90]
/*1404c965b*/  test rdx, rdx
/*1404c965e*/  mov rsi, [rbp+4F0h+var_458]
/*1404c9665*/  jz short loc_1404C9679
/*1404c9667*/  mov r8d, 1
/*1404c966d*/  mov rcx, [rbp+4F0h+var_1F0]
/*1404c9674*/  call sub_140001660
loc_1404C9679: /*1404c9679*/ mov rax, [rbp+4F0h+var_98]
/*1404c9680*/  cmp [rbp+4F0h+var_3C8], rax
/*1404c9687*/  mov rdi, [rbp+4F0h+var_1B0]
/*1404c968e*/  mov rbx, [rbp+4F0h+var_460]
/*1404c9695*/  jz short loc_1404C96C2
/*1404c9697*/  shr rdi, 5
/*1404c969b*/  jmp short loc_1404C96A9
loc_1404C96A0: /*1404c96a0*/ add rbx, 20h ; ' '
/*1404c96a4*/  dec rdi
/*1404c96a7*/  jz short loc_1404C96C2
loc_1404C96A9: /*1404c96a9*/ mov rdx, [rbx-8]
/*1404c96ad*/  test rdx, rdx
/*1404c96b0*/  jz short loc_1404C96A0
/*1404c96b2*/  mov rcx, [rbx]
/*1404c96b5*/  mov r8d, 1
/*1404c96bb*/  call sub_140001660
/*1404c96c0*/  jmp short loc_1404C96A0
loc_1404C96C2: /*1404c96c2*/ test rsi, rsi
/*1404c96c5*/  jz loc_1404CA818
/*1404c96cb*/  shl rsi, 5
/*1404c96cf*/  mov r8d, 8
/*1404c96d5*/  mov rcx, [rbp+4F0h+var_450]
/*1404c96dc*/  mov rdx, rsi
/*1404c96df*/  jmp loc_1404CA813
loc_1404C96E4: /*1404c96e4*/ xor eax, eax
loc_1404C96E6: /*1404c96e6*/ mov qword ptr [rbp+4F0h+var_180], rax
loc_1404C96ED: /*1404c96ed*/ lea rcx, [rbp+4F0h+var_110]
/*1404c96f4*/  call sub_141356270
/*1404c96f9*/  nop
/*1404c96fa*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c9701*/  movaps [rbp+4F0h+var_280], xmm0
/*1404c9708*/  lea rax, [rbp+4F0h+var_180]
/*1404c970f*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c9716*/  lea rax, sub_1414AC520
/*1404c971d*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c9724*/  mov qword ptr [rbp+4F0h+var_100], rbx
/*1404c972b*/  lea rax, sub_140421AE0
/*1404c9732*/  mov qword ptr [rbp+4F0h+var_100+8], rax
/*1404c9739*/  lea rdx, unk_14175CC77
/*1404c9740*/  lea rcx, [rbp+4F0h+var_480]
/*1404c9744*/  lea r8, [rbp+4F0h+var_110]
/*1404c974b*/  call sub_14149C0F0
/*1404c9750*/  nop
/*1404c9751*/  mov r9, qword ptr [rbp+4F0h+var_480+8]
/*1404c9755*/  mov rax, [rbp+4F0h+var_470]
loc_1404C975C: /*1404c975c*/ mov [rsp+570h+var_550], rax
/*1404c9761*/  lea rcx, [rbp+4F0h+var_3B0]
/*1404c9768*/  mov rdx, [rbp+4F0h+var_98]
/*1404c976f*/  mov r8, r15
/*1404c9772*/  mov [rbp+4F0h+var_90], r9
/*1404c9779*/  call sub_141473FA0
/*1404c977e*/  nop
/*1404c977f*/  mov rdx, qword ptr [rbp+4F0h+var_480]
/*1404c9783*/  test rdx, rdx
/*1404c9786*/  jz short loc_1404C979A
/*1404c9788*/  mov r8d, 1
/*1404c978e*/  mov rcx, [rbp+4F0h+var_90]
/*1404c9795*/  call sub_140001660
loc_1404C979A: /*1404c979a*/ mov qword ptr [rbp+4F0h+var_1A8], 0
/*1404c97a5*/  mov [rbp+4F0h+var_198], 0
/*1404c97b0*/  call nullsub_1
/*1404c97b5*/  mov ecx, 9
/*1404c97ba*/  mov edx, 1
/*1404c97bf*/  call sub_140001650
/*1404c97c4*/  test rax, rax
/*1404c97c7*/  jz loc_1404CB041
/*1404c97cd*/  mov rcx, 4164657461657263h
/*1404c97d7*/  mov [rax], rcx
/*1404c97da*/  mov byte ptr [rax+8], 74h ; 't'
/*1404c97de*/  mov qword ptr [rbp+4F0h+var_2F0], 9
/*1404c97e9*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c97f0*/  mov qword ptr [rbp+4F0h+var_2E0], 9
/*1404c97fb*/  mov [rbp+4F0h+var_51], 1
loc_1404C9802: /*1404c9802*/ call sub_141475580
/*1404c9807*/  nop
/*1404c9808*/  mov dword ptr [rbp+4F0h+var_280], eax
/*1404c980e*/  mov dword ptr [rbp+4F0h+var_280+4], edx
/*1404c9814*/  mov [rbp+4F0h+var_51], 1
/*1404c981b*/  lea rcx, [rbp+4F0h+var_110]
/*1404c9822*/  lea rdx, [rbp+4F0h+var_280]
/*1404c9829*/  mov r8d, 0D53E8000h
/*1404c982f*/  mov r9d, 19DB1DEh
/*1404c9835*/  call sub_141475530
/*1404c983a*/  nop
/*1404c983b*/  cmp byte ptr [rbp+4F0h+var_110], 0
/*1404c9842*/  jnz short loc_1404C984D
/*1404c9844*/  mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404c984b*/  jmp short loc_1404C984F
loc_1404C984D: /*1404c984d*/ xor eax, eax
loc_1404C984F: /*1404c984f*/ mov byte ptr [rbp+4F0h+var_110], 2
/*1404c9856*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c9861*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9868*/  mov [rbp+4F0h+var_51], 0
/*1404c986f*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9876*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c987d*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c9884*/  lea r9, [rbp+4F0h+var_110]
/*1404c988b*/  call sub_140307860
/*1404c9890*/  nop
/*1404c9891*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c9898*/  jz short loc_1404C98A7
loc_1404C989A: /*1404c989a*/ lea rcx, [rbp+4F0h+var_280]
/*1404c98a1*/  call sub_1400104F0
/*1404c98a6*/  nop
loc_1404C98A7: /*1404c98a7*/ call nullsub_1
/*1404c98ac*/  mov ecx, 7
/*1404c98b1*/  mov edx, 1
/*1404c98b6*/  call sub_140001650
/*1404c98bb*/  test rax, rax
/*1404c98be*/  jz loc_1404CB056
/*1404c98c4*/  mov dword ptr [rax+3], 64656E6Eh
/*1404c98cb*/  mov dword ptr [rax], 6E616373h
/*1404c98d1*/  mov qword ptr [rbp+4F0h+var_2F0], 7
/*1404c98dc*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c98e3*/  mov qword ptr [rbp+4F0h+var_2E0], 7
/*1404c98ee*/  mov rax, qword ptr [rbp+4F0h+var_3F8+8]
/*1404c98f5*/  mov byte ptr [rbp+4F0h+var_110], 2
/*1404c98fc*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c9907*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c990e*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9915*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c991c*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c9923*/  lea r9, [rbp+4F0h+var_110]
/*1404c992a*/  call sub_140307860
/*1404c992f*/  nop
/*1404c9930*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c9937*/  jz short loc_1404C9946
/*1404c9939*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9940*/  call sub_1400104F0
/*1404c9945*/  nop
loc_1404C9946: /*1404c9946*/ call nullsub_1
/*1404c994b*/  mov ecx, 7
/*1404c9950*/  mov edx, 1
/*1404c9955*/  call sub_140001650
/*1404c995a*/  test rax, rax
/*1404c995d*/  jz loc_1404CB06B
/*1404c9963*/  mov dword ptr [rax+3], 676E6973h
/*1404c996a*/  mov dword ptr [rax], 7373696Dh
/*1404c9970*/  mov qword ptr [rbp+4F0h+var_2F0], 7
/*1404c997b*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c9982*/  mov qword ptr [rbp+4F0h+var_2E0], 7
/*1404c998d*/  mov rax, qword ptr [rbp+4F0h+var_3E8]
/*1404c9994*/  mov byte ptr [rbp+4F0h+var_110], 2
/*1404c999b*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c99a6*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c99ad*/  lea rcx, [rbp+4F0h+var_280]
/*1404c99b4*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c99bb*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c99c2*/  lea r9, [rbp+4F0h+var_110]
/*1404c99c9*/  call sub_140307860
/*1404c99ce*/  nop
/*1404c99cf*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c99d6*/  jz short loc_1404C99E5
/*1404c99d8*/  lea rcx, [rbp+4F0h+var_280]
/*1404c99df*/  call sub_1400104F0
/*1404c99e4*/  nop
loc_1404C99E5: /*1404c99e5*/ call nullsub_1
/*1404c99ea*/  mov ecx, 8
/*1404c99ef*/  mov edx, 1
/*1404c99f4*/  call sub_140001650
/*1404c99f9*/  test rax, rax
/*1404c99fc*/  jz loc_1404CB080
/*1404c9a02*/  mov rcx, 6465726F74736572h
/*1404c9a0c*/  mov [rax], rcx
/*1404c9a0f*/  mov qword ptr [rbp+4F0h+var_2F0], 8
/*1404c9a1a*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c9a21*/  mov qword ptr [rbp+4F0h+var_2E0], 8
/*1404c9a2c*/  mov rax, qword ptr [rbp+4F0h+var_3E8+8]
/*1404c9a33*/  mov byte ptr [rbp+4F0h+var_110], 2
/*1404c9a3a*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c9a45*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9a4c*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9a53*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c9a5a*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c9a61*/  lea r9, [rbp+4F0h+var_110]
/*1404c9a68*/  call sub_140307860
/*1404c9a6d*/  nop
/*1404c9a6e*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c9a75*/  jz short loc_1404C9A84
/*1404c9a77*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9a7e*/  call sub_1400104F0
/*1404c9a83*/  nop
loc_1404C9A84: /*1404c9a84*/ call nullsub_1
/*1404c9a89*/  mov ecx, 8
/*1404c9a8e*/  mov edx, 1
/*1404c9a93*/  call sub_140001650
/*1404c9a98*/  test rax, rax
/*1404c9a9b*/  jz loc_1404CB095
/*1404c9aa1*/  mov rcx, 646574616C6F7369h
/*1404c9aab*/  mov [rax], rcx
/*1404c9aae*/  mov qword ptr [rbp+4F0h+var_2F0], 8
/*1404c9ab9*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c9ac0*/  mov qword ptr [rbp+4F0h+var_2E0], 8
/*1404c9acb*/  mov rax, qword ptr [rbp+4F0h+var_3D8]
/*1404c9ad2*/  mov byte ptr [rbp+4F0h+var_110], 2
/*1404c9ad9*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c9ae4*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9aeb*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9af2*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c9af9*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c9b00*/  lea r9, [rbp+4F0h+var_110]
/*1404c9b07*/  call sub_140307860
/*1404c9b0c*/  nop
/*1404c9b0d*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c9b14*/  jz short loc_1404C9B23
/*1404c9b16*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9b1d*/  call sub_1400104F0
/*1404c9b22*/  nop
loc_1404C9B23: /*1404c9b23*/ call nullsub_1
/*1404c9b28*/  mov ecx, 9
/*1404c9b2d*/  mov edx, 1
/*1404c9b32*/  call sub_140001650
/*1404c9b37*/  test rax, rax
/*1404c9b3a*/  jz loc_1404CB0AA
/*1404c9b40*/  mov rcx, 70756B6361426264h
/*1404c9b4a*/  mov [rax], rcx
/*1404c9b4d*/  mov byte ptr [rax+8], 73h ; 's'
/*1404c9b51*/  mov qword ptr [rbp+4F0h+var_2F0], 9
/*1404c9b5c*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c9b63*/  mov qword ptr [rbp+4F0h+var_2E0], 9
/*1404c9b6e*/  mov rax, qword ptr [rbp+4F0h+var_3D8+8]
/*1404c9b75*/  mov byte ptr [rbp+4F0h+var_110], 2
/*1404c9b7c*/  mov qword ptr [rbp+4F0h+var_110+8], 0
/*1404c9b87*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9b8e*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9b95*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c9b9c*/  lea r8, [rbp+4F0h+var_2F0]
/*1404c9ba3*/  lea r9, [rbp+4F0h+var_110]
/*1404c9baa*/  call sub_140307860
/*1404c9baf*/  nop
/*1404c9bb0*/  cmp byte ptr [rbp+4F0h+var_280], 0FFh
/*1404c9bb7*/  jz short loc_1404C9BC6
/*1404c9bb9*/  lea rcx, [rbp+4F0h+var_280]
/*1404c9bc0*/  call sub_1400104F0
/*1404c9bc5*/  nop
loc_1404C9BC6: /*1404c9bc6*/ call nullsub_1
/*1404c9bcb*/  mov ecx, 6
/*1404c9bd0*/  mov edx, 1
/*1404c9bd5*/  call sub_140001650
/*1404c9bda*/  test rax, rax
/*1404c9bdd*/  jz loc_1404CB0BF
/*1404c9be3*/  mov word ptr [rax+4], 7374h
/*1404c9be9*/  mov dword ptr [rax], 6E657665h
/*1404c9bef*/  mov qword ptr [rbp+4F0h+var_2F0], 6
/*1404c9bfa*/  mov qword ptr [rbp+4F0h+var_2F0+8], rax
/*1404c9c01*/  mov qword ptr [rbp+4F0h+var_2E0], 6
/*1404c9c0c*/  mov [rbp+4F0h+var_42], 1
loc_1404C9C13: /*1404c9c13*/ lea rcx, [rbp+4F0h+var_110]
/*1404c9c1a*/  mov rdx, rdi
/*1404c9c1d*/  mov r8, r14
/*1404c9c20*/  call sub_140468ED0
/*1404c9c25*/  nop
/*1404c9c26*/  cmp byte ptr [rbp+4F0h+var_110], 0FFh
/*1404c9c2d*/  jz loc_1404CAF0D
/*1404c9c33*/  movups xmm0, [rbp+4F0h+var_110]
/*1404c9c3a*/  movups xmm1, [rbp+4F0h+var_100]
/*1404c9c41*/  movaps [rbp+4F0h+var_270], xmm1
/*1404c9c48*/  movaps [rbp+4F0h+var_280], xmm0
/*1404c9c4f*/  mov [rbp+4F0h+var_42], 0
/*1404c9c56*/  lea rcx, [rbp+4F0h+var_110]
/*1404c9c5d*/  lea rdx, [rbp+4F0h+var_1A8]
/*1404c9c64*/  lea rdi, [rbp+4F0h+var_2F0]
/*1404c9c6b*/  mov r8, rdi
/*1404c9c6e*/  mov r9, rbx
/*1404c9c71*/  call sub_140307860
/*1404c9c76*/  nop
/*1404c9c77*/  cmp byte ptr [rbp+4F0h+var_110], 0FFh
/*1404c9c7e*/  jz short loc_1404C9C8D
loc_1404C9C80: /*1404c9c80*/ lea rcx, [rbp+4F0h+var_110]
/*1404c9c87*/  call sub_1400104F0
/*1404c9c8c*/  nop
loc_1404C9C8D: /*1404c9c8d*/ movups xmm0, [rbp+4F0h+var_1A8]
/*1404c9c94*/  movups [rbp+4F0h+var_180+8], xmm0
/*1404c9c9b*/  mov rax, [rbp+4F0h+var_198]
/*1404c9ca2*/  mov qword ptr [rbp+4F0h+var_170+8], rax
/*1404c9ca9*/  mov byte ptr [rbp+4F0h+var_180], 5
/*1404c9cb0*/  call nullsub_1
/*1404c9cb5*/  mov ecx, 80h
/*1404c9cba*/  mov edx, 1
/*1404c9cbf*/  call sub_140001650
/*1404c9cc4*/  test rax, rax
/*1404c9cc7*/  jz loc_1404CB0D4
/*1404c9ccd*/  mov qword ptr [rbp+4F0h+var_280], 80h
/*1404c9cd8*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404c9cdf*/  mov qword ptr [rbp+4F0h+var_270], 0
/*1404c9cea*/  mov qword ptr [rbp+4F0h+var_110], rbx
/*1404c9cf1*/  lea rax, asc_141756910; "  "
/*1404c9cf8*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404c9cff*/  mov qword ptr [rbp+4F0h+var_100], 2
/*1404c9d0a*/  mov qword ptr [rbp+4F0h+var_100+8], 0
/*1404c9d15*/  mov byte ptr [rbp+4F0h+var_F0], 0
loc_1404C9D1C: /*1404c9d1c*/ lea rcx, [rbp+4F0h+var_180]
/*1404c9d23*/  lea rdx, [rbp+4F0h+var_110]
/*1404c9d2a*/  call sub_140444720
/*1404c9d2f*/  nop
/*1404c9d30*/  mov rax, qword ptr [rbp+4F0h+var_280]
/*1404c9d37*/  mov r8, qword ptr [rbp+4F0h+var_280+8]
/*1404c9d3e*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404c9d42*/  jz loc_1404C9E33
/*1404c9d48*/  mov [rbp+4F0h+var_1B0], rax
/*1404c9d4f*/  mov r9, qword ptr [rbp+4F0h+var_270]
/*1404c9d56*/  mov rcx, qword ptr [rbp+4F0h+var_3B0+8]
/*1404c9d5d*/  mov rdx, qword ptr [rbp+4F0h+var_3A0]
loc_1404C9D64: /*1404c9d64*/ mov [rbp+4F0h+var_90], r8
/*1404c9d6b*/  call sub_14148D5C0
/*1404c9d70*/  nop
/*1404c9d71*/  mov rbx, rax
/*1404c9d74*/  mov rdx, [rbp+4F0h+var_1B0]
/*1404c9d7b*/  test rdx, rdx
/*1404c9d7e*/  jz short loc_1404C9D92
/*1404c9d80*/  mov r8d, 1
/*1404c9d86*/  mov rcx, [rbp+4F0h+var_90]
/*1404c9d8d*/  call sub_140001660
loc_1404C9D92: /*1404c9d92*/ test rbx, rbx
/*1404c9d95*/  jz loc_1404C9F1F
/*1404c9d9b*/  mov qword ptr [rbp+4F0h+var_2F0], rbx
/*1404c9da2*/  mov rax, cs:off_141EC8D80
/*1404c9da9*/  mov rax, [rax]
/*1404c9dac*/  cmp rax, 2
/*1404c9db0*/  jb short loc_1404C9E21
/*1404c9db2*/  mov qword ptr [rbp+4F0h+var_280], rdi
/*1404c9db9*/  lea rax, sub_141490720
/*1404c9dc0*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404c9dc7*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404c9dce*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c9dd5*/  mov qword ptr [rbp+4F0h+var_110+8], 33h ; '3'
/*1404c9de0*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9de7*/  mov qword ptr [rbp+4F0h+var_100+8], 33h ; '3'
/*1404c9df2*/  lea rax, off_14175CCF8; "src\\core\\relay\\codex_thread_visibili"...
/*1404c9df9*/  mov qword ptr [rbp+4F0h+var_F0], rax
loc_1404C9E00: /*1404c9e00*/ lea rcx, unk_14175CCB8
/*1404c9e07*/  lea rdx, [rbp+4F0h+var_280]
/*1404c9e0e*/  lea r9, [rbp+4F0h+var_110]
/*1404c9e15*/  mov r8d, 2
/*1404c9e1b*/  call sub_140985BA0
/*1404c9e20*/  nop
loc_1404C9E21: /*1404c9e21*/ lea rcx, [rbp+4F0h+var_2F0]
/*1404c9e28*/  call sub_140018650
/*1404c9e2d*/  nop
/*1404c9e2e*/  jmp loc_1404C9F79
loc_1404C9E33: /*1404c9e33*/ mov qword ptr [rbp+4F0h+var_2F0], r8
/*1404c9e3a*/  mov rax, cs:off_141EC8D80
/*1404c9e41*/  mov rax, [rax]
/*1404c9e44*/  cmp rax, 2
/*1404c9e48*/  jb short loc_1404C9EC0
/*1404c9e4a*/  mov qword ptr [rbp+4F0h+var_280], rdi
/*1404c9e51*/  lea rax, sub_14142D3F0
/*1404c9e58*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404c9e5f*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404c9e66*/  mov qword ptr [rbp+4F0h+var_110], rax
/*1404c9e6d*/  mov qword ptr [rbp+4F0h+var_110+8], 33h ; '3'
/*1404c9e78*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9e7f*/  mov qword ptr [rbp+4F0h+var_100+8], 33h ; '3'
/*1404c9e8a*/  lea rax, off_14175CD50; "src\\core\\relay\\codex_thread_visibili"...
/*1404c9e91*/  mov qword ptr [rbp+4F0h+var_F0], rax
loc_1404C9E98: /*1404c9e98*/ lea rcx, unk_14175CD10
/*1404c9e9f*/  lea rdx, [rbp+4F0h+var_280]
/*1404c9ea6*/  lea r9, [rbp+4F0h+var_110]
/*1404c9ead*/  mov r8d, 2
/*1404c9eb3*/  call sub_140985BA0
/*1404c9eb8*/  nop
/*1404c9eb9*/  mov r8, qword ptr [rbp+4F0h+var_2F0]
loc_1404C9EC0: /*1404c9ec0*/ mov rax, [r8]
/*1404c9ec3*/  cmp rax, 1
/*1404c9ec7*/  mov [rbp+4F0h+var_90], r8
/*1404c9ece*/  jz loc_1404C9F58
/*1404c9ed4*/  test rax, rax
/*1404c9ed7*/  jnz loc_1404C9F62
/*1404c9edd*/  mov rax, [rbp+4F0h+var_90]
/*1404c9ee4*/  mov rdx, [rax+10h]
/*1404c9ee8*/  test rdx, rdx
/*1404c9eeb*/  jz short loc_1404C9F62
/*1404c9eed*/  mov rax, [rbp+4F0h+var_90]
/*1404c9ef4*/  mov rcx, [rax+8]
/*1404c9ef8*/  mov r8d, 1
/*1404c9efe*/  call sub_140001660
/*1404c9f03*/  jmp short loc_1404C9F62
loc_1404C9F05: /*1404c9f05*/ xor esi, esi
loc_1404C9F07: /*1404c9f07*/ mov [rbp+4F0h+var_81], 1
loc_1404C9F0E: /*1404c9f0e*/ mov rcx, rsi
/*1404c9f11*/  mov rdx, r14
/*1404c9f14*/  call sub_1416C2D4B
/*1404c9f1a*/  jmp loc_1404CB1CB
loc_1404C9F1F: /*1404c9f1f*/ mov rsi, qword ptr [rbp+4F0h+var_3B0]
/*1404c9f26*/  lea rax, [rbp+4F0h+var_3B0+8]
/*1404c9f2d*/  movups xmm0, xmmword ptr [rax]
/*1404c9f30*/  movaps [rbp+4F0h+var_110], xmm0
/*1404c9f37*/  mov rax, [rax+10h]
/*1404c9f3b*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404c9f42*/  mov [rbp+4F0h+var_43], 0
loc_1404C9F49: /*1404c9f49*/ lea rcx, [rbp+4F0h+var_180]
/*1404c9f50*/  call sub_1400104F0
/*1404c9f55*/  nop
/*1404c9f56*/  jmp short loc_1404C9FB2
loc_1404C9F58: /*1404c9f58*/ lea rcx, [r8+8]
loc_1404C9F5C: /*1404c9f5c*/ call sub_140018650
/*1404c9f61*/  nop
loc_1404C9F62: /*1404c9f62*/ mov edx, 28h ; '('
/*1404c9f67*/  mov r8d, 8
/*1404c9f6d*/  mov rcx, [rbp+4F0h+var_90]
/*1404c9f74*/  call sub_140001660
loc_1404C9F79: /*1404c9f79*/ mov [rbp+4F0h+var_43], 1
loc_1404C9F80: /*1404c9f80*/ lea rcx, [rbp+4F0h+var_180]
/*1404c9f87*/  call sub_1400104F0
/*1404c9f8c*/  nop
/*1404c9f8d*/  mov rdx, qword ptr [rbp+4F0h+var_3B0]
/*1404c9f94*/  test rdx, rdx
/*1404c9f97*/  jz short loc_1404C9FAB
/*1404c9f99*/  mov rcx, qword ptr [rbp+4F0h+var_3B0+8]
/*1404c9fa0*/  mov r8d, 1
/*1404c9fa6*/  call sub_140001660
loc_1404C9FAB: /*1404c9fab*/ mov rsi, 0FFFFFFFFFFFFFFFFh
loc_1404C9FB2: /*1404c9fb2*/ mov rdx, qword ptr [rbp+4F0h+var_358]
/*1404c9fb9*/  test rdx, rdx
/*1404c9fbc*/  jz short loc_1404C9FD0
/*1404c9fbe*/  mov r8d, 1
/*1404c9fc4*/  mov rcx, [rbp+4F0h+var_98]
/*1404c9fcb*/  call sub_140001660
loc_1404C9FD0: /*1404c9fd0*/ mov rdx, qword ptr [rbp+4F0h+var_418+8]
/*1404c9fd7*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404c9fdb*/  jz short loc_1404C9FF4
/*1404c9fdd*/  test rdx, rdx
/*1404c9fe0*/  jz short loc_1404C9FF4
/*1404c9fe2*/  mov rcx, qword ptr [rbp+4F0h+var_408]
/*1404c9fe9*/  mov r8d, 1
/*1404c9fef*/  call sub_140001660
loc_1404C9FF4: /*1404c9ff4*/ mov qword ptr [rbp+4F0h+var_418+8], rsi
/*1404c9ffb*/  movaps xmm0, [rbp+4F0h+var_110]
/*1404ca002*/  movups [rbp+4F0h+var_408], xmm0
/*1404ca009*/  mov rax, qword ptr [rbp+4F0h+var_100]
/*1404ca010*/  mov qword ptr [rbp+4F0h+var_3F8], rax
/*1404ca017*/  mov rax, cs:off_141EC8D80
/*1404ca01e*/  mov rax, [rax]
/*1404ca021*/  cmp rax, 3
/*1404ca025*/  jb loc_1404CA141
/*1404ca02b*/  lea rax, [rbp+4F0h+var_3F8+8]
/*1404ca032*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca039*/  lea rax, sub_1414AC520
/*1404ca040*/  mov qword ptr [rbp+4F0h+var_280+8], rax
/*1404ca047*/  lea rcx, [rbp+4F0h+var_3E8]
/*1404ca04e*/  mov qword ptr [rbp+4F0h+var_270], rcx
/*1404ca055*/  mov qword ptr [rbp+4F0h+var_270+8], rax
/*1404ca05c*/  lea rcx, [rbp+4F0h+var_3E8+8]
/*1404ca063*/  mov qword ptr [rbp+4F0h+var_260], rcx
/*1404ca06a*/  mov qword ptr [rbp+4F0h+var_260+8], rax
/*1404ca071*/  lea rcx, [rbp+4F0h+var_3D8]
/*1404ca078*/  mov qword ptr [rbp+4F0h+var_250], rcx
/*1404ca07f*/  mov qword ptr [rbp+4F0h+var_250+8], rax
/*1404ca086*/  lea rcx, [rbp+4F0h+var_3D8+8]
/*1404ca08d*/  mov qword ptr [rbp+4F0h+var_240], rcx
/*1404ca094*/  mov qword ptr [rbp+4F0h+var_240+8], rax
/*1404ca09b*/  mov qword ptr [rbp+4F0h+var_110], 0
/*1404ca0a6*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404ca0ad*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404ca0b4*/  mov qword ptr [rbp+4F0h+var_100], 33h ; '3'
/*1404ca0bf*/  mov qword ptr [rbp+4F0h+var_100+8], 0
/*1404ca0ca*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404ca0d1*/  mov qword ptr [rbp+4F0h+var_F0], rcx
/*1404ca0d8*/  mov qword ptr [rbp+4F0h+var_F0+8], 29h ; ')'
/*1404ca0e3*/  mov qword ptr [rbp+4F0h+var_E0], 3
/*1404ca0ee*/  mov qword ptr [rbp+4F0h+var_E0+8], rax
/*1404ca0f5*/  mov qword ptr [rbp+4F0h+var_D0], 33h ; '3'
/*1404ca100*/  mov rax, 38F00000001h
/*1404ca10a*/  mov qword ptr [rbp+4F0h+var_D0+8], rax
/*1404ca111*/  lea rax, unk_14175CFEA
/*1404ca118*/  mov qword ptr [rbp+4F0h+var_C0], rax
/*1404ca11f*/  lea rax, [rbp+4F0h+var_280]
/*1404ca126*/  mov qword ptr [rbp+4F0h+var_C0+8], rax
loc_1404CA12D: /*1404ca12d*/ lea rcx, [rbp+4F0h+var_41]
/*1404ca134*/  lea rdx, [rbp+4F0h+var_110]
/*1404ca13b*/  call sub_1412C36A0
/*1404ca140*/  nop
loc_1404CA141: /*1404ca141*/ lea rcx, [rbp+4F0h+var_110]
/*1404ca148*/  mov rdx, r13
/*1404ca14b*/  call sub_1404CFE80
/*1404ca150*/  nop
/*1404ca151*/  mov rax, qword ptr [rbp+4F0h+var_100]
/*1404ca158*/  or rax, qword ptr [rbp+4F0h+var_E0+8]
/*1404ca15f*/  jnz loc_1404CA226
/*1404ca165*/  movups xmm0, [rbp+4F0h+var_3D8]
/*1404ca16c*/  mov rax, [rbp+4F0h+var_1E8]
/*1404ca173*/  movups xmmword ptr [rax+58h], xmm0
/*1404ca177*/  movups xmm0, [rbp+4F0h+var_3E8]
/*1404ca17e*/  movups xmmword ptr [rax+48h], xmm0
/*1404ca182*/  movups xmm0, [rbp+4F0h+var_428]
/*1404ca189*/  movups xmm1, [rbp+4F0h+var_418]
/*1404ca190*/  movups xmm2, [rbp+4F0h+var_408]
/*1404ca197*/  movups xmm3, [rbp+4F0h+var_3F8]
/*1404ca19e*/  movups xmmword ptr [rax+38h], xmm3
/*1404ca1a2*/  movups xmmword ptr [rax+28h], xmm2
/*1404ca1a6*/  movups xmmword ptr [rax+18h], xmm1
/*1404ca1aa*/  movups xmmword ptr [rax+8], xmm0
/*1404ca1ae*/  mov qword ptr [rax], 0
/*1404ca1b5*/  mov rax, qword ptr [rbp+4F0h+var_110]
/*1404ca1bc*/  test rax, rax
/*1404ca1bf*/  jz short loc_1404CA1DB
/*1404ca1c1*/  mov rcx, qword ptr [rbp+4F0h+var_110+8]
/*1404ca1c8*/  shl rax, 3
/*1404ca1cc*/  lea rdx, [rax+rax*2]
/*1404ca1d0*/  mov r8d, 8
/*1404ca1d6*/  call sub_140001660
loc_1404CA1DB: /*1404ca1db*/ mov rsi, qword ptr [rbp+4F0h+var_F0+8]
/*1404ca1e2*/  test rsi, rsi
/*1404ca1e5*/  jz loc_1404CA36E
/*1404ca1eb*/  mov rdi, qword ptr [rbp+4F0h+var_F0]
/*1404ca1f2*/  add rdi, 8
/*1404ca1f6*/  jmp short loc_1404CA20D
loc_1404CA200: /*1404ca200*/ add rdi, 18h
/*1404ca204*/  dec rsi
/*1404ca207*/  jz loc_1404CA36E
loc_1404CA20D: /*1404ca20d*/ mov rdx, [rdi-8]
/*1404ca211*/  test rdx, rdx
/*1404ca214*/  jz short loc_1404CA200
/*1404ca216*/  mov rcx, [rdi]
/*1404ca219*/  mov r8d, 1
/*1404ca21f*/  call sub_140001660
/*1404ca224*/  jmp short loc_1404CA200
loc_1404CA226: /*1404ca226*/ call nullsub_1
/*1404ca22b*/  mov ecx, 18h
/*1404ca230*/  mov edx, 8
/*1404ca235*/  call sub_140001650
/*1404ca23a*/  test rax, rax
/*1404ca23d*/  jz loc_1404CADF0
/*1404ca243*/  mov [rbp+4F0h+var_98], rax
/*1404ca24a*/  lea rax, [rbp+4F0h+var_E0+8]
/*1404ca251*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca258*/  lea rsi, sub_1414AC520
/*1404ca25f*/  mov qword ptr [rbp+4F0h+var_280+8], rsi
loc_1404CA266: /*1404ca266*/ lea rdx, unk_14175C962
/*1404ca26d*/  lea rcx, [rbp+4F0h+var_480]
/*1404ca271*/  lea r8, [rbp+4F0h+var_280]
/*1404ca278*/  call sub_14149C0F0
/*1404ca27d*/  nop
/*1404ca27e*/  mov rax, [rbp+4F0h+var_470]
/*1404ca285*/  mov rcx, [rbp+4F0h+var_98]
/*1404ca28c*/  mov [rcx+10h], rax
/*1404ca290*/  movups xmm0, [rbp+4F0h+var_480]
/*1404ca294*/  movups xmmword ptr [rcx], xmm0
/*1404ca297*/  mov qword ptr [rbp+4F0h+var_80], 1
/*1404ca2a2*/  mov qword ptr [rbp+4F0h+var_80+8], rcx
/*1404ca2a9*/  mov [rbp+4F0h+var_70], 1
/*1404ca2b4*/  cmp qword ptr [rbp+4F0h+var_D0], 0
/*1404ca2bc*/  jz loc_1404CA40F
/*1404ca2c2*/  lea rax, [rbp+4F0h+var_D0]
/*1404ca2c9*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca2d0*/  mov qword ptr [rbp+4F0h+var_280+8], rsi
loc_1404CA2D7: /*1404ca2d7*/ lea rdx, unk_14175C96D
/*1404ca2de*/  lea rcx, [rbp+4F0h+var_1A8]
/*1404ca2e5*/  lea r8, [rbp+4F0h+var_280]
/*1404ca2ec*/  call sub_14149C0F0
/*1404ca2f1*/  nop
/*1404ca2f2*/  mov rdi, [rbp+4F0h+var_70]
/*1404ca2f9*/  cmp rdi, qword ptr [rbp+4F0h+var_80]
/*1404ca300*/  jnz short loc_1404CA30F
loc_1404CA302: /*1404ca302*/ lea rcx, [rbp+4F0h+var_80]
/*1404ca309*/  call sub_141689AB0
/*1404ca30e*/  nop
loc_1404CA30F: /*1404ca30f*/ mov rax, qword ptr [rbp+4F0h+var_80+8]
/*1404ca316*/  lea rcx, [rdi+rdi*2]
/*1404ca31a*/  mov rdx, [rbp+4F0h+var_198]
/*1404ca321*/  mov [rax+rcx*8+10h], rdx
/*1404ca326*/  movups xmm0, [rbp+4F0h+var_1A8]
/*1404ca32d*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404ca331*/  inc rdi
/*1404ca334*/  mov [rbp+4F0h+var_70], rdi
/*1404ca33b*/  cmp qword ptr [rbp+4F0h+var_D0+8], 0
/*1404ca343*/  jnz loc_1404CA422
loc_1404CA349: /*1404ca349*/ mov rax, qword ptr [rbp+4F0h+var_100]
/*1404ca350*/  test rax, rax
/*1404ca353*/  jnz loc_1404CA4AB
loc_1404CA359: /*1404ca359*/ mov r8, qword ptr [rbp+4F0h+var_F0+8]
/*1404ca360*/  test r8, r8
/*1404ca363*/  jnz loc_1404CA53B
/*1404ca369*/  jmp loc_1404CA619
loc_1404CA36E: /*1404ca36e*/ mov rax, qword ptr [rbp+4F0h+var_100+8]
/*1404ca375*/  test rax, rax
/*1404ca378*/  jz short loc_1404CA394
/*1404ca37a*/  mov rcx, qword ptr [rbp+4F0h+var_F0]
/*1404ca381*/  shl rax, 3
/*1404ca385*/  lea rdx, [rax+rax*2]
/*1404ca389*/  mov r8d, 8
/*1404ca38f*/  call sub_140001660
loc_1404CA394: /*1404ca394*/ mov rcx, [rbp+4F0h+var_1C8]
/*1404ca39b*/  mov rax, [rbp+4F0h+var_1C0]
/*1404ca3a2*/  mov [rbp+4F0h+var_90], rax
/*1404ca3a9*/  mov [rbp+4F0h+var_98], 0
/*1404ca3b4*/  mov [rbp+4F0h+var_1B0], rcx
/*1404ca3bb*/  nop dword ptr [rax+rax+00h]
loc_1404CA3C0: /*1404ca3c0*/ mov rax, [rbp+4F0h+var_98]
/*1404ca3c7*/  cmp [rbp+4F0h+var_90], rax
/*1404ca3ce*/  jz short loc_1404CA3E9
/*1404ca3d0*/  inc rax
/*1404ca3d3*/  mov [rbp+4F0h+var_98], rax
/*1404ca3da*/  lea rsi, [rcx+20h]
loc_1404CA3DE: /*1404ca3de*/ call sub_1402C3260
/*1404ca3e3*/  nop
/*1404ca3e4*/  mov rcx, rsi
/*1404ca3e7*/  jmp short loc_1404CA3C0
loc_1404CA3E9: /*1404ca3e9*/ mov rdx, [rbp+4F0h+var_1D0]
/*1404ca3f0*/  test rdx, rdx
/*1404ca3f3*/  jz loc_1404CA914
/*1404ca3f9*/  mov rcx, [rbp+4F0h+var_1C8]
/*1404ca400*/  shl rdx, 5
/*1404ca404*/  mov r8d, 8
/*1404ca40a*/  jmp loc_1404CA90F
loc_1404CA40F: /*1404ca40f*/ mov edi, 1
/*1404ca414*/  cmp qword ptr [rbp+4F0h+var_D0+8], 0
/*1404ca41c*/  jz loc_1404CA349
loc_1404CA422: /*1404ca422*/ lea rax, [rbp+4F0h+var_D0+8]
/*1404ca429*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca430*/  mov qword ptr [rbp+4F0h+var_280+8], rsi
loc_1404CA437: /*1404ca437*/ lea rdx, unk_14175C97B
/*1404ca43e*/  lea rcx, [rbp+4F0h+var_2F0]
/*1404ca445*/  lea r8, [rbp+4F0h+var_280]
/*1404ca44c*/  call sub_14149C0F0
/*1404ca451*/  nop
/*1404ca452*/  mov rdi, [rbp+4F0h+var_70]
/*1404ca459*/  cmp rdi, qword ptr [rbp+4F0h+var_80]
/*1404ca460*/  jnz short loc_1404CA46F
loc_1404CA462: /*1404ca462*/ lea rcx, [rbp+4F0h+var_80]
/*1404ca469*/  call sub_141689AB0
/*1404ca46e*/  nop
loc_1404CA46F: /*1404ca46f*/ mov rax, qword ptr [rbp+4F0h+var_80+8]
/*1404ca476*/  lea rcx, [rdi+rdi*2]
/*1404ca47a*/  mov rdx, qword ptr [rbp+4F0h+var_2E0]
/*1404ca481*/  mov [rax+rcx*8+10h], rdx
/*1404ca486*/  movups xmm0, [rbp+4F0h+var_2F0]
/*1404ca48d*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404ca491*/  inc rdi
/*1404ca494*/  mov [rbp+4F0h+var_70], rdi
/*1404ca49b*/  mov rax, qword ptr [rbp+4F0h+var_100]
/*1404ca4a2*/  test rax, rax
/*1404ca4a5*/  jz loc_1404CA359
loc_1404CA4AB: /*1404ca4ab*/ mov qword ptr [rbp+4F0h+var_180], rax
/*1404ca4b2*/  lea rax, [rbp+4F0h+var_180]
/*1404ca4b9*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca4c0*/  mov qword ptr [rbp+4F0h+var_280+8], rsi
loc_1404CA4C7: /*1404ca4c7*/ lea rdx, unk_14175C127
/*1404ca4ce*/  lea rcx, [rbp+4F0h+var_358]
/*1404ca4d5*/  lea r8, [rbp+4F0h+var_280]
/*1404ca4dc*/  call sub_14149C0F0
/*1404ca4e1*/  nop
/*1404ca4e2*/  mov rdi, [rbp+4F0h+var_70]
/*1404ca4e9*/  cmp rdi, qword ptr [rbp+4F0h+var_80]
/*1404ca4f0*/  jnz short loc_1404CA4FF
loc_1404CA4F2: /*1404ca4f2*/ lea rcx, [rbp+4F0h+var_80]
/*1404ca4f9*/  call sub_141689AB0
/*1404ca4fe*/  nop
loc_1404CA4FF: /*1404ca4ff*/ mov rax, qword ptr [rbp+4F0h+var_80+8]
/*1404ca506*/  lea rcx, [rdi+rdi*2]
/*1404ca50a*/  mov rdx, [rbp+4F0h+var_348]
/*1404ca511*/  mov [rax+rcx*8+10h], rdx
/*1404ca516*/  movups xmm0, [rbp+4F0h+var_358]
/*1404ca51d*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404ca521*/  inc rdi
/*1404ca524*/  mov [rbp+4F0h+var_70], rdi
/*1404ca52b*/  mov r8, qword ptr [rbp+4F0h+var_F0+8]
/*1404ca532*/  test r8, r8
/*1404ca535*/  jz loc_1404CA619
loc_1404CA53B: /*1404ca53b*/ mov rdx, qword ptr [rbp+4F0h+var_F0]
loc_1404CA542: /*1404ca542*/ mov [rsp+570h+var_550], 3
/*1404ca54b*/  lea r9, unk_141759861
/*1404ca552*/  lea rcx, [rbp+4F0h+var_280]
/*1404ca559*/  call sub_140440300
/*1404ca55e*/  nop
/*1404ca55f*/  mov rax, qword ptr [rbp+4F0h+var_270]
/*1404ca566*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404ca56d*/  movups xmm0, [rbp+4F0h+var_280]
/*1404ca574*/  movaps [rbp+4F0h+var_180], xmm0
/*1404ca57b*/  lea rax, [rbp+4F0h+var_180]
/*1404ca582*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca589*/  lea rax, sub_1400015F0
/*1404ca590*/  mov qword ptr [rbp+4F0h+var_280+8], rax
loc_1404CA597: /*1404ca597*/ lea rdx, unk_14175C136
/*1404ca59e*/  lea rcx, [rbp+4F0h+var_3B0]
/*1404ca5a5*/  lea r8, [rbp+4F0h+var_280]
/*1404ca5ac*/  call sub_14149C0F0
/*1404ca5b1*/  nop
/*1404ca5b2*/  mov rdx, qword ptr [rbp+4F0h+var_180]
/*1404ca5b9*/  test rdx, rdx
/*1404ca5bc*/  jz short loc_1404CA5D0
/*1404ca5be*/  mov rcx, qword ptr [rbp+4F0h+var_180+8]
/*1404ca5c5*/  mov r8d, 1
/*1404ca5cb*/  call sub_140001660
loc_1404CA5D0: /*1404ca5d0*/ mov rdi, [rbp+4F0h+var_70]
/*1404ca5d7*/  cmp rdi, qword ptr [rbp+4F0h+var_80]
/*1404ca5de*/  jnz short loc_1404CA5ED
loc_1404CA5E0: /*1404ca5e0*/ lea rcx, [rbp+4F0h+var_80]
/*1404ca5e7*/  call sub_141689AB0
/*1404ca5ec*/  nop
loc_1404CA5ED: /*1404ca5ed*/ mov rax, qword ptr [rbp+4F0h+var_80+8]
/*1404ca5f4*/  lea rcx, [rdi+rdi*2]
/*1404ca5f8*/  mov rdx, qword ptr [rbp+4F0h+var_3A0]
/*1404ca5ff*/  mov [rax+rcx*8+10h], rdx
/*1404ca604*/  movups xmm0, [rbp+4F0h+var_3B0]
/*1404ca60b*/  movups xmmword ptr [rax+rcx*8], xmm0
/*1404ca60f*/  inc rdi
/*1404ca612*/  mov [rbp+4F0h+var_70], rdi
loc_1404CA619: /*1404ca619*/ mov rdx, qword ptr [rbp+4F0h+var_80+8]
loc_1404CA620: /*1404ca620*/ mov [rsp+570h+var_550], 2
/*1404ca629*/  lea r9, unk_14175C142
/*1404ca630*/  lea rcx, [rbp+4F0h+var_280]
/*1404ca637*/  mov r8, rdi
/*1404ca63a*/  call sub_140440300
/*1404ca63f*/  nop
/*1404ca640*/  mov rax, qword ptr [rbp+4F0h+var_270]
/*1404ca647*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404ca64e*/  movups xmm0, [rbp+4F0h+var_280]
/*1404ca655*/  movaps [rbp+4F0h+var_180], xmm0
/*1404ca65c*/  mov rsi, [rbp+4F0h+var_70]
/*1404ca663*/  test rsi, rsi
/*1404ca666*/  jz short loc_1404CA6A2
/*1404ca668*/  mov rdi, qword ptr [rbp+4F0h+var_80+8]
/*1404ca66f*/  add rdi, 8
/*1404ca673*/  jmp short loc_1404CA689
loc_1404CA680: /*1404ca680*/ add rdi, 18h
/*1404ca684*/  dec rsi
/*1404ca687*/  jz short loc_1404CA6A2
loc_1404CA689: /*1404ca689*/ mov rdx, [rdi-8]
/*1404ca68d*/  test rdx, rdx
/*1404ca690*/  jz short loc_1404CA680
/*1404ca692*/  mov rcx, [rdi]
/*1404ca695*/  mov r8d, 1
/*1404ca69b*/  call sub_140001660
/*1404ca6a0*/  jmp short loc_1404CA680
loc_1404CA6A2: /*1404ca6a2*/ mov rax, qword ptr [rbp+4F0h+var_80]
/*1404ca6a9*/  test rax, rax
/*1404ca6ac*/  jz short loc_1404CA6C8
/*1404ca6ae*/  mov rcx, qword ptr [rbp+4F0h+var_80+8]
/*1404ca6b5*/  shl rax, 3
/*1404ca6b9*/  lea rdx, [rax+rax*2]
/*1404ca6bd*/  mov r8d, 8
/*1404ca6c3*/  call sub_140001660
loc_1404CA6C8: /*1404ca6c8*/ lea rax, [rbp+4F0h+var_180]
/*1404ca6cf*/  mov qword ptr [rbp+4F0h+var_280], rax
/*1404ca6d6*/  lea rax, sub_1400015F0
/*1404ca6dd*/  mov qword ptr [rbp+4F0h+var_280+8], rax
loc_1404CA6E4: /*1404ca6e4*/ lea rdx, unk_14175D043
/*1404ca6eb*/  lea rcx, [rbp+4F0h+var_538]
/*1404ca6ef*/  lea r8, [rbp+4F0h+var_280]
/*1404ca6f6*/  call sub_14149C0F0
/*1404ca6fb*/  nop
/*1404ca6fc*/  mov rdx, qword ptr [rbp+4F0h+var_180]
/*1404ca703*/  test rdx, rdx
/*1404ca706*/  jz short loc_1404CA71A
/*1404ca708*/  mov rcx, qword ptr [rbp+4F0h+var_180+8]
/*1404ca70f*/  mov r8d, 1
/*1404ca715*/  call sub_140001660
loc_1404CA71A: /*1404ca71a*/ mov rax, [rbp+4F0h+var_528]
/*1404ca71e*/  mov rcx, [rbp+4F0h+var_1E8]
/*1404ca725*/  mov [rcx+20h], rax
/*1404ca729*/  movups xmm0, [rbp+4F0h+var_538]
/*1404ca72d*/  movups xmmword ptr [rcx+10h], xmm0
/*1404ca731*/  mov qword ptr [rcx+8], 0Ah
/*1404ca739*/  mov qword ptr [rcx], 1
/*1404ca740*/  mov rsi, qword ptr [rbp+4F0h+var_100]
/*1404ca747*/  test rsi, rsi
/*1404ca74a*/  jz short loc_1404CA782
/*1404ca74c*/  mov rdi, qword ptr [rbp+4F0h+var_110+8]
/*1404ca753*/  add rdi, 8
/*1404ca757*/  jmp short loc_1404CA769
loc_1404CA760: /*1404ca760*/ add rdi, 18h
/*1404ca764*/  dec rsi
/*1404ca767*/  jz short loc_1404CA782
loc_1404CA769: /*1404ca769*/ mov rdx, [rdi-8]
/*1404ca76d*/  test rdx, rdx
/*1404ca770*/  jz short loc_1404CA760
/*1404ca772*/  mov rcx, [rdi]
/*1404ca775*/  mov r8d, 1
/*1404ca77b*/  call sub_140001660
/*1404ca780*/  jmp short loc_1404CA760
loc_1404CA782: /*1404ca782*/ mov rax, qword ptr [rbp+4F0h+var_110]
/*1404ca789*/  test rax, rax
/*1404ca78c*/  jz short loc_1404CA7A8
/*1404ca78e*/  mov rcx, qword ptr [rbp+4F0h+var_110+8]
/*1404ca795*/  shl rax, 3
/*1404ca799*/  lea rdx, [rax+rax*2]
/*1404ca79d*/  mov r8d, 8
/*1404ca7a3*/  call sub_140001660
loc_1404CA7A8: /*1404ca7a8*/ mov rsi, qword ptr [rbp+4F0h+var_F0+8]
/*1404ca7af*/  test rsi, rsi
/*1404ca7b2*/  jz short loc_1404CA7F2
/*1404ca7b4*/  mov rdi, qword ptr [rbp+4F0h+var_F0]
/*1404ca7bb*/  add rdi, 8
/*1404ca7bf*/  jmp short loc_1404CA7D9
loc_1404CA7D0: /*1404ca7d0*/ add rdi, 18h
/*1404ca7d4*/  dec rsi
/*1404ca7d7*/  jz short loc_1404CA7F2
loc_1404CA7D9: /*1404ca7d9*/ mov rdx, [rdi-8]
/*1404ca7dd*/  test rdx, rdx
/*1404ca7e0*/  jz short loc_1404CA7D0
/*1404ca7e2*/  mov rcx, [rdi]
/*1404ca7e5*/  mov r8d, 1
/*1404ca7eb*/  call sub_140001660
/*1404ca7f0*/  jmp short loc_1404CA7D0
loc_1404CA7F2: /*1404ca7f2*/ mov rax, qword ptr [rbp+4F0h+var_100+8]
/*1404ca7f9*/  test rax, rax
/*1404ca7fc*/  jz short loc_1404CA818
/*1404ca7fe*/  mov rcx, qword ptr [rbp+4F0h+var_F0]
/*1404ca805*/  shl rax, 3
/*1404ca809*/  lea rdx, [rax+rax*2]
/*1404ca80d*/  mov r8d, 8
loc_1404CA813: /*1404ca813*/ call sub_140001660
loc_1404CA818: /*1404ca818*/ mov rcx, [rbp+4F0h+var_1C8]
/*1404ca81f*/  mov rax, [rbp+4F0h+var_1C0]
/*1404ca826*/  mov [rbp+4F0h+var_90], rax
/*1404ca82d*/  mov [rbp+4F0h+var_98], 0
/*1404ca838*/  mov [rbp+4F0h+var_1B0], rcx
/*1404ca83f*/  nop
loc_1404CA840: /*1404ca840*/ mov rax, [rbp+4F0h+var_98]
/*1404ca847*/  cmp [rbp+4F0h+var_90], rax
/*1404ca84e*/  jz short loc_1404CA869
/*1404ca850*/  inc rax
/*1404ca853*/  mov [rbp+4F0h+var_98], rax
/*1404ca85a*/  lea rsi, [rcx+20h]
loc_1404CA85E: /*1404ca85e*/ call sub_1402C3260
/*1404ca863*/  nop
/*1404ca864*/  mov rcx, rsi
/*1404ca867*/  jmp short loc_1404CA840
loc_1404CA869: /*1404ca869*/ mov rdx, [rbp+4F0h+var_1D0]
/*1404ca870*/  test rdx, rdx
/*1404ca873*/  jz short loc_1404CA88B
/*1404ca875*/  mov rcx, [rbp+4F0h+var_1C8]
/*1404ca87c*/  shl rdx, 5
/*1404ca880*/  mov r8d, 8
/*1404ca886*/  call sub_140001660
loc_1404CA88B: /*1404ca88b*/ mov rdx, qword ptr [rbp+4F0h+var_418+8]
/*1404ca892*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404ca896*/  jz short loc_1404CA8AF
/*1404ca898*/  test rdx, rdx
/*1404ca89b*/  jz short loc_1404CA8AF
/*1404ca89d*/  mov rcx, qword ptr [rbp+4F0h+var_408]
/*1404ca8a4*/  mov r8d, 1
/*1404ca8aa*/  call sub_140001660
loc_1404CA8AF: /*1404ca8af*/ mov rdi, qword ptr [rbp+4F0h+var_428+8]
/*1404ca8b6*/  mov rsi, qword ptr [rbp+4F0h+var_418]
/*1404ca8bd*/  test rsi, rsi
/*1404ca8c0*/  jz short loc_1404CA8F2
/*1404ca8c2*/  lea rbx, [rdi+8]
/*1404ca8c6*/  jmp short loc_1404CA8D9
loc_1404CA8D0: /*1404ca8d0*/ add rbx, 18h
/*1404ca8d4*/  dec rsi
/*1404ca8d7*/  jz short loc_1404CA8F2
loc_1404CA8D9: /*1404ca8d9*/ mov rdx, [rbx-8]
/*1404ca8dd*/  test rdx, rdx
/*1404ca8e0*/  jz short loc_1404CA8D0
/*1404ca8e2*/  mov rcx, [rbx]
/*1404ca8e5*/  mov r8d, 1
/*1404ca8eb*/  call sub_140001660
/*1404ca8f0*/  jmp short loc_1404CA8D0
loc_1404CA8F2: /*1404ca8f2*/ mov rax, qword ptr [rbp+4F0h+var_428]
/*1404ca8f9*/  test rax, rax
/*1404ca8fc*/  jz short loc_1404CA914
/*1404ca8fe*/  shl rax, 3
/*1404ca902*/  lea rdx, [rax+rax*2]
/*1404ca906*/  mov r8d, 8
/*1404ca90c*/  mov rcx, rdi
loc_1404CA90F: /*1404ca90f*/ call sub_140001660
loc_1404CA914: /*1404ca914*/ mov rax, [rbp+4F0h+var_1E8]
/*1404ca91b*/  add rsp, 538h
/*1404ca922*/  pop rbx
/*1404ca923*/  pop rdi
/*1404ca924*/  pop rsi
/*1404ca925*/  pop r12
/*1404ca927*/  pop r13
/*1404ca929*/  pop r14
/*1404ca92b*/  pop r15
/*1404ca92d*/  pop rbp
/*1404ca92e*/  retn
loc_1404CA92F: /*1404ca92f*/ xor esi, esi
loc_1404CA931: /*1404ca931*/ mov [rbp+4F0h+var_82], 1
loc_1404CA938: /*1404ca938*/ mov rcx, rsi
/*1404ca93b*/  mov rdx, r14
/*1404ca93e*/  call sub_1416C2D4B
/*1404ca944*/  jmp loc_1404CB1CB
loc_1404CA949: /*1404ca949*/ xor esi, esi
loc_1404CA94B: /*1404ca94b*/ mov [rbp+4F0h+var_83], 1
loc_1404CA952: /*1404ca952*/ mov rcx, rsi
/*1404ca955*/  mov rdx, r14
/*1404ca958*/  call sub_1416C2D4B
/*1404ca95e*/  jmp loc_1404CB1CB
loc_1404CA963: /*1404ca963*/ xor esi, esi
loc_1404CA965: /*1404ca965*/ mov [rbp+4F0h+var_84], 1
loc_1404CA96C: /*1404ca96c*/ mov rcx, rsi
/*1404ca96f*/  mov rdx, r14
/*1404ca972*/  call sub_1416C2D4B
/*1404ca978*/  jmp loc_1404CB1CB
loc_1404CA97D: /*1404ca97d*/ mov rax, [rbp+4F0h+var_118]
/*1404ca984*/  mov qword ptr [rbp+4F0h+var_3B0], rax
/*1404ca98b*/  mov rax, [rbp+4F0h+var_1B8]
/*1404ca992*/  mov qword ptr [rbp+4F0h+var_3B0+8], rax
/*1404ca999*/  lea rax, [rbp+4F0h+var_438]
/*1404ca9a0*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404ca9a7*/  lea rax, sub_14041F680
/*1404ca9ae*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404ca9b5*/  lea rax, [rbp+4F0h+var_3B0]
/*1404ca9bc*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404ca9c3*/  lea rax, sub_14148F3A0
/*1404ca9ca*/  mov qword ptr [rbp+4F0h+var_170+8], rax
loc_1404CA9D1: /*1404ca9d1*/ lea rdx, unk_14175CA39
/*1404ca9d8*/  lea r8, [rbp+4F0h+var_180]
/*1404ca9df*/  lea rcx, [rbp+4F0h+var_110+8]
/*1404ca9e6*/  call sub_14149C0F0
/*1404ca9eb*/  nop
/*1404ca9ec*/  mov qword ptr [rbp+4F0h+var_110], 0Ah
/*1404ca9f7*/  jmp loc_1404CACB8
loc_1404CA9FC: /*1404ca9fc*/ xor esi, esi
loc_1404CA9FE: /*1404ca9fe*/ mov [rbp+4F0h+var_85], 1
loc_1404CAA05: /*1404caa05*/ mov rcx, rsi
/*1404caa08*/  mov rdx, r14
/*1404caa0b*/  call sub_1416C2D4B
/*1404caa11*/  jmp loc_1404CB1CB
loc_1404CAA16: /*1404caa16*/ call nullsub_1
/*1404caa1b*/  mov ecx, 1Ah
/*1404caa20*/  mov edx, 1
/*1404caa25*/  call sub_140001650
/*1404caa2a*/  test rax, rax
/*1404caa2d*/  jz loc_1404CB1A9
/*1404caa33*/  movups xmm0, cs:xmmword_141757ED0+0Ah
/*1404caa3a*/  movups xmmword ptr [rax+0Ah], xmm0
/*1404caa3e*/  movups xmm0, cs:xmmword_141757ED0
/*1404caa45*/  movups xmmword ptr [rax], xmm0
/*1404caa48*/  mov qword ptr [rbp+4F0h+var_110], 9
/*1404caa53*/  mov qword ptr [rbp+4F0h+var_110+8], 1Ah
/*1404caa5e*/  mov qword ptr [rbp+4F0h+var_100], rax
/*1404caa65*/  mov qword ptr [rbp+4F0h+var_100+8], 1Ah
/*1404caa70*/  jmp loc_1404CACB8
loc_1404CAA75: /*1404caa75*/ mov qword ptr [rbp+4F0h+var_110], 2
/*1404caa80*/  mov qword ptr [rbp+4F0h+var_110+8], rax
/*1404caa87*/  jmp loc_1404CACB8
loc_1404CAA8C: /*1404caa8c*/ mov qword ptr [rbp+4F0h+var_1E0], rdx
loc_1404CAA93: /*1404caa93*/ mov rcx, [rbp+4F0h+var_188]
/*1404caa9a*/  mov rdx, rbx
/*1404caa9d*/  call sub_141485EF0
/*1404caaa2*/  nop
/*1404caaa3*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404caaaa*/  test rax, rax
/*1404caaad*/  jz short loc_1404CAABC
/*1404caaaf*/  lea rcx, [rbp+4F0h+var_180]
/*1404caab6*/  call sub_140018650
/*1404caabb*/  nop
loc_1404CAABC: /*1404caabc*/ lea rax, [rbp+4F0h+var_438]
/*1404caac3*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404caaca*/  lea rax, sub_14041F680
/*1404caad1*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404caad8*/  lea rax, [rbp+4F0h+var_1E0]
/*1404caadf*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404caae6*/  lea rax, sub_141490720
/*1404caaed*/  mov qword ptr [rbp+4F0h+var_170+8], rax
/*1404caaf4*/  lea rdx, unk_14175CA7B
/*1404caafb*/  lea rcx, [rbp+4F0h+var_2A0]
/*1404cab02*/  lea r8, [rbp+4F0h+var_180]
/*1404cab09*/  call sub_14149C0F0
/*1404cab0e*/  nop
/*1404cab0f*/  mov rax, [rbp+4F0h+var_290]
/*1404cab16*/  lea rcx, [rbp+4F0h+var_110+8]
/*1404cab1d*/  mov [rcx+10h], rax
/*1404cab21*/  movups xmm0, [rbp+4F0h+var_2A0]
/*1404cab28*/  movups xmmword ptr [rcx], xmm0
/*1404cab2b*/  mov qword ptr [rbp+4F0h+var_110], 0Ah
loc_1404CAB36: /*1404cab36*/ lea rcx, [rbp+4F0h+var_1E0]
/*1404cab3d*/  call sub_140018650
/*1404cab42*/  nop
/*1404cab43*/  jmp loc_1404CAC9A
loc_1404CAB48: /*1404cab48*/ mov qword ptr [rbp+4F0h+var_1E0], rax
loc_1404CAB4F: /*1404cab4f*/ mov rcx, [rbp+4F0h+var_188]
/*1404cab56*/  mov rdx, rbx
/*1404cab59*/  call sub_141485EF0
/*1404cab5e*/  nop
/*1404cab5f*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404cab66*/  test rax, rax
/*1404cab69*/  jz short loc_1404CAB78
/*1404cab6b*/  lea rcx, [rbp+4F0h+var_180]
/*1404cab72*/  call sub_140018650
/*1404cab77*/  nop
loc_1404CAB78: /*1404cab78*/ lea rax, [rbp+4F0h+var_438]
/*1404cab7f*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404cab86*/  lea rax, sub_14041F680
/*1404cab8d*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404cab94*/  lea rax, [rbp+4F0h+var_1E0]
/*1404cab9b*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404caba2*/  lea rax, sub_141490720
/*1404caba9*/  mov qword ptr [rbp+4F0h+var_170+8], rax
/*1404cabb0*/  lea rdx, unk_14175CAA1
/*1404cabb7*/  lea rcx, [rbp+4F0h+var_210]
/*1404cabbe*/  lea r8, [rbp+4F0h+var_180]
/*1404cabc5*/  call sub_14149C0F0
/*1404cabca*/  nop
/*1404cabcb*/  mov rax, [rbp+4F0h+var_200]
/*1404cabd2*/  lea rcx, [rbp+4F0h+var_110+8]
/*1404cabd9*/  mov [rcx+10h], rax
/*1404cabdd*/  movups xmm0, [rbp+4F0h+var_210]
/*1404cabe4*/  movups xmmword ptr [rcx], xmm0
/*1404cabe7*/  mov qword ptr [rbp+4F0h+var_110], 0Ah
loc_1404CABF2: /*1404cabf2*/ lea rcx, [rbp+4F0h+var_1E0]
/*1404cabf9*/  call sub_140018650
/*1404cabfe*/  nop
/*1404cabff*/  jmp loc_1404CAC9A
loc_1404CAC04: /*1404cac04*/ mov rax, [rbp+4F0h+var_50]
/*1404cac0b*/  mov qword ptr [rbp+4F0h+var_1E0], rax
/*1404cac12*/  mov rax, [rbp+4F0h+var_60]
/*1404cac19*/  mov qword ptr [rbp+4F0h+var_1E0+8], rax
/*1404cac20*/  lea rax, [rbp+4F0h+var_438]
/*1404cac27*/  mov qword ptr [rbp+4F0h+var_180], rax
/*1404cac2e*/  lea rax, sub_14041F680
/*1404cac35*/  mov qword ptr [rbp+4F0h+var_180+8], rax
/*1404cac3c*/  lea rax, [rbp+4F0h+var_1E0]
/*1404cac43*/  mov qword ptr [rbp+4F0h+var_170], rax
/*1404cac4a*/  lea rax, sub_14148F3A0
/*1404cac51*/  mov qword ptr [rbp+4F0h+var_170+8], rax
/*1404cac58*/  lea rdx, unk_14175CACA
/*1404cac5f*/  lea rcx, [rbp+4F0h+var_80]
/*1404cac66*/  lea r8, [rbp+4F0h+var_180]
/*1404cac6d*/  call sub_14149C0F0
/*1404cac72*/  nop
/*1404cac73*/  mov rax, [rbp+4F0h+var_70]
/*1404cac7a*/  lea rcx, [rbp+4F0h+var_110+8]
/*1404cac81*/  mov [rcx+10h], rax
/*1404cac85*/  movups xmm0, [rbp+4F0h+var_80]
/*1404cac8c*/  movups xmmword ptr [rcx], xmm0
/*1404cac8f*/  mov qword ptr [rbp+4F0h+var_110], 0Ah
loc_1404CAC9A: /*1404cac9a*/ mov rdx, qword ptr [rbp+4F0h+var_3B0]
/*1404caca1*/  test rdx, rdx
/*1404caca4*/  jz short loc_1404CACB8
/*1404caca6*/  mov r8d, 1
/*1404cacac*/  mov rcx, [rbp+4F0h+var_188]
/*1404cacb3*/  call sub_140001660
loc_1404CACB8: /*1404cacb8*/ movups xmm0, [rbp+4F0h+var_C0]
/*1404cacbf*/  mov r9, [rbp+4F0h+var_1E8]
/*1404cacc6*/  movups xmmword ptr [r9+58h], xmm0
/*1404caccb*/  movups xmm0, [rbp+4F0h+var_D0]
/*1404cacd2*/  movups xmmword ptr [r9+48h], xmm0
/*1404cacd7*/  mov rax, qword ptr [rbp+4F0h+var_110]
/*1404cacde*/  mov rcx, qword ptr [rbp+4F0h+var_110+8]
/*1404cace5*/  mov rdx, qword ptr [rbp+4F0h+var_100]
/*1404cacec*/  mov r8, qword ptr [rbp+4F0h+var_100+8]
/*1404cacf3*/  movups xmm0, [rbp+4F0h+var_F0]
/*1404cacfa*/  movups xmm1, [rbp+4F0h+var_E0]
/*1404cad01*/  movups xmmword ptr [r9+38h], xmm1
/*1404cad06*/  movups xmmword ptr [r9+28h], xmm0
/*1404cad0b*/  mov [r9+18h], rdx
/*1404cad0f*/  mov [r9+20h], r8
/*1404cad13*/  mov [r9+8], rax
/*1404cad17*/  mov [r9+10h], rcx
/*1404cad1b*/  mov qword ptr [r9], 1
/*1404cad22*/  mov rdx, [rbp+4F0h+var_448]
/*1404cad29*/  test rdx, rdx
/*1404cad2c*/  jz short loc_1404CAD40
/*1404cad2e*/  mov r8d, 1
/*1404cad34*/  mov rcx, [rbp+4F0h+var_118]
/*1404cad3b*/  call sub_140001660
loc_1404CAD40: /*1404cad40*/ mov rdx, qword ptr [rbp+4F0h+var_358]
/*1404cad47*/  test rdx, rdx
/*1404cad4a*/  jz short loc_1404CAD5E
loc_1404CAD4C: /*1404cad4c*/ mov rcx, qword ptr [rbp+4F0h+var_358+8]
/*1404cad53*/  mov r8d, 1
/*1404cad59*/  call sub_140001660
loc_1404CAD5E: /*1404cad5e*/ mov rdx, [rbp+4F0h+var_328]
/*1404cad65*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404cad69*/  jz short loc_1404CAD82
/*1404cad6b*/  test rdx, rdx
/*1404cad6e*/  jz short loc_1404CAD82
/*1404cad70*/  mov rcx, [rbp+4F0h+var_320]
/*1404cad77*/  mov r8d, 1
/*1404cad7d*/  call sub_140001660
loc_1404CAD82: /*1404cad82*/ mov rdx, [rbp+4F0h+var_340]
/*1404cad89*/  test rdx, rdx
/*1404cad8c*/  jz short loc_1404CADA1
/*1404cad8e*/  mov rcx, [rbp+4F0h+var_338]
/*1404cad95*/  mov r8d, 1
/*1404cad9b*/  call sub_140001660
/*1404cada0*/  nop
loc_1404CADA1: /*1404cada1*/ lea rcx, [rbp+4F0h+var_480]
/*1404cada5*/  call sub_1403333D0
/*1404cadaa*/  nop
/*1404cadab*/  jmp loc_1404C9647
loc_1404CADB0: /*1404cadb0*/ xor esi, esi
loc_1404CADB2: /*1404cadb2*/ mov [rbp+4F0h+var_88], 1
loc_1404CADB9: /*1404cadb9*/ mov rcx, rsi
/*1404cadbc*/  mov rdx, r14
/*1404cadbf*/  call sub_1416C2D4B
/*1404cadc5*/  jmp loc_1404CB1CB
loc_1404CADCA: /*1404cadca*/ xor ebx, ebx
loc_1404CADCC: /*1404cadcc*/ mov [rbp+4F0h+var_86], 0
/*1404cadd3*/  mov [rbp+4F0h+var_4F0], r8
/*1404cadd7*/  mov [rbp+4F0h+var_4F8], r13
/*1404caddb*/  mov [rbp+4F0h+var_87], 1
loc_1404CADE2: /*1404cade2*/ mov rcx, rbx
/*1404cade5*/  call sub_1416C2D4B
/*1404cadeb*/  jmp loc_1404CB1CB
loc_1404CADF0: /*1404cadf0*/ mov ecx, 8
/*1404cadf5*/  mov edx, 18h
/*1404cadfa*/  call sub_1416C2D31
/*1404cae00*/  jmp loc_1404CB1CB
loc_1404CAE05: /*1404cae05*/ movups xmm0, [rbp+4F0h+var_180]
/*1404cae0c*/  movups xmm1, [rbp+4F0h+var_170]
/*1404cae13*/  movups xmm2, [rbp+4F0h+var_160]
/*1404cae1a*/  movups xmm3, [rbp+4F0h+var_150]
/*1404cae21*/  movaps [rbp+4F0h+var_E0], xmm3
/*1404cae28*/  movaps [rbp+4F0h+var_F0], xmm2
/*1404cae2f*/  movaps [rbp+4F0h+var_100], xmm1
/*1404cae36*/  movaps [rbp+4F0h+var_110], xmm0
/*1404cae3d*/  lea rax, [rbp+4F0h+var_210]
/*1404cae44*/  mov qword ptr [rbp+4F0h+var_3B0], rax
/*1404cae4b*/  lea rax, sub_14041F680
/*1404cae52*/  mov qword ptr [rbp+4F0h+var_3B0+8], rax
/*1404cae59*/  mov qword ptr [rbp+4F0h+var_3A0], r12
/*1404cae60*/  lea rax, sub_140FB8910
/*1404cae67*/  mov qword ptr [rbp+4F0h+var_3A0+8], rax
loc_1404CAE6E: /*1404cae6e*/ lea rdx, unk_141757DD3
/*1404cae75*/  lea rcx, [rbp+4F0h+var_1A8]
/*1404cae7c*/  lea r8, [rbp+4F0h+var_3B0]
/*1404cae83*/  call sub_14149C0F0
/*1404cae88*/  nop
/*1404cae89*/  mov rsi, qword ptr [rbp+4F0h+var_1A8]
/*1404cae90*/  movups xmm0, [rbp+4F0h+var_1A8+8]
/*1404cae97*/  movaps [rbp+4F0h+var_2A0], xmm0
loc_1404CAE9E: /*1404cae9e*/ lea rcx, [rbp+4F0h+var_110]
/*1404caea5*/  call sub_14043D020
/*1404caeaa*/  nop
/*1404caeab*/  movaps xmm0, [rbp+4F0h+var_2A0]
/*1404caeb2*/  mov rax, [rbp+4F0h+var_1E8]
/*1404caeb9*/  movups xmmword ptr [rax+18h], xmm0
/*1404caebd*/  mov qword ptr [rax+8], 0Ah
/*1404caec5*/  jmp short loc_1404CAEED
loc_1404CAEC7: /*1404caec7*/ mov rax, [rbp+4F0h+var_1E8]
/*1404caece*/  mov [rax+18h], rbx
/*1404caed2*/  mov rcx, [rbp+4F0h+var_4A0]
/*1404caed6*/  mov [rax+20h], rcx
/*1404caeda*/  mov rcx, [rbp+4F0h+var_520]
/*1404caede*/  mov [rax+28h], rcx
/*1404caee2*/  mov rcx, [rbp+4F0h+var_118]
/*1404caee9*/  mov [rax+8], rcx
loc_1404CAEED: /*1404caeed*/ mov [rax+10h], rsi
/*1404caef1*/  mov qword ptr [rax], 1
/*1404caef8*/  mov rdx, qword ptr [rbp+4F0h+var_358]
/*1404caeff*/  test rdx, rdx
/*1404caf02*/  jnz loc_1404CAD4C
/*1404caf08*/  jmp loc_1404CAD5E
loc_1404CAF0D: /*1404caf0d*/ mov rax, qword ptr [rbp+4F0h+var_110+8]
/*1404caf14*/  mov qword ptr [rbp+4F0h+var_280], rax
loc_1404CAF1B: /*1404caf1b*/ lea rax, off_14175CCA0; "src\\core\\relay\\codex_thread_visibili"...
/*1404caf22*/  mov [rsp+570h+var_550], rax
/*1404caf27*/  lea rcx, aCalledResultUn_3; "called `Result::unwrap()` on an `Err` v"...
/*1404caf2e*/  lea r9, off_141758538
/*1404caf35*/  lea r8, [rbp+4F0h+var_280]
/*1404caf3c*/  mov edx, 2Bh ; '+'
/*1404caf41*/  call sub_1416C3060
/*1404caf47*/  jmp loc_1404CB1CB
loc_1404CAF4C: /*1404caf4c*/ lea rax, off_14175E980; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1404caf53*/  mov [rsp+570h+var_550], rax
/*1404caf58*/  lea rcx, aADisplayImplem_2; "a Display implementation returned an er"...
/*1404caf5f*/  lea r9, unk_141758598
/*1404caf66*/  lea r8, [rbp+4F0h+var_41]
/*1404caf6d*/  mov edx, 37h ; '7'
/*1404caf72*/  call sub_1416C3060
/*1404caf78*/  jmp loc_1404CB1CB
loc_1404CAF7D: /*1404caf7d*/ lea rax, off_14175E980; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1404caf84*/  mov [rsp+570h+var_550], rax
/*1404caf89*/  lea rcx, aADisplayImplem_2; "a Display implementation returned an er"...
/*1404caf90*/  lea r9, unk_141758598
/*1404caf97*/  lea r8, [rbp+4F0h+var_41]
/*1404caf9e*/  mov edx, 37h ; '7'
/*1404cafa3*/  call sub_1416C3060
/*1404cafa9*/  jmp loc_1404CB1CB
loc_1404CAFAE: /*1404cafae*/ lea rax, off_14175E980; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1404cafb5*/  mov [rsp+570h+var_550], rax
/*1404cafba*/  lea rcx, aADisplayImplem_2; "a Display implementation returned an er"...
/*1404cafc1*/  lea r9, unk_141758598
/*1404cafc8*/  lea r8, [rbp+4F0h+var_41]
/*1404cafcf*/  mov edx, 37h ; '7'
/*1404cafd4*/  call sub_1416C3060
/*1404cafda*/  jmp loc_1404CB1CB
loc_1404CAFDF: /*1404cafdf*/ lea rax, off_14175E980; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1404cafe6*/  mov [rsp+570h+var_550], rax
/*1404cafeb*/  lea rcx, aADisplayImplem_2; "a Display implementation returned an er"...
/*1404caff2*/  lea r9, unk_141758598
/*1404caff9*/  lea r8, [rbp+4F0h+var_41]
/*1404cb000*/  mov edx, 37h ; '7'
/*1404cb005*/  call sub_1416C3060
/*1404cb00b*/  jmp loc_1404CB1CB
loc_1404CB010: /*1404cb010*/ lea rax, off_14175E980; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1404cb017*/  mov [rsp+570h+var_550], rax
/*1404cb01c*/  lea rcx, aADisplayImplem_2; "a Display implementation returned an er"...
/*1404cb023*/  lea r9, unk_141758598
/*1404cb02a*/  lea r8, [rbp+4F0h+var_41]
/*1404cb031*/  mov edx, 37h ; '7'
/*1404cb036*/  call sub_1416C3060
/*1404cb03c*/  jmp loc_1404CB1CB
loc_1404CB041: /*1404cb041*/ mov ecx, 1
/*1404cb046*/  mov edx, 9
/*1404cb04b*/  call sub_1416C2D4B
/*1404cb051*/  jmp loc_1404CB1CB
loc_1404CB056: /*1404cb056*/ mov ecx, 1
/*1404cb05b*/  mov edx, 7
/*1404cb060*/  call sub_1416C2D4B
/*1404cb066*/  jmp loc_1404CB1CB
loc_1404CB06B: /*1404cb06b*/ mov ecx, 1
/*1404cb070*/  mov edx, 7
/*1404cb075*/  call sub_1416C2D4B
/*1404cb07b*/  jmp loc_1404CB1CB
loc_1404CB080: /*1404cb080*/ mov ecx, 1
/*1404cb085*/  mov edx, 8
/*1404cb08a*/  call sub_1416C2D4B
/*1404cb090*/  jmp loc_1404CB1CB
loc_1404CB095: /*1404cb095*/ mov ecx, 1
/*1404cb09a*/  mov edx, 8
/*1404cb09f*/  call sub_1416C2D4B
/*1404cb0a5*/  jmp loc_1404CB1CB
loc_1404CB0AA: /*1404cb0aa*/ mov ecx, 1
/*1404cb0af*/  mov edx, 9
/*1404cb0b4*/  call sub_1416C2D4B
/*1404cb0ba*/  jmp loc_1404CB1CB
loc_1404CB0BF: /*1404cb0bf*/ mov ecx, 1
/*1404cb0c4*/  mov edx, 6
/*1404cb0c9*/  call sub_1416C2D4B
/*1404cb0cf*/  jmp loc_1404CB1CB
loc_1404CB0D4: /*1404cb0d4*/ mov ecx, 1
/*1404cb0d9*/  mov edx, 80h
/*1404cb0de*/  call sub_1416C2D4B
/*1404cb0e4*/  jmp loc_1404CB1CB
loc_1404CB0E9: /*1404cb0e9*/ mov ecx, 1
/*1404cb0ee*/  mov edx, 6
/*1404cb0f3*/  call sub_1416C2D4B
/*1404cb0f9*/  jmp loc_1404CB1CB
loc_1404CB0FE: /*1404cb0fe*/ mov ecx, 1
/*1404cb103*/  mov edx, 7
/*1404cb108*/  call sub_1416C2D4B
/*1404cb10e*/  jmp loc_1404CB1CB
loc_1404CB113: /*1404cb113*/ mov ecx, 1
/*1404cb118*/  mov edx, 8
/*1404cb11d*/  call sub_1416C2D4B
/*1404cb123*/  jmp loc_1404CB1CB
loc_1404CB128: /*1404cb128*/ mov ecx, 1
/*1404cb12d*/  mov edx, 0Bh
/*1404cb132*/  call sub_1416C2D4B
/*1404cb138*/  jmp loc_1404CB1CB
loc_1404CB13D: /*1404cb13d*/ mov ecx, 1
/*1404cb142*/  mov edx, 0Ah
/*1404cb147*/  call sub_1416C2D4B
/*1404cb14d*/  jmp short loc_1404CB1CB
loc_1404CB14F: /*1404cb14f*/ mov ecx, 1
/*1404cb154*/  mov edx, 6
/*1404cb159*/  call sub_1416C2D4B
/*1404cb15f*/  jmp short loc_1404CB1CB
loc_1404CB161: /*1404cb161*/ mov ecx, 1
/*1404cb166*/  mov edx, 6
/*1404cb16b*/  call sub_1416C2D4B
/*1404cb171*/  jmp short loc_1404CB1CB
loc_1404CB173: /*1404cb173*/ mov ecx, 1
/*1404cb178*/  mov edx, 7
/*1404cb17d*/  call sub_1416C2D4B
/*1404cb183*/  jmp short loc_1404CB1CB
loc_1404CB185: /*1404cb185*/ mov ecx, 1
/*1404cb18a*/  mov edx, 8
/*1404cb18f*/  call sub_1416C2D4B
/*1404cb195*/  jmp short loc_1404CB1CB
loc_1404CB197: /*1404cb197*/ mov ecx, 1
/*1404cb19c*/  mov edx, 0Bh
/*1404cb1a1*/  call sub_1416C2D4B
/*1404cb1a7*/  jmp short loc_1404CB1CB
loc_1404CB1A9: /*1404cb1a9*/ mov ecx, 1
/*1404cb1ae*/  mov edx, 1Ah
/*1404cb1b3*/  call sub_1416C2D4B
/*1404cb1b9*/  jmp short loc_1404CB1CB
loc_1404CB1BB: /*1404cb1bb*/ mov ecx, 1
/*1404cb1c0*/  mov edx, 6
/*1404cb1c5*/  call sub_1416C2D4B
loc_1404CB1CB: /*1404cb1cb*/ ud2
