// win 1.2.1 | module src/core/relay/codex_mutation.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=2016 fetched=2016 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
__int64 __fastcall sub_1403D6730(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v10; // xmm6
  __int8 v11; // bl
  volatile void *v12; // rcx
  volatile void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // r12
  __int64 *v17; // r12
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // kr00_16
  __int8 v22; // r14
  PVOID v23; // rcx
  char v24; // al
  __int32 v25; // eax
  __int64 v26; // rcx
  char v27; // al
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r13
  PVOID v36; // rcx
  char v37; // al
  __int128 v38; // kr10_16
  __int64 v39; // r14
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  _OWORD *v47; //... [47987 chars total]

// ---- full disassembly reconstruction (2016/2016 instructions) ----
sub_1403D6730: /*1403d6730*/ push rbp
/*1403d6731*/  push r15
/*1403d6733*/  push r14
/*1403d6735*/  push r13
/*1403d6737*/  push r12
/*1403d6739*/  push rsi
/*1403d673a*/  push rdi
/*1403d673b*/  push rbx
/*1403d673c*/  sub rsp, 0B98h
/*1403d6743*/  lea rbp, [rsp+80h]
/*1403d674b*/  movaps [rbp+0B50h+var_50], xmm6
/*1403d6752*/  mov [rbp+0B50h+var_58], 0FFFFFFFFFFFFFFFEh
/*1403d675d*/  mov r12, rdx
/*1403d6760*/  mov rsi, rcx
/*1403d6763*/  lea rax, aAuto_0; "auto"
/*1403d676a*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d6771*/  mov qword ptr [rbp+0B50h+var_A38+8], 4
/*1403d677c*/  lea r14, [rbp+0B50h+var_D0]
/*1403d6783*/  mov rcx, r14
/*1403d6786*/  call sub_141356270
/*1403d678b*/  call sub_141471910
/*1403d6790*/  mov [rbp+0B50h+var_C0], rax
/*1403d6797*/  mov [rbp+0B50h+var_B8], edx
/*1403d679d*/  lea rdi, [rbp+0B50h+var_A38]
/*1403d67a4*/  mov qword ptr [rbp+0B50h+var_650], rdi
/*1403d67ab*/  lea r13, sub_14041F680
/*1403d67b2*/  mov qword ptr [rbp+0B50h+var_650+8], r13
/*1403d67b9*/  lea rdx, unk_14174FFDE
/*1403d67c0*/  lea rbx, [rbp+0B50h+var_460]
/*1403d67c7*/  lea r15, [rbp+0B50h+var_650]
/*1403d67ce*/  mov rcx, rbx
/*1403d67d1*/  mov r8, r15
/*1403d67d4*/  call sub_14149C0F0
/*1403d67d9*/  lea rdx, aStarted_0; "started"
/*1403d67e0*/  mov r8d, 7
/*1403d67e6*/  mov rcx, r14
/*1403d67e9*/  mov r9, rbx
/*1403d67ec*/  call sub_140343D80
/*1403d67f1*/  mov rbx, [r12+88h]
/*1403d67f9*/  mov rcx, [rbx+1398h]
/*1403d6800*/  add rcx, 10h; Address
/*1403d6804*/  call sub_1400048C0
/*1403d6809*/  test rax, rax
/*1403d680c*/  jz loc_1403D6AEA
/*1403d6812*/  lea r8, aSwitchingTheAc; "switching the active Codex account and "...
/*1403d6819*/  mov r9d, 39h ; '9'
/*1403d681f*/  mov rcx, r15
/*1403d6822*/  mov rdx, rax
/*1403d6825*/  call lock
/*1403d682a*/  cmp dword ptr [rbp+0B50h+var_650], 0FFFFFFFFh
/*1403d6831*/  jz loc_1403D692E
/*1403d6837*/  movups xmm0, [rbp+0B50h+var_600]
/*1403d683e*/  movaps [rbp+0B50h+var_410], xmm0
/*1403d6845*/  movups xmm0, [rbp+0B50h+var_610]
/*1403d684c*/  movaps [rbp+0B50h+var_420], xmm0
/*1403d6853*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d685a*/  movups xmm1, [rbp+0B50h+var_640]
/*1403d6861*/  movups xmm2, [rbp+0B50h+var_630]
/*1403d6868*/  movups xmm3, [rbp+0B50h+var_620]
/*1403d686f*/  movaps [rbp+0B50h+var_430], xmm3
/*1403d6876*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d687d*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d6884*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d688b*/  mov qword ptr [rbp+0B50h+var_850], 0
/*1403d6896*/  mov qword ptr [rbp+0B50h+var_850+8], 1
/*1403d68a1*/  mov qword ptr [rbp+0B50h+var_840], 0
/*1403d68ac*/  mov qword ptr [rbp+0B50h+var_A28], 60000020h
/*1403d68b7*/  lea rax, [rbp+0B50h+var_850]
/*1403d68be*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d68c5*/  lea rax, off_141754110
/*1403d68cc*/  mov qword ptr [rbp+0B50h+var_A38+8], rax
loc_1403D68D3: /*1403d68d3*/ lea rcx, [rbp+0B50h+var_460]
/*1403d68da*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d68e1*/  call sub_140B036A0
/*1403d68e6*/  nop
loc_1403D68E7: /*1403d68e7*/ test al, al
/*1403d68e9*/  jnz loc_1403D6B2D
/*1403d68ef*/  movups xmm6, [rbp+0B50h+var_850]
/*1403d68f6*/  movzx ebx, byte ptr [rbp+0B50h+var_840]
/*1403d68fd*/  mov eax, dword ptr [rbp+0B50h+var_840+1]
/*1403d6903*/  mov [rsi+19h], eax
/*1403d6906*/  mov eax, dword ptr [rbp+0B50h+var_840+4]
/*1403d690c*/  mov [rsi+1Ch], eax
/*1403d690f*/  lea rcx, [rbp+0B50h+var_650]
/*1403d6916*/  call sub_14034ED40
/*1403d691b*/  movups xmmword ptr [rsi+8], xmm6
/*1403d691f*/  mov [rsi+18h], bl
/*1403d6922*/  mov qword ptr [rsi], 2
/*1403d6929*/  jmp loc_1403D6ACC
loc_1403D692E: /*1403d692e*/ mov [rbp+0B50h+var_A0], r12
/*1403d6935*/  mov rax, qword ptr [rbp+0B50h+var_650+8]
/*1403d693c*/  mov [rbp+0B50h+Address], rax
/*1403d6943*/  movzx eax, byte ptr [rbp+0B50h+var_640]
/*1403d694a*/  mov [rbp+0B50h+var_5F], al
/*1403d6950*/  mov rcx, [rbx+1398h]
/*1403d6957*/  add rcx, 10h; Address
/*1403d695b*/  mov [rbp+0B50h+var_60], 1
loc_1403D6962: /*1403d6962*/ call sub_140003640
/*1403d6967*/  nop
/*1403d6968*/  test rax, rax
/*1403d696b*/  jz loc_1403D6B5E
/*1403d6971*/  mov r12, rax
/*1403d6974*/  mov cl, 1
/*1403d6976*/  xor eax, eax
/*1403d6978*/  lock cmpxchg [r12], cl
/*1403d697e*/  jnz loc_1403D6BB3
loc_1403D6984: /*1403d6984*/ mov [rbp+0B50h+var_B0], r12
/*1403d698b*/  mov r12, cs:off_141EC90B8
/*1403d6992*/  mov rax, [r12]
/*1403d6996*/  shl rax, 1
/*1403d6999*/  test rax, rax
/*1403d699c*/  jnz loc_1403D6BC8
/*1403d69a2*/  mov dword ptr [rbp+0B50h+var_78], 0
/*1403d69ac*/  mov rcx, [rbp+0B50h+var_B0]
/*1403d69b3*/  movzx eax, byte ptr [rcx+1]
/*1403d69b7*/  test al, al
/*1403d69b9*/  jz loc_1403D6BF0
loc_1403D69BF: /*1403d69bf*/ mov qword ptr [rbp+0B50h+var_650], 0
/*1403d69ca*/  mov qword ptr [rbp+0B50h+var_650+8], 1
/*1403d69d5*/  mov qword ptr [rbp+0B50h+var_640], 0
/*1403d69e0*/  mov qword ptr [rbp+0B50h+var_450], 60000020h
/*1403d69eb*/  mov qword ptr [rbp+0B50h+var_460], r15
/*1403d69f2*/  lea rax, off_141754110
/*1403d69f9*/  mov qword ptr [rbp+0B50h+var_460+8], rax
loc_1403D6A00: /*1403d6a00*/ lea rcx, aPoisonedLockAn; "poisoned lock: another task failed insi"...
/*1403d6a07*/  lea r8, [rbp+0B50h+var_460]
/*1403d6a0e*/  mov edx, 29h ; ')'
/*1403d6a13*/  call sub_1414ACAB0
/*1403d6a18*/  nop
loc_1403D6A19: /*1403d6a19*/ test al, al
/*1403d6a1b*/  jnz loc_1403D8087
/*1403d6a21*/  mov rdi, qword ptr [rbp+0B50h+var_650]
/*1403d6a28*/  mov rbx, qword ptr [rbp+0B50h+var_650+8]
/*1403d6a2f*/  movzx r14d, byte ptr [rbp+0B50h+var_640]
/*1403d6a37*/  mov eax, dword ptr [rbp+0B50h+var_640+1]
/*1403d6a3d*/  mov dword ptr [rbp+0B50h+var_A38], eax
/*1403d6a43*/  mov eax, dword ptr [rbp+0B50h+var_640+4]
/*1403d6a49*/  mov dword ptr [rbp+0B50h+var_A38+3], eax
/*1403d6a4f*/  cmp byte ptr [rbp+0B50h+var_78], 0
/*1403d6a56*/  jnz short loc_1403D6A68
/*1403d6a58*/  mov rax, [r12]
/*1403d6a5c*/  shl rax, 1
/*1403d6a5f*/  test rax, rax
/*1403d6a62*/  jnz loc_1403D820B
loc_1403D6A68: /*1403d6a68*/ xor eax, eax
/*1403d6a6a*/  mov rcx, [rbp+0B50h+var_B0]; Address
/*1403d6a71*/  xchg al, [rcx]
/*1403d6a73*/  cmp al, 2
/*1403d6a75*/  jz loc_1403D80B8
loc_1403D6A7B: /*1403d6a7b*/ mov eax, dword ptr [rbp+0B50h+var_A38]
/*1403d6a81*/  mov ecx, dword ptr [rbp+0B50h+var_A38+3]
/*1403d6a87*/  mov [rsi+1Ch], ecx
/*1403d6a8a*/  mov [rsi+19h], eax
/*1403d6a8d*/  mov [rsi+8], rdi
/*1403d6a91*/  mov [rsi+10h], rbx
/*1403d6a95*/  mov [rsi+18h], r14b
/*1403d6a99*/  mov qword ptr [rsi], 2
loc_1403D6AA0: /*1403d6aa0*/ cmp [rbp+0B50h+var_5F], 0
/*1403d6aa7*/  jnz short loc_1403D6AB9
/*1403d6aa9*/  mov rax, [r12]
/*1403d6aad*/  shl rax, 1
/*1403d6ab0*/  test rax, rax
/*1403d6ab3*/  jnz loc_1403D81EE
loc_1403D6AB9: /*1403d6ab9*/ xor eax, eax
/*1403d6abb*/  mov rcx, [rbp+0B50h+Address]
/*1403d6ac2*/  xchg al, [rcx]
/*1403d6ac4*/  cmp al, 2
/*1403d6ac6*/  jz loc_1403D8076
loc_1403D6ACC: /*1403d6acc*/ mov rax, rsi
/*1403d6acf*/  movaps xmm6, [rbp+0B50h+var_50]
/*1403d6ad6*/  add rsp, 0B98h
/*1403d6add*/  pop rbx
/*1403d6ade*/  pop rdi
/*1403d6adf*/  pop rsi
/*1403d6ae0*/  pop r12
/*1403d6ae2*/  pop r13
/*1403d6ae4*/  pop r14
/*1403d6ae6*/  pop r15
/*1403d6ae8*/  pop rbp
/*1403d6ae9*/  retn
loc_1403D6AEA: /*1403d6aea*/ lea rax, aCodexmateLibCo; "codexmate_lib::core::relay::codex_mutat"...
/*1403d6af1*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d6af8*/  mov qword ptr [rbp+0B50h+var_650+8], 3Dh ; '='
/*1403d6b03*/  mov qword ptr [rbp+0B50h+var_460], r15
/*1403d6b0a*/  mov qword ptr [rbp+0B50h+var_460+8], r13
/*1403d6b11*/  lea rcx, unk_1416C99C2
/*1403d6b18*/  lea r8, off_1416C9A50; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1403d6b1f*/  lea rdx, [rbp+0B50h+var_460]
/*1403d6b26*/  call sub_1416C32C0
/*1403d6b2b*/  ud2
loc_1403D6B2D: /*1403d6b2d*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403d6b34*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d6b39*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403d6b40*/  lea r9, unk_14174DE40
/*1403d6b47*/  lea r8, [rbp+0B50h+var_7A]
/*1403d6b4e*/  mov edx, 37h ; '7'
/*1403d6b53*/  call sub_1416C3060
/*1403d6b59*/  jmp loc_1403D9578
loc_1403D6B5E: /*1403d6b5e*/ lea rax, aStdSyncPoisonM; "std::sync::poison::mutex::Mutex<codexma"...
/*1403d6b65*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d6b6c*/  mov qword ptr [rbp+0B50h+var_650+8], 4Ch ; 'L'
/*1403d6b77*/  mov qword ptr [rbp+0B50h+var_460], r15
/*1403d6b7e*/  lea rax, sub_14041F680
/*1403d6b85*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d6b8c*/  mov [rbp+0B50h+var_60], 1
loc_1403D6B93: /*1403d6b93*/ lea rcx, unk_1416C99C2
/*1403d6b9a*/  lea r8, off_1416C9A50; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1403d6ba1*/  lea rdx, [rbp+0B50h+var_460]
/*1403d6ba8*/  call sub_1416C32C0
/*1403d6bae*/  jmp loc_1403D9578
loc_1403D6BB3: /*1403d6bb3*/ mov [rbp+0B50h+var_60], 1
/*1403d6bba*/  mov rcx, r12; Address
/*1403d6bbd*/  call sub_1416C15B0
/*1403d6bc2*/  nop
/*1403d6bc3*/  jmp loc_1403D6984
loc_1403D6BC8: /*1403d6bc8*/ mov [rbp+0B50h+var_60], 1
/*1403d6bcf*/  call sub_1416C2250
/*1403d6bd4*/  nop
/*1403d6bd5*/  xor al, 1
/*1403d6bd7*/  mov dword ptr [rbp+0B50h+var_78], eax
/*1403d6bdd*/  mov rcx, [rbp+0B50h+var_B0]
/*1403d6be4*/  movzx eax, byte ptr [rcx+1]
/*1403d6be8*/  test al, al
/*1403d6bea*/  jnz loc_1403D69BF
loc_1403D6BF0: /*1403d6bf0*/ mov r8, [rcx+118h]
/*1403d6bf7*/  test r8, r8
/*1403d6bfa*/  jns short loc_1403D6C10
/*1403d6bfc*/  xor r12d, r12d
loc_1403D6BFF: /*1403d6bff*/ mov rcx, r12
/*1403d6c02*/  mov rdx, r8
/*1403d6c05*/  call sub_1416C2D4B
loc_1403D6C0B: /*1403d6c0b*/ jmp loc_1403D9578
loc_1403D6C10: /*1403d6c10*/ mov [rbp+0B50h+var_F8], r8
/*1403d6c17*/  jz short loc_1403D6C67
/*1403d6c19*/  mov r15, [rcx+110h]
/*1403d6c20*/  call nullsub_1
/*1403d6c25*/  mov r12d, 1
/*1403d6c2b*/  mov edx, 1
/*1403d6c30*/  mov r13, [rbp+0B50h+var_F8]
/*1403d6c37*/  mov rcx, r13
/*1403d6c3a*/  call sub_140001650
/*1403d6c3f*/  mov r8, r13
/*1403d6c42*/  test rax, rax
/*1403d6c45*/  jz short loc_1403D6BFF
/*1403d6c47*/  mov r13, rax
/*1403d6c4a*/  mov rcx, rax
/*1403d6c4d*/  mov rdx, r15
/*1403d6c50*/  call sub_141684120
/*1403d6c55*/  mov r12, cs:off_141EC90B8
/*1403d6c5c*/  cmp byte ptr [rbp+0B50h+var_78], 0
/*1403d6c63*/  jz short loc_1403D6C76
/*1403d6c65*/  jmp short loc_1403D6C86
loc_1403D6C67: /*1403d6c67*/ mov r13d, 1
/*1403d6c6d*/  cmp byte ptr [rbp+0B50h+var_78], 0
/*1403d6c74*/  jnz short loc_1403D6C86
loc_1403D6C76: /*1403d6c76*/ mov rax, [r12]
/*1403d6c7a*/  shl rax, 1
/*1403d6c7d*/  test rax, rax
/*1403d6c80*/  jnz loc_1403D88E2
loc_1403D6C86: /*1403d6c86*/ xor eax, eax
/*1403d6c88*/  mov rcx, [rbp+0B50h+var_B0]; Address
/*1403d6c8f*/  xchg al, [rcx]
/*1403d6c91*/  cmp al, 2
/*1403d6c93*/  jz loc_1403D8427
loc_1403D6C99: /*1403d6c99*/ mov [rbp+0B50h+var_63], 1
loc_1403D6CA0: /*1403d6ca0*/ lea rcx, [rbp+0B50h+var_650]
/*1403d6ca7*/  mov [rbp+0B50h+var_B0], r13
/*1403d6cae*/  mov rdx, r13
/*1403d6cb1*/  mov r8, [rbp+0B50h+var_F8]
/*1403d6cb8*/  call sub_1403886D0
/*1403d6cbd*/  nop
/*1403d6cbe*/  cmp dword ptr [rbp+0B50h+var_650], 0FFFFFFFFh
/*1403d6cc5*/  jz loc_1403D6DE6
/*1403d6ccb*/  movups xmm0, [rbp+0B50h+var_600]
/*1403d6cd2*/  movaps [rbp+0B50h+var_410], xmm0
/*1403d6cd9*/  movups xmm0, [rbp+0B50h+var_610]
/*1403d6ce0*/  movaps [rbp+0B50h+var_420], xmm0
/*1403d6ce7*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d6cee*/  movups xmm1, [rbp+0B50h+var_640]
/*1403d6cf5*/  movups xmm2, [rbp+0B50h+var_630]
/*1403d6cfc*/  movups xmm3, [rbp+0B50h+var_620]
/*1403d6d03*/  movaps [rbp+0B50h+var_430], xmm3
/*1403d6d0a*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d6d11*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d6d18*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d6d1f*/  mov qword ptr [rbp+0B50h+var_850], 0
/*1403d6d2a*/  mov qword ptr [rbp+0B50h+var_850+8], 1
/*1403d6d35*/  mov qword ptr [rbp+0B50h+var_840], 0
/*1403d6d40*/  mov qword ptr [rbp+0B50h+var_A28], 60000020h
/*1403d6d4b*/  lea rax, [rbp+0B50h+var_850]
/*1403d6d52*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d6d59*/  lea rax, off_141754110
/*1403d6d60*/  mov qword ptr [rbp+0B50h+var_A38+8], rax
loc_1403D6D67: /*1403d6d67*/ lea rcx, [rbp+0B50h+var_460]
/*1403d6d6e*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d6d75*/  call sub_140B036A0
/*1403d6d7a*/  nop
/*1403d6d7b*/  test al, al
/*1403d6d7d*/  jnz loc_1403D8439
/*1403d6d83*/  mov rdi, qword ptr [rbp+0B50h+var_850]
/*1403d6d8a*/  mov rbx, qword ptr [rbp+0B50h+var_850+8]
/*1403d6d91*/  mov r14, qword ptr [rbp+0B50h+var_840]
/*1403d6d98*/  mov [rbp+0B50h+var_63], 1
loc_1403D6D9F: /*1403d6d9f*/ lea rcx, [rbp+0B50h+var_650]
/*1403d6da6*/  call sub_14034ED40
/*1403d6dab*/  nop
/*1403d6dac*/  mov [rsi+8], rdi
/*1403d6db0*/  mov [rsi+10h], rbx
/*1403d6db4*/  mov [rsi+18h], r14
/*1403d6db8*/  mov qword ptr [rsi], 2
/*1403d6dbf*/  mov rdx, [rbp+0B50h+var_F8]
/*1403d6dc6*/  test rdx, rdx
/*1403d6dc9*/  jz loc_1403D6AA0
/*1403d6dcf*/  mov r8d, 1
/*1403d6dd5*/  mov rcx, [rbp+0B50h+var_B0]
/*1403d6ddc*/  call sub_140001660
/*1403d6de1*/  jmp loc_1403D6AA0
loc_1403D6DE6: /*1403d6de6*/ lea rcx, [rbp+0B50h+var_C0]
/*1403d6ded*/  mov rax, qword ptr [rbp+0B50h+var_650+8]
/*1403d6df4*/  mov [rbp+0B50h+hObject], rax
/*1403d6dfb*/  mov [rbp+0B50h+var_61], 1
loc_1403D6E02: /*1403d6e02*/ call sub_141471AC0
/*1403d6e07*/  nop
/*1403d6e08*/  mov ecx, edx
/*1403d6e0a*/  mov edx, 3E8h
/*1403d6e0f*/  mul rdx
/*1403d6e12*/  mov ecx, ecx
/*1403d6e14*/  imul rcx, 431BDE83h
/*1403d6e1b*/  shr rcx, 32h
/*1403d6e1f*/  add rcx, rax
/*1403d6e22*/  adc rdx, 0
/*1403d6e26*/  mov qword ptr [rbp+0B50h+var_850], rcx
/*1403d6e2d*/  mov qword ptr [rbp+0B50h+var_850+8], rdx
/*1403d6e34*/  lea rax, aStatusPending; "status=pending"
/*1403d6e3b*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d6e42*/  mov qword ptr [rbp+0B50h+var_A38+8], 0Eh
/*1403d6e4d*/  mov qword ptr [rbp+0B50h+var_460], r14
/*1403d6e54*/  lea rax, sub_141356790
/*1403d6e5b*/  mov r13, rax
/*1403d6e5e*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d6e65*/  lea rax, [rbp+0B50h+var_850]
/*1403d6e6c*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d6e73*/  lea r15, sub_1414A9600
/*1403d6e7a*/  mov qword ptr [rbp+0B50h+var_450+8], r15
/*1403d6e81*/  mov qword ptr [rbp+0B50h+var_440], rdi
/*1403d6e88*/  lea rax, sub_14041F680
/*1403d6e8f*/  mov qword ptr [rbp+0B50h+var_440+8], rax
/*1403d6e96*/  mov [rbp+0B50h+var_61], 1
/*1403d6e9d*/  lea rdx, unk_1417493E8
/*1403d6ea4*/  lea r12, [rbp+0B50h+var_650]
/*1403d6eab*/  lea r8, [rbp+0B50h+var_460]
/*1403d6eb2*/  mov rcx, r12
/*1403d6eb5*/  call sub_14149C0F0
/*1403d6eba*/  nop
/*1403d6ebb*/  mov [rbp+0B50h+var_61], 1
/*1403d6ec2*/  mov [rsp+0BD0h+var_BB0], r12
/*1403d6ec7*/  lea rcx, aAccountSwitch; "account_switch"
/*1403d6ece*/  lea r8, aQuietAcquireSt; "quiet_acquire_started"
/*1403d6ed5*/  mov edx, 0Eh
/*1403d6eda*/  mov r9d, 15h
/*1403d6ee0*/  call sub_1403565C0
/*1403d6ee5*/  nop
/*1403d6ee6*/  mov [rbp+0B50h+var_61], 1
/*1403d6eed*/  mov byte ptr [rsp+0BD0h+var_BB0], 0
/*1403d6ef2*/  lea rcx, [rbp+0B50h+var_650]
/*1403d6ef9*/  mov edx, 5
/*1403d6efe*/  xor r8d, r8d
/*1403d6f01*/  xor r9d, r9d
/*1403d6f04*/  call acquire_with_policy
/*1403d6f09*/  nop
/*1403d6f0a*/  cmp dword ptr [rbp+0B50h+var_650], 0FFFFFFFFh
/*1403d6f11*/  jz loc_1403D70A0
/*1403d6f17*/  movups xmm0, [rbp+0B50h+var_600]
/*1403d6f1e*/  movaps [rbp+0B50h+var_410], xmm0
/*1403d6f25*/  movups xmm0, [rbp+0B50h+var_610]
/*1403d6f2c*/  movaps [rbp+0B50h+var_420], xmm0
/*1403d6f33*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d6f3a*/  movups xmm1, [rbp+0B50h+var_640]
/*1403d6f41*/  movups xmm2, [rbp+0B50h+var_630]
/*1403d6f48*/  movups xmm3, [rbp+0B50h+var_620]
/*1403d6f4f*/  movaps [rbp+0B50h+var_430], xmm3
/*1403d6f56*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d6f5d*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d6f64*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d6f6b*/  mov qword ptr [rbp+0B50h+var_850], 0
/*1403d6f76*/  mov qword ptr [rbp+0B50h+var_850+8], 1
/*1403d6f81*/  mov qword ptr [rbp+0B50h+var_840], 0
/*1403d6f8c*/  mov qword ptr [rbp+0B50h+var_A28], 60000020h
/*1403d6f97*/  lea rax, [rbp+0B50h+var_850]
/*1403d6f9e*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d6fa5*/  lea rax, off_141754110
/*1403d6fac*/  mov qword ptr [rbp+0B50h+var_A38+8], rax
loc_1403D6FB3: /*1403d6fb3*/ lea rcx, [rbp+0B50h+var_460]
/*1403d6fba*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d6fc1*/  call sub_140B036A0
/*1403d6fc6*/  nop
/*1403d6fc7*/  test al, al
/*1403d6fc9*/  jnz loc_1403D8907
/*1403d6fcf*/  mov rax, qword ptr [rbp+0B50h+var_850]
/*1403d6fd6*/  mov [rbp+0B50h+var_78], rax
/*1403d6fdd*/  mov rcx, qword ptr [rbp+0B50h+var_850+8]
/*1403d6fe4*/  mov rdi, qword ptr [rbp+0B50h+var_840]
/*1403d6feb*/  mov [rbp+0B50h+var_A0], rcx
/*1403d6ff2*/  mov rdx, rdi
/*1403d6ff5*/  call sub_1403DB1E0
/*1403d6ffa*/  mov [rbp+0B50h+var_B98], rax
/*1403d6ffe*/  mov [rbp+0B50h+var_B90], rdx
/*1403d7002*/  lea rax, [rbp+0B50h+var_B98]
/*1403d7006*/  mov qword ptr [rbp+0B50h+var_850], rax
/*1403d700d*/  lea rax, sub_14041F680
/*1403d7014*/  mov qword ptr [rbp+0B50h+var_850+8], rax
loc_1403D701B: /*1403d701b*/ lea rdx, unk_141749922
/*1403d7022*/  lea rcx, [rbp+0B50h+var_A38]
/*1403d7029*/  lea r8, [rbp+0B50h+var_850]
/*1403d7030*/  call sub_14149C0F0
/*1403d7035*/  nop
/*1403d7036*/  lea rdx, aQuietAcquireFa; "quiet_acquire_failed"
/*1403d703d*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7044*/  lea r9, [rbp+0B50h+var_A38]
/*1403d704b*/  mov r8d, 14h
/*1403d7051*/  call sub_140343D80
/*1403d7056*/  nop
/*1403d7057*/  mov rax, [rbp+0B50h+var_78]
/*1403d705e*/  mov [rsi+8], rax
/*1403d7062*/  mov rax, [rbp+0B50h+var_A0]
/*1403d7069*/  mov [rsi+10h], rax
/*1403d706d*/  mov [rsi+18h], rdi
/*1403d7071*/  mov qword ptr [rsi], 2
/*1403d7078*/  mov [rbp+0B50h+var_61], 1
loc_1403D707F: /*1403d707f*/ lea rcx, [rbp+0B50h+var_650]
/*1403d7086*/  call sub_14034ED40
/*1403d708b*/  nop
/*1403d708c*/  mov al, 1
/*1403d708e*/  mov dword ptr [rbp+0B50h+var_78], eax
/*1403d7094*/  mov r12, cs:off_141EC90B8
/*1403d709b*/  jmp loc_1403D78CE
loc_1403D70A0: /*1403d70a0*/ mov rax, qword ptr [rbp+0B50h+var_620+8]
/*1403d70a7*/  mov [rbp+0B50h+var_240], rax
/*1403d70ae*/  movups xmm0, [rbp+0B50h+var_650+8]
/*1403d70b5*/  movups xmm1, [rbp+0B50h+var_640+8]
/*1403d70bc*/  movups xmm2, [rbp+0B50h+var_630+8]
/*1403d70c3*/  movaps [rbp+0B50h+var_250], xmm2
/*1403d70ca*/  movaps [rbp+0B50h+var_260], xmm1
/*1403d70d1*/  movaps [rbp+0B50h+var_270], xmm0
/*1403d70d8*/  mov [rbp+0B50h+var_66], 1
/*1403d70df*/  mov [rbp+0B50h+var_67], 1
loc_1403D70E6: /*1403d70e6*/ lea rcx, [rbp+0B50h+var_C0]
/*1403d70ed*/  call sub_141471AC0
/*1403d70f2*/  nop
/*1403d70f3*/  mov ecx, edx
/*1403d70f5*/  mov edx, 3E8h
/*1403d70fa*/  mul rdx
/*1403d70fd*/  mov ecx, ecx
/*1403d70ff*/  imul rcx, 431BDE83h
/*1403d7106*/  shr rcx, 32h
/*1403d710a*/  add rcx, rax
/*1403d710d*/  adc rdx, 0
/*1403d7111*/  mov qword ptr [rbp+0B50h+var_850], rcx
/*1403d7118*/  mov qword ptr [rbp+0B50h+var_850+8], rdx
/*1403d711f*/  lea rax, aStatusReady; "status=ready"
/*1403d7126*/  mov qword ptr [rbp+0B50h+var_A38], rax
/*1403d712d*/  mov qword ptr [rbp+0B50h+var_A38+8], 0Ch
/*1403d7138*/  mov qword ptr [rbp+0B50h+var_460], r14
/*1403d713f*/  mov qword ptr [rbp+0B50h+var_460+8], r13
/*1403d7146*/  lea rax, [rbp+0B50h+var_850]
/*1403d714d*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d7154*/  mov qword ptr [rbp+0B50h+var_450+8], r15
/*1403d715b*/  mov qword ptr [rbp+0B50h+var_440], rdi
/*1403d7162*/  lea rax, sub_14041F680
/*1403d7169*/  mov qword ptr [rbp+0B50h+var_440+8], rax
/*1403d7170*/  mov [rbp+0B50h+var_66], 1
/*1403d7177*/  mov [rbp+0B50h+var_67], 1
/*1403d717e*/  lea rdx, unk_1417493E8
/*1403d7185*/  lea r8, [rbp+0B50h+var_460]
/*1403d718c*/  mov rcx, r12
/*1403d718f*/  call sub_14149C0F0
/*1403d7194*/  nop
/*1403d7195*/  mov [rbp+0B50h+var_66], 1
/*1403d719c*/  mov [rbp+0B50h+var_67], 1
/*1403d71a3*/  mov [rsp+0BD0h+var_BB0], r12
/*1403d71a8*/  lea rcx, aAccountSwitch; "account_switch"
/*1403d71af*/  lea r8, aQuietAcquired; "quiet_acquired"
/*1403d71b6*/  mov edx, 0Eh
/*1403d71bb*/  mov r9d, 0Eh
/*1403d71c1*/  call sub_1403565C0
/*1403d71c6*/  nop
/*1403d71c7*/  mov [rbp+0B50h+var_66], 1
/*1403d71ce*/  mov [rbp+0B50h+var_67], 1
/*1403d71d5*/  lea rcx, [rbp+0B50h+var_460]
/*1403d71dc*/  mov rdx, rbx
/*1403d71df*/  call sub_1403DFE10
/*1403d71e4*/  nop
loc_1403D71E5: /*1403d71e5*/ cmp qword ptr [rbp+0B50h+var_460], 0FFFFFFFFFFFFFFFFh
/*1403d71ed*/  jz loc_1403D732E
/*1403d71f3*/  lea rcx, [rbp+0B50h+var_B98]
/*1403d71f7*/  lea rdx, [rbp+0B50h+var_460]
/*1403d71fe*/  mov r8d, 118h
/*1403d7204*/  call sub_141684120
/*1403d7209*/  mov [rbp+0B50h+var_68], 1
/*1403d7210*/  mov [rbp+0B50h+var_69], 1
loc_1403D7217: /*1403d7217*/ lea rcx, [rbp+0B50h+var_460]
/*1403d721e*/  mov rdx, rbx
/*1403d7221*/  call sub_14037C4A0
/*1403d7226*/  nop
/*1403d7227*/  cmp dword ptr [rbp+0B50h+var_460], 2
/*1403d722e*/  jnz loc_1403D74DF
/*1403d7234*/  lea rax, [rbp+0B50h+var_460+8]
/*1403d723b*/  mov rcx, [rbp+0B50h+var_240]
/*1403d7242*/  mov qword ptr [rbp+0B50h+var_620], rcx
/*1403d7249*/  movaps xmm0, [rbp+0B50h+var_270]
/*1403d7250*/  movaps xmm1, [rbp+0B50h+var_260]
/*1403d7257*/  movaps xmm2, [rbp+0B50h+var_250]
/*1403d725e*/  movaps [rbp+0B50h+var_630], xmm2
/*1403d7265*/  movaps [rbp+0B50h+var_640], xmm1
/*1403d726c*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d7273*/  mov [rbp+0B50h+var_68], 0
/*1403d727a*/  mov [rbp+0B50h+var_69], 1
/*1403d7281*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d7286*/  lea rcx, [rbp+0B50h+var_160]
/*1403d728d*/  lea rdx, [rbp+0B50h+var_D0]
/*1403d7294*/  lea r8, [rbp+0B50h+var_B98]
/*1403d7298*/  lea r9, [rbp+0B50h+var_650]
/*1403d729f*/  call sub_1403DB4A0
/*1403d72a4*/  nop
/*1403d72a5*/  mov [rbp+0B50h+var_8C], 1
loc_1403D72AC: /*1403d72ac*/ mov rcx, [rbp+0B50h+Address]
/*1403d72b3*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d72ba*/  call sub_14000E270
/*1403d72bf*/  nop
/*1403d72c0*/  mov rax, qword ptr [rbp+0B50h+var_150]
/*1403d72c7*/  mov qword ptr [rbp+0B50h+var_640], rax
/*1403d72ce*/  movups xmm0, [rbp+0B50h+var_160]
/*1403d72d5*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d72dc*/  mov [rbp+0B50h+var_8C], 0
/*1403d72e3*/  lea rcx, [rbp+0B50h+var_850]
/*1403d72ea*/  lea r8, [rbp+0B50h+var_D0]
/*1403d72f1*/  lea r9, [rbp+0B50h+var_650]
/*1403d72f8*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d72ff*/  call sub_1403E4470
/*1403d7304*/  nop
/*1403d7305*/  mov rax, qword ptr [rbp+0B50h+var_840]
/*1403d730c*/  mov [rsi+18h], rax
/*1403d7310*/  movups xmm0, [rbp+0B50h+var_850]
/*1403d7317*/  movups xmmword ptr [rsi+8], xmm0
/*1403d731b*/  mov qword ptr [rsi], 2
loc_1403D7322: /*1403d7322*/ mov r12, cs:off_141EC90B8
/*1403d7329*/  jmp loc_1403D7753
loc_1403D732E: /*1403d732e*/ mov rax, qword ptr [rbp+0B50h+var_450+8]
/*1403d7335*/  mov qword ptr [rbp+0B50h+var_200], rax
/*1403d733c*/  movups xmm0, [rbp+0B50h+var_460+8]
/*1403d7343*/  movaps [rbp+0B50h+var_210], xmm0
/*1403d734a*/  mov [rbp+0B50h+var_87], 1
loc_1403D7351: /*1403d7351*/ mov ecx, 18h
/*1403d7356*/  call sub_1403B9610
/*1403d735b*/  mov [rbp+0B50h+var_78], rax
/*1403d7362*/  lea rax, [rbp+0B50h+var_210]
/*1403d7369*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d7370*/  lea rax, sub_1400015F0
/*1403d7377*/  mov qword ptr [rbp+0B50h+var_650+8], rax
loc_1403D737E: /*1403d737e*/ lea rdx, unk_141749DB1
/*1403d7385*/  lea rcx, [rbp+0B50h+var_160]
/*1403d738c*/  lea r8, [rbp+0B50h+var_650]
/*1403d7393*/  call sub_14149C0F0
/*1403d7398*/  nop
/*1403d7399*/  mov r12, cs:off_141EC90B8
/*1403d73a0*/  mov rax, qword ptr [rbp+0B50h+var_150]
/*1403d73a7*/  mov rcx, [rbp+0B50h+var_78]
/*1403d73ae*/  mov [rcx+10h], rax
/*1403d73b2*/  movups xmm0, [rbp+0B50h+var_160]
/*1403d73b9*/  movups xmmword ptr [rcx], xmm0
/*1403d73bc*/  mov qword ptr [rbp+0B50h+var_1D0], 1
/*1403d73c7*/  mov qword ptr [rbp+0B50h+var_1D0+8], rcx
/*1403d73ce*/  mov qword ptr [rbp+0B50h+var_1C0], 1
/*1403d73d9*/  mov rax, [rbp+0B50h+var_240]
/*1403d73e0*/  mov qword ptr [rbp+0B50h+var_620], rax
/*1403d73e7*/  movaps xmm0, [rbp+0B50h+var_270]
/*1403d73ee*/  movaps xmm1, [rbp+0B50h+var_260]
/*1403d73f5*/  movaps xmm2, [rbp+0B50h+var_250]
/*1403d73fc*/  movaps [rbp+0B50h+var_630], xmm2
/*1403d7403*/  movaps [rbp+0B50h+var_640], xmm1
/*1403d740a*/  movaps [rbp+0B50h+var_650], xmm0
loc_1403D7411: /*1403d7411*/ lea rcx, [rbp+0B50h+var_A38]
/*1403d7418*/  lea rdi, [rbp+0B50h+var_650]
/*1403d741f*/  mov rdx, rdi
/*1403d7422*/  call sub_140387CC0
/*1403d7427*/  nop
/*1403d7428*/  cmp dword ptr [rbp+0B50h+var_A38], 0FFFFFFFFh
/*1403d742f*/  jz loc_1403D776B
/*1403d7435*/  movups xmm0, [rbp+0B50h+var_9E8]
/*1403d743c*/  movaps [rbp+0B50h+var_600], xmm0
/*1403d7443*/  movups xmm0, [rbp+0B50h+var_9F8]
/*1403d744a*/  movaps [rbp+0B50h+var_610], xmm0
/*1403d7451*/  movups xmm0, [rbp+0B50h+var_A38]
/*1403d7458*/  movups xmm1, [rbp+0B50h+var_A28]
/*1403d745f*/  movups xmm2, [rbp+0B50h+var_A18]
/*1403d7466*/  movups xmm3, [rbp+0B50h+var_A08]
/*1403d746d*/  movaps [rbp+0B50h+var_620], xmm3
/*1403d7474*/  movaps [rbp+0B50h+var_630], xmm2
/*1403d747b*/  movaps [rbp+0B50h+var_640], xmm1
/*1403d7482*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d7489*/  mov qword ptr [rbp+0B50h+var_F0], rdi
/*1403d7490*/  lea rax, sub_140B036A0
/*1403d7497*/  mov qword ptr [rbp+0B50h+var_F0+8], rax
loc_1403D749E: /*1403d749e*/ lea rdx, unk_141749DF6
/*1403d74a5*/  lea rcx, [rbp+0B50h+var_850]
/*1403d74ac*/  lea r8, [rbp+0B50h+var_F0]
/*1403d74b3*/  call sub_14149C0F0
/*1403d74b8*/  nop
/*1403d74b9*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d74c0*/  lea rdx, [rbp+0B50h+var_850]
/*1403d74c7*/  call sub_1403B1EC0
/*1403d74cc*/  nop
loc_1403D74CD: /*1403d74cd*/ lea rcx, [rbp+0B50h+var_650]
/*1403d74d4*/  call sub_14034ED40
/*1403d74d9*/  nop
loc_1403D74DA: /*1403d74da*/ jmp loc_1403D782A
loc_1403D74DF: /*1403d74df*/ lea rcx, [rbp+0B50h+var_A38]
/*1403d74e6*/  lea rdx, [rbp+0B50h+var_460]
/*1403d74ed*/  mov r8d, 1E8h
/*1403d74f3*/  call sub_141684120
/*1403d74f8*/  lea rdx, [rbp+0B50h+var_8D8]
/*1403d74ff*/  mov [rbp+0B50h+var_59], 1
/*1403d7506*/  mov [rbp+0B50h+var_5A], 1
/*1403d750d*/  mov [rbp+0B50h+var_5B], 1
loc_1403D7514: /*1403d7514*/ lea rcx, [rbp+0B50h+var_460]
/*1403d751b*/  call sub_14149C500
/*1403d7520*/  nop
/*1403d7521*/  mov rax, qword ptr [rbp+0B50h+var_450]
/*1403d7528*/  mov qword ptr [rbp+0B50h+var_640], rax
/*1403d752f*/  movups xmm0, [rbp+0B50h+var_460]
/*1403d7536*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d753d*/  lea rdi, [rbp+0B50h+var_A98]
/*1403d7544*/  mov rdx, [rbp+0B50h+var_A98]
/*1403d754b*/  test rdx, rdx
/*1403d754e*/  jle short loc_1403D7562
/*1403d7550*/  mov rcx, [rbp+0B50h+var_A90]
/*1403d7557*/  mov r8d, 1
/*1403d755d*/  call sub_140001660
loc_1403D7562: /*1403d7562*/ mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d7569*/  mov [rdi+10h], rax
/*1403d756d*/  movaps xmm0, [rbp+0B50h+var_650]
/*1403d7574*/  movups xmmword ptr [rdi], xmm0
/*1403d7577*/  lea rax, [rbp+0B50h+var_8A8]
/*1403d757e*/  lea rcx, [rbp+0B50h+var_8A7]
/*1403d7585*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d758c*/  lea rdi, sub_1414AC660
/*1403d7593*/  mov qword ptr [rbp+0B50h+var_460+8], rdi
/*1403d759a*/  mov qword ptr [rbp+0B50h+var_450], rcx
/*1403d75a1*/  mov qword ptr [rbp+0B50h+var_450+8], rdi
/*1403d75a8*/  mov [rbp+0B50h+var_59], 1
/*1403d75af*/  mov [rbp+0B50h+var_5A], 1
/*1403d75b6*/  mov [rbp+0B50h+var_5B], 1
/*1403d75bd*/  lea rdx, unk_141749977
/*1403d75c4*/  lea rcx, [rbp+0B50h+var_A50]
/*1403d75cb*/  lea r8, [rbp+0B50h+var_460]
/*1403d75d2*/  call sub_14149C0F0
/*1403d75d7*/  nop
/*1403d75d8*/  mov [rbp+0B50h+var_59], 1
/*1403d75df*/  mov [rbp+0B50h+var_5A], 1
/*1403d75e6*/  mov [rbp+0B50h+var_5B], 1
/*1403d75ed*/  lea rdx, aDiskCommitted; "disk_committed"
/*1403d75f4*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d75fb*/  lea r9, [rbp+0B50h+var_A50]
/*1403d7602*/  mov r8d, 0Eh
/*1403d7608*/  call sub_140343D80
/*1403d760d*/  nop
/*1403d760e*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d7615*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d761c*/  mov [rbp+0B50h+var_59], 1
/*1403d7623*/  mov [rbp+0B50h+var_5A], 1
/*1403d762a*/  mov [rbp+0B50h+var_5B], 1
/*1403d7631*/  lea r14, [rbp+0B50h+var_A68]
/*1403d7638*/  mov rcx, r14
/*1403d763b*/  mov rdx, rbx
/*1403d763e*/  call sub_1403DEE30
/*1403d7643*/  nop
/*1403d7644*/  cmp [rbp+0B50h+var_A68], 0FFFFFFFFFFFFFFFFh
/*1403d764c*/  jz loc_1403D7931
/*1403d7652*/  mov rax, [rbp+0B50h+var_240]
/*1403d7659*/  mov qword ptr [rbp+0B50h+var_430], rax
/*1403d7660*/  movaps xmm0, [rbp+0B50h+var_270]
/*1403d7667*/  movaps xmm1, [rbp+0B50h+var_260]
/*1403d766e*/  movaps xmm2, [rbp+0B50h+var_250]
/*1403d7675*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d767c*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d7683*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d768a*/  mov [rbp+0B50h+var_59], 0
/*1403d7691*/  mov [rbp+0B50h+var_5A], 1
/*1403d7698*/  mov [rbp+0B50h+var_5B], 1
/*1403d769f*/  mov [rsp+0BD0h+var_BB0], r14
/*1403d76a4*/  lea rcx, [rbp+0B50h+var_850]
/*1403d76ab*/  lea rdx, [rbp+0B50h+var_D0]
/*1403d76b2*/  lea r8, [rbp+0B50h+var_B98]
/*1403d76b6*/  lea r9, [rbp+0B50h+var_460]
/*1403d76bd*/  call sub_1403DB4A0
/*1403d76c2*/  nop
/*1403d76c3*/  mov [rbp+0B50h+var_88], 1
loc_1403D76CA: /*1403d76ca*/ mov rcx, [rbp+0B50h+Address]
/*1403d76d1*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d76d8*/  call sub_14000E270
/*1403d76dd*/  nop
/*1403d76de*/  mov rax, qword ptr [rbp+0B50h+var_840]
/*1403d76e5*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d76ec*/  movups xmm0, [rbp+0B50h+var_850]
/*1403d76f3*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d76fa*/  mov [rbp+0B50h+var_88], 0
/*1403d7701*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7708*/  lea r8, [rbp+0B50h+var_D0]
/*1403d770f*/  lea r9, [rbp+0B50h+var_460]
/*1403d7716*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d771d*/  call sub_1403E4470
/*1403d7722*/  nop
loc_1403D7723: /*1403d7723*/ mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d772a*/  mov [rsi+18h], rax
/*1403d772e*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d7735*/  movups xmmword ptr [rsi+8], xmm0
/*1403d7739*/  mov qword ptr [rsi], 2
loc_1403D7740: /*1403d7740*/ mov r12, cs:off_141EC90B8
/*1403d7747*/  lea rcx, [rbp+0B50h+var_A38]
/*1403d774e*/  call sub_14034B4D0
loc_1403D7753: /*1403d7753*/ lea rcx, [rbp+0B50h+var_B98]
/*1403d7757*/  call sub_14034EE60
/*1403d775c*/  mov dword ptr [rbp+0B50h+var_78], 0
/*1403d7766*/  jmp loc_1403D78CE
loc_1403D776B: /*1403d776b*/ lea rcx, [rbp+0B50h+var_A38]
/*1403d7772*/  call sub_1403B6530
/*1403d7777*/  nop
/*1403d7778*/  cmp dword ptr [rbp+0B50h+var_A38], 0FFFFFFFFh
/*1403d777f*/  jz loc_1403D782A
/*1403d7785*/  movups xmm0, [rbp+0B50h+var_9E8]
/*1403d778c*/  movaps [rbp+0B50h+var_600], xmm0
/*1403d7793*/  movups xmm0, [rbp+0B50h+var_9F8]
/*1403d779a*/  movaps [rbp+0B50h+var_610], xmm0
/*1403d77a1*/  movups xmm0, [rbp+0B50h+var_A38]
/*1403d77a8*/  movups xmm1, [rbp+0B50h+var_A28]
/*1403d77af*/  movups xmm2, [rbp+0B50h+var_A18]
/*1403d77b6*/  movups xmm3, [rbp+0B50h+var_A08]
/*1403d77bd*/  movaps [rbp+0B50h+var_620], xmm3
/*1403d77c4*/  movaps [rbp+0B50h+var_630], xmm2
/*1403d77cb*/  movaps [rbp+0B50h+var_640], xmm1
/*1403d77d2*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d77d9*/  mov qword ptr [rbp+0B50h+var_F0], rdi
/*1403d77e0*/  lea rax, sub_140B036A0
/*1403d77e7*/  mov qword ptr [rbp+0B50h+var_F0+8], rax
loc_1403D77EE: /*1403d77ee*/ lea rdx, unk_141749DD4
/*1403d77f5*/  lea rcx, [rbp+0B50h+var_850]
/*1403d77fc*/  lea r8, [rbp+0B50h+var_F0]
/*1403d7803*/  call sub_14149C0F0
/*1403d7808*/  nop
/*1403d7809*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d7810*/  lea rdx, [rbp+0B50h+var_850]
/*1403d7817*/  call sub_1403B1EC0
/*1403d781c*/  nop
loc_1403D781D: /*1403d781d*/ lea rcx, [rbp+0B50h+var_650]
/*1403d7824*/  call sub_14034ED40
/*1403d7829*/  nop
loc_1403D782A: /*1403d782a*/ mov [rsp+0BD0h+var_BB0], 23h ; '#'
/*1403d7833*/  lea rdx, aFailed; "failed"
/*1403d783a*/  lea r9, aCodeSwitchRoll; "code=SWITCH_ROLLBACK_CAPTURE_FAILED | "
/*1403d7841*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7848*/  mov r8d, 6
/*1403d784e*/  call sub_140343ED0
/*1403d7853*/  nop
/*1403d7854*/  mov rdx, qword ptr [rbp+0B50h+var_1D0+8]
/*1403d785b*/  mov r8, qword ptr [rbp+0B50h+var_1C0]
/*1403d7862*/  mov [rsp+0BD0h+var_BB0], 3
/*1403d786b*/  lea r9, aCodeSwitchRoll+23h; " | "
/*1403d7872*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7879*/  call sub_140440300
/*1403d787e*/  nop
/*1403d787f*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d7886*/  mov [rsi+18h], rax
/*1403d788a*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d7891*/  movups xmmword ptr [rsi+8], xmm0
/*1403d7895*/  mov qword ptr [rsi], 2
/*1403d789c*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d78a3*/  call sub_140009B20
/*1403d78a8*/  mov rdx, qword ptr [rbp+0B50h+var_210]
/*1403d78af*/  test rdx, rdx
/*1403d78b2*/  jz short loc_1403D78C6
/*1403d78b4*/  mov rcx, qword ptr [rbp+0B50h+var_210+8]
/*1403d78bb*/  mov r8d, 1
/*1403d78c1*/  call sub_140001660
loc_1403D78C6: /*1403d78c6*/ mov al, 1
/*1403d78c8*/  mov dword ptr [rbp+0B50h+var_78], eax
loc_1403D78CE: /*1403d78ce*/ lea rcx, [rbp+0B50h+hObject]
/*1403d78d5*/  call sub_1412018B0
/*1403d78da*/  nop
/*1403d78db*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d78e2*/  test rax, rax
/*1403d78e5*/  jz short loc_1403D78F4
/*1403d78e7*/  lea rcx, [rbp+0B50h+var_650]
/*1403d78ee*/  call sub_140018650
/*1403d78f3*/  nop
loc_1403D78F4: /*1403d78f4*/ mov rcx, [rbp+0B50h+hObject]; hObject
/*1403d78fb*/  call cs:__imp_CloseHandle
/*1403d7901*/  mov rdx, [rbp+0B50h+var_F8]
/*1403d7908*/  test rdx, rdx
/*1403d790b*/  jz short loc_1403D791F
/*1403d790d*/  mov r8d, 1
/*1403d7913*/  mov rcx, [rbp+0B50h+var_B0]
/*1403d791a*/  call sub_140001660
loc_1403D791F: /*1403d791f*/ cmp byte ptr [rbp+0B50h+var_78], 0
/*1403d7926*/  jnz loc_1403D6AA0
/*1403d792c*/  jmp loc_1403D6ACC
loc_1403D7931: /*1403d7931*/ mov [rbp+0B50h+var_59], 1
/*1403d7938*/  mov [rbp+0B50h+var_5A], 1
/*1403d793f*/  mov [rbp+0B50h+var_5B], 1
loc_1403D7946: /*1403d7946*/ mov [rsp+0BD0h+var_BB0], 9
/*1403d794f*/  lea rdx, aDiskVerified; "disk_verified"
/*1403d7956*/  lea r9, unk_1417499B6
/*1403d795d*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7964*/  mov r8d, 0Dh
/*1403d796a*/  call sub_140343ED0
/*1403d796f*/  nop
/*1403d7970*/  mov rax, [rbp+0B50h+var_240]
/*1403d7977*/  mov qword ptr [rbp+0B50h+var_430], rax
/*1403d797e*/  movaps xmm0, [rbp+0B50h+var_270]
/*1403d7985*/  movaps xmm1, [rbp+0B50h+var_260]
/*1403d798c*/  movaps xmm2, [rbp+0B50h+var_250]
/*1403d7993*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d799a*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d79a1*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d79a8*/  mov [rbp+0B50h+var_59], 0
/*1403d79af*/  mov [rbp+0B50h+var_5A], 1
/*1403d79b6*/  mov [rbp+0B50h+var_5B], 1
/*1403d79bd*/  lea r15, [rbp+0B50h+var_160]
/*1403d79c4*/  lea r14, [rbp+0B50h+var_460]
/*1403d79cb*/  mov rcx, r15
/*1403d79ce*/  mov rdx, r14
/*1403d79d1*/  call sub_140387CC0
/*1403d79d6*/  nop
/*1403d79d7*/  cmp dword ptr [rbp+0B50h+var_160], 0FFFFFFFFh
/*1403d79de*/  jz loc_1403D7C1A
/*1403d79e4*/  movups xmm0, [rbp+0B50h+var_110]
/*1403d79eb*/  movaps [rbp+0B50h+var_800], xmm0
/*1403d79f2*/  movups xmm0, [rbp+0B50h+var_120]
/*1403d79f9*/  movaps [rbp+0B50h+var_810], xmm0
/*1403d7a00*/  movups xmm0, [rbp+0B50h+var_160]
/*1403d7a07*/  movups xmm1, [rbp+0B50h+var_150]
/*1403d7a0e*/  movups xmm2, [rbp+0B50h+var_140]
/*1403d7a15*/  movups xmm3, [rbp+0B50h+var_130]
/*1403d7a1c*/  movaps [rbp+0B50h+var_820], xmm3
/*1403d7a23*/  movaps [rbp+0B50h+var_830], xmm2
/*1403d7a2a*/  movaps [rbp+0B50h+var_840], xmm1
/*1403d7a31*/  movaps [rbp+0B50h+var_850], xmm0
/*1403d7a38*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d7a3f*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d7a46*/  mov [rbp+0B50h+var_6E], 1
/*1403d7a4d*/  mov [rbp+0B50h+var_6F], 1
loc_1403D7A54: /*1403d7a54*/ lea rcx, [rbp+0B50h+var_210]
/*1403d7a5b*/  mov rdx, rbx
/*1403d7a5e*/  call sub_1403DEE30
/*1403d7a63*/  nop
/*1403d7a64*/  cmp qword ptr [rbp+0B50h+var_210], 0FFFFFFFFFFFFFFFFh
/*1403d7a6c*/  lea rax, sub_140B036A0
/*1403d7a73*/  jz loc_1403D7F4E
/*1403d7a79*/  mov rcx, qword ptr [rbp+0B50h+var_200]
/*1403d7a80*/  mov qword ptr [rbp+0B50h+var_1C0], rcx
/*1403d7a87*/  movups xmm0, [rbp+0B50h+var_210]
/*1403d7a8e*/  movaps [rbp+0B50h+var_1D0], xmm0
/*1403d7a95*/  lea rcx, [rbp+0B50h+var_850]
/*1403d7a9c*/  mov qword ptr [rbp+0B50h+var_460], rcx
/*1403d7aa3*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d7aaa*/  lea rax, [rbp+0B50h+var_1D0]
/*1403d7ab1*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d7ab8*/  lea rax, sub_1400015F0
/*1403d7abf*/  mov qword ptr [rbp+0B50h+var_450+8], rax
/*1403d7ac6*/  mov [rbp+0B50h+var_84], 1
loc_1403D7ACD: /*1403d7acd*/ lea rdx, unk_141749C35
/*1403d7ad4*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7adb*/  lea r8, [rbp+0B50h+var_460]
/*1403d7ae2*/  call sub_14149C0F0
/*1403d7ae7*/  nop
/*1403d7ae8*/  mov rax, qword ptr [rbp+0B50h+var_650]
/*1403d7aef*/  mov [rbp+0B50h+var_78], rax
/*1403d7af6*/  mov rax, qword ptr [rbp+0B50h+var_650+8]
/*1403d7afd*/  mov [rbp+0B50h+var_A8], rax
/*1403d7b04*/  mov rdi, qword ptr [rbp+0B50h+var_640]
/*1403d7b0b*/  mov [rbp+0B50h+var_85], 1
/*1403d7b12*/  mov [rbp+0B50h+var_86], 1
loc_1403D7B19: /*1403d7b19*/ mov [rsp+0BD0h+var_BB0], 20h ; ' '
/*1403d7b22*/  lea rdx, aFailed; "failed"
/*1403d7b29*/  lea r9, unk_141749B5D
/*1403d7b30*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7b37*/  mov r8d, 6
/*1403d7b3d*/  call sub_140343ED0
/*1403d7b42*/  nop
/*1403d7b43*/  mov [rbp+0B50h+var_85], 1
/*1403d7b4a*/  mov [rbp+0B50h+var_86], 0
/*1403d7b51*/  mov rcx, [rbp+0B50h+Address]
/*1403d7b58*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d7b5f*/  call sub_14000E270
/*1403d7b64*/  nop
/*1403d7b65*/  mov rax, [rbp+0B50h+var_78]
/*1403d7b6c*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d7b73*/  mov rax, [rbp+0B50h+var_A8]
/*1403d7b7a*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d7b81*/  mov qword ptr [rbp+0B50h+var_450], rdi
/*1403d7b88*/  mov [rbp+0B50h+var_85], 0
/*1403d7b8f*/  mov [rbp+0B50h+var_86], 0
/*1403d7b96*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7b9d*/  lea r8, [rbp+0B50h+var_D0]
/*1403d7ba4*/  lea r9, [rbp+0B50h+var_460]
/*1403d7bab*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d7bb2*/  call sub_1403E4470
/*1403d7bb7*/  nop
/*1403d7bb8*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d7bbf*/  mov [rsi+18h], rax
/*1403d7bc3*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d7bca*/  movups xmmword ptr [rsi+8], xmm0
/*1403d7bce*/  mov qword ptr [rsi], 2
/*1403d7bd5*/  mov rdx, qword ptr [rbp+0B50h+var_1D0]
/*1403d7bdc*/  test rdx, rdx
/*1403d7bdf*/  jz short loc_1403D7BF3
/*1403d7be1*/  mov rcx, qword ptr [rbp+0B50h+var_1D0+8]
/*1403d7be8*/  mov r8d, 1
/*1403d7bee*/  call sub_140001660
loc_1403D7BF3: /*1403d7bf3*/ mov [rbp+0B50h+var_59], 0
/*1403d7bfa*/  mov [rbp+0B50h+var_5A], 0
/*1403d7c01*/  mov [rbp+0B50h+var_5B], 1
loc_1403D7C08: /*1403d7c08*/ lea rcx, [rbp+0B50h+var_850]
/*1403d7c0f*/  call sub_14034ED40
/*1403d7c14*/  nop
/*1403d7c15*/  jmp loc_1403D7740
loc_1403D7C1A: /*1403d7c1a*/ mov eax, dword ptr [rbp+0B50h+var_160+8]
/*1403d7c20*/  movzx ecx, byte ptr [rbp+0B50h+var_160+0Ch]
/*1403d7c27*/  mov [rbp+0B50h+var_218], eax
/*1403d7c2d*/  mov [rbp+0B50h+var_214], cl
/*1403d7c33*/  test eax, eax
/*1403d7c35*/  setnz al
/*1403d7c38*/  or al, cl
/*1403d7c3a*/  test al, 1
/*1403d7c3c*/  jz loc_1403D8991
/*1403d7c42*/  lea rax, [rbp+0B50h+var_214]
/*1403d7c49*/  lea rcx, [rbp+0B50h+var_218]
/*1403d7c50*/  mov qword ptr [rbp+0B50h+var_460], rcx
/*1403d7c57*/  lea rcx, sub_1414AB780
/*1403d7c5e*/  mov qword ptr [rbp+0B50h+var_460+8], rcx
/*1403d7c65*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d7c6c*/  mov qword ptr [rbp+0B50h+var_450+8], rdi
/*1403d7c73*/  mov [rbp+0B50h+var_59], 0
/*1403d7c7a*/  mov [rbp+0B50h+var_5A], 1
/*1403d7c81*/  mov [rbp+0B50h+var_5B], 1
/*1403d7c88*/  lea rdx, unk_1417499BF
/*1403d7c8f*/  lea rcx, [rbp+0B50h+var_A80]
/*1403d7c96*/  lea r8, [rbp+0B50h+var_460]
/*1403d7c9d*/  call sub_14149C0F0
/*1403d7ca2*/  nop
/*1403d7ca3*/  mov [rbp+0B50h+var_59], 0
/*1403d7caa*/  mov [rbp+0B50h+var_5A], 1
/*1403d7cb1*/  mov [rbp+0B50h+var_5B], 1
/*1403d7cb8*/  lea rdx, aWriterReentry; "writer_reentry"
/*1403d7cbf*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7cc6*/  lea r9, [rbp+0B50h+var_A80]
/*1403d7ccd*/  mov r8d, 0Eh
/*1403d7cd3*/  call sub_140343D80
/*1403d7cd8*/  nop
/*1403d7cd9*/  mov [rbp+0B50h+var_59], 0
/*1403d7ce0*/  mov [rbp+0B50h+var_5A], 1
/*1403d7ce7*/  mov [rbp+0B50h+var_5B], 1
/*1403d7cee*/  mov byte ptr [rsp+0BD0h+var_BB0], 0
/*1403d7cf3*/  lea rcx, [rbp+0B50h+var_160]
/*1403d7cfa*/  mov edx, 5
/*1403d7cff*/  xor r8d, r8d
/*1403d7d02*/  xor r9d, r9d
/*1403d7d05*/  call acquire_with_policy
/*1403d7d0a*/  nop
/*1403d7d0b*/  cmp dword ptr [rbp+0B50h+var_160], 0FFFFFFFFh
/*1403d7d12*/  jz loc_1403D80CA
/*1403d7d18*/  movups xmm0, [rbp+0B50h+var_110]
/*1403d7d1f*/  movaps [rbp+0B50h+var_800], xmm0
/*1403d7d26*/  movups xmm0, [rbp+0B50h+var_120]
/*1403d7d2d*/  movaps [rbp+0B50h+var_810], xmm0
/*1403d7d34*/  movups xmm0, [rbp+0B50h+var_160]
/*1403d7d3b*/  movups xmm1, [rbp+0B50h+var_150]
/*1403d7d42*/  movups xmm2, [rbp+0B50h+var_140]
/*1403d7d49*/  movups xmm3, [rbp+0B50h+var_130]
/*1403d7d50*/  movaps [rbp+0B50h+var_820], xmm3
/*1403d7d57*/  movaps [rbp+0B50h+var_830], xmm2
/*1403d7d5e*/  movaps [rbp+0B50h+var_840], xmm1
/*1403d7d65*/  movaps [rbp+0B50h+var_850], xmm0
/*1403d7d6c*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d7d73*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d7d7a*/  mov [rbp+0B50h+var_6C], 1
/*1403d7d81*/  mov [rbp+0B50h+var_6D], 1
loc_1403D7D88: /*1403d7d88*/ lea rcx, [rbp+0B50h+var_F0]
/*1403d7d8f*/  mov rdx, rbx
/*1403d7d92*/  call sub_1403DEE30
/*1403d7d97*/  nop
/*1403d7d98*/  cmp qword ptr [rbp+0B50h+var_F0], 0FFFFFFFFFFFFFFFFh
/*1403d7da0*/  jz loc_1403D8230
/*1403d7da6*/  mov rax, [rbp+0B50h+var_E0]
/*1403d7dad*/  mov qword ptr [rbp+0B50h+var_1C0], rax
/*1403d7db4*/  movups xmm0, [rbp+0B50h+var_F0]
/*1403d7dbb*/  movaps [rbp+0B50h+var_1D0], xmm0
/*1403d7dc2*/  lea rax, [rbp+0B50h+var_850]
/*1403d7dc9*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d7dd0*/  lea rax, sub_140B036A0
/*1403d7dd7*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d7dde*/  lea rax, [rbp+0B50h+var_1D0]
/*1403d7de5*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d7dec*/  lea rax, sub_1400015F0
/*1403d7df3*/  mov qword ptr [rbp+0B50h+var_450+8], rax
/*1403d7dfa*/  mov [rbp+0B50h+var_81], 1
loc_1403D7E01: /*1403d7e01*/ lea rdx, unk_141749C35
/*1403d7e08*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7e0f*/  lea r8, [rbp+0B50h+var_460]
/*1403d7e16*/  call sub_14149C0F0
/*1403d7e1b*/  nop
/*1403d7e1c*/  mov rax, qword ptr [rbp+0B50h+var_650]
/*1403d7e23*/  mov [rbp+0B50h+var_78], rax
/*1403d7e2a*/  mov rax, qword ptr [rbp+0B50h+var_650+8]
/*1403d7e31*/  mov [rbp+0B50h+var_A8], rax
/*1403d7e38*/  mov rdi, qword ptr [rbp+0B50h+var_640]
/*1403d7e3f*/  mov [rbp+0B50h+var_82], 1
/*1403d7e46*/  mov [rbp+0B50h+var_83], 1
loc_1403D7E4D: /*1403d7e4d*/ mov [rsp+0BD0h+var_BB0], 20h ; ' '
/*1403d7e56*/  lea rdx, aFailed; "failed"
/*1403d7e5d*/  lea r9, unk_141749B5D
/*1403d7e64*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d7e6b*/  mov r8d, 6
/*1403d7e71*/  call sub_140343ED0
/*1403d7e76*/  nop
/*1403d7e77*/  mov [rbp+0B50h+var_82], 1
/*1403d7e7e*/  mov [rbp+0B50h+var_83], 0
/*1403d7e85*/  mov rcx, [rbp+0B50h+Address]
/*1403d7e8c*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d7e93*/  call sub_14000E270
/*1403d7e98*/  nop
/*1403d7e99*/  mov rax, [rbp+0B50h+var_78]
/*1403d7ea0*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d7ea7*/  mov rax, [rbp+0B50h+var_A8]
/*1403d7eae*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d7eb5*/  mov qword ptr [rbp+0B50h+var_450], rdi
/*1403d7ebc*/  mov [rbp+0B50h+var_82], 0
/*1403d7ec3*/  mov [rbp+0B50h+var_83], 0
/*1403d7eca*/  lea rcx, [rbp+0B50h+var_650]
/*1403d7ed1*/  lea r8, [rbp+0B50h+var_D0]
/*1403d7ed8*/  lea r9, [rbp+0B50h+var_460]
/*1403d7edf*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d7ee6*/  call sub_1403E4470
/*1403d7eeb*/  nop
/*1403d7eec*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d7ef3*/  mov [rsi+18h], rax
/*1403d7ef7*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d7efe*/  movups xmmword ptr [rsi+8], xmm0
/*1403d7f02*/  mov qword ptr [rsi], 2
/*1403d7f09*/  mov rdx, qword ptr [rbp+0B50h+var_1D0]
/*1403d7f10*/  test rdx, rdx
/*1403d7f13*/  jz short loc_1403D7F27
/*1403d7f15*/  mov rcx, qword ptr [rbp+0B50h+var_1D0+8]
/*1403d7f1c*/  mov r8d, 1
/*1403d7f22*/  call sub_140001660
loc_1403D7F27: /*1403d7f27*/ mov [rbp+0B50h+var_59], 0
/*1403d7f2e*/  mov [rbp+0B50h+var_5A], 0
/*1403d7f35*/  mov [rbp+0B50h+var_5B], 1
loc_1403D7F3C: /*1403d7f3c*/ lea rcx, [rbp+0B50h+var_850]
/*1403d7f43*/  call sub_14034ED40
/*1403d7f48*/  nop
/*1403d7f49*/  jmp loc_1403D7740
loc_1403D7F4E: /*1403d7f4e*/ lea rcx, [rbp+0B50h+var_850]
/*1403d7f55*/  mov qword ptr [rbp+0B50h+var_460], rcx
/*1403d7f5c*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d7f63*/  mov [rbp+0B50h+var_6E], 1
/*1403d7f6a*/  mov [rbp+0B50h+var_6F], 1
loc_1403D7F71: /*1403d7f71*/ lea rdx, unk_141749D41
/*1403d7f78*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d7f7f*/  lea r8, [rbp+0B50h+var_460]
/*1403d7f86*/  call sub_14149C0F0
/*1403d7f8b*/  nop
/*1403d7f8c*/  lea rcx, [rbp+0B50h+var_870]
/*1403d7f93*/  mov [rbp+0B50h+var_6E], 1
/*1403d7f9a*/  mov [rbp+0B50h+var_6F], 1
/*1403d7fa1*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403d7fa8*/  lea r9, [rbp+0B50h+var_1D0]
/*1403d7faf*/  mov r8d, 17h
/*1403d7fb5*/  call sub_1403DAFB0
/*1403d7fba*/  nop
/*1403d7fbb*/  mov [rbp+0B50h+var_6E], 0
/*1403d7fc2*/  mov [rbp+0B50h+var_6F], 1
/*1403d7fc9*/  mov rcx, [rbp+0B50h+Address]
/*1403d7fd0*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d7fd7*/  call sub_14000E270
/*1403d7fdc*/  nop
loc_1403D7FDD: /*1403d7fdd*/ lea rbx, [rbp+0B50h+var_460]
/*1403d7fe4*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d7feb*/  mov r8d, 1E8h
/*1403d7ff1*/  mov rcx, rbx
/*1403d7ff4*/  call sub_141684120
/*1403d7ff9*/  mov [rbp+0B50h+var_6E], 0
/*1403d8000*/  mov [rbp+0B50h+var_6F], 0
loc_1403D8007: /*1403d8007*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403d800e*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8013*/  mov [rsp+0BD0h+var_BA8], 1Ah
/*1403d801c*/  lea rcx, [rbp+0B50h+var_650]
/*1403d8023*/  lea r8, [rbp+0B50h+var_D0]
/*1403d802a*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d8031*/  mov r9, rbx
/*1403d8034*/  call finalize_committed_switch
/*1403d8039*/  nop
loc_1403D803A: /*1403d803a*/ lea rdx, [rbp+0B50h+var_650]
/*1403d8041*/  mov r8d, 1E8h
/*1403d8047*/  mov rcx, rsi
/*1403d804a*/  call sub_141684120
/*1403d804f*/  mov [rbp+0B50h+var_59], 0
/*1403d8056*/  mov [rbp+0B50h+var_5A], 0
/*1403d805d*/  mov [rbp+0B50h+var_5B], 0
loc_1403D8064: /*1403d8064*/ lea rcx, [rbp+0B50h+var_850]
/*1403d806b*/  call sub_14034ED40
/*1403d8070*/  nop
loc_1403D8071: /*1403d8071*/ jmp loc_1403D7322
loc_1403D8076: /*1403d8076*/ mov rcx, [rbp+0B50h+Address]; Address
/*1403d807d*/  call WakeByAddressSingle
/*1403d8082*/  jmp loc_1403D6ACC
loc_1403D8087: /*1403d8087*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403d808e*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8093*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403d809a*/  lea r9, unk_14174DE40
/*1403d80a1*/  lea r8, [rbp+0B50h+var_7A]
/*1403d80a8*/  mov edx, 37h ; '7'
/*1403d80ad*/  call sub_1416C3060
/*1403d80b3*/  jmp loc_1403D9578
loc_1403D80B8: /*1403d80b8*/ mov [rbp+0B50h+var_60], 1
loc_1403D80BF: /*1403d80bf*/ call WakeByAddressSingle
/*1403d80c4*/  nop
/*1403d80c5*/  jmp loc_1403D6A7B
loc_1403D80CA: /*1403d80ca*/ mov rax, qword ptr [rbp+0B50h+var_130+8]
/*1403d80d1*/  mov [rbp+0B50h+var_1E0], rax
/*1403d80d8*/  movups xmm0, [rbp+0B50h+var_160+8]
/*1403d80df*/  movups xmm1, [rbp+0B50h+var_150+8]
/*1403d80e6*/  movups xmm2, [rbp+0B50h+var_140+8]
/*1403d80ed*/  movaps [rbp+0B50h+var_1F0], xmm2
/*1403d80f4*/  movaps [rbp+0B50h+var_200], xmm1
/*1403d80fb*/  movaps [rbp+0B50h+var_210], xmm0
/*1403d8102*/  mov [rbp+0B50h+var_5C], 1
/*1403d8109*/  mov [rbp+0B50h+var_5D], 1
/*1403d8110*/  mov [rbp+0B50h+var_5E], 1
loc_1403D8117: /*1403d8117*/ mov rcx, [rbp+0B50h+var_A0]
/*1403d811e*/  call sub_140064030
/*1403d8123*/  nop
/*1403d8124*/  mov [rbp+0B50h+var_5C], 1
/*1403d812b*/  mov [rbp+0B50h+var_5D], 1
/*1403d8132*/  mov [rbp+0B50h+var_5E], 1
/*1403d8139*/  lea r13, [rbp+0B50h+var_160]
/*1403d8140*/  mov rcx, r13
/*1403d8143*/  mov rdx, rax
/*1403d8146*/  call sub_140B93B50
/*1403d814b*/  nop
/*1403d814c*/  cmp dword ptr [rbp+0B50h+var_160], 1
/*1403d8153*/  jnz loc_1403D835F
/*1403d8159*/  mov rax, qword ptr [rbp+0B50h+var_160+8]
/*1403d8160*/  movzx ecx, byte ptr [rbp+0B50h+var_150]
/*1403d8167*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d816e*/  mov byte ptr [rbp+0B50h+var_650+8], cl
/*1403d8174*/  mov qword ptr [rbp+0B50h+var_460], r12
/*1403d817b*/  lea rax, sub_14041C7D0
/*1403d8182*/  mov qword ptr [rbp+0B50h+var_460+8], rax
loc_1403D8189: /*1403d8189*/ lea rdx, unk_141749CBB
/*1403d8190*/  lea rcx, [rbp+0B50h+var_850]
/*1403d8197*/  lea r8, [rbp+0B50h+var_460]
/*1403d819e*/  call sub_14149C0F0
/*1403d81a3*/  nop
/*1403d81a4*/  movups xmm0, [rbp+0B50h+var_850]
/*1403d81ab*/  movaps [rbp+0B50h+var_230], xmm0
/*1403d81b2*/  mov rax, qword ptr [rbp+0B50h+var_840]
/*1403d81b9*/  mov [rbp+0B50h+var_220], rax
/*1403d81c0*/  mov rcx, qword ptr [rbp+0B50h+var_650]
/*1403d81c7*/  movzx edx, byte ptr [rbp+0B50h+var_650+8]
/*1403d81ce*/  mov [rbp+0B50h+var_5C], 1
/*1403d81d5*/  mov [rbp+0B50h+var_5D], 1
/*1403d81dc*/  mov [rbp+0B50h+var_5E], 1
loc_1403D81E3: /*1403d81e3*/ call sub_14000E270
/*1403d81e8*/  nop
loc_1403D81E9: /*1403d81e9*/ jmp loc_1403D84CA
loc_1403D81EE: /*1403d81ee*/ call sub_1416C2250
/*1403d81f3*/  test al, al
/*1403d81f5*/  jnz loc_1403D6AB9
/*1403d81fb*/  mov rax, [rbp+0B50h+Address]
/*1403d8202*/  mov byte ptr [rax+1], 1
/*1403d8206*/  jmp loc_1403D6AB9
loc_1403D820B: /*1403d820b*/ mov [rbp+0B50h+var_60], 1
loc_1403D8212: /*1403d8212*/ call sub_1416C2250
/*1403d8217*/  nop
/*1403d8218*/  test al, al
/*1403d821a*/  jnz loc_1403D6A68
/*1403d8220*/  mov rax, [rbp+0B50h+var_B0]
/*1403d8227*/  mov byte ptr [rax+1], 1
/*1403d822b*/  jmp loc_1403D6A68
loc_1403D8230: /*1403d8230*/ lea rax, [rbp+0B50h+var_850]
/*1403d8237*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d823e*/  lea rax, sub_140B036A0
/*1403d8245*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d824c*/  mov [rbp+0B50h+var_6C], 1
/*1403d8253*/  mov [rbp+0B50h+var_6D], 1
loc_1403D825A: /*1403d825a*/ lea rdx, unk_141749CDD
/*1403d8261*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d8268*/  lea r8, [rbp+0B50h+var_460]
/*1403d826f*/  call sub_14149C0F0
/*1403d8274*/  nop
/*1403d8275*/  lea rcx, [rbp+0B50h+var_870]
/*1403d827c*/  mov [rbp+0B50h+var_6C], 1
/*1403d8283*/  mov [rbp+0B50h+var_6D], 1
/*1403d828a*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403d8291*/  lea r9, [rbp+0B50h+var_1D0]
/*1403d8298*/  mov r8d, 17h
/*1403d829e*/  call sub_1403DAFB0
/*1403d82a3*/  nop
/*1403d82a4*/  mov [rbp+0B50h+var_6C], 0
/*1403d82ab*/  mov [rbp+0B50h+var_6D], 1
/*1403d82b2*/  mov rcx, [rbp+0B50h+Address]
/*1403d82b9*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d82c0*/  call sub_14000E270
/*1403d82c5*/  nop
loc_1403D82C6: /*1403d82c6*/ lea rbx, [rbp+0B50h+var_460]
/*1403d82cd*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d82d4*/  mov r8d, 1E8h
/*1403d82da*/  mov rcx, rbx
/*1403d82dd*/  call sub_141684120
/*1403d82e2*/  mov [rbp+0B50h+var_6C], 0
/*1403d82e9*/  mov [rbp+0B50h+var_6D], 0
loc_1403D82F0: /*1403d82f0*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403d82f7*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d82fc*/  mov [rsp+0BD0h+var_BA8], 1Ah
/*1403d8305*/  lea rcx, [rbp+0B50h+var_650]
/*1403d830c*/  lea r8, [rbp+0B50h+var_D0]
/*1403d8313*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d831a*/  mov r9, rbx
/*1403d831d*/  call finalize_committed_switch
/*1403d8322*/  nop
loc_1403D8323: /*1403d8323*/ lea rdx, [rbp+0B50h+var_650]
/*1403d832a*/  mov r8d, 1E8h
/*1403d8330*/  mov rcx, rsi
/*1403d8333*/  call sub_141684120
/*1403d8338*/  mov [rbp+0B50h+var_59], 0
/*1403d833f*/  mov [rbp+0B50h+var_5A], 0
/*1403d8346*/  mov [rbp+0B50h+var_5B], 0
loc_1403D834D: /*1403d834d*/ lea rcx, [rbp+0B50h+var_850]
/*1403d8354*/  call sub_14034ED40
/*1403d8359*/  nop
/*1403d835a*/  jmp loc_1403D7322
loc_1403D835F: /*1403d835f*/ mov rcx, qword ptr [rbp+0B50h+var_160+8]
/*1403d8366*/  movzx eax, byte ptr [rbp+0B50h+var_150]
/*1403d836d*/  mov byte ptr [rbp+0B50h+var_78], al
/*1403d8373*/  mov [rbp+0B50h+var_A8], rcx
/*1403d837a*/  lea rdx, [rcx+8]
/*1403d837e*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d8385*/  mov r9, [rbp+0B50h+var_8C8]
loc_1403D838C: /*1403d838c*/ lea r12, [rbp+0B50h+var_460]
/*1403d8393*/  mov rcx, r12
/*1403d8396*/  call switch_account_0
/*1403d839b*/  nop
/*1403d839c*/  mov rdi, qword ptr [rbp+0B50h+var_460]
/*1403d83a3*/  lea rax, [rbp+0B50h+var_460+8]
/*1403d83aa*/  cmp rdi, 2
/*1403d83ae*/  jnz loc_1403D846A
/*1403d83b4*/  movups xmm0, xmmword ptr [rax+50h]
/*1403d83b8*/  movaps [rbp+0B50h+var_600], xmm0
/*1403d83bf*/  movups xmm0, xmmword ptr [rax+40h]
/*1403d83c3*/  movaps [rbp+0B50h+var_610], xmm0
/*1403d83ca*/  movups xmm0, xmmword ptr [rax]
/*1403d83cd*/  movups xmm1, xmmword ptr [rax+10h]
/*1403d83d1*/  movups xmm2, xmmword ptr [rax+20h]
/*1403d83d5*/  movups xmm3, xmmword ptr [rax+30h]
/*1403d83d9*/  movaps [rbp+0B50h+var_620], xmm3
/*1403d83e0*/  movaps [rbp+0B50h+var_630], xmm2
/*1403d83e7*/  movaps [rbp+0B50h+var_640], xmm1
/*1403d83ee*/  movaps [rbp+0B50h+var_650], xmm0
/*1403d83f5*/  lea rcx, [rbp+0B50h+var_850]
/*1403d83fc*/  lea rdx, [rbp+0B50h+var_650]
/*1403d8403*/  call sub_1403799D0
/*1403d8408*/  nop
/*1403d8409*/  movups xmm0, [rbp+0B50h+var_850]
/*1403d8410*/  movaps [rbp+0B50h+var_230], xmm0
/*1403d8417*/  mov rax, qword ptr [rbp+0B50h+var_840]
/*1403d841e*/  mov [rbp+0B50h+var_220], rax
/*1403d8425*/  jmp short loc_1403D8498
loc_1403D8427: /*1403d8427*/ mov [rbp+0B50h+var_60], 1
loc_1403D842E: /*1403d842e*/ call WakeByAddressSingle
/*1403d8433*/  nop
/*1403d8434*/  jmp loc_1403D6C99
loc_1403D8439: /*1403d8439*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403d8440*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8445*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403d844c*/  lea r9, unk_14174DE40
/*1403d8453*/  lea r8, [rbp+0B50h+var_7A]
/*1403d845a*/  mov edx, 37h ; '7'
/*1403d845f*/  call sub_1416C3060
loc_1403D8465: /*1403d8465*/ jmp loc_1403D9578
loc_1403D846A: /*1403d846a*/ mov rcx, [rax+10h]
/*1403d846e*/  mov [rbp+0B50h+var_220], rcx
/*1403d8475*/  movups xmm0, xmmword ptr [rax]
/*1403d8478*/  movaps [rbp+0B50h+var_230], xmm0
/*1403d847f*/  lea rdx, [rbp+0B50h+var_440]
/*1403d8486*/  lea rcx, [rbp+0B50h+var_850]
/*1403d848d*/  mov r8d, 1C8h
/*1403d8493*/  call sub_141684120
loc_1403D8498: /*1403d8498*/ mov [rbp+0B50h+var_5C], 1
/*1403d849f*/  mov [rbp+0B50h+var_5D], 1
/*1403d84a6*/  mov [rbp+0B50h+var_5E], 1
loc_1403D84AD: /*1403d84ad*/ mov rcx, [rbp+0B50h+var_A8]
/*1403d84b4*/  movzx edx, byte ptr [rbp+0B50h+var_78]
/*1403d84bb*/  call sub_14000E270
/*1403d84c0*/  nop
/*1403d84c1*/  cmp edi, 2
/*1403d84c4*/  jnz loc_1403D85C3
loc_1403D84CA: /*1403d84ca*/ mov rax, [rbp+0B50h+var_220]
/*1403d84d1*/  mov [rbp+0B50h+var_670], rax
/*1403d84d8*/  movaps xmm0, [rbp+0B50h+var_230]
/*1403d84df*/  movaps [rbp+0B50h+var_680], xmm0
loc_1403D84E6: /*1403d84e6*/ mov rax, [rbp+0B50h+var_1E0]
/*1403d84ed*/  mov qword ptr [rbp+0B50h+var_430], rax
/*1403d84f4*/  movaps xmm0, [rbp+0B50h+var_210]
/*1403d84fb*/  movaps xmm1, [rbp+0B50h+var_200]
/*1403d8502*/  movaps xmm2, [rbp+0B50h+var_1F0]
/*1403d8509*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d8510*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d8517*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d851e*/  mov [rbp+0B50h+var_5C], 0
/*1403d8525*/  mov [rbp+0B50h+var_5D], 1
/*1403d852c*/  mov [rbp+0B50h+var_5E], 1
/*1403d8533*/  lea rax, [rbp+0B50h+var_680]
/*1403d853a*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d853f*/  lea rcx, [rbp+0B50h+var_160]
/*1403d8546*/  lea rdx, [rbp+0B50h+var_D0]
/*1403d854d*/  lea r8, [rbp+0B50h+var_B98]
/*1403d8551*/  lea r9, [rbp+0B50h+var_460]
/*1403d8558*/  call sub_1403DB4A0
/*1403d855d*/  nop
/*1403d855e*/  mov [rbp+0B50h+var_8B], 1
loc_1403D8565: /*1403d8565*/ mov rcx, [rbp+0B50h+Address]
/*1403d856c*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d8573*/  call sub_14000E270
/*1403d8578*/  nop
/*1403d8579*/  mov rax, qword ptr [rbp+0B50h+var_150]
/*1403d8580*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d8587*/  movups xmm0, [rbp+0B50h+var_160]
/*1403d858e*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d8595*/  mov [rbp+0B50h+var_8B], 0
/*1403d859c*/  lea rcx, [rbp+0B50h+var_650]
/*1403d85a3*/  lea r8, [rbp+0B50h+var_D0]
/*1403d85aa*/  lea r9, [rbp+0B50h+var_460]
/*1403d85b1*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d85b8*/  call sub_1403E4470
/*1403d85bd*/  nop
loc_1403D85BE: /*1403d85be*/ jmp loc_1403D7723
loc_1403D85C3: /*1403d85c3*/ mov rax, [rbp+0B50h+var_220]
/*1403d85ca*/  mov qword ptr [rbp+0B50h+var_450+8], rax
/*1403d85d1*/  movaps xmm0, [rbp+0B50h+var_230]
/*1403d85d8*/  movups [rbp+0B50h+var_460+8], xmm0
/*1403d85df*/  lea rcx, [rbp+0B50h+var_440]
/*1403d85e6*/  lea rdx, [rbp+0B50h+var_850]
/*1403d85ed*/  mov r8d, 1C8h
/*1403d85f3*/  call sub_141684120
/*1403d85f8*/  mov qword ptr [rbp+0B50h+var_460], rdi
/*1403d85ff*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d8606*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d860d*/  mov [rbp+0B50h+var_5C], 1
/*1403d8614*/  mov [rbp+0B50h+var_5D], 1
/*1403d861b*/  mov [rbp+0B50h+var_5E], 1
loc_1403D8622: /*1403d8622*/ mov [rsp+0BD0h+var_BB0], r12
/*1403d8627*/  lea rcx, [rbp+0B50h+var_680]
/*1403d862e*/  mov rdx, rbx
/*1403d8631*/  call sub_140379AC0
/*1403d8636*/  nop
/*1403d8637*/  cmp qword ptr [rbp+0B50h+var_680], 0FFFFFFFFFFFFFFFFh
/*1403d863f*/  jnz loc_1403D84E6
/*1403d8645*/  mov rax, [rbp+0B50h+var_1E0]
/*1403d864c*/  mov qword ptr [rbp+0B50h+var_430], rax
/*1403d8653*/  movaps xmm0, [rbp+0B50h+var_210]
/*1403d865a*/  movaps xmm1, [rbp+0B50h+var_200]
/*1403d8661*/  movaps xmm2, [rbp+0B50h+var_1F0]
/*1403d8668*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d866f*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d8676*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d867d*/  mov [rbp+0B50h+var_5C], 0
/*1403d8684*/  mov [rbp+0B50h+var_5D], 1
/*1403d868b*/  mov [rbp+0B50h+var_5E], 1
/*1403d8692*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d8699*/  lea rdx, [rbp+0B50h+var_460]
/*1403d86a0*/  call sub_140387CC0
/*1403d86a5*/  nop
/*1403d86a6*/  cmp dword ptr [rbp+0B50h+var_1D0], 0FFFFFFFFh
/*1403d86ad*/  jz loc_1403D8938
/*1403d86b3*/  movups xmm0, [rbp+0B50h+var_180]
/*1403d86ba*/  movaps [rbp+0B50h+var_110], xmm0
/*1403d86c1*/  movups xmm0, [rbp+0B50h+var_190]
/*1403d86c8*/  movaps [rbp+0B50h+var_120], xmm0
/*1403d86cf*/  movups xmm0, [rbp+0B50h+var_1D0]
/*1403d86d6*/  movups xmm1, [rbp+0B50h+var_1C0]
/*1403d86dd*/  movups xmm2, [rbp+0B50h+var_1B0]
/*1403d86e4*/  movups xmm3, [rbp+0B50h+var_1A0]
/*1403d86eb*/  movaps [rbp+0B50h+var_130], xmm3
/*1403d86f2*/  movaps [rbp+0B50h+var_140], xmm2
/*1403d86f9*/  movaps [rbp+0B50h+var_150], xmm1
/*1403d8700*/  movaps [rbp+0B50h+var_160], xmm0
/*1403d8707*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d870e*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d8715*/  mov [rbp+0B50h+var_6A], 1
/*1403d871c*/  mov [rbp+0B50h+var_6B], 1
loc_1403D8723: /*1403d8723*/ lea rcx, [rbp+0B50h+var_668]
/*1403d872a*/  mov rdx, rbx
/*1403d872d*/  call sub_1403DEE30
/*1403d8732*/  nop
/*1403d8733*/  cmp qword ptr [rbp+0B50h+var_668], 0FFFFFFFFFFFFFFFFh
/*1403d873b*/  jz loc_1403D9183
/*1403d8741*/  mov rax, [rbp+0B50h+var_658]
/*1403d8748*/  mov [rbp+0B50h+var_E0], rax
/*1403d874f*/  movups xmm0, [rbp+0B50h+var_668]
/*1403d8756*/  movaps [rbp+0B50h+var_F0], xmm0
/*1403d875d*/  mov qword ptr [rbp+0B50h+var_460], r13
/*1403d8764*/  lea rax, sub_140B036A0
/*1403d876b*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d8772*/  lea rax, [rbp+0B50h+var_F0]
/*1403d8779*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d8780*/  lea rax, sub_1400015F0
/*1403d8787*/  mov qword ptr [rbp+0B50h+var_450+8], rax
/*1403d878e*/  mov [rbp+0B50h+var_7E], 1
loc_1403D8795: /*1403d8795*/ lea rdx, unk_141749C35
/*1403d879c*/  lea rcx, [rbp+0B50h+var_650]
/*1403d87a3*/  lea r8, [rbp+0B50h+var_460]
/*1403d87aa*/  call sub_14149C0F0
/*1403d87af*/  nop
/*1403d87b0*/  mov rax, qword ptr [rbp+0B50h+var_650]
/*1403d87b7*/  mov [rbp+0B50h+var_78], rax
/*1403d87be*/  mov rax, qword ptr [rbp+0B50h+var_650+8]
/*1403d87c5*/  mov [rbp+0B50h+var_A8], rax
/*1403d87cc*/  mov rdi, qword ptr [rbp+0B50h+var_640]
/*1403d87d3*/  mov [rbp+0B50h+var_7F], 1
/*1403d87da*/  mov [rbp+0B50h+var_80], 1
loc_1403D87E1: /*1403d87e1*/ mov [rsp+0BD0h+var_BB0], 20h ; ' '
/*1403d87ea*/  lea rdx, aFailed; "failed"
/*1403d87f1*/  lea r9, unk_141749B5D
/*1403d87f8*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d87ff*/  mov r8d, 6
/*1403d8805*/  call sub_140343ED0
/*1403d880a*/  nop
/*1403d880b*/  mov [rbp+0B50h+var_7F], 1
/*1403d8812*/  mov [rbp+0B50h+var_80], 0
/*1403d8819*/  mov rcx, [rbp+0B50h+Address]
/*1403d8820*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d8827*/  call sub_14000E270
/*1403d882c*/  nop
/*1403d882d*/  mov rax, [rbp+0B50h+var_78]
/*1403d8834*/  mov qword ptr [rbp+0B50h+var_460], rax
/*1403d883b*/  mov rax, [rbp+0B50h+var_A8]
/*1403d8842*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d8849*/  mov qword ptr [rbp+0B50h+var_450], rdi
/*1403d8850*/  mov [rbp+0B50h+var_7F], 0
/*1403d8857*/  mov [rbp+0B50h+var_80], 0
/*1403d885e*/  lea rcx, [rbp+0B50h+var_650]
/*1403d8865*/  lea r8, [rbp+0B50h+var_D0]
/*1403d886c*/  lea r9, [rbp+0B50h+var_460]
/*1403d8873*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d887a*/  call sub_1403E4470
/*1403d887f*/  nop
/*1403d8880*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d8887*/  mov [rsi+18h], rax
/*1403d888b*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d8892*/  movups xmmword ptr [rsi+8], xmm0
/*1403d8896*/  mov qword ptr [rsi], 2
/*1403d889d*/  mov rdx, qword ptr [rbp+0B50h+var_F0]
/*1403d88a4*/  test rdx, rdx
/*1403d88a7*/  jz short loc_1403D88BB
/*1403d88a9*/  mov rcx, qword ptr [rbp+0B50h+var_F0+8]
/*1403d88b0*/  mov r8d, 1
/*1403d88b6*/  call sub_140001660
loc_1403D88BB: /*1403d88bb*/ mov [rbp+0B50h+var_5C], 0
/*1403d88c2*/  mov [rbp+0B50h+var_5D], 0
/*1403d88c9*/  mov [rbp+0B50h+var_5E], 1
loc_1403D88D0: /*1403d88d0*/ lea rcx, [rbp+0B50h+var_160]
/*1403d88d7*/  call sub_14034ED40
/*1403d88dc*/  nop
/*1403d88dd*/  jmp loc_1403D7740
loc_1403D88E2: /*1403d88e2*/ mov [rbp+0B50h+var_60], 1
loc_1403D88E9: /*1403d88e9*/ call sub_1416C2250
/*1403d88ee*/  nop
/*1403d88ef*/  test al, al
/*1403d88f1*/  jnz loc_1403D6C86
/*1403d88f7*/  mov rax, [rbp+0B50h+var_B0]
/*1403d88fe*/  mov byte ptr [rax+1], 1
/*1403d8902*/  jmp loc_1403D6C86
loc_1403D8907: /*1403d8907*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403d890e*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8913*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403d891a*/  lea r9, unk_14174DE40
/*1403d8921*/  lea r8, [rbp+0B50h+var_7A]
/*1403d8928*/  mov edx, 37h ; '7'
/*1403d892d*/  call sub_1416C3060
/*1403d8933*/  jmp loc_1403D9578
loc_1403D8938: /*1403d8938*/ cmp dword ptr [rbp+0B50h+var_1D0+8], 0
/*1403d893f*/  jnz loc_1403D92AB
/*1403d8945*/  cmp byte ptr [rbp+0B50h+var_1D0+0Ch], 0
/*1403d894c*/  jnz loc_1403D92AB
/*1403d8952*/  mov [rbp+0B50h+var_5C], 0
/*1403d8959*/  mov [rbp+0B50h+var_5D], 1
/*1403d8960*/  mov [rbp+0B50h+var_5E], 1
loc_1403D8967: /*1403d8967*/ mov [rsp+0BD0h+var_BB0], 9
/*1403d8970*/  lea rdx, aDiskReconciled; "disk_reconciled"
/*1403d8977*/  lea r9, unk_1417499B6
/*1403d897e*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8985*/  mov r8d, 0Fh
/*1403d898b*/  call sub_140343ED0
/*1403d8990*/  nop
loc_1403D8991: /*1403d8991*/ mov [rbp+0B50h+var_59], 0
/*1403d8998*/  mov [rbp+0B50h+var_5A], 1
/*1403d899f*/  mov [rbp+0B50h+var_5B], 1
loc_1403D89A6: /*1403d89a6*/ mov [rsp+0BD0h+var_BB0], 0Eh
/*1403d89af*/  lea rdx, aLaunchStarted; "launch_started"
/*1403d89b6*/  lea r9, aStatusPending; "status=pending"
/*1403d89bd*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d89c4*/  mov r8d, 0Eh
/*1403d89ca*/  call sub_140343ED0
/*1403d89cf*/  nop
/*1403d89d0*/  mov [rbp+0B50h+var_59], 0
/*1403d89d7*/  mov [rbp+0B50h+var_5A], 1
/*1403d89de*/  mov [rbp+0B50h+var_5B], 1
/*1403d89e5*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d89ec*/  call sub_1403B6530
/*1403d89f1*/  nop
/*1403d89f2*/  cmp dword ptr [rbp+0B50h+var_1D0], 0FFFFFFFFh
/*1403d89f9*/  jz loc_1403D8C49
/*1403d89ff*/  movups xmm0, [rbp+0B50h+var_180]
/*1403d8a06*/  movaps [rbp+0B50h+var_110], xmm0
/*1403d8a0d*/  movups xmm0, [rbp+0B50h+var_190]
/*1403d8a14*/  movaps [rbp+0B50h+var_120], xmm0
/*1403d8a1b*/  movups xmm0, [rbp+0B50h+var_1D0]
/*1403d8a22*/  movups xmm1, [rbp+0B50h+var_1C0]
/*1403d8a29*/  movups xmm2, [rbp+0B50h+var_1B0]
/*1403d8a30*/  movups xmm3, [rbp+0B50h+var_1A0]
/*1403d8a37*/  movaps [rbp+0B50h+var_130], xmm3
/*1403d8a3e*/  movaps [rbp+0B50h+var_140], xmm2
/*1403d8a45*/  movaps [rbp+0B50h+var_150], xmm1
/*1403d8a4c*/  movaps [rbp+0B50h+var_160], xmm0
/*1403d8a53*/  mov qword ptr [rbp+0B50h+var_460], r15
/*1403d8a5a*/  lea rax, sub_140B036A0
/*1403d8a61*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d8a68*/  mov [rbp+0B50h+var_64], 1
/*1403d8a6f*/  mov [rbp+0B50h+var_65], 1
loc_1403D8A76: /*1403d8a76*/ lea rdx, unk_141749A09
/*1403d8a7d*/  lea rcx, [rbp+0B50h+var_F0]
/*1403d8a84*/  lea r8, [rbp+0B50h+var_460]
/*1403d8a8b*/  call sub_14149C0F0
/*1403d8a90*/  nop
/*1403d8a91*/  lea rcx, [rbp+0B50h+var_870]
/*1403d8a98*/  mov [rbp+0B50h+var_64], 1
/*1403d8a9f*/  mov [rbp+0B50h+var_65], 1
/*1403d8aa6*/  lea rdx, aClientRestartF; "CLIENT_RESTART_FAILED"
/*1403d8aad*/  lea r9, [rbp+0B50h+var_F0]
/*1403d8ab4*/  mov r8d, 15h
/*1403d8aba*/  call sub_1403DAFB0
/*1403d8abf*/  nop
/*1403d8ac0*/  mov [rbp+0B50h+var_64], 1
/*1403d8ac7*/  mov [rbp+0B50h+var_65], 1
/*1403d8ace*/  lea rcx, [rbp+0B50h+var_460]
/*1403d8ad5*/  lea rdx, [rbp+0B50h+var_160]
/*1403d8adc*/  call sub_14037B970
/*1403d8ae1*/  nop
/*1403d8ae2*/  mov rcx, qword ptr [rbp+0B50h+var_460+8]
/*1403d8ae9*/  mov rdx, qword ptr [rbp+0B50h+var_450]
/*1403d8af0*/  mov [rbp+0B50h+var_78], rcx
/*1403d8af7*/  call sub_1403DB1E0
/*1403d8afc*/  mov qword ptr [rbp+0B50h+var_668], rax
/*1403d8b03*/  mov qword ptr [rbp+0B50h+var_668+8], rdx
/*1403d8b0a*/  lea rax, [rbp+0B50h+var_668]
/*1403d8b11*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d8b18*/  lea rax, sub_14041F680
/*1403d8b1f*/  mov qword ptr [rbp+0B50h+var_650+8], rax
loc_1403D8B26: /*1403d8b26*/ lea rdx, unk_141749922
/*1403d8b2d*/  lea rcx, [rbp+0B50h+var_210]
/*1403d8b34*/  lea r8, [rbp+0B50h+var_650]
/*1403d8b3b*/  call sub_14149C0F0
/*1403d8b40*/  nop
/*1403d8b41*/  mov rdx, qword ptr [rbp+0B50h+var_460]
/*1403d8b48*/  test rdx, rdx
/*1403d8b4b*/  jz short loc_1403D8B5F
/*1403d8b4d*/  mov r8d, 1
/*1403d8b53*/  mov rcx, [rbp+0B50h+var_78]
/*1403d8b5a*/  call sub_140001660
loc_1403D8B5F: /*1403d8b5f*/ mov [rbp+0B50h+var_64], 1
/*1403d8b66*/  mov [rbp+0B50h+var_65], 1
loc_1403D8B6D: /*1403d8b6d*/ lea rdx, aLaunchFailed; "launch_failed"
/*1403d8b74*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8b7b*/  lea r9, [rbp+0B50h+var_210]
/*1403d8b82*/  mov r8d, 0Dh
/*1403d8b88*/  call sub_140343D80
/*1403d8b8d*/  nop
/*1403d8b8e*/  mov [rbp+0B50h+var_64], 0
/*1403d8b95*/  mov [rbp+0B50h+var_65], 1
/*1403d8b9c*/  mov rcx, [rbp+0B50h+Address]
/*1403d8ba3*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d8baa*/  call sub_14000E270
/*1403d8baf*/  nop
loc_1403D8BB0: /*1403d8bb0*/ lea rbx, [rbp+0B50h+var_460]
/*1403d8bb7*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d8bbe*/  mov r8d, 1E8h
/*1403d8bc4*/  mov rcx, rbx
/*1403d8bc7*/  call sub_141684120
/*1403d8bcc*/  mov [rbp+0B50h+var_64], 0
/*1403d8bd3*/  mov [rbp+0B50h+var_65], 0
loc_1403D8BDA: /*1403d8bda*/ lea rax, aCommittedLaunc; "committed_launch_failed"
/*1403d8be1*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8be6*/  mov [rsp+0BD0h+var_BA8], 17h
/*1403d8bef*/  lea rcx, [rbp+0B50h+var_650]
/*1403d8bf6*/  lea r8, [rbp+0B50h+var_D0]
/*1403d8bfd*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d8c04*/  mov r9, rbx
/*1403d8c07*/  call finalize_committed_switch
/*1403d8c0c*/  nop
loc_1403D8C0D: /*1403d8c0d*/ lea rdx, [rbp+0B50h+var_650]
/*1403d8c14*/  mov r8d, 1E8h
/*1403d8c1a*/  mov rcx, rsi
/*1403d8c1d*/  call sub_141684120
/*1403d8c22*/  mov [rbp+0B50h+var_59], 0
/*1403d8c29*/  mov [rbp+0B50h+var_5A], 0
/*1403d8c30*/  mov [rbp+0B50h+var_5B], 0
loc_1403D8C37: /*1403d8c37*/ lea rcx, [rbp+0B50h+var_160]
/*1403d8c3e*/  call sub_14034ED40
/*1403d8c43*/  nop
/*1403d8c44*/  jmp loc_1403D7322
loc_1403D8C49: /*1403d8c49*/ mov [rbp+0B50h+var_59], 0
/*1403d8c50*/  mov [rbp+0B50h+var_5A], 1
/*1403d8c57*/  mov [rbp+0B50h+var_5B], 1
/*1403d8c5e*/  mov [rsp+0BD0h+var_BB0], 9
/*1403d8c67*/  lea rdx, aLaunchReady; "launch_ready"
/*1403d8c6e*/  lea r9, unk_1417499B6
/*1403d8c75*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8c7c*/  mov r8d, 0Ch
/*1403d8c82*/  call sub_140343ED0
/*1403d8c87*/  nop
/*1403d8c88*/  mov r8, [rbp+0B50h+var_8D0]
/*1403d8c8f*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d8c96*/  mov [rbp+0B50h+var_59], 0
/*1403d8c9d*/  mov [rbp+0B50h+var_5A], 1
/*1403d8ca4*/  mov [rbp+0B50h+var_5B], 1
/*1403d8cab*/  lea rcx, [rbp+0B50h+var_F0]
/*1403d8cb2*/  mov rdx, rbx
/*1403d8cb5*/  call sub_1403EC3A0
/*1403d8cba*/  nop
/*1403d8cbb*/  cmp qword ptr [rbp+0B50h+var_F0], 0FFFFFFFFFFFFFFFFh
/*1403d8cc3*/  jz loc_1403D8EF4
/*1403d8cc9*/  mov rax, [rbp+0B50h+var_E0]
/*1403d8cd0*/  mov qword ptr [rbp+0B50h+var_200], rax
/*1403d8cd7*/  movups xmm0, [rbp+0B50h+var_F0]
/*1403d8cde*/  movaps [rbp+0B50h+var_210], xmm0
/*1403d8ce5*/  mov [rbp+0B50h+var_62], 1
loc_1403D8CEC: /*1403d8cec*/ mov [rsp+0BD0h+var_BB0], 1Eh
/*1403d8cf5*/  lea rdx, aLiveVerifyFail; "live_verify_failed"
/*1403d8cfc*/  lea r9, unk_141749AA5
/*1403d8d03*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8d0a*/  mov r8d, 12h
/*1403d8d10*/  call sub_140343ED0
/*1403d8d15*/  nop
/*1403d8d16*/  mov [rbp+0B50h+var_62], 1
/*1403d8d1d*/  mov byte ptr [rsp+0BD0h+var_BB0], 0
/*1403d8d22*/  lea rcx, [rbp+0B50h+var_650]
/*1403d8d29*/  mov edx, 5
/*1403d8d2e*/  xor r8d, r8d
/*1403d8d31*/  xor r9d, r9d
/*1403d8d34*/  call acquire_with_policy
/*1403d8d39*/  nop
/*1403d8d3a*/  cmp dword ptr [rbp+0B50h+var_650], 0FFFFFFFFh
/*1403d8d41*/  jz loc_1403D903B
/*1403d8d47*/  movups xmm0, [rbp+0B50h+var_600]
/*1403d8d4e*/  movaps [rbp+0B50h+var_410], xmm0
/*1403d8d55*/  movups xmm0, [rbp+0B50h+var_610]
/*1403d8d5c*/  movaps [rbp+0B50h+var_420], xmm0
/*1403d8d63*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d8d6a*/  movups xmm1, [rbp+0B50h+var_640]
/*1403d8d71*/  movups xmm2, [rbp+0B50h+var_630]
/*1403d8d78*/  movups xmm3, [rbp+0B50h+var_620]
/*1403d8d7f*/  movaps [rbp+0B50h+var_430], xmm3
/*1403d8d86*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d8d8d*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d8d94*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d8d9b*/  lea rax, [rbp+0B50h+var_210]
/*1403d8da2*/  mov qword ptr [rbp+0B50h+var_160], rax
/*1403d8da9*/  lea rax, sub_1400015F0
/*1403d8db0*/  mov qword ptr [rbp+0B50h+var_160+8], rax
/*1403d8db7*/  mov qword ptr [rbp+0B50h+var_150], r14
/*1403d8dbe*/  lea rax, sub_140B036A0
/*1403d8dc5*/  mov qword ptr [rbp+0B50h+var_150+8], rax
/*1403d8dcc*/  mov [rbp+0B50h+var_7B], 1
loc_1403D8DD3: /*1403d8dd3*/ lea rdx, unk_141749AE1
/*1403d8dda*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d8de1*/  lea r8, [rbp+0B50h+var_160]
/*1403d8de8*/  call sub_14149C0F0
/*1403d8ded*/  nop
/*1403d8dee*/  mov rax, qword ptr [rbp+0B50h+var_1D0]
/*1403d8df5*/  mov [rbp+0B50h+var_78], rax
/*1403d8dfc*/  mov rax, qword ptr [rbp+0B50h+var_1D0+8]
/*1403d8e03*/  mov [rbp+0B50h+var_A8], rax
/*1403d8e0a*/  mov rdi, qword ptr [rbp+0B50h+var_1C0]
/*1403d8e11*/  mov [rbp+0B50h+var_7C], 1
/*1403d8e18*/  mov [rbp+0B50h+var_7D], 1
loc_1403D8E1F: /*1403d8e1f*/ mov [rsp+0BD0h+var_BB0], 21h ; '!'
/*1403d8e28*/  lea rdx, aFailed; "failed"
/*1403d8e2f*/  lea r9, unk_141749B28
/*1403d8e36*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8e3d*/  mov r8d, 6
/*1403d8e43*/  call sub_140343ED0
/*1403d8e48*/  nop
/*1403d8e49*/  mov [rbp+0B50h+var_7C], 1
/*1403d8e50*/  mov [rbp+0B50h+var_7D], 0
/*1403d8e57*/  mov rcx, [rbp+0B50h+Address]
/*1403d8e5e*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d8e65*/  call sub_14000E270
/*1403d8e6a*/  nop
/*1403d8e6b*/  mov rax, [rbp+0B50h+var_78]
/*1403d8e72*/  mov qword ptr [rbp+0B50h+var_160], rax
/*1403d8e79*/  mov rax, [rbp+0B50h+var_A8]
/*1403d8e80*/  mov qword ptr [rbp+0B50h+var_160+8], rax
/*1403d8e87*/  mov qword ptr [rbp+0B50h+var_150], rdi
/*1403d8e8e*/  mov [rbp+0B50h+var_7C], 0
/*1403d8e95*/  mov [rbp+0B50h+var_7D], 0
/*1403d8e9c*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d8ea3*/  lea r8, [rbp+0B50h+var_D0]
/*1403d8eaa*/  lea r9, [rbp+0B50h+var_160]
/*1403d8eb1*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d8eb8*/  call sub_1403E4470
/*1403d8ebd*/  nop
/*1403d8ebe*/  mov rax, qword ptr [rbp+0B50h+var_1C0]
/*1403d8ec5*/  mov [rsi+18h], rax
/*1403d8ec9*/  movups xmm0, [rbp+0B50h+var_1D0]
/*1403d8ed0*/  movups xmmword ptr [rsi+8], xmm0
/*1403d8ed4*/  mov qword ptr [rsi], 2
/*1403d8edb*/  mov [rbp+0B50h+var_62], 0
loc_1403D8EE2: /*1403d8ee2*/ lea rcx, [rbp+0B50h+var_460]
/*1403d8ee9*/  call sub_14034ED40
/*1403d8eee*/  nop
/*1403d8eef*/  jmp loc_1403D915C
loc_1403D8EF4: /*1403d8ef4*/ mov [rbp+0B50h+var_59], 0
/*1403d8efb*/  mov [rbp+0B50h+var_5A], 1
/*1403d8f02*/  mov [rbp+0B50h+var_5B], 1
loc_1403D8F09: /*1403d8f09*/ mov [rsp+0BD0h+var_BB0], 9
/*1403d8f12*/  lea rdx, aLiveVerified; "live_verified"
/*1403d8f19*/  lea r9, unk_1417499B6
/*1403d8f20*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d8f27*/  mov r8d, 0Dh
/*1403d8f2d*/  call sub_140343ED0
/*1403d8f32*/  nop
/*1403d8f33*/  lea rcx, [rbp+0B50h+var_870]
/*1403d8f3a*/  mov [rbp+0B50h+var_59], 0
/*1403d8f41*/  mov [rbp+0B50h+var_5A], 1
/*1403d8f48*/  mov [rbp+0B50h+var_5B], 1
/*1403d8f4f*/  call sub_1402AFB50
/*1403d8f54*/  nop
/*1403d8f55*/  mov [rbp+0B50h+var_59], 0
/*1403d8f5c*/  mov [rbp+0B50h+var_5A], 0
/*1403d8f63*/  mov [rbp+0B50h+var_5B], 1
/*1403d8f6a*/  mov rcx, [rbp+0B50h+Address]
/*1403d8f71*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d8f78*/  call sub_14000E270
/*1403d8f7d*/  nop
loc_1403D8F7E: /*1403d8f7e*/ lea rbx, [rbp+0B50h+var_460]
/*1403d8f85*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d8f8c*/  mov r8d, 1E8h
/*1403d8f92*/  mov rcx, rbx
/*1403d8f95*/  call sub_141684120
/*1403d8f9a*/  mov [rbp+0B50h+var_59], 0
/*1403d8fa1*/  mov [rbp+0B50h+var_5A], 0
/*1403d8fa8*/  mov [rbp+0B50h+var_5B], 0
loc_1403D8FAF: /*1403d8faf*/ lea rax, aSuccess; "success"
/*1403d8fb6*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d8fbb*/  mov [rsp+0BD0h+var_BA8], 7
/*1403d8fc4*/  lea rcx, [rbp+0B50h+var_650]
/*1403d8fcb*/  lea r8, [rbp+0B50h+var_D0]
/*1403d8fd2*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d8fd9*/  mov r9, rbx
/*1403d8fdc*/  call finalize_committed_switch
/*1403d8fe1*/  nop
loc_1403D8FE2: /*1403d8fe2*/ lea rdx, [rbp+0B50h+var_650]
/*1403d8fe9*/  mov r8d, 1E8h
/*1403d8fef*/  mov rcx, rsi
/*1403d8ff2*/  call sub_141684120
/*1403d8ff7*/  lea rcx, [rbp+0B50h+var_B98]
/*1403d8ffb*/  call sub_14034EE60
/*1403d9000*/  mov [rbp+0B50h+var_63], 0
loc_1403D9007: /*1403d9007*/ lea rcx, [rbp+0B50h+hObject]
/*1403d900e*/  call sub_14034E7D0
/*1403d9013*/  nop
/*1403d9014*/  mov rdx, [rbp+0B50h+var_F8]
/*1403d901b*/  test rdx, rdx
/*1403d901e*/  jz loc_1403D6ACC
/*1403d9024*/  mov r8d, 1
/*1403d902a*/  mov rcx, [rbp+0B50h+var_B0]
/*1403d9031*/  call sub_140001660
/*1403d9036*/  jmp loc_1403D6ACC
loc_1403D903B: /*1403d903b*/ mov rax, qword ptr [rbp+0B50h+var_620+8]
/*1403d9042*/  mov qword ptr [rbp+0B50h+var_430], rax
/*1403d9049*/  movups xmm0, [rbp+0B50h+var_650+8]
/*1403d9050*/  movups xmm1, [rbp+0B50h+var_640+8]
/*1403d9057*/  movups xmm2, [rbp+0B50h+var_630+8]
/*1403d905e*/  movaps [rbp+0B50h+var_440], xmm2
/*1403d9065*/  movaps [rbp+0B50h+var_450], xmm1
/*1403d906c*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d9073*/  lea rax, [rbp+0B50h+var_210]
/*1403d907a*/  mov qword ptr [rbp+0B50h+var_650], rax
/*1403d9081*/  lea rax, sub_1400015F0
/*1403d9088*/  mov qword ptr [rbp+0B50h+var_650+8], rax
/*1403d908f*/  mov [rbp+0B50h+var_89], 1
loc_1403D9096: /*1403d9096*/ lea rdx, unk_141749AC3
/*1403d909d*/  lea rbx, [rbp+0B50h+var_160]
/*1403d90a4*/  lea r8, [rbp+0B50h+var_650]
/*1403d90ab*/  mov rcx, rbx
/*1403d90ae*/  call sub_14149C0F0
/*1403d90b3*/  nop
/*1403d90b4*/  mov [rbp+0B50h+var_89], 0
/*1403d90bb*/  mov [rsp+0BD0h+var_BB0], rbx
/*1403d90c0*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d90c7*/  lea rdx, [rbp+0B50h+var_D0]
/*1403d90ce*/  lea r8, [rbp+0B50h+var_B98]
/*1403d90d2*/  lea r9, [rbp+0B50h+var_460]
/*1403d90d9*/  call sub_1403DB4A0
/*1403d90de*/  nop
/*1403d90df*/  mov [rbp+0B50h+var_8A], 1
loc_1403D90E6: /*1403d90e6*/ mov rcx, [rbp+0B50h+Address]
/*1403d90ed*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d90f4*/  call sub_14000E270
/*1403d90f9*/  nop
/*1403d90fa*/  mov rax, qword ptr [rbp+0B50h+var_1C0]
/*1403d9101*/  mov qword ptr [rbp+0B50h+var_450], rax
/*1403d9108*/  movups xmm0, [rbp+0B50h+var_1D0]
/*1403d910f*/  movaps [rbp+0B50h+var_460], xmm0
/*1403d9116*/  mov [rbp+0B50h+var_8A], 0
/*1403d911d*/  lea rcx, [rbp+0B50h+var_650]
/*1403d9124*/  lea r8, [rbp+0B50h+var_D0]
/*1403d912b*/  lea r9, [rbp+0B50h+var_460]
/*1403d9132*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d9139*/  call sub_1403E4470
/*1403d913e*/  nop
/*1403d913f*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d9146*/  mov [rsi+18h], rax
/*1403d914a*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d9151*/  movups xmmword ptr [rsi+8], xmm0
/*1403d9155*/  mov qword ptr [rsi], 2
loc_1403D915C: /*1403d915c*/ mov rdx, qword ptr [rbp+0B50h+var_210]
/*1403d9163*/  test rdx, rdx
/*1403d9166*/  jz loc_1403D7740
/*1403d916c*/  mov rcx, qword ptr [rbp+0B50h+var_210+8]
loc_1403D9173: /*1403d9173*/ mov r8d, 1
/*1403d9179*/  call sub_140001660
/*1403d917e*/  jmp loc_1403D7740
loc_1403D9183: /*1403d9183*/ mov qword ptr [rbp+0B50h+var_460], r13
/*1403d918a*/  lea rax, sub_140B036A0
/*1403d9191*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d9198*/  mov [rbp+0B50h+var_6A], 1
/*1403d919f*/  mov [rbp+0B50h+var_6B], 1
loc_1403D91A6: /*1403d91a6*/ lea rdx, unk_141749C5A
/*1403d91ad*/  lea rcx, [rbp+0B50h+var_F0]
/*1403d91b4*/  lea r8, [rbp+0B50h+var_460]
/*1403d91bb*/  call sub_14149C0F0
/*1403d91c0*/  nop
/*1403d91c1*/  lea rcx, [rbp+0B50h+var_870]
/*1403d91c8*/  mov [rbp+0B50h+var_6A], 1
/*1403d91cf*/  mov [rbp+0B50h+var_6B], 1
/*1403d91d6*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403d91dd*/  lea r9, [rbp+0B50h+var_F0]
/*1403d91e4*/  mov r8d, 17h
/*1403d91ea*/  call sub_1403DAFB0
/*1403d91ef*/  nop
/*1403d91f0*/  mov [rbp+0B50h+var_6A], 0
/*1403d91f7*/  mov [rbp+0B50h+var_6B], 1
/*1403d91fe*/  mov rcx, [rbp+0B50h+Address]
/*1403d9205*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d920c*/  call sub_14000E270
/*1403d9211*/  nop
loc_1403D9212: /*1403d9212*/ lea rbx, [rbp+0B50h+var_460]
/*1403d9219*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d9220*/  mov r8d, 1E8h
/*1403d9226*/  mov rcx, rbx
/*1403d9229*/  call sub_141684120
/*1403d922e*/  mov [rbp+0B50h+var_6A], 0
/*1403d9235*/  mov [rbp+0B50h+var_6B], 0
loc_1403D923C: /*1403d923c*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403d9243*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d9248*/  mov [rsp+0BD0h+var_BA8], 1Ah
/*1403d9251*/  lea rcx, [rbp+0B50h+var_650]
/*1403d9258*/  lea r8, [rbp+0B50h+var_D0]
/*1403d925f*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d9266*/  mov r9, rbx
/*1403d9269*/  call finalize_committed_switch
/*1403d926e*/  nop
loc_1403D926F: /*1403d926f*/ lea rdx, [rbp+0B50h+var_650]
/*1403d9276*/  mov r8d, 1E8h
/*1403d927c*/  mov rcx, rsi
/*1403d927f*/  call sub_141684120
/*1403d9284*/  mov [rbp+0B50h+var_5C], 0
/*1403d928b*/  mov [rbp+0B50h+var_5D], 0
/*1403d9292*/  mov [rbp+0B50h+var_5E], 0
loc_1403D9299: /*1403d9299*/ lea rcx, [rbp+0B50h+var_160]
/*1403d92a0*/  call sub_14034ED40
/*1403d92a5*/  nop
/*1403d92a6*/  jmp loc_1403D7322
loc_1403D92AB: /*1403d92ab*/ mov r8, [rbp+0B50h+var_8D0]
/*1403d92b2*/  mov r9, [rbp+0B50h+var_8C8]
/*1403d92b9*/  mov [rbp+0B50h+var_5C], 0
/*1403d92c0*/  mov [rbp+0B50h+var_5D], 1
/*1403d92c7*/  mov [rbp+0B50h+var_5E], 1
/*1403d92ce*/  lea rcx, [rbp+0B50h+var_1D0]
/*1403d92d5*/  mov rdx, rbx
/*1403d92d8*/  call sub_1403DEE30
/*1403d92dd*/  nop
/*1403d92de*/  cmp qword ptr [rbp+0B50h+var_1D0], 0FFFFFFFFFFFFFFFFh
/*1403d92e6*/  jz loc_1403D93ED
/*1403d92ec*/  mov rax, qword ptr [rbp+0B50h+var_1C0]
/*1403d92f3*/  mov qword ptr [rbp+0B50h+var_150], rax
/*1403d92fa*/  movups xmm0, [rbp+0B50h+var_1D0]
/*1403d9301*/  movaps [rbp+0B50h+var_160], xmm0
/*1403d9308*/  mov [rbp+0B50h+var_79], 1
loc_1403D930F: /*1403d930f*/ mov [rsp+0BD0h+var_BB0], 20h ; ' '
/*1403d9318*/  lea rdx, aFailed; "failed"
/*1403d931f*/  lea r9, unk_141749B5D
/*1403d9326*/  lea rcx, [rbp+0B50h+var_D0]
/*1403d932d*/  mov r8d, 6
/*1403d9333*/  call sub_140343ED0
/*1403d9338*/  nop
/*1403d9339*/  mov [rbp+0B50h+var_79], 0
/*1403d9340*/  mov rcx, [rbp+0B50h+Address]
/*1403d9347*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d934e*/  call sub_14000E270
/*1403d9353*/  nop
/*1403d9354*/  mov qword ptr [rbp+0B50h+var_650], r13
/*1403d935b*/  lea rax, sub_1400015F0
/*1403d9362*/  mov qword ptr [rbp+0B50h+var_650+8], rax
/*1403d9369*/  mov [rbp+0B50h+var_79], 0
/*1403d9370*/  lea rdx, unk_141749B7D
/*1403d9377*/  lea rcx, [rbp+0B50h+var_460]
/*1403d937e*/  lea r8, [rbp+0B50h+var_650]
/*1403d9385*/  call sub_14149C0F0
/*1403d938a*/  nop
/*1403d938b*/  mov [rbp+0B50h+var_79], 0
/*1403d9392*/  lea rcx, [rbp+0B50h+var_650]
/*1403d9399*/  lea r8, [rbp+0B50h+var_D0]
/*1403d93a0*/  lea r9, [rbp+0B50h+var_460]
/*1403d93a7*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d93ae*/  call sub_1403E4470
/*1403d93b3*/  nop
/*1403d93b4*/  mov rax, qword ptr [rbp+0B50h+var_640]
/*1403d93bb*/  mov [rsi+18h], rax
/*1403d93bf*/  movups xmm0, [rbp+0B50h+var_650]
/*1403d93c6*/  movups xmmword ptr [rsi+8], xmm0
/*1403d93ca*/  mov qword ptr [rsi], 2
/*1403d93d1*/  mov rdx, qword ptr [rbp+0B50h+var_160]
/*1403d93d8*/  test rdx, rdx
/*1403d93db*/  jz loc_1403D7740
/*1403d93e1*/  mov rcx, qword ptr [rbp+0B50h+var_160+8]
/*1403d93e8*/  jmp loc_1403D9173
loc_1403D93ED: /*1403d93ed*/ call nullsub_1
/*1403d93f2*/  mov ecx, 67h ; 'g'
/*1403d93f7*/  mov edx, 1
/*1403d93fc*/  call sub_140001650
/*1403d9401*/  test rax, rax
/*1403d9404*/  jz loc_1403D9553
/*1403d940a*/  movups xmm0, cs:xmmword_141749BED
/*1403d9411*/  movups xmmword ptr [rax+50h], xmm0
/*1403d9415*/  movups xmm0, cs:xmmword_141749BDD
/*1403d941c*/  movups xmmword ptr [rax+40h], xmm0
/*1403d9420*/  movups xmm0, cs:xmmword_141749BCD
/*1403d9427*/  movups xmmword ptr [rax+30h], xmm0
/*1403d942b*/  movups xmm0, cs:xmmword_141749BBD
/*1403d9432*/  movups xmmword ptr [rax+20h], xmm0
/*1403d9436*/  movups xmm0, cs:xmmword_141749BAD
/*1403d943d*/  movups xmmword ptr [rax+10h], xmm0
/*1403d9441*/  movups xmm0, cs:xmmword_141749B9D
/*1403d9448*/  movups xmmword ptr [rax], xmm0
/*1403d944b*/  mov rcx, 8280E380BCE59389h
/*1403d9455*/  mov [rax+5Fh], rcx
/*1403d9459*/  mov qword ptr [rbp+0B50h+var_460], 67h ; 'g'
/*1403d9464*/  mov qword ptr [rbp+0B50h+var_460+8], rax
/*1403d946b*/  mov qword ptr [rbp+0B50h+var_450], 67h ; 'g'
/*1403d9476*/  lea rcx, [rbp+0B50h+var_870]
/*1403d947d*/  mov [rbp+0B50h+var_5C], 0
/*1403d9484*/  mov [rbp+0B50h+var_5D], 1
/*1403d948b*/  mov [rbp+0B50h+var_5E], 1
loc_1403D9492: /*1403d9492*/ lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403d9499*/  lea r9, [rbp+0B50h+var_460]
/*1403d94a0*/  mov r8d, 17h
/*1403d94a6*/  call sub_1403DAFB0
/*1403d94ab*/  nop
/*1403d94ac*/  mov [rbp+0B50h+var_5C], 0
/*1403d94b3*/  mov [rbp+0B50h+var_5D], 0
/*1403d94ba*/  mov [rbp+0B50h+var_5E], 1
/*1403d94c1*/  mov rcx, [rbp+0B50h+Address]
/*1403d94c8*/  movzx edx, [rbp+0B50h+var_5F]
/*1403d94cf*/  call sub_14000E270
/*1403d94d4*/  nop
loc_1403D94D5: /*1403d94d5*/ lea rbx, [rbp+0B50h+var_460]
/*1403d94dc*/  lea rdx, [rbp+0B50h+var_A38]
/*1403d94e3*/  mov r8d, 1E8h
/*1403d94e9*/  mov rcx, rbx
/*1403d94ec*/  call sub_141684120
/*1403d94f1*/  mov [rbp+0B50h+var_5C], 0
/*1403d94f8*/  mov [rbp+0B50h+var_5D], 0
/*1403d94ff*/  mov [rbp+0B50h+var_5E], 0
loc_1403D9506: /*1403d9506*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403d950d*/  mov [rsp+0BD0h+var_BB0], rax
/*1403d9512*/  mov [rsp+0BD0h+var_BA8], 1Ah
/*1403d951b*/  lea rcx, [rbp+0B50h+var_650]
/*1403d9522*/  lea r8, [rbp+0B50h+var_D0]
/*1403d9529*/  mov rdx, [rbp+0B50h+var_A0]
/*1403d9530*/  mov r9, rbx
/*1403d9533*/  call finalize_committed_switch
/*1403d9538*/  nop
loc_1403D9539: /*1403d9539*/ lea rdx, [rbp+0B50h+var_650]
/*1403d9540*/  mov r8d, 1E8h
/*1403d9546*/  mov rcx, rsi
/*1403d9549*/  call sub_141684120
/*1403d954e*/  jmp loc_1403D7322
loc_1403D9553: /*1403d9553*/ mov [rbp+0B50h+var_5C], 0
/*1403d955a*/  mov [rbp+0B50h+var_5D], 1
/*1403d9561*/  mov [rbp+0B50h+var_5E], 1
loc_1403D9568: /*1403d9568*/ mov ecx, 1
/*1403d956d*/  mov edx, 67h ; 'g'
/*1403d9572*/  call sub_1416C2D4B
loc_1403D9578: /*1403d9578*/ ud2
