// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1852 fetched=1852 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// 1.2.3 win delta | router_model_restore_2 | changelog ③模型回退 (win-native 锚点逆)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::restore_relay_model_threads | 跨平台字符串签名匹配(名↔函数一致)
__m128i *__fastcall sub_1404A9020(__m128i *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  const __m128i *i; // rdx
  __m128i v9; // xmm0
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const __m128i *v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm7
  unsigned __int64 v19; // rax
  __m128i v20; // xmm8
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  _QWORD *v30; // r13
  __int64 *j; // rax
  __int64 v32; /... [59367 chars total]

// ---- full disassembly reconstruction (1852/1852 instructions) ----
restore_relay_model_threads: /*1404a9020*/ push rbp
/*1404a9021*/  push r15
/*1404a9023*/  push r14
/*1404a9025*/  push r13
/*1404a9027*/  push r12
/*1404a9029*/  push rsi
/*1404a902a*/  push rdi
/*1404a902b*/  push rbx
/*1404a902c*/  sub rsp, 5A8h
/*1404a9033*/  lea rbp, [rsp+80h]
/*1404a903b*/  movdqa [rbp+560h+var_50], xmm8
/*1404a9044*/  movdqa [rbp+560h+var_60], xmm7
/*1404a904c*/  movdqa [rbp+560h+var_70], xmm6
/*1404a9054*/  mov [rbp+560h+var_78], 0FFFFFFFFFFFFFFFEh
/*1404a905f*/  mov r15, rdx
/*1404a9062*/  mov rbx, rcx
/*1404a9065*/  mov rdi, [rdx+308h]
/*1404a906c*/  mov r14, [rdx+310h]
/*1404a9073*/  lea rcx, [rbp+560h+var_410]
/*1404a907a*/  mov rdx, rdi
/*1404a907d*/  mov r8, r14
/*1404a9080*/  call load_model_restore_journal
/*1404a9085*/  mov rsi, [rbp+560h+var_400]
/*1404a908c*/  test rsi, rsi
/*1404a908f*/  jz loc_1404A9266
loc_1404A9095: /*1404a9095*/ lea rcx, [rbp+560h+var_120]
/*1404a909c*/  mov rdx, rdi
/*1404a909f*/  mov r8, r14
/*1404a90a2*/  call sub_1404B8260
/*1404a90a7*/  nop
/*1404a90a8*/  cmp qword ptr [rbp+560h+var_120], 0FFFFFFFFFFFFFFFEh
/*1404a90b0*/  jnz loc_1404A9278
/*1404a90b6*/  movups xmm0, [rbp+560h+var_C8]
/*1404a90bd*/  movaps [rbp+560h+var_160], xmm0
/*1404a90c4*/  movups xmm0, [rbp+560h+var_E0+8]
/*1404a90cb*/  movaps [rbp+560h+var_170], xmm0
/*1404a90d2*/  movdqu xmm0, [rbp+560h+var_120+8]
/*1404a90da*/  movups xmm1, [rbp+560h+var_110+8]
/*1404a90e1*/  movups xmm2, [rbp+560h+var_100+8]
/*1404a90e8*/  movups xmm3, [rbp+560h+var_F0+8]
/*1404a90ef*/  movaps [rbp+560h+var_180], xmm3
/*1404a90f6*/  movaps [rbp+560h+var_190], xmm2
/*1404a90fd*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a9104*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404a910c*/  mov rax, cs:off_141EC8D80
/*1404a9113*/  mov rax, [rax]
/*1404a9116*/  cmp rax, 2
/*1404a911a*/  jb loc_1404A91E2
/*1404a9120*/  lea rax, [rbp+560h+var_1B0]
/*1404a9127*/  mov qword ptr [rbp+560h+var_330], rax
/*1404a912e*/  lea rax, sub_140B036A0
/*1404a9135*/  mov qword ptr [rbp+560h+var_330+8], rax
/*1404a913c*/  mov qword ptr [rbp+560h+var_2D0], 0
/*1404a9147*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404a914e*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404a9155*/  mov qword ptr [rbp+560h+var_2C0], 33h ; '3'
/*1404a9160*/  mov qword ptr [rbp+560h+var_2C0+8], 0
/*1404a916b*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404a9172*/  mov qword ptr [rbp+560h+var_2B0], rcx
/*1404a9179*/  mov qword ptr [rbp+560h+var_2B0+8], 29h ; ')'
/*1404a9184*/  mov qword ptr [rbp+560h+var_2A0], 2
/*1404a918f*/  mov qword ptr [rbp+560h+var_2A0+8], rax
/*1404a9196*/  mov qword ptr [rbp+560h+var_290], 33h ; '3'
/*1404a91a1*/  mov rax, 95400000001h
/*1404a91ab*/  mov qword ptr [rbp+560h+var_290+8], rax
/*1404a91b2*/  lea rax, unk_14175BA5E
/*1404a91b9*/  mov qword ptr [rbp+560h+var_280], rax
/*1404a91c0*/  lea rax, [rbp+560h+var_330]
/*1404a91c7*/  mov qword ptr [rbp+560h+var_280+8], rax
loc_1404A91CE: /*1404a91ce*/ lea rcx, [rbp+560h+var_79]
/*1404a91d5*/  lea rdx, [rbp+560h+var_2D0]
/*1404a91dc*/  call sub_1412C36A0
/*1404a91e1*/  nop
loc_1404A91E2: /*1404a91e2*/ pxor xmm0, xmm0
/*1404a91e6*/  movdqu xmmword ptr [rbx+10h], xmm0
/*1404a91eb*/  movdqu xmmword ptr [rbx], xmm0
loc_1404A91EF: /*1404a91ef*/ lea rcx, [rbp+560h+var_1B0]
/*1404a91f6*/  call sub_14043E650
/*1404a91fb*/  nop
/*1404a91fc*/  mov rdi, [rbp+560h+var_408]
/*1404a9203*/  add rdi, 38h ; '8'
/*1404a9207*/  jmp short loc_1404A921D
loc_1404A9210: /*1404a9210*/ add rdi, 50h ; 'P'
/*1404a9214*/  dec rsi
/*1404a9217*/  jz loc_1404AB862
loc_1404A921D: /*1404a921d*/ mov rdx, [rdi-38h]
/*1404a9221*/  test rdx, rdx
/*1404a9224*/  jz short loc_1404A9235
/*1404a9226*/  mov rcx, [rdi-30h]
/*1404a922a*/  mov r8d, 1
/*1404a9230*/  call sub_140001660
loc_1404A9235: /*1404a9235*/ mov rdx, [rdi-20h]
/*1404a9239*/  test rdx, rdx
/*1404a923c*/  jz short loc_1404A924D
/*1404a923e*/  mov rcx, [rdi-18h]
/*1404a9242*/  mov r8d, 1
/*1404a9248*/  call sub_140001660
loc_1404A924D: /*1404a924d*/ mov rdx, [rdi-8]
/*1404a9251*/  test rdx, rdx
/*1404a9254*/  jz short loc_1404A9210
/*1404a9256*/  mov rcx, [rdi]
/*1404a9259*/  mov r8d, 1
/*1404a925f*/  call sub_140001660
/*1404a9264*/  jmp short loc_1404A9210
loc_1404A9266: /*1404a9266*/ pxor xmm0, xmm0
/*1404a926a*/  movdqu xmmword ptr [rbx+10h], xmm0
/*1404a926f*/  movdqu xmmword ptr [rbx], xmm0
/*1404a9273*/  jmp loc_1404AB862
loc_1404A9278: /*1404a9278*/ mov [rbp+560h+var_338], r15
/*1404a927f*/  mov [rbp+560h+var_430], r14
/*1404a9286*/  mov [rbp+560h+var_438], rdi
/*1404a928d*/  mov [rbp+560h+var_378], rbx
/*1404a9294*/  mov rax, [rbp+560h+var_B0]
/*1404a929b*/  mov [rbp+560h+var_4E0], rax
/*1404a92a2*/  movups xmm0, [rbp+560h+var_C8+8]
/*1404a92a9*/  movaps [rbp+560h+var_4F0], xmm0
/*1404a92ad*/  movups xmm0, xmmword ptr [rbp+560h+var_D0]
/*1404a92b4*/  movaps [rbp+560h+var_500], xmm0
/*1404a92b8*/  movups xmm0, [rbp+560h+var_E0]
/*1404a92bf*/  movaps [rbp+560h+var_510], xmm0
/*1404a92c3*/  movdqu xmm0, [rbp+560h+var_120]
/*1404a92cb*/  movups xmm1, [rbp+560h+var_110]
/*1404a92d2*/  movups xmm2, [rbp+560h+var_100]
/*1404a92d9*/  movups xmm3, [rbp+560h+var_F0]
/*1404a92e0*/  movaps [rbp+560h+var_520], xmm3
/*1404a92e4*/  movaps [rbp+560h+var_530], xmm2
/*1404a92e8*/  movaps [rbp+560h+var_540], xmm1
/*1404a92ec*/  movdqa [rbp+560h+var_550], xmm0
/*1404a92f1*/  pxor xmm0, xmm0
/*1404a92f5*/  movdqa [rbp+560h+var_360], xmm0
/*1404a92fd*/  movdqa [rbp+560h+var_370], xmm0
/*1404a9305*/  mov [rbp+560h+var_350], 0
/*1404a9310*/  mov [rbp+560h+var_348], 8
/*1404a931b*/  mov [rbp+560h+var_340], 0
/*1404a9326*/  mov r14, [rbp+560h+var_408]
/*1404a932d*/  lea rax, [rsi+rsi*4]
/*1404a9331*/  shl rax, 4
/*1404a9335*/  add rax, r14
/*1404a9338*/  mov [rbp+560h+var_A0], rax
/*1404a933f*/  mov [rbp+560h+var_138], 0
/*1404a934a*/  pcmpeqd xmm6, xmm6
/*1404a934e*/  jmp short loc_1404A9365
loc_1404A9350: /*1404a9350*/ mov rax, [rbp+560h+var_348]
/*1404a9357*/  mov [rax+rsi*8], r15
/*1404a935b*/  inc rsi
/*1404a935e*/  mov [rbp+560h+var_340], rsi
loc_1404A9365: /*1404a9365*/ mov r15, r14
/*1404a9368*/  cmp r14, [rbp+560h+var_A0]
/*1404a936f*/  jz loc_1404A957A
/*1404a9375*/  lea r14, [r15+50h]
/*1404a9379*/  lea r12, [r15+18h]
/*1404a937d*/  cmp qword ptr [rbp+560h+var_520], 0
/*1404a9382*/  jz loc_1404A9480
loc_1404A9388: /*1404a9388*/ lea rcx, [rbp+560h+var_520+8]
/*1404a938c*/  mov rdx, r12
/*1404a938f*/  call sub_140378810
/*1404a9394*/  nop
/*1404a9395*/  mov rcx, rax
/*1404a9398*/  shr rcx, 39h
/*1404a939c*/  mov rsi, qword ptr [rbp+560h+var_540+8]
/*1404a93a0*/  mov rdi, qword ptr [rbp+560h+var_530]
/*1404a93a4*/  movd xmm0, ecx
/*1404a93a8*/  punpcklbw xmm0, xmm0
/*1404a93ac*/  pshuflw xmm0, xmm0, 0
/*1404a93b1*/  pshufd xmm7, xmm0, 44h ; 'D'
/*1404a93b6*/  xor edx, edx
loc_1404A93B8: /*1404a93b8*/ and rax, rdi
/*1404a93bb*/  movdqu xmm8, xmmword ptr [rsi+rax]
/*1404a93c1*/  movdqa xmm0, xmm8
/*1404a93c6*/  pcmpeqb xmm0, xmm7
/*1404a93ca*/  pmovmskb ebx, xmm0
/*1404a93ce*/  test ebx, ebx
/*1404a93d0*/  jz short loc_1404A9430
/*1404a93d2*/  mov r13, [r15+28h]
/*1404a93d6*/  mov [rbp+560h+var_130], rax
/*1404a93dd*/  mov [rbp+560h+var_98], rdx
loc_1404A93E4: /*1404a93e4*/ tzcnt ecx, ebx
/*1404a93e8*/  add rcx, rax
/*1404a93eb*/  and rcx, rdi
/*1404a93ee*/  neg rcx
/*1404a93f1*/  lea rax, [rcx+rcx*2]
/*1404a93f5*/  cmp r13, [rsi+rax*8-8]
/*1404a93fa*/  jnz short loc_1404A9414
/*1404a93fc*/  lea rax, [rsi+rax*8]
/*1404a9400*/  mov rdx, [rax-10h]
/*1404a9404*/  mov rcx, [r15+20h]
/*1404a9408*/  mov r8, r13
/*1404a940b*/  call sub_1416847B0
/*1404a9410*/  test eax, eax
/*1404a9412*/  jz short loc_1404A9450
loc_1404A9414: /*1404a9414*/ lea eax, [rbx-1]
/*1404a9417*/  and ax, bx
/*1404a941a*/  mov ebx, eax
/*1404a941c*/  mov rax, [rbp+560h+var_130]
/*1404a9423*/  mov rdx, [rbp+560h+var_98]
/*1404a942a*/  jnz short loc_1404A93E4
/*1404a942c*/  nop dword ptr [rax+00h]
loc_1404A9430: /*1404a9430*/ pcmpeqb xmm8, xmm6
/*1404a9435*/  pmovmskb ecx, xmm8
/*1404a943a*/  test ecx, ecx
/*1404a943c*/  jnz short loc_1404A9480
/*1404a943e*/  add rax, rdx
/*1404a9441*/  add rax, 10h
/*1404a9445*/  add rdx, 10h
/*1404a9449*/  jmp loc_1404A93B8
loc_1404A9450: /*1404a9450*/ mov rsi, [rbp+560h+var_340]
/*1404a9457*/  cmp rsi, [rbp+560h+var_350]
/*1404a945e*/  jnz loc_1404A9350
/*1404a9464*/  lea rcx, [rbp+560h+var_350]
/*1404a946b*/  call sub_141688EE0
/*1404a9470*/  nop
/*1404a9471*/  jmp loc_1404A9350
loc_1404A9480: /*1404a9480*/ mov rcx, [rbp+560h+var_138]
/*1404a9487*/  inc rcx
/*1404a948a*/  mov [rbp+560h+var_138], rcx
/*1404a9491*/  mov qword ptr [rbp+560h+var_370+8], rcx
/*1404a9498*/  mov rax, cs:off_141EC8D80
/*1404a949f*/  mov rax, [rax]
/*1404a94a2*/  cmp rax, 3
/*1404a94a6*/  jb loc_1404A9365
/*1404a94ac*/  mov qword ptr [rbp+560h+var_2D0], r15
/*1404a94b3*/  lea rax, sub_1400015F0
/*1404a94ba*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404a94c1*/  mov qword ptr [rbp+560h+var_2C0], r12
/*1404a94c8*/  mov qword ptr [rbp+560h+var_2C0+8], rax
/*1404a94cf*/  mov qword ptr [rbp+560h+var_120], 0
/*1404a94da*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404a94e1*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404a94e8*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404a94f3*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404a94fe*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404a9505*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404a950c*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404a9517*/  mov qword ptr [rbp+560h+var_F0], 3
/*1404a9522*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404a9529*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404a9534*/  mov rax, 96200000001h
/*1404a953e*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404a9545*/  lea rax, unk_14175B8D6
/*1404a954c*/  mov [rbp+560h+var_D0], rax
/*1404a9553*/  lea rax, [rbp+560h+var_2D0]
/*1404a955a*/  mov qword ptr [rbp+560h+var_C8], rax
/*1404a9561*/  lea rcx, [rbp+560h+var_79]
/*1404a9568*/  lea rdx, [rbp+560h+var_120]
/*1404a956f*/  call sub_1412C36A0
/*1404a9574*/  nop
/*1404a9575*/  jmp loc_1404A9365
loc_1404A957A: /*1404a957a*/ call sub_141470CD0
/*1404a957f*/  nop
/*1404a9580*/  mov rsi, rax
/*1404a9583*/  cmp byte ptr [rax+10h], 1
/*1404a9587*/  jnz loc_1404AB8C4
/*1404a958d*/  mov rax, [rsi]
/*1404a9590*/  mov rdx, [rsi+8]
loc_1404A9594: /*1404a9594*/ lea rcx, [rax+1]
/*1404a9598*/  mov [rsi], rcx
/*1404a959b*/  movups xmm0, cs:xmmword_141757120
/*1404a95a2*/  movaps [rbp+560h+var_3A0], xmm0
/*1404a95a9*/  movdqu xmm0, xmmword ptr cs:off_141757110
/*1404a95b1*/  movdqa [rbp+560h+var_3B0], xmm0
/*1404a95b9*/  mov [rbp+560h+var_390], rax
/*1404a95c0*/  mov [rbp+560h+var_388], rdx
loc_1404A95C7: /*1404a95c7*/ lea r15, [rbp+560h+var_120]
/*1404a95ce*/  mov rcx, r15
/*1404a95d1*/  mov rdx, [rbp+560h+var_338]
/*1404a95d8*/  call sub_140712830
/*1404a95dd*/  nop
/*1404a95de*/  mov rax, qword ptr [rbp+560h+var_120]
/*1404a95e5*/  mov rcx, qword ptr [rbp+560h+var_120+8]
/*1404a95ec*/  mov r14, qword ptr [rbp+560h+var_110]
/*1404a95f3*/  shl r14, 5
/*1404a95f7*/  lea rdx, [rcx+r14]
/*1404a95fb*/  mov [rbp+560h+var_468], rcx
/*1404a9602*/  mov [rbp+560h+var_440], rax
/*1404a9609*/  mov [rbp+560h+var_458], rax
/*1404a9610*/  mov [rbp+560h+var_338], rdx
/*1404a9617*/  mov [rbp+560h+var_450], rdx
/*1404a961e*/  add r14, 0FFFFFFFFFFFFFFE0h
/*1404a9622*/  pcmpeqd xmm6, xmm6
/*1404a9626*/  lea r13, [rcx+28h]
/*1404a962a*/  lea rbx, [rbp+560h+var_260]
/*1404a9631*/  mov [rbp+560h+var_428], rcx
/*1404a9638*/  mov rax, rcx
/*1404a963b*/  jmp short loc_1404A964F
loc_1404A9640: /*1404a9640*/ add r14, 0FFFFFFFFFFFFFFE0h
/*1404a9644*/  add r13, 20h ; ' '
/*1404a9648*/  mov rax, [rbp+560h+var_A0]
loc_1404A964F: /*1404a964f*/ cmp rax, [rbp+560h+var_338]
/*1404a9656*/  jz loc_1404AAC33
/*1404a965c*/  lea rcx, [rax+20h]
/*1404a9660*/  mov [rbp+560h+var_A0], rcx
/*1404a9667*/  mov [rbp+560h+var_460], rcx
/*1404a966e*/  mov rcx, [rax]
/*1404a9671*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1404a9675*/  jz loc_1404AABFA
loc_1404A967B: /*1404a967b*/ mov [rbp+560h+var_138], rcx
/*1404a9682*/  mov rdx, [rax+8]
/*1404a9686*/  mov rsi, [rax+10h]
/*1404a968a*/  mov rcx, r15
/*1404a968d*/  mov [rbp+560h+var_130], rdx
/*1404a9694*/  mov r8, rsi
/*1404a9697*/  call sub_141486710
/*1404a969c*/  nop
/*1404a969d*/  cmp dword ptr [rbp+560h+var_120], 2
/*1404a96a4*/  jnz short loc_1404A96D0
/*1404a96a6*/  mov rax, qword ptr [rbp+560h+var_120+8]
/*1404a96ad*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404a96b4*/  mov qword ptr [rbp+560h+var_2D0], 2
/*1404a96bf*/  jmp short loc_1404A9730
loc_1404A96D0: /*1404a96d0*/ movups xmm0, [rbp+560h+var_120]
/*1404a96d7*/  movups xmm1, [rbp+560h+var_110]
/*1404a96de*/  movups xmm2, [rbp+560h+var_100]
/*1404a96e5*/  movups xmm3, [rbp+560h+var_F0]
/*1404a96ec*/  movaps [rbp+560h+var_2D0], xmm0
/*1404a96f3*/  mov rax, [rbp+560h+var_D0]
/*1404a96fa*/  mov qword ptr [rbp+560h+var_280], rax
/*1404a9701*/  movdqu xmm0, [rbp+560h+var_E0]
/*1404a9709*/  movdqa [rbp+560h+var_290], xmm0
/*1404a9711*/  movaps [rbp+560h+var_2A0], xmm3
/*1404a9718*/  movaps [rbp+560h+var_2B0], xmm2
/*1404a971f*/  movaps [rbp+560h+var_2C0], xmm1
/*1404a9726*/  cmp qword ptr [rbp+560h+var_2D0], 2
/*1404a972e*/  jnz short loc_1404A9770
loc_1404A9730: /*1404a9730*/ lea rcx, [rbp+560h+var_2D0+8]
/*1404a9737*/  call sub_140018650
/*1404a973c*/  nop
loc_1404A973D: /*1404a973d*/ mov rdx, [rbp+560h+var_138]
/*1404a9744*/  test rdx, rdx
/*1404a9747*/  jz loc_1404A9640
/*1404a974d*/  mov r8d, 1
/*1404a9753*/  mov rcx, [rbp+560h+var_130]
/*1404a975a*/  call sub_140001660
/*1404a975f*/  jmp loc_1404A9640
loc_1404A9770: /*1404a9770*/ mov rdi, [rbp+560h+var_340]
/*1404a9777*/  test rdi, rdi
/*1404a977a*/  jz short loc_1404A973D
/*1404a977c*/  mov r12, [rbp+560h+var_348]
/*1404a9783*/  mov rcx, r15
/*1404a9786*/  mov rdx, [rbp+560h+var_130]
/*1404a978d*/  mov r8, rsi
/*1404a9790*/  call open_codex_db_for_convergence
/*1404a9795*/  nop
/*1404a9796*/  cmp [rbp+560h+var_B8], 0FFh
/*1404a979d*/  jz loc_1404A99AF
/*1404a97a3*/  movups xmm0, [rbp+560h+var_C8+8]
/*1404a97aa*/  movaps [rbp+560h+var_270], xmm0
/*1404a97b1*/  movups xmm0, xmmword ptr [rbp+560h+var_D0]
/*1404a97b8*/  movaps [rbp+560h+var_280], xmm0
/*1404a97bf*/  movups xmm0, [rbp+560h+var_E0]
/*1404a97c6*/  movaps [rbp+560h+var_290], xmm0
/*1404a97cd*/  movdqu xmm0, [rbp+560h+var_120]
/*1404a97d5*/  movups xmm1, [rbp+560h+var_110]
/*1404a97dc*/  movups xmm2, [rbp+560h+var_100]
/*1404a97e3*/  movups xmm3, [rbp+560h+var_F0]
/*1404a97ea*/  movaps [rbp+560h+var_2A0], xmm3
/*1404a97f1*/  movaps [rbp+560h+var_2B0], xmm2
/*1404a97f8*/  movaps [rbp+560h+var_2C0], xmm1
/*1404a97ff*/  movdqa [rbp+560h+var_2D0], xmm0
loc_1404A9807: /*1404a9807*/ lea rcx, [rbp+560h+var_330]
/*1404a980e*/  lea rdx, [rbp+560h+var_2D0]
/*1404a9815*/  call sub_1404A3CD0
/*1404a981a*/  nop
/*1404a981b*/  cmp dword ptr [rbp+560h+var_330], 0FFFFFFFFh
/*1404a9822*/  jz loc_1404A9B3A
/*1404a9828*/  movups xmm0, [rbp+560h+var_2E0]
/*1404a982f*/  movaps [rbp+560h+var_160], xmm0
/*1404a9836*/  movups xmm0, [rbp+560h+var_2F0]
/*1404a983d*/  movaps [rbp+560h+var_170], xmm0
/*1404a9844*/  movdqu xmm0, [rbp+560h+var_330]
/*1404a984c*/  movups xmm1, [rbp+560h+var_320]
/*1404a9853*/  movups xmm2, [rbp+560h+var_310]
/*1404a985a*/  movups xmm3, [rbp+560h+var_300]
/*1404a9861*/  movaps [rbp+560h+var_180], xmm3
/*1404a9868*/  movaps [rbp+560h+var_190], xmm2
/*1404a986f*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a9876*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404a987e*/  mov rax, cs:off_141EC8D80
/*1404a9885*/  mov rax, [rax]
/*1404a9888*/  cmp rax, 2
/*1404a988c*/  jb loc_1404A9996
loc_1404A9892: /*1404a9892*/ lea rdi, [rbp+560h+var_1F8]
/*1404a9899*/  mov rcx, rdi
/*1404a989c*/  mov rdx, [rbp+560h+var_130]
/*1404a98a3*/  mov r8, rsi
/*1404a98a6*/  call codex_db_log_path
/*1404a98ab*/  nop
/*1404a98ac*/  mov qword ptr [rbp+560h+var_260], rdi
/*1404a98b3*/  lea rax, sub_1400015F0
/*1404a98ba*/  mov qword ptr [rbp+560h+var_260+8], rax
/*1404a98c1*/  lea rax, [rbp+560h+var_1B0]
/*1404a98c8*/  mov qword ptr [rbp+560h+var_250], rax
/*1404a98cf*/  lea rax, sub_140B036A0
/*1404a98d6*/  mov qword ptr [rbp+560h+var_250+8], rax
/*1404a98dd*/  mov qword ptr [rbp+560h+var_120], 0
/*1404a98e8*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404a98ef*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404a98f6*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404a9901*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404a990c*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404a9913*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404a991a*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404a9925*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404a9930*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404a9937*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404a9942*/  mov rax, 9C400000001h
/*1404a994c*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404a9953*/  lea rax, unk_14175B420
/*1404a995a*/  mov [rbp+560h+var_D0], rax
/*1404a9961*/  mov qword ptr [rbp+560h+var_C8], rbx
loc_1404A9968: /*1404a9968*/ lea rcx, [rbp+560h+var_79]
/*1404a996f*/  mov rdx, r15
/*1404a9972*/  call sub_1412C36A0
/*1404a9977*/  nop
/*1404a9978*/  mov rdx, qword ptr [rbp+560h+var_1F8]
/*1404a997f*/  test rdx, rdx
/*1404a9982*/  jz short loc_1404A9996
/*1404a9984*/  mov rcx, qword ptr [rbp+560h+var_1F8+8]
/*1404a998b*/  mov r8d, 1
/*1404a9991*/  call sub_140001660
loc_1404A9996: /*1404a9996*/ inc qword ptr [rbp+560h+var_360+8]
loc_1404A999D: /*1404a999d*/ lea rcx, [rbp+560h+var_1B0]
/*1404a99a4*/  call sub_14043E650
/*1404a99a9*/  nop
/*1404a99aa*/  jmp loc_1404AABBC
loc_1404A99AF: /*1404a99af*/ movups xmm0, xmmword ptr [rbp+560h+var_D0]
/*1404a99b6*/  movaps [rbp+560h+var_160], xmm0
/*1404a99bd*/  movups xmm0, [rbp+560h+var_E0]
/*1404a99c4*/  movaps [rbp+560h+var_170], xmm0
/*1404a99cb*/  movdqu xmm0, [rbp+560h+var_120]
/*1404a99d3*/  movups xmm1, [rbp+560h+var_110]
/*1404a99da*/  movups xmm2, [rbp+560h+var_100]
/*1404a99e1*/  movups xmm3, [rbp+560h+var_F0]
/*1404a99e8*/  movaps [rbp+560h+var_180], xmm3
/*1404a99ef*/  movaps [rbp+560h+var_190], xmm2
/*1404a99f6*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a99fd*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404a9a05*/  mov rax, cs:off_141EC8D80
/*1404a9a0c*/  mov rax, [rax]
/*1404a9a0f*/  cmp rax, 2
/*1404a9a13*/  jb loc_1404A9B21
loc_1404A9A19: /*1404a9a19*/ mov rcx, rbx
/*1404a9a1c*/  mov rdx, [rbp+560h+var_130]
/*1404a9a23*/  mov r8, rsi
/*1404a9a26*/  call codex_db_log_path
/*1404a9a2b*/  nop
/*1404a9a2c*/  mov qword ptr [rbp+560h+var_330], rbx
/*1404a9a33*/  lea rax, sub_1400015F0
/*1404a9a3a*/  mov qword ptr [rbp+560h+var_330+8], rax
/*1404a9a41*/  lea rax, [rbp+560h+var_1B0]
/*1404a9a48*/  mov qword ptr [rbp+560h+var_320], rax
/*1404a9a4f*/  lea rax, sub_140B036A0
/*1404a9a56*/  mov qword ptr [rbp+560h+var_320+8], rax
/*1404a9a5d*/  mov qword ptr [rbp+560h+var_2D0], 0
/*1404a9a68*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404a9a6f*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404a9a76*/  mov qword ptr [rbp+560h+var_2C0], 33h ; '3'
/*1404a9a81*/  mov qword ptr [rbp+560h+var_2C0+8], 0
/*1404a9a8c*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404a9a93*/  mov qword ptr [rbp+560h+var_2B0], rcx
/*1404a9a9a*/  mov qword ptr [rbp+560h+var_2B0+8], 29h ; ')'
/*1404a9aa5*/  mov qword ptr [rbp+560h+var_2A0], 2
/*1404a9ab0*/  mov qword ptr [rbp+560h+var_2A0+8], rax
/*1404a9ab7*/  mov qword ptr [rbp+560h+var_290], 33h ; '3'
/*1404a9ac2*/  mov rax, 9B900000001h
/*1404a9acc*/  mov qword ptr [rbp+560h+var_290+8], rax
/*1404a9ad3*/  lea rax, unk_14175B457
/*1404a9ada*/  mov qword ptr [rbp+560h+var_280], rax
/*1404a9ae1*/  lea rax, [rbp+560h+var_330]
/*1404a9ae8*/  mov qword ptr [rbp+560h+var_280+8], rax
loc_1404A9AEF: /*1404a9aef*/ lea rcx, [rbp+560h+var_79]
/*1404a9af6*/  lea rdx, [rbp+560h+var_2D0]
/*1404a9afd*/  call sub_1412C36A0
/*1404a9b02*/  nop
/*1404a9b03*/  mov rdx, qword ptr [rbp+560h+var_260]
/*1404a9b0a*/  test rdx, rdx
/*1404a9b0d*/  jz short loc_1404A9B21
/*1404a9b0f*/  mov rcx, qword ptr [rbp+560h+var_260+8]
/*1404a9b16*/  mov r8d, 1
/*1404a9b1c*/  call sub_140001660
loc_1404A9B21: /*1404a9b21*/ inc qword ptr [rbp+560h+var_360+8]
loc_1404A9B28: /*1404a9b28*/ lea rcx, [rbp+560h+var_1B0]
/*1404a9b2f*/  call sub_14043E650
/*1404a9b34*/  nop
/*1404a9b35*/  jmp loc_1404A973D
loc_1404A9B3A: /*1404a9b3a*/ cmp byte ptr [rbp+560h+var_330+8], 0
/*1404a9b41*/  jz loc_1404AABBC
/*1404a9b47*/  lea rax, [r12+rdi*8]
/*1404a9b4b*/  mov [rbp+560h+var_448], rax
/*1404a9b52*/  jmp loc_1404A9C25
loc_1404A9B60: /*1404a9b60*/ and rax, rbx
/*1404a9b63*/  movdqu xmm8, xmmword ptr [rdi+rax]
/*1404a9b69*/  movdqa xmm0, xmm8
/*1404a9b6e*/  pcmpeqb xmm0, xmm7
/*1404a9b72*/  pmovmskb r15d, xmm0
/*1404a9b77*/  test r15d, r15d
/*1404a9b7a*/  jz short loc_1404A9BE0
/*1404a9b7c*/  mov rsi, [r8+10h]
/*1404a9b80*/  mov [rbp+560h+var_88], rdx
loc_1404A9B87: /*1404a9b87*/ tzcnt ecx, r15d
/*1404a9b8c*/  mov r12, rax
/*1404a9b8f*/  add rcx, rax
/*1404a9b92*/  and rcx, rbx
/*1404a9b95*/  neg rcx
/*1404a9b98*/  lea rax, [rcx+rcx*2]
/*1404a9b9c*/  cmp rsi, [rdi+rax*8-8]
/*1404a9ba1*/  jnz short loc_1404A9BC2
/*1404a9ba3*/  lea rax, [rdi+rax*8]
/*1404a9ba7*/  mov rdx, [rax-10h]
/*1404a9bab*/  mov rcx, [r8+8]
/*1404a9baf*/  mov r8, rsi
/*1404a9bb2*/  call sub_1416847B0
/*1404a9bb7*/  mov r8, [rbp+560h+var_98]
/*1404a9bbe*/  test eax, eax
/*1404a9bc0*/  jz short loc_1404A9C10
loc_1404A9BC2: /*1404a9bc2*/ lea eax, [r15-1]
/*1404a9bc6*/  and ax, r15w
/*1404a9bca*/  mov r15d, eax
/*1404a9bcd*/  mov rax, r12
/*1404a9bd0*/  mov rdx, [rbp+560h+var_88]
/*1404a9bd7*/  jnz short loc_1404A9B87
/*1404a9bd9*/  nop dword ptr [rax+00000000h]
loc_1404A9BE0: /*1404a9be0*/ pcmpeqb xmm8, xmm6
/*1404a9be5*/  pmovmskb ecx, xmm8
/*1404a9bea*/  test ecx, ecx
/*1404a9bec*/  lea r15, [rbp+560h+var_120]
/*1404a9bf3*/  jnz loc_1404A9CA0
/*1404a9bf9*/  add rax, rdx
/*1404a9bfc*/  add rax, 10h
/*1404a9c00*/  add rdx, 10h
/*1404a9c04*/  jmp loc_1404A9B60
loc_1404A9C10: /*1404a9c10*/ lea r15, [rbp+560h+var_120]
/*1404a9c17*/  lea rbx, [rbp+560h+var_260]
/*1404a9c1e*/  mov r12, [rbp+560h+var_380]
loc_1404A9C25: /*1404a9c25*/ cmp r12, [rbp+560h+var_448]
/*1404a9c2c*/  jz loc_1404AABCE
/*1404a9c32*/  mov r8, [r12]
/*1404a9c36*/  add r12, 8
/*1404a9c3a*/  mov [rbp+560h+var_380], r12
/*1404a9c41*/  cmp qword ptr [rbp+560h+var_3A0+8], 0
/*1404a9c49*/  mov [rbp+560h+var_98], r8
/*1404a9c50*/  jz short loc_1404A9CA0
loc_1404A9C52: /*1404a9c52*/ lea rcx, [rbp+560h+var_390]
/*1404a9c59*/  mov rdx, r8
/*1404a9c5c*/  call sub_140378810
/*1404a9c61*/  nop
/*1404a9c62*/  mov rcx, rax
/*1404a9c65*/  shr rcx, 39h
/*1404a9c69*/  mov rdi, qword ptr [rbp+560h+var_3B0]
/*1404a9c70*/  mov rbx, qword ptr [rbp+560h+var_3B0+8]
/*1404a9c77*/  movd xmm0, ecx
/*1404a9c7b*/  punpcklbw xmm0, xmm0
/*1404a9c7f*/  pshuflw xmm0, xmm0, 0
/*1404a9c84*/  pshufd xmm7, xmm0, 44h ; 'D'
/*1404a9c89*/  xor edx, edx
/*1404a9c8b*/  mov r8, [rbp+560h+var_98]
/*1404a9c92*/  jmp loc_1404A9B60
loc_1404A9CA0: /*1404a9ca0*/ mov rsi, [r8+8]
/*1404a9ca4*/  mov rdi, [r8+10h]
/*1404a9ca8*/  mov r9d, 7Fh
/*1404a9cae*/  mov rcx, r15
/*1404a9cb1*/  lea rdx, [rbp+560h+var_2D0]
/*1404a9cb8*/  lea r8, aSelectCoalesce_0; "SELECT COALESCE(model, ''), model_provi"...
/*1404a9cbf*/  call sub_14046F850
/*1404a9cc4*/  nop
/*1404a9cc5*/  lea rbx, [rbp+560h+var_260]
/*1404a9ccc*/  mov eax, dword ptr [rbp+560h+var_120]
/*1404a9cd2*/  lea rcx, [rbp+560h+var_120+8]
/*1404a9cd9*/  movups xmm0, xmmword ptr [rcx]
/*1404a9cdc*/  movups xmm1, xmmword ptr [rcx+10h]
/*1404a9ce0*/  movups xmm2, xmmword ptr [rcx+20h]
/*1404a9ce4*/  movups xmm3, xmmword ptr [rcx+30h]
/*1404a9ce8*/  movaps [rbp+560h+var_1B0], xmm0
/*1404a9cef*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a9cf6*/  movaps [rbp+560h+var_190], xmm2
/*1404a9cfd*/  movaps [rbp+560h+var_180], xmm3
/*1404a9d04*/  cmp eax, 1
/*1404a9d07*/  jnz short loc_1404A9D60
/*1404a9d09*/  movdqa xmm0, [rbp+560h+var_1B0]
/*1404a9d11*/  movaps xmm1, [rbp+560h+var_1A0]
/*1404a9d18*/  movaps xmm2, [rbp+560h+var_190]
/*1404a9d1f*/  movaps xmm3, [rbp+560h+var_180]
/*1404a9d26*/  lea rax, [rbp+560h+var_1F8+8]
/*1404a9d2d*/  movups xmmword ptr [rax+30h], xmm3
/*1404a9d31*/  movups xmmword ptr [rax+20h], xmm2
/*1404a9d35*/  movups xmmword ptr [rax+10h], xmm1
/*1404a9d39*/  movdqu xmmword ptr [rax], xmm0
/*1404a9d3d*/  mov qword ptr [rbp+560h+var_1F8], 0FFFFFFFFFFFFFFFFh
/*1404a9d48*/  mov rsi, qword ptr [rbp+560h+var_1F8+8]
/*1404a9d4f*/  jmp loc_1404AA100
loc_1404A9D60: /*1404a9d60*/ movdqa xmm0, [rbp+560h+var_1B0]
/*1404a9d68*/  movaps xmm1, [rbp+560h+var_1A0]
/*1404a9d6f*/  movaps xmm2, [rbp+560h+var_190]
/*1404a9d76*/  movaps xmm3, [rbp+560h+var_180]
/*1404a9d7d*/  movaps [rbp+560h+var_300], xmm3
/*1404a9d84*/  movaps [rbp+560h+var_310], xmm2
/*1404a9d8b*/  movaps [rbp+560h+var_320], xmm1
/*1404a9d92*/  movdqa [rbp+560h+var_330], xmm0
/*1404a9d9a*/  mov rax, qword ptr [rbp+560h+var_330]
/*1404a9da1*/  mov [rbp+560h+var_88], rax
/*1404a9da8*/  mov r12, qword ptr [rbp+560h+var_300+8]
/*1404a9daf*/  mov rcx, r12
/*1404a9db2*/  call sub_1414B6B70
/*1404a9db7*/  mov r8d, 1
/*1404a9dbd*/  test eax, eax
/*1404a9dbf*/  jz loc_1404A9E91
/*1404a9dc5*/  mov ebx, eax
/*1404a9dc7*/  xor eax, eax
/*1404a9dc9*/  test rdi, rdi
/*1404a9dcc*/  setnz al
/*1404a9dcf*/  mov ecx, 1
/*1404a9dd4*/  cmovz rsi, rcx
/*1404a9dd8*/  neg rax
/*1404a9ddb*/  mov [rsp+5E0h+var_5C0], rax
/*1404a9de0*/  mov byte ptr [rsp+5E0h+var_5B8], 1
/*1404a9de5*/  mov rcx, r12
/*1404a9de8*/  mov edx, 1
/*1404a9ded*/  mov r8, rsi
/*1404a9df0*/  mov r9, rdi
/*1404a9df3*/  call sub_1414B6740
/*1404a9df8*/  mov rcx, [rbp+560h+var_88]
/*1404a9dff*/  mov rcx, [rcx]
/*1404a9e02*/  mov rdx, 7FFFFFFFFFFFFFFFh
/*1404a9e0c*/  cmp rcx, rdx
/*1404a9e0f*/  jnb loc_1404AB8B5
/*1404a9e15*/  inc rcx
/*1404a9e18*/  mov rdx, [rbp+560h+var_88]
/*1404a9e1f*/  mov [rdx], rcx
/*1404a9e22*/  mov rdx, [rdx+10h]
loc_1404A9E26: /*1404a9e26*/ mov rcx, r15
/*1404a9e29*/  mov r8d, eax
/*1404a9e2c*/  call sub_140FB88E0
/*1404a9e31*/  nop
/*1404a9e32*/  mov rax, [rbp+560h+var_88]
/*1404a9e39*/  dec qword ptr [rax]
/*1404a9e3c*/  mov rsi, qword ptr [rbp+560h+var_120]
/*1404a9e43*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404a9e47*/  lea r12, [rbp+560h+var_120+8]
/*1404a9e4e*/  mov r8d, 1
/*1404a9e54*/  jz short loc_1404A9EA2
/*1404a9e56*/  mov r8, qword ptr [rbp+560h+var_120+8]
/*1404a9e5d*/  mov rax, qword ptr [rbp+560h+var_110]
/*1404a9e64*/  movdqu xmm0, xmmword ptr [r12+10h]
/*1404a9e6b*/  movups xmm1, xmmword ptr [r12+20h]
/*1404a9e71*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404a9e79*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a9e80*/  mov rcx, [r12+30h]
/*1404a9e85*/  mov qword ptr [rbp+560h+var_190], rcx
/*1404a9e8c*/  jmp loc_1404A9F80
loc_1404A9E91: /*1404a9e91*/ mov rsi, 8000000000000013h
/*1404a9e9b*/  xor eax, eax
/*1404a9e9d*/  jmp loc_1404A9F80
loc_1404A9EA2: /*1404a9ea2*/ cmp ebx, 1
/*1404a9ea5*/  jnz loc_1404A9F71
/*1404a9eab*/  lea rax, [rbp+560h+var_330]
/*1404a9eb2*/  mov qword ptr [rbp+560h+var_260], rax
/*1404a9eb9*/  mov qword ptr [rbp+560h+var_260+8], 0
loc_1404A9EC4: /*1404a9ec4*/ mov rcx, r15
/*1404a9ec7*/  lea rbx, [rbp+560h+var_260]
/*1404a9ece*/  mov rdx, rbx
/*1404a9ed1*/  call sub_1404DE8F0
/*1404a9ed6*/  nop
/*1404a9ed7*/  mov rsi, qword ptr [rbp+560h+var_120]
/*1404a9ede*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404a9ee2*/  jz loc_1404AA424
/*1404a9ee8*/  mov rax, qword ptr [rbp+560h+var_120+8]
/*1404a9eef*/  lea rcx, [rbp+560h+var_120+8]
/*1404a9ef6*/  movdqu xmm0, xmmword ptr [rcx+8]
/*1404a9efb*/  movups xmm1, xmmword ptr [rcx+18h]
/*1404a9eff*/  movups xmm2, xmmword ptr [rcx+28h]
/*1404a9f03*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404a9f0b*/  movaps [rbp+560h+var_1A0], xmm1
/*1404a9f12*/  movaps [rbp+560h+var_190], xmm2
loc_1404A9F19: /*1404a9f19*/ mov qword ptr [rbp+560h+var_1F8+8], rsi
/*1404a9f20*/  mov qword ptr [rbp+560h+var_1F8+10h], rax
/*1404a9f27*/  movdqa xmm0, [rbp+560h+var_1B0]
/*1404a9f2f*/  movaps xmm1, [rbp+560h+var_1A0]
/*1404a9f36*/  movaps xmm2, [rbp+560h+var_190]
/*1404a9f3d*/  lea rax, [rbp+560h+var_1E0+8]
/*1404a9f44*/  movups xmmword ptr [rax+18h], xmm2
/*1404a9f48*/  movups xmmword ptr [rax+8], xmm1
/*1404a9f4c*/  movdqu xmmword ptr [rax-8], xmm0
loc_1404A9F51: /*1404a9f51*/ mov qword ptr [rbp+560h+var_1F8], 0FFFFFFFFFFFFFFFFh
loc_1404A9F5C: /*1404a9f5c*/ mov rdi, 0FFFFFFFFFFFFFFFFh
/*1404a9f63*/  mov r12, rsi
loc_1404A9F66: /*1404a9f66*/ mov rcx, rbx
/*1404a9f69*/  call sub_14043CE10
/*1404a9f6e*/  nop
/*1404a9f6f*/  jmp short loc_1404A9FDA
loc_1404A9F71: /*1404a9f71*/ movsxd rax, ebx
/*1404a9f74*/  mov rsi, 8000000000000013h
/*1404a9f7e*/  xchg ax, ax
loc_1404A9F80: /*1404a9f80*/ mov rcx, qword ptr [rbp+560h+var_190]
/*1404a9f87*/  lea rdx, [rbp+560h+var_1E0+8]
/*1404a9f8e*/  mov [rdx+20h], rcx
/*1404a9f92*/  movdqa xmm0, [rbp+560h+var_1B0]
/*1404a9f9a*/  movaps xmm1, [rbp+560h+var_1A0]
/*1404a9fa1*/  movups xmmword ptr [rdx+10h], xmm1
/*1404a9fa5*/  movdqu xmmword ptr [rdx], xmm0
/*1404a9fa9*/  mov qword ptr [rbp+560h+var_1F8+8], rsi
/*1404a9fb0*/  mov qword ptr [rbp+560h+var_1F8+10h], r8
/*1404a9fb7*/  mov qword ptr [rbp+560h+var_1E0], rax
/*1404a9fbe*/  mov qword ptr [rbp+560h+var_1F8], 0FFFFFFFFFFFFFFFFh
/*1404a9fc9*/  mov rdi, 0FFFFFFFFFFFFFFFFh
/*1404a9fd0*/  mov r12, rsi
/*1404a9fd3*/  lea rbx, [rbp+560h+var_260]
loc_1404A9FDA: /*1404a9fda*/ lea rcx, [rbp+560h+var_330]
/*1404a9fe1*/  call sub_14043D1B0
/*1404a9fe6*/  nop
/*1404a9fe7*/  cmp rdi, 0FFFFFFFFFFFFFFFFh
/*1404a9feb*/  jz loc_1404AA100
/*1404a9ff1*/  mov [rbp+560h+var_88], rdi
/*1404a9ff8*/  mov r8, qword ptr [rbp+560h+var_1F8+10h]
/*1404a9fff*/  mov rax, qword ptr [rbp+560h+var_1E0]
/*1404aa006*/  mov [rbp+560h+var_128], rax
/*1404aa00d*/  mov rax, qword ptr [rbp+560h+var_1E0+8]
/*1404aa014*/  mov [rbp+560h+var_200], rax
/*1404aa01b*/  mov rax, [rbp+560h+var_1C8]
/*1404aa022*/  mov [rbp+560h+var_148], rax
/*1404aa029*/  mov rax, [rbp+560h+var_1C0]
/*1404aa030*/  mov [rbp+560h+var_208], rax
/*1404aa037*/  mov rdi, [rbp+560h+var_98]
/*1404aa03e*/  cmp r8, [rdi+40h]
/*1404aa042*/  mov [rbp+560h+var_140], r12
/*1404aa049*/  jnz short loc_1404AA074
/*1404aa04b*/  mov rsi, [rbp+560h+var_1D0]
/*1404aa052*/  mov rax, [rbp+560h+var_1B8]
/*1404aa059*/  mov [rbp+560h+var_420], rax
/*1404aa060*/  mov rdx, [rdi+38h]
/*1404aa064*/  mov rcx, r12
/*1404aa067*/  call sub_1416847B0
/*1404aa06c*/  test eax, eax
/*1404aa06e*/  jz loc_1404AA272
loc_1404AA074: /*1404aa074*/ inc qword ptr [rbp+560h+var_360]
loc_1404AA07B: /*1404aa07b*/ mov rcx, r15
/*1404aa07e*/  mov rdx, rdi
/*1404aa081*/  call sub_14149C500
/*1404aa086*/  nop
/*1404aa087*/  lea rcx, [rbp+560h+var_3B0]
/*1404aa08e*/  mov rdx, r15
/*1404aa091*/  call sub_140474440
/*1404aa096*/  nop
loc_1404AA097: /*1404aa097*/ mov rdi, [rbp+560h+var_88]
/*1404aa09e*/  mov rdx, [rbp+560h+var_148]
/*1404aa0a5*/  test rdx, rdx
/*1404aa0a8*/  jz short loc_1404AA0BC
/*1404aa0aa*/  mov r8d, 1
/*1404aa0b0*/  mov rcx, [rbp+560h+var_208]
/*1404aa0b7*/  call sub_140001660
loc_1404AA0BC: /*1404aa0bc*/ mov rdx, [rbp+560h+var_128]
/*1404aa0c3*/  test rdx, rdx
/*1404aa0c6*/  mov rsi, [rbp+560h+var_140]
/*1404aa0cd*/  jz short loc_1404AA0E1
/*1404aa0cf*/  mov r8d, 1
/*1404aa0d5*/  mov rcx, [rbp+560h+var_200]
/*1404aa0dc*/  call sub_140001660
loc_1404AA0E1: /*1404aa0e1*/ test rdi, rdi
/*1404aa0e4*/  jz loc_1404AA266
/*1404aa0ea*/  mov r8d, 1
/*1404aa0f0*/  mov rcx, rsi
/*1404aa0f3*/  mov rdx, rdi
/*1404aa0f6*/  call sub_140001660
/*1404aa0fb*/  jmp loc_1404AA266
loc_1404AA100: /*1404aa100*/ mov rax, 8000000000000009h
/*1404aa10a*/  cmp rsi, rax
/*1404aa10d*/  jnz short loc_1404AA130
loc_1404AA10F: /*1404aa10f*/ lea rcx, [rbp+560h+var_1F8+8]
/*1404aa116*/  call sub_14043D020
/*1404aa11b*/  nop
/*1404aa11c*/  jmp loc_1404AA266
loc_1404AA130: /*1404aa130*/ lea rax, [rbp+560h+var_1F8+8]
/*1404aa137*/  movdqu xmm0, xmmword ptr [rax]
/*1404aa13b*/  movups xmm1, xmmword ptr [rax+10h]
/*1404aa13f*/  movups xmm2, xmmword ptr [rax+20h]
/*1404aa143*/  movups xmm3, xmmword ptr [rax+30h]
/*1404aa147*/  movaps [rbp+560h+var_180], xmm3
/*1404aa14e*/  movaps [rbp+560h+var_190], xmm2
/*1404aa155*/  movaps [rbp+560h+var_1A0], xmm1
/*1404aa15c*/  movdqa [rbp+560h+var_1B0], xmm0
/*1404aa164*/  mov rax, cs:off_141EC8D80
/*1404aa16b*/  mov rax, [rax]
/*1404aa16e*/  cmp rax, 2
/*1404aa172*/  jb loc_1404AA252
/*1404aa178*/  mov rax, [rbp+560h+var_98]
/*1404aa17f*/  mov qword ptr [rbp+560h+var_330], rax
/*1404aa186*/  lea rax, sub_1400015F0
/*1404aa18d*/  mov qword ptr [rbp+560h+var_330+8], rax
/*1404aa194*/  lea rax, [rbp+560h+var_1B0]
/*1404aa19b*/  mov qword ptr [rbp+560h+var_320], rax
/*1404aa1a2*/  lea rax, sub_140FB8910
/*1404aa1a9*/  mov qword ptr [rbp+560h+var_320+8], rax
/*1404aa1b0*/  mov qword ptr [rbp+560h+var_120], 0
/*1404aa1bb*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404aa1c2*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404aa1c9*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404aa1d4*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404aa1df*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404aa1e6*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404aa1ed*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404aa1f8*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404aa203*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404aa20a*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404aa215*/  mov rax, 9E600000001h
/*1404aa21f*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404aa226*/  lea rax, unk_14175B3E1
/*1404aa22d*/  mov [rbp+560h+var_D0], rax
/*1404aa234*/  lea rax, [rbp+560h+var_330]
/*1404aa23b*/  mov qword ptr [rbp+560h+var_C8], rax
loc_1404AA242: /*1404aa242*/ lea rcx, [rbp+560h+var_79]
/*1404aa249*/  mov rdx, r15
/*1404aa24c*/  call sub_1412C36A0
/*1404aa251*/  nop
loc_1404AA252: /*1404aa252*/ inc qword ptr [rbp+560h+var_360+8]
loc_1404AA259: /*1404aa259*/ lea rcx, [rbp+560h+var_1B0]
/*1404aa260*/  call sub_14043D020
/*1404aa265*/  nop
loc_1404AA266: /*1404aa266*/ mov r12, [rbp+560h+var_380]
/*1404aa26d*/  jmp loc_1404A9C25
loc_1404AA272: /*1404aa272*/ mov [rbp+560h+var_418], rsi
/*1404aa279*/  mov rdi, [rbp+560h+var_208]
/*1404aa280*/  mov rcx, rdi
/*1404aa283*/  mov rsi, [rbp+560h+var_420]
/*1404aa28a*/  mov rdx, rsi
/*1404aa28d*/  call sub_14033BC10
/*1404aa292*/  test rdx, rdx
/*1404aa295*/  jz loc_1404AA414
/*1404aa29b*/  mov rax, [rbp+560h+var_98]
/*1404aa2a2*/  movdqu xmm0, xmmword ptr [rax+20h]
loc_1404AA2A7: /*1404aa2a7*/ movdqu [rsp+5E0h+var_5B8], xmm0
/*1404aa2ad*/  mov rax, [rbp+560h+var_418]
/*1404aa2b4*/  mov [rsp+5E0h+var_5C0], rax
/*1404aa2b9*/  lea rcx, [rbp+560h+var_1B0]
/*1404aa2c0*/  mov rdx, rdi
/*1404aa2c3*/  mov r8, rsi
/*1404aa2c6*/  mov r9, [rbp+560h+var_200]
/*1404aa2cd*/  call patch_model_fallback_rollout
/*1404aa2d2*/  nop
/*1404aa2d3*/  cmp qword ptr [rbp+560h+var_1B0], 0FFFFFFFFFFFFFFFEh
/*1404aa2db*/  jnz loc_1404AA4BD
/*1404aa2e1*/  lea rcx, [rbp+560h+var_1B0+8]
/*1404aa2e8*/  mov rax, [rcx+10h]
/*1404aa2ec*/  mov qword ptr [rbp+560h+var_3E0], rax
/*1404aa2f3*/  movdqu xmm0, xmmword ptr [rcx]
/*1404aa2f7*/  movdqa [rbp+560h+var_3F0], xmm0
/*1404aa2ff*/  mov rax, cs:off_141EC8D80
/*1404aa306*/  mov rax, [rax]
/*1404aa309*/  cmp rax, 2
/*1404aa30d*/  mov rax, [rbp+560h+var_98]
/*1404aa314*/  jb loc_1404AA3E6
/*1404aa31a*/  mov qword ptr [rbp+560h+var_330], rax
/*1404aa321*/  lea rax, sub_1400015F0
/*1404aa328*/  mov qword ptr [rbp+560h+var_330+8], rax
/*1404aa32f*/  lea rcx, [rbp+560h+var_3F0]
/*1404aa336*/  mov qword ptr [rbp+560h+var_320], rcx
/*1404aa33d*/  mov qword ptr [rbp+560h+var_320+8], rax
/*1404aa344*/  mov qword ptr [rbp+560h+var_120], 0
/*1404aa34f*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404aa356*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404aa35d*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404aa368*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404aa373*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404aa37a*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404aa381*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404aa38c*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404aa397*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404aa39e*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404aa3a9*/  mov rax, 9FF00000001h
/*1404aa3b3*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404aa3ba*/  lea rax, unk_14175B398
/*1404aa3c1*/  mov [rbp+560h+var_D0], rax
/*1404aa3c8*/  lea rax, [rbp+560h+var_330]
/*1404aa3cf*/  mov qword ptr [rbp+560h+var_C8], rax
loc_1404AA3D6: /*1404aa3d6*/ lea rcx, [rbp+560h+var_79]
/*1404aa3dd*/  mov rdx, r15
/*1404aa3e0*/  call sub_1412C36A0
/*1404aa3e5*/  nop
loc_1404AA3E6: /*1404aa3e6*/ inc qword ptr [rbp+560h+var_360+8]
/*1404aa3ed*/  mov rdx, qword ptr [rbp+560h+var_3F0]
/*1404aa3f4*/  test rdx, rdx
/*1404aa3f7*/  jz loc_1404AA097
/*1404aa3fd*/  mov rcx, qword ptr [rbp+560h+var_3F0+8]
/*1404aa404*/  mov r8d, 1
/*1404aa40a*/  call sub_140001660
/*1404aa40f*/  jmp loc_1404AA097
loc_1404AA414: /*1404aa414*/ mov qword ptr [rbp+560h+var_260], 0FFFFFFFFFFFFFFFFh
/*1404aa41f*/  jmp loc_1404AA505
loc_1404AA424: /*1404aa424*/ cmp qword ptr [rbp+560h+var_260+8], 0
/*1404aa42c*/  lea rax, [rbp+560h+var_260+8]
/*1404aa433*/  mov rsi, 8000000000000009h
/*1404aa43d*/  jz loc_1404A9F19
loc_1404AA443: /*1404aa443*/ mov rcx, r15
/*1404aa446*/  lea rdx, [rbp+560h+var_260+8]
/*1404aa44d*/  xor r8d, r8d
/*1404aa450*/  call sub_14042B0E0
/*1404aa455*/  nop
/*1404aa456*/  mov rsi, qword ptr [rbp+560h+var_120]
/*1404aa45d*/  mov rdx, qword ptr [rbp+560h+var_120+8]
/*1404aa464*/  mov rcx, qword ptr [rbp+560h+var_110]
/*1404aa46b*/  mov rdi, qword ptr [rbp+560h+var_110+8]
/*1404aa472*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aa476*/  jz loc_1404AA99F
/*1404aa47c*/  lea rax, [rbp+560h+var_120+8]
/*1404aa483*/  movdqu xmm0, xmmword ptr [rax+18h]
/*1404aa488*/  movups xmm1, xmmword ptr [rax+28h]
/*1404aa48c*/  lea rax, [rbp+560h+var_1E0+8]
/*1404aa493*/  movups xmmword ptr [rax+18h], xmm1
/*1404aa497*/  movdqu xmmword ptr [rax+8], xmm0
/*1404aa49c*/  mov qword ptr [rbp+560h+var_1F8+10h], rdx
/*1404aa4a3*/  mov qword ptr [rbp+560h+var_1E0], rcx
/*1404aa4aa*/  mov qword ptr [rbp+560h+var_1E0+8], rdi
/*1404aa4b1*/  mov qword ptr [rbp+560h+var_1F8+8], rsi
/*1404aa4b8*/  jmp loc_1404A9F51
loc_1404AA4BD: /*1404aa4bd*/ movups xmm0, [rbp+560h+var_170]
/*1404aa4c4*/  movaps [rbp+560h+var_220], xmm0
/*1404aa4cb*/  movdqu xmm0, [rbp+560h+var_1B0]
/*1404aa4d3*/  movups xmm1, [rbp+560h+var_1A0]
/*1404aa4da*/  movups xmm2, [rbp+560h+var_190]
/*1404aa4e1*/  movups xmm3, [rbp+560h+var_180]
/*1404aa4e8*/  movaps [rbp+560h+var_230], xmm3
/*1404aa4ef*/  movaps [rbp+560h+var_240], xmm2
/*1404aa4f6*/  movaps [rbp+560h+var_250], xmm1
/*1404aa4fd*/  movdqa [rbp+560h+var_260], xmm0
loc_1404AA505: /*1404aa505*/ mov rcx, [rbp+560h+var_98]
/*1404aa50c*/  lea rax, [rcx+18h]
/*1404aa510*/  mov [rbp+560h+var_488], rcx
/*1404aa517*/  lea rcx, off_14175AD88
/*1404aa51e*/  mov [rbp+560h+var_480], rcx
/*1404aa525*/  mov [rbp+560h+var_478], rax
/*1404aa52c*/  mov [rbp+560h+var_470], rcx
loc_1404AA533: /*1404aa533*/ lea rax, [rbp+560h+var_488]
/*1404aa53a*/  mov [rsp+5E0h+var_5C0], rax
/*1404aa53f*/  mov qword ptr [rsp+5E0h+var_5B8], 2
/*1404aa548*/  mov r9d, 2Bh ; '+'
/*1404aa54e*/  lea rcx, [rbp+560h+var_590]
/*1404aa552*/  lea rdx, [rbp+560h+var_2D0]
/*1404aa559*/  lea r8, aUpdateThreadsS_2; "UPDATE threads SET model = ?2 WHERE id "...
/*1404aa560*/  call sub_140429E20
/*1404aa565*/  nop
/*1404aa566*/  cmp qword ptr [rbp+560h+var_590], 0FFFFFFFFFFFFFFFFh
/*1404aa56b*/  jz loc_1404AA877
/*1404aa571*/  movdqu xmm0, [rbp+560h+var_590]
/*1404aa576*/  movups xmm1, [rbp+560h+var_580]
/*1404aa57a*/  movups xmm2, [rbp+560h+var_570]
/*1404aa57e*/  movups xmm3, [rbp+560h+var_560]
/*1404aa582*/  movaps [rbp+560h+var_3C0], xmm3
/*1404aa589*/  movaps [rbp+560h+var_3D0], xmm2
/*1404aa590*/  movaps [rbp+560h+var_3E0], xmm1
/*1404aa597*/  movdqa [rbp+560h+var_3F0], xmm0
/*1404aa59f*/  mov rax, cs:off_141EC8D80
/*1404aa5a6*/  mov rax, [rax]
/*1404aa5a9*/  cmp rax, 2
/*1404aa5ad*/  mov rax, [rbp+560h+var_98]
/*1404aa5b4*/  jb loc_1404AA694
/*1404aa5ba*/  mov qword ptr [rbp+560h+var_1B0], rax
/*1404aa5c1*/  lea rax, sub_1400015F0
/*1404aa5c8*/  mov qword ptr [rbp+560h+var_1B0+8], rax
/*1404aa5cf*/  lea rax, [rbp+560h+var_3F0]
/*1404aa5d6*/  mov qword ptr [rbp+560h+var_1A0], rax
/*1404aa5dd*/  lea rax, sub_140FB8910
/*1404aa5e4*/  mov qword ptr [rbp+560h+var_1A0+8], rax
/*1404aa5eb*/  mov qword ptr [rbp+560h+var_120], 0
/*1404aa5f6*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404aa5fd*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404aa604*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404aa60f*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404aa61a*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404aa621*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404aa628*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404aa633*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404aa63e*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404aa645*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404aa650*/  mov rax, 0A1100000001h
/*1404aa65a*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404aa661*/  lea rax, unk_14175B301
/*1404aa668*/  mov [rbp+560h+var_D0], rax
/*1404aa66f*/  lea rax, [rbp+560h+var_1B0]
/*1404aa676*/  mov qword ptr [rbp+560h+var_C8], rax
/*1404aa67d*/  mov [rbp+560h+var_89], 1
loc_1404AA684: /*1404aa684*/ lea rcx, [rbp+560h+var_79]
/*1404aa68b*/  mov rdx, r15
/*1404aa68e*/  call sub_1412C36A0
/*1404aa693*/  nop
loc_1404AA694: /*1404aa694*/ inc qword ptr [rbp+560h+var_360+8]
/*1404aa69b*/  mov rsi, qword ptr [rbp+560h+var_260]
/*1404aa6a2*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aa6a6*/  jz loc_1404AA8B9
/*1404aa6ac*/  movaps xmm0, [rbp+560h+var_220]
/*1404aa6b3*/  movaps [rbp+560h+var_2F0], xmm0
/*1404aa6ba*/  movdqa xmm0, [rbp+560h+var_260]
/*1404aa6c2*/  movaps xmm1, [rbp+560h+var_250]
/*1404aa6c9*/  movaps xmm2, [rbp+560h+var_240]
/*1404aa6d0*/  movaps xmm3, [rbp+560h+var_230]
/*1404aa6d7*/  movaps [rbp+560h+var_300], xmm3
/*1404aa6de*/  movaps [rbp+560h+var_310], xmm2
/*1404aa6e5*/  movaps [rbp+560h+var_320], xmm1
/*1404aa6ec*/  movdqa [rbp+560h+var_330], xmm0
loc_1404AA6F4: /*1404aa6f4*/ mov r8d, 1
/*1404aa6fa*/  lea rcx, [rbp+560h+var_1B0]
/*1404aa701*/  lea rdx, [rbp+560h+var_330]
/*1404aa708*/  call sub_1404C7150
/*1404aa70d*/  nop
/*1404aa70e*/  cmp dword ptr [rbp+560h+var_1B0], 0FFFFFFFFh
/*1404aa715*/  mov rcx, [rbp+560h+var_98]
/*1404aa71c*/  jz loc_1404AA819
/*1404aa722*/  movups xmm0, [rbp+560h+var_160]
/*1404aa729*/  movaps xmmword ptr [rbp+560h+var_D0], xmm0
/*1404aa730*/  movups xmm0, [rbp+560h+var_170]
/*1404aa737*/  movaps [rbp+560h+var_E0], xmm0
/*1404aa73e*/  movdqu xmm0, [rbp+560h+var_1B0]
/*1404aa746*/  movups xmm1, [rbp+560h+var_1A0]
/*1404aa74d*/  movups xmm2, [rbp+560h+var_190]
/*1404aa754*/  movups xmm3, [rbp+560h+var_180]
/*1404aa75b*/  movaps [rbp+560h+var_F0], xmm3
/*1404aa762*/  movaps [rbp+560h+var_100], xmm2
/*1404aa769*/  movaps [rbp+560h+var_110], xmm1
/*1404aa770*/  movdqa [rbp+560h+var_120], xmm0
/*1404aa778*/  mov rax, cs:off_141EC8D80
/*1404aa77f*/  mov rax, [rax]
/*1404aa782*/  cmp rax, 2
/*1404aa786*/  jb loc_1404AA810
/*1404aa78c*/  mov [rbp+560h+var_4A8], rcx
/*1404aa793*/  lea rax, sub_1400015F0
/*1404aa79a*/  mov [rbp+560h+var_4A0], rax
/*1404aa7a1*/  mov [rbp+560h+var_498], r15
/*1404aa7a8*/  lea rax, sub_140B036A0
/*1404aa7af*/  mov [rbp+560h+var_490], rax
/*1404aa7b6*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404aa7bd*/  mov [rbp+560h+var_4D0], rax
/*1404aa7c4*/  mov [rbp+560h+var_4C8], 33h ; '3'
/*1404aa7cf*/  mov [rbp+560h+var_4C0], rax
/*1404aa7d6*/  mov [rbp+560h+var_4B8], 33h ; '3'
/*1404aa7e1*/  lea rax, off_14175B380; "src\\core\\relay\\codex_thread_visibili"...
/*1404aa7e8*/  mov [rbp+560h+var_4B0], rax
loc_1404AA7EF: /*1404aa7ef*/ mov r8d, 2
/*1404aa7f5*/  lea rcx, unk_14175B336
/*1404aa7fc*/  lea rdx, [rbp+560h+var_4A8]
/*1404aa803*/  lea r9, [rbp+560h+var_4D0]
/*1404aa80a*/  call sub_140985BA0
/*1404aa80f*/  nop
loc_1404AA810: /*1404aa810*/ mov rcx, r15
/*1404aa813*/  call sub_14043E650
/*1404aa818*/  nop
loc_1404AA819: /*1404aa819*/ mov rdx, qword ptr [rbp+560h+var_330]
/*1404aa820*/  test rdx, rdx
/*1404aa823*/  jz short loc_1404AA837
/*1404aa825*/  mov rcx, qword ptr [rbp+560h+var_330+8]
/*1404aa82c*/  mov r8d, 1
/*1404aa832*/  call sub_140001660
loc_1404AA837: /*1404aa837*/ mov rdx, qword ptr [rbp+560h+var_310]
/*1404aa83e*/  test rdx, rdx
/*1404aa841*/  jz short loc_1404AA855
/*1404aa843*/  mov rcx, qword ptr [rbp+560h+var_310+8]
/*1404aa84a*/  mov r8d, 1
/*1404aa850*/  call sub_140001660
loc_1404AA855: /*1404aa855*/ mov rdx, qword ptr [rbp+560h+var_300+8]
/*1404aa85c*/  test rdx, rdx
/*1404aa85f*/  jz short loc_1404AA873
/*1404aa861*/  mov rcx, qword ptr [rbp+560h+var_2F0]
/*1404aa868*/  mov r8d, 1
/*1404aa86e*/  call sub_140001660
loc_1404AA873: /*1404aa873*/ xor edi, edi
/*1404aa875*/  jmp short loc_1404AA8BC
loc_1404AA877: /*1404aa877*/ inc qword ptr [rbp+560h+var_370]
/*1404aa87e*/  mov [rbp+560h+var_7C], 1
loc_1404AA885: /*1404aa885*/ mov rcx, r15
/*1404aa888*/  mov rdx, [rbp+560h+var_98]
/*1404aa88f*/  call sub_14149C500
/*1404aa894*/  nop
/*1404aa895*/  mov [rbp+560h+var_7C], 1
/*1404aa89c*/  lea rcx, [rbp+560h+var_3B0]
/*1404aa8a3*/  mov rdx, r15
/*1404aa8a6*/  call sub_140474440
/*1404aa8ab*/  nop
/*1404aa8ac*/  mov rsi, qword ptr [rbp+560h+var_260]
/*1404aa8b3*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aa8b7*/  jmp short loc_1404AA8DA
loc_1404AA8B9: /*1404aa8b9*/ mov dil, 1
loc_1404AA8BC: /*1404aa8bc*/ mov [rbp+560h+var_7C], dil
/*1404aa8c3*/  lea rcx, [rbp+560h+var_3F0]
/*1404aa8ca*/  call sub_14043D020
/*1404aa8cf*/  nop
/*1404aa8d0*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aa8d4*/  setnz al
/*1404aa8d7*/  test al, dil
loc_1404AA8DA: /*1404aa8da*/ mov rdi, [rbp+560h+var_88]
/*1404aa8e1*/  jz short loc_1404AA939
/*1404aa8e3*/  test rsi, rsi
/*1404aa8e6*/  jz short loc_1404AA8FD
/*1404aa8e8*/  mov rcx, qword ptr [rbp+560h+var_260+8]
/*1404aa8ef*/  mov r8d, 1
/*1404aa8f5*/  mov rdx, rsi
/*1404aa8f8*/  call sub_140001660
loc_1404AA8FD: /*1404aa8fd*/ mov rdx, qword ptr [rbp+560h+var_240]
/*1404aa904*/  test rdx, rdx
/*1404aa907*/  jz short loc_1404AA91B
/*1404aa909*/  mov rcx, qword ptr [rbp+560h+var_240+8]
/*1404aa910*/  mov r8d, 1
/*1404aa916*/  call sub_140001660
loc_1404AA91B: /*1404aa91b*/ mov rdx, qword ptr [rbp+560h+var_230+8]
/*1404aa922*/  test rdx, rdx
/*1404aa925*/  jz short loc_1404AA939
/*1404aa927*/  mov rcx, qword ptr [rbp+560h+var_220]
/*1404aa92e*/  mov r8d, 1
/*1404aa934*/  call sub_140001660
loc_1404AA939: /*1404aa939*/ mov rdx, [rbp+560h+var_148]
/*1404aa940*/  test rdx, rdx
/*1404aa943*/  jz short loc_1404AA957
/*1404aa945*/  mov r8d, 1
/*1404aa94b*/  mov rcx, [rbp+560h+var_208]
/*1404aa952*/  call sub_140001660
loc_1404AA957: /*1404aa957*/ mov rdx, [rbp+560h+var_128]
/*1404aa95e*/  test rdx, rdx
/*1404aa961*/  mov r12, [rbp+560h+var_380]
/*1404aa968*/  jz short loc_1404AA97C
/*1404aa96a*/  mov r8d, 1
/*1404aa970*/  mov rcx, [rbp+560h+var_200]
/*1404aa977*/  call sub_140001660
loc_1404AA97C: /*1404aa97c*/ test rdi, rdi
/*1404aa97f*/  jz loc_1404A9C25
/*1404aa985*/  mov r8d, 1
/*1404aa98b*/  mov rcx, [rbp+560h+var_140]
/*1404aa992*/  mov rdx, rdi
/*1404aa995*/  call sub_140001660
/*1404aa99a*/  jmp loc_1404A9C25
loc_1404AA99F: /*1404aa99f*/ mov [rbp+560h+var_88], rdx
/*1404aa9a6*/  mov [rbp+560h+var_140], rcx
/*1404aa9ad*/  mov r8d, 1
/*1404aa9b3*/  mov rcx, r15
/*1404aa9b6*/  lea rdx, [rbp+560h+var_260+8]
/*1404aa9bd*/  call sub_14042B0E0
/*1404aa9c2*/  nop
/*1404aa9c3*/  mov rsi, qword ptr [rbp+560h+var_120]
/*1404aa9ca*/  mov rcx, qword ptr [rbp+560h+var_120+8]
/*1404aa9d1*/  mov rdx, qword ptr [rbp+560h+var_110]
/*1404aa9d8*/  mov rbx, qword ptr [rbp+560h+var_110+8]
/*1404aa9df*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aa9e3*/  jz short loc_1404AAA5D
/*1404aa9e5*/  lea rax, [rbp+560h+var_120+8]
/*1404aa9ec*/  movdqu xmm0, xmmword ptr [rax+18h]
/*1404aa9f1*/  movups xmm1, xmmword ptr [rax+28h]
/*1404aa9f5*/  lea rax, [rbp+560h+var_1E0+8]
/*1404aa9fc*/  movups xmmword ptr [rax+18h], xmm1
/*1404aaa00*/  movdqu xmmword ptr [rax+8], xmm0
/*1404aaa05*/  mov qword ptr [rbp+560h+var_1F8+10h], rcx
/*1404aaa0c*/  mov qword ptr [rbp+560h+var_1E0], rdx
/*1404aaa13*/  mov qword ptr [rbp+560h+var_1E0+8], rbx
/*1404aaa1a*/  mov qword ptr [rbp+560h+var_1F8+8], rsi
/*1404aaa21*/  mov qword ptr [rbp+560h+var_1F8], 0FFFFFFFFFFFFFFFFh
/*1404aaa2c*/  mov rdi, 0FFFFFFFFFFFFFFFFh
/*1404aaa33*/  mov rdx, [rbp+560h+var_88]
/*1404aaa3a*/  test rdx, rdx
/*1404aaa3d*/  jz loc_1404AAB40
/*1404aaa43*/  mov r8d, 1
/*1404aaa49*/  mov rcx, [rbp+560h+var_140]
/*1404aaa50*/  call sub_140001660
/*1404aaa55*/  mov r12, rsi
/*1404aaa58*/  jmp loc_1404AABB0
loc_1404AAA5D: /*1404aaa5d*/ mov [rbp+560h+var_148], rdx
/*1404aaa64*/  mov [rbp+560h+var_128], rcx
/*1404aaa6b*/  mov r8d, 2
/*1404aaa71*/  mov rcx, r15
/*1404aaa74*/  lea rdx, [rbp+560h+var_260+8]
/*1404aaa7b*/  call sub_14042B0E0
/*1404aaa80*/  nop
/*1404aaa81*/  mov rsi, qword ptr [rbp+560h+var_120]
/*1404aaa88*/  lea rcx, [rbp+560h+var_120+8]
/*1404aaa8f*/  movups xmm0, xmmword ptr [rcx]
/*1404aaa92*/  movaps [rbp+560h+var_1B0], xmm0
/*1404aaa99*/  mov rax, [rcx+10h]
/*1404aaa9d*/  mov qword ptr [rbp+560h+var_1A0], rax
/*1404aaaa4*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1404aaaa8*/  jz loc_1404AAB45
/*1404aaaae*/  movups xmm0, xmmword ptr [rcx+18h]
/*1404aaab2*/  movups xmm1, xmmword ptr [rcx+28h]
/*1404aaab6*/  lea rcx, [rbp+560h+var_1E0+8]
/*1404aaabd*/  movups xmmword ptr [rcx+18h], xmm1
/*1404aaac1*/  movups xmmword ptr [rcx+8], xmm0
/*1404aaac5*/  mov rax, qword ptr [rbp+560h+var_1A0]
/*1404aaacc*/  mov [rcx], rax
/*1404aaacf*/  movdqa xmm0, [rbp+560h+var_1B0]
/*1404aaad7*/  movdqu xmmword ptr [rcx-10h], xmm0
/*1404aaadc*/  mov qword ptr [rbp+560h+var_1F8+8], rsi
/*1404aaae3*/  mov qword ptr [rbp+560h+var_1F8], 0FFFFFFFFFFFFFFFFh
/*1404aaaee*/  mov rdx, [rbp+560h+var_128]
/*1404aaaf5*/  test rdx, rdx
/*1404aaaf8*/  mov rdi, [rbp+560h+var_140]
/*1404aaaff*/  mov r12, [rbp+560h+var_88]
/*1404aab06*/  jz short loc_1404AAB1A
/*1404aab08*/  mov r8d, 1
/*1404aab0e*/  mov rcx, [rbp+560h+var_148]
/*1404aab15*/  call sub_140001660
loc_1404AAB1A: /*1404aab1a*/ test r12, r12
/*1404aab1d*/  lea rbx, [rbp+560h+var_260]
/*1404aab24*/  jz loc_1404A9F5C
/*1404aab2a*/  mov r8d, 1
/*1404aab30*/  mov rcx, rdi
/*1404aab33*/  mov rdx, r12
/*1404aab36*/  call sub_140001660
/*1404aab3b*/  jmp loc_1404A9F5C
loc_1404AAB40: /*1404aab40*/ mov r12, rsi
/*1404aab43*/  jmp short loc_1404AABB0
loc_1404AAB45: /*1404aab45*/ mov rax, qword ptr [rbp+560h+var_1A0]
/*1404aab4c*/  lea rcx, [rbp+560h+var_1E0+8]
/*1404aab53*/  mov [rcx+20h], rax
/*1404aab57*/  movdqa xmm0, [rbp+560h+var_1B0]
/*1404aab5f*/  movdqu xmmword ptr [rcx+10h], xmm0
/*1404aab64*/  mov rax, [rbp+560h+var_88]
/*1404aab6b*/  mov qword ptr [rbp+560h+var_1F8], rax
/*1404aab72*/  mov r12, [rbp+560h+var_140]
/*1404aab79*/  mov qword ptr [rbp+560h+var_1F8+8], r12
/*1404aab80*/  mov qword ptr [rbp+560h+var_1F8+10h], rdi
/*1404aab87*/  mov rcx, [rbp+560h+var_128]
/*1404aab8e*/  mov qword ptr [rbp+560h+var_1E0], rcx
/*1404aab95*/  mov rcx, [rbp+560h+var_148]
/*1404aab9c*/  mov qword ptr [rbp+560h+var_1E0+8], rcx
/*1404aaba3*/  mov [rbp+560h+var_1D0], rbx
/*1404aabaa*/  mov rsi, r12
/*1404aabad*/  mov rdi, rax
loc_1404AABB0: /*1404aabb0*/ lea rbx, [rbp+560h+var_260]
/*1404aabb7*/  jmp loc_1404A9F66
loc_1404AABBC: /*1404aabbc*/ lea rcx, [rbp+560h+var_2D0]
/*1404aabc3*/  call sub_14043C900
/*1404aabc8*/  nop
/*1404aabc9*/  jmp loc_1404A973D
loc_1404AABCE: /*1404aabce*/ mov r8d, 0Dh
/*1404aabd4*/  lea rcx, [rbp+560h+var_2D0]
/*1404aabdb*/  lea rdx, aModelRestore; "model restore"
/*1404aabe2*/  call checkpoint_after_committed_write
/*1404aabe7*/  nop
loc_1404AABE8: /*1404aabe8*/ lea rcx, [rbp+560h+var_2D0]
/*1404aabef*/  call sub_14043C900
/*1404aabf4*/  nop
/*1404aabf5*/  jmp loc_1404A973D
loc_1404AABFA: /*1404aabfa*/ mov rax, [rbp+560h+var_A0]
/*1404aac01*/  cmp [rbp+560h+var_338], rax
/*1404aac08*/  jz short loc_1404AAC33
/*1404aac0a*/  shr r14, 5
/*1404aac0e*/  jmp short loc_1404AAC19
loc_1404AAC10: /*1404aac10*/ add r13, 20h ; ' '
/*1404aac14*/  dec r14
/*1404aac17*/  jz short loc_1404AAC33
loc_1404AAC19: /*1404aac19*/ mov rdx, [r13-8]
/*1404aac1d*/  test rdx, rdx
/*1404aac20*/  jz short loc_1404AAC10
/*1404aac22*/  mov rcx, [r13+0]
/*1404aac26*/  mov r8d, 1
/*1404aac2c*/  call sub_140001660
/*1404aac31*/  jmp short loc_1404AAC10
loc_1404AAC33: /*1404aac33*/ mov rdx, [rbp+560h+var_440]
/*1404aac3a*/  test rdx, rdx
/*1404aac3d*/  jz short loc_1404AAC55
/*1404aac3f*/  shl rdx, 5
/*1404aac43*/  mov r8d, 8
/*1404aac49*/  mov rcx, [rbp+560h+var_428]
/*1404aac50*/  call sub_140001660
loc_1404AAC55: /*1404aac55*/ mov qword ptr [rbp+560h+var_1F8], 0
/*1404aac60*/  mov qword ptr [rbp+560h+var_1F8+8], 8
/*1404aac6b*/  mov qword ptr [rbp+560h+var_1F8+10h], 0
/*1404aac76*/  mov r12, [rbp+560h+var_408]
/*1404aac7d*/  mov rax, [rbp+560h+var_400]
/*1404aac84*/  mov [rbp+560h+var_130], rax
/*1404aac8b*/  lea rax, [rax+rax*4]
/*1404aac8f*/  shl rax, 4
/*1404aac93*/  add rax, r12
/*1404aac96*/  mov [rbp+560h+var_A0], rax
/*1404aac9d*/  pcmpeqd xmm6, xmm6
/*1404aaca1*/  mov [rbp+560h+var_98], r12
/*1404aaca8*/  cmp r12, [rbp+560h+var_A0]
/*1404aacaf*/  jnz short loc_1404AACD0
/*1404aacb1*/  jmp loc_1404AB042
loc_1404AACC0: /*1404aacc0*/ mov r12, r14
/*1404aacc3*/  cmp r12, [rbp+560h+var_A0]
/*1404aacca*/  jz loc_1404AB042
loc_1404AACD0: /*1404aacd0*/ lea r14, [r12+50h]
/*1404aacd5*/  cmp qword ptr [rbp+560h+var_3A0+8], 0
/*1404aacdd*/  jz loc_1404AADB0
/*1404aace3*/  mov [rbp+560h+var_7A], 1
loc_1404AACEA: /*1404aacea*/ lea rcx, [rbp+560h+var_390]
/*1404aacf1*/  mov rdx, r12
/*1404aacf4*/  call sub_140378810
/*1404aacf9*/  nop
/*1404aacfa*/  mov r13, rax
/*1404aacfd*/  shr rax, 39h
/*1404aad01*/  mov r15, qword ptr [rbp+560h+var_3B0]
/*1404aad08*/  mov rdi, qword ptr [rbp+560h+var_3B0+8]
/*1404aad0f*/  movd xmm0, eax
/*1404aad13*/  punpcklbw xmm0, xmm0
/*1404aad17*/  pshuflw xmm0, xmm0, 0
/*1404aad1c*/  pshufd xmm7, xmm0, 44h ; 'D'
/*1404aad21*/  xor ecx, ecx
loc_1404AAD23: /*1404aad23*/ and r13, rdi
/*1404aad26*/  movdqu xmm8, xmmword ptr [r15+r13]
/*1404aad2c*/  movdqa xmm0, xmm8
/*1404aad31*/  pcmpeqb xmm0, xmm7
/*1404aad35*/  pmovmskb ebx, xmm0
/*1404aad39*/  test ebx, ebx
/*1404aad3b*/  jz short loc_1404AAD90
/*1404aad3d*/  mov rsi, [r12+10h]
/*1404aad42*/  mov [rbp+560h+var_138], rcx
loc_1404AAD49: /*1404aad49*/ tzcnt eax, ebx
/*1404aad4d*/  add rax, r13
/*1404aad50*/  and rax, rdi
/*1404aad53*/  neg rax
/*1404aad56*/  lea rax, [rax+rax*2]
/*1404aad5a*/  cmp rsi, [r15+rax*8-8]
/*1404aad5f*/  jnz short loc_1404AAD7E
/*1404aad61*/  lea rax, [r15+rax*8]
/*1404aad65*/  mov rdx, [rax-10h]
/*1404aad69*/  mov rcx, [r12+8]
/*1404aad6e*/  mov r8, rsi
/*1404aad71*/  call sub_1416847B0
/*1404aad76*/  test eax, eax
/*1404aad78*/  jz loc_1404AAEC0
loc_1404AAD7E: /*1404aad7e*/ lea eax, [rbx-1]
/*1404aad81*/  and ax, bx
/*1404aad84*/  mov ebx, eax
/*1404aad86*/  mov rcx, [rbp+560h+var_138]
/*1404aad8d*/  jnz short loc_1404AAD49
/*1404aad8f*/  nop
loc_1404AAD90: /*1404aad90*/ pcmpeqb xmm8, xmm6
/*1404aad95*/  pmovmskb eax, xmm8
/*1404aad9a*/  test eax, eax
/*1404aad9c*/  jnz short loc_1404AADB0
/*1404aad9e*/  add r13, rcx
/*1404aada1*/  add r13, 10h
/*1404aada5*/  add rcx, 10h
/*1404aada9*/  jmp loc_1404AAD23
loc_1404AADB0: /*1404aadb0*/ mov eax, [r12+48h]
/*1404aadb5*/  inc eax
/*1404aadb7*/  mov dword ptr [rbp+560h+var_3F0], eax
/*1404aadbd*/  cmp eax, 9
/*1404aadc0*/  jbe loc_1404AAEE0
/*1404aadc6*/  mov rax, cs:off_141EC8D80
/*1404aadcd*/  mov rax, [rax]
/*1404aadd0*/  cmp rax, 3
/*1404aadd4*/  jb loc_1404AACC0
/*1404aadda*/  mov qword ptr [rbp+560h+var_2D0], r12
/*1404aade1*/  lea rax, sub_1400015F0
/*1404aade8*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404aadef*/  lea rax, [rbp+560h+var_3F0]
/*1404aadf6*/  mov qword ptr [rbp+560h+var_2C0], rax
/*1404aadfd*/  lea rax, sub_1414AB780
/*1404aae04*/  mov qword ptr [rbp+560h+var_2C0+8], rax
/*1404aae0b*/  mov qword ptr [rbp+560h+var_120], 0
/*1404aae16*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404aae1d*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404aae24*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404aae2f*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404aae3a*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404aae41*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404aae48*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404aae53*/  mov qword ptr [rbp+560h+var_F0], 3
/*1404aae5e*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404aae65*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404aae70*/  mov rax, 97C00000001h
/*1404aae7a*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404aae81*/  lea rax, unk_14175B926
/*1404aae88*/  mov [rbp+560h+var_D0], rax
/*1404aae8f*/  lea rax, [rbp+560h+var_2D0]
/*1404aae96*/  mov qword ptr [rbp+560h+var_C8], rax
/*1404aae9d*/  mov [rbp+560h+var_7A], 1
/*1404aaea4*/  lea rcx, [rbp+560h+var_79]
/*1404aaeab*/  lea rdx, [rbp+560h+var_120]
/*1404aaeb2*/  call sub_1412C36A0
/*1404aaeb7*/  nop
/*1404aaeb8*/  jmp loc_1404AACC0
loc_1404AAEC0: /*1404aaec0*/ mov r12, r14
/*1404aaec3*/  cmp r12, [rbp+560h+var_A0]
/*1404aaeca*/  jnz loc_1404AACD0
/*1404aaed0*/  jmp loc_1404AB042
loc_1404AAEE0: /*1404aaee0*/ mov [rbp+560h+var_7A], 1
/*1404aaee7*/  lea rcx, [rbp+560h+var_260]
/*1404aaeee*/  mov rdx, r12
/*1404aaef1*/  call sub_14149C500
/*1404aaef6*/  nop
/*1404aaef7*/  lea rdx, [r12+18h]
loc_1404AAEFC: /*1404aaefc*/ lea rcx, [rbp+560h+var_330]
/*1404aaf03*/  call sub_14149C500
/*1404aaf08*/  nop
/*1404aaf09*/  add r12, 30h ; '0'
loc_1404AAF0D: /*1404aaf0d*/ lea rcx, [rbp+560h+var_1B0]
/*1404aaf14*/  mov rdx, r12
/*1404aaf17*/  call sub_14149C500
/*1404aaf1c*/  nop
/*1404aaf1d*/  mov rax, qword ptr [rbp+560h+var_250]
/*1404aaf24*/  mov qword ptr [rbp+560h+var_2C0], rax
/*1404aaf2b*/  movups xmm0, [rbp+560h+var_260]
/*1404aaf32*/  movaps [rbp+560h+var_2D0], xmm0
/*1404aaf39*/  mov rax, qword ptr [rbp+560h+var_320]
/*1404aaf40*/  lea rdx, [rbp+560h+var_2C0+8]
/*1404aaf47*/  mov [rdx+10h], rax
/*1404aaf4b*/  movups xmm0, [rbp+560h+var_330]
/*1404aaf52*/  movups xmmword ptr [rdx], xmm0
/*1404aaf55*/  mov rax, qword ptr [rbp+560h+var_1A0]
/*1404aaf5c*/  mov [rdx+28h], rax
/*1404aaf60*/  movups xmm0, [rbp+560h+var_1B0]
/*1404aaf67*/  movups xmmword ptr [rdx+18h], xmm0
/*1404aaf6b*/  mov rax, qword ptr [rbp+560h+var_2C0]
/*1404aaf72*/  mov qword ptr [rbp+560h+var_110], rax
/*1404aaf79*/  movaps xmm0, [rbp+560h+var_2D0]
/*1404aaf80*/  movaps [rbp+560h+var_120], xmm0
/*1404aaf87*/  mov rax, [rdx+10h]
/*1404aaf8b*/  lea rcx, [rbp+560h+var_120+8]
/*1404aaf92*/  mov [rcx+20h], rax
/*1404aaf96*/  movups xmm0, xmmword ptr [rdx]
/*1404aaf99*/  movups xmmword ptr [rcx+10h], xmm0
/*1404aaf9d*/  mov rax, [rdx+28h]
/*1404aafa1*/  lea rcx, [rbp+560h+var_F0]
/*1404aafa8*/  mov [rcx+10h], rax
/*1404aafac*/  movups xmm0, xmmword ptr [rdx+18h]
/*1404aafb0*/  movups xmmword ptr [rcx], xmm0
/*1404aafb3*/  mov eax, dword ptr [rbp+560h+var_3F0]
/*1404aafb9*/  mov dword ptr [rbp+560h+var_E0+8], eax
/*1404aafbf*/  mov rsi, qword ptr [rbp+560h+var_1F8+10h]
/*1404aafc6*/  cmp rsi, qword ptr [rbp+560h+var_1F8]
/*1404aafcd*/  jnz short loc_1404AAFDC
loc_1404AAFCF: /*1404aafcf*/ lea rcx, [rbp+560h+var_1F8]
/*1404aafd6*/  call sub_141689180
/*1404aafdb*/  nop
loc_1404AAFDC: /*1404aafdc*/ mov rax, qword ptr [rbp+560h+var_1F8+8]
/*1404aafe3*/  lea rcx, [rsi+rsi*4]
/*1404aafe7*/  shl rcx, 4
/*1404aafeb*/  movaps xmm0, [rbp+560h+var_E0]
/*1404aaff2*/  movups xmmword ptr [rax+rcx+40h], xmm0
/*1404aaff7*/  movdqa xmm0, [rbp+560h+var_120]
/*1404aafff*/  movaps xmm1, [rbp+560h+var_110]
/*1404ab006*/  movaps xmm2, [rbp+560h+var_100]
/*1404ab00d*/  movaps xmm3, [rbp+560h+var_F0]
/*1404ab014*/  movups xmmword ptr [rax+rcx+30h], xmm3
/*1404ab019*/  movups xmmword ptr [rax+rcx+20h], xmm2
/*1404ab01e*/  movups xmmword ptr [rax+rcx+10h], xmm1
/*1404ab023*/  movdqu xmmword ptr [rax+rcx], xmm0
/*1404ab028*/  inc rsi
/*1404ab02b*/  mov qword ptr [rbp+560h+var_1F8+10h], rsi
/*1404ab032*/  mov r12, r14
/*1404ab035*/  cmp r12, [rbp+560h+var_A0]
/*1404ab03c*/  jnz loc_1404AACD0
loc_1404AB042: /*1404ab042*/ mov [rbp+560h+var_7A], 1
loc_1404AB049: /*1404ab049*/ mov [rsp+5E0h+var_5C0], 19h
/*1404ab052*/  lea r9, unk_14175B73B
/*1404ab059*/  lea rcx, [rbp+560h+var_1B0]
/*1404ab060*/  mov rdx, [rbp+560h+var_438]
/*1404ab067*/  mov r8, [rbp+560h+var_430]
/*1404ab06e*/  call sub_141473FA0
/*1404ab073*/  nop
/*1404ab074*/  cmp qword ptr [rbp+560h+var_1F8+10h], 0
/*1404ab07c*/  jz loc_1404AB23D
/*1404ab082*/  mov rax, qword ptr [rbp+560h+var_1F8+10h]
/*1404ab089*/  mov qword ptr [rbp+560h+var_2C0], rax
/*1404ab090*/  movdqu xmm0, xmmword ptr [rbp+560h+var_1F8]
/*1404ab098*/  movdqa [rbp+560h+var_2D0], xmm0
/*1404ab0a0*/  mov dword ptr [rbp+560h+var_2C0+8], 1
loc_1404AB0AA: /*1404ab0aa*/ lea rcx, [rbp+560h+var_330]
/*1404ab0b1*/  lea rdx, [rbp+560h+var_2D0]
/*1404ab0b8*/  call sub_140440F40
/*1404ab0bd*/  nop
/*1404ab0be*/  mov rbx, [rbp+560h+var_378]
/*1404ab0c5*/  mov r15, [rbp+560h+var_130]
/*1404ab0cc*/  mov rax, qword ptr [rbp+560h+var_330]
/*1404ab0d3*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1404ab0d7*/  jz loc_1404AB378
/*1404ab0dd*/  mov [rbp+560h+var_A0], rax
/*1404ab0e4*/  mov r8, qword ptr [rbp+560h+var_330+8]
/*1404ab0eb*/  mov r9, qword ptr [rbp+560h+var_320]
/*1404ab0f2*/  mov rcx, qword ptr [rbp+560h+var_1B0+8]
/*1404ab0f9*/  mov rdx, qword ptr [rbp+560h+var_1A0]
loc_1404AB100: /*1404ab100*/ mov [rbp+560h+var_138], r8
/*1404ab107*/  call sub_14148D5C0
/*1404ab10c*/  nop
/*1404ab10d*/  mov rsi, rax
/*1404ab110*/  mov rdx, [rbp+560h+var_A0]
/*1404ab117*/  test rdx, rdx
/*1404ab11a*/  jz short loc_1404AB12E
/*1404ab11c*/  mov r8d, 1
/*1404ab122*/  mov rcx, [rbp+560h+var_138]
/*1404ab129*/  call sub_140001660
loc_1404AB12E: /*1404ab12e*/ test rsi, rsi
/*1404ab131*/  jz loc_1404AB221
/*1404ab137*/  mov qword ptr [rbp+560h+var_3F0], rsi
/*1404ab13e*/  mov rax, cs:off_141EC8D80
/*1404ab145*/  mov rax, [rax]
/*1404ab148*/  cmp rax, 2
/*1404ab14c*/  jb loc_1404AB214
/*1404ab152*/  lea rax, [rbp+560h+var_3F0]
/*1404ab159*/  mov qword ptr [rbp+560h+var_260], rax
/*1404ab160*/  lea rax, sub_141490720
/*1404ab167*/  mov qword ptr [rbp+560h+var_260+8], rax
/*1404ab16e*/  mov qword ptr [rbp+560h+var_120], 0
/*1404ab179*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404ab180*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404ab187*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404ab192*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404ab19d*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404ab1a4*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404ab1ab*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404ab1b6*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404ab1c1*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404ab1c8*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404ab1d3*/  mov rax, 99700000001h
/*1404ab1dd*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404ab1e4*/  lea rax, unk_14175B99D
/*1404ab1eb*/  mov [rbp+560h+var_D0], rax
/*1404ab1f2*/  lea rax, [rbp+560h+var_260]
/*1404ab1f9*/  mov qword ptr [rbp+560h+var_C8], rax
loc_1404AB200: /*1404ab200*/ lea rcx, [rbp+560h+var_79]
/*1404ab207*/  lea rdx, [rbp+560h+var_120]
/*1404ab20e*/  call sub_1412C36A0
/*1404ab213*/  nop
loc_1404AB214: /*1404ab214*/ lea rcx, [rbp+560h+var_3F0]
/*1404ab21b*/  call sub_140018650
/*1404ab220*/  nop
loc_1404AB221: /*1404ab221*/ mov rsi, qword ptr [rbp+560h+var_2D0+8]
/*1404ab228*/  mov rdi, qword ptr [rbp+560h+var_2C0]
/*1404ab22f*/  test rdi, rdi
/*1404ab232*/  jnz loc_1404AB4D4
/*1404ab238*/  jmp loc_1404AB532
loc_1404AB23D: /*1404ab23d*/ mov rcx, qword ptr [rbp+560h+var_1B0+8]
/*1404ab244*/  mov rdx, qword ptr [rbp+560h+var_1A0]
/*1404ab24b*/  mov [rbp+560h+var_7B], 1
loc_1404AB252: /*1404ab252*/ call sub_141485EF0
/*1404ab257*/  nop
/*1404ab258*/  mov rbx, [rbp+560h+var_378]
/*1404ab25f*/  mov r15, [rbp+560h+var_130]
/*1404ab266*/  mov dil, 1
/*1404ab269*/  test rax, rax
/*1404ab26c*/  jz loc_1404AB556
/*1404ab272*/  mov qword ptr [rbp+560h+var_330], rax
/*1404ab279*/  mov rcx, rax
/*1404ab27c*/  call sub_140476D40
/*1404ab281*/  test al, al
/*1404ab283*/  jz loc_1404AB35F
/*1404ab289*/  mov rax, cs:off_141EC8D80
/*1404ab290*/  mov rax, [rax]
/*1404ab293*/  cmp rax, 2
/*1404ab297*/  jb loc_1404AB35F
/*1404ab29d*/  lea rax, [rbp+560h+var_330]
/*1404ab2a4*/  mov qword ptr [rbp+560h+var_2D0], rax
/*1404ab2ab*/  lea rax, sub_141490720
/*1404ab2b2*/  mov qword ptr [rbp+560h+var_2D0+8], rax
/*1404ab2b9*/  mov qword ptr [rbp+560h+var_120], 0
/*1404ab2c4*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404ab2cb*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404ab2d2*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404ab2dd*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404ab2e8*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404ab2ef*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404ab2f6*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404ab301*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404ab30c*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404ab313*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404ab31e*/  mov rax, 98C00000001h
/*1404ab328*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404ab32f*/  lea rax, unk_14175B96A
/*1404ab336*/  mov [rbp+560h+var_D0], rax
/*1404ab33d*/  lea rax, [rbp+560h+var_2D0]
/*1404ab344*/  mov qword ptr [rbp+560h+var_C8], rax
loc_1404AB34B: /*1404ab34b*/ lea rcx, [rbp+560h+var_79]
/*1404ab352*/  lea rdx, [rbp+560h+var_120]
/*1404ab359*/  call sub_1412C36A0
/*1404ab35e*/  nop
loc_1404AB35F: /*1404ab35f*/ mov [rbp+560h+var_7B], 1
loc_1404AB366: /*1404ab366*/ lea rcx, [rbp+560h+var_330]
/*1404ab36d*/  call sub_140018650
/*1404ab372*/  nop
/*1404ab373*/  jmp loc_1404AB556
loc_1404AB378: /*1404ab378*/ mov rcx, qword ptr [rbp+560h+var_330+8]
/*1404ab37f*/  mov qword ptr [rbp+560h+var_3F0], rcx
/*1404ab386*/  mov rax, cs:off_141EC8D80
/*1404ab38d*/  mov rax, [rax]
/*1404ab390*/  cmp rax, 2
/*1404ab394*/  jb loc_1404AB463
/*1404ab39a*/  lea rax, [rbp+560h+var_3F0]
/*1404ab3a1*/  mov qword ptr [rbp+560h+var_260], rax
/*1404ab3a8*/  lea rax, sub_14142D3F0
/*1404ab3af*/  mov qword ptr [rbp+560h+var_260+8], rax
/*1404ab3b6*/  mov qword ptr [rbp+560h+var_120], 0
/*1404ab3c1*/  lea rax, aCodexmateLibCo_0; "codexmate_lib::core::relay::codex_threa"...
/*1404ab3c8*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404ab3cf*/  mov qword ptr [rbp+560h+var_110], 33h ; '3'
/*1404ab3da*/  mov qword ptr [rbp+560h+var_110+8], 0
/*1404ab3e5*/  lea rcx, aSrcCoreRelayCo_0; "src\\core\\relay\\codex_thread_visibili"...
/*1404ab3ec*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404ab3f3*/  mov qword ptr [rbp+560h+var_100+8], 29h ; ')'
/*1404ab3fe*/  mov qword ptr [rbp+560h+var_F0], 2
/*1404ab409*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404ab410*/  mov qword ptr [rbp+560h+var_E0], 33h ; '3'
/*1404ab41b*/  mov rax, 99B00000001h
/*1404ab425*/  mov qword ptr [rbp+560h+var_E0+8], rax
/*1404ab42c*/  lea rax, unk_14175B9D0
/*1404ab433*/  mov [rbp+560h+var_D0], rax
/*1404ab43a*/  lea rax, [rbp+560h+var_260]
/*1404ab441*/  mov qword ptr [rbp+560h+var_C8], rax
loc_1404AB448: /*1404ab448*/ lea rcx, [rbp+560h+var_79]
/*1404ab44f*/  lea rdx, [rbp+560h+var_120]
/*1404ab456*/  call sub_1412C36A0
/*1404ab45b*/  nop
/*1404ab45c*/  mov rcx, qword ptr [rbp+560h+var_3F0]
loc_1404AB463: /*1404ab463*/ mov rax, [rcx]
/*1404ab466*/  cmp rax, 1
/*1404ab46a*/  mov [rbp+560h+var_A0], rcx
/*1404ab471*/  jz short loc_1404AB4A0
/*1404ab473*/  test rax, rax
/*1404ab476*/  jnz short loc_1404AB4AA
/*1404ab478*/  mov rax, [rbp+560h+var_A0]
/*1404ab47f*/  mov rdx, [rax+10h]
/*1404ab483*/  test rdx, rdx
/*1404ab486*/  jz short loc_1404AB4AA
/*1404ab488*/  mov rax, [rbp+560h+var_A0]
/*1404ab48f*/  mov rcx, [rax+8]
/*1404ab493*/  mov r8d, 1
/*1404ab499*/  call sub_140001660
/*1404ab49e*/  jmp short loc_1404AB4AA
loc_1404AB4A0: /*1404ab4a0*/ add rcx, 8
loc_1404AB4A4: /*1404ab4a4*/ call sub_140018650
/*1404ab4a9*/  nop
loc_1404AB4AA: /*1404ab4aa*/ mov edx, 28h ; '('
/*1404ab4af*/  mov r8d, 8
/*1404ab4b5*/  mov rcx, [rbp+560h+var_A0]
/*1404ab4bc*/  call sub_140001660
/*1404ab4c1*/  mov rsi, qword ptr [rbp+560h+var_2D0+8]
/*1404ab4c8*/  mov rdi, qword ptr [rbp+560h+var_2C0]
/*1404ab4cf*/  test rdi, rdi
/*1404ab4d2*/  jz short loc_1404AB532
loc_1404AB4D4: /*1404ab4d4*/ lea r14, [rsi+38h]
/*1404ab4d8*/  jmp short loc_1404AB4E9
loc_1404AB4E0: /*1404ab4e0*/ add r14, 50h ; 'P'
/*1404ab4e4*/  dec rdi
/*1404ab4e7*/  jz short loc_1404AB532
loc_1404AB4E9: /*1404ab4e9*/ mov rdx, [r14-38h]
/*1404ab4ed*/  test rdx, rdx
/*1404ab4f0*/  jz short loc_1404AB501
/*1404ab4f2*/  mov rcx, [r14-30h]
/*1404ab4f6*/  mov r8d, 1
/*1404ab4fc*/  call sub_140001660
loc_1404AB501: /*1404ab501*/ mov rdx, [r14-20h]
/*1404ab505*/  test rdx, rdx
/*1404ab508*/  jz short loc_1404AB519
/*1404ab50a*/  mov rcx, [r14-18h]
/*1404ab50e*/  mov r8d, 1
/*1404ab514*/  call sub_140001660
loc_1404AB519: /*1404ab519*/ mov rdx, [r14-8]
/*1404ab51d*/  test rdx, rdx
/*1404ab520*/  jz short loc_1404AB4E0
/*1404ab522*/  mov rcx, [r14]
/*1404ab525*/  mov r8d, 1
/*1404ab52b*/  call sub_140001660
/*1404ab530*/  jmp short loc_1404AB4E0
loc_1404AB532: /*1404ab532*/ mov rax, qword ptr [rbp+560h+var_2D0]
/*1404ab539*/  test rax, rax
/*1404ab53c*/  jz short loc_1404AB554
/*1404ab53e*/  shl rax, 4
/*1404ab542*/  lea rdx, [rax+rax*4]
/*1404ab546*/  mov r8d, 8
/*1404ab54c*/  mov rcx, rsi
/*1404ab54f*/  call sub_140001660
loc_1404AB554: /*1404ab554*/ xor edi, edi
loc_1404AB556: /*1404ab556*/ lea rax, [rbp+560h+var_370]
/*1404ab55d*/  mov qword ptr [rbp+560h+var_120], rax
/*1404ab564*/  lea rax, sub_1414AC520
/*1404ab56b*/  mov qword ptr [rbp+560h+var_120+8], rax
/*1404ab572*/  lea rcx, [rbp+560h+var_370+8]
/*1404ab579*/  mov qword ptr [rbp+560h+var_110], rcx
/*1404ab580*/  mov qword ptr [rbp+560h+var_110+8], rax
/*1404ab587*/  lea rcx, [rbp+560h+var_360]
/*1404ab58e*/  mov qword ptr [rbp+560h+var_100], rcx
/*1404ab595*/  mov qword ptr [rbp+560h+var_100+8], rax
/*1404ab59c*/  lea rcx, [rbp+560h+var_360+8]
/*1404ab5a3*/  mov qword ptr [rbp+560h+var_F0], rcx
/*1404ab5aa*/  mov qword ptr [rbp+560h+var_F0+8], rax
/*1404ab5b1*/  mov [rbp+560h+var_7B], dil
loc_1404AB5B8: /*1404ab5b8*/ lea rdx, unk_14175BA0B
/*1404ab5bf*/  lea rsi, [rbp+560h+var_5A8]
/*1404ab5c3*/  lea r8, [rbp+560h+var_120]
/*1404ab5ca*/  mov rcx, rsi
/*1404ab5cd*/  call sub_14149C0F0
/*1404ab5d2*/  nop
/*1404ab5d3*/  mov [rbp+560h+var_7B], dil
/*1404ab5da*/  mov [rsp+5E0h+var_5C0], rsi
/*1404ab5df*/  lea rcx, aRelayModelRest; "relay_model_restore"
/*1404ab5e6*/  lea r8, aDone_2; "done"
/*1404ab5ed*/  mov edx, 13h
/*1404ab5f2*/  mov r9d, 4
/*1404ab5f8*/  call sub_1403565C0
/*1404ab5fd*/  nop
/*1404ab5fe*/  movdqa xmm0, [rbp+560h+var_370]
/*1404ab606*/  movaps xmm1, [rbp+560h+var_360]
/*1404ab60d*/  movups xmmword ptr [rbx+10h], xmm1
/*1404ab611*/  movdqu xmmword ptr [rbx], xmm0
/*1404ab615*/  mov rdx, qword ptr [rbp+560h+var_1B0]
/*1404ab61c*/  test rdx, rdx
/*1404ab61f*/  jz short loc_1404AB633
/*1404ab621*/  mov rcx, qword ptr [rbp+560h+var_1B0+8]
/*1404ab628*/  mov r8d, 1
/*1404ab62e*/  call sub_140001660
loc_1404AB633: /*1404ab633*/ test dil, dil
/*1404ab636*/  mov r14, [rbp+560h+var_98]
/*1404ab63d*/  jz loc_1404AB6D8
/*1404ab643*/  mov rsi, qword ptr [rbp+560h+var_1F8+10h]
/*1404ab64a*/  test rsi, rsi
/*1404ab64d*/  jz short loc_1404AB6B2
/*1404ab64f*/  mov rdi, qword ptr [rbp+560h+var_1F8+8]
/*1404ab656*/  add rdi, 38h ; '8'
/*1404ab65a*/  jmp short loc_1404AB669
loc_1404AB660: /*1404ab660*/ add rdi, 50h ; 'P'
/*1404ab664*/  dec rsi
/*1404ab667*/  jz short loc_1404AB6B2
loc_1404AB669: /*1404ab669*/ mov rdx, [rdi-38h]
/*1404ab66d*/  test rdx, rdx
/*1404ab670*/  jz short loc_1404AB681
/*1404ab672*/  mov rcx, [rdi-30h]
/*1404ab676*/  mov r8d, 1
/*1404ab67c*/  call sub_140001660
loc_1404AB681: /*1404ab681*/ mov rdx, [rdi-20h]
/*1404ab685*/  test rdx, rdx
/*1404ab688*/  jz short loc_1404AB699
/*1404ab68a*/  mov rcx, [rdi-18h]
/*1404ab68e*/  mov r8d, 1
/*1404ab694*/  call sub_140001660
loc_1404AB699: /*1404ab699*/ mov rdx, [rdi-8]
/*1404ab69d*/  test rdx, rdx
/*1404ab6a0*/  jz short loc_1404AB660
/*1404ab6a2*/  mov rcx, [rdi]
/*1404ab6a5*/  mov r8d, 1
/*1404ab6ab*/  call sub_140001660
/*1404ab6b0*/  jmp short loc_1404AB660
loc_1404AB6B2: /*1404ab6b2*/ mov rax, qword ptr [rbp+560h+var_1F8]
/*1404ab6b9*/  test rax, rax
/*1404ab6bc*/  jz short loc_1404AB6D8
/*1404ab6be*/  mov rcx, qword ptr [rbp+560h+var_1F8+8]
/*1404ab6c5*/  shl rax, 4
/*1404ab6c9*/  lea rdx, [rax+rax*4]
/*1404ab6cd*/  mov r8d, 8
/*1404ab6d3*/  call sub_140001660
loc_1404AB6D8: /*1404ab6d8*/ mov rsi, qword ptr [rbp+560h+var_3B0+8]
/*1404ab6df*/  test rsi, rsi
/*1404ab6e2*/  jz loc_1404AB7CF
/*1404ab6e8*/  mov rdi, qword ptr [rbp+560h+var_3A0+8]
/*1404ab6ef*/  test rdi, rdi
/*1404ab6f2*/  jz loc_1404AB789
/*1404ab6f8*/  mov r14, qword ptr [rbp+560h+var_3B0]
/*1404ab6ff*/  movdqa xmm0, xmmword ptr [r14]
/*1404ab704*/  lea r15, [r14+10h]
/*1404ab708*/  pmovmskb r12d, xmm0
/*1404ab70d*/  not r12d
/*1404ab710*/  jmp short loc_1404AB733
loc_1404AB720: /*1404ab720*/ dec rdi
/*1404ab723*/  lea eax, [r12-1]
/*1404ab728*/  and eax, r12d
/*1404ab72b*/  mov r12d, eax
/*1404ab72e*/  test rdi, rdi
/*1404ab731*/  jz short loc_1404AB789
loc_1404AB733: /*1404ab733*/ test r12w, r12w
/*1404ab737*/  jnz short loc_1404AB75E
/*1404ab739*/  nop dword ptr [rax+00000000h]
loc_1404AB740: /*1404ab740*/ movdqa xmm0, xmmword ptr [r15]
/*1404ab745*/  add r14, 0FFFFFFFFFFFFFE80h
/*1404ab74c*/  add r15, 10h
/*1404ab750*/  pmovmskb r12d, xmm0
/*1404ab755*/  xor r12d, 0FFFFh
/*1404ab75c*/  jz short loc_1404AB740
loc_1404AB75E: /*1404ab75e*/ tzcnt eax, r12d
/*1404ab763*/  neg rax
/*1404ab766*/  lea rax, [rax+rax*2]
/*1404ab76a*/  mov rdx, [r14+rax*8-18h]
/*1404ab76f*/  test rdx, rdx
/*1404ab772*/  jz short loc_1404AB720
/*1404ab774*/  lea rax, [r14+rax*8]
/*1404ab778*/  mov rcx, [rax-10h]
/*1404ab77c*/  mov r8d, 1
/*1404ab782*/  call sub_140001660
/*1404ab787*/  jmp short loc_1404AB720
loc_1404AB789: /*1404ab789*/ lea rax, [rsi+rsi*2]
/*1404ab78d*/  lea rax, ds:27h[rax*8]
/*1404ab795*/  and rax, 0FFFFFFFFFFFFFFF0h
/*1404ab799*/  add rsi, rax
/*1404ab79c*/  add rsi, 11h
/*1404ab7a0*/  mov rbx, [rbp+560h+var_378]
/*1404ab7a7*/  mov r14, [rbp+560h+var_98]
/*1404ab7ae*/  mov r15, [rbp+560h+var_130]
/*1404ab7b5*/  jz short loc_1404AB7CF
/*1404ab7b7*/  mov rcx, qword ptr [rbp+560h+var_3B0]
/*1404ab7be*/  sub rcx, rax
/*1404ab7c1*/  mov r8d, 10h
/*1404ab7c7*/  mov rdx, rsi
/*1404ab7ca*/  call sub_140001660
loc_1404AB7CF: /*1404ab7cf*/ mov rdx, [rbp+560h+var_350]
/*1404ab7d6*/  test rdx, rdx
/*1404ab7d9*/  jz short loc_1404AB7F2
/*1404ab7db*/  mov rcx, [rbp+560h+var_348]
/*1404ab7e2*/  shl rdx, 3
/*1404ab7e6*/  mov r8d, 8
/*1404ab7ec*/  call sub_140001660
/*1404ab7f1*/  nop
loc_1404AB7F2: /*1404ab7f2*/ lea rcx, [rbp+560h+var_550]
/*1404ab7f6*/  call sub_14043F2A0
/*1404ab7fb*/  nop
/*1404ab7fc*/  test r15, r15
/*1404ab7ff*/  jz short loc_1404AB862
/*1404ab801*/  add r14, 38h ; '8'
/*1404ab805*/  jmp short loc_1404AB819
loc_1404AB810: /*1404ab810*/ add r14, 50h ; 'P'
/*1404ab814*/  dec r15
/*1404ab817*/  jz short loc_1404AB862
loc_1404AB819: /*1404ab819*/ mov rdx, [r14-38h]
/*1404ab81d*/  test rdx, rdx
/*1404ab820*/  jz short loc_1404AB831
/*1404ab822*/  mov rcx, [r14-30h]
/*1404ab826*/  mov r8d, 1
/*1404ab82c*/  call sub_140001660
loc_1404AB831: /*1404ab831*/ mov rdx, [r14-20h]
/*1404ab835*/  test rdx, rdx
/*1404ab838*/  jz short loc_1404AB849
/*1404ab83a*/  mov rcx, [r14-18h]
/*1404ab83e*/  mov r8d, 1
/*1404ab844*/  call sub_140001660
loc_1404AB849: /*1404ab849*/ mov rdx, [r14-8]
/*1404ab84d*/  test rdx, rdx
/*1404ab850*/  jz short loc_1404AB810
/*1404ab852*/  mov rcx, [r14]
/*1404ab855*/  mov r8d, 1
/*1404ab85b*/  call sub_140001660
/*1404ab860*/  jmp short loc_1404AB810
loc_1404AB862: /*1404ab862*/ mov rax, [rbp+560h+var_410]
/*1404ab869*/  test rax, rax
/*1404ab86c*/  jz short loc_1404AB888
/*1404ab86e*/  mov rcx, [rbp+560h+var_408]
/*1404ab875*/  shl rax, 4
/*1404ab879*/  lea rdx, [rax+rax*4]
/*1404ab87d*/  mov r8d, 8
/*1404ab883*/  call sub_140001660
loc_1404AB888: /*1404ab888*/ mov rax, rbx
/*1404ab88b*/  movaps xmm6, [rbp+560h+var_70]
/*1404ab892*/  movaps xmm7, [rbp+560h+var_60]
/*1404ab899*/  movaps xmm8, [rbp+560h+var_50]
/*1404ab8a1*/  add rsp, 5A8h
/*1404ab8a8*/  pop rbx
/*1404ab8a9*/  pop rdi
/*1404ab8aa*/  pop rsi
/*1404ab8ab*/  pop r12
/*1404ab8ad*/  pop r13
/*1404ab8af*/  pop r14
/*1404ab8b1*/  pop r15
/*1404ab8b3*/  pop rbp
/*1404ab8b4*/  retn
loc_1404AB8B5: /*1404ab8b5*/ lea rcx, off_1417588A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1404ab8bc*/  call sub_1416C2FC0
/*1404ab8c2*/  ud2
loc_1404AB8C4: /*1404ab8c4*/ call sub_141486EF0
/*1404ab8c9*/  nop
loc_1404AB8CA: /*1404ab8ca*/ mov [rsi], rax
/*1404ab8cd*/  mov [rsi+8], rdx
/*1404ab8d1*/  mov byte ptr [rsi+10h], 1
/*1404ab8d5*/  jmp loc_1404A9594
