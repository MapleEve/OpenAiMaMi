// win 1.2.1 | module src/core/relay/codex_mutation.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=4687 fetched=4687 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::run | 跨平台字符串签名匹配(名↔函数一致)
volatile signed __int64 *__fastcall run()
{
  __int64 v0; // rbx
  __m128i *v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rax
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  void *v15; // r12
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  volatile signed __int64 *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rt0
  __int64 v22; // rsi
  volatile signed __int64 *v23; // rcx
  __int64 v24; // rdx
  _BYTE *v25; // rdx
  unsigned __int64 v26; // rbx
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  volatile signed __int64 *result; // rax
  __int64 v30; // rcx
  volatile signed __int64 *v31; // rax
  volatile sig... [249151 chars total]

// ---- full disassembly reconstruction (4687/4687 instructions) ----
run: /*1401a79d0*/ push rbp
/*1401a79d1*/  push r15
/*1401a79d3*/  push r14
/*1401a79d5*/  push r13
/*1401a79d7*/  push r12
/*1401a79d9*/  push rsi
/*1401a79da*/  push rdi
/*1401a79db*/  push rbx
/*1401a79dc*/  mov eax, 3688h
/*1401a79e1*/  call __alloca_probe
/*1401a79e6*/  sub rsp, rax
/*1401a79e9*/  lea rbp, [rsp+80h]
/*1401a79f1*/  movaps [rbp+3640h+var_50], xmm7
/*1401a79f8*/  movaps [rbp+3640h+var_60], xmm6
/*1401a79ff*/  mov [rbp+3640h+var_68], 0FFFFFFFFFFFFFFFEh
/*1401a7a0a*/  lea rsi, [rbp+3640h+var_32A0]
/*1401a7a11*/  mov rcx, rsi
/*1401a7a14*/  call sub_1407126F0
/*1401a7a19*/  lea rcx, [rbp+3640h+var_1DD0]
/*1401a7a20*/  mov rdx, rsi
/*1401a7a23*/  call sub_140714E90
/*1401a7a28*/  mov qword ptr [rbp+3640h+var_1DE0], 1
/*1401a7a33*/  mov qword ptr [rbp+3640h+var_1DE0+8], 1
/*1401a7a3e*/  call nullsub_1
/*1401a7a43*/  mov ecx, 3F0h
/*1401a7a48*/  mov edx, 8
/*1401a7a4d*/  call sub_140001650
/*1401a7a52*/  test rax, rax
/*1401a7a55*/  jz loc_1401ACAB6
/*1401a7a5b*/  mov rdi, rax
/*1401a7a5e*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a7a65*/  mov r8d, 3F0h
/*1401a7a6b*/  mov rcx, rax
/*1401a7a6e*/  call sub_141684120
/*1401a7a73*/  mov [rbp+3640h+var_F0], rdi
/*1401a7a7a*/  add rdi, 10h
loc_1401A7A7E: /*1401a7a7e*/ mov rcx, rdi
/*1401a7a81*/  call sub_140406560
/*1401a7a86*/  nop
/*1401a7a87*/  call GetCurrentProcessId
/*1401a7a8c*/  nop
/*1401a7a8d*/  mov dword ptr [rbp+3640h+var_2F0], eax
/*1401a7a93*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a7a9a*/  call sub_141483A00
/*1401a7a9f*/  nop
/*1401a7aa0*/  mov rax, qword ptr [rbp+3640h+var_1DE0]
/*1401a7aa7*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1401a7aab*/  jz short loc_1401A7AF7
/*1401a7aad*/  mov [rbp+3640h+var_78], rax
/*1401a7ab4*/  mov rdx, qword ptr [rbp+3640h+var_1DE0+8]
/*1401a7abb*/  mov r8, qword ptr [rbp+3640h+var_1DD0]
loc_1401A7AC2: /*1401a7ac2*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a7ac9*/  mov [rbp+3640h+Address], rdx
/*1401a7ad0*/  call sub_1414A3C90
/*1401a7ad5*/  nop
/*1401a7ad6*/  cmp dword ptr [rbp+3640h+var_1DE0], 1
/*1401a7add*/  jnz short loc_1401A7B06
/*1401a7adf*/  mov rdi, 0FFFFFFFFFFFFFFFFh
/*1401a7ae6*/  mov rdx, [rbp+3640h+var_78]
/*1401a7aed*/  test rdx, rdx
/*1401a7af0*/  jnz short loc_1401A7B6D
/*1401a7af2*/  jmp loc_1401A7B7F
loc_1401A7AF7: /*1401a7af7*/ lea rcx, [rbp+3640h+var_1DE0+8]
/*1401a7afe*/  call sub_140018650
/*1401a7b03*/  nop
/*1401a7b04*/  jmp short loc_1401A7B85
loc_1401A7B06: /*1401a7b06*/ mov rdi, qword ptr [rbp+3640h+var_1DD0]
/*1401a7b0d*/  test rdi, rdi
/*1401a7b10*/  jns short loc_1401A7B26
/*1401a7b12*/  xor r15d, r15d
loc_1401A7B15: /*1401a7b15*/ mov rcx, r15
/*1401a7b18*/  mov rdx, rdi
/*1401a7b1b*/  call sub_1416C2D4B
loc_1401A7B21: /*1401a7b21*/ jmp loc_1401ADC0A
loc_1401A7B26: /*1401a7b26*/ jz loc_1401A95DA
/*1401a7b2c*/  mov r14, qword ptr [rbp+3640h+var_1DE0+8]
/*1401a7b33*/  call nullsub_1
/*1401a7b38*/  mov r15d, 1
/*1401a7b3e*/  mov edx, 1
/*1401a7b43*/  mov rcx, rdi
/*1401a7b46*/  call sub_140001650
/*1401a7b4b*/  test rax, rax
/*1401a7b4e*/  jz short loc_1401A7B15
/*1401a7b50*/  mov rbx, rax
/*1401a7b53*/  mov rcx, rax
/*1401a7b56*/  mov rdx, r14
/*1401a7b59*/  mov r8, rdi
/*1401a7b5c*/  call sub_141684120
/*1401a7b61*/  mov rdx, [rbp+3640h+var_78]
/*1401a7b68*/  test rdx, rdx
/*1401a7b6b*/  jz short loc_1401A7B7F
loc_1401A7B6D: /*1401a7b6d*/ mov r8d, 1
/*1401a7b73*/  mov rcx, [rbp+3640h+Address]
/*1401a7b7a*/  call sub_140001660
loc_1401A7B7F: /*1401a7b7f*/ cmp rdi, 0FFFFFFFFFFFFFFFFh
/*1401a7b83*/  jnz short loc_1401A7BBB
loc_1401A7B85: /*1401a7b85*/ call nullsub_1
/*1401a7b8a*/  mov edi, 9
/*1401a7b8f*/  mov ecx, 9
/*1401a7b94*/  mov edx, 1
/*1401a7b99*/  call sub_140001650
/*1401a7b9e*/  test rax, rax
/*1401a7ba1*/  jz loc_1401AD7DD
/*1401a7ba7*/  mov rbx, rax
/*1401a7baa*/  mov rax, 6E776F6E6B6E753Ch
/*1401a7bb4*/  mov [rbx], rax
/*1401a7bb7*/  mov byte ptr [rbx+8], 3Eh ; '>'
loc_1401A7BBB: /*1401a7bbb*/ mov qword ptr [rbp+3640h+var_32A0], rdi
/*1401a7bc2*/  mov qword ptr [rbp+3640h+var_32A0+8], rbx
/*1401a7bc9*/  mov qword ptr [rbp+3640h+var_3290], rdi
/*1401a7bd0*/  lea rbx, [rbp+3640h+var_2F0]
/*1401a7bd7*/  mov qword ptr [rbp+3640h+var_1DE0], rbx
/*1401a7bde*/  lea rax, sub_1414AB780
/*1401a7be5*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a7bec*/  mov qword ptr [rbp+3640h+var_1DD0], rsi
/*1401a7bf3*/  lea r13, sub_1400015F0
/*1401a7bfa*/  mov qword ptr [rbp+3640h+var_1DD0+8], r13
loc_1401A7C01: /*1401a7c01*/ lea rdx, unk_1416CFF13
/*1401a7c08*/  lea rdi, [rbp+3640h+var_32B8]
/*1401a7c0f*/  lea r8, [rbp+3640h+var_1DE0]
/*1401a7c16*/  mov rcx, rdi
/*1401a7c19*/  call sub_14149C0F0
/*1401a7c1e*/  nop
/*1401a7c1f*/  mov rdx, qword ptr [rbp+3640h+var_32A0]
/*1401a7c26*/  test rdx, rdx
/*1401a7c29*/  jz short loc_1401A7C3E
/*1401a7c2b*/  mov rcx, qword ptr [rbp+3640h+var_32A0+8]
/*1401a7c32*/  mov r8d, 1
/*1401a7c38*/  call sub_140001660
/*1401a7c3d*/  nop
loc_1401A7C3E: /*1401a7c3e*/ mov [rsp+36C0h+var_36A0], rdi
/*1401a7c43*/  lea rcx, aApp; "app"
/*1401a7c4a*/  lea r8, aStarted; "started"
/*1401a7c51*/  mov edx, 3
/*1401a7c56*/  mov r9d, 7
/*1401a7c5c*/  call sub_1403565C0
/*1401a7c61*/  nop
/*1401a7c62*/  mov rcx, [rbp+3640h+var_F0]
/*1401a7c69*/  add rcx, 10h
/*1401a7c6d*/  call sub_140712590
/*1401a7c72*/  nop
/*1401a7c73*/  test rax, rax
/*1401a7c76*/  jz loc_1401A7D58
/*1401a7c7c*/  mov qword ptr [rbp+3640h+var_2F0], rax
/*1401a7c83*/  mov rax, cs:off_141EC8D80
/*1401a7c8a*/  mov rax, [rax]
/*1401a7c8d*/  cmp rax, 2
/*1401a7c91*/  jb loc_1401A7D4B
/*1401a7c97*/  mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401a7c9e*/  lea rax, sub_141490720
/*1401a7ca5*/  mov qword ptr [rbp+3640h+var_32A0+8], rax
/*1401a7cac*/  mov qword ptr [rbp+3640h+var_1DE0], 0
/*1401a7cb7*/  lea rax, aCodexmateLib; "codexmate_lib"
/*1401a7cbe*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a7cc5*/  mov qword ptr [rbp+3640h+var_1DD0], 0Dh
/*1401a7cd0*/  mov qword ptr [rbp+3640h+var_1DD0+8], 0
/*1401a7cdb*/  lea rcx, aSrcLibRs_0; "src\\lib.rs"
/*1401a7ce2*/  mov qword ptr [rbp+3640h+var_1DC0], rcx
/*1401a7ce9*/  mov qword ptr [rbp+3640h+var_1DC0+8], 0Ah
/*1401a7cf4*/  mov [rbp+3640h+var_1DB0], 2
/*1401a7cff*/  mov [rbp+3640h+var_1DA8], rax
/*1401a7d06*/  mov [rbp+3640h+var_1DA0], 0Dh
/*1401a7d11*/  mov rax, 10500000001h
/*1401a7d1b*/  mov [rbp+3640h+var_1D98], rax
/*1401a7d22*/  lea rax, unk_1416CFF29
/*1401a7d29*/  mov [rbp+3640h+var_1D90], rax
/*1401a7d30*/  mov [rbp+3640h+var_1D88], rsi
loc_1401A7D37: /*1401a7d37*/ lea rcx, [rbp+3640h+var_AB]
/*1401a7d3e*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a7d45*/  call sub_1412C36A0
/*1401a7d4a*/  nop
loc_1401A7D4B: /*1401a7d4b*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a7d52*/  call sub_140018650
/*1401a7d57*/  nop
loc_1401A7D58: /*1401a7d58*/ lea rcx, [rbp+3640h+var_3628]
/*1401a7d5c*/  call sub_1406B1F90
/*1401a7d61*/  nop
/*1401a7d62*/  cmp qword ptr [rbp+3640h+var_3628], 0FFFFFFFFFFFFFFFFh
/*1401a7d67*/  jz loc_1401A7EF2
/*1401a7d6d*/  mov rax, [rbp+3640h+var_3618]
/*1401a7d71*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401a7d78*/  movdqu xmm0, [rbp+3640h+var_3628]
/*1401a7d7d*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401a7d85*/  mov r14, cs:off_141EC8D80
/*1401a7d8c*/  mov rax, [r14]
/*1401a7d8f*/  cmp rax, 2
/*1401a7d93*/  jb loc_1401A7E46
/*1401a7d99*/  mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401a7da0*/  mov qword ptr [rbp+3640h+var_32A0+8], r13
/*1401a7da7*/  mov qword ptr [rbp+3640h+var_1DE0], 0
/*1401a7db2*/  lea rax, aCodexmateLib; "codexmate_lib"
/*1401a7db9*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a7dc0*/  mov qword ptr [rbp+3640h+var_1DD0], 0Dh
/*1401a7dcb*/  mov qword ptr [rbp+3640h+var_1DD0+8], 0
/*1401a7dd6*/  lea rcx, aSrcLibRs_0; "src\\lib.rs"
/*1401a7ddd*/  mov qword ptr [rbp+3640h+var_1DC0], rcx
/*1401a7de4*/  mov qword ptr [rbp+3640h+var_1DC0+8], 0Ah
/*1401a7def*/  mov [rbp+3640h+var_1DB0], 2
/*1401a7dfa*/  mov [rbp+3640h+var_1DA8], rax
/*1401a7e01*/  mov [rbp+3640h+var_1DA0], 0Dh
/*1401a7e0c*/  mov rax, 10F00000001h
/*1401a7e16*/  mov [rbp+3640h+var_1D98], rax
/*1401a7e1d*/  lea rax, unk_14173B1B0
/*1401a7e24*/  mov [rbp+3640h+var_1D90], rax
/*1401a7e2b*/  mov [rbp+3640h+var_1D88], rsi
loc_1401A7E32: /*1401a7e32*/ lea rcx, [rbp+3640h+var_AB]
/*1401a7e39*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a7e40*/  call sub_1412C36A0
/*1401a7e45*/  nop
loc_1401A7E46: /*1401a7e46*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a7e4d*/  call sub_141483AB0
/*1401a7e52*/  nop
/*1401a7e53*/  lea rdi, [rbp+3640h+var_32A0]
/*1401a7e5a*/  lea rbx, [rbp+3640h+var_1DE0]
/*1401a7e61*/  mov r15, 2F3A696D616D6961h
/*1401a7e6b*/  nop dword ptr [rax+rax+00h]
loc_1401A7E70: /*1401a7e70*/ mov rcx, rdi
/*1401a7e73*/  mov rdx, rbx
/*1401a7e76*/  call sub_141491AE0
/*1401a7e7b*/  nop
/*1401a7e7c*/  mov rdx, qword ptr [rbp+3640h+var_32A0]
/*1401a7e83*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1401a7e87*/  jz short loc_1401A7ECC
/*1401a7e89*/  mov r12, qword ptr [rbp+3640h+var_32A0+8]
/*1401a7e90*/  mov rsi, qword ptr [rbp+3640h+var_3290]
/*1401a7e97*/  cmp rsi, 9
/*1401a7e9b*/  jb short loc_1401A7EB7
/*1401a7e9d*/  mov rax, [r12]
/*1401a7ea1*/  xor rax, r15
/*1401a7ea4*/  movzx ecx, byte ptr [r12+8]
/*1401a7eaa*/  xor rcx, 2Fh
/*1401a7eae*/  or rcx, rax
/*1401a7eb1*/  jz loc_1401A8066
loc_1401A7EB7: /*1401a7eb7*/ test rdx, rdx
/*1401a7eba*/  jz short loc_1401A7E70
/*1401a7ebc*/  mov r8d, 1
/*1401a7ec2*/  mov rcx, r12
/*1401a7ec5*/  call sub_140001660
/*1401a7eca*/  jmp short loc_1401A7E70
loc_1401A7ECC: /*1401a7ecc*/ mov [rbp+3640h+var_78], rdx
/*1401a7ed3*/  xor r12d, r12d
/*1401a7ed6*/  mov rdi, qword ptr [rbp+3640h+var_1DE0+8]
/*1401a7edd*/  mov rbx, qword ptr [rbp+3640h+var_1DD0+8]
/*1401a7ee4*/  sub rbx, rdi
/*1401a7ee7*/  jnz loc_1401A8080
/*1401a7eed*/  jmp loc_1401A80B2
loc_1401A7EF2: /*1401a7ef2*/ mov rsi, qword ptr [rbp+3640h+var_3628+8]
/*1401a7ef6*/  call nullsub_1
/*1401a7efb*/  mov ecx, 28h ; '('
/*1401a7f00*/  mov edx, 8
/*1401a7f05*/  call sub_140001650
/*1401a7f0a*/  test rax, rax
/*1401a7f0d*/  jz loc_1401ACACB
/*1401a7f13*/  mov qword ptr [rax], 1
/*1401a7f1a*/  mov qword ptr [rax+8], 1
/*1401a7f22*/  mov qword ptr [rax+10h], 0
/*1401a7f2a*/  mov qword ptr [rax+18h], 1
/*1401a7f32*/  mov [rax+20h], rsi
/*1401a7f36*/  mov [rbp+3640h+var_120], rax
/*1401a7f3d*/  mov rax, [rbp+3640h+var_F0]
/*1401a7f44*/  lock inc qword ptr [rax]
/*1401a7f48*/  jle loc_1401ADC0A
/*1401a7f4e*/  mov rdx, [rbp+3640h+var_F0]
loc_1401A7F55: /*1401a7f55*/ lea rcx, [rbp+3640h+var_8E0]
/*1401a7f5c*/  call new
/*1401a7f61*/  nop
/*1401a7f62*/  mov rax, [rbp+3640h+var_8B8]
/*1401a7f69*/  lock inc qword ptr [rax]
/*1401a7f6d*/  jle loc_1401ADC0A
/*1401a7f73*/  mov [rbp+3640h+var_338], rax
/*1401a7f7a*/  mov [rbp+3640h+var_B6], 1
/*1401a7f81*/  mov [rbp+3640h+var_B7], 1
loc_1401A7F88: /*1401a7f88*/ lea rcx, [rbp+3640h+var_33F8]
/*1401a7f8f*/  call sub_140E82200
/*1401a7f94*/  nop
/*1401a7f95*/  mov [rbp+3640h+var_AC], 1
/*1401a7f9c*/  mov [rbp+3640h+var_AD], 1
/*1401a7fa3*/  mov [rbp+3640h+var_AE], 1
loc_1401A7FAA: /*1401a7faa*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a7fb1*/  call sub_1406B1E00
/*1401a7fb6*/  nop
loc_1401A7FB7: /*1401a7fb7*/ mov rax, qword ptr [rbp+3640h+var_32A0]
/*1401a7fbe*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1401a7fc2*/  jz loc_1401A8217
/*1401a7fc8*/  mov [rbp+3640h+var_78], rax
/*1401a7fcf*/  mov rax, qword ptr [rbp+3640h+var_32A0+8]
/*1401a7fd6*/  mov [rbp+3640h+Address], rax
/*1401a7fdd*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a7fe4*/  lea rdx, [rbp+3640h+var_33F8]
/*1401a7feb*/  mov r8d, 0B8h
/*1401a7ff1*/  call sub_141684120
/*1401a7ff6*/  mov rsi, [rbp+3640h+var_1D70]
/*1401a7ffd*/  cmp rsi, [rbp+3640h+var_1D80]
/*1401a8004*/  jnz short loc_1401A8013
loc_1401A8006: /*1401a8006*/ lea rcx, [rbp+3640h+var_1D80]
/*1401a800d*/  call sub_1416C1D00
/*1401a8012*/  nop
loc_1401A8013: /*1401a8013*/ lea rax, [rbp+3640h+var_3290]
/*1401a801a*/  mov rcx, [rbp+3640h+var_1D78]
/*1401a8021*/  mov rdx, rsi
/*1401a8024*/  shl rdx, 5
/*1401a8028*/  mov r8, [rbp+3640h+var_78]
/*1401a802f*/  mov [rcx+rdx], r8
/*1401a8033*/  mov r8, [rbp+3640h+Address]
/*1401a803a*/  mov [rcx+rdx+8], r8
/*1401a803f*/  movdqu xmm0, xmmword ptr [rax]
/*1401a8043*/  movdqu xmmword ptr [rcx+rdx+10h], xmm0
/*1401a8049*/  inc rsi
/*1401a804c*/  mov [rbp+3640h+var_1D70], rsi
/*1401a8053*/  lea rcx, [rbp+3640h+var_34B0]
/*1401a805a*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8061*/  jmp loc_1401A8225
loc_1401A8066: /*1401a8066*/ mov [rbp+3640h+var_78], rdx
/*1401a806d*/  mov rdi, qword ptr [rbp+3640h+var_1DE0+8]
/*1401a8074*/  mov rbx, qword ptr [rbp+3640h+var_1DD0+8]
/*1401a807b*/  sub rbx, rdi
/*1401a807e*/  jz short loc_1401A80B2
loc_1401A8080: /*1401a8080*/ shr rbx, 5
/*1401a8084*/  add rdi, 8
/*1401a8088*/  jmp short loc_1401A8099
loc_1401A8090: /*1401a8090*/ add rdi, 20h ; ' '
/*1401a8094*/  dec rbx
/*1401a8097*/  jz short loc_1401A80B2
loc_1401A8099: /*1401a8099*/ mov rdx, [rdi-8]
/*1401a809d*/  test rdx, rdx
/*1401a80a0*/  jz short loc_1401A8090
/*1401a80a2*/  mov rcx, [rdi]
/*1401a80a5*/  mov r8d, 1
/*1401a80ab*/  call sub_140001660
/*1401a80b0*/  jmp short loc_1401A8090
loc_1401A80B2: /*1401a80b2*/ mov rdx, qword ptr [rbp+3640h+var_1DD0]
/*1401a80b9*/  test rdx, rdx
/*1401a80bc*/  jz short loc_1401A80D5
/*1401a80be*/  mov rcx, qword ptr [rbp+3640h+var_1DE0]
/*1401a80c5*/  shl rdx, 5
/*1401a80c9*/  mov r8d, 8
/*1401a80cf*/  call sub_140001660
/*1401a80d4*/  nop
loc_1401A80D5: /*1401a80d5*/ mov [rbp+3640h+Address], r12
/*1401a80dc*/  mov rcx, r12
/*1401a80df*/  mov rdx, rsi
/*1401a80e2*/  call request_existing_instance_activation_wit
/*1401a80e7*/  nop
/*1401a80e8*/  test al, al
/*1401a80ea*/  jnz loc_1401A81A0
/*1401a80f0*/  mov rax, [r14]
/*1401a80f3*/  cmp rax, 2
/*1401a80f7*/  jb loc_1401A81A0
/*1401a80fd*/  mov qword ptr [rbp+3640h+var_1DE0], 0
/*1401a8108*/  lea rax, aCodexmateLib; "codexmate_lib"
/*1401a810f*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a8116*/  mov qword ptr [rbp+3640h+var_1DD0], 0Dh
/*1401a8121*/  mov qword ptr [rbp+3640h+var_1DD0+8], 0
/*1401a812c*/  lea rcx, aSrcLibRs_0; "src\\lib.rs"
/*1401a8133*/  mov qword ptr [rbp+3640h+var_1DC0], rcx
/*1401a813a*/  mov qword ptr [rbp+3640h+var_1DC0+8], 0Ah
/*1401a8145*/  mov [rbp+3640h+var_1DB0], 2
/*1401a8150*/  mov [rbp+3640h+var_1DA8], rax
/*1401a8157*/  mov [rbp+3640h+var_1DA0], 0Dh
/*1401a8162*/  mov rax, 11900000001h
/*1401a816c*/  mov [rbp+3640h+var_1D98], rax
/*1401a8173*/  lea rax, aAimamiFailedTo; "[AiMaMi] failed to activate the running"...
/*1401a817a*/  mov [rbp+3640h+var_1D90], rax
/*1401a8181*/  mov [rbp+3640h+var_1D88], 61h ; 'a'
/*1401a818c*/  lea rcx, [rbp+3640h+var_AB]
/*1401a8193*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a819a*/  call sub_1412C36A0
/*1401a819f*/  nop
loc_1401A81A0: /*1401a81a0*/ mov rdx, [rbp+3640h+var_78]
/*1401a81a7*/  test rdx, rdx
/*1401a81aa*/  jle short loc_1401A81BE
/*1401a81ac*/  mov r8d, 1
/*1401a81b2*/  mov rcx, [rbp+3640h+Address]
/*1401a81b9*/  call sub_140001660
loc_1401A81BE: /*1401a81be*/ mov rdx, qword ptr [rbp+3640h+var_2F0]
/*1401a81c5*/  test rdx, rdx
/*1401a81c8*/  jz short loc_1401A81DC
/*1401a81ca*/  mov rcx, qword ptr [rbp+3640h+var_2F0+8]
/*1401a81d1*/  mov r8d, 1
/*1401a81d7*/  call sub_140001660
loc_1401A81DC: /*1401a81dc*/ mov rax, [rbp+3640h+var_F0]
/*1401a81e3*/  lock dec qword ptr [rax]
/*1401a81e7*/  jnz short loc_1401A81F5
/*1401a81e9*/  lea rcx, [rbp+3640h+var_F0]
/*1401a81f0*/  call sub_140575F20
loc_1401A81F5: /*1401a81f5*/ movaps xmm6, [rbp+3640h+var_60]
/*1401a81fc*/  movaps xmm7, [rbp+3640h+var_50]
/*1401a8203*/  add rsp, 3688h
/*1401a820a*/  pop rbx
/*1401a820b*/  pop rdi
/*1401a820c*/  pop rsi
/*1401a820d*/  pop r12
/*1401a820f*/  pop r13
/*1401a8211*/  pop r14
/*1401a8213*/  pop r15
/*1401a8215*/  pop rbp
/*1401a8216*/  retn
loc_1401A8217: /*1401a8217*/ lea rcx, [rbp+3640h+var_34B0]
/*1401a821e*/  lea rdx, [rbp+3640h+var_33F8]
loc_1401A8225: /*1401a8225*/ mov r8d, 0B8h
/*1401a822b*/  call sub_141684120
/*1401a8230*/  mov [rbp+3640h+var_910], 0
/*1401a823b*/  mov [rbp+3640h+var_908], 8
/*1401a8246*/  mov [rbp+3640h+var_900], 0
/*1401a8251*/  mov [rbp+3640h+var_8F8], 0FFFFFFFFFFFFFFFFh
/*1401a825c*/  mov [rbp+3640h+var_B0], 1
/*1401a8263*/  mov [rbp+3640h+var_B1], 1
/*1401a826a*/  mov [rbp+3640h+var_B2], 1
loc_1401A8271: /*1401a8271*/ lea r8, aHidden_0; "--hidden"
/*1401a8278*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a827f*/  lea rdx, [rbp+3640h+var_910]
/*1401a8286*/  mov r9d, 8
/*1401a828c*/  call sub_1406845D0
/*1401a8291*/  nop
/*1401a8292*/  mov [rbp+3640h+var_B0], 1
/*1401a8299*/  mov [rbp+3640h+var_B1], 1
/*1401a82a0*/  mov [rbp+3640h+var_B2], 1
/*1401a82a7*/  lea rcx, [rbp+3640h+var_3628]
/*1401a82ab*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a82b2*/  call sub_140684740
/*1401a82b7*/  nop
/*1401a82b8*/  mov [rbp+3640h+var_6A], 1
/*1401a82bf*/  mov [rbp+3640h+var_6B], 1
/*1401a82c6*/  mov [rbp+3640h+var_6C], 1
/*1401a82cd*/  mov [rbp+3640h+var_6D], 1
loc_1401A82D4: /*1401a82d4*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a82db*/  call sub_1412182D0
/*1401a82e0*/  nop
/*1401a82e1*/  mov [rbp+3640h+var_B8], 1
loc_1401A82E8: /*1401a82e8*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a82ef*/  call sub_1401C6180
/*1401a82f4*/  nop
loc_1401A82F5: /*1401a82f5*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a82fc*/  lea rdx, [rbp+3640h+var_2F0]
/*1401a8303*/  mov r8d, 158h
/*1401a8309*/  call sub_141684120
/*1401a830e*/  call nullsub_1
/*1401a8313*/  mov ecx, 178h
/*1401a8318*/  mov edx, 8
/*1401a831d*/  call sub_140001650
/*1401a8322*/  test rax, rax
/*1401a8325*/  mov [rbp+3640h+var_78], rax
/*1401a832c*/  jz loc_1401ACAE7
/*1401a8332*/  mov rbx, rax
/*1401a8335*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a833c*/  mov r8d, 178h
/*1401a8342*/  mov rcx, rax
/*1401a8345*/  call sub_141684120
/*1401a834a*/  lea rdi, [rbp+3640h+var_3290+8]
/*1401a8351*/  mov [rbp+3640h+var_B9], 1
loc_1401A8358: /*1401a8358*/ lea rsi, off_1416C8B08
/*1401a835f*/  mov rcx, rdi
/*1401a8362*/  mov rdx, rbx
/*1401a8365*/  mov r8, rsi
/*1401a8368*/  call sub_1402ACBD0
/*1401a836d*/  nop
/*1401a836e*/  mov rbx, qword ptr [rbp+3640h+var_3280+8]
/*1401a8375*/  cmp rbx, qword ptr [rbp+3640h+var_3290+8]
/*1401a837c*/  jnz short loc_1401A8387
loc_1401A837E: /*1401a837e*/ mov rcx, rdi
/*1401a8381*/  call sub_141688F50
/*1401a8386*/  nop
loc_1401A8387: /*1401a8387*/ mov rax, qword ptr [rbp+3640h+var_3280]
/*1401a838e*/  mov rcx, rbx
/*1401a8391*/  shl rcx, 4
/*1401a8395*/  mov rdx, [rbp+3640h+var_78]
/*1401a839c*/  mov [rax+rcx], rdx
/*1401a83a0*/  mov [rax+rcx+8], rsi
/*1401a83a5*/  inc rbx
/*1401a83a8*/  mov qword ptr [rbp+3640h+var_3280+8], rbx
/*1401a83af*/  lea rcx, [rbp+3640h+var_4A0]
/*1401a83b6*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a83bd*/  mov r8d, 158h
/*1401a83c3*/  call sub_141684120
/*1401a83c8*/  mov [rbp+3640h+var_8A], 1
loc_1401A83CF: /*1401a83cf*/ lea rdx, aDialog; "dialog"
/*1401a83d6*/  lea rcx, [rbp+3640h+var_5B0]
/*1401a83dd*/  mov r8d, 6
/*1401a83e3*/  call sub_1401B3610
/*1401a83e8*/  nop
loc_1401A83E9: /*1401a83e9*/ mov rsi, qword ptr [rbp+3640h+var_5B0]
/*1401a83f0*/  mov rdi, qword ptr [rbp+3640h+var_5B0+8]
/*1401a83f7*/  lea rdx, [rbp+3640h+var_5A0+9]
/*1401a83fe*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a8405*/  mov r8d, 0C7h
/*1401a840b*/  call sub_141684120
/*1401a8410*/  call nullsub_1
/*1401a8415*/  mov ecx, 149h
/*1401a841a*/  mov edx, 1
/*1401a841f*/  call sub_140001650
/*1401a8424*/  test rax, rax
/*1401a8427*/  jz loc_1401AD7F2
/*1401a842d*/  mov rbx, rax
/*1401a8430*/  lea rdx, aFunctionUseStr_0; "!function(){\"use strict\";async functi"...
/*1401a8437*/  mov r8d, 149h
/*1401a843d*/  mov rcx, rax
/*1401a8440*/  call sub_141684120
/*1401a8445*/  lea rax, [rsi-1]
/*1401a8449*/  cmp rax, 0FFFFFFFFFFFFFFFDh
/*1401a844d*/  ja short loc_1401A8460
/*1401a844f*/  mov r8d, 1
/*1401a8455*/  mov rcx, rdi
/*1401a8458*/  mov rdx, rsi
/*1401a845b*/  call sub_140001660
loc_1401A8460: /*1401a8460*/ mov qword ptr [rbp+3640h+var_5B0], 149h
/*1401a846b*/  mov qword ptr [rbp+3640h+var_5B0+8], rbx
/*1401a8472*/  mov qword ptr [rbp+3640h+var_5A0], 149h
/*1401a847d*/  mov byte ptr [rbp+3640h+var_5A0+8], 1
/*1401a8484*/  lea rcx, [rbp+3640h+var_5A0+9]
/*1401a848b*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8492*/  mov r8d, 0C7h
/*1401a8498*/  call sub_141684120
/*1401a849d*/  mov rax, [rbp+3640h+var_580]
/*1401a84a4*/  mov [rbp+3640h+var_78], rax
/*1401a84ab*/  mov rax, [rbp+3640h+var_578]
/*1401a84b2*/  mov [rbp+3640h+Address], rax
/*1401a84b9*/  mov rax, [rax]
/*1401a84bc*/  test rax, rax
/*1401a84bf*/  jz short loc_1401A84CB
loc_1401A84C1: /*1401a84c1*/ mov rcx, [rbp+3640h+var_78]
/*1401a84c8*/  call rax
/*1401a84ca*/  nop
loc_1401A84CB: /*1401a84cb*/ mov rcx, [rbp+3640h+var_78]
/*1401a84d2*/  mov rax, [rbp+3640h+Address]
/*1401a84d9*/  mov rdx, [rax+8]
/*1401a84dd*/  test rdx, rdx
/*1401a84e0*/  jz short loc_1401A84EB
/*1401a84e2*/  mov r8, [rax+10h]
/*1401a84e6*/  call sub_140001660
loc_1401A84EB: /*1401a84eb*/ mov [rbp+3640h+var_580], 1
/*1401a84f6*/  lea rax, unk_1416C7A18
/*1401a84fd*/  mov [rbp+3640h+var_578], rax
/*1401a8504*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a850b*/  lea rbx, [rbp+3640h+var_5B0]
/*1401a8512*/  mov r8d, 0E0h
/*1401a8518*/  mov rdx, rbx
/*1401a851b*/  call sub_141684120
/*1401a8520*/  mov rcx, [rbp+3640h+var_1D20]
/*1401a8527*/  mov rdx, qword ptr [rbp+3640h+var_1D18]
/*1401a852e*/  mov [rbp+3640h+var_1D20], 1
/*1401a8539*/  lea rax, unk_1416C7CB8
/*1401a8540*/  mov qword ptr [rbp+3640h+var_1D18], rax
/*1401a8547*/  mov [rbp+3640h+var_78], rcx
/*1401a854e*/  test rcx, rcx
/*1401a8551*/  jz short loc_1401A858C
/*1401a8553*/  mov [rbp+3640h+Address], rdx
/*1401a855a*/  mov rax, [rdx]
/*1401a855d*/  test rax, rax
/*1401a8560*/  jz short loc_1401A856C
loc_1401A8562: /*1401a8562*/ mov rcx, [rbp+3640h+var_78]
/*1401a8569*/  call rax
/*1401a856b*/  nop
loc_1401A856C: /*1401a856c*/ mov rax, [rbp+3640h+Address]
/*1401a8573*/  mov rdx, [rax+8]
/*1401a8577*/  test rdx, rdx
/*1401a857a*/  jz short loc_1401A858C
/*1401a857c*/  mov r8, [rax+10h]
/*1401a8580*/  mov rcx, [rbp+3640h+var_78]
/*1401a8587*/  call sub_140001660
loc_1401A858C: /*1401a858c*/ lea rsi, [rbp+3640h+var_2F0]
/*1401a8593*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a859a*/  mov r8d, 0E0h
/*1401a85a0*/  mov rcx, rsi
/*1401a85a3*/  call sub_141684120
/*1401a85a8*/  mov [rbp+3640h+var_8A], 1
loc_1401A85AF: /*1401a85af*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a85b6*/  mov rdx, rsi
/*1401a85b9*/  call sub_1401B37D0
/*1401a85be*/  nop
loc_1401A85BF: /*1401a85bf*/ cmp dword ptr [rbp+3640h+var_1DE0], 0FFFFFFFEh
/*1401a85c6*/  jz loc_1401ACB26
/*1401a85cc*/  lea rsi, [rbp+3640h+var_32A0]
/*1401a85d3*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a85da*/  mov r8d, 178h
/*1401a85e0*/  mov rcx, rsi
/*1401a85e3*/  call sub_141684120
/*1401a85e8*/  mov [rbp+3640h+var_8A], 0
loc_1401A85EF: /*1401a85ef*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a85f6*/  lea rdx, [rbp+3640h+var_4A0]
/*1401a85fd*/  mov r8, rsi
/*1401a8600*/  call sub_140006610
/*1401a8605*/  nop
/*1401a8606*/  mov qword ptr [rbp+3640h+var_32A0], 0
/*1401a8611*/  mov qword ptr [rbp+3640h+var_32A0+8], 4
/*1401a861c*/  pxor xmm0, xmm0
/*1401a8620*/  movdqu [rbp+3640h+var_3290], xmm0
/*1401a8628*/  mov [rbp+3640h+var_BF], 1
loc_1401A862F: /*1401a862f*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a8636*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a863d*/  call sub_140718C30
/*1401a8642*/  nop
/*1401a8643*/  mov [rbp+3640h+var_BF], 0
/*1401a864a*/  lea rcx, [rbp+3640h+var_32A0]
/*1401a8651*/  lea rdx, [rbp+3640h+var_2F0]
/*1401a8658*/  lea r8, [rbp+3640h+var_1DE0]
/*1401a865f*/  call sub_140006610
/*1401a8664*/  nop
/*1401a8665*/  mov [rbp+3640h+var_C0], 1
loc_1401A866C: /*1401a866c*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a8673*/  call sub_1406BF100
/*1401a8678*/  nop
/*1401a8679*/  mov [rbp+3640h+var_C0], 0
/*1401a8680*/  lea rcx, [rbp+3640h+var_2F0]
/*1401a8687*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a868e*/  lea r8, [rbp+3640h+var_1DE0]
/*1401a8695*/  call sub_140006610
/*1401a869a*/  nop
loc_1401A869B: /*1401a869b*/ call sub_141470CD0
/*1401a86a0*/  nop
loc_1401A86A1: /*1401a86a1*/ mov rsi, rax
/*1401a86a4*/  cmp byte ptr [rax+10h], 1
/*1401a86a8*/  jnz loc_1401ACB75
/*1401a86ae*/  mov rax, [rsi]
/*1401a86b1*/  mov rdx, [rsi+8]
loc_1401A86B5: /*1401a86b5*/ lea rcx, [rax+1]
/*1401a86b9*/  mov [rsi], rcx
/*1401a86bc*/  lea rcx, aShell_0; "shell"
/*1401a86c3*/  mov qword ptr [rbp+3640h+var_1DC0], rcx
/*1401a86ca*/  mov qword ptr [rbp+3640h+var_1DC0+8], 5
/*1401a86d5*/  mov [rbp+3640h+var_1DB0], 1
/*1401a86e0*/  lea rcx, unk_14173B6D8
/*1401a86e7*/  mov [rbp+3640h+var_1DA8], rcx
/*1401a86ee*/  mov [rbp+3640h+var_1D20], 0
/*1401a86f9*/  mov qword ptr [rbp+3640h+var_1DE0], 0FFFFFFFFFFFFFFFFh
/*1401a8704*/  mov [rbp+3640h+var_1DA0], 1
/*1401a870f*/  lea rcx, unk_14173B708
/*1401a8716*/  mov [rbp+3640h+var_1D98], rcx
/*1401a871d*/  mov [rbp+3640h+var_1D90], 1
/*1401a8728*/  lea rcx, unk_14173B738
/*1401a872f*/  mov [rbp+3640h+var_1D88], rcx
/*1401a8736*/  mov [rbp+3640h+var_1D80], 1
/*1401a8741*/  lea rcx, unk_14173B760
/*1401a8748*/  mov [rbp+3640h+var_1D78], rcx
/*1401a874f*/  mov [rbp+3640h+var_1D70], 1
/*1401a875a*/  lea rcx, unk_14173B788
/*1401a8761*/  mov [rbp+3640h+var_1D68], rcx
/*1401a8768*/  mov [rbp+3640h+var_1D60], 1
/*1401a8773*/  lea rcx, unk_14173B7B0
/*1401a877a*/  mov [rbp+3640h+var_1D58], rcx
/*1401a8781*/  mov qword ptr [rbp+3640h+var_1D18+8], 0
/*1401a878c*/  movups xmm6, xmmword ptr cs:off_1416C8800
/*1401a8793*/  movups [rbp+3640h+var_1D50], xmm6
/*1401a879a*/  movups xmm7, cs:xmmword_1416C8810
/*1401a87a1*/  movups [rbp+3640h+var_1D40], xmm7
/*1401a87a8*/  mov [rbp+3640h+var_1D30], rax
/*1401a87af*/  mov [rbp+3640h+var_1D28], rdx
/*1401a87b6*/  call nullsub_1
/*1401a87bb*/  mov ecx, 260h
/*1401a87c0*/  mov edx, 1
/*1401a87c5*/  call sub_140001650
/*1401a87ca*/  test rax, rax
/*1401a87cd*/  jz loc_1401AD807
/*1401a87d3*/  mov rsi, rax
/*1401a87d6*/  lea rdx, aFunctionUseStr; "!function(){\"use strict\";async functi"...
/*1401a87dd*/  mov r8d, 260h
/*1401a87e3*/  mov rcx, rax
/*1401a87e6*/  call sub_141684120
/*1401a87eb*/  mov qword ptr [rbp+3640h+var_1DE0], 260h
/*1401a87f6*/  mov qword ptr [rbp+3640h+var_1DE0+8], rsi
/*1401a87fd*/  mov qword ptr [rbp+3640h+var_1DD0], 260h
/*1401a8808*/  mov byte ptr [rbp+3640h+var_1DD0+8], 1
/*1401a880f*/  lea rcx, [rbp+3640h+var_32A0]
/*1401a8816*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a881d*/  mov r8d, 0E0h
/*1401a8823*/  call sub_141684120
/*1401a8828*/  mov rax, qword ptr [rbp+3640h+var_3270]
/*1401a882f*/  mov [rbp+3640h+var_78], rax
/*1401a8836*/  mov rax, qword ptr [rbp+3640h+var_3270+8]
/*1401a883d*/  mov [rbp+3640h+Address], rax
/*1401a8844*/  mov rax, [rax]
/*1401a8847*/  test rax, rax
/*1401a884a*/  jz short loc_1401A8856
loc_1401A884C: /*1401a884c*/ mov rcx, [rbp+3640h+var_78]
/*1401a8853*/  call rax
/*1401a8855*/  nop
loc_1401A8856: /*1401a8856*/ mov rcx, [rbp+3640h+var_78]
/*1401a885d*/  mov rax, [rbp+3640h+Address]
/*1401a8864*/  mov rdx, [rax+8]
/*1401a8868*/  test rdx, rdx
/*1401a886b*/  jz short loc_1401A8876
/*1401a886d*/  mov r8, [rax+10h]
/*1401a8871*/  call sub_140001660
loc_1401A8876: /*1401a8876*/ mov qword ptr [rbp+3640h+var_3270], 1
/*1401a8881*/  lea rax, unk_1416C7DA0
/*1401a8888*/  mov qword ptr [rbp+3640h+var_3270+8], rax
/*1401a888f*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a8896*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a889d*/  mov r8d, 0E0h
/*1401a88a3*/  call sub_141684120
/*1401a88a8*/  mov rcx, [rbp+3640h+var_1D20]
/*1401a88af*/  mov rdx, qword ptr [rbp+3640h+var_1D18]
/*1401a88b6*/  mov [rbp+3640h+var_1D20], 1
/*1401a88c1*/  lea rax, unk_1416C7DD0
/*1401a88c8*/  mov qword ptr [rbp+3640h+var_1D18], rax
/*1401a88cf*/  mov [rbp+3640h+var_78], rcx
/*1401a88d6*/  test rcx, rcx
/*1401a88d9*/  jz short loc_1401A8914
/*1401a88db*/  mov [rbp+3640h+Address], rdx
/*1401a88e2*/  mov rax, [rdx]
/*1401a88e5*/  test rax, rax
/*1401a88e8*/  jz short loc_1401A88F4
loc_1401A88EA: /*1401a88ea*/ mov rcx, [rbp+3640h+var_78]
/*1401a88f1*/  call rax
/*1401a88f3*/  nop
loc_1401A88F4: /*1401a88f4*/ mov rax, [rbp+3640h+Address]
/*1401a88fb*/  mov rdx, [rax+8]
/*1401a88ff*/  test rdx, rdx
/*1401a8902*/  jz short loc_1401A8914
/*1401a8904*/  mov r8, [rax+10h]
/*1401a8908*/  mov rcx, [rbp+3640h+var_78]
/*1401a890f*/  call sub_140001660
loc_1401A8914: /*1401a8914*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a891b*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8922*/  mov r8d, 0E0h
/*1401a8928*/  call sub_141684120
/*1401a892d*/  mov rax, [rbp+3640h+var_3220]
/*1401a8934*/  mov [rbp+3640h+var_78], rax
/*1401a893b*/  mov rax, qword ptr [rbp+3640h+var_3218]
/*1401a8942*/  mov [rbp+3640h+Address], rax
/*1401a8949*/  mov rax, [rax]
/*1401a894c*/  test rax, rax
/*1401a894f*/  jz short loc_1401A895B
loc_1401A8951: /*1401a8951*/ mov rcx, [rbp+3640h+var_78]
/*1401a8958*/  call rax
/*1401a895a*/  nop
loc_1401A895B: /*1401a895b*/ mov rcx, [rbp+3640h+var_78]
/*1401a8962*/  mov rax, [rbp+3640h+Address]
/*1401a8969*/  mov rdx, [rax+8]
/*1401a896d*/  test rdx, rdx
/*1401a8970*/  jz short loc_1401A897B
/*1401a8972*/  mov r8, [rax+10h]
/*1401a8976*/  call sub_140001660
loc_1401A897B: /*1401a897b*/ mov [rbp+3640h+var_3220], 1
/*1401a8986*/  lea rax, unk_1416C7DF0
/*1401a898d*/  mov qword ptr [rbp+3640h+var_3218], rax
/*1401a8994*/  lea rcx, [rbp+3640h+var_4A0]
/*1401a899b*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a89a2*/  mov r8d, 0E0h
/*1401a89a8*/  call sub_141684120
/*1401a89ad*/  mov rdi, qword ptr [rbp+3640h+var_480]
/*1401a89b4*/  mov rsi, qword ptr [rbp+3640h+var_480+8]
/*1401a89bb*/  cmp rsi, 5
/*1401a89bf*/  jz short loc_1401A89DB
/*1401a89c1*/  cmp rsi, 4
/*1401a89c5*/  jnz short loc_1401A89F1
/*1401a89c7*/  cmp dword ptr [rdi], 65726F63h
/*1401a89cd*/  jnz short loc_1401A89F1
/*1401a89cf*/  lea rax, off_14173B6B8; "core"
/*1401a89d6*/  jmp loc_1401AD844
loc_1401A89DB: /*1401a89db*/ mov eax, 72756174h
/*1401a89e0*/  xor eax, [rdi]
/*1401a89e2*/  movzx ecx, byte ptr [rdi+4]
/*1401a89e6*/  xor ecx, 69h
/*1401a89e9*/  or ecx, eax
/*1401a89eb*/  jz loc_1401AD83D
loc_1401A89F1: /*1401a89f1*/ movups xmm0, [rbp+3640h+var_4A0]
/*1401a89f8*/  movups xmm1, [rbp+3640h+var_490]
/*1401a89ff*/  movups xmm2, [rbp+3640h+var_410]
/*1401a8a06*/  movups xmm3, [rbp+3640h+var_400]
/*1401a8a0d*/  movups [rbp+3640h+var_3218], xmm1
/*1401a8a14*/  movups xmmword ptr [rbp+418h], xmm0
/*1401a8a1b*/  movups [rbp+3640h+var_1CB8], xmm2
/*1401a8a22*/  movups [rbp+3640h+var_1CA8], xmm3
/*1401a8a29*/  movups xmm0, [rbp+3640h+var_3F0]
/*1401a8a30*/  movups [rbp+3640h+var_1C98], xmm0
/*1401a8a37*/  mov qword ptr [rbp+3640h+var_1DE0], 0FFFFFFFFFFFFFFFFh
/*1401a8a42*/  lea rcx, [rbp+3640h+var_1DC0]
/*1401a8a49*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a8a50*/  mov r8d, 98h
/*1401a8a56*/  call sub_141684120
/*1401a8a5b*/  mov [rbp+3640h+var_1D28], rdi
/*1401a8a62*/  mov [rbp+3640h+var_1D20], rsi
/*1401a8a69*/  movups xmm0, [rbp+3640h+var_470]
/*1401a8a70*/  movdqu xmm1, [rbp+3640h+var_460]
/*1401a8a78*/  movdqu xmm2, [rbp+3640h+var_450]
/*1401a8a80*/  movdqu xmm3, [rbp+3640h+var_440]
/*1401a8a88*/  movups [rbp+3640h+var_1D18], xmm0
/*1401a8a8f*/  movdqu [rbp+3640h+var_1D08], xmm1
/*1401a8a97*/  movdqu [rbp+3640h+var_1CF8], xmm2
/*1401a8a9f*/  movdqu [rbp+3640h+var_1CE8], xmm3
/*1401a8aa7*/  movups xmm0, [rbp+3640h+var_430]
/*1401a8aae*/  movups [rbp+3640h+var_1CD8], xmm0
/*1401a8ab5*/  movups xmm0, [rbp+3640h+var_420]
/*1401a8abc*/  movups [rbp+3640h+var_1CC8], xmm0
/*1401a8ac3*/  movups xmm0, [rbp+3640h+var_3E0]
/*1401a8aca*/  movups [rbp+3640h+var_1C88], xmm0
/*1401a8ad1*/  movdqu xmm0, [rbp+3640h+var_3D0]
/*1401a8ad9*/  movdqu [rbp+3640h+var_1C78], xmm0
/*1401a8ae1*/  lea rcx, [rbp+3640h+var_32A0]
/*1401a8ae8*/  lea rdx, [rbp+3640h+var_2F0]
/*1401a8aef*/  mov r8d, 158h
/*1401a8af5*/  call sub_141684120
/*1401a8afa*/  call nullsub_1
/*1401a8aff*/  mov ecx, 178h
/*1401a8b04*/  mov edx, 8
/*1401a8b09*/  call sub_140001650
/*1401a8b0e*/  test rax, rax
/*1401a8b11*/  mov [rbp+3640h+var_78], rax
/*1401a8b18*/  jz loc_1401ACAFC
/*1401a8b1e*/  mov r14, rax
/*1401a8b21*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8b28*/  mov r8d, 178h
/*1401a8b2e*/  mov rcx, rax
/*1401a8b31*/  call sub_141684120
/*1401a8b36*/  lea rdi, [rbp+3640h+var_3290+8]
/*1401a8b3d*/  mov [rbp+3640h+var_BA], 1
loc_1401A8B44: /*1401a8b44*/ lea rsi, off_1416C8AA0
/*1401a8b4b*/  mov rcx, rdi
/*1401a8b4e*/  mov rdx, r14
/*1401a8b51*/  mov r8, rsi
/*1401a8b54*/  call sub_1402ACBD0
/*1401a8b59*/  nop
/*1401a8b5a*/  mov r14, qword ptr [rbp+3640h+var_3280+8]
/*1401a8b61*/  cmp r14, qword ptr [rbp+3640h+var_3290+8]
/*1401a8b68*/  jnz short loc_1401A8B73
loc_1401A8B6A: /*1401a8b6a*/ mov rcx, rdi
/*1401a8b6d*/  call sub_141688F50
/*1401a8b72*/  nop
loc_1401A8B73: /*1401a8b73*/ mov rax, qword ptr [rbp+3640h+var_3280]
/*1401a8b7a*/  mov rcx, r14
/*1401a8b7d*/  shl rcx, 4
/*1401a8b81*/  mov rdx, [rbp+3640h+var_78]
/*1401a8b88*/  mov [rax+rcx], rdx
/*1401a8b8c*/  mov [rax+rcx+8], rsi
/*1401a8b91*/  inc r14
/*1401a8b94*/  mov qword ptr [rbp+3640h+var_3280+8], r14
/*1401a8b9b*/  lea rsi, [rbp+3640h+var_4A0]
/*1401a8ba2*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a8ba9*/  mov r8d, 158h
/*1401a8baf*/  mov rcx, rsi
/*1401a8bb2*/  call sub_141684120
/*1401a8bb7*/  lea rdi, [rbp+3640h+var_1DE0]
/*1401a8bbe*/  lea rdx, [rbp+3640h+var_3628]
/*1401a8bc2*/  mov r8d, 178h
/*1401a8bc8*/  mov rcx, rdi
/*1401a8bcb*/  call sub_141684120
/*1401a8bd0*/  mov [rbp+3640h+var_6A], 0
/*1401a8bd7*/  mov [rbp+3640h+var_6B], 1
/*1401a8bde*/  mov [rbp+3640h+var_6C], 1
/*1401a8be5*/  mov [rbp+3640h+var_6D], 1
loc_1401A8BEC: /*1401a8bec*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a8bf3*/  mov rdx, rsi
/*1401a8bf6*/  mov r8, rdi
/*1401a8bf9*/  call sub_140006610
/*1401a8bfe*/  nop
/*1401a8bff*/  mov [rbp+3640h+var_BB], 1
loc_1401A8C06: /*1401a8c06*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a8c0d*/  lea rdx, [rbp+3640h+var_34B0]
/*1401a8c14*/  call sub_140685730
/*1401a8c19*/  nop
loc_1401A8C1A: /*1401a8c1a*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a8c21*/  lea rdx, [rbp+3640h+var_2F0]
/*1401a8c28*/  mov r8d, 158h
/*1401a8c2e*/  call sub_141684120
/*1401a8c33*/  call nullsub_1
/*1401a8c38*/  mov ecx, 178h
/*1401a8c3d*/  mov edx, 8
/*1401a8c42*/  call sub_140001650
/*1401a8c47*/  test rax, rax
/*1401a8c4a*/  mov [rbp+3640h+var_78], rax
/*1401a8c51*/  jz loc_1401ACB11
/*1401a8c57*/  mov r14, rax
/*1401a8c5a*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8c61*/  mov r8d, 178h
/*1401a8c67*/  mov rcx, rax
/*1401a8c6a*/  call sub_141684120
/*1401a8c6f*/  lea rdi, [rbp+3640h+var_3290+8]
/*1401a8c76*/  mov [rbp+3640h+var_BC], 1
loc_1401A8C7D: /*1401a8c7d*/ lea rsi, off_1416C8B70
/*1401a8c84*/  mov rcx, rdi
/*1401a8c87*/  mov rdx, r14
/*1401a8c8a*/  mov r8, rsi
/*1401a8c8d*/  call sub_1402ACBD0
/*1401a8c92*/  nop
/*1401a8c93*/  mov r14, qword ptr [rbp+3640h+var_3280+8]
/*1401a8c9a*/  cmp r14, qword ptr [rbp+3640h+var_3290+8]
/*1401a8ca1*/  jnz short loc_1401A8CAC
loc_1401A8CA3: /*1401a8ca3*/ mov rcx, rdi
/*1401a8ca6*/  call sub_141688F50
/*1401a8cab*/  nop
loc_1401A8CAC: /*1401a8cac*/ mov rax, qword ptr [rbp+3640h+var_3280]
/*1401a8cb3*/  mov rcx, r14
/*1401a8cb6*/  shl rcx, 4
/*1401a8cba*/  mov rdx, [rbp+3640h+var_78]
/*1401a8cc1*/  mov [rax+rcx], rdx
/*1401a8cc5*/  mov [rax+rcx+8], rsi
/*1401a8cca*/  inc r14
/*1401a8ccd*/  mov qword ptr [rbp+3640h+var_3280+8], r14
/*1401a8cd4*/  lea rcx, [rbp+3640h+var_4A0]
/*1401a8cdb*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a8ce2*/  mov r8d, 158h
/*1401a8ce8*/  call sub_141684120
/*1401a8ced*/  mov [rbp+3640h+var_B3], 1
loc_1401A8CF4: /*1401a8cf4*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a8cfb*/  call sub_1407126F0
/*1401a8d00*/  nop
/*1401a8d01*/  mov [rbp+3640h+var_B3], 1
/*1401a8d08*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a8d0f*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a8d16*/  call sub_140714E90
/*1401a8d1b*/  nop
loc_1401A8D1C: /*1401a8d1c*/ lea rcx, [rbp+3640h+var_32A0+8]
/*1401a8d23*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8d2a*/  mov r8d, 3E0h
/*1401a8d30*/  call sub_141684120
/*1401a8d35*/  mov word ptr [rbp+3640h+var_32A0], 0
/*1401a8d3e*/  lea rax, aStdSyncPoisonM; "std::sync::poison::mutex::Mutex<codexma"...
/*1401a8d45*/  mov qword ptr [rbp+3640h+var_5B0], rax
/*1401a8d4c*/  mov qword ptr [rbp+3640h+var_5B0+8], 4Ch ; 'L'
/*1401a8d57*/  lea rsi, [rbp+3640h+var_388]
/*1401a8d5e*/  mov cl, 1
/*1401a8d60*/  xor eax, eax
/*1401a8d62*/  lock cmpxchg [rbp+3640h+var_388], cl
/*1401a8d6a*/  jnz loc_1401ACB8B
loc_1401A8D70: /*1401a8d70*/ mov r12, cs:off_141EC90B8
/*1401a8d77*/  mov rax, [r12]
/*1401a8d7b*/  shl rax, 1
/*1401a8d7e*/  test rax, rax
/*1401a8d81*/  jnz loc_1401ACBA0
/*1401a8d87*/  xor eax, eax
/*1401a8d89*/  movzx ecx, [rbp+3640h+var_387]
/*1401a8d90*/  test cl, cl
/*1401a8d92*/  jnz loc_1401ACBBE
loc_1401A8D98: /*1401a8d98*/ cmp [rbp+3640h+var_368], 0
/*1401a8da0*/  jz loc_1401A8E48
/*1401a8da6*/  mov rdi, [rbp+3640h+var_380]
/*1401a8dad*/  mov rcx, [rbp+3640h+var_378]
/*1401a8db4*/  mov rdx, 479A6FBA2E5811Fh
/*1401a8dbe*/  xor r8d, r8d
/*1401a8dc1*/  movdqa xmm0, cs:xmmword_1416C6100
/*1401a8dc9*/  pcmpeqd xmm1, xmm1
/*1401a8dcd*/  movdqa xmm2, cs:xmmword_1416C6110
loc_1401A8DD5: /*1401a8dd5*/ and rdx, rcx
/*1401a8dd8*/  movdqu xmm3, xmmword ptr [rdi+rdx]
/*1401a8ddd*/  movdqa xmm4, xmm3
/*1401a8de1*/  pcmpeqb xmm4, xmm0
/*1401a8de5*/  pmovmskb r9d, xmm4
/*1401a8dea*/  test r9d, r9d
/*1401a8ded*/  jz short loc_1401A8E2D
loc_1401A8DEF: /*1401a8def*/ tzcnt r10d, r9d
/*1401a8df4*/  add r10, rdx
/*1401a8df7*/  and r10, rcx
/*1401a8dfa*/  shl r10, 5
/*1401a8dfe*/  mov r11, rdi
/*1401a8e01*/  sub r11, r10
/*1401a8e04*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401a8e0a*/  pcmpeqb xmm4, xmm2
/*1401a8e0e*/  pmovmskb r10d, xmm4
/*1401a8e13*/  cmp r10d, 0FFFFh
/*1401a8e1a*/  jz loc_1401A90C3
/*1401a8e20*/  lea r10d, [r9-1]
/*1401a8e24*/  and r10w, r9w
/*1401a8e28*/  mov r9d, r10d
/*1401a8e2b*/  jnz short loc_1401A8DEF
loc_1401A8E2D: /*1401a8e2d*/ pcmpeqb xmm3, xmm1
/*1401a8e31*/  pmovmskb r9d, xmm3
/*1401a8e36*/  test r9d, r9d
/*1401a8e39*/  jnz short loc_1401A8E48
/*1401a8e3b*/  add rdx, r8
/*1401a8e3e*/  add rdx, 10h
/*1401a8e42*/  add r8, 10h
/*1401a8e46*/  jmp short loc_1401A8DD5
loc_1401A8E48: /*1401a8e48*/ mov dword ptr [rbp+3640h+var_78], eax
/*1401a8e4e*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a8e55*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a8e5c*/  mov r8d, 3E8h
/*1401a8e62*/  call sub_141684120
/*1401a8e67*/  call nullsub_1
/*1401a8e6c*/  mov ecx, 3E8h
/*1401a8e71*/  mov edx, 8
/*1401a8e76*/  call sub_140001650
/*1401a8e7b*/  test rax, rax
/*1401a8e7e*/  jz loc_1401ACBFC
/*1401a8e84*/  mov rdi, rax
/*1401a8e87*/  lea r14, [rbp+3640h+var_380]
/*1401a8e8e*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8e95*/  mov r8d, 3E8h
/*1401a8e9b*/  mov rcx, rax
/*1401a8e9e*/  call sub_141684120
/*1401a8ea3*/  movdqu xmm0, cs:xmmword_1416C82E8
/*1401a8eab*/  movdqa [rbp+3640h+var_1DE0], xmm0
loc_1401A8EB3: /*1401a8eb3*/ lea r9, off_1416C82F8
/*1401a8eba*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8ec1*/  mov rcx, r14
/*1401a8ec4*/  mov r8, rdi
/*1401a8ec7*/  call sub_140470440
/*1401a8ecc*/  nop
/*1401a8ecd*/  test rax, rax
/*1401a8ed0*/  jz short loc_1401A8F12
/*1401a8ed2*/  mov [rbp+3640h+Address], rax
/*1401a8ed9*/  mov [rbp+3640h+var_A0], rdx
/*1401a8ee0*/  mov rax, [rdx]
/*1401a8ee3*/  test rax, rax
/*1401a8ee6*/  jz short loc_1401A8EF2
loc_1401A8EE8: /*1401a8ee8*/ mov rcx, [rbp+3640h+Address]
/*1401a8eef*/  call rax
/*1401a8ef1*/  nop
loc_1401A8EF2: /*1401a8ef2*/ mov rax, [rbp+3640h+var_A0]
/*1401a8ef9*/  mov rdx, [rax+8]
/*1401a8efd*/  test rdx, rdx
/*1401a8f00*/  mov rcx, [rbp+3640h+Address]
/*1401a8f07*/  jz short loc_1401A8F12
/*1401a8f09*/  mov r8, [rax+10h]
/*1401a8f0d*/  call sub_140001660
loc_1401A8F12: /*1401a8f12*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a8f19*/  jnz short loc_1401A8F2B
/*1401a8f1b*/  mov rax, [r12]
/*1401a8f1f*/  shl rax, 1
/*1401a8f22*/  test rax, rax
/*1401a8f25*/  jnz loc_1401ACD62
loc_1401A8F2B: /*1401a8f2b*/ xor eax, eax
/*1401a8f2d*/  xchg al, [rbp+3640h+var_388]
/*1401a8f33*/  cmp al, 2
/*1401a8f35*/  jz loc_1401ACC11
loc_1401A8F3B: /*1401a8f3b*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a8f42*/  lea rdi, [rbp+3640h+var_4A0]
/*1401a8f49*/  mov r8d, 158h
/*1401a8f4f*/  mov rdx, rdi
/*1401a8f52*/  call sub_141684120
/*1401a8f57*/  lea rcx, [rbp+3640h+var_1DE0+8]
/*1401a8f5e*/  mov [rbp+3640h+var_BD], 1
loc_1401A8F65: /*1401a8f65*/ call sub_1408409F0
/*1401a8f6a*/  nop
loc_1401A8F6B: /*1401a8f6b*/ mov word ptr [rbp+3640h+var_1DE0], 0
/*1401a8f74*/  lea rcx, [rbp+3640h+var_3280]
/*1401a8f7b*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a8f82*/  mov r8d, 348h
/*1401a8f88*/  call sub_141684120
/*1401a8f8d*/  mov qword ptr [rbp+3640h+var_32A0], 1
/*1401a8f98*/  lea rax, unk_1417A5818
/*1401a8f9f*/  mov qword ptr [rbp+3640h+var_32A0+8], rax
/*1401a8fa6*/  mov qword ptr [rbp+3640h+var_3290], 1
/*1401a8fb1*/  lea rax, unk_1417A5838
/*1401a8fb8*/  mov qword ptr [rbp+3640h+var_3290+8], rax
/*1401a8fbf*/  lea rax, aCodexmateLibCo_11; "codexmate_lib::core::voice::runtime::Vo"...
/*1401a8fc6*/  mov qword ptr [rbp+3640h+var_4A0], rax
/*1401a8fcd*/  mov qword ptr [rbp+3640h+var_4A0+8], 38h ; '8'
/*1401a8fd8*/  lea rsi, [rbp+3640h+var_1D8]
/*1401a8fdf*/  mov cl, 1
/*1401a8fe1*/  xor eax, eax
/*1401a8fe3*/  lock cmpxchg [rbp+3640h+var_1D8], cl
/*1401a8feb*/  jnz loc_1401ACC26
loc_1401A8FF1: /*1401a8ff1*/ mov rax, [r12]
/*1401a8ff5*/  shl rax, 1
/*1401a8ff8*/  test rax, rax
/*1401a8ffb*/  jnz loc_1401ACC3B
/*1401a9001*/  xor eax, eax
/*1401a9003*/  movzx ecx, [rbp+3640h+var_1D7]
/*1401a900a*/  test cl, cl
/*1401a900c*/  jnz loc_1401ACC59
loc_1401A9012: /*1401a9012*/ cmp [rbp+3640h+var_1B8], 0
/*1401a901a*/  jz loc_1401A9128
/*1401a9020*/  mov r14, [rbp+3640h+var_1D0]
/*1401a9027*/  mov rcx, [rbp+3640h+var_1C8]
/*1401a902e*/  mov rdx, 32AFB9ECEB603FB1h
/*1401a9038*/  xor r8d, r8d
/*1401a903b*/  movdqa xmm0, cs:xmmword_1416C62F0
/*1401a9043*/  pcmpeqd xmm1, xmm1
/*1401a9047*/  movdqa xmm2, cs:xmmword_1416C6300
loc_1401A904F: /*1401a904f*/ and rdx, rcx
/*1401a9052*/  movdqu xmm3, xmmword ptr [r14+rdx]
/*1401a9058*/  movdqa xmm4, xmm3
/*1401a905c*/  pcmpeqb xmm4, xmm0
/*1401a9060*/  pmovmskb r9d, xmm4
/*1401a9065*/  test r9d, r9d
/*1401a9068*/  jz short loc_1401A90A8
loc_1401A906A: /*1401a906a*/ tzcnt r10d, r9d
/*1401a906f*/  add r10, rdx
/*1401a9072*/  and r10, rcx
/*1401a9075*/  shl r10, 5
/*1401a9079*/  mov r11, r14
/*1401a907c*/  sub r11, r10
/*1401a907f*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401a9085*/  pcmpeqb xmm4, xmm2
/*1401a9089*/  pmovmskb r10d, xmm4
/*1401a908e*/  cmp r10d, 0FFFFh
/*1401a9095*/  jz loc_1401A934F
/*1401a909b*/  lea r10d, [r9-1]
/*1401a909f*/  and r10w, r9w
/*1401a90a3*/  mov r9d, r10d
/*1401a90a6*/  jnz short loc_1401A906A
loc_1401A90A8: /*1401a90a8*/ pcmpeqb xmm3, xmm1
/*1401a90ac*/  pmovmskb r9d, xmm3
/*1401a90b1*/  test r9d, r9d
/*1401a90b4*/  jnz short loc_1401A9128
/*1401a90b6*/  add rdx, r8
/*1401a90b9*/  add rdx, 10h
/*1401a90bd*/  add r8, 10h
/*1401a90c1*/  jmp short loc_1401A904F
loc_1401A90C3: /*1401a90c3*/ test al, al
/*1401a90c5*/  jnz short loc_1401A90D7
/*1401a90c7*/  mov rax, [r12]
/*1401a90cb*/  shl rax, 1
/*1401a90ce*/  test rax, rax
/*1401a90d1*/  jnz loc_1401ACE51
loc_1401A90D7: /*1401a90d7*/ xor eax, eax
/*1401a90d9*/  xchg al, [rbp+3640h+var_388]
/*1401a90df*/  cmp al, 2
/*1401a90e1*/  jz loc_1401ACCAC
loc_1401A90E7: /*1401a90e7*/ lea rcx, [rbp+3640h+var_32A0+8]
/*1401a90ee*/  call sub_140016620
/*1401a90f3*/  mov qword ptr [rbp+3640h+var_1DE0], rbx
/*1401a90fa*/  lea rax, sub_14041F680
/*1401a9101*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
loc_1401A9108: /*1401a9108*/ lea rcx, unk_1416C8964
/*1401a910f*/  lea r8, off_1416C8998; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401a9116*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a911d*/  call sub_1416C32C0
loc_1401A9123: /*1401a9123*/ jmp loc_1401ADC0A
loc_1401A9128: /*1401a9128*/ mov dword ptr [rbp+3640h+var_78], eax
/*1401a912e*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a9135*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a913c*/  mov r8d, 368h
/*1401a9142*/  call sub_141684120
/*1401a9147*/  call nullsub_1
/*1401a914c*/  mov ecx, 368h
/*1401a9151*/  mov edx, 8
/*1401a9156*/  call sub_140001650
/*1401a915b*/  test rax, rax
/*1401a915e*/  jz loc_1401ACC97
/*1401a9164*/  mov r14, rax
/*1401a9167*/  lea r15, [rbp+3640h+var_1D0]
/*1401a916e*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9175*/  mov r8d, 368h
/*1401a917b*/  mov rcx, rax
/*1401a917e*/  call sub_141684120
/*1401a9183*/  movdqu xmm0, cs:xmmword_1416C8498
/*1401a918b*/  movdqa [rbp+3640h+var_1DE0], xmm0
loc_1401A9193: /*1401a9193*/ lea r9, off_1416C84A8
/*1401a919a*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a91a1*/  mov rcx, r15
/*1401a91a4*/  mov r8, r14
/*1401a91a7*/  call sub_140470440
/*1401a91ac*/  nop
/*1401a91ad*/  test rax, rax
/*1401a91b0*/  jz short loc_1401A91F2
/*1401a91b2*/  mov [rbp+3640h+Address], rax
/*1401a91b9*/  mov [rbp+3640h+var_A0], rdx
/*1401a91c0*/  mov rax, [rdx]
/*1401a91c3*/  test rax, rax
/*1401a91c6*/  jz short loc_1401A91D2
loc_1401A91C8: /*1401a91c8*/ mov rcx, [rbp+3640h+Address]
/*1401a91cf*/  call rax
/*1401a91d1*/  nop
loc_1401A91D2: /*1401a91d2*/ mov rax, [rbp+3640h+var_A0]
/*1401a91d9*/  mov rdx, [rax+8]
/*1401a91dd*/  test rdx, rdx
/*1401a91e0*/  mov rcx, [rbp+3640h+Address]
/*1401a91e7*/  jz short loc_1401A91F2
/*1401a91e9*/  mov r8, [rax+10h]
/*1401a91ed*/  call sub_140001660
loc_1401A91F2: /*1401a91f2*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a91f9*/  jnz short loc_1401A920B
/*1401a91fb*/  mov rax, [r12]
/*1401a91ff*/  shl rax, 1
/*1401a9202*/  test rax, rax
/*1401a9205*/  jnz loc_1401ACE72
loc_1401A920B: /*1401a920b*/ xor eax, eax
/*1401a920d*/  xchg al, [rbp+3640h+var_1D8]
/*1401a9213*/  cmp al, 2
/*1401a9215*/  jz loc_1401ACCC1
loc_1401A921B: /*1401a921b*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a9222*/  lea r14, [rbp+3640h+var_2F0]
/*1401a9229*/  mov r8d, 158h
/*1401a922f*/  mov rdx, r14
/*1401a9232*/  call sub_141684120
/*1401a9237*/  mov word ptr [rbp+3640h+var_7D8], 0
/*1401a9240*/  mov qword ptr [rbp+3640h+var_7D8+8], 0FFFFFFFFFFFFFFFFh
/*1401a924b*/  lea rax, aCodexmateLibCo_12; "codexmate_lib::core::voice::runtime::ov"...
/*1401a9252*/  mov qword ptr [rbp+3640h+var_2F0], rax
/*1401a9259*/  mov qword ptr [rbp+3640h+var_2F0+8], 44h ; 'D'
/*1401a9264*/  lea rsi, [rbp+3640h+var_1CC8]
/*1401a926b*/  mov cl, 1
/*1401a926d*/  xor eax, eax
/*1401a926f*/  lock cmpxchg byte ptr [rbp+3640h+var_1CC8], cl
/*1401a9277*/  jnz loc_1401ACCD6
loc_1401A927D: /*1401a927d*/ mov rax, [r12]
/*1401a9281*/  shl rax, 1
/*1401a9284*/  test rax, rax
/*1401a9287*/  jnz loc_1401ACCEB
/*1401a928d*/  xor r15d, r15d
/*1401a9290*/  movzx eax, byte ptr [rbp+3640h+var_1CC8+1]
/*1401a9297*/  test al, al
/*1401a9299*/  jnz loc_1401ACD0E
loc_1401A929F: /*1401a929f*/ cmp qword ptr [rbp+3640h+var_1CA8], 0
/*1401a92a7*/  jz loc_1401A93B5
/*1401a92ad*/  mov rax, qword ptr [rbp+3640h+var_1CC8+8]
/*1401a92b4*/  mov rcx, qword ptr [rbp+3640h+var_1CB8]
/*1401a92bb*/  mov rdx, 537FB8F1B094F624h
/*1401a92c5*/  xor r8d, r8d
/*1401a92c8*/  movdqa xmm0, cs:xmmword_1416C6200
/*1401a92d0*/  pcmpeqd xmm1, xmm1
/*1401a92d4*/  movdqa xmm2, cs:xmmword_1416C6310
loc_1401A92DC: /*1401a92dc*/ and rdx, rcx
/*1401a92df*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401a92e4*/  movdqa xmm4, xmm3
/*1401a92e8*/  pcmpeqb xmm4, xmm0
/*1401a92ec*/  pmovmskb r9d, xmm4
/*1401a92f1*/  test r9d, r9d
/*1401a92f4*/  jz short loc_1401A9334
loc_1401A92F6: /*1401a92f6*/ tzcnt r10d, r9d
/*1401a92fb*/  add r10, rdx
/*1401a92fe*/  and r10, rcx
/*1401a9301*/  shl r10, 5
/*1401a9305*/  mov r11, rax
/*1401a9308*/  sub r11, r10
/*1401a930b*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401a9311*/  pcmpeqb xmm4, xmm2
/*1401a9315*/  pmovmskb r10d, xmm4
/*1401a931a*/  cmp r10d, 0FFFFh
/*1401a9321*/  jz loc_1401A95F6
/*1401a9327*/  lea r10d, [r9-1]
/*1401a932b*/  and r10w, r9w
/*1401a932f*/  mov r9d, r10d
/*1401a9332*/  jnz short loc_1401A92F6
loc_1401A9334: /*1401a9334*/ pcmpeqb xmm3, xmm1
/*1401a9338*/  pmovmskb r9d, xmm3
/*1401a933d*/  test r9d, r9d
/*1401a9340*/  jnz short loc_1401A93B5
/*1401a9342*/  add rdx, r8
/*1401a9345*/  add rdx, 10h
/*1401a9349*/  add r8, 10h
/*1401a934d*/  jmp short loc_1401A92DC
loc_1401A934F: /*1401a934f*/ test al, al
/*1401a9351*/  jnz short loc_1401A9363
/*1401a9353*/  mov rax, [r12]
/*1401a9357*/  shl rax, 1
/*1401a935a*/  test rax, rax
/*1401a935d*/  jnz loc_1401ACFAB
loc_1401A9363: /*1401a9363*/ xor eax, eax
/*1401a9365*/  xchg al, [rbp+3640h+var_1D8]
/*1401a936b*/  cmp al, 2
/*1401a936d*/  jz loc_1401ACD83
loc_1401A9373: /*1401a9373*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a937a*/  call sub_140018F70
/*1401a937f*/  nop
/*1401a9380*/  mov qword ptr [rbp+3640h+var_1DE0], rdi
/*1401a9387*/  lea rax, sub_14041F680
/*1401a938e*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a9395*/  lea rcx, unk_1416C8964
/*1401a939c*/  lea r8, off_1416C8998; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401a93a3*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a93aa*/  call sub_1416C32C0
/*1401a93b0*/  jmp loc_1401ADC0A
loc_1401A93B5: /*1401a93b5*/ mov dword ptr [rbp+3640h+var_78], r15d
/*1401a93bc*/  call nullsub_1
/*1401a93c1*/  mov ecx, 38h ; '8'
/*1401a93c6*/  mov edx, 8
/*1401a93cb*/  call sub_140001650
/*1401a93d0*/  test rax, rax
/*1401a93d3*/  jz loc_1401ACD4D
/*1401a93d9*/  lea rcx, [rbp+3640h+var_1CC8+8]
/*1401a93e0*/  mov rdx, [rbp+3640h+var_7A8]
/*1401a93e7*/  mov [rax+30h], rdx
/*1401a93eb*/  movups xmm0, [rbp+3640h+var_7D8]
/*1401a93f2*/  movdqu xmm1, [rbp+3640h+var_7C8]
/*1401a93fa*/  movdqu xmm2, [rbp+3640h+var_7B8]
/*1401a9402*/  movdqu xmmword ptr [rax+20h], xmm2
/*1401a9407*/  movdqu xmmword ptr [rax+10h], xmm1
/*1401a940c*/  movups xmmword ptr [rax], xmm0
/*1401a940f*/  movdqu xmm0, cs:xmmword_1416C84C8
/*1401a9417*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401A941F: /*1401a941f*/ lea r9, off_1416C84D8
/*1401a9426*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a942d*/  mov r8, rax
/*1401a9430*/  call sub_140470440
/*1401a9435*/  nop
/*1401a9436*/  test rax, rax
/*1401a9439*/  jz short loc_1401A947B
/*1401a943b*/  mov [rbp+3640h+Address], rax
/*1401a9442*/  mov [rbp+3640h+var_A0], rdx
/*1401a9449*/  mov rax, [rdx]
/*1401a944c*/  test rax, rax
/*1401a944f*/  jz short loc_1401A945B
loc_1401A9451: /*1401a9451*/ mov rcx, [rbp+3640h+Address]
/*1401a9458*/  call rax
/*1401a945a*/  nop
loc_1401A945B: /*1401a945b*/ mov rax, [rbp+3640h+var_A0]
/*1401a9462*/  mov rdx, [rax+8]
/*1401a9466*/  test rdx, rdx
/*1401a9469*/  mov rcx, [rbp+3640h+Address]
/*1401a9470*/  jz short loc_1401A947B
/*1401a9472*/  mov r8, [rax+10h]
/*1401a9476*/  call sub_140001660
loc_1401A947B: /*1401a947b*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a9482*/  jnz short loc_1401A9494
/*1401a9484*/  mov rax, [r12]
/*1401a9488*/  shl rax, 1
/*1401a948b*/  test rax, rax
/*1401a948e*/  jnz loc_1401ACFCC
loc_1401A9494: /*1401a9494*/ xor eax, eax
/*1401a9496*/  xchg al, byte ptr [rbp+3640h+var_1CC8]
/*1401a949c*/  cmp al, 2
/*1401a949e*/  jz loc_1401ACD98
loc_1401A94A4: /*1401a94a4*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a94ab*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a94b2*/  mov r8d, 158h
/*1401a94b8*/  call sub_141684120
/*1401a94bd*/  mov rax, [rbp+3640h+var_338]
/*1401a94c4*/  lea rcx, aCodexmateLibCo; "codexmate_lib::core::relay::codex_mutat"...
/*1401a94cb*/  mov qword ptr [rbp+3640h+var_2F0], rcx
/*1401a94d2*/  mov qword ptr [rbp+3640h+var_2F0+8], 3Dh ; '='
/*1401a94dd*/  lea r15, [rbp+3640h+var_3188]
/*1401a94e4*/  mov qword ptr [rbp+3640h+var_4A0], rax
/*1401a94eb*/  mov cl, 1
/*1401a94ed*/  xor eax, eax
/*1401a94ef*/  lock cmpxchg [rbp+3640h+var_3188], cl
/*1401a94f7*/  jnz loc_1401ACDAD
loc_1401A94FD: /*1401a94fd*/ mov rax, [r12]
/*1401a9501*/  shl rax, 1
/*1401a9504*/  test rax, rax
/*1401a9507*/  jnz loc_1401ACDC2
/*1401a950d*/  mov dword ptr [rbp+3640h+var_78], 0
/*1401a9517*/  movzx eax, [rbp+3640h+var_3187]
/*1401a951e*/  test al, al
/*1401a9520*/  jnz loc_1401ACDF1
loc_1401A9526: /*1401a9526*/ cmp [rbp+3640h+var_3168], 0
/*1401a952e*/  jz loc_1401A965C
/*1401a9534*/  mov rax, [rbp+3640h+var_3180]
/*1401a953b*/  mov rcx, [rbp+3640h+var_3178]
/*1401a9542*/  mov rdx, 52E1196F809D4001h
/*1401a954c*/  xor r8d, r8d
/*1401a954f*/  movdqa xmm0, cs:xmmword_1416C6200
/*1401a9557*/  pcmpeqd xmm1, xmm1
/*1401a955b*/  movdqa xmm2, cs:xmmword_1416C6210
loc_1401A9563: /*1401a9563*/ and rdx, rcx
/*1401a9566*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401a956b*/  movdqa xmm4, xmm3
/*1401a956f*/  pcmpeqb xmm4, xmm0
/*1401a9573*/  pmovmskb r9d, xmm4
/*1401a9578*/  test r9d, r9d
/*1401a957b*/  jz short loc_1401A95BB
loc_1401A957D: /*1401a957d*/ tzcnt r10d, r9d
/*1401a9582*/  add r10, rdx
/*1401a9585*/  and r10, rcx
/*1401a9588*/  shl r10, 5
/*1401a958c*/  mov r11, rax
/*1401a958f*/  sub r11, r10
/*1401a9592*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401a9598*/  pcmpeqb xmm4, xmm2
/*1401a959c*/  pmovmskb r10d, xmm4
/*1401a95a1*/  cmp r10d, 0FFFFh
/*1401a95a8*/  jz loc_1401A9880
/*1401a95ae*/  lea r10d, [r9-1]
/*1401a95b2*/  and r10w, r9w
/*1401a95b6*/  mov r9d, r10d
/*1401a95b9*/  jnz short loc_1401A957D
loc_1401A95BB: /*1401a95bb*/ pcmpeqb xmm3, xmm1
/*1401a95bf*/  pmovmskb r9d, xmm3
/*1401a95c4*/  test r9d, r9d
/*1401a95c7*/  jnz loc_1401A965C
/*1401a95cd*/  add rdx, r8
/*1401a95d0*/  add rdx, 10h
/*1401a95d4*/  add r8, 10h
/*1401a95d8*/  jmp short loc_1401A9563
loc_1401A95DA: /*1401a95da*/ mov ebx, 1
/*1401a95df*/  xor edi, edi
/*1401a95e1*/  mov rdx, [rbp+3640h+var_78]
/*1401a95e8*/  test rdx, rdx
/*1401a95eb*/  jnz loc_1401A7B6D
/*1401a95f1*/  jmp loc_1401A7B7F
loc_1401A95F6: /*1401a95f6*/ test r15b, r15b
/*1401a95f9*/  jnz short loc_1401A960B
/*1401a95fb*/  mov rax, [r12]
/*1401a95ff*/  shl rax, 1
/*1401a9602*/  test rax, rax
/*1401a9605*/  jnz loc_1401AD4AC
loc_1401A960B: /*1401a960b*/ xor eax, eax
/*1401a960d*/  xchg al, byte ptr [rbp+3640h+var_1CC8]
/*1401a9613*/  cmp al, 2
/*1401a9615*/  jz loc_1401ACE93
loc_1401A961B: /*1401a961b*/ lea rcx, [rbp+3640h+var_7D8]
/*1401a9622*/  call sub_140019A60
/*1401a9627*/  mov qword ptr [rbp+3640h+var_32A0], r14
/*1401a962e*/  lea rax, sub_14041F680
/*1401a9635*/  mov qword ptr [rbp+3640h+var_32A0+8], rax
loc_1401A963C: /*1401a963c*/ lea rcx, unk_1416C8964
/*1401a9643*/  lea r8, off_1416C8998; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401a964a*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a9651*/  call sub_1416C32C0
/*1401a9657*/  jmp loc_1401ADC0A
loc_1401A965C: /*1401a965c*/ mov r14, qword ptr [rbp+3640h+var_4A0]
/*1401a9663*/  mov qword ptr [rbp+3640h+var_1DE0], r14
/*1401a966a*/  call nullsub_1
/*1401a966f*/  mov ecx, 8
/*1401a9674*/  mov edx, 8
/*1401a9679*/  call sub_140001650
/*1401a967e*/  test rax, rax
/*1401a9681*/  jz loc_1401ACE35
/*1401a9687*/  lea rcx, [rbp+3640h+var_3180]
/*1401a968e*/  mov [rax], r14
/*1401a9691*/  movdqu xmm0, cs:xmmword_1416C8438
/*1401a9699*/  movdqa [rbp+3640h+var_1DE0], xmm0
loc_1401A96A1: /*1401a96a1*/ lea r9, off_1416C8448
/*1401a96a8*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a96af*/  mov r8, rax
/*1401a96b2*/  call sub_140470440
/*1401a96b7*/  nop
/*1401a96b8*/  test rax, rax
/*1401a96bb*/  jz short loc_1401A96FD
/*1401a96bd*/  mov [rbp+3640h+Address], rax
/*1401a96c4*/  mov [rbp+3640h+var_A0], rdx
/*1401a96cb*/  mov rax, [rdx]
/*1401a96ce*/  test rax, rax
/*1401a96d1*/  jz short loc_1401A96DD
loc_1401A96D3: /*1401a96d3*/ mov rcx, [rbp+3640h+Address]
/*1401a96da*/  call rax
/*1401a96dc*/  nop
loc_1401A96DD: /*1401a96dd*/ mov rax, [rbp+3640h+var_A0]
/*1401a96e4*/  mov rdx, [rax+8]
/*1401a96e8*/  test rdx, rdx
/*1401a96eb*/  mov rcx, [rbp+3640h+Address]
/*1401a96f2*/  jz short loc_1401A96FD
/*1401a96f4*/  mov r8, [rax+10h]
/*1401a96f8*/  call sub_140001660
loc_1401A96FD: /*1401a96fd*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a9704*/  jnz short loc_1401A9716
/*1401a9706*/  mov rax, [r12]
/*1401a970a*/  shl rax, 1
/*1401a970d*/  test rax, rax
/*1401a9710*/  jnz loc_1401AD4CD
loc_1401A9716: /*1401a9716*/ xor eax, eax
/*1401a9718*/  xchg al, [rbp+3640h+var_3188]
/*1401a971e*/  cmp al, 2
/*1401a9720*/  jz loc_1401ACEA8
loc_1401A9726: /*1401a9726*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401a972d*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a9734*/  mov r8d, 158h
/*1401a973a*/  call sub_141684120
/*1401a973f*/  movdqu xmm0, [rbp+3640h+var_8E0]
/*1401a9747*/  movdqu xmm1, [rbp+3640h+var_8D0]
/*1401a974f*/  movdqu xmm2, xmmword ptr [rbp+2D80h]
/*1401a9757*/  movdqu xmm3, [rbp+3640h+var_8B0]
/*1401a975f*/  movdqa [rbp+3640h+var_2C0], xmm3
/*1401a9767*/  movdqa [rbp+3640h+var_2D0], xmm2
/*1401a976f*/  movdqa [rbp+3640h+var_2E0], xmm1
/*1401a9777*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401a977f*/  lea rax, aCodexmateLibCo_10; "codexmate_lib::core::relay::manager::Re"...
/*1401a9786*/  mov qword ptr [rbp+3640h+var_4A0], rax
/*1401a978d*/  mov qword ptr [rbp+3640h+var_4A0+8], 31h ; '1'
/*1401a9798*/  mov cl, 1
/*1401a979a*/  xor eax, eax
/*1401a979c*/  lock cmpxchg byte ptr [rbp+3640h+var_1CC8], cl
/*1401a97a4*/  jnz loc_1401ACEBD
loc_1401A97AA: /*1401a97aa*/ mov rax, [r12]
/*1401a97ae*/  shl rax, 1
/*1401a97b1*/  test rax, rax
/*1401a97b4*/  jnz loc_1401ACED2
/*1401a97ba*/  xor r14d, r14d
/*1401a97bd*/  movzx eax, byte ptr [rbp+3640h+var_1CC8+1]
/*1401a97c4*/  test al, al
/*1401a97c6*/  jnz loc_1401ACEF5
loc_1401A97CC: /*1401a97cc*/ cmp qword ptr [rbp+3640h+var_1CA8], 0
/*1401a97d4*/  jz loc_1401A98F8
/*1401a97da*/  mov rax, qword ptr [rbp+3640h+var_1CC8+8]
/*1401a97e1*/  mov rcx, qword ptr [rbp+3640h+var_1CB8]
/*1401a97e8*/  mov rdx, 0D13CBC4EFEDBF4E7h
/*1401a97f2*/  xor r8d, r8d
/*1401a97f5*/  movdqa xmm0, cs:xmmword_1416C6220
/*1401a97fd*/  pcmpeqd xmm1, xmm1
/*1401a9801*/  movdqa xmm2, cs:xmmword_1416C6230
loc_1401A9809: /*1401a9809*/ and rdx, rcx
/*1401a980c*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401a9811*/  movdqa xmm4, xmm3
/*1401a9815*/  pcmpeqb xmm4, xmm0
/*1401a9819*/  pmovmskb r9d, xmm4
/*1401a981e*/  test r9d, r9d
/*1401a9821*/  jz short loc_1401A9861
loc_1401A9823: /*1401a9823*/ tzcnt r10d, r9d
/*1401a9828*/  add r10, rdx
/*1401a982b*/  and r10, rcx
/*1401a982e*/  shl r10, 5
/*1401a9832*/  mov r11, rax
/*1401a9835*/  sub r11, r10
/*1401a9838*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401a983e*/  pcmpeqb xmm4, xmm2
/*1401a9842*/  pmovmskb r10d, xmm4
/*1401a9847*/  cmp r10d, 0FFFFh
/*1401a984e*/  jz loc_1401AA0B5
/*1401a9854*/  lea r10d, [r9-1]
/*1401a9858*/  and r10w, r9w
/*1401a985c*/  mov r9d, r10d
/*1401a985f*/  jnz short loc_1401A9823
loc_1401A9861: /*1401a9861*/ pcmpeqb xmm3, xmm1
/*1401a9865*/  pmovmskb r9d, xmm3
/*1401a986a*/  test r9d, r9d
/*1401a986d*/  jnz loc_1401A98F8
/*1401a9873*/  add rdx, r8
/*1401a9876*/  add rdx, 10h
/*1401a987a*/  add r8, 10h
/*1401a987e*/  jmp short loc_1401A9809
loc_1401A9880: /*1401a9880*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a9887*/  jnz short loc_1401A9899
/*1401a9889*/  mov rax, [r12]
/*1401a988d*/  shl rax, 1
/*1401a9890*/  test rax, rax
/*1401a9893*/  jnz loc_1401AD652
loc_1401A9899: /*1401a9899*/ xor eax, eax
/*1401a989b*/  xchg al, [rbp+3640h+var_3188]
/*1401a98a1*/  cmp al, 2
/*1401a98a3*/  jz loc_1401ACFED
loc_1401A98A9: /*1401a98a9*/ mov rax, qword ptr [rbp+3640h+var_4A0]
/*1401a98b0*/  lock dec qword ptr [rax]
/*1401a98b4*/  jnz short loc_1401A98C3
loc_1401A98B6: /*1401a98b6*/ lea rcx, [rbp+3640h+var_4A0]
/*1401a98bd*/  call sub_140573D40
/*1401a98c2*/  nop
loc_1401A98C3: /*1401a98c3*/ mov qword ptr [rbp+3640h+var_1DE0], r14
/*1401a98ca*/  lea rax, sub_14041F680
/*1401a98d1*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401a98d8*/  lea rcx, unk_1416C8964
/*1401a98df*/  lea r8, off_1416C8998; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401a98e6*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a98ed*/  call sub_1416C32C0
/*1401a98f3*/  jmp loc_1401ADC0A
loc_1401A98F8: /*1401a98f8*/ mov dword ptr [rbp+3640h+var_78], r14d
/*1401a98ff*/  movdqa xmm0, [rbp+3640h+var_2F0]
/*1401a9907*/  movdqa xmm1, [rbp+3640h+var_2E0]
/*1401a990f*/  movdqa xmm2, [rbp+3640h+var_2D0]
/*1401a9917*/  movdqa xmm3, [rbp+3640h+var_2C0]
/*1401a991f*/  movdqa [rbp+3640h+var_3270], xmm3
/*1401a9927*/  movdqa [rbp+3640h+var_3280], xmm2
/*1401a992f*/  movdqa [rbp+3640h+var_3290], xmm1
/*1401a9937*/  movdqa [rbp+3640h+var_32A0], xmm0
/*1401a993f*/  call nullsub_1
/*1401a9944*/  mov ecx, 40h ; '@'
/*1401a9949*/  mov edx, 8
/*1401a994e*/  call sub_140001650
/*1401a9953*/  test rax, rax
/*1401a9956*/  jz loc_1401ACF34
/*1401a995c*/  lea rcx, [rbp+3640h+var_1CC8+8]
/*1401a9963*/  movaps xmm0, [rbp+3640h+var_32A0]
/*1401a996a*/  movdqa xmm1, [rbp+3640h+var_3290]
/*1401a9972*/  movdqa xmm2, [rbp+3640h+var_3280]
/*1401a997a*/  movdqa xmm3, [rbp+3640h+var_3270]
/*1401a9982*/  movdqu xmmword ptr [rax+30h], xmm3
/*1401a9987*/  movdqu xmmword ptr [rax+20h], xmm2
/*1401a998c*/  movdqu xmmword ptr [rax+10h], xmm1
/*1401a9991*/  movups xmmword ptr [rax], xmm0
/*1401a9994*/  movdqu xmm0, cs:xmmword_1416C8468
/*1401a999c*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401A99A4: /*1401a99a4*/ lea r9, off_1416C8478
/*1401a99ab*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a99b2*/  mov r8, rax
/*1401a99b5*/  call sub_140470440
/*1401a99ba*/  nop
/*1401a99bb*/  test rax, rax
/*1401a99be*/  jz short loc_1401A9A00
/*1401a99c0*/  mov [rbp+3640h+Address], rax
/*1401a99c7*/  mov [rbp+3640h+var_A0], rdx
/*1401a99ce*/  mov rax, [rdx]
/*1401a99d1*/  test rax, rax
/*1401a99d4*/  jz short loc_1401A99E0
loc_1401A99D6: /*1401a99d6*/ mov rcx, [rbp+3640h+Address]
/*1401a99dd*/  call rax
/*1401a99df*/  nop
loc_1401A99E0: /*1401a99e0*/ mov rax, [rbp+3640h+var_A0]
/*1401a99e7*/  mov rdx, [rax+8]
/*1401a99eb*/  test rdx, rdx
/*1401a99ee*/  mov rcx, [rbp+3640h+Address]
/*1401a99f5*/  jz short loc_1401A9A00
/*1401a99f7*/  mov r8, [rax+10h]
/*1401a99fb*/  call sub_140001660
loc_1401A9A00: /*1401a9a00*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401a9a07*/  jnz short loc_1401A9A19
/*1401a9a09*/  mov rax, [r12]
/*1401a9a0d*/  shl rax, 1
/*1401a9a10*/  test rax, rax
/*1401a9a13*/  jnz loc_1401AD673
loc_1401A9A19: /*1401a9a19*/ xor eax, eax
/*1401a9a1b*/  xchg al, byte ptr [rbp+3640h+var_1CC8]
/*1401a9a21*/  cmp al, 2
/*1401a9a23*/  jz loc_1401AD002
loc_1401A9A29: /*1401a9a29*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a9a30*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9a37*/  mov r8d, 158h
/*1401a9a3d*/  call sub_141684120
/*1401a9a42*/  mov rax, [rbp+3640h+var_31E8]
/*1401a9a49*/  mov [rbp+3640h+var_78], rax
/*1401a9a50*/  mov rax, [rbp+3640h+var_31E0]
/*1401a9a57*/  mov [rbp+3640h+Address], rax
/*1401a9a5e*/  mov rax, [rax]
/*1401a9a61*/  test rax, rax
/*1401a9a64*/  jz short loc_1401A9A70
loc_1401A9A66: /*1401a9a66*/ mov rcx, [rbp+3640h+var_78]
/*1401a9a6d*/  call rax
/*1401a9a6f*/  nop
loc_1401A9A70: /*1401a9a70*/ mov rcx, [rbp+3640h+var_78]
/*1401a9a77*/  mov rax, [rbp+3640h+Address]
/*1401a9a7e*/  mov rdx, [rax+8]
/*1401a9a82*/  test rdx, rdx
/*1401a9a85*/  jz short loc_1401A9A90
/*1401a9a87*/  mov r8, [rax+10h]
/*1401a9a8b*/  call sub_140001660
loc_1401A9A90: /*1401a9a90*/ mov [rbp+3640h+var_31E8], 1
/*1401a9a9b*/  lea rax, unk_1416C88F8
/*1401a9aa2*/  mov [rbp+3640h+var_31E0], rax
/*1401a9aa9*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a9ab0*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a9ab7*/  mov r8d, 158h
/*1401a9abd*/  call sub_141684120
/*1401a9ac2*/  mov rax, qword ptr [rbp+3640h+var_1D40+8]
/*1401a9ac9*/  mov [rbp+3640h+var_78], rax
/*1401a9ad0*/  mov rax, [rbp+3640h+var_1D30]
/*1401a9ad7*/  mov [rbp+3640h+Address], rax
/*1401a9ade*/  mov rax, [rax]
/*1401a9ae1*/  test rax, rax
/*1401a9ae4*/  jz short loc_1401A9AF0
loc_1401A9AE6: /*1401a9ae6*/ mov rcx, [rbp+3640h+var_78]
/*1401a9aed*/  call rax
/*1401a9aef*/  nop
loc_1401A9AF0: /*1401a9af0*/ mov rcx, [rbp+3640h+var_78]
/*1401a9af7*/  mov rax, [rbp+3640h+Address]
/*1401a9afe*/  mov rdx, [rax+8]
/*1401a9b02*/  test rdx, rdx
/*1401a9b05*/  jz short loc_1401A9B10
/*1401a9b07*/  mov r8, [rax+10h]
/*1401a9b0b*/  call sub_140001660
loc_1401A9B10: /*1401a9b10*/ mov qword ptr [rbp+3640h+var_1D40+8], 1
/*1401a9b1b*/  lea rax, unk_1416C88C8
/*1401a9b22*/  mov [rbp+3640h+var_1D30], rax
/*1401a9b29*/  lea rcx, [rbp+3640h+var_7A0]
/*1401a9b30*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9b37*/  mov r8d, 158h
/*1401a9b3d*/  call sub_141684120
/*1401a9b42*/  mov qword ptr [rbp+3640h+var_1DD0], 0FFFFFFFFFFFFFFFFh
/*1401a9b4d*/  mov qword ptr [rbp+3640h+var_1DE0], 0
/*1401a9b58*/  mov byte ptr [rbp+3640h+var_1DC0+8], 0
/*1401a9b5f*/  call nullsub_1
/*1401a9b64*/  mov ecx, 20h ; ' '
/*1401a9b69*/  mov edx, 1
/*1401a9b6e*/  call sub_140001650
/*1401a9b73*/  test rax, rax
/*1401a9b76*/  mov [rbp+3640h+var_78], rax
/*1401a9b7d*/  jz loc_1401AD915
/*1401a9b83*/  movups xmm0, cs:xmmword_1416C902F
/*1401a9b8a*/  movups xmmword ptr [rax+10h], xmm0
/*1401a9b8e*/  movdqu xmm0, cs:xmmword_1416C901F
/*1401a9b96*/  movdqu xmmword ptr [rax], xmm0
/*1401a9b9a*/  mov qword ptr [rbp+3640h+var_32A0], 20h ; ' '
/*1401a9ba5*/  mov qword ptr [rbp+3640h+var_32A0+8], rax
/*1401a9bac*/  mov qword ptr [rbp+3640h+var_3290], 20h ; ' '
loc_1401A9BB7: /*1401a9bb7*/ lea rcx, [rbp+3640h+var_2F0]
/*1401a9bbe*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9bc5*/  lea r8, [rbp+3640h+var_32A0]
/*1401a9bcc*/  call sub_141471DD0
/*1401a9bd1*/  nop
/*1401a9bd2*/  mov qword ptr [rbp+3640h+var_2F0], 1
/*1401a9bdd*/  mov qword ptr [rbp+3640h+var_2F0+8], 800000h
/*1401a9be8*/  lea rax, unk_1416CFF68
/*1401a9bef*/  mov qword ptr [rbp+3640h+var_1DE0], rax
/*1401a9bf6*/  mov qword ptr [rbp+3640h+var_1DE0+8], 7
/*1401a9c01*/  lea rax, off_14173A3E0; "/assets/circle-x-Ctpv_3LC.js"
/*1401a9c08*/  mov qword ptr [rbp+3640h+var_1DD0], rax
/*1401a9c0f*/  mov qword ptr [rbp+3640h+var_1DD0+8], 22h ; '"'
/*1401a9c1a*/  mov rax, 0B33780D1DB3DCB27h
/*1401a9c24*/  mov qword ptr [rbp+3640h+var_1DC0], rax
/*1401a9c2b*/  lea rcx, unk_14173AE90
/*1401a9c32*/  mov qword ptr [rbp+3640h+var_1DC0+8], rcx
/*1401a9c39*/  mov [rbp+3640h+var_1DB0], 1Fh
/*1401a9c44*/  mov [rbp+3640h+var_1DA8], 4
/*1401a9c4f*/  mov [rbp+3640h+var_1DA0], 0
/*1401a9c5a*/  mov [rbp+3640h+var_1D98], 8
/*1401a9c65*/  mov [rbp+3640h+var_1D90], 0
/*1401a9c70*/  mov [rbp+3640h+var_1D88], rax
/*1401a9c77*/  mov [rbp+3640h+var_7A], 1
loc_1401A9C7E: /*1401a9c7e*/ lea rcx, [rbp+3640h+var_32A0]
/*1401a9c85*/  lea r14, [rbp+3640h+var_2F0]
/*1401a9c8c*/  lea r8, [rbp+3640h+var_1DE0]
/*1401a9c93*/  mov rdx, r14
/*1401a9c96*/  call sub_1404E3340
/*1401a9c9b*/  nop
/*1401a9c9c*/  cmp qword ptr [rbp+3640h+var_32A0], 0
/*1401a9ca4*/  jz loc_1401AD017
/*1401a9caa*/  mov rax, qword ptr [rbp+3640h+var_3290]
/*1401a9cb1*/  mov qword ptr [rbp+3640h+var_1DD0], rax
/*1401a9cb8*/  movdqu xmm0, [rbp+3640h+var_32A0]
/*1401a9cc0*/  movdqa [rbp+3640h+var_1DE0], xmm0
/*1401a9cc8*/  mov [rbp+3640h+var_7A], 1
/*1401a9ccf*/  lea rcx, [rbp+3640h+var_32A0]
/*1401a9cd6*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9cdd*/  call sub_140570230
/*1401a9ce2*/  nop
loc_1401A9CE3: /*1401a9ce3*/ cmp dword ptr [rbp+3640h+var_32A0], 2
/*1401a9cea*/  jz loc_1401AD92A
/*1401a9cf0*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401a9cf7*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a9cfe*/  mov r8d, 1258h
/*1401a9d04*/  call sub_141684120
/*1401a9d09*/  mov rax, [rbp+3640h+var_778]
/*1401a9d10*/  mov [rbp+3640h+var_100], rax
/*1401a9d17*/  movups xmm0, [rbp+3640h+var_788]
/*1401a9d1e*/  movaps [rbp+3640h+var_110], xmm0
/*1401a9d25*/  mov rax, [rbp+3640h+var_6F8]
/*1401a9d2c*/  mov [rbp+3640h+Address], rax
/*1401a9d33*/  mov rax, [rbp+3640h+var_6F0]
/*1401a9d3a*/  mov [rbp+3640h+var_A0], rax
/*1401a9d41*/  mov rax, [rbp+3640h+var_698]
/*1401a9d48*/  mov r15, [rbp+3640h+var_690]
/*1401a9d4f*/  mov [rbp+3640h+var_78], rax
/*1401a9d56*/  mov [rbp+3640h+var_618], rax
/*1401a9d5d*/  mov [rbp+3640h+var_610], r15
/*1401a9d64*/  movups xmm0, [rbp+3640h+var_6D8]
/*1401a9d6b*/  movups xmm1, [rbp+3640h+var_6C8]
/*1401a9d72*/  movdqu xmm2, [rbp+3640h+var_6B8]
/*1401a9d7a*/  movdqa [rbp+3640h+var_480], xmm2
/*1401a9d82*/  movaps [rbp+3640h+var_490], xmm1
/*1401a9d89*/  movaps [rbp+3640h+var_4A0], xmm0
/*1401a9d90*/  mov rax, [rbp+3640h+var_668]
/*1401a9d97*/  mov qword ptr [rbp+3640h+var_590], rax
/*1401a9d9e*/  movups xmm0, [rbp+3640h+var_688]
/*1401a9da5*/  movdqu xmm1, [rbp+3640h+var_678]
/*1401a9dad*/  movdqa [rbp+3640h+var_5A0], xmm1
/*1401a9db5*/  movaps [rbp+3640h+var_5B0], xmm0
/*1401a9dbc*/  mov rax, [rbp+3640h+var_760]
/*1401a9dc3*/  mov [rbp+3640h+var_160], rax
/*1401a9dca*/  movups xmm0, [rbp+3640h+var_770]
/*1401a9dd1*/  movaps [rbp+3640h+var_170], xmm0
/*1401a9dd8*/  mov rax, [rbp+3640h+var_748]
/*1401a9ddf*/  mov qword ptr [rbp+3640h+var_5C0], rax
/*1401a9de6*/  movups xmm0, [rbp+3640h+var_758]
/*1401a9ded*/  movaps [rbp+3640h+var_5D0], xmm0
/*1401a9df4*/  mov rax, [rbp+3640h+var_730]
/*1401a9dfb*/  mov qword ptr [rbp+3640h+var_320], rax
/*1401a9e02*/  movups xmm0, [rbp+3640h+var_740]
/*1401a9e09*/  movaps [rbp+3640h+var_330], xmm0
/*1401a9e10*/  mov rax, [rbp+3640h+var_718]
/*1401a9e17*/  mov qword ptr [rbp+3640h+var_140], rax
/*1401a9e1e*/  movdqu xmm0, [rbp+3640h+var_728]
/*1401a9e26*/  movdqa [rbp+3640h+var_150], xmm0
/*1401a9e2e*/  mov [rbp+3640h+var_BE], 0
loc_1401A9E35: /*1401a9e35*/ call sub_141470CD0
/*1401a9e3a*/  nop
/*1401a9e3b*/  cmp byte ptr [rax+10h], 1
/*1401a9e3f*/  jnz loc_1401AD056
/*1401a9e45*/  mov rcx, [rax]
/*1401a9e48*/  mov rdx, [rax+8]
loc_1401A9E4C: /*1401a9e4c*/ lea r8, [rcx+1]
/*1401a9e50*/  mov [rax], r8
/*1401a9e53*/  movaps [rbp+3640h+var_2E0], xmm7
/*1401a9e5a*/  movaps [rbp+3640h+var_2F0], xmm6
/*1401a9e61*/  mov qword ptr [rbp+3640h+var_2D0], rcx
/*1401a9e68*/  mov qword ptr [rbp+3640h+var_2D0+8], rdx
/*1401a9e6f*/  mov rax, [rbp+3640h+var_790]
/*1401a9e76*/  mov [rbp+3640h+var_3330], rax
/*1401a9e7d*/  movups xmm0, [rbp+3640h+var_7A0]
/*1401a9e84*/  movaps [rbp+3640h+var_3340], xmm0
/*1401a9e8b*/  movdqu xmm0, [rbp+3640h+var_6A8]
/*1401a9e93*/  mov rax, [rbp+3640h+var_700]
/*1401a9e9a*/  mov qword ptr [rbp+3640h+var_890], rax
/*1401a9ea1*/  movdqu xmm1, [rbp+3640h+var_710]
/*1401a9ea9*/  movdqa [rbp+3640h+var_8A0], xmm1
/*1401a9eb1*/  mov [rbp+3640h+var_BE], 1
/*1401a9eb8*/  lea rax, [rbp+3640h+var_8A0]
/*1401a9ebf*/  mov [rsp+36C0h+var_3638], rax
/*1401a9ec7*/  movdqu [rsp+36C0h+var_3648], xmm0
/*1401a9ecd*/  lea rax, [rbp+3640h+var_3340]
/*1401a9ed4*/  mov [rsp+36C0h+var_3650], rax
/*1401a9ed9*/  mov [rsp+36C0h+var_3658], r14
/*1401a9ede*/  lea rax, [rbp+3640h+var_150]
/*1401a9ee5*/  mov [rsp+36C0h+var_3660], rax
/*1401a9eea*/  lea rax, [rbp+3640h+var_330]
/*1401a9ef1*/  mov [rsp+36C0h+var_3668], rax
/*1401a9ef6*/  lea rax, [rbp+3640h+var_5D0]
/*1401a9efd*/  mov [rsp+36C0h+var_3670], rax
/*1401a9f02*/  lea rax, [rbp+3640h+var_170]
/*1401a9f09*/  mov [rsp+36C0h+var_3678], rax
/*1401a9f0e*/  mov [rsp+36C0h+var_3680], rbx
/*1401a9f13*/  mov [rsp+36C0h+var_3688], rdi
/*1401a9f18*/  mov [rsp+36C0h+var_3690], r15
/*1401a9f1d*/  mov rax, [rbp+3640h+var_78]
/*1401a9f24*/  mov [rsp+36C0h+var_3698], rax
/*1401a9f29*/  mov rax, [rbp+3640h+var_A0]
/*1401a9f30*/  mov [rsp+36C0h+var_36A0], rax
/*1401a9f35*/  lea rcx, [rbp+3640h+var_32A0]
/*1401a9f3c*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9f43*/  lea rbx, [rbp+3640h+var_110]
/*1401a9f4a*/  mov r8, rbx
/*1401a9f4d*/  mov r9, [rbp+3640h+Address]
/*1401a9f54*/  call sub_14065B620
/*1401a9f59*/  nop
loc_1401A9F5A: /*1401a9f5a*/ mov qword ptr [rbp+3640h+var_1DE0], 1
/*1401a9f65*/  mov qword ptr [rbp+3640h+var_1DE0+8], 1
/*1401a9f70*/  lea rcx, [rbp+3640h+var_1DD0]
/*1401a9f77*/  lea rdx, [rbp+3640h+var_32A0]
/*1401a9f7e*/  mov r8d, 14B8h
/*1401a9f84*/  call sub_141684120
/*1401a9f89*/  call nullsub_1
/*1401a9f8e*/  mov ecx, 14C8h
/*1401a9f93*/  mov edx, 8
/*1401a9f98*/  call sub_140001650
/*1401a9f9d*/  test rax, rax
/*1401a9fa0*/  jz loc_1401ACF49
/*1401a9fa6*/  mov r14, rax
/*1401a9fa9*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401a9fb0*/  mov r8d, 14C8h
/*1401a9fb6*/  mov rcx, rax
/*1401a9fb9*/  call sub_141684120
/*1401a9fbe*/  mov [rbp+3640h+var_118], r14
/*1401a9fc5*/  mov rax, [r14+1320h]
/*1401a9fcc*/  lock inc qword ptr [rax]
/*1401a9fd0*/  jle loc_1401ADC0A
/*1401a9fd6*/  mov r14, [r14+1320h]
/*1401a9fdd*/  mov qword ptr [rbp+3640h+var_1DE0], r14
/*1401a9fe4*/  call nullsub_1
/*1401a9fe9*/  mov ecx, 8
/*1401a9fee*/  mov edx, 8
/*1401a9ff3*/  call sub_140001650
/*1401a9ff8*/  test rax, rax
/*1401a9ffb*/  jz loc_1401ACF5E
/*1401aa001*/  mov rsi, rax
/*1401aa004*/  mov [rax], r14
/*1401aa007*/  mov r15, [rbp+3640h+var_118]
/*1401aa00e*/  cmp qword ptr [r15+7A8h], 0
/*1401aa016*/  mov [rbp+3640h+var_E8], rax
/*1401aa01d*/  js loc_1401AA247
/*1401aa023*/  mov [rbp+3640h+var_A1], 1
/*1401aa02a*/  mov [rbp+3640h+var_A2], 1
/*1401aa031*/  mov [rbp+3640h+var_A3], 1
loc_1401AA038: /*1401aa038*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401aa03f*/  call sub_14132F6A0
/*1401aa044*/  nop
/*1401aa045*/  mov rax, qword ptr [rbp+3640h+var_1DE0]
/*1401aa04c*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1401aa050*/  jz loc_1401AA11C
/*1401aa056*/  mov [rbp+3640h+var_78], rax
/*1401aa05d*/  mov rcx, qword ptr [rbp+3640h+var_1DE0+8]
/*1401aa064*/  mov rdx, qword ptr [rbp+3640h+var_1DD0]
loc_1401AA06B: /*1401aa06b*/ mov [rbp+3640h+var_A0], rcx
/*1401aa072*/  call sub_1414740B0
/*1401aa077*/  nop
/*1401aa078*/  test rax, rax
/*1401aa07b*/  jz loc_1401AA14A
/*1401aa081*/  mov r8, rdx
/*1401aa084*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401aa08b*/  mov rdx, rax
/*1401aa08e*/  call sub_1414734D0
/*1401aa093*/  nop
/*1401aa094*/  mov r12, qword ptr [rbp+3640h+var_1DE0]
/*1401aa09b*/  mov rax, qword ptr [rbp+3640h+var_1DE0+8]
/*1401aa0a2*/  mov [rbp+3640h+Address], rax
/*1401aa0a9*/  mov r14, qword ptr [rbp+3640h+var_1DD0]
/*1401aa0b0*/  jmp loc_1401AA151
loc_1401AA0B5: /*1401aa0b5*/ test r14b, r14b
/*1401aa0b8*/  jnz short loc_1401AA0CA
/*1401aa0ba*/  mov rax, [r12]
/*1401aa0be*/  shl rax, 1
/*1401aa0c1*/  test rax, rax
/*1401aa0c4*/  jnz loc_1401AD6D5
loc_1401AA0CA: /*1401aa0ca*/ xor eax, eax
/*1401aa0cc*/  xchg al, byte ptr [rbp+3640h+var_1CC8]
/*1401aa0d2*/  cmp al, 2
/*1401aa0d4*/  jz loc_1401AD4EE
loc_1401AA0DA: /*1401aa0da*/ lea rcx, [rbp+3640h+var_2F0]
/*1401aa0e1*/  call sub_140018D10
/*1401aa0e6*/  nop
/*1401aa0e7*/  mov qword ptr [rbp+3640h+var_32A0], rdi
/*1401aa0ee*/  lea rax, sub_14041F680
/*1401aa0f5*/  mov qword ptr [rbp+3640h+var_32A0+8], rax
/*1401aa0fc*/  lea rcx, unk_1416C8964
/*1401aa103*/  lea r8, off_1416C8998; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401aa10a*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa111*/  call sub_1416C32C0
/*1401aa117*/  jmp loc_1401ADC0A
loc_1401AA11C: /*1401aa11c*/ lea rcx, [rbp+3640h+var_1DE0+8]
/*1401aa123*/  mov [rbp+3640h+var_A1], 1
/*1401aa12a*/  mov [rbp+3640h+var_A2], 1
/*1401aa131*/  mov [rbp+3640h+var_A3], 1
loc_1401AA138: /*1401aa138*/ call sub_140018650
/*1401aa13d*/  nop
/*1401aa13e*/  mov rsi, [rbp+3640h+var_E8]
/*1401aa145*/  jmp loc_1401AA247
loc_1401AA14A: /*1401aa14a*/ mov r12, 0FFFFFFFFFFFFFFFFh
loc_1401AA151: /*1401aa151*/ mov rdx, [rbp+3640h+var_78]
/*1401aa158*/  test rdx, rdx
/*1401aa15b*/  mov rsi, [rbp+3640h+var_E8]
/*1401aa162*/  jz short loc_1401AA176
/*1401aa164*/  mov r8d, 1
/*1401aa16a*/  mov rcx, [rbp+3640h+var_A0]
/*1401aa171*/  call sub_140001660
loc_1401AA176: /*1401aa176*/ cmp r12, 0FFFFFFFFFFFFFFFFh
/*1401aa17a*/  jz loc_1401AA247
/*1401aa180*/  mov [rbp+3640h+var_78], r12
/*1401aa187*/  mov r9, [r15+7B0h]
/*1401aa18e*/  mov rax, [r15+7B8h]
loc_1401AA195: /*1401aa195*/ mov [rsp+36C0h+var_36A0], rax
/*1401aa19a*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401aa1a1*/  mov rdx, [rbp+3640h+Address]
/*1401aa1a8*/  mov r8, r14
/*1401aa1ab*/  call sub_141473FA0
/*1401aa1b0*/  nop
/*1401aa1b1*/  mov r8, qword ptr [rbp+3640h+var_1DE0+8]
/*1401aa1b8*/  mov r9, qword ptr [rbp+3640h+var_1DD0]
/*1401aa1bf*/  lea rcx, aWebview2Browse_0; "WEBVIEW2_BROWSER_EXECUTABLE_FOLDER"
/*1401aa1c6*/  mov qword ptr [rbp+3640h+var_2F0], rcx
/*1401aa1cd*/  mov qword ptr [rbp+3640h+var_2F0+8], 22h ; '"'
/*1401aa1d8*/  mov qword ptr [rbp+3640h+var_32A0], r8
/*1401aa1df*/  mov qword ptr [rbp+3640h+var_32A0+8], r9
loc_1401AA1E6: /*1401aa1e6*/ mov edx, 22h ; '"'
/*1401aa1eb*/  mov [rbp+3640h+var_A0], r8
/*1401aa1f2*/  call sub_141489D80
/*1401aa1f7*/  nop
/*1401aa1f8*/  test rax, rax
/*1401aa1fb*/  jnz loc_1401ADBC8
/*1401aa201*/  mov rdx, qword ptr [rbp+3640h+var_1DE0]
/*1401aa208*/  test rdx, rdx
/*1401aa20b*/  mov rsi, [rbp+3640h+var_E8]
/*1401aa212*/  mov r14, [rbp+3640h+var_78]
/*1401aa219*/  jz short loc_1401AA22D
/*1401aa21b*/  mov r8d, 1
/*1401aa221*/  mov rcx, [rbp+3640h+var_A0]
/*1401aa228*/  call sub_140001660
loc_1401AA22D: /*1401aa22d*/ test r14, r14
/*1401aa230*/  jz short loc_1401AA247
/*1401aa232*/  mov r8d, 1
/*1401aa238*/  mov rcx, [rbp+3640h+Address]
/*1401aa23f*/  mov rdx, r14
/*1401aa242*/  call sub_140001660
loc_1401AA247: /*1401aa247*/ cmp [rbp+3640h+var_650], 0
/*1401aa24e*/  jz short loc_1401AA2A0
/*1401aa250*/  mov qword ptr [rbp+3640h+var_32A0], 0
/*1401aa25b*/  mov word ptr [rbp+3640h+var_3290], 102h
/*1401aa264*/  mov byte ptr [rbp+3640h+var_3290+2], 1
/*1401aa26b*/  mov [rbp+3640h+var_A1], 0
/*1401aa272*/  mov [rbp+3640h+var_A2], 1
/*1401aa279*/  mov [rbp+3640h+var_A3], 1
loc_1401AA280: /*1401aa280*/ lea r9, off_14173BC20
/*1401aa287*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401aa28e*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa295*/  mov r8, rsi
/*1401aa298*/  call sub_140305510
/*1401aa29d*/  nop
/*1401aa29e*/  jmp short loc_1401AA2EE
loc_1401AA2A0: /*1401aa2a0*/ mov qword ptr [rbp+3640h+var_32A0], 0
/*1401aa2ab*/  mov word ptr [rbp+3640h+var_3290], 2
/*1401aa2b4*/  mov byte ptr [rbp+3640h+var_3290+2], 1
/*1401aa2bb*/  mov [rbp+3640h+var_A1], 0
/*1401aa2c2*/  mov [rbp+3640h+var_A2], 1
/*1401aa2c9*/  mov [rbp+3640h+var_A3], 1
/*1401aa2d0*/  lea r9, off_14173BC20
/*1401aa2d7*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401aa2de*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa2e5*/  mov r8, rsi
/*1401aa2e8*/  call sub_140305510
/*1401aa2ed*/  nop
loc_1401AA2EE: /*1401aa2ee*/ mov rsi, qword ptr [rbp+3640h+var_1DE0]
/*1401aa2f5*/  mov r14, qword ptr [rbp+3640h+var_1DE0+8]
/*1401aa2fc*/  movups xmm0, [rbp+3640h+var_1DD0]
/*1401aa303*/  movaps [rbp+3640h+var_2F0], xmm0
/*1401aa30a*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1401aa30e*/  jz loc_1401AD94C
/*1401aa314*/  lea rdx, [rbp+3640h+var_1DC0]
/*1401aa31b*/  lea rcx, [rbp+3640h+var_880]
/*1401aa322*/  mov r8d, 0A8h
/*1401aa328*/  call sub_141684120
/*1401aa32d*/  mov qword ptr [rbp+3640h+var_8A0+8], r14
/*1401aa334*/  movdqa xmm0, [rbp+3640h+var_2F0]
/*1401aa33c*/  movdqu [rbp+3640h+var_890], xmm0
/*1401aa344*/  mov qword ptr [rbp+3640h+var_8A0], rsi
/*1401aa34b*/  mov rcx, [rbp+3640h+var_818]
/*1401aa352*/  mov rax, [rbp+3640h+var_7F8]
/*1401aa359*/  test rcx, rcx
/*1401aa35c*/  jz short loc_1401AA37D
/*1401aa35e*/  cmp ecx, 1
/*1401aa361*/  jnz short loc_1401AA397
/*1401aa363*/  mov rdx, [rbp+3640h+var_810]
/*1401aa36a*/  lock inc qword ptr [rdx+180h]
/*1401aa372*/  jg short loc_1401AA3A9
/*1401aa374*/  mov ecx, 7
/*1401aa379*/  int 29h; Win8: RtlFailFast(ecx)
/*1401aa37b*/  ud2
loc_1401AA37D: /*1401aa37d*/ mov rdx, [rbp+3640h+var_810]
/*1401aa384*/  lock inc qword ptr [rdx+200h]
/*1401aa38c*/  jg short loc_1401AA3A9
/*1401aa38e*/  mov ecx, 7
/*1401aa393*/  int 29h; Win8: RtlFailFast(ecx)
/*1401aa395*/  ud2
loc_1401AA397: /*1401aa397*/ mov rdx, [rbp+3640h+var_810]
/*1401aa39e*/  lock inc qword ptr [rdx+70h]
/*1401aa3a3*/  jle loc_1401ADC0C
loc_1401AA3A9: /*1401aa3a9*/ mov [rbp+3640h+var_630], rcx
/*1401aa3b0*/  mov [rbp+3640h+var_628], rdx
/*1401aa3b7*/  mov [rbp+3640h+var_620], rax
/*1401aa3be*/  mov [rbp+3640h+var_A4], 1
/*1401aa3c5*/  mov [rbp+3640h+var_A5], 1
loc_1401AA3CC: /*1401aa3cc*/ lea rcx, [rbp+3640h+var_630]
/*1401aa3d3*/  call sub_140A7F360
/*1401aa3d8*/  nop
/*1401aa3d9*/  mov rcx, [rbp+3640h+var_818]
/*1401aa3e0*/  mov rax, [rbp+3640h+var_7F8]
/*1401aa3e7*/  cmp rcx, 2
/*1401aa3eb*/  jz short loc_1401AA40C
/*1401aa3ed*/  cmp ecx, 1
/*1401aa3f0*/  jnz short loc_1401AA423
/*1401aa3f2*/  mov rdx, [rbp+3640h+var_810]
/*1401aa3f9*/  lock inc qword ptr [rdx+180h]
/*1401aa401*/  jg short loc_1401AA438
/*1401aa403*/  mov ecx, 7
/*1401aa408*/  int 29h; Win8: RtlFailFast(ecx)
/*1401aa40a*/  ud2
loc_1401AA40C: /*1401aa40c*/ mov rdx, [rbp+3640h+var_810]
/*1401aa413*/  lock inc qword ptr [rdx+70h]
/*1401aa418*/  jg short loc_1401AA438
/*1401aa41a*/  mov ecx, 7
/*1401aa41f*/  int 29h; Win8: RtlFailFast(ecx)
/*1401aa421*/  ud2
loc_1401AA423: /*1401aa423*/ mov rdx, [rbp+3640h+var_810]
/*1401aa42a*/  lock inc qword ptr [rdx+200h]
/*1401aa432*/  jle loc_1401ADC15
loc_1401AA438: /*1401aa438*/ mov [rbp+3640h+var_648], rcx
/*1401aa43f*/  mov [rbp+3640h+var_640], rdx
/*1401aa446*/  mov [rbp+3640h+var_638], rax
/*1401aa44d*/  mov [rbp+3640h+var_A4], 1
/*1401aa454*/  mov [rbp+3640h+var_A5], 1
/*1401aa45b*/  lea rcx, [rbp+3640h+var_648]
/*1401aa462*/  call sub_1401C8610
/*1401aa467*/  nop
/*1401aa468*/  movzx edx, [rbp+3640h+var_64E]
/*1401aa46f*/  mov rcx, [rbp+3640h+var_7F8]
/*1401aa476*/  mov [rbp+3640h+var_A4], 1
/*1401aa47d*/  mov [rbp+3640h+var_A5], 1
/*1401aa484*/  call sub_1412B3B70
/*1401aa489*/  nop
/*1401aa48a*/  mov [rbp+3640h+var_A4], 1
/*1401aa491*/  mov [rbp+3640h+var_A5], 1
/*1401aa498*/  lea rcx, [rbp+3640h+var_3340]
/*1401aa49f*/  lea rdx, [rbp+3640h+var_8A0]
/*1401aa4a6*/  call sub_1401C50B0
/*1401aa4ab*/  nop
loc_1401AA4AC: /*1401aa4ac*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aa4b3*/  lea rdx, [rbp+3640h+var_8A0]
/*1401aa4ba*/  mov r8d, 0C8h
/*1401aa4c0*/  call sub_141684120
/*1401aa4c5*/  mov rax, [rbp+3640h+var_6E8]
/*1401aa4cc*/  mov [rbp+3640h+Address], rax
/*1401aa4d3*/  mov rax, [rbp+3640h+var_6E0]
/*1401aa4da*/  mov [rbp+3640h+var_78], rax
/*1401aa4e1*/  mov rax, [rbp+3640h+var_118]
/*1401aa4e8*/  lock inc qword ptr [rax]
/*1401aa4ec*/  jle loc_1401ADC0A
/*1401aa4f2*/  mov rsi, [rbp+3640h+var_118]
/*1401aa4f9*/  mov qword ptr [rbp+3640h+var_150], rsi
/*1401aa500*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aa507*/  lea rdx, [rbp+3640h+var_3340]
/*1401aa50e*/  mov r8d, 88h
/*1401aa514*/  call sub_141684120
/*1401aa519*/  mov qword ptr [rbp+3640h+var_5B0], rsi
loc_1401AA520: /*1401aa520*/ call sub_1414871F0
/*1401aa525*/  nop
loc_1401AA526: /*1401aa526*/ mov qword ptr [rbp+3640h+var_4A0], rax
/*1401aa52d*/  mov rsi, [rax+10h]
/*1401aa531*/  call nullsub_1
/*1401aa536*/  mov ecx, 20h ; ' '
/*1401aa53b*/  mov edx, 8
/*1401aa540*/  call sub_140001650
/*1401aa545*/  test rax, rax
/*1401aa548*/  jz loc_1401ACF7A
/*1401aa54e*/  mov r14, rax
/*1401aa551*/  mov qword ptr [rax], 1
/*1401aa558*/  mov qword ptr [rax+8], 1
/*1401aa560*/  mov qword ptr [rax+10h], 0
/*1401aa568*/  mov [rax+18h], rsi
/*1401aa56c*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401aa573*/  lea rdx, [rbp+3640h+var_2F0]
/*1401aa57a*/  mov r8d, 88h
/*1401aa580*/  call sub_141684120
/*1401aa585*/  mov rsi, qword ptr [rbp+3640h+var_5B0]
/*1401aa58c*/  lea rcx, [rbp+3640h+var_1D50+8]
/*1401aa593*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa59a*/  mov r8d, 0C8h
/*1401aa5a0*/  call sub_141684120
/*1401aa5a5*/  mov rax, [rbp+3640h+Address]
/*1401aa5ac*/  mov qword ptr [rbp+3640h+var_1C78], rax
/*1401aa5b3*/  mov rax, [rbp+3640h+var_78]
/*1401aa5ba*/  mov qword ptr [rbp+3640h+var_1C78+8], rax
/*1401aa5c1*/  mov rax, qword ptr [rbp+3640h+var_150]
/*1401aa5c8*/  mov qword ptr [rbp+3640h+var_1C88+8], rax
/*1401aa5cf*/  mov [rbp+3640h+var_1D58], rsi
/*1401aa5d6*/  mov qword ptr [rbp+3640h+var_1D50], r14
/*1401aa5dd*/  mov byte ptr [rbp+3640h+var_1C68], 0
/*1401aa5e4*/  mov rax, qword ptr [rbp+3640h+var_4A0]
/*1401aa5eb*/  lock dec qword ptr [rax]
/*1401aa5ef*/  jnz short loc_1401AA605
/*1401aa5f1*/  mov [rbp+3640h+var_69], 1
loc_1401AA5F8: /*1401aa5f8*/ lea rcx, [rbp+3640h+var_4A0]
/*1401aa5ff*/  call sub_141481D70
/*1401aa604*/  nop
loc_1401AA605: /*1401aa605*/ mov rdx, [rbp+3640h+var_660]
/*1401aa60c*/  test rdx, rdx
/*1401aa60f*/  jz loc_1401AA81F
/*1401aa615*/  mov rax, [rbp+3640h+var_658]
loc_1401AA61C: /*1401aa61c*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aa623*/  lea r8, [rbp+3640h+var_1DE0]
/*1401aa62a*/  mov [rbp+3640h+Address], rdx
/*1401aa631*/  mov [rbp+3640h+var_78], rax
/*1401aa638*/  call qword ptr [rax+18h]
/*1401aa63b*/  nop
/*1401aa63c*/  mov rax, [rbp+3640h+var_78]
/*1401aa643*/  mov rdx, [rax+8]
/*1401aa647*/  test rdx, rdx
/*1401aa64a*/  mov rsi, cs:off_141EC90B8
/*1401aa651*/  jz short loc_1401AA663
/*1401aa653*/  mov r8, [rax+10h]
/*1401aa657*/  mov rcx, [rbp+3640h+Address]
/*1401aa65e*/  call sub_140001660
loc_1401AA663: /*1401aa663*/ mov r15, qword ptr [rbp+3640h+var_32A0]
/*1401aa66a*/  mov r14, qword ptr [rbp+3640h+var_32A0+8]
/*1401aa671*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aa675*/  jnz loc_1401ADB74
/*1401aa67b*/  mov qword ptr [rbp+3640h+var_5B0], r14
/*1401aa682*/  mov rax, qword ptr [rbp+3640h+var_1C88+8]
/*1401aa689*/  mov r15, [rax+1320h]
/*1401aa690*/  lea r12, [r15+10h]
/*1401aa694*/  mov cl, 1
/*1401aa696*/  xor eax, eax
/*1401aa698*/  lock cmpxchg [r15+10h], cl
/*1401aa69e*/  jnz loc_1401AD503
loc_1401AA6A4: /*1401aa6a4*/ mov rax, [rsi]
/*1401aa6a7*/  shl rax, 1
/*1401aa6aa*/  test rax, rax
/*1401aa6ad*/  jnz loc_1401AD518
/*1401aa6b3*/  mov dword ptr [rbp+3640h+var_78], 0
/*1401aa6bd*/  mov [rbp+3640h+Address], r12
/*1401aa6c4*/  movzx eax, byte ptr [r15+11h]
/*1401aa6c9*/  test al, al
/*1401aa6cb*/  jnz loc_1401AD54C
loc_1401AA6D1: /*1401aa6d1*/ lea rdx, [r14+0A8h]
loc_1401AA6D8: /*1401aa6d8*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aa6df*/  call sub_14149C500
/*1401aa6e4*/  nop
/*1401aa6e5*/  mov rax, qword ptr [rbp+3640h+var_3290]
/*1401aa6ec*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401aa6f3*/  movdqu xmm0, [rbp+3640h+var_32A0]
/*1401aa6fb*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401aa703*/  lock inc qword ptr [r14]
/*1401aa707*/  jle loc_1401ADC0A
/*1401aa70d*/  lea rcx, [r15+18h]
/*1401aa711*/  lea rdx, [rbp+3640h+var_2F0]
/*1401aa718*/  mov r8, r14
/*1401aa71b*/  call sub_1404708A0
/*1401aa720*/  nop
/*1401aa721*/  mov qword ptr [rbp+3640h+var_32A0], rax
/*1401aa728*/  test rax, rax
/*1401aa72b*/  jz short loc_1401AA740
/*1401aa72d*/  lock dec qword ptr [rax]
/*1401aa731*/  jnz short loc_1401AA740
/*1401aa733*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aa73a*/  call sub_1412151D0
/*1401aa73f*/  nop
loc_1401AA740: /*1401aa740*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401aa747*/  jnz short loc_1401AA758
/*1401aa749*/  mov rax, [rsi]
/*1401aa74c*/  shl rax, 1
/*1401aa74f*/  test rax, rax
/*1401aa752*/  jnz loc_1401AD6F6
loc_1401AA758: /*1401aa758*/ xor eax, eax
/*1401aa75a*/  mov rcx, [rbp+3640h+Address]; Address
/*1401aa761*/  xchg al, [rcx]
/*1401aa763*/  cmp al, 2
/*1401aa765*/  jz loc_1401AD597
loc_1401AA76B: /*1401aa76b*/ mov r14, qword ptr [rbp+3640h+var_1C88+8]
/*1401aa772*/  lea r15, [r14+1328h]
/*1401aa779*/  mov cl, 1
/*1401aa77b*/  xor eax, eax
/*1401aa77d*/  lock cmpxchg [r14+1328h], cl
/*1401aa786*/  jnz loc_1401AD5A9
loc_1401AA78C: /*1401aa78c*/ mov rax, [rsi]
/*1401aa78f*/  shl rax, 1
/*1401aa792*/  test rax, rax
/*1401aa795*/  jnz loc_1401AD5BE
/*1401aa79b*/  mov dword ptr [rbp+3640h+var_78], 0
/*1401aa7a5*/  mov [rbp+3640h+Address], r15
/*1401aa7ac*/  movzx eax, byte ptr [r14+1329h]
/*1401aa7b4*/  test al, al
/*1401aa7b6*/  jnz loc_1401AD5F5
loc_1401AA7BC: /*1401aa7bc*/ mov rcx, qword ptr [rbp+3640h+var_5B0]
/*1401aa7c3*/  mov rax, [r14+1330h]
/*1401aa7ca*/  mov qword ptr [rbp+3640h+var_32A0], rax
/*1401aa7d1*/  mov [r14+1330h], rcx
/*1401aa7d8*/  test rax, rax
/*1401aa7db*/  jz short loc_1401AA7F0
/*1401aa7dd*/  lock dec qword ptr [rax]
/*1401aa7e1*/  jnz short loc_1401AA7F0
loc_1401AA7E3: /*1401aa7e3*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aa7ea*/  call sub_1412151D0
/*1401aa7ef*/  nop
loc_1401AA7F0: /*1401aa7f0*/ cmp byte ptr [rbp+3640h+var_78], 0
/*1401aa7f7*/  jnz short loc_1401AA808
/*1401aa7f9*/  mov rax, [rsi]
/*1401aa7fc*/  shl rax, 1
/*1401aa7ff*/  test rax, rax
/*1401aa802*/  jnz loc_1401AD715
loc_1401AA808: /*1401aa808*/ xor eax, eax
/*1401aa80a*/  mov rcx, [rbp+3640h+Address]; Address
/*1401aa811*/  xchg al, [rcx]
/*1401aa813*/  cmp al, 2
/*1401aa815*/  jz loc_1401AD640
loc_1401AA81B: /*1401aa81b*/ xor esi, esi
/*1401aa81d*/  jmp short loc_1401AA822
loc_1401AA81F: /*1401aa81f*/ mov sil, 1
loc_1401AA822: /*1401aa822*/ lea rax, asc_1416C8C83; "\\"
/*1401aa829*/  mov qword ptr [rbp+3640h+var_32A0], rax
/*1401aa830*/  mov qword ptr [rbp+3640h+var_32A0+8], 1
/*1401aa83b*/  lea rax, asc_1416C8C84; ";"
/*1401aa842*/  mov qword ptr [rbp+3640h+var_3290], rax
/*1401aa849*/  mov qword ptr [rbp+3640h+var_3290+8], 1
/*1401aa854*/  mov qword ptr [rbp+3640h+var_4A0], 0
/*1401aa85f*/  mov byte ptr [rbp+3640h+var_4A0+8], 0
/*1401aa866*/  mov [rbp+3640h+var_69], sil
loc_1401AA86D: /*1401aa86d*/ mov [rsp+36C0h+var_36A0], rdi
/*1401aa872*/  lea r8, aCopyright20192_2; "// Copyright 2019-2024 Tauri Programme "...
/*1401aa879*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aa880*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa887*/  mov r9d, 125h
/*1401aa88d*/  call sub_14122B590
/*1401aa892*/  nop
/*1401aa893*/  mov dword ptr [rbp+3640h+var_78], esi
/*1401aa899*/  cmp qword ptr [rbp+3640h+var_2F0], 0FFFFFFFFFFFFFFFFh
/*1401aa8a1*/  jz loc_1401AD07C
/*1401aa8a7*/  mov rax, qword ptr [rbp+3640h+var_2E0]
/*1401aa8ae*/  mov qword ptr [rbp+3640h+var_320], rax
/*1401aa8b5*/  movdqu xmm0, [rbp+3640h+var_2F0]
/*1401aa8bd*/  movdqa [rbp+3640h+var_330], xmm0
loc_1401AA8C5: /*1401aa8c5*/ lea rdx, aPath_2; "path"
/*1401aa8cc*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aa8d3*/  mov r8d, 4
/*1401aa8d9*/  call sub_1401B3610
/*1401aa8de*/  nop
/*1401aa8df*/  mov rax, qword ptr [rbp+3640h+var_3270]
/*1401aa8e6*/  mov [rbp+3640h+Address], rax
/*1401aa8ed*/  mov rax, qword ptr [rbp+3640h+var_3270+8]
/*1401aa8f4*/  mov [rbp+3640h+var_A0], rax
/*1401aa8fb*/  mov rax, [rax]
/*1401aa8fe*/  test rax, rax
/*1401aa901*/  jz short loc_1401AA90D
loc_1401AA903: /*1401aa903*/ mov rcx, [rbp+3640h+Address]
/*1401aa90a*/  call rax
/*1401aa90c*/  nop
loc_1401AA90D: /*1401aa90d*/ mov rcx, [rbp+3640h+Address]
/*1401aa914*/  mov rax, [rbp+3640h+var_A0]
/*1401aa91b*/  mov rdx, [rax+8]
/*1401aa91f*/  test rdx, rdx
/*1401aa922*/  jz short loc_1401AA92D
/*1401aa924*/  mov r8, [rax+10h]
/*1401aa928*/  call sub_140001660
loc_1401AA92D: /*1401aa92d*/ mov qword ptr [rbp+3640h+var_3270], 1
/*1401aa938*/  lea rax, unk_1416C7B38
/*1401aa93f*/  mov qword ptr [rbp+3640h+var_3270+8], rax
/*1401aa946*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aa94d*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa954*/  mov r8d, 0E0h
/*1401aa95a*/  call sub_141684120
/*1401aa95f*/  mov qword ptr [rbp+3640h+var_4A0], 0
/*1401aa96a*/  mov qword ptr [rbp+3640h+var_4A0+8], 1
/*1401aa975*/  mov qword ptr [rbp+3640h+var_490], 0
/*1401aa980*/  mov qword ptr [rbp+3640h+var_3290], 60000020h
/*1401aa98b*/  mov qword ptr [rbp+3640h+var_32A0], rdi
/*1401aa992*/  lea r12, off_14173C718
/*1401aa999*/  mov qword ptr [rbp+3640h+var_32A0+8], r12
loc_1401AA9A0: /*1401aa9a0*/ lea rcx, [rbp+3640h+var_330]
/*1401aa9a7*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aa9ae*/  call sub_1400015F0
/*1401aa9b3*/  nop
loc_1401AA9B4: /*1401aa9b4*/ test al, al
/*1401aa9b6*/  jnz loc_1401AD0BB
/*1401aa9bc*/  mov rax, qword ptr [rbp+3640h+var_490]
/*1401aa9c3*/  mov qword ptr [rbp+3640h+var_140], rax
/*1401aa9ca*/  movups xmm0, [rbp+3640h+var_4A0]
/*1401aa9d1*/  movaps [rbp+3640h+var_150], xmm0
/*1401aa9d8*/  mov rdx, qword ptr [rbp+3640h+var_2F0]
/*1401aa9df*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1401aa9e3*/  jz short loc_1401AA9FC
/*1401aa9e5*/  test rdx, rdx
/*1401aa9e8*/  jz short loc_1401AA9FC
/*1401aa9ea*/  mov rcx, qword ptr [rbp+3640h+var_2F0+8]
/*1401aa9f1*/  mov r8d, 1
/*1401aa9f7*/  call sub_140001660
loc_1401AA9FC: /*1401aa9fc*/ mov rax, qword ptr [rbp+3640h+var_140]
/*1401aaa03*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401aaa0a*/  movdqa xmm0, [rbp+3640h+var_150]
/*1401aaa12*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401aaa1a*/  mov byte ptr [rbp+3640h+var_2E0+8], 1
/*1401aaa21*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aaa28*/  lea rdx, [rbp+3640h+var_2F0]
/*1401aaa2f*/  mov r8d, 0E0h
/*1401aaa35*/  call sub_141684120
/*1401aaa3a*/  mov rcx, [rbp+3640h+var_31E0]
/*1401aaa41*/  mov rdx, [rbp+3640h+var_31D8]
/*1401aaa48*/  mov [rbp+3640h+var_31E0], 1
/*1401aaa53*/  lea rax, unk_1416C7D38
/*1401aaa5a*/  mov [rbp+3640h+var_31D8], rax
/*1401aaa61*/  mov [rbp+3640h+Address], rcx
/*1401aaa68*/  test rcx, rcx
/*1401aaa6b*/  jz short loc_1401AAAA6
/*1401aaa6d*/  mov [rbp+3640h+var_A0], rdx
/*1401aaa74*/  mov rax, [rdx]
/*1401aaa77*/  test rax, rax
/*1401aaa7a*/  jz short loc_1401AAA86
loc_1401AAA7C: /*1401aaa7c*/ mov rcx, [rbp+3640h+Address]
/*1401aaa83*/  call rax
/*1401aaa85*/  nop
loc_1401AAA86: /*1401aaa86*/ mov rax, [rbp+3640h+var_A0]
/*1401aaa8d*/  mov rdx, [rax+8]
/*1401aaa91*/  test rdx, rdx
/*1401aaa94*/  jz short loc_1401AAAA6
/*1401aaa96*/  mov r8, [rax+10h]
/*1401aaa9a*/  mov rcx, [rbp+3640h+Address]
/*1401aaaa1*/  call sub_140001660
loc_1401AAAA6: /*1401aaaa6*/ lea rdi, [rbp+3640h+var_4A0]
/*1401aaaad*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aaab4*/  mov r8d, 0E0h
/*1401aaaba*/  mov rcx, rdi
/*1401aaabd*/  call sub_141684120
/*1401aaac2*/  nop
loc_1401AAAC3: /*1401aaac3*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aaaca*/  mov rdx, rdi
/*1401aaacd*/  call sub_1401B37D0
/*1401aaad2*/  nop
loc_1401AAAD3: /*1401aaad3*/ cmp dword ptr [rbp+3640h+var_32A0], 0FFFFFFFEh
/*1401aaada*/  jz loc_1401AD0EC
/*1401aaae0*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aaae7*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aaaee*/  mov r8d, 178h
/*1401aaaf4*/  call sub_141684120
/*1401aaaf9*/  mov rdx, qword ptr [rbp+3640h+var_330]
/*1401aab00*/  test rdx, rdx
/*1401aab03*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401aab09*/  jz short loc_1401AAB1D
/*1401aab0b*/  mov rcx, qword ptr [rbp+3640h+var_330+8]
/*1401aab12*/  mov r8d, 1
/*1401aab18*/  call sub_140001660
loc_1401AAB1D: /*1401aab1d*/ mov [rbp+3640h+var_69], sil
loc_1401AAB24: /*1401aab24*/ lea rcx, [rbp+3640h+var_5B0]
/*1401aab2b*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aab32*/  lea r8, [rbp+3640h+var_2F0]
/*1401aab39*/  call sub_140004D60
/*1401aab3e*/  nop
/*1401aab3f*/  mov r15, qword ptr [rbp+3640h+var_5B0]
/*1401aab46*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aab4a*/  jnz loc_1401AD8F4
/*1401aab50*/  mov rax, qword ptr [rbp+3640h+var_1C88+8]
/*1401aab57*/  mov rax, [rax+1390h]
/*1401aab5e*/  mov rdx, [rax+20h]
/*1401aab62*/  mov r8, [rax+28h]
/*1401aab66*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401aab6c*/  mov [rbp+3640h+var_69], al
/*1401aab72*/  lea rax, aEventid; "eventId"
/*1401aab79*/  mov [rsp+36C0h+var_3698], rax
/*1401aab7e*/  mov [rsp+36C0h+var_3690], 7
/*1401aab87*/  mov [rsp+36C0h+var_36A0], 5
/*1401aab90*/  lea r9, aEvent; "event"
/*1401aab97*/  lea r14, [rbp+3640h+var_32A0]
/*1401aab9e*/  mov rcx, r14
/*1401aaba1*/  call sub_14123FFC0
/*1401aaba6*/  nop
/*1401aaba7*/  mov qword ptr [rbp+3640h+var_2F0], r14
/*1401aabae*/  mov qword ptr [rbp+3640h+var_2F0+8], r13
loc_1401AABB5: /*1401aabb5*/ lea rdx, unk_1416C8E40
/*1401aabbc*/  lea rcx, [rbp+3640h+var_5D0]
/*1401aabc3*/  lea r8, [rbp+3640h+var_2F0]
/*1401aabca*/  call sub_14149C0F0
/*1401aabcf*/  nop
/*1401aabd0*/  mov rdx, qword ptr [rbp+3640h+var_32A0]
/*1401aabd7*/  test rdx, rdx
/*1401aabda*/  jz short loc_1401AABEE
/*1401aabdc*/  mov rcx, qword ptr [rbp+3640h+var_32A0+8]
/*1401aabe3*/  mov r8d, 1
/*1401aabe9*/  call sub_140001660
loc_1401AABEE: /*1401aabee*/ movdqu xmm0, [rbp+3640h+var_5D0]
/*1401aabf6*/  movdqa [rbp+3640h+var_170], xmm0
/*1401aabfe*/  mov rax, qword ptr [rbp+3640h+var_5C0]
/*1401aac05*/  mov [rbp+3640h+var_160], rax
loc_1401AAC0C: /*1401aac0c*/ lea rdx, aEvent; "event"
/*1401aac13*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aac1a*/  mov r8d, 5
/*1401aac20*/  call sub_1401B3610
/*1401aac25*/  nop
/*1401aac26*/  mov rax, qword ptr [rbp+3640h+var_3270]
/*1401aac2d*/  mov [rbp+3640h+Address], rax
/*1401aac34*/  mov rax, qword ptr [rbp+3640h+var_3270+8]
/*1401aac3b*/  mov [rbp+3640h+var_A0], rax
/*1401aac42*/  mov rax, [rax]
/*1401aac45*/  test rax, rax
/*1401aac48*/  jz short loc_1401AAC54
loc_1401AAC4A: /*1401aac4a*/ mov rcx, [rbp+3640h+Address]
/*1401aac51*/  call rax
/*1401aac53*/  nop
loc_1401AAC54: /*1401aac54*/ mov rcx, [rbp+3640h+Address]
/*1401aac5b*/  mov rax, [rbp+3640h+var_A0]
/*1401aac62*/  mov rdx, [rax+8]
/*1401aac66*/  test rdx, rdx
/*1401aac69*/  jz short loc_1401AAC74
/*1401aac6b*/  mov r8, [rax+10h]
/*1401aac6f*/  call sub_140001660
loc_1401AAC74: /*1401aac74*/ mov qword ptr [rbp+3640h+var_3270], 1
/*1401aac7f*/  lea rax, unk_1416C7B98
/*1401aac86*/  mov qword ptr [rbp+3640h+var_3270+8], rax
/*1401aac8d*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aac94*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aac9b*/  mov r8d, 0E0h
/*1401aaca1*/  call sub_141684120
/*1401aaca6*/  mov qword ptr [rbp+3640h+var_110], 0
/*1401aacb1*/  mov byte ptr [rbp+3640h+var_110+8], 0
loc_1401AACB8: /*1401aacb8*/ mov [rsp+36C0h+var_36A0], rbx
/*1401aacbd*/  lea r8, aCopyright20192; "// Copyright 2019-2024 Tauri Programme "...
/*1401aacc4*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aaccb*/  lea rdx, [rbp+3640h+var_170]
/*1401aacd2*/  mov r9d, 13Dh
/*1401aacd8*/  call sub_141218080
/*1401aacdd*/  nop
/*1401aacde*/  cmp qword ptr [rbp+3640h+var_32A0], 0FFFFFFFFFFFFFFFFh
/*1401aace6*/  jz loc_1401AD13B
/*1401aacec*/  mov rax, qword ptr [rbp+3640h+var_3290]
/*1401aacf3*/  mov qword ptr [rbp+3640h+var_140], rax
/*1401aacfa*/  movdqu xmm0, [rbp+3640h+var_32A0]
/*1401aad02*/  movdqa [rbp+3640h+var_150], xmm0
/*1401aad0a*/  mov qword ptr [rbp+3640h+var_4A0], 0
/*1401aad15*/  mov qword ptr [rbp+3640h+var_4A0+8], 1
/*1401aad20*/  mov qword ptr [rbp+3640h+var_490], 0
/*1401aad2b*/  mov qword ptr [rbp+3640h+var_3290], 60000020h
/*1401aad36*/  mov qword ptr [rbp+3640h+var_32A0], rdi
/*1401aad3d*/  mov qword ptr [rbp+3640h+var_32A0+8], r12
loc_1401AAD44: /*1401aad44*/ lea rcx, [rbp+3640h+var_150]
/*1401aad4b*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aad52*/  call sub_1400015F0
/*1401aad57*/  nop
loc_1401AAD58: /*1401aad58*/ test al, al
/*1401aad5a*/  jnz loc_1401AD17A
/*1401aad60*/  mov rax, qword ptr [rbp+3640h+var_490]
/*1401aad67*/  mov qword ptr [rbp+3640h+var_320], rax
/*1401aad6e*/  movups xmm0, [rbp+3640h+var_4A0]
/*1401aad75*/  movaps [rbp+3640h+var_330], xmm0
/*1401aad7c*/  mov rdx, qword ptr [rbp+3640h+var_2F0]
/*1401aad83*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1401aad87*/  jz short loc_1401AADA0
/*1401aad89*/  test rdx, rdx
/*1401aad8c*/  jz short loc_1401AADA0
/*1401aad8e*/  mov rcx, qword ptr [rbp+3640h+var_2F0+8]
/*1401aad95*/  mov r8d, 1
/*1401aad9b*/  call sub_140001660
loc_1401AADA0: /*1401aada0*/ mov rax, qword ptr [rbp+3640h+var_320]
/*1401aada7*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401aadae*/  movdqa xmm0, [rbp+3640h+var_330]
/*1401aadb6*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401aadbe*/  mov byte ptr [rbp+3640h+var_2E0+8], 1
/*1401aadc5*/  lea rdx, [rbp+3640h+var_2F0]
/*1401aadcc*/  mov r8d, 0E0h
/*1401aadd2*/  mov rcx, rdi
/*1401aadd5*/  call sub_141684120
/*1401aadda*/  nop
loc_1401AADDB: /*1401aaddb*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aade2*/  mov rdx, rdi
/*1401aade5*/  call sub_1401B37D0
/*1401aadea*/  nop
loc_1401AADEB: /*1401aadeb*/ cmp dword ptr [rbp+3640h+var_32A0], 0FFFFFFFEh
/*1401aadf2*/  jz loc_1401AD1AB
/*1401aadf8*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aadff*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aae06*/  mov r8d, 178h
/*1401aae0c*/  call sub_141684120
/*1401aae11*/  mov rdx, qword ptr [rbp+3640h+var_170]
/*1401aae18*/  test rdx, rdx
/*1401aae1b*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401aae21*/  jz short loc_1401AAE35
/*1401aae23*/  mov rcx, qword ptr [rbp+3640h+var_170+8]
/*1401aae2a*/  mov r8d, 1
/*1401aae30*/  call sub_140001660
loc_1401AAE35: /*1401aae35*/ mov rdx, qword ptr [rbp+3640h+var_150]
/*1401aae3c*/  test rdx, rdx
/*1401aae3f*/  jz short loc_1401AAE53
/*1401aae41*/  mov rcx, qword ptr [rbp+3640h+var_150+8]
/*1401aae48*/  mov r8d, 1
/*1401aae4e*/  call sub_140001660
loc_1401AAE53: /*1401aae53*/ mov [rbp+3640h+var_69], sil
loc_1401AAE5A: /*1401aae5a*/ lea rcx, [rbp+3640h+var_5B0]
/*1401aae61*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aae68*/  lea r8, [rbp+3640h+var_2F0]
/*1401aae6f*/  call sub_140004D60
/*1401aae74*/  nop
/*1401aae75*/  mov r15, qword ptr [rbp+3640h+var_5B0]
/*1401aae7c*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aae80*/  jnz loc_1401AD8F4
/*1401aae86*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401aae8c*/  mov [rbp+3640h+var_69], sil
/*1401aae93*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aae9a*/  call sub_140692310
/*1401aae9f*/  nop
/*1401aaea0*/  mov [rbp+3640h+var_69], sil
/*1401aaea7*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aaeae*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aaeb5*/  lea r8, [rbp+3640h+var_32A0]
/*1401aaebc*/  call sub_140004D60
/*1401aaec1*/  nop
/*1401aaec2*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401aaec9*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aaecd*/  jnz loc_1401AD81C
/*1401aaed3*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401aaed9*/  mov [rbp+3640h+var_69], al
/*1401aaedf*/  lea rdx, aWebview; "webview"
/*1401aaee6*/  lea rcx, [rbp+3640h+var_5B0]
/*1401aaeed*/  mov r8d, 7
/*1401aaef3*/  call sub_1401B3610
/*1401aaef8*/  nop
loc_1401AAEF9: /*1401aaef9*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aaf00*/  lea rdx, [rbp+3640h+var_5B0]
/*1401aaf07*/  mov r8d, 0E0h
/*1401aaf0d*/  call sub_141684120
/*1401aaf12*/  mov rax, qword ptr [rbp+3640h+var_3270]
/*1401aaf19*/  mov [rbp+3640h+Address], rax
/*1401aaf20*/  mov rax, qword ptr [rbp+3640h+var_3270+8]
/*1401aaf27*/  mov [rbp+3640h+var_A0], rax
/*1401aaf2e*/  mov rax, [rax]
/*1401aaf31*/  test rax, rax
/*1401aaf34*/  jz short loc_1401AAF40
loc_1401AAF36: /*1401aaf36*/ mov rcx, [rbp+3640h+Address]
/*1401aaf3d*/  call rax
/*1401aaf3f*/  nop
loc_1401AAF40: /*1401aaf40*/ mov rcx, [rbp+3640h+Address]
/*1401aaf47*/  mov rax, [rbp+3640h+var_A0]
/*1401aaf4e*/  mov rdx, [rax+8]
/*1401aaf52*/  test rdx, rdx
/*1401aaf55*/  jz short loc_1401AAF60
/*1401aaf57*/  mov r8, [rax+10h]
/*1401aaf5b*/  call sub_140001660
loc_1401AAF60: /*1401aaf60*/ mov qword ptr [rbp+3640h+var_3270], 1
/*1401aaf6b*/  lea rax, unk_1416C7C28
/*1401aaf72*/  mov qword ptr [rbp+3640h+var_3270+8], rax
/*1401aaf79*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aaf80*/  mov r8d, 0E0h
/*1401aaf86*/  mov rcx, rdi
/*1401aaf89*/  call sub_141684120
/*1401aaf8e*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401aaf94*/  mov [rbp+3640h+var_69], sil
loc_1401AAF9B: /*1401aaf9b*/ lea rcx, [rbp+3640h+var_32A0]
/*1401aafa2*/  mov rdx, rdi
/*1401aafa5*/  call sub_1401B37D0
/*1401aafaa*/  nop
loc_1401AAFAB: /*1401aafab*/ cmp dword ptr [rbp+3640h+var_32A0], 0FFFFFFFEh
/*1401aafb2*/  jz loc_1401AD1FA
/*1401aafb8*/  lea rdi, [rbp+3640h+var_2F0]
/*1401aafbf*/  lea rdx, [rbp+3640h+var_32A0]
/*1401aafc6*/  mov r8d, 178h
/*1401aafcc*/  mov rcx, rdi
/*1401aafcf*/  call sub_141684120
/*1401aafd4*/  mov [rbp+3640h+var_69], sil
loc_1401AAFDB: /*1401aafdb*/ lea rcx, [rbp+3640h+var_150]
/*1401aafe2*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aafe9*/  mov r8, rdi
/*1401aafec*/  call sub_140004D60
/*1401aaff1*/  nop
/*1401aaff2*/  mov r15, qword ptr [rbp+3640h+var_150]
/*1401aaff9*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aaffd*/  jnz loc_1401AD9FB
/*1401ab003*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ab009*/  mov [rbp+3640h+var_69], al
/*1401ab00f*/  lea rdx, aApp; "app"
/*1401ab016*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ab01d*/  mov r8d, 3
/*1401ab023*/  call sub_1401B3610
/*1401ab028*/  nop
/*1401ab029*/  mov rax, qword ptr [rbp+3640h+var_3270]
/*1401ab030*/  mov [rbp+3640h+Address], rax
/*1401ab037*/  mov rax, qword ptr [rbp+3640h+var_3270+8]
/*1401ab03e*/  mov [rbp+3640h+var_A0], rax
/*1401ab045*/  mov rax, [rax]
/*1401ab048*/  test rax, rax
/*1401ab04b*/  jz short loc_1401AB057
loc_1401AB04D: /*1401ab04d*/ mov rcx, [rbp+3640h+Address]
/*1401ab054*/  call rax
/*1401ab056*/  nop
loc_1401AB057: /*1401ab057*/ mov rcx, [rbp+3640h+Address]
/*1401ab05e*/  mov rax, [rbp+3640h+var_A0]
/*1401ab065*/  mov rdx, [rax+8]
/*1401ab069*/  test rdx, rdx
/*1401ab06c*/  jz short loc_1401AB077
/*1401ab06e*/  mov r8, [rax+10h]
/*1401ab072*/  call sub_140001660
loc_1401AB077: /*1401ab077*/ mov qword ptr [rbp+3640h+var_3270], 1
/*1401ab082*/  lea rax, unk_1416C7AA8
/*1401ab089*/  mov qword ptr [rbp+3640h+var_3270+8], rax
/*1401ab090*/  lea rcx, [rbp+3640h+var_2F0]
/*1401ab097*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ab09e*/  mov r8d, 0E0h
/*1401ab0a4*/  call sub_141684120
/*1401ab0a9*/  mov rcx, [rbp+3640h+var_230]
/*1401ab0b0*/  mov rdx, [rbp+3640h+var_228]
/*1401ab0b7*/  mov [rbp+3640h+var_230], 1
/*1401ab0c2*/  lea rax, unk_1416C7CF8
/*1401ab0c9*/  mov [rbp+3640h+var_228], rax
/*1401ab0d0*/  mov [rbp+3640h+Address], rcx
/*1401ab0d7*/  test rcx, rcx
/*1401ab0da*/  jz short loc_1401AB115
/*1401ab0dc*/  mov [rbp+3640h+var_A0], rdx
/*1401ab0e3*/  mov rax, [rdx]
/*1401ab0e6*/  test rax, rax
/*1401ab0e9*/  jz short loc_1401AB0F5
loc_1401AB0EB: /*1401ab0eb*/ mov rcx, [rbp+3640h+Address]
/*1401ab0f2*/  call rax
/*1401ab0f4*/  nop
loc_1401AB0F5: /*1401ab0f5*/ mov rax, [rbp+3640h+var_A0]
/*1401ab0fc*/  mov rdx, [rax+8]
/*1401ab100*/  test rdx, rdx
/*1401ab103*/  jz short loc_1401AB115
/*1401ab105*/  mov r8, [rax+10h]
/*1401ab109*/  mov rcx, [rbp+3640h+Address]
/*1401ab110*/  call sub_140001660
loc_1401AB115: /*1401ab115*/ lea rdi, [rbp+3640h+var_4A0]
/*1401ab11c*/  lea rdx, [rbp+3640h+var_2F0]
/*1401ab123*/  mov r8d, 0E0h
/*1401ab129*/  mov rcx, rdi
/*1401ab12c*/  call sub_141684120
/*1401ab131*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab137*/  mov [rbp+3640h+var_69], sil
loc_1401AB13E: /*1401ab13e*/ lea rcx, [rbp+3640h+var_32A0]
/*1401ab145*/  mov rdx, rdi
/*1401ab148*/  call sub_1401B37D0
/*1401ab14d*/  nop
loc_1401AB14E: /*1401ab14e*/ cmp dword ptr [rbp+3640h+var_32A0], 0FFFFFFFEh
/*1401ab155*/  jz loc_1401AD249
/*1401ab15b*/  lea rdi, [rbp+3640h+var_2F0]
/*1401ab162*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ab169*/  mov r8d, 178h
/*1401ab16f*/  mov rcx, rdi
/*1401ab172*/  call sub_141684120
/*1401ab177*/  mov [rbp+3640h+var_69], sil
loc_1401AB17E: /*1401ab17e*/ lea rcx, [rbp+3640h+var_5B0]
/*1401ab185*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ab18c*/  mov r8, rdi
/*1401ab18f*/  call sub_140004D60
/*1401ab194*/  nop
/*1401ab195*/  mov r15, qword ptr [rbp+3640h+var_5B0]
/*1401ab19c*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ab1a0*/  jnz loc_1401AD8F4
/*1401ab1a6*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab1ac*/  mov [rbp+3640h+var_69], sil
/*1401ab1b3*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ab1ba*/  call sub_1401DF7F0
/*1401ab1bf*/  nop
/*1401ab1c0*/  mov [rbp+3640h+var_69], sil
/*1401ab1c7*/  lea rcx, [rbp+3640h+var_2F0]
/*1401ab1ce*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ab1d5*/  lea r8, [rbp+3640h+var_32A0]
/*1401ab1dc*/  call sub_140004D60
/*1401ab1e1*/  nop
/*1401ab1e2*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401ab1e9*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ab1ed*/  jnz loc_1401AD81C
/*1401ab1f3*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab1f9*/  mov [rbp+3640h+var_69], sil
/*1401ab200*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ab207*/  call sub_1401DEF00
/*1401ab20c*/  nop
/*1401ab20d*/  mov [rbp+3640h+var_69], sil
/*1401ab214*/  lea rcx, [rbp+3640h+var_2F0]
/*1401ab21b*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ab222*/  lea r8, [rbp+3640h+var_32A0]
/*1401ab229*/  call sub_140004D60
/*1401ab22e*/  nop
/*1401ab22f*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401ab236*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ab23a*/  jnz loc_1401AD81C
/*1401ab240*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab246*/  mov [rbp+3640h+var_69], sil
/*1401ab24d*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ab254*/  call sub_14035F230
/*1401ab259*/  nop
/*1401ab25a*/  mov [rbp+3640h+var_69], sil
/*1401ab261*/  lea rcx, [rbp+3640h+var_2F0]
/*1401ab268*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ab26f*/  lea r8, [rbp+3640h+var_32A0]
/*1401ab276*/  call sub_140004D60
/*1401ab27b*/  nop
/*1401ab27c*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401ab283*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ab287*/  jnz loc_1401AD81C
/*1401ab28d*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab293*/  mov [rbp+3640h+var_69], sil
/*1401ab29a*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ab2a1*/  call sub_1406D7F10
/*1401ab2a6*/  nop
/*1401ab2a7*/  mov [rbp+3640h+var_69], sil
/*1401ab2ae*/  lea rcx, [rbp+3640h+var_2F0]
/*1401ab2b5*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ab2bc*/  lea r8, [rbp+3640h+var_32A0]
/*1401ab2c3*/  call sub_140004D60
/*1401ab2c8*/  nop
/*1401ab2c9*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401ab2d0*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ab2d4*/  jnz loc_1401AD81C
/*1401ab2da*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ab2e0*/  mov [rbp+3640h+var_69], al
/*1401ab2e6*/  lea rcx, [rbp+3640h+var_170]
/*1401ab2ed*/  call sub_141345FC0
/*1401ab2f2*/  nop
/*1401ab2f3*/  mov rax, qword ptr [rbp+3640h+var_1C88+8]
/*1401ab2fa*/  mov rcx, [rax+1398h]
/*1401ab301*/  lock inc qword ptr [rcx]
/*1401ab305*/  jle loc_1401ADC0A
/*1401ab30b*/  mov rdi, [rax+1398h]
/*1401ab312*/  mov qword ptr [rbp+3640h+var_2F0], rdi
/*1401ab319*/  lea rbx, [rdi+10h]
/*1401ab31d*/  movdqu xmm0, [rbp+3640h+var_170]
/*1401ab325*/  movdqa [rbp+3640h+var_4C0], xmm0
/*1401ab32d*/  mov rax, [rbp+3640h+var_160]
/*1401ab334*/  mov [rbp+3640h+var_4B0], rax
/*1401ab33b*/  mov cl, 1
/*1401ab33d*/  xor eax, eax
/*1401ab33f*/  lock cmpxchg [rdi+10h], cl
/*1401ab344*/  mov rsi, cs:off_141EC90B8
/*1401ab34b*/  jnz loc_1401AD298
loc_1401AB351: /*1401ab351*/ mov rax, [rsi]
/*1401ab354*/  shl rax, 1
/*1401ab357*/  test rax, rax
/*1401ab35a*/  jnz loc_1401AD2AD
/*1401ab360*/  xor r14d, r14d
/*1401ab363*/  movzx eax, byte ptr [rdi+11h]
/*1401ab367*/  test al, al
/*1401ab369*/  jnz loc_1401AD2CD
loc_1401AB36F: /*1401ab36f*/ cmp qword ptr [rdi+30h], 0
/*1401ab374*/  jz loc_1401AB416
/*1401ab37a*/  mov rax, [rdi+18h]
/*1401ab37e*/  mov rcx, [rdi+20h]
/*1401ab382*/  mov rdx, 4D5AFB267A2F1668h
/*1401ab38c*/  xor r8d, r8d
/*1401ab38f*/  movdqa xmm0, cs:xmmword_1416C6140
/*1401ab397*/  pcmpeqd xmm1, xmm1
/*1401ab39b*/  movdqa xmm2, cs:xmmword_1416C6150
loc_1401AB3A3: /*1401ab3a3*/ and rdx, rcx
/*1401ab3a6*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401ab3ab*/  movdqa xmm4, xmm3
/*1401ab3af*/  pcmpeqb xmm4, xmm0
/*1401ab3b3*/  pmovmskb r9d, xmm4
/*1401ab3b8*/  test r9d, r9d
/*1401ab3bb*/  jz short loc_1401AB3FB
loc_1401AB3BD: /*1401ab3bd*/ tzcnt r10d, r9d
/*1401ab3c2*/  add r10, rdx
/*1401ab3c5*/  and r10, rcx
/*1401ab3c8*/  shl r10, 5
/*1401ab3cc*/  mov r11, rax
/*1401ab3cf*/  sub r11, r10
/*1401ab3d2*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401ab3d8*/  pcmpeqb xmm4, xmm2
/*1401ab3dc*/  pmovmskb r10d, xmm4
/*1401ab3e1*/  cmp r10d, 0FFFFh
/*1401ab3e8*/  jz loc_1401AB503
/*1401ab3ee*/  lea r10d, [r9-1]
/*1401ab3f2*/  and r10w, r9w
/*1401ab3f6*/  mov r9d, r10d
/*1401ab3f9*/  jnz short loc_1401AB3BD
loc_1401AB3FB: /*1401ab3fb*/ pcmpeqb xmm3, xmm1
/*1401ab3ff*/  pmovmskb r9d, xmm3
/*1401ab404*/  test r9d, r9d
/*1401ab407*/  jnz short loc_1401AB416
/*1401ab409*/  add rdx, r8
/*1401ab40c*/  add rdx, 10h
/*1401ab410*/  add r8, 10h
/*1401ab414*/  jmp short loc_1401AB3A3
loc_1401AB416: /*1401ab416*/ mov dword ptr [rbp+3640h+var_A0], r14d
/*1401ab41d*/  mov [rbp+3640h+Address], rbx
/*1401ab424*/  call nullsub_1
/*1401ab429*/  mov ecx, 18h
/*1401ab42e*/  mov edx, 8
/*1401ab433*/  call sub_140001650
/*1401ab438*/  test rax, rax
/*1401ab43b*/  jz loc_1401AD3F4
/*1401ab441*/  lea rcx, [rdi+18h]
/*1401ab445*/  mov rdx, [rbp+3640h+var_4B0]
/*1401ab44c*/  mov [rax+10h], rdx
/*1401ab450*/  movaps xmm0, [rbp+3640h+var_4C0]
/*1401ab457*/  movups xmmword ptr [rax], xmm0
/*1401ab45a*/  movdqu xmm0, cs:xmmword_1416C8318
/*1401ab462*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401AB46A: /*1401ab46a*/ lea r9, off_1416C8328
/*1401ab471*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ab478*/  mov r8, rax
/*1401ab47b*/  call sub_140470440
/*1401ab480*/  nop
/*1401ab481*/  test rax, rax
/*1401ab484*/  jz short loc_1401AB4C6
/*1401ab486*/  mov [rbp+3640h+var_D0], rax
/*1401ab48d*/  mov [rbp+3640h+var_D8], rdx
/*1401ab494*/  mov rax, [rdx]
/*1401ab497*/  test rax, rax
/*1401ab49a*/  jz short loc_1401AB4A6
loc_1401AB49C: /*1401ab49c*/ mov rcx, [rbp+3640h+var_D0]
/*1401ab4a3*/  call rax
/*1401ab4a5*/  nop
loc_1401AB4A6: /*1401ab4a6*/ mov rax, [rbp+3640h+var_D8]
/*1401ab4ad*/  mov rdx, [rax+8]
/*1401ab4b1*/  test rdx, rdx
/*1401ab4b4*/  mov rcx, [rbp+3640h+var_D0]
/*1401ab4bb*/  jz short loc_1401AB4C6
/*1401ab4bd*/  mov r8, [rax+10h]
/*1401ab4c1*/  call sub_140001660
loc_1401AB4C6: /*1401ab4c6*/ cmp byte ptr [rbp+3640h+var_A0], 0
/*1401ab4cd*/  jnz short loc_1401AB4DE
/*1401ab4cf*/  mov rax, [rsi]
/*1401ab4d2*/  shl rax, 1
/*1401ab4d5*/  test rax, rax
/*1401ab4d8*/  jnz loc_1401AD737
loc_1401AB4DE: /*1401ab4de*/ xor eax, eax
/*1401ab4e0*/  mov rcx, [rbp+3640h+Address]; Address
/*1401ab4e7*/  xchg al, [rcx]
/*1401ab4e9*/  cmp al, 2
/*1401ab4eb*/  jnz loc_1401AB580
/*1401ab4f1*/  mov [rbp+3640h+var_90], 0
loc_1401AB4F8: /*1401ab4f8*/ call WakeByAddressSingle
/*1401ab4fd*/  nop
/*1401ab4fe*/  jmp loc_1401AB580
loc_1401AB503: /*1401ab503*/ test r14b, r14b
/*1401ab506*/  jnz short loc_1401AB517
/*1401ab508*/  mov rax, [rsi]
/*1401ab50b*/  shl rax, 1
/*1401ab50e*/  test rax, rax
/*1401ab511*/  jnz loc_1401AD78A
loc_1401AB517: /*1401ab517*/ xor eax, eax
/*1401ab519*/  xchg al, [rbx]
/*1401ab51b*/  cmp al, 2
/*1401ab51d*/  jz loc_1401AD6AB
loc_1401AB523: /*1401ab523*/ mov rdi, qword ptr [rbp+3640h+var_4C0+8]
/*1401ab52a*/  mov rsi, [rbp+3640h+var_4B0]
/*1401ab531*/  test rsi, rsi
/*1401ab534*/  jz short loc_1401AB562
/*1401ab536*/  lea rbx, [rdi+8]
/*1401ab53a*/  jmp short loc_1401AB549
loc_1401AB540: /*1401ab540*/ add rbx, 20h ; ' '
/*1401ab544*/  dec rsi
/*1401ab547*/  jz short loc_1401AB562
loc_1401AB549: /*1401ab549*/ mov rdx, [rbx-8]
/*1401ab54d*/  test rdx, rdx
/*1401ab550*/  jz short loc_1401AB540
/*1401ab552*/  mov rcx, [rbx]
/*1401ab555*/  mov r8d, 1
/*1401ab55b*/  call sub_140001660
/*1401ab560*/  jmp short loc_1401AB540
loc_1401AB562: /*1401ab562*/ mov rdx, qword ptr [rbp+3640h+var_4C0]
/*1401ab569*/  test rdx, rdx
/*1401ab56c*/  jz short loc_1401AB580
/*1401ab56e*/  shl rdx, 5
/*1401ab572*/  mov r8d, 8
/*1401ab578*/  mov rcx, rdi
/*1401ab57b*/  call sub_140001660
loc_1401AB580: /*1401ab580*/ mov rax, qword ptr [rbp+3640h+var_2F0]
/*1401ab587*/  lock dec qword ptr [rax]
/*1401ab58b*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ab591*/  jnz short loc_1401AB5A6
/*1401ab593*/  mov [rbp+3640h+var_69], al
loc_1401AB599: /*1401ab599*/ lea rcx, [rbp+3640h+var_2F0]
/*1401ab5a0*/  call sub_1412154B0
/*1401ab5a5*/  nop
loc_1401AB5A6: /*1401ab5a6*/ mov rax, qword ptr [rbp+3640h+var_1C88+8]
/*1401ab5ad*/  mov rcx, [rax+1398h]
/*1401ab5b4*/  lock inc qword ptr [rcx]
/*1401ab5b8*/  jle loc_1401ADC0A
/*1401ab5be*/  mov rdi, [rax+1398h]
/*1401ab5c5*/  mov qword ptr [rbp+3640h+var_2F0], rdi
/*1401ab5cc*/  lea rbx, [rdi+10h]
/*1401ab5d0*/  mov cl, 1
/*1401ab5d2*/  xor eax, eax
/*1401ab5d4*/  lock cmpxchg [rdi+10h], cl
/*1401ab5d9*/  mov rsi, cs:off_141EC90B8
/*1401ab5e0*/  jnz loc_1401AD30C
loc_1401AB5E6: /*1401ab5e6*/ mov rax, [rsi]
/*1401ab5e9*/  shl rax, 1
/*1401ab5ec*/  test rax, rax
/*1401ab5ef*/  jnz loc_1401AD31A
/*1401ab5f5*/  xor r14d, r14d
/*1401ab5f8*/  movzx eax, byte ptr [rdi+11h]
/*1401ab5fc*/  test al, al
/*1401ab5fe*/  jnz loc_1401AD333
loc_1401AB604: /*1401ab604*/ cmp qword ptr [rdi+30h], 0
/*1401ab609*/  jz loc_1401AB6AB
/*1401ab60f*/  mov rax, [rdi+18h]
/*1401ab613*/  mov rcx, [rdi+20h]
/*1401ab617*/  mov rdx, 0ECC0C535D0DA45A1h
/*1401ab621*/  xor r8d, r8d
/*1401ab624*/  movdqa xmm0, cs:xmmword_1416C61A0
/*1401ab62c*/  pcmpeqd xmm1, xmm1
/*1401ab630*/  movdqa xmm2, cs:xmmword_1416C61B0
loc_1401AB638: /*1401ab638*/ and rdx, rcx
/*1401ab63b*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401ab640*/  movdqa xmm4, xmm3
/*1401ab644*/  pcmpeqb xmm4, xmm0
/*1401ab648*/  pmovmskb r9d, xmm4
/*1401ab64d*/  test r9d, r9d
/*1401ab650*/  jz short loc_1401AB690
loc_1401AB652: /*1401ab652*/ tzcnt r10d, r9d
/*1401ab657*/  add r10, rdx
/*1401ab65a*/  and r10, rcx
/*1401ab65d*/  shl r10, 5
/*1401ab661*/  mov r11, rax
/*1401ab664*/  sub r11, r10
/*1401ab667*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401ab66d*/  pcmpeqb xmm4, xmm2
/*1401ab671*/  pmovmskb r10d, xmm4
/*1401ab676*/  cmp r10d, 0FFFFh
/*1401ab67d*/  jz loc_1401AB74F
/*1401ab683*/  lea r10d, [r9-1]
/*1401ab687*/  and r10w, r9w
/*1401ab68b*/  mov r9d, r10d
/*1401ab68e*/  jnz short loc_1401AB652
loc_1401AB690: /*1401ab690*/ pcmpeqb xmm3, xmm1
/*1401ab694*/  pmovmskb r9d, xmm3
/*1401ab699*/  test r9d, r9d
/*1401ab69c*/  jnz short loc_1401AB6AB
/*1401ab69e*/  add rdx, r8
/*1401ab6a1*/  add rdx, 10h
/*1401ab6a5*/  add r8, 10h
/*1401ab6a9*/  jmp short loc_1401AB638
loc_1401AB6AB: /*1401ab6ab*/ mov dword ptr [rbp+3640h+var_A0], r14d
/*1401ab6b2*/  mov [rbp+3640h+Address], rbx
/*1401ab6b9*/  lea rcx, [rdi+18h]
/*1401ab6bd*/  movdqu xmm0, cs:xmmword_1416C83A8
/*1401ab6c5*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401AB6CD: /*1401ab6cd*/ lea r9, unk_1416C83B8
/*1401ab6d4*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ab6db*/  mov r8d, 1
/*1401ab6e1*/  call sub_140470440
/*1401ab6e6*/  nop
/*1401ab6e7*/  test rax, rax
/*1401ab6ea*/  jz short loc_1401AB72C
/*1401ab6ec*/  mov [rbp+3640h+var_D0], rax
/*1401ab6f3*/  mov [rbp+3640h+var_D8], rdx
/*1401ab6fa*/  mov rax, [rdx]
/*1401ab6fd*/  test rax, rax
/*1401ab700*/  jz short loc_1401AB70C
loc_1401AB702: /*1401ab702*/ mov rcx, [rbp+3640h+var_D0]
/*1401ab709*/  call rax
/*1401ab70b*/  nop
loc_1401AB70C: /*1401ab70c*/ mov rax, [rbp+3640h+var_D8]
/*1401ab713*/  mov rdx, [rax+8]
/*1401ab717*/  test rdx, rdx
/*1401ab71a*/  mov rcx, [rbp+3640h+var_D0]
/*1401ab721*/  jz short loc_1401AB72C
/*1401ab723*/  mov r8, [rax+10h]
/*1401ab727*/  call sub_140001660
loc_1401AB72C: /*1401ab72c*/ cmp byte ptr [rbp+3640h+var_A0], 0
/*1401ab733*/  jnz short loc_1401AB744
/*1401ab735*/  mov rax, [rsi]
/*1401ab738*/  shl rax, 1
/*1401ab73b*/  test rax, rax
/*1401ab73e*/  jnz loc_1401AD755
loc_1401AB744: /*1401ab744*/ xor eax, eax
/*1401ab746*/  mov rbx, [rbp+3640h+Address]
/*1401ab74d*/  jmp short loc_1401AB765
loc_1401AB74F: /*1401ab74f*/ test r14b, r14b
/*1401ab752*/  jnz short loc_1401AB763
/*1401ab754*/  mov rax, [rsi]
/*1401ab757*/  shl rax, 1
/*1401ab75a*/  test rax, rax
/*1401ab75d*/  jnz loc_1401AD7A8
loc_1401AB763: /*1401ab763*/ xor eax, eax
loc_1401AB765: /*1401ab765*/ xchg al, [rbx]
/*1401ab767*/  cmp al, 2
/*1401ab769*/  jz loc_1401AD372
loc_1401AB76F: /*1401ab76f*/ mov rax, qword ptr [rbp+3640h+var_2F0]
/*1401ab776*/  lock dec qword ptr [rax]
/*1401ab77a*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab780*/  jnz short loc_1401AB796
/*1401ab782*/  mov [rbp+3640h+var_69], sil
loc_1401AB789: /*1401ab789*/ lea rcx, [rbp+3640h+var_2F0]
/*1401ab790*/  call sub_1412154B0
/*1401ab795*/  nop
loc_1401AB796: /*1401ab796*/ mov [rbp+3640h+var_69], sil
/*1401ab79d*/  call sub_1405820A0
/*1401ab7a2*/  nop
/*1401ab7a3*/  mov rcx, qword ptr [rbp+3640h+var_1C88+8]
/*1401ab7aa*/  mov rdx, [rcx+1398h]
/*1401ab7b1*/  lock inc qword ptr [rdx]
/*1401ab7b5*/  jle loc_1401ADC0A
/*1401ab7bb*/  mov rdi, [rcx+1398h]
/*1401ab7c2*/  mov qword ptr [rbp+3640h+var_4A0], rdi
/*1401ab7c9*/  lea rbx, [rdi+10h]
/*1401ab7cd*/  mov qword ptr [rbp+3640h+var_2F0], rax
/*1401ab7d4*/  mov cl, 1
/*1401ab7d6*/  xor eax, eax
/*1401ab7d8*/  lock cmpxchg [rdi+10h], cl
/*1401ab7dd*/  mov rsi, cs:off_141EC90B8
/*1401ab7e4*/  jnz loc_1401AD380
loc_1401AB7EA: /*1401ab7ea*/ mov rax, [rsi]
/*1401ab7ed*/  shl rax, 1
/*1401ab7f0*/  test rax, rax
/*1401ab7f3*/  jnz loc_1401AD395
/*1401ab7f9*/  xor r14d, r14d
/*1401ab7fc*/  movzx eax, byte ptr [rdi+11h]
/*1401ab800*/  test al, al
/*1401ab802*/  jnz loc_1401AD3B5
loc_1401AB808: /*1401ab808*/ cmp qword ptr [rdi+30h], 0
/*1401ab80d*/  jz loc_1401AB8AF
/*1401ab813*/  mov rax, [rdi+18h]
/*1401ab817*/  mov rcx, [rdi+20h]
/*1401ab81b*/  mov rdx, 0F45A6C641228B0DDh
/*1401ab825*/  xor r8d, r8d
/*1401ab828*/  movdqa xmm0, cs:xmmword_1416C61C0
/*1401ab830*/  pcmpeqd xmm1, xmm1
/*1401ab834*/  movdqa xmm2, cs:xmmword_1416C61D0
loc_1401AB83C: /*1401ab83c*/ and rdx, rcx
/*1401ab83f*/  movdqu xmm3, xmmword ptr [rax+rdx]
/*1401ab844*/  movdqa xmm4, xmm3
/*1401ab848*/  pcmpeqb xmm4, xmm0
/*1401ab84c*/  pmovmskb r9d, xmm4
/*1401ab851*/  test r9d, r9d
/*1401ab854*/  jz short loc_1401AB894
loc_1401AB856: /*1401ab856*/ tzcnt r10d, r9d
/*1401ab85b*/  add r10, rdx
/*1401ab85e*/  and r10, rcx
/*1401ab861*/  shl r10, 5
/*1401ab865*/  mov r11, rax
/*1401ab868*/  sub r11, r10
/*1401ab86b*/  movdqu xmm4, xmmword ptr [r11-20h]
/*1401ab871*/  pcmpeqb xmm4, xmm2
/*1401ab875*/  pmovmskb r10d, xmm4
/*1401ab87a*/  cmp r10d, 0FFFFh
/*1401ab881*/  jz loc_1401AB991
/*1401ab887*/  lea r10d, [r9-1]
/*1401ab88b*/  and r10w, r9w
/*1401ab88f*/  mov r9d, r10d
/*1401ab892*/  jnz short loc_1401AB856
loc_1401AB894: /*1401ab894*/ pcmpeqb xmm3, xmm1
/*1401ab898*/  pmovmskb r9d, xmm3
/*1401ab89d*/  test r9d, r9d
/*1401ab8a0*/  jnz short loc_1401AB8AF
/*1401ab8a2*/  add rdx, r8
/*1401ab8a5*/  add rdx, 10h
/*1401ab8a9*/  add r8, 10h
/*1401ab8ad*/  jmp short loc_1401AB83C
loc_1401AB8AF: /*1401ab8af*/ mov dword ptr [rbp+3640h+var_A0], r14d
/*1401ab8b6*/  mov [rbp+3640h+Address], rbx
/*1401ab8bd*/  mov rbx, qword ptr [rbp+3640h+var_2F0]
/*1401ab8c4*/  mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401ab8cb*/  call nullsub_1
/*1401ab8d0*/  mov ecx, 8
/*1401ab8d5*/  mov edx, 8
/*1401ab8da*/  call sub_140001650
/*1401ab8df*/  test rax, rax
/*1401ab8e2*/  jz loc_1401AD409
/*1401ab8e8*/  lea rcx, [rdi+18h]
/*1401ab8ec*/  mov [rax], rbx
/*1401ab8ef*/  movdqu xmm0, cs:xmmword_1416C83D8
/*1401ab8f7*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401AB8FF: /*1401ab8ff*/ lea r9, off_1416C83E8
/*1401ab906*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ab90d*/  mov r8, rax
/*1401ab910*/  call sub_140470440
/*1401ab915*/  nop
/*1401ab916*/  test rax, rax
/*1401ab919*/  jz short loc_1401AB95B
/*1401ab91b*/  mov [rbp+3640h+var_D0], rax
/*1401ab922*/  mov [rbp+3640h+var_D8], rdx
/*1401ab929*/  mov rax, [rdx]
/*1401ab92c*/  test rax, rax
/*1401ab92f*/  jz short loc_1401AB93B
loc_1401AB931: /*1401ab931*/ mov rcx, [rbp+3640h+var_D0]
/*1401ab938*/  call rax
/*1401ab93a*/  nop
loc_1401AB93B: /*1401ab93b*/ mov rax, [rbp+3640h+var_D8]
/*1401ab942*/  mov rdx, [rax+8]
/*1401ab946*/  test rdx, rdx
/*1401ab949*/  mov rcx, [rbp+3640h+var_D0]
/*1401ab950*/  jz short loc_1401AB95B
/*1401ab952*/  mov r8, [rax+10h]
/*1401ab956*/  call sub_140001660
loc_1401AB95B: /*1401ab95b*/ cmp byte ptr [rbp+3640h+var_A0], 0
/*1401ab962*/  jnz short loc_1401AB973
/*1401ab964*/  mov rax, [rsi]
/*1401ab967*/  shl rax, 1
/*1401ab96a*/  test rax, rax
/*1401ab96d*/  jnz loc_1401AD76C
loc_1401AB973: /*1401ab973*/ xor eax, eax
/*1401ab975*/  mov rcx, [rbp+3640h+Address]; Address
/*1401ab97c*/  xchg al, [rcx]
/*1401ab97e*/  cmp al, 2
/*1401ab980*/  jnz short loc_1401AB9CB
/*1401ab982*/  mov [rbp+3640h+var_91], 0
loc_1401AB989: /*1401ab989*/ call WakeByAddressSingle
/*1401ab98e*/  nop
/*1401ab98f*/  jmp short loc_1401AB9CB
loc_1401AB991: /*1401ab991*/ test r14b, r14b
/*1401ab994*/  jnz short loc_1401AB9A5
/*1401ab996*/  mov rax, [rsi]
/*1401ab999*/  shl rax, 1
/*1401ab99c*/  test rax, rax
/*1401ab99f*/  jnz loc_1401AD7BF
loc_1401AB9A5: /*1401ab9a5*/ xor eax, eax
/*1401ab9a7*/  xchg al, [rbx]
/*1401ab9a9*/  cmp al, 2
/*1401ab9ab*/  jz loc_1401AD6C0
loc_1401AB9B1: /*1401ab9b1*/ mov rax, qword ptr [rbp+3640h+var_2F0]
/*1401ab9b8*/  lock dec qword ptr [rax]
/*1401ab9bc*/  jnz short loc_1401AB9CB
loc_1401AB9BE: /*1401ab9be*/ lea rcx, [rbp+3640h+var_2F0]
/*1401ab9c5*/  call sub_140574BF0
/*1401ab9ca*/  nop
loc_1401AB9CB: /*1401ab9cb*/ mov rax, qword ptr [rbp+3640h+var_4A0]
/*1401ab9d2*/  lock dec qword ptr [rax]
/*1401ab9d6*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401ab9dc*/  jnz short loc_1401AB9F2
/*1401ab9de*/  mov [rbp+3640h+var_69], sil
loc_1401AB9E5: /*1401ab9e5*/ lea rcx, [rbp+3640h+var_4A0]
/*1401ab9ec*/  call sub_1412154B0
/*1401ab9f1*/  nop
loc_1401AB9F2: /*1401ab9f2*/ mov [rbp+3640h+var_69], sil
/*1401ab9f9*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aba00*/  call sub_1408C2520
/*1401aba05*/  nop
/*1401aba06*/  mov [rbp+3640h+var_69], sil
/*1401aba0d*/  lea rcx, [rbp+3640h+var_2F0]
/*1401aba14*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aba1b*/  lea r8, [rbp+3640h+var_32A0]
/*1401aba22*/  call sub_140004D60
/*1401aba27*/  nop
/*1401aba28*/  mov r15, qword ptr [rbp+3640h+var_2F0]
/*1401aba2f*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401aba33*/  jnz loc_1401ADB20
/*1401aba39*/  mov rdi, qword ptr [rbp+3640h+var_1C88+8]
/*1401aba40*/  cmp qword ptr [rdi+408h], 0FFFFFFFFFFFFFFFFh
/*1401aba48*/  jz short loc_1401ABA95
/*1401aba4a*/  cmp qword ptr [rdi+428h], 0FFFFFFFFFFFFFFFFh
/*1401aba52*/  mov esi, dword ptr [rbp+3640h+var_78]
/*1401aba58*/  jz short loc_1401ABAA0
/*1401aba5a*/  lea rdx, [rdi+428h]
/*1401aba61*/  mov [rbp+3640h+var_69], sil
/*1401aba68*/  lea rcx, [rbp+3640h+var_32A0]
/*1401aba6f*/  call sub_14149C500
/*1401aba74*/  nop
/*1401aba75*/  mov rax, qword ptr [rbp+3640h+var_3290]
/*1401aba7c*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401aba83*/  movdqu xmm0, [rbp+3640h+var_32A0]
/*1401aba8b*/  movdqa [rbp+3640h+var_2F0], xmm0
/*1401aba93*/  jmp short loc_1401ABAE0
loc_1401ABA95: /*1401aba95*/ mov esi, dword ptr [rbp+3640h+var_78]
/*1401aba9b*/  jmp loc_1401AC0B7
loc_1401ABAA0: /*1401abaa0*/ call nullsub_1
/*1401abaa5*/  mov ecx, 4
/*1401abaaa*/  mov edx, 1
/*1401abaaf*/  call sub_140001650
/*1401abab4*/  test rax, rax
/*1401abab7*/  jz loc_1401ADBE1
/*1401ababd*/  mov dword ptr [rax], 6E69616Dh
/*1401abac3*/  mov qword ptr [rbp+3640h+var_2F0], 4
/*1401abace*/  mov qword ptr [rbp+3640h+var_2F0+8], rax
/*1401abad5*/  mov qword ptr [rbp+3640h+var_2E0], 4
loc_1401ABAE0: /*1401abae0*/ mov [rbp+3640h+var_69], sil
/*1401abae7*/  lea rcx, [rbp+3640h+var_32A0]
/*1401abaee*/  lea rdx, [rbp+3640h+var_2F0]
/*1401abaf5*/  call sub_1406C3A30
/*1401abafa*/  nop
loc_1401ABAFB: /*1401abafb*/ movzx eax, byte ptr [rdi+470h]
/*1401abb02*/  mov byte ptr [rbp+3640h+var_3220], al
/*1401abb08*/  lea rcx, [rbp+3640h+var_5B0]
/*1401abb0f*/  lea rdx, [rbp+3640h+var_32A0]
/*1401abb16*/  mov r8d, 81h
/*1401abb1c*/  call sub_141684120
/*1401abb21*/  mov eax, dword ptr [rbp+3640h+var_3220+2]
/*1401abb27*/  mov dword ptr [rbp+3640h+var_110], eax
/*1401abb2d*/  movzx eax, word ptr [rbp+3640h+var_3220+6]
/*1401abb34*/  mov word ptr [rbp+3640h+var_110+4], ax
/*1401abb3b*/  mov rax, qword ptr [rbp+3640h+var_3218]
/*1401abb42*/  mov r14, qword ptr [rbp+3640h+var_3218+8]
/*1401abb49*/  mov rbx, [rbp+3640h+var_3208]
/*1401abb50*/  mov r13, [rbp+3640h+var_3200]
/*1401abb57*/  movzx r15d, byte ptr [rdi+472h]
/*1401abb5f*/  mov rsi, qword ptr [rbp+3640h+var_1C88+8]
/*1401abb66*/  mov r12, [rsi+1288h]
/*1401abb6d*/  cmp r12, 0FFFFFFFFFFFFFFFEh
/*1401abb71*/  jz loc_1401ABCFE
/*1401abb77*/  mov [rbp+3640h+Address], rax
/*1401abb7e*/  lea rcx, [rbp+3640h+var_32A0]
/*1401abb85*/  lea rdx, [rbp+3640h+var_5B0]
/*1401abb8c*/  mov r8d, 81h
/*1401abb92*/  call sub_141684120
/*1401abb97*/  mov byte ptr [rbp+3640h+var_3220+1], r15b
/*1401abb9e*/  mov eax, dword ptr [rbp+3640h+var_110]
/*1401abba4*/  mov dword ptr [rbp+3640h+var_3220+2], eax
/*1401abbaa*/  movzx eax, word ptr [rbp+3640h+var_110+4]
/*1401abbb1*/  mov word ptr [rbp+3640h+var_3220+6], ax
/*1401abbb8*/  mov rax, [rbp+3640h+Address]
/*1401abbbf*/  mov qword ptr [rbp+3640h+var_3218], rax
/*1401abbc6*/  mov qword ptr [rbp+3640h+var_3218+8], r14
/*1401abbcd*/  mov [rbp+3640h+var_3208], rbx
/*1401abbd4*/  mov [rbp+3640h+var_3200], r13
/*1401abbdb*/  mov r14, [rsi+1290h]
/*1401abbe2*/  mov rbx, [rsi+1298h]
/*1401abbe9*/  cmp r12, 0FFFFFFFFFFFFFFFFh
/*1401abbed*/  jz short loc_1401ABC0F
/*1401abbef*/  test rbx, rbx
/*1401abbf2*/  jns short loc_1401ABC2A
/*1401abbf4*/  xor r15d, r15d
loc_1401ABBF7: /*1401abbf7*/ mov [rbp+3640h+var_C1], 1
loc_1401ABBFE: /*1401abbfe*/ mov rcx, r15
/*1401abc01*/  mov rdx, rbx
/*1401abc04*/  call sub_1416C2D4B
loc_1401ABC0A: /*1401abc0a*/ jmp loc_1401ADC0A
loc_1401ABC0F: /*1401abc0f*/ mov qword ptr [rbp+3640h+var_4A0+8], r14
/*1401abc16*/  mov qword ptr [rbp+3640h+var_490], rbx
/*1401abc1d*/  mov qword ptr [rbp+3640h+var_4A0], 0FFFFFFFFFFFFFFFFh
/*1401abc28*/  jmp short loc_1401ABC77
loc_1401ABC2A: /*1401abc2a*/ jz short loc_1401ABC5C
/*1401abc2c*/  call nullsub_1
/*1401abc31*/  mov r15d, 1
/*1401abc37*/  mov edx, 1
/*1401abc3c*/  mov rcx, rbx
/*1401abc3f*/  call sub_140001650
/*1401abc44*/  test rax, rax
/*1401abc47*/  jz short loc_1401ABBF7
/*1401abc49*/  mov r12, rax
/*1401abc4c*/  mov rcx, rax
/*1401abc4f*/  mov rdx, r14
/*1401abc52*/  mov r8, rbx
/*1401abc55*/  call sub_141684120
/*1401abc5a*/  jmp short loc_1401ABC62
loc_1401ABC5C: /*1401abc5c*/ mov r12d, 1
loc_1401ABC62: /*1401abc62*/ mov qword ptr [rbp+3640h+var_4A0], rbx
/*1401abc69*/  mov qword ptr [rbp+3640h+var_4A0+8], r12
/*1401abc70*/  mov qword ptr [rbp+3640h+var_490], rbx
loc_1401ABC77: /*1401abc77*/ mov rax, [rsi+12A0h]
/*1401abc7e*/  mov qword ptr [rbp+3640h+var_490+8], rax
/*1401abc85*/  mov [rbp+3640h+var_C1], 0
loc_1401ABC8C: /*1401abc8c*/ lea rcx, [rbp+3640h+var_2F0]
/*1401abc93*/  lea rdx, [rbp+3640h+var_32A0]
/*1401abc9a*/  lea r8, [rbp+3640h+var_4A0]
/*1401abca1*/  call sub_1407188F0
/*1401abca6*/  nop
loc_1401ABCA7: /*1401abca7*/ lea rcx, [rbp+3640h+var_5B0]
/*1401abcae*/  lea rdx, [rbp+3640h+var_2F0]
/*1401abcb5*/  mov r8d, 81h
/*1401abcbb*/  call sub_141684120
/*1401abcc0*/  movzx r15d, [rbp+3640h+var_26F]
/*1401abcc8*/  mov eax, [rbp+3640h+var_26E]
/*1401abcce*/  mov dword ptr [rbp+3640h+var_110], eax
/*1401abcd4*/  movzx eax, [rbp+3640h+var_26A]
/*1401abcdb*/  mov word ptr [rbp+3640h+var_110+4], ax
/*1401abce2*/  mov rax, [rbp+3640h+var_268]
/*1401abce9*/  mov r14, [rbp+3640h+var_260]
/*1401abcf0*/  mov rbx, [rbp+3640h+var_258]
/*1401abcf7*/  mov r13, [rbp+3640h+var_250]
loc_1401ABCFE: /*1401abcfe*/ cmp qword ptr [rdi+440h], 0FFFFFFFFFFFFFFFFh
/*1401abd06*/  jz loc_1401ABDE8
/*1401abd0c*/  mov rsi, rbx
/*1401abd0f*/  mov r12, r14
/*1401abd12*/  lea r14, [rbp+3640h+var_32A0]
/*1401abd19*/  lea rdx, [rbp+3640h+var_5B0]
/*1401abd20*/  mov r8d, 81h
/*1401abd26*/  mov rbx, rax
/*1401abd29*/  mov rcx, r14
/*1401abd2c*/  call sub_141684120
/*1401abd31*/  mov byte ptr [rbp+3640h+var_3220+1], r15b
/*1401abd38*/  mov eax, dword ptr [rbp+3640h+var_110]
/*1401abd3e*/  mov dword ptr [rbp+3640h+var_3220+2], eax
/*1401abd44*/  movzx eax, word ptr [rbp+3640h+var_110+4]
/*1401abd4b*/  mov word ptr [rbp+3640h+var_3220+6], ax
/*1401abd52*/  mov qword ptr [rbp+3640h+var_3218], rbx
/*1401abd59*/  mov qword ptr [rbp+3640h+var_3218+8], r12
/*1401abd60*/  mov [rbp+3640h+var_3208], rsi
/*1401abd67*/  mov [rbp+3640h+var_3200], r13
/*1401abd6e*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401abd74*/  mov [rbp+3640h+var_69], al
loc_1401ABD7A: /*1401abd7a*/ lea rcx, [rbp+3640h+var_2F0]
/*1401abd81*/  mov rdx, r14
/*1401abd84*/  lea r8, [rdi+440h]
/*1401abd8b*/  call sub_1406C3860
/*1401abd90*/  nop
loc_1401ABD91: /*1401abd91*/ lea rcx, [rbp+3640h+var_5B0]
/*1401abd98*/  lea rdx, [rbp+3640h+var_2F0]
/*1401abd9f*/  mov r8d, 81h
/*1401abda5*/  call sub_141684120
/*1401abdaa*/  movzx r15d, [rbp+3640h+var_26F]
/*1401abdb2*/  mov eax, [rbp+3640h+var_26E]
/*1401abdb8*/  mov dword ptr [rbp+3640h+var_110], eax
/*1401abdbe*/  movzx eax, [rbp+3640h+var_26A]
/*1401abdc5*/  mov word ptr [rbp+3640h+var_110+4], ax
/*1401abdcc*/  mov rax, [rbp+3640h+var_268]
/*1401abdd3*/  mov r14, [rbp+3640h+var_260]
/*1401abdda*/  mov rbx, [rbp+3640h+var_258]
/*1401abde1*/  mov r13, [rbp+3640h+var_250]
loc_1401ABDE8: /*1401abde8*/ mov [rbp+3640h+Address], rax
/*1401abdef*/  cmp qword ptr [rdi+458h], 0FFFFFFFFFFFFFFFFh
/*1401abdf7*/  jz loc_1401ABF1D
/*1401abdfd*/  mov [rbp+3640h+var_D8], r14
/*1401abe04*/  mov [rbp+3640h+var_D0], rbx
/*1401abe0b*/  mov [rbp+3640h+var_A0], r13
/*1401abe12*/  add rdi, 458h
/*1401abe19*/  lea rcx, [rbp+3640h+var_4A0]
/*1401abe20*/  lea rbx, [rbp+3640h+var_5B0]
/*1401abe27*/  mov r8d, 81h
/*1401abe2d*/  mov rdx, rbx
/*1401abe30*/  call sub_141684120
/*1401abe35*/  mov eax, dword ptr [rbp+3640h+var_110]
/*1401abe3b*/  mov dword ptr [rbp+3640h+var_150], eax
/*1401abe41*/  movzx eax, word ptr [rbp+3640h+var_110+4]
/*1401abe48*/  mov word ptr [rbp+3640h+var_150+4], ax
/*1401abe4f*/  lea r14, [rbp+3640h+var_32A0]
/*1401abe56*/  mov r8d, 81h
/*1401abe5c*/  mov rcx, r14
/*1401abe5f*/  mov rdx, rbx
/*1401abe62*/  call sub_141684120
/*1401abe67*/  mov byte ptr [rbp+3640h+var_3220+1], r15b
/*1401abe6e*/  mov eax, dword ptr [rbp+3640h+var_110]
/*1401abe74*/  mov dword ptr [rbp+3640h+var_3220+2], eax
/*1401abe7a*/  movzx eax, word ptr [rbp+3640h+var_110+4]
/*1401abe81*/  mov word ptr [rbp+3640h+var_3220+6], ax
loc_1401ABE88: /*1401abe88*/ lea rcx, [rbp+3640h+var_2F0]
/*1401abe8f*/  mov rdx, r14
/*1401abe92*/  mov r8, rdi
/*1401abe95*/  call sub_1401C9020
/*1401abe9a*/  nop
loc_1401ABE9B: /*1401abe9b*/ lea rdi, [rbp+3640h+var_4A0]
/*1401abea2*/  lea rdx, [rbp+3640h+var_2F0]
/*1401abea9*/  mov r8d, 81h
/*1401abeaf*/  mov rcx, rdi
/*1401abeb2*/  call sub_141684120
/*1401abeb7*/  movzx r15d, [rbp+3640h+var_26F]
/*1401abebf*/  mov eax, [rbp+3640h+var_26E]
/*1401abec5*/  mov dword ptr [rbp+3640h+var_150], eax
/*1401abecb*/  movzx eax, [rbp+3640h+var_26A]
/*1401abed2*/  mov word ptr [rbp+3640h+var_150+4], ax
/*1401abed9*/  lea rcx, [rbp+3640h+var_5B0]
/*1401abee0*/  mov r8d, 81h
/*1401abee6*/  mov rdx, rdi
/*1401abee9*/  call sub_141684120
/*1401abeee*/  mov eax, dword ptr [rbp+3640h+var_150]
/*1401abef4*/  mov dword ptr [rbp+3640h+var_110], eax
/*1401abefa*/  movzx eax, word ptr [rbp+3640h+var_150+4]
/*1401abf01*/  mov word ptr [rbp+3640h+var_110+4], ax
/*1401abf08*/  mov r13, [rbp+3640h+var_A0]
/*1401abf0f*/  mov rbx, [rbp+3640h+var_D0]
/*1401abf16*/  mov r14, [rbp+3640h+var_D8]
loc_1401ABF1D: /*1401abf1d*/ lea rdi, [rbp+3640h+var_4A0]
/*1401abf24*/  lea rdx, [rbp+3640h+var_5B0]
/*1401abf2b*/  mov r8d, 81h
/*1401abf31*/  mov rcx, rdi
/*1401abf34*/  call sub_141684120
/*1401abf39*/  mov eax, dword ptr [rbp+3640h+var_110]
/*1401abf3f*/  mov dword ptr [rbp+3640h+var_420+2], eax
/*1401abf45*/  movzx eax, word ptr [rbp+3640h+var_110+4]
/*1401abf4c*/  mov word ptr [rbp+3640h+var_420+6], ax
/*1401abf53*/  mov byte ptr [rbp+3640h+var_420+1], r15b
/*1401abf5a*/  mov rax, [rbp+3640h+Address]
/*1401abf61*/  mov qword ptr [rbp+3640h+var_420+8], rax
/*1401abf68*/  mov qword ptr [rbp+3640h+var_410], r14
/*1401abf6f*/  mov qword ptr [rbp+3640h+var_410+8], rbx
/*1401abf76*/  mov qword ptr [rbp+3640h+var_400], r13
/*1401abf7d*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401abf83*/  mov [rbp+3640h+var_69], al
loc_1401ABF89: /*1401abf89*/ lea rcx, [rbp+3640h+var_32A0]
/*1401abf90*/  lea r8, [rbp+3640h+var_1DE0]
/*1401abf97*/  mov rdx, rdi
/*1401abf9a*/  call sub_1407172B0
/*1401abf9f*/  nop
loc_1401ABFA0: /*1401abfa0*/ mov rsi, qword ptr [rbp+3640h+var_32A0]
/*1401abfa7*/  mov r15, qword ptr [rbp+3640h+var_32A0+8]
/*1401abfae*/  mov r14, qword ptr [rbp+3640h+var_3290]
/*1401abfb5*/  movups xmm0, [rbp+3640h+var_3290+8]
/*1401abfbc*/  movaps [rbp+3640h+var_150], xmm0
/*1401abfc3*/  movups xmm0, [rbp+3640h+var_3280+8]
/*1401abfca*/  movaps [rbp+3640h+var_140], xmm0
/*1401abfd1*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*1401abfd5*/  jz loc_1401ADBA3
/*1401abfdb*/  lea rdx, [rbp+3640h+var_3270+8]
/*1401abfe2*/  lea rcx, [rbp+3640h+var_2C0+8]
/*1401abfe9*/  mov r8d, 98h
/*1401abfef*/  call sub_141684120
/*1401abff4*/  movdqa xmm0, [rbp+3640h+var_150]
/*1401abffc*/  movdqa xmm1, [rbp+3640h+var_140]
/*1401ac004*/  movdqa [rbp+3640h+var_320], xmm1
/*1401ac00c*/  movdqa [rbp+3640h+var_5C0], xmm1
/*1401ac014*/  movdqa [rbp+3640h+var_5D0], xmm0
/*1401ac01c*/  mov qword ptr [rbp+3640h+var_2F0+8], r15
/*1401ac023*/  mov qword ptr [rbp+3640h+var_2E0], r14
/*1401ac02a*/  movdqu [rbp+3640h+var_2E0+8], xmm0
/*1401ac032*/  movdqu [rbp+3640h+var_2D0+8], xmm1
/*1401ac03a*/  mov qword ptr [rbp+3640h+var_2F0], rsi
/*1401ac041*/  mov rdx, [rbp+3640h+var_258]
/*1401ac048*/  test rdx, rdx
/*1401ac04b*/  jz short loc_1401AC05F
/*1401ac04d*/  mov rcx, [rbp+3640h+var_250]
/*1401ac054*/  mov r8d, 1
/*1401ac05a*/  call sub_140001660
loc_1401AC05F: /*1401ac05f*/ mov rdx, [rbp+3640h+var_240]
/*1401ac066*/  test rdx, rdx
/*1401ac069*/  jz short loc_1401AC07D
/*1401ac06b*/  mov rcx, [rbp+3640h+var_238]
/*1401ac072*/  mov r8d, 1
/*1401ac078*/  call sub_140001660
loc_1401AC07D: /*1401ac07d*/ mov rax, [rbp+3640h+var_228]
/*1401ac084*/  dec qword ptr [rax]
/*1401ac087*/  jnz short loc_1401AC096
loc_1401AC089: /*1401ac089*/ lea rcx, [rbp+3640h+var_228]
/*1401ac090*/  call sub_1407190E0
/*1401ac095*/  nop
loc_1401AC096: /*1401ac096*/ mov esi, dword ptr [rbp+3640h+var_78]
/*1401ac09c*/  mov [rbp+3640h+var_69], sil
loc_1401AC0A3: /*1401ac0a3*/ lea rcx, [rbp+3640h+var_2F0]
/*1401ac0aa*/  call sub_140014150
/*1401ac0af*/  nop
/*1401ac0b0*/  mov rdi, qword ptr [rbp+3640h+var_1C88+8]
loc_1401AC0B7: /*1401ac0b7*/ add rdi, 10h
/*1401ac0bb*/  mov [rbp+3640h+var_69], sil
/*1401ac0c2*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ac0c9*/  lea r8, [rbp+3640h+var_1DE0]
/*1401ac0d0*/  mov rdx, rdi
/*1401ac0d3*/  call sub_14065D580
/*1401ac0d8*/  nop
loc_1401AC0D9: /*1401ac0d9*/ mov r15, qword ptr [rbp+3640h+var_32A0]
/*1401ac0e0*/  cmp r15, 0FFFFFFFFFFFFFFFFh
/*1401ac0e4*/  jnz loc_1401ADB4A
/*1401ac0ea*/  mov rbx, qword ptr [rbp+3640h+var_1DE0]
/*1401ac0f1*/  mov r15, qword ptr [rbp+3640h+var_1DE0+8]
/*1401ac0f8*/  mov r14, qword ptr [rbp+3640h+var_1DD0]
/*1401ac0ff*/  movups xmm0, [rbp+3640h+var_1DD0+8]
/*1401ac106*/  movaps [rbp+3640h+var_4A0], xmm0
/*1401ac10d*/  movdqu xmm0, [rbp+3640h+var_1DC0+8]
/*1401ac115*/  movdqa [rbp+3640h+var_490], xmm0
/*1401ac11d*/  lea rdx, [rbp+3640h+var_1DA8]
/*1401ac124*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ac12b*/  mov r8d, 148h
/*1401ac131*/  call sub_141684120
/*1401ac136*/  cmp rbx, 0FFFFFFFFFFFFFFFFh
/*1401ac13a*/  jz loc_1401ADAC1
/*1401ac140*/  mov qword ptr [rbp+3640h+var_2F0], rbx
/*1401ac147*/  mov qword ptr [rbp+3640h+var_2F0+8], r15
/*1401ac14e*/  mov qword ptr [rbp+3640h+var_2E0], r14
/*1401ac155*/  movdqa xmm0, [rbp+3640h+var_4A0]
/*1401ac15d*/  movdqa xmm1, [rbp+3640h+var_490]
/*1401ac165*/  movdqu [rbp+3640h+var_2E0+8], xmm0
/*1401ac16d*/  movdqu [rbp+3640h+var_2D0+8], xmm1
/*1401ac175*/  lea rcx, [rbp+3640h+var_2C0+8]
/*1401ac17c*/  lea rdx, [rbp+3640h+var_32A0]
/*1401ac183*/  mov r8d, 148h
/*1401ac189*/  call sub_141684120
/*1401ac18e*/  mov rax, qword ptr [rbp+3640h+var_2E0+8]
/*1401ac195*/  lock inc qword ptr [rax]
/*1401ac199*/  jle loc_1401ADC0A
/*1401ac19f*/  mov rcx, qword ptr [rbp+3640h+var_2D0]
/*1401ac1a6*/  test rbx, rbx
/*1401ac1a9*/  jz short loc_1401AC1C4
/*1401ac1ab*/  cmp rbx, 1
/*1401ac1af*/  jnz short loc_1401AC1D7
/*1401ac1b1*/  lock inc qword ptr [r15+180h]
/*1401ac1b9*/  jg short loc_1401AC1E2
/*1401ac1bb*/  mov ecx, 7
/*1401ac1c0*/  int 29h; Win8: RtlFailFast(ecx)
/*1401ac1c2*/  ud2
loc_1401AC1C4: /*1401ac1c4*/ lock inc qword ptr [r15+200h]
/*1401ac1cc*/  jg short loc_1401AC1E2
/*1401ac1ce*/  mov ecx, 7
/*1401ac1d3*/  int 29h; Win8: RtlFailFast(ecx)
/*1401ac1d5*/  ud2
loc_1401AC1D7: /*1401ac1d7*/ lock inc qword ptr [r15+70h]
/*1401ac1dc*/  jle loc_1401ADC1E
loc_1401AC1E2: /*1401ac1e2*/ mov r11d, [rbp+3640h+var_2B0]
/*1401ac1e9*/  mov r9, qword ptr [rbp+3640h+var_2D0+8]
/*1401ac1f0*/  mov r8, qword ptr [rbp+3640h+var_2C0+8]
/*1401ac1f7*/  lock inc qword ptr [r9]
/*1401ac1fb*/  jle loc_1401ADC0A
/*1401ac201*/  mov r10, qword ptr [rbp+3640h+var_2C0]
/*1401ac208*/  inc qword ptr [r10]
/*1401ac20b*/  jz loc_1401ADC0A
/*1401ac211*/  mov rdx, [rbp+3640h+var_2A8]
/*1401ac218*/  lock inc qword ptr [rdx]
/*1401ac21c*/  jle loc_1401ADC0A
/*1401ac222*/  mov rsi, [rbp+3640h+var_2A0]
/*1401ac229*/  lock inc qword ptr [rsi]
/*1401ac22d*/  jle loc_1401ADC0A
/*1401ac233*/  mov r12, [rbp+3640h+var_298]
/*1401ac23a*/  lock inc qword ptr [r12]
/*1401ac23f*/  jle loc_1401ADC0A
/*1401ac245*/  mov r13, [rbp+3640h+var_290]
/*1401ac24c*/  lock inc qword ptr [r13+0]
/*1401ac251*/  jle loc_1401ADC0A
/*1401ac257*/  mov [rbp+3640h+var_78], r14
/*1401ac25e*/  mov rdi, [rbp+3640h+var_288]
/*1401ac265*/  lock inc qword ptr [rdi]
/*1401ac269*/  jle loc_1401ADC0A
/*1401ac26f*/  mov [rbp+3640h+var_A0], rsi
/*1401ac276*/  mov [rbp+3640h+Address], rdx
/*1401ac27d*/  mov r14, [rbp+3640h+var_280]
/*1401ac284*/  lock inc qword ptr [r14]
/*1401ac288*/  jle loc_1401ADC0A
/*1401ac28e*/  mov dword ptr [rbp+3640h+var_E8], r11d
/*1401ac295*/  mov r11, rcx
/*1401ac298*/  mov rcx, [rbp+3640h+var_278]
/*1401ac29f*/  lock inc qword ptr [rcx]
/*1401ac2a3*/  jle loc_1401ADC0A
/*1401ac2a9*/  mov rsi, r10
/*1401ac2ac*/  mov rdx, r8
/*1401ac2af*/  mov r10, rax
/*1401ac2b2*/  movzx eax, [rbp+3640h+var_270]
/*1401ac2b9*/  mov byte ptr [rbp+3640h+var_D0], al
/*1401ac2bf*/  mov r8, [rbp+3640h+var_268]
/*1401ac2c6*/  lock inc qword ptr [r8]
/*1401ac2ca*/  jle loc_1401ADC0A
/*1401ac2d0*/  mov rax, [rbp+3640h+var_260]
/*1401ac2d7*/  lock inc qword ptr [rax]
/*1401ac2db*/  jle loc_1401ADC0A
/*1401ac2e1*/  mov qword ptr [rbp+3640h+var_1DE0], rbx
/*1401ac2e8*/  mov qword ptr [rbp+3640h+var_1DE0+8], r15
/*1401ac2ef*/  mov rbx, [rbp+3640h+var_78]
/*1401ac2f6*/  mov qword ptr [rbp+3640h+var_1DD0], rbx
/*1401ac2fd*/  mov qword ptr [rbp+3640h+var_1DD0+8], r10
/*1401ac304*/  mov qword ptr [rbp+3640h+var_1DC0], r11
/*1401ac30b*/  mov qword ptr [rbp+3640h+var_1DC0+8], r9
/*1401ac312*/  mov [rbp+3640h+var_1DB0], rsi
/*1401ac319*/  mov [rbp+3640h+var_1DA8], rdx
/*1401ac320*/  mov edx, dword ptr [rbp+3640h+var_E8]
/*1401ac326*/  mov dword ptr [rbp+3640h+var_1DA0], edx
/*1401ac32c*/  mov rdx, [rbp+3640h+Address]
/*1401ac333*/  mov [rbp+3640h+var_1D98], rdx
/*1401ac33a*/  mov rdx, [rbp+3640h+var_A0]
/*1401ac341*/  mov [rbp+3640h+var_1D90], rdx
/*1401ac348*/  mov [rbp+3640h+var_1D88], r12
/*1401ac34f*/  mov [rbp+3640h+var_1D80], r13
/*1401ac356*/  mov [rbp+3640h+var_1D78], rdi
/*1401ac35d*/  mov [rbp+3640h+var_1D70], r14
/*1401ac364*/  mov [rbp+3640h+var_1D68], rcx
/*1401ac36b*/  movzx ecx, byte ptr [rbp+3640h+var_D0]
/*1401ac372*/  mov byte ptr [rbp+3640h+var_1D60], cl
/*1401ac378*/  mov [rbp+3640h+var_1D58], r8
/*1401ac37f*/  mov qword ptr [rbp+3640h+var_1D50], rax
/*1401ac386*/  mov [rbp+3640h+var_AA], 1
loc_1401AC38D: /*1401ac38d*/ lea rcx, [rbp+3640h+var_4A0]
/*1401ac394*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ac39b*/  call sub_1404422B0
/*1401ac3a0*/  nop
/*1401ac3a1*/  cmp qword ptr [rbp+3640h+var_4A0], 0FFFFFFFFFFFFFFFFh
/*1401ac3a9*/  lea rcx, sub_1400015F0
/*1401ac3b0*/  mov r14, cs:off_141EC90B8
/*1401ac3b7*/  jz loc_1401AC4D5
/*1401ac3bd*/  mov rax, qword ptr [rbp+3640h+var_490]
/*1401ac3c4*/  mov qword ptr [rbp+3640h+var_3290], rax
/*1401ac3cb*/  movdqu xmm0, [rbp+3640h+var_4A0]
/*1401ac3d3*/  movdqa [rbp+3640h+var_32A0], xmm0
/*1401ac3db*/  mov rax, cs:off_141EC8D80
/*1401ac3e2*/  mov rax, [rax]
/*1401ac3e5*/  cmp rax, 1
/*1401ac3e9*/  jbe loc_1401AC4AA
/*1401ac3ef*/  lea rax, [rbp+3640h+var_32A0]
/*1401ac3f6*/  mov qword ptr [rbp+3640h+var_7A0], rax
/*1401ac3fd*/  mov qword ptr [rbp+3640h+var_7A0+8], rcx
/*1401ac404*/  mov qword ptr [rbp+3640h+var_1DE0], 0
/*1401ac40f*/  lea rax, aCodexmateLib; "codexmate_lib"
/*1401ac416*/  mov qword ptr [rbp+3640h+var_1DE0+8], rax
/*1401ac41d*/  mov qword ptr [rbp+3640h+var_1DD0], 0Dh
/*1401ac428*/  mov qword ptr [rbp+3640h+var_1DD0+8], 0
/*1401ac433*/  lea rcx, aSrcLibRs_0; "src\\lib.rs"
/*1401ac43a*/  mov qword ptr [rbp+3640h+var_1DC0], rcx
/*1401ac441*/  mov qword ptr [rbp+3640h+var_1DC0+8], 0Ah
/*1401ac44c*/  mov [rbp+3640h+var_1DB0], 2
/*1401ac457*/  mov [rbp+3640h+var_1DA8], rax
/*1401ac45e*/  mov [rbp+3640h+var_1DA0], 0Dh
/*1401ac469*/  mov rax, 25700000001h
/*1401ac473*/  mov [rbp+3640h+var_1D98], rax
/*1401ac47a*/  lea rax, unk_1416CDD10
/*1401ac481*/  mov [rbp+3640h+var_1D90], rax
/*1401ac488*/  lea rax, [rbp+3640h+var_7A0]
/*1401ac48f*/  mov [rbp+3640h+var_1D88], rax
loc_1401AC496: /*1401ac496*/ lea rcx, [rbp+3640h+var_AB]
/*1401ac49d*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401ac4a4*/  call sub_1412C36A0
/*1401ac4a9*/  nop
loc_1401AC4AA: /*1401ac4aa*/ mov rdx, qword ptr [rbp+3640h+var_32A0]
/*1401ac4b1*/  mov rsi, qword ptr [rbp+3640h+var_32A0+8]
/*1401ac4b8*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1401ac4bc*/  jz short loc_1401AC4DC
/*1401ac4be*/  test rdx, rdx
/*1401ac4c1*/  jz short loc_1401AC4D1
/*1401ac4c3*/  mov r8d, 1
/*1401ac4c9*/  mov rcx, rsi
/*1401ac4cc*/  call sub_140001660
loc_1401AC4D1: /*1401ac4d1*/ xor esi, esi
/*1401ac4d3*/  jmp short loc_1401AC4DC
loc_1401AC4D5: /*1401ac4d5*/ mov rsi, qword ptr [rbp+3640h+var_4A0+8]
loc_1401AC4DC: /*1401ac4dc*/ mov qword ptr [rbp+3640h+var_1DE0], 1
/*1401ac4e7*/  mov qword ptr [rbp+3640h+var_1DE0+8], 1
/*1401ac4f2*/  mov qword ptr [rbp+3640h+var_1DD0], 0
/*1401ac4fd*/  mov qword ptr [rbp+3640h+var_1DD0+8], rsi
/*1401ac504*/  call nullsub_1
/*1401ac509*/  mov ecx, 20h ; ' '
/*1401ac50e*/  mov edx, 8
/*1401ac513*/  call sub_140001650
/*1401ac518*/  test rax, rax
/*1401ac51b*/  jz loc_1401ACF8F
/*1401ac521*/  movdqu xmm0, [rbp+3640h+var_1DE0]
/*1401ac529*/  movdqu xmm1, [rbp+3640h+var_1DD0]
/*1401ac531*/  movdqu xmmword ptr [rax+10h], xmm1
/*1401ac536*/  movdqu xmmword ptr [rax], xmm0
/*1401ac53a*/  mov qword ptr [rbp+3640h+var_5B0], rax
/*1401ac541*/  mov rax, [rbp+3640h+var_120]
/*1401ac548*/  inc qword ptr [rax]
/*1401ac54b*/  jz loc_1401ADC0A
/*1401ac551*/  mov rsi, [rbp+3640h+var_120]
/*1401ac558*/  mov rax, qword ptr [rbp+3640h+var_5B0]
/*1401ac55f*/  inc qword ptr [rax]
/*1401ac562*/  jz loc_1401ADC0A
/*1401ac568*/  mov rdi, qword ptr [rbp+3640h+var_5B0]
/*1401ac56f*/  lea rcx, [rbp+3640h+var_32A0]
/*1401ac576*/  lea rdx, [rbp+3640h+var_2F0]
/*1401ac57d*/  mov r8d, 180h
/*1401ac583*/  call sub_141684120
/*1401ac588*/  mov qword ptr [rbp+3640h+var_7A0], rdi
/*1401ac58f*/  mov qword ptr [rbp+3640h+var_7A0+8], rsi
/*1401ac596*/  mov [rbp+3640h+var_AF], 1
loc_1401AC59D: /*1401ac59d*/ call sub_1414871F0
/*1401ac5a2*/  nop
/*1401ac5a3*/  mov qword ptr [rbp+3640h+var_4A0], rax
/*1401ac5aa*/  mov rbx, [rax+10h]
/*1401ac5ae*/  mov rdi, qword ptr [rbp+3640h+var_3218+8]
/*1401ac5b5*/  lea rsi, [rdi+10h]
/*1401ac5b9*/  mov cl, 1
/*1401ac5bb*/  xor eax, eax
/*1401ac5bd*/  lock cmpxchg [rdi+10h], cl
/*1401ac5c2*/  jnz loc_1401AD425
loc_1401AC5C8: /*1401ac5c8*/ mov rax, [r14]
/*1401ac5cb*/  shl rax, 1
/*1401ac5ce*/  test rax, rax
/*1401ac5d1*/  jnz loc_1401AD433
/*1401ac5d7*/  xor eax, eax
/*1401ac5d9*/  movzx ecx, byte ptr [rdi+11h]
/*1401ac5dd*/  test cl, cl
/*1401ac5df*/  jnz loc_1401AD447
loc_1401AC5E5: /*1401ac5e5*/ mov [rdi+18h], rbx
/*1401ac5e9*/  test al, al
/*1401ac5eb*/  jnz short loc_1401AC5FC
/*1401ac5ed*/  mov rax, [r14]
/*1401ac5f0*/  shl rax, 1
/*1401ac5f3*/  test rax, rax
/*1401ac5f6*/  jnz loc_1401AD694
loc_1401AC5FC: /*1401ac5fc*/ xor eax, eax
/*1401ac5fe*/  xchg al, [rsi]
/*1401ac600*/  cmp al, 2
/*1401ac602*/  jz loc_1401AD485
loc_1401AC608: /*1401ac608*/ mov rax, qword ptr [rbp+3640h+var_4A0]
/*1401ac60f*/  lock dec qword ptr [rax]
/*1401ac613*/  jnz short loc_1401AC629
/*1401ac615*/  mov [rbp+3640h+var_AF], 1
/*1401ac61c*/  lea rcx, [rbp+3640h+var_4A0]
/*1401ac623*/  call sub_141481D70
/*1401ac628*/  nop
loc_1401AC629: /*1401ac629*/ mov rax, [rbp+3640h+var_3208]
/*1401ac630*/  mov [rbp+3640h+var_3208], 0FFFFFFFFFFFFFFFFh
/*1401ac63b*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1401ac63f*/  jz loc_1401AD493
/*1401ac645*/  lea rdx, [rbp+3640h+var_3200]
/*1401ac64c*/  mov qword ptr [rbp+3640h+var_4A0], rax
/*1401ac653*/  lea rcx, [rbp+3640h+var_4A0+8]
/*1401ac65a*/  mov r8d, 0C0h
/*1401ac660*/  call sub_141684120
/*1401ac665*/  mov r12, qword ptr [rbp+3640h+var_32A0]
/*1401ac66c*/  mov rsi, qword ptr [rbp+3640h+var_32A0+8]
/*1401ac673*/  mov rcx, qword ptr [rbp+3640h+var_3290]
/*1401ac67a*/  mov [rbp+3640h+var_E8], rcx
/*1401ac681*/  mov rdx, qword ptr [rbp+3640h+var_3290+8]
/*1401ac688*/  mov rcx, qword ptr [rbp+3640h+var_3280]
/*1401ac68f*/  mov [rbp+3640h+var_608], rcx
/*1401ac696*/  mov r14, qword ptr [rbp+3640h+var_3280+8]
/*1401ac69d*/  mov r15, qword ptr [rbp+3640h+var_3270]
/*1401ac6a4*/  mov rcx, qword ptr [rbp+3640h+var_3270+8]
/*1401ac6ab*/  mov [rbp+3640h+var_600], rcx
/*1401ac6b2*/  movq xmm0, [rbp+3640h+var_3260]
/*1401ac6ba*/  mov eax, dword ptr [rbp+3640h+var_3260]
/*1401ac6c0*/  mov [rbp+3640h+var_33C], eax
/*1401ac6c6*/  mov r9, [rbp+3640h+var_3258]
/*1401ac6cd*/  mov r10, [rbp+3640h+var_3250]
/*1401ac6d4*/  mov rcx, [rbp+3640h+var_3248]
/*1401ac6db*/  mov [rbp+3640h+var_78], rcx
/*1401ac6e2*/  mov rcx, [rbp+3640h+var_3240]
/*1401ac6e9*/  mov [rbp+3640h+Address], rcx
/*1401ac6f0*/  movaps xmm6, [rbp+3640h+var_7A0]
/*1401ac6f7*/  movzx r13d, byte ptr [rbp+3640h+var_3220]
/*1401ac6ff*/  mov r11, [rbp+3640h+var_3238]
/*1401ac706*/  mov rax, [rbp+3640h+var_3230]
/*1401ac70d*/  mov rcx, [rbp+3640h+var_3228]
/*1401ac714*/  mov [rbp+3640h+var_A0], rcx
/*1401ac71b*/  mov rdi, qword ptr [rbp+3640h+var_3218]
/*1401ac722*/  mov rcx, qword ptr [rbp+3640h+var_3218+8]
/*1401ac729*/  mov r8, [rbp+3640h+var_3140]
/*1401ac730*/  lock inc qword ptr [rdx]
/*1401ac734*/  jle loc_1401ADC0A
/*1401ac73a*/  mov rbx, rdx
/*1401ac73d*/  test r12, r12
/*1401ac740*/  jz short loc_1401AC75B
/*1401ac742*/  cmp r12, 1
/*1401ac746*/  jnz short loc_1401AC76E
/*1401ac748*/  lock inc qword ptr [rsi+180h]
/*1401ac750*/  jg short loc_1401AC779
/*1401ac752*/  mov ecx, 7
/*1401ac757*/  int 29h; Win8: RtlFailFast(ecx)
/*1401ac759*/  ud2
loc_1401AC75B: /*1401ac75b*/ lock inc qword ptr [rsi+200h]
/*1401ac763*/  jg short loc_1401AC779
/*1401ac765*/  mov ecx, 7
/*1401ac76a*/  int 29h; Win8: RtlFailFast(ecx)
/*1401ac76c*/  ud2
loc_1401AC76E: /*1401ac76e*/ lock inc qword ptr [rsi+70h]
/*1401ac773*/  jle loc_1401ADC27
loc_1401AC779: /*1401ac779*/ lock inc qword ptr [r14]
/*1401ac77d*/  jle loc_1401ADC0A
/*1401ac783*/  inc qword ptr [r15]
/*1401ac786*/  jz loc_1401ADC0A
/*1401ac78c*/  lock inc qword ptr [r9]
/*1401ac790*/  jle loc_1401ADC0A
/*1401ac796*/  lock inc qword ptr [r10]
/*1401ac79a*/  jle loc_1401ADC0A
/*1401ac7a0*/  mov rdx, [rbp+3640h+var_78]
/*1401ac7a7*/  lock inc qword ptr [rdx]
/*1401ac7ab*/  jle loc_1401ADC0A
/*1401ac7b1*/  mov rdx, [rbp+3640h+Address]
/*1401ac7b8*/  lock inc qword ptr [rdx]
/*1401ac7bc*/  jle loc_1401ADC0A
/*1401ac7c2*/  lock inc qword ptr [r11]
/*1401ac7c6*/  jle loc_1401ADC0A
/*1401ac7cc*/  lock inc qword ptr [rax]
/*1401ac7d0*/  jle loc_1401ADC0A
/*1401ac7d6*/  mov rdx, [rbp+3640h+var_A0]
/*1401ac7dd*/  lock inc qword ptr [rdx]
/*1401ac7e1*/  jle loc_1401ADC0A
/*1401ac7e7*/  lock inc qword ptr [rdi]
/*1401ac7eb*/  jle loc_1401ADC0A
/*1401ac7f1*/  mov [rbp+3640h+var_D8], rax
/*1401ac7f8*/  mov [rbp+3640h+var_D0], rdi
/*1401ac7ff*/  lock inc qword ptr [rcx]
/*1401ac803*/  jle loc_1401ADC0A
/*1401ac809*/  mov [rbp+3640h+var_4C8], rcx
/*1401ac810*/  lock inc qword ptr [r8]
/*1401ac814*/  mov [rbp+3640h+var_5F8], r8
/*1401ac81b*/  jle loc_1401ADC0A
/*1401ac821*/  mov rax, r11
/*1401ac824*/  mov ecx, r13d
/*1401ac827*/  mov qword ptr [rbp+3640h+var_1DE0], r12
/*1401ac82e*/  mov [rbp+3640h+var_5E8], rsi
/*1401ac835*/  mov qword ptr [rbp+3640h+var_1DE0+8], rsi
/*1401ac83c*/  mov rdx, [rbp+3640h+var_E8]
/*1401ac843*/  mov qword ptr [rbp+3640h+var_1DD0], rdx
/*1401ac84a*/  mov qword ptr [rbp+3640h+var_1DD0+8], rbx
/*1401ac851*/  mov r13, [rbp+3640h+var_608]
/*1401ac858*/  mov qword ptr [rbp+3640h+var_1DC0], r13
/*1401ac85f*/  mov qword ptr [rbp+3640h+var_1DC0+8], r14
/*1401ac866*/  mov rdi, r15
/*1401ac869*/  mov [rbp+3640h+var_1DB0], r15
/*1401ac870*/  mov r15, [rbp+3640h+var_600]
/*1401ac877*/  mov [rbp+3640h+var_1DA8], r15
/*1401ac87e*/  movq [rbp+3640h+var_1DA0], xmm0
/*1401ac886*/  mov [rbp+3640h+var_5E0], r9
/*1401ac88d*/  mov [rbp+3640h+var_1D98], r9
/*1401ac894*/  mov [rbp+3640h+var_5D8], r10
/*1401ac89b*/  mov [rbp+3640h+var_1D90], r10
/*1401ac8a2*/  mov rdx, [rbp+3640h+var_78]
/*1401ac8a9*/  mov [rbp+3640h+var_1D88], rdx
/*1401ac8b0*/  mov r11, [rbp+3640h+Address]
/*1401ac8b7*/  mov [rbp+3640h+var_1D80], r11
/*1401ac8be*/  mov [rbp+3640h+var_5F0], rax
/*1401ac8c5*/  mov [rbp+3640h+var_1D78], rax
/*1401ac8cc*/  mov rax, [rbp+3640h+var_D8]
/*1401ac8d3*/  mov [rbp+3640h+var_1D70], rax
/*1401ac8da*/  mov rax, [rbp+3640h+var_A0]
/*1401ac8e1*/  mov [rbp+3640h+var_1D68], rax
/*1401ac8e8*/  mov [rbp+3640h+var_D9], cl
/*1401ac8ee*/  mov byte ptr [rbp+3640h+var_1D60], cl
/*1401ac8f4*/  lea rdx, [rbp+3640h+var_3208]
/*1401ac8fb*/  mov eax, [rdx-17h]
/*1401ac8fe*/  mov dword ptr [rbp+3640h+var_1D60+1], eax
/*1401ac904*/  mov eax, [rdx-14h]
/*1401ac907*/  mov dword ptr [rbp+3640h+var_1D60+4], eax
/*1401ac90d*/  mov rax, [rbp+3640h+var_D0]
/*1401ac914*/  mov [rbp+3640h+var_1D58], rax
/*1401ac91b*/  mov rax, [rbp+3640h+var_4C8]
/*1401ac922*/  mov qword ptr [rbp+3640h+var_1D50], rax
/*1401ac929*/  lea rcx, [rbp+3640h+var_1D50+8]
/*1401ac930*/  mov r8d, 0C8h
/*1401ac936*/  call sub_141684120
/*1401ac93b*/  mov rcx, [rbp+3640h+var_5F8]
/*1401ac942*/  mov qword ptr [rbp+3640h+var_1C88+8], rcx
/*1401ac949*/  lea rax, [rbp+3640h+var_3208]
/*1401ac950*/  movdqu xmm0, xmmword ptr [rax+0D0h]
/*1401ac958*/  mov rax, [rax+0E0h]
/*1401ac95f*/  mov [rbp+3640h+var_1C68], rax
/*1401ac966*/  movdqu [rbp+3640h+var_1C78], xmm0
/*1401ac96e*/  mov [rbp+3640h+var_1C60], r12
/*1401ac975*/  mov rax, [rbp+3640h+var_5E8]
/*1401ac97c*/  mov [rbp+3640h+var_1C58], rax
/*1401ac983*/  mov rax, [rbp+3640h+var_E8]
/*1401ac98a*/  mov [rbp+3640h+var_1C50], rax
/*1401ac991*/  mov [rbp+3640h+var_1C48], rbx
/*1401ac998*/  mov [rbp+3640h+var_1C40], r13
/*1401ac99f*/  mov [rbp+3640h+var_1C38], r14
/*1401ac9a6*/  mov [rbp+3640h+var_1C30], rdi
/*1401ac9ad*/  mov [rbp+3640h+var_1C28], r15
/*1401ac9b4*/  mov eax, [rbp+3640h+var_33C]
/*1401ac9ba*/  mov [rbp+3640h+var_1C20], eax
/*1401ac9c0*/  mov rax, [rbp+3640h+var_5E0]
/*1401ac9c7*/  mov [rbp+3640h+var_1C18], rax
/*1401ac9ce*/  mov rax, [rbp+3640h+var_5D8]
/*1401ac9d5*/  mov [rbp+3640h+var_1C10], rax
/*1401ac9dc*/  mov rax, [rbp+3640h+var_78]
/*1401ac9e3*/  mov [rbp+3640h+var_1C08], rax
/*1401ac9ea*/  mov rax, [rbp+3640h+Address]
/*1401ac9f1*/  mov [rbp+3640h+var_1C00], rax
/*1401ac9f8*/  mov rax, [rbp+3640h+var_5F0]
/*1401ac9ff*/  mov [rbp+3640h+var_1BF8], rax
/*1401aca06*/  mov rax, [rbp+3640h+var_D8]
/*1401aca0d*/  mov [rbp+3640h+var_1BF0], rax
/*1401aca14*/  mov rax, [rbp+3640h+var_A0]
/*1401aca1b*/  mov [rbp+3640h+var_1BE8], rax
/*1401aca22*/  movzx eax, [rbp+3640h+var_D9]
/*1401aca29*/  mov [rbp+3640h+var_1BE0], al
/*1401aca2f*/  mov rax, [rbp+3640h+var_D0]
/*1401aca36*/  mov [rbp+3640h+var_1BD8], rax
/*1401aca3d*/  mov rax, [rbp+3640h+var_4C8]
/*1401aca44*/  mov [rbp+3640h+var_1BD0], rax
/*1401aca4b*/  mov [rbp+3640h+var_1BC8], rcx
/*1401aca52*/  movups [rbp+3640h+var_1BC0], xmm6
/*1401aca59*/  mov [rbp+3640h+var_AF], 0
loc_1401ACA60: /*1401aca60*/ lea rcx, [rbp+3640h+var_4A0]
/*1401aca67*/  lea rdx, [rbp+3640h+var_1DE0]
/*1401aca6e*/  call sub_1402DA390
/*1401aca74*/  mov rax, qword ptr [rbp+3640h+var_5B0]
/*1401aca7b*/  dec qword ptr [rax]
/*1401aca7e*/  jnz short loc_1401ACA94
/*1401aca80*/  mov [rbp+3640h+var_AA], 0
loc_1401ACA87: /*1401aca87*/ lea rcx, [rbp+3640h+var_5B0]
/*1401aca8e*/  call sub_140719000
/*1401aca93*/  nop
loc_1401ACA94: /*1401aca94*/ mov rax, [rbp+3640h+var_120]
/*1401aca9b*/  dec qword ptr [rax]
/*1401aca9e*/  jnz loc_1401A81DC
loc_1401ACAA4: /*1401acaa4*/ lea rcx, [rbp+3640h+var_120]
/*1401acaab*/  call sub_140719090
/*1401acab0*/  nop
/*1401acab1*/  jmp loc_1401A81DC
loc_1401ACAB6: /*1401acab6*/ mov ecx, 8
/*1401acabb*/  mov edx, 3F0h
/*1401acac0*/  call sub_1416C2D31
/*1401acac6*/  jmp loc_1401ADC0A
loc_1401ACACB: /*1401acacb*/ mov [rbp+3640h+var_78], rsi
/*1401acad2*/  mov ecx, 8
/*1401acad7*/  mov edx, 28h ; '('
/*1401acadc*/  call sub_1416C2D31
/*1401acae2*/  jmp loc_1401ADC0A
loc_1401ACAE7: /*1401acae7*/ mov ecx, 8
/*1401acaec*/  mov edx, 178h
/*1401acaf1*/  call sub_1416C2D31
/*1401acaf7*/  jmp loc_1401ADC0A
loc_1401ACAFC: /*1401acafc*/ mov ecx, 8
/*1401acb01*/  mov edx, 178h
/*1401acb06*/  call sub_1416C2D31
/*1401acb0c*/  jmp loc_1401ADC0A
loc_1401ACB11: /*1401acb11*/ mov ecx, 8
/*1401acb16*/  mov edx, 178h
/*1401acb1b*/  call sub_1416C2D31
/*1401acb21*/  jmp loc_1401ADC0A
loc_1401ACB26: /*1401acb26*/ mov rax, qword ptr [rbp+3640h+var_1DD0+8]
/*1401acb2d*/  mov qword ptr [rbp+3640h+var_3290], rax
/*1401acb34*/  movdqu xmm0, [rbp+3640h+var_1DE0+8]
/*1401acb3c*/  movdqa [rbp+3640h+var_32A0], xmm0
loc_1401ACB44: /*1401acb44*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401acb4b*/  mov [rsp+36C0h+var_36A0], rax
/*1401acb50*/  lea rcx, aValidPlugin; "valid plugin"
/*1401acb57*/  lea r9, off_14173B270
/*1401acb5e*/  lea r8, [rbp+3640h+var_32A0]
/*1401acb65*/  mov edx, 0Ch
/*1401acb6a*/  call sub_1416C3060
/*1401acb70*/  jmp loc_1401ADC0A
loc_1401ACB75: /*1401acb75*/ call sub_141486EF0
/*1401acb7a*/  nop
/*1401acb7b*/  mov [rsi], rax
/*1401acb7e*/  mov [rsi+8], rdx
/*1401acb82*/  mov byte ptr [rsi+10h], 1
/*1401acb86*/  jmp loc_1401A86B5
loc_1401ACB8B: /*1401acb8b*/ mov [rbp+3640h+var_8B], 1
loc_1401ACB92: /*1401acb92*/ mov rcx, rsi; Address
/*1401acb95*/  call sub_1416C15B0
/*1401acb9a*/  nop
/*1401acb9b*/  jmp loc_1401A8D70
loc_1401ACBA0: /*1401acba0*/ mov [rbp+3640h+var_8B], 1
/*1401acba7*/  call sub_1416C2250
/*1401acbac*/  nop
/*1401acbad*/  xor al, 1
/*1401acbaf*/  movzx ecx, [rbp+3640h+var_387]
/*1401acbb6*/  test cl, cl
/*1401acbb8*/  jz loc_1401A8D98
loc_1401ACBBE: /*1401acbbe*/ mov qword ptr [rbp+3640h+var_1DE0], rsi
/*1401acbc5*/  mov byte ptr [rbp+3640h+var_1DE0+8], al
loc_1401ACBCB: /*1401acbcb*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401acbd2*/  mov [rsp+36C0h+var_36A0], rax
/*1401acbd7*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401acbde*/  lea r9, off_14173B330
/*1401acbe5*/  lea r8, [rbp+3640h+var_1DE0]
/*1401acbec*/  mov edx, 2Bh ; '+'
/*1401acbf1*/  call sub_1416C3060
/*1401acbf7*/  jmp loc_1401ADC0A
loc_1401ACBFC: /*1401acbfc*/ mov ecx, 8
/*1401acc01*/  mov edx, 3E8h
/*1401acc06*/  call sub_1416C2D31
/*1401acc0c*/  jmp loc_1401ADC0A
loc_1401ACC11: /*1401acc11*/ mov [rbp+3640h+var_8B], 0
loc_1401ACC18: /*1401acc18*/ mov rcx, rsi; Address
/*1401acc1b*/  call WakeByAddressSingle
/*1401acc20*/  nop
/*1401acc21*/  jmp loc_1401A8F3B
loc_1401ACC26: /*1401acc26*/ mov [rbp+3640h+var_8C], 1
loc_1401ACC2D: /*1401acc2d*/ mov rcx, rsi; Address
/*1401acc30*/  call sub_1416C15B0
/*1401acc35*/  nop
/*1401acc36*/  jmp loc_1401A8FF1
loc_1401ACC3B: /*1401acc3b*/ mov [rbp+3640h+var_8C], 1
/*1401acc42*/  call sub_1416C2250
/*1401acc47*/  nop
/*1401acc48*/  xor al, 1
/*1401acc4a*/  movzx ecx, [rbp+3640h+var_1D7]
/*1401acc51*/  test cl, cl
/*1401acc53*/  jz loc_1401A9012
loc_1401ACC59: /*1401acc59*/ mov qword ptr [rbp+3640h+var_1DE0], rsi
/*1401acc60*/  mov byte ptr [rbp+3640h+var_1DE0+8], al
loc_1401ACC66: /*1401acc66*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401acc6d*/  mov [rsp+36C0h+var_36A0], rax
/*1401acc72*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401acc79*/  lea r9, off_14173B330
/*1401acc80*/  lea r8, [rbp+3640h+var_1DE0]
/*1401acc87*/  mov edx, 2Bh ; '+'
/*1401acc8c*/  call sub_1416C3060
/*1401acc92*/  jmp loc_1401ADC0A
loc_1401ACC97: /*1401acc97*/ mov ecx, 8
/*1401acc9c*/  mov edx, 368h
/*1401acca1*/  call sub_1416C2D31
/*1401acca7*/  jmp loc_1401ADC0A
loc_1401ACCAC: /*1401accac*/ mov [rbp+3640h+var_8B], 1
loc_1401ACCB3: /*1401accb3*/ mov rcx, rsi; Address
/*1401accb6*/  call WakeByAddressSingle
/*1401accbb*/  nop
/*1401accbc*/  jmp loc_1401A90E7
loc_1401ACCC1: /*1401accc1*/ mov [rbp+3640h+var_8C], 0
loc_1401ACCC8: /*1401accc8*/ mov rcx, rsi; Address
/*1401acccb*/  call WakeByAddressSingle
/*1401accd0*/  nop
/*1401accd1*/  jmp loc_1401A921B
loc_1401ACCD6: /*1401accd6*/ mov [rbp+3640h+var_8D], 1
loc_1401ACCDD: /*1401accdd*/ mov rcx, rsi; Address
/*1401acce0*/  call sub_1416C15B0
/*1401acce5*/  nop
/*1401acce6*/  jmp loc_1401A927D
loc_1401ACCEB: /*1401acceb*/ mov [rbp+3640h+var_8D], 1
/*1401accf2*/  call sub_1416C2250
/*1401accf7*/  nop
/*1401accf8*/  mov r15d, eax
/*1401accfb*/  xor r15b, 1
/*1401accff*/  movzx eax, byte ptr [rbp+3640h+var_1CC8+1]
/*1401acd06*/  test al, al
/*1401acd08*/  jz loc_1401A929F
loc_1401ACD0E: /*1401acd0e*/ mov qword ptr [rbp+3640h+var_32A0], rsi
/*1401acd15*/  mov byte ptr [rbp+3640h+var_32A0+8], r15b
loc_1401ACD1C: /*1401acd1c*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401acd23*/  mov [rsp+36C0h+var_36A0], rax
/*1401acd28*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401acd2f*/  lea r9, off_14173B330
/*1401acd36*/  lea r8, [rbp+3640h+var_32A0]
/*1401acd3d*/  mov edx, 2Bh ; '+'
/*1401acd42*/  call sub_1416C3060
/*1401acd48*/  jmp loc_1401ADC0A
loc_1401ACD4D: /*1401acd4d*/ mov ecx, 8
/*1401acd52*/  mov edx, 38h ; '8'
/*1401acd57*/  call sub_1416C2D31
/*1401acd5d*/  jmp loc_1401ADC0A
loc_1401ACD62: /*1401acd62*/ mov [rbp+3640h+var_8B], 0
loc_1401ACD69: /*1401acd69*/ call sub_1416C2250
/*1401acd6e*/  nop
/*1401acd6f*/  test al, al
/*1401acd71*/  jnz loc_1401A8F2B
/*1401acd77*/  mov [rbp+3640h+var_387], 1
/*1401acd7e*/  jmp loc_1401A8F2B
loc_1401ACD83: /*1401acd83*/ mov [rbp+3640h+var_8C], 1
loc_1401ACD8A: /*1401acd8a*/ mov rcx, rsi; Address
/*1401acd8d*/  call WakeByAddressSingle
/*1401acd92*/  nop
/*1401acd93*/  jmp loc_1401A9373
loc_1401ACD98: /*1401acd98*/ mov [rbp+3640h+var_8D], 0
loc_1401ACD9F: /*1401acd9f*/ mov rcx, rsi; Address
/*1401acda2*/  call WakeByAddressSingle
/*1401acda7*/  nop
/*1401acda8*/  jmp loc_1401A94A4
loc_1401ACDAD: /*1401acdad*/ mov [rbp+3640h+var_8E], 1
loc_1401ACDB4: /*1401acdb4*/ mov rcx, r15; Address
/*1401acdb7*/  call sub_1416C15B0
/*1401acdbc*/  nop
/*1401acdbd*/  jmp loc_1401A94FD
loc_1401ACDC2: /*1401acdc2*/ mov [rbp+3640h+var_8E], 1
/*1401acdc9*/  call sub_1416C2250
/*1401acdce*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401acdd4*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401acdda*/  xor al, 1
/*1401acddc*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401acde2*/  movzx eax, [rbp+3640h+var_3187]
/*1401acde9*/  test al, al
/*1401acdeb*/  jz loc_1401A9526
loc_1401ACDF1: /*1401acdf1*/ mov qword ptr [rbp+3640h+var_1DE0], r15
/*1401acdf8*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401acdfe*/  mov byte ptr [rbp+3640h+var_1DE0+8], al
loc_1401ACE04: /*1401ace04*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ace0b*/  mov [rsp+36C0h+var_36A0], rax
/*1401ace10*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ace17*/  lea r9, off_14173B330
/*1401ace1e*/  lea r8, [rbp+3640h+var_1DE0]
/*1401ace25*/  mov edx, 2Bh ; '+'
/*1401ace2a*/  call sub_1416C3060
/*1401ace30*/  jmp loc_1401ADC0A
loc_1401ACE35: /*1401ace35*/ mov [rbp+3640h+Address], r14
/*1401ace3c*/  mov ecx, 8
/*1401ace41*/  mov edx, 8
/*1401ace46*/  call sub_1416C2D31
/*1401ace4c*/  jmp loc_1401ADC0A
loc_1401ACE51: /*1401ace51*/ mov [rbp+3640h+var_8B], 1
loc_1401ACE58: /*1401ace58*/ call sub_1416C2250
/*1401ace5d*/  nop
/*1401ace5e*/  test al, al
/*1401ace60*/  jnz loc_1401A90D7
/*1401ace66*/  mov [rbp+3640h+var_387], 1
/*1401ace6d*/  jmp loc_1401A90D7
loc_1401ACE72: /*1401ace72*/ mov [rbp+3640h+var_8C], 0
loc_1401ACE79: /*1401ace79*/ call sub_1416C2250
/*1401ace7e*/  nop
/*1401ace7f*/  test al, al
/*1401ace81*/  jnz loc_1401A920B
/*1401ace87*/  mov [rbp+3640h+var_1D7], 1
/*1401ace8e*/  jmp loc_1401A920B
loc_1401ACE93: /*1401ace93*/ mov [rbp+3640h+var_8D], 1
loc_1401ACE9A: /*1401ace9a*/ mov rcx, rsi; Address
/*1401ace9d*/  call WakeByAddressSingle
/*1401acea2*/  nop
/*1401acea3*/  jmp loc_1401A961B
loc_1401ACEA8: /*1401acea8*/ mov [rbp+3640h+var_8E], 0
loc_1401ACEAF: /*1401aceaf*/ mov rcx, r15; Address
/*1401aceb2*/  call WakeByAddressSingle
/*1401aceb7*/  nop
/*1401aceb8*/  jmp loc_1401A9726
loc_1401ACEBD: /*1401acebd*/ mov [rbp+3640h+var_8F], 1
loc_1401ACEC4: /*1401acec4*/ mov rcx, rsi; Address
/*1401acec7*/  call sub_1416C15B0
/*1401acecc*/  nop
/*1401acecd*/  jmp loc_1401A97AA
loc_1401ACED2: /*1401aced2*/ mov [rbp+3640h+var_8F], 1
/*1401aced9*/  call sub_1416C2250
/*1401acede*/  nop
/*1401acedf*/  mov r14d, eax
/*1401acee2*/  xor r14b, 1
/*1401acee6*/  movzx eax, byte ptr [rbp+3640h+var_1CC8+1]
/*1401aceed*/  test al, al
/*1401aceef*/  jz loc_1401A97CC
loc_1401ACEF5: /*1401acef5*/ mov qword ptr [rbp+3640h+var_32A0], rsi
/*1401acefc*/  mov byte ptr [rbp+3640h+var_32A0+8], r14b
loc_1401ACF03: /*1401acf03*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401acf0a*/  mov [rsp+36C0h+var_36A0], rax
/*1401acf0f*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401acf16*/  lea r9, off_14173B330
/*1401acf1d*/  lea r8, [rbp+3640h+var_32A0]
/*1401acf24*/  mov edx, 2Bh ; '+'
/*1401acf29*/  call sub_1416C3060
/*1401acf2f*/  jmp loc_1401ADC0A
loc_1401ACF34: /*1401acf34*/ mov ecx, 8
/*1401acf39*/  mov edx, 40h ; '@'
/*1401acf3e*/  call sub_1416C2D31
/*1401acf44*/  jmp loc_1401ADC0A
loc_1401ACF49: /*1401acf49*/ mov ecx, 8
/*1401acf4e*/  mov edx, 14C8h
/*1401acf53*/  call sub_1416C2D31
/*1401acf59*/  jmp loc_1401ADC0A
loc_1401ACF5E: /*1401acf5e*/ mov [rbp+3640h+var_78], r14
/*1401acf65*/  mov ecx, 8
/*1401acf6a*/  mov edx, 8
/*1401acf6f*/  call sub_1416C2D31
/*1401acf75*/  jmp loc_1401ADC0A
loc_1401ACF7A: /*1401acf7a*/ mov ecx, 8
/*1401acf7f*/  mov edx, 20h ; ' '
/*1401acf84*/  call sub_1416C2D31
/*1401acf8a*/  jmp loc_1401ADC0A
loc_1401ACF8F: /*1401acf8f*/ mov [rbp+3640h+var_78], rsi
/*1401acf96*/  mov ecx, 8
/*1401acf9b*/  mov edx, 20h ; ' '
/*1401acfa0*/  call sub_1416C2D31
/*1401acfa6*/  jmp loc_1401ADC0A
loc_1401ACFAB: /*1401acfab*/ mov [rbp+3640h+var_8C], 1
loc_1401ACFB2: /*1401acfb2*/ call sub_1416C2250
/*1401acfb7*/  nop
/*1401acfb8*/  test al, al
/*1401acfba*/  jnz loc_1401A9363
/*1401acfc0*/  mov [rbp+3640h+var_1D7], 1
/*1401acfc7*/  jmp loc_1401A9363
loc_1401ACFCC: /*1401acfcc*/ mov [rbp+3640h+var_8D], 0
loc_1401ACFD3: /*1401acfd3*/ call sub_1416C2250
/*1401acfd8*/  nop
/*1401acfd9*/  test al, al
/*1401acfdb*/  jnz loc_1401A9494
/*1401acfe1*/  mov byte ptr [rbp+3640h+var_1CC8+1], 1
/*1401acfe8*/  jmp loc_1401A9494
loc_1401ACFED: /*1401acfed*/ mov [rbp+3640h+var_8E], 1
loc_1401ACFF4: /*1401acff4*/ mov rcx, r15; Address
/*1401acff7*/  call WakeByAddressSingle
/*1401acffc*/  nop
/*1401acffd*/  jmp loc_1401A98A9
loc_1401AD002: /*1401ad002*/ mov [rbp+3640h+var_8F], 0
loc_1401AD009: /*1401ad009*/ mov rcx, rsi; Address
/*1401ad00c*/  call WakeByAddressSingle
/*1401ad011*/  nop
/*1401ad012*/  jmp loc_1401A9A29
loc_1401AD017: /*1401ad017*/ mov rax, qword ptr [rbp+3640h+var_32A0+8]
/*1401ad01e*/  mov qword ptr [rbp+3640h+var_1DE0], rax
loc_1401AD025: /*1401ad025*/ lea rax, off_1416C9078; "src\\lib.rs"
/*1401ad02c*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad031*/  lea rcx, aUnableToCreate; "unable to create thread with 8MiB stack"
/*1401ad038*/  lea r9, off_14173B290
/*1401ad03f*/  lea r8, [rbp+3640h+var_1DE0]
/*1401ad046*/  mov edx, 27h ; '''
/*1401ad04b*/  call sub_1416C3060
/*1401ad051*/  jmp loc_1401ADC0A
loc_1401AD056: /*1401ad056*/ mov [rbp+3640h+var_BE], 0
loc_1401AD05D: /*1401ad05d*/ mov rsi, rax
/*1401ad060*/  call sub_141486EF0
/*1401ad065*/  nop
/*1401ad066*/  mov rcx, rax
/*1401ad069*/  mov rax, rsi
/*1401ad06c*/  mov [rsi], rcx
/*1401ad06f*/  mov [rsi+8], rdx
/*1401ad073*/  mov byte ptr [rsi+10h], 1
/*1401ad077*/  jmp loc_1401A9E4C
loc_1401AD07C: /*1401ad07c*/ mov rax, qword ptr [rbp+3640h+var_2F0+8]
/*1401ad083*/  mov qword ptr [rbp+3640h+var_150], rax
loc_1401AD08A: /*1401ad08a*/ lea rax, off_1416C8E18; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad091*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad096*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad09d*/  lea r9, off_14173B4B0
/*1401ad0a4*/  lea r8, [rbp+3640h+var_150]
/*1401ad0ab*/  mov edx, 2Bh ; '+'
/*1401ad0b0*/  call sub_1416C3060
/*1401ad0b6*/  jmp loc_1401ADC0A
loc_1401AD0BB: /*1401ad0bb*/ lea rax, off_14173C7D0; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1401ad0c2*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad0c7*/  lea rcx, aADisplayImplem; "a Display implementation returned an er"...
/*1401ad0ce*/  lea r9, unk_14173B590
/*1401ad0d5*/  lea r8, [rbp+3640h+var_AB]
/*1401ad0dc*/  mov edx, 37h ; '7'
/*1401ad0e1*/  call sub_1416C3060
/*1401ad0e7*/  jmp loc_1401ADC0A
loc_1401AD0EC: /*1401ad0ec*/ mov rax, qword ptr [rbp+3640h+var_3290+8]
/*1401ad0f3*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401ad0fa*/  movdqu xmm0, [rbp+3640h+var_32A0+8]
/*1401ad102*/  movdqa [rbp+3640h+var_2F0], xmm0
loc_1401AD10A: /*1401ad10a*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad111*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad116*/  lea rcx, aValidPlugin; "valid plugin"
/*1401ad11d*/  lea r9, off_14173B270
/*1401ad124*/  lea r8, [rbp+3640h+var_2F0]
/*1401ad12b*/  mov edx, 0Ch
/*1401ad130*/  call sub_1416C3060
/*1401ad136*/  jmp loc_1401ADC0A
loc_1401AD13B: /*1401ad13b*/ mov rax, qword ptr [rbp+3640h+var_32A0+8]
/*1401ad142*/  mov qword ptr [rbp+3640h+var_4A0], rax
loc_1401AD149: /*1401ad149*/ lea rax, off_1416C9000; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad150*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad155*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad15c*/  lea r9, off_14173B4B0
/*1401ad163*/  lea r8, [rbp+3640h+var_4A0]
/*1401ad16a*/  mov edx, 2Bh ; '+'
/*1401ad16f*/  call sub_1416C3060
/*1401ad175*/  jmp loc_1401ADC0A
loc_1401AD17A: /*1401ad17a*/ lea rax, off_14173C7D0; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1401ad181*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad186*/  lea rcx, aADisplayImplem; "a Display implementation returned an er"...
/*1401ad18d*/  lea r9, unk_14173B590
/*1401ad194*/  lea r8, [rbp+3640h+var_AB]
/*1401ad19b*/  mov edx, 37h ; '7'
/*1401ad1a0*/  call sub_1416C3060
/*1401ad1a6*/  jmp loc_1401ADC0A
loc_1401AD1AB: /*1401ad1ab*/ mov rax, qword ptr [rbp+3640h+var_3290+8]
/*1401ad1b2*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401ad1b9*/  movdqu xmm0, [rbp+3640h+var_32A0+8]
/*1401ad1c1*/  movdqa [rbp+3640h+var_2F0], xmm0
loc_1401AD1C9: /*1401ad1c9*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad1d0*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad1d5*/  lea rcx, aValidPlugin; "valid plugin"
/*1401ad1dc*/  lea r9, off_14173B270
/*1401ad1e3*/  lea r8, [rbp+3640h+var_2F0]
/*1401ad1ea*/  mov edx, 0Ch
/*1401ad1ef*/  call sub_1416C3060
/*1401ad1f5*/  jmp loc_1401ADC0A
loc_1401AD1FA: /*1401ad1fa*/ mov rax, qword ptr [rbp+3640h+var_3290+8]
/*1401ad201*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401ad208*/  movdqu xmm0, [rbp+3640h+var_32A0+8]
/*1401ad210*/  movdqa [rbp+3640h+var_2F0], xmm0
loc_1401AD218: /*1401ad218*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad21f*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad224*/  lea rcx, aValidPlugin; "valid plugin"
/*1401ad22b*/  lea r9, off_14173B270
/*1401ad232*/  lea r8, [rbp+3640h+var_2F0]
/*1401ad239*/  mov edx, 0Ch
/*1401ad23e*/  call sub_1416C3060
/*1401ad244*/  jmp loc_1401ADC0A
loc_1401AD249: /*1401ad249*/ mov rax, qword ptr [rbp+3640h+var_3290+8]
/*1401ad250*/  mov qword ptr [rbp+3640h+var_2E0], rax
/*1401ad257*/  movdqu xmm0, [rbp+3640h+var_32A0+8]
/*1401ad25f*/  movdqa [rbp+3640h+var_2F0], xmm0
loc_1401AD267: /*1401ad267*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad26e*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad273*/  lea rcx, aValidPlugin; "valid plugin"
/*1401ad27a*/  lea r9, off_14173B270
/*1401ad281*/  lea r8, [rbp+3640h+var_2F0]
/*1401ad288*/  mov edx, 0Ch
/*1401ad28d*/  call sub_1416C3060
/*1401ad293*/  jmp loc_1401ADC0A
loc_1401AD298: /*1401ad298*/ mov [rbp+3640h+var_90], 1
loc_1401AD29F: /*1401ad29f*/ mov rcx, rbx; Address
/*1401ad2a2*/  call sub_1416C15B0
/*1401ad2a7*/  nop
/*1401ad2a8*/  jmp loc_1401AB351
loc_1401AD2AD: /*1401ad2ad*/ mov [rbp+3640h+var_90], 1
/*1401ad2b4*/  call sub_1416C2250
/*1401ad2b9*/  nop
/*1401ad2ba*/  mov r14d, eax
/*1401ad2bd*/  xor r14b, 1
/*1401ad2c1*/  movzx eax, byte ptr [rdi+11h]
/*1401ad2c5*/  test al, al
/*1401ad2c7*/  jz loc_1401AB36F
loc_1401AD2CD: /*1401ad2cd*/ mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401ad2d4*/  mov byte ptr [rbp+3640h+var_32A0+8], r14b
loc_1401AD2DB: /*1401ad2db*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad2e2*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad2e7*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad2ee*/  lea r9, off_14173B330
/*1401ad2f5*/  lea r8, [rbp+3640h+var_32A0]
/*1401ad2fc*/  mov edx, 2Bh ; '+'
/*1401ad301*/  call sub_1416C3060
/*1401ad307*/  jmp loc_1401ADC0A
loc_1401AD30C: /*1401ad30c*/ mov rcx, rbx; Address
/*1401ad30f*/  call sub_1416C15B0
/*1401ad314*/  nop
/*1401ad315*/  jmp loc_1401AB5E6
loc_1401AD31A: /*1401ad31a*/ call sub_1416C2250
/*1401ad31f*/  nop
/*1401ad320*/  mov r14d, eax
/*1401ad323*/  xor r14b, 1
/*1401ad327*/  movzx eax, byte ptr [rdi+11h]
/*1401ad32b*/  test al, al
/*1401ad32d*/  jz loc_1401AB604
loc_1401AD333: /*1401ad333*/ mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401ad33a*/  mov byte ptr [rbp+3640h+var_32A0+8], r14b
loc_1401AD341: /*1401ad341*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad348*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad34d*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad354*/  lea r9, off_14173B330
/*1401ad35b*/  lea r8, [rbp+3640h+var_32A0]
/*1401ad362*/  mov edx, 2Bh ; '+'
/*1401ad367*/  call sub_1416C3060
/*1401ad36d*/  jmp loc_1401ADC0A
loc_1401AD372: /*1401ad372*/ mov rcx, rbx; Address
/*1401ad375*/  call WakeByAddressSingle
/*1401ad37a*/  nop
/*1401ad37b*/  jmp loc_1401AB76F
loc_1401AD380: /*1401ad380*/ mov [rbp+3640h+var_91], 1
loc_1401AD387: /*1401ad387*/ mov rcx, rbx; Address
/*1401ad38a*/  call sub_1416C15B0
/*1401ad38f*/  nop
/*1401ad390*/  jmp loc_1401AB7EA
loc_1401AD395: /*1401ad395*/ mov [rbp+3640h+var_91], 1
/*1401ad39c*/  call sub_1416C2250
/*1401ad3a1*/  nop
/*1401ad3a2*/  mov r14d, eax
/*1401ad3a5*/  xor r14b, 1
/*1401ad3a9*/  movzx eax, byte ptr [rdi+11h]
/*1401ad3ad*/  test al, al
/*1401ad3af*/  jz loc_1401AB808
loc_1401AD3B5: /*1401ad3b5*/ mov qword ptr [rbp+3640h+var_32A0], rbx
/*1401ad3bc*/  mov byte ptr [rbp+3640h+var_32A0+8], r14b
loc_1401AD3C3: /*1401ad3c3*/ lea rax, off_1416C81B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad3ca*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad3cf*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad3d6*/  lea r9, off_14173B330
/*1401ad3dd*/  lea r8, [rbp+3640h+var_32A0]
/*1401ad3e4*/  mov edx, 2Bh ; '+'
/*1401ad3e9*/  call sub_1416C3060
/*1401ad3ef*/  jmp loc_1401ADC0A
loc_1401AD3F4: /*1401ad3f4*/ mov ecx, 8
/*1401ad3f9*/  mov edx, 18h
/*1401ad3fe*/  call sub_1416C2D31
/*1401ad404*/  jmp loc_1401ADC0A
loc_1401AD409: /*1401ad409*/ mov [rbp+3640h+var_D0], rbx
/*1401ad410*/  mov ecx, 8
/*1401ad415*/  mov edx, 8
/*1401ad41a*/  call sub_1416C2D31
/*1401ad420*/  jmp loc_1401ADC0A
loc_1401AD425: /*1401ad425*/ mov rcx, rsi; Address
/*1401ad428*/  call sub_1416C15B0
/*1401ad42d*/  nop
/*1401ad42e*/  jmp loc_1401AC5C8
loc_1401AD433: /*1401ad433*/ call sub_1416C2250
/*1401ad438*/  nop
/*1401ad439*/  xor al, 1
/*1401ad43b*/  movzx ecx, byte ptr [rdi+11h]
/*1401ad43f*/  test cl, cl
/*1401ad441*/  jz loc_1401AC5E5
loc_1401AD447: /*1401ad447*/ mov qword ptr [rbp+3640h+var_1DE0], rsi
/*1401ad44e*/  mov byte ptr [rbp+3640h+var_1DE0+8], al
loc_1401AD454: /*1401ad454*/ lea rax, off_1416C8898; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad45b*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad460*/  lea rcx, aCalledResultUn; "called `Result::unwrap()` on an `Err` v"...
/*1401ad467*/  lea r9, off_14173B410
/*1401ad46e*/  lea r8, [rbp+3640h+var_1DE0]
/*1401ad475*/  mov edx, 2Bh ; '+'
/*1401ad47a*/  call sub_1416C3060
/*1401ad480*/  jmp loc_1401ADC0A
loc_1401AD485: /*1401ad485*/ mov rcx, rsi; Address
/*1401ad488*/  call WakeByAddressSingle
/*1401ad48d*/  nop
/*1401ad48e*/  jmp loc_1401AC608
loc_1401AD493: /*1401ad493*/ mov [rbp+3640h+var_AF], 1
loc_1401AD49A: /*1401ad49a*/ lea rcx, off_1416C88B0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad4a1*/  call sub_1416C3040
/*1401ad4a7*/  jmp loc_1401ADC0A
loc_1401AD4AC: /*1401ad4ac*/ mov [rbp+3640h+var_8D], 1
loc_1401AD4B3: /*1401ad4b3*/ call sub_1416C2250
/*1401ad4b8*/  nop
/*1401ad4b9*/  test al, al
/*1401ad4bb*/  jnz loc_1401A960B
/*1401ad4c1*/  mov byte ptr [rbp+3640h+var_1CC8+1], 1
/*1401ad4c8*/  jmp loc_1401A960B
loc_1401AD4CD: /*1401ad4cd*/ mov [rbp+3640h+var_8E], 0
loc_1401AD4D4: /*1401ad4d4*/ call sub_1416C2250
/*1401ad4d9*/  nop
/*1401ad4da*/  test al, al
/*1401ad4dc*/  jnz loc_1401A9716
/*1401ad4e2*/  mov [rbp+3640h+var_3187], 1
/*1401ad4e9*/  jmp loc_1401A9716
loc_1401AD4EE: /*1401ad4ee*/ mov [rbp+3640h+var_8F], 1
loc_1401AD4F5: /*1401ad4f5*/ mov rcx, rsi; Address
/*1401ad4f8*/  call WakeByAddressSingle
/*1401ad4fd*/  nop
/*1401ad4fe*/  jmp loc_1401AA0DA
loc_1401AD503: /*1401ad503*/ mov [rbp+3640h+var_89], 1
loc_1401AD50A: /*1401ad50a*/ mov rcx, r12; Address
/*1401ad50d*/  call sub_1416C15B0
/*1401ad512*/  nop
/*1401ad513*/  jmp loc_1401AA6A4
loc_1401AD518: /*1401ad518*/ mov [rbp+3640h+var_89], 1
/*1401ad51f*/  call sub_1416C2250
/*1401ad524*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401ad52a*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ad530*/  xor al, 1
/*1401ad532*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401ad538*/  mov [rbp+3640h+Address], r12
/*1401ad53f*/  movzx eax, byte ptr [r15+11h]
/*1401ad544*/  test al, al
/*1401ad546*/  jz loc_1401AA6D1
loc_1401AD54C: /*1401ad54c*/ mov rax, [rbp+3640h+Address]
/*1401ad553*/  mov qword ptr [rbp+3640h+var_32A0], rax
/*1401ad55a*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ad560*/  mov byte ptr [rbp+3640h+var_32A0+8], al
loc_1401AD566: /*1401ad566*/ lea rax, off_141782760; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad56d*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad572*/  lea rcx, aPoisonedMenuMu; "poisoned menu mutex"
/*1401ad579*/  lea r9, off_141782650
/*1401ad580*/  lea r8, [rbp+3640h+var_32A0]
/*1401ad587*/  mov edx, 13h
/*1401ad58c*/  call sub_1416C3060
/*1401ad592*/  jmp loc_1401ADC0A
loc_1401AD597: /*1401ad597*/ mov [rbp+3640h+var_89], 1
loc_1401AD59E: /*1401ad59e*/ call WakeByAddressSingle
/*1401ad5a3*/  nop
/*1401ad5a4*/  jmp loc_1401AA76B
loc_1401AD5A9: /*1401ad5a9*/ mov [rbp+3640h+var_89], 1
/*1401ad5b0*/  mov rcx, r15; Address
/*1401ad5b3*/  call sub_1416C15B0
/*1401ad5b8*/  nop
/*1401ad5b9*/  jmp loc_1401AA78C
loc_1401AD5BE: /*1401ad5be*/ mov [rbp+3640h+var_89], 1
/*1401ad5c5*/  call sub_1416C2250
/*1401ad5ca*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401ad5d0*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ad5d6*/  xor al, 1
/*1401ad5d8*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401ad5de*/  mov [rbp+3640h+Address], r15
/*1401ad5e5*/  movzx eax, byte ptr [r14+1329h]
/*1401ad5ed*/  test al, al
/*1401ad5ef*/  jz loc_1401AA7BC
loc_1401AD5F5: /*1401ad5f5*/ mov rax, [rbp+3640h+Address]
/*1401ad5fc*/  mov qword ptr [rbp+3640h+var_32A0], rax
/*1401ad603*/  mov eax, dword ptr [rbp+3640h+var_78]
/*1401ad609*/  mov byte ptr [rbp+3640h+var_32A0+8], al
loc_1401AD60F: /*1401ad60f*/ lea rax, off_14177F688; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad616*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad61b*/  lea rcx, aPoisonedMenuMu; "poisoned menu mutex"
/*1401ad622*/  lea r9, off_141782630
/*1401ad629*/  lea r8, [rbp+3640h+var_32A0]
/*1401ad630*/  mov edx, 13h
/*1401ad635*/  call sub_1416C3060
/*1401ad63b*/  jmp loc_1401ADC0A
loc_1401AD640: /*1401ad640*/ mov [rbp+3640h+var_89], 0
loc_1401AD647: /*1401ad647*/ call WakeByAddressSingle
/*1401ad64c*/  nop
/*1401ad64d*/  jmp loc_1401AA81B
loc_1401AD652: /*1401ad652*/ mov [rbp+3640h+var_8E], 1
loc_1401AD659: /*1401ad659*/ call sub_1416C2250
/*1401ad65e*/  nop
/*1401ad65f*/  test al, al
/*1401ad661*/  jnz loc_1401A9899
/*1401ad667*/  mov [rbp+3640h+var_3187], 1
/*1401ad66e*/  jmp loc_1401A9899
loc_1401AD673: /*1401ad673*/ mov [rbp+3640h+var_8F], 0
loc_1401AD67A: /*1401ad67a*/ call sub_1416C2250
/*1401ad67f*/  nop
/*1401ad680*/  test al, al
/*1401ad682*/  jnz loc_1401A9A19
/*1401ad688*/  mov byte ptr [rbp+3640h+var_1CC8+1], 1
/*1401ad68f*/  jmp loc_1401A9A19
loc_1401AD694: /*1401ad694*/ call sub_1416C2250
/*1401ad699*/  nop
/*1401ad69a*/  test al, al
/*1401ad69c*/  jnz loc_1401AC5FC
/*1401ad6a2*/  mov byte ptr [rdi+11h], 1
/*1401ad6a6*/  jmp loc_1401AC5FC
loc_1401AD6AB: /*1401ad6ab*/ mov [rbp+3640h+var_90], 1
loc_1401AD6B2: /*1401ad6b2*/ mov rcx, rbx; Address
/*1401ad6b5*/  call WakeByAddressSingle
/*1401ad6ba*/  nop
/*1401ad6bb*/  jmp loc_1401AB523
loc_1401AD6C0: /*1401ad6c0*/ mov [rbp+3640h+var_91], 1
loc_1401AD6C7: /*1401ad6c7*/ mov rcx, rbx; Address
/*1401ad6ca*/  call WakeByAddressSingle
/*1401ad6cf*/  nop
/*1401ad6d0*/  jmp loc_1401AB9B1
loc_1401AD6D5: /*1401ad6d5*/ mov [rbp+3640h+var_8F], 1
loc_1401AD6DC: /*1401ad6dc*/ call sub_1416C2250
/*1401ad6e1*/  nop
/*1401ad6e2*/  test al, al
/*1401ad6e4*/  jnz loc_1401AA0CA
/*1401ad6ea*/  mov byte ptr [rbp+3640h+var_1CC8+1], 1
/*1401ad6f1*/  jmp loc_1401AA0CA
loc_1401AD6F6: /*1401ad6f6*/ mov [rbp+3640h+var_89], 1
loc_1401AD6FD: /*1401ad6fd*/ call sub_1416C2250
/*1401ad702*/  nop
/*1401ad703*/  test al, al
/*1401ad705*/  jnz loc_1401AA758
/*1401ad70b*/  mov byte ptr [r15+11h], 1
/*1401ad710*/  jmp loc_1401AA758
loc_1401AD715: /*1401ad715*/ mov [rbp+3640h+var_89], 0
/*1401ad71c*/  call sub_1416C2250
/*1401ad721*/  nop
/*1401ad722*/  test al, al
/*1401ad724*/  jnz loc_1401AA808
/*1401ad72a*/  mov byte ptr [r14+1329h], 1
/*1401ad732*/  jmp loc_1401AA808
loc_1401AD737: /*1401ad737*/ mov [rbp+3640h+var_90], 0
loc_1401AD73E: /*1401ad73e*/ call sub_1416C2250
/*1401ad743*/  nop
/*1401ad744*/  test al, al
/*1401ad746*/  jnz loc_1401AB4DE
/*1401ad74c*/  mov byte ptr [rdi+11h], 1
/*1401ad750*/  jmp loc_1401AB4DE
loc_1401AD755: /*1401ad755*/ call sub_1416C2250
/*1401ad75a*/  nop
/*1401ad75b*/  test al, al
/*1401ad75d*/  jnz loc_1401AB744
/*1401ad763*/  mov byte ptr [rdi+11h], 1
/*1401ad767*/  jmp loc_1401AB744
loc_1401AD76C: /*1401ad76c*/ mov [rbp+3640h+var_91], 0
loc_1401AD773: /*1401ad773*/ call sub_1416C2250
/*1401ad778*/  nop
/*1401ad779*/  test al, al
/*1401ad77b*/  jnz loc_1401AB973
/*1401ad781*/  mov byte ptr [rdi+11h], 1
/*1401ad785*/  jmp loc_1401AB973
loc_1401AD78A: /*1401ad78a*/ mov [rbp+3640h+var_90], 1
loc_1401AD791: /*1401ad791*/ call sub_1416C2250
/*1401ad796*/  nop
/*1401ad797*/  test al, al
/*1401ad799*/  jnz loc_1401AB517
/*1401ad79f*/  mov byte ptr [rdi+11h], 1
/*1401ad7a3*/  jmp loc_1401AB517
loc_1401AD7A8: /*1401ad7a8*/ call sub_1416C2250
/*1401ad7ad*/  nop
/*1401ad7ae*/  test al, al
/*1401ad7b0*/  jnz loc_1401AB763
/*1401ad7b6*/  mov byte ptr [rdi+11h], 1
/*1401ad7ba*/  jmp loc_1401AB763
loc_1401AD7BF: /*1401ad7bf*/ mov [rbp+3640h+var_91], 1
loc_1401AD7C6: /*1401ad7c6*/ call sub_1416C2250
/*1401ad7cb*/  nop
/*1401ad7cc*/  test al, al
/*1401ad7ce*/  jnz loc_1401AB9A5
/*1401ad7d4*/  mov byte ptr [rdi+11h], 1
/*1401ad7d8*/  jmp loc_1401AB9A5
loc_1401AD7DD: /*1401ad7dd*/ mov ecx, 1
/*1401ad7e2*/  mov edx, 9
/*1401ad7e7*/  call sub_1416C2D4B
/*1401ad7ed*/  jmp loc_1401ADC0A
loc_1401AD7F2: /*1401ad7f2*/ mov ecx, 1
/*1401ad7f7*/  mov edx, 149h
/*1401ad7fc*/  call sub_1416C2D4B
/*1401ad802*/  jmp loc_1401ADC0A
loc_1401AD807: /*1401ad807*/ mov ecx, 1
/*1401ad80c*/  mov edx, 260h
/*1401ad811*/  call sub_1416C2D4B
loc_1401AD817: /*1401ad817*/ jmp loc_1401ADC0A
loc_1401AD81C: /*1401ad81c*/ mov r14, qword ptr [rbp+3640h+var_2F0+8]
/*1401ad823*/  movups xmm0, [rbp+3640h+var_2E0]
/*1401ad82a*/  movaps [rbp+3640h+var_310], xmm0
/*1401ad831*/  movups xmm0, [rbp+3640h+var_2D0]
/*1401ad838*/  jmp loc_1401ADA17
loc_1401AD83D: /*1401ad83d*/ lea rax, off_14173B6C8; "tauri"
loc_1401AD844: /*1401ad844*/ mov rbx, [rax]
/*1401ad847*/  mov rsi, [rax+8]
/*1401ad84b*/  mov [rsp+36C0h+var_36A0], 1
/*1401ad854*/  lea rcx, [rbp+3640h+var_1DE0]
/*1401ad85b*/  mov r9d, 1
/*1401ad861*/  mov rdx, rsi
/*1401ad864*/  xor r8d, r8d
/*1401ad867*/  call sub_140388B60
/*1401ad86c*/  mov rdi, qword ptr [rbp+3640h+var_1DE0+8]
/*1401ad873*/  cmp dword ptr [rbp+3640h+var_1DE0], 1
/*1401ad87a*/  jz loc_1401ADBFA
/*1401ad880*/  mov r14, qword ptr [rbp+3640h+var_1DD0]
/*1401ad887*/  test rsi, rsi
/*1401ad88a*/  jz short loc_1401AD89A
/*1401ad88c*/  mov rcx, r14
/*1401ad88f*/  mov rdx, rbx
/*1401ad892*/  mov r8, rsi
/*1401ad895*/  call sub_141684120
loc_1401AD89A: /*1401ad89a*/ mov [rbp+3640h+var_79], 1
loc_1401AD8A1: /*1401ad8a1*/ lea rcx, [rbp+3640h+var_4A0]
/*1401ad8a8*/  call sub_14000C490
/*1401ad8ad*/  nop
/*1401ad8ae*/  mov qword ptr [rbp+3640h+var_1DE0], rdi
/*1401ad8b5*/  mov qword ptr [rbp+3640h+var_1DE0+8], r14
/*1401ad8bc*/  mov qword ptr [rbp+3640h+var_1DD0], rsi
loc_1401AD8C3: /*1401ad8c3*/ lea rax, off_1416C77F0; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1401ad8ca*/  mov [rsp+36C0h+var_36A0], rax
/*1401ad8cf*/  lea rcx, aValidPlugin; "valid plugin"
/*1401ad8d6*/  lea r9, off_14173B270
/*1401ad8dd*/  lea r8, [rbp+3640h+var_1DE0]
/*1401ad8e4*/  mov edx, 0Ch
/*1401ad8e9*/  call sub_1416C3060
/*1401ad8ef*/  jmp loc_1401ADC0A
loc_1401AD8F4: /*1401ad8f4*/ mov r14, qword ptr [rbp+3640h+var_5B0+8]
/*1401ad8fb*/  movups xmm0, [rbp+3640h+var_5A0]
/*1401ad902*/  movaps [rbp+3640h+var_310], xmm0
/*1401ad909*/  movups xmm0, [rbp+3640h+var_590]
/*1401ad910*/  jmp loc_1401ADA17
loc_1401AD915: /*1401ad915*/ mov ecx, 1
/*1401ad91a*/  mov edx, 20h ; ' '
/*1401ad91f*/  call sub_1416C2D4B
/*1401ad925*/  jmp loc_1401ADC0A
loc_1401AD92A: /*1401ad92a*/ lea rcx, aTheGeneratedTa; "the generated Tauri `Context` panicked "...
/*1401ad931*/  mov edx, 6Fh ; 'o'
/*1401ad936*/  call sub_141485D60
/*1401ad93b*/  nop
/*1401ad93c*/  mov ecx, 65h ; 'e'
/*1401ad941*/  call sub_141485030
/*1401ad947*/  jmp loc_1401ADC0A
loc_1401AD94C: /*1401ad94c*/ movdqa xmm0, [rbp+3640h+var_2F0]
/*1401ad954*/  movdqa [rbp+3640h+var_4A0], xmm0
/*1401ad95c*/  mov rax, [rbp+3640h+var_118]
/*1401ad963*/  lock dec qword ptr [rax]
/*1401ad967*/  jnz short loc_1401AD992
/*1401ad969*/  mov [rbp+3640h+var_A6], 1
/*1401ad970*/  mov [rbp+3640h+var_A7], 1
/*1401ad977*/  mov [rbp+3640h+var_A8], 1
/*1401ad97e*/  mov [rbp+3640h+var_A9], 0
loc_1401AD985: /*1401ad985*/ lea rcx, [rbp+3640h+var_118]
/*1401ad98c*/  call sub_141215540
/*1401ad991*/  nop
loc_1401AD992: /*1401ad992*/ mov rax, [rbp+3640h+var_6E8]
/*1401ad999*/  mov [rbp+3640h+var_A0], rax
/*1401ad9a0*/  mov rax, [rbp+3640h+var_6E0]
/*1401ad9a7*/  mov [rbp+3640h+Address], rax
/*1401ad9ae*/  mov rax, [rax]
/*1401ad9b1*/  test rax, rax
/*1401ad9b4*/  jz short loc_1401AD9C0
loc_1401AD9B6: /*1401ad9b6*/ mov rcx, [rbp+3640h+var_A0]
/*1401ad9bd*/  call rax
/*1401ad9bf*/  nop
loc_1401AD9C0: /*1401ad9c0*/ mov rax, [rbp+3640h+Address]
/*1401ad9c7*/  mov rdx, [rax+8]
/*1401ad9cb*/  mov al, 1
/*1401ad9cd*/  mov dword ptr [rbp+3640h+var_78], eax
/*1401ad9d3*/  mov r15, 8000000000000000h
/*1401ad9dd*/  test rdx, rdx
/*1401ad9e0*/  jz short loc_1401ADA5E
/*1401ad9e2*/  mov rax, [rbp+3640h+Address]
/*1401ad9e9*/  mov r8, [rax+10h]
/*1401ad9ed*/  mov rcx, [rbp+3640h+var_A0]
/*1401ad9f4*/  call sub_140001660
/*1401ad9f9*/  jmp short loc_1401ADA5E
loc_1401AD9FB: /*1401ad9fb*/ mov r14, qword ptr [rbp+3640h+var_150+8]
/*1401ada02*/  movups xmm0, [rbp+3640h+var_140]
/*1401ada09*/  movaps [rbp+3640h+var_310], xmm0
/*1401ada10*/  movups xmm0, [rbp+3640h+var_130]
loc_1401ADA17: /*1401ada17*/ movaps [rbp+3640h+var_300], xmm0
/*1401ada1e*/  movdqa xmm0, [rbp+3640h+var_310]
/*1401ada26*/  movdqa xmm1, [rbp+3640h+var_300]
/*1401ada2e*/  movdqa [rbp+3640h+var_490], xmm1
/*1401ada36*/  movdqa [rbp+3640h+var_4A0], xmm0
loc_1401ADA3E: /*1401ada3e*/ mov eax, dword ptr [rbp+3640h+var_78]
/*1401ada44*/  mov [rbp+3640h+var_A4], al
/*1401ada4a*/  mov [rbp+3640h+var_A5], 0
loc_1401ADA51: /*1401ada51*/ lea rcx, [rbp+3640h+var_1DE0]
/*1401ada58*/  call sub_140013D50
/*1401ada5d*/  nop
loc_1401ADA5E: /*1401ada5e*/ mov rax, [rbp+3640h+var_660]
/*1401ada65*/  mov [rbp+3640h+Address], rax
/*1401ada6c*/  test rax, rax
/*1401ada6f*/  setnz al
/*1401ada72*/  test byte ptr [rbp+3640h+var_78], al
/*1401ada78*/  jz short loc_1401ADAC1
/*1401ada7a*/  mov rax, [rbp+3640h+var_658]
/*1401ada81*/  mov [rbp+3640h+var_78], rax
/*1401ada88*/  mov rax, [rax]
/*1401ada8b*/  test rax, rax
/*1401ada8e*/  jz short loc_1401ADA9A
loc_1401ADA90: /*1401ada90*/ mov rcx, [rbp+3640h+Address]
/*1401ada97*/  call rax
/*1401ada99*/  nop
loc_1401ADA9A: /*1401ada9a*/ mov rax, [rbp+3640h+var_78]
/*1401adaa1*/  mov rdx, [rax+8]
/*1401adaa5*/  test rdx, rdx
/*1401adaa8*/  jz short loc_1401ADAC1
/*1401adaaa*/  mov rax, [rbp+3640h+var_78]
/*1401adab1*/  mov r8, [rax+10h]
/*1401adab5*/  mov rcx, [rbp+3640h+Address]
/*1401adabc*/  call sub_140001660
loc_1401ADAC1: /*1401adac1*/ mov qword ptr [rbp+3640h+var_1DE0], r15
/*1401adac8*/  mov qword ptr [rbp+3640h+var_1DE0+8], r14
/*1401adacf*/  movdqa xmm0, [rbp+3640h+var_4A0]
/*1401adad7*/  movdqa xmm1, [rbp+3640h+var_490]
/*1401adadf*/  movdqu [rbp+3640h+var_1DD0], xmm0
/*1401adae7*/  movdqu [rbp+3640h+var_1DC0], xmm1
loc_1401ADAEF: /*1401adaef*/ lea rax, off_14173B198; "src\\lib.rs"
/*1401adaf6*/  mov [rsp+36C0h+var_36A0], rax
/*1401adafb*/  lea rcx, aErrorWhileBuil; "error while building AiMaMi"
/*1401adb02*/  lea r9, off_14173B4F0
/*1401adb09*/  lea r8, [rbp+3640h+var_1DE0]
/*1401adb10*/  mov edx, 1Bh
/*1401adb15*/  call sub_1416C3060
/*1401adb1b*/  jmp loc_1401ADC0A
loc_1401ADB20: /*1401adb20*/ mov r14, qword ptr [rbp+3640h+var_2F0+8]
/*1401adb27*/  movups xmm0, [rbp+3640h+var_2E0]
/*1401adb2e*/  movaps [rbp+3640h+var_4A0], xmm0
/*1401adb35*/  movdqu xmm0, [rbp+3640h+var_2D0]
/*1401adb3d*/  movdqa [rbp+3640h+var_490], xmm0
/*1401adb45*/  jmp loc_1401ADA3E
loc_1401ADB4A: /*1401adb4a*/ mov r14, qword ptr [rbp+3640h+var_32A0+8]
/*1401adb51*/  movups xmm0, [rbp+3640h+var_3290]
/*1401adb58*/  movaps [rbp+3640h+var_4A0], xmm0
/*1401adb5f*/  movdqu xmm0, [rbp+3640h+var_3280]
/*1401adb67*/  movdqa [rbp+3640h+var_490], xmm0
/*1401adb6f*/  jmp loc_1401ADA3E
loc_1401ADB74: /*1401adb74*/ movdqu xmm0, [rbp+3640h+var_3290]
/*1401adb7c*/  movdqu xmm1, [rbp+3640h+var_3280]
/*1401adb84*/  movdqa [rbp+3640h+var_490], xmm1
/*1401adb8c*/  movdqa [rbp+3640h+var_4A0], xmm0
/*1401adb94*/  mov dword ptr [rbp+3640h+var_78], 0
/*1401adb9e*/  jmp loc_1401ADA3E
loc_1401ADBA3: /*1401adba3*/ movdqa xmm0, [rbp+3640h+var_150]
/*1401adbab*/  movdqa xmm1, [rbp+3640h+var_140]
/*1401adbb3*/  movdqa [rbp+3640h+var_4A0], xmm0
/*1401adbbb*/  movdqa [rbp+3640h+var_490], xmm1
/*1401adbc3*/  jmp loc_1401ADA3E
loc_1401ADBC8: /*1401adbc8*/ lea rcx, [rbp+3640h+var_2F0]
/*1401adbcf*/  lea rdx, [rbp+3640h+var_32A0]
/*1401adbd6*/  mov r8, rax
/*1401adbd9*/  call sub_141698A90
/*1401adbdf*/  jmp short loc_1401ADC0A
loc_1401ADBE1: /*1401adbe1*/ mov [rbp+3640h+var_69], sil
loc_1401ADBE8: /*1401adbe8*/ mov ecx, 1
/*1401adbed*/  mov edx, 4
/*1401adbf2*/  call sub_1416C2D4B
/*1401adbf8*/  jmp short loc_1401ADC0A
loc_1401ADBFA: /*1401adbfa*/ mov rdx, qword ptr [rbp+3640h+var_1DD0]
loc_1401ADC01: /*1401adc01*/ mov rcx, rdi
/*1401adc04*/  call sub_1416C2D4B
loc_1401ADC0A: /*1401adc0a*/ ud2
loc_1401ADC0C: /*1401adc0c*/ mov ecx, 7
/*1401adc11*/  int 29h; Win8: RtlFailFast(ecx)
/*1401adc13*/  ud2
loc_1401ADC15: /*1401adc15*/ mov ecx, 7
/*1401adc1a*/  int 29h; Win8: RtlFailFast(ecx)
/*1401adc1c*/  ud2
loc_1401ADC1E: /*1401adc1e*/ mov ecx, 7
/*1401adc23*/  int 29h; Win8: RtlFailFast(ecx)
/*1401adc25*/  ud2
loc_1401ADC27: /*1401adc27*/ mov ecx, 7
/*1401adc2c*/  int 29h; Win8: RtlFailFast(ecx)
/*1401adc2e*/  ud2
