// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1884 fetched=1884 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404076D0(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  bool v13; // si
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r13
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // di
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  bool v37; // di
  __int64 v38; // rbx
  char *v39; // rsi
  char *v40; // rsi
  char v41; // r15
  unsi... [51777 chars total]

// ---- full disassembly reconstruction (1884/1884 instructions) ----
sub_1404076D0: /*1404076d0*/ push rbp
/*1404076d1*/  push r15
/*1404076d3*/  push r14
/*1404076d5*/  push r13
/*1404076d7*/  push r12
/*1404076d9*/  push rsi
/*1404076da*/  push rdi
/*1404076db*/  push rbx
/*1404076dc*/  sub rsp, 1F8h
/*1404076e3*/  lea rbp, [rsp+80h]
/*1404076eb*/  mov [rbp+1B0h+var_40], 0FFFFFFFFFFFFFFFEh
/*1404076f6*/  mov rsi, r9
/*1404076f9*/  mov [rbp+1B0h+var_F8], r8
/*140407700*/  mov [rbp+1B0h+var_F0], rdx
/*140407707*/  mov [rbp+1B0h+var_170], rcx
/*14040770b*/  mov rbx, [r9]
/*14040770e*/  mov r12, [r9+8]
/*140407712*/  imul r8, r12, 0E8h
/*140407719*/  add r8, rbx
/*14040771c*/  lea rcx, [rbp+1B0h+var_198]
/*140407720*/  mov rdx, rbx
/*140407723*/  call sub_14031B2D0
/*140407728*/  mov r8, [rbp+1B0h+var_188]
/*14040772c*/  mov r9, [rsi+10h]
/*140407730*/  mov [rbp+1B0h+var_70], rsi
/*140407737*/  mov rdx, [rsi+18h]
/*14040773b*/  test rdx, rdx
/*14040773e*/  jz loc_1404078C7
/*140407744*/  mov [rbp+1B0h+var_140], r12
/*140407748*/  mov [rbp+1B0h+var_138], rbx
/*14040774c*/  mov r12, [rbp+1B0h+var_190]
/*140407750*/  mov [rbp+1B0h+var_160], rdx
/*140407754*/  lea rax, [rdx+rdx*2]
/*140407758*/  lea rax, [r9+rax*8]
/*14040775c*/  mov [rbp+1B0h+var_48], rax
/*140407763*/  lea r14, ds:0[r8*8]
/*14040776b*/  mov [rbp+1B0h+var_168], r9
/*14040776f*/  mov r15, r9
/*140407772*/  mov [rbp+1B0h+var_50], r8
/*140407779*/  jmp short loc_1404077C5
loc_14040777B: /*14040777b*/ test r13, r13
/*14040777e*/  setnz sil
/*140407782*/  mov rax, [rbp+1B0h+var_E8]
/*140407789*/  test rax, rax
/*14040778c*/  jz short loc_1404077A4
loc_14040778E: /*14040778e*/ shl rax, 5
/*140407792*/  lea rdx, [rax+rax*2]
/*140407796*/  mov r8d, 8
/*14040779c*/  mov rcx, rbx
/*14040779f*/  call sub_140001660
loc_1404077A4: /*1404077a4*/ test sil, sil
/*1404077a7*/  jnz loc_1404078CB
loc_1404077AD: /*1404077ad*/ add r15, 18h
/*1404077b1*/  cmp r15, [rbp+1B0h+var_48]
/*1404077b8*/  mov r8, [rbp+1B0h+var_50]
/*1404077bf*/  jz loc_1404078B3
loc_1404077C5: /*1404077c5*/ test r8, r8
/*1404077c8*/  jz short loc_1404077AD
/*1404077ca*/  mov rsi, [r15+8]
/*1404077ce*/  mov rbx, [r15+10h]
/*1404077d2*/  xor r13d, r13d
/*1404077d5*/  jmp short loc_1404077E9
loc_1404077E0: /*1404077e0*/ add r13, 8
/*1404077e4*/  cmp r14, r13
/*1404077e7*/  jz short loc_1404077AD
loc_1404077E9: /*1404077e9*/ mov rdi, [r12+r13]
/*1404077ed*/  cmp [rdi+10h], rbx
/*1404077f1*/  jnz short loc_1404077E0
/*1404077f3*/  mov rcx, [rdi+8]
/*1404077f7*/  mov rdx, rsi
/*1404077fa*/  mov r8, rbx
/*1404077fd*/  call sub_1416847B0
/*140407802*/  test eax, eax
/*140407804*/  jnz short loc_1404077E0
loc_140407806: /*140407806*/ lea rcx, [rbp+1B0h+var_E8]
/*14040780d*/  mov rdx, rdi
/*140407810*/  call sub_140AC8E60
/*140407815*/  nop
/*140407816*/  mov rbx, [rbp+1B0h+var_E0]
/*14040781d*/  mov rdi, [rbp+1B0h+var_D8]
/*140407824*/  test rdi, rdi
/*140407827*/  jz short loc_14040789C
/*140407829*/  mov rcx, [rbx+18h]
/*14040782d*/  mov rdx, [rbx+20h]
/*140407831*/  call sub_14033BC10
/*140407836*/  mov r13, rdx
/*140407839*/  lea rsi, [rbx+48h]
/*14040783d*/  jmp short loc_14040784D
loc_140407840: /*140407840*/ add rsi, 60h ; '`'
/*140407844*/  dec rdi
/*140407847*/  jz loc_14040777B
loc_14040784D: /*14040784d*/ mov rdx, [rsi-38h]
/*140407851*/  test rdx, rdx
/*140407854*/  jz short loc_140407865
/*140407856*/  mov rcx, [rsi-30h]
/*14040785a*/  mov r8d, 1
/*140407860*/  call sub_140001660
loc_140407865: /*140407865*/ mov rdx, [rsi-8]
/*140407869*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*14040786d*/  jz short loc_140407882
/*14040786f*/  test rdx, rdx
/*140407872*/  jz short loc_140407882
/*140407874*/  mov rcx, [rsi]
/*140407877*/  mov r8d, 1
/*14040787d*/  call sub_140001660
loc_140407882: /*140407882*/ mov rdx, [rsi-20h]
/*140407886*/  test rdx, rdx
/*140407889*/  jz short loc_140407840
/*14040788b*/  mov rcx, [rsi-18h]
/*14040788f*/  mov r8d, 1
/*140407895*/  call sub_140001660
/*14040789a*/  jmp short loc_140407840
loc_14040789C: /*14040789c*/ xor esi, esi
/*14040789e*/  mov rax, [rbp+1B0h+var_E8]
/*1404078a5*/  test rax, rax
/*1404078a8*/  jnz loc_14040778E
/*1404078ae*/  jmp loc_1404077A4
loc_1404078B3: /*1404078b3*/ xor edi, edi
/*1404078b5*/  mov rbx, [rbp+1B0h+var_138]
/*1404078b9*/  mov r12, [rbp+1B0h+var_140]
/*1404078bd*/  mov r9, [rbp+1B0h+var_168]
/*1404078c1*/  mov rdx, [rbp+1B0h+var_160]
/*1404078c5*/  jmp short loc_1404078E5
loc_1404078C7: /*1404078c7*/ xor edi, edi
/*1404078c9*/  jmp short loc_1404078E5
loc_1404078CB: /*1404078cb*/ mov dil, 1
/*1404078ce*/  mov rbx, [rbp+1B0h+var_138]
/*1404078d2*/  mov r12, [rbp+1B0h+var_140]
/*1404078d6*/  mov r9, [rbp+1B0h+var_168]
/*1404078da*/  mov rdx, [rbp+1B0h+var_160]
/*1404078de*/  mov r8, [rbp+1B0h+var_50]
loc_1404078E5: /*1404078e5*/ mov rcx, [rbp+1B0h+var_70]
/*1404078ec*/  movzx eax, byte ptr [rcx+40h]
/*1404078f0*/  xor al, 1
/*1404078f2*/  mov r15, [rcx+20h]
/*1404078f6*/  mov r14, [rcx+30h]
/*1404078fa*/  test r15, r15
/*1404078fd*/  setz cl
/*140407900*/  or cl, al
/*140407902*/  test r14, r14
/*140407905*/  setz al
/*140407908*/  or al, cl
/*14040790a*/  cmp al, 1
/*14040790c*/  jz short loc_140407913
/*14040790e*/  test r8, r8
/*140407911*/  jnz short loc_140407915
loc_140407913: /*140407913*/ xor edi, edi
loc_140407915: /*140407915*/ mov [rsp+230h+var_210], rdx
/*14040791a*/  lea rcx, [rbp+1B0h+var_1E0]
/*14040791e*/  mov rdx, rbx
/*140407921*/  mov r8, r12
/*140407924*/  call sub_140AE79F0
/*140407929*/  nop
loc_14040792A: /*14040792a*/ mov rcx, rbp
/*14040792d*/  mov rdx, [rbp+1B0h+var_F0]
/*140407934*/  mov r8, [rbp+1B0h+var_F8]
/*14040793b*/  call strip_all_managed_blocks
/*140407940*/  nop
/*140407941*/  mov rdx, [rbp+1B0h+var_1A8]
/*140407945*/  mov rsi, [rbp+1B0h+var_1A0]
/*140407949*/  test dil, dil
/*14040794c*/  jz short loc_14040796A
/*14040794e*/  test rsi, rsi
/*140407951*/  jns loc_140407A2A
/*140407957*/  xor edi, edi
loc_140407959: /*140407959*/ mov rcx, rdi
/*14040795c*/  mov rdx, rsi
/*14040795f*/  call sub_1416C2D4B
/*140407965*/  jmp loc_140409B06
loc_14040796A: /*14040796a*/ lea rax, [rbp+1B0h+var_1E0]
/*14040796e*/  mov [rsp+230h+var_210], rax
/*140407973*/  lea rcx, [rbp+1B0h+var_158]
/*140407977*/  mov r8, rsi
/*14040797a*/  xor r9d, r9d
/*14040797d*/  call sub_14040F7E0
/*140407982*/  nop
loc_140407983: /*140407983*/ mov rcx, 0FFFFFFFFFFFFFFFFh
loc_14040798A: /*14040798a*/ mov r12, [rbp+1B0h+var_150]
/*14040798e*/  mov r13, [rbp+1B0h+var_148]
/*140407992*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*140407996*/  setz dil
/*14040799a*/  mov [rbp+1B0h+var_E8], 0
/*1404079a5*/  mov [rbp+1B0h+var_E0], 1
/*1404079b0*/  mov [rbp+1B0h+var_D8], 0
loc_1404079BB: /*1404079bb*/ mov [rbp+1B0h+var_50], rcx
/*1404079c2*/  mov rbx, 0FFFFFFFFFFFFFFFFh
/*1404079c9*/  test r13, r13
/*1404079cc*/  jz loc_140407A63
/*1404079d2*/  xor esi, esi
/*1404079d4*/  xor eax, eax
/*1404079d6*/  sub rax, rsi
/*1404079d9*/  cmp r13, rax
/*1404079dc*/  ja loc_1404092E1
loc_1404079E2: /*1404079e2*/ mov rcx, [rbp+1B0h+var_E0]
/*1404079e9*/  add rcx, rsi
/*1404079ec*/  mov rdx, r12
/*1404079ef*/  mov r8, r13
/*1404079f2*/  call sub_141684120
/*1404079f7*/  add rsi, r13
/*1404079fa*/  mov [rbp+1B0h+var_D8], rsi
/*140407a01*/  cmp byte ptr [r12+r13-1], 0Ah
/*140407a07*/  jnz short loc_140407A7D
loc_140407A09: /*140407a09*/ mov r15b, 1
/*140407a0c*/  test dil, dil
/*140407a0f*/  jnz loc_140407BFC
/*140407a15*/  test rsi, rsi
/*140407a18*/  jz loc_140407DEB
/*140407a1e*/  mov rdi, [rbp+1B0h+var_F8]
/*140407a25*/  jmp loc_140407AB2
loc_140407A2A: /*140407a2a*/ mov [rbp+1B0h+var_138], r14
/*140407a2e*/  mov [rbp+1B0h+var_140], r15
/*140407a32*/  jz loc_140407AF3
/*140407a38*/  mov rbx, rdx
/*140407a3b*/  call nullsub_1
/*140407a40*/  mov edi, 1
/*140407a45*/  mov edx, 1
/*140407a4a*/  mov rcx, rsi
/*140407a4d*/  call sub_140001650
/*140407a52*/  test rax, rax
/*140407a55*/  jz loc_140407959
/*140407a5b*/  mov rdx, rbx
/*140407a5e*/  jmp loc_140407AF8
loc_140407A63: /*140407a63*/ mov r15b, 1
/*140407a66*/  xor esi, esi
/*140407a68*/  test dil, dil
/*140407a6b*/  mov rdi, [rbp+1B0h+var_F8]
/*140407a72*/  jz loc_140407BA1
/*140407a78*/  jmp loc_140407BFC
loc_140407A7D: /*140407a7d*/ cmp [rbp+1B0h+var_E8], rsi
/*140407a84*/  jz loc_14040939B
loc_140407A8A: /*140407a8a*/ mov rax, [rbp+1B0h+var_E0]
/*140407a91*/  mov byte ptr [rax+rsi], 0Ah
/*140407a95*/  inc rsi
/*140407a98*/  mov [rbp+1B0h+var_D8], rsi
/*140407a9f*/  mov r15b, 1
/*140407aa2*/  test dil, dil
/*140407aa5*/  mov rdi, [rbp+1B0h+var_F8]
/*140407aac*/  jnz loc_140407BFC
loc_140407AB2: /*140407ab2*/ mov rax, [rbp+1B0h+var_E0]
/*140407ab9*/  cmp rsi, 1
/*140407abd*/  jz short loc_140407ACC
/*140407abf*/  cmp word ptr [rax+rsi-2], 0A0Ah
/*140407ac6*/  jz loc_140407BA1
loc_140407ACC: /*140407acc*/ cmp byte ptr [rax+rsi-1], 0Ah
/*140407ad1*/  mov rcx, [rbp+1B0h+var_E8]
/*140407ad8*/  jnz loc_140407B83
/*140407ade*/  cmp rcx, rsi
/*140407ae1*/  jz loc_14040976B
loc_140407AE7: /*140407ae7*/ mov byte ptr [rax+rsi], 0Ah
/*140407aeb*/  inc rsi
/*140407aee*/  jmp loc_140407B9A
loc_140407AF3: /*140407af3*/ mov eax, 1
loc_140407AF8: /*140407af8*/ mov [rbp+1B0h+var_68], rsi
/*140407aff*/  mov [rbp+1B0h+var_50], rax
/*140407b06*/  mov [rbp+1B0h+var_60], rax
/*140407b0d*/  mov [rbp+1B0h+var_58], 0
/*140407b18*/  mov [rbp+1B0h+var_E8], 0
/*140407b23*/  mov [rbp+1B0h+var_E0], rsi
/*140407b2a*/  lea rdi, [rbp+1B0h+var_D8]
/*140407b31*/  mov [rbp+1B0h+var_D8], rdx
/*140407b38*/  mov [rbp+1B0h+var_D0], rsi
/*140407b3f*/  mov [rbp+1B0h+var_C8], 0
/*140407b4a*/  mov [rbp+1B0h+var_C0], rsi
/*140407b51*/  mov rbx, 0A0000000Ah
/*140407b5b*/  mov [rbp+1B0h+var_B8], rbx
/*140407b62*/  mov [rbp+1B0h+var_B0], 1
/*140407b69*/  mov [rbp+1B0h+var_A8], 0
/*140407b72*/  xor esi, esi
/*140407b74*/  lea r15, [rbp+1B0h+var_130]
/*140407b7b*/  xor r12d, r12d
/*140407b7e*/  jmp loc_140407F0D
loc_140407B83: /*140407b83*/ sub rcx, rsi
/*140407b86*/  cmp rcx, 1
/*140407b8a*/  jbe loc_1404097CD
loc_140407B90: /*140407b90*/ mov word ptr [rax+rsi], 0A0Ah
/*140407b96*/  add rsi, 2
loc_140407B9A: /*140407b9a*/ mov [rbp+1B0h+var_D8], rsi
loc_140407BA1: /*140407ba1*/ mov rax, [rbp+1B0h+var_E8]
/*140407ba8*/  sub rax, rsi
/*140407bab*/  cmp rdi, rax
/*140407bae*/  ja loc_140407E07
loc_140407BB4: /*140407bb4*/ mov rcx, [rbp+1B0h+var_E0]
/*140407bbb*/  add rcx, rsi
/*140407bbe*/  mov rdx, [rbp+1B0h+var_48]
/*140407bc5*/  mov r8, rdi
/*140407bc8*/  call sub_141684120
/*140407bcd*/  add rsi, rdi
/*140407bd0*/  mov [rbp+1B0h+var_D8], rsi
/*140407bd7*/  cmp [rbp+1B0h+var_E8], rsi
/*140407bde*/  jz loc_140409340
loc_140407BE4: /*140407be4*/ mov rax, [rbp+1B0h+var_E0]
/*140407beb*/  mov byte ptr [rax+rsi], 0Ah
/*140407bef*/  inc rsi
/*140407bf2*/  mov [rbp+1B0h+var_D8], rsi
/*140407bf9*/  xor r15d, r15d
loc_140407BFC: /*140407bfc*/ mov r14, [rbp+1B0h+var_E0]
/*140407c03*/  mov rax, [rbp+1B0h+var_70]
/*140407c0a*/  mov [rbp+1B0h+var_100], rax
/*140407c11*/  mov [rbp+1B0h+var_108], rbx
/*140407c18*/  mov rax, [rbp+1B0h+var_48]
/*140407c1f*/  mov [rbp+1B0h+var_110], rax
/*140407c26*/  mov rax, [rbp+1B0h+var_50]
/*140407c2d*/  mov [rbp+1B0h+var_118], rax
loc_140407C34: /*140407c34*/ mov rcx, [rbp+1B0h+var_170]
/*140407c38*/  mov rdx, r14
/*140407c3b*/  mov r8, rsi
/*140407c3e*/  call sub_1404112A0
/*140407c43*/  nop
/*140407c44*/  mov rdx, [rbp+1B0h+var_E8]
/*140407c4b*/  test rdx, rdx
/*140407c4e*/  jz short loc_140407C5E
/*140407c50*/  mov r8d, 1
/*140407c56*/  mov rcx, r14
/*140407c59*/  call sub_140001660
loc_140407C5E: /*140407c5e*/ lea rax, [rbx-1]
/*140407c62*/  cmp rax, 0FFFFFFFFFFFFFFFDh
/*140407c66*/  mov rsi, [rbp+1B0h+var_50]
/*140407c6d*/  mov rcx, [rbp+1B0h+var_70]
/*140407c74*/  ja short loc_140407CAF
/*140407c76*/  mov r8d, 1
/*140407c7c*/  mov rdx, rbx
/*140407c7f*/  call sub_140001660
/*140407c84*/  test rsi, rsi
/*140407c87*/  setz al
/*140407c8a*/  or r15b, al
/*140407c8d*/  jnz short loc_140407CBA
loc_140407C8F: /*140407c8f*/ mov r8d, 1
/*140407c95*/  mov rcx, [rbp+1B0h+var_48]
/*140407c9c*/  mov rdx, rsi
/*140407c9f*/  call sub_140001660
/*140407ca4*/  mov rdx, [rbp+1B0h+var_158]
/*140407ca8*/  test rdx, rdx
/*140407cab*/  jnz short loc_140407CC3
/*140407cad*/  jmp short loc_140407CD2
loc_140407CAF: /*140407caf*/ test rsi, rsi
/*140407cb2*/  setz al
/*140407cb5*/  or r15b, al
/*140407cb8*/  jz short loc_140407C8F
loc_140407CBA: /*140407cba*/ mov rdx, [rbp+1B0h+var_158]
/*140407cbe*/  test rdx, rdx
/*140407cc1*/  jz short loc_140407CD2
loc_140407CC3: /*140407cc3*/ mov rcx, [rbp+1B0h+var_150]
/*140407cc7*/  mov r8d, 1
/*140407ccd*/  call sub_140001660
loc_140407CD2: /*140407cd2*/ mov rdx, [rbp+1B0h+var_1B0]
/*140407cd6*/  test rdx, rdx
/*140407cd9*/  jz short loc_140407CEA
/*140407cdb*/  mov rcx, [rbp+1B0h+var_1A8]
/*140407cdf*/  mov r8d, 1
/*140407ce5*/  call sub_140001660
loc_140407CEA: /*140407cea*/ mov rsi, [rbp+1B0h+var_1D8]
/*140407cee*/  test rsi, rsi
/*140407cf1*/  jz loc_140407DB7
/*140407cf7*/  mov rdi, [rbp+1B0h+var_1C8]
/*140407cfb*/  test rdi, rdi
/*140407cfe*/  jz loc_140407D89
/*140407d04*/  mov rbx, [rbp+1B0h+var_1E0]
/*140407d08*/  movdqa xmm0, xmmword ptr [rbx]
/*140407d0c*/  lea r14, [rbx+10h]
/*140407d10*/  pmovmskb r15d, xmm0
/*140407d15*/  not r15d
/*140407d18*/  jmp short loc_140407D32
loc_140407D20: /*140407d20*/ dec rdi
/*140407d23*/  lea eax, [r15-1]
/*140407d27*/  and eax, r15d
/*140407d2a*/  mov r15d, eax
/*140407d2d*/  test rdi, rdi
/*140407d30*/  jz short loc_140407D89
loc_140407D32: /*140407d32*/ test r15w, r15w
/*140407d36*/  jnz short loc_140407D5E
/*140407d38*/  nop dword ptr [rax+rax+00000000h]
loc_140407D40: /*140407d40*/ movdqa xmm0, xmmword ptr [r14]
/*140407d45*/  add rbx, 0FFFFFFFFFFFFFE80h
/*140407d4c*/  add r14, 10h
/*140407d50*/  pmovmskb r15d, xmm0
/*140407d55*/  xor r15d, 0FFFFh
/*140407d5c*/  jz short loc_140407D40
loc_140407D5E: /*140407d5e*/ tzcnt eax, r15d
/*140407d63*/  neg rax
/*140407d66*/  lea rax, [rax+rax*2]
/*140407d6a*/  mov rdx, [rbx+rax*8-18h]
/*140407d6f*/  test rdx, rdx
/*140407d72*/  jz short loc_140407D20
/*140407d74*/  lea rax, [rbx+rax*8]
/*140407d78*/  mov rcx, [rax-10h]
/*140407d7c*/  mov r8d, 1
/*140407d82*/  call sub_140001660
/*140407d87*/  jmp short loc_140407D20
loc_140407D89: /*140407d89*/ lea rax, [rsi+rsi*2]
/*140407d8d*/  lea rax, ds:27h[rax*8]
/*140407d95*/  and rax, 0FFFFFFFFFFFFFFF0h
/*140407d99*/  add rsi, rax
/*140407d9c*/  add rsi, 11h
/*140407da0*/  jz short loc_140407DB7
/*140407da2*/  mov rcx, [rbp+1B0h+var_1E0]
/*140407da6*/  sub rcx, rax
/*140407da9*/  mov r8d, 10h
/*140407daf*/  mov rdx, rsi
/*140407db2*/  call sub_140001660
loc_140407DB7: /*140407db7*/ mov rdx, [rbp+1B0h+var_198]
/*140407dbb*/  test rdx, rdx
/*140407dbe*/  jz short loc_140407DD3
/*140407dc0*/  mov rcx, [rbp+1B0h+var_190]
/*140407dc4*/  shl rdx, 3
/*140407dc8*/  mov r8d, 8
/*140407dce*/  call sub_140001660
loc_140407DD3: /*140407dd3*/ mov rax, [rbp+1B0h+var_170]
/*140407dd7*/  add rsp, 1F8h
/*140407dde*/  pop rbx
/*140407ddf*/  pop rdi
/*140407de0*/  pop rsi
/*140407de1*/  pop r12
/*140407de3*/  pop r13
/*140407de5*/  pop r14
/*140407de7*/  pop r15
/*140407de9*/  pop rbp
/*140407dea*/  retn
loc_140407DEB: /*140407deb*/ xor esi, esi
/*140407ded*/  mov rdi, [rbp+1B0h+var_F8]
/*140407df4*/  mov rax, [rbp+1B0h+var_E8]
/*140407dfb*/  sub rax, rsi
/*140407dfe*/  cmp rdi, rax
/*140407e01*/  jbe loc_140407BB4
loc_140407E07: /*140407e07*/ mov rax, [rbp+1B0h+var_70]
/*140407e0e*/  mov [rbp+1B0h+var_100], rax
/*140407e15*/  mov [rbp+1B0h+var_108], rbx
/*140407e1c*/  mov rax, [rbp+1B0h+var_48]
/*140407e23*/  mov [rbp+1B0h+var_110], rax
/*140407e2a*/  mov rax, [rbp+1B0h+var_50]
/*140407e31*/  mov [rbp+1B0h+var_118], rax
/*140407e38*/  mov [rsp+230h+var_210], 1
/*140407e41*/  lea rcx, [rbp+1B0h+var_E8]
/*140407e48*/  mov r9d, 1
/*140407e4e*/  mov rdx, rsi
/*140407e51*/  mov r14, rdi
/*140407e54*/  mov r8, rdi
/*140407e57*/  call sub_141688D30
/*140407e5c*/  nop
/*140407e5d*/  mov rsi, [rbp+1B0h+var_D8]
/*140407e64*/  mov rdi, r14
/*140407e67*/  jmp loc_140407BB4
loc_140407E6C: /*140407e6c*/ mov [rsp+230h+var_210], 1
/*140407e75*/  mov r9d, 1
/*140407e7b*/  lea rcx, [rbp+1B0h+var_68]
/*140407e82*/  mov rdx, rsi
/*140407e85*/  mov r8, r13
/*140407e88*/  call sub_141688D30
/*140407e8d*/  nop
loc_140407E8E: /*140407e8e*/ mov rax, [rbp+1B0h+var_60]
/*140407e95*/  mov [rbp+1B0h+var_50], rax
/*140407e9c*/  mov rsi, [rbp+1B0h+var_58]
/*140407ea3*/  nop word ptr [rax+rax+00000000h]
loc_140407EB0: /*140407eb0*/ mov rcx, [rbp+1B0h+var_50]
/*140407eb7*/  add rcx, rsi
/*140407eba*/  mov rdx, r14
/*140407ebd*/  mov r8, r13
/*140407ec0*/  call sub_141684120
/*140407ec5*/  mov rdx, [rbp+1B0h+var_68]
loc_140407ECC: /*140407ecc*/ add rsi, r13
/*140407ecf*/  mov [rbp+1B0h+var_58], rsi
/*140407ed6*/  cmp rdx, rsi
/*140407ed9*/  jz loc_140408040
loc_140407EDF: /*140407edf*/ mov rax, [rbp+1B0h+var_60]
/*140407ee6*/  mov [rbp+1B0h+var_50], rax
/*140407eed*/  mov byte ptr [rax+rsi], 0Ah
/*140407ef1*/  inc rsi
/*140407ef4*/  mov [rbp+1B0h+var_58], rsi
/*140407efb*/  xor ecx, ecx
loc_140407EFD: /*140407efd*/ cmp byte ptr [rbp+1B0h+var_A8+1], 0
/*140407f04*/  mov r12d, ecx
/*140407f07*/  jnz loc_140408067
loc_140407F0D: /*140407f0d*/ mov r14, [rbp+1B0h+var_D8]
loc_140407F14: /*140407f14*/ mov rcx, r15
/*140407f17*/  mov rdx, rdi
/*140407f1a*/  call sub_140421EE0
/*140407f1f*/  nop
/*140407f20*/  cmp dword ptr [rbp+1B0h+var_130], 1
/*140407f27*/  jnz short loc_140407F50
/*140407f29*/  mov r13, [rbp+1B0h+var_120]
/*140407f30*/  mov rax, [rbp+1B0h+var_E8]
/*140407f37*/  mov [rbp+1B0h+var_E8], r13
/*140407f3e*/  sub r13, rax
/*140407f41*/  add r14, rax
/*140407f44*/  mov rax, r13
/*140407f47*/  sub rax, 1
/*140407f4b*/  jnb short loc_140407F96
/*140407f4d*/  jmp short loc_140407FBD
loc_140407F50: /*140407f50*/ cmp byte ptr [rbp+1B0h+var_A8+1], 0
/*140407f57*/  jnz loc_140408067
/*140407f5d*/  mov byte ptr [rbp+1B0h+var_A8+1], 1
/*140407f64*/  mov r14, [rbp+1B0h+var_E8]
/*140407f6b*/  mov r13, [rbp+1B0h+var_E0]
/*140407f72*/  sub r13, r14
/*140407f75*/  setnz al
/*140407f78*/  or al, byte ptr [rbp+1B0h+var_A8]
/*140407f7e*/  cmp al, 1
/*140407f80*/  jnz loc_140408067
/*140407f86*/  add r14, [rbp+1B0h+var_D8]
/*140407f8d*/  mov rax, r13
/*140407f90*/  sub rax, 1
/*140407f94*/  jb short loc_140407FBD
loc_140407F96: /*140407f96*/ cmp byte ptr [r14+rax], 0Ah
/*140407f9b*/  jnz short loc_140407FBD
/*140407f9d*/  add r13, 0FFFFFFFFFFFFFFFEh
/*140407fa1*/  test rax, rax
/*140407fa4*/  jz short loc_140407FB0
/*140407fa6*/  cmp byte ptr [r14+r13], 0Dh
/*140407fab*/  mov rcx, r14
/*140407fae*/  jz short loc_140407FB2
loc_140407FB0: /*140407fb0*/ xor ecx, ecx
loc_140407FB2: /*140407fb2*/ test rcx, rcx
/*140407fb5*/  cmovz r13, rax
/*140407fb9*/  cmovnz r14, rcx
loc_140407FBD: /*140407fbd*/ mov rcx, r14
/*140407fc0*/  mov rdx, r13
/*140407fc3*/  call sub_14033BC10
/*140407fc8*/  test rdx, rdx
/*140407fcb*/  jz short loc_140408010
/*140407fcd*/  cmp byte ptr [rax], 5Bh ; '['
/*140407fd0*/  jnz short loc_140408010
/*140407fd2*/  cmp byte ptr [rax+rdx-1], 5Dh ; ']'
/*140407fd7*/  jnz short loc_140408010
/*140407fd9*/  cmp rdx, 1
/*140407fdd*/  jz loc_140409ABF
/*140407fe3*/  cmp byte ptr [rax+1], 0BFh
/*140407fe7*/  jle loc_140409ABF
/*140407fed*/  inc rax
/*140407ff0*/  add rdx, 0FFFFFFFFFFFFFFFEh
/*140407ff4*/  mov rcx, rax
/*140407ff7*/  call sub_1404140C0
/*140407ffc*/  nop
/*140407ffd*/  mov cl, 1
/*140407fff*/  test al, al
/*140408001*/  jnz loc_140407EFD
/*140408007*/  jmp short loc_14040801C
loc_140408010: /*140408010*/ mov cl, 1
/*140408012*/  test r12b, 1
/*140408016*/  jnz loc_140407EFD
loc_14040801C: /*14040801c*/ mov rdx, [rbp+1B0h+var_68]
/*140408023*/  mov rax, rdx
/*140408026*/  sub rax, rsi
/*140408029*/  cmp r13, rax
/*14040802c*/  ja loc_140407E6C
/*140408032*/  test r13, r13
/*140408035*/  jnz loc_140407EB0
/*14040803b*/  jmp loc_140407ECC
loc_140408040: /*140408040*/ mov [rsp+230h+var_210], 1
/*140408049*/  mov r8d, 1
/*14040804f*/  mov r9d, 1
/*140408055*/  lea rcx, [rbp+1B0h+var_68]
/*14040805c*/  call sub_141688D30
/*140408061*/  nop
/*140408062*/  jmp loc_140407EDF
loc_140408067: /*140408067*/ mov r14, [rbp+1B0h+var_68]
/*14040806e*/  test rsi, rsi
/*140408071*/  mov [rbp+1B0h+var_F8], r14
/*140408078*/  jns short loc_14040808D
/*14040807a*/  xor edi, edi
loc_14040807C: /*14040807c*/ mov rcx, rdi
/*14040807f*/  mov rdx, rsi
/*140408082*/  call sub_1416C2D4B
/*140408088*/  jmp loc_140409B06
loc_14040808D: /*14040808d*/ jz short loc_1404080B0
/*14040808f*/  call nullsub_1
/*140408094*/  mov edi, 1
/*140408099*/  mov edx, 1
/*14040809e*/  mov rcx, rsi
/*1404080a1*/  call sub_140001650
/*1404080a6*/  test rax, rax
/*1404080a9*/  jz short loc_14040807C
/*1404080ab*/  mov rdx, rax
/*1404080ae*/  jmp short loc_1404080B5
loc_1404080B0: /*1404080b0*/ mov edx, 1
loc_1404080B5: /*1404080b5*/ mov [rbp+1B0h+var_68], rsi
/*1404080bc*/  mov [rbp+1B0h+var_60], rdx
/*1404080c3*/  mov [rbp+1B0h+var_58], 0
/*1404080ce*/  mov [rbp+1B0h+var_E8], 0
/*1404080d9*/  mov [rbp+1B0h+var_E0], rsi
/*1404080e0*/  mov rax, [rbp+1B0h+var_50]
/*1404080e7*/  mov [rbp+1B0h+var_D8], rax
/*1404080ee*/  mov [rbp+1B0h+var_D0], rsi
/*1404080f5*/  mov [rbp+1B0h+var_C8], 0
/*140408100*/  mov [rbp+1B0h+var_C0], rsi
/*140408107*/  mov [rbp+1B0h+var_B8], rbx
/*14040810e*/  mov [rbp+1B0h+var_B0], 1
/*140408115*/  mov [rbp+1B0h+var_A8], 0
/*14040811e*/  xor r15d, r15d
/*140408121*/  xor ebx, ebx
/*140408123*/  nop word ptr [rax+rax+00000000h]
loc_140408130: /*140408130*/ mov [rbp+1B0h+var_48], rdx
/*140408137*/  mov rdi, [rbp+1B0h+var_D8]
loc_14040813E: /*14040813e*/ lea rcx, [rbp+1B0h+var_130]
/*140408145*/  lea rdx, [rbp+1B0h+var_D8]
/*14040814c*/  call sub_140421EE0
/*140408151*/  nop
loc_140408152: /*140408152*/ cmp dword ptr [rbp+1B0h+var_130], 1
/*140408159*/  jnz short loc_140408190
/*14040815b*/  mov rsi, [rbp+1B0h+var_120]
/*140408162*/  mov rax, [rbp+1B0h+var_E8]
/*140408169*/  mov [rbp+1B0h+var_E8], rsi
/*140408170*/  sub rsi, rax
/*140408173*/  add rdi, rax
/*140408176*/  mov rax, rsi
/*140408179*/  sub rax, 1
/*14040817d*/  jnb short loc_1404081D6
/*14040817f*/  jmp loc_140408204
loc_140408190: /*140408190*/ cmp byte ptr [rbp+1B0h+var_A8+1], 0
/*140408197*/  jnz loc_140408690
/*14040819d*/  mov byte ptr [rbp+1B0h+var_A8+1], 1
/*1404081a4*/  mov rdi, [rbp+1B0h+var_E8]
/*1404081ab*/  mov rsi, [rbp+1B0h+var_E0]
/*1404081b2*/  sub rsi, rdi
/*1404081b5*/  setnz al
/*1404081b8*/  or al, byte ptr [rbp+1B0h+var_A8]
/*1404081be*/  cmp al, 1
/*1404081c0*/  jnz loc_140408690
/*1404081c6*/  add rdi, [rbp+1B0h+var_D8]
/*1404081cd*/  mov rax, rsi
/*1404081d0*/  sub rax, 1
/*1404081d4*/  jb short loc_140408204
loc_1404081D6: /*1404081d6*/ cmp byte ptr [rdi+rax], 0Ah
/*1404081da*/  jnz short loc_140408204
/*1404081dc*/  add rsi, 0FFFFFFFFFFFFFFFEh
/*1404081e0*/  test rax, rax
/*1404081e3*/  jz short loc_1404081F7
/*1404081e5*/  cmp byte ptr [rdi+rsi], 0Dh
/*1404081e9*/  mov rcx, rdi
/*1404081ec*/  mov edx, 0
/*1404081f1*/  cmovnz rcx, rdx
/*1404081f5*/  jmp short loc_1404081F9
loc_1404081F7: /*1404081f7*/ xor ecx, ecx
loc_1404081F9: /*1404081f9*/ test rcx, rcx
/*1404081fc*/  cmovz rsi, rax
/*140408200*/  cmovnz rdi, rcx
loc_140408204: /*140408204*/ mov rcx, rdi
/*140408207*/  mov rdx, rsi
/*14040820a*/  call sub_14033BC10
/*14040820f*/  test rdx, rdx
/*140408212*/  jz loc_1404082C0
/*140408218*/  mov r14, rax
/*14040821b*/  mov r12, rdx
/*14040821e*/  movzx eax, byte ptr [rax]
/*140408221*/  cmp al, 5Bh ; '['
/*140408223*/  jnz loc_1404082D0
/*140408229*/  cmp byte ptr [r14+r12-1], 5Dh ; ']'
/*14040822f*/  jnz loc_1404082DF
/*140408235*/  cmp r12, 1
/*140408239*/  jz loc_140409AE2
/*14040823f*/  cmp byte ptr [r14+1], 0BFh
/*140408244*/  jle loc_140409AE2
/*14040824a*/  mov r14, [rbp+1B0h+var_68]
/*140408251*/  mov rax, r14
/*140408254*/  sub rax, r15
/*140408257*/  cmp rsi, rax
/*14040825a*/  ja loc_140408654
/*140408260*/  test rsi, rsi
/*140408263*/  jz short loc_140408281
loc_140408265: /*140408265*/ mov rcx, [rbp+1B0h+var_48]
/*14040826c*/  add rcx, r15
/*14040826f*/  mov rdx, rdi
/*140408272*/  mov r8, rsi
/*140408275*/  call sub_141684120
/*14040827a*/  mov r14, [rbp+1B0h+var_68]
loc_140408281: /*140408281*/ add r15, rsi
/*140408284*/  mov [rbp+1B0h+var_58], r15
/*14040828b*/  mov bl, 1
/*14040828d*/  cmp r14, r15
/*140408290*/  jnz loc_14040833C
loc_140408296: /*140408296*/ mov [rsp+230h+var_210], 1
/*14040829f*/  mov r8d, 1
/*1404082a5*/  mov r9d, 1
/*1404082ab*/  lea rcx, [rbp+1B0h+var_68]
/*1404082b2*/  mov rdx, r14
/*1404082b5*/  call sub_141688D30
/*1404082ba*/  nop
loc_1404082BB: /*1404082bb*/ jmp loc_14040853F
loc_1404082C0: /*1404082c0*/ test bl, 1
/*1404082c3*/  jnz short loc_1404082F0
/*1404082c5*/  jmp loc_1404084F0
loc_1404082D0: /*1404082d0*/ test bl, 1
/*1404082d3*/  jnz short loc_1404082F0
/*1404082d5*/  cmp al, 23h ; '#'
/*1404082d7*/  jz loc_1404084F0
/*1404082dd*/  jmp short loc_140408344
loc_1404082DF: /*1404082df*/ test bl, 1
/*1404082e2*/  jz short loc_140408344
/*1404082e4*/  nop word ptr [rax+rax+00000000h]
loc_1404082F0: /*1404082f0*/ mov r14, [rbp+1B0h+var_68]
/*1404082f7*/  mov rax, r14
/*1404082fa*/  sub rax, r15
/*1404082fd*/  cmp rsi, rax
/*140408300*/  ja loc_140408585
/*140408306*/  test rsi, rsi
/*140408309*/  jz short loc_140408327
loc_14040830B: /*14040830b*/ mov rcx, [rbp+1B0h+var_48]
/*140408312*/  add rcx, r15
/*140408315*/  mov rdx, rdi
/*140408318*/  mov r8, rsi
/*14040831b*/  call sub_141684120
/*140408320*/  mov r14, [rbp+1B0h+var_68]
loc_140408327: /*140408327*/ add r15, rsi
/*14040832a*/  mov [rbp+1B0h+var_58], r15
/*140408331*/  mov bl, 1
/*140408333*/  cmp r14, r15
/*140408336*/  jz loc_1404085C1
loc_14040833C: /*14040833c*/ mov r14, r15
/*14040833f*/  jmp loc_14040853F
loc_140408344: /*140408344*/ cmp r12, 0Fh
/*140408348*/  ja short loc_140408364
/*14040834a*/  xor eax, eax
/*14040834c*/  nop dword ptr [rax+00h]
loc_140408350: /*140408350*/ cmp byte ptr [r14+rax], 3Dh ; '='
/*140408355*/  jz short loc_14040837C
/*140408357*/  inc rax
/*14040835a*/  cmp r12, rax
/*14040835d*/  jnz short loc_140408350
/*14040835f*/  jmp loc_1404084F0
loc_140408364: /*140408364*/ mov cl, 3Dh ; '='
/*140408366*/  mov rdx, r14
/*140408369*/  mov r8, r12
/*14040836c*/  call sub_1414A3EA0
/*140408371*/  nop
loc_140408372: /*140408372*/ cmp rax, 1
/*140408376*/  jnz loc_1404084F0
loc_14040837C: /*14040837c*/ mov r13d, 8
/*140408382*/  jmp short loc_1404083AE
loc_140408384: /*140408384*/ movzx eax, al
/*140408387*/  mov rcx, cs:off_141EC9120
/*14040838e*/  movzx eax, byte ptr [rcx+rax]
/*140408392*/  shr al, 1
loc_140408394: /*140408394*/ test al, 1
/*140408396*/  jnz loc_14040856A
/*14040839c*/  nop dword ptr [rax+00h]
loc_1404083A0: /*1404083a0*/ add r13, 10h
/*1404083a4*/  cmp r13, 58h ; 'X'
/*1404083a8*/  jz loc_1404084F0
loc_1404083AE: /*1404083ae*/ lea rax, off_141753578; "profile"
/*1404083b5*/  mov rbx, [r13+rax+0]
/*1404083ba*/  cmp r12, rbx
/*1404083bd*/  jb short loc_1404083A0
/*1404083bf*/  lea rax, off_141753578; "profile"
/*1404083c6*/  mov rcx, [r13+rax-8]
/*1404083cb*/  mov rdx, r14
/*1404083ce*/  mov r8, rbx
/*1404083d1*/  call sub_1416847B0
/*1404083d6*/  test eax, eax
/*1404083d8*/  jnz short loc_1404083A0
/*1404083da*/  cmp rbx, r12
/*1404083dd*/  jz short loc_1404083A0
/*1404083df*/  movzx edx, byte ptr [r14+rbx]
/*1404083e4*/  movzx eax, dl
/*1404083e7*/  test al, al
/*1404083e9*/  js short loc_14040843A
/*1404083eb*/  xor ebx, ebx
/*1404083ed*/  cmp eax, 20h ; ' '
/*1404083f0*/  jz loc_14040856C
loc_1404083F6: /*1404083f6*/ cmp eax, 3Dh ; '='
/*1404083f9*/  jz loc_14040856C
/*1404083ff*/  lea ecx, [rax-9]
/*140408402*/  cmp ecx, 5
/*140408405*/  jb loc_14040856A
/*14040840b*/  cmp eax, 85h
/*140408410*/  jb short loc_1404083A0
/*140408412*/  mov ecx, eax
/*140408414*/  shr ecx, 8
/*140408417*/  cmp ecx, 1Fh
/*14040841a*/  jg short loc_14040848A
/*14040841c*/  test ecx, ecx
/*14040841e*/  jz loc_1404084D6
/*140408424*/  cmp ecx, 16h
/*140408427*/  jnz loc_1404083A0
/*14040842d*/  cmp eax, 1680h
/*140408432*/  setz al
/*140408435*/  jmp loc_140408394
loc_14040843A: /*14040843a*/ mov ecx, eax
/*14040843c*/  and ecx, 1Fh
/*14040843f*/  movzx r8d, byte ptr [r14+rbx+1]
/*140408445*/  and r8d, 3Fh
/*140408449*/  cmp al, 0DFh
/*14040844b*/  jbe short loc_1404084A9
/*14040844d*/  movzx eax, byte ptr [r14+rbx+2]
/*140408453*/  shl r8d, 6
/*140408457*/  and eax, 3Fh
/*14040845a*/  or eax, r8d
/*14040845d*/  cmp dl, 0F0h
/*140408460*/  jb short loc_1404084C1
/*140408462*/  movzx edx, byte ptr [r14+rbx+3]
/*140408468*/  and ecx, 7
/*14040846b*/  shl ecx, 12h
/*14040846e*/  shl eax, 6
/*140408471*/  and edx, 3Fh
/*140408474*/  or edx, eax
/*140408476*/  or edx, ecx
/*140408478*/  mov eax, edx
/*14040847a*/  xor ebx, ebx
/*14040847c*/  cmp eax, 20h ; ' '
/*14040847f*/  jnz loc_1404083F6
/*140408485*/  jmp loc_14040856C
loc_14040848A: /*14040848a*/ cmp ecx, 20h ; ' '
/*14040848d*/  jz loc_140408384
/*140408493*/  cmp ecx, 30h ; '0'
/*140408496*/  jnz loc_1404083A0
/*14040849c*/  cmp eax, 3000h
/*1404084a1*/  setz al
/*1404084a4*/  jmp loc_140408394
loc_1404084A9: /*1404084a9*/ shl ecx, 6
/*1404084ac*/  or ecx, r8d
/*1404084af*/  mov eax, ecx
/*1404084b1*/  xor ebx, ebx
/*1404084b3*/  cmp eax, 20h ; ' '
/*1404084b6*/  jnz loc_1404083F6
/*1404084bc*/  jmp loc_14040856C
loc_1404084C1: /*1404084c1*/ shl ecx, 0Ch
/*1404084c4*/  or eax, ecx
/*1404084c6*/  xor ebx, ebx
/*1404084c8*/  cmp eax, 20h ; ' '
/*1404084cb*/  jnz loc_1404083F6
/*1404084d1*/  jmp loc_14040856C
loc_1404084D6: /*1404084d6*/ movzx eax, al
/*1404084d9*/  mov rcx, cs:off_141EC9120
/*1404084e0*/  movzx eax, byte ptr [rcx+rax]
/*1404084e4*/  jmp loc_140408394
loc_1404084F0: /*1404084f0*/ mov rbx, [rbp+1B0h+var_68]
/*1404084f7*/  mov rax, rbx
/*1404084fa*/  sub rax, r15
/*1404084fd*/  cmp rsi, rax
/*140408500*/  ja loc_1404085EB
/*140408506*/  test rsi, rsi
/*140408509*/  jz short loc_140408527
loc_14040850B: /*14040850b*/ mov rcx, [rbp+1B0h+var_48]
/*140408512*/  add rcx, r15
/*140408515*/  mov rdx, rdi
/*140408518*/  mov r8, rsi
/*14040851b*/  call sub_141684120
/*140408520*/  mov rbx, [rbp+1B0h+var_68]
loc_140408527: /*140408527*/ mov r14, r15
/*14040852a*/  add r14, rsi
/*14040852d*/  mov [rbp+1B0h+var_58], r14
/*140408534*/  cmp rbx, r14
/*140408537*/  jz loc_140408627
loc_14040853D: /*14040853d*/ xor ebx, ebx
loc_14040853F: /*14040853f*/ mov rdx, [rbp+1B0h+var_60]
/*140408546*/  mov byte ptr [rdx+r14], 0Ah
/*14040854b*/  inc r14
/*14040854e*/  mov [rbp+1B0h+var_58], r14
/*140408555*/  mov r15, r14
/*140408558*/  cmp byte ptr [rbp+1B0h+var_A8+1], 0
/*14040855f*/  jz loc_140408130
/*140408565*/  jmp loc_140408697
loc_14040856A: /*14040856a*/ xor ebx, ebx
loc_14040856C: /*14040856c*/ mov rdx, [rbp+1B0h+var_48]
/*140408573*/  cmp byte ptr [rbp+1B0h+var_A8+1], 0
/*14040857a*/  jz loc_140408130
/*140408580*/  jmp loc_140408697
loc_140408585: /*140408585*/ mov [rsp+230h+var_210], 1
/*14040858e*/  mov r9d, 1
/*140408594*/  lea rcx, [rbp+1B0h+var_68]
/*14040859b*/  mov rdx, r15
/*14040859e*/  mov r8, rsi
/*1404085a1*/  call sub_141688D30
/*1404085a6*/  nop
/*1404085a7*/  mov rax, [rbp+1B0h+var_60]
/*1404085ae*/  mov [rbp+1B0h+var_48], rax
/*1404085b5*/  mov r15, [rbp+1B0h+var_58]
/*1404085bc*/  jmp loc_14040830B
loc_1404085C1: /*1404085c1*/ mov [rsp+230h+var_210], 1
/*1404085ca*/  mov r8d, 1
/*1404085d0*/  mov r9d, 1
/*1404085d6*/  lea rcx, [rbp+1B0h+var_68]
/*1404085dd*/  mov rdx, r14
/*1404085e0*/  call sub_141688D30
/*1404085e5*/  nop
/*1404085e6*/  jmp loc_14040853F
loc_1404085EB: /*1404085eb*/ mov [rsp+230h+var_210], 1
/*1404085f4*/  mov r9d, 1
/*1404085fa*/  lea rcx, [rbp+1B0h+var_68]
/*140408601*/  mov rdx, r15
/*140408604*/  mov r8, rsi
/*140408607*/  call sub_141688D30
/*14040860c*/  nop
/*14040860d*/  mov rax, [rbp+1B0h+var_60]
/*140408614*/  mov [rbp+1B0h+var_48], rax
/*14040861b*/  mov r15, [rbp+1B0h+var_58]
/*140408622*/  jmp loc_14040850B
loc_140408627: /*140408627*/ mov [rsp+230h+var_210], 1
/*140408630*/  mov r8d, 1
/*140408636*/  mov r9d, 1
/*14040863c*/  lea rcx, [rbp+1B0h+var_68]
/*140408643*/  mov rdx, rbx
/*140408646*/  call sub_141688D30
/*14040864b*/  nop
/*14040864c*/  mov r14, rbx
/*14040864f*/  jmp loc_14040853D
loc_140408654: /*140408654*/ mov [rsp+230h+var_210], 1
/*14040865d*/  mov r9d, 1
/*140408663*/  lea rcx, [rbp+1B0h+var_68]
/*14040866a*/  mov rdx, r15
/*14040866d*/  mov r8, rsi
/*140408670*/  call sub_141688D30
/*140408675*/  nop
/*140408676*/  mov rax, [rbp+1B0h+var_60]
/*14040867d*/  mov [rbp+1B0h+var_48], rax
/*140408684*/  mov r15, [rbp+1B0h+var_58]
/*14040868b*/  jmp loc_140408265
loc_140408690: /*140408690*/ mov rdx, [rbp+1B0h+var_48]
loc_140408697: /*140408697*/ cmp r15, 2
/*14040869b*/  jnb short loc_1404086B5
/*14040869d*/  test r15, r15
/*1404086a0*/  jz loc_140408775
loc_1404086A6: /*1404086a6*/ xor r15d, r15d
/*1404086a9*/  cmp byte ptr [rdx], 0Ah
/*1404086ac*/  setnz r15b
/*1404086b0*/  jmp loc_140408778
loc_1404086B5: /*1404086b5*/ cmp word ptr [rdx+r15-2], 0A0Ah
/*1404086bd*/  jnz loc_140408778
/*1404086c3*/  lea r9, [rdx+r15]
/*1404086c7*/  lea rcx, [rdx+r15]
/*1404086cb*/  add rcx, 0FFFFFFFFFFFFFFFEh
/*1404086cf*/  nop
loc_1404086D0: /*1404086d0*/ mov rax, 0FFFFFFFFFFFFFFFFh
/*1404086d7*/  cmp byte ptr [r9-1], 0
/*1404086dc*/  js short loc_1404086FF
loc_1404086DE: /*1404086de*/ add r15, rax
/*1404086e1*/  cmp r15, 2
/*1404086e5*/  jb short loc_140408765
/*1404086e7*/  lea r9, [rdx+r15]
/*1404086eb*/  lea rcx, [rdx+r15]
/*1404086ef*/  add rcx, 0FFFFFFFFFFFFFFFEh
/*1404086f3*/  cmp word ptr [rdx+r15-2], 0A0Ah
/*1404086fb*/  jz short loc_1404086D0
/*1404086fd*/  jmp short loc_140408778
loc_1404086FF: /*1404086ff*/ movzx ecx, byte ptr [rcx]
/*140408702*/  cmp cl, 0BFh
/*140408705*/  jg short loc_140408728
/*140408707*/  movzx r8d, byte ptr [r9-3]
/*14040870c*/  cmp r8b, 0BFh
/*140408710*/  jg short loc_140408732
/*140408712*/  movzx r9d, byte ptr [r9-4]
/*140408717*/  and r9d, 7
/*14040871b*/  shl r9d, 6
/*14040871f*/  and r8d, 3Fh
/*140408723*/  or r8d, r9d
/*140408726*/  jmp short loc_140408736
loc_140408728: /*140408728*/ and ecx, 1Fh
/*14040872b*/  cmp ecx, 2
/*14040872e*/  jnb short loc_140408745
/*140408730*/  jmp short loc_1404086DE
loc_140408732: /*140408732*/ and r8d, 0Fh
loc_140408736: /*140408736*/ shl r8d, 6
/*14040873a*/  and ecx, 3Fh
/*14040873d*/  or ecx, r8d
/*140408740*/  cmp ecx, 2
/*140408743*/  jb short loc_1404086DE
loc_140408745: /*140408745*/ mov rax, 0FFFFFFFFFFFFFFFEh
/*14040874c*/  cmp ecx, 20h ; ' '
/*14040874f*/  jb short loc_1404086DE
/*140408751*/  xor eax, eax
/*140408753*/  cmp ecx, 400h
/*140408759*/  setb al
/*14040875c*/  or rax, 0FFFFFFFFFFFFFFFCh
/*140408760*/  jmp loc_1404086DE
loc_140408765: /*140408765*/ mov [rbp+1B0h+var_58], r15
/*14040876c*/  test r15, r15
/*14040876f*/  jnz loc_1404086A6
loc_140408775: /*140408775*/ xor r15d, r15d
loc_140408778: /*140408778*/ mov rax, [rbp+1B0h+var_68]
/*14040877f*/  mov [rbp+1B0h+var_F0], rax
loc_140408786: /*140408786*/ lea rax, [rbp+1B0h+var_1E0]
/*14040878a*/  mov [rsp+230h+var_210], rax
/*14040878f*/  lea rcx, [rbp+1B0h+var_158]
/*140408793*/  mov [rbp+1B0h+var_48], rdx
/*14040879a*/  mov r8, r15
/*14040879d*/  mov r9b, 1
/*1404087a0*/  call sub_14040F7E0
/*1404087a5*/  nop
/*1404087a6*/  mov rdx, [rbp+1B0h+var_F8]
/*1404087ad*/  test rdx, rdx
/*1404087b0*/  mov rdi, [rbp+1B0h+var_140]
/*1404087b4*/  jz short loc_1404087C8
/*1404087b6*/  mov r8d, 1
/*1404087bc*/  mov rcx, [rbp+1B0h+var_50]
/*1404087c3*/  call sub_140001660
loc_1404087C8: /*1404087c8*/ mov rdx, [rbp+1B0h+var_F0]
/*1404087cf*/  test rdx, rdx
/*1404087d2*/  jz short loc_1404087E6
/*1404087d4*/  mov r8d, 1
/*1404087da*/  mov rcx, [rbp+1B0h+var_48]
/*1404087e1*/  call sub_140001660
loc_1404087E6: /*1404087e6*/ test rdi, rdi
/*1404087e9*/  jz loc_140407983
/*1404087ef*/  mov rax, [rbp+1B0h+var_70]
/*1404087f6*/  mov rsi, [rax+28h]
/*1404087fa*/  mov [rbp+1B0h+var_88], 0
/*140408805*/  mov [rbp+1B0h+var_80], 1
/*140408810*/  mov [rbp+1B0h+var_78], 0
loc_14040881B: /*14040881b*/ mov [rsp+230h+var_210], 1
/*140408824*/  lea rcx, [rbp+1B0h+var_88]
/*14040882b*/  mov r8d, 37h ; '7'
/*140408831*/  mov r9d, 1
/*140408837*/  xor edx, edx
/*140408839*/  call sub_141688D30
/*14040883e*/  nop
/*14040883f*/  mov rcx, [rbp+1B0h+var_80]
/*140408846*/  mov r14, [rbp+1B0h+var_78]
/*14040884d*/  movups xmm0, cs:xmmword_141752F7B
/*140408854*/  movups xmmword ptr [rcx+r14+20h], xmm0
/*14040885a*/  movups xmm0, cs:xmmword_141752F6B
/*140408861*/  movups xmmword ptr [rcx+r14+10h], xmm0
/*140408867*/  movdqu xmm0, cs:xmmword_141752F5B
/*14040886f*/  movdqu xmmword ptr [rcx+r14], xmm0
/*140408875*/  mov rax, 29594C4C41554E41h
/*14040887f*/  mov [rcx+r14+2Fh], rax
/*140408884*/  lea rax, [r14+37h]
/*140408888*/  mov [rbp+1B0h+var_78], rax
/*14040888f*/  mov rdx, [rbp+1B0h+var_88]
/*140408896*/  cmp rdx, rax
/*140408899*/  jz loc_1404093F6
loc_14040889F: /*14040889f*/ mov byte ptr [rcx+r14+37h], 0Ah
/*1404088a5*/  add r14, 38h ; '8'
/*1404088a9*/  mov [rbp+1B0h+var_78], r14
/*1404088b0*/  mov rax, rdx
/*1404088b3*/  sub rax, r14
/*1404088b6*/  cmp rax, 2Bh ; '+'
/*1404088ba*/  jbe loc_14040942E
loc_1404088C0: /*1404088c0*/ movups xmm0, cs:xmmword_141752FA2+0Ch
/*1404088c7*/  movups xmmword ptr [rcx+r14+1Ch], xmm0
/*1404088cd*/  movups xmm0, cs:xmmword_141752FA2
/*1404088d4*/  movups xmmword ptr [rcx+r14+10h], xmm0
/*1404088da*/  movdqu xmm0, cs:xmmword_141752F92
/*1404088e2*/  movdqu xmmword ptr [rcx+r14], xmm0
/*1404088e8*/  add r14, 2Ch ; ','
/*1404088ec*/  mov [rbp+1B0h+var_78], r14
/*1404088f3*/  mov rax, rdx
/*1404088f6*/  sub rax, r14
/*1404088f9*/  cmp rax, 3Ah ; ':'
/*1404088fd*/  jbe loc_14040946D
loc_140408903: /*140408903*/ movups xmm0, cs:xmmword_141752FDE+0Bh
/*14040890a*/  movups xmmword ptr [rcx+r14+2Bh], xmm0
/*140408910*/  movups xmm0, cs:xmmword_141752FDE
/*140408917*/  movups xmmword ptr [rcx+r14+20h], xmm0
/*14040891d*/  movups xmm0, cs:xmmword_141752FCE
/*140408924*/  movups xmmword ptr [rcx+r14+10h], xmm0
/*14040892a*/  movdqu xmm0, cs:xmmword_141752FBE
/*140408932*/  movdqu xmmword ptr [rcx+r14], xmm0
/*140408938*/  lea rax, [r14+3Bh]
/*14040893c*/  mov [rbp+1B0h+var_78], rax
/*140408943*/  cmp rdx, rax
/*140408946*/  jz loc_1404094AC
loc_14040894C: /*14040894c*/ mov byte ptr [rcx+r14+3Bh], 0Ah
/*140408952*/  add r14, 3Ch ; '<'
/*140408956*/  mov [rbp+1B0h+var_78], r14
/*14040895d*/  jmp short loc_14040896B
loc_140408960: /*140408960*/ dec rsi
/*140408963*/  sub rsi, rdi
/*140408966*/  cmp ecx, 2Fh ; '/'
/*140408969*/  jnz short loc_1404089DB
loc_14040896B: /*14040896b*/ mov rax, rsi
/*14040896e*/  test rsi, rsi
/*140408971*/  jz short loc_1404089DB
/*140408973*/  lea rsi, [rdi+rax]
/*140408977*/  movsx ecx, byte ptr [rsi-1]
/*14040897b*/  test ecx, ecx
/*14040897d*/  jns short loc_140408960
/*14040897f*/  movzx edx, byte ptr [rsi-2]
/*140408983*/  cmp dl, 0C0h
/*140408986*/  jge short loc_1404089AD
/*140408988*/  movzx r8d, byte ptr [rsi-3]
/*14040898d*/  cmp r8b, 0C0h
/*140408991*/  jge short loc_1404089B6
/*140408993*/  movzx r9d, byte ptr [rsi-4]
/*140408998*/  add rsi, 0FFFFFFFFFFFFFFFCh
/*14040899c*/  and r9d, 7
/*1404089a0*/  shl r9d, 6
/*1404089a4*/  and r8d, 3Fh
/*1404089a8*/  or r8d, r9d
/*1404089ab*/  jmp short loc_1404089BE
loc_1404089AD: /*1404089ad*/ add rsi, 0FFFFFFFFFFFFFFFEh
/*1404089b1*/  and edx, 1Fh
/*1404089b4*/  jmp short loc_1404089C8
loc_1404089B6: /*1404089b6*/ add rsi, 0FFFFFFFFFFFFFFFDh
/*1404089ba*/  and r8d, 0Fh
loc_1404089BE: /*1404089be*/ shl r8d, 6
/*1404089c2*/  and edx, 3Fh
/*1404089c5*/  or edx, r8d
loc_1404089C8: /*1404089c8*/ shl edx, 6
/*1404089cb*/  and cl, 3Fh
/*1404089ce*/  movzx ecx, cl
/*1404089d1*/  or ecx, edx
/*1404089d3*/  sub rsi, rdi
/*1404089d6*/  cmp ecx, 2Fh ; '/'
/*1404089d9*/  jz short loc_14040896B
loc_1404089DB: /*1404089db*/ mov [rbp+1B0h+var_1F0], rdi
/*1404089df*/  mov [rbp+1B0h+var_1E8], rax
/*1404089e3*/  lea rax, [rbp+1B0h+var_1F0]
/*1404089e7*/  mov [rbp+1B0h+var_E8], rax
/*1404089ee*/  lea rsi, sub_14041F680
/*1404089f5*/  mov [rbp+1B0h+var_E0], rsi
/*1404089fc*/  lea rdx, unk_14175347D
/*140408a03*/  lea rcx, [rbp+1B0h+var_A0]
/*140408a0a*/  lea r8, [rbp+1B0h+var_E8]
/*140408a11*/  call sub_14149C0F0
/*140408a16*/  nop
/*140408a17*/  mov [rbp+1B0h+var_68], 0
/*140408a22*/  mov [rbp+1B0h+var_60], 1
/*140408a2d*/  mov [rbp+1B0h+var_58], 0
/*140408a38*/  lea rax, off_141753078; "aimai1"
/*140408a3f*/  mov [rbp+1B0h+var_130], rax
/*140408a46*/  mov [rbp+1B0h+var_128], rsi
loc_140408A4D: /*140408a4d*/ lea rdx, unk_141753490
/*140408a54*/  lea rcx, [rbp+1B0h+var_E8]
/*140408a5b*/  lea r8, [rbp+1B0h+var_130]
/*140408a62*/  call sub_14149C0F0
/*140408a67*/  nop
/*140408a68*/  mov rdx, [rbp+1B0h+var_E8]
/*140408a6f*/  mov rcx, [rbp+1B0h+var_E0]
/*140408a76*/  mov rdi, [rbp+1B0h+var_D8]
/*140408a7d*/  test rdi, rdi
/*140408a80*/  jnz loc_1404094DA
/*140408a86*/  mov r15d, 1
/*140408a8c*/  xor esi, esi
/*140408a8e*/  add rsi, rdi
/*140408a91*/  mov [rbp+1B0h+var_58], rsi
/*140408a98*/  test rdx, rdx
/*140408a9b*/  jz short loc_140408AA8
loc_140408A9D: /*140408a9d*/ mov r8d, 1
/*140408aa3*/  call sub_140001660
loc_140408AA8: /*140408aa8*/ mov rax, [rbp+1B0h+var_68]
/*140408aaf*/  sub rax, rsi
/*140408ab2*/  cmp rax, 1Ch
/*140408ab6*/  jbe loc_14040954F
loc_140408ABC: /*140408abc*/ movups xmm0, cs:xmmword_1417534A7+0Dh
/*140408ac3*/  movups xmmword ptr [r15+rsi+0Dh], xmm0
/*140408ac9*/  movdqu xmm0, cs:xmmword_1417534A7
/*140408ad1*/  movdqu xmmword ptr [r15+rsi], xmm0
/*140408ad7*/  add rsi, 1Dh
/*140408adb*/  mov [rbp+1B0h+var_58], rsi
/*140408ae2*/  mov rdi, [rbp+1B0h+var_98]
/*140408ae9*/  mov r8, [rbp+1B0h+var_90]
/*140408af0*/  lea rbx, [rbp+1B0h+var_E8]
/*140408af7*/  mov rcx, rbx
/*140408afa*/  mov rdx, rdi
/*140408afd*/  call sub_140407090
/*140408b02*/  nop
/*140408b03*/  mov [rbp+1B0h+var_200], rbx
/*140408b07*/  lea r12, sub_1400015F0
/*140408b0e*/  mov [rbp+1B0h+var_1F8], r12
loc_140408B12: /*140408b12*/ lea rdx, unk_1417534C4
/*140408b19*/  lea rcx, [rbp+1B0h+var_130]
/*140408b20*/  lea r8, [rbp+1B0h+var_200]
/*140408b24*/  call sub_14149C0F0
/*140408b29*/  nop
loc_140408B2A: /*140408b2a*/ mov rdx, [rbp+1B0h+var_E8]
/*140408b31*/  test rdx, rdx
/*140408b34*/  jz short loc_140408B48
/*140408b36*/  mov rcx, [rbp+1B0h+var_E0]
/*140408b3d*/  mov r8d, 1
/*140408b43*/  call sub_140001660
loc_140408B48: /*140408b48*/ mov r13, [rbp+1B0h+var_130]
/*140408b4f*/  mov rax, [rbp+1B0h+var_128]
/*140408b56*/  mov [rbp+1B0h+var_50], rax
/*140408b5d*/  mov rbx, [rbp+1B0h+var_120]
/*140408b64*/  mov rax, [rbp+1B0h+var_68]
/*140408b6b*/  sub rax, rsi
/*140408b6e*/  cmp rbx, rax
/*140408b71*/  ja loc_140409587
/*140408b77*/  test rbx, rbx
/*140408b7a*/  jz short loc_140408B91
loc_140408B7C: /*140408b7c*/ add r15, rsi
/*140408b7f*/  mov rcx, r15
/*140408b82*/  mov rdx, [rbp+1B0h+var_50]
/*140408b89*/  mov r8, rbx
/*140408b8c*/  call sub_141684120
loc_140408B91: /*140408b91*/ add rsi, rbx
/*140408b94*/  mov [rbp+1B0h+var_58], rsi
/*140408b9b*/  test r13, r13
/*140408b9e*/  jz short loc_140408BB5
/*140408ba0*/  mov r8d, 1
/*140408ba6*/  mov rcx, [rbp+1B0h+var_50]
/*140408bad*/  mov rdx, r13
/*140408bb0*/  call sub_140001660
loc_140408BB5: /*140408bb5*/ mov rcx, [rbp+1B0h+var_68]
/*140408bbc*/  mov rax, rcx
/*140408bbf*/  sub rax, rsi
/*140408bc2*/  cmp rax, 16h
/*140408bc6*/  jbe loc_1404095CA
loc_140408BCC: /*140408bcc*/ mov rdx, [rbp+1B0h+var_60]
/*140408bd3*/  movdqu xmm0, cs:xmmword_1417534D6
/*140408bdb*/  movdqu xmmword ptr [rdx+rsi], xmm0
/*140408be0*/  mov rax, 0A227365736E6F70h
/*140408bea*/  mov [rdx+rsi+0Fh], rax
/*140408bef*/  add rsi, 17h
/*140408bf3*/  mov [rbp+1B0h+var_58], rsi
/*140408bfa*/  mov rax, rcx
/*140408bfd*/  sub rax, rsi
/*140408c00*/  cmp rax, 1Bh
/*140408c04*/  jbe loc_140409602
loc_140408C0A: /*140408c0a*/ movups xmm0, cs:xmmword_1417534ED+0Ch
/*140408c11*/  movups xmmword ptr [rdx+rsi+0Ch], xmm0
/*140408c16*/  movdqu xmm0, cs:xmmword_1417534ED
/*140408c1e*/  movdqu xmmword ptr [rdx+rsi], xmm0
/*140408c23*/  add rsi, 1Ch
/*140408c27*/  mov [rbp+1B0h+var_58], rsi
/*140408c2e*/  mov rax, rcx
/*140408c31*/  sub rax, rsi
/*140408c34*/  cmp rax, 1Bh
/*140408c38*/  jbe loc_140409641
/*140408c3e*/  mov [rbp+1B0h+var_50], rcx
loc_140408C45: /*140408c45*/ movups xmm0, cs:xmmword_141753509+0Ch
/*140408c4c*/  movups xmmword ptr [rdx+rsi+0Ch], xmm0
/*140408c51*/  movdqu xmm0, cs:xmmword_141753509
/*140408c59*/  mov [rbp+1B0h+var_48], rdx
/*140408c60*/  movdqu xmmword ptr [rdx+rsi], xmm0
/*140408c65*/  add rsi, 1Ch
/*140408c69*/  mov rdx, [rbp+1B0h+var_A0]
/*140408c70*/  test rdx, rdx
/*140408c73*/  jz short loc_140408C83
/*140408c75*/  mov r8d, 1
/*140408c7b*/  mov rcx, rdi
/*140408c7e*/  call sub_140001660
loc_140408C83: /*140408c83*/ mov rax, [rbp+1B0h+var_88]
/*140408c8a*/  sub rax, r14
/*140408c8d*/  cmp rsi, rax
/*140408c90*/  ja loc_140409687
loc_140408C96: /*140408c96*/ mov rdi, [rbp+1B0h+var_78]
/*140408c9d*/  mov rcx, [rbp+1B0h+var_80]
/*140408ca4*/  add rcx, rdi
/*140408ca7*/  mov rbx, [rbp+1B0h+var_48]
/*140408cae*/  mov rdx, rbx
/*140408cb1*/  mov r8, rsi
/*140408cb4*/  call sub_141684120
/*140408cb9*/  add rdi, rsi
/*140408cbc*/  mov [rbp+1B0h+var_78], rdi
/*140408cc3*/  mov rdx, [rbp+1B0h+var_50]
/*140408cca*/  test rdx, rdx
/*140408ccd*/  jz short loc_140408CDD
/*140408ccf*/  mov r8d, 1
/*140408cd5*/  mov rcx, rbx
/*140408cd8*/  call sub_140001660
loc_140408CDD: /*140408cdd*/ mov rcx, [rbp+1B0h+var_88]
/*140408ce4*/  cmp rcx, rdi
/*140408ce7*/  jz loc_1404096AE
loc_140408CED: /*140408ced*/ mov rax, [rbp+1B0h+var_80]
/*140408cf4*/  mov [rbp+1B0h+var_48], rax
/*140408cfb*/  mov byte ptr [rax+rdi], 0Ah
/*140408cff*/  inc rdi
/*140408d02*/  mov [rbp+1B0h+var_78], rdi
/*140408d09*/  mov rax, rcx
/*140408d0c*/  sub rax, rdi
/*140408d0f*/  cmp rax, 55h ; 'U'
/*140408d13*/  jbe loc_1404096DF
loc_140408D19: /*140408d19*/ movups xmm0, cs:xmmword_141753039
/*140408d20*/  mov rdx, [rbp+1B0h+var_48]
/*140408d27*/  movups xmmword ptr [rdx+rdi+40h], xmm0
/*140408d2c*/  movups xmm0, cs:xmmword_141753029
/*140408d33*/  movups xmmword ptr [rdx+rdi+30h], xmm0
/*140408d38*/  movups xmm0, cs:xmmword_141753019
/*140408d3f*/  movups xmmword ptr [rdx+rdi+20h], xmm0
/*140408d44*/  movups xmm0, cs:xmmword_141753009
/*140408d4b*/  movups xmmword ptr [rdx+rdi+10h], xmm0
/*140408d50*/  movdqu xmm0, cs:xmmword_141752FF9
/*140408d58*/  movdqu xmmword ptr [rdx+rdi], xmm0
/*140408d5d*/  mov rax, 0A8B9EE5A1A8E6ACh
/*140408d67*/  mov [rdx+rdi+4Eh], rax
/*140408d6c*/  add rdi, 56h ; 'V'
/*140408d70*/  mov [rbp+1B0h+var_78], rdi
/*140408d77*/  mov rax, rcx
/*140408d7a*/  sub rax, rdi
/*140408d7d*/  cmp rax, 1Dh
/*140408d81*/  jbe loc_140409725
loc_140408D87: /*140408d87*/ lea rax, [rdi+1Eh]
/*140408d8b*/  mov [rbp+1B0h+var_F8], rax
/*140408d92*/  movups xmm0, cs:xmmword_14175304F+0Eh
/*140408d99*/  mov rax, [rbp+1B0h+var_48]
/*140408da0*/  movups xmmword ptr [rax+rdi+0Eh], xmm0
/*140408da5*/  movdqu xmm0, cs:xmmword_14175304F
/*140408dad*/  movdqu xmmword ptr [rax+rdi], xmm0
/*140408db2*/  cmp [rbp+1B0h+var_138], 0
/*140408db7*/  jz loc_14040798A
/*140408dbd*/  mov [rbp+1B0h+var_50], rcx
/*140408dc4*/  mov rax, [rbp+1B0h+var_70]
/*140408dcb*/  mov rsi, [rax+38h]
/*140408dcf*/  mov [rbp+1B0h+var_A0], 0
/*140408dda*/  mov [rbp+1B0h+var_98], 1
/*140408de5*/  mov [rbp+1B0h+var_90], 0
loc_140408DF0: /*140408df0*/ mov [rsp+230h+var_210], 1
/*140408df9*/  lea rcx, [rbp+1B0h+var_A0]
/*140408e00*/  mov r8d, 40h ; '@'
/*140408e06*/  mov r9d, 1
/*140408e0c*/  xor edx, edx
/*140408e0e*/  call sub_141688D30
/*140408e13*/  nop
/*140408e14*/  mov rdi, [rbp+1B0h+var_98]
/*140408e1b*/  mov r15, [rbp+1B0h+var_90]
/*140408e22*/  movups xmm0, cs:xmmword_1417530F4
/*140408e29*/  movups xmmword ptr [rdi+r15+30h], xmm0
/*140408e2f*/  movups xmm0, cs:xmmword_1417530E4
/*140408e36*/  movups xmmword ptr [rdi+r15+20h], xmm0
/*140408e3c*/  movups xmm0, cs:xmmword_1417530D4
/*140408e43*/  movups xmmword ptr [rdi+r15+10h], xmm0
/*140408e49*/  movdqu xmm0, cs:xmmword_1417530C4
/*140408e51*/  movdqu xmmword ptr [rdi+r15], xmm0
/*140408e57*/  lea rdx, [r15+40h]
/*140408e5b*/  mov [rbp+1B0h+var_90], rdx
/*140408e62*/  mov rax, [rbp+1B0h+var_A0]
/*140408e69*/  cmp rax, rdx
/*140408e6c*/  jz loc_140409836
loc_140408E72: /*140408e72*/ mov byte ptr [rdi+r15+40h], 0Ah
/*140408e78*/  add r15, 41h ; 'A'
/*140408e7c*/  mov [rbp+1B0h+var_90], r15
/*140408e83*/  mov rcx, rax
/*140408e86*/  sub rcx, r15
/*140408e89*/  cmp rcx, 61h ; 'a'
/*140408e8d*/  jbe loc_14040986B
loc_140408E93: /*140408e93*/ movups xmm0, cs:xmmword_141753154
/*140408e9a*/  movups xmmword ptr [rdi+r15+50h], xmm0
/*140408ea0*/  movups xmm0, cs:xmmword_141753144
/*140408ea7*/  movups xmmword ptr [rdi+r15+40h], xmm0
/*140408ead*/  movups xmm0, cs:xmmword_141753134
/*140408eb4*/  movups xmmword ptr [rdi+r15+30h], xmm0
/*140408eba*/  movups xmm0, cs:xmmword_141753124
/*140408ec1*/  movups xmmword ptr [rdi+r15+20h], xmm0
/*140408ec7*/  movups xmm0, cs:xmmword_141753114
/*140408ece*/  movups xmmword ptr [rdi+r15+10h], xmm0
/*140408ed4*/  movdqu xmm0, cs:xmmword_141753104
/*140408edc*/  movdqu xmmword ptr [rdi+r15], xmm0
/*140408ee2*/  mov word ptr [rdi+r15+60h], 0A84h
/*140408eea*/  add r15, 62h ; 'b'
/*140408eee*/  mov [rbp+1B0h+var_90], r15
/*140408ef5*/  mov rcx, rax
/*140408ef8*/  sub rcx, r15
/*140408efb*/  cmp rcx, 55h ; 'U'
/*140408eff*/  jbe loc_1404098AA
loc_140408F05: /*140408f05*/ movups xmm0, cs:xmmword_1417531A6
/*140408f0c*/  movups xmmword ptr [rdi+r15+40h], xmm0
/*140408f12*/  movups xmm0, cs:xmmword_141753196
/*140408f19*/  movups xmmword ptr [rdi+r15+30h], xmm0
/*140408f1f*/  movups xmm0, cs:xmmword_141753186
/*140408f26*/  movups xmmword ptr [rdi+r15+20h], xmm0
/*140408f2c*/  movups xmm0, cs:xmmword_141753176
/*140408f33*/  movups xmmword ptr [rdi+r15+10h], xmm0
/*140408f39*/  movdqu xmm0, cs:xmmword_141753166
/*140408f41*/  movdqu xmmword ptr [rdi+r15], xmm0
/*140408f47*/  mov rcx, 0A9AAEE5B386E520h
/*140408f51*/  mov [rdi+r15+4Eh], rcx
/*140408f56*/  add r15, 56h ; 'V'
/*140408f5a*/  mov [rbp+1B0h+var_90], r15
/*140408f61*/  sub rax, r15
/*140408f64*/  cmp rax, 46h ; 'F'
/*140408f68*/  jbe loc_1404098E9
loc_140408F6E: /*140408f6e*/ movups xmm0, cs:xmmword_1417531EC
/*140408f75*/  movups xmmword ptr [rdi+r15+30h], xmm0
/*140408f7b*/  movups xmm0, cs:xmmword_1417531DC
/*140408f82*/  movups xmmword ptr [rdi+r15+20h], xmm0
/*140408f88*/  movups xmm0, cs:xmmword_1417531CC
/*140408f8f*/  movups xmmword ptr [rdi+r15+10h], xmm0
/*140408f95*/  movdqu xmm0, cs:xmmword_1417531BC
/*140408f9d*/  movdqu xmmword ptr [rdi+r15], xmm0
/*140408fa3*/  mov rax, 0AA499E9BBA7E7A8h
/*140408fad*/  mov [rdi+r15+3Fh], rax
/*140408fb2*/  add r15, 47h ; 'G'
/*140408fb6*/  mov [rbp+1B0h+var_90], r15
/*140408fbd*/  lea rdx, aAyManagedEndai+0Eh; "aimai1"
/*140408fc4*/  lea rbx, [rbp+1B0h+var_E8]
/*140408fcb*/  mov r8d, 6
/*140408fd1*/  mov rcx, rbx
/*140408fd4*/  call sub_140407090
/*140408fd9*/  nop
/*140408fda*/  mov [rbp+1B0h+var_68], rbx
/*140408fe1*/  mov [rbp+1B0h+var_60], r12
loc_140408FE8: /*140408fe8*/ lea rdx, unk_141753203
/*140408fef*/  lea rcx, [rbp+1B0h+var_130]
/*140408ff6*/  lea r8, [rbp+1B0h+var_68]
/*140408ffd*/  call sub_14149C0F0
/*140409002*/  nop
loc_140409003: /*140409003*/ mov rdx, [rbp+1B0h+var_E8]
/*14040900a*/  test rdx, rdx
/*14040900d*/  jz short loc_140409021
/*14040900f*/  mov rcx, [rbp+1B0h+var_E0]
/*140409016*/  mov r8d, 1
/*14040901c*/  call sub_140001660
loc_140409021: /*140409021*/ mov r14, [rbp+1B0h+var_130]
/*140409028*/  mov r13, [rbp+1B0h+var_128]
/*14040902f*/  mov rbx, [rbp+1B0h+var_120]
/*140409036*/  mov rax, [rbp+1B0h+var_A0]
/*14040903d*/  sub rax, r15
/*140409040*/  cmp rbx, rax
/*140409043*/  ja loc_140409921
/*140409049*/  test rbx, rbx
/*14040904c*/  jz short loc_14040905F
loc_14040904E: /*14040904e*/ add rdi, r15
/*140409051*/  mov rcx, rdi
/*140409054*/  mov rdx, r13
/*140409057*/  mov r8, rbx
/*14040905a*/  call sub_141684120
loc_14040905F: /*14040905f*/ add r15, rbx
/*140409062*/  mov [rbp+1B0h+var_90], r15
/*140409069*/  test r14, r14
/*14040906c*/  jz short loc_140409080
/*14040906e*/  mov r8d, 1
/*140409074*/  mov rcx, r13
/*140409077*/  mov rdx, r14
/*14040907a*/  call sub_140001660
/*14040907f*/  nop
loc_140409080: /*140409080*/ lea rcx, [rbp+1B0h+var_E8]
/*140409087*/  mov rdx, [rbp+1B0h+var_138]
/*14040908b*/  mov r8, rsi
/*14040908e*/  call sub_14149B760
/*140409093*/  nop
/*140409094*/  mov rdx, [rbp+1B0h+var_E0]
/*14040909b*/  mov r8, [rbp+1B0h+var_D8]
loc_1404090A2: /*1404090a2*/ lea rsi, [rbp+1B0h+var_130]
/*1404090a9*/  mov rcx, rsi
/*1404090ac*/  mov [rbp+1B0h+var_70], rdx
/*1404090b3*/  call sub_140407090
/*1404090b8*/  nop
/*1404090b9*/  mov [rbp+1B0h+var_88], rsi
/*1404090c0*/  mov [rbp+1B0h+var_80], r12
loc_1404090C7: /*1404090c7*/ lea rdx, unk_14175321B
/*1404090ce*/  lea rcx, [rbp+1B0h+var_68]
/*1404090d5*/  lea r8, [rbp+1B0h+var_88]
/*1404090dc*/  call sub_14149C0F0
/*1404090e1*/  nop
loc_1404090E2: /*1404090e2*/ mov rdx, [rbp+1B0h+var_130]
/*1404090e9*/  test rdx, rdx
/*1404090ec*/  jz short loc_140409100
/*1404090ee*/  mov rcx, [rbp+1B0h+var_128]
/*1404090f5*/  mov r8d, 1
/*1404090fb*/  call sub_140001660
loc_140409100: /*140409100*/ mov rdx, [rbp+1B0h+var_E8]
/*140409107*/  test rdx, rdx
/*14040910a*/  jle short loc_14040911E
/*14040910c*/  mov r8d, 1
/*140409112*/  mov rcx, [rbp+1B0h+var_70]
/*140409119*/  call sub_140001660
loc_14040911E: /*14040911e*/ mov rdi, [rbp+1B0h+var_68]
/*140409125*/  mov rbx, [rbp+1B0h+var_60]
/*14040912c*/  mov rsi, [rbp+1B0h+var_58]
/*140409133*/  mov rax, [rbp+1B0h+var_A0]
/*14040913a*/  sub rax, r15
/*14040913d*/  cmp rsi, rax
/*140409140*/  ja loc_140409972
/*140409146*/  test rsi, rsi
/*140409149*/  jz short loc_140409160
loc_14040914B: /*14040914b*/ mov rcx, [rbp+1B0h+var_98]
/*140409152*/  add rcx, r15
/*140409155*/  mov rdx, rbx
/*140409158*/  mov r8, rsi
/*14040915b*/  call sub_141684120
loc_140409160: /*140409160*/ add r15, rsi
/*140409163*/  mov [rbp+1B0h+var_90], r15
/*14040916a*/  test rdi, rdi
/*14040916d*/  jz short loc_140409180
/*14040916f*/  mov r8d, 1
/*140409175*/  mov rcx, rbx
/*140409178*/  mov rdx, rdi
/*14040917b*/  call sub_140001660
loc_140409180: /*140409180*/ mov rbx, [rbp+1B0h+var_A0]
/*140409187*/  mov rax, rbx
/*14040918a*/  sub rax, r15
/*14040918d*/  cmp rax, 26h ; '&'
/*140409191*/  mov rcx, [rbp+1B0h+var_50]
/*140409198*/  jbe loc_1404099BC
loc_14040919E: /*14040919e*/ mov rdx, [rbp+1B0h+var_98]
/*1404091a5*/  movups xmm0, cs:xmmword_141753247
/*1404091ac*/  movups xmmword ptr [rdx+r15+10h], xmm0
/*1404091b2*/  movdqu xmm0, cs:xmmword_141753237
/*1404091ba*/  movdqu xmmword ptr [rdx+r15], xmm0
/*1404091c0*/  mov rax, 646E6520706F7420h
/*1404091ca*/  mov [rdx+r15+1Fh], rax
/*1404091cf*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*1404091d3*/  setz dil
/*1404091d7*/  mov r12, [rbp+1B0h+var_150]
/*1404091db*/  mov r13, [rbp+1B0h+var_148]
/*1404091df*/  mov [rbp+1B0h+var_E8], 0
/*1404091ea*/  mov [rbp+1B0h+var_E0], 1
/*1404091f5*/  mov [rbp+1B0h+var_D8], 0
/*140409200*/  cmp rbx, 0FFFFFFFFFFFFFFFFh
/*140409204*/  mov [rbp+1B0h+var_70], rdx
/*14040920b*/  jz loc_1404079BB
/*140409211*/  add r15, 27h ; '''
/*140409215*/  mov [rbp+1B0h+var_100], rdx
/*14040921c*/  mov [rbp+1B0h+var_108], rbx
/*140409223*/  mov rax, [rbp+1B0h+var_48]
/*14040922a*/  mov [rbp+1B0h+var_110], rax
/*140409231*/  mov [rbp+1B0h+var_118], rcx
loc_140409238: /*140409238*/ mov [rsp+230h+var_210], 1
/*140409241*/  lea rcx, [rbp+1B0h+var_E8]
/*140409248*/  mov r9d, 1
/*14040924e*/  xor edx, edx
/*140409250*/  mov r8, r15
/*140409253*/  call sub_141688D30
/*140409258*/  nop
loc_140409259: /*140409259*/ mov rsi, [rbp+1B0h+var_E0]
/*140409260*/  mov r14, [rbp+1B0h+var_D8]
/*140409267*/  lea rcx, [rsi+r14]
/*14040926b*/  mov rdx, [rbp+1B0h+var_70]
/*140409272*/  mov r8, r15
/*140409275*/  call sub_141684120
/*14040927a*/  add r14, r15
/*14040927d*/  mov [rbp+1B0h+var_D8], r14
/*140409284*/  cmp [rbp+1B0h+var_E8], r14
/*14040928b*/  jz loc_1404099FB
loc_140409291: /*140409291*/ mov rax, rsi
/*140409294*/  mov byte ptr [rsi+r14], 0Ah
/*140409299*/  lea rsi, [r14+1]
/*14040929d*/  mov [rbp+1B0h+var_D8], rsi
/*1404092a4*/  test r13, r13
/*1404092a7*/  jz loc_140407A09
/*1404092ad*/  cmp [rbp+1B0h+var_E8], rsi
/*1404092b4*/  jz loc_140409A5D
loc_1404092BA: /*1404092ba*/ mov byte ptr [rax+r14+1], 0Ah
/*1404092c0*/  add r14, 2
/*1404092c4*/  mov [rbp+1B0h+var_D8], r14
/*1404092cb*/  mov rax, [rbp+1B0h+var_E8]
/*1404092d2*/  mov rsi, r14
/*1404092d5*/  sub rax, rsi
/*1404092d8*/  cmp r13, rax
/*1404092db*/  jbe loc_1404079E2
loc_1404092E1: /*1404092e1*/ mov rax, [rbp+1B0h+var_70]
/*1404092e8*/  mov [rbp+1B0h+var_100], rax
/*1404092ef*/  mov [rbp+1B0h+var_108], rbx
/*1404092f6*/  mov rax, [rbp+1B0h+var_48]
/*1404092fd*/  mov [rbp+1B0h+var_110], rax
/*140409304*/  mov rax, [rbp+1B0h+var_50]
/*14040930b*/  mov [rbp+1B0h+var_118], rax
loc_140409312: /*140409312*/ mov [rsp+230h+var_210], 1
/*14040931b*/  lea rcx, [rbp+1B0h+var_E8]
/*140409322*/  mov r9d, 1
/*140409328*/  mov rdx, rsi
/*14040932b*/  mov r8, r13
/*14040932e*/  call sub_141688D30
/*140409333*/  nop
/*140409334*/  mov rsi, [rbp+1B0h+var_D8]
/*14040933b*/  jmp loc_1404079E2
loc_140409340: /*140409340*/ mov rax, [rbp+1B0h+var_70]
/*140409347*/  mov [rbp+1B0h+var_100], rax
/*14040934e*/  mov [rbp+1B0h+var_108], rbx
/*140409355*/  mov rax, [rbp+1B0h+var_48]
/*14040935c*/  mov [rbp+1B0h+var_110], rax
/*140409363*/  mov rax, [rbp+1B0h+var_50]
/*14040936a*/  mov [rbp+1B0h+var_118], rax
/*140409371*/  mov [rsp+230h+var_210], 1
/*14040937a*/  lea rcx, [rbp+1B0h+var_E8]
/*140409381*/  mov r8d, 1
/*140409387*/  mov r9d, 1
/*14040938d*/  mov rdx, rsi
/*140409390*/  call sub_141688D30
/*140409395*/  nop
/*140409396*/  jmp loc_140407BE4
loc_14040939B: /*14040939b*/ mov rax, [rbp+1B0h+var_70]
/*1404093a2*/  mov [rbp+1B0h+var_100], rax
/*1404093a9*/  mov [rbp+1B0h+var_108], rbx
/*1404093b0*/  mov rax, [rbp+1B0h+var_48]
/*1404093b7*/  mov [rbp+1B0h+var_110], rax
/*1404093be*/  mov rax, [rbp+1B0h+var_50]
/*1404093c5*/  mov [rbp+1B0h+var_118], rax
/*1404093cc*/  mov [rsp+230h+var_210], 1
/*1404093d5*/  lea rcx, [rbp+1B0h+var_E8]
/*1404093dc*/  mov r8d, 1
/*1404093e2*/  mov r9d, 1
/*1404093e8*/  mov rdx, rsi
/*1404093eb*/  call sub_141688D30
/*1404093f0*/  nop
/*1404093f1*/  jmp loc_140407A8A
loc_1404093F6: /*1404093f6*/ mov [rsp+230h+var_210], 1
/*1404093ff*/  lea rcx, [rbp+1B0h+var_88]
/*140409406*/  mov r8d, 1
/*14040940c*/  mov r9d, 1
/*140409412*/  mov rdx, rax
/*140409415*/  call sub_141688D30
/*14040941a*/  nop
/*14040941b*/  mov rdx, [rbp+1B0h+var_88]
/*140409422*/  mov rcx, [rbp+1B0h+var_80]
/*140409429*/  jmp loc_14040889F
loc_14040942E: /*14040942e*/ mov [rsp+230h+var_210], 1
/*140409437*/  lea rcx, [rbp+1B0h+var_88]
/*14040943e*/  mov r8d, 2Ch ; ','
/*140409444*/  mov r9d, 1
/*14040944a*/  mov rdx, r14
/*14040944d*/  call sub_141688D30
/*140409452*/  nop
/*140409453*/  mov r14, [rbp+1B0h+var_78]
/*14040945a*/  mov rdx, [rbp+1B0h+var_88]
/*140409461*/  mov rcx, [rbp+1B0h+var_80]
/*140409468*/  jmp loc_1404088C0
loc_14040946D: /*14040946d*/ mov [rsp+230h+var_210], 1
/*140409476*/  lea rcx, [rbp+1B0h+var_88]
/*14040947d*/  mov r8d, 3Bh ; ';'
/*140409483*/  mov r9d, 1
/*140409489*/  mov rdx, r14
/*14040948c*/  call sub_141688D30
/*140409491*/  nop
/*140409492*/  mov r14, [rbp+1B0h+var_78]
/*140409499*/  mov rdx, [rbp+1B0h+var_88]
/*1404094a0*/  mov rcx, [rbp+1B0h+var_80]
/*1404094a7*/  jmp loc_140408903
loc_1404094AC: /*1404094ac*/ mov [rsp+230h+var_210], 1
/*1404094b5*/  lea rcx, [rbp+1B0h+var_88]
/*1404094bc*/  mov r8d, 1
/*1404094c2*/  mov r9d, 1
/*1404094c8*/  call sub_141688D30
/*1404094cd*/  nop
/*1404094ce*/  mov rcx, [rbp+1B0h+var_80]
/*1404094d5*/  jmp loc_14040894C
loc_1404094DA: /*1404094da*/ mov [rbp+1B0h+var_48], rcx
/*1404094e1*/  mov [rbp+1B0h+var_50], rdx
/*1404094e8*/  mov [rsp+230h+var_210], 1
/*1404094f1*/  lea rcx, [rbp+1B0h+var_68]
/*1404094f8*/  mov r9d, 1
/*1404094fe*/  xor edx, edx
/*140409500*/  mov r8, rdi
/*140409503*/  call sub_141688D30
/*140409508*/  nop
loc_140409509: /*140409509*/ mov r15, [rbp+1B0h+var_60]
/*140409510*/  mov rsi, [rbp+1B0h+var_58]
/*140409517*/  lea rcx, [r15+rsi]
/*14040951b*/  mov rbx, [rbp+1B0h+var_48]
/*140409522*/  mov rdx, rbx
/*140409525*/  mov r8, rdi
/*140409528*/  call sub_141684120
/*14040952d*/  mov rcx, rbx
/*140409530*/  mov rdx, [rbp+1B0h+var_50]
/*140409537*/  add rsi, rdi
/*14040953a*/  mov [rbp+1B0h+var_58], rsi
/*140409541*/  test rdx, rdx
/*140409544*/  jnz loc_140408A9D
/*14040954a*/  jmp loc_140408AA8
loc_14040954F: /*14040954f*/ mov [rsp+230h+var_210], 1
/*140409558*/  lea rcx, [rbp+1B0h+var_68]
/*14040955f*/  mov r8d, 1Dh
/*140409565*/  mov r9d, 1
/*14040956b*/  mov rdx, rsi
/*14040956e*/  call sub_141688D30
/*140409573*/  nop
/*140409574*/  mov r15, [rbp+1B0h+var_60]
/*14040957b*/  mov rsi, [rbp+1B0h+var_58]
/*140409582*/  jmp loc_140408ABC
loc_140409587: /*140409587*/ mov [rbp+1B0h+var_48], r13
/*14040958e*/  mov [rsp+230h+var_210], 1
/*140409597*/  lea rcx, [rbp+1B0h+var_68]
/*14040959e*/  mov r9d, 1
/*1404095a4*/  mov rdx, rsi
/*1404095a7*/  mov r8, rbx
/*1404095aa*/  call sub_141688D30
/*1404095af*/  nop
/*1404095b0*/  mov r15, [rbp+1B0h+var_60]
/*1404095b7*/  mov rsi, [rbp+1B0h+var_58]
/*1404095be*/  mov r13, [rbp+1B0h+var_48]
/*1404095c5*/  jmp loc_140408B7C
loc_1404095CA: /*1404095ca*/ mov [rsp+230h+var_210], 1
/*1404095d3*/  lea rcx, [rbp+1B0h+var_68]
/*1404095da*/  mov r8d, 17h
/*1404095e0*/  mov r9d, 1
/*1404095e6*/  mov rdx, rsi
/*1404095e9*/  call sub_141688D30
/*1404095ee*/  nop
/*1404095ef*/  mov rcx, [rbp+1B0h+var_68]
/*1404095f6*/  mov rsi, [rbp+1B0h+var_58]
/*1404095fd*/  jmp loc_140408BCC
loc_140409602: /*140409602*/ mov [rsp+230h+var_210], 1
/*14040960b*/  lea rcx, [rbp+1B0h+var_68]
/*140409612*/  mov r8d, 1Ch
/*140409618*/  mov r9d, 1
/*14040961e*/  mov rdx, rsi
/*140409621*/  call sub_141688D30
/*140409626*/  nop
/*140409627*/  mov rsi, [rbp+1B0h+var_58]
/*14040962e*/  mov rcx, [rbp+1B0h+var_68]
/*140409635*/  mov rdx, [rbp+1B0h+var_60]
/*14040963c*/  jmp loc_140408C0A
loc_140409641: /*140409641*/ mov [rsp+230h+var_210], 1
/*14040964a*/  lea rcx, [rbp+1B0h+var_68]
/*140409651*/  mov r8d, 1Ch
/*140409657*/  mov r9d, 1
/*14040965d*/  mov rdx, rsi
/*140409660*/  call sub_141688D30
/*140409665*/  nop
/*140409666*/  mov rsi, [rbp+1B0h+var_58]
/*14040966d*/  mov rax, [rbp+1B0h+var_68]
/*140409674*/  mov [rbp+1B0h+var_50], rax
/*14040967b*/  mov rdx, [rbp+1B0h+var_60]
/*140409682*/  jmp loc_140408C45
loc_140409687: /*140409687*/ mov [rsp+230h+var_210], 1
/*140409690*/  lea rcx, [rbp+1B0h+var_88]
/*140409697*/  mov r9d, 1
/*14040969d*/  mov rdx, r14
/*1404096a0*/  mov r8, rsi
/*1404096a3*/  call sub_141688D30
/*1404096a8*/  nop
/*1404096a9*/  jmp loc_140408C96
loc_1404096AE: /*1404096ae*/ mov [rsp+230h+var_210], 1
/*1404096b7*/  lea rcx, [rbp+1B0h+var_88]
/*1404096be*/  mov r8d, 1
/*1404096c4*/  mov r9d, 1
/*1404096ca*/  mov rdx, rdi
/*1404096cd*/  call sub_141688D30
/*1404096d2*/  nop
/*1404096d3*/  mov rcx, [rbp+1B0h+var_88]
/*1404096da*/  jmp loc_140408CED
loc_1404096DF: /*1404096df*/ mov [rsp+230h+var_210], 1
/*1404096e8*/  lea rcx, [rbp+1B0h+var_88]
/*1404096ef*/  mov r8d, 56h ; 'V'
/*1404096f5*/  mov r9d, 1
/*1404096fb*/  mov rdx, rdi
/*1404096fe*/  call sub_141688D30
/*140409703*/  nop
/*140409704*/  mov rdi, [rbp+1B0h+var_78]
/*14040970b*/  mov rcx, [rbp+1B0h+var_88]
/*140409712*/  mov rax, [rbp+1B0h+var_80]
/*140409719*/  mov [rbp+1B0h+var_48], rax
/*140409720*/  jmp loc_140408D19
loc_140409725: /*140409725*/ mov [rsp+230h+var_210], 1
/*14040972e*/  lea rcx, [rbp+1B0h+var_88]
/*140409735*/  mov r8d, 1Eh
/*14040973b*/  mov r9d, 1
/*140409741*/  mov rdx, rdi
/*140409744*/  call sub_141688D30
/*140409749*/  nop
/*14040974a*/  mov rdi, [rbp+1B0h+var_78]
/*140409751*/  mov rcx, [rbp+1B0h+var_88]
/*140409758*/  mov rax, [rbp+1B0h+var_80]
/*14040975f*/  mov [rbp+1B0h+var_48], rax
/*140409766*/  jmp loc_140408D87
loc_14040976B: /*14040976b*/ mov rax, [rbp+1B0h+var_70]
/*140409772*/  mov [rbp+1B0h+var_100], rax
/*140409779*/  mov [rbp+1B0h+var_108], rbx
/*140409780*/  mov rax, [rbp+1B0h+var_48]
/*140409787*/  mov [rbp+1B0h+var_110], rax
/*14040978e*/  mov rax, [rbp+1B0h+var_50]
/*140409795*/  mov [rbp+1B0h+var_118], rax
loc_14040979C: /*14040979c*/ mov [rsp+230h+var_210], 1
/*1404097a5*/  lea rcx, [rbp+1B0h+var_E8]
/*1404097ac*/  mov r8d, 1
/*1404097b2*/  mov r9d, 1
/*1404097b8*/  mov rdx, rsi
/*1404097bb*/  call sub_141688D30
/*1404097c0*/  nop
/*1404097c1*/  mov rax, [rbp+1B0h+var_E0]
/*1404097c8*/  jmp loc_140407AE7
loc_1404097CD: /*1404097cd*/ mov rax, [rbp+1B0h+var_70]
/*1404097d4*/  mov [rbp+1B0h+var_100], rax
/*1404097db*/  mov [rbp+1B0h+var_108], rbx
/*1404097e2*/  mov rax, [rbp+1B0h+var_48]
/*1404097e9*/  mov [rbp+1B0h+var_110], rax
/*1404097f0*/  mov rax, [rbp+1B0h+var_50]
/*1404097f7*/  mov [rbp+1B0h+var_118], rax
/*1404097fe*/  mov [rsp+230h+var_210], 1
/*140409807*/  lea rcx, [rbp+1B0h+var_E8]
/*14040980e*/  mov r8d, 2
/*140409814*/  mov r9d, 1
/*14040981a*/  mov rdx, rsi
/*14040981d*/  call sub_141688D30
/*140409822*/  nop
/*140409823*/  mov rax, [rbp+1B0h+var_E0]
/*14040982a*/  mov rsi, [rbp+1B0h+var_D8]
/*140409831*/  jmp loc_140407B90
loc_140409836: /*140409836*/ mov [rsp+230h+var_210], 1
/*14040983f*/  lea rcx, [rbp+1B0h+var_A0]
/*140409846*/  mov r8d, 1
/*14040984c*/  mov r9d, 1
/*140409852*/  call sub_141688D30
/*140409857*/  nop
/*140409858*/  mov rax, [rbp+1B0h+var_A0]
/*14040985f*/  mov rdi, [rbp+1B0h+var_98]
/*140409866*/  jmp loc_140408E72
loc_14040986B: /*14040986b*/ mov [rsp+230h+var_210], 1
/*140409874*/  lea rcx, [rbp+1B0h+var_A0]
/*14040987b*/  mov r8d, 62h ; 'b'
/*140409881*/  mov r9d, 1
/*140409887*/  mov rdx, r15
/*14040988a*/  call sub_141688D30
/*14040988f*/  nop
/*140409890*/  mov r15, [rbp+1B0h+var_90]
/*140409897*/  mov rax, [rbp+1B0h+var_A0]
/*14040989e*/  mov rdi, [rbp+1B0h+var_98]
/*1404098a5*/  jmp loc_140408E93
loc_1404098AA: /*1404098aa*/ mov [rsp+230h+var_210], 1
/*1404098b3*/  lea rcx, [rbp+1B0h+var_A0]
/*1404098ba*/  mov r8d, 56h ; 'V'
/*1404098c0*/  mov r9d, 1
/*1404098c6*/  mov rdx, r15
/*1404098c9*/  call sub_141688D30
/*1404098ce*/  nop
/*1404098cf*/  mov r15, [rbp+1B0h+var_90]
/*1404098d6*/  mov rax, [rbp+1B0h+var_A0]
/*1404098dd*/  mov rdi, [rbp+1B0h+var_98]
/*1404098e4*/  jmp loc_140408F05
loc_1404098E9: /*1404098e9*/ mov [rsp+230h+var_210], 1
/*1404098f2*/  lea rcx, [rbp+1B0h+var_A0]
/*1404098f9*/  mov r8d, 47h ; 'G'
/*1404098ff*/  mov r9d, 1
/*140409905*/  mov rdx, r15
/*140409908*/  call sub_141688D30
/*14040990d*/  nop
/*14040990e*/  mov rdi, [rbp+1B0h+var_98]
/*140409915*/  mov r15, [rbp+1B0h+var_90]
/*14040991c*/  jmp loc_140408F6E
loc_140409921: /*140409921*/ mov [rbp+1B0h+var_F0], r13
/*140409928*/  mov [rbp+1B0h+var_70], r14
/*14040992f*/  mov [rsp+230h+var_210], 1
/*140409938*/  lea rcx, [rbp+1B0h+var_A0]
/*14040993f*/  mov r9d, 1
/*140409945*/  mov rdx, r15
/*140409948*/  mov r8, rbx
/*14040994b*/  call sub_141688D30
/*140409950*/  nop
/*140409951*/  mov rdi, [rbp+1B0h+var_98]
/*140409958*/  mov r15, [rbp+1B0h+var_90]
/*14040995f*/  mov r14, [rbp+1B0h+var_70]
/*140409966*/  mov r13, [rbp+1B0h+var_F0]
/*14040996d*/  jmp loc_14040904E
loc_140409972: /*140409972*/ mov [rbp+1B0h+var_F0], rbx
/*140409979*/  mov [rbp+1B0h+var_70], rdi
/*140409980*/  mov [rsp+230h+var_210], 1
/*140409989*/  lea rcx, [rbp+1B0h+var_A0]
/*140409990*/  mov r9d, 1
/*140409996*/  mov rdx, r15
/*140409999*/  mov r8, rsi
/*14040999c*/  call sub_141688D30
/*1404099a1*/  nop
/*1404099a2*/  mov r15, [rbp+1B0h+var_90]
/*1404099a9*/  mov rdi, [rbp+1B0h+var_70]
/*1404099b0*/  mov rbx, [rbp+1B0h+var_F0]
/*1404099b7*/  jmp loc_14040914B
loc_1404099BC: /*1404099bc*/ mov [rsp+230h+var_210], 1
/*1404099c5*/  lea rcx, [rbp+1B0h+var_A0]
/*1404099cc*/  mov r8d, 27h ; '''
/*1404099d2*/  mov r9d, 1
/*1404099d8*/  mov rdx, r15
/*1404099db*/  call sub_141688D30
/*1404099e0*/  nop
/*1404099e1*/  mov rbx, [rbp+1B0h+var_A0]
/*1404099e8*/  mov r15, [rbp+1B0h+var_90]
/*1404099ef*/  mov rcx, [rbp+1B0h+var_50]
/*1404099f6*/  jmp loc_14040919E
loc_1404099FB: /*1404099fb*/ mov rax, [rbp+1B0h+var_70]
/*140409a02*/  mov [rbp+1B0h+var_100], rax
/*140409a09*/  mov [rbp+1B0h+var_108], rbx
/*140409a10*/  mov rax, [rbp+1B0h+var_48]
/*140409a17*/  mov [rbp+1B0h+var_110], rax
/*140409a1e*/  mov rax, [rbp+1B0h+var_50]
/*140409a25*/  mov [rbp+1B0h+var_118], rax
loc_140409A2C: /*140409a2c*/ mov [rsp+230h+var_210], 1
/*140409a35*/  lea rcx, [rbp+1B0h+var_E8]
/*140409a3c*/  mov r8d, 1
/*140409a42*/  mov r9d, 1
/*140409a48*/  mov rdx, r14
/*140409a4b*/  call sub_141688D30
/*140409a50*/  nop
/*140409a51*/  mov rsi, [rbp+1B0h+var_E0]
/*140409a58*/  jmp loc_140409291
loc_140409A5D: /*140409a5d*/ mov rax, [rbp+1B0h+var_70]
/*140409a64*/  mov [rbp+1B0h+var_100], rax
/*140409a6b*/  mov [rbp+1B0h+var_108], rbx
/*140409a72*/  mov rax, [rbp+1B0h+var_48]
/*140409a79*/  mov [rbp+1B0h+var_110], rax
/*140409a80*/  mov rax, [rbp+1B0h+var_50]
/*140409a87*/  mov [rbp+1B0h+var_118], rax
/*140409a8e*/  mov [rsp+230h+var_210], 1
/*140409a97*/  lea rcx, [rbp+1B0h+var_E8]
/*140409a9e*/  mov r8d, 1
/*140409aa4*/  mov r9d, 1
/*140409aaa*/  mov rdx, rsi
/*140409aad*/  call sub_141688D30
/*140409ab2*/  nop
/*140409ab3*/  mov rax, [rbp+1B0h+var_E0]
/*140409aba*/  jmp loc_1404092BA
loc_140409ABF: /*140409abf*/ mov r9, rdx
/*140409ac2*/  dec r9
loc_140409AC5: /*140409ac5*/ lea rcx, off_141782B88; "src\\core\\relay\\managed_blocks.rs"
/*140409acc*/  mov [rsp+230h+var_210], rcx
/*140409ad1*/  mov r8d, 1
/*140409ad7*/  mov rcx, rax
/*140409ada*/  call sub_1416C2F60
/*140409ae0*/  jmp short loc_140409B06
loc_140409AE2: /*140409ae2*/ mov r9, r12
/*140409ae5*/  dec r9
loc_140409AE8: /*140409ae8*/ lea rax, off_141782B88; "src\\core\\relay\\managed_blocks.rs"
/*140409aef*/  mov [rsp+230h+var_210], rax
/*140409af4*/  mov r8d, 1
/*140409afa*/  mov rcx, r14
/*140409afd*/  mov rdx, r12
/*140409b00*/  call sub_1416C2F60
loc_140409B06: /*140409b06*/ ud2
