// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1981 fetched=1981 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::converge_threads_to_provider | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall converge_threads_to_provider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __m128i v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // r14
  __m128i v18; // xmm7
  __m128i v19; // xmm8
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r15
  __m128i v24; // xmm9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rcx
  __m128i v30; // xmm10
  __int64 v31; // r12
  __int64 v32; // rcx
  unsigned __int128 v33; // kr10_16
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r... [64395 chars total]

// ---- full disassembly reconstruction (1981/1981 instructions) ----
converge_threads_to_provider: /*1404addd0*/ push rbp
/*1404addd1*/  push r15
/*1404addd3*/  push r14
/*1404addd5*/  push r13
/*1404addd7*/  push r12
/*1404addd9*/  push rsi
/*1404addda*/  push rdi
/*1404adddb*/  push rbx
/*1404adddc*/  sub rsp, 798h
/*1404adde3*/  lea rbp, [rsp+80h]
/*1404addeb*/  movdqa [rbp+750h+var_50], xmm10
/*1404addf4*/  movdqa [rbp+750h+var_60], xmm9
/*1404addfd*/  movdqa [rbp+750h+var_70], xmm8
/*1404ade06*/  movdqa [rbp+750h+var_80], xmm7
/*1404ade0e*/  movaps [rbp+750h+var_90], xmm6
/*1404ade15*/  mov [rbp+750h+var_98], 0FFFFFFFFFFFFFFFEh
/*1404ade20*/  mov rsi, rcx
/*1404ade23*/  mov qword ptr [rbp+750h+var_310], r8
/*1404ade2a*/  mov qword ptr [rbp+750h+var_310+8], r9
/*1404ade31*/  cmp r9, 6
/*1404ade35*/  jnz short loc_1404ADE6D
/*1404ade37*/  mov eax, 6E65706Fh
/*1404ade3c*/  xor eax, [r8]
/*1404ade3f*/  movzx ecx, word ptr [r8+4]
/*1404ade44*/  xor ecx, 6961h
/*1404ade4a*/  or ecx, eax
/*1404ade4c*/  jz loc_1404ADF39
/*1404ade52*/  mov eax, 616D6961h
/*1404ade57*/  xor eax, [r8]
/*1404ade5a*/  movzx ecx, word ptr [r8+4]
/*1404ade5f*/  xor ecx, 3169h
/*1404ade65*/  or ecx, eax
/*1404ade67*/  jz loc_1404ADF39
loc_1404ADE6D: /*1404ade6d*/ lea rax, [rbp+750h+var_310]
/*1404ade74*/  mov qword ptr [rbp+750h+var_190], rax
/*1404ade7b*/  lea rax, sub_14041F680
/*1404ade82*/  mov qword ptr [rbp+750h+var_190+8], rax
/*1404ade89*/  lea rcx, [rbp+750h+var_270+8]
/*1404ade90*/  lea rdx, unk_14175BAF0
/*1404ade97*/  lea r8, [rbp+750h+var_190]
/*1404ade9e*/  call sub_14149C0F0
/*1404adea3*/  mov qword ptr [rbp+750h+var_270], 0Ah
/*1404adeae*/  movups xmm0, [rbp+750h+var_220]
/*1404adeb5*/  movups xmmword ptr [rsi+50h], xmm0
/*1404adeb9*/  movdqu xmm0, [rbp+750h+var_260]
/*1404adec1*/  movups xmm1, [rbp+750h+var_250]
/*1404adec8*/  movups xmm2, [rbp+750h+var_240]
/*1404adecf*/  movups xmm3, [rbp+750h+var_230]
/*1404aded6*/  movups xmmword ptr [rsi+40h], xmm3
/*1404adeda*/  movups xmmword ptr [rsi+30h], xmm2
/*1404adede*/  movups xmmword ptr [rsi+20h], xmm1
/*1404adee2*/  movdqu xmmword ptr [rsi+10h], xmm0
/*1404adee7*/  mov rax, qword ptr [rbp+750h+var_270]
/*1404adeee*/  mov [rsi], rax
/*1404adef1*/  mov rax, qword ptr [rbp+750h+var_270+8]
/*1404adef8*/  mov [rsi+8], rax
loc_1404ADEFC: /*1404adefc*/ mov rax, rsi
/*1404adeff*/  movaps xmm6, [rbp+750h+var_90]
/*1404adf06*/  movaps xmm7, [rbp+750h+var_80]
/*1404adf0d*/  movaps xmm8, [rbp+750h+var_70]
/*1404adf15*/  movaps xmm9, [rbp+750h+var_60]
/*1404adf1d*/  movaps xmm10, [rbp+750h+var_50]
/*1404adf25*/  add rsp, 798h
/*1404adf2c*/  pop rbx
/*1404adf2d*/  pop rdi
/*1404adf2e*/  pop rsi
/*1404adf2f*/  pop r12
/*1404adf31*/  pop r13
/*1404adf33*/  pop r14
/*1404adf35*/  pop r15
/*1404adf37*/  pop rbp
/*1404adf38*/  retn
loc_1404ADF39: /*1404adf39*/ mov rbx, r8
/*1404adf3c*/  mov rdi, rdx
/*1404adf3f*/  call nullsub_1
/*1404adf44*/  mov ecx, 6
/*1404adf49*/  mov edx, 1
/*1404adf4e*/  call sub_140001650
/*1404adf53*/  test rax, rax
/*1404adf56*/  jz loc_1404B08FA
/*1404adf5c*/  movzx ecx, word ptr [rbx+4]
/*1404adf60*/  mov [rax+4], cx
/*1404adf64*/  mov [rbp+750h+var_468], rbx
/*1404adf6b*/  mov ecx, [rbx]
/*1404adf6d*/  mov [rbp+750h+var_370], rax
/*1404adf74*/  mov [rax], ecx
loc_1404ADF76: /*1404adf76*/ lea rcx, [rbp+750h+var_3E8]
/*1404adf7d*/  mov rdx, rdi
/*1404adf80*/  mov [rbp+750h+var_5D8], rdi
/*1404adf87*/  call sub_140712830
/*1404adf8c*/  nop
/*1404adf8d*/  mov r14, [rbp+750h+var_3E0]
/*1404adf94*/  mov rax, [rbp+750h+var_3D8]
/*1404adf9b*/  shl rax, 5
/*1404adf9f*/  add rax, r14
/*1404adfa2*/  mov [rbp+750h+var_5E0], rax
/*1404adfa9*/  xorps xmm6, xmm6
/*1404adfac*/  pxor xmm7, xmm7
/*1404adfb0*/  pxor xmm8, xmm8
/*1404adfb5*/  lea r13, sub_1400015F0
/*1404adfbc*/  mov [rbp+750h+var_460], 0
loc_1404ADFC7: /*1404adfc7*/ cmp r14, [rbp+750h+var_5E0]
/*1404adfce*/  jz loc_1404B017F
/*1404adfd4*/  mov [rbp+750h+var_198], r12
/*1404adfdb*/  mov rdi, [r14+8]
/*1404adfdf*/  mov [rbp+750h+var_348], r14
/*1404adfe6*/  mov rbx, [r14+10h]
/*1404adfea*/  mov rax, [rbp+750h+var_468]
/*1404adff1*/  mov qword ptr [rbp+750h+var_320], rax
/*1404adff8*/  mov qword ptr [rbp+750h+var_320+8], 6
loc_1404AE003: /*1404ae003*/ lea rcx, [rbp+750h+var_270]
/*1404ae00a*/  mov rdx, rdi
/*1404ae00d*/  mov r8, rbx
/*1404ae010*/  call sub_141486710
/*1404ae015*/  nop
/*1404ae016*/  cmp dword ptr [rbp+750h+var_270], 2
/*1404ae01d*/  jnz short loc_1404AE040
/*1404ae01f*/  mov rax, qword ptr [rbp+750h+var_270+8]
/*1404ae026*/  mov qword ptr [rbp+750h+var_190+8], rax
/*1404ae02d*/  mov qword ptr [rbp+750h+var_190], 2
/*1404ae038*/  jmp short loc_1404AE0A0
loc_1404AE040: /*1404ae040*/ movups xmm0, [rbp+750h+var_270]
/*1404ae047*/  movups xmm1, [rbp+750h+var_260]
/*1404ae04e*/  movups xmm2, [rbp+750h+var_250]
/*1404ae055*/  movups xmm3, [rbp+750h+var_240]
/*1404ae05c*/  movaps [rbp+750h+var_190], xmm0
/*1404ae063*/  mov rax, qword ptr [rbp+750h+var_220]
/*1404ae06a*/  mov qword ptr [rbp+750h+var_140], rax
/*1404ae071*/  movdqu xmm0, [rbp+750h+var_230]
/*1404ae079*/  movdqa [rbp+750h+var_150], xmm0
/*1404ae081*/  movaps [rbp+750h+var_160], xmm3
/*1404ae088*/  movaps [rbp+750h+var_170], xmm2
/*1404ae08f*/  movaps [rbp+750h+var_180], xmm1
/*1404ae096*/  cmp qword ptr [rbp+750h+var_190], 2
/*1404ae09e*/  jnz short loc_1404AE119
loc_1404AE0A0: /*1404ae0a0*/ lea rcx, [rbp+750h+var_190+8]
/*1404ae0a7*/  call sub_140018650
/*1404ae0ac*/  nop
loc_1404AE0AD: /*1404ae0ad*/ mov r15, qword ptr [rbp+750h+var_320+8]
/*1404ae0b4*/  test r15, r15
/*1404ae0b7*/  js loc_1404B016B
/*1404ae0bd*/  pxor xmm9, xmm9
/*1404ae0c2*/  jz loc_1404AE28D
/*1404ae0c8*/  mov rdi, qword ptr [rbp+750h+var_320]
/*1404ae0cf*/  call nullsub_1
/*1404ae0d4*/  mov edx, 1
/*1404ae0d9*/  mov rcx, r15
/*1404ae0dc*/  call sub_140001650
/*1404ae0e1*/  test rax, rax
/*1404ae0e4*/  mov r14, [rbp+750h+var_348]
/*1404ae0eb*/  jz loc_1404B090B
/*1404ae0f1*/  mov r12, rax
/*1404ae0f4*/  mov rcx, rax
/*1404ae0f7*/  mov rdx, rdi
/*1404ae0fa*/  mov [rbp+750h+var_100], r15
/*1404ae101*/  mov r8, r15
/*1404ae104*/  call sub_141684120
/*1404ae109*/  xor r15d, r15d
/*1404ae10c*/  mov rcx, r12
/*1404ae10f*/  pxor xmm10, xmm10
/*1404ae114*/  jmp loc_1404AE5E0
loc_1404AE119: /*1404ae119*/ lea rcx, [rbp+750h+var_270]
/*1404ae120*/  mov rdx, rdi
/*1404ae123*/  mov r8, rbx
/*1404ae126*/  call open_codex_db_for_convergence
/*1404ae12b*/  nop
/*1404ae12c*/  movzx eax, byte ptr [rbp+750h+var_208]
/*1404ae133*/  mov r12, qword ptr [rbp+750h+var_270]
/*1404ae13a*/  mov r10, qword ptr [rbp+750h+var_270+8]
/*1404ae141*/  mov r11, qword ptr [rbp+750h+var_260]
/*1404ae148*/  mov r14, qword ptr [rbp+750h+var_260+8]
/*1404ae14f*/  movdqu xmm9, [rbp+750h+var_250]
/*1404ae158*/  movdqu xmm10, [rbp+750h+var_240]
/*1404ae161*/  mov r15, qword ptr [rbp+750h+var_230]
/*1404ae168*/  lea rcx, [rbp+750h+var_230+8]
/*1404ae16f*/  movups xmm0, xmmword ptr [rcx]
/*1404ae172*/  movaps [rbp+750h+var_190], xmm0
/*1404ae179*/  mov rcx, [rcx+10h]
/*1404ae17d*/  mov qword ptr [rbp+750h+var_180], rcx
/*1404ae184*/  cmp al, 0FFh
/*1404ae186*/  jz loc_1404AE2B7
/*1404ae18c*/  mov rcx, [rbp+750h+var_210]
/*1404ae193*/  lea r8, [rbp+750h+var_208+1]
/*1404ae19a*/  mov edx, [r8]
/*1404ae19d*/  mov r8d, [r8+3]
/*1404ae1a1*/  lea r9, [rbp+750h+var_5E7]
/*1404ae1a8*/  mov [r9+3], r8d
/*1404ae1ac*/  mov [r9], edx
/*1404ae1af*/  mov qword ptr [rbp+750h+var_650], r12
/*1404ae1b6*/  mov qword ptr [rbp+750h+var_650+8], r10
/*1404ae1bd*/  mov qword ptr [rbp+750h+var_640], r11
/*1404ae1c4*/  mov qword ptr [rbp+750h+var_640+8], r14
/*1404ae1cb*/  movdqu [rbp+750h+var_630], xmm9
/*1404ae1d4*/  movdqu [rbp+750h+var_620], xmm10
/*1404ae1dd*/  mov [rbp+750h+var_610], r15
/*1404ae1e4*/  mov rdx, qword ptr [rbp+750h+var_180]
/*1404ae1eb*/  mov [r9-11h], rdx
/*1404ae1ef*/  movdqa xmm0, [rbp+750h+var_190]
/*1404ae1f7*/  movdqu xmmword ptr [r9-21h], xmm0
/*1404ae1fd*/  mov [rbp+750h+var_5F0], rcx
/*1404ae204*/  mov [rbp+750h+var_5E8], al
loc_1404AE20A: /*1404ae20a*/ lea rcx, [rbp+750h+var_270]
/*1404ae211*/  lea rdx, [rbp+750h+var_650]
/*1404ae218*/  call collect_provider_convergence_targets
/*1404ae21d*/  nop
loc_1404AE21E: /*1404ae21e*/ mov r12, qword ptr [rbp+750h+var_270]
/*1404ae225*/  mov rax, qword ptr [rbp+750h+var_270+8]
/*1404ae22c*/  mov rdx, qword ptr [rbp+750h+var_260]
/*1404ae233*/  mov r14, qword ptr [rbp+750h+var_260+8]
/*1404ae23a*/  cmp r12, 0FFFFFFFFFFFFFFFFh
/*1404ae23e*/  mov [rbp+750h+var_100], rax
/*1404ae245*/  jz loc_1404AE2E7
/*1404ae24b*/  mov rbx, r14
/*1404ae24e*/  mov rdi, rdx
/*1404ae251*/  movdqu xmm9, [rbp+750h+var_250]
/*1404ae25a*/  movdqu xmm10, [rbp+750h+var_240]
/*1404ae263*/  mov r15, qword ptr [rbp+750h+var_230]
/*1404ae26a*/  lea rax, [rbp+750h+var_230+8]
/*1404ae271*/  movdqu xmm0, xmmword ptr [rax]
/*1404ae275*/  movdqa [rbp+750h+var_290], xmm0
/*1404ae27d*/  mov rax, [rax+10h]
/*1404ae281*/  mov [rbp+750h+var_280], rax
/*1404ae288*/  jmp loc_1404AE5B8
loc_1404AE28D: /*1404ae28d*/ mov r12d, 1
/*1404ae293*/  xor r15d, r15d
/*1404ae296*/  mov ecx, 1
/*1404ae29b*/  mov [rbp+750h+var_100], 0
/*1404ae2a6*/  pxor xmm10, xmm10
/*1404ae2ab*/  mov r14, [rbp+750h+var_348]
/*1404ae2b2*/  jmp loc_1404AE5E0
loc_1404AE2B7: /*1404ae2b7*/ mov rbx, r14
/*1404ae2ba*/  mov rdi, r11
/*1404ae2bd*/  mov [rbp+750h+var_100], r10
/*1404ae2c4*/  movdqa xmm0, [rbp+750h+var_190]
/*1404ae2cc*/  movdqa [rbp+750h+var_290], xmm0
/*1404ae2d4*/  mov rax, qword ptr [rbp+750h+var_180]
/*1404ae2db*/  mov [rbp+750h+var_280], rax
/*1404ae2e2*/  jmp loc_1404AE5C5
loc_1404AE2E7: /*1404ae2e7*/ mov [rbp+750h+var_668], rax
/*1404ae2ee*/  mov [rbp+750h+var_D8], rdx
/*1404ae2f5*/  mov qword ptr [rbp+750h+var_660], rdx
/*1404ae2fc*/  mov [rbp+750h+var_F8], r14
/*1404ae303*/  mov qword ptr [rbp+750h+var_660+8], r14
/*1404ae30a*/  mov rax, qword ptr [rbp+750h+var_320+8]
/*1404ae311*/  mov [rbp+750h+var_E0], rax
/*1404ae318*/  test rax, rax
/*1404ae31b*/  js loc_1404B0304
/*1404ae321*/  mov rax, qword ptr [rbp+750h+var_320]
/*1404ae328*/  mov [rbp+750h+var_E8], rax
/*1404ae32f*/  jz short loc_1404AE36D
/*1404ae331*/  call nullsub_1
/*1404ae336*/  mov edx, 1
/*1404ae33b*/  mov r14, [rbp+750h+var_E0]
/*1404ae342*/  mov rcx, r14
/*1404ae345*/  call sub_140001650
/*1404ae34a*/  test rax, rax
/*1404ae34d*/  jz loc_1404B092B
/*1404ae353*/  mov r15, rax
/*1404ae356*/  mov rcx, rax
/*1404ae359*/  mov rdx, [rbp+750h+var_E8]
/*1404ae360*/  mov r8, r14
/*1404ae363*/  call sub_141684120
/*1404ae368*/  mov rax, r15
/*1404ae36b*/  jmp short loc_1404AE37F
loc_1404AE36D: /*1404ae36d*/ mov r15d, 1
/*1404ae373*/  mov eax, 1
/*1404ae378*/  mov r14, [rbp+750h+var_E0]
loc_1404AE37F: /*1404ae37f*/ mov [rbp+750h+var_458], rax
/*1404ae386*/  mov qword ptr [rbp+750h+var_3B0], r14
/*1404ae38d*/  mov qword ptr [rbp+750h+var_3B0+8], r15
/*1404ae394*/  mov [rbp+750h+var_3A0], r14
/*1404ae39b*/  mov rcx, [rbp+750h+var_F8]
/*1404ae3a2*/  mov qword ptr [rbp+750h+var_398], rcx
/*1404ae3a9*/  lea rax, [rbp+750h+var_398]
/*1404ae3b0*/  movups xmmword ptr [rax+18h], xmm6
/*1404ae3b4*/  movups xmmword ptr [rax+8], xmm6
/*1404ae3b8*/  test rcx, rcx
/*1404ae3bb*/  jz loc_1404AE56A
/*1404ae3c1*/  movdqu xmm0, [rbp+750h+var_320]
/*1404ae3c9*/  movdqu [rbp+750h+var_450], xmm0
/*1404ae3d1*/  lea r14, [rcx+rcx*4]
/*1404ae3d5*/  shl r14, 4
/*1404ae3d9*/  mov r13, [rbp+750h+var_D8]
/*1404ae3e0*/  add r14, r13
loc_1404AE3E3: /*1404ae3e3*/ cmp qword ptr [r13+30h], 0FFFFFFFFFFFFFFFFh
/*1404ae3e8*/  jz loc_1404AE615
/*1404ae3ee*/  mov r15, [r13+38h]
/*1404ae3f2*/  mov r12, [r13+40h]
/*1404ae3f6*/  mov [rbp+750h+var_99], 1
loc_1404AE3FD: /*1404ae3fd*/ lea rcx, [rbp+750h+var_270]
/*1404ae404*/  mov rdx, r15
/*1404ae407*/  mov r8, r12
/*1404ae40a*/  call sub_141486710
/*1404ae40f*/  nop
/*1404ae410*/  cmp dword ptr [rbp+750h+var_270], 2
/*1404ae417*/  jz loc_1404AE66D
/*1404ae41d*/  movups xmm0, [rbp+750h+var_270]
/*1404ae424*/  movups xmm1, [rbp+750h+var_260]
/*1404ae42b*/  movups xmm2, [rbp+750h+var_250]
/*1404ae432*/  movups xmm3, [rbp+750h+var_240]
/*1404ae439*/  movaps [rbp+750h+var_310], xmm0
/*1404ae440*/  mov rax, qword ptr [rbp+750h+var_220]
/*1404ae447*/  mov qword ptr [rbp+750h+var_2C0], rax
/*1404ae44e*/  movdqu xmm0, [rbp+750h+var_230]
/*1404ae456*/  movdqa [rbp+750h+var_2D0], xmm0
/*1404ae45e*/  movaps [rbp+750h+var_2E0], xmm3
/*1404ae465*/  movaps [rbp+750h+var_2F0], xmm2
/*1404ae46c*/  movaps [rbp+750h+var_300], xmm1
/*1404ae473*/  cmp qword ptr [rbp+750h+var_310], 2
/*1404ae47b*/  jz loc_1404AE686
/*1404ae481*/  add r13, 50h ; 'P'
/*1404ae485*/  cmp r13, r14
/*1404ae488*/  jnz loc_1404AE3E3
/*1404ae48e*/  mov r12, qword ptr [rbp+750h+var_320]
/*1404ae495*/  mov r15, qword ptr [rbp+750h+var_320+8]
/*1404ae49c*/  mov r8, [rbp+750h+var_F8]
/*1404ae4a3*/  cmp r8, 8
/*1404ae4a7*/  jnb loc_1404AE8E0
loc_1404AE4AD: /*1404ae4ad*/ mov [rbp+750h+var_99], 1
/*1404ae4b4*/  mov [rsp+7D0h+var_7B0], r15
/*1404ae4b9*/  lea rcx, [rbp+750h+var_270]
/*1404ae4c0*/  mov rdx, [rbp+750h+var_D8]
/*1404ae4c7*/  mov r9, r12
/*1404ae4ca*/  call sub_1404BCD80
/*1404ae4cf*/  nop
/*1404ae4d0*/  mov rax, qword ptr [rbp+750h+var_260+8]
/*1404ae4d7*/  movups xmm0, [rbp+750h+var_270]
/*1404ae4de*/  movaps [rbp+750h+var_190], xmm0
/*1404ae4e5*/  mov rcx, qword ptr [rbp+750h+var_260]
/*1404ae4ec*/  mov qword ptr [rbp+750h+var_180], rcx
/*1404ae4f3*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404ae4f7*/  jz loc_1404AEB01
/*1404ae4fd*/  lea rdx, [rbp+750h+var_208+1]
/*1404ae504*/  mov rcx, [rdx+7]
/*1404ae508*/  lea r9, [rbp+750h+var_4D0+8]
/*1404ae50f*/  mov [r9+58h], rcx
/*1404ae513*/  movups xmm0, xmmword ptr [rdx-9]
/*1404ae517*/  movups xmmword ptr [r9+48h], xmm0
/*1404ae51c*/  movups xmm0, xmmword ptr [rdx-49h]
/*1404ae520*/  movups xmm1, xmmword ptr [rdx-39h]
/*1404ae524*/  movups xmm2, xmmword ptr [rdx-29h]
/*1404ae528*/  movups xmm3, xmmword ptr [rdx-19h]
/*1404ae52c*/  movups xmmword ptr [r9+38h], xmm3
/*1404ae531*/  movups xmmword ptr [r9+28h], xmm2
/*1404ae536*/  movups xmmword ptr [r9+18h], xmm1
/*1404ae53b*/  movups xmmword ptr [r9+8], xmm0
/*1404ae540*/  movdqa xmm0, [rbp+750h+var_190]
/*1404ae548*/  movdqa [rbp+750h+var_4E0], xmm0
/*1404ae550*/  mov rcx, qword ptr [rbp+750h+var_180]
/*1404ae557*/  mov qword ptr [rbp+750h+var_4D0], rcx
/*1404ae55e*/  mov qword ptr [rbp+750h+var_4D0+8], rax
/*1404ae565*/  jmp loc_1404AEE25
loc_1404AE56A: /*1404ae56a*/ mov rdi, r15
/*1404ae56d*/  pxor xmm9, xmm9
/*1404ae572*/  mov r12, 0FFFFFFFFFFFFFFFFh
/*1404ae579*/  mov rbx, r14
/*1404ae57c*/  xor r15d, r15d
/*1404ae57f*/  pxor xmm10, xmm10
loc_1404AE584: /*1404ae584*/ mov rax, [rbp+750h+var_100]
/*1404ae58b*/  test rax, rax
/*1404ae58e*/  mov rcx, [rbp+750h+var_D8]
/*1404ae595*/  jz short loc_1404AE5AA
/*1404ae597*/  shl rax, 4
/*1404ae59b*/  lea rdx, [rax+rax*4]
/*1404ae59f*/  mov r8d, 8
/*1404ae5a5*/  call sub_140001660
loc_1404AE5AA: /*1404ae5aa*/ mov rax, [rbp+750h+var_E0]
/*1404ae5b1*/  mov [rbp+750h+var_100], rax
loc_1404AE5B8: /*1404ae5b8*/ lea rcx, [rbp+750h+var_650]
/*1404ae5bf*/  call sub_14043C900
/*1404ae5c4*/  nop
loc_1404AE5C5: /*1404ae5c5*/ cmp r12, 0FFFFFFFFFFFFFFFFh
/*1404ae5c9*/  jnz loc_1404B0318
/*1404ae5cf*/  mov r14, [rbp+750h+var_348]
/*1404ae5d6*/  mov r12, [rbp+750h+var_198]
/*1404ae5dd*/  mov rcx, rdi
loc_1404AE5E0: /*1404ae5e0*/ add r14, 20h ; ' '
/*1404ae5e4*/  paddq xmm7, xmm9
/*1404ae5e9*/  paddq xmm8, xmm10
/*1404ae5ee*/  add [rbp+750h+var_460], r15
/*1404ae5f5*/  mov rdx, [rbp+750h+var_100]
/*1404ae5fc*/  test rdx, rdx
/*1404ae5ff*/  jz loc_1404ADFC7
/*1404ae605*/  mov r8d, 1
/*1404ae60b*/  call sub_140001660
/*1404ae610*/  jmp loc_1404ADFC7
loc_1404AE615: /*1404ae615*/ mov qword ptr [rbp+750h+var_270], r13
/*1404ae61c*/  lea rax, sub_1400015F0
/*1404ae623*/  mov qword ptr [rbp+750h+var_270+8], rax
/*1404ae62a*/  lea rax, [rbp+750h+var_450]
/*1404ae631*/  mov qword ptr [rbp+750h+var_260], rax
/*1404ae638*/  lea rax, sub_14041F680
/*1404ae63f*/  mov qword ptr [rbp+750h+var_260+8], rax
/*1404ae646*/  mov [rbp+750h+var_99], 1
loc_1404AE64D: /*1404ae64d*/ lea rcx, [rbp+750h+var_190+8]
/*1404ae654*/  lea rdx, unk_141757E4B
/*1404ae65b*/  lea r8, [rbp+750h+var_270]
/*1404ae662*/  call sub_14149C0F0
/*1404ae667*/  nop
/*1404ae668*/  jmp loc_1404AE7ED
loc_1404AE66D: /*1404ae66d*/ mov rax, qword ptr [rbp+750h+var_270+8]
/*1404ae674*/  mov qword ptr [rbp+750h+var_310+8], rax
/*1404ae67b*/  mov qword ptr [rbp+750h+var_310], 2
loc_1404AE686: /*1404ae686*/ mov [rbp+750h+var_99], 1
/*1404ae68d*/  lea rcx, [rbp+750h+var_310+8]
/*1404ae694*/  call sub_140018650
/*1404ae699*/  nop
/*1404ae69a*/  mov rax, cs:off_141EC8D80
/*1404ae6a1*/  mov rax, [rax]
/*1404ae6a4*/  cmp rax, 2
/*1404ae6a8*/  jb loc_1404AE79A
/*1404ae6ae*/  mov qword ptr [rbp+750h+var_4E0], r15
/*1404ae6b5*/  mov qword ptr [rbp+750h+var_4E0+8], r12
/*1404ae6bc*/  mov qword ptr [rbp+750h+var_310], r13
/*1404ae6c3*/  lea rax, sub_1400015F0
/*1404ae6ca*/  mov qword ptr [rbp+750h+var_310+8], rax
/*1404ae6d1*/  lea rax, [rbp+750h+var_4E0]
/*1404ae6d8*/  mov qword ptr [rbp+750h+var_300], rax
/*1404ae6df*/  lea rax, sub_14148F3A0
/*1404ae6e6*/  mov qword ptr [rbp+750h+var_300+8], rax
/*1404ae6ed*/  mov qword ptr [rbp+750h+var_270], 0
/*1404ae6f8*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404ae6ff*/  mov qword ptr [rbp+750h+var_270+8], rax
/*1404ae706*/  mov qword ptr [rbp+750h+var_260], 33h ; '3'
/*1404ae711*/  mov qword ptr [rbp+750h+var_260+8], 0
/*1404ae71c*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404ae723*/  mov qword ptr [rbp+750h+var_250], rcx
/*1404ae72a*/  mov qword ptr [rbp+750h+var_250+8], 29h ; ')'
/*1404ae735*/  mov qword ptr [rbp+750h+var_240], 2
/*1404ae740*/  mov qword ptr [rbp+750h+var_240+8], rax
/*1404ae747*/  mov qword ptr [rbp+750h+var_230], 33h ; '3'
/*1404ae752*/  mov rax, 45100000001h
/*1404ae75c*/  mov qword ptr [rbp+750h+var_230+8], rax
/*1404ae763*/  lea rax, unk_14175C723
/*1404ae76a*/  mov qword ptr [rbp+750h+var_220], rax
/*1404ae771*/  lea rax, [rbp+750h+var_310]
/*1404ae778*/  mov qword ptr [rbp+750h+var_220+8], rax
/*1404ae77f*/  mov [rbp+750h+var_99], 1
/*1404ae786*/  lea rcx, [rbp+750h+var_199]
/*1404ae78d*/  lea rdx, [rbp+750h+var_270]
/*1404ae794*/  call sub_1412C36A0
/*1404ae799*/  nop
loc_1404AE79A: /*1404ae79a*/ mov qword ptr [rbp+750h+var_270], r13
/*1404ae7a1*/  lea rax, sub_1400015F0
/*1404ae7a8*/  mov qword ptr [rbp+750h+var_270+8], rax
/*1404ae7af*/  lea rax, [rbp+750h+var_450]
/*1404ae7b6*/  mov qword ptr [rbp+750h+var_260], rax
/*1404ae7bd*/  lea rax, sub_14041F680
/*1404ae7c4*/  mov qword ptr [rbp+750h+var_260+8], rax
/*1404ae7cb*/  mov [rbp+750h+var_99], 1
/*1404ae7d2*/  lea rcx, [rbp+750h+var_190+8]
/*1404ae7d9*/  lea rdx, unk_14175C75F
/*1404ae7e0*/  lea r8, [rbp+750h+var_270]
/*1404ae7e7*/  call sub_14149C0F0
/*1404ae7ec*/  nop
loc_1404AE7ED: /*1404ae7ed*/ mov rax, qword ptr [rbp+750h+var_190+8]
/*1404ae7f4*/  mov [rbp+750h+var_E0], rax
/*1404ae7fb*/  mov rdi, qword ptr [rbp+750h+var_180]
/*1404ae802*/  mov rbx, qword ptr [rbp+750h+var_180+8]
/*1404ae809*/  movdqu xmm9, [rbp+750h+var_170]
/*1404ae812*/  movdqu xmm10, [rbp+750h+var_160]
/*1404ae81b*/  mov r15, qword ptr [rbp+750h+var_150]
/*1404ae822*/  lea rax, [rbp+750h+var_190+8]
/*1404ae829*/  movdqu xmm0, xmmword ptr [rax+40h]
/*1404ae82e*/  movdqa [rbp+750h+var_290], xmm0
/*1404ae836*/  mov rax, [rax+50h]
/*1404ae83a*/  mov [rbp+750h+var_280], rax
/*1404ae841*/  mov r12d, 0Ah
/*1404ae847*/  lea r13, sub_1400015F0
loc_1404AE84E: /*1404ae84e*/ mov rdx, qword ptr [rbp+750h+var_3B0]
/*1404ae855*/  test rdx, rdx
/*1404ae858*/  jz short loc_1404AE86C
/*1404ae85a*/  mov rcx, qword ptr [rbp+750h+var_3B0+8]
/*1404ae861*/  mov r8d, 1
/*1404ae867*/  call sub_140001660
loc_1404AE86C: /*1404ae86c*/ mov rax, [rbp+750h+var_D8]
/*1404ae873*/  lea r14, [rax+38h]
/*1404ae877*/  jmp short loc_1404AE891
loc_1404AE880: /*1404ae880*/ add r14, 50h ; 'P'
/*1404ae884*/  dec [rbp+750h+var_F8]
/*1404ae88b*/  jz loc_1404AE584
loc_1404AE891: /*1404ae891*/ mov rdx, [r14-38h]
/*1404ae895*/  test rdx, rdx
/*1404ae898*/  jz short loc_1404AE8A9
/*1404ae89a*/  mov rcx, [r14-30h]
/*1404ae89e*/  mov r8d, 1
/*1404ae8a4*/  call sub_140001660
loc_1404AE8A9: /*1404ae8a9*/ mov rdx, [r14-8]
/*1404ae8ad*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1404ae8b1*/  jz short loc_1404AE8C6
/*1404ae8b3*/  test rdx, rdx
/*1404ae8b6*/  jz short loc_1404AE8C6
/*1404ae8b8*/  mov rcx, [r14]
/*1404ae8bb*/  mov r8d, 1
/*1404ae8c1*/  call sub_140001660
loc_1404AE8C6: /*1404ae8c6*/ mov rdx, [r14-20h]
/*1404ae8ca*/  test rdx, rdx
/*1404ae8cd*/  jz short loc_1404AE880
/*1404ae8cf*/  mov rcx, [r14-18h]
/*1404ae8d3*/  mov r8d, 1
/*1404ae8d9*/  call sub_140001660
/*1404ae8de*/  jmp short loc_1404AE880
loc_1404AE8E0: /*1404ae8e0*/ mov [rbp+750h+var_99], 1
/*1404ae8e7*/  call sub_141470CD0
/*1404ae8ec*/  nop
/*1404ae8ed*/  cmp byte ptr [rax+10h], 1
/*1404ae8f1*/  mov [rbp+750h+var_D0], r15
/*1404ae8f8*/  mov [rbp+750h+var_C8], r12
/*1404ae8ff*/  jnz loc_1404B0144
/*1404ae905*/  mov rcx, [rax]
/*1404ae908*/  mov rdx, [rax+8]
loc_1404AE90C: /*1404ae90c*/ lea r8, [rcx+1]
/*1404ae910*/  mov [rax], r8
/*1404ae913*/  movups xmm0, cs:xmmword_141757120
/*1404ae91a*/  movaps [rbp+750h+var_260], xmm0
/*1404ae921*/  movdqu xmm0, xmmword ptr cs:off_141757110
/*1404ae929*/  movdqa [rbp+750h+var_270], xmm0
/*1404ae931*/  mov qword ptr [rbp+750h+var_250], rcx
/*1404ae938*/  mov qword ptr [rbp+750h+var_250+8], rdx
/*1404ae93f*/  mov r12, [rbp+750h+var_D8]
loc_1404AE946: /*1404ae946*/ cmp r12, r14
/*1404ae949*/  jz loc_1404AEB5A
/*1404ae94f*/  mov r13, r12
/*1404ae952*/  add r12, 50h ; 'P'
/*1404ae956*/  cmp qword ptr [r13+30h], 0FFFFFFFFFFFFFFFFh
/*1404ae95b*/  jz short loc_1404AE946
/*1404ae95d*/  mov rdx, [r13+38h]
/*1404ae961*/  mov r8, [r13+40h]
loc_1404AE965: /*1404ae965*/ lea rcx, [rbp+750h+var_190]
/*1404ae96c*/  call sub_141485FE0
/*1404ae971*/  nop
loc_1404AE972: /*1404ae972*/ cmp qword ptr [rbp+750h+var_190], 0FFFFFFFFFFFFFFFFh
/*1404ae97a*/  jz short loc_1404AE99F
/*1404ae97c*/  movdqu xmm0, [rbp+750h+var_190]
/*1404ae984*/  movups xmm1, [rbp+750h+var_180]
/*1404ae98b*/  movaps [rbp+750h+var_300], xmm1
/*1404ae992*/  movdqa [rbp+750h+var_310], xmm0
/*1404ae99a*/  jmp loc_1404AEA3F
loc_1404AE99F: /*1404ae99f*/ mov rax, qword ptr [rbp+750h+var_190+8]
/*1404ae9a6*/  mov qword ptr [rbp+750h+var_450], rax
/*1404ae9ad*/  mov r15, [r13+40h]
/*1404ae9b1*/  test r15, r15
/*1404ae9b4*/  js loc_1404B08DB
/*1404ae9ba*/  jz short loc_1404AEA0D
/*1404ae9bc*/  mov rax, [r13+38h]
/*1404ae9c0*/  mov [rbp+750h+var_108], rax
/*1404ae9c7*/  call nullsub_1
/*1404ae9cc*/  mov edx, 1
/*1404ae9d1*/  mov rcx, r15
/*1404ae9d4*/  call sub_140001650
/*1404ae9d9*/  mov ecx, 1
/*1404ae9de*/  test rax, rax
/*1404ae9e1*/  jz loc_1404B08DD
/*1404ae9e7*/  mov [rbp+750h+var_A8], rax
/*1404ae9ee*/  mov rcx, [rbp+750h+var_A8]
/*1404ae9f5*/  mov rdx, [rbp+750h+var_108]
/*1404ae9fc*/  mov r8, r15
/*1404ae9ff*/  call sub_141684120
/*1404aea04*/  mov rcx, [rbp+750h+var_A8]
/*1404aea0b*/  jmp short loc_1404AEA12
loc_1404AEA0D: /*1404aea0d*/ mov ecx, 1
loc_1404AEA12: /*1404aea12*/ movzx eax, byte ptr [r13+48h]
/*1404aea17*/  mov qword ptr [rbp+750h+var_310], r15
/*1404aea1e*/  mov qword ptr [rbp+750h+var_310+8], rcx
/*1404aea25*/  mov qword ptr [rbp+750h+var_300], r15
/*1404aea2c*/  mov byte ptr [rbp+750h+var_300+8], al
loc_1404AEA32: /*1404aea32*/ lea rcx, [rbp+750h+var_450]
/*1404aea39*/  call sub_140018650
/*1404aea3e*/  nop
loc_1404AEA3F: /*1404aea3f*/ lea rcx, [rbp+750h+var_270]
/*1404aea46*/  lea rdx, [rbp+750h+var_310]
/*1404aea4d*/  call sub_140474DC0
/*1404aea52*/  nop
/*1404aea53*/  test al, al
/*1404aea55*/  jz loc_1404AE946
/*1404aea5b*/  mov rax, qword ptr [rbp+750h+var_270+8]
/*1404aea62*/  test rax, rax
/*1404aea65*/  jz loc_1404AFA71
/*1404aea6b*/  mov [rbp+750h+var_A8], rax
/*1404aea72*/  mov r14, qword ptr [rbp+750h+var_260+8]
/*1404aea79*/  test r14, r14
/*1404aea7c*/  jz loc_1404AFA41
/*1404aea82*/  mov r12, qword ptr [rbp+750h+var_270]
/*1404aea89*/  movdqa xmm0, xmmword ptr [r12]
/*1404aea8f*/  lea r13, [r12+10h]
/*1404aea94*/  pmovmskb r15d, xmm0
/*1404aea99*/  not r15d
/*1404aea9c*/  jmp short loc_1404AEAB4
loc_1404AEA9E: /*1404aea9e*/ dec r14
/*1404aeaa1*/  lea eax, [r15-1]
/*1404aeaa5*/  and eax, r15d
/*1404aeaa8*/  mov r15d, eax
/*1404aeaab*/  test r14, r14
/*1404aeaae*/  jz loc_1404AFA41
loc_1404AEAB4: /*1404aeab4*/ test r15w, r15w
/*1404aeab8*/  jnz short loc_1404AEAD9
loc_1404AEABA: /*1404aeaba*/ movdqa xmm0, xmmword ptr [r13+0]
/*1404aeac0*/  add r12, 0FFFFFFFFFFFFFE00h
/*1404aeac7*/  add r13, 10h
/*1404aeacb*/  pmovmskb r15d, xmm0
/*1404aead0*/  xor r15d, 0FFFFh
/*1404aead7*/  jz short loc_1404AEABA
loc_1404AEAD9: /*1404aead9*/ tzcnt ecx, r15d
/*1404aeade*/  shl ecx, 5
/*1404aeae1*/  mov rax, r12
/*1404aeae4*/  sub rax, rcx
/*1404aeae7*/  mov rdx, [rax-20h]
/*1404aeaeb*/  test rdx, rdx
/*1404aeaee*/  jz short loc_1404AEA9E
/*1404aeaf0*/  mov rcx, [rax-18h]
/*1404aeaf4*/  mov r8d, 1
/*1404aeafa*/  call sub_140001660
/*1404aeaff*/  jmp short loc_1404AEA9E
loc_1404AEB01: /*1404aeb01*/ movdqa xmm0, [rbp+750h+var_190]
/*1404aeb09*/  movdqa [rbp+750h+var_6A0], xmm0
/*1404aeb11*/  mov rax, qword ptr [rbp+750h+var_180]
/*1404aeb18*/  mov [rbp+750h+var_690], rax
/*1404aeb1f*/  mov [rbp+750h+var_99], 1
loc_1404AEB26: /*1404aeb26*/ lea rax, [rbp+750h+var_6A0]
/*1404aeb2d*/  mov [rsp+7D0h+var_7A8], rax
/*1404aeb32*/  mov [rsp+7D0h+var_7B0], r15
/*1404aeb37*/  lea rcx, [rbp+750h+var_4E0]
/*1404aeb3e*/  mov rdx, [rbp+750h+var_D8]
/*1404aeb45*/  mov r8, [rbp+750h+var_F8]
/*1404aeb4c*/  mov r9, r12
/*1404aeb4f*/  call sub_1404C3C90
/*1404aeb54*/  nop
/*1404aeb55*/  jmp loc_1404AEE10
loc_1404AEB5A: /*1404aeb5a*/ mov rax, qword ptr [rbp+750h+var_270+8]
/*1404aeb61*/  test rax, rax
/*1404aeb64*/  jz loc_1404AEC28
/*1404aeb6a*/  mov [rbp+750h+var_A8], rax
/*1404aeb71*/  mov r14, qword ptr [rbp+750h+var_260+8]
/*1404aeb78*/  test r14, r14
/*1404aeb7b*/  jz short loc_1404AEBF8
/*1404aeb7d*/  mov r12, qword ptr [rbp+750h+var_270]
/*1404aeb84*/  movdqa xmm0, xmmword ptr [r12]
/*1404aeb8a*/  lea r13, [r12+10h]
/*1404aeb8f*/  pmovmskb r15d, xmm0
/*1404aeb94*/  not r15d
/*1404aeb97*/  jmp short loc_1404AEBAB
loc_1404AEB99: /*1404aeb99*/ dec r14
/*1404aeb9c*/  lea eax, [r15-1]
/*1404aeba0*/  and eax, r15d
/*1404aeba3*/  mov r15d, eax
/*1404aeba6*/  test r14, r14
/*1404aeba9*/  jz short loc_1404AEBF8
loc_1404AEBAB: /*1404aebab*/ test r15w, r15w
/*1404aebaf*/  jnz short loc_1404AEBD0
loc_1404AEBB1: /*1404aebb1*/ movdqa xmm0, xmmword ptr [r13+0]
/*1404aebb7*/  add r12, 0FFFFFFFFFFFFFE00h
/*1404aebbe*/  add r13, 10h
/*1404aebc2*/  pmovmskb r15d, xmm0
/*1404aebc7*/  xor r15d, 0FFFFh
/*1404aebce*/  jz short loc_1404AEBB1
loc_1404AEBD0: /*1404aebd0*/ tzcnt ecx, r15d
/*1404aebd5*/  shl ecx, 5
/*1404aebd8*/  mov rax, r12
/*1404aebdb*/  sub rax, rcx
/*1404aebde*/  mov rdx, [rax-20h]
/*1404aebe2*/  test rdx, rdx
/*1404aebe5*/  jz short loc_1404AEB99
/*1404aebe7*/  mov rcx, [rax-18h]
/*1404aebeb*/  mov r8d, 1
/*1404aebf1*/  call sub_140001660
/*1404aebf6*/  jmp short loc_1404AEB99
loc_1404AEBF8: /*1404aebf8*/ mov rdx, [rbp+750h+var_A8]
/*1404aebff*/  mov rax, rdx
/*1404aec02*/  shl rax, 5
/*1404aec06*/  add rdx, rax
/*1404aec09*/  add rdx, 31h ; '1'
/*1404aec0d*/  jz short loc_1404AEC28
/*1404aec0f*/  mov rcx, qword ptr [rbp+750h+var_270]
/*1404aec16*/  sub rcx, rax
/*1404aec19*/  add rcx, 0FFFFFFFFFFFFFFE0h
/*1404aec1d*/  mov r8d, 10h
/*1404aec23*/  call sub_140001660
loc_1404AEC28: /*1404aec28*/ mov qword ptr [rbp+750h+var_270], 0
/*1404aec33*/  mov qword ptr [rbp+750h+var_260], 4
/*1404aec3e*/  mov qword ptr [rbp+750h+var_260+8], 0
/*1404aec49*/  mov qword ptr [rbp+750h+var_250+8], 1
/*1404aec54*/  lea rax, unk_1417A36D8
/*1404aec5b*/  mov qword ptr [rbp+750h+var_240], rax
/*1404aec62*/  mov qword ptr [rbp+750h+var_240+8], 0
/*1404aec6d*/  mov qword ptr [rbp+750h+var_230+8], 0
/*1404aec78*/  mov word ptr [rbp+750h+var_220+8], 0
/*1404aec81*/  mov [rbp+750h+var_99], 1
/*1404aec88*/  lea rcx, [rbp+750h+var_5C0]
/*1404aec8f*/  lea rdx, [rbp+750h+var_270]
/*1404aec96*/  call sub_14097BF50
/*1404aec9b*/  nop
/*1404aec9c*/  mov r12, [rbp+750h+var_D0]
/*1404aeca3*/  mov r14, [rbp+750h+var_C8]
/*1404aecaa*/  mov rax, qword ptr [rbp+750h+var_5C0]
/*1404aecb1*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404aecb5*/  jz loc_1404AF35E
/*1404aecbb*/  mov rcx, qword ptr [rbp+750h+var_5C0+8]
/*1404aecc2*/  mov qword ptr [rbp+750h+var_450], rax
/*1404aecc9*/  mov qword ptr [rbp+750h+var_450+8], rcx
/*1404aecd0*/  mov qword ptr [rbp+750h+var_270], 0
/*1404aecdb*/  mov qword ptr [rbp+750h+var_270+8], 8
/*1404aece6*/  mov qword ptr [rbp+750h+var_260], 0
/*1404aecf1*/  lea rax, [rbp+750h+var_450]
/*1404aecf8*/  mov qword ptr [rbp+750h+var_190], rax
/*1404aecff*/  lea rax, sub_140FB2F50
/*1404aed06*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404AED0D: /*1404aed0d*/ lea rcx, [rbp+750h+var_730]
/*1404aed11*/  lea rdx, unk_14175C9F8
/*1404aed18*/  lea r8, [rbp+750h+var_190]
/*1404aed1f*/  call sub_14149C0F0
/*1404aed24*/  nop
/*1404aed25*/  movups xmm0, [rbp+750h+var_730]
/*1404aed29*/  movaps [rbp+750h+var_310], xmm0
/*1404aed30*/  mov rax, [rbp+750h+var_720]
/*1404aed34*/  mov qword ptr [rbp+750h+var_300], rax
/*1404aed3b*/  movdqu xmm0, [rbp+750h+var_270]
/*1404aed43*/  movdqa [rbp+750h+var_360], xmm0
/*1404aed4b*/  mov rax, qword ptr [rbp+750h+var_260]
/*1404aed52*/  mov [rbp+750h+var_350], rax
/*1404aed59*/  cmp dword ptr [rbp+750h+var_450], 2
/*1404aed60*/  jb short loc_1404AED76
/*1404aed62*/  mov [rbp+750h+var_99], 1
loc_1404AED69: /*1404aed69*/ lea rcx, [rbp+750h+var_450+8]
/*1404aed70*/  call sub_140018650
/*1404aed75*/  nop
loc_1404AED76: /*1404aed76*/ mov r15d, 0Ah
loc_1404AED7C: /*1404aed7c*/ mov qword ptr [rbp+750h+var_270], r15
/*1404aed83*/  mov rax, qword ptr [rbp+750h+var_300]
/*1404aed8a*/  lea rcx, [rbp+750h+var_208+1]
/*1404aed91*/  mov [rcx-51h], rax
/*1404aed95*/  movaps xmm0, [rbp+750h+var_310]
/*1404aed9c*/  movups xmmword ptr [rcx-61h], xmm0
/*1404aeda0*/  movdqa xmm0, [rbp+750h+var_190]
/*1404aeda8*/  movaps xmm1, [rbp+750h+var_180]
/*1404aedaf*/  movaps xmm2, [rbp+750h+var_170]
/*1404aedb6*/  movaps xmm3, [rbp+750h+var_160]
/*1404aedbd*/  movups xmmword ptr [rcx-19h], xmm3
/*1404aedc1*/  movups xmmword ptr [rcx-29h], xmm2
/*1404aedc5*/  movups xmmword ptr [rcx-39h], xmm1
/*1404aedc9*/  movdqu xmmword ptr [rcx-49h], xmm0
/*1404aedce*/  mov [rbp+750h+var_99], 1
/*1404aedd5*/  lea rax, [rbp+750h+var_270]
/*1404aeddc*/  mov [rsp+7D0h+var_7A0], rax
/*1404aede1*/  lea rax, [rbp+750h+var_360]
/*1404aede8*/  mov [rsp+7D0h+var_7A8], rax
/*1404aeded*/  mov [rsp+7D0h+var_7B0], r12
/*1404aedf2*/  lea rcx, [rbp+750h+var_4E0]
/*1404aedf9*/  mov rdx, [rbp+750h+var_D8]
/*1404aee00*/  mov r8, [rbp+750h+var_F8]
/*1404aee07*/  mov r9, r14
/*1404aee0a*/  call retry_convergence_rollouts_serial
/*1404aee0f*/  nop
loc_1404AEE10: /*1404aee10*/ cmp qword ptr [rbp+750h+var_4D0+8], 0FFFFFFFFFFFFFFFFh
/*1404aee18*/  lea r9, [rbp+750h+var_4D0+8]
/*1404aee1f*/  jz loc_1404AEF75
loc_1404AEE25: /*1404aee25*/ mov rax, qword ptr [rbp+750h+var_4E0]
/*1404aee2c*/  mov [rbp+750h+var_C8], rax
/*1404aee33*/  mov r14, qword ptr [rbp+750h+var_4E0+8]
/*1404aee3a*/  mov r8, qword ptr [rbp+750h+var_4D0]
/*1404aee41*/  movups xmm0, xmmword ptr [r9+50h]
/*1404aee46*/  movaps [rbp+750h+var_140], xmm0
/*1404aee4d*/  movups xmm0, xmmword ptr [r9+40h]
/*1404aee52*/  movaps [rbp+750h+var_150], xmm0
/*1404aee59*/  movdqu xmm0, xmmword ptr [r9]
/*1404aee5e*/  movups xmm1, xmmword ptr [r9+10h]
/*1404aee63*/  movups xmm2, xmmword ptr [r9+20h]
/*1404aee68*/  movups xmm3, xmmword ptr [r9+30h]
/*1404aee6d*/  movaps [rbp+750h+var_160], xmm3
/*1404aee74*/  movaps [rbp+750h+var_170], xmm2
/*1404aee7b*/  movaps [rbp+750h+var_180], xmm1
/*1404aee82*/  movdqa [rbp+750h+var_190], xmm0
loc_1404AEE8A: /*1404aee8a*/ lea rcx, [rbp+750h+var_270]
/*1404aee91*/  mov rdx, r14
/*1404aee94*/  mov [rbp+750h+var_D0], r8
/*1404aee9b*/  lea r9, [rbp+750h+var_190]
/*1404aeea2*/  call sub_1404BFEF0
/*1404aeea7*/  nop
/*1404aeea8*/  lea r13, sub_1400015F0
/*1404aeeaf*/  mov r12, qword ptr [rbp+750h+var_270]
/*1404aeeb6*/  mov rax, qword ptr [rbp+750h+var_270+8]
/*1404aeebd*/  mov [rbp+750h+var_E0], rax
/*1404aeec4*/  mov rdi, qword ptr [rbp+750h+var_260]
/*1404aeecb*/  mov rbx, qword ptr [rbp+750h+var_260+8]
/*1404aeed2*/  movdqu xmm9, [rbp+750h+var_250]
/*1404aeedb*/  movdqu xmm10, [rbp+750h+var_240]
/*1404aeee4*/  mov r15, qword ptr [rbp+750h+var_230]
/*1404aeeeb*/  lea rax, [rbp+750h+var_230+8]
/*1404aeef2*/  movdqu xmm0, xmmword ptr [rax]
/*1404aeef6*/  movdqa [rbp+750h+var_290], xmm0
/*1404aeefe*/  mov rax, [rax+10h]
/*1404aef02*/  mov [rbp+750h+var_280], rax
/*1404aef09*/  mov [rbp+750h+var_A8], r14
/*1404aef10*/  mov rcx, r14
/*1404aef13*/  mov [rbp+750h+var_E8], 0
loc_1404AEF1E: /*1404aef1e*/ mov rax, [rbp+750h+var_E8]
/*1404aef25*/  cmp [rbp+750h+var_D0], rax
/*1404aef2c*/  jz short loc_1404AEF4A
/*1404aef2e*/  inc rax
/*1404aef31*/  mov [rbp+750h+var_E8], rax
/*1404aef38*/  lea r14, [rcx+80h]
loc_1404AEF3F: /*1404aef3f*/ call sub_1402C7EE0
/*1404aef44*/  nop
/*1404aef45*/  mov rcx, r14
/*1404aef48*/  jmp short loc_1404AEF1E
loc_1404AEF4A: /*1404aef4a*/ mov rdx, [rbp+750h+var_C8]
/*1404aef51*/  test rdx, rdx
/*1404aef54*/  jz loc_1404AE84E
/*1404aef5a*/  shl rdx, 7
/*1404aef5e*/  mov r8d, 8
/*1404aef64*/  mov rcx, [rbp+750h+var_A8]
/*1404aef6b*/  call sub_140001660
/*1404aef70*/  jmp loc_1404AE84E
loc_1404AEF75: /*1404aef75*/ mov r14, qword ptr [rbp+750h+var_4D0]
/*1404aef7c*/  mov [rbp+750h+var_3C0], r14
/*1404aef83*/  movdqa xmm0, [rbp+750h+var_4E0]
/*1404aef8b*/  movdqa [rbp+750h+var_3D0], xmm0
/*1404aef93*/  mov rdx, qword ptr [rbp+750h+var_3D0+8]
/*1404aef9a*/  imul r8, r14, 0C8h
/*1404aefa1*/  add r8, rdx
/*1404aefa4*/  mov [rbp+750h+var_9A], 1
loc_1404AEFAB: /*1404aefab*/ lea rcx, [rbp+750h+var_560]
/*1404aefb2*/  mov [rbp+750h+var_A8], rdx
/*1404aefb9*/  call sub_140319830
/*1404aefbe*/  nop
/*1404aefbf*/  lea r13, sub_1400015F0
/*1404aefc6*/  mov rax, qword ptr [rbp+750h+var_550]
/*1404aefcd*/  mov [rbp+750h+var_D0], rax
/*1404aefd4*/  mov [rbp+750h+var_378], rax
/*1404aefdb*/  movzx eax, [rbp+750h+var_5E8]
/*1404aefe2*/  shl eax, 3
/*1404aefe5*/  lea rcx, off_14175ED60
/*1404aefec*/  mov r8, [rax+rcx]
/*1404aeff0*/  lea rcx, qword_14175ED78
/*1404aeff7*/  mov r9, [rax+rcx]
loc_1404AEFFB: /*1404aeffb*/ lea rcx, [rbp+750h+var_270]
/*1404af002*/  lea rdx, [rbp+750h+var_650]
/*1404af009*/  call sub_140FB96B0
/*1404af00e*/  nop
/*1404af00f*/  mov rax, qword ptr [rbp+750h+var_270]
/*1404af016*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404af01a*/  jz loc_1404AF158
/*1404af020*/  mov rcx, qword ptr [rbp+750h+var_270+8]
/*1404af027*/  movzx edx, byte ptr [rbp+750h+var_260]
/*1404af02e*/  lea rdi, [rbp+750h+var_208+1]
/*1404af035*/  movdqu xmm0, xmmword ptr [rdi-58h]
/*1404af03a*/  movups xmm1, xmmword ptr [rdi-48h]
/*1404af03e*/  movups xmm2, xmmword ptr [rdi-39h]
/*1404af042*/  lea r8, [rbp+750h+var_300+1]
/*1404af049*/  movups xmmword ptr [r8+1Fh], xmm2
/*1404af04e*/  movups xmmword ptr [r8+10h], xmm1
/*1404af053*/  movdqu xmmword ptr [r8], xmm0
/*1404af058*/  mov qword ptr [rbp+750h+var_310], rax
/*1404af05f*/  mov qword ptr [rbp+750h+var_310+8], rcx
/*1404af066*/  mov byte ptr [rbp+750h+var_300], dl
/*1404af06c*/  mov r14, qword ptr [rbp+750h+var_560+8]
/*1404af073*/  lea rax, [rbp+750h+var_310]
/*1404af07a*/  mov qword ptr [rbp+750h+var_4E0], rax
/*1404af081*/  lea rax, sub_140FB8910
/*1404af088*/  mov qword ptr [rbp+750h+var_4E0+8], rax
loc_1404AF08F: /*1404af08f*/ lea rcx, [rbp+750h+var_6D0]
/*1404af096*/  lea rdx, unk_14175B606
/*1404af09d*/  lea r8, [rbp+750h+var_4E0]
/*1404af0a4*/  call sub_14149C0F0
/*1404af0a9*/  nop
/*1404af0aa*/  mov rax, [rbp+750h+var_6C0]
/*1404af0b1*/  mov [rdi-51h], rax
/*1404af0b5*/  movdqu xmm0, [rbp+750h+var_6D0]
/*1404af0bd*/  movdqu xmmword ptr [rdi-61h], xmm0
/*1404af0c2*/  mov qword ptr [rbp+750h+var_270], 0Ah
/*1404af0cd*/  lea rcx, [rbp+750h+var_190]
/*1404af0d4*/  mov rdx, r14
/*1404af0d7*/  mov r8, [rbp+750h+var_D0]
/*1404af0de*/  lea r9, [rbp+750h+var_270]
/*1404af0e5*/  call sub_1404BFEF0
/*1404af0ea*/  nop
/*1404af0eb*/  mov r12, qword ptr [rbp+750h+var_190]
/*1404af0f2*/  mov rax, qword ptr [rbp+750h+var_190+8]
/*1404af0f9*/  mov [rbp+750h+var_E0], rax
/*1404af100*/  mov rdi, qword ptr [rbp+750h+var_180]
/*1404af107*/  mov rbx, qword ptr [rbp+750h+var_180+8]
/*1404af10e*/  movdqu xmm9, [rbp+750h+var_170]
/*1404af117*/  movdqu xmm10, [rbp+750h+var_160]
/*1404af120*/  mov r15, qword ptr [rbp+750h+var_150]
/*1404af127*/  lea rax, [rbp+750h+var_190+8]
/*1404af12e*/  movdqu xmm0, xmmword ptr [rax+40h]
/*1404af133*/  movdqa [rbp+750h+var_290], xmm0
/*1404af13b*/  mov rax, [rax+50h]
/*1404af13f*/  mov [rbp+750h+var_280], rax
loc_1404AF146: /*1404af146*/ lea rcx, [rbp+750h+var_310]
/*1404af14d*/  call sub_14043D020
/*1404af152*/  nop
/*1404af153*/  jmp loc_1404B00A5
loc_1404AF158: /*1404af158*/ mov rax, [rbp+750h+var_F8]
/*1404af15f*/  cmp r14, rax
/*1404af162*/  cmovnb r14, rax
/*1404af166*/  mov [rbp+750h+var_C8], 0
/*1404af171*/  mov [rbp+750h+var_368], r14
/*1404af178*/  jmp short loc_1404AF181
loc_1404AF17A: /*1404af17a*/ inc qword ptr [rbp+750h+var_398+8]
loc_1404AF181: /*1404af181*/ mov rax, [rbp+750h+var_C8]
/*1404af188*/  cmp rax, r14
/*1404af18b*/  mov [rbp+750h+var_108], rax
/*1404af192*/  jnb loc_1404AF8FB
/*1404af198*/  lea rcx, [rax+1]
/*1404af19c*/  mov [rbp+750h+var_C8], rcx
/*1404af1a3*/  imul r12, rax, 0C8h
/*1404af1aa*/  mov rax, [rbp+750h+var_A8]
/*1404af1b1*/  mov rcx, [rax+r12+20h]
/*1404af1b6*/  mov r15, [rax+r12+28h]
/*1404af1bb*/  mov [rbp+750h+var_5D0], rcx
/*1404af1c2*/  mov rdx, r15
/*1404af1c5*/  call sub_1404B58C0
/*1404af1ca*/  test al, al
/*1404af1cc*/  jz short loc_1404AF181
/*1404af1ce*/  add r12, [rbp+750h+var_A8]
/*1404af1d5*/  mov rcx, [r12+38h]
/*1404af1da*/  mov r12, [r12+40h]
/*1404af1df*/  mov [rbp+750h+var_5C8], rcx
/*1404af1e6*/  mov rdx, r12
/*1404af1e9*/  call sub_1404B58C0
/*1404af1ee*/  test al, al
/*1404af1f0*/  jz short loc_1404AF181
/*1404af1f2*/  mov rax, [rbp+750h+var_108]
/*1404af1f9*/  lea rax, [rax+rax*4]
/*1404af1fd*/  shl rax, 4
/*1404af201*/  add rax, [rbp+750h+var_D8]
/*1404af208*/  mov [rbp+750h+var_9C], 1
/*1404af20f*/  mov r13b, 1
/*1404af212*/  mov r14, [rbp+750h+var_E0]
/*1404af219*/  mov [rbp+750h+var_340], rax
/*1404af220*/  cmp [rax+28h], r14
/*1404af224*/  jnz short loc_1404AF246
/*1404af226*/  mov rax, [rbp+750h+var_340]
/*1404af22d*/  mov rcx, [rax+20h]
/*1404af231*/  mov rdx, [rbp+750h+var_E8]
/*1404af238*/  mov r8, r14
/*1404af23b*/  call sub_1416847B0
/*1404af240*/  test eax, eax
/*1404af242*/  setnz r13b
loc_1404AF246: /*1404af246*/ cmp r15, r14
/*1404af249*/  jnz short loc_1404AF28D
/*1404af24b*/  mov rcx, [rbp+750h+var_5D0]
/*1404af252*/  mov rdx, [rbp+750h+var_E8]
/*1404af259*/  mov r8, r14
/*1404af25c*/  call sub_1416847B0
/*1404af261*/  cmp r12, r14
/*1404af264*/  jnz short loc_1404AF28D
/*1404af266*/  test eax, eax
/*1404af268*/  jnz short loc_1404AF28D
/*1404af26a*/  mov rcx, [rbp+750h+var_5C8]
/*1404af271*/  mov rdx, [rbp+750h+var_E8]
/*1404af278*/  mov r8, [rbp+750h+var_E0]
/*1404af27f*/  call sub_1416847B0
/*1404af284*/  test eax, eax
/*1404af286*/  setnz [rbp+750h+var_9C]
loc_1404AF28D: /*1404af28d*/ test r13b, r13b
/*1404af290*/  jz loc_1404AF337
/*1404af296*/  mov rax, [rbp+750h+var_340]
/*1404af29d*/  mov qword ptr [rbp+750h+var_5C0], rax
/*1404af2a4*/  lea rax, off_14175AD88
/*1404af2ab*/  mov qword ptr [rbp+750h+var_5C0+8], rax
/*1404af2b2*/  lea rax, [rbp+750h+var_320]
/*1404af2b9*/  mov qword ptr [rbp+750h+var_5B0], rax
/*1404af2c0*/  lea rax, unk_14175B0F8
/*1404af2c7*/  mov qword ptr [rbp+750h+var_5B0+8], rax
loc_1404AF2CE: /*1404af2ce*/ lea rax, [rbp+750h+var_5C0]
/*1404af2d5*/  mov [rsp+7D0h+var_7B0], rax
/*1404af2da*/  mov [rsp+7D0h+var_7A8], 2
/*1404af2e3*/  mov r9d, 34h ; '4'
/*1404af2e9*/  lea rcx, [rbp+750h+var_4E0]
/*1404af2f0*/  lea rdx, [rbp+750h+var_650]
/*1404af2f7*/  lea r8, aUpdateThreadsS; "UPDATE threads SET model_provider = ?2 "...
/*1404af2fe*/  call sub_140429E20
/*1404af303*/  nop
/*1404af304*/  lea r13, sub_1400015F0
/*1404af30b*/  cmp qword ptr [rbp+750h+var_4E0], 0FFFFFFFFFFFFFFFFh
/*1404af313*/  jnz loc_1404AFE87
/*1404af319*/  cmp qword ptr [rbp+750h+var_4E0+8], 0
/*1404af321*/  mov r14, [rbp+750h+var_368]
/*1404af328*/  jz loc_1404AFFC0
/*1404af32e*/  inc [rbp+750h+var_380]
/*1404af335*/  jmp short loc_1404AF352
loc_1404AF337: /*1404af337*/ cmp [rbp+750h+var_9C], 0
/*1404af33e*/  lea r13, sub_1400015F0
/*1404af345*/  mov r14, [rbp+750h+var_368]
/*1404af34c*/  jz loc_1404AF17A
loc_1404AF352: /*1404af352*/ inc [rbp+750h+var_388]
/*1404af359*/  jmp loc_1404AF181
loc_1404AF35E: /*1404af35e*/ mov rdx, qword ptr [rbp+750h+var_5C0+8]
/*1404af365*/  mov [rbp+750h+var_F0], rdx
/*1404af36c*/  sub rdx, 0FFFFFFFFFFFFFF80h
/*1404af370*/  mov rax, [rbp+750h+var_D8]
/*1404af377*/  mov qword ptr [rbp+750h+var_270], rax
/*1404af37e*/  mov rax, [rbp+750h+var_F8]
/*1404af385*/  mov qword ptr [rbp+750h+var_270+8], rax
/*1404af38c*/  mov qword ptr [rbp+750h+var_260], r14
/*1404af393*/  mov qword ptr [rbp+750h+var_260+8], r12
loc_1404AF39A: /*1404af39a*/ lea rcx, [rbp+750h+var_680]
/*1404af3a1*/  lea r12, [rbp+750h+var_270]
/*1404af3a8*/  mov r8, r12
/*1404af3ab*/  call sub_14097F220
/*1404af3b0*/  nop
loc_1404AF3B1: /*1404af3b1*/ mov r15, [rbp+750h+var_670]
/*1404af3b8*/  mov [rsp+7D0h+var_7B0], 0C8h
/*1404af3c1*/  mov r9d, 8
/*1404af3c7*/  mov rcx, r12
/*1404af3ca*/  mov rdx, r15
/*1404af3cd*/  xor r8d, r8d
/*1404af3d0*/  call sub_140388B60
/*1404af3d5*/  movzx eax, byte ptr [rbp+750h+var_270]
/*1404af3dc*/  mov rcx, qword ptr [rbp+750h+var_270+8]
/*1404af3e3*/  mov byte ptr [rbp+750h+var_A8], al
/*1404af3e9*/  test al, al
/*1404af3eb*/  jnz loc_1404B091C
/*1404af3f1*/  mov rax, qword ptr [rbp+750h+var_260]
/*1404af3f8*/  mov qword ptr [rbp+750h+var_338], rcx
/*1404af3ff*/  mov qword ptr [rbp+750h+var_338+8], rax
/*1404af406*/  mov [rbp+750h+var_328], 0
/*1404af411*/  mov qword ptr [rbp+750h+var_C0], 0
/*1404af41c*/  mov qword ptr [rbp+750h+var_C0+8], 8
/*1404af427*/  mov [rbp+750h+var_B0], 0
/*1404af432*/  mov qword ptr [rbp+750h+var_560], 0FFFFFFFFFFFFFFFFh
/*1404af43d*/  mov rcx, [rbp+750h+var_680]
/*1404af444*/  mov rax, [rbp+750h+var_678]
/*1404af44b*/  imul r15, 0C8h
/*1404af452*/  add r15, rax
/*1404af455*/  mov qword ptr [rbp+750h+var_500], rax
/*1404af45c*/  mov qword ptr [rbp+750h+var_500+8], rax
/*1404af463*/  mov [rbp+750h+var_4F0], rcx
/*1404af46a*/  mov [rbp+750h+var_4E8], r15
/*1404af471*/  jmp short loc_1404AF4A0
loc_1404AF473: /*1404af473*/ imul rcx, r13, 0C8h
/*1404af47a*/  add rcx, qword ptr [rbp+750h+var_338+8]
/*1404af481*/  mov r8d, 0C8h
/*1404af487*/  lea rdx, [rbp+750h+var_270]
/*1404af48e*/  call sub_141684120
/*1404af493*/  inc r13
/*1404af496*/  mov [rbp+750h+var_328], r13
/*1404af49d*/  mov rax, r12
loc_1404AF4A0: /*1404af4a0*/ cmp rax, r15
/*1404af4a3*/  jz loc_1404AF7FF
/*1404af4a9*/  lea r12, [rax+0C8h]
/*1404af4b0*/  mov qword ptr [rbp+750h+var_500+8], r12
/*1404af4b7*/  mov rcx, [rax]
/*1404af4ba*/  cmp rcx, 0FFFFFFFFFFFFFFFEh
/*1404af4be*/  jz loc_1404AF7FF
/*1404af4c4*/  movups xmm0, xmmword ptr [rax+8]
/*1404af4c8*/  movups xmm1, xmmword ptr [rax+18h]
/*1404af4cc*/  movups xmm2, xmmword ptr [rax+28h]
/*1404af4d0*/  movups xmm3, xmmword ptr [rax+38h]
/*1404af4d4*/  movaps [rbp+750h+var_450], xmm0
/*1404af4db*/  movaps [rbp+750h+var_440], xmm1
/*1404af4e2*/  movaps [rbp+750h+var_430], xmm2
/*1404af4e9*/  movaps [rbp+750h+var_420], xmm3
/*1404af4f0*/  movups xmm0, xmmword ptr [rax+48h]
/*1404af4f4*/  movaps [rbp+750h+var_410], xmm0
/*1404af4fb*/  movups xmm0, xmmword ptr [rax+58h]
/*1404af4ff*/  movaps [rbp+750h+var_400], xmm0
/*1404af506*/  movups xmm0, xmmword ptr [rax+68h]
/*1404af50a*/  movups xmm1, xmmword ptr [rax+78h]
/*1404af50e*/  movups xmm2, xmmword ptr [rax+88h]
/*1404af515*/  movups xmm3, xmmword ptr [rax+98h]
/*1404af51c*/  movaps [rbp+750h+var_5C0], xmm0
/*1404af523*/  movaps [rbp+750h+var_5B0], xmm1
/*1404af52a*/  movaps [rbp+750h+var_5A0], xmm2
/*1404af531*/  movaps [rbp+750h+var_590], xmm3
/*1404af538*/  movups xmm0, xmmword ptr [rax+0A8h]
/*1404af53f*/  movaps [rbp+750h+var_580], xmm0
/*1404af546*/  movups xmm0, xmmword ptr [rax+0B8h]
/*1404af54d*/  movaps [rbp+750h+var_570], xmm0
/*1404af554*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1404af558*/  jz loc_1404AF74F
/*1404af55e*/  mov qword ptr [rbp+750h+var_270], rcx
/*1404af565*/  movaps xmm0, [rbp+750h+var_400]
/*1404af56c*/  lea rax, [rbp+750h+var_208+1]
/*1404af573*/  movups xmmword ptr [rax-11h], xmm0
/*1404af577*/  movaps xmm0, [rbp+750h+var_410]
/*1404af57e*/  movups xmmword ptr [rax-21h], xmm0
/*1404af582*/  movaps xmm0, [rbp+750h+var_450]
/*1404af589*/  movaps xmm1, [rbp+750h+var_440]
/*1404af590*/  movaps xmm2, [rbp+750h+var_430]
/*1404af597*/  movaps xmm3, [rbp+750h+var_420]
/*1404af59e*/  movups xmmword ptr [rax-31h], xmm3
/*1404af5a2*/  movups xmmword ptr [rax-41h], xmm2
/*1404af5a6*/  movups xmmword ptr [rax-51h], xmm1
/*1404af5aa*/  movups xmmword ptr [rax-61h], xmm0
/*1404af5ae*/  movaps xmm0, [rbp+750h+var_570]
/*1404af5b5*/  lea rax, [rbp+750h+var_208]
/*1404af5bc*/  movups xmmword ptr [rax+50h], xmm0
/*1404af5c0*/  movaps xmm0, [rbp+750h+var_580]
/*1404af5c7*/  movups xmmword ptr [rax+40h], xmm0
/*1404af5cb*/  movdqa xmm0, [rbp+750h+var_5C0]
/*1404af5d3*/  movaps xmm1, [rbp+750h+var_5B0]
/*1404af5da*/  movaps xmm2, [rbp+750h+var_5A0]
/*1404af5e1*/  movaps xmm3, [rbp+750h+var_590]
/*1404af5e8*/  movups xmmword ptr [rax+30h], xmm3
/*1404af5ec*/  movups xmmword ptr [rax+20h], xmm2
/*1404af5f0*/  movups xmmword ptr [rax+10h], xmm1
/*1404af5f4*/  movdqu xmmword ptr [rax], xmm0
/*1404af5f8*/  cmp qword ptr [rbp+750h+var_230+8], 0FFFFFFFFFFFFFFFFh
/*1404af600*/  jz loc_1404AF729
/*1404af606*/  mov [rbp+750h+var_9B], 1
loc_1404AF60D: /*1404af60d*/ lea rcx, [rbp+750h+var_190]
/*1404af614*/  lea rdx, [rbp+750h+var_230+8]
/*1404af61b*/  call sub_1404DDDC0
/*1404af620*/  nop
/*1404af621*/  movups xmm0, [rbp+750h+var_120]
/*1404af628*/  movaps [rbp+750h+var_2A0], xmm0
/*1404af62f*/  movups xmm0, [rbp+750h+var_130]
/*1404af636*/  movaps [rbp+750h+var_2B0], xmm0
/*1404af63d*/  movups xmm0, [rbp+750h+var_140]
/*1404af644*/  movaps [rbp+750h+var_2C0], xmm0
/*1404af64b*/  movups xmm0, [rbp+750h+var_150]
/*1404af652*/  movaps [rbp+750h+var_2D0], xmm0
/*1404af659*/  movdqu xmm0, [rbp+750h+var_190]
/*1404af661*/  movups xmm1, [rbp+750h+var_180]
/*1404af668*/  movups xmm2, [rbp+750h+var_170]
/*1404af66f*/  movups xmm3, [rbp+750h+var_160]
/*1404af676*/  movaps [rbp+750h+var_2E0], xmm3
/*1404af67d*/  movaps [rbp+750h+var_2F0], xmm2
/*1404af684*/  movaps [rbp+750h+var_300], xmm1
/*1404af68b*/  movdqa [rbp+750h+var_310], xmm0
/*1404af693*/  mov r13, [rbp+750h+var_B0]
/*1404af69a*/  cmp r13, qword ptr [rbp+750h+var_C0]
/*1404af6a1*/  jnz short loc_1404AF6B0
loc_1404AF6A3: /*1404af6a3*/ lea rcx, [rbp+750h+var_C0]
/*1404af6aa*/  call sub_1416898F0
/*1404af6af*/  nop
loc_1404AF6B0: /*1404af6b0*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404af6b7*/  mov rcx, r13
/*1404af6ba*/  shl rcx, 7
/*1404af6be*/  movaps xmm0, [rbp+750h+var_2A0]
/*1404af6c5*/  movups xmmword ptr [rax+rcx+70h], xmm0
/*1404af6ca*/  movaps xmm0, [rbp+750h+var_2B0]
/*1404af6d1*/  movups xmmword ptr [rax+rcx+60h], xmm0
/*1404af6d6*/  movaps xmm0, [rbp+750h+var_2C0]
/*1404af6dd*/  movups xmmword ptr [rax+rcx+50h], xmm0
/*1404af6e2*/  movaps xmm0, [rbp+750h+var_2D0]
/*1404af6e9*/  movups xmmword ptr [rax+rcx+40h], xmm0
/*1404af6ee*/  movdqa xmm0, [rbp+750h+var_310]
/*1404af6f6*/  movaps xmm1, [rbp+750h+var_300]
/*1404af6fd*/  movaps xmm2, [rbp+750h+var_2F0]
/*1404af704*/  movaps xmm3, [rbp+750h+var_2E0]
/*1404af70b*/  movups xmmword ptr [rax+rcx+30h], xmm3
/*1404af710*/  movups xmmword ptr [rax+rcx+20h], xmm2
/*1404af715*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404af71a*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1404af71f*/  inc r13
/*1404af722*/  mov [rbp+750h+var_B0], r13
loc_1404AF729: /*1404af729*/ mov r13, [rbp+750h+var_328]
/*1404af730*/  cmp r13, qword ptr [rbp+750h+var_338]
/*1404af737*/  jnz loc_1404AF473
loc_1404AF73D: /*1404af73d*/ lea rcx, [rbp+750h+var_338]
/*1404af744*/  call sub_141689880
/*1404af749*/  nop
/*1404af74a*/  jmp loc_1404AF473
loc_1404AF74F: /*1404af74f*/ add rax, 8
/*1404af753*/  movups xmm0, xmmword ptr [rax+50h]
/*1404af757*/  movaps [rbp+750h+var_220], xmm0
/*1404af75e*/  movups xmm0, xmmword ptr [rax+40h]
/*1404af762*/  movaps [rbp+750h+var_230], xmm0
/*1404af769*/  movdqu xmm0, xmmword ptr [rax]
/*1404af76d*/  movups xmm1, xmmword ptr [rax+10h]
/*1404af771*/  movups xmm2, xmmword ptr [rax+20h]
/*1404af775*/  movups xmm3, xmmword ptr [rax+30h]
/*1404af779*/  movaps [rbp+750h+var_240], xmm3
/*1404af780*/  movaps [rbp+750h+var_250], xmm2
/*1404af787*/  movaps [rbp+750h+var_260], xmm1
/*1404af78e*/  movdqa [rbp+750h+var_270], xmm0
/*1404af796*/  cmp dword ptr [rbp+750h+var_560], 0FFFFFFFFh
/*1404af79d*/  jz short loc_1404AF7B4
loc_1404AF79F: /*1404af79f*/ lea rcx, [rbp+750h+var_270]
/*1404af7a6*/  call sub_14043E650
/*1404af7ab*/  nop
/*1404af7ac*/  mov rax, r12
/*1404af7af*/  jmp loc_1404AF4A0
loc_1404AF7B4: /*1404af7b4*/ movups xmm0, xmmword ptr [rax+50h]
/*1404af7b8*/  movaps [rbp+750h+var_510], xmm0
/*1404af7bf*/  movups xmm0, xmmword ptr [rax+40h]
/*1404af7c3*/  movaps [rbp+750h+var_520], xmm0
/*1404af7ca*/  movdqu xmm0, xmmword ptr [rax]
/*1404af7ce*/  movups xmm1, xmmword ptr [rax+10h]
/*1404af7d2*/  movups xmm2, xmmword ptr [rax+20h]
/*1404af7d6*/  movups xmm3, xmmword ptr [rax+30h]
/*1404af7da*/  movaps [rbp+750h+var_530], xmm3
/*1404af7e1*/  movaps [rbp+750h+var_540], xmm2
/*1404af7e8*/  movaps [rbp+750h+var_550], xmm1
/*1404af7ef*/  movdqa [rbp+750h+var_560], xmm0
/*1404af7f7*/  mov rax, r12
/*1404af7fa*/  jmp loc_1404AF4A0
loc_1404AF7FF: /*1404af7ff*/ lea rcx, [rbp+750h+var_500]
/*1404af806*/  call sub_140332080
/*1404af80b*/  nop
/*1404af80c*/  mov r15, qword ptr [rbp+750h+var_560]
/*1404af813*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1404af817*/  jz loc_1404AFA8B
/*1404af81d*/  lea rcx, [rbp+750h+var_560+8]
/*1404af824*/  mov rax, [rcx+10h]
/*1404af828*/  mov qword ptr [rbp+750h+var_300], rax
/*1404af82f*/  movups xmm0, xmmword ptr [rcx]
/*1404af832*/  movaps [rbp+750h+var_310], xmm0
/*1404af839*/  movups xmm0, xmmword ptr [rcx+18h]
/*1404af83d*/  movups xmm1, xmmword ptr [rcx+28h]
/*1404af841*/  movups xmm2, xmmword ptr [rcx+38h]
/*1404af845*/  movups xmm3, xmmword ptr [rcx+48h]
/*1404af849*/  movaps [rbp+750h+var_190], xmm0
/*1404af850*/  movaps [rbp+750h+var_180], xmm1
/*1404af857*/  movaps [rbp+750h+var_170], xmm2
/*1404af85e*/  movaps [rbp+750h+var_160], xmm3
/*1404af865*/  movdqu xmm0, [rbp+750h+var_C0]
/*1404af86d*/  movdqa [rbp+750h+var_360], xmm0
/*1404af875*/  mov rax, [rbp+750h+var_B0]
/*1404af87c*/  mov [rbp+750h+var_350], rax
loc_1404AF883: /*1404af883*/ lea rcx, [rbp+750h+var_338]
/*1404af88a*/  call sub_140335300
/*1404af88f*/  nop
/*1404af890*/  mov rax, qword ptr [rbp+750h+var_338]
/*1404af897*/  test rax, rax
/*1404af89a*/  jz short loc_1404AF8B6
/*1404af89c*/  mov rcx, qword ptr [rbp+750h+var_338+8]
/*1404af8a3*/  imul rdx, rax, 0C8h
/*1404af8aa*/  mov r8d, 8
/*1404af8b0*/  call sub_140001660
/*1404af8b5*/  nop
loc_1404AF8B6: /*1404af8b6*/ lea rcx, [rbp+750h+var_F0]
/*1404af8bd*/  call sub_140FB2860
/*1404af8c2*/  nop
/*1404af8c3*/  mov rax, [rbp+750h+var_F0]
/*1404af8ca*/  lock dec qword ptr [rax]
/*1404af8ce*/  jnz loc_1404AFD9E
/*1404af8d4*/  mov [rbp+750h+var_99], 1
loc_1404AF8DB: /*1404af8db*/ lea rcx, [rbp+750h+var_F0]
/*1404af8e2*/  call sub_140FB1240
/*1404af8e7*/  nop
/*1404af8e8*/  mov r12, [rbp+750h+var_D0]
/*1404af8ef*/  mov r14, [rbp+750h+var_C8]
/*1404af8f6*/  jmp loc_1404AED7C
loc_1404AF8FB: /*1404af8fb*/ lea rcx, [rbp+750h+var_4E0]
/*1404af902*/  lea rdx, [rbp+750h+var_650]
/*1404af909*/  call sub_14046C5E0
/*1404af90e*/  nop
/*1404af90f*/  cmp qword ptr [rbp+750h+var_4E0], 0FFFFFFFFFFFFFFFFh
/*1404af917*/  jz loc_1404AFC5C
/*1404af91d*/  movdqu xmm0, [rbp+750h+var_4E0]
/*1404af925*/  movups xmm1, [rbp+750h+var_4D0]
/*1404af92c*/  movups xmm2, [rbp+750h+var_4C0]
/*1404af933*/  movups xmm3, [rbp+750h+var_4B0]
/*1404af93a*/  movaps [rbp+750h+var_2E0], xmm3
/*1404af941*/  movaps [rbp+750h+var_2F0], xmm2
/*1404af948*/  movaps [rbp+750h+var_300], xmm1
/*1404af94f*/  movdqa [rbp+750h+var_310], xmm0
/*1404af957*/  mov r14, qword ptr [rbp+750h+var_560+8]
/*1404af95e*/  lea rax, [rbp+750h+var_310]
/*1404af965*/  mov qword ptr [rbp+750h+var_450], rax
/*1404af96c*/  lea rax, sub_140FB8910
/*1404af973*/  mov qword ptr [rbp+750h+var_450+8], rax
loc_1404AF97A: /*1404af97a*/ lea rcx, [rbp+750h+var_718]
/*1404af97e*/  lea rdx, unk_14175B4E7
/*1404af985*/  lea r8, [rbp+750h+var_450]
/*1404af98c*/  call sub_14149C0F0
/*1404af991*/  nop
/*1404af992*/  lea rcx, [rbp+750h+var_208+1]
/*1404af999*/  lea r9, [rbp+750h+var_270]
/*1404af9a0*/  mov rax, [rbp+750h+var_708]
/*1404af9a4*/  mov [rcx-51h], rax
/*1404af9a8*/  movdqu xmm0, [rbp+750h+var_718]
/*1404af9ad*/  movdqu xmmword ptr [rcx-61h], xmm0
/*1404af9b2*/  mov qword ptr [rbp+750h+var_270], 0Ah
/*1404af9bd*/  lea rcx, [rbp+750h+var_190]
/*1404af9c4*/  mov rdx, r14
/*1404af9c7*/  mov r8, [rbp+750h+var_D0]
/*1404af9ce*/  call sub_1404BFEF0
/*1404af9d3*/  nop
/*1404af9d4*/  mov r12, qword ptr [rbp+750h+var_190]
/*1404af9db*/  mov rax, qword ptr [rbp+750h+var_190+8]
/*1404af9e2*/  mov [rbp+750h+var_E0], rax
/*1404af9e9*/  mov rdi, qword ptr [rbp+750h+var_180]
/*1404af9f0*/  mov rbx, qword ptr [rbp+750h+var_180+8]
/*1404af9f7*/  movdqu xmm9, [rbp+750h+var_170]
/*1404afa00*/  movdqu xmm10, [rbp+750h+var_160]
/*1404afa09*/  mov r15, qword ptr [rbp+750h+var_150]
/*1404afa10*/  lea rax, [rbp+750h+var_190+8]
/*1404afa17*/  movdqu xmm0, xmmword ptr [rax+40h]
/*1404afa1c*/  movdqa [rbp+750h+var_290], xmm0
/*1404afa24*/  mov rax, [rax+50h]
/*1404afa28*/  mov [rbp+750h+var_280], rax
loc_1404AFA2F: /*1404afa2f*/ lea rcx, [rbp+750h+var_310]
/*1404afa36*/  call sub_14043D020
/*1404afa3b*/  nop
/*1404afa3c*/  jmp loc_1404B00A5
loc_1404AFA41: /*1404afa41*/ mov rdx, [rbp+750h+var_A8]
/*1404afa48*/  mov rax, rdx
/*1404afa4b*/  shl rax, 5
/*1404afa4f*/  add rdx, rax
/*1404afa52*/  add rdx, 31h ; '1'
/*1404afa56*/  jz short loc_1404AFA71
/*1404afa58*/  mov rcx, qword ptr [rbp+750h+var_270]
/*1404afa5f*/  sub rcx, rax
/*1404afa62*/  add rcx, 0FFFFFFFFFFFFFFE0h
/*1404afa66*/  mov r8d, 10h
/*1404afa6c*/  call sub_140001660
loc_1404AFA71: /*1404afa71*/ mov r8, [rbp+750h+var_F8]
/*1404afa78*/  mov r15, [rbp+750h+var_D0]
/*1404afa7f*/  mov r12, [rbp+750h+var_C8]
/*1404afa86*/  jmp loc_1404AE4AD
loc_1404AFA8B: /*1404afa8b*/ mov rax, [rbp+750h+var_328]
/*1404afa92*/  mov [rbp+750h+var_350], rax
/*1404afa99*/  movdqu xmm0, [rbp+750h+var_338]
/*1404afaa1*/  movdqa [rbp+750h+var_360], xmm0
loc_1404AFAA9: /*1404afaa9*/ lea rcx, [rbp+750h+var_C0]
/*1404afab0*/  call sub_140335390
/*1404afab5*/  nop
/*1404afab6*/  mov rdx, qword ptr [rbp+750h+var_C0]
/*1404afabd*/  test rdx, rdx
/*1404afac0*/  jz short loc_1404AFAD9
/*1404afac2*/  mov rcx, qword ptr [rbp+750h+var_C0+8]
/*1404afac9*/  shl rdx, 7
/*1404afacd*/  mov r8d, 8
/*1404afad3*/  call sub_140001660
/*1404afad8*/  nop
loc_1404AFAD9: /*1404afad9*/ lea rcx, [rbp+750h+var_F0]
/*1404afae0*/  call sub_140FB2860
/*1404afae5*/  nop
/*1404afae6*/  mov rax, [rbp+750h+var_F0]
/*1404afaed*/  lock dec qword ptr [rax]
/*1404afaf1*/  mov r12, [rbp+750h+var_D0]
/*1404afaf8*/  mov r14, [rbp+750h+var_C8]
/*1404afaff*/  jnz short loc_1404AFB15
/*1404afb01*/  mov [rbp+750h+var_99], 1
loc_1404AFB08: /*1404afb08*/ lea rcx, [rbp+750h+var_F0]
/*1404afb0f*/  call sub_140FB1240
/*1404afb14*/  nop
loc_1404AFB15: /*1404afb15*/ mov rax, qword ptr [rbp+750h+var_360]
/*1404afb1c*/  mov [rbp+750h+var_A8], rax
/*1404afb23*/  mov r9, qword ptr [rbp+750h+var_360+8]
/*1404afb2a*/  mov r15, [rbp+750h+var_350]
loc_1404AFB31: /*1404afb31*/ mov [rsp+7D0h+var_7A0], r12
/*1404afb36*/  mov [rsp+7D0h+var_7A8], r14
/*1404afb3b*/  mov [rsp+7D0h+var_7B0], r15
/*1404afb40*/  lea rcx, [rbp+750h+var_790]
/*1404afb44*/  mov rdx, [rbp+750h+var_D8]
/*1404afb4b*/  mov r8, [rbp+750h+var_F8]
/*1404afb52*/  mov [rbp+750h+var_108], r9
/*1404afb59*/  call sub_1404C0750
/*1404afb5e*/  nop
/*1404afb5f*/  cmp dword ptr [rbp+750h+var_790], 0FFFFFFFFh
/*1404afb63*/  jz loc_1404AFDB1
/*1404afb69*/  imul r8, r15, 0C8h
/*1404afb70*/  mov rdx, [rbp+750h+var_108]
/*1404afb77*/  add r8, rdx
/*1404afb7a*/  mov [rbp+750h+var_9E], 1
loc_1404AFB81: /*1404afb81*/ lea rcx, [rbp+750h+var_190]
/*1404afb88*/  call sub_140319830
/*1404afb8d*/  nop
/*1404afb8e*/  movups xmm0, [rbp+750h+var_740]
/*1404afb92*/  movaps [rbp+750h+var_220], xmm0
/*1404afb99*/  movups xmm0, [rbp+750h+var_750]
/*1404afb9d*/  movaps [rbp+750h+var_230], xmm0
/*1404afba4*/  movdqu xmm0, [rbp+750h+var_790]
/*1404afba9*/  movups xmm1, [rbp+750h+var_780]
/*1404afbad*/  movups xmm2, [rbp+750h+var_770]
/*1404afbb1*/  movups xmm3, [rbp+750h+var_760]
/*1404afbb5*/  movaps [rbp+750h+var_240], xmm3
/*1404afbbc*/  movaps [rbp+750h+var_250], xmm2
/*1404afbc3*/  movaps [rbp+750h+var_260], xmm1
/*1404afbca*/  movdqa [rbp+750h+var_270], xmm0
/*1404afbd2*/  mov [rbp+750h+var_9E], 0
/*1404afbd9*/  lea rax, [rbp+750h+var_270]
/*1404afbe0*/  mov [rsp+7D0h+var_7A0], rax
/*1404afbe5*/  lea rax, [rbp+750h+var_190]
/*1404afbec*/  mov [rsp+7D0h+var_7A8], rax
/*1404afbf1*/  mov rax, [rbp+750h+var_D0]
/*1404afbf8*/  mov [rsp+7D0h+var_7B0], rax
/*1404afbfd*/  lea rcx, [rbp+750h+var_4E0]
/*1404afc04*/  mov rdx, [rbp+750h+var_D8]
/*1404afc0b*/  mov r8, [rbp+750h+var_F8]
/*1404afc12*/  mov r9, [rbp+750h+var_C8]
/*1404afc19*/  call retry_convergence_rollouts_serial
/*1404afc1e*/  nop
loc_1404AFC1F: /*1404afc1f*/ lea rcx, [rbp+750h+var_360]
/*1404afc26*/  call sub_140335300
/*1404afc2b*/  nop
/*1404afc2c*/  cmp [rbp+750h+var_A8], 0
/*1404afc34*/  jz loc_1404AEE10
/*1404afc3a*/  imul rdx, [rbp+750h+var_A8], 0C8h
/*1404afc45*/  mov r8d, 8
/*1404afc4b*/  mov rcx, [rbp+750h+var_108]
/*1404afc52*/  call sub_140001660
/*1404afc57*/  jmp loc_1404AEE10
loc_1404AFC5C: /*1404afc5c*/ mov r8d, 1Bh
/*1404afc62*/  lea rcx, [rbp+750h+var_650]
/*1404afc69*/  lea rdx, aThreadProvider_0; "thread provider convergence"
/*1404afc70*/  call checkpoint_after_committed_write
/*1404afc75*/  nop
/*1404afc76*/  mov r12, [rbp+750h+var_388]
/*1404afc7d*/  test r12, r12
/*1404afc80*/  jz loc_1404AFDDF
/*1404afc86*/  mov rax, cs:off_141EC8D80
/*1404afc8d*/  mov rax, [rax]
/*1404afc90*/  cmp rax, 3
/*1404afc94*/  jb loc_1404AFDE2
/*1404afc9a*/  mov qword ptr [rbp+750h+var_310], rdi
/*1404afca1*/  mov qword ptr [rbp+750h+var_310+8], rbx
/*1404afca8*/  lea rax, [rbp+750h+var_310]
/*1404afcaf*/  mov qword ptr [rbp+750h+var_270], rax
/*1404afcb6*/  lea rax, sub_14148F3A0
/*1404afcbd*/  mov qword ptr [rbp+750h+var_270+8], rax
/*1404afcc4*/  lea rax, [rbp+750h+var_320]
/*1404afccb*/  mov qword ptr [rbp+750h+var_260], rax
/*1404afcd2*/  lea rax, sub_14041F680
/*1404afcd9*/  mov qword ptr [rbp+750h+var_260+8], rax
/*1404afce0*/  lea rax, [rbp+750h+var_398]
/*1404afce7*/  mov qword ptr [rbp+750h+var_250], rax
/*1404afcee*/  lea rax, sub_1414AC520
/*1404afcf5*/  mov qword ptr [rbp+750h+var_250+8], rax
/*1404afcfc*/  lea rcx, [rbp+750h+var_388]
/*1404afd03*/  mov qword ptr [rbp+750h+var_240], rcx
/*1404afd0a*/  mov qword ptr [rbp+750h+var_240+8], rax
/*1404afd11*/  lea rcx, [rbp+750h+var_380]
/*1404afd18*/  mov qword ptr [rbp+750h+var_230], rcx
/*1404afd1f*/  mov qword ptr [rbp+750h+var_230+8], rax
/*1404afd26*/  lea rcx, [rbp+750h+var_378]
/*1404afd2d*/  mov qword ptr [rbp+750h+var_220], rcx
/*1404afd34*/  mov qword ptr [rbp+750h+var_220+8], rax
/*1404afd3b*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404afd42*/  mov qword ptr [rbp+750h+var_190], rax
/*1404afd49*/  mov qword ptr [rbp+750h+var_190+8], 33h ; '3'
/*1404afd54*/  mov qword ptr [rbp+750h+var_180], rax
/*1404afd5b*/  mov qword ptr [rbp+750h+var_180+8], 33h ; '3'
/*1404afd66*/  lea rax, off_14175B590; "src\\core\\relay\\codex_thread_visibili"...
/*1404afd6d*/  mov qword ptr [rbp+750h+var_170], rax
/*1404afd74*/  mov r8d, 3
/*1404afd7a*/  lea rcx, unk_14175B53F
/*1404afd81*/  lea rdx, [rbp+750h+var_270]
/*1404afd88*/  lea r9, [rbp+750h+var_190]
/*1404afd8f*/  call sub_140985BA0
/*1404afd94*/  nop
/*1404afd95*/  mov r12, [rbp+750h+var_388]
/*1404afd9c*/  jmp short loc_1404AFDE2
loc_1404AFD9E: /*1404afd9e*/ mov r12, [rbp+750h+var_D0]
/*1404afda5*/  mov r14, [rbp+750h+var_C8]
/*1404afdac*/  jmp loc_1404AED7C
loc_1404AFDB1: /*1404afdb1*/ mov rax, [rbp+750h+var_350]
/*1404afdb8*/  mov qword ptr [rbp+750h+var_4D0], rax
/*1404afdbf*/  movdqa xmm0, [rbp+750h+var_360]
/*1404afdc7*/  movdqa [rbp+750h+var_4E0], xmm0
/*1404afdcf*/  mov qword ptr [rbp+750h+var_4D0+8], 0FFFFFFFFFFFFFFFFh
/*1404afdda*/  jmp loc_1404AEE10
loc_1404AFDDF: /*1404afddf*/ xor r12d, r12d
loc_1404AFDE2: /*1404afde2*/ mov rax, qword ptr [rbp+750h+var_3B0]
/*1404afde9*/  mov [rbp+750h+var_100], rax
/*1404afdf0*/  mov rax, qword ptr [rbp+750h+var_3B0+8]
/*1404afdf7*/  mov [rbp+750h+var_D8], rax
/*1404afdfe*/  movdqu xmm9, [rbp+750h+var_398]
/*1404afe07*/  mov rdi, [rbp+750h+var_380]
/*1404afe0e*/  mov r15, [rbp+750h+var_378]
/*1404afe15*/  mov [rbp+750h+var_9A], 0
loc_1404AFE1C: /*1404afe1c*/ lea rcx, [rbp+750h+var_560]
/*1404afe23*/  call sub_14043B5A0
/*1404afe28*/  nop
/*1404afe29*/  mov [rbp+750h+var_99], 0
loc_1404AFE30: /*1404afe30*/ lea rcx, [rbp+750h+var_3D0]
/*1404afe37*/  call sub_14043B460
/*1404afe3c*/  nop
/*1404afe3d*/  lea rcx, [rbp+750h+var_668]
/*1404afe44*/  call sub_14043B4F0
/*1404afe49*/  nop
loc_1404AFE4A: /*1404afe4a*/ lea rcx, [rbp+750h+var_650]
/*1404afe51*/  call sub_14043C900
/*1404afe56*/  nop
/*1404afe57*/  lea r13, sub_1400015F0
/*1404afe5e*/  movq xmm0, rdi
/*1404afe63*/  movq xmm10, r12
/*1404afe68*/  punpcklqdq xmm10, xmm0
/*1404afe6d*/  mov r14, [rbp+750h+var_348]
/*1404afe74*/  mov r12, [rbp+750h+var_198]
/*1404afe7b*/  mov rcx, [rbp+750h+var_D8]
/*1404afe82*/  jmp loc_1404AE5E0
loc_1404AFE87: /*1404afe87*/ movdqu xmm0, [rbp+750h+var_4E0]
/*1404afe8f*/  movups xmm1, [rbp+750h+var_4D0]
/*1404afe96*/  movups xmm2, [rbp+750h+var_4C0]
/*1404afe9d*/  movups xmm3, [rbp+750h+var_4B0]
/*1404afea4*/  movaps [rbp+750h+var_2E0], xmm3
/*1404afeab*/  movaps [rbp+750h+var_2F0], xmm2
/*1404afeb2*/  movaps [rbp+750h+var_300], xmm1
/*1404afeb9*/  movdqa [rbp+750h+var_310], xmm0
/*1404afec1*/  mov r14, qword ptr [rbp+750h+var_560+8]
/*1404afec8*/  mov rax, [rbp+750h+var_340]
/*1404afecf*/  mov qword ptr [rbp+750h+var_450], rax
/*1404afed6*/  mov qword ptr [rbp+750h+var_450+8], r13
/*1404afedd*/  lea rax, [rbp+750h+var_310]
/*1404afee4*/  mov qword ptr [rbp+750h+var_440], rax
/*1404afeeb*/  lea rax, sub_140FB8910
/*1404afef2*/  mov qword ptr [rbp+750h+var_440+8], rax
loc_1404AFEF9: /*1404afef9*/ lea rcx, [rbp+750h+var_6E8]
/*1404afefd*/  lea rdx, unk_14175B5DA
/*1404aff04*/  lea r8, [rbp+750h+var_450]
/*1404aff0b*/  call sub_14149C0F0
/*1404aff10*/  nop
/*1404aff11*/  mov rax, [rbp+750h+var_6D8]
/*1404aff15*/  lea rcx, [rbp+750h+var_208+1]
/*1404aff1c*/  mov [rcx-51h], rax
/*1404aff20*/  movdqu xmm0, [rbp+750h+var_6E8]
/*1404aff25*/  movdqu xmmword ptr [rcx-61h], xmm0
/*1404aff2a*/  mov qword ptr [rbp+750h+var_270], 0Ah
/*1404aff35*/  lea rcx, [rbp+750h+var_190]
/*1404aff3c*/  mov rdx, r14
/*1404aff3f*/  mov r8, [rbp+750h+var_D0]
/*1404aff46*/  lea r9, [rbp+750h+var_270]
/*1404aff4d*/  call sub_1404BFEF0
/*1404aff52*/  nop
/*1404aff53*/  mov r12, qword ptr [rbp+750h+var_190]
/*1404aff5a*/  mov rax, qword ptr [rbp+750h+var_190+8]
/*1404aff61*/  mov [rbp+750h+var_E0], rax
/*1404aff68*/  mov rdi, qword ptr [rbp+750h+var_180]
/*1404aff6f*/  mov rbx, qword ptr [rbp+750h+var_180+8]
/*1404aff76*/  movdqu xmm9, [rbp+750h+var_170]
/*1404aff7f*/  movdqu xmm10, [rbp+750h+var_160]
/*1404aff88*/  mov r15, qword ptr [rbp+750h+var_150]
/*1404aff8f*/  lea rax, [rbp+750h+var_190+8]
/*1404aff96*/  movdqu xmm0, xmmword ptr [rax+40h]
/*1404aff9b*/  movdqa [rbp+750h+var_290], xmm0
/*1404affa3*/  mov rax, [rax+50h]
/*1404affa7*/  mov [rbp+750h+var_280], rax
loc_1404AFFAE: /*1404affae*/ lea rcx, [rbp+750h+var_310]
/*1404affb5*/  call sub_14043D020
/*1404affba*/  nop
/*1404affbb*/  jmp loc_1404B0091
loc_1404AFFC0: /*1404affc0*/ mov r14, qword ptr [rbp+750h+var_560+8]
/*1404affc7*/  mov rax, [rbp+750h+var_340]
/*1404affce*/  mov qword ptr [rbp+750h+var_310], rax
/*1404affd5*/  mov qword ptr [rbp+750h+var_310+8], r13
/*1404affdc*/  lea rcx, [rbp+750h+var_700]
/*1404affe0*/  lea rdx, unk_14175B5A8
/*1404affe7*/  lea r8, [rbp+750h+var_310]
/*1404affee*/  call sub_14149C0F0
/*1404afff3*/  nop
/*1404afff4*/  mov rax, [rbp+750h+var_6F0]
/*1404afff8*/  lea rcx, [rbp+750h+var_208+1]
/*1404affff*/  mov [rcx-51h], rax
/*1404b0003*/  movdqu xmm0, [rbp+750h+var_700]
/*1404b0008*/  movdqu xmmword ptr [rcx-61h], xmm0
/*1404b000d*/  mov qword ptr [rbp+750h+var_270], 0Ah
/*1404b0018*/  lea rcx, [rbp+750h+var_190]
/*1404b001f*/  mov rdx, r14
/*1404b0022*/  mov r8, [rbp+750h+var_D0]
/*1404b0029*/  lea r9, [rbp+750h+var_270]
/*1404b0030*/  call sub_1404BFEF0
/*1404b0035*/  nop
/*1404b0036*/  mov r12, qword ptr [rbp+750h+var_190]
/*1404b003d*/  mov rax, qword ptr [rbp+750h+var_190+8]
/*1404b0044*/  mov [rbp+750h+var_E0], rax
/*1404b004b*/  mov rdi, qword ptr [rbp+750h+var_180]
/*1404b0052*/  mov rbx, qword ptr [rbp+750h+var_180+8]
/*1404b0059*/  movdqu xmm9, [rbp+750h+var_170]
/*1404b0062*/  movdqu xmm10, [rbp+750h+var_160]
/*1404b006b*/  mov r15, qword ptr [rbp+750h+var_150]
/*1404b0072*/  lea rax, [rbp+750h+var_190+8]
/*1404b0079*/  movdqu xmm0, xmmword ptr [rax+40h]
/*1404b007e*/  movdqa [rbp+750h+var_290], xmm0
/*1404b0086*/  mov rax, [rax+50h]
/*1404b008a*/  mov [rbp+750h+var_280], rax
loc_1404B0091: /*1404b0091*/ lea rcx, [rbp+750h+var_650]
/*1404b0098*/  call sub_14043CC20
/*1404b009d*/  nop
/*1404b009e*/  lea r13, sub_1400015F0
loc_1404B00A5: /*1404b00a5*/ mov [rbp+750h+var_C8], r14
/*1404b00ac*/  mov rcx, r14
/*1404b00af*/  mov [rbp+750h+var_E8], 0
loc_1404B00BA: /*1404b00ba*/ mov rax, [rbp+750h+var_E8]
/*1404b00c1*/  cmp [rbp+750h+var_D0], rax
/*1404b00c8*/  jz short loc_1404B00E6
/*1404b00ca*/  inc rax
/*1404b00cd*/  mov [rbp+750h+var_E8], rax
/*1404b00d4*/  lea r14, [rcx+80h]
loc_1404B00DB: /*1404b00db*/ call sub_1402C7EE0
/*1404b00e0*/  nop
/*1404b00e1*/  mov rcx, r14
/*1404b00e4*/  jmp short loc_1404B00BA
loc_1404B00E6: /*1404b00e6*/ mov rdx, qword ptr [rbp+750h+var_560]
/*1404b00ed*/  test rdx, rdx
/*1404b00f0*/  jz short loc_1404B0109
/*1404b00f2*/  shl rdx, 7
/*1404b00f6*/  mov r8d, 8
/*1404b00fc*/  mov rcx, [rbp+750h+var_C8]
/*1404b0103*/  call sub_140001660
/*1404b0108*/  nop
loc_1404B0109: /*1404b0109*/ lea rcx, [rbp+750h+var_3D0]
/*1404b0110*/  call sub_140335300
/*1404b0115*/  nop
/*1404b0116*/  mov rax, qword ptr [rbp+750h+var_3D0]
/*1404b011d*/  test rax, rax
/*1404b0120*/  jz loc_1404AE84E
/*1404b0126*/  mov rcx, qword ptr [rbp+750h+var_3D0+8]
/*1404b012d*/  imul rdx, rax, 0C8h
/*1404b0134*/  mov r8d, 8
/*1404b013a*/  call sub_140001660
/*1404b013f*/  jmp loc_1404AE84E
loc_1404B0144: /*1404b0144*/ mov [rbp+750h+var_99], 1
loc_1404B014B: /*1404b014b*/ mov r15, rax
/*1404b014e*/  call sub_141486EF0
/*1404b0153*/  nop
/*1404b0154*/  mov rcx, rax
/*1404b0157*/  mov rax, r15
/*1404b015a*/  mov [r15], rcx
/*1404b015d*/  mov [r15+8], rdx
/*1404b0161*/  mov byte ptr [r15+10h], 1
/*1404b0166*/  jmp loc_1404AE90C
loc_1404B016B: /*1404b016b*/ xor ecx, ecx
loc_1404B016D: /*1404b016d*/ mov rdx, [rbp+750h+var_198]
/*1404b0174*/  call sub_1416C2D4B
/*1404b017a*/  jmp loc_1404B0929
loc_1404B017F: /*1404b017f*/ mov r14, [rbp+750h+var_3D8]
/*1404b0186*/  cmp r14, 1
/*1404b018a*/  jbe loc_1404B0838
/*1404b0190*/  lea rdi, [rbp+750h+var_270]
/*1404b0197*/  mov r9d, 6
/*1404b019d*/  mov rcx, rdi
/*1404b01a0*/  mov rdx, [rbp+750h+var_5D8]
/*1404b01a7*/  mov r8, [rbp+750h+var_468]
/*1404b01ae*/  call sub_1404C22C0
/*1404b01b3*/  nop
/*1404b01b4*/  cmp qword ptr [rbp+750h+var_220], 0
/*1404b01bc*/  jnz short loc_1404B01EA
/*1404b01be*/  cmp qword ptr [rbp+750h+var_220+8], 0
/*1404b01c6*/  jnz short loc_1404B01EA
/*1404b01c8*/  cmp [rbp+750h+var_210], 0
/*1404b01d0*/  jnz short loc_1404B01EA
/*1404b01d2*/  cmp [rbp+750h+var_208], 0
/*1404b01da*/  jnz short loc_1404B01EA
/*1404b01dc*/  cmp qword ptr [rbp+750h+var_250+8], 0
/*1404b01e4*/  jz loc_1404B082C
loc_1404B01EA: /*1404b01ea*/ call nullsub_1
/*1404b01ef*/  mov ecx, 18h
/*1404b01f4*/  mov edx, 8
/*1404b01f9*/  call sub_140001650
/*1404b01fe*/  mov [rbp+750h+var_198], rax
/*1404b0205*/  test rax, rax
/*1404b0208*/  jz loc_1404B08E8
/*1404b020e*/  mov qword ptr [rbp+750h+var_190], rdi
/*1404b0215*/  mov qword ptr [rbp+750h+var_190+8], r13
loc_1404B021C: /*1404b021c*/ lea rdx, unk_14175C0CB
/*1404b0223*/  lea rcx, [rbp+750h+var_500]
/*1404b022a*/  lea r8, [rbp+750h+var_190]
/*1404b0231*/  call sub_14149C0F0
/*1404b0236*/  nop
/*1404b0237*/  mov rax, [rbp+750h+var_4F0]
/*1404b023e*/  mov rcx, [rbp+750h+var_198]
/*1404b0245*/  mov [rcx+10h], rax
/*1404b0249*/  movdqu xmm0, [rbp+750h+var_500]
/*1404b0251*/  movdqu xmmword ptr [rcx], xmm0
/*1404b0255*/  mov qword ptr [rbp+750h+var_C0], 1
/*1404b0260*/  mov qword ptr [rbp+750h+var_C0+8], rcx
/*1404b0267*/  mov [rbp+750h+var_B0], 1
/*1404b0272*/  cmp qword ptr [rbp+750h+var_220], 0
/*1404b027a*/  jz loc_1404B0359
/*1404b0280*/  lea rax, [rbp+750h+var_220]
/*1404b0287*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b028e*/  lea rax, sub_1414AC520
/*1404b0295*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404B029C: /*1404b029c*/ lea rdx, unk_14175C0D5
/*1404b02a3*/  lea rcx, [rbp+750h+var_3B0]
/*1404b02aa*/  lea r8, [rbp+750h+var_190]
/*1404b02b1*/  call sub_14149C0F0
/*1404b02b6*/  nop
/*1404b02b7*/  mov rdi, [rbp+750h+var_B0]
/*1404b02be*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b02c5*/  jnz short loc_1404B02D4
loc_1404B02C7: /*1404b02c7*/ lea rcx, [rbp+750h+var_C0]
/*1404b02ce*/  call sub_141689AB0
/*1404b02d3*/  nop
loc_1404B02D4: /*1404b02d4*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b02db*/  lea rcx, [rdi+rdi*2]
/*1404b02df*/  mov rdx, [rbp+750h+var_3A0]
/*1404b02e6*/  mov [rax+rcx*8+10h], rdx
/*1404b02eb*/  movdqu xmm0, [rbp+750h+var_3B0]
/*1404b02f3*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b02f8*/  inc rdi
/*1404b02fb*/  mov [rbp+750h+var_B0], rdi
/*1404b0302*/  jmp short loc_1404B035E
loc_1404B0304: /*1404b0304*/ xor ecx, ecx
loc_1404B0306: /*1404b0306*/ mov rdx, [rbp+750h+var_458]
/*1404b030d*/  call sub_1416C2D4B
/*1404b0313*/  jmp loc_1404B0929
loc_1404B0318: /*1404b0318*/ mov rax, [rbp+750h+var_280]
/*1404b031f*/  mov [rsi+58h], rax
/*1404b0323*/  movaps xmm0, [rbp+750h+var_290]
/*1404b032a*/  movups xmmword ptr [rsi+48h], xmm0
/*1404b032e*/  movdqu xmmword ptr [rsi+20h], xmm9
/*1404b0334*/  movdqu xmmword ptr [rsi+30h], xmm10
/*1404b033a*/  mov [rsi+40h], r15
/*1404b033e*/  mov [rsi], r12
/*1404b0341*/  mov rax, [rbp+750h+var_100]
/*1404b0348*/  mov [rsi+8], rax
/*1404b034c*/  mov [rsi+10h], rdi
/*1404b0350*/  mov [rsi+18h], rbx
/*1404b0354*/  jmp loc_1404B07B1
loc_1404B0359: /*1404b0359*/ mov edi, 1
loc_1404B035E: /*1404b035e*/ cmp qword ptr [rbp+750h+var_220+8], 0
/*1404b0366*/  jz loc_1404B03EE
/*1404b036c*/  lea rax, [rbp+750h+var_220+8]
/*1404b0373*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b037a*/  lea rax, sub_1414AC520
/*1404b0381*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404B0388: /*1404b0388*/ lea rdx, unk_14175C0E6
/*1404b038f*/  lea rcx, [rbp+750h+var_560]
/*1404b0396*/  lea r8, [rbp+750h+var_190]
/*1404b039d*/  call sub_14149C0F0
/*1404b03a2*/  nop
/*1404b03a3*/  mov rdi, [rbp+750h+var_B0]
/*1404b03aa*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b03b1*/  jnz short loc_1404B03C0
loc_1404B03B3: /*1404b03b3*/ lea rcx, [rbp+750h+var_C0]
/*1404b03ba*/  call sub_141689AB0
/*1404b03bf*/  nop
loc_1404B03C0: /*1404b03c0*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b03c7*/  lea rcx, [rdi+rdi*2]
/*1404b03cb*/  mov rdx, qword ptr [rbp+750h+var_550]
/*1404b03d2*/  mov [rax+rcx*8+10h], rdx
/*1404b03d7*/  movdqu xmm0, [rbp+750h+var_560]
/*1404b03df*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b03e4*/  inc rdi
/*1404b03e7*/  mov [rbp+750h+var_B0], rdi
loc_1404B03EE: /*1404b03ee*/ cmp [rbp+750h+var_210], 0
/*1404b03f6*/  jz loc_1404B047E
/*1404b03fc*/  lea rax, [rbp+750h+var_210]
/*1404b0403*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b040a*/  lea rax, sub_1414AC520
/*1404b0411*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404B0418: /*1404b0418*/ lea rdx, unk_14175C0FC
/*1404b041f*/  lea rcx, [rbp+750h+var_5C0]
/*1404b0426*/  lea r8, [rbp+750h+var_190]
/*1404b042d*/  call sub_14149C0F0
/*1404b0432*/  nop
/*1404b0433*/  mov rdi, [rbp+750h+var_B0]
/*1404b043a*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b0441*/  jnz short loc_1404B0450
loc_1404B0443: /*1404b0443*/ lea rcx, [rbp+750h+var_C0]
/*1404b044a*/  call sub_141689AB0
/*1404b044f*/  nop
loc_1404B0450: /*1404b0450*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b0457*/  lea rcx, [rdi+rdi*2]
/*1404b045b*/  mov rdx, qword ptr [rbp+750h+var_5B0]
/*1404b0462*/  mov [rax+rcx*8+10h], rdx
/*1404b0467*/  movdqu xmm0, [rbp+750h+var_5C0]
/*1404b046f*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b0474*/  inc rdi
/*1404b0477*/  mov [rbp+750h+var_B0], rdi
loc_1404B047E: /*1404b047e*/ cmp [rbp+750h+var_208], 0
/*1404b0486*/  jz loc_1404B050E
/*1404b048c*/  lea rax, [rbp+750h+var_208]
/*1404b0493*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b049a*/  lea rax, sub_1414AC520
/*1404b04a1*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404B04A8: /*1404b04a8*/ lea rdx, unk_14175C110
/*1404b04af*/  lea rcx, [rbp+750h+var_450]
/*1404b04b6*/  lea r8, [rbp+750h+var_190]
/*1404b04bd*/  call sub_14149C0F0
/*1404b04c2*/  nop
/*1404b04c3*/  mov rdi, [rbp+750h+var_B0]
/*1404b04ca*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b04d1*/  jnz short loc_1404B04E0
loc_1404B04D3: /*1404b04d3*/ lea rcx, [rbp+750h+var_C0]
/*1404b04da*/  call sub_141689AB0
/*1404b04df*/  nop
loc_1404B04E0: /*1404b04e0*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b04e7*/  lea rcx, [rdi+rdi*2]
/*1404b04eb*/  mov rdx, qword ptr [rbp+750h+var_440]
/*1404b04f2*/  mov [rax+rcx*8+10h], rdx
/*1404b04f7*/  movdqu xmm0, [rbp+750h+var_450]
/*1404b04ff*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b0504*/  inc rdi
/*1404b0507*/  mov [rbp+750h+var_B0], rdi
loc_1404B050E: /*1404b050e*/ mov rax, qword ptr [rbp+750h+var_250+8]
/*1404b0515*/  test rax, rax
/*1404b0518*/  jz loc_1404B05A7
/*1404b051e*/  mov qword ptr [rbp+750h+var_310], rax
/*1404b0525*/  lea rax, [rbp+750h+var_310]
/*1404b052c*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b0533*/  lea rax, sub_1414AC520
/*1404b053a*/  mov qword ptr [rbp+750h+var_190+8], rax
loc_1404B0541: /*1404b0541*/ lea rdx, unk_14175C127
/*1404b0548*/  lea rcx, [rbp+750h+var_650]
/*1404b054f*/  lea r8, [rbp+750h+var_190]
/*1404b0556*/  call sub_14149C0F0
/*1404b055b*/  nop
/*1404b055c*/  mov rdi, [rbp+750h+var_B0]
/*1404b0563*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b056a*/  jnz short loc_1404B0579
loc_1404B056C: /*1404b056c*/ lea rcx, [rbp+750h+var_C0]
/*1404b0573*/  call sub_141689AB0
/*1404b0578*/  nop
loc_1404B0579: /*1404b0579*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b0580*/  lea rcx, [rdi+rdi*2]
/*1404b0584*/  mov rdx, qword ptr [rbp+750h+var_640]
/*1404b058b*/  mov [rax+rcx*8+10h], rdx
/*1404b0590*/  movdqu xmm0, [rbp+750h+var_650]
/*1404b0598*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b059d*/  inc rdi
/*1404b05a0*/  mov [rbp+750h+var_B0], rdi
loc_1404B05A7: /*1404b05a7*/ mov r8, qword ptr [rbp+750h+var_230]
/*1404b05ae*/  test r8, r8
/*1404b05b1*/  jz loc_1404B0692
/*1404b05b7*/  mov rdx, qword ptr [rbp+750h+var_240+8]
loc_1404B05BE: /*1404b05be*/ mov [rsp+7D0h+var_7B0], 3
/*1404b05c7*/  lea r9, unk_141759861
/*1404b05ce*/  lea rcx, [rbp+750h+var_190]
/*1404b05d5*/  call sub_140440300
/*1404b05da*/  nop
/*1404b05db*/  mov rax, qword ptr [rbp+750h+var_180]
/*1404b05e2*/  mov qword ptr [rbp+750h+var_300], rax
/*1404b05e9*/  movdqu xmm0, [rbp+750h+var_190]
/*1404b05f1*/  movdqa [rbp+750h+var_310], xmm0
/*1404b05f9*/  lea rax, [rbp+750h+var_310]
/*1404b0600*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b0607*/  mov qword ptr [rbp+750h+var_190+8], r13
loc_1404B060E: /*1404b060e*/ lea rdx, unk_14175C136
/*1404b0615*/  lea rcx, [rbp+750h+var_4E0]
/*1404b061c*/  lea r8, [rbp+750h+var_190]
/*1404b0623*/  call sub_14149C0F0
/*1404b0628*/  nop
/*1404b0629*/  mov rdx, qword ptr [rbp+750h+var_310]
/*1404b0630*/  test rdx, rdx
/*1404b0633*/  jz short loc_1404B0647
/*1404b0635*/  mov rcx, qword ptr [rbp+750h+var_310+8]
/*1404b063c*/  mov r8d, 1
/*1404b0642*/  call sub_140001660
loc_1404B0647: /*1404b0647*/ mov rdi, [rbp+750h+var_B0]
/*1404b064e*/  cmp rdi, qword ptr [rbp+750h+var_C0]
/*1404b0655*/  jnz short loc_1404B0664
loc_1404B0657: /*1404b0657*/ lea rcx, [rbp+750h+var_C0]
/*1404b065e*/  call sub_141689AB0
/*1404b0663*/  nop
loc_1404B0664: /*1404b0664*/ mov rax, qword ptr [rbp+750h+var_C0+8]
/*1404b066b*/  lea rcx, [rdi+rdi*2]
/*1404b066f*/  mov rdx, qword ptr [rbp+750h+var_4D0]
/*1404b0676*/  mov [rax+rcx*8+10h], rdx
/*1404b067b*/  movdqu xmm0, [rbp+750h+var_4E0]
/*1404b0683*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*1404b0688*/  inc rdi
/*1404b068b*/  mov [rbp+750h+var_B0], rdi
loc_1404B0692: /*1404b0692*/ mov rdx, qword ptr [rbp+750h+var_C0+8]
loc_1404B0699: /*1404b0699*/ mov [rsp+7D0h+var_7B0], 2
/*1404b06a2*/  lea r9, unk_14175C142
/*1404b06a9*/  lea rcx, [rbp+750h+var_190]
/*1404b06b0*/  mov r8, rdi
/*1404b06b3*/  call sub_140440300
/*1404b06b8*/  nop
/*1404b06b9*/  mov rax, qword ptr [rbp+750h+var_180]
/*1404b06c0*/  mov qword ptr [rbp+750h+var_300], rax
/*1404b06c7*/  movdqu xmm0, [rbp+750h+var_190]
/*1404b06cf*/  movdqa [rbp+750h+var_310], xmm0
/*1404b06d7*/  mov rdi, [rbp+750h+var_B0]
/*1404b06de*/  test rdi, rdi
/*1404b06e1*/  jz short loc_1404B0712
/*1404b06e3*/  mov rbx, qword ptr [rbp+750h+var_C0+8]
/*1404b06ea*/  add rbx, 8
/*1404b06ee*/  jmp short loc_1404B06F9
loc_1404B06F0: /*1404b06f0*/ add rbx, 18h
/*1404b06f4*/  dec rdi
/*1404b06f7*/  jz short loc_1404B0712
loc_1404B06F9: /*1404b06f9*/ mov rdx, [rbx-8]
/*1404b06fd*/  test rdx, rdx
/*1404b0700*/  jz short loc_1404B06F0
/*1404b0702*/  mov rcx, [rbx]
/*1404b0705*/  mov r8d, 1
/*1404b070b*/  call sub_140001660
/*1404b0710*/  jmp short loc_1404B06F0
loc_1404B0712: /*1404b0712*/ mov rax, qword ptr [rbp+750h+var_C0]
/*1404b0719*/  test rax, rax
/*1404b071c*/  jz short loc_1404B0738
/*1404b071e*/  mov rcx, qword ptr [rbp+750h+var_C0+8]
/*1404b0725*/  shl rax, 3
/*1404b0729*/  lea rdx, [rax+rax*2]
/*1404b072d*/  mov r8d, 8
/*1404b0733*/  call sub_140001660
loc_1404B0738: /*1404b0738*/ lea rax, [rbp+750h+var_310]
/*1404b073f*/  mov qword ptr [rbp+750h+var_190], rax
/*1404b0746*/  mov qword ptr [rbp+750h+var_190+8], r13
loc_1404B074D: /*1404b074d*/ lea rdx, unk_14175BCB4
/*1404b0754*/  lea rcx, [rbp+750h+var_6B8]
/*1404b075b*/  lea r8, [rbp+750h+var_190]
/*1404b0762*/  call sub_14149C0F0
/*1404b0767*/  nop
/*1404b0768*/  mov rdx, qword ptr [rbp+750h+var_310]
/*1404b076f*/  test rdx, rdx
/*1404b0772*/  jz short loc_1404B0786
/*1404b0774*/  mov rcx, qword ptr [rbp+750h+var_310+8]
/*1404b077b*/  mov r8d, 1
/*1404b0781*/  call sub_140001660
loc_1404B0786: /*1404b0786*/ mov rax, [rbp+750h+var_6A8]
/*1404b078d*/  mov [rsi+18h], rax
/*1404b0791*/  movdqu xmm0, [rbp+750h+var_6B8]
/*1404b0799*/  movdqu xmmword ptr [rsi+8], xmm0
/*1404b079e*/  mov qword ptr [rsi], 0Ah
/*1404b07a5*/  lea rcx, [rbp+750h+var_270]
/*1404b07ac*/  call sub_14043F590
loc_1404B07B1: /*1404b07b1*/ mov rdi, [rbp+750h+var_3E0]
/*1404b07b8*/  mov rbx, [rbp+750h+var_3D8]
/*1404b07bf*/  test rbx, rbx
/*1404b07c2*/  jz short loc_1404B07F2
/*1404b07c4*/  lea r14, [rdi+8]
/*1404b07c8*/  jmp short loc_1404B07D9
loc_1404B07D0: /*1404b07d0*/ add r14, 20h ; ' '
/*1404b07d4*/  dec rbx
/*1404b07d7*/  jz short loc_1404B07F2
loc_1404B07D9: /*1404b07d9*/ mov rdx, [r14-8]
/*1404b07dd*/  test rdx, rdx
/*1404b07e0*/  jz short loc_1404B07D0
/*1404b07e2*/  mov rcx, [r14]
/*1404b07e5*/  mov r8d, 1
/*1404b07eb*/  call sub_140001660
/*1404b07f0*/  jmp short loc_1404B07D0
loc_1404B07F2: /*1404b07f2*/ mov rdx, [rbp+750h+var_3E8]
/*1404b07f9*/  test rdx, rdx
/*1404b07fc*/  jz short loc_1404B0810
/*1404b07fe*/  shl rdx, 5
/*1404b0802*/  mov r8d, 8
/*1404b0808*/  mov rcx, rdi
/*1404b080b*/  call sub_140001660
loc_1404B0810: /*1404b0810*/ mov edx, 6
/*1404b0815*/  mov r8d, 1
/*1404b081b*/  mov rcx, [rbp+750h+var_370]
/*1404b0822*/  call sub_140001660
/*1404b0827*/  jmp loc_1404ADEFC
loc_1404B082C: /*1404b082c*/ lea rcx, [rbp+750h+var_270]
/*1404b0833*/  call sub_14043F590
loc_1404B0838: /*1404b0838*/ mov qword ptr [rsi+8], 6
/*1404b0840*/  mov rax, [rbp+750h+var_370]
/*1404b0847*/  mov [rsi+10h], rax
/*1404b084b*/  mov qword ptr [rsi+18h], 6
/*1404b0853*/  movdqu xmmword ptr [rsi+20h], xmm7
/*1404b0858*/  movdqu xmmword ptr [rsi+30h], xmm8
/*1404b085e*/  mov rax, [rbp+750h+var_460]
/*1404b0865*/  mov [rsi+40h], rax
/*1404b0869*/  mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
/*1404b0870*/  mov rdi, [rbp+750h+var_3E0]
/*1404b0877*/  test r14, r14
/*1404b087a*/  jz short loc_1404B08B4
/*1404b087c*/  shl r14, 5
/*1404b0880*/  xor ebx, ebx
/*1404b0882*/  jmp short loc_1404B0899
loc_1404B0890: /*1404b0890*/ add rbx, 20h ; ' '
/*1404b0894*/  cmp r14, rbx
/*1404b0897*/  jz short loc_1404B08B4
loc_1404B0899: /*1404b0899*/ mov rdx, [rdi+rbx]
/*1404b089d*/  test rdx, rdx
/*1404b08a0*/  jz short loc_1404B0890
/*1404b08a2*/  mov rcx, [rdi+rbx+8]
/*1404b08a7*/  mov r8d, 1
/*1404b08ad*/  call sub_140001660
/*1404b08b2*/  jmp short loc_1404B0890
loc_1404B08B4: /*1404b08b4*/ mov rdx, [rbp+750h+var_3E8]
/*1404b08bb*/  test rdx, rdx
/*1404b08be*/  jz loc_1404ADEFC
/*1404b08c4*/  shl rdx, 5
/*1404b08c8*/  mov r8d, 8
/*1404b08ce*/  mov rcx, rdi
/*1404b08d1*/  call sub_140001660
/*1404b08d6*/  jmp loc_1404ADEFC
loc_1404B08DB: /*1404b08db*/ xor ecx, ecx
loc_1404B08DD: /*1404b08dd*/ mov rdx, r15
/*1404b08e0*/  call sub_1416C2D4B
/*1404b08e6*/  jmp short loc_1404B0929
loc_1404B08E8: /*1404b08e8*/ mov ecx, 8
/*1404b08ed*/  mov edx, 18h
/*1404b08f2*/  call sub_1416C2D31
loc_1404B08F8: /*1404b08f8*/ jmp short loc_1404B0929
loc_1404B08FA: /*1404b08fa*/ mov ecx, 1
/*1404b08ff*/  mov edx, 6
/*1404b0904*/  call sub_1416C2D4B
/*1404b0909*/  ud2
loc_1404B090B: /*1404b090b*/ mov [rbp+750h+var_198], r15
/*1404b0912*/  mov ecx, 1
/*1404b0917*/  jmp loc_1404B016D
loc_1404B091C: /*1404b091c*/ mov rdx, qword ptr [rbp+750h+var_260]
loc_1404B0923: /*1404b0923*/ call sub_1416C2D4B
loc_1404B0929: /*1404b0929*/ ud2
loc_1404B092B: /*1404b092b*/ mov [rbp+750h+var_458], r14
/*1404b0932*/  mov ecx, 1
/*1404b0937*/  jmp loc_1404B0306
