// win 1.2.1 | module src/core/relay/codex_mutation.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=2329 fetched=2329 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
__int64 __fastcall sub_1403E4720(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int128 v13; // xmm6
  __int8 v14; // bl
  volatile void *v15; // rcx
  volatile void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // r15
  __int64 *v20; // r13
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // kr00_16
  char v25; // r14
  PVOID v26; // rcx
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r15
  PVOID v39; // rcx
  char v40; // al
  __int128 v41; // kr10_16
  __int64 v42; // r14
  __int64 *v43; // r15
  volatile void *v44; // rcx
  _BYTE *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _BYTE *v48; // r13
  __int64 *v49; // r15... [58256 chars total]

// ---- full disassembly reconstruction (2329/2329 instructions) ----
sub_1403E4720: /*1403e4720*/ push rbp
/*1403e4721*/  push r15
/*1403e4723*/  push r14
/*1403e4725*/  push r13
/*1403e4727*/  push r12
/*1403e4729*/  push rsi
/*1403e472a*/  push rdi
/*1403e472b*/  push rbx
/*1403e472c*/  sub rsp, 0BC8h
/*1403e4733*/  lea rbp, [rsp+80h]
/*1403e473b*/  movaps [rbp+0B80h+var_50], xmm6
/*1403e4742*/  mov [rbp+0B80h+var_58], 0FFFFFFFFFFFFFFFEh
/*1403e474d*/  mov r14, r9
/*1403e4750*/  mov [rbp+0B80h+var_78], r8
/*1403e4757*/  mov r15, rdx
/*1403e475a*/  mov rsi, rcx
/*1403e475d*/  lea rax, aManual; "manual"
/*1403e4764*/  mov qword ptr [rbp+0B80h+var_860], rax
/*1403e476b*/  mov qword ptr [rbp+0B80h+var_860+8], 6
/*1403e4776*/  lea rbx, [rbp+0B80h+var_E0]
/*1403e477d*/  mov rcx, rbx
/*1403e4780*/  call sub_141356270
/*1403e4785*/  call sub_141471910
/*1403e478a*/  mov [rbp+0B80h+var_D0], rax
/*1403e4791*/  mov [rbp+0B80h+var_C8], edx
/*1403e4797*/  lea rdi, [rbp+0B80h+var_860]
/*1403e479e*/  mov qword ptr [rbp+0B80h+var_620], rdi
/*1403e47a5*/  lea rax, sub_14041F680
/*1403e47ac*/  mov qword ptr [rbp+0B80h+var_620+8], rax
/*1403e47b3*/  lea rdx, unk_14174FFDE
/*1403e47ba*/  lea r13, [rbp+0B80h+var_410]
/*1403e47c1*/  lea r12, [rbp+0B80h+var_620]
/*1403e47c8*/  mov rcx, r13
/*1403e47cb*/  mov r8, r12
/*1403e47ce*/  call sub_14149C0F0
/*1403e47d3*/  lea rdx, aStarted_0; "started"
/*1403e47da*/  mov r8d, 7
/*1403e47e0*/  mov rcx, rbx
/*1403e47e3*/  mov r9, r13
/*1403e47e6*/  call sub_140343D80
/*1403e47eb*/  mov rbx, [r15+88h]
/*1403e47f2*/  mov rcx, [rbx+1398h]
/*1403e47f9*/  add rcx, 10h; Address
/*1403e47fd*/  call sub_1400048C0
/*1403e4802*/  test rax, rax
/*1403e4805*/  jz loc_1403E4AE2
/*1403e480b*/  lea r8, aSwitchingTheAc; "switching the active Codex account and "...
/*1403e4812*/  mov r9d, 39h ; '9'
/*1403e4818*/  mov rcx, r12
/*1403e481b*/  mov rdx, rax
/*1403e481e*/  call lock
/*1403e4823*/  cmp dword ptr [rbp+0B80h+var_620], 0FFFFFFFFh
/*1403e482a*/  jz loc_1403E4927
/*1403e4830*/  movups xmm0, [rbp+0B80h+var_5D0]
/*1403e4837*/  movaps [rbp+0B80h+var_3C0], xmm0
/*1403e483e*/  movups xmm0, [rbp+0B80h+var_5E0]
/*1403e4845*/  movaps [rbp+0B80h+var_3D0], xmm0
/*1403e484c*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e4853*/  movups xmm1, [rbp+0B80h+var_610]
/*1403e485a*/  movups xmm2, [rbp+0B80h+var_600]
/*1403e4861*/  movups xmm3, [rbp+0B80h+var_5F0]
/*1403e4868*/  movaps [rbp+0B80h+var_3E0], xmm3
/*1403e486f*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e4876*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e487d*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e4884*/  mov qword ptr [rbp+0B80h+var_A50], 0
/*1403e488f*/  mov qword ptr [rbp+0B80h+var_A50+8], 1
/*1403e489a*/  mov qword ptr [rbp+0B80h+var_A40], 0
/*1403e48a5*/  mov qword ptr [rbp+0B80h+var_850], 60000020h
/*1403e48b0*/  lea rax, [rbp+0B80h+var_A50]
/*1403e48b7*/  mov qword ptr [rbp+0B80h+var_860], rax
/*1403e48be*/  lea rax, off_141754110
/*1403e48c5*/  mov qword ptr [rbp+0B80h+var_860+8], rax
loc_1403E48CC: /*1403e48cc*/ lea rcx, [rbp+0B80h+var_410]
/*1403e48d3*/  lea rdx, [rbp+0B80h+var_860]
/*1403e48da*/  call sub_140B036A0
/*1403e48df*/  nop
loc_1403E48E0: /*1403e48e0*/ test al, al
/*1403e48e2*/  jnz loc_1403E4B2C
/*1403e48e8*/  movups xmm6, [rbp+0B80h+var_A50]
/*1403e48ef*/  movzx ebx, byte ptr [rbp+0B80h+var_A40]
/*1403e48f6*/  mov eax, dword ptr [rbp+0B80h+var_A40+1]
/*1403e48fc*/  mov [rsi+19h], eax
/*1403e48ff*/  mov eax, dword ptr [rbp+0B80h+var_A40+4]
/*1403e4905*/  mov [rsi+1Ch], eax
/*1403e4908*/  lea rcx, [rbp+0B80h+var_620]
/*1403e490f*/  call sub_14034ED40
/*1403e4914*/  movups xmmword ptr [rsi+8], xmm6
/*1403e4918*/  mov [rsi+18h], bl
/*1403e491b*/  mov qword ptr [rsi], 2
/*1403e4922*/  jmp loc_1403E4AC4
loc_1403E4927: /*1403e4927*/ mov [rbp+0B80h+var_B0], r15
/*1403e492e*/  mov rax, qword ptr [rbp+0B80h+var_620+8]
/*1403e4935*/  mov [rbp+0B80h+Address], rax
/*1403e493c*/  movzx eax, byte ptr [rbp+0B80h+var_610]
/*1403e4943*/  mov [rbp+0B80h+var_60], al
/*1403e4949*/  mov rcx, [rbx+1398h]
/*1403e4950*/  add rcx, 10h; Address
/*1403e4954*/  mov [rbp+0B80h+var_61], 1
loc_1403E495B: /*1403e495b*/ call sub_140003640
/*1403e4960*/  nop
/*1403e4961*/  test rax, rax
/*1403e4964*/  jz loc_1403E4B5D
/*1403e496a*/  mov r15, rax
/*1403e496d*/  mov cl, 1
/*1403e496f*/  xor eax, eax
/*1403e4971*/  lock cmpxchg [r15], cl
/*1403e4976*/  jnz loc_1403E4BB2
loc_1403E497C: /*1403e497c*/ mov [rbp+0B80h+var_C0], r15
/*1403e4983*/  mov r13, cs:off_141EC90B8
/*1403e498a*/  mov rax, [r13+0]
/*1403e498e*/  shl rax, 1
/*1403e4991*/  test rax, rax
/*1403e4994*/  jnz loc_1403E4BC7
/*1403e499a*/  mov dword ptr [rbp+0B80h+var_98], 0
/*1403e49a4*/  mov rcx, [rbp+0B80h+var_C0]
/*1403e49ab*/  movzx eax, byte ptr [rcx+1]
/*1403e49af*/  test al, al
/*1403e49b1*/  jz loc_1403E4BEF
loc_1403E49B7: /*1403e49b7*/ mov qword ptr [rbp+0B80h+var_620], 0
/*1403e49c2*/  mov qword ptr [rbp+0B80h+var_620+8], 1
/*1403e49cd*/  mov qword ptr [rbp+0B80h+var_610], 0
/*1403e49d8*/  mov qword ptr [rbp+0B80h+var_400], 60000020h
/*1403e49e3*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e49ea*/  lea rax, off_141754110
/*1403e49f1*/  mov qword ptr [rbp+0B80h+var_410+8], rax
loc_1403E49F8: /*1403e49f8*/ lea rcx, aPoisonedLockAn; "poisoned lock: another task failed insi"...
/*1403e49ff*/  lea r8, [rbp+0B80h+var_410]
/*1403e4a06*/  mov edx, 29h ; ')'
/*1403e4a0b*/  call sub_1414ACAB0
/*1403e4a10*/  nop
loc_1403E4A11: /*1403e4a11*/ test al, al
/*1403e4a13*/  jnz loc_1403E4F5D
/*1403e4a19*/  mov rdi, qword ptr [rbp+0B80h+var_620]
/*1403e4a20*/  mov rbx, qword ptr [rbp+0B80h+var_620+8]
/*1403e4a27*/  movzx r14d, byte ptr [rbp+0B80h+var_610]
/*1403e4a2f*/  mov eax, dword ptr [rbp+0B80h+var_610+1]
/*1403e4a35*/  mov dword ptr [rbp+0B80h+var_860], eax
/*1403e4a3b*/  mov eax, dword ptr [rbp+0B80h+var_610+4]
/*1403e4a41*/  mov dword ptr [rbp+0B80h+var_860+3], eax
/*1403e4a47*/  cmp byte ptr [rbp+0B80h+var_98], 0
/*1403e4a4e*/  jnz short loc_1403E4A60
/*1403e4a50*/  mov rax, [r13+0]
/*1403e4a54*/  shl rax, 1
/*1403e4a57*/  test rax, rax
/*1403e4a5a*/  jnz loc_1403E4FA0
loc_1403E4A60: /*1403e4a60*/ xor eax, eax
/*1403e4a62*/  mov rcx, [rbp+0B80h+var_C0]; Address
/*1403e4a69*/  xchg al, [rcx]
/*1403e4a6b*/  cmp al, 2
/*1403e4a6d*/  jz loc_1403E4F8E
loc_1403E4A73: /*1403e4a73*/ mov eax, dword ptr [rbp+0B80h+var_860]
/*1403e4a79*/  mov ecx, dword ptr [rbp+0B80h+var_860+3]
/*1403e4a7f*/  mov [rsi+1Ch], ecx
/*1403e4a82*/  mov [rsi+19h], eax
/*1403e4a85*/  mov [rsi+8], rdi
/*1403e4a89*/  mov [rsi+10h], rbx
/*1403e4a8d*/  mov [rsi+18h], r14b
/*1403e4a91*/  mov qword ptr [rsi], 2
/*1403e4a98*/  cmp [rbp+0B80h+var_60], 0
/*1403e4a9f*/  jnz short loc_1403E4AB1
/*1403e4aa1*/  mov rax, [r13+0]
/*1403e4aa5*/  shl rax, 1
/*1403e4aa8*/  test rax, rax
/*1403e4aab*/  jnz loc_1403E586F
loc_1403E4AB1: /*1403e4ab1*/ xor eax, eax
/*1403e4ab3*/  mov rcx, [rbp+0B80h+Address]
/*1403e4aba*/  xchg al, [rcx]
/*1403e4abc*/  cmp al, 2
/*1403e4abe*/  jz loc_1403E4F4C
loc_1403E4AC4: /*1403e4ac4*/ mov rax, rsi
/*1403e4ac7*/  movaps xmm6, [rbp+0B80h+var_50]
/*1403e4ace*/  add rsp, 0BC8h
/*1403e4ad5*/  pop rbx
/*1403e4ad6*/  pop rdi
/*1403e4ad7*/  pop rsi
/*1403e4ad8*/  pop r12
/*1403e4ada*/  pop r13
/*1403e4adc*/  pop r14
/*1403e4ade*/  pop r15
/*1403e4ae0*/  pop rbp
/*1403e4ae1*/  retn
loc_1403E4AE2: /*1403e4ae2*/ lea rax, aCodexmateLibCo; "codexmate_lib::core::relay::codex_mutat"...
/*1403e4ae9*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e4af0*/  mov qword ptr [rbp+0B80h+var_620+8], 3Dh ; '='
/*1403e4afb*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e4b02*/  lea rax, sub_14041F680
/*1403e4b09*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e4b10*/  lea rcx, unk_1416C99C2
/*1403e4b17*/  lea r8, off_1416C9A50; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1403e4b1e*/  lea rdx, [rbp+0B80h+var_410]
/*1403e4b25*/  call sub_1416C32C0
/*1403e4b2a*/  ud2
loc_1403E4B2C: /*1403e4b2c*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403e4b33*/  mov [rsp+0C00h+var_BE0], rax
/*1403e4b38*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403e4b3f*/  lea r9, unk_14174DE40
/*1403e4b46*/  lea r8, [rbp+0B80h+var_79]
/*1403e4b4d*/  mov edx, 37h ; '7'
/*1403e4b52*/  call sub_1416C3060
/*1403e4b58*/  jmp loc_1403E7BF3
loc_1403E4B5D: /*1403e4b5d*/ lea rax, aStdSyncPoisonM; "std::sync::poison::mutex::Mutex<codexma"...
/*1403e4b64*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e4b6b*/  mov qword ptr [rbp+0B80h+var_620+8], 4Ch ; 'L'
/*1403e4b76*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e4b7d*/  lea rax, sub_14041F680
/*1403e4b84*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e4b8b*/  mov [rbp+0B80h+var_61], 1
loc_1403E4B92: /*1403e4b92*/ lea rcx, unk_1416C99C2
/*1403e4b99*/  lea r8, off_1416C9A50; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1403e4ba0*/  lea rdx, [rbp+0B80h+var_410]
/*1403e4ba7*/  call sub_1416C32C0
/*1403e4bad*/  jmp loc_1403E7BF3
loc_1403E4BB2: /*1403e4bb2*/ mov [rbp+0B80h+var_61], 1
/*1403e4bb9*/  mov rcx, r15; Address
/*1403e4bbc*/  call sub_1416C15B0
/*1403e4bc1*/  nop
/*1403e4bc2*/  jmp loc_1403E497C
loc_1403E4BC7: /*1403e4bc7*/ mov [rbp+0B80h+var_61], 1
/*1403e4bce*/  call sub_1416C2250
/*1403e4bd3*/  nop
/*1403e4bd4*/  xor al, 1
/*1403e4bd6*/  mov dword ptr [rbp+0B80h+var_98], eax
/*1403e4bdc*/  mov rcx, [rbp+0B80h+var_C0]
/*1403e4be3*/  movzx eax, byte ptr [rcx+1]
/*1403e4be7*/  test al, al
/*1403e4be9*/  jnz loc_1403E49B7
loc_1403E4BEF: /*1403e4bef*/ mov r8, [rcx+118h]
/*1403e4bf6*/  test r8, r8
/*1403e4bf9*/  jns short loc_1403E4C0F
/*1403e4bfb*/  xor r13d, r13d
loc_1403E4BFE: /*1403e4bfe*/ mov rcx, r13
/*1403e4c01*/  mov rdx, r8
/*1403e4c04*/  call sub_1416C2D4B
loc_1403E4C0A: /*1403e4c0a*/ jmp loc_1403E7BF3
loc_1403E4C0F: /*1403e4c0f*/ mov [rbp+0B80h+var_108], r8
/*1403e4c16*/  jz short loc_1403E4C66
/*1403e4c18*/  mov r12, [rcx+110h]
/*1403e4c1f*/  call nullsub_1
/*1403e4c24*/  mov r13d, 1
/*1403e4c2a*/  mov edx, 1
/*1403e4c2f*/  mov r15, [rbp+0B80h+var_108]
/*1403e4c36*/  mov rcx, r15
/*1403e4c39*/  call sub_140001650
/*1403e4c3e*/  mov r8, r15
/*1403e4c41*/  test rax, rax
/*1403e4c44*/  jz short loc_1403E4BFE
/*1403e4c46*/  mov r15, rax
/*1403e4c49*/  mov rcx, rax
/*1403e4c4c*/  mov rdx, r12
/*1403e4c4f*/  call sub_141684120
/*1403e4c54*/  mov r13, cs:off_141EC90B8
/*1403e4c5b*/  cmp byte ptr [rbp+0B80h+var_98], 0
/*1403e4c62*/  jz short loc_1403E4C75
/*1403e4c64*/  jmp short loc_1403E4C85
loc_1403E4C66: /*1403e4c66*/ mov r15d, 1
/*1403e4c6c*/  cmp byte ptr [rbp+0B80h+var_98], 0
/*1403e4c73*/  jnz short loc_1403E4C85
loc_1403E4C75: /*1403e4c75*/ mov rax, [r13+0]
/*1403e4c79*/  shl rax, 1
/*1403e4c7c*/  test rax, rax
/*1403e4c7f*/  jnz loc_1403E5008
loc_1403E4C85: /*1403e4c85*/ xor eax, eax
/*1403e4c87*/  mov rcx, [rbp+0B80h+var_C0]; Address
/*1403e4c8e*/  xchg al, [rcx]
/*1403e4c90*/  cmp al, 2
/*1403e4c92*/  jz loc_1403E4FC5
loc_1403E4C98: /*1403e4c98*/ mov [rbp+0B80h+var_63], 1
loc_1403E4C9F: /*1403e4c9f*/ lea r12, [rbp+0B80h+var_620]
/*1403e4ca6*/  mov rcx, r12
/*1403e4ca9*/  mov [rbp+0B80h+var_C0], r15
/*1403e4cb0*/  mov rdx, r15
/*1403e4cb3*/  mov r8, [rbp+0B80h+var_108]
/*1403e4cba*/  call sub_1403886D0
/*1403e4cbf*/  nop
/*1403e4cc0*/  cmp dword ptr [rbp+0B80h+var_620], 0FFFFFFFFh
/*1403e4cc7*/  jz loc_1403E4DEF
/*1403e4ccd*/  movups xmm0, [rbp+0B80h+var_5D0]
/*1403e4cd4*/  movaps [rbp+0B80h+var_3C0], xmm0
/*1403e4cdb*/  movups xmm0, [rbp+0B80h+var_5E0]
/*1403e4ce2*/  movaps [rbp+0B80h+var_3D0], xmm0
/*1403e4ce9*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e4cf0*/  movups xmm1, [rbp+0B80h+var_610]
/*1403e4cf7*/  movups xmm2, [rbp+0B80h+var_600]
/*1403e4cfe*/  movups xmm3, [rbp+0B80h+var_5F0]
/*1403e4d05*/  movaps [rbp+0B80h+var_3E0], xmm3
/*1403e4d0c*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e4d13*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e4d1a*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e4d21*/  mov qword ptr [rbp+0B80h+var_A50], 0
/*1403e4d2c*/  mov qword ptr [rbp+0B80h+var_A50+8], 1
/*1403e4d37*/  mov qword ptr [rbp+0B80h+var_A40], 0
/*1403e4d42*/  mov qword ptr [rbp+0B80h+var_850], 60000020h
/*1403e4d4d*/  lea rax, [rbp+0B80h+var_A50]
/*1403e4d54*/  mov qword ptr [rbp+0B80h+var_860], rax
/*1403e4d5b*/  lea rax, off_141754110
/*1403e4d62*/  mov qword ptr [rbp+0B80h+var_860+8], rax
loc_1403E4D69: /*1403e4d69*/ lea rcx, [rbp+0B80h+var_410]
/*1403e4d70*/  lea rdx, [rbp+0B80h+var_860]
/*1403e4d77*/  call sub_140B036A0
/*1403e4d7c*/  nop
/*1403e4d7d*/  test al, al
/*1403e4d7f*/  jnz loc_1403E4FD7
/*1403e4d85*/  mov rdi, qword ptr [rbp+0B80h+var_A50]
/*1403e4d8c*/  mov rbx, qword ptr [rbp+0B80h+var_A50+8]
/*1403e4d93*/  mov r14, qword ptr [rbp+0B80h+var_A40]
/*1403e4d9a*/  mov [rbp+0B80h+var_63], 1
loc_1403E4DA1: /*1403e4da1*/ lea rcx, [rbp+0B80h+var_620]
/*1403e4da8*/  call sub_14034ED40
/*1403e4dad*/  nop
/*1403e4dae*/  mov r15, cs:off_141EC90B8
/*1403e4db5*/  mov [rsi+8], rdi
/*1403e4db9*/  mov [rsi+10h], rbx
/*1403e4dbd*/  mov [rsi+18h], r14
/*1403e4dc1*/  mov qword ptr [rsi], 2
/*1403e4dc8*/  mov rdx, [rbp+0B80h+var_108]
/*1403e4dcf*/  test rdx, rdx
/*1403e4dd2*/  jz loc_1403E5853
/*1403e4dd8*/  mov r8d, 1
/*1403e4dde*/  mov rcx, [rbp+0B80h+var_C0]
/*1403e4de5*/  call sub_140001660
/*1403e4dea*/  jmp loc_1403E5853
loc_1403E4DEF: /*1403e4def*/ mov rax, qword ptr [rbp+0B80h+var_620+8]
/*1403e4df6*/  mov [rbp+0B80h+hObject], rax
/*1403e4dfd*/  mov rcx, [rbx+1398h]
/*1403e4e04*/  add rcx, 10h; Address
/*1403e4e08*/  mov [rbp+0B80h+var_5C], 1
loc_1403E4E0F: /*1403e4e0f*/ call sub_140003640
/*1403e4e14*/  nop
/*1403e4e15*/  mov r13, rax
/*1403e4e18*/  test rax, rax
/*1403e4e1b*/  jz loc_1403E502D
/*1403e4e21*/  mov cl, 1
/*1403e4e23*/  xor eax, eax
/*1403e4e25*/  lock cmpxchg [r13+0], cl
/*1403e4e2b*/  jnz loc_1403E5082
loc_1403E4E31: /*1403e4e31*/ mov r15, cs:off_141EC90B8
/*1403e4e38*/  mov rax, [r15]
/*1403e4e3b*/  shl rax, 1
/*1403e4e3e*/  test rax, rax
/*1403e4e41*/  jnz loc_1403E5097
/*1403e4e47*/  mov [rbp+0B80h+var_B4], 0
/*1403e4e51*/  movzx eax, byte ptr [r13+1]
/*1403e4e56*/  test al, al
/*1403e4e58*/  mov [rbp+0B80h+var_98], r13
/*1403e4e5f*/  jz loc_1403E50D2
loc_1403E4E65: /*1403e4e65*/ mov qword ptr [rbp+0B80h+var_620], 0
/*1403e4e70*/  mov qword ptr [rbp+0B80h+var_620+8], 1
/*1403e4e7b*/  mov qword ptr [rbp+0B80h+var_610], 0
/*1403e4e86*/  mov qword ptr [rbp+0B80h+var_400], 60000020h
/*1403e4e91*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e4e98*/  lea rax, off_141754110
/*1403e4e9f*/  mov qword ptr [rbp+0B80h+var_410+8], rax
loc_1403E4EA6: /*1403e4ea6*/ lea rcx, aPoisonedLockAn; "poisoned lock: another task failed insi"...
/*1403e4ead*/  lea r8, [rbp+0B80h+var_410]
/*1403e4eb4*/  mov edx, 29h ; ')'
/*1403e4eb9*/  call sub_1414ACAB0
/*1403e4ebe*/  nop
loc_1403E4EBF: /*1403e4ebf*/ test al, al
/*1403e4ec1*/  jnz loc_1403E6A4A
/*1403e4ec7*/  mov rdi, qword ptr [rbp+0B80h+var_620]
/*1403e4ece*/  mov rbx, qword ptr [rbp+0B80h+var_620+8]
/*1403e4ed5*/  movzx r14d, byte ptr [rbp+0B80h+var_610]
/*1403e4edd*/  mov eax, dword ptr [rbp+0B80h+var_610+1]
/*1403e4ee3*/  mov dword ptr [rbp+0B80h+var_860], eax
/*1403e4ee9*/  mov eax, dword ptr [rbp+0B80h+var_610+4]
/*1403e4eef*/  mov dword ptr [rbp+0B80h+var_860+3], eax
/*1403e4ef5*/  cmp byte ptr [rbp+0B80h+var_B4], 0
/*1403e4efc*/  mov r12, [rbp+0B80h+var_98]
/*1403e4f03*/  jnz short loc_1403E4F14
/*1403e4f05*/  mov rax, [r15]
/*1403e4f08*/  shl rax, 1
/*1403e4f0b*/  test rax, rax
/*1403e4f0e*/  jnz loc_1403E6F08
loc_1403E4F14: /*1403e4f14*/ xor eax, eax
/*1403e4f16*/  xchg al, [r12]
/*1403e4f1a*/  cmp al, 2
/*1403e4f1c*/  jz loc_1403E6A7B
loc_1403E4F22: /*1403e4f22*/ mov eax, dword ptr [rbp+0B80h+var_860]
/*1403e4f28*/  mov ecx, dword ptr [rbp+0B80h+var_860+3]
/*1403e4f2e*/  mov [rsi+1Ch], ecx
/*1403e4f31*/  mov [rsi+19h], eax
/*1403e4f34*/  mov [rsi+8], rdi
/*1403e4f38*/  mov [rsi+10h], rbx
/*1403e4f3c*/  mov [rsi+18h], r14b
/*1403e4f40*/  mov qword ptr [rsi], 2
/*1403e4f47*/  jmp loc_1403E57EC
loc_1403E4F4C: /*1403e4f4c*/ mov rcx, [rbp+0B80h+Address]; Address
/*1403e4f53*/  call WakeByAddressSingle
/*1403e4f58*/  jmp loc_1403E4AC4
loc_1403E4F5D: /*1403e4f5d*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403e4f64*/  mov [rsp+0C00h+var_BE0], rax
/*1403e4f69*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403e4f70*/  lea r9, unk_14174DE40
/*1403e4f77*/  lea r8, [rbp+0B80h+var_79]
/*1403e4f7e*/  mov edx, 37h ; '7'
/*1403e4f83*/  call sub_1416C3060
/*1403e4f89*/  jmp loc_1403E7BF3
loc_1403E4F8E: /*1403e4f8e*/ mov [rbp+0B80h+var_61], 1
loc_1403E4F95: /*1403e4f95*/ call WakeByAddressSingle
/*1403e4f9a*/  nop
/*1403e4f9b*/  jmp loc_1403E4A73
loc_1403E4FA0: /*1403e4fa0*/ mov [rbp+0B80h+var_61], 1
/*1403e4fa7*/  call sub_1416C2250
/*1403e4fac*/  nop
/*1403e4fad*/  test al, al
/*1403e4faf*/  jnz loc_1403E4A60
/*1403e4fb5*/  mov rax, [rbp+0B80h+var_C0]
/*1403e4fbc*/  mov byte ptr [rax+1], 1
/*1403e4fc0*/  jmp loc_1403E4A60
loc_1403E4FC5: /*1403e4fc5*/ mov [rbp+0B80h+var_61], 1
/*1403e4fcc*/  call WakeByAddressSingle
/*1403e4fd1*/  nop
/*1403e4fd2*/  jmp loc_1403E4C98
loc_1403E4FD7: /*1403e4fd7*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403e4fde*/  mov [rsp+0C00h+var_BE0], rax
/*1403e4fe3*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403e4fea*/  lea r9, unk_14174DE40
/*1403e4ff1*/  lea r8, [rbp+0B80h+var_79]
/*1403e4ff8*/  mov edx, 37h ; '7'
/*1403e4ffd*/  call sub_1416C3060
/*1403e5003*/  jmp loc_1403E7BF3
loc_1403E5008: /*1403e5008*/ mov [rbp+0B80h+var_61], 1
loc_1403E500F: /*1403e500f*/ call sub_1416C2250
/*1403e5014*/  nop
/*1403e5015*/  test al, al
/*1403e5017*/  jnz loc_1403E4C85
/*1403e501d*/  mov rax, [rbp+0B80h+var_C0]
/*1403e5024*/  mov byte ptr [rax+1], 1
/*1403e5028*/  jmp loc_1403E4C85
loc_1403E502D: /*1403e502d*/ lea rax, aStdSyncPoisonM; "std::sync::poison::mutex::Mutex<codexma"...
/*1403e5034*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e503b*/  mov qword ptr [rbp+0B80h+var_620+8], 4Ch ; 'L'
/*1403e5046*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e504d*/  lea rax, sub_14041F680
/*1403e5054*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e505b*/  mov [rbp+0B80h+var_5C], 1
loc_1403E5062: /*1403e5062*/ lea rcx, unk_1416C99C2
/*1403e5069*/  lea r8, off_1416C9A50; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*1403e5070*/  lea rdx, [rbp+0B80h+var_410]
/*1403e5077*/  call sub_1416C32C0
/*1403e507d*/  jmp loc_1403E7BF3
loc_1403E5082: /*1403e5082*/ mov [rbp+0B80h+var_5C], 1
/*1403e5089*/  mov rcx, r13; Address
/*1403e508c*/  call sub_1416C15B0
/*1403e5091*/  nop
/*1403e5092*/  jmp loc_1403E4E31
loc_1403E5097: /*1403e5097*/ mov [rbp+0B80h+var_5C], 1
/*1403e509e*/  call sub_1416C2250
/*1403e50a3*/  mov [rbp+0B80h+var_B4], eax
/*1403e50a9*/  mov eax, [rbp+0B80h+var_B4]
/*1403e50af*/  xor al, 1
/*1403e50b1*/  mov [rbp+0B80h+var_B4], eax
/*1403e50b7*/  mov r15, cs:off_141EC90B8
/*1403e50be*/  movzx eax, byte ptr [r13+1]
/*1403e50c3*/  test al, al
/*1403e50c5*/  mov [rbp+0B80h+var_98], r13
/*1403e50cc*/  jnz loc_1403E4E65
loc_1403E50D2: /*1403e50d2*/ add r13, 8
loc_1403E50D6: /*1403e50d6*/ lea rcx, [rbp+0B80h+var_410]
/*1403e50dd*/  mov rdx, r13
/*1403e50e0*/  mov r8, [rbp+0B80h+var_78]
/*1403e50e7*/  mov r9, r14
/*1403e50ea*/  call sub_14039B470
/*1403e50ef*/  nop
/*1403e50f0*/  mov r13, [rbp+0B80h+var_3B0]
/*1403e50f7*/  mov r12, qword ptr [rbp+0B80h+var_410]
/*1403e50fe*/  movzx r15d, byte ptr [rbp+0B80h+var_410+8]
/*1403e5106*/  movups xmm0, [rbp+0B80h+var_410+9]
/*1403e510d*/  movaps [rbp+0B80h+var_860], xmm0
/*1403e5114*/  movups xmm0, [rbp+0B80h+var_400+9]
/*1403e511b*/  movaps [rbp+0B80h+var_850], xmm0
/*1403e5122*/  movups xmm0, [rbp+0B80h+var_3F0+9]
/*1403e5129*/  movaps [rbp+0B80h+var_840], xmm0
/*1403e5130*/  movups xmm0, [rbp+0B80h+var_3E0+9]
/*1403e5137*/  movaps [rbp+0B80h+var_830], xmm0
/*1403e513e*/  movups xmm0, [rbp+0B80h+var_3D0+9]
/*1403e5145*/  movaps [rbp+0B80h+var_820], xmm0
/*1403e514c*/  mov rax, qword ptr [rbp+0B80h+var_3C0+8]
/*1403e5153*/  mov qword ptr [rbp+0B80h+var_820+0Fh], rax
/*1403e515a*/  cmp r13, 2
/*1403e515e*/  jnz loc_1403E537E
/*1403e5164*/  mov r13d, r15d
/*1403e5167*/  movaps xmm0, [rbp+0B80h+var_860]
/*1403e516e*/  movaps xmm1, [rbp+0B80h+var_850]
/*1403e5175*/  movaps xmm2, [rbp+0B80h+var_840]
/*1403e517c*/  movaps xmm3, [rbp+0B80h+var_830]
/*1403e5183*/  movaps [rbp+0B80h+var_A50], xmm0
/*1403e518a*/  movaps [rbp+0B80h+var_A40], xmm1
/*1403e5191*/  movaps [rbp+0B80h+var_A30], xmm2
/*1403e5198*/  movaps [rbp+0B80h+var_A20], xmm3
/*1403e519f*/  movaps xmm0, [rbp+0B80h+var_820]
/*1403e51a6*/  movaps [rbp+0B80h+var_A10], xmm0
/*1403e51ad*/  mov rax, qword ptr [rbp+0B80h+var_820+0Fh]
/*1403e51b4*/  mov qword ptr [rbp+0B80h+var_A10+0Fh], rax
/*1403e51bb*/  cmp r12, 0FFFFFFFFFFFFFFFFh
/*1403e51bf*/  mov r15, cs:off_141EC90B8
/*1403e51c6*/  jz loc_1403E5523
/*1403e51cc*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e51d3*/  mov byte ptr [rbp+0B80h+var_410+8], r13b
/*1403e51da*/  movaps xmm0, [rbp+0B80h+var_A50]
/*1403e51e1*/  movaps xmm1, [rbp+0B80h+var_A40]
/*1403e51e8*/  movaps xmm2, [rbp+0B80h+var_A30]
/*1403e51ef*/  movaps xmm3, [rbp+0B80h+var_A20]
/*1403e51f6*/  movups [rbp+0B80h+var_410+9], xmm0
/*1403e51fd*/  movups [rbp+0B80h+var_400+9], xmm1
/*1403e5204*/  movups [rbp+0B80h+var_3F0+9], xmm2
/*1403e520b*/  movups [rbp+0B80h+var_3E0+9], xmm3
/*1403e5212*/  movaps xmm0, [rbp+0B80h+var_A10]
/*1403e5219*/  movups [rbp+0B80h+var_3D0+9], xmm0
/*1403e5220*/  mov rax, qword ptr [rbp+0B80h+var_A10+0Fh]
/*1403e5227*/  mov qword ptr [rbp+0B80h+var_3C0+8], rax
/*1403e522e*/  mov qword ptr [rbp+0B80h+var_860], 0
/*1403e5239*/  mov qword ptr [rbp+0B80h+var_860+8], 1
/*1403e5244*/  mov qword ptr [rbp+0B80h+var_850], 0
/*1403e524f*/  mov qword ptr [rbp+0B80h+var_610], 60000020h
/*1403e525a*/  mov qword ptr [rbp+0B80h+var_620], rdi
/*1403e5261*/  lea rax, off_141754110
/*1403e5268*/  mov qword ptr [rbp+0B80h+var_620+8], rax
loc_1403E526F: /*1403e526f*/ lea rcx, [rbp+0B80h+var_410]
/*1403e5276*/  lea rdx, [rbp+0B80h+var_620]
/*1403e527d*/  call sub_140B036A0
/*1403e5282*/  nop
/*1403e5283*/  test al, al
/*1403e5285*/  jnz loc_1403E6F5D
/*1403e528b*/  mov rax, qword ptr [rbp+0B80h+var_860]
/*1403e5292*/  mov [rbp+0B80h+var_78], rax
/*1403e5299*/  mov rcx, qword ptr [rbp+0B80h+var_860+8]
/*1403e52a0*/  mov rdi, qword ptr [rbp+0B80h+var_850]
/*1403e52a7*/  mov [rbp+0B80h+var_B0], rcx
/*1403e52ae*/  mov rdx, rdi
/*1403e52b1*/  call sub_1403DB1E0
/*1403e52b6*/  mov [rbp+0B80h+var_BC8], rax
/*1403e52ba*/  mov [rbp+0B80h+var_BC0], rdx
/*1403e52be*/  lea rax, [rbp+0B80h+var_BC8]
/*1403e52c2*/  mov qword ptr [rbp+0B80h+var_860], rax
/*1403e52c9*/  lea rax, sub_14041F680
/*1403e52d0*/  mov qword ptr [rbp+0B80h+var_860+8], rax
loc_1403E52D7: /*1403e52d7*/ lea rdx, unk_141749922
/*1403e52de*/  lea rcx, [rbp+0B80h+var_620]
/*1403e52e5*/  lea r8, [rbp+0B80h+var_860]
/*1403e52ec*/  call sub_14149C0F0
/*1403e52f1*/  nop
/*1403e52f2*/  lea rdx, aPreflightFaile; "preflight_failed"
/*1403e52f9*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e5300*/  lea r9, [rbp+0B80h+var_620]
/*1403e5307*/  mov r8d, 10h
/*1403e530d*/  call sub_140343D80
/*1403e5312*/  nop
/*1403e5313*/  mov rax, [rbp+0B80h+var_78]
/*1403e531a*/  mov [rsi+8], rax
/*1403e531e*/  mov rax, [rbp+0B80h+var_B0]
/*1403e5325*/  mov [rsi+10h], rax
/*1403e5329*/  mov [rsi+18h], rdi
/*1403e532d*/  mov qword ptr [rsi], 2
loc_1403E5334: /*1403e5334*/ lea rcx, [rbp+0B80h+var_410]
/*1403e533b*/  call sub_14034ED40
/*1403e5340*/  nop
/*1403e5341*/  cmp byte ptr [rbp+0B80h+var_B4], 0
/*1403e5348*/  jnz short loc_1403E5359
/*1403e534a*/  mov rax, [r15]
/*1403e534d*/  shl rax, 1
/*1403e5350*/  test rax, rax
/*1403e5353*/  jnz loc_1403E6F8E
loc_1403E5359: /*1403e5359*/ xor eax, eax
/*1403e535b*/  mov rcx, [rbp+0B80h+var_98]; Address
/*1403e5362*/  xchg al, [rcx]
/*1403e5364*/  cmp al, 2
/*1403e5366*/  jnz loc_1403E57EC
/*1403e536c*/  mov [rbp+0B80h+var_5C], 1
loc_1403E5373: /*1403e5373*/ call WakeByAddressSingle
/*1403e5378*/  nop
loc_1403E5379: /*1403e5379*/ jmp loc_1403E57EC
loc_1403E537E: /*1403e537e*/ lea rdx, [rbp+0B80h+var_3A8]
/*1403e5385*/  lea rcx, [rbp+0B80h+var_5B8]
/*1403e538c*/  mov r8d, 90h
/*1403e5392*/  call sub_141684120
/*1403e5397*/  mov qword ptr [rbp+0B80h+var_620], r12
/*1403e539e*/  mov byte ptr [rbp+0B80h+var_620+8], r15b
/*1403e53a5*/  movaps xmm0, [rbp+0B80h+var_860]
/*1403e53ac*/  movaps xmm1, [rbp+0B80h+var_850]
/*1403e53b3*/  movaps xmm2, [rbp+0B80h+var_840]
/*1403e53ba*/  movaps xmm3, [rbp+0B80h+var_830]
/*1403e53c1*/  movups [rbp+0B80h+var_620+9], xmm0
/*1403e53c8*/  movups [rbp+0B80h+var_610+9], xmm1
/*1403e53cf*/  movups [rbp+0B80h+var_600+9], xmm2
/*1403e53d6*/  movups [rbp+0B80h+var_5F0+9], xmm3
/*1403e53dd*/  movaps xmm0, [rbp+0B80h+var_820]
/*1403e53e4*/  movups [rbp+0B80h+var_5E0+9], xmm0
/*1403e53eb*/  mov rax, qword ptr [rbp+0B80h+var_820+0Fh]
/*1403e53f2*/  mov qword ptr [rbp+0B80h+var_5D0+8], rax
/*1403e53f9*/  lea rcx, [rbp+0B80h+var_5C0]
/*1403e5400*/  mov [rbp+0B80h+var_5C0], r13
/*1403e5407*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e540e*/  mov byte ptr [rbp+0B80h+var_410+8], r15b
/*1403e5415*/  movaps xmm0, [rbp+0B80h+var_860]
/*1403e541c*/  movaps xmm1, [rbp+0B80h+var_850]
/*1403e5423*/  movaps xmm2, [rbp+0B80h+var_840]
/*1403e542a*/  movaps xmm3, [rbp+0B80h+var_830]
/*1403e5431*/  movups [rbp+0B80h+var_410+9], xmm0
/*1403e5438*/  movups [rbp+0B80h+var_400+9], xmm1
/*1403e543f*/  movups [rbp+0B80h+var_3F0+9], xmm2
/*1403e5446*/  movups [rbp+0B80h+var_3E0+9], xmm3
/*1403e544d*/  movups xmm0, [rbp+0B80h+var_830+0Fh]
/*1403e5454*/  movups [rbp+0B80h+var_3D0+8], xmm0
/*1403e545b*/  call sub_14034E8D0
/*1403e5460*/  xor r13d, r13d
/*1403e5463*/  cmp qword ptr [rbp+0B80h+var_400+8], 0FFFFFFFFFFFFFFFFh
/*1403e546b*/  jz short loc_1403E54A0
/*1403e546d*/  cmp qword ptr [rbp+0B80h+var_3F0+8], r14
/*1403e5474*/  mov r15, cs:off_141EC90B8
/*1403e547b*/  jnz loc_1403E5516
/*1403e5481*/  mov rcx, qword ptr [rbp+0B80h+var_3F0]
/*1403e5488*/  mov rdx, [rbp+0B80h+var_78]
/*1403e548f*/  mov r8, r14
/*1403e5492*/  call sub_1416847B0
/*1403e5497*/  test eax, eax
/*1403e5499*/  jz short loc_1403E54A9
loc_1403E549B: /*1403e549b*/ xor r13d, r13d
/*1403e549e*/  jmp short loc_1403E5516
loc_1403E54A0: /*1403e54a0*/ mov r15, cs:off_141EC90B8
/*1403e54a7*/  jmp short loc_1403E5516
loc_1403E54A9: /*1403e54a9*/ mov rax, [rbp+0B80h+var_98]
/*1403e54b0*/  mov rdx, [rax+30h]
/*1403e54b4*/  mov r8, [rax+38h]
loc_1403E54B8: /*1403e54b8*/ lea rcx, [rbp+0B80h+var_620]
/*1403e54bf*/  call sub_140391DB0
/*1403e54c4*/  nop
/*1403e54c5*/  mov r12, qword ptr [rbp+0B80h+var_620]
/*1403e54cc*/  cmp r12, 0FFFFFFFFFFFFFFFFh
/*1403e54d0*/  jz short loc_1403E549B
/*1403e54d2*/  mov rcx, qword ptr [rbp+0B80h+var_620+8]
/*1403e54d9*/  cmp qword ptr [rbp+0B80h+var_610], r14
/*1403e54e0*/  jnz short loc_1403E54FF
/*1403e54e2*/  mov r13, rcx
/*1403e54e5*/  mov rdx, [rbp+0B80h+var_78]
/*1403e54ec*/  mov r8, r14
/*1403e54ef*/  call sub_1416847B0
/*1403e54f4*/  mov rcx, r13
/*1403e54f7*/  test eax, eax
/*1403e54f9*/  setz r13b
/*1403e54fd*/  jmp short loc_1403E5502
loc_1403E54FF: /*1403e54ff*/ xor r13d, r13d
loc_1403E5502: /*1403e5502*/ test r12, r12
/*1403e5505*/  jz short loc_1403E5516
/*1403e5507*/  mov r8d, 1
/*1403e550d*/  mov rdx, r12
/*1403e5510*/  call sub_140001660
/*1403e5515*/  nop
loc_1403E5516: /*1403e5516*/ lea rcx, [rbp+0B80h+var_410]
/*1403e551d*/  call sub_14034DF40
/*1403e5522*/  nop
loc_1403E5523: /*1403e5523*/ mov r12, [rbp+0B80h+var_98]
/*1403e552a*/  mov byte ptr [rbp+0B80h+var_170], r13b
/*1403e5531*/  cmp byte ptr [rbp+0B80h+var_B4], 0
/*1403e5538*/  jnz short loc_1403E5549
/*1403e553a*/  mov rax, [r15]
/*1403e553d*/  shl rax, 1
/*1403e5540*/  test rax, rax
/*1403e5543*/  jnz loc_1403E6F3D
loc_1403E5549: /*1403e5549*/ xor eax, eax
/*1403e554b*/  xchg al, [r12]
/*1403e554f*/  cmp al, 2
/*1403e5551*/  jz loc_1403E6F28
loc_1403E5557: /*1403e5557*/ lea r13, [rbp+0B80h+var_170]
/*1403e555e*/  mov qword ptr [rbp+0B80h+var_410], r13
/*1403e5565*/  lea rax, sub_1414AC660
/*1403e556c*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e5573*/  mov [rbp+0B80h+var_5C], 1
loc_1403E557A: /*1403e557a*/ lea rdx, unk_141749904
/*1403e5581*/  lea rcx, [rbp+0B80h+var_A68]
/*1403e5588*/  lea r8, [rbp+0B80h+var_410]
/*1403e558f*/  call sub_14149C0F0
/*1403e5594*/  nop
/*1403e5595*/  mov [rbp+0B80h+var_5C], 1
/*1403e559c*/  lea rdx, aPreflightOk; "preflight_ok"
/*1403e55a3*/  lea r12, [rbp+0B80h+var_E0]
/*1403e55aa*/  lea r9, [rbp+0B80h+var_A68]
/*1403e55b1*/  mov r8d, 0Ch
/*1403e55b7*/  mov rcx, r12
/*1403e55ba*/  call sub_140343D80
/*1403e55bf*/  nop
/*1403e55c0*/  lea rcx, [rbp+0B80h+var_D0]
/*1403e55c7*/  mov [rbp+0B80h+var_5C], 1
/*1403e55ce*/  call sub_141471AC0
/*1403e55d3*/  nop
/*1403e55d4*/  mov ecx, edx
/*1403e55d6*/  mov edx, 3E8h
/*1403e55db*/  mul rdx
/*1403e55de*/  mov ecx, ecx
/*1403e55e0*/  imul rcx, 431BDE83h
/*1403e55e7*/  shr rcx, 32h
/*1403e55eb*/  add rcx, rax
/*1403e55ee*/  adc rdx, 0
/*1403e55f2*/  mov qword ptr [rbp+0B80h+var_A50], rcx
/*1403e55f9*/  mov qword ptr [rbp+0B80h+var_A50+8], rdx
/*1403e5600*/  lea rax, aStatusPending; "status=pending"
/*1403e5607*/  mov qword ptr [rbp+0B80h+var_860], rax
/*1403e560e*/  mov qword ptr [rbp+0B80h+var_860+8], 0Eh
/*1403e5619*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e5620*/  lea rax, sub_141356790
/*1403e5627*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e562e*/  lea r15, [rbp+0B80h+var_A50]
/*1403e5635*/  mov qword ptr [rbp+0B80h+var_400], r15
/*1403e563c*/  lea rax, sub_1414A9600
/*1403e5643*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e564a*/  mov qword ptr [rbp+0B80h+var_3F0], rdi
/*1403e5651*/  lea rax, sub_14041F680
/*1403e5658*/  mov qword ptr [rbp+0B80h+var_3F0+8], rax
/*1403e565f*/  mov [rbp+0B80h+var_5C], 1
/*1403e5666*/  lea rdx, unk_1417493E8
/*1403e566d*/  lea r12, [rbp+0B80h+var_620]
/*1403e5674*/  lea r8, [rbp+0B80h+var_410]
/*1403e567b*/  mov rcx, r12
/*1403e567e*/  call sub_14149C0F0
/*1403e5683*/  nop
/*1403e5684*/  mov [rbp+0B80h+var_5C], 1
/*1403e568b*/  mov [rsp+0C00h+var_BE0], r12
/*1403e5690*/  lea rcx, aAccountSwitch; "account_switch"
/*1403e5697*/  lea r8, aQuietAcquireSt; "quiet_acquire_started"
/*1403e569e*/  mov edx, 0Eh
/*1403e56a3*/  mov r9d, 15h
/*1403e56a9*/  call sub_1403565C0
/*1403e56ae*/  nop
/*1403e56af*/  mov [rbp+0B80h+var_5C], 1
/*1403e56b6*/  mov byte ptr [rsp+0C00h+var_BE0], 0
/*1403e56bb*/  mov edx, 5
/*1403e56c0*/  mov rcx, r12
/*1403e56c3*/  xor r8d, r8d
/*1403e56c6*/  xor r9d, r9d
/*1403e56c9*/  call acquire_with_policy
/*1403e56ce*/  nop
/*1403e56cf*/  cmp dword ptr [rbp+0B80h+var_620], 0FFFFFFFFh
/*1403e56d6*/  mov rdi, [rbp+0B80h+var_B0]
/*1403e56dd*/  jz loc_1403E588C
/*1403e56e3*/  movups xmm0, [rbp+0B80h+var_5D0]
/*1403e56ea*/  movaps [rbp+0B80h+var_3C0], xmm0
/*1403e56f1*/  movups xmm0, [rbp+0B80h+var_5E0]
/*1403e56f8*/  movaps [rbp+0B80h+var_3D0], xmm0
/*1403e56ff*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e5706*/  movups xmm1, [rbp+0B80h+var_610]
/*1403e570d*/  movups xmm2, [rbp+0B80h+var_600]
/*1403e5714*/  movups xmm3, [rbp+0B80h+var_5F0]
/*1403e571b*/  movaps [rbp+0B80h+var_3E0], xmm3
/*1403e5722*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e5729*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e5730*/  movaps [rbp+0B80h+var_410], xmm0
loc_1403E5737: /*1403e5737*/ lea rcx, [rbp+0B80h+var_A50]
/*1403e573e*/  lea rdx, [rbp+0B80h+var_410]
/*1403e5745*/  call sub_14037B970
/*1403e574a*/  nop
/*1403e574b*/  mov rcx, qword ptr [rbp+0B80h+var_A50+8]
/*1403e5752*/  mov rdx, qword ptr [rbp+0B80h+var_A40]
/*1403e5759*/  mov [rbp+0B80h+var_78], rcx
/*1403e5760*/  call sub_1403DB1E0
/*1403e5765*/  mov qword ptr [rbp+0B80h+var_170], rax
/*1403e576c*/  mov qword ptr [rbp+0B80h+var_170+8], rdx
/*1403e5773*/  mov [rbp+0B80h+var_BC8], r13
/*1403e5777*/  lea rax, sub_14041F680
/*1403e577e*/  mov [rbp+0B80h+var_BC0], rax
loc_1403E5782: /*1403e5782*/ lea rdx, unk_141749922
/*1403e5789*/  lea rcx, [rbp+0B80h+var_860]
/*1403e5790*/  lea r8, [rbp+0B80h+var_BC8]
/*1403e5794*/  call sub_14149C0F0
/*1403e5799*/  nop
/*1403e579a*/  lea rdx, aQuietAcquireFa; "quiet_acquire_failed"
/*1403e57a1*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e57a8*/  lea r9, [rbp+0B80h+var_860]
/*1403e57af*/  mov r8d, 14h
/*1403e57b5*/  call sub_140343D80
/*1403e57ba*/  nop
/*1403e57bb*/  mov rax, qword ptr [rbp+0B80h+var_A40]
/*1403e57c2*/  mov [rsi+18h], rax
/*1403e57c6*/  movups xmm0, [rbp+0B80h+var_A50]
/*1403e57cd*/  movups xmmword ptr [rsi+8], xmm0
/*1403e57d1*/  mov qword ptr [rsi], 2
/*1403e57d8*/  mov [rbp+0B80h+var_5C], 1
loc_1403E57DF: /*1403e57df*/ lea rcx, [rbp+0B80h+var_620]
/*1403e57e6*/  call sub_14034ED40
/*1403e57eb*/  nop
loc_1403E57EC: /*1403e57ec*/ mov al, 1
/*1403e57ee*/  mov dword ptr [rbp+0B80h+var_78], eax
loc_1403E57F4: /*1403e57f4*/ lea rcx, [rbp+0B80h+hObject]
/*1403e57fb*/  call sub_1412018B0
/*1403e5800*/  nop
/*1403e5801*/  mov [rbp+0B80h+var_BC8], rax
/*1403e5805*/  test rax, rax
/*1403e5808*/  jz short loc_1403E5814
/*1403e580a*/  lea rcx, [rbp+0B80h+var_BC8]
/*1403e580e*/  call sub_140018650
/*1403e5813*/  nop
loc_1403E5814: /*1403e5814*/ mov rcx, [rbp+0B80h+hObject]; hObject
/*1403e581b*/  call cs:__imp_CloseHandle
/*1403e5821*/  mov rdx, [rbp+0B80h+var_108]
/*1403e5828*/  test rdx, rdx
/*1403e582b*/  jz short loc_1403E583F
/*1403e582d*/  mov r8d, 1
/*1403e5833*/  mov rcx, [rbp+0B80h+var_C0]
/*1403e583a*/  call sub_140001660
loc_1403E583F: /*1403e583f*/ cmp byte ptr [rbp+0B80h+var_78], 0
/*1403e5846*/  mov r15, cs:off_141EC90B8
/*1403e584d*/  jz loc_1403E4AC4
loc_1403E5853: /*1403e5853*/ cmp [rbp+0B80h+var_60], 0
/*1403e585a*/  jnz loc_1403E4AB1
/*1403e5860*/  mov rax, [r15]
/*1403e5863*/  shl rax, 1
/*1403e5866*/  test rax, rax
/*1403e5869*/  jz loc_1403E4AB1
loc_1403E586F: /*1403e586f*/ call sub_1416C2250
/*1403e5874*/  test al, al
/*1403e5876*/  jnz loc_1403E4AB1
/*1403e587c*/  mov rax, [rbp+0B80h+Address]
/*1403e5883*/  mov byte ptr [rax+1], 1
/*1403e5887*/  jmp loc_1403E4AB1
loc_1403E588C: /*1403e588c*/ mov rax, qword ptr [rbp+0B80h+var_5F0+8]
/*1403e5893*/  mov [rbp+0B80h+var_630], rax
/*1403e589a*/  movups xmm0, [rbp+0B80h+var_620+8]
/*1403e58a1*/  movups xmm1, [rbp+0B80h+var_610+8]
/*1403e58a8*/  movups xmm2, [rbp+0B80h+var_600+8]
/*1403e58af*/  movaps [rbp+0B80h+var_640], xmm2
/*1403e58b6*/  movaps [rbp+0B80h+var_650], xmm1
/*1403e58bd*/  movaps [rbp+0B80h+var_660], xmm0
/*1403e58c4*/  mov [rbp+0B80h+var_7A], 1
/*1403e58cb*/  mov [rbp+0B80h+var_7B], 1
loc_1403E58D2: /*1403e58d2*/ mov [rsp+0C00h+var_BE0], 0Ch
/*1403e58db*/  lea rdx, aQuietAcquired; "quiet_acquired"
/*1403e58e2*/  lea r9, aStatusReady; "status=ready"
/*1403e58e9*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e58f0*/  mov r8d, 0Eh
/*1403e58f6*/  call sub_140343ED0
/*1403e58fb*/  nop
/*1403e58fc*/  mov [rbp+0B80h+var_7A], 1
/*1403e5903*/  mov [rbp+0B80h+var_7B], 1
/*1403e590a*/  lea rcx, [rbp+0B80h+var_410]
/*1403e5911*/  mov rdx, rbx
/*1403e5914*/  call sub_1403DFE10
/*1403e5919*/  nop
loc_1403E591A: /*1403e591a*/ cmp qword ptr [rbp+0B80h+var_410], 0FFFFFFFFFFFFFFFFh
/*1403e5922*/  jz loc_1403E5A62
/*1403e5928*/  lea rcx, [rbp+0B80h+var_BC8]
/*1403e592c*/  lea rdx, [rbp+0B80h+var_410]
/*1403e5933*/  mov r8d, 118h
/*1403e5939*/  call sub_141684120
/*1403e593e*/  mov [rbp+0B80h+var_66], 1
/*1403e5945*/  mov [rbp+0B80h+var_67], 1
loc_1403E594C: /*1403e594c*/ lea rcx, [rbp+0B80h+var_410]
/*1403e5953*/  mov rdx, [rbp+0B80h+var_78]
/*1403e595a*/  mov r8, r14
/*1403e595d*/  mov r9, rbx
/*1403e5960*/  call sub_14037CE20
/*1403e5965*/  nop
/*1403e5966*/  cmp dword ptr [rbp+0B80h+var_410], 2
/*1403e596d*/  jnz loc_1403E5C0C
/*1403e5973*/  lea rax, [rbp+0B80h+var_410+8]
/*1403e597a*/  mov rcx, [rbp+0B80h+var_630]
/*1403e5981*/  mov qword ptr [rbp+0B80h+var_5F0], rcx
/*1403e5988*/  movaps xmm0, [rbp+0B80h+var_660]
/*1403e598f*/  movaps xmm1, [rbp+0B80h+var_650]
/*1403e5996*/  movaps xmm2, [rbp+0B80h+var_640]
/*1403e599d*/  movaps [rbp+0B80h+var_600], xmm2
/*1403e59a4*/  movaps [rbp+0B80h+var_610], xmm1
/*1403e59ab*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e59b2*/  mov [rbp+0B80h+var_66], 0
/*1403e59b9*/  mov [rbp+0B80h+var_67], 1
/*1403e59c0*/  mov [rsp+0C00h+var_BE0], rax
/*1403e59c5*/  lea rcx, [rbp+0B80h+var_170]
/*1403e59cc*/  lea rdx, [rbp+0B80h+var_E0]
/*1403e59d3*/  lea r8, [rbp+0B80h+var_BC8]
/*1403e59d7*/  lea r9, [rbp+0B80h+var_620]
/*1403e59de*/  call sub_1403DB4A0
/*1403e59e3*/  nop
/*1403e59e4*/  mov [rbp+0B80h+var_9D], 1
loc_1403E59EB: /*1403e59eb*/ mov rcx, [rbp+0B80h+Address]
/*1403e59f2*/  movzx edx, [rbp+0B80h+var_60]
/*1403e59f9*/  call sub_14000E270
/*1403e59fe*/  nop
/*1403e59ff*/  mov rax, qword ptr [rbp+0B80h+var_160]
/*1403e5a06*/  mov qword ptr [rbp+0B80h+var_610], rax
/*1403e5a0d*/  movups xmm0, [rbp+0B80h+var_170]
/*1403e5a14*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e5a1b*/  mov [rbp+0B80h+var_9D], 0
/*1403e5a22*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e5a29*/  lea r8, [rbp+0B80h+var_E0]
/*1403e5a30*/  lea r9, [rbp+0B80h+var_620]
/*1403e5a37*/  mov rdx, rdi
/*1403e5a3a*/  call sub_1403E4470
/*1403e5a3f*/  nop
/*1403e5a40*/  mov rax, qword ptr [rbp+0B80h+var_A40]
/*1403e5a47*/  mov [rsi+18h], rax
/*1403e5a4b*/  movups xmm0, [rbp+0B80h+var_A50]
/*1403e5a52*/  movups xmmword ptr [rsi+8], xmm0
/*1403e5a56*/  mov qword ptr [rsi], 2
/*1403e5a5d*/  jmp loc_1403E5E7C
loc_1403E5A62: /*1403e5a62*/ mov rax, qword ptr [rbp+0B80h+var_400+8]
/*1403e5a69*/  mov qword ptr [rbp+0B80h+var_210], rax
/*1403e5a70*/  movups xmm0, [rbp+0B80h+var_410+8]
/*1403e5a77*/  movaps [rbp+0B80h+var_220], xmm0
/*1403e5a7e*/  mov [rbp+0B80h+var_89], 1
loc_1403E5A85: /*1403e5a85*/ mov ecx, 18h
/*1403e5a8a*/  call sub_1403B9610
/*1403e5a8f*/  mov [rbp+0B80h+var_78], rax
/*1403e5a96*/  lea rax, [rbp+0B80h+var_220]
/*1403e5a9d*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e5aa4*/  lea rax, sub_1400015F0
/*1403e5aab*/  mov qword ptr [rbp+0B80h+var_620+8], rax
loc_1403E5AB2: /*1403e5ab2*/ lea rdx, unk_141749DB1
/*1403e5ab9*/  lea rcx, [rbp+0B80h+var_170]
/*1403e5ac0*/  lea r8, [rbp+0B80h+var_620]
/*1403e5ac7*/  call sub_14149C0F0
/*1403e5acc*/  nop
/*1403e5acd*/  mov rax, qword ptr [rbp+0B80h+var_160]
/*1403e5ad4*/  mov rcx, [rbp+0B80h+var_78]
/*1403e5adb*/  mov [rcx+10h], rax
/*1403e5adf*/  movups xmm0, [rbp+0B80h+var_170]
/*1403e5ae6*/  movups xmmword ptr [rcx], xmm0
/*1403e5ae9*/  mov qword ptr [rbp+0B80h+var_1E0], 1
/*1403e5af4*/  mov qword ptr [rbp+0B80h+var_1E0+8], rcx
/*1403e5afb*/  mov qword ptr [rbp+0B80h+var_1D0], 1
/*1403e5b06*/  mov rax, [rbp+0B80h+var_630]
/*1403e5b0d*/  mov qword ptr [rbp+0B80h+var_5F0], rax
/*1403e5b14*/  movaps xmm0, [rbp+0B80h+var_660]
/*1403e5b1b*/  movaps xmm1, [rbp+0B80h+var_650]
/*1403e5b22*/  movaps xmm2, [rbp+0B80h+var_640]
/*1403e5b29*/  movaps [rbp+0B80h+var_600], xmm2
/*1403e5b30*/  movaps [rbp+0B80h+var_610], xmm1
/*1403e5b37*/  movaps [rbp+0B80h+var_620], xmm0
loc_1403E5B3E: /*1403e5b3e*/ lea rcx, [rbp+0B80h+var_860]
/*1403e5b45*/  lea rdi, [rbp+0B80h+var_620]
/*1403e5b4c*/  mov rdx, rdi
/*1403e5b4f*/  call sub_140387CC0
/*1403e5b54*/  nop
/*1403e5b55*/  cmp dword ptr [rbp+0B80h+var_860], 0FFFFFFFFh
/*1403e5b5c*/  jz loc_1403E5E94
/*1403e5b62*/  movups xmm0, [rbp+0B80h+var_810]
/*1403e5b69*/  movaps [rbp+0B80h+var_5D0], xmm0
/*1403e5b70*/  movups xmm0, [rbp+0B80h+var_820]
/*1403e5b77*/  movaps [rbp+0B80h+var_5E0], xmm0
/*1403e5b7e*/  movups xmm0, [rbp+0B80h+var_860]
/*1403e5b85*/  movups xmm1, [rbp+0B80h+var_850]
/*1403e5b8c*/  movups xmm2, [rbp+0B80h+var_840]
/*1403e5b93*/  movups xmm3, [rbp+0B80h+var_830]
/*1403e5b9a*/  movaps [rbp+0B80h+var_5F0], xmm3
/*1403e5ba1*/  movaps [rbp+0B80h+var_600], xmm2
/*1403e5ba8*/  movaps [rbp+0B80h+var_610], xmm1
/*1403e5baf*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e5bb6*/  mov qword ptr [rbp+0B80h+var_100], rdi
/*1403e5bbd*/  lea rax, sub_140B036A0
/*1403e5bc4*/  mov qword ptr [rbp+0B80h+var_100+8], rax
loc_1403E5BCB: /*1403e5bcb*/ lea rdx, unk_141749DF6
/*1403e5bd2*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e5bd9*/  lea r8, [rbp+0B80h+var_100]
/*1403e5be0*/  call sub_14149C0F0
/*1403e5be5*/  nop
/*1403e5be6*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e5bed*/  lea rdx, [rbp+0B80h+var_A50]
/*1403e5bf4*/  call sub_1403B1EC0
/*1403e5bf9*/  nop
loc_1403E5BFA: /*1403e5bfa*/ lea rcx, [rbp+0B80h+var_620]
/*1403e5c01*/  call sub_14034ED40
/*1403e5c06*/  nop
loc_1403E5C07: /*1403e5c07*/ jmp loc_1403E5F53
loc_1403E5C0C: /*1403e5c0c*/ mov r13, r15
/*1403e5c0f*/  lea rcx, [rbp+0B80h+var_860]
/*1403e5c16*/  lea rdx, [rbp+0B80h+var_410]
/*1403e5c1d*/  mov r8d, 1E8h
/*1403e5c23*/  call sub_141684120
/*1403e5c28*/  lea rdx, [rbp+0B80h+var_700]
/*1403e5c2f*/  mov [rbp+0B80h+var_59], 1
/*1403e5c36*/  mov [rbp+0B80h+var_5A], 1
/*1403e5c3d*/  mov [rbp+0B80h+var_5B], 1
loc_1403E5C44: /*1403e5c44*/ lea rcx, [rbp+0B80h+var_410]
/*1403e5c4b*/  call sub_14149C500
/*1403e5c50*/  nop
/*1403e5c51*/  mov rax, qword ptr [rbp+0B80h+var_400]
/*1403e5c58*/  mov qword ptr [rbp+0B80h+var_610], rax
/*1403e5c5f*/  movups xmm0, [rbp+0B80h+var_410]
/*1403e5c66*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e5c6d*/  lea rdi, [rbp+0B80h+var_AC8]
/*1403e5c74*/  mov rdx, [rbp+0B80h+var_AC8]
/*1403e5c7b*/  test rdx, rdx
/*1403e5c7e*/  jle short loc_1403E5C92
/*1403e5c80*/  mov rcx, [rbp+0B80h+var_AC0]
/*1403e5c87*/  mov r8d, 1
/*1403e5c8d*/  call sub_140001660
loc_1403E5C92: /*1403e5c92*/ mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e5c99*/  mov [rdi+10h], rax
/*1403e5c9d*/  movaps xmm0, [rbp+0B80h+var_620]
/*1403e5ca4*/  movups xmmword ptr [rdi], xmm0
/*1403e5ca7*/  lea rax, [rbp+0B80h+var_6D0]
/*1403e5cae*/  lea rcx, [rbp+0B80h+var_6CF]
/*1403e5cb5*/  mov qword ptr [rbp+0B80h+var_410], rax
/*1403e5cbc*/  lea rax, sub_1414AC660
/*1403e5cc3*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e5cca*/  mov qword ptr [rbp+0B80h+var_400], rcx
/*1403e5cd1*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e5cd8*/  mov [rbp+0B80h+var_59], 1
/*1403e5cdf*/  mov [rbp+0B80h+var_5A], 1
/*1403e5ce6*/  mov [rbp+0B80h+var_5B], 1
/*1403e5ced*/  lea rdx, unk_141749977
/*1403e5cf4*/  lea rcx, [rbp+0B80h+var_A80]
/*1403e5cfb*/  lea r8, [rbp+0B80h+var_410]
/*1403e5d02*/  call sub_14149C0F0
/*1403e5d07*/  nop
/*1403e5d08*/  mov [rbp+0B80h+var_59], 1
/*1403e5d0f*/  mov [rbp+0B80h+var_5A], 1
/*1403e5d16*/  mov [rbp+0B80h+var_5B], 1
/*1403e5d1d*/  lea rdx, aDiskCommitted; "disk_committed"
/*1403e5d24*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e5d2b*/  lea r9, [rbp+0B80h+var_A80]
/*1403e5d32*/  mov r8d, 0Eh
/*1403e5d38*/  call sub_140343D80
/*1403e5d3d*/  nop
/*1403e5d3e*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e5d45*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e5d4c*/  mov [rbp+0B80h+var_59], 1
/*1403e5d53*/  mov [rbp+0B80h+var_5A], 1
/*1403e5d5a*/  mov [rbp+0B80h+var_5B], 1
/*1403e5d61*/  lea r14, [rbp+0B80h+var_A98]
/*1403e5d68*/  mov rcx, r14
/*1403e5d6b*/  mov rdx, rbx
/*1403e5d6e*/  call sub_1403DEE30
/*1403e5d73*/  nop
/*1403e5d74*/  cmp [rbp+0B80h+var_A98], 0FFFFFFFFFFFFFFFFh
/*1403e5d7c*/  jz loc_1403E5FF8
/*1403e5d82*/  mov rax, [rbp+0B80h+var_630]
/*1403e5d89*/  mov qword ptr [rbp+0B80h+var_3E0], rax
/*1403e5d90*/  movaps xmm0, [rbp+0B80h+var_660]
/*1403e5d97*/  movaps xmm1, [rbp+0B80h+var_650]
/*1403e5d9e*/  movaps xmm2, [rbp+0B80h+var_640]
/*1403e5da5*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e5dac*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e5db3*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e5dba*/  mov [rbp+0B80h+var_59], 0
/*1403e5dc1*/  mov [rbp+0B80h+var_5A], 1
/*1403e5dc8*/  mov [rbp+0B80h+var_5B], 1
/*1403e5dcf*/  mov [rsp+0C00h+var_BE0], r14
/*1403e5dd4*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e5ddb*/  lea rdx, [rbp+0B80h+var_E0]
/*1403e5de2*/  lea r8, [rbp+0B80h+var_BC8]
/*1403e5de6*/  lea r9, [rbp+0B80h+var_410]
/*1403e5ded*/  call sub_1403DB4A0
/*1403e5df2*/  nop
/*1403e5df3*/  mov [rbp+0B80h+var_99], 1
loc_1403E5DFA: /*1403e5dfa*/ mov rcx, [rbp+0B80h+Address]
/*1403e5e01*/  movzx edx, [rbp+0B80h+var_60]
/*1403e5e08*/  call sub_14000E270
/*1403e5e0d*/  nop
/*1403e5e0e*/  mov rax, qword ptr [rbp+0B80h+var_A40]
/*1403e5e15*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e5e1c*/  movups xmm0, [rbp+0B80h+var_A50]
/*1403e5e23*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e5e2a*/  mov [rbp+0B80h+var_99], 0
/*1403e5e31*/  lea rcx, [rbp+0B80h+var_620]
/*1403e5e38*/  lea r8, [rbp+0B80h+var_E0]
/*1403e5e3f*/  lea r9, [rbp+0B80h+var_410]
/*1403e5e46*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e5e4d*/  call sub_1403E4470
/*1403e5e52*/  nop
loc_1403E5E53: /*1403e5e53*/ mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e5e5a*/  mov [rsi+18h], rax
/*1403e5e5e*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e5e65*/  movups xmmword ptr [rsi+8], xmm0
/*1403e5e69*/  mov qword ptr [rsi], 2
loc_1403E5E70: /*1403e5e70*/ lea rcx, [rbp+0B80h+var_860]
/*1403e5e77*/  call sub_14034B4D0
loc_1403E5E7C: /*1403e5e7c*/ lea rcx, [rbp+0B80h+var_BC8]
/*1403e5e80*/  call sub_14034EE60
/*1403e5e85*/  mov dword ptr [rbp+0B80h+var_78], 0
/*1403e5e8f*/  jmp loc_1403E57F4
loc_1403E5E94: /*1403e5e94*/ lea rcx, [rbp+0B80h+var_860]
/*1403e5e9b*/  call sub_1403B6530
/*1403e5ea0*/  nop
/*1403e5ea1*/  cmp dword ptr [rbp+0B80h+var_860], 0FFFFFFFFh
/*1403e5ea8*/  jz loc_1403E5F53
/*1403e5eae*/  movups xmm0, [rbp+0B80h+var_810]
/*1403e5eb5*/  movaps [rbp+0B80h+var_5D0], xmm0
/*1403e5ebc*/  movups xmm0, [rbp+0B80h+var_820]
/*1403e5ec3*/  movaps [rbp+0B80h+var_5E0], xmm0
/*1403e5eca*/  movups xmm0, [rbp+0B80h+var_860]
/*1403e5ed1*/  movups xmm1, [rbp+0B80h+var_850]
/*1403e5ed8*/  movups xmm2, [rbp+0B80h+var_840]
/*1403e5edf*/  movups xmm3, [rbp+0B80h+var_830]
/*1403e5ee6*/  movaps [rbp+0B80h+var_5F0], xmm3
/*1403e5eed*/  movaps [rbp+0B80h+var_600], xmm2
/*1403e5ef4*/  movaps [rbp+0B80h+var_610], xmm1
/*1403e5efb*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e5f02*/  mov qword ptr [rbp+0B80h+var_100], rdi
/*1403e5f09*/  lea rax, sub_140B036A0
/*1403e5f10*/  mov qword ptr [rbp+0B80h+var_100+8], rax
loc_1403E5F17: /*1403e5f17*/ lea rdx, unk_141749DD4
/*1403e5f1e*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e5f25*/  lea r8, [rbp+0B80h+var_100]
/*1403e5f2c*/  call sub_14149C0F0
/*1403e5f31*/  nop
/*1403e5f32*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e5f39*/  lea rdx, [rbp+0B80h+var_A50]
/*1403e5f40*/  call sub_1403B1EC0
/*1403e5f45*/  nop
loc_1403E5F46: /*1403e5f46*/ lea rcx, [rbp+0B80h+var_620]
/*1403e5f4d*/  call sub_14034ED40
/*1403e5f52*/  nop
loc_1403E5F53: /*1403e5f53*/ mov [rsp+0C00h+var_BE0], 23h ; '#'
/*1403e5f5c*/  lea rdx, aFailed; "failed"
/*1403e5f63*/  lea r9, aCodeSwitchRoll; "code=SWITCH_ROLLBACK_CAPTURE_FAILED | "
/*1403e5f6a*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e5f71*/  mov r8d, 6
/*1403e5f77*/  call sub_140343ED0
/*1403e5f7c*/  nop
/*1403e5f7d*/  mov rdx, qword ptr [rbp+0B80h+var_1E0+8]
/*1403e5f84*/  mov r8, qword ptr [rbp+0B80h+var_1D0]
/*1403e5f8b*/  mov [rsp+0C00h+var_BE0], 3
/*1403e5f94*/  lea r9, aCodeSwitchRoll+23h; " | "
/*1403e5f9b*/  lea rcx, [rbp+0B80h+var_620]
/*1403e5fa2*/  call sub_140440300
/*1403e5fa7*/  nop
/*1403e5fa8*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e5faf*/  mov [rsi+18h], rax
/*1403e5fb3*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e5fba*/  movups xmmword ptr [rsi+8], xmm0
/*1403e5fbe*/  mov qword ptr [rsi], 2
/*1403e5fc5*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e5fcc*/  call sub_140009B20
/*1403e5fd1*/  mov rdx, qword ptr [rbp+0B80h+var_220]
/*1403e5fd8*/  test rdx, rdx
/*1403e5fdb*/  jz loc_1403E57EC
/*1403e5fe1*/  mov rcx, qword ptr [rbp+0B80h+var_220+8]
/*1403e5fe8*/  mov r8d, 1
/*1403e5fee*/  call sub_140001660
/*1403e5ff3*/  jmp loc_1403E57EC
loc_1403E5FF8: /*1403e5ff8*/ mov [rbp+0B80h+var_59], 1
/*1403e5fff*/  mov [rbp+0B80h+var_5A], 1
/*1403e6006*/  mov [rbp+0B80h+var_5B], 1
loc_1403E600D: /*1403e600d*/ mov [rsp+0C00h+var_BE0], 9
/*1403e6016*/  lea rdx, aDiskVerified; "disk_verified"
/*1403e601d*/  lea r9, unk_1417499B6
/*1403e6024*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e602b*/  mov r8d, 0Dh
/*1403e6031*/  call sub_140343ED0
/*1403e6036*/  nop
/*1403e6037*/  mov rax, [rbp+0B80h+var_630]
/*1403e603e*/  mov qword ptr [rbp+0B80h+var_3E0], rax
/*1403e6045*/  movaps xmm0, [rbp+0B80h+var_660]
/*1403e604c*/  movaps xmm1, [rbp+0B80h+var_650]
/*1403e6053*/  movaps xmm2, [rbp+0B80h+var_640]
/*1403e605a*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e6061*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e6068*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e606f*/  mov [rbp+0B80h+var_59], 0
/*1403e6076*/  mov [rbp+0B80h+var_5A], 1
/*1403e607d*/  mov [rbp+0B80h+var_5B], 1
/*1403e6084*/  lea r15, [rbp+0B80h+var_170]
/*1403e608b*/  lea r14, [rbp+0B80h+var_410]
/*1403e6092*/  mov rcx, r15
/*1403e6095*/  mov rdx, r14
/*1403e6098*/  call sub_140387CC0
/*1403e609d*/  nop
/*1403e609e*/  cmp dword ptr [rbp+0B80h+var_170], 0FFFFFFFFh
/*1403e60a5*/  jz loc_1403E62DA
/*1403e60ab*/  movups xmm0, [rbp+0B80h+var_120]
/*1403e60b2*/  movaps [rbp+0B80h+var_A00], xmm0
/*1403e60b9*/  movups xmm0, [rbp+0B80h+var_130]
/*1403e60c0*/  movaps [rbp+0B80h+var_A10], xmm0
/*1403e60c7*/  movups xmm0, [rbp+0B80h+var_170]
/*1403e60ce*/  movups xmm1, [rbp+0B80h+var_160]
/*1403e60d5*/  movups xmm2, [rbp+0B80h+var_150]
/*1403e60dc*/  movups xmm3, [rbp+0B80h+var_140]
/*1403e60e3*/  movaps [rbp+0B80h+var_A20], xmm3
/*1403e60ea*/  movaps [rbp+0B80h+var_A30], xmm2
/*1403e60f1*/  movaps [rbp+0B80h+var_A40], xmm1
/*1403e60f8*/  movaps [rbp+0B80h+var_A50], xmm0
/*1403e60ff*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e6106*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e610d*/  mov [rbp+0B80h+var_6C], 1
/*1403e6114*/  mov [rbp+0B80h+var_6D], 1
loc_1403E611B: /*1403e611b*/ lea rcx, [rbp+0B80h+var_220]
/*1403e6122*/  mov rdx, rbx
/*1403e6125*/  call sub_1403DEE30
/*1403e612a*/  nop
/*1403e612b*/  cmp qword ptr [rbp+0B80h+var_220], 0FFFFFFFFFFFFFFFFh
/*1403e6133*/  jz loc_1403E660E
/*1403e6139*/  mov rax, qword ptr [rbp+0B80h+var_210]
/*1403e6140*/  mov qword ptr [rbp+0B80h+var_1D0], rax
/*1403e6147*/  movups xmm0, [rbp+0B80h+var_220]
/*1403e614e*/  movaps [rbp+0B80h+var_1E0], xmm0
/*1403e6155*/  mov qword ptr [rbp+0B80h+var_410], r13
/*1403e615c*/  lea rax, sub_140B036A0
/*1403e6163*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e616a*/  lea rax, [rbp+0B80h+var_1E0]
/*1403e6171*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e6178*/  lea rax, sub_1400015F0
/*1403e617f*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e6186*/  mov [rbp+0B80h+var_86], 1
loc_1403E618D: /*1403e618d*/ lea rdx, unk_141749C35
/*1403e6194*/  lea rcx, [rbp+0B80h+var_620]
/*1403e619b*/  lea r8, [rbp+0B80h+var_410]
/*1403e61a2*/  call sub_14149C0F0
/*1403e61a7*/  nop
/*1403e61a8*/  mov rax, qword ptr [rbp+0B80h+var_620]
/*1403e61af*/  mov [rbp+0B80h+var_78], rax
/*1403e61b6*/  mov rax, qword ptr [rbp+0B80h+var_620+8]
/*1403e61bd*/  mov [rbp+0B80h+var_98], rax
/*1403e61c4*/  mov rdi, qword ptr [rbp+0B80h+var_610]
/*1403e61cb*/  mov [rbp+0B80h+var_87], 1
/*1403e61d2*/  mov [rbp+0B80h+var_88], 1
loc_1403E61D9: /*1403e61d9*/ mov [rsp+0C00h+var_BE0], 20h ; ' '
/*1403e61e2*/  lea rdx, aFailed; "failed"
/*1403e61e9*/  lea r9, unk_141749B5D
/*1403e61f0*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e61f7*/  mov r8d, 6
/*1403e61fd*/  call sub_140343ED0
/*1403e6202*/  nop
/*1403e6203*/  mov [rbp+0B80h+var_87], 1
/*1403e620a*/  mov [rbp+0B80h+var_88], 0
/*1403e6211*/  mov rcx, [rbp+0B80h+Address]
/*1403e6218*/  movzx edx, [rbp+0B80h+var_60]
/*1403e621f*/  call sub_14000E270
/*1403e6224*/  nop
/*1403e6225*/  mov rax, [rbp+0B80h+var_78]
/*1403e622c*/  mov qword ptr [rbp+0B80h+var_410], rax
/*1403e6233*/  mov rax, [rbp+0B80h+var_98]
/*1403e623a*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e6241*/  mov qword ptr [rbp+0B80h+var_400], rdi
/*1403e6248*/  mov [rbp+0B80h+var_87], 0
/*1403e624f*/  mov [rbp+0B80h+var_88], 0
/*1403e6256*/  lea rcx, [rbp+0B80h+var_620]
/*1403e625d*/  lea r8, [rbp+0B80h+var_E0]
/*1403e6264*/  lea r9, [rbp+0B80h+var_410]
/*1403e626b*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e6272*/  call sub_1403E4470
/*1403e6277*/  nop
/*1403e6278*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e627f*/  mov [rsi+18h], rax
/*1403e6283*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e628a*/  movups xmmword ptr [rsi+8], xmm0
/*1403e628e*/  mov qword ptr [rsi], 2
/*1403e6295*/  mov rdx, qword ptr [rbp+0B80h+var_1E0]
/*1403e629c*/  test rdx, rdx
/*1403e629f*/  jz short loc_1403E62B3
/*1403e62a1*/  mov rcx, qword ptr [rbp+0B80h+var_1E0+8]
/*1403e62a8*/  mov r8d, 1
/*1403e62ae*/  call sub_140001660
loc_1403E62B3: /*1403e62b3*/ mov [rbp+0B80h+var_59], 0
/*1403e62ba*/  mov [rbp+0B80h+var_5A], 0
/*1403e62c1*/  mov [rbp+0B80h+var_5B], 1
loc_1403E62C8: /*1403e62c8*/ lea rcx, [rbp+0B80h+var_A50]
/*1403e62cf*/  call sub_14034ED40
/*1403e62d4*/  nop
/*1403e62d5*/  jmp loc_1403E5E70
loc_1403E62DA: /*1403e62da*/ mov eax, dword ptr [rbp+0B80h+var_170+8]
/*1403e62e0*/  movzx ecx, byte ptr [rbp+0B80h+var_170+0Ch]
/*1403e62e7*/  mov [rbp+0B80h+var_228], eax
/*1403e62ed*/  mov [rbp+0B80h+var_224], cl
/*1403e62f3*/  test eax, eax
/*1403e62f5*/  setnz al
/*1403e62f8*/  or al, cl
/*1403e62fa*/  test al, 1
/*1403e62fc*/  jz loc_1403E700C
/*1403e6302*/  lea rax, [rbp+0B80h+var_224]
/*1403e6309*/  lea rcx, [rbp+0B80h+var_228]
/*1403e6310*/  mov qword ptr [rbp+0B80h+var_410], rcx
/*1403e6317*/  lea rcx, sub_1414AB780
/*1403e631e*/  mov qword ptr [rbp+0B80h+var_410+8], rcx
/*1403e6325*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e632c*/  lea rax, sub_1414AC660
/*1403e6333*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e633a*/  mov [rbp+0B80h+var_59], 0
/*1403e6341*/  mov [rbp+0B80h+var_5A], 1
/*1403e6348*/  mov [rbp+0B80h+var_5B], 1
/*1403e634f*/  lea rdx, unk_1417499BF
/*1403e6356*/  lea rcx, [rbp+0B80h+var_AB0]
/*1403e635d*/  lea r8, [rbp+0B80h+var_410]
/*1403e6364*/  call sub_14149C0F0
/*1403e6369*/  nop
/*1403e636a*/  mov [rbp+0B80h+var_59], 0
/*1403e6371*/  mov [rbp+0B80h+var_5A], 1
/*1403e6378*/  mov [rbp+0B80h+var_5B], 1
/*1403e637f*/  lea rdx, aWriterReentry; "writer_reentry"
/*1403e6386*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e638d*/  lea r9, [rbp+0B80h+var_AB0]
/*1403e6394*/  mov r8d, 0Eh
/*1403e639a*/  call sub_140343D80
/*1403e639f*/  nop
/*1403e63a0*/  mov [rbp+0B80h+var_59], 0
/*1403e63a7*/  mov [rbp+0B80h+var_5A], 1
/*1403e63ae*/  mov [rbp+0B80h+var_5B], 1
/*1403e63b5*/  mov byte ptr [rsp+0C00h+var_BE0], 0
/*1403e63ba*/  lea rcx, [rbp+0B80h+var_170]
/*1403e63c1*/  mov edx, 5
/*1403e63c6*/  xor r8d, r8d
/*1403e63c9*/  xor r9d, r9d
/*1403e63cc*/  call acquire_with_policy
/*1403e63d1*/  nop
/*1403e63d2*/  cmp dword ptr [rbp+0B80h+var_170], 0FFFFFFFFh
/*1403e63d9*/  jz loc_1403E6736
/*1403e63df*/  movups xmm0, [rbp+0B80h+var_120]
/*1403e63e6*/  movaps [rbp+0B80h+var_A00], xmm0
/*1403e63ed*/  movups xmm0, [rbp+0B80h+var_130]
/*1403e63f4*/  movaps [rbp+0B80h+var_A10], xmm0
/*1403e63fb*/  movups xmm0, [rbp+0B80h+var_170]
/*1403e6402*/  movups xmm1, [rbp+0B80h+var_160]
/*1403e6409*/  movups xmm2, [rbp+0B80h+var_150]
/*1403e6410*/  movups xmm3, [rbp+0B80h+var_140]
/*1403e6417*/  movaps [rbp+0B80h+var_A20], xmm3
/*1403e641e*/  movaps [rbp+0B80h+var_A30], xmm2
/*1403e6425*/  movaps [rbp+0B80h+var_A40], xmm1
/*1403e642c*/  movaps [rbp+0B80h+var_A50], xmm0
/*1403e6433*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e643a*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e6441*/  mov [rbp+0B80h+var_6A], 1
/*1403e6448*/  mov [rbp+0B80h+var_6B], 1
loc_1403E644F: /*1403e644f*/ lea rcx, [rbp+0B80h+var_100]
/*1403e6456*/  mov rdx, rbx
/*1403e6459*/  call sub_1403DEE30
/*1403e645e*/  nop
/*1403e645f*/  cmp qword ptr [rbp+0B80h+var_100], 0FFFFFFFFFFFFFFFFh
/*1403e6467*/  jz loc_1403E685A
/*1403e646d*/  mov rax, [rbp+0B80h+var_F0]
/*1403e6474*/  mov qword ptr [rbp+0B80h+var_1D0], rax
/*1403e647b*/  movups xmm0, [rbp+0B80h+var_100]
/*1403e6482*/  movaps [rbp+0B80h+var_1E0], xmm0
/*1403e6489*/  mov qword ptr [rbp+0B80h+var_410], r13
/*1403e6490*/  lea rax, sub_140B036A0
/*1403e6497*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e649e*/  lea rax, [rbp+0B80h+var_1E0]
/*1403e64a5*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e64ac*/  lea rax, sub_1400015F0
/*1403e64b3*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e64ba*/  mov [rbp+0B80h+var_83], 1
loc_1403E64C1: /*1403e64c1*/ lea rdx, unk_141749C35
/*1403e64c8*/  lea rcx, [rbp+0B80h+var_620]
/*1403e64cf*/  lea r8, [rbp+0B80h+var_410]
/*1403e64d6*/  call sub_14149C0F0
/*1403e64db*/  nop
/*1403e64dc*/  mov rax, qword ptr [rbp+0B80h+var_620]
/*1403e64e3*/  mov [rbp+0B80h+var_78], rax
/*1403e64ea*/  mov rax, qword ptr [rbp+0B80h+var_620+8]
/*1403e64f1*/  mov [rbp+0B80h+var_98], rax
/*1403e64f8*/  mov rdi, qword ptr [rbp+0B80h+var_610]
/*1403e64ff*/  mov [rbp+0B80h+var_84], 1
/*1403e6506*/  mov [rbp+0B80h+var_85], 1
loc_1403E650D: /*1403e650d*/ mov [rsp+0C00h+var_BE0], 20h ; ' '
/*1403e6516*/  lea rdx, aFailed; "failed"
/*1403e651d*/  lea r9, unk_141749B5D
/*1403e6524*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e652b*/  mov r8d, 6
/*1403e6531*/  call sub_140343ED0
/*1403e6536*/  nop
/*1403e6537*/  mov [rbp+0B80h+var_84], 1
/*1403e653e*/  mov [rbp+0B80h+var_85], 0
/*1403e6545*/  mov rcx, [rbp+0B80h+Address]
/*1403e654c*/  movzx edx, [rbp+0B80h+var_60]
/*1403e6553*/  call sub_14000E270
/*1403e6558*/  nop
/*1403e6559*/  mov rax, [rbp+0B80h+var_78]
/*1403e6560*/  mov qword ptr [rbp+0B80h+var_410], rax
/*1403e6567*/  mov rax, [rbp+0B80h+var_98]
/*1403e656e*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e6575*/  mov qword ptr [rbp+0B80h+var_400], rdi
/*1403e657c*/  mov [rbp+0B80h+var_84], 0
/*1403e6583*/  mov [rbp+0B80h+var_85], 0
/*1403e658a*/  lea rcx, [rbp+0B80h+var_620]
/*1403e6591*/  lea r8, [rbp+0B80h+var_E0]
/*1403e6598*/  lea r9, [rbp+0B80h+var_410]
/*1403e659f*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e65a6*/  call sub_1403E4470
/*1403e65ab*/  nop
/*1403e65ac*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e65b3*/  mov [rsi+18h], rax
/*1403e65b7*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e65be*/  movups xmmword ptr [rsi+8], xmm0
/*1403e65c2*/  mov qword ptr [rsi], 2
/*1403e65c9*/  mov rdx, qword ptr [rbp+0B80h+var_1E0]
/*1403e65d0*/  test rdx, rdx
/*1403e65d3*/  jz short loc_1403E65E7
/*1403e65d5*/  mov rcx, qword ptr [rbp+0B80h+var_1E0+8]
/*1403e65dc*/  mov r8d, 1
/*1403e65e2*/  call sub_140001660
loc_1403E65E7: /*1403e65e7*/ mov [rbp+0B80h+var_59], 0
/*1403e65ee*/  mov [rbp+0B80h+var_5A], 0
/*1403e65f5*/  mov [rbp+0B80h+var_5B], 1
loc_1403E65FC: /*1403e65fc*/ lea rcx, [rbp+0B80h+var_A50]
/*1403e6603*/  call sub_14034ED40
/*1403e6608*/  nop
/*1403e6609*/  jmp loc_1403E5E70
loc_1403E660E: /*1403e660e*/ mov qword ptr [rbp+0B80h+var_410], r13
/*1403e6615*/  lea rax, sub_140B036A0
/*1403e661c*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e6623*/  mov [rbp+0B80h+var_6C], 1
/*1403e662a*/  mov [rbp+0B80h+var_6D], 1
loc_1403E6631: /*1403e6631*/ lea rdx, unk_141749D41
/*1403e6638*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e663f*/  lea r8, [rbp+0B80h+var_410]
/*1403e6646*/  call sub_14149C0F0
/*1403e664b*/  nop
/*1403e664c*/  lea rcx, [rbp+0B80h+var_698]
/*1403e6653*/  mov [rbp+0B80h+var_6C], 1
/*1403e665a*/  mov [rbp+0B80h+var_6D], 1
/*1403e6661*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403e6668*/  lea r9, [rbp+0B80h+var_1E0]
/*1403e666f*/  mov r8d, 17h
/*1403e6675*/  call sub_1403DAFB0
/*1403e667a*/  nop
/*1403e667b*/  mov [rbp+0B80h+var_6C], 0
/*1403e6682*/  mov [rbp+0B80h+var_6D], 1
/*1403e6689*/  mov rcx, [rbp+0B80h+Address]
/*1403e6690*/  movzx edx, [rbp+0B80h+var_60]
/*1403e6697*/  call sub_14000E270
/*1403e669c*/  nop
loc_1403E669D: /*1403e669d*/ lea rbx, [rbp+0B80h+var_410]
/*1403e66a4*/  lea rdx, [rbp+0B80h+var_860]
/*1403e66ab*/  mov r8d, 1E8h
/*1403e66b1*/  mov rcx, rbx
/*1403e66b4*/  call sub_141684120
/*1403e66b9*/  mov [rbp+0B80h+var_6C], 0
/*1403e66c0*/  mov [rbp+0B80h+var_6D], 0
loc_1403E66C7: /*1403e66c7*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403e66ce*/  mov [rsp+0C00h+var_BE0], rax
/*1403e66d3*/  mov [rsp+0C00h+var_BD8], 1Ah
/*1403e66dc*/  lea rcx, [rbp+0B80h+var_620]
/*1403e66e3*/  lea r8, [rbp+0B80h+var_E0]
/*1403e66ea*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e66f1*/  mov r9, rbx
/*1403e66f4*/  call finalize_committed_switch
/*1403e66f9*/  nop
loc_1403E66FA: /*1403e66fa*/ lea rdx, [rbp+0B80h+var_620]
/*1403e6701*/  mov r8d, 1E8h
/*1403e6707*/  mov rcx, rsi
/*1403e670a*/  call sub_141684120
/*1403e670f*/  mov [rbp+0B80h+var_59], 0
/*1403e6716*/  mov [rbp+0B80h+var_5A], 0
/*1403e671d*/  mov [rbp+0B80h+var_5B], 0
loc_1403E6724: /*1403e6724*/ lea rcx, [rbp+0B80h+var_A50]
/*1403e672b*/  call sub_14034ED40
/*1403e6730*/  nop
/*1403e6731*/  jmp loc_1403E5E7C
loc_1403E6736: /*1403e6736*/ mov rax, qword ptr [rbp+0B80h+var_140+8]
/*1403e673d*/  mov [rbp+0B80h+var_1F0], rax
/*1403e6744*/  movups xmm0, [rbp+0B80h+var_170+8]
/*1403e674b*/  movups xmm1, [rbp+0B80h+var_160+8]
/*1403e6752*/  movups xmm2, [rbp+0B80h+var_150+8]
/*1403e6759*/  movaps [rbp+0B80h+var_200], xmm2
/*1403e6760*/  movaps [rbp+0B80h+var_210], xmm1
/*1403e6767*/  movaps [rbp+0B80h+var_220], xmm0
/*1403e676e*/  mov [rbp+0B80h+var_5D], 1
/*1403e6775*/  mov [rbp+0B80h+var_5E], 1
/*1403e677c*/  mov [rbp+0B80h+var_5F], 1
loc_1403E6783: /*1403e6783*/ mov rcx, [rbp+0B80h+var_B0]
/*1403e678a*/  call sub_140064030
/*1403e678f*/  nop
/*1403e6790*/  mov [rbp+0B80h+var_5D], 1
/*1403e6797*/  mov [rbp+0B80h+var_5E], 1
/*1403e679e*/  mov [rbp+0B80h+var_5F], 1
/*1403e67a5*/  lea r13, [rbp+0B80h+var_170]
/*1403e67ac*/  mov rcx, r13
/*1403e67af*/  mov rdx, rax
/*1403e67b2*/  call sub_140B93B50
/*1403e67b7*/  nop
/*1403e67b8*/  cmp dword ptr [rbp+0B80h+var_170], 1
/*1403e67bf*/  jnz loc_1403E6982
/*1403e67c5*/  mov rax, qword ptr [rbp+0B80h+var_170+8]
/*1403e67cc*/  movzx ecx, byte ptr [rbp+0B80h+var_160]
/*1403e67d3*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e67da*/  mov byte ptr [rbp+0B80h+var_620+8], cl
/*1403e67e0*/  mov qword ptr [rbp+0B80h+var_410], r12
/*1403e67e7*/  lea rax, sub_14041C7D0
/*1403e67ee*/  mov qword ptr [rbp+0B80h+var_410+8], rax
loc_1403E67F5: /*1403e67f5*/ lea rdx, unk_141749CBB
/*1403e67fc*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e6803*/  lea r8, [rbp+0B80h+var_410]
/*1403e680a*/  call sub_14149C0F0
/*1403e680f*/  nop
/*1403e6810*/  movups xmm0, [rbp+0B80h+var_A50]
/*1403e6817*/  movaps [rbp+0B80h+var_430], xmm0
/*1403e681e*/  mov rax, qword ptr [rbp+0B80h+var_A40]
/*1403e6825*/  mov [rbp+0B80h+var_420], rax
/*1403e682c*/  mov rcx, qword ptr [rbp+0B80h+var_620]
/*1403e6833*/  movzx edx, byte ptr [rbp+0B80h+var_620+8]
/*1403e683a*/  mov [rbp+0B80h+var_5D], 1
/*1403e6841*/  mov [rbp+0B80h+var_5E], 1
/*1403e6848*/  mov [rbp+0B80h+var_5F], 1
loc_1403E684F: /*1403e684f*/ call sub_14000E270
/*1403e6854*/  nop
/*1403e6855*/  jmp loc_1403E6AF0
loc_1403E685A: /*1403e685a*/ mov qword ptr [rbp+0B80h+var_410], r13
/*1403e6861*/  lea rax, sub_140B036A0
/*1403e6868*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e686f*/  mov [rbp+0B80h+var_6A], 1
/*1403e6876*/  mov [rbp+0B80h+var_6B], 1
loc_1403E687D: /*1403e687d*/ lea rdx, unk_141749CDD
/*1403e6884*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e688b*/  lea r8, [rbp+0B80h+var_410]
/*1403e6892*/  call sub_14149C0F0
/*1403e6897*/  nop
/*1403e6898*/  lea rcx, [rbp+0B80h+var_698]
/*1403e689f*/  mov [rbp+0B80h+var_6A], 1
/*1403e68a6*/  mov [rbp+0B80h+var_6B], 1
/*1403e68ad*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403e68b4*/  lea r9, [rbp+0B80h+var_1E0]
/*1403e68bb*/  mov r8d, 17h
/*1403e68c1*/  call sub_1403DAFB0
/*1403e68c6*/  nop
/*1403e68c7*/  mov [rbp+0B80h+var_6A], 0
/*1403e68ce*/  mov [rbp+0B80h+var_6B], 1
/*1403e68d5*/  mov rcx, [rbp+0B80h+Address]
/*1403e68dc*/  movzx edx, [rbp+0B80h+var_60]
/*1403e68e3*/  call sub_14000E270
/*1403e68e8*/  nop
loc_1403E68E9: /*1403e68e9*/ lea rbx, [rbp+0B80h+var_410]
/*1403e68f0*/  lea rdx, [rbp+0B80h+var_860]
/*1403e68f7*/  mov r8d, 1E8h
/*1403e68fd*/  mov rcx, rbx
/*1403e6900*/  call sub_141684120
/*1403e6905*/  mov [rbp+0B80h+var_6A], 0
/*1403e690c*/  mov [rbp+0B80h+var_6B], 0
loc_1403E6913: /*1403e6913*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403e691a*/  mov [rsp+0C00h+var_BE0], rax
/*1403e691f*/  mov [rsp+0C00h+var_BD8], 1Ah
/*1403e6928*/  lea rcx, [rbp+0B80h+var_620]
/*1403e692f*/  lea r8, [rbp+0B80h+var_E0]
/*1403e6936*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e693d*/  mov r9, rbx
/*1403e6940*/  call finalize_committed_switch
/*1403e6945*/  nop
loc_1403E6946: /*1403e6946*/ lea rdx, [rbp+0B80h+var_620]
/*1403e694d*/  mov r8d, 1E8h
/*1403e6953*/  mov rcx, rsi
/*1403e6956*/  call sub_141684120
/*1403e695b*/  mov [rbp+0B80h+var_59], 0
/*1403e6962*/  mov [rbp+0B80h+var_5A], 0
/*1403e6969*/  mov [rbp+0B80h+var_5B], 0
loc_1403E6970: /*1403e6970*/ lea rcx, [rbp+0B80h+var_A50]
/*1403e6977*/  call sub_14034ED40
/*1403e697c*/  nop
/*1403e697d*/  jmp loc_1403E5E7C
loc_1403E6982: /*1403e6982*/ mov rcx, qword ptr [rbp+0B80h+var_170+8]
/*1403e6989*/  movzx eax, byte ptr [rbp+0B80h+var_160]
/*1403e6990*/  mov byte ptr [rbp+0B80h+var_78], al
/*1403e6996*/  mov [rbp+0B80h+var_98], rcx
/*1403e699d*/  lea rdx, [rcx+8]
/*1403e69a1*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e69a8*/  mov r9, [rbp+0B80h+var_6F0]
loc_1403E69AF: /*1403e69af*/ lea r12, [rbp+0B80h+var_410]
/*1403e69b6*/  mov rcx, r12
/*1403e69b9*/  call switch_account_0
/*1403e69be*/  nop
/*1403e69bf*/  mov rdi, qword ptr [rbp+0B80h+var_410]
/*1403e69c6*/  lea rax, [rbp+0B80h+var_410+8]
/*1403e69cd*/  cmp rdi, 2
/*1403e69d1*/  jnz loc_1403E6A90
/*1403e69d7*/  movups xmm0, xmmword ptr [rax+50h]
/*1403e69db*/  movaps [rbp+0B80h+var_5D0], xmm0
/*1403e69e2*/  movups xmm0, xmmword ptr [rax+40h]
/*1403e69e6*/  movaps [rbp+0B80h+var_5E0], xmm0
/*1403e69ed*/  movups xmm0, xmmword ptr [rax]
/*1403e69f0*/  movups xmm1, xmmword ptr [rax+10h]
/*1403e69f4*/  movups xmm2, xmmword ptr [rax+20h]
/*1403e69f8*/  movups xmm3, xmmword ptr [rax+30h]
/*1403e69fc*/  movaps [rbp+0B80h+var_5F0], xmm3
/*1403e6a03*/  movaps [rbp+0B80h+var_600], xmm2
/*1403e6a0a*/  movaps [rbp+0B80h+var_610], xmm1
/*1403e6a11*/  movaps [rbp+0B80h+var_620], xmm0
/*1403e6a18*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e6a1f*/  lea rdx, [rbp+0B80h+var_620]
/*1403e6a26*/  call sub_1403799D0
/*1403e6a2b*/  nop
/*1403e6a2c*/  movups xmm0, [rbp+0B80h+var_A50]
/*1403e6a33*/  movaps [rbp+0B80h+var_430], xmm0
/*1403e6a3a*/  mov rax, qword ptr [rbp+0B80h+var_A40]
/*1403e6a41*/  mov [rbp+0B80h+var_420], rax
/*1403e6a48*/  jmp short loc_1403E6ABE
loc_1403E6A4A: /*1403e6a4a*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403e6a51*/  mov [rsp+0C00h+var_BE0], rax
/*1403e6a56*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403e6a5d*/  lea r9, unk_14174DE40
/*1403e6a64*/  lea r8, [rbp+0B80h+var_79]
/*1403e6a6b*/  mov edx, 37h ; '7'
/*1403e6a70*/  call sub_1416C3060
/*1403e6a76*/  jmp loc_1403E7BF3
loc_1403E6A7B: /*1403e6a7b*/ mov [rbp+0B80h+var_5C], 1
loc_1403E6A82: /*1403e6a82*/ mov rcx, r12; Address
/*1403e6a85*/  call WakeByAddressSingle
/*1403e6a8a*/  nop
loc_1403E6A8B: /*1403e6a8b*/ jmp loc_1403E4F22
loc_1403E6A90: /*1403e6a90*/ mov rcx, [rax+10h]
/*1403e6a94*/  mov [rbp+0B80h+var_420], rcx
/*1403e6a9b*/  movups xmm0, xmmword ptr [rax]
/*1403e6a9e*/  movaps [rbp+0B80h+var_430], xmm0
/*1403e6aa5*/  lea rdx, [rbp+0B80h+var_3F0]
/*1403e6aac*/  lea rcx, [rbp+0B80h+var_A50]
/*1403e6ab3*/  mov r8d, 1C8h
/*1403e6ab9*/  call sub_141684120
loc_1403E6ABE: /*1403e6abe*/ mov [rbp+0B80h+var_5D], 1
/*1403e6ac5*/  mov [rbp+0B80h+var_5E], 1
/*1403e6acc*/  mov [rbp+0B80h+var_5F], 1
loc_1403E6AD3: /*1403e6ad3*/ mov rcx, [rbp+0B80h+var_98]
/*1403e6ada*/  movzx edx, byte ptr [rbp+0B80h+var_78]
/*1403e6ae1*/  call sub_14000E270
/*1403e6ae6*/  nop
/*1403e6ae7*/  cmp edi, 2
/*1403e6aea*/  jnz loc_1403E6BE9
loc_1403E6AF0: /*1403e6af0*/ mov rax, [rbp+0B80h+var_420]
/*1403e6af7*/  mov [rbp+0B80h+var_870], rax
/*1403e6afe*/  movaps xmm0, [rbp+0B80h+var_430]
/*1403e6b05*/  movaps [rbp+0B80h+var_880], xmm0
loc_1403E6B0C: /*1403e6b0c*/ mov rax, [rbp+0B80h+var_1F0]
/*1403e6b13*/  mov qword ptr [rbp+0B80h+var_3E0], rax
/*1403e6b1a*/  movaps xmm0, [rbp+0B80h+var_220]
/*1403e6b21*/  movaps xmm1, [rbp+0B80h+var_210]
/*1403e6b28*/  movaps xmm2, [rbp+0B80h+var_200]
/*1403e6b2f*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e6b36*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e6b3d*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e6b44*/  mov [rbp+0B80h+var_5D], 0
/*1403e6b4b*/  mov [rbp+0B80h+var_5E], 1
/*1403e6b52*/  mov [rbp+0B80h+var_5F], 1
/*1403e6b59*/  lea rax, [rbp+0B80h+var_880]
/*1403e6b60*/  mov [rsp+0C00h+var_BE0], rax
/*1403e6b65*/  lea rcx, [rbp+0B80h+var_170]
/*1403e6b6c*/  lea rdx, [rbp+0B80h+var_E0]
/*1403e6b73*/  lea r8, [rbp+0B80h+var_BC8]
/*1403e6b77*/  lea r9, [rbp+0B80h+var_410]
/*1403e6b7e*/  call sub_1403DB4A0
/*1403e6b83*/  nop
/*1403e6b84*/  mov [rbp+0B80h+var_9C], 1
loc_1403E6B8B: /*1403e6b8b*/ mov rcx, [rbp+0B80h+Address]
/*1403e6b92*/  movzx edx, [rbp+0B80h+var_60]
/*1403e6b99*/  call sub_14000E270
/*1403e6b9e*/  nop
/*1403e6b9f*/  mov rax, qword ptr [rbp+0B80h+var_160]
/*1403e6ba6*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e6bad*/  movups xmm0, [rbp+0B80h+var_170]
/*1403e6bb4*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e6bbb*/  mov [rbp+0B80h+var_9C], 0
/*1403e6bc2*/  lea rcx, [rbp+0B80h+var_620]
/*1403e6bc9*/  lea r8, [rbp+0B80h+var_E0]
/*1403e6bd0*/  lea r9, [rbp+0B80h+var_410]
/*1403e6bd7*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e6bde*/  call sub_1403E4470
/*1403e6be3*/  nop
loc_1403E6BE4: /*1403e6be4*/ jmp loc_1403E5E53
loc_1403E6BE9: /*1403e6be9*/ mov rax, [rbp+0B80h+var_420]
/*1403e6bf0*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e6bf7*/  movaps xmm0, [rbp+0B80h+var_430]
/*1403e6bfe*/  movups [rbp+0B80h+var_410+8], xmm0
/*1403e6c05*/  lea rcx, [rbp+0B80h+var_3F0]
/*1403e6c0c*/  lea rdx, [rbp+0B80h+var_A50]
/*1403e6c13*/  mov r8d, 1C8h
/*1403e6c19*/  call sub_141684120
/*1403e6c1e*/  mov qword ptr [rbp+0B80h+var_410], rdi
/*1403e6c25*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e6c2c*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e6c33*/  mov [rbp+0B80h+var_5D], 1
/*1403e6c3a*/  mov [rbp+0B80h+var_5E], 1
/*1403e6c41*/  mov [rbp+0B80h+var_5F], 1
loc_1403E6C48: /*1403e6c48*/ mov [rsp+0C00h+var_BE0], r12
/*1403e6c4d*/  lea rcx, [rbp+0B80h+var_880]
/*1403e6c54*/  mov rdx, rbx
/*1403e6c57*/  call sub_140379AC0
/*1403e6c5c*/  nop
/*1403e6c5d*/  cmp qword ptr [rbp+0B80h+var_880], 0FFFFFFFFFFFFFFFFh
/*1403e6c65*/  jnz loc_1403E6B0C
/*1403e6c6b*/  mov rax, [rbp+0B80h+var_1F0]
/*1403e6c72*/  mov qword ptr [rbp+0B80h+var_3E0], rax
/*1403e6c79*/  movaps xmm0, [rbp+0B80h+var_220]
/*1403e6c80*/  movaps xmm1, [rbp+0B80h+var_210]
/*1403e6c87*/  movaps xmm2, [rbp+0B80h+var_200]
/*1403e6c8e*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e6c95*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e6c9c*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e6ca3*/  mov [rbp+0B80h+var_5D], 0
/*1403e6caa*/  mov [rbp+0B80h+var_5E], 1
/*1403e6cb1*/  mov [rbp+0B80h+var_5F], 1
/*1403e6cb8*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e6cbf*/  lea rdx, [rbp+0B80h+var_410]
/*1403e6cc6*/  call sub_140387CC0
/*1403e6ccb*/  nop
/*1403e6ccc*/  cmp dword ptr [rbp+0B80h+var_1E0], 0FFFFFFFFh
/*1403e6cd3*/  jz loc_1403E6FB3
/*1403e6cd9*/  movups xmm0, [rbp+0B80h+var_190]
/*1403e6ce0*/  movaps [rbp+0B80h+var_120], xmm0
/*1403e6ce7*/  movups xmm0, [rbp+0B80h+var_1A0]
/*1403e6cee*/  movaps [rbp+0B80h+var_130], xmm0
/*1403e6cf5*/  movups xmm0, [rbp+0B80h+var_1E0]
/*1403e6cfc*/  movups xmm1, [rbp+0B80h+var_1D0]
/*1403e6d03*/  movups xmm2, [rbp+0B80h+var_1C0]
/*1403e6d0a*/  movups xmm3, [rbp+0B80h+var_1B0]
/*1403e6d11*/  movaps [rbp+0B80h+var_140], xmm3
/*1403e6d18*/  movaps [rbp+0B80h+var_150], xmm2
/*1403e6d1f*/  movaps [rbp+0B80h+var_160], xmm1
/*1403e6d26*/  movaps [rbp+0B80h+var_170], xmm0
/*1403e6d2d*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e6d34*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e6d3b*/  mov [rbp+0B80h+var_68], 1
/*1403e6d42*/  mov [rbp+0B80h+var_69], 1
loc_1403E6D49: /*1403e6d49*/ lea rcx, [rbp+0B80h+var_678]
/*1403e6d50*/  mov rdx, rbx
/*1403e6d53*/  call sub_1403DEE30
/*1403e6d58*/  nop
/*1403e6d59*/  cmp qword ptr [rbp+0B80h+var_678], 0FFFFFFFFFFFFFFFFh
/*1403e6d61*/  jz loc_1403E77FE
/*1403e6d67*/  mov rax, [rbp+0B80h+var_668]
/*1403e6d6e*/  mov [rbp+0B80h+var_F0], rax
/*1403e6d75*/  movups xmm0, [rbp+0B80h+var_678]
/*1403e6d7c*/  movaps [rbp+0B80h+var_100], xmm0
/*1403e6d83*/  mov qword ptr [rbp+0B80h+var_410], r13
/*1403e6d8a*/  lea rax, sub_140B036A0
/*1403e6d91*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e6d98*/  lea rax, [rbp+0B80h+var_100]
/*1403e6d9f*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e6da6*/  lea rax, sub_1400015F0
/*1403e6dad*/  mov qword ptr [rbp+0B80h+var_400+8], rax
/*1403e6db4*/  mov [rbp+0B80h+var_80], 1
loc_1403E6DBB: /*1403e6dbb*/ lea rdx, unk_141749C35
/*1403e6dc2*/  lea rcx, [rbp+0B80h+var_620]
/*1403e6dc9*/  lea r8, [rbp+0B80h+var_410]
/*1403e6dd0*/  call sub_14149C0F0
/*1403e6dd5*/  nop
/*1403e6dd6*/  mov rax, qword ptr [rbp+0B80h+var_620]
/*1403e6ddd*/  mov [rbp+0B80h+var_78], rax
/*1403e6de4*/  mov rax, qword ptr [rbp+0B80h+var_620+8]
/*1403e6deb*/  mov [rbp+0B80h+var_98], rax
/*1403e6df2*/  mov rdi, qword ptr [rbp+0B80h+var_610]
/*1403e6df9*/  mov [rbp+0B80h+var_81], 1
/*1403e6e00*/  mov [rbp+0B80h+var_82], 1
loc_1403E6E07: /*1403e6e07*/ mov [rsp+0C00h+var_BE0], 20h ; ' '
/*1403e6e10*/  lea rdx, aFailed; "failed"
/*1403e6e17*/  lea r9, unk_141749B5D
/*1403e6e1e*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e6e25*/  mov r8d, 6
/*1403e6e2b*/  call sub_140343ED0
/*1403e6e30*/  nop
/*1403e6e31*/  mov [rbp+0B80h+var_81], 1
/*1403e6e38*/  mov [rbp+0B80h+var_82], 0
/*1403e6e3f*/  mov rcx, [rbp+0B80h+Address]
/*1403e6e46*/  movzx edx, [rbp+0B80h+var_60]
/*1403e6e4d*/  call sub_14000E270
/*1403e6e52*/  nop
/*1403e6e53*/  mov rax, [rbp+0B80h+var_78]
/*1403e6e5a*/  mov qword ptr [rbp+0B80h+var_410], rax
/*1403e6e61*/  mov rax, [rbp+0B80h+var_98]
/*1403e6e68*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e6e6f*/  mov qword ptr [rbp+0B80h+var_400], rdi
/*1403e6e76*/  mov [rbp+0B80h+var_81], 0
/*1403e6e7d*/  mov [rbp+0B80h+var_82], 0
/*1403e6e84*/  lea rcx, [rbp+0B80h+var_620]
/*1403e6e8b*/  lea r8, [rbp+0B80h+var_E0]
/*1403e6e92*/  lea r9, [rbp+0B80h+var_410]
/*1403e6e99*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e6ea0*/  call sub_1403E4470
/*1403e6ea5*/  nop
/*1403e6ea6*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e6ead*/  mov [rsi+18h], rax
/*1403e6eb1*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e6eb8*/  movups xmmword ptr [rsi+8], xmm0
/*1403e6ebc*/  mov qword ptr [rsi], 2
/*1403e6ec3*/  mov rdx, qword ptr [rbp+0B80h+var_100]
/*1403e6eca*/  test rdx, rdx
/*1403e6ecd*/  jz short loc_1403E6EE1
/*1403e6ecf*/  mov rcx, qword ptr [rbp+0B80h+var_100+8]
/*1403e6ed6*/  mov r8d, 1
/*1403e6edc*/  call sub_140001660
loc_1403E6EE1: /*1403e6ee1*/ mov [rbp+0B80h+var_5D], 0
/*1403e6ee8*/  mov [rbp+0B80h+var_5E], 0
/*1403e6eef*/  mov [rbp+0B80h+var_5F], 1
loc_1403E6EF6: /*1403e6ef6*/ lea rcx, [rbp+0B80h+var_170]
/*1403e6efd*/  call sub_14034ED40
/*1403e6f02*/  nop
/*1403e6f03*/  jmp loc_1403E5E70
loc_1403E6F08: /*1403e6f08*/ mov [rbp+0B80h+var_5C], 1
loc_1403E6F0F: /*1403e6f0f*/ call sub_1416C2250
/*1403e6f14*/  nop
/*1403e6f15*/  test al, al
/*1403e6f17*/  jnz loc_1403E4F14
/*1403e6f1d*/  mov byte ptr [r12+1], 1
/*1403e6f23*/  jmp loc_1403E4F14
loc_1403E6F28: /*1403e6f28*/ mov [rbp+0B80h+var_5C], 1
/*1403e6f2f*/  mov rcx, r12; Address
/*1403e6f32*/  call WakeByAddressSingle
/*1403e6f37*/  nop
/*1403e6f38*/  jmp loc_1403E5557
loc_1403E6F3D: /*1403e6f3d*/ mov [rbp+0B80h+var_5C], 1
/*1403e6f44*/  call sub_1416C2250
/*1403e6f49*/  nop
/*1403e6f4a*/  test al, al
/*1403e6f4c*/  jnz loc_1403E5549
/*1403e6f52*/  mov byte ptr [r12+1], 1
/*1403e6f58*/  jmp loc_1403E5549
loc_1403E6F5D: /*1403e6f5d*/ lea rax, off_1417541C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*1403e6f64*/  mov [rsp+0C00h+var_BE0], rax
/*1403e6f69*/  lea rcx, aADisplayImplem_1; "a Display implementation returned an er"...
/*1403e6f70*/  lea r9, unk_14174DE40
/*1403e6f77*/  lea r8, [rbp+0B80h+var_79]
/*1403e6f7e*/  mov edx, 37h ; '7'
/*1403e6f83*/  call sub_1416C3060
/*1403e6f89*/  jmp loc_1403E7BF3
loc_1403E6F8E: /*1403e6f8e*/ mov [rbp+0B80h+var_5C], 1
loc_1403E6F95: /*1403e6f95*/ call sub_1416C2250
/*1403e6f9a*/  nop
/*1403e6f9b*/  test al, al
/*1403e6f9d*/  jnz loc_1403E5359
/*1403e6fa3*/  mov rax, [rbp+0B80h+var_98]
/*1403e6faa*/  mov byte ptr [rax+1], 1
/*1403e6fae*/  jmp loc_1403E5359
loc_1403E6FB3: /*1403e6fb3*/ cmp dword ptr [rbp+0B80h+var_1E0+8], 0
/*1403e6fba*/  jnz loc_1403E7926
/*1403e6fc0*/  cmp byte ptr [rbp+0B80h+var_1E0+0Ch], 0
/*1403e6fc7*/  jnz loc_1403E7926
/*1403e6fcd*/  mov [rbp+0B80h+var_5D], 0
/*1403e6fd4*/  mov [rbp+0B80h+var_5E], 1
/*1403e6fdb*/  mov [rbp+0B80h+var_5F], 1
loc_1403E6FE2: /*1403e6fe2*/ mov [rsp+0C00h+var_BE0], 9
/*1403e6feb*/  lea rdx, aDiskReconciled; "disk_reconciled"
/*1403e6ff2*/  lea r9, unk_1417499B6
/*1403e6ff9*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e7000*/  mov r8d, 0Fh
/*1403e7006*/  call sub_140343ED0
/*1403e700b*/  nop
loc_1403E700C: /*1403e700c*/ mov [rbp+0B80h+var_59], 0
/*1403e7013*/  mov [rbp+0B80h+var_5A], 1
/*1403e701a*/  mov [rbp+0B80h+var_5B], 1
loc_1403E7021: /*1403e7021*/ mov [rsp+0C00h+var_BE0], 0Eh
/*1403e702a*/  lea rdx, aLaunchStarted; "launch_started"
/*1403e7031*/  lea r9, aStatusPending; "status=pending"
/*1403e7038*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e703f*/  mov r8d, 0Eh
/*1403e7045*/  call sub_140343ED0
/*1403e704a*/  nop
/*1403e704b*/  mov [rbp+0B80h+var_59], 0
/*1403e7052*/  mov [rbp+0B80h+var_5A], 1
/*1403e7059*/  mov [rbp+0B80h+var_5B], 1
/*1403e7060*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e7067*/  call sub_1403B6530
/*1403e706c*/  nop
/*1403e706d*/  cmp dword ptr [rbp+0B80h+var_1E0], 0FFFFFFFFh
/*1403e7074*/  jz loc_1403E72C4
/*1403e707a*/  movups xmm0, [rbp+0B80h+var_190]
/*1403e7081*/  movaps [rbp+0B80h+var_120], xmm0
/*1403e7088*/  movups xmm0, [rbp+0B80h+var_1A0]
/*1403e708f*/  movaps [rbp+0B80h+var_130], xmm0
/*1403e7096*/  movups xmm0, [rbp+0B80h+var_1E0]
/*1403e709d*/  movups xmm1, [rbp+0B80h+var_1D0]
/*1403e70a4*/  movups xmm2, [rbp+0B80h+var_1C0]
/*1403e70ab*/  movups xmm3, [rbp+0B80h+var_1B0]
/*1403e70b2*/  movaps [rbp+0B80h+var_140], xmm3
/*1403e70b9*/  movaps [rbp+0B80h+var_150], xmm2
/*1403e70c0*/  movaps [rbp+0B80h+var_160], xmm1
/*1403e70c7*/  movaps [rbp+0B80h+var_170], xmm0
/*1403e70ce*/  mov qword ptr [rbp+0B80h+var_410], r15
/*1403e70d5*/  lea rax, sub_140B036A0
/*1403e70dc*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e70e3*/  mov [rbp+0B80h+var_64], 1
/*1403e70ea*/  mov [rbp+0B80h+var_65], 1
loc_1403E70F1: /*1403e70f1*/ lea rdx, unk_141749A09
/*1403e70f8*/  lea rcx, [rbp+0B80h+var_100]
/*1403e70ff*/  lea r8, [rbp+0B80h+var_410]
/*1403e7106*/  call sub_14149C0F0
/*1403e710b*/  nop
/*1403e710c*/  lea rcx, [rbp+0B80h+var_698]
/*1403e7113*/  mov [rbp+0B80h+var_64], 1
/*1403e711a*/  mov [rbp+0B80h+var_65], 1
/*1403e7121*/  lea rdx, aClientRestartF; "CLIENT_RESTART_FAILED"
/*1403e7128*/  lea r9, [rbp+0B80h+var_100]
/*1403e712f*/  mov r8d, 15h
/*1403e7135*/  call sub_1403DAFB0
/*1403e713a*/  nop
/*1403e713b*/  mov [rbp+0B80h+var_64], 1
/*1403e7142*/  mov [rbp+0B80h+var_65], 1
/*1403e7149*/  lea rcx, [rbp+0B80h+var_410]
/*1403e7150*/  lea rdx, [rbp+0B80h+var_170]
/*1403e7157*/  call sub_14037B970
/*1403e715c*/  nop
/*1403e715d*/  mov rcx, qword ptr [rbp+0B80h+var_410+8]
/*1403e7164*/  mov rdx, qword ptr [rbp+0B80h+var_400]
/*1403e716b*/  mov [rbp+0B80h+var_78], rcx
/*1403e7172*/  call sub_1403DB1E0
/*1403e7177*/  mov qword ptr [rbp+0B80h+var_678], rax
/*1403e717e*/  mov qword ptr [rbp+0B80h+var_678+8], rdx
/*1403e7185*/  lea rax, [rbp+0B80h+var_678]
/*1403e718c*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e7193*/  lea rax, sub_14041F680
/*1403e719a*/  mov qword ptr [rbp+0B80h+var_620+8], rax
loc_1403E71A1: /*1403e71a1*/ lea rdx, unk_141749922
/*1403e71a8*/  lea rcx, [rbp+0B80h+var_220]
/*1403e71af*/  lea r8, [rbp+0B80h+var_620]
/*1403e71b6*/  call sub_14149C0F0
/*1403e71bb*/  nop
/*1403e71bc*/  mov rdx, qword ptr [rbp+0B80h+var_410]
/*1403e71c3*/  test rdx, rdx
/*1403e71c6*/  jz short loc_1403E71DA
/*1403e71c8*/  mov r8d, 1
/*1403e71ce*/  mov rcx, [rbp+0B80h+var_78]
/*1403e71d5*/  call sub_140001660
loc_1403E71DA: /*1403e71da*/ mov [rbp+0B80h+var_64], 1
/*1403e71e1*/  mov [rbp+0B80h+var_65], 1
loc_1403E71E8: /*1403e71e8*/ lea rdx, aLaunchFailed; "launch_failed"
/*1403e71ef*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e71f6*/  lea r9, [rbp+0B80h+var_220]
/*1403e71fd*/  mov r8d, 0Dh
/*1403e7203*/  call sub_140343D80
/*1403e7208*/  nop
/*1403e7209*/  mov [rbp+0B80h+var_64], 0
/*1403e7210*/  mov [rbp+0B80h+var_65], 1
/*1403e7217*/  mov rcx, [rbp+0B80h+Address]
/*1403e721e*/  movzx edx, [rbp+0B80h+var_60]
/*1403e7225*/  call sub_14000E270
/*1403e722a*/  nop
loc_1403E722B: /*1403e722b*/ lea rbx, [rbp+0B80h+var_410]
/*1403e7232*/  lea rdx, [rbp+0B80h+var_860]
/*1403e7239*/  mov r8d, 1E8h
/*1403e723f*/  mov rcx, rbx
/*1403e7242*/  call sub_141684120
/*1403e7247*/  mov [rbp+0B80h+var_64], 0
/*1403e724e*/  mov [rbp+0B80h+var_65], 0
loc_1403E7255: /*1403e7255*/ lea rax, aCommittedLaunc; "committed_launch_failed"
/*1403e725c*/  mov [rsp+0C00h+var_BE0], rax
/*1403e7261*/  mov [rsp+0C00h+var_BD8], 17h
/*1403e726a*/  lea rcx, [rbp+0B80h+var_620]
/*1403e7271*/  lea r8, [rbp+0B80h+var_E0]
/*1403e7278*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e727f*/  mov r9, rbx
/*1403e7282*/  call finalize_committed_switch
/*1403e7287*/  nop
loc_1403E7288: /*1403e7288*/ lea rdx, [rbp+0B80h+var_620]
/*1403e728f*/  mov r8d, 1E8h
/*1403e7295*/  mov rcx, rsi
/*1403e7298*/  call sub_141684120
/*1403e729d*/  mov [rbp+0B80h+var_59], 0
/*1403e72a4*/  mov [rbp+0B80h+var_5A], 0
/*1403e72ab*/  mov [rbp+0B80h+var_5B], 0
loc_1403E72B2: /*1403e72b2*/ lea rcx, [rbp+0B80h+var_170]
/*1403e72b9*/  call sub_14034ED40
/*1403e72be*/  nop
/*1403e72bf*/  jmp loc_1403E5E7C
loc_1403E72C4: /*1403e72c4*/ mov [rbp+0B80h+var_59], 0
/*1403e72cb*/  mov [rbp+0B80h+var_5A], 1
/*1403e72d2*/  mov [rbp+0B80h+var_5B], 1
/*1403e72d9*/  mov [rsp+0C00h+var_BE0], 9
/*1403e72e2*/  lea rdx, aLaunchReady; "launch_ready"
/*1403e72e9*/  lea r9, unk_1417499B6
/*1403e72f0*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e72f7*/  mov r8d, 0Ch
/*1403e72fd*/  call sub_140343ED0
/*1403e7302*/  nop
/*1403e7303*/  mov r8, [rbp+0B80h+var_6F8]
/*1403e730a*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e7311*/  mov [rbp+0B80h+var_59], 0
/*1403e7318*/  mov [rbp+0B80h+var_5A], 1
/*1403e731f*/  mov [rbp+0B80h+var_5B], 1
/*1403e7326*/  lea rcx, [rbp+0B80h+var_100]
/*1403e732d*/  mov rdx, rbx
/*1403e7330*/  call sub_1403EC3A0
/*1403e7335*/  nop
/*1403e7336*/  cmp qword ptr [rbp+0B80h+var_100], 0FFFFFFFFFFFFFFFFh
/*1403e733e*/  jz loc_1403E756F
/*1403e7344*/  mov rax, [rbp+0B80h+var_F0]
/*1403e734b*/  mov qword ptr [rbp+0B80h+var_210], rax
/*1403e7352*/  movups xmm0, [rbp+0B80h+var_100]
/*1403e7359*/  movaps [rbp+0B80h+var_220], xmm0
/*1403e7360*/  mov [rbp+0B80h+var_62], 1
loc_1403E7367: /*1403e7367*/ mov [rsp+0C00h+var_BE0], 1Eh
/*1403e7370*/  lea rdx, aLiveVerifyFail; "live_verify_failed"
/*1403e7377*/  lea r9, unk_141749AA5
/*1403e737e*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e7385*/  mov r8d, 12h
/*1403e738b*/  call sub_140343ED0
/*1403e7390*/  nop
/*1403e7391*/  mov [rbp+0B80h+var_62], 1
/*1403e7398*/  mov byte ptr [rsp+0C00h+var_BE0], 0
/*1403e739d*/  lea rcx, [rbp+0B80h+var_620]
/*1403e73a4*/  mov edx, 5
/*1403e73a9*/  xor r8d, r8d
/*1403e73ac*/  xor r9d, r9d
/*1403e73af*/  call acquire_with_policy
/*1403e73b4*/  nop
/*1403e73b5*/  cmp dword ptr [rbp+0B80h+var_620], 0FFFFFFFFh
/*1403e73bc*/  jz loc_1403E76B6
/*1403e73c2*/  movups xmm0, [rbp+0B80h+var_5D0]
/*1403e73c9*/  movaps [rbp+0B80h+var_3C0], xmm0
/*1403e73d0*/  movups xmm0, [rbp+0B80h+var_5E0]
/*1403e73d7*/  movaps [rbp+0B80h+var_3D0], xmm0
/*1403e73de*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e73e5*/  movups xmm1, [rbp+0B80h+var_610]
/*1403e73ec*/  movups xmm2, [rbp+0B80h+var_600]
/*1403e73f3*/  movups xmm3, [rbp+0B80h+var_5F0]
/*1403e73fa*/  movaps [rbp+0B80h+var_3E0], xmm3
/*1403e7401*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e7408*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e740f*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e7416*/  lea rax, [rbp+0B80h+var_220]
/*1403e741d*/  mov qword ptr [rbp+0B80h+var_170], rax
/*1403e7424*/  lea rax, sub_1400015F0
/*1403e742b*/  mov qword ptr [rbp+0B80h+var_170+8], rax
/*1403e7432*/  mov qword ptr [rbp+0B80h+var_160], r14
/*1403e7439*/  lea rax, sub_140B036A0
/*1403e7440*/  mov qword ptr [rbp+0B80h+var_160+8], rax
/*1403e7447*/  mov [rbp+0B80h+var_7D], 1
loc_1403E744E: /*1403e744e*/ lea rdx, unk_141749AE1
/*1403e7455*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e745c*/  lea r8, [rbp+0B80h+var_170]
/*1403e7463*/  call sub_14149C0F0
/*1403e7468*/  nop
/*1403e7469*/  mov rax, qword ptr [rbp+0B80h+var_1E0]
/*1403e7470*/  mov [rbp+0B80h+var_78], rax
/*1403e7477*/  mov rax, qword ptr [rbp+0B80h+var_1E0+8]
/*1403e747e*/  mov [rbp+0B80h+var_98], rax
/*1403e7485*/  mov rdi, qword ptr [rbp+0B80h+var_1D0]
/*1403e748c*/  mov [rbp+0B80h+var_7E], 1
/*1403e7493*/  mov [rbp+0B80h+var_7F], 1
loc_1403E749A: /*1403e749a*/ mov [rsp+0C00h+var_BE0], 21h ; '!'
/*1403e74a3*/  lea rdx, aFailed; "failed"
/*1403e74aa*/  lea r9, unk_141749B28
/*1403e74b1*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e74b8*/  mov r8d, 6
/*1403e74be*/  call sub_140343ED0
/*1403e74c3*/  nop
/*1403e74c4*/  mov [rbp+0B80h+var_7E], 1
/*1403e74cb*/  mov [rbp+0B80h+var_7F], 0
/*1403e74d2*/  mov rcx, [rbp+0B80h+Address]
/*1403e74d9*/  movzx edx, [rbp+0B80h+var_60]
/*1403e74e0*/  call sub_14000E270
/*1403e74e5*/  nop
/*1403e74e6*/  mov rax, [rbp+0B80h+var_78]
/*1403e74ed*/  mov qword ptr [rbp+0B80h+var_170], rax
/*1403e74f4*/  mov rax, [rbp+0B80h+var_98]
/*1403e74fb*/  mov qword ptr [rbp+0B80h+var_170+8], rax
/*1403e7502*/  mov qword ptr [rbp+0B80h+var_160], rdi
/*1403e7509*/  mov [rbp+0B80h+var_7E], 0
/*1403e7510*/  mov [rbp+0B80h+var_7F], 0
/*1403e7517*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e751e*/  lea r8, [rbp+0B80h+var_E0]
/*1403e7525*/  lea r9, [rbp+0B80h+var_170]
/*1403e752c*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e7533*/  call sub_1403E4470
/*1403e7538*/  nop
/*1403e7539*/  mov rax, qword ptr [rbp+0B80h+var_1D0]
/*1403e7540*/  mov [rsi+18h], rax
/*1403e7544*/  movups xmm0, [rbp+0B80h+var_1E0]
/*1403e754b*/  movups xmmword ptr [rsi+8], xmm0
/*1403e754f*/  mov qword ptr [rsi], 2
/*1403e7556*/  mov [rbp+0B80h+var_62], 0
loc_1403E755D: /*1403e755d*/ lea rcx, [rbp+0B80h+var_410]
/*1403e7564*/  call sub_14034ED40
/*1403e7569*/  nop
/*1403e756a*/  jmp loc_1403E77D7
loc_1403E756F: /*1403e756f*/ mov [rbp+0B80h+var_59], 0
/*1403e7576*/  mov [rbp+0B80h+var_5A], 1
/*1403e757d*/  mov [rbp+0B80h+var_5B], 1
loc_1403E7584: /*1403e7584*/ mov [rsp+0C00h+var_BE0], 9
/*1403e758d*/  lea rdx, aLiveVerified; "live_verified"
/*1403e7594*/  lea r9, unk_1417499B6
/*1403e759b*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e75a2*/  mov r8d, 0Dh
/*1403e75a8*/  call sub_140343ED0
/*1403e75ad*/  nop
/*1403e75ae*/  lea rcx, [rbp+0B80h+var_698]
/*1403e75b5*/  mov [rbp+0B80h+var_59], 0
/*1403e75bc*/  mov [rbp+0B80h+var_5A], 1
/*1403e75c3*/  mov [rbp+0B80h+var_5B], 1
/*1403e75ca*/  call sub_1402AFB50
/*1403e75cf*/  nop
/*1403e75d0*/  mov [rbp+0B80h+var_59], 0
/*1403e75d7*/  mov [rbp+0B80h+var_5A], 0
/*1403e75de*/  mov [rbp+0B80h+var_5B], 1
/*1403e75e5*/  mov rcx, [rbp+0B80h+Address]
/*1403e75ec*/  movzx edx, [rbp+0B80h+var_60]
/*1403e75f3*/  call sub_14000E270
/*1403e75f8*/  nop
loc_1403E75F9: /*1403e75f9*/ lea rbx, [rbp+0B80h+var_410]
/*1403e7600*/  lea rdx, [rbp+0B80h+var_860]
/*1403e7607*/  mov r8d, 1E8h
/*1403e760d*/  mov rcx, rbx
/*1403e7610*/  call sub_141684120
/*1403e7615*/  mov [rbp+0B80h+var_59], 0
/*1403e761c*/  mov [rbp+0B80h+var_5A], 0
/*1403e7623*/  mov [rbp+0B80h+var_5B], 0
loc_1403E762A: /*1403e762a*/ lea rax, aSuccess; "success"
/*1403e7631*/  mov [rsp+0C00h+var_BE0], rax
/*1403e7636*/  mov [rsp+0C00h+var_BD8], 7
/*1403e763f*/  lea rcx, [rbp+0B80h+var_620]
/*1403e7646*/  lea r8, [rbp+0B80h+var_E0]
/*1403e764d*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e7654*/  mov r9, rbx
/*1403e7657*/  call finalize_committed_switch
/*1403e765c*/  nop
loc_1403E765D: /*1403e765d*/ lea rdx, [rbp+0B80h+var_620]
/*1403e7664*/  mov r8d, 1E8h
/*1403e766a*/  mov rcx, rsi
/*1403e766d*/  call sub_141684120
/*1403e7672*/  lea rcx, [rbp+0B80h+var_BC8]
/*1403e7676*/  call sub_14034EE60
/*1403e767b*/  mov [rbp+0B80h+var_63], 0
loc_1403E7682: /*1403e7682*/ lea rcx, [rbp+0B80h+hObject]
/*1403e7689*/  call sub_14034E7D0
/*1403e768e*/  nop
/*1403e768f*/  mov rdx, [rbp+0B80h+var_108]
/*1403e7696*/  test rdx, rdx
/*1403e7699*/  jz loc_1403E4AC4
/*1403e769f*/  mov r8d, 1
/*1403e76a5*/  mov rcx, [rbp+0B80h+var_C0]
/*1403e76ac*/  call sub_140001660
/*1403e76b1*/  jmp loc_1403E4AC4
loc_1403E76B6: /*1403e76b6*/ mov rax, qword ptr [rbp+0B80h+var_5F0+8]
/*1403e76bd*/  mov qword ptr [rbp+0B80h+var_3E0], rax
/*1403e76c4*/  movups xmm0, [rbp+0B80h+var_620+8]
/*1403e76cb*/  movups xmm1, [rbp+0B80h+var_610+8]
/*1403e76d2*/  movups xmm2, [rbp+0B80h+var_600+8]
/*1403e76d9*/  movaps [rbp+0B80h+var_3F0], xmm2
/*1403e76e0*/  movaps [rbp+0B80h+var_400], xmm1
/*1403e76e7*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e76ee*/  lea rax, [rbp+0B80h+var_220]
/*1403e76f5*/  mov qword ptr [rbp+0B80h+var_620], rax
/*1403e76fc*/  lea rax, sub_1400015F0
/*1403e7703*/  mov qword ptr [rbp+0B80h+var_620+8], rax
/*1403e770a*/  mov [rbp+0B80h+var_9A], 1
loc_1403E7711: /*1403e7711*/ lea rdx, unk_141749AC3
/*1403e7718*/  lea rbx, [rbp+0B80h+var_170]
/*1403e771f*/  lea r8, [rbp+0B80h+var_620]
/*1403e7726*/  mov rcx, rbx
/*1403e7729*/  call sub_14149C0F0
/*1403e772e*/  nop
/*1403e772f*/  mov [rbp+0B80h+var_9A], 0
/*1403e7736*/  mov [rsp+0C00h+var_BE0], rbx
/*1403e773b*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e7742*/  lea rdx, [rbp+0B80h+var_E0]
/*1403e7749*/  lea r8, [rbp+0B80h+var_BC8]
/*1403e774d*/  lea r9, [rbp+0B80h+var_410]
/*1403e7754*/  call sub_1403DB4A0
/*1403e7759*/  nop
/*1403e775a*/  mov [rbp+0B80h+var_9B], 1
loc_1403E7761: /*1403e7761*/ mov rcx, [rbp+0B80h+Address]
/*1403e7768*/  movzx edx, [rbp+0B80h+var_60]
/*1403e776f*/  call sub_14000E270
/*1403e7774*/  nop
/*1403e7775*/  mov rax, qword ptr [rbp+0B80h+var_1D0]
/*1403e777c*/  mov qword ptr [rbp+0B80h+var_400], rax
/*1403e7783*/  movups xmm0, [rbp+0B80h+var_1E0]
/*1403e778a*/  movaps [rbp+0B80h+var_410], xmm0
/*1403e7791*/  mov [rbp+0B80h+var_9B], 0
/*1403e7798*/  lea rcx, [rbp+0B80h+var_620]
/*1403e779f*/  lea r8, [rbp+0B80h+var_E0]
/*1403e77a6*/  lea r9, [rbp+0B80h+var_410]
/*1403e77ad*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e77b4*/  call sub_1403E4470
/*1403e77b9*/  nop
/*1403e77ba*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e77c1*/  mov [rsi+18h], rax
/*1403e77c5*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e77cc*/  movups xmmword ptr [rsi+8], xmm0
/*1403e77d0*/  mov qword ptr [rsi], 2
loc_1403E77D7: /*1403e77d7*/ mov rdx, qword ptr [rbp+0B80h+var_220]
/*1403e77de*/  test rdx, rdx
/*1403e77e1*/  jz loc_1403E5E70
/*1403e77e7*/  mov rcx, qword ptr [rbp+0B80h+var_220+8]
loc_1403E77EE: /*1403e77ee*/ mov r8d, 1
/*1403e77f4*/  call sub_140001660
/*1403e77f9*/  jmp loc_1403E5E70
loc_1403E77FE: /*1403e77fe*/ mov qword ptr [rbp+0B80h+var_410], r13
/*1403e7805*/  lea rax, sub_140B036A0
/*1403e780c*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e7813*/  mov [rbp+0B80h+var_68], 1
/*1403e781a*/  mov [rbp+0B80h+var_69], 1
loc_1403E7821: /*1403e7821*/ lea rdx, unk_141749C5A
/*1403e7828*/  lea rcx, [rbp+0B80h+var_100]
/*1403e782f*/  lea r8, [rbp+0B80h+var_410]
/*1403e7836*/  call sub_14149C0F0
/*1403e783b*/  nop
/*1403e783c*/  lea rcx, [rbp+0B80h+var_698]
/*1403e7843*/  mov [rbp+0B80h+var_68], 1
/*1403e784a*/  mov [rbp+0B80h+var_69], 1
/*1403e7851*/  lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403e7858*/  lea r9, [rbp+0B80h+var_100]
/*1403e785f*/  mov r8d, 17h
/*1403e7865*/  call sub_1403DAFB0
/*1403e786a*/  nop
/*1403e786b*/  mov [rbp+0B80h+var_68], 0
/*1403e7872*/  mov [rbp+0B80h+var_69], 1
/*1403e7879*/  mov rcx, [rbp+0B80h+Address]
/*1403e7880*/  movzx edx, [rbp+0B80h+var_60]
/*1403e7887*/  call sub_14000E270
/*1403e788c*/  nop
loc_1403E788D: /*1403e788d*/ lea rbx, [rbp+0B80h+var_410]
/*1403e7894*/  lea rdx, [rbp+0B80h+var_860]
/*1403e789b*/  mov r8d, 1E8h
/*1403e78a1*/  mov rcx, rbx
/*1403e78a4*/  call sub_141684120
/*1403e78a9*/  mov [rbp+0B80h+var_68], 0
/*1403e78b0*/  mov [rbp+0B80h+var_69], 0
loc_1403E78B7: /*1403e78b7*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403e78be*/  mov [rsp+0C00h+var_BE0], rax
/*1403e78c3*/  mov [rsp+0C00h+var_BD8], 1Ah
/*1403e78cc*/  lea rcx, [rbp+0B80h+var_620]
/*1403e78d3*/  lea r8, [rbp+0B80h+var_E0]
/*1403e78da*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e78e1*/  mov r9, rbx
/*1403e78e4*/  call finalize_committed_switch
/*1403e78e9*/  nop
loc_1403E78EA: /*1403e78ea*/ lea rdx, [rbp+0B80h+var_620]
/*1403e78f1*/  mov r8d, 1E8h
/*1403e78f7*/  mov rcx, rsi
/*1403e78fa*/  call sub_141684120
/*1403e78ff*/  mov [rbp+0B80h+var_5D], 0
/*1403e7906*/  mov [rbp+0B80h+var_5E], 0
/*1403e790d*/  mov [rbp+0B80h+var_5F], 0
loc_1403E7914: /*1403e7914*/ lea rcx, [rbp+0B80h+var_170]
/*1403e791b*/  call sub_14034ED40
/*1403e7920*/  nop
/*1403e7921*/  jmp loc_1403E5E7C
loc_1403E7926: /*1403e7926*/ mov r8, [rbp+0B80h+var_6F8]
/*1403e792d*/  mov r9, [rbp+0B80h+var_6F0]
/*1403e7934*/  mov [rbp+0B80h+var_5D], 0
/*1403e793b*/  mov [rbp+0B80h+var_5E], 1
/*1403e7942*/  mov [rbp+0B80h+var_5F], 1
/*1403e7949*/  lea rcx, [rbp+0B80h+var_1E0]
/*1403e7950*/  mov rdx, rbx
/*1403e7953*/  call sub_1403DEE30
/*1403e7958*/  nop
/*1403e7959*/  cmp qword ptr [rbp+0B80h+var_1E0], 0FFFFFFFFFFFFFFFFh
/*1403e7961*/  jz loc_1403E7A68
/*1403e7967*/  mov rax, qword ptr [rbp+0B80h+var_1D0]
/*1403e796e*/  mov qword ptr [rbp+0B80h+var_160], rax
/*1403e7975*/  movups xmm0, [rbp+0B80h+var_1E0]
/*1403e797c*/  movaps [rbp+0B80h+var_170], xmm0
/*1403e7983*/  mov [rbp+0B80h+var_7C], 1
loc_1403E798A: /*1403e798a*/ mov [rsp+0C00h+var_BE0], 20h ; ' '
/*1403e7993*/  lea rdx, aFailed; "failed"
/*1403e799a*/  lea r9, unk_141749B5D
/*1403e79a1*/  lea rcx, [rbp+0B80h+var_E0]
/*1403e79a8*/  mov r8d, 6
/*1403e79ae*/  call sub_140343ED0
/*1403e79b3*/  nop
/*1403e79b4*/  mov [rbp+0B80h+var_7C], 0
/*1403e79bb*/  mov rcx, [rbp+0B80h+Address]
/*1403e79c2*/  movzx edx, [rbp+0B80h+var_60]
/*1403e79c9*/  call sub_14000E270
/*1403e79ce*/  nop
/*1403e79cf*/  mov qword ptr [rbp+0B80h+var_620], r13
/*1403e79d6*/  lea rax, sub_1400015F0
/*1403e79dd*/  mov qword ptr [rbp+0B80h+var_620+8], rax
/*1403e79e4*/  mov [rbp+0B80h+var_7C], 0
/*1403e79eb*/  lea rdx, unk_141749B7D
/*1403e79f2*/  lea rcx, [rbp+0B80h+var_410]
/*1403e79f9*/  lea r8, [rbp+0B80h+var_620]
/*1403e7a00*/  call sub_14149C0F0
/*1403e7a05*/  nop
/*1403e7a06*/  mov [rbp+0B80h+var_7C], 0
/*1403e7a0d*/  lea rcx, [rbp+0B80h+var_620]
/*1403e7a14*/  lea r8, [rbp+0B80h+var_E0]
/*1403e7a1b*/  lea r9, [rbp+0B80h+var_410]
/*1403e7a22*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e7a29*/  call sub_1403E4470
/*1403e7a2e*/  nop
/*1403e7a2f*/  mov rax, qword ptr [rbp+0B80h+var_610]
/*1403e7a36*/  mov [rsi+18h], rax
/*1403e7a3a*/  movups xmm0, [rbp+0B80h+var_620]
/*1403e7a41*/  movups xmmword ptr [rsi+8], xmm0
/*1403e7a45*/  mov qword ptr [rsi], 2
/*1403e7a4c*/  mov rdx, qword ptr [rbp+0B80h+var_170]
/*1403e7a53*/  test rdx, rdx
/*1403e7a56*/  jz loc_1403E5E70
/*1403e7a5c*/  mov rcx, qword ptr [rbp+0B80h+var_170+8]
/*1403e7a63*/  jmp loc_1403E77EE
loc_1403E7A68: /*1403e7a68*/ call nullsub_1
/*1403e7a6d*/  mov ecx, 67h ; 'g'
/*1403e7a72*/  mov edx, 1
/*1403e7a77*/  call sub_140001650
/*1403e7a7c*/  test rax, rax
/*1403e7a7f*/  jz loc_1403E7BCE
/*1403e7a85*/  movups xmm0, cs:xmmword_141749BED
/*1403e7a8c*/  movups xmmword ptr [rax+50h], xmm0
/*1403e7a90*/  movups xmm0, cs:xmmword_141749BDD
/*1403e7a97*/  movups xmmword ptr [rax+40h], xmm0
/*1403e7a9b*/  movups xmm0, cs:xmmword_141749BCD
/*1403e7aa2*/  movups xmmword ptr [rax+30h], xmm0
/*1403e7aa6*/  movups xmm0, cs:xmmword_141749BBD
/*1403e7aad*/  movups xmmword ptr [rax+20h], xmm0
/*1403e7ab1*/  movups xmm0, cs:xmmword_141749BAD
/*1403e7ab8*/  movups xmmword ptr [rax+10h], xmm0
/*1403e7abc*/  movups xmm0, cs:xmmword_141749B9D
/*1403e7ac3*/  movups xmmword ptr [rax], xmm0
/*1403e7ac6*/  mov rcx, 8280E380BCE59389h
/*1403e7ad0*/  mov [rax+5Fh], rcx
/*1403e7ad4*/  mov qword ptr [rbp+0B80h+var_410], 67h ; 'g'
/*1403e7adf*/  mov qword ptr [rbp+0B80h+var_410+8], rax
/*1403e7ae6*/  mov qword ptr [rbp+0B80h+var_400], 67h ; 'g'
/*1403e7af1*/  lea rcx, [rbp+0B80h+var_698]
/*1403e7af8*/  mov [rbp+0B80h+var_5D], 0
/*1403e7aff*/  mov [rbp+0B80h+var_5E], 1
/*1403e7b06*/  mov [rbp+0B80h+var_5F], 1
loc_1403E7B0D: /*1403e7b0d*/ lea rdx, aClientRestartD; "CLIENT_RESTART_DEFERRED"
/*1403e7b14*/  lea r9, [rbp+0B80h+var_410]
/*1403e7b1b*/  mov r8d, 17h
/*1403e7b21*/  call sub_1403DAFB0
/*1403e7b26*/  nop
/*1403e7b27*/  mov [rbp+0B80h+var_5D], 0
/*1403e7b2e*/  mov [rbp+0B80h+var_5E], 0
/*1403e7b35*/  mov [rbp+0B80h+var_5F], 1
/*1403e7b3c*/  mov rcx, [rbp+0B80h+Address]
/*1403e7b43*/  movzx edx, [rbp+0B80h+var_60]
/*1403e7b4a*/  call sub_14000E270
/*1403e7b4f*/  nop
loc_1403E7B50: /*1403e7b50*/ lea rbx, [rbp+0B80h+var_410]
/*1403e7b57*/  lea rdx, [rbp+0B80h+var_860]
/*1403e7b5e*/  mov r8d, 1E8h
/*1403e7b64*/  mov rcx, rbx
/*1403e7b67*/  call sub_141684120
/*1403e7b6c*/  mov [rbp+0B80h+var_5D], 0
/*1403e7b73*/  mov [rbp+0B80h+var_5E], 0
/*1403e7b7a*/  mov [rbp+0B80h+var_5F], 0
loc_1403E7B81: /*1403e7b81*/ lea rax, aCommittedResta; "committed_restart_deferred"
/*1403e7b88*/  mov [rsp+0C00h+var_BE0], rax
/*1403e7b8d*/  mov [rsp+0C00h+var_BD8], 1Ah
/*1403e7b96*/  lea rcx, [rbp+0B80h+var_620]
/*1403e7b9d*/  lea r8, [rbp+0B80h+var_E0]
/*1403e7ba4*/  mov rdx, [rbp+0B80h+var_B0]
/*1403e7bab*/  mov r9, rbx
/*1403e7bae*/  call finalize_committed_switch
/*1403e7bb3*/  nop
loc_1403E7BB4: /*1403e7bb4*/ lea rdx, [rbp+0B80h+var_620]
/*1403e7bbb*/  mov r8d, 1E8h
/*1403e7bc1*/  mov rcx, rsi
/*1403e7bc4*/  call sub_141684120
/*1403e7bc9*/  jmp loc_1403E5E7C
loc_1403E7BCE: /*1403e7bce*/ mov [rbp+0B80h+var_5D], 0
/*1403e7bd5*/  mov [rbp+0B80h+var_5E], 1
/*1403e7bdc*/  mov [rbp+0B80h+var_5F], 1
loc_1403E7BE3: /*1403e7be3*/ mov ecx, 1
/*1403e7be8*/  mov edx, 67h ; 'g'
/*1403e7bed*/  call sub_1416C2D4B
loc_1403E7BF3: /*1403e7bf3*/ ud2
