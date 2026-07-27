// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1909 fetched=1909 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::translator::responses_to_sse_payload | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall responses_to_sse_payload(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rax
  __int128 v11; // xmm0
  _OWORD *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int128 v19; // kr00_16
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r13
  _DWORD *v28; // rax
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __i... [52233 chars total]

// ---- full disassembly reconstruction (1909/1909 instructions) ----
responses_to_sse_payload: /*1409ebc30*/ push rbp
/*1409ebc31*/  push r15
/*1409ebc33*/  push r14
/*1409ebc35*/  push r13
/*1409ebc37*/  push r12
/*1409ebc39*/  push rsi
/*1409ebc3a*/  push rdi
/*1409ebc3b*/  push rbx
/*1409ebc3c*/  sub rsp, 178h
/*1409ebc43*/  lea rbp, [rsp+80h]
/*1409ebc4b*/  mov [rbp+130h+var_40], 0FFFFFFFFFFFFFFFEh
/*1409ebc56*/  mov [rbp+130h+var_148], rcx
/*1409ebc5a*/  mov qword ptr [rbp+130h+var_108], 0
/*1409ebc62*/  mov qword ptr [rbp+130h+var_108+8], 1
/*1409ebc6a*/  mov [rbp+130h+var_F8], 0
/*1409ebc72*/  movzx eax, byte ptr [rdx]
/*1409ebc75*/  lea rcx, jpt_1409EBC87
/*1409ebc7c*/  movsxd rax, ds:(jpt_1409EBC87 - 1417AADE0h)[rcx+rax*4]; switch 6 cases
/*1409ebc80*/  add rax, rcx
/*1409ebc83*/  mov [rbp+130h+var_150], rdx
/*1409ebc87*/  jmp rax; switch jump
loc_1409EBC89: /*1409ebc89*/ movups xmm0, xmmword ptr [rdx]; jumptable 00000001409EBC87 cases 1,2
/*1409ebc8c*/  movups xmm1, xmmword ptr [rdx+10h]
/*1409ebc90*/  movaps [rbp+130h+var_A0], xmm1
/*1409ebc97*/  movaps [rbp+130h+var_B0], xmm0
/*1409ebc9e*/  jmp loc_1409EBD43
loc_1409EBCA3: /*1409ebca3*/ lea rcx, [rbp+130h+var_B0+8]; jumptable 00000001409EBC87 case 4
/*1409ebcaa*/  mov rax, rdx
/*1409ebcad*/  mov rdx, [rdx+10h]
/*1409ebcb1*/  mov r8, [rax+18h]
/*1409ebcb5*/  mov [rbp+130h+var_41], 1
loc_1409EBCBC: /*1409ebcbc*/ call sub_1402CE260
/*1409ebcc1*/  nop
/*1409ebcc2*/  mov byte ptr [rbp+130h+var_B0], 4
/*1409ebcc9*/  jmp short loc_1409EBD43
loc_1409EBCCB: /*1409ebccb*/ mov byte ptr [rbp+130h+var_B0], 0; jumptable 00000001409EBC87 case 0
/*1409ebcd2*/  jmp short loc_1409EBD43
loc_1409EBCD4: /*1409ebcd4*/ add rdx, 8; jumptable 00000001409EBC87 case 3
/*1409ebcd8*/  lea rcx, [rbp+130h+var_B0+8]
/*1409ebcdf*/  mov [rbp+130h+var_41], 1
/*1409ebce6*/  call sub_14149C500
/*1409ebceb*/  nop
/*1409ebcec*/  mov byte ptr [rbp+130h+var_B0], 3
/*1409ebcf3*/  jmp short loc_1409EBD43
loc_1409EBCF5: /*1409ebcf5*/ cmp qword ptr [rdx+18h], 0; jumptable 00000001409EBC87 case 5
/*1409ebcfa*/  jz short loc_1409EBD26
/*1409ebcfc*/  mov rax, rdx
/*1409ebcff*/  mov rdx, [rdx+8]
/*1409ebd03*/  test rdx, rdx
/*1409ebd06*/  jz loc_1409EDE4D
/*1409ebd0c*/  lea rcx, [rbp+130h+var_B0+8]
/*1409ebd13*/  mov r8, [rax+10h]
/*1409ebd17*/  mov [rbp+130h+var_41], 1
/*1409ebd1e*/  call sub_1402CCD80
/*1409ebd23*/  nop
/*1409ebd24*/  jmp short loc_1409EBD3C
loc_1409EBD26: /*1409ebd26*/ mov qword ptr [rbp+130h+var_B0+8], 0
/*1409ebd31*/  mov qword ptr [rbp+130h+var_A0+8], 0
loc_1409EBD3C: /*1409ebd3c*/ mov byte ptr [rbp+130h+var_B0], 5
loc_1409EBD43: /*1409ebd43*/ call nullsub_1
/*1409ebd48*/  mov ecx, 0Bh
/*1409ebd4d*/  mov edx, 1
/*1409ebd52*/  call sub_140001650
/*1409ebd57*/  test rax, rax
/*1409ebd5a*/  jz loc_1409EDF0E
/*1409ebd60*/  mov rcx, 72676F72705F6E69h
/*1409ebd6a*/  mov [rax], rcx
/*1409ebd6d*/  mov dword ptr [rax+7], 73736572h
/*1409ebd74*/  mov qword ptr [rbp+130h+var_80+8], 0Bh
/*1409ebd7f*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ebd86*/  mov qword ptr [rbp+130h+var_70+8], 0Bh
/*1409ebd91*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ebd98*/  mov [rbp+130h+var_B9], 1
loc_1409EBD9C: /*1409ebd9c*/ lea rcx, aStatus_6; "status"
/*1409ebda3*/  lea r8, [rbp+130h+var_B0]
/*1409ebdaa*/  mov edx, 6
/*1409ebdaf*/  call sub_141433E50
/*1409ebdb4*/  nop
loc_1409EBDB5: /*1409ebdb5*/ mov [rbp+130h+var_C8], rax
/*1409ebdb9*/  mov rcx, rax
/*1409ebdbc*/  call sub_1400104F0
/*1409ebdc1*/  nop
/*1409ebdc2*/  movups xmm0, [rbp+130h+var_80]
/*1409ebdc9*/  movups xmm1, [rbp+130h+var_70]
/*1409ebdd0*/  mov rax, [rbp+130h+var_C8]
/*1409ebdd4*/  movups xmmword ptr [rax+10h], xmm1
/*1409ebdd8*/  movups xmmword ptr [rax], xmm0
/*1409ebddb*/  movaps xmm0, [rbp+130h+var_B0]
/*1409ebde2*/  movaps xmm1, [rbp+130h+var_A0]
/*1409ebde9*/  movaps [rbp+130h+var_180], xmm0
/*1409ebded*/  movaps [rbp+130h+var_170], xmm1
/*1409ebdf1*/  mov qword ptr [rbp+130h+var_60], 0
/*1409ebdfc*/  mov [rbp+130h+var_50], 0
/*1409ebe07*/  call nullsub_1
/*1409ebe0c*/  mov ecx, 4
/*1409ebe11*/  mov edx, 1
/*1409ebe16*/  call sub_140001650
/*1409ebe1b*/  test rax, rax
/*1409ebe1e*/  jz loc_1409EDF23
/*1409ebe24*/  mov dword ptr [rax], 65707974h
/*1409ebe2a*/  mov [rbp+130h+var_130], 4
/*1409ebe32*/  mov [rbp+130h+var_128], rax
/*1409ebe36*/  mov [rbp+130h+var_120], 4
/*1409ebe3e*/  call nullsub_1
/*1409ebe43*/  mov ecx, 10h
/*1409ebe48*/  mov edx, 1
/*1409ebe4d*/  call sub_140001650
/*1409ebe52*/  test rax, rax
/*1409ebe55*/  mov [rbp+130h+var_C8], rax
/*1409ebe59*/  jz loc_1409EDF38
/*1409ebe5f*/  movups xmm0, xmmword ptr cs:aResponseCreate; "response.created"
/*1409ebe66*/  movups xmmword ptr [rax], xmm0
/*1409ebe69*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ebe70*/  mov qword ptr [rbp+130h+var_80+8], 10h
/*1409ebe7b*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ebe82*/  mov qword ptr [rbp+130h+var_70+8], 10h
loc_1409EBE8D: /*1409ebe8d*/ lea rcx, [rbp+130h+var_B0]
/*1409ebe94*/  lea rdx, [rbp+130h+var_60]
/*1409ebe9b*/  mov r8, rbp
/*1409ebe9e*/  lea r9, [rbp+130h+var_80]
/*1409ebea5*/  call sub_140307860
/*1409ebeaa*/  nop
/*1409ebeab*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ebeb2*/  jz short loc_1409EBEC1
loc_1409EBEB4: /*1409ebeb4*/ lea rcx, [rbp+130h+var_B0]
/*1409ebebb*/  call sub_1400104F0
/*1409ebec0*/  nop
loc_1409EBEC1: /*1409ebec1*/ call nullsub_1
/*1409ebec6*/  mov ecx, 8
/*1409ebecb*/  mov edx, 1
/*1409ebed0*/  call sub_140001650
/*1409ebed5*/  test rax, rax
/*1409ebed8*/  jz loc_1409EDF4D
/*1409ebede*/  mov rcx, 65736E6F70736572h
/*1409ebee8*/  mov [rax], rcx
/*1409ebeeb*/  mov [rbp+130h+var_130], 8
/*1409ebef3*/  mov [rbp+130h+var_128], rax
/*1409ebef7*/  mov [rbp+130h+var_120], 8
/*1409ebeff*/  mov [rbp+130h+var_81], 1
loc_1409EBF06: /*1409ebf06*/ lea rcx, [rbp+130h+var_80]
/*1409ebf0d*/  lea rdx, [rbp+130h+var_180]
/*1409ebf11*/  call sub_140B842D0
/*1409ebf16*/  nop
/*1409ebf17*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ebf1e*/  jz loc_1409EDCC0
/*1409ebf24*/  movups xmm0, [rbp+130h+var_80]
/*1409ebf2b*/  movups xmm1, [rbp+130h+var_70]
/*1409ebf32*/  movaps [rbp+130h+var_A0], xmm1
/*1409ebf39*/  movaps [rbp+130h+var_B0], xmm0
/*1409ebf40*/  mov [rbp+130h+var_81], 0
/*1409ebf47*/  lea rsi, [rbp+130h+var_80]
/*1409ebf4e*/  lea rdx, [rbp+130h+var_60]
/*1409ebf55*/  mov r8, rbp
/*1409ebf58*/  lea r9, [rbp+130h+var_B0]
/*1409ebf5f*/  mov rcx, rsi
/*1409ebf62*/  call sub_140307860
/*1409ebf67*/  nop
/*1409ebf68*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ebf6f*/  jz short loc_1409EBF7E
loc_1409EBF71: /*1409ebf71*/ lea rcx, [rbp+130h+var_80]
/*1409ebf78*/  call sub_1400104F0
/*1409ebf7d*/  nop
loc_1409EBF7E: /*1409ebf7e*/ movups xmm0, [rbp+130h+var_60]
/*1409ebf85*/  movups [rbp+130h+var_80+8], xmm0
/*1409ebf8c*/  mov rax, [rbp+130h+var_50]
/*1409ebf93*/  mov qword ptr [rbp+130h+var_70+8], rax
/*1409ebf9a*/  mov byte ptr [rbp+130h+var_80], 5
/*1409ebfa1*/  mov [rbp+130h+var_130], rsi
/*1409ebfa5*/  lea rax, sub_14142EA10
/*1409ebfac*/  mov [rbp+130h+var_128], rax
loc_1409EBFB0: /*1409ebfb0*/ lea rdx, unk_1417A78D0
/*1409ebfb7*/  lea rcx, [rbp+130h+var_B0]
/*1409ebfbe*/  mov r8, rbp
/*1409ebfc1*/  call sub_14149C0F0
/*1409ebfc6*/  nop
loc_1409EBFC7: /*1409ebfc7*/ lea rcx, [rbp+130h+var_80]
/*1409ebfce*/  call sub_1400104F0
/*1409ebfd3*/  nop
/*1409ebfd4*/  mov rdx, qword ptr [rbp+130h+var_B0]
/*1409ebfdb*/  mov rbx, qword ptr [rbp+130h+var_B0+8]
/*1409ebfe2*/  mov rsi, qword ptr [rbp+130h+var_A0]
/*1409ebfe9*/  test rsi, rsi
/*1409ebfec*/  jnz loc_1409EDCFF
/*1409ebff2*/  xor edi, edi
/*1409ebff4*/  add rdi, rsi
/*1409ebff7*/  mov [rbp+130h+var_F8], rdi
/*1409ebffb*/  test rdx, rdx
/*1409ebffe*/  jz short loc_1409EC00F
loc_1409EC000: /*1409ec000*/ mov r8d, 1
/*1409ec006*/  mov rcx, rbx
/*1409ec009*/  call sub_140001660
/*1409ec00e*/  nop
loc_1409EC00F: /*1409ec00f*/ lea rcx, aOutput_1; "output"
/*1409ec016*/  mov edx, 6
/*1409ec01b*/  mov r8, [rbp+130h+var_150]
/*1409ec01f*/  call sub_141433D50
/*1409ec024*/  nop
/*1409ec025*/  test rax, rax
/*1409ec028*/  jz loc_1409ED990
/*1409ec02e*/  cmp byte ptr [rax], 4
/*1409ec031*/  jnz loc_1409ED990
/*1409ec037*/  mov rcx, [rax+10h]
/*1409ec03b*/  mov rax, [rax+18h]
/*1409ec03f*/  shl rax, 5
/*1409ec043*/  mov [rbp+130h+var_C8], rcx
/*1409ec047*/  add rax, rcx
/*1409ec04a*/  mov [rbp+130h+var_158], rax
/*1409ec04e*/  lea r12, [rbp+130h+var_B0]
/*1409ec055*/  lea rsi, [rbp+130h+var_80]
/*1409ec05c*/  mov [rbp+130h+var_110], 0
/*1409ec064*/  nop word ptr [rax+rax+00000000h]
loc_1409EC070: /*1409ec070*/ mov r8, [rbp+130h+var_C8]
/*1409ec074*/  cmp r8, [rbp+130h+var_158]
/*1409ec078*/  jz loc_1409ED990
/*1409ec07e*/  mov edx, 4
/*1409ec083*/  lea rcx, aType_8; "type"
/*1409ec08a*/  call sub_141433D50
/*1409ec08f*/  nop
/*1409ec090*/  mov r15d, 1
/*1409ec096*/  test rax, rax
/*1409ec099*/  jz short loc_1409EC0B0
/*1409ec09b*/  cmp byte ptr [rax], 3
/*1409ec09e*/  jnz short loc_1409EC0B0
/*1409ec0a0*/  mov r15, [rax+10h]
/*1409ec0a4*/  mov r13, [rax+18h]
/*1409ec0a8*/  jmp short loc_1409EC0B3
loc_1409EC0B0: /*1409ec0b0*/ xor r13d, r13d
loc_1409EC0B3: /*1409ec0b3*/ mov qword ptr [rbp+130h+var_E0], 0
/*1409ec0bb*/  mov [rbp+130h+var_D0], 0
/*1409ec0c3*/  call nullsub_1
/*1409ec0c8*/  mov ecx, 4
/*1409ec0cd*/  mov edx, 1
/*1409ec0d2*/  call sub_140001650
/*1409ec0d7*/  test rax, rax
/*1409ec0da*/  jz loc_1409EDEA5
/*1409ec0e0*/  mov dword ptr [rax], 65707974h
/*1409ec0e6*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec0f1*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec0f8*/  mov [rbp+130h+var_50], 4
/*1409ec103*/  call nullsub_1
/*1409ec108*/  mov ecx, 1Ah
/*1409ec10d*/  mov edx, 1
/*1409ec112*/  call sub_140001650
/*1409ec117*/  test rax, rax
/*1409ec11a*/  mov [rbp+130h+var_B8], rax
/*1409ec11e*/  jz loc_1409EDE66
/*1409ec124*/  movups xmm0, cs:xmmword_1417A5D88+0Ah
/*1409ec12b*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ec12f*/  movups xmm0, cs:xmmword_1417A5D88
/*1409ec136*/  movups xmmword ptr [rax], xmm0
/*1409ec139*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec140*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ec14b*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec152*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
loc_1409EC15D: /*1409ec15d*/ mov rcx, r12
/*1409ec160*/  lea rdx, [rbp+130h+var_E0]
/*1409ec164*/  lea r8, [rbp+130h+var_60]
/*1409ec16b*/  mov r9, rsi
/*1409ec16e*/  call sub_140307860
/*1409ec173*/  nop
/*1409ec174*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec17b*/  jz short loc_1409EC186
loc_1409EC17D: /*1409ec17d*/ mov rcx, r12
/*1409ec180*/  call sub_1400104F0
/*1409ec185*/  nop
loc_1409EC186: /*1409ec186*/ call nullsub_1
/*1409ec18b*/  mov ecx, 0Ch
/*1409ec190*/  mov edx, 1
/*1409ec195*/  call sub_140001650
/*1409ec19a*/  test rax, rax
/*1409ec19d*/  jz loc_1409EDE7B
/*1409ec1a3*/  mov rcx, 695F74757074756Fh
/*1409ec1ad*/  mov [rax], rcx
/*1409ec1b0*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec1b7*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec1c2*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec1c9*/  mov [rbp+130h+var_50], 0Ch
/*1409ec1d4*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec1db*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec1e6*/  mov rax, [rbp+130h+var_110]
/*1409ec1ea*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec1f1*/  mov rcx, r12
/*1409ec1f4*/  lea rdx, [rbp+130h+var_E0]
/*1409ec1f8*/  lea r8, [rbp+130h+var_60]
/*1409ec1ff*/  mov r9, rsi
/*1409ec202*/  call sub_140307860
/*1409ec207*/  nop
/*1409ec208*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec20f*/  jz short loc_1409EC21A
/*1409ec211*/  mov rcx, r12
/*1409ec214*/  call sub_1400104F0
/*1409ec219*/  nop
loc_1409EC21A: /*1409ec21a*/ call nullsub_1
/*1409ec21f*/  mov ecx, 4
/*1409ec224*/  mov edx, 1
/*1409ec229*/  call sub_140001650
/*1409ec22e*/  test rax, rax
/*1409ec231*/  jz loc_1409EDE90
/*1409ec237*/  mov dword ptr [rax], 6D657469h
/*1409ec23d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec248*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec24f*/  mov [rbp+130h+var_50], 4
/*1409ec25a*/  mov [rbp+130h+var_82], 1
loc_1409EC261: /*1409ec261*/ mov rcx, rsi
/*1409ec264*/  mov rdx, [rbp+130h+var_C8]
/*1409ec268*/  call sub_140B842D0
/*1409ec26d*/  nop
/*1409ec26e*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec275*/  jz loc_1409EDC42
/*1409ec27b*/  movups xmm0, [rbp+130h+var_80]
/*1409ec282*/  movups xmm1, [rbp+130h+var_70]
/*1409ec289*/  movaps [rbp+130h+var_A0], xmm1
/*1409ec290*/  movaps [rbp+130h+var_B0], xmm0
/*1409ec297*/  mov [rbp+130h+var_82], 0
/*1409ec29e*/  mov rcx, rsi
/*1409ec2a1*/  lea rdx, [rbp+130h+var_E0]
/*1409ec2a5*/  lea r8, [rbp+130h+var_60]
/*1409ec2ac*/  mov r9, r12
/*1409ec2af*/  call sub_140307860
/*1409ec2b4*/  nop
/*1409ec2b5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec2bc*/  jz short loc_1409EC2C7
loc_1409EC2BE: /*1409ec2be*/ mov rcx, rsi
/*1409ec2c1*/  call sub_1400104F0
/*1409ec2c6*/  nop
loc_1409EC2C7: /*1409ec2c7*/ mov rax, [rbp+130h+var_D0]
/*1409ec2cb*/  lea rcx, [rbp+130h+var_128]
/*1409ec2cf*/  mov [rcx+10h], rax
/*1409ec2d3*/  movups xmm0, [rbp+130h+var_E0]
/*1409ec2d7*/  movups xmmword ptr [rcx], xmm0
/*1409ec2da*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ec2de*/  mov rdi, rbp
/*1409ec2e1*/  mov qword ptr [rbp+130h+var_B0], rdi
/*1409ec2e8*/  lea rax, sub_14142EA10
/*1409ec2ef*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409EC2F6: /*1409ec2f6*/ mov rcx, rsi
/*1409ec2f9*/  lea rdx, unk_1417A7910
/*1409ec300*/  mov r8, r12
/*1409ec303*/  call sub_14149C0F0
/*1409ec308*/  nop
loc_1409EC309: /*1409ec309*/ mov rcx, rdi
/*1409ec30c*/  call sub_1400104F0
/*1409ec311*/  nop
loc_1409EC312: /*1409ec312*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ec319*/  mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ec320*/  mov [rbp+130h+var_B8], rax
/*1409ec324*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ec32b*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ec32f*/  mov rdi, [rbp+130h+var_F8]
/*1409ec333*/  sub rax, rdi
/*1409ec336*/  cmp rbx, rax
/*1409ec339*/  ja loc_1409ED8F0
/*1409ec33f*/  test rbx, rbx
/*1409ec342*/  jz short loc_1409EC357
loc_1409EC344: /*1409ec344*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ec348*/  add rcx, rdi
/*1409ec34b*/  mov rdx, [rbp+130h+var_B8]
/*1409ec34f*/  mov r8, rbx
/*1409ec352*/  call sub_141684120
loc_1409EC357: /*1409ec357*/ add rdi, rbx
/*1409ec35a*/  mov [rbp+130h+var_F8], rdi
/*1409ec35e*/  test r14, r14
/*1409ec361*/  jz short loc_1409EC375
/*1409ec363*/  mov r8d, 1
/*1409ec369*/  mov rcx, [rbp+130h+var_B8]
/*1409ec36d*/  mov rdx, r14
/*1409ec370*/  call sub_140001660
loc_1409EC375: /*1409ec375*/ cmp r13, 0Dh
/*1409ec379*/  jz loc_1409ED2C0
/*1409ec37f*/  cmp r13, 7
/*1409ec383*/  jnz loc_1409ED2EA
/*1409ec389*/  mov eax, [r15]
/*1409ec38c*/  mov ecx, 7373656Dh
/*1409ec391*/  xor eax, ecx
/*1409ec393*/  mov ecx, [r15+3]
/*1409ec397*/  mov edx, 65676173h
/*1409ec39c*/  xor ecx, edx
/*1409ec39e*/  or ecx, eax
/*1409ec3a0*/  jnz loc_1409ED2EA
loc_1409EC3A6: /*1409ec3a6*/ mov edx, 7
/*1409ec3ab*/  lea rcx, aContent_6; "content"
/*1409ec3b2*/  mov r8, [rbp+130h+var_C8]
/*1409ec3b6*/  call sub_141433D50
/*1409ec3bb*/  nop
/*1409ec3bc*/  test rax, rax
/*1409ec3bf*/  jz loc_1409ED2EA
/*1409ec3c5*/  cmp byte ptr [rax], 4
/*1409ec3c8*/  jnz loc_1409ED2EA
/*1409ec3ce*/  mov r15, [rax+10h]
/*1409ec3d2*/  mov rax, [rax+18h]
/*1409ec3d6*/  shl rax, 5
/*1409ec3da*/  add rax, r15
/*1409ec3dd*/  mov [rbp+130h+var_138], rax
/*1409ec3e1*/  mov [rbp+130h+var_B8], 0
/*1409ec3e9*/  nop dword ptr [rax+00000000h]
loc_1409EC3F0: /*1409ec3f0*/ cmp r15, [rbp+130h+var_138]
/*1409ec3f4*/  jz loc_1409ED2EA
/*1409ec3fa*/  mov qword ptr [rbp+130h+var_E0], 0
/*1409ec402*/  mov [rbp+130h+var_D0], 0
/*1409ec40a*/  call nullsub_1
/*1409ec40f*/  mov ecx, 4
/*1409ec414*/  mov edx, 1
/*1409ec419*/  call sub_140001650
/*1409ec41e*/  test rax, rax
/*1409ec421*/  jz loc_1409EDFF5
/*1409ec427*/  mov dword ptr [rax], 65707974h
/*1409ec42d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec438*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec43f*/  mov [rbp+130h+var_50], 4
/*1409ec44a*/  call nullsub_1
/*1409ec44f*/  mov ecx, 1Bh
/*1409ec454*/  mov edx, 1
/*1409ec459*/  call sub_140001650
/*1409ec45e*/  test rax, rax
/*1409ec461*/  mov qword ptr [rbp+130h+var_F0], rax
/*1409ec465*/  jz loc_1409EDFE0
/*1409ec46b*/  movups xmm0, cs:xmmword_1417A5DB8+0Bh
/*1409ec472*/  movups xmmword ptr [rax+0Bh], xmm0
/*1409ec476*/  movups xmm0, cs:xmmword_1417A5DB8
/*1409ec47d*/  movups xmmword ptr [rax], xmm0
/*1409ec480*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec487*/  mov qword ptr [rbp+130h+var_80+8], 1Bh
/*1409ec492*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec499*/  mov qword ptr [rbp+130h+var_70+8], 1Bh
loc_1409EC4A4: /*1409ec4a4*/ mov rcx, r12
/*1409ec4a7*/  lea rdx, [rbp+130h+var_E0]
/*1409ec4ab*/  lea r8, [rbp+130h+var_60]
/*1409ec4b2*/  mov r9, rsi
/*1409ec4b5*/  call sub_140307860
/*1409ec4ba*/  nop
/*1409ec4bb*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec4c2*/  jz short loc_1409EC4CD
loc_1409EC4C4: /*1409ec4c4*/ mov rcx, r12
/*1409ec4c7*/  call sub_1400104F0
/*1409ec4cc*/  nop
loc_1409EC4CD: /*1409ec4cd*/ call nullsub_1
/*1409ec4d2*/  mov ecx, 0Ch
/*1409ec4d7*/  mov edx, 1
/*1409ec4dc*/  call sub_140001650
/*1409ec4e1*/  test rax, rax
/*1409ec4e4*/  jz loc_1409EDFCB
/*1409ec4ea*/  mov rcx, 695F74757074756Fh
/*1409ec4f4*/  mov [rax], rcx
/*1409ec4f7*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec4fe*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec509*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec510*/  mov [rbp+130h+var_50], 0Ch
/*1409ec51b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec522*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec52d*/  mov rax, [rbp+130h+var_110]
/*1409ec531*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec538*/  mov rcx, r12
/*1409ec53b*/  lea rdx, [rbp+130h+var_E0]
/*1409ec53f*/  lea r8, [rbp+130h+var_60]
/*1409ec546*/  mov r9, rsi
/*1409ec549*/  call sub_140307860
/*1409ec54e*/  nop
/*1409ec54f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec556*/  jz short loc_1409EC561
/*1409ec558*/  mov rcx, r12
/*1409ec55b*/  call sub_1400104F0
/*1409ec560*/  nop
loc_1409EC561: /*1409ec561*/ call nullsub_1
/*1409ec566*/  mov ecx, 0Dh
/*1409ec56b*/  mov edx, 1
/*1409ec570*/  call sub_140001650
/*1409ec575*/  test rax, rax
/*1409ec578*/  jz loc_1409EDFB6
/*1409ec57e*/  mov rcx, 7865646E695F746Eh
/*1409ec588*/  mov [rax+5], rcx
/*1409ec58c*/  mov rcx, 5F746E65746E6F63h
/*1409ec596*/  mov [rax], rcx
/*1409ec599*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ec5a4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec5ab*/  mov [rbp+130h+var_50], 0Dh
/*1409ec5b6*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec5bd*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec5c8*/  mov rax, [rbp+130h+var_B8]
/*1409ec5cc*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec5d3*/  mov rcx, r12
/*1409ec5d6*/  lea rdx, [rbp+130h+var_E0]
/*1409ec5da*/  lea r8, [rbp+130h+var_60]
/*1409ec5e1*/  mov r9, rsi
/*1409ec5e4*/  call sub_140307860
/*1409ec5e9*/  nop
/*1409ec5ea*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec5f1*/  jz short loc_1409EC5FC
/*1409ec5f3*/  mov rcx, r12
/*1409ec5f6*/  call sub_1400104F0
/*1409ec5fb*/  nop
loc_1409EC5FC: /*1409ec5fc*/ call nullsub_1
/*1409ec601*/  mov ecx, 4
/*1409ec606*/  mov edx, 1
/*1409ec60b*/  call sub_140001650
/*1409ec610*/  test rax, rax
/*1409ec613*/  jz loc_1409EDFA1
/*1409ec619*/  mov dword ptr [rax], 74726170h
/*1409ec61f*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec62a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec631*/  mov [rbp+130h+var_50], 4
/*1409ec63c*/  mov [rbp+130h+var_83], 1
loc_1409EC643: /*1409ec643*/ mov rcx, rsi
/*1409ec646*/  mov rdx, r15
/*1409ec649*/  call sub_140B842D0
/*1409ec64e*/  nop
/*1409ec64f*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec656*/  jz loc_1409EDDCF
/*1409ec65c*/  movups xmm0, [rbp+130h+var_80]
/*1409ec663*/  movups xmm1, [rbp+130h+var_70]
/*1409ec66a*/  movaps [rbp+130h+var_A0], xmm1
/*1409ec671*/  movaps [rbp+130h+var_B0], xmm0
/*1409ec678*/  mov [rbp+130h+var_83], 0
/*1409ec67f*/  mov rcx, rsi
/*1409ec682*/  lea rdx, [rbp+130h+var_E0]
/*1409ec686*/  lea r8, [rbp+130h+var_60]
/*1409ec68d*/  mov r9, r12
/*1409ec690*/  call sub_140307860
/*1409ec695*/  nop
/*1409ec696*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ec69d*/  jz short loc_1409EC6A8
loc_1409EC69F: /*1409ec69f*/ mov rcx, rsi
/*1409ec6a2*/  call sub_1400104F0
/*1409ec6a7*/  nop
loc_1409EC6A8: /*1409ec6a8*/ mov rax, [rbp+130h+var_D0]
/*1409ec6ac*/  lea rcx, [rbp+130h+var_128]
/*1409ec6b0*/  mov [rcx+10h], rax
/*1409ec6b4*/  movups xmm0, [rbp+130h+var_E0]
/*1409ec6b8*/  movups xmmword ptr [rcx], xmm0
/*1409ec6bb*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ec6bf*/  mov rbx, rbp
/*1409ec6c2*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ec6c9*/  lea rax, sub_14142EA10
/*1409ec6d0*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409EC6D7: /*1409ec6d7*/ mov rcx, rsi
/*1409ec6da*/  lea rdx, unk_1417A7990
/*1409ec6e1*/  mov r8, r12
/*1409ec6e4*/  call sub_14149C0F0
/*1409ec6e9*/  nop
loc_1409EC6EA: /*1409ec6ea*/ mov rcx, rbx
/*1409ec6ed*/  call sub_1400104F0
/*1409ec6f2*/  nop
loc_1409EC6F3: /*1409ec6f3*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ec6fa*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ec701*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ec708*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ec70c*/  sub rax, rdi
/*1409ec70f*/  cmp rbx, rax
/*1409ec712*/  ja loc_1409ED1DF
/*1409ec718*/  test rbx, rbx
/*1409ec71b*/  jz short loc_1409EC72F
loc_1409EC71D: /*1409ec71d*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ec721*/  add rcx, rdi
/*1409ec724*/  mov rdx, r13
/*1409ec727*/  mov r8, rbx
/*1409ec72a*/  call sub_141684120
loc_1409EC72F: /*1409ec72f*/ add rdi, rbx
/*1409ec732*/  mov [rbp+130h+var_F8], rdi
/*1409ec736*/  test r14, r14
/*1409ec739*/  jz short loc_1409EC74D
/*1409ec73b*/  mov r8d, 1
/*1409ec741*/  mov rcx, r13
/*1409ec744*/  mov rdx, r14
/*1409ec747*/  call sub_140001660
/*1409ec74c*/  nop
loc_1409EC74D: /*1409ec74d*/ mov edx, 4
/*1409ec752*/  lea rcx, aText_10; "text"
/*1409ec759*/  mov r8, r15
/*1409ec75c*/  call sub_141433D50
/*1409ec761*/  nop
/*1409ec762*/  test rax, rax
/*1409ec765*/  jz loc_1409ECE80
/*1409ec76b*/  cmp byte ptr [rax], 3
/*1409ec76e*/  jnz loc_1409ECE80
/*1409ec774*/  mov rcx, [rax+10h]
/*1409ec778*/  mov qword ptr [rbp+130h+var_F0], rcx
/*1409ec77c*/  mov rbx, [rax+18h]
/*1409ec780*/  mov qword ptr [rbp+130h+var_E0], 0
/*1409ec788*/  mov [rbp+130h+var_D0], 0
/*1409ec790*/  call nullsub_1
/*1409ec795*/  mov ecx, 4
/*1409ec79a*/  mov edx, 1
/*1409ec79f*/  call sub_140001650
/*1409ec7a4*/  test rax, rax
/*1409ec7a7*/  jz loc_1409EE118
/*1409ec7ad*/  mov dword ptr [rax], 65707974h
/*1409ec7b3*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ec7be*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec7c5*/  mov [rbp+130h+var_50], 4
/*1409ec7d0*/  call nullsub_1
/*1409ec7d5*/  mov ecx, 1Ah
/*1409ec7da*/  mov edx, 1
/*1409ec7df*/  call sub_140001650
/*1409ec7e4*/  test rax, rax
/*1409ec7e7*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ec7eb*/  jz loc_1409EE106
/*1409ec7f1*/  movups xmm0, cs:xmmword_1417A5E08+0Ah
/*1409ec7f8*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ec7fc*/  movups xmm0, cs:xmmword_1417A5E08
/*1409ec803*/  movups xmmword ptr [rax], xmm0
/*1409ec806*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ec80d*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ec818*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec81f*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
loc_1409EC82A: /*1409ec82a*/ mov rcx, r12
/*1409ec82d*/  lea rdx, [rbp+130h+var_E0]
/*1409ec831*/  lea r8, [rbp+130h+var_60]
/*1409ec838*/  mov r9, rsi
/*1409ec83b*/  call sub_140307860
/*1409ec840*/  nop
/*1409ec841*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec848*/  jz short loc_1409EC853
loc_1409EC84A: /*1409ec84a*/ mov rcx, r12
/*1409ec84d*/  call sub_1400104F0
/*1409ec852*/  nop
loc_1409EC853: /*1409ec853*/ call nullsub_1
/*1409ec858*/  mov ecx, 0Ch
/*1409ec85d*/  mov edx, 1
/*1409ec862*/  call sub_140001650
/*1409ec867*/  test rax, rax
/*1409ec86a*/  jz loc_1409EE0F1
/*1409ec870*/  mov rcx, 695F74757074756Fh
/*1409ec87a*/  mov [rax], rcx
/*1409ec87d*/  mov dword ptr [rax+8], 7865646Eh
/*1409ec884*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ec88f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec896*/  mov [rbp+130h+var_50], 0Ch
/*1409ec8a1*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec8a8*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec8b3*/  mov rax, [rbp+130h+var_110]
/*1409ec8b7*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec8be*/  mov rcx, r12
/*1409ec8c1*/  lea rdx, [rbp+130h+var_E0]
/*1409ec8c5*/  lea r8, [rbp+130h+var_60]
/*1409ec8cc*/  mov r9, rsi
/*1409ec8cf*/  call sub_140307860
/*1409ec8d4*/  nop
/*1409ec8d5*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec8dc*/  jz short loc_1409EC8E7
/*1409ec8de*/  mov rcx, r12
/*1409ec8e1*/  call sub_1400104F0
/*1409ec8e6*/  nop
loc_1409EC8E7: /*1409ec8e7*/ call nullsub_1
/*1409ec8ec*/  mov ecx, 0Dh
/*1409ec8f1*/  mov edx, 1
/*1409ec8f6*/  call sub_140001650
/*1409ec8fb*/  test rax, rax
/*1409ec8fe*/  jz loc_1409EE0DC
/*1409ec904*/  mov rcx, 7865646E695F746Eh
/*1409ec90e*/  mov [rax+5], rcx
/*1409ec912*/  mov rcx, 5F746E65746E6F63h
/*1409ec91c*/  mov [rax], rcx
/*1409ec91f*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ec92a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec931*/  mov [rbp+130h+var_50], 0Dh
/*1409ec93c*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ec943*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ec94e*/  mov rax, [rbp+130h+var_B8]
/*1409ec952*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ec959*/  mov rcx, r12
/*1409ec95c*/  lea rdx, [rbp+130h+var_E0]
/*1409ec960*/  lea r8, [rbp+130h+var_60]
/*1409ec967*/  mov r9, rsi
/*1409ec96a*/  call sub_140307860
/*1409ec96f*/  nop
/*1409ec970*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ec977*/  jz short loc_1409EC982
/*1409ec979*/  mov rcx, r12
/*1409ec97c*/  call sub_1400104F0
/*1409ec981*/  nop
loc_1409EC982: /*1409ec982*/ call nullsub_1
/*1409ec987*/  mov ecx, 5
/*1409ec98c*/  mov edx, 1
/*1409ec991*/  call sub_140001650
/*1409ec996*/  test rax, rax
/*1409ec999*/  jz loc_1409EE0C7
/*1409ec99f*/  mov byte ptr [rax+4], 61h ; 'a'
/*1409ec9a3*/  mov dword ptr [rax], 746C6564h
/*1409ec9a9*/  mov qword ptr [rbp+130h+var_60], 5
/*1409ec9b4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ec9bb*/  mov [rbp+130h+var_50], 5
/*1409ec9c6*/  test rbx, rbx
/*1409ec9c9*/  js loc_1409EDC2A
/*1409ec9cf*/  jz short loc_1409ECA0E
/*1409ec9d1*/  mov qword ptr [rbp+130h+var_F0+8], r15
/*1409ec9d5*/  call nullsub_1
/*1409ec9da*/  mov r15d, 1
/*1409ec9e0*/  mov edx, 1
/*1409ec9e5*/  mov rcx, rbx
/*1409ec9e8*/  call sub_140001650
/*1409ec9ed*/  test rax, rax
/*1409ec9f0*/  jz loc_1409EDC2D
/*1409ec9f6*/  mov r13, rax
/*1409ec9f9*/  mov rcx, rax
/*1409ec9fc*/  mov rdx, qword ptr [rbp+130h+var_F0]
/*1409eca00*/  mov r8, rbx
/*1409eca03*/  call sub_141684120
/*1409eca08*/  mov r15, qword ptr [rbp+130h+var_F0+8]
/*1409eca0c*/  jmp short loc_1409ECA14
loc_1409ECA0E: /*1409eca0e*/ mov r13d, 1
loc_1409ECA14: /*1409eca14*/ mov byte ptr [rbp+130h+var_80], 3
/*1409eca1b*/  mov qword ptr [rbp+130h+var_80+8], rbx
/*1409eca22*/  mov qword ptr [rbp+130h+var_70], r13
/*1409eca29*/  mov qword ptr [rbp+130h+var_70+8], rbx
/*1409eca30*/  mov [rbp+130h+var_BB], 0
loc_1409ECA34: /*1409eca34*/ mov rcx, r12
/*1409eca37*/  lea rdx, [rbp+130h+var_E0]
/*1409eca3b*/  lea r8, [rbp+130h+var_60]
/*1409eca42*/  mov r9, rsi
/*1409eca45*/  call sub_140307860
/*1409eca4a*/  nop
/*1409eca4b*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409eca52*/  jz short loc_1409ECA5D
loc_1409ECA54: /*1409eca54*/ mov rcx, r12
/*1409eca57*/  call sub_1400104F0
/*1409eca5c*/  nop
loc_1409ECA5D: /*1409eca5d*/ mov r13, rbx
/*1409eca60*/  mov rax, [rbp+130h+var_D0]
/*1409eca64*/  lea rcx, [rbp+130h+var_128]
/*1409eca68*/  mov [rcx+10h], rax
/*1409eca6c*/  movups xmm0, [rbp+130h+var_E0]
/*1409eca70*/  movups xmmword ptr [rcx], xmm0
/*1409eca73*/  mov byte ptr [rbp+130h+var_130], 5
/*1409eca77*/  mov rbx, rbp
/*1409eca7a*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409eca81*/  lea rax, sub_14142EA10
/*1409eca88*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409ECA8F: /*1409eca8f*/ mov rcx, rsi
/*1409eca92*/  lea rdx, unk_1417A79BF
/*1409eca99*/  mov r8, r12
/*1409eca9c*/  call sub_14149C0F0
/*1409ecaa1*/  nop
loc_1409ECAA2: /*1409ecaa2*/ mov rcx, rbx
/*1409ecaa5*/  call sub_1400104F0
/*1409ecaaa*/  nop
loc_1409ECAAB: /*1409ecaab*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ecab2*/  mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ecab9*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ecabd*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ecac4*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ecac8*/  sub rax, rdi
/*1409ecacb*/  cmp rbx, rax
/*1409ecace*/  ja loc_1409ED24F
/*1409ecad4*/  test rbx, rbx
/*1409ecad7*/  jz short loc_1409ECAEC
loc_1409ECAD9: /*1409ecad9*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ecadd*/  add rcx, rdi
/*1409ecae0*/  mov rdx, qword ptr [rbp+130h+var_F0+8]
/*1409ecae4*/  mov r8, rbx
/*1409ecae7*/  call sub_141684120
loc_1409ECAEC: /*1409ecaec*/ add rdi, rbx
/*1409ecaef*/  mov [rbp+130h+var_F8], rdi
/*1409ecaf3*/  test r14, r14
/*1409ecaf6*/  jz short loc_1409ECB0A
/*1409ecaf8*/  mov r8d, 1
/*1409ecafe*/  mov rcx, qword ptr [rbp+130h+var_F0+8]
/*1409ecb02*/  mov rdx, r14
/*1409ecb05*/  call sub_140001660
loc_1409ECB0A: /*1409ecb0a*/ mov qword ptr [rbp+130h+var_E0], 0
/*1409ecb12*/  mov [rbp+130h+var_D0], 0
/*1409ecb1a*/  call nullsub_1
/*1409ecb1f*/  mov ecx, 4
/*1409ecb24*/  mov edx, 1
/*1409ecb29*/  call sub_140001650
/*1409ecb2e*/  test rax, rax
/*1409ecb31*/  jz loc_1409EE172
/*1409ecb37*/  mov dword ptr [rax], 65707974h
/*1409ecb3d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecb48*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecb4f*/  mov [rbp+130h+var_50], 4
/*1409ecb5a*/  call nullsub_1
/*1409ecb5f*/  mov ecx, 19h
/*1409ecb64*/  mov edx, 1
/*1409ecb69*/  call sub_140001650
/*1409ecb6e*/  test rax, rax
/*1409ecb71*/  mov qword ptr [rbp+130h+var_F0+8], rax
/*1409ecb75*/  jz loc_1409EE160
/*1409ecb7b*/  movups xmm0, cs:xmmword_1417A5BE0+9
/*1409ecb82*/  movups xmmword ptr [rax+9], xmm0
/*1409ecb86*/  movups xmm0, cs:xmmword_1417A5BE0
/*1409ecb8d*/  movups xmmword ptr [rax], xmm0
/*1409ecb90*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ecb97*/  mov qword ptr [rbp+130h+var_80+8], 19h
/*1409ecba2*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecba9*/  mov qword ptr [rbp+130h+var_70+8], 19h
loc_1409ECBB4: /*1409ecbb4*/ mov rcx, r12
/*1409ecbb7*/  lea rdx, [rbp+130h+var_E0]
/*1409ecbbb*/  lea r8, [rbp+130h+var_60]
/*1409ecbc2*/  mov r9, rsi
/*1409ecbc5*/  call sub_140307860
/*1409ecbca*/  nop
/*1409ecbcb*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecbd2*/  jz short loc_1409ECBDD
loc_1409ECBD4: /*1409ecbd4*/ mov rcx, r12
/*1409ecbd7*/  call sub_1400104F0
/*1409ecbdc*/  nop
loc_1409ECBDD: /*1409ecbdd*/ call nullsub_1
/*1409ecbe2*/  mov ecx, 0Ch
/*1409ecbe7*/  mov edx, 1
/*1409ecbec*/  call sub_140001650
/*1409ecbf1*/  test rax, rax
/*1409ecbf4*/  jz loc_1409EE14E
/*1409ecbfa*/  mov rcx, 695F74757074756Fh
/*1409ecc04*/  mov [rax], rcx
/*1409ecc07*/  mov dword ptr [rax+8], 7865646Eh
/*1409ecc0e*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ecc19*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecc20*/  mov [rbp+130h+var_50], 0Ch
/*1409ecc2b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecc32*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ecc3d*/  mov rax, [rbp+130h+var_110]
/*1409ecc41*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecc48*/  mov rcx, r12
/*1409ecc4b*/  lea rdx, [rbp+130h+var_E0]
/*1409ecc4f*/  lea r8, [rbp+130h+var_60]
/*1409ecc56*/  mov r9, rsi
/*1409ecc59*/  call sub_140307860
/*1409ecc5e*/  nop
/*1409ecc5f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecc66*/  jz short loc_1409ECC71
/*1409ecc68*/  mov rcx, r12
/*1409ecc6b*/  call sub_1400104F0
/*1409ecc70*/  nop
loc_1409ECC71: /*1409ecc71*/ call nullsub_1
/*1409ecc76*/  mov ecx, 0Dh
/*1409ecc7b*/  mov edx, 1
/*1409ecc80*/  call sub_140001650
/*1409ecc85*/  test rax, rax
/*1409ecc88*/  jz loc_1409EE13C
/*1409ecc8e*/  mov rcx, 7865646E695F746Eh
/*1409ecc98*/  mov [rax+5], rcx
/*1409ecc9c*/  mov rcx, 5F746E65746E6F63h
/*1409ecca6*/  mov [rax], rcx
/*1409ecca9*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409eccb4*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409eccbb*/  mov [rbp+130h+var_50], 0Dh
/*1409eccc6*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecccd*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409eccd8*/  mov rax, [rbp+130h+var_B8]
/*1409eccdc*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecce3*/  mov rcx, r12
/*1409ecce6*/  lea rdx, [rbp+130h+var_E0]
/*1409eccea*/  lea r8, [rbp+130h+var_60]
/*1409eccf1*/  mov r9, rsi
/*1409eccf4*/  call sub_140307860
/*1409eccf9*/  nop
/*1409eccfa*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecd01*/  jz short loc_1409ECD0C
/*1409ecd03*/  mov rcx, r12
/*1409ecd06*/  call sub_1400104F0
/*1409ecd0b*/  nop
loc_1409ECD0C: /*1409ecd0c*/ call nullsub_1
/*1409ecd11*/  mov ecx, 4
/*1409ecd16*/  mov edx, 1
/*1409ecd1b*/  call sub_140001650
/*1409ecd20*/  test rax, rax
/*1409ecd23*/  jz loc_1409EE12A
/*1409ecd29*/  mov dword ptr [rax], 74786574h
/*1409ecd2f*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecd3a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecd41*/  mov [rbp+130h+var_50], 4
/*1409ecd4c*/  test r13, r13
/*1409ecd4f*/  jz short loc_1409ECD80
/*1409ecd51*/  call nullsub_1
/*1409ecd56*/  mov edx, 1
/*1409ecd5b*/  mov rcx, r13
/*1409ecd5e*/  call sub_140001650
/*1409ecd63*/  test rax, rax
/*1409ecd66*/  jz loc_1409EE184
/*1409ecd6c*/  mov rbx, rax
/*1409ecd6f*/  mov rcx, rax
/*1409ecd72*/  mov rdx, qword ptr [rbp+130h+var_F0]
/*1409ecd76*/  mov r8, r13
/*1409ecd79*/  call sub_141684120
/*1409ecd7e*/  jmp short loc_1409ECD85
loc_1409ECD80: /*1409ecd80*/ mov ebx, 1
loc_1409ECD85: /*1409ecd85*/ mov byte ptr [rbp+130h+var_80], 3
/*1409ecd8c*/  mov qword ptr [rbp+130h+var_80+8], r13
/*1409ecd93*/  mov qword ptr [rbp+130h+var_70], rbx
/*1409ecd9a*/  mov qword ptr [rbp+130h+var_70+8], r13
/*1409ecda1*/  mov [rbp+130h+var_BC], 0
loc_1409ECDA5: /*1409ecda5*/ mov rcx, r12
/*1409ecda8*/  lea rdx, [rbp+130h+var_E0]
/*1409ecdac*/  lea r8, [rbp+130h+var_60]
/*1409ecdb3*/  mov r9, rsi
/*1409ecdb6*/  call sub_140307860
/*1409ecdbb*/  nop
/*1409ecdbc*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecdc3*/  jz short loc_1409ECDCE
loc_1409ECDC5: /*1409ecdc5*/ mov rcx, r12
/*1409ecdc8*/  call sub_1400104F0
/*1409ecdcd*/  nop
loc_1409ECDCE: /*1409ecdce*/ mov rax, [rbp+130h+var_D0]
/*1409ecdd2*/  lea rcx, [rbp+130h+var_128]
/*1409ecdd6*/  mov [rcx+10h], rax
/*1409ecdda*/  movups xmm0, [rbp+130h+var_E0]
/*1409ecdde*/  movups xmmword ptr [rcx], xmm0
/*1409ecde1*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ecde5*/  mov rbx, rbp
/*1409ecde8*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ecdef*/  lea rax, sub_14142EA10
/*1409ecdf6*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409ECDFD: /*1409ecdfd*/ mov rcx, rsi
/*1409ece00*/  lea rdx, unk_1417A79ED
/*1409ece07*/  mov r8, r12
/*1409ece0a*/  call sub_14149C0F0
/*1409ece0f*/  nop
loc_1409ECE10: /*1409ece10*/ mov rcx, rbx
/*1409ece13*/  call sub_1400104F0
/*1409ece18*/  nop
loc_1409ECE19: /*1409ece19*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ece20*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ece27*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ece2e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ece32*/  sub rax, rdi
/*1409ece35*/  cmp rbx, rax
/*1409ece38*/  ja loc_1409ED27F
/*1409ece3e*/  test rbx, rbx
/*1409ece41*/  jz short loc_1409ECE55
loc_1409ECE43: /*1409ece43*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ece47*/  add rcx, rdi
/*1409ece4a*/  mov rdx, r13
/*1409ece4d*/  mov r8, rbx
/*1409ece50*/  call sub_141684120
loc_1409ECE55: /*1409ece55*/ add rdi, rbx
/*1409ece58*/  mov [rbp+130h+var_F8], rdi
/*1409ece5c*/  test r14, r14
/*1409ece5f*/  jz short loc_1409ECE80
/*1409ece61*/  mov r8d, 1
/*1409ece67*/  mov rcx, r13
/*1409ece6a*/  mov rdx, r14
/*1409ece6d*/  call sub_140001660
/*1409ece72*/  nop word ptr [rax+rax+00000000h]
loc_1409ECE80: /*1409ece80*/ mov qword ptr [rbp+130h+var_E0], 0
/*1409ece88*/  mov [rbp+130h+var_D0], 0
/*1409ece90*/  call nullsub_1
/*1409ece95*/  mov ecx, 4
/*1409ece9a*/  mov edx, 1
/*1409ece9f*/  call sub_140001650
/*1409ecea4*/  test rax, rax
/*1409ecea7*/  jz loc_1409EE05E
/*1409ecead*/  mov dword ptr [rax], 65707974h
/*1409eceb3*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ecebe*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecec5*/  mov [rbp+130h+var_50], 4
/*1409eced0*/  call nullsub_1
/*1409eced5*/  mov ecx, 1Ah
/*1409eceda*/  mov edx, 1
/*1409ecedf*/  call sub_140001650
/*1409ecee4*/  test rax, rax
/*1409ecee7*/  mov qword ptr [rbp+130h+var_F0], rax
/*1409eceeb*/  jz loc_1409EE049
/*1409ecef1*/  movups xmm0, cs:xmmword_1417A5BF9+0Ah
/*1409ecef8*/  movups xmmword ptr [rax+0Ah], xmm0
/*1409ecefc*/  movups xmm0, cs:xmmword_1417A5BF9
/*1409ecf03*/  movups xmmword ptr [rax], xmm0
/*1409ecf06*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ecf0d*/  mov qword ptr [rbp+130h+var_80+8], 1Ah
/*1409ecf18*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecf1f*/  mov qword ptr [rbp+130h+var_70+8], 1Ah
loc_1409ECF2A: /*1409ecf2a*/ mov rcx, r12
/*1409ecf2d*/  lea rdx, [rbp+130h+var_E0]
/*1409ecf31*/  lea r8, [rbp+130h+var_60]
/*1409ecf38*/  mov r9, rsi
/*1409ecf3b*/  call sub_140307860
/*1409ecf40*/  nop
/*1409ecf41*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecf48*/  jz short loc_1409ECF53
loc_1409ECF4A: /*1409ecf4a*/ mov rcx, r12
/*1409ecf4d*/  call sub_1400104F0
/*1409ecf52*/  nop
loc_1409ECF53: /*1409ecf53*/ call nullsub_1
/*1409ecf58*/  mov ecx, 0Ch
/*1409ecf5d*/  mov edx, 1
/*1409ecf62*/  call sub_140001650
/*1409ecf67*/  test rax, rax
/*1409ecf6a*/  jz loc_1409EE034
/*1409ecf70*/  mov rcx, 695F74757074756Fh
/*1409ecf7a*/  mov [rax], rcx
/*1409ecf7d*/  mov dword ptr [rax+8], 7865646Eh
/*1409ecf84*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ecf8f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ecf96*/  mov [rbp+130h+var_50], 0Ch
/*1409ecfa1*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ecfa8*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ecfb3*/  mov rax, [rbp+130h+var_110]
/*1409ecfb7*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ecfbe*/  mov rcx, r12
/*1409ecfc1*/  lea rdx, [rbp+130h+var_E0]
/*1409ecfc5*/  lea r8, [rbp+130h+var_60]
/*1409ecfcc*/  mov r9, rsi
/*1409ecfcf*/  call sub_140307860
/*1409ecfd4*/  nop
/*1409ecfd5*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ecfdc*/  jz short loc_1409ECFE7
/*1409ecfde*/  mov rcx, r12
/*1409ecfe1*/  call sub_1400104F0
/*1409ecfe6*/  nop
loc_1409ECFE7: /*1409ecfe7*/ call nullsub_1
/*1409ecfec*/  mov ecx, 0Dh
/*1409ecff1*/  mov edx, 1
/*1409ecff6*/  call sub_140001650
/*1409ecffb*/  test rax, rax
/*1409ecffe*/  jz loc_1409EE01F
/*1409ed004*/  mov rcx, 7865646E695F746Eh
/*1409ed00e*/  mov [rax+5], rcx
/*1409ed012*/  mov rcx, 5F746E65746E6F63h
/*1409ed01c*/  mov [rax], rcx
/*1409ed01f*/  mov qword ptr [rbp+130h+var_60], 0Dh
/*1409ed02a*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed031*/  mov [rbp+130h+var_50], 0Dh
/*1409ed03c*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed043*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed04e*/  mov rax, [rbp+130h+var_B8]
/*1409ed052*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed059*/  mov rcx, r12
/*1409ed05c*/  lea rdx, [rbp+130h+var_E0]
/*1409ed060*/  lea r8, [rbp+130h+var_60]
/*1409ed067*/  mov r9, rsi
/*1409ed06a*/  call sub_140307860
/*1409ed06f*/  nop
/*1409ed070*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed077*/  jz short loc_1409ED082
/*1409ed079*/  mov rcx, r12
/*1409ed07c*/  call sub_1400104F0
/*1409ed081*/  nop
loc_1409ED082: /*1409ed082*/ call nullsub_1
/*1409ed087*/  mov ecx, 4
/*1409ed08c*/  mov edx, 1
/*1409ed091*/  call sub_140001650
/*1409ed096*/  test rax, rax
/*1409ed099*/  jz loc_1409EE00A
/*1409ed09f*/  mov dword ptr [rax], 74726170h
/*1409ed0a5*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed0b0*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed0b7*/  mov [rbp+130h+var_50], 4
/*1409ed0c2*/  mov [rbp+130h+var_84], 1
loc_1409ED0C9: /*1409ed0c9*/ mov rcx, rsi
/*1409ed0cc*/  mov rdx, r15
/*1409ed0cf*/  call sub_140B842D0
/*1409ed0d4*/  nop
/*1409ed0d5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed0dc*/  jz loc_1409EDE0E
/*1409ed0e2*/  movups xmm0, [rbp+130h+var_80]
/*1409ed0e9*/  movups xmm1, [rbp+130h+var_70]
/*1409ed0f0*/  movaps [rbp+130h+var_A0], xmm1
/*1409ed0f7*/  movaps [rbp+130h+var_B0], xmm0
/*1409ed0fe*/  mov [rbp+130h+var_84], 0
/*1409ed105*/  mov rcx, rsi
/*1409ed108*/  lea rdx, [rbp+130h+var_E0]
/*1409ed10c*/  lea r8, [rbp+130h+var_60]
/*1409ed113*/  mov r9, r12
/*1409ed116*/  call sub_140307860
/*1409ed11b*/  nop
/*1409ed11c*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed123*/  jz short loc_1409ED12E
loc_1409ED125: /*1409ed125*/ mov rcx, rsi
/*1409ed128*/  call sub_1400104F0
/*1409ed12d*/  nop
loc_1409ED12E: /*1409ed12e*/ mov rax, [rbp+130h+var_D0]
/*1409ed132*/  lea rcx, [rbp+130h+var_128]
/*1409ed136*/  mov [rcx+10h], rax
/*1409ed13a*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed13e*/  movups xmmword ptr [rcx], xmm0
/*1409ed141*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed145*/  mov rbx, rbp
/*1409ed148*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed14f*/  lea rax, sub_14142EA10
/*1409ed156*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409ED15D: /*1409ed15d*/ mov rcx, rsi
/*1409ed160*/  lea rdx, unk_1417A7A38
/*1409ed167*/  mov r8, r12
/*1409ed16a*/  call sub_14149C0F0
/*1409ed16f*/  nop
loc_1409ED170: /*1409ed170*/ mov rcx, rbx
/*1409ed173*/  call sub_1400104F0
/*1409ed178*/  nop
loc_1409ED179: /*1409ed179*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ed180*/  mov r13, qword ptr [rbp+130h+var_80+8]
/*1409ed187*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed18e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed192*/  sub rax, rdi
/*1409ed195*/  cmp rbx, rax
/*1409ed198*/  ja short loc_1409ED217
/*1409ed19a*/  test rbx, rbx
/*1409ed19d*/  jz short loc_1409ED1B1
loc_1409ED19F: /*1409ed19f*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed1a3*/  add rcx, rdi
/*1409ed1a6*/  mov rdx, r13
/*1409ed1a9*/  mov r8, rbx
/*1409ed1ac*/  call sub_141684120
loc_1409ED1B1: /*1409ed1b1*/ add r15, 20h ; ' '
/*1409ed1b5*/  inc [rbp+130h+var_B8]
/*1409ed1b9*/  add rdi, rbx
/*1409ed1bc*/  mov [rbp+130h+var_F8], rdi
/*1409ed1c0*/  test r14, r14
/*1409ed1c3*/  jz loc_1409EC3F0
/*1409ed1c9*/  mov r8d, 1
/*1409ed1cf*/  mov rcx, r13
/*1409ed1d2*/  mov rdx, r14
/*1409ed1d5*/  call sub_140001660
/*1409ed1da*/  jmp loc_1409EC3F0
loc_1409ED1DF: /*1409ed1df*/ mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed1e3*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed1e7*/  mov [rsp+1B0h+var_190], 1
/*1409ed1f0*/  mov r9d, 1
/*1409ed1f6*/  lea rcx, [rbp+130h+var_108]
/*1409ed1fa*/  mov rdx, rdi
/*1409ed1fd*/  mov r8, rbx
/*1409ed200*/  call sub_141688D30
/*1409ed205*/  nop
/*1409ed206*/  mov rdi, [rbp+130h+var_F8]
/*1409ed20a*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed20e*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed212*/  jmp loc_1409EC71D
loc_1409ED217: /*1409ed217*/ mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed21b*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed21f*/  mov [rsp+1B0h+var_190], 1
/*1409ed228*/  mov r9d, 1
/*1409ed22e*/  lea rcx, [rbp+130h+var_108]
/*1409ed232*/  mov rdx, rdi
/*1409ed235*/  mov r8, rbx
/*1409ed238*/  call sub_141688D30
/*1409ed23d*/  nop
/*1409ed23e*/  mov rdi, [rbp+130h+var_F8]
/*1409ed242*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed246*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed24a*/  jmp loc_1409ED19F
loc_1409ED24F: /*1409ed24f*/ mov [rbp+130h+var_140], r14
/*1409ed253*/  mov [rsp+1B0h+var_190], 1
/*1409ed25c*/  mov r9d, 1
/*1409ed262*/  lea rcx, [rbp+130h+var_108]
/*1409ed266*/  mov rdx, rdi
/*1409ed269*/  mov r8, rbx
/*1409ed26c*/  call sub_141688D30
/*1409ed271*/  nop
/*1409ed272*/  mov rdi, [rbp+130h+var_F8]
/*1409ed276*/  mov r14, [rbp+130h+var_140]
/*1409ed27a*/  jmp loc_1409ECAD9
loc_1409ED27F: /*1409ed27f*/ mov qword ptr [rbp+130h+var_F0+8], r13
/*1409ed283*/  mov qword ptr [rbp+130h+var_F0], r14
/*1409ed287*/  mov [rsp+1B0h+var_190], 1
/*1409ed290*/  mov r9d, 1
/*1409ed296*/  lea rcx, [rbp+130h+var_108]
/*1409ed29a*/  mov rdx, rdi
/*1409ed29d*/  mov r8, rbx
/*1409ed2a0*/  call sub_141688D30
/*1409ed2a5*/  nop
/*1409ed2a6*/  mov rdi, [rbp+130h+var_F8]
/*1409ed2aa*/  mov r14, qword ptr [rbp+130h+var_F0]
/*1409ed2ae*/  mov r13, qword ptr [rbp+130h+var_F0+8]
/*1409ed2b2*/  jmp loc_1409ECE43
loc_1409ED2C0: /*1409ed2c0*/ mov rax, [r15]
/*1409ed2c3*/  mov rcx, 6E6F6974636E7566h
/*1409ed2cd*/  xor rax, rcx
/*1409ed2d0*/  mov rcx, [r15+5]
/*1409ed2d4*/  mov rdx, 6C6C61635F6E6F69h
/*1409ed2de*/  xor rcx, rdx
/*1409ed2e1*/  or rcx, rax
/*1409ed2e4*/  jz loc_1409ED5B4
loc_1409ED2EA: /*1409ed2ea*/ mov qword ptr [rbp+130h+var_E0], 0
/*1409ed2f2*/  mov [rbp+130h+var_D0], 0
/*1409ed2fa*/  call nullsub_1
/*1409ed2ff*/  mov ecx, 4
/*1409ed304*/  mov edx, 1
/*1409ed309*/  call sub_140001650
/*1409ed30e*/  test rax, rax
/*1409ed311*/  jz loc_1409EDEF9
/*1409ed317*/  mov dword ptr [rax], 65707974h
/*1409ed31d*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed328*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed32f*/  mov [rbp+130h+var_50], 4
/*1409ed33a*/  call nullsub_1
/*1409ed33f*/  mov ecx, 19h
/*1409ed344*/  mov edx, 1
/*1409ed349*/  call sub_140001650
/*1409ed34e*/  test rax, rax
/*1409ed351*/  mov [rbp+130h+var_B8], rax
/*1409ed355*/  jz loc_1409EDEE4
/*1409ed35b*/  movups xmm0, cs:xmmword_1417A5C30+9
/*1409ed362*/  movups xmmword ptr [rax+9], xmm0
/*1409ed366*/  movups xmm0, cs:xmmword_1417A5C30
/*1409ed36d*/  movups xmmword ptr [rax], xmm0
/*1409ed370*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ed377*/  mov qword ptr [rbp+130h+var_80+8], 19h
/*1409ed382*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed389*/  mov qword ptr [rbp+130h+var_70+8], 19h
loc_1409ED394: /*1409ed394*/ mov rcx, r12
/*1409ed397*/  lea rdx, [rbp+130h+var_E0]
/*1409ed39b*/  lea r8, [rbp+130h+var_60]
/*1409ed3a2*/  mov r9, rsi
/*1409ed3a5*/  call sub_140307860
/*1409ed3aa*/  nop
/*1409ed3ab*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed3b2*/  jz short loc_1409ED3BD
loc_1409ED3B4: /*1409ed3b4*/ mov rcx, r12
/*1409ed3b7*/  call sub_1400104F0
/*1409ed3bc*/  nop
loc_1409ED3BD: /*1409ed3bd*/ call nullsub_1
/*1409ed3c2*/  mov ecx, 0Ch
/*1409ed3c7*/  mov edx, 1
/*1409ed3cc*/  call sub_140001650
/*1409ed3d1*/  test rax, rax
/*1409ed3d4*/  jz loc_1409EDECF
/*1409ed3da*/  mov rcx, 695F74757074756Fh
/*1409ed3e4*/  mov [rax], rcx
/*1409ed3e7*/  mov dword ptr [rax+8], 7865646Eh
/*1409ed3ee*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ed3f9*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed400*/  mov [rbp+130h+var_50], 0Ch
/*1409ed40b*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed412*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed41d*/  mov rax, [rbp+130h+var_110]
/*1409ed421*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed428*/  mov rcx, r12
/*1409ed42b*/  lea rdx, [rbp+130h+var_E0]
/*1409ed42f*/  lea r8, [rbp+130h+var_60]
/*1409ed436*/  mov r9, rsi
/*1409ed439*/  call sub_140307860
/*1409ed43e*/  nop
/*1409ed43f*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed446*/  jz short loc_1409ED451
/*1409ed448*/  mov rcx, r12
/*1409ed44b*/  call sub_1400104F0
/*1409ed450*/  nop
loc_1409ED451: /*1409ed451*/ call nullsub_1
/*1409ed456*/  mov ecx, 4
/*1409ed45b*/  mov edx, 1
/*1409ed460*/  call sub_140001650
/*1409ed465*/  test rax, rax
/*1409ed468*/  jz loc_1409EDEBA
/*1409ed46e*/  mov dword ptr [rax], 6D657469h
/*1409ed474*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed47f*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed486*/  mov [rbp+130h+var_50], 4
/*1409ed491*/  mov [rbp+130h+var_85], 1
loc_1409ED498: /*1409ed498*/ mov rcx, rsi
/*1409ed49b*/  mov rdx, [rbp+130h+var_C8]
/*1409ed49f*/  call sub_140B842D0
/*1409ed4a4*/  nop
/*1409ed4a5*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed4ac*/  jz loc_1409EDC81
/*1409ed4b2*/  movups xmm0, [rbp+130h+var_80]
/*1409ed4b9*/  movups xmm1, [rbp+130h+var_70]
/*1409ed4c0*/  movaps [rbp+130h+var_A0], xmm1
/*1409ed4c7*/  movaps [rbp+130h+var_B0], xmm0
/*1409ed4ce*/  mov [rbp+130h+var_85], 0
/*1409ed4d5*/  mov rcx, rsi
/*1409ed4d8*/  lea rdx, [rbp+130h+var_E0]
/*1409ed4dc*/  lea r8, [rbp+130h+var_60]
/*1409ed4e3*/  mov r9, r12
/*1409ed4e6*/  call sub_140307860
/*1409ed4eb*/  nop
/*1409ed4ec*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409ed4f3*/  jz short loc_1409ED4FE
loc_1409ED4F5: /*1409ed4f5*/ mov rcx, rsi
/*1409ed4f8*/  call sub_1400104F0
/*1409ed4fd*/  nop
loc_1409ED4FE: /*1409ed4fe*/ mov rax, [rbp+130h+var_D0]
/*1409ed502*/  lea rcx, [rbp+130h+var_128]
/*1409ed506*/  mov [rcx+10h], rax
/*1409ed50a*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed50e*/  movups xmmword ptr [rcx], xmm0
/*1409ed511*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed515*/  mov rbx, rbp
/*1409ed518*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed51f*/  lea rax, sub_14142EA10
/*1409ed526*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409ED52D: /*1409ed52d*/ mov rcx, rsi
/*1409ed530*/  lea rdx, unk_1417A7A80
/*1409ed537*/  mov r8, r12
/*1409ed53a*/  call sub_14149C0F0
/*1409ed53f*/  nop
loc_1409ED540: /*1409ed540*/ mov rcx, rbx
/*1409ed543*/  call sub_1400104F0
/*1409ed548*/  nop
loc_1409ED549: /*1409ed549*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ed550*/  mov r15, qword ptr [rbp+130h+var_80+8]
/*1409ed557*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed55e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed562*/  sub rax, rdi
/*1409ed565*/  cmp rbx, rax
/*1409ed568*/  ja loc_1409ED920
/*1409ed56e*/  test rbx, rbx
/*1409ed571*/  jz short loc_1409ED585
loc_1409ED573: /*1409ed573*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed577*/  add rcx, rdi
/*1409ed57a*/  mov rdx, r15
/*1409ed57d*/  mov r8, rbx
/*1409ed580*/  call sub_141684120
loc_1409ED585: /*1409ed585*/ add [rbp+130h+var_C8], 20h ; ' '
/*1409ed58a*/  inc [rbp+130h+var_110]
/*1409ed58e*/  add rdi, rbx
/*1409ed591*/  mov [rbp+130h+var_F8], rdi
/*1409ed595*/  test r14, r14
/*1409ed598*/  jz loc_1409EC070
/*1409ed59e*/  mov r8d, 1
/*1409ed5a4*/  mov rcx, r15
/*1409ed5a7*/  mov rdx, r14
/*1409ed5aa*/  call sub_140001660
/*1409ed5af*/  jmp loc_1409EC070
loc_1409ED5B4: /*1409ed5b4*/ mov edx, 9
/*1409ed5b9*/  lea rcx, aArguments_1; "arguments"
/*1409ed5c0*/  mov r8, [rbp+130h+var_C8]
/*1409ed5c4*/  call sub_141433D50
/*1409ed5c9*/  nop
/*1409ed5ca*/  mov r14d, 2
/*1409ed5d0*/  test rax, rax
/*1409ed5d3*/  jz short loc_1409ED5EB
/*1409ed5d5*/  cmp byte ptr [rax], 3
/*1409ed5d8*/  lea rbx, asc_1417A4EB5; "{}"
/*1409ed5df*/  jnz short loc_1409ED5F2
/*1409ed5e1*/  mov rbx, [rax+10h]
/*1409ed5e5*/  mov r14, [rax+18h]
/*1409ed5e9*/  jmp short loc_1409ED5F2
loc_1409ED5EB: /*1409ed5eb*/ lea rbx, asc_1417A4EB5; "{}"
loc_1409ED5F2: /*1409ed5f2*/ mov qword ptr [rbp+130h+var_E0], 0
/*1409ed5fa*/  mov [rbp+130h+var_D0], 0
/*1409ed602*/  call nullsub_1
/*1409ed607*/  mov ecx, 4
/*1409ed60c*/  mov edx, 1
/*1409ed611*/  call sub_140001650
/*1409ed616*/  test rax, rax
/*1409ed619*/  jz loc_1409EE0B2
/*1409ed61f*/  mov dword ptr [rax], 65707974h
/*1409ed625*/  mov qword ptr [rbp+130h+var_60], 4
/*1409ed630*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed637*/  mov [rbp+130h+var_50], 4
/*1409ed642*/  call nullsub_1
/*1409ed647*/  mov ecx, 25h ; '%'
/*1409ed64c*/  mov edx, 1
/*1409ed651*/  call sub_140001650
/*1409ed656*/  test rax, rax
/*1409ed659*/  mov [rbp+130h+var_B8], rax
/*1409ed65d*/  jz loc_1409EE09D
/*1409ed663*/  mov r10, rax
/*1409ed666*/  movups xmm0, cs:xmmword_1417A5C88
/*1409ed66d*/  movups xmmword ptr [rax+10h], xmm0
/*1409ed671*/  movups xmm0, cs:xmmword_1417A5C78
/*1409ed678*/  movups xmmword ptr [rax], xmm0
/*1409ed67b*/  mov rax, 656E6F642E73746Eh
/*1409ed685*/  mov [r10+1Dh], rax
/*1409ed689*/  mov byte ptr [rbp+130h+var_80], 3
/*1409ed690*/  mov qword ptr [rbp+130h+var_80+8], 25h ; '%'
/*1409ed69b*/  mov qword ptr [rbp+130h+var_70], r10
/*1409ed6a2*/  mov qword ptr [rbp+130h+var_70+8], 25h ; '%'
loc_1409ED6AD: /*1409ed6ad*/ mov rcx, r12
/*1409ed6b0*/  lea rdx, [rbp+130h+var_E0]
/*1409ed6b4*/  lea r8, [rbp+130h+var_60]
/*1409ed6bb*/  mov r9, rsi
/*1409ed6be*/  call sub_140307860
/*1409ed6c3*/  nop
/*1409ed6c4*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed6cb*/  jz short loc_1409ED6D6
loc_1409ED6CD: /*1409ed6cd*/ mov rcx, r12
/*1409ed6d0*/  call sub_1400104F0
/*1409ed6d5*/  nop
loc_1409ED6D6: /*1409ed6d6*/ call nullsub_1
/*1409ed6db*/  mov ecx, 0Ch
/*1409ed6e0*/  mov edx, 1
/*1409ed6e5*/  call sub_140001650
/*1409ed6ea*/  test rax, rax
/*1409ed6ed*/  jz loc_1409EE088
/*1409ed6f3*/  mov rcx, 695F74757074756Fh
/*1409ed6fd*/  mov [rax], rcx
/*1409ed700*/  mov dword ptr [rax+8], 7865646Eh
/*1409ed707*/  mov qword ptr [rbp+130h+var_60], 0Ch
/*1409ed712*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed719*/  mov [rbp+130h+var_50], 0Ch
/*1409ed724*/  mov byte ptr [rbp+130h+var_80], 2
/*1409ed72b*/  mov qword ptr [rbp+130h+var_80+8], 0
/*1409ed736*/  mov rax, [rbp+130h+var_110]
/*1409ed73a*/  mov qword ptr [rbp+130h+var_70], rax
/*1409ed741*/  mov rcx, r12
/*1409ed744*/  lea rdx, [rbp+130h+var_E0]
/*1409ed748*/  lea r8, [rbp+130h+var_60]
/*1409ed74f*/  mov r9, rsi
/*1409ed752*/  call sub_140307860
/*1409ed757*/  nop
/*1409ed758*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed75f*/  jz short loc_1409ED76A
/*1409ed761*/  mov rcx, r12
/*1409ed764*/  call sub_1400104F0
/*1409ed769*/  nop
loc_1409ED76A: /*1409ed76a*/ call nullsub_1
/*1409ed76f*/  mov ecx, 9
/*1409ed774*/  mov edx, 1
/*1409ed779*/  call sub_140001650
/*1409ed77e*/  test rax, rax
/*1409ed781*/  jz loc_1409EE073
/*1409ed787*/  mov rcx, 746E656D75677261h
/*1409ed791*/  mov [rax], rcx
/*1409ed794*/  mov byte ptr [rax+8], 73h ; 's'
/*1409ed798*/  mov qword ptr [rbp+130h+var_60], 9
/*1409ed7a3*/  mov qword ptr [rbp+130h+var_60+8], rax
/*1409ed7aa*/  mov [rbp+130h+var_50], 9
/*1409ed7b5*/  test r14, r14
/*1409ed7b8*/  js loc_1409EDC12
/*1409ed7be*/  jz short loc_1409ED7F4
/*1409ed7c0*/  call nullsub_1
/*1409ed7c5*/  mov r15d, 1
/*1409ed7cb*/  mov edx, 1
/*1409ed7d0*/  mov rcx, r14
/*1409ed7d3*/  call sub_140001650
/*1409ed7d8*/  test rax, rax
/*1409ed7db*/  jz loc_1409EDC15
/*1409ed7e1*/  mov r13, rax
/*1409ed7e4*/  mov rcx, rax
/*1409ed7e7*/  mov rdx, rbx
/*1409ed7ea*/  mov r8, r14
/*1409ed7ed*/  call sub_141684120
/*1409ed7f2*/  jmp short loc_1409ED7FA
loc_1409ED7F4: /*1409ed7f4*/ mov r13d, 1
loc_1409ED7FA: /*1409ed7fa*/ mov byte ptr [rbp+130h+var_80], 3
/*1409ed801*/  mov qword ptr [rbp+130h+var_80+8], r14
/*1409ed808*/  mov qword ptr [rbp+130h+var_70], r13
/*1409ed80f*/  mov qword ptr [rbp+130h+var_70+8], r14
/*1409ed816*/  mov [rbp+130h+var_BA], 0
loc_1409ED81A: /*1409ed81a*/ mov rcx, r12
/*1409ed81d*/  lea rdx, [rbp+130h+var_E0]
/*1409ed821*/  lea r8, [rbp+130h+var_60]
/*1409ed828*/  mov r9, rsi
/*1409ed82b*/  call sub_140307860
/*1409ed830*/  nop
/*1409ed831*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409ed838*/  jz short loc_1409ED843
loc_1409ED83A: /*1409ed83a*/ mov rcx, r12
/*1409ed83d*/  call sub_1400104F0
/*1409ed842*/  nop
loc_1409ED843: /*1409ed843*/ mov rax, [rbp+130h+var_D0]
/*1409ed847*/  lea rcx, [rbp+130h+var_128]
/*1409ed84b*/  mov [rcx+10h], rax
/*1409ed84f*/  movups xmm0, [rbp+130h+var_E0]
/*1409ed853*/  movups xmmword ptr [rcx], xmm0
/*1409ed856*/  mov byte ptr [rbp+130h+var_130], 5
/*1409ed85a*/  mov rbx, rbp
/*1409ed85d*/  mov qword ptr [rbp+130h+var_B0], rbx
/*1409ed864*/  lea rax, sub_14142EA10
/*1409ed86b*/  mov qword ptr [rbp+130h+var_B0+8], rax
loc_1409ED872: /*1409ed872*/ mov rcx, rsi
/*1409ed875*/  lea rdx, unk_1417A793E
/*1409ed87c*/  mov r8, r12
/*1409ed87f*/  call sub_14149C0F0
/*1409ed884*/  nop
loc_1409ED885: /*1409ed885*/ mov rcx, rbx
/*1409ed888*/  call sub_1400104F0
/*1409ed88d*/  nop
loc_1409ED88E: /*1409ed88e*/ mov r14, qword ptr [rbp+130h+var_80]
/*1409ed895*/  mov r15, qword ptr [rbp+130h+var_80+8]
/*1409ed89c*/  mov rbx, qword ptr [rbp+130h+var_70]
/*1409ed8a3*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409ed8a7*/  sub rax, rdi
/*1409ed8aa*/  cmp rbx, rax
/*1409ed8ad*/  ja loc_1409ED958
/*1409ed8b3*/  test rbx, rbx
/*1409ed8b6*/  jz short loc_1409ED8CA
loc_1409ED8B8: /*1409ed8b8*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409ed8bc*/  add rcx, rdi
/*1409ed8bf*/  mov rdx, r15
/*1409ed8c2*/  mov r8, rbx
/*1409ed8c5*/  call sub_141684120
loc_1409ED8CA: /*1409ed8ca*/ add rdi, rbx
/*1409ed8cd*/  mov [rbp+130h+var_F8], rdi
/*1409ed8d1*/  test r14, r14
/*1409ed8d4*/  jz loc_1409ED2EA
/*1409ed8da*/  mov r8d, 1
/*1409ed8e0*/  mov rcx, r15
/*1409ed8e3*/  mov rdx, r14
/*1409ed8e6*/  call sub_140001660
/*1409ed8eb*/  jmp loc_1409ED2EA
loc_1409ED8F0: /*1409ed8f0*/ mov [rbp+130h+var_138], r14
/*1409ed8f4*/  mov [rsp+1B0h+var_190], 1
/*1409ed8fd*/  mov r9d, 1
/*1409ed903*/  lea rcx, [rbp+130h+var_108]
/*1409ed907*/  mov rdx, rdi
/*1409ed90a*/  mov r8, rbx
/*1409ed90d*/  call sub_141688D30
/*1409ed912*/  nop
/*1409ed913*/  mov rdi, [rbp+130h+var_F8]
/*1409ed917*/  mov r14, [rbp+130h+var_138]
/*1409ed91b*/  jmp loc_1409EC344
loc_1409ED920: /*1409ed920*/ mov [rbp+130h+var_138], r15
/*1409ed924*/  mov [rbp+130h+var_B8], r14
/*1409ed928*/  mov [rsp+1B0h+var_190], 1
/*1409ed931*/  mov r9d, 1
/*1409ed937*/  lea rcx, [rbp+130h+var_108]
/*1409ed93b*/  mov rdx, rdi
/*1409ed93e*/  mov r8, rbx
/*1409ed941*/  call sub_141688D30
/*1409ed946*/  nop
/*1409ed947*/  mov rdi, [rbp+130h+var_F8]
/*1409ed94b*/  mov r14, [rbp+130h+var_B8]
/*1409ed94f*/  mov r15, [rbp+130h+var_138]
/*1409ed953*/  jmp loc_1409ED573
loc_1409ED958: /*1409ed958*/ mov [rbp+130h+var_138], r15
/*1409ed95c*/  mov [rbp+130h+var_B8], r14
/*1409ed960*/  mov [rsp+1B0h+var_190], 1
/*1409ed969*/  mov r9d, 1
/*1409ed96f*/  lea rcx, [rbp+130h+var_108]
/*1409ed973*/  mov rdx, rdi
/*1409ed976*/  mov r8, rbx
/*1409ed979*/  call sub_141688D30
/*1409ed97e*/  nop
/*1409ed97f*/  mov rdi, [rbp+130h+var_F8]
/*1409ed983*/  mov r14, [rbp+130h+var_B8]
/*1409ed987*/  mov r15, [rbp+130h+var_138]
/*1409ed98b*/  jmp loc_1409ED8B8
loc_1409ED990: /*1409ed990*/ mov qword ptr [rbp+130h+var_60], 0
/*1409ed99b*/  mov [rbp+130h+var_50], 0
/*1409ed9a6*/  call nullsub_1
/*1409ed9ab*/  mov ecx, 4
/*1409ed9b0*/  mov edx, 1
/*1409ed9b5*/  call sub_140001650
/*1409ed9ba*/  test rax, rax
/*1409ed9bd*/  jz loc_1409EDF62
/*1409ed9c3*/  mov dword ptr [rax], 65707974h
/*1409ed9c9*/  mov [rbp+130h+var_130], 4
/*1409ed9d1*/  mov [rbp+130h+var_128], rax
/*1409ed9d5*/  mov [rbp+130h+var_120], 4
/*1409ed9dd*/  call nullsub_1
/*1409ed9e2*/  mov ecx, 12h
/*1409ed9e7*/  mov edx, 1
/*1409ed9ec*/  call sub_140001650
/*1409ed9f1*/  test rax, rax
/*1409ed9f4*/  mov [rbp+130h+var_C8], rax
/*1409ed9f8*/  jz loc_1409EDF77
/*1409ed9fe*/  movups xmm0, xmmword ptr cs:aResponseComple; "response.completed"
/*1409eda05*/  movups xmmword ptr [rax], xmm0
/*1409eda08*/  mov word ptr [rax+10h], 6465h
/*1409eda0e*/  mov byte ptr [rbp+130h+var_80], 3
/*1409eda15*/  mov qword ptr [rbp+130h+var_80+8], 12h
/*1409eda20*/  mov qword ptr [rbp+130h+var_70], rax
/*1409eda27*/  mov qword ptr [rbp+130h+var_70+8], 12h
loc_1409EDA32: /*1409eda32*/ lea rcx, [rbp+130h+var_B0]
/*1409eda39*/  lea rdx, [rbp+130h+var_60]
/*1409eda40*/  mov r8, rbp
/*1409eda43*/  lea r9, [rbp+130h+var_80]
/*1409eda4a*/  call sub_140307860
/*1409eda4f*/  nop
/*1409eda50*/  cmp byte ptr [rbp+130h+var_B0], 0FFh
/*1409eda57*/  jz short loc_1409EDA66
loc_1409EDA59: /*1409eda59*/ lea rcx, [rbp+130h+var_B0]
/*1409eda60*/  call sub_1400104F0
/*1409eda65*/  nop
loc_1409EDA66: /*1409eda66*/ call nullsub_1
/*1409eda6b*/  mov ecx, 8
/*1409eda70*/  mov edx, 1
/*1409eda75*/  call sub_140001650
/*1409eda7a*/  test rax, rax
/*1409eda7d*/  jz loc_1409EDF8C
/*1409eda83*/  mov rcx, 65736E6F70736572h
/*1409eda8d*/  mov [rax], rcx
/*1409eda90*/  mov [rbp+130h+var_130], 8
/*1409eda98*/  mov [rbp+130h+var_128], rax
/*1409eda9c*/  mov [rbp+130h+var_120], 8
/*1409edaa4*/  mov [rbp+130h+var_86], 1
loc_1409EDAAB: /*1409edaab*/ lea rcx, [rbp+130h+var_80]
/*1409edab2*/  mov rdx, [rbp+130h+var_150]
/*1409edab6*/  call sub_140B842D0
/*1409edabb*/  nop
/*1409edabc*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409edac3*/  jz loc_1409EDD58
/*1409edac9*/  movups xmm0, [rbp+130h+var_80]
/*1409edad0*/  movups xmm1, [rbp+130h+var_70]
/*1409edad7*/  movaps [rbp+130h+var_A0], xmm1
/*1409edade*/  movaps [rbp+130h+var_B0], xmm0
/*1409edae5*/  mov [rbp+130h+var_86], 0
/*1409edaec*/  lea rsi, [rbp+130h+var_80]
/*1409edaf3*/  lea rdx, [rbp+130h+var_60]
/*1409edafa*/  mov r8, rbp
/*1409edafd*/  lea r9, [rbp+130h+var_B0]
/*1409edb04*/  mov rcx, rsi
/*1409edb07*/  call sub_140307860
/*1409edb0c*/  nop
/*1409edb0d*/  cmp byte ptr [rbp+130h+var_80], 0FFh
/*1409edb14*/  jz short loc_1409EDB23
loc_1409EDB16: /*1409edb16*/ lea rcx, [rbp+130h+var_80]
/*1409edb1d*/  call sub_1400104F0
/*1409edb22*/  nop
loc_1409EDB23: /*1409edb23*/ movups xmm0, [rbp+130h+var_60]
/*1409edb2a*/  movups [rbp+130h+var_80+8], xmm0
/*1409edb31*/  mov rax, [rbp+130h+var_50]
/*1409edb38*/  mov qword ptr [rbp+130h+var_70+8], rax
/*1409edb3f*/  mov byte ptr [rbp+130h+var_80], 5
/*1409edb46*/  mov [rbp+130h+var_130], rsi
/*1409edb4a*/  lea rax, sub_14142EA10
/*1409edb51*/  mov [rbp+130h+var_128], rax
loc_1409EDB55: /*1409edb55*/ lea rdx, unk_1417A7AC8
/*1409edb5c*/  lea rcx, [rbp+130h+var_B0]
/*1409edb63*/  mov r8, rbp
/*1409edb66*/  call sub_14149C0F0
/*1409edb6b*/  nop
loc_1409EDB6C: /*1409edb6c*/ lea rcx, [rbp+130h+var_80]
/*1409edb73*/  call sub_1400104F0
/*1409edb78*/  nop
loc_1409EDB79: /*1409edb79*/ mov rbx, qword ptr [rbp+130h+var_B0]
/*1409edb80*/  mov r14, qword ptr [rbp+130h+var_B0+8]
/*1409edb87*/  mov rsi, qword ptr [rbp+130h+var_A0]
/*1409edb8e*/  mov rax, qword ptr [rbp+130h+var_108]
/*1409edb92*/  mov rdi, [rbp+130h+var_F8]
/*1409edb96*/  sub rax, rdi
/*1409edb99*/  cmp rsi, rax
/*1409edb9c*/  ja loc_1409EDD97
/*1409edba2*/  test rsi, rsi
/*1409edba5*/  jz short loc_1409EDBB9
loc_1409EDBA7: /*1409edba7*/ mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409edbab*/  add rcx, rdi
/*1409edbae*/  mov rdx, r14
/*1409edbb1*/  mov r8, rsi
/*1409edbb4*/  call sub_141684120
loc_1409EDBB9: /*1409edbb9*/ add rdi, rsi
/*1409edbbc*/  mov [rbp+130h+var_F8], rdi
/*1409edbc0*/  test rbx, rbx
/*1409edbc3*/  jz short loc_1409EDBD6
/*1409edbc5*/  mov r8d, 1
/*1409edbcb*/  mov rcx, r14
/*1409edbce*/  mov rdx, rbx
/*1409edbd1*/  call sub_140001660
loc_1409EDBD6: /*1409edbd6*/ mov rax, [rbp+130h+var_F8]
/*1409edbda*/  mov rcx, [rbp+130h+var_148]
/*1409edbde*/  mov [rcx+10h], rax
/*1409edbe2*/  movups xmm0, [rbp+130h+var_108]
/*1409edbe6*/  movups xmmword ptr [rcx], xmm0
/*1409edbe9*/  mov [rbp+130h+var_41], 0
loc_1409EDBF0: /*1409edbf0*/ lea rcx, [rbp+130h+var_180]
/*1409edbf4*/  call sub_1400104F0
/*1409edbf9*/  nop
/*1409edbfa*/  mov rax, [rbp+130h+var_148]
/*1409edbfe*/  add rsp, 178h
/*1409edc05*/  pop rbx
/*1409edc06*/  pop rdi
/*1409edc07*/  pop rsi
/*1409edc08*/  pop r12
/*1409edc0a*/  pop r13
/*1409edc0c*/  pop r14
/*1409edc0e*/  pop r15
/*1409edc10*/  pop rbp
/*1409edc11*/  retn
loc_1409EDC12: /*1409edc12*/ xor r15d, r15d
loc_1409EDC15: /*1409edc15*/ mov [rbp+130h+var_BA], 1
loc_1409EDC19: /*1409edc19*/ mov rcx, r15
/*1409edc1c*/  mov rdx, r14
/*1409edc1f*/  call sub_1416C2D4B
/*1409edc25*/  jmp loc_1409EE196
loc_1409EDC2A: /*1409edc2a*/ xor r15d, r15d
loc_1409EDC2D: /*1409edc2d*/ mov [rbp+130h+var_BB], 1
loc_1409EDC31: /*1409edc31*/ mov rcx, r15
/*1409edc34*/  mov rdx, rbx
/*1409edc37*/  call sub_1416C2D4B
/*1409edc3d*/  jmp loc_1409EE196
loc_1409EDC42: /*1409edc42*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edc49*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDC50: /*1409edc50*/ lea rax, off_1417A78F8; "src\\core\\relay\\translator.rs"
/*1409edc57*/  mov [rsp+1B0h+var_190], rax
/*1409edc5c*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edc63*/  lea r9, off_1417A5560
/*1409edc6a*/  lea r8, [rbp+130h+var_B0]
/*1409edc71*/  mov edx, 2Bh ; '+'
/*1409edc76*/  call sub_1416C3060
/*1409edc7c*/  jmp loc_1409EE196
loc_1409EDC81: /*1409edc81*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edc88*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDC8F: /*1409edc8f*/ lea rax, off_1417A7A68; "src\\core\\relay\\translator.rs"
/*1409edc96*/  mov [rsp+1B0h+var_190], rax
/*1409edc9b*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edca2*/  lea r9, off_1417A5560
/*1409edca9*/  lea r8, [rbp+130h+var_B0]
/*1409edcb0*/  mov edx, 2Bh ; '+'
/*1409edcb5*/  call sub_1416C3060
/*1409edcbb*/  jmp loc_1409EE196
loc_1409EDCC0: /*1409edcc0*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edcc7*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDCCE: /*1409edcce*/ lea rax, off_1417A78B8; "src\\core\\relay\\translator.rs"
/*1409edcd5*/  mov [rsp+1B0h+var_190], rax
/*1409edcda*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edce1*/  lea r9, off_1417A5560
/*1409edce8*/  lea r8, [rbp+130h+var_B0]
/*1409edcef*/  mov edx, 2Bh ; '+'
/*1409edcf4*/  call sub_1416C3060
/*1409edcfa*/  jmp loc_1409EE196
loc_1409EDCFF: /*1409edcff*/ mov [rbp+130h+var_110], rbx
/*1409edd03*/  mov [rbp+130h+var_C8], rdx
/*1409edd07*/  mov [rsp+1B0h+var_190], 1
/*1409edd10*/  lea rcx, [rbp+130h+var_108]
/*1409edd14*/  mov r9d, 1
/*1409edd1a*/  xor edx, edx
/*1409edd1c*/  mov r8, rsi
/*1409edd1f*/  call sub_141688D30
/*1409edd24*/  nop
loc_1409EDD25: /*1409edd25*/ mov rdi, [rbp+130h+var_F8]
/*1409edd29*/  mov rcx, qword ptr [rbp+130h+var_108+8]
/*1409edd2d*/  add rcx, rdi
/*1409edd30*/  mov rbx, [rbp+130h+var_110]
/*1409edd34*/  mov rdx, rbx
/*1409edd37*/  mov r8, rsi
/*1409edd3a*/  call sub_141684120
/*1409edd3f*/  mov rdx, [rbp+130h+var_C8]
/*1409edd43*/  add rdi, rsi
/*1409edd46*/  mov [rbp+130h+var_F8], rdi
/*1409edd4a*/  test rdx, rdx
/*1409edd4d*/  jnz loc_1409EC000
/*1409edd53*/  jmp loc_1409EC00F
loc_1409EDD58: /*1409edd58*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409edd5f*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDD66: /*1409edd66*/ lea rax, off_1417A7AB0; "src\\core\\relay\\translator.rs"
/*1409edd6d*/  mov [rsp+1B0h+var_190], rax
/*1409edd72*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409edd79*/  lea r9, off_1417A5560
/*1409edd80*/  lea r8, [rbp+130h+var_B0]
/*1409edd87*/  mov edx, 2Bh ; '+'
/*1409edd8c*/  call sub_1416C3060
/*1409edd92*/  jmp loc_1409EE196
loc_1409EDD97: /*1409edd97*/ mov [rbp+130h+var_110], r14
/*1409edd9b*/  mov [rbp+130h+var_C8], rbx
/*1409edd9f*/  mov [rsp+1B0h+var_190], 1
/*1409edda8*/  lea rcx, [rbp+130h+var_108]
/*1409eddac*/  mov r9d, 1
/*1409eddb2*/  mov rdx, rdi
/*1409eddb5*/  mov r8, rsi
/*1409eddb8*/  call sub_141688D30
/*1409eddbd*/  nop
/*1409eddbe*/  mov rdi, [rbp+130h+var_F8]
/*1409eddc2*/  mov rbx, [rbp+130h+var_C8]
/*1409eddc6*/  mov r14, [rbp+130h+var_110]
/*1409eddca*/  jmp loc_1409EDBA7
loc_1409EDDCF: /*1409eddcf*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409eddd6*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDDDD: /*1409edddd*/ lea rax, off_1417A7978; "src\\core\\relay\\translator.rs"
/*1409edde4*/  mov [rsp+1B0h+var_190], rax
/*1409edde9*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409eddf0*/  lea r9, off_1417A5560
/*1409eddf7*/  lea r8, [rbp+130h+var_B0]
/*1409eddfe*/  mov edx, 2Bh ; '+'
/*1409ede03*/  call sub_1416C3060
/*1409ede09*/  jmp loc_1409EE196
loc_1409EDE0E: /*1409ede0e*/ mov rax, qword ptr [rbp+130h+var_80+8]
/*1409ede15*/  mov qword ptr [rbp+130h+var_B0], rax
loc_1409EDE1C: /*1409ede1c*/ lea rax, off_1417A7A20; "src\\core\\relay\\translator.rs"
/*1409ede23*/  mov [rsp+1B0h+var_190], rax
/*1409ede28*/  lea rcx, aCalledResultUn_15; "called `Result::unwrap()` on an `Err` v"...
/*1409ede2f*/  lea r9, off_1417A5560
/*1409ede36*/  lea r8, [rbp+130h+var_B0]
/*1409ede3d*/  mov edx, 2Bh ; '+'
/*1409ede42*/  call sub_1416C3060
/*1409ede48*/  jmp loc_1409EE196
loc_1409EDE4D: /*1409ede4d*/ mov [rbp+130h+var_41], 1
loc_1409EDE54: /*1409ede54*/ lea rcx, off_141747358; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1409ede5b*/  call sub_1416C3040
/*1409ede61*/  jmp loc_1409EE196
loc_1409EDE66: /*1409ede66*/ mov ecx, 1
/*1409ede6b*/  mov edx, 1Ah
/*1409ede70*/  call sub_1416C2D4B
/*1409ede76*/  jmp loc_1409EE196
loc_1409EDE7B: /*1409ede7b*/ mov ecx, 1
/*1409ede80*/  mov edx, 0Ch
/*1409ede85*/  call sub_1416C2D4B
/*1409ede8b*/  jmp loc_1409EE196
loc_1409EDE90: /*1409ede90*/ mov ecx, 1
/*1409ede95*/  mov edx, 4
/*1409ede9a*/  call sub_1416C2D4B
/*1409edea0*/  jmp loc_1409EE196
loc_1409EDEA5: /*1409edea5*/ mov ecx, 1
/*1409edeaa*/  mov edx, 4
/*1409edeaf*/  call sub_1416C2D4B
/*1409edeb5*/  jmp loc_1409EE196
loc_1409EDEBA: /*1409edeba*/ mov ecx, 1
/*1409edebf*/  mov edx, 4
/*1409edec4*/  call sub_1416C2D4B
/*1409edeca*/  jmp loc_1409EE196
loc_1409EDECF: /*1409edecf*/ mov ecx, 1
/*1409eded4*/  mov edx, 0Ch
/*1409eded9*/  call sub_1416C2D4B
/*1409ededf*/  jmp loc_1409EE196
loc_1409EDEE4: /*1409edee4*/ mov ecx, 1
/*1409edee9*/  mov edx, 19h
/*1409edeee*/  call sub_1416C2D4B
/*1409edef4*/  jmp loc_1409EE196
loc_1409EDEF9: /*1409edef9*/ mov ecx, 1
/*1409edefe*/  mov edx, 4
/*1409edf03*/  call sub_1416C2D4B
/*1409edf09*/  jmp loc_1409EE196
loc_1409EDF0E: /*1409edf0e*/ mov ecx, 1
/*1409edf13*/  mov edx, 0Bh
/*1409edf18*/  call sub_1416C2D4B
/*1409edf1e*/  jmp loc_1409EE196
loc_1409EDF23: /*1409edf23*/ mov ecx, 1
/*1409edf28*/  mov edx, 4
/*1409edf2d*/  call sub_1416C2D4B
/*1409edf33*/  jmp loc_1409EE196
loc_1409EDF38: /*1409edf38*/ mov ecx, 1
/*1409edf3d*/  mov edx, 10h
/*1409edf42*/  call sub_1416C2D4B
/*1409edf48*/  jmp loc_1409EE196
loc_1409EDF4D: /*1409edf4d*/ mov ecx, 1
/*1409edf52*/  mov edx, 8
/*1409edf57*/  call sub_1416C2D4B
/*1409edf5d*/  jmp loc_1409EE196
loc_1409EDF62: /*1409edf62*/ mov ecx, 1
/*1409edf67*/  mov edx, 4
/*1409edf6c*/  call sub_1416C2D4B
/*1409edf72*/  jmp loc_1409EE196
loc_1409EDF77: /*1409edf77*/ mov ecx, 1
/*1409edf7c*/  mov edx, 12h
/*1409edf81*/  call sub_1416C2D4B
/*1409edf87*/  jmp loc_1409EE196
loc_1409EDF8C: /*1409edf8c*/ mov ecx, 1
/*1409edf91*/  mov edx, 8
/*1409edf96*/  call sub_1416C2D4B
/*1409edf9c*/  jmp loc_1409EE196
loc_1409EDFA1: /*1409edfa1*/ mov ecx, 1
/*1409edfa6*/  mov edx, 4
/*1409edfab*/  call sub_1416C2D4B
/*1409edfb1*/  jmp loc_1409EE196
loc_1409EDFB6: /*1409edfb6*/ mov ecx, 1
/*1409edfbb*/  mov edx, 0Dh
/*1409edfc0*/  call sub_1416C2D4B
/*1409edfc6*/  jmp loc_1409EE196
loc_1409EDFCB: /*1409edfcb*/ mov ecx, 1
/*1409edfd0*/  mov edx, 0Ch
/*1409edfd5*/  call sub_1416C2D4B
/*1409edfdb*/  jmp loc_1409EE196
loc_1409EDFE0: /*1409edfe0*/ mov ecx, 1
/*1409edfe5*/  mov edx, 1Bh
/*1409edfea*/  call sub_1416C2D4B
/*1409edff0*/  jmp loc_1409EE196
loc_1409EDFF5: /*1409edff5*/ mov ecx, 1
/*1409edffa*/  mov edx, 4
/*1409edfff*/  call sub_1416C2D4B
/*1409ee005*/  jmp loc_1409EE196
loc_1409EE00A: /*1409ee00a*/ mov ecx, 1
/*1409ee00f*/  mov edx, 4
/*1409ee014*/  call sub_1416C2D4B
/*1409ee01a*/  jmp loc_1409EE196
loc_1409EE01F: /*1409ee01f*/ mov ecx, 1
/*1409ee024*/  mov edx, 0Dh
/*1409ee029*/  call sub_1416C2D4B
/*1409ee02f*/  jmp loc_1409EE196
loc_1409EE034: /*1409ee034*/ mov ecx, 1
/*1409ee039*/  mov edx, 0Ch
/*1409ee03e*/  call sub_1416C2D4B
/*1409ee044*/  jmp loc_1409EE196
loc_1409EE049: /*1409ee049*/ mov ecx, 1
/*1409ee04e*/  mov edx, 1Ah
/*1409ee053*/  call sub_1416C2D4B
/*1409ee059*/  jmp loc_1409EE196
loc_1409EE05E: /*1409ee05e*/ mov ecx, 1
/*1409ee063*/  mov edx, 4
/*1409ee068*/  call sub_1416C2D4B
/*1409ee06e*/  jmp loc_1409EE196
loc_1409EE073: /*1409ee073*/ mov ecx, 1
/*1409ee078*/  mov edx, 9
/*1409ee07d*/  call sub_1416C2D4B
/*1409ee083*/  jmp loc_1409EE196
loc_1409EE088: /*1409ee088*/ mov ecx, 1
/*1409ee08d*/  mov edx, 0Ch
/*1409ee092*/  call sub_1416C2D4B
/*1409ee098*/  jmp loc_1409EE196
loc_1409EE09D: /*1409ee09d*/ mov ecx, 1
/*1409ee0a2*/  mov edx, 25h ; '%'
/*1409ee0a7*/  call sub_1416C2D4B
/*1409ee0ad*/  jmp loc_1409EE196
loc_1409EE0B2: /*1409ee0b2*/ mov ecx, 1
/*1409ee0b7*/  mov edx, 4
/*1409ee0bc*/  call sub_1416C2D4B
/*1409ee0c2*/  jmp loc_1409EE196
loc_1409EE0C7: /*1409ee0c7*/ mov ecx, 1
/*1409ee0cc*/  mov edx, 5
/*1409ee0d1*/  call sub_1416C2D4B
/*1409ee0d7*/  jmp loc_1409EE196
loc_1409EE0DC: /*1409ee0dc*/ mov ecx, 1
/*1409ee0e1*/  mov edx, 0Dh
/*1409ee0e6*/  call sub_1416C2D4B
/*1409ee0ec*/  jmp loc_1409EE196
loc_1409EE0F1: /*1409ee0f1*/ mov ecx, 1
/*1409ee0f6*/  mov edx, 0Ch
/*1409ee0fb*/  call sub_1416C2D4B
/*1409ee101*/  jmp loc_1409EE196
loc_1409EE106: /*1409ee106*/ mov ecx, 1
/*1409ee10b*/  mov edx, 1Ah
/*1409ee110*/  call sub_1416C2D4B
/*1409ee116*/  jmp short loc_1409EE196
loc_1409EE118: /*1409ee118*/ mov ecx, 1
/*1409ee11d*/  mov edx, 4
/*1409ee122*/  call sub_1416C2D4B
/*1409ee128*/  jmp short loc_1409EE196
loc_1409EE12A: /*1409ee12a*/ mov ecx, 1
/*1409ee12f*/  mov edx, 4
/*1409ee134*/  call sub_1416C2D4B
/*1409ee13a*/  jmp short loc_1409EE196
loc_1409EE13C: /*1409ee13c*/ mov ecx, 1
/*1409ee141*/  mov edx, 0Dh
/*1409ee146*/  call sub_1416C2D4B
/*1409ee14c*/  jmp short loc_1409EE196
loc_1409EE14E: /*1409ee14e*/ mov ecx, 1
/*1409ee153*/  mov edx, 0Ch
/*1409ee158*/  call sub_1416C2D4B
/*1409ee15e*/  jmp short loc_1409EE196
loc_1409EE160: /*1409ee160*/ mov ecx, 1
/*1409ee165*/  mov edx, 19h
/*1409ee16a*/  call sub_1416C2D4B
/*1409ee170*/  jmp short loc_1409EE196
loc_1409EE172: /*1409ee172*/ mov ecx, 1
/*1409ee177*/  mov edx, 4
/*1409ee17c*/  call sub_1416C2D4B
/*1409ee182*/  jmp short loc_1409EE196
loc_1409EE184: /*1409ee184*/ mov [rbp+130h+var_BC], 1
loc_1409EE188: /*1409ee188*/ mov ecx, 1
/*1409ee18d*/  mov rdx, r13
/*1409ee190*/  call sub_1416C2D4B
loc_1409EE196: /*1409ee196*/ ud2
