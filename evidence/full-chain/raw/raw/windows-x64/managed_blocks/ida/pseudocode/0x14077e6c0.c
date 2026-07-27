// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1448 fetched=1448 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14077E6C0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i si128; // xmm1
  __int64 v20; // rsi
  char v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rsi
  __m128i v24; // rax
  __int64 v25; // rcx
  __m128i v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  _QWORD *v29; // r9
  __int64 v30; // rbx
  __m128i *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rbx
  const __m128i *v40; // r14
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdx
  __int... [54102 chars total]

// ---- full disassembly reconstruction (1448/1448 instructions) ----
sub_14077E6C0: /*14077e6c0*/ push rbp
/*14077e6c1*/  push r15
/*14077e6c3*/  push r14
/*14077e6c5*/  push r13
/*14077e6c7*/  push r12
/*14077e6c9*/  push rsi
/*14077e6ca*/  push rdi
/*14077e6cb*/  push rbx
/*14077e6cc*/  sub rsp, 218h
/*14077e6d3*/  lea rbp, [rsp+80h]
/*14077e6db*/  movdqa [rbp+1D0h+var_50], xmm9
/*14077e6e4*/  movdqa [rbp+1D0h+var_60], xmm8
/*14077e6ed*/  movdqa [rbp+1D0h+var_70], xmm7
/*14077e6f5*/  movdqa [rbp+1D0h+var_80], xmm6
/*14077e6fd*/  mov [rbp+1D0h+var_88], 0FFFFFFFFFFFFFFFEh
/*14077e708*/  mov rbx, r9
/*14077e70b*/  mov r14, r8
/*14077e70e*/  mov rax, rdx
/*14077e711*/  mov rsi, rcx
/*14077e714*/  mov rdx, [rdx+48h]
/*14077e718*/  mov [rbp+1D0h+var_160], rax
/*14077e71c*/  mov r8, [rax+50h]
/*14077e720*/  lea rcx, [rbp+1D0h+var_110]
/*14077e727*/  call sub_14148D130
/*14077e72c*/  mov rax, qword ptr [rbp+1D0h+var_110]
/*14077e733*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077e73a*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14077e73e*/  jz loc_14077E84C
/*14077e744*/  mov [rbp+1D0h+var_140], rsi
/*14077e74b*/  mov [rbp+1D0h+var_138], rcx
/*14077e752*/  mov [rbp+1D0h+var_158], rax
/*14077e756*/  mov rdi, qword ptr [rbp+1D0h+var_100]
loc_14077E75D: /*14077e75d*/ call sub_141470CD0
/*14077e762*/  nop
/*14077e763*/  mov r15, rax
/*14077e766*/  cmp byte ptr [rax+10h], 1
/*14077e76a*/  jnz loc_14077F204
/*14077e770*/  mov rax, [r15]
/*14077e773*/  mov rdx, [r15+8]
loc_14077E777: /*14077e777*/ lea rcx, [rax+1]
/*14077e77b*/  mov [r15], rcx
/*14077e77e*/  movups xmm0, xmmword ptr cs:off_141786750+10h
/*14077e785*/  movaps [rbp+1D0h+var_100], xmm0
/*14077e78c*/  movdqu xmm0, xmmword ptr cs:off_141786750
/*14077e794*/  movdqa [rbp+1D0h+var_110], xmm0
/*14077e79c*/  mov [rbp+1D0h+var_F0], rax
/*14077e7a3*/  mov qword ptr [rbp+1D0h+var_E8], rdx
/*14077e7aa*/  test rbx, rbx
/*14077e7ad*/  jnz loc_14077F21B
loc_14077E7B3: /*14077e7b3*/ movdqa xmm0, [rbp+1D0h+var_110]
/*14077e7bb*/  movdqa xmm1, [rbp+1D0h+var_100]
/*14077e7c3*/  mov rax, [rbp+1D0h+var_F0]
/*14077e7ca*/  mov [rbp+1D0h+var_1D0], rax
/*14077e7ce*/  mov rax, qword ptr [rbp+1D0h+var_E8]
/*14077e7d5*/  mov [rbp+1D0h+var_1C8], rax
/*14077e7d9*/  movdqa [rbp+1D0h+var_1E0], xmm1
/*14077e7de*/  movdqa [rbp+1D0h+var_1F0], xmm0
loc_14077E7E3: /*14077e7e3*/ lea rcx, [rbp+1D0h+var_178]
/*14077e7e7*/  lea r9, [rbp+1D0h+var_1F0]
/*14077e7eb*/  mov rsi, [rbp+1D0h+var_138]
/*14077e7f2*/  mov rdx, rsi
/*14077e7f5*/  mov r8, rdi
/*14077e7f8*/  call sub_1407641E0
/*14077e7fd*/  nop
loc_14077E7FE: /*14077e7fe*/ mov rcx, rsi
/*14077e801*/  mov rdx, rdi
/*14077e804*/  call sub_14076BAC0
/*14077e809*/  nop
/*14077e80a*/  mov bl, al
/*14077e80c*/  lea rcx, [rbp+1D0h+var_110]
/*14077e813*/  mov rdx, [rbp+1D0h+var_138]
/*14077e81a*/  mov r8, rdi
/*14077e81d*/  call sub_14076CD80
/*14077e822*/  nop
/*14077e823*/  mov rsi, qword ptr [rbp+1D0h+var_110]
/*14077e82a*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*14077e82e*/  jz short loc_14077E85C
/*14077e830*/  test rsi, rsi
/*14077e833*/  jz short loc_14077E86E
/*14077e835*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077e83c*/  mov r8d, 1
/*14077e842*/  mov rdx, rsi
/*14077e845*/  call sub_140001660
/*14077e84a*/  jmp short loc_14077E86E
loc_14077E84C: /*14077e84c*/ mov qword ptr [rsi], 2
/*14077e853*/  mov [rsi+8], rcx
/*14077e857*/  jmp loc_14077F1D2
loc_14077E85C: /*14077e85c*/ cmp [rbp+1D0h+var_168], 0
/*14077e861*/  setz al
/*14077e864*/  not bl
/*14077e866*/  test bl, al
/*14077e868*/  jnz loc_14077E929
loc_14077E86E: /*14077e86e*/ lea rcx, [rbp+1D0h+var_110]
/*14077e875*/  mov rdx, [rbp+1D0h+var_160]
/*14077e879*/  call backup_config_before_fix
/*14077e87e*/  nop
/*14077e87f*/  mov rax, qword ptr [rbp+1D0h+var_110]
/*14077e886*/  mov rdx, qword ptr [rbp+1D0h+var_110+8]
/*14077e88d*/  mov rcx, qword ptr [rbp+1D0h+var_100]
/*14077e894*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14077e898*/  jz short loc_14077E8F8
/*14077e89a*/  movups xmm0, [rbp+1D0h+var_100+8]
/*14077e8a1*/  movdqu xmm1, [rbp+1D0h+var_E8]
/*14077e8a9*/  movups xmm2, [rbp+1D0h+var_D8]
/*14077e8b0*/  movups xmm3, [rbp+1D0h+var_C8]
/*14077e8b7*/  movaps [rbp+1D0h+var_1C0], xmm0
/*14077e8bb*/  mov r8, [rbp+1D0h+var_B8]
/*14077e8c2*/  mov r9, [rbp+1D0h+var_140]
/*14077e8c9*/  mov [r9+58h], r8
/*14077e8cd*/  movups xmmword ptr [r9+48h], xmm3
/*14077e8d2*/  movups xmmword ptr [r9+38h], xmm2
/*14077e8d7*/  movdqu xmmword ptr [r9+28h], xmm1
/*14077e8dd*/  mov [r9+8], rdx
/*14077e8e1*/  mov [r9+10h], rcx
/*14077e8e5*/  movdqa xmm0, [rbp+1D0h+var_1C0]
/*14077e8ea*/  movdqu xmmword ptr [r9+18h], xmm0
/*14077e8f0*/  mov [r9], rax
/*14077e8f3*/  jmp loc_14077E97A
loc_14077E8F8: /*14077e8f8*/ lea rax, [rdx-1]
/*14077e8fc*/  cmp rax, 0FFFFFFFFFFFFFFFDh
/*14077e900*/  ja short loc_14077E90D
/*14077e902*/  mov r8d, 1
/*14077e908*/  call sub_140001660
loc_14077E90D: /*14077e90d*/ test rdi, rdi
/*14077e910*/  jns loc_14077EA79
/*14077e916*/  xor ebx, ebx
loc_14077E918: /*14077e918*/ mov rcx, rbx
/*14077e91b*/  mov rdx, rdi
/*14077e91e*/  call sub_1416C2D4B
/*14077e924*/  jmp loc_14078020B
loc_14077E929: /*14077e929*/ call nullsub_1
/*14077e92e*/  mov ecx, 12h
/*14077e933*/  mov edx, 1
/*14077e938*/  call sub_140001650
/*14077e93d*/  test rax, rax
/*14077e940*/  jz loc_1407801FB
/*14077e946*/  movdqu xmm0, cs:xmmword_14178DFAA
/*14077e94e*/  movdqu xmmword ptr [rax], xmm0
/*14077e952*/  mov word ptr [rax+10h], 9995h
/*14077e958*/  mov rcx, [rbp+1D0h+var_140]
/*14077e95f*/  mov qword ptr [rcx+8], 12h
/*14077e967*/  mov [rcx+10h], rax
/*14077e96b*/  mov qword ptr [rcx+18h], 12h
/*14077e973*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_14077E97A: /*14077e97a*/ mov rsi, [rbp+1D0h+var_170]
/*14077e97e*/  mov rdi, [rbp+1D0h+var_168]
/*14077e982*/  test rdi, rdi
/*14077e985*/  jz short loc_14077E9B2
/*14077e987*/  lea rbx, [rsi+8]
/*14077e98b*/  jmp short loc_14077E999
loc_14077E990: /*14077e990*/ add rbx, 18h
/*14077e994*/  dec rdi
/*14077e997*/  jz short loc_14077E9B2
loc_14077E999: /*14077e999*/ mov rdx, [rbx-8]
/*14077e99d*/  test rdx, rdx
/*14077e9a0*/  jz short loc_14077E990
/*14077e9a2*/  mov rcx, [rbx]
/*14077e9a5*/  mov r8d, 1
/*14077e9ab*/  call sub_140001660
/*14077e9b0*/  jmp short loc_14077E990
loc_14077E9B2: /*14077e9b2*/ mov rax, [rbp+1D0h+var_178]
/*14077e9b6*/  test rax, rax
/*14077e9b9*/  jz short loc_14077E9D1
/*14077e9bb*/  shl rax, 3
/*14077e9bf*/  lea rdx, [rax+rax*2]
/*14077e9c3*/  mov r8d, 8
/*14077e9c9*/  mov rcx, rsi
/*14077e9cc*/  call sub_140001660
loc_14077E9D1: /*14077e9d1*/ mov rsi, qword ptr [rbp+1D0h+var_1F0+8]
/*14077e9d5*/  test rsi, rsi
/*14077e9d8*/  jz loc_14077F1B7
/*14077e9de*/  mov rdi, qword ptr [rbp+1D0h+var_1E0+8]
/*14077e9e2*/  test rdi, rdi
/*14077e9e5*/  jz loc_14077F189
/*14077e9eb*/  mov rbx, qword ptr [rbp+1D0h+var_1F0]
/*14077e9ef*/  movdqa xmm0, xmmword ptr [rbx]
/*14077e9f3*/  lea r14, [rbx+10h]
/*14077e9f7*/  pmovmskb r15d, xmm0
/*14077e9fc*/  not r15d
/*14077e9ff*/  jmp short loc_14077EA26
loc_14077EA10: /*14077ea10*/ dec rdi
/*14077ea13*/  lea eax, [r15-1]
/*14077ea17*/  and eax, r15d
/*14077ea1a*/  mov r15d, eax
/*14077ea1d*/  test rdi, rdi
/*14077ea20*/  jz loc_14077F189
loc_14077EA26: /*14077ea26*/ test r15w, r15w
/*14077ea2a*/  jnz short loc_14077EA4E
/*14077ea2c*/  nop dword ptr [rax+00h]
loc_14077EA30: /*14077ea30*/ movdqa xmm0, xmmword ptr [r14]
/*14077ea35*/  add rbx, 0FFFFFFFFFFFFFE80h
/*14077ea3c*/  add r14, 10h
/*14077ea40*/  pmovmskb r15d, xmm0
/*14077ea45*/  xor r15d, 0FFFFh
/*14077ea4c*/  jz short loc_14077EA30
loc_14077EA4E: /*14077ea4e*/ tzcnt eax, r15d
/*14077ea53*/  neg rax
/*14077ea56*/  lea rax, [rax+rax*2]
/*14077ea5a*/  mov rdx, [rbx+rax*8-18h]
/*14077ea5f*/  test rdx, rdx
/*14077ea62*/  jz short loc_14077EA10
/*14077ea64*/  lea rax, [rbx+rax*8]
/*14077ea68*/  mov rcx, [rax-10h]
/*14077ea6c*/  mov r8d, 1
/*14077ea72*/  call sub_140001660
/*14077ea77*/  jmp short loc_14077EA10
loc_14077EA79: /*14077ea79*/ mov [rbp+1D0h+var_210], rsi
/*14077ea7d*/  jz short loc_14077EAA0
/*14077ea7f*/  call nullsub_1
/*14077ea84*/  mov ebx, 1
/*14077ea89*/  mov edx, 1
/*14077ea8e*/  mov rcx, rdi
/*14077ea91*/  call sub_140001650
/*14077ea96*/  test rax, rax
/*14077ea99*/  jnz short loc_14077EAA5
/*14077ea9b*/  jmp loc_14077E918
loc_14077EAA0: /*14077eaa0*/ mov eax, 1
loc_14077EAA5: /*14077eaa5*/ mov [rbp+1D0h+var_128], rdi
/*14077eaac*/  mov [rbp+1D0h+var_130], rax
/*14077eab3*/  mov [rbp+1D0h+var_120], rax
/*14077eaba*/  mov [rbp+1D0h+var_118], 0
/*14077eac5*/  mov qword ptr [rbp+1D0h+var_110], 0
/*14077ead0*/  mov qword ptr [rbp+1D0h+var_110+8], rdi
/*14077ead7*/  lea rbx, [rbp+1D0h+var_100]
/*14077eade*/  mov rax, [rbp+1D0h+var_138]
/*14077eae5*/  mov qword ptr [rbp+1D0h+var_100], rax
/*14077eaec*/  mov qword ptr [rbp+1D0h+var_100+8], rdi
/*14077eaf3*/  mov [rbp+1D0h+var_F0], 0
/*14077eafe*/  mov qword ptr [rbp+1D0h+var_E8], rdi
/*14077eb05*/  mov rax, 0A0000000Ah
/*14077eb0f*/  mov qword ptr [rbp+1D0h+var_E8+8], rax
/*14077eb16*/  mov byte ptr [rbp+1D0h+var_D8], 1
/*14077eb1d*/  mov word ptr [rbp+1D0h+var_D8+8], 0
/*14077eb26*/  mov sil, 1
/*14077eb29*/  xor edi, edi
/*14077eb2b*/  movdqa xmm6, cs:xmmword_141748EC0
/*14077eb33*/  jmp short loc_14077EB6F
loc_14077EB35: /*14077eb35*/ mov rax, [r14]
/*14077eb38*/  xor rax, cs:qword_1417532B0
/*14077eb3f*/  mov ecx, [r14+8]
/*14077eb43*/  xor ecx, cs:dword_1417532B8
/*14077eb49*/  or rcx, rax
/*14077eb4c*/  jz loc_14077EC7A
/*14077eb52*/  nop word ptr [rax+rax+00000000h]
loc_14077EB60: /*14077eb60*/ xor esi, esi
/*14077eb62*/  cmp byte ptr [rbp+1D0h+var_D8+9], 0
/*14077eb69*/  jnz loc_14077EE2B
loc_14077EB6F: /*14077eb6f*/ mov r12, qword ptr [rbp+1D0h+var_100]
loc_14077EB76: /*14077eb76*/ lea rcx, [rbp+1D0h+var_1C0]
/*14077eb7a*/  mov rdx, rbx
/*14077eb7d*/  call sub_1407BC790
/*14077eb82*/  nop
/*14077eb83*/  cmp dword ptr [rbp+1D0h+var_1C0], 1
/*14077eb87*/  jnz short loc_14077EBB0
/*14077eb89*/  mov r13, [rbp+1D0h+var_1B0]
/*14077eb8d*/  mov rax, qword ptr [rbp+1D0h+var_110]
/*14077eb94*/  mov qword ptr [rbp+1D0h+var_110], r13
/*14077eb9b*/  sub r13, rax
/*14077eb9e*/  add r12, rax
/*14077eba1*/  test r13, r13
/*14077eba4*/  jnz short loc_14077EBF2
/*14077eba6*/  jmp short loc_14077EC20
loc_14077EBB0: /*14077ebb0*/ cmp byte ptr [rbp+1D0h+var_D8+9], 0
/*14077ebb7*/  jnz loc_14077EE2B
/*14077ebbd*/  mov byte ptr [rbp+1D0h+var_D8+9], 1
/*14077ebc4*/  mov r12, qword ptr [rbp+1D0h+var_110]
/*14077ebcb*/  mov r13, qword ptr [rbp+1D0h+var_110+8]
/*14077ebd2*/  sub r13, r12
/*14077ebd5*/  setnz al
/*14077ebd8*/  or al, byte ptr [rbp+1D0h+var_D8+8]
/*14077ebde*/  cmp al, 1
/*14077ebe0*/  jnz loc_14077EE2B
/*14077ebe6*/  add r12, qword ptr [rbp+1D0h+var_100]
/*14077ebed*/  test r13, r13
/*14077ebf0*/  jz short loc_14077EC20
loc_14077EBF2: /*14077ebf2*/ cmp byte ptr [r12+r13-1], 0Ah
/*14077ebf8*/  jnz short loc_14077EC20
/*14077ebfa*/  mov rax, r13
/*14077ebfd*/  dec rax
/*14077ec00*/  jz short loc_14077EC10
/*14077ec02*/  cmp byte ptr [r12+r13-2], 0Dh
/*14077ec08*/  jnz short loc_14077EC15
/*14077ec0a*/  add r13, 0FFFFFFFFFFFFFFFEh
/*14077ec0e*/  jmp short loc_14077EC20
loc_14077EC10: /*14077ec10*/ xor r13d, r13d
/*14077ec13*/  jmp short loc_14077EC20
loc_14077EC15: /*14077ec15*/ mov r13, rax
/*14077ec18*/  nop dword ptr [rax+rax+00000000h]
loc_14077EC20: /*14077ec20*/ mov rcx, r12
/*14077ec23*/  mov rdx, r13
/*14077ec26*/  call sub_14033BC10
/*14077ec2b*/  nop
loc_14077EC2C: /*14077ec2c*/ test rdx, rdx
/*14077ec2f*/  jz short loc_14077EC7A
/*14077ec31*/  cmp byte ptr [rax], 5Bh ; '['
/*14077ec34*/  jnz short loc_14077EC70
/*14077ec36*/  cmp byte ptr [rax+rdx-1], 5Dh ; ']'
/*14077ec3b*/  jnz short loc_14077EC70
/*14077ec3d*/  cmp rdx, 1
/*14077ec41*/  jz loc_1407801DA
/*14077ec47*/  cmp byte ptr [rax+1], 0BFh
/*14077ec4b*/  jle loc_1407801DA
/*14077ec51*/  lea rcx, [rdx-2]
/*14077ec55*/  cmp rcx, 10h
/*14077ec59*/  jnb loc_14077ECF5
/*14077ec5f*/  cmp rcx, 9
/*14077ec63*/  jb short loc_14077EC7A
/*14077ec65*/  jmp loc_14077ED0A
loc_14077EC70: /*14077ec70*/ test sil, 1
/*14077ec74*/  jz loc_14077EB60
loc_14077EC7A: /*14077ec7a*/ mov rdx, [rbp+1D0h+var_128]
/*14077ec81*/  mov rax, rdx
/*14077ec84*/  sub rax, rdi
/*14077ec87*/  cmp r13, rax
/*14077ec8a*/  ja loc_14077EDC8
/*14077ec90*/  test r13, r13
/*14077ec93*/  jz short loc_14077ECB1
loc_14077EC95: /*14077ec95*/ mov rcx, [rbp+1D0h+var_130]
/*14077ec9c*/  add rcx, rdi
/*14077ec9f*/  mov rdx, r12
/*14077eca2*/  mov r8, r13
/*14077eca5*/  call sub_141684120
/*14077ecaa*/  mov rdx, [rbp+1D0h+var_128]
loc_14077ECB1: /*14077ecb1*/ add rdi, r13
/*14077ecb4*/  mov [rbp+1D0h+var_118], rdi
/*14077ecbb*/  cmp rdx, rdi
/*14077ecbe*/  jz loc_14077EE04
loc_14077ECC4: /*14077ecc4*/ mov rax, [rbp+1D0h+var_120]
/*14077eccb*/  mov [rbp+1D0h+var_130], rax
/*14077ecd2*/  mov byte ptr [rax+rdi], 0Ah
/*14077ecd6*/  inc rdi
/*14077ecd9*/  mov [rbp+1D0h+var_118], rdi
/*14077ece0*/  mov sil, 1
/*14077ece3*/  cmp byte ptr [rbp+1D0h+var_D8+9], 0
/*14077ecea*/  jz loc_14077EB6F
/*14077ecf0*/  jmp loc_14077EE2B
loc_14077ECF5: /*14077ecf5*/ movdqu xmm0, xmmword ptr [rax+1]
/*14077ecfa*/  pcmpeqb xmm0, xmm6
/*14077ecfe*/  pmovmskb ecx, xmm0
/*14077ed02*/  cmp ecx, 0FFFFh
/*14077ed08*/  jz short loc_14077ED67
loc_14077ED0A: /*14077ed0a*/ mov rcx, [rax+1]
/*14077ed0e*/  mov r8, 73656C69666F7270h
/*14077ed18*/  xor rcx, r8
/*14077ed1b*/  movzx r8d, byte ptr [rax+9]
/*14077ed20*/  xor r8, 2Eh
/*14077ed24*/  or r8, rcx
/*14077ed27*/  jnz loc_14077EC7A
/*14077ed2d*/  add rdx, 0FFFFFFFFFFFFFFF5h
/*14077ed31*/  lea rcx, [rax+0Ah]
loc_14077ED35: /*14077ed35*/ mov r8d, 22h ; '"'
/*14077ed3b*/  call sub_14033BE90
/*14077ed40*/  nop
/*14077ed41*/  mov r14, rax
/*14077ed44*/  mov r15, rdx
/*14077ed47*/  mov rcx, rax
/*14077ed4a*/  lea r8, [rbp+1D0h+var_1F0]
/*14077ed4e*/  call sub_140763330
/*14077ed53*/  test al, al
/*14077ed55*/  jnz loc_14077EC7A
/*14077ed5b*/  cmp r15, 0Ch
/*14077ed5f*/  jz loc_14077EB35
/*14077ed65*/  jmp short loc_14077ED9F
loc_14077ED67: /*14077ed67*/ add rdx, 0FFFFFFFFFFFFFFEEh
/*14077ed6b*/  lea rcx, [rax+11h]
/*14077ed6f*/  mov r8d, 22h ; '"'
/*14077ed75*/  call sub_14033BE90
/*14077ed7a*/  nop
/*14077ed7b*/  mov r14, rax
/*14077ed7e*/  mov r15, rdx
/*14077ed81*/  mov rcx, rax
/*14077ed84*/  lea r8, [rbp+1D0h+var_1F0]
/*14077ed88*/  call sub_140763330
/*14077ed8d*/  test al, al
/*14077ed8f*/  jnz loc_14077EC7A
/*14077ed95*/  cmp r15, 0Ch
/*14077ed99*/  jz loc_14077EB35
loc_14077ED9F: /*14077ed9f*/ jbe loc_14077EB60
/*14077eda5*/  mov rax, cs:qword_14175334E
/*14077edac*/  xor rax, [r14]
/*14077edaf*/  mov rcx, cs:qword_14175334E+5
/*14077edb6*/  xor rcx, [r14+5]
/*14077edba*/  or rcx, rax
/*14077edbd*/  jnz loc_14077EB60
/*14077edc3*/  jmp loc_14077EC7A
loc_14077EDC8: /*14077edc8*/ mov [rsp+250h+var_230], 1
/*14077edd1*/  mov r9d, 1
/*14077edd7*/  lea rcx, [rbp+1D0h+var_128]
/*14077edde*/  mov rdx, rdi
/*14077ede1*/  mov r8, r13
/*14077ede4*/  call sub_141688D30
/*14077ede9*/  nop
/*14077edea*/  mov rax, [rbp+1D0h+var_120]
/*14077edf1*/  mov [rbp+1D0h+var_130], rax
/*14077edf8*/  mov rdi, [rbp+1D0h+var_118]
/*14077edff*/  jmp loc_14077EC95
loc_14077EE04: /*14077ee04*/ mov [rsp+250h+var_230], 1
/*14077ee0d*/  mov r8d, 1
/*14077ee13*/  mov r9d, 1
/*14077ee19*/  lea rcx, [rbp+1D0h+var_128]
/*14077ee20*/  call sub_141688D30
/*14077ee25*/  nop
/*14077ee26*/  jmp loc_14077ECC4
loc_14077EE2B: /*14077ee2b*/ mov rsi, [rbp+1D0h+var_128]
/*14077ee32*/  test rdi, rdi
/*14077ee35*/  jns short loc_14077EE5F
/*14077ee37*/  xor ebx, ebx
/*14077ee39*/  mov rax, [rbp+1D0h+var_130]
loc_14077EE40: /*14077ee40*/ mov [rbp+1D0h+var_148], rax
/*14077ee47*/  mov [rbp+1D0h+var_150], rsi
loc_14077EE4E: /*14077ee4e*/ mov rcx, rbx
/*14077ee51*/  mov rdx, rdi
/*14077ee54*/  call sub_1416C2D4B
/*14077ee5a*/  jmp loc_14078020B
loc_14077EE5F: /*14077ee5f*/ mov rax, [rbp+1D0h+var_160]
/*14077ee63*/  mov rcx, [rax+308h]
/*14077ee6a*/  mov [rbp+1D0h+var_208], rcx
/*14077ee6e*/  mov rax, [rax+310h]
/*14077ee75*/  mov [rbp+1D0h+var_200], rax
/*14077ee79*/  mov [rbp+1D0h+var_1F8], rsi
/*14077ee7d*/  jz short loc_14077EEA7
/*14077ee7f*/  call nullsub_1
/*14077ee84*/  mov ebx, 1
/*14077ee89*/  mov edx, 1
/*14077ee8e*/  mov rcx, rdi
/*14077ee91*/  call sub_140001650
/*14077ee96*/  mov r15, rax
/*14077ee99*/  test rax, rax
/*14077ee9c*/  mov rax, [rbp+1D0h+var_130]
/*14077eea3*/  jnz short loc_14077EEB4
/*14077eea5*/  jmp short loc_14077EE40
loc_14077EEA7: /*14077eea7*/ mov r15d, 1
/*14077eead*/  mov rax, [rbp+1D0h+var_130]
loc_14077EEB4: /*14077eeb4*/ mov [rbp+1D0h+var_A8], rdi
/*14077eebb*/  mov [rbp+1D0h+var_A0], r15
/*14077eec2*/  mov [rbp+1D0h+var_98], 0
/*14077eecd*/  mov qword ptr [rbp+1D0h+var_1C0], 0
/*14077eed5*/  mov qword ptr [rbp+1D0h+var_1C0+8], rdi
/*14077eed9*/  mov [rbp+1D0h+var_1B0], rax
/*14077eedd*/  mov [rbp+1D0h+var_1A8], rdi
/*14077eee1*/  mov [rbp+1D0h+var_1A0], 0
/*14077eee9*/  mov [rbp+1D0h+var_198], rdi
/*14077eeed*/  mov rax, 0A0000000Ah
/*14077eef7*/  mov [rbp+1D0h+var_190], rax
/*14077eefb*/  mov [rbp+1D0h+var_188], 1
/*14077eeff*/  mov [rbp+1D0h+var_180], 0
/*14077ef05*/  xor r13d, r13d
/*14077ef08*/  movdqa xmm6, cs:xmmword_141748F40
/*14077ef10*/  movd xmm7, dword ptr cs:xmmword_141748F50
/*14077ef18*/  movdqa xmm8, cs:xmmword_141748E40
/*14077ef21*/  movdqa xmm9, cs:xmmword_141748E50
/*14077ef2a*/  xor eax, eax
/*14077ef2c*/  mov dword ptr [rbp+1D0h+var_90], 0
/*14077ef36*/  xor esi, esi
/*14077ef38*/  test al, 1
/*14077ef3a*/  jz loc_14077F2ED
loc_14077EF40: /*14077ef40*/ mov rdi, [rbp+1D0h+var_A8]
/*14077ef47*/  mov rdx, [rbp+1D0h+var_1F8]
/*14077ef4b*/  test rdx, rdx
/*14077ef4e*/  jz short loc_14077EF62
/*14077ef50*/  mov r8d, 1
/*14077ef56*/  mov rcx, [rbp+1D0h+var_130]
/*14077ef5d*/  call sub_140001660
loc_14077EF62: /*14077ef62*/ mov rax, [rbp+1D0h+var_160]
/*14077ef66*/  mov rcx, [rax+48h]
/*14077ef6a*/  mov rdx, [rax+50h]
/*14077ef6e*/  mov [rbp+1D0h+var_148], r15
/*14077ef75*/  mov [rbp+1D0h+var_150], rdi
/*14077ef7c*/  mov r8, r15
/*14077ef7f*/  mov r9, r13
/*14077ef82*/  call sub_1408726C0
/*14077ef87*/  nop
/*14077ef88*/  mov rdx, [rbp+1D0h+var_210]
/*14077ef8c*/  test rax, rax
/*14077ef8f*/  mov rcx, [rbp+1D0h+var_140]
/*14077ef96*/  jz short loc_14077EFC2
/*14077ef98*/  mov qword ptr [rcx], 2
/*14077ef9f*/  mov [rcx+8], rax
/*14077efa3*/  test rdi, rdi
/*14077efa6*/  jz loc_14077E97A
/*14077efac*/  mov r8d, 1
/*14077efb2*/  mov rcx, r15
/*14077efb5*/  mov rdx, rdi
/*14077efb8*/  call sub_140001660
/*14077efbd*/  jmp loc_14077E97A
loc_14077EFC2: /*14077efc2*/ xor eax, eax
/*14077efc4*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*14077efc8*/  mov rbx, [rbp+1D0h+var_168]
/*14077efcc*/  mov [rbp+1D0h+var_128], rbx
/*14077efd3*/  lea rcx, unk_14178DFBC
/*14077efda*/  mov edx, 1
/*14077efdf*/  cmovnz rdx, rcx
/*14077efe3*/  mov ecx, 18h
/*14077efe8*/  cmovz rcx, rax
/*14077efec*/  mov qword ptr [rbp+1D0h+var_1C0], rdx
/*14077eff0*/  mov qword ptr [rbp+1D0h+var_1C0+8], rcx
/*14077eff4*/  lea rax, [rbp+1D0h+var_128]
/*14077effb*/  mov qword ptr [rbp+1D0h+var_110], rax
/*14077f002*/  lea rax, sub_1414AC520
/*14077f009*/  mov qword ptr [rbp+1D0h+var_110+8], rax
/*14077f010*/  lea rax, [rbp+1D0h+var_1C0]
/*14077f014*/  mov qword ptr [rbp+1D0h+var_100], rax
/*14077f01b*/  lea rax, sub_14041F680
/*14077f022*/  mov qword ptr [rbp+1D0h+var_100+8], rax
/*14077f029*/  mov [rbp+1D0h+var_148], r15
/*14077f030*/  mov [rbp+1D0h+var_150], rdi
/*14077f037*/  lea rdx, unk_14178DFD4
/*14077f03e*/  lea rcx, [rbp+1D0h+var_228]
/*14077f042*/  lea r8, [rbp+1D0h+var_110]
/*14077f049*/  call sub_14149C0F0
/*14077f04e*/  nop
/*14077f04f*/  mov rax, [rbp+1D0h+var_218]
/*14077f053*/  mov rcx, [rbp+1D0h+var_140]
/*14077f05a*/  mov [rcx+18h], rax
/*14077f05e*/  movdqu xmm0, [rbp+1D0h+var_228]
/*14077f063*/  movdqu xmmword ptr [rcx+8], xmm0
/*14077f068*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14077f06f*/  test rdi, rdi
/*14077f072*/  jz short loc_14077F089
/*14077f074*/  mov r8d, 1
/*14077f07a*/  mov rcx, r15
/*14077f07d*/  mov rdx, rdi
/*14077f080*/  call sub_140001660
/*14077f085*/  mov rbx, [rbp+1D0h+var_168]
loc_14077F089: /*14077f089*/ mov rsi, [rbp+1D0h+var_170]
/*14077f08d*/  test rbx, rbx
/*14077f090*/  jz short loc_14077F0C2
/*14077f092*/  lea rdi, [rsi+8]
/*14077f096*/  jmp short loc_14077F0A9
loc_14077F0A0: /*14077f0a0*/ add rdi, 18h
/*14077f0a4*/  dec rbx
/*14077f0a7*/  jz short loc_14077F0C2
loc_14077F0A9: /*14077f0a9*/ mov rdx, [rdi-8]
/*14077f0ad*/  test rdx, rdx
/*14077f0b0*/  jz short loc_14077F0A0
/*14077f0b2*/  mov rcx, [rdi]
/*14077f0b5*/  mov r8d, 1
/*14077f0bb*/  call sub_140001660
/*14077f0c0*/  jmp short loc_14077F0A0
loc_14077F0C2: /*14077f0c2*/ mov rax, [rbp+1D0h+var_178]
/*14077f0c6*/  test rax, rax
/*14077f0c9*/  jz short loc_14077F0E1
/*14077f0cb*/  shl rax, 3
/*14077f0cf*/  lea rdx, [rax+rax*2]
/*14077f0d3*/  mov r8d, 8
/*14077f0d9*/  mov rcx, rsi
/*14077f0dc*/  call sub_140001660
loc_14077F0E1: /*14077f0e1*/ mov rsi, qword ptr [rbp+1D0h+var_1F0+8]
/*14077f0e5*/  test rsi, rsi
/*14077f0e8*/  jz loc_14077F1B7
/*14077f0ee*/  mov rdi, qword ptr [rbp+1D0h+var_1E0+8]
/*14077f0f2*/  test rdi, rdi
/*14077f0f5*/  jz loc_14077F189
/*14077f0fb*/  mov rbx, qword ptr [rbp+1D0h+var_1F0]
/*14077f0ff*/  movdqa xmm0, xmmword ptr [rbx]
/*14077f103*/  lea r14, [rbx+10h]
/*14077f107*/  pmovmskb r15d, xmm0
/*14077f10c*/  not r15d
/*14077f10f*/  jmp short loc_14077F132
loc_14077F120: /*14077f120*/ dec rdi
/*14077f123*/  lea eax, [r15-1]
/*14077f127*/  and eax, r15d
/*14077f12a*/  mov r15d, eax
/*14077f12d*/  test rdi, rdi
/*14077f130*/  jz short loc_14077F189
loc_14077F132: /*14077f132*/ test r15w, r15w
/*14077f136*/  jnz short loc_14077F15E
/*14077f138*/  nop dword ptr [rax+rax+00000000h]
loc_14077F140: /*14077f140*/ movdqa xmm0, xmmword ptr [r14]
/*14077f145*/  add rbx, 0FFFFFFFFFFFFFE80h
/*14077f14c*/  add r14, 10h
/*14077f150*/  pmovmskb r15d, xmm0
/*14077f155*/  xor r15d, 0FFFFh
/*14077f15c*/  jz short loc_14077F140
loc_14077F15E: /*14077f15e*/ tzcnt eax, r15d
/*14077f163*/  neg rax
/*14077f166*/  lea rax, [rax+rax*2]
/*14077f16a*/  mov rdx, [rbx+rax*8-18h]
/*14077f16f*/  test rdx, rdx
/*14077f172*/  jz short loc_14077F120
/*14077f174*/  lea rax, [rbx+rax*8]
/*14077f178*/  mov rcx, [rax-10h]
/*14077f17c*/  mov r8d, 1
/*14077f182*/  call sub_140001660
/*14077f187*/  jmp short loc_14077F120
loc_14077F189: /*14077f189*/ lea rax, [rsi+rsi*2]
/*14077f18d*/  lea rax, ds:27h[rax*8]
/*14077f195*/  and rax, 0FFFFFFFFFFFFFFF0h
/*14077f199*/  add rsi, rax
/*14077f19c*/  add rsi, 11h
/*14077f1a0*/  jz short loc_14077F1B7
/*14077f1a2*/  mov rcx, qword ptr [rbp+1D0h+var_1F0]
/*14077f1a6*/  sub rcx, rax
/*14077f1a9*/  mov r8d, 10h
/*14077f1af*/  mov rdx, rsi
/*14077f1b2*/  call sub_140001660
loc_14077F1B7: /*14077f1b7*/ mov rdx, [rbp+1D0h+var_158]
/*14077f1bb*/  test rdx, rdx
/*14077f1be*/  jz short loc_14077F1D2
/*14077f1c0*/  mov r8d, 1
/*14077f1c6*/  mov rcx, [rbp+1D0h+var_138]
/*14077f1cd*/  call sub_140001660
loc_14077F1D2: /*14077f1d2*/ movaps xmm6, [rbp+1D0h+var_80]
/*14077f1d9*/  movaps xmm7, [rbp+1D0h+var_70]
/*14077f1e0*/  movaps xmm8, [rbp+1D0h+var_60]
/*14077f1e8*/  movaps xmm9, [rbp+1D0h+var_50]
/*14077f1f0*/  add rsp, 218h
/*14077f1f7*/  pop rbx
/*14077f1f8*/  pop rdi
/*14077f1f9*/  pop rsi
/*14077f1fa*/  pop r12
/*14077f1fc*/  pop r13
/*14077f1fe*/  pop r14
/*14077f200*/  pop r15
/*14077f202*/  pop rbp
/*14077f203*/  retn
loc_14077F204: /*14077f204*/ call sub_141486EF0
/*14077f209*/  nop
/*14077f20a*/  mov [r15], rax
/*14077f20d*/  mov [r15+8], rdx
/*14077f211*/  mov byte ptr [r15+10h], 1
/*14077f216*/  jmp loc_14077E777
loc_14077F21B: /*14077f21b*/ lea r8, [rbp+1D0h+var_F0]
/*14077f222*/  lea rcx, [rbp+1D0h+var_110]
/*14077f229*/  mov rdx, rbx
/*14077f22c*/  mov r9b, 1
/*14077f22f*/  call sub_1416BA580
/*14077f234*/  nop
/*14077f235*/  xor esi, esi
/*14077f237*/  lea r15, [rbp+1D0h+var_1C0]
/*14077f23b*/  lea r12, [rbp+1D0h+var_110]
loc_14077F242: /*14077f242*/ imul rdx, rsi, 0E8h
/*14077f249*/  add rdx, r14
/*14077f24c*/  mov rcx, r15
/*14077f24f*/  call sub_14149C500
/*14077f254*/  nop
/*14077f255*/  mov rcx, r12
/*14077f258*/  mov rdx, r15
/*14077f25b*/  call sub_140474440
/*14077f260*/  nop
/*14077f261*/  inc rsi
/*14077f264*/  cmp rsi, rbx
/*14077f267*/  jnz short loc_14077F242
/*14077f269*/  jmp loc_14077E7B3
loc_14077F26E: /*14077f26e*/ mov [rsp+250h+var_230], 1
/*14077f277*/  mov r9d, 1
/*14077f27d*/  lea rcx, [rbp+1D0h+var_A8]
/*14077f284*/  mov rdx, r13
/*14077f287*/  mov r8, r12
/*14077f28a*/  call sub_141688D30
/*14077f28f*/  nop
loc_14077F290: /*14077f290*/ mov r15, [rbp+1D0h+var_A0]
/*14077f297*/  mov r13, [rbp+1D0h+var_98]
loc_14077F29E: /*14077f29e*/ add r15, r13
/*14077f2a1*/  mov rcx, r15
/*14077f2a4*/  mov rdx, r14
/*14077f2a7*/  mov r8, r12
/*14077f2aa*/  call sub_141684120
/*14077f2af*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077F2B6: /*14077f2b6*/ add r13, r12
/*14077f2b9*/  mov [rbp+1D0h+var_98], r13
/*14077f2c0*/  cmp rdx, r13
/*14077f2c3*/  jz loc_1407800C6
loc_14077F2C9: /*14077f2c9*/ mov r15, [rbp+1D0h+var_A0]
/*14077f2d0*/  mov byte ptr [r15+r13], 0Ah
/*14077f2d5*/  inc r13
/*14077f2d8*/  mov [rbp+1D0h+var_98], r13
loc_14077F2DF: /*14077f2df*/ xor esi, esi
/*14077f2e1*/  movzx eax, byte ptr [rbp+1D0h+var_180+1]
/*14077f2e5*/  test al, 1
/*14077f2e7*/  jnz loc_14077EF40
loc_14077F2ED: /*14077f2ed*/ mov r14, [rbp+1D0h+var_1B0]
loc_14077F2F1: /*14077f2f1*/ lea rcx, [rbp+1D0h+var_110]
/*14077f2f8*/  lea rdx, [rbp+1D0h+var_1B0]
/*14077f2fc*/  call sub_1407BC790
/*14077f301*/  nop
/*14077f302*/  cmp dword ptr [rbp+1D0h+var_110], 1
/*14077f309*/  jnz short loc_14077F330
/*14077f30b*/  mov r12, qword ptr [rbp+1D0h+var_100]
/*14077f312*/  mov rax, qword ptr [rbp+1D0h+var_1C0]
/*14077f316*/  mov qword ptr [rbp+1D0h+var_1C0], r12
/*14077f31a*/  sub r12, rax
/*14077f31d*/  add r14, rax
/*14077f320*/  test r12, r12
/*14077f323*/  jnz short loc_14077F360
/*14077f325*/  jmp short loc_14077F390
loc_14077F330: /*14077f330*/ cmp byte ptr [rbp+1D0h+var_180+1], 0
/*14077f334*/  jnz loc_14077EF40
/*14077f33a*/  mov byte ptr [rbp+1D0h+var_180+1], 1
/*14077f33e*/  mov r14, qword ptr [rbp+1D0h+var_1C0]
/*14077f342*/  mov r12, qword ptr [rbp+1D0h+var_1C0+8]
/*14077f346*/  sub r12, r14
/*14077f349*/  setnz al
/*14077f34c*/  or al, byte ptr [rbp+1D0h+var_180]
/*14077f34f*/  cmp al, 1
/*14077f351*/  jnz loc_14077EF40
/*14077f357*/  add r14, [rbp+1D0h+var_1B0]
/*14077f35b*/  test r12, r12
/*14077f35e*/  jz short loc_14077F390
loc_14077F360: /*14077f360*/ cmp byte ptr [r14+r12-1], 0Ah
/*14077f366*/  jnz short loc_14077F390
/*14077f368*/  mov rax, r12
/*14077f36b*/  dec rax
/*14077f36e*/  jz short loc_14077F37E
/*14077f370*/  cmp byte ptr [r14+r12-2], 0Dh
/*14077f376*/  jnz short loc_14077F383
/*14077f378*/  add r12, 0FFFFFFFFFFFFFFFEh
/*14077f37c*/  jmp short loc_14077F390
loc_14077F37E: /*14077f37e*/ xor r12d, r12d
/*14077f381*/  jmp short loc_14077F390
loc_14077F383: /*14077f383*/ mov r12, rax
/*14077f386*/  nop word ptr [rax+rax+00000000h]
loc_14077F390: /*14077f390*/ mov rcx, r14
/*14077f393*/  mov rdx, r12
/*14077f396*/  call sub_14033BC10
/*14077f39b*/  nop
loc_14077F39C: /*14077f39c*/ mov rdi, rax
/*14077f39f*/  mov rbx, rdx
/*14077f3a2*/  lea rax, [rdx-1Eh]; switch 35 cases
/*14077f3a6*/  cmp rax, 22h
/*14077f3aa*/  ja def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
/*14077f3b0*/  lea rcx, jpt_14077F3BE
/*14077f3b7*/  movsxd rax, ds:(jpt_14077F3BE - 141791BF8h)[rcx+rax*4]
/*14077f3bb*/  add rax, rcx
/*14077f3be*/  jmp rax; switch jump
loc_14077F3C0: /*14077f3c0*/ movdqu xmm0, xmmword ptr [rdi]; jumptable 000000014077F3BE case 30
/*14077f3c4*/  pcmpeqb xmm0, xmm9
/*14077f3c9*/  movdqu xmm1, xmmword ptr [rdi+0Eh]
/*14077f3ce*/  pcmpeqb xmm1, xmm8
/*14077f3d3*/  pand xmm1, xmm0
/*14077f3d7*/  pmovmskb eax, xmm1
/*14077f3db*/  cmp eax, 0FFFFh
/*14077f3e0*/  jnz def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
/*14077f3e6*/  jmp short loc_14077F43A
loc_14077F3E8: /*14077f3e8*/ mov r8d, 27h ; '''; jumptable 000000014077F3BE case 39
/*14077f3ee*/  mov rcx, rdi
/*14077f3f1*/  lea rdx, aAimamiRelayCod_0; "# <<< aimami-relay codex-router top end"
/*14077f3f8*/  call sub_1416847B0
/*14077f3fd*/  test eax, eax
/*14077f3ff*/  jnz short def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
/*14077f401*/  jmp short loc_14077F43A
loc_14077F403: /*14077f403*/ mov r8d, 40h ; '@'; jumptable 000000014077F3BE case 64
/*14077f409*/  mov rcx, rdi
/*14077f40c*/  lea rdx, aAimamiRelayCod_1; "# >>> aimami-relay codex-router top sta"...
/*14077f413*/  call sub_1416847B0
/*14077f418*/  test eax, eax
/*14077f41a*/  jnz short def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
/*14077f41c*/  jmp loc_14077F616
loc_14077F421: /*14077f421*/ mov r8d, 24h ; '$'; jumptable 000000014077F3BE case 36
/*14077f427*/  mov rcx, rdi
/*14077f42a*/  lea rdx, aAimamiRelayMan_3; "# <<< aimami-relay managed end (top)"
/*14077f431*/  call sub_1416847B0
/*14077f436*/  test eax, eax
/*14077f438*/  jnz short def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
loc_14077F43A: /*14077f43a*/ mov rdx, [rbp+1D0h+var_A8]
/*14077f441*/  mov rax, rdx
/*14077f444*/  sub rax, r13
/*14077f447*/  cmp r12, rax
/*14077f44a*/  ja loc_14077F26E
/*14077f450*/  test r12, r12
/*14077f453*/  jnz loc_14077F29E
/*14077f459*/  jmp loc_14077F2B6
loc_14077F45E: /*14077f45e*/ mov r8d, 37h ; '7'; jumptable 000000014077F3BE case 55
/*14077f464*/  mov rcx, rdi
/*14077f467*/  lea rdx, aAimamiRelayMan_4; "# >>> aimami-relay managed start (DO NO"...
/*14077f46e*/  call sub_1416847B0
/*14077f473*/  test eax, eax
/*14077f475*/  jz loc_14077F616
/*14077f47b*/  nop dword ptr [rax+rax+00h]
def_14077F3BE: /*14077f480*/ test sil, 1; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
/*14077f484*/  jz short loc_14077F500
/*14077f486*/  mov rdx, [rbp+1D0h+var_A8]
/*14077f48d*/  mov rax, rdx
/*14077f490*/  sub rax, r13
/*14077f493*/  cmp r12, rax
/*14077f496*/  ja loc_140780035
/*14077f49c*/  test r12, r12
/*14077f49f*/  jz short loc_14077F4B9
loc_14077F4A1: /*14077f4a1*/ add r15, r13
/*14077f4a4*/  mov rcx, r15
/*14077f4a7*/  mov rdx, r14
/*14077f4aa*/  mov r8, r12
/*14077f4ad*/  call sub_141684120
/*14077f4b2*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077F4B9: /*14077f4b9*/ add r13, r12
/*14077f4bc*/  mov [rbp+1D0h+var_98], r13
/*14077f4c3*/  cmp rdx, r13
/*14077f4c6*/  jnz loc_14077F65C
loc_14077F4CC: /*14077f4cc*/ mov [rsp+250h+var_230], 1
/*14077f4d5*/  mov r8d, 1
/*14077f4db*/  mov r9d, 1
/*14077f4e1*/  lea rcx, [rbp+1D0h+var_A8]
/*14077f4e8*/  call sub_141688D30
/*14077f4ed*/  nop
loc_14077F4EE: /*14077f4ee*/ jmp loc_14077F65C
loc_14077F500: /*14077f500*/ test rbx, rbx
/*14077f503*/  jz short loc_14077F573
/*14077f505*/  cmp byte ptr [rdi], 5Bh ; '['
/*14077f508*/  jnz short loc_14077F573
/*14077f50a*/  mov rdx, [rbp+1D0h+var_A8]
/*14077f511*/  mov rax, rdx
/*14077f514*/  sub rax, r13
/*14077f517*/  cmp r12, rax
/*14077f51a*/  ja loc_140780122
/*14077f520*/  test r12, r12
/*14077f523*/  jz short loc_14077F53D
loc_14077F525: /*14077f525*/ add r15, r13
/*14077f528*/  mov rcx, r15
/*14077f52b*/  mov rdx, r14
/*14077f52e*/  mov r8, r12
/*14077f531*/  call sub_141684120
/*14077f536*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077F53D: /*14077f53d*/ add r13, r12
/*14077f540*/  mov [rbp+1D0h+var_98], r13
/*14077f547*/  cmp rdx, r13
/*14077f54a*/  jz loc_140780157
loc_14077F550: /*14077f550*/ mov r15, [rbp+1D0h+var_A0]
/*14077f557*/  mov byte ptr [r15+r13], 0Ah
/*14077f55c*/  inc r13
/*14077f55f*/  mov [rbp+1D0h+var_98], r13
/*14077f566*/  mov al, 1
/*14077f568*/  mov dword ptr [rbp+1D0h+var_90], eax
/*14077f56e*/  jmp loc_14077F2DF
loc_14077F573: /*14077f573*/ test byte ptr [rbp+1D0h+var_90], 1
/*14077f57a*/  jz loc_14077F686
/*14077f580*/  test rbx, rbx
/*14077f583*/  setnz al
/*14077f586*/  mov dword ptr [rbp+1D0h+var_90], eax
/*14077f58c*/  mov rdx, [rbp+1D0h+var_A8]
/*14077f593*/  mov rax, rdx
/*14077f596*/  sub rax, r13
/*14077f599*/  cmp r12, rax
/*14077f59c*/  ja loc_1407800ED
/*14077f5a2*/  test r12, r12
/*14077f5a5*/  jz short loc_14077F5BF
loc_14077F5A7: /*14077f5a7*/ add r15, r13
/*14077f5aa*/  mov rcx, r15
/*14077f5ad*/  mov rdx, r14
/*14077f5b0*/  mov r8, r12
/*14077f5b3*/  call sub_141684120
/*14077f5b8*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077F5BF: /*14077f5bf*/ add r13, r12
/*14077f5c2*/  mov [rbp+1D0h+var_98], r13
/*14077f5c9*/  cmp rdx, r13
/*14077f5cc*/  jnz loc_14077F2C9
loc_14077F5D2: /*14077f5d2*/ mov [rsp+250h+var_230], 1
/*14077f5db*/  mov r8d, 1
/*14077f5e1*/  mov r9d, 1
/*14077f5e7*/  lea rcx, [rbp+1D0h+var_A8]
/*14077f5ee*/  call sub_141688D30
/*14077f5f3*/  nop
loc_14077F5F4: /*14077f5f4*/ jmp loc_14077F2C9
loc_14077F5F9: /*14077f5f9*/ mov r8d, 3Ch ; '<'; jumptable 000000014077F3BE case 60
/*14077f5ff*/  mov rcx, rdi
/*14077f602*/  lea rdx, aAimamiRelayMan_5; "# >>> aimami-relay managed start (top, "...
/*14077f609*/  call sub_1416847B0
/*14077f60e*/  test eax, eax
/*14077f610*/  jnz def_14077F3BE; jumptable 000000014077F3BE default case, cases 31-35,37,38,40-54,56-59,61-63
loc_14077F616: /*14077f616*/ mov rdx, [rbp+1D0h+var_A8]
/*14077f61d*/  mov rax, rdx
/*14077f620*/  sub rax, r13
/*14077f623*/  cmp r12, rax
/*14077f626*/  ja loc_14078006A
/*14077f62c*/  test r12, r12
/*14077f62f*/  jz short loc_14077F649
loc_14077F631: /*14077f631*/ add r15, r13
/*14077f634*/  mov rcx, r15
/*14077f637*/  mov rdx, r14
/*14077f63a*/  mov r8, r12
/*14077f63d*/  call sub_141684120
/*14077f642*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077F649: /*14077f649*/ add r13, r12
/*14077f64c*/  mov [rbp+1D0h+var_98], r13
/*14077f653*/  cmp rdx, r13
/*14077f656*/  jz loc_14078009F
loc_14077F65C: /*14077f65c*/ mov r15, [rbp+1D0h+var_A0]
/*14077f663*/  mov byte ptr [r15+r13], 0Ah
/*14077f668*/  inc r13
/*14077f66b*/  mov [rbp+1D0h+var_98], r13
/*14077f672*/  mov sil, 1
/*14077f675*/  movzx eax, byte ptr [rbp+1D0h+var_180+1]
/*14077f679*/  test al, 1
/*14077f67b*/  jz loc_14077F2ED
/*14077f681*/  jmp loc_14077EF40
loc_14077F686: /*14077f686*/ mov rcx, rdi
/*14077f689*/  mov rdx, rbx
/*14077f68c*/  call sub_1407640D0
/*14077f691*/  test al, al
/*14077f693*/  jz loc_14077F8A2
/*14077f699*/  mov qword ptr [rbp+1D0h+var_110+8], 0
/*14077f6a4*/  mov qword ptr [rbp+1D0h+var_100], rbx
/*14077f6ab*/  mov qword ptr [rbp+1D0h+var_100+8], rdi
/*14077f6b2*/  mov [rbp+1D0h+var_F0], rbx
/*14077f6b9*/  mov qword ptr [rbp+1D0h+var_E8], 0
/*14077f6c4*/  mov qword ptr [rbp+1D0h+var_E8+8], rbx
/*14077f6cb*/  mov rax, 3D0000003Dh
/*14077f6d5*/  mov qword ptr [rbp+1D0h+var_D8], rax
/*14077f6dc*/  mov byte ptr [rbp+1D0h+var_D8+8], 1
/*14077f6e3*/  mov word ptr [rbp+1D0h+var_C8], 1
/*14077f6ec*/  mov qword ptr [rbp+1D0h+var_110], 1
loc_14077F6F7: /*14077f6f7*/ lea rcx, [rbp+1D0h+var_128]
/*14077f6fe*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077f705*/  call sub_1407BC790
/*14077f70a*/  nop
/*14077f70b*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077f712*/  jnz short loc_14077F783
/*14077f714*/  mov rsi, [rbp+1D0h+var_118]
/*14077f71b*/  mov qword ptr [rbp+1D0h+var_110+8], rsi
loc_14077F722: /*14077f722*/ mov rax, qword ptr [rbp+1D0h+var_110]
/*14077f729*/  test rax, rax
/*14077f72c*/  jz loc_14077F8A2
/*14077f732*/  cmp rax, 1
/*14077f736*/  jnz loc_14077F7BD
/*14077f73c*/  mov qword ptr [rbp+1D0h+var_110], 0
/*14077f747*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f74e*/  jnz loc_14077F8A2
/*14077f754*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077f75b*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077f762*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077f769*/  jnz short loc_14077F774
/*14077f76b*/  cmp rdx, rsi
/*14077f76e*/  jz loc_14077F8A2
loc_14077F774: /*14077f774*/ sub rdx, rsi
loc_14077F777: /*14077f777*/ add rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077f77e*/  jmp loc_14077F81A
loc_14077F783: /*14077f783*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f78a*/  jnz loc_14077F8A2
/*14077f790*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077f797*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077f79e*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077f7a5*/  jnz loc_14077F722
/*14077f7ab*/  cmp qword ptr [rbp+1D0h+var_100], rsi
/*14077f7b2*/  jz loc_14077F8A2
/*14077f7b8*/  jmp loc_14077F722
loc_14077F7BD: /*14077f7bd*/ dec rax
/*14077f7c0*/  mov qword ptr [rbp+1D0h+var_110], rax
/*14077f7c7*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f7ce*/  jnz loc_14077F8A2
/*14077f7d4*/  mov rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077f7db*/  lea rcx, [rbp+1D0h+var_128]
/*14077f7e2*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077f7e9*/  call sub_1407BC790
/*14077f7ee*/  nop
/*14077f7ef*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077f7f6*/  jnz short loc_14077F870
/*14077f7f8*/  mov rdx, [rbp+1D0h+var_120]
/*14077f7ff*/  mov rax, [rbp+1D0h+var_118]
/*14077f806*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077f80d*/  sub rdx, rcx
/*14077f810*/  add rsi, rcx
/*14077f813*/  mov qword ptr [rbp+1D0h+var_110+8], rax
loc_14077F81A: /*14077f81a*/ mov rcx, rsi
/*14077f81d*/  call sub_14033BC10
/*14077f822*/  nop
/*14077f823*/  mov rcx, rax
/*14077f826*/  mov r8d, 22h ; '"'
/*14077f82c*/  call sub_14033BE90
/*14077f831*/  nop
/*14077f832*/  test rdx, rdx
/*14077f835*/  jz short loc_14077F8A2
/*14077f837*/  mov rsi, rax
/*14077f83a*/  mov rcx, rax
/*14077f83d*/  mov [rbp+1D0h+var_90], rdx
/*14077f844*/  mov rdx, [rbp+1D0h+var_90]
/*14077f84b*/  lea r8, [rbp+1D0h+var_1F0]
/*14077f84f*/  call sub_140763330
/*14077f854*/  mov rdx, [rbp+1D0h+var_90]
/*14077f85b*/  test al, al
/*14077f85d*/  jnz short loc_14077F8A2
/*14077f85f*/  mov rcx, rsi
/*14077f862*/  call sub_14040D400
/*14077f867*/  test al, al
/*14077f869*/  jnz short loc_14077F8A2
/*14077f86b*/  jmp loc_140780006
loc_14077F870: /*14077f870*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f877*/  jnz short loc_14077F8A2
/*14077f879*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077f880*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077f887*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077f88e*/  sub rdx, rsi
/*14077f891*/  setnz al
/*14077f894*/  or al, byte ptr [rbp+1D0h+var_C8]
/*14077f89a*/  cmp al, 1
/*14077f89c*/  jz loc_14077F777
loc_14077F8A2: /*14077f8a2*/ mov rcx, rdi
/*14077f8a5*/  mov rdx, rbx
/*14077f8a8*/  call sub_140786010
/*14077f8ad*/  test al, al
/*14077f8af*/  jz loc_14077FABE
/*14077f8b5*/  mov qword ptr [rbp+1D0h+var_110+8], 0
/*14077f8c0*/  mov qword ptr [rbp+1D0h+var_100], rbx
/*14077f8c7*/  mov qword ptr [rbp+1D0h+var_100+8], rdi
/*14077f8ce*/  mov [rbp+1D0h+var_F0], rbx
/*14077f8d5*/  mov qword ptr [rbp+1D0h+var_E8], 0
/*14077f8e0*/  mov qword ptr [rbp+1D0h+var_E8+8], rbx
/*14077f8e7*/  mov rax, 3D0000003Dh
/*14077f8f1*/  mov qword ptr [rbp+1D0h+var_D8], rax
/*14077f8f8*/  mov byte ptr [rbp+1D0h+var_D8+8], 1
/*14077f8ff*/  mov word ptr [rbp+1D0h+var_C8], 1
/*14077f908*/  mov qword ptr [rbp+1D0h+var_110], 1
/*14077f913*/  lea rcx, [rbp+1D0h+var_128]
/*14077f91a*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077f921*/  call sub_1407BC790
/*14077f926*/  nop
/*14077f927*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077f92e*/  jnz short loc_14077F99F
/*14077f930*/  mov rsi, [rbp+1D0h+var_118]
/*14077f937*/  mov qword ptr [rbp+1D0h+var_110+8], rsi
loc_14077F93E: /*14077f93e*/ mov rax, qword ptr [rbp+1D0h+var_110]
/*14077f945*/  test rax, rax
/*14077f948*/  jz loc_14077FABE
/*14077f94e*/  cmp rax, 1
/*14077f952*/  jnz loc_14077F9D9
/*14077f958*/  mov qword ptr [rbp+1D0h+var_110], 0
/*14077f963*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f96a*/  jnz loc_14077FABE
/*14077f970*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077f977*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077f97e*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077f985*/  jnz short loc_14077F990
/*14077f987*/  cmp rdx, rsi
/*14077f98a*/  jz loc_14077FABE
loc_14077F990: /*14077f990*/ sub rdx, rsi
loc_14077F993: /*14077f993*/ add rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077f99a*/  jmp loc_14077FA36
loc_14077F99F: /*14077f99f*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f9a6*/  jnz loc_14077FABE
/*14077f9ac*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077f9b3*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077f9ba*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077f9c1*/  jnz loc_14077F93E
/*14077f9c7*/  cmp qword ptr [rbp+1D0h+var_100], rsi
/*14077f9ce*/  jz loc_14077FABE
/*14077f9d4*/  jmp loc_14077F93E
loc_14077F9D9: /*14077f9d9*/ dec rax
/*14077f9dc*/  mov qword ptr [rbp+1D0h+var_110], rax
/*14077f9e3*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077f9ea*/  jnz loc_14077FABE
/*14077f9f0*/  mov rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077f9f7*/  lea rcx, [rbp+1D0h+var_128]
/*14077f9fe*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077fa05*/  call sub_1407BC790
/*14077fa0a*/  nop
/*14077fa0b*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077fa12*/  jnz short loc_14077FA8C
/*14077fa14*/  mov rdx, [rbp+1D0h+var_120]
/*14077fa1b*/  mov rax, [rbp+1D0h+var_118]
/*14077fa22*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077fa29*/  sub rdx, rcx
/*14077fa2c*/  add rsi, rcx
/*14077fa2f*/  mov qword ptr [rbp+1D0h+var_110+8], rax
loc_14077FA36: /*14077fa36*/ mov rcx, rsi
/*14077fa39*/  call sub_14033BC10
/*14077fa3e*/  nop
/*14077fa3f*/  mov rcx, rax
/*14077fa42*/  mov r8d, 22h ; '"'
/*14077fa48*/  call sub_14033BE90
/*14077fa4d*/  nop
/*14077fa4e*/  test rdx, rdx
/*14077fa51*/  jz short loc_14077FABE
/*14077fa53*/  mov rsi, rax
/*14077fa56*/  mov rcx, rax
/*14077fa59*/  mov [rbp+1D0h+var_90], rdx
/*14077fa60*/  mov rdx, [rbp+1D0h+var_90]
/*14077fa67*/  lea r8, [rbp+1D0h+var_1F0]
/*14077fa6b*/  call sub_140763330
/*14077fa70*/  mov rdx, [rbp+1D0h+var_90]
/*14077fa77*/  test al, al
/*14077fa79*/  jnz short loc_14077FABE
/*14077fa7b*/  mov rcx, rsi
/*14077fa7e*/  call sub_14040D400
/*14077fa83*/  test al, al
/*14077fa85*/  jnz short loc_14077FABE
/*14077fa87*/  jmp loc_140780006
loc_14077FA8C: /*14077fa8c*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fa93*/  jnz short loc_14077FABE
/*14077fa95*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fa9c*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077faa3*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077faaa*/  sub rdx, rsi
/*14077faad*/  setnz al
/*14077fab0*/  or al, byte ptr [rbp+1D0h+var_C8]
/*14077fab6*/  cmp al, 1
/*14077fab8*/  jz loc_14077F993
loc_14077FABE: /*14077fabe*/ cmp rbx, 12h
/*14077fac2*/  jnb short loc_14077FAD3
/*14077fac4*/  cmp rbx, 0Fh
/*14077fac8*/  jnb loc_14077FD45
/*14077face*/  jmp loc_14077FFAA
loc_14077FAD3: /*14077fad3*/ movdqu xmm0, xmmword ptr [rdi]
/*14077fad7*/  pcmpeqb xmm0, xmm6
/*14077fadb*/  movzx eax, word ptr [rdi+10h]
/*14077fadf*/  movd xmm1, eax
/*14077fae3*/  pcmpeqb xmm1, xmm7
/*14077fae7*/  pand xmm1, xmm0
/*14077faeb*/  pmovmskb eax, xmm1
/*14077faef*/  cmp eax, 0FFFFh
/*14077faf4*/  jnz loc_14077FD45
/*14077fafa*/  mov qword ptr [rbp+1D0h+var_110+8], 0
/*14077fb05*/  mov qword ptr [rbp+1D0h+var_100], rbx
/*14077fb0c*/  mov qword ptr [rbp+1D0h+var_100+8], rdi
/*14077fb13*/  mov [rbp+1D0h+var_F0], rbx
/*14077fb1a*/  mov qword ptr [rbp+1D0h+var_E8], 0
/*14077fb25*/  mov qword ptr [rbp+1D0h+var_E8+8], rbx
/*14077fb2c*/  mov rax, 3D0000003Dh
/*14077fb36*/  mov qword ptr [rbp+1D0h+var_D8], rax
/*14077fb3d*/  mov byte ptr [rbp+1D0h+var_D8+8], 1
/*14077fb44*/  mov word ptr [rbp+1D0h+var_C8], 1
/*14077fb4d*/  mov qword ptr [rbp+1D0h+var_110], 1
/*14077fb58*/  lea rcx, [rbp+1D0h+var_128]
/*14077fb5f*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077fb66*/  call sub_1407BC790
/*14077fb6b*/  nop
/*14077fb6c*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077fb73*/  jnz short loc_14077FBE9
/*14077fb75*/  mov rsi, [rbp+1D0h+var_118]
/*14077fb7c*/  mov qword ptr [rbp+1D0h+var_110+8], rsi
loc_14077FB83: /*14077fb83*/ mov edx, 1
/*14077fb88*/  mov rax, qword ptr [rbp+1D0h+var_110]
/*14077fb8f*/  test rax, rax
/*14077fb92*/  jz loc_14077FC26
/*14077fb98*/  cmp rax, 1
/*14077fb9c*/  jnz loc_14077FC2E
/*14077fba2*/  mov qword ptr [rbp+1D0h+var_110], 0
/*14077fbad*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fbb4*/  jnz loc_14077FC41
/*14077fbba*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fbc1*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077fbc8*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077fbcf*/  jnz short loc_14077FBDA
/*14077fbd1*/  cmp rdx, rsi
/*14077fbd4*/  jz loc_14077FCE0
loc_14077FBDA: /*14077fbda*/ sub rdx, rsi
loc_14077FBDD: /*14077fbdd*/ add rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077fbe4*/  jmp loc_14077FC8E
loc_14077FBE9: /*14077fbe9*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fbf0*/  jnz short loc_14077FC1A
/*14077fbf2*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fbf9*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077fc00*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077fc07*/  jnz loc_14077FB83
/*14077fc0d*/  cmp qword ptr [rbp+1D0h+var_100], rsi
/*14077fc14*/  jnz loc_14077FB83
loc_14077FC1A: /*14077fc1a*/ mov edx, 1
/*14077fc1f*/  xor esi, esi
/*14077fc21*/  jmp loc_14077FCE7
loc_14077FC26: /*14077fc26*/ mov rsi, rax
/*14077fc29*/  jmp loc_14077FCE7
loc_14077FC2E: /*14077fc2e*/ dec rax
/*14077fc31*/  mov qword ptr [rbp+1D0h+var_110], rax
/*14077fc38*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fc3f*/  jz short loc_14077FC48
loc_14077FC41: /*14077fc41*/ xor esi, esi
/*14077fc43*/  jmp loc_14077FCE7
loc_14077FC48: /*14077fc48*/ mov rsi, qword ptr [rbp+1D0h+var_100+8]
/*14077fc4f*/  lea rcx, [rbp+1D0h+var_128]
/*14077fc56*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077fc5d*/  call sub_1407BC790
/*14077fc62*/  nop
/*14077fc63*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077fc6a*/  jnz short loc_14077FCAE
/*14077fc6c*/  mov rdx, [rbp+1D0h+var_120]
/*14077fc73*/  mov rax, [rbp+1D0h+var_118]
/*14077fc7a*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077fc81*/  sub rdx, rcx
/*14077fc84*/  add rsi, rcx
/*14077fc87*/  mov qword ptr [rbp+1D0h+var_110+8], rax
loc_14077FC8E: /*14077fc8e*/ mov rcx, rsi
/*14077fc91*/  call sub_14033BC10
/*14077fc96*/  nop
/*14077fc97*/  mov rcx, rax
/*14077fc9a*/  mov r8d, 22h ; '"'
/*14077fca0*/  call sub_14033BE90
/*14077fca5*/  nop
/*14077fca6*/  mov rsi, rdx
/*14077fca9*/  mov rdx, rax
/*14077fcac*/  jmp short loc_14077FCE7
loc_14077FCAE: /*14077fcae*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fcb5*/  jnz short loc_14077FCE0
/*14077fcb7*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fcbe*/  mov rsi, qword ptr [rbp+1D0h+var_110+8]
/*14077fcc5*/  mov rdx, qword ptr [rbp+1D0h+var_100]
/*14077fccc*/  sub rdx, rsi
/*14077fccf*/  setnz al
/*14077fcd2*/  or al, byte ptr [rbp+1D0h+var_C8]
/*14077fcd8*/  cmp al, 1
/*14077fcda*/  jz loc_14077FBDD
loc_14077FCE0: /*14077fce0*/ xor esi, esi
/*14077fce2*/  mov edx, 1
loc_14077FCE7: /*14077fce7*/ lea rcx, [rbp+1D0h+var_110]
/*14077fcee*/  mov r8, rsi
/*14077fcf1*/  call sub_14077D150
/*14077fcf6*/  nop
/*14077fcf7*/  test rsi, rsi
/*14077fcfa*/  jz short loc_14077FD27
/*14077fcfc*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077fd03*/  mov rdx, qword ptr [rbp+1D0h+var_100]
loc_14077FD0A: /*14077fd0a*/ mov [rbp+1D0h+var_90], rcx
/*14077fd11*/  mov r8, [rbp+1D0h+var_208]
/*14077fd15*/  mov r9, [rbp+1D0h+var_200]
/*14077fd19*/  call sub_1407607B0
/*14077fd1e*/  nop
/*14077fd1f*/  test al, al
/*14077fd21*/  jz loc_140780015
loc_14077FD27: /*14077fd27*/ mov rdx, qword ptr [rbp+1D0h+var_110]
/*14077fd2e*/  test rdx, rdx
/*14077fd31*/  jz short loc_14077FD45
/*14077fd33*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077fd3a*/  mov r8d, 1
/*14077fd40*/  call sub_140001660
loc_14077FD45: /*14077fd45*/ mov rax, [rdi]
/*14077fd48*/  mov rcx, 625F69616E65706Fh
/*14077fd52*/  xor rax, rcx
/*14077fd55*/  mov rcx, [rdi+7]
/*14077fd59*/  mov rdx, 6C72755F65736162h
/*14077fd63*/  xor rcx, rdx
/*14077fd66*/  or rcx, rax
/*14077fd69*/  jnz loc_14077FFAA
/*14077fd6f*/  mov qword ptr [rbp+1D0h+var_110+8], 0
/*14077fd7a*/  mov qword ptr [rbp+1D0h+var_100], rbx
/*14077fd81*/  mov qword ptr [rbp+1D0h+var_100+8], rdi
/*14077fd88*/  mov [rbp+1D0h+var_F0], rbx
/*14077fd8f*/  mov qword ptr [rbp+1D0h+var_E8], 0
/*14077fd9a*/  mov qword ptr [rbp+1D0h+var_E8+8], rbx
/*14077fda1*/  mov rax, 3D0000003Dh
/*14077fdab*/  mov qword ptr [rbp+1D0h+var_D8], rax
/*14077fdb2*/  mov byte ptr [rbp+1D0h+var_D8+8], 1
/*14077fdb9*/  mov word ptr [rbp+1D0h+var_C8], 1
/*14077fdc2*/  mov qword ptr [rbp+1D0h+var_110], 1
loc_14077FDCD: /*14077fdcd*/ lea rcx, [rbp+1D0h+var_128]
/*14077fdd4*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077fddb*/  call sub_1407BC790
/*14077fde0*/  nop
/*14077fde1*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077fde8*/  jnz short loc_14077FE52
/*14077fdea*/  mov rdi, [rbp+1D0h+var_118]
/*14077fdf1*/  mov qword ptr [rbp+1D0h+var_110+8], rdi
loc_14077FDF8: /*14077fdf8*/ mov edx, 1
/*14077fdfd*/  mov rbx, qword ptr [rbp+1D0h+var_110]
/*14077fe04*/  test rbx, rbx
/*14077fe07*/  jz loc_14077FF48
/*14077fe0d*/  cmp rbx, 1
/*14077fe11*/  jnz short loc_14077FE8B
/*14077fe13*/  mov qword ptr [rbp+1D0h+var_110], 0
/*14077fe1e*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fe25*/  jnz short loc_14077FE9E
/*14077fe27*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fe2e*/  mov rax, qword ptr [rbp+1D0h+var_100]
/*14077fe35*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077fe3c*/  jnz short loc_14077FE43
/*14077fe3e*/  cmp rax, rdi
/*14077fe41*/  jz short loc_14077FE9E
loc_14077FE43: /*14077fe43*/ sub rax, rdi
loc_14077FE46: /*14077fe46*/ add rdi, qword ptr [rbp+1D0h+var_100+8]
/*14077fe4d*/  jmp loc_14077FEEB
loc_14077FE52: /*14077fe52*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fe59*/  jnz short loc_14077FE7F
/*14077fe5b*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077fe62*/  mov rdi, qword ptr [rbp+1D0h+var_110+8]
/*14077fe69*/  cmp byte ptr [rbp+1D0h+var_C8], 0
/*14077fe70*/  jnz short loc_14077FDF8
/*14077fe72*/  cmp qword ptr [rbp+1D0h+var_100], rdi
/*14077fe79*/  jnz loc_14077FDF8
loc_14077FE7F: /*14077fe7f*/ mov edx, 1
/*14077fe84*/  xor ebx, ebx
/*14077fe86*/  jmp loc_14077FF48
loc_14077FE8B: /*14077fe8b*/ dec rbx
/*14077fe8e*/  mov qword ptr [rbp+1D0h+var_110], rbx
/*14077fe95*/  cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077fe9c*/  jz short loc_14077FEA5
loc_14077FE9E: /*14077fe9e*/ xor ebx, ebx
/*14077fea0*/  jmp loc_14077FF48
loc_14077FEA5: /*14077fea5*/ mov rdi, qword ptr [rbp+1D0h+var_100+8]
/*14077feac*/  lea rcx, [rbp+1D0h+var_128]
/*14077feb3*/  lea rdx, [rbp+1D0h+var_100+8]
/*14077feba*/  call sub_1407BC790
/*14077febf*/  nop
/*14077fec0*/  cmp dword ptr [rbp+1D0h+var_128], 1
/*14077fec7*/  jnz short loc_14077FF0E
/*14077fec9*/  mov rax, [rbp+1D0h+var_120]
/*14077fed0*/  mov rcx, [rbp+1D0h+var_118]
/*14077fed7*/  mov rdx, qword ptr [rbp+1D0h+var_110+8]
/*14077fede*/  sub rax, rdx
/*14077fee1*/  add rdi, rdx
/*14077fee4*/  mov qword ptr [rbp+1D0h+var_110+8], rcx
loc_14077FEEB: /*14077feeb*/ mov rcx, rdi
/*14077feee*/  mov rdx, rax
/*14077fef1*/  call sub_14033BC10
/*14077fef6*/  nop
/*14077fef7*/  mov rcx, rax
/*14077fefa*/  mov r8d, 22h ; '"'
/*14077ff00*/  call sub_14033BE90
/*14077ff05*/  nop
/*14077ff06*/  mov rbx, rdx
/*14077ff09*/  mov rdx, rax
/*14077ff0c*/  jmp short loc_14077FF48
loc_14077FF0E: /*14077ff0e*/ cmp byte ptr [rbp+1D0h+var_C8+1], 0
/*14077ff15*/  jnz short loc_14077FF41
/*14077ff17*/  mov byte ptr [rbp+1D0h+var_C8+1], 1
/*14077ff1e*/  mov rdi, qword ptr [rbp+1D0h+var_110+8]
/*14077ff25*/  mov rax, qword ptr [rbp+1D0h+var_100]
/*14077ff2c*/  sub rax, rdi
/*14077ff2f*/  setnz cl
/*14077ff32*/  or cl, byte ptr [rbp+1D0h+var_C8]
/*14077ff38*/  cmp cl, 1
/*14077ff3b*/  jz loc_14077FE46
loc_14077FF41: /*14077ff41*/ xor ebx, ebx
/*14077ff43*/  mov edx, 1
loc_14077FF48: /*14077ff48*/ lea rcx, [rbp+1D0h+var_110]
/*14077ff4f*/  mov r8, rbx
/*14077ff52*/  call sub_14077D150
/*14077ff57*/  nop
/*14077ff58*/  test rbx, rbx
/*14077ff5b*/  jz short loc_14077FF8C
/*14077ff5d*/  mov r8, qword ptr [rbp+1D0h+var_110+8]
/*14077ff64*/  mov r9, qword ptr [rbp+1D0h+var_100]
loc_14077FF6B: /*14077ff6b*/ mov edx, 10h
/*14077ff70*/  lea rcx, aCodexRouterV1_1; "/codex/router/v1"
/*14077ff77*/  mov [rbp+1D0h+var_90], r8
/*14077ff7e*/  call sub_1407BE9C0
/*14077ff83*/  nop
loc_14077FF84: /*14077ff84*/ test al, al
/*14077ff86*/  jz loc_140780015
loc_14077FF8C: /*14077ff8c*/ mov rdx, qword ptr [rbp+1D0h+var_110]
/*14077ff93*/  test rdx, rdx
/*14077ff96*/  jz short loc_14077FFAA
/*14077ff98*/  mov rcx, qword ptr [rbp+1D0h+var_110+8]
/*14077ff9f*/  mov r8d, 1
/*14077ffa5*/  call sub_140001660
loc_14077FFAA: /*14077ffaa*/ mov rdx, [rbp+1D0h+var_A8]
/*14077ffb1*/  mov rax, rdx
/*14077ffb4*/  sub rax, r13
/*14077ffb7*/  cmp r12, rax
/*14077ffba*/  ja loc_14078017E
/*14077ffc0*/  test r12, r12
/*14077ffc3*/  jz short loc_14077FFDD
loc_14077FFC5: /*14077ffc5*/ add r15, r13
/*14077ffc8*/  mov rcx, r15
/*14077ffcb*/  mov rdx, r14
/*14077ffce*/  mov r8, r12
/*14077ffd1*/  call sub_141684120
/*14077ffd6*/  mov rdx, [rbp+1D0h+var_A8]
loc_14077FFDD: /*14077ffdd*/ add r13, r12
/*14077ffe0*/  mov [rbp+1D0h+var_98], r13
/*14077ffe7*/  cmp rdx, r13
/*14077ffea*/  jz loc_1407801B3
loc_14077FFF0: /*14077fff0*/ mov r15, [rbp+1D0h+var_A0]
/*14077fff7*/  mov byte ptr [r15+r13], 0Ah
/*14077fffc*/  inc r13
/*14077ffff*/  mov [rbp+1D0h+var_98], r13
loc_140780006: /*140780006*/ mov dword ptr [rbp+1D0h+var_90], 0
/*140780010*/  jmp loc_14077F2DF
loc_140780015: /*140780015*/ mov rdx, qword ptr [rbp+1D0h+var_110]
/*14078001c*/  test rdx, rdx
/*14078001f*/  jz short loc_140780006
/*140780021*/  mov r8d, 1
/*140780027*/  mov rcx, [rbp+1D0h+var_90]
/*14078002e*/  call sub_140001660
/*140780033*/  jmp short loc_140780006
loc_140780035: /*140780035*/ mov [rsp+250h+var_230], 1
/*14078003e*/  mov r9d, 1
/*140780044*/  lea rcx, [rbp+1D0h+var_A8]
/*14078004b*/  mov rdx, r13
/*14078004e*/  mov r8, r12
/*140780051*/  call sub_141688D30
/*140780056*/  nop
/*140780057*/  mov r15, [rbp+1D0h+var_A0]
/*14078005e*/  mov r13, [rbp+1D0h+var_98]
/*140780065*/  jmp loc_14077F4A1
loc_14078006A: /*14078006a*/ mov [rsp+250h+var_230], 1
/*140780073*/  mov r9d, 1
/*140780079*/  lea rcx, [rbp+1D0h+var_A8]
/*140780080*/  mov rdx, r13
/*140780083*/  mov r8, r12
/*140780086*/  call sub_141688D30
/*14078008b*/  nop
/*14078008c*/  mov r15, [rbp+1D0h+var_A0]
/*140780093*/  mov r13, [rbp+1D0h+var_98]
/*14078009a*/  jmp loc_14077F631
loc_14078009F: /*14078009f*/ mov [rsp+250h+var_230], 1
/*1407800a8*/  mov r8d, 1
/*1407800ae*/  mov r9d, 1
/*1407800b4*/  lea rcx, [rbp+1D0h+var_A8]
/*1407800bb*/  call sub_141688D30
/*1407800c0*/  nop
/*1407800c1*/  jmp loc_14077F65C
loc_1407800C6: /*1407800c6*/ mov [rsp+250h+var_230], 1
/*1407800cf*/  mov r8d, 1
/*1407800d5*/  mov r9d, 1
/*1407800db*/  lea rcx, [rbp+1D0h+var_A8]
/*1407800e2*/  call sub_141688D30
/*1407800e7*/  nop
/*1407800e8*/  jmp loc_14077F2C9
loc_1407800ED: /*1407800ed*/ mov [rsp+250h+var_230], 1
/*1407800f6*/  mov r9d, 1
/*1407800fc*/  lea rcx, [rbp+1D0h+var_A8]
/*140780103*/  mov rdx, r13
/*140780106*/  mov r8, r12
/*140780109*/  call sub_141688D30
/*14078010e*/  nop
/*14078010f*/  mov r15, [rbp+1D0h+var_A0]
/*140780116*/  mov r13, [rbp+1D0h+var_98]
/*14078011d*/  jmp loc_14077F5A7
loc_140780122: /*140780122*/ mov [rsp+250h+var_230], 1
/*14078012b*/  mov r9d, 1
/*140780131*/  lea rcx, [rbp+1D0h+var_A8]
/*140780138*/  mov rdx, r13
/*14078013b*/  mov r8, r12
/*14078013e*/  call sub_141688D30
/*140780143*/  nop
/*140780144*/  mov r15, [rbp+1D0h+var_A0]
/*14078014b*/  mov r13, [rbp+1D0h+var_98]
/*140780152*/  jmp loc_14077F525
loc_140780157: /*140780157*/ mov [rsp+250h+var_230], 1
/*140780160*/  mov r8d, 1
/*140780166*/  mov r9d, 1
/*14078016c*/  lea rcx, [rbp+1D0h+var_A8]
/*140780173*/  call sub_141688D30
/*140780178*/  nop
/*140780179*/  jmp loc_14077F550
loc_14078017E: /*14078017e*/ mov [rsp+250h+var_230], 1
/*140780187*/  mov r9d, 1
/*14078018d*/  lea rcx, [rbp+1D0h+var_A8]
/*140780194*/  mov rdx, r13
/*140780197*/  mov r8, r12
/*14078019a*/  call sub_141688D30
/*14078019f*/  nop
/*1407801a0*/  mov r15, [rbp+1D0h+var_A0]
/*1407801a7*/  mov r13, [rbp+1D0h+var_98]
/*1407801ae*/  jmp loc_14077FFC5
loc_1407801B3: /*1407801b3*/ mov [rsp+250h+var_230], 1
/*1407801bc*/  mov r8d, 1
/*1407801c2*/  mov r9d, 1
/*1407801c8*/  lea rcx, [rbp+1D0h+var_A8]
/*1407801cf*/  call sub_141688D30
/*1407801d4*/  nop
/*1407801d5*/  jmp loc_14077FFF0
loc_1407801DA: /*1407801da*/ lea r9, [rdx-1]
loc_1407801DE: /*1407801de*/ lea rcx, off_141782B88; "src\\core\\relay\\managed_blocks.rs"
/*1407801e5*/  mov [rsp+250h+var_230], rcx
/*1407801ea*/  mov r8d, 1
/*1407801f0*/  mov rcx, rax
/*1407801f3*/  call sub_1416C2F60
/*1407801f9*/  jmp short loc_14078020B
loc_1407801FB: /*1407801fb*/ mov ecx, 1
/*140780200*/  mov edx, 12h
/*140780205*/  call sub_1416C2D4B
loc_14078020B: /*14078020b*/ ud2
