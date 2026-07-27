// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=1485 fetched=1485 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14063DED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v6; // r15
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // r14
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int32 v24; // eax
  bool v25; // of
  signed __int32 v26; // eax
  int v27; // ett
  __int64 v28; // rt0
  __int64 v29; // rbx
  unsigned __int32 v30; // eax
  bool v31; // of
  signed __int32 v32; // eax
  int v33; // ett
  __int64 v34; // rt0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // r15
  __int128 v41; // xmm1
  __int128 ... [47930 chars total]

// ---- full disassembly reconstruction (1485/1485 instructions) ----
sub_14063DED0: /*14063ded0*/ push rbp
/*14063ded1*/  push r15
/*14063ded3*/  push r14
/*14063ded5*/  push r12
/*14063ded7*/  push rsi
/*14063ded8*/  push rdi
/*14063ded9*/  push rbx
/*14063deda*/  sub rsp, 830h
/*14063dee1*/  lea rbp, [rsp+80h]
/*14063dee9*/  movaps [rbp+7E0h+var_40], xmm6
/*14063def0*/  mov [rbp+7E0h+var_48], 0FFFFFFFFFFFFFFFEh
/*14063defb*/  mov rdi, r8
/*14063defe*/  mov r15, rdx
/*14063df01*/  mov rsi, rcx
/*14063df04*/  movzx eax, byte ptr [rdx+1B0h]
/*14063df0b*/  lea rcx, jpt_14063DF20
/*14063df12*/  movsxd rax, ds:(jpt_14063DF20 - 14177E884h)[rcx+rax*4]; switch 6 cases
/*14063df16*/  add rax, rcx
/*14063df19*/  mov [rbp+7E0h+var_58], rdx
/*14063df20*/  jmp rax; switch jump
loc_14063DF22: /*14063df22*/ mov word ptr [r15+1AEh], 100h; jumptable 000000014063DF20 case 0
/*14063df2c*/  mov byte ptr [r15+1ADh], 0
/*14063df34*/  movups xmm0, xmmword ptr [r15+180h]
/*14063df3c*/  movups xmmword ptr [r15+0B0h], xmm0
/*14063df44*/  movups xmm0, xmmword ptr [r15+90h]
/*14063df4c*/  movups xmmword ptr [r15+70h], xmm0
/*14063df51*/  movups xmm0, xmmword ptr [r15+40h]
/*14063df56*/  movups xmm1, xmmword ptr [r15+50h]
/*14063df5b*/  movups xmmword ptr [r15], xmm0
/*14063df5f*/  movups xmmword ptr [r15+10h], xmm1
/*14063df64*/  movzx eax, word ptr [r15+1B1h]
/*14063df6c*/  mov [r15+1AAh], ax
/*14063df74*/  movups xmm0, xmmword ptr [r15+0A0h]
/*14063df7c*/  movups xmmword ptr [r15+80h], xmm0
/*14063df84*/  mov r14, [r15+60h]
/*14063df88*/  mov rbx, [r15+68h]
/*14063df8c*/  movups xmm0, xmmword ptr [r15+190h]
/*14063df94*/  movups xmmword ptr [r15+0C0h], xmm0
/*14063df9c*/  mov rax, [r15+1A0h]
/*14063dfa3*/  mov [r15+0D0h], rax
/*14063dfaa*/  test r14, r14
/*14063dfad*/  jz short loc_14063DFC4
/*14063dfaf*/  test rbx, rbx
/*14063dfb2*/  jns short loc_14063DFFD
loc_14063DFB4: /*14063dfb4*/ xor ecx, ecx
loc_14063DFB6: /*14063dfb6*/ mov rdx, rbx
/*14063dfb9*/  call sub_1416C2D4B
/*14063dfbf*/  jmp loc_14063FFFE
loc_14063DFC4: /*14063dfc4*/ lea rcx, aModel_2; "model"
/*14063dfcb*/  mov edx, 5
/*14063dfd0*/  mov r8, r15
/*14063dfd3*/  call sub_141433D50
/*14063dfd8*/  nop
loc_14063DFD9: /*14063dfd9*/ mov r9d, 1
/*14063dfdf*/  test rax, rax
/*14063dfe2*/  jz short loc_14063E031
/*14063dfe4*/  cmp byte ptr [rax], 3
/*14063dfe7*/  mov r15, [rbp+7E0h+var_58]
/*14063dfee*/  jnz short loc_14063E042
/*14063dff0*/  mov r14, [rax+10h]
/*14063dff4*/  mov rbx, [rax+18h]
/*14063dff8*/  test rbx, rbx
/*14063dffb*/  js short loc_14063DFB4
loc_14063DFFD: /*14063dffd*/ jz short loc_14063E03C
/*14063dfff*/  call nullsub_1
/*14063e004*/  mov edx, 1
/*14063e009*/  mov rcx, rbx
/*14063e00c*/  call sub_140001650
/*14063e011*/  mov ecx, 1
/*14063e016*/  test rax, rax
/*14063e019*/  jz short loc_14063DFB6
/*14063e01b*/  mov rcx, rax
/*14063e01e*/  mov rdx, r14
/*14063e021*/  mov r8, rbx
/*14063e024*/  mov r14, rax
/*14063e027*/  call sub_141684120
/*14063e02c*/  mov r9, r14
/*14063e02f*/  jmp short loc_14063E044
loc_14063E031: /*14063e031*/ xor ebx, ebx
/*14063e033*/  mov r15, [rbp+7E0h+var_58]
/*14063e03a*/  jmp short loc_14063E044
loc_14063E03C: /*14063e03c*/ mov r9d, 1
loc_14063E042: /*14063e042*/ xor ebx, ebx
loc_14063E044: /*14063e044*/ mov [r15+0D8h], rbx
/*14063e04b*/  mov [r15+0E0h], r9
/*14063e052*/  mov [r15+0E8h], rbx
/*14063e059*/  mov rcx, [r15+0B0h]
/*14063e060*/  mov rdx, [r15+80h]
/*14063e067*/  mov r8, [r15+88h]
/*14063e06e*/  mov rax, [r15+0B8h]
/*14063e075*/  mov r10, [r15+70h]
/*14063e079*/  mov r11, [r15+78h]
loc_14063E07D: /*14063e07d*/ mov [rsp+860h+var_828], r11
/*14063e082*/  mov [rsp+860h+var_830], r10
/*14063e087*/  mov [rsp+860h+var_838], rax
/*14063e08c*/  mov [rsp+860h+var_840], rbx
/*14063e091*/  mov [rsp+860h+var_810], 0
/*14063e09a*/  mov [rsp+860h+var_820], 0
/*14063e0a1*/  call sub_140667920
/*14063e0a6*/  nop
loc_14063E0A7: /*14063e0a7*/ mov rax, [rbp+7E0h+var_58]
/*14063e0ae*/  mov byte ptr [rax+1AFh], 0
/*14063e0b5*/  movups xmm0, xmmword ptr [rax]
/*14063e0b8*/  movups xmm1, xmmword ptr [rax+10h]
/*14063e0bc*/  movups xmmword ptr [rax+20h], xmm0
/*14063e0c0*/  movups xmmword ptr [rax+30h], xmm1
/*14063e0c4*/  mov byte ptr [rax+1ACh], 0
/*14063e0cb*/  jmp short loc_14063E0E9
loc_14063E0CD: /*14063e0cd*/ lea rcx, off_141768650; jumptable 000000014063DF20 case 2
/*14063e0d4*/  call sub_1416C3420
/*14063e0d9*/  ud2
loc_14063E0DB: /*14063e0db*/ lea rcx, off_141768650; jumptable 000000014063DF20 case 1
/*14063e0e2*/  call sub_1416C3400
/*14063e0e7*/  ud2
loc_14063E0E9: /*14063e0e9*/ mov rdx, [rax+0B8h]
loc_14063E0F0: /*14063e0f0*/ lea rcx, [rbp+7E0h+var_800]
/*14063e0f4*/  call sub_140669440
/*14063e0f9*/  nop
/*14063e0fa*/  mov rcx, [rbp+7E0h+var_58]
/*14063e101*/  mov byte ptr [rcx+1AEh], 1
/*14063e108*/  mov rax, [rcx+0B0h]
/*14063e10f*/  mov rcx, [rcx+0B8h]
/*14063e116*/  cmp byte ptr [rcx+0E5h], 1
/*14063e11d*/  jnz short loc_14063E17E
/*14063e11f*/  mov r15, [rax+20h]
/*14063e123*/  lea r14, [r15+10h]
/*14063e127*/  mov eax, [r15+10h]
/*14063e12b*/  cmp eax, 3FFFFFFDh
/*14063e130*/  ja loc_14063FF23
/*14063e136*/  lea ecx, [rax+1]
/*14063e139*/  lock cmpxchg [r14], ecx
/*14063e13e*/  jnz loc_14063FF23
loc_14063E144: /*14063e144*/ movzx eax, byte ptr [r15+18h]
/*14063e149*/  mov rax, [r15+20h]
/*14063e14d*/  lock inc qword ptr [rax]
/*14063e151*/  jle loc_14063FFFE
/*14063e157*/  mov rbx, [r15+20h]
/*14063e15b*/  mov edx, 0FFFFFFFFh
/*14063e160*/  lock xadd [r15+10h], edx
/*14063e166*/  dec edx
/*14063e168*/  mov eax, edx
/*14063e16a*/  and eax, 0BFFFFFFFh
/*14063e16f*/  neg eax
/*14063e171*/  jno short loc_14063E1D6
loc_14063E173: /*14063e173*/ mov rcx, r14
/*14063e176*/  call sub_1416C1970
/*14063e17b*/  nop
/*14063e17c*/  jmp short loc_14063E1D6
loc_14063E17E: /*14063e17e*/ mov r15, [rax+18h]
/*14063e182*/  lea r14, [r15+10h]
/*14063e186*/  mov eax, [r15+10h]
/*14063e18a*/  cmp eax, 3FFFFFFDh
/*14063e18f*/  ja loc_14063FF31
/*14063e195*/  lea ecx, [rax+1]
/*14063e198*/  lock cmpxchg [r14], ecx
/*14063e19d*/  jnz loc_14063FF31
loc_14063E1A3: /*14063e1a3*/ movzx eax, byte ptr [r15+18h]
/*14063e1a8*/  mov rax, [r15+20h]
/*14063e1ac*/  lock inc qword ptr [rax]
/*14063e1b0*/  jle loc_14063FFFE
/*14063e1b6*/  mov rbx, [r15+20h]
/*14063e1ba*/  mov edx, 0FFFFFFFFh
/*14063e1bf*/  lock xadd [r15+10h], edx
/*14063e1c5*/  dec edx
/*14063e1c7*/  mov eax, edx
/*14063e1c9*/  and eax, 0BFFFFFFFh
/*14063e1ce*/  neg eax
/*14063e1d0*/  jo loc_14063FF3F
loc_14063E1D6: /*14063e1d6*/ mov rax, [rbp+7E0h+var_58]
/*14063e1dd*/  mov [rax+0F0h], rbx
/*14063e1e4*/  mov r9, [rax+70h]
/*14063e1e8*/  mov rax, [rax+78h]
loc_14063E1EC: /*14063e1ec*/ mov [rsp+860h+var_840], rax
/*14063e1f1*/  lea r8, unk_141764700
/*14063e1f8*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063e1ff*/  mov rdx, rbx
/*14063e202*/  call sub_1405A48C0
/*14063e207*/  nop
/*14063e208*/  mov rax, [rbp+7E0h+var_58]
/*14063e20f*/  mov byte ptr [rax+1AEh], 0
/*14063e216*/  movups xmm0, [rbp+7E0h+var_7B0]
/*14063e21a*/  movaps [rbp+7E0h+var_190], xmm0
/*14063e221*/  movups xmm0, [rbp+7E0h+var_7C0]
/*14063e225*/  movaps [rbp+7E0h+var_1A0], xmm0
/*14063e22c*/  movups xmm0, [rbp+7E0h+var_800]
/*14063e230*/  movups xmm1, [rbp+7E0h+var_7F0]
/*14063e234*/  movups xmm2, [rbp+7E0h+var_7E0]
/*14063e238*/  movups xmm3, [rbp+7E0h+var_7D0]
/*14063e23c*/  movaps [rbp+7E0h+var_1B0], xmm3
/*14063e243*/  movaps [rbp+7E0h+var_1C0], xmm2
/*14063e24a*/  movaps [rbp+7E0h+var_1D0], xmm1
/*14063e251*/  movaps [rbp+7E0h+var_1E0], xmm0
/*14063e258*/  lea rcx, [rbp+7E0h+var_650]
/*14063e25f*/  lea rdx, [rbp+7E0h+var_4A0]
/*14063e266*/  lea r8, [rbp+7E0h+var_1E0]
/*14063e26d*/  call sub_14103C250
/*14063e272*/  nop
/*14063e273*/  mov rax, [rbp+7E0h+var_58]
/*14063e27a*/  lea r8, [rax+20h]
/*14063e27e*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063e285*/  lea rdx, [rbp+7E0h+var_650]
/*14063e28c*/  call sub_1406C67E0
/*14063e291*/  nop
/*14063e292*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063e299*/  call sub_14103C180
/*14063e29e*/  nop
/*14063e29f*/  mov r15, [rbp+7E0h+var_58]
/*14063e2a6*/  mov [r15+1B8h], rax
/*14063e2ad*/  mov [r15+1C0h], rdx
loc_14063E2B4: /*14063e2b4*/ lea rdx, [r15+1B8h]; jumptable 000000014063DF20 case 3
loc_14063E2BB: /*14063e2bb*/ lea rcx, [rbp+7E0h+var_4A0]
/*14063e2c2*/  mov [rbp+7E0h+var_60], rdx
/*14063e2c9*/  mov r8, rdi
/*14063e2cc*/  call sub_14104DCF0
/*14063e2d1*/  nop
/*14063e2d2*/  mov rbx, qword ptr [rbp+7E0h+var_4A0]
/*14063e2d9*/  cmp rbx, 0FFFFFFFFFFFFFFFEh
/*14063e2dd*/  jz loc_14063EC6C
/*14063e2e3*/  mov r14, qword ptr [rbp+7E0h+var_4A0+8]
/*14063e2ea*/  movups xmm0, [rbp+7E0h+var_490]
/*14063e2f1*/  movaps [rbp+7E0h+var_770], xmm0
/*14063e2f5*/  movups xmm0, [rbp+7E0h+var_480]
/*14063e2fc*/  movaps [rbp+7E0h+var_760], xmm0
/*14063e303*/  movups xmm0, [rbp+7E0h+var_470]
/*14063e30a*/  movaps [rbp+7E0h+var_750], xmm0
/*14063e311*/  movups xmm0, [rbp+7E0h+var_460]
/*14063e318*/  movaps [rbp+7E0h+var_740], xmm0
/*14063e31f*/  movups xmm0, [rbp+7E0h+var_450]
/*14063e326*/  movaps [rbp+7E0h+var_730], xmm0
/*14063e32d*/  movups xmm0, [rbp+7E0h+var_440]
/*14063e334*/  movaps [rbp+7E0h+var_720], xmm0
/*14063e33b*/  movups xmm0, [rbp+7E0h+var_430]
/*14063e342*/  movaps [rbp+7E0h+var_710], xmm0
/*14063e349*/  mov rax, [rbp+7E0h+var_420]
/*14063e350*/  mov [rbp+7E0h+var_700], rax
loc_14063E357: /*14063e357*/ mov r12, [rbp+7E0h+var_60]
/*14063e35e*/  mov rcx, r12
/*14063e361*/  call sub_1405E6830
/*14063e366*/  nop
/*14063e367*/  cmp ebx, 0FFFFFFFFh
/*14063e36a*/  jz loc_14063EC88
/*14063e370*/  mov r15, [rbp+7E0h+var_58]
/*14063e377*/  mov byte ptr [r15+1ADh], 1
/*14063e37f*/  mov [r15+0F8h], rbx
/*14063e386*/  mov [r15+100h], r14
/*14063e38d*/  movaps xmm0, [rbp+7E0h+var_770]
/*14063e391*/  movaps xmm1, [rbp+7E0h+var_760]
/*14063e398*/  movaps xmm2, [rbp+7E0h+var_750]
/*14063e39f*/  movaps xmm3, [rbp+7E0h+var_740]
/*14063e3a6*/  movups xmmword ptr [r15+108h], xmm0
/*14063e3ae*/  movups xmmword ptr [r15+118h], xmm1
/*14063e3b6*/  movups xmmword ptr [r15+128h], xmm2
/*14063e3be*/  movups xmmword ptr [r15+138h], xmm3
/*14063e3c6*/  movaps xmm0, [rbp+7E0h+var_730]
/*14063e3cd*/  movups xmmword ptr [r15+148h], xmm0
/*14063e3d5*/  movaps xmm0, [rbp+7E0h+var_720]
/*14063e3dc*/  movups xmmword ptr [r15+158h], xmm0
/*14063e3e4*/  movaps xmm0, [rbp+7E0h+var_710]
/*14063e3eb*/  movups xmmword ptr [r15+168h], xmm0
/*14063e3f3*/  mov rax, [rbp+7E0h+var_700]
/*14063e3fa*/  mov [r15+178h], rax
/*14063e401*/  movzx eax, word ptr [r15+160h]
/*14063e409*/  mov [r15+1A8h], ax
/*14063e411*/  mov rcx, [r15+0B0h]
/*14063e418*/  mov rdx, [r15+80h]
/*14063e41f*/  mov r8, [r15+88h]
/*14063e426*/  mov r9, [r15+0E0h]
/*14063e42d*/  mov r10, [r15+0E8h]
/*14063e434*/  mov r11, [r15+0B8h]
/*14063e43b*/  mov rbx, [r15+70h]
/*14063e43f*/  mov r14, [r15+78h]
loc_14063E443: /*14063e443*/ mov [rsp+860h+var_818], ax
/*14063e448*/  mov [rsp+860h+var_828], r14
/*14063e44d*/  mov [rsp+860h+var_830], rbx
/*14063e452*/  mov [rsp+860h+var_838], r11
/*14063e457*/  mov [rsp+860h+var_840], r10
/*14063e45c*/  mov [rsp+860h+var_810], 0
/*14063e465*/  mov [rsp+860h+var_820], 1
/*14063e46c*/  call sub_140667920
/*14063e471*/  nop
loc_14063E472: /*14063e472*/ mov r15, [rbp+7E0h+var_58]
/*14063e479*/  lea rdx, [r15+0F8h]
/*14063e480*/  mov eax, 0FFFFFF38h
/*14063e485*/  add eax, [r15+1A8h]
/*14063e48c*/  cmp ax, 63h ; 'c'
/*14063e490*/  jbe loc_14063EE5A
/*14063e496*/  mov byte ptr [r15+1ADh], 0
/*14063e49e*/  mov r8d, 88h
/*14063e4a4*/  mov rcx, r12
/*14063e4a7*/  call sub_141684120
/*14063e4ac*/  mov byte ptr [r15+358h], 0
loc_14063E4B4: /*14063e4b4*/ lea rdx, [r15+1B8h]; jumptable 000000014063DF20 case 4
loc_14063E4BB: /*14063e4bb*/ lea rcx, [rbp+7E0h+var_4A0]
/*14063e4c2*/  mov [rbp+7E0h+var_60], rdx
/*14063e4c9*/  mov r8, rdi
/*14063e4cc*/  call sub_14061E020
/*14063e4d1*/  nop
/*14063e4d2*/  cmp byte ptr [rbp+7E0h+var_4A0], 0
/*14063e4d9*/  jnz loc_14063EC7A
/*14063e4df*/  movups xmm0, [rbp+7E0h+var_4A0+8]
/*14063e4e6*/  movups xmm1, xmmword ptr [rbp+358h]
/*14063e4ed*/  movaps [rbp+7E0h+var_660], xmm1
/*14063e4f4*/  movaps [rbp+7E0h+var_670], xmm0
loc_14063E4FB: /*14063e4fb*/ mov rcx, [rbp+7E0h+var_60]
/*14063e502*/  call sub_1405DA6C0
/*14063e507*/  nop
/*14063e508*/  cmp qword ptr [rbp+7E0h+var_670], 0
/*14063e510*/  jz short loc_14063E530
/*14063e512*/  movaps xmm0, [rbp+7E0h+var_670]
/*14063e519*/  movaps xmm1, [rbp+7E0h+var_660]
/*14063e520*/  movaps [rbp+7E0h+var_290], xmm1
/*14063e527*/  movaps [rbp+7E0h+var_2A0], xmm0
/*14063e52e*/  jmp short loc_14063E560
loc_14063E530: /*14063e530*/ mov qword ptr [rbp+7E0h+var_2A0+8], 1
/*14063e53b*/  xorps xmm0, xmm0
/*14063e53e*/  movaps [rbp+7E0h+var_290], xmm0
/*14063e545*/  lea rax, off_14177A978
/*14063e54c*/  mov qword ptr [rbp+7E0h+var_2A0], rax
/*14063e553*/  lea rcx, [rbp+7E0h+var_670+8]
/*14063e55a*/  call sub_1405E12D0
/*14063e55f*/  nop
loc_14063E560: /*14063e560*/ mov rbx, [rbp+7E0h+var_58]
/*14063e567*/  cmp byte ptr [rbx+1ACh], 0
/*14063e56e*/  jnz loc_14063E764
/*14063e574*/  cmp word ptr [rbx+1A8h], 190h
/*14063e57d*/  jnz loc_14063E764
/*14063e583*/  cmp byte ptr [rbx+1ABh], 1
/*14063e58a*/  jnz loc_14063E764
/*14063e590*/  mov rdx, qword ptr [rbp+7E0h+var_2A0+8]
/*14063e597*/  mov r8, qword ptr [rbp+7E0h+var_290]
/*14063e59e*/  mov [rbp+7E0h+var_49], 1
loc_14063E5A5: /*14063e5a5*/ lea rcx, [rbp+7E0h+var_650]
/*14063e5ac*/  call sub_141499F00
/*14063e5b1*/  nop
/*14063e5b2*/  mov r8, qword ptr [rbp+7E0h+var_650+8]
/*14063e5b9*/  mov r9, qword ptr [rbp+7E0h+var_640]
loc_14063E5C0: /*14063e5c0*/ lea rcx, aWebSearch; "web_search"
/*14063e5c7*/  mov edx, 0Ah
/*14063e5cc*/  mov [rbp+7E0h+var_60], r8
/*14063e5d3*/  call sub_140681590
/*14063e5d8*/  nop
/*14063e5d9*/  test al, al
/*14063e5db*/  jz loc_14063E73F
/*14063e5e1*/  mov rax, [rbp+7E0h+var_58]
/*14063e5e8*/  lea rcx, [rax+20h]
/*14063e5ec*/  call sub_140A19380
/*14063e5f1*/  nop
/*14063e5f2*/  test al, al
/*14063e5f4*/  jz loc_14063E73F
/*14063e5fa*/  mov rax, cs:off_141EC8D80
/*14063e601*/  mov rax, [rax]
/*14063e604*/  cmp rax, 3
/*14063e608*/  jb loc_14063E6B1
/*14063e60e*/  mov qword ptr [rbp+7E0h+var_4A0], 0
/*14063e619*/  lea rax, aCodexmateLibCo_26; "codexmate_lib::core::relay::proxy_serve"...
/*14063e620*/  mov qword ptr [rbp+7E0h+var_4A0+8], rax
/*14063e627*/  mov qword ptr [rbp+7E0h+var_490], 28h ; '('
/*14063e632*/  mov qword ptr [rbp+7E0h+var_490+8], 0
/*14063e63d*/  lea rcx, aSrcCoreRelayPr; "src\\core\\relay\\proxy_server.rs"
/*14063e644*/  mov qword ptr [rbp+7E0h+var_480], rcx
/*14063e64b*/  mov qword ptr [rbp+7E0h+var_480+8], 1Eh
/*14063e656*/  mov qword ptr [rbp+7E0h+var_470], 3
/*14063e661*/  mov qword ptr [rbp+7E0h+var_470+8], rax
/*14063e668*/  mov qword ptr [rbp+7E0h+var_460], 28h ; '('
/*14063e673*/  mov rax, 73200000001h
/*14063e67d*/  mov qword ptr [rbp+7E0h+var_460+8], rax
/*14063e684*/  lea rax, unk_141768672
/*14063e68b*/  mov qword ptr [rbp+7E0h+var_450], rax
/*14063e692*/  mov qword ptr [rbp+7E0h+var_450+8], 85h
/*14063e69d*/  lea rcx, [rbp+7E0h+var_89]
/*14063e6a4*/  lea rdx, [rbp+7E0h+var_4A0]
/*14063e6ab*/  call sub_1412C36A0
/*14063e6b0*/  nop
loc_14063E6B1: /*14063e6b1*/ mov rax, [rbp+7E0h+var_58]
/*14063e6b8*/  mov byte ptr [rax+1ACh], 1
/*14063e6bf*/  mov rdx, qword ptr [rbp+7E0h+var_650]
/*14063e6c6*/  test rdx, rdx
/*14063e6c9*/  jle short loc_14063E6DD
/*14063e6cb*/  mov r8d, 1
/*14063e6d1*/  mov rcx, [rbp+7E0h+var_60]
/*14063e6d8*/  call sub_140001660
loc_14063E6DD: /*14063e6dd*/ mov rax, qword ptr [rbp+7E0h+var_2A0]
/*14063e6e4*/  mov rdx, qword ptr [rbp+7E0h+var_2A0+8]
/*14063e6eb*/  lea rcx, [rbp+7E0h+var_290+8]
/*14063e6f2*/  mov r8, qword ptr [rbp+7E0h+var_290]
loc_14063E6F9: /*14063e6f9*/ call qword ptr [rax+20h]
/*14063e6fc*/  nop
/*14063e6fd*/  mov rax, [rbp+7E0h+var_58]
/*14063e704*/  mov byte ptr [rax+1ADh], 0
/*14063e70b*/  mov rax, [rax+0F0h]
/*14063e712*/  lock dec qword ptr [rax]
/*14063e716*/  jnz short loc_14063E72C
/*14063e718*/  mov rax, [rbp+7E0h+var_58]
/*14063e71f*/  lea rcx, [rax+0F0h]
loc_14063E726: /*14063e726*/ call sub_141018B80
/*14063e72b*/  nop
loc_14063E72C: /*14063e72c*/ mov rax, [rbp+7E0h+var_58]
/*14063e733*/  mov byte ptr [rax+1AEh], 0
/*14063e73a*/  jmp loc_14063E0E9
loc_14063E73F: /*14063e73f*/ mov rdx, qword ptr [rbp+7E0h+var_650]
/*14063e746*/  test rdx, rdx
/*14063e749*/  mov rbx, [rbp+7E0h+var_58]
/*14063e750*/  jle short loc_14063E764
/*14063e752*/  mov r8d, 1
/*14063e758*/  mov rcx, [rbp+7E0h+var_60]
/*14063e75f*/  call sub_140001660
loc_14063E764: /*14063e764*/ movzx edi, word ptr [rbx+1A8h]
/*14063e76b*/  mov [rbp+7E0h+var_49], 1
loc_14063E772: /*14063e772*/ lea rcx, [rbp+7E0h+var_650]
/*14063e779*/  call sub_141442B90
/*14063e77e*/  nop
/*14063e77f*/  mov rax, qword ptr [rbp+7E0h+var_650]
/*14063e786*/  movups xmm0, [rbp+7E0h+var_650+8]
/*14063e78d*/  movaps [rbp+7E0h+var_F0], xmm0
/*14063e794*/  movups xmm0, [rbp+7E0h+var_640+8]
/*14063e79b*/  movaps [rbp+7E0h+var_E0], xmm0
/*14063e7a2*/  movups xmm0, [rbp+7E0h+var_628]
/*14063e7a9*/  movaps [rbp+7E0h+var_D0], xmm0
/*14063e7b0*/  movups xmm0, [rbp+7E0h+var_618]
/*14063e7b7*/  movaps [rbp+7E0h+var_C0], xmm0
/*14063e7be*/  movups xmm0, [rbp+7E0h+var_608]
/*14063e7c5*/  movaps [rbp+7E0h+var_B0], xmm0
/*14063e7cc*/  movups xmm0, [rbp+7E0h+var_5F8]
/*14063e7d3*/  movaps [rbp+7E0h+var_A0], xmm0
/*14063e7da*/  movzx ecx, [rbp+7E0h+var_5E8]
/*14063e7e1*/  mov edx, [rbp+7E0h+var_5E6]
/*14063e7e7*/  mov [rbp+7E0h+var_80], edx
/*14063e7ed*/  movzx edx, [rbp+7E0h+var_5E2]
/*14063e7f4*/  mov [rbp+7E0h+var_7C], dx
/*14063e7fb*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14063e7ff*/  jz short loc_14063E876
/*14063e801*/  lea rdx, [rbp+7E0h+var_650+8]
/*14063e808*/  lea ecx, [rdi-3E8h]
/*14063e80e*/  movzx ecx, cx
/*14063e811*/  cmp ecx, 0FC7Ch
/*14063e817*/  mov ecx, 1F6h
/*14063e81c*/  cmovnb ecx, edi
/*14063e81f*/  movups xmm0, xmmword ptr [rdx+50h]
/*14063e823*/  movaps [rbp+7E0h+var_A0], xmm0
/*14063e82a*/  movups xmm0, xmmword ptr [rdx+40h]
/*14063e82e*/  movaps [rbp+7E0h+var_B0], xmm0
/*14063e835*/  movups xmm0, xmmword ptr [rdx]
/*14063e838*/  movups xmm1, xmmword ptr [rdx+10h]
/*14063e83c*/  movups xmm2, xmmword ptr [rdx+20h]
/*14063e840*/  movups xmm3, xmmword ptr [rdx+30h]
/*14063e844*/  movaps [rbp+7E0h+var_C0], xmm3
/*14063e84b*/  movaps [rbp+7E0h+var_D0], xmm2
/*14063e852*/  movaps [rbp+7E0h+var_E0], xmm1
/*14063e859*/  movaps [rbp+7E0h+var_F0], xmm0
/*14063e860*/  mov r8d, [rdx+62h]
/*14063e864*/  mov [rbp+7E0h+var_80], r8d
/*14063e86b*/  movzx edx, word ptr [rdx+66h]
/*14063e86f*/  mov [rbp+7E0h+var_7C], dx
loc_14063E876: /*14063e876*/ mov qword ptr [rbp+7E0h+var_1E0], rax
/*14063e87d*/  movaps xmm0, [rbp+7E0h+var_F0]
/*14063e884*/  movaps xmm1, [rbp+7E0h+var_E0]
/*14063e88b*/  movaps xmm2, [rbp+7E0h+var_D0]
/*14063e892*/  movaps xmm3, [rbp+7E0h+var_C0]
/*14063e899*/  movups [rbp+7E0h+var_1E0+8], xmm0
/*14063e8a0*/  movups [rbp+7E0h+var_1D0+8], xmm1
/*14063e8a7*/  movups [rbp+7E0h+var_1C0+8], xmm2
/*14063e8ae*/  movups [rbp+7E0h+var_1B0+8], xmm3
/*14063e8b5*/  movaps xmm0, [rbp+7E0h+var_B0]
/*14063e8bc*/  movups [rbp+7E0h+var_1A0+8], xmm0
/*14063e8c3*/  movaps xmm0, [rbp+7E0h+var_A0]
/*14063e8ca*/  movups [rbp+7E0h+var_190+8], xmm0
/*14063e8d1*/  mov [rbp+7E0h+var_178], cx
/*14063e8d8*/  mov eax, [rbp+7E0h+var_80]
/*14063e8de*/  mov [rbp+7E0h+var_176], eax
/*14063e8e4*/  movzx eax, [rbp+7E0h+var_7C]
/*14063e8eb*/  mov [rbp+7E0h+var_172], ax
/*14063e8f2*/  movups xmm0, cs:xmmword_141766788
/*14063e8f9*/  movups xmmword ptr [rbp+1B0h], xmm0
/*14063e900*/  movups xmm0, cs:xmmword_141766778
/*14063e907*/  movups [rbp+7E0h+var_640], xmm0
/*14063e90e*/  lea rax, aApplicationJso; "application/json"
/*14063e915*/  mov qword ptr [rbp+7E0h+var_650], rax
/*14063e91c*/  mov qword ptr [rbp+7E0h+var_650+8], 10h
/*14063e927*/  mov [rbp+7E0h+var_49], 1
/*14063e92e*/  lea rcx, [rbp+7E0h+var_250]
/*14063e935*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063e93c*/  lea r8, [rbp+7E0h+var_650]
/*14063e943*/  call sub_1406C5190
/*14063e948*/  nop
/*14063e949*/  movaps xmm0, [rbp+7E0h+var_2A0]
/*14063e950*/  movaps xmm1, [rbp+7E0h+var_290]
/*14063e957*/  movaps [rbp+7E0h+var_640], xmm1
/*14063e95e*/  movaps [rbp+7E0h+var_650], xmm0
/*14063e965*/  mov [rbp+7E0h+var_69], 1
loc_14063E96C: /*14063e96c*/ lea rcx, [rbp+7E0h+var_650]
/*14063e973*/  call sub_140FB1000
/*14063e978*/  nop
/*14063e979*/  mov r8, qword ptr [rbp+7E0h+var_250]
/*14063e980*/  cmp r8, 0FFFFFFFFFFFFFFFFh
/*14063e984*/  jz loc_14063EA11
/*14063e98a*/  movzx ecx, word ptr [rbp+7E0h+var_250+8]
/*14063e991*/  movups xmm0, [rbp+7E0h+var_250+0Ah]
/*14063e998*/  movups [rbp+7E0h+var_4A0+0Ah], xmm0
/*14063e99f*/  movups xmm0, [rbp+7E0h+var_240+0Ah]
/*14063e9a6*/  movups [rbp+7E0h+var_490+0Ah], xmm0
/*14063e9ad*/  movups xmm0, [rbp+7E0h+var_226]
/*14063e9b4*/  movups xmmword ptr [rbp+36Ah], xmm0
/*14063e9bb*/  movups xmm0, [rbp+7E0h+var_216]
/*14063e9c2*/  movups [rbp+7E0h+var_470+0Ah], xmm0
/*14063e9c9*/  movups xmm0, [rbp+7E0h+var_206]
/*14063e9d0*/  movups [rbp+7E0h+var_460+0Ah], xmm0
/*14063e9d7*/  movups xmm0, xmmword ptr [rbp+7E0h+var_1F6]
/*14063e9de*/  movups [rbp+7E0h+var_450+0Ah], xmm0
/*14063e9e5*/  mov r9, qword ptr [rbp+7E0h+var_1F6+0Eh]
/*14063e9ec*/  mov qword ptr [rbp+7E0h+var_440+8], r9
/*14063e9f3*/  mov qword ptr [rbp+7E0h+var_4A0], r8
/*14063e9fa*/  mov word ptr [rbp+7E0h+var_4A0+8], cx
/*14063ea01*/  mov qword ptr [rbp+7E0h+var_430], rax
/*14063ea08*/  mov qword ptr [rbp+7E0h+var_430+8], rdx
/*14063ea0f*/  jmp short loc_14063EA8B
loc_14063EA11: /*14063ea11*/ mov [rbp+7E0h+var_60], rax
/*14063ea18*/  mov [rbp+7E0h+var_78], rdx
/*14063ea1f*/  mov rax, [rdx]
/*14063ea22*/  test rax, rax
/*14063ea25*/  jz short loc_14063EA31
loc_14063EA27: /*14063ea27*/ mov rcx, [rbp+7E0h+var_60]
/*14063ea2e*/  call rax
/*14063ea30*/  nop
loc_14063EA31: /*14063ea31*/ mov rax, [rbp+7E0h+var_78]
/*14063ea38*/  mov rdx, [rax+8]
/*14063ea3c*/  test rdx, rdx
/*14063ea3f*/  jz short loc_14063EA51
/*14063ea41*/  mov r8, [rax+10h]
/*14063ea45*/  mov rcx, [rbp+7E0h+var_60]
/*14063ea4c*/  call sub_140001660
loc_14063EA51: /*14063ea51*/ mov [rbp+7E0h+var_49], 0
loc_14063EA58: /*14063ea58*/ lea rax, aProxyUpstream; "proxy.upstream"
/*14063ea5f*/  mov [rsp+860h+var_840], rax
/*14063ea64*/  mov [rsp+860h+var_838], 0Eh
/*14063ea6d*/  lea r8, aBuildErrorBody; "build error body failed"
/*14063ea74*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063ea7b*/  mov r9d, 17h
/*14063ea81*/  mov dx, 1F6h
/*14063ea85*/  call sub_14066B160
/*14063ea8a*/  nop
loc_14063EA8B: /*14063ea8b*/ mov r9, [rbp+7E0h+var_58]
/*14063ea92*/  lea rax, [r9+1A8h]
/*14063ea99*/  movzx ecx, word ptr [rax]
/*14063ea9c*/  lea edx, [rcx-1F4h]
/*14063eaa2*/  cmp dx, 64h ; 'd'
/*14063eaa6*/  jb short loc_14063EAC5
/*14063eaa8*/  add ecx, 0FFFFFE6Fh
/*14063eaae*/  cmp ecx, 1Ch
/*14063eab1*/  ja loc_14063F5FD
/*14063eab7*/  mov edx, 100001CDh
/*14063eabc*/  bt edx, ecx
/*14063eabf*/  jnb loc_14063F5FD
loc_14063EAC5: /*14063eac5*/ mov qword ptr [rbp+7E0h+var_1E0], rax
/*14063eacc*/  lea rax, sub_14143ED80
/*14063ead3*/  mov qword ptr [rbp+7E0h+var_1E0+8], rax
loc_14063EADA: /*14063eada*/ lea rdx, unk_1417686DC
/*14063eae1*/  lea rcx, [rbp+7E0h+var_650]
/*14063eae8*/  lea r8, [rbp+7E0h+var_1E0]
/*14063eaef*/  call sub_14149C0F0
/*14063eaf4*/  nop
/*14063eaf5*/  mov r15, qword ptr [rbp+7E0h+var_650]
/*14063eafc*/  mov r12, qword ptr [rbp+7E0h+var_650+8]
/*14063eb03*/  mov rbx, qword ptr [rbp+7E0h+var_640]
/*14063eb0a*/  mov r14, qword ptr [rbp+7E0h+var_4A0]
/*14063eb11*/  movups xmm0, [rbp+7E0h+var_4A0+8]
/*14063eb18*/  movaps [rbp+7E0h+var_170], xmm0
/*14063eb1f*/  movups xmm0, [rbp+7E0h+var_490+8]
/*14063eb26*/  movaps [rbp+7E0h+var_160], xmm0
/*14063eb2d*/  movups xmm0, xmmword ptr [rbp+368h]
/*14063eb34*/  movaps [rbp+7E0h+var_150], xmm0
/*14063eb3b*/  movups xmm0, [rbp+7E0h+var_470+8]
/*14063eb42*/  movaps [rbp+7E0h+var_140], xmm0
/*14063eb49*/  movups xmm0, [rbp+7E0h+var_460+8]
/*14063eb50*/  movaps [rbp+7E0h+var_130], xmm0
/*14063eb57*/  movups xmm0, [rbp+7E0h+var_450+8]
/*14063eb5e*/  movaps [rbp+7E0h+var_120], xmm0
/*14063eb65*/  movups xmm0, [rbp+7E0h+var_440+8]
/*14063eb6c*/  movaps [rbp+7E0h+var_110], xmm0
/*14063eb73*/  mov rax, qword ptr [rbp+7E0h+var_430+8]
/*14063eb7a*/  mov [rbp+7E0h+var_100], rax
loc_14063EB81: /*14063eb81*/ mov r9, [rbp+7E0h+var_58]
loc_14063EB88: /*14063eb88*/ mov byte ptr [r9+1ADh], 0
/*14063eb90*/  mov rax, [r9+0F0h]
/*14063eb97*/  lock dec qword ptr [rax]
/*14063eb9b*/  jnz short loc_14063EBB1
/*14063eb9d*/  mov rax, [rbp+7E0h+var_58]
/*14063eba4*/  lea rcx, [rax+0F0h]
loc_14063EBAB: /*14063ebab*/ call sub_141018B80
/*14063ebb0*/  nop
loc_14063EBB1: /*14063ebb1*/ mov rax, [rbp+7E0h+var_58]
/*14063ebb8*/  mov byte ptr [rax+1AEh], 0
/*14063ebbf*/  lea rcx, [rax+20h]
loc_14063EBC3: /*14063ebc3*/ call sub_1400104F0
/*14063ebc8*/  nop
/*14063ebc9*/  mov rdi, [rbp+7E0h+var_58]
/*14063ebd0*/  mov rdx, [rdi+0D8h]
/*14063ebd7*/  test rdx, rdx
/*14063ebda*/  jz short loc_14063EBEE
/*14063ebdc*/  mov rcx, [rdi+0E0h]
/*14063ebe3*/  mov r8d, 1
/*14063ebe9*/  call sub_140001660
loc_14063EBEE: /*14063ebee*/ mov byte ptr [rdi+1AFh], 0
/*14063ebf5*/  mov [rsi], r14
/*14063ebf8*/  movaps xmm0, [rbp+7E0h+var_170]
/*14063ebff*/  movaps xmm1, [rbp+7E0h+var_160]
/*14063ec06*/  movaps xmm2, [rbp+7E0h+var_150]
/*14063ec0d*/  movaps xmm3, [rbp+7E0h+var_140]
/*14063ec14*/  movups xmmword ptr [rsi+8], xmm0
/*14063ec18*/  movups xmmword ptr [rsi+18h], xmm1
/*14063ec1c*/  movups xmmword ptr [rsi+28h], xmm2
/*14063ec20*/  movups xmmword ptr [rsi+38h], xmm3
/*14063ec24*/  movaps xmm0, [rbp+7E0h+var_130]
/*14063ec2b*/  movups xmmword ptr [rsi+48h], xmm0
/*14063ec2f*/  movaps xmm0, [rbp+7E0h+var_120]
/*14063ec36*/  movups xmmword ptr [rsi+58h], xmm0
/*14063ec3a*/  movaps xmm0, [rbp+7E0h+var_110]
/*14063ec41*/  movups xmmword ptr [rsi+68h], xmm0
/*14063ec45*/  mov rax, [rbp+7E0h+var_100]
/*14063ec4c*/  mov [rsi+78h], rax
/*14063ec50*/  mov [rsi+80h], r15
/*14063ec57*/  mov [rsi+88h], r12
/*14063ec5e*/  mov [rsi+90h], rbx
/*14063ec65*/  mov al, 1
/*14063ec67*/  jmp loc_14063F101
loc_14063EC6C: /*14063ec6c*/ mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
/*14063ec73*/  mov al, 3
/*14063ec75*/  jmp loc_14063F0FA
loc_14063EC7A: /*14063ec7a*/ mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
/*14063ec81*/  mov al, 4
/*14063ec83*/  jmp loc_14063F0FA
loc_14063EC88: /*14063ec88*/ mov qword ptr [rbp+7E0h+var_250], r14
/*14063ec8f*/  mov rax, [rbp+7E0h+var_58]
/*14063ec96*/  mov rcx, [rax+0B0h]
loc_14063EC9D: /*14063ec9d*/ call sub_140660A60
/*14063eca2*/  nop
/*14063eca3*/  lea rax, [rbp+7E0h+var_250]
/*14063ecaa*/  mov qword ptr [rbp+7E0h+var_650], rax
/*14063ecb1*/  lea rax, sub_141031F10
/*14063ecb8*/  mov qword ptr [rbp+7E0h+var_650+8], rax
/*14063ecbf*/  lea rdx, unk_141767F78
/*14063ecc6*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063eccd*/  lea r8, [rbp+7E0h+var_650]
/*14063ecd4*/  call sub_14149C0F0
/*14063ecd9*/  nop
/*14063ecda*/  movups xmm0, [rbp+7E0h+var_4A0]
/*14063ece1*/  movaps [rbp+7E0h+var_1E0], xmm0
/*14063ece8*/  mov rbx, qword ptr [rbp+7E0h+var_490]
/*14063ecef*/  mov qword ptr [rbp+7E0h+var_1D0], rbx
/*14063ecf6*/  mov rdi, [rbp+7E0h+var_58]
/*14063ecfd*/  mov rcx, [rdi+0B0h]
/*14063ed04*/  mov rdx, [rdi+80h]
/*14063ed0b*/  mov r8, [rdi+88h]
/*14063ed12*/  mov r9, [rdi+0E0h]
/*14063ed19*/  mov rax, [rdi+0E8h]
/*14063ed20*/  mov r10, [rdi+0B8h]
/*14063ed27*/  mov r11, [rdi+70h]
/*14063ed2b*/  mov r14, [rdi+78h]
/*14063ed2f*/  mov rdi, qword ptr [rbp+7E0h+var_1E0+8]
loc_14063ED36: /*14063ed36*/ mov [rsp+860h+var_808], rbx
/*14063ed3b*/  mov [rsp+860h+var_810], rdi
/*14063ed40*/  mov [rsp+860h+var_828], r14
/*14063ed45*/  mov [rsp+860h+var_830], r11
/*14063ed4a*/  mov [rsp+860h+var_838], r10
/*14063ed4f*/  mov [rsp+860h+var_840], rax
/*14063ed54*/  mov [rsp+860h+var_820], 0
/*14063ed5b*/  call sub_140667920
/*14063ed60*/  nop
/*14063ed61*/  lea rcx, [rbp+7E0h+var_650]
/*14063ed68*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063ed6f*/  call sub_14149C500
/*14063ed74*/  nop
loc_14063ED75: /*14063ed75*/ lea rax, aProxyUpstream; "proxy.upstream"
/*14063ed7c*/  mov [rsp+860h+var_840], rax
/*14063ed81*/  mov [rsp+860h+var_838], 0Eh
/*14063ed8a*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063ed91*/  mov dx, 1F6h
/*14063ed95*/  mov r8, rdi
/*14063ed98*/  mov r9, rbx
/*14063ed9b*/  call sub_14066B160
/*14063eda0*/  nop
/*14063eda1*/  mov r14, qword ptr [rbp+7E0h+var_4A0]
/*14063eda8*/  movups xmm0, [rbp+7E0h+var_4A0+8]
/*14063edaf*/  movaps [rbp+7E0h+var_170], xmm0
/*14063edb6*/  movups xmm0, [rbp+7E0h+var_490+8]
/*14063edbd*/  movaps [rbp+7E0h+var_160], xmm0
/*14063edc4*/  movups xmm0, xmmword ptr [rbp+368h]
/*14063edcb*/  movaps [rbp+7E0h+var_150], xmm0
/*14063edd2*/  movups xmm0, [rbp+7E0h+var_470+8]
/*14063edd9*/  movaps [rbp+7E0h+var_140], xmm0
/*14063ede0*/  movups xmm0, [rbp+7E0h+var_460+8]
/*14063ede7*/  movaps [rbp+7E0h+var_130], xmm0
/*14063edee*/  movups xmm0, [rbp+7E0h+var_450+8]
/*14063edf5*/  movaps [rbp+7E0h+var_120], xmm0
/*14063edfc*/  movups xmm0, [rbp+7E0h+var_440+8]
/*14063ee03*/  movaps [rbp+7E0h+var_110], xmm0
/*14063ee0a*/  mov rax, qword ptr [rbp+7E0h+var_430+8]
/*14063ee11*/  mov [rbp+7E0h+var_100], rax
/*14063ee18*/  mov r15, qword ptr [rbp+7E0h+var_650]
/*14063ee1f*/  mov r12, qword ptr [rbp+7E0h+var_650+8]
/*14063ee26*/  mov rbx, qword ptr [rbp+7E0h+var_640]
/*14063ee2d*/  mov rdx, qword ptr [rbp+7E0h+var_1E0]
/*14063ee34*/  test rdx, rdx
/*14063ee37*/  jz short loc_14063EE48
/*14063ee39*/  mov r8d, 1
/*14063ee3f*/  mov rcx, rdi
/*14063ee42*/  call sub_140001660
/*14063ee47*/  nop
loc_14063EE48: /*14063ee48*/ lea rcx, [rbp+7E0h+var_250]
/*14063ee4f*/  call sub_1405E12D0
/*14063ee54*/  nop
loc_14063EE55: /*14063ee55*/ jmp loc_14063EB81
loc_14063EE5A: /*14063ee5a*/ cmp byte ptr [r15+1AAh], 0
/*14063ee62*/  jz loc_14063F0AC
/*14063ee68*/  mov byte ptr [r15+1ADh], 0
/*14063ee70*/  lea rdi, [rbp+7E0h+var_4A0]
/*14063ee77*/  mov r8d, 88h
/*14063ee7d*/  mov rcx, rdi
/*14063ee80*/  call sub_141684120
/*14063ee85*/  nop
loc_14063EE86: /*14063ee86*/ mov rcx, rdi
/*14063ee89*/  call sub_140EA3B00
/*14063ee8e*/  mov [rbp+7E0h+var_78], rax
/*14063ee95*/  mov [rbp+7E0h+var_60], rdx
/*14063ee9c*/  mov rax, [rbp+7E0h+var_58]
/*14063eea3*/  cmp byte ptr [rax+1ABh], 1
/*14063eeaa*/  jnz loc_14063F67F
/*14063eeb0*/  mov rdx, [rax+0B8h]
/*14063eeb7*/  add rdx, 60h ; '`'
/*14063eebb*/  mov [rbp+7E0h+var_64], 1
loc_14063EEC2: /*14063eec2*/ lea rcx, [rbp+7E0h+var_250]
/*14063eec9*/  mov rdi, rax
/*14063eecc*/  call sub_14149C500
/*14063eed1*/  nop
/*14063eed2*/  mov rdx, [rdi+0C8h]
/*14063eed9*/  movups xmm6, xmmword ptr [rdx+20h]
/*14063eedd*/  mov [rbp+7E0h+var_67], 1
loc_14063EEE4: /*14063eee4*/ lea rcx, [rbp+7E0h+var_1E0]
/*14063eeeb*/  call sub_14067C640
/*14063eef0*/  nop
/*14063eef1*/  movups [rbp+7E0h+var_1C0], xmm6
/*14063eef8*/  call nullsub_1
/*14063eefd*/  mov ecx, 10h
/*14063ef02*/  mov edx, 8
/*14063ef07*/  call sub_140001650
/*14063ef0c*/  test rax, rax
/*14063ef0f*/  mov [rbp+7E0h+var_88], rax
/*14063ef16*/  jz loc_14063FFB8
/*14063ef1c*/  mov rcx, rax
/*14063ef1f*/  mov rax, [rbp+7E0h+var_78]
/*14063ef26*/  mov [rcx], rax
/*14063ef29*/  mov rax, [rbp+7E0h+var_60]
/*14063ef30*/  mov [rcx+8], rax
/*14063ef34*/  xorps xmm0, xmm0
/*14063ef37*/  movaps [rbp+7E0h+var_6F0], xmm0
/*14063ef3e*/  mov qword ptr [rbp+7E0h+var_6E0], 1
/*14063ef49*/  mov qword ptr [rbp+7E0h+var_6E0+8], 0
/*14063ef54*/  mov qword ptr [rbp+7E0h+var_6D0], rcx
/*14063ef5b*/  mov byte ptr [rbp+7E0h+var_6D0+8], 0
/*14063ef62*/  mov rdi, qword ptr [rbp+7E0h+var_250+8]
/*14063ef69*/  mov r8, qword ptr [rbp+7E0h+var_240]
/*14063ef70*/  movups xmm0, [rbp+7E0h+var_1E0]
/*14063ef77*/  movups xmm1, [rbp+7E0h+var_1D0]
/*14063ef7e*/  movups xmm2, [rbp+7E0h+var_1C0]
/*14063ef85*/  movaps [rbp+7E0h+var_480], xmm2
/*14063ef8c*/  movaps [rbp+7E0h+var_490], xmm1
/*14063ef93*/  movaps [rbp+7E0h+var_4A0], xmm0
/*14063ef9a*/  mov [rbp+7E0h+var_68], 1
loc_14063EFA1: /*14063efa1*/ lea rcx, [rbp+7E0h+var_650]
/*14063efa8*/  lea r9, [rbp+7E0h+var_4A0]
/*14063efaf*/  mov rdx, rdi
/*14063efb2*/  call sub_1409CAF90
/*14063efb7*/  nop
loc_14063EFB8: /*14063efb8*/ call nullsub_1
/*14063efbd*/  mov ecx, 40h ; '@'
/*14063efc2*/  mov edx, 8
/*14063efc7*/  call sub_140001650
/*14063efcc*/  test rax, rax
/*14063efcf*/  jz loc_14063FFDC
/*14063efd5*/  mov rbx, rax
/*14063efd8*/  movaps xmm0, [rbp+7E0h+var_6F0]
/*14063efdf*/  movaps xmm1, [rbp+7E0h+var_6E0]
/*14063efe6*/  movaps xmm2, [rbp+7E0h+var_6D0]
/*14063efed*/  movaps xmm3, [rbp+7E0h+var_6C0]
/*14063eff4*/  movups xmmword ptr [rax+30h], xmm3
/*14063eff8*/  movups xmmword ptr [rax+20h], xmm2
/*14063effc*/  movups xmmword ptr [rax+10h], xmm1
/*14063f000*/  movups xmmword ptr [rax], xmm0
/*14063f003*/  lea rcx, [rbp+7E0h+var_480]
/*14063f00a*/  lea rdx, [rbp+7E0h+var_650]
/*14063f011*/  mov r8d, 170h
/*14063f017*/  call sub_141684120
/*14063f01c*/  xorps xmm0, xmm0
/*14063f01f*/  movaps [rbp+7E0h+var_4A0], xmm0
/*14063f026*/  mov qword ptr [rbp+7E0h+var_490], 1
/*14063f031*/  mov qword ptr [rbp+7E0h+var_490+8], 0
/*14063f03c*/  mov [rbp+7E0h+var_310], rbx
/*14063f043*/  mov [rbp+7E0h+var_308], 0
/*14063f04a*/  mov rdx, qword ptr [rbp+7E0h+var_250]
/*14063f051*/  test rdx, rdx
/*14063f054*/  mov r14, [rbp+7E0h+var_58]
/*14063f05b*/  jz short loc_14063F06B
/*14063f05d*/  mov r8d, 1
/*14063f063*/  mov rcx, rdi
/*14063f066*/  call sub_140001660
loc_14063F06B: /*14063f06b*/ call nullsub_1
/*14063f070*/  mov ecx, 1B0h
/*14063f075*/  mov edx, 8
/*14063f07a*/  call sub_140001650
/*14063f07f*/  test rax, rax
/*14063f082*/  jz loc_14063FF94
/*14063f088*/  mov rbx, rax
/*14063f08b*/  lea rdx, [rbp+7E0h+var_4A0]
/*14063f092*/  mov r8d, 1B0h
/*14063f098*/  mov rcx, rax
/*14063f09b*/  call sub_141684120
/*14063f0a0*/  lea rax, off_141790F88
/*14063f0a7*/  jmp loc_14063F8D7
loc_14063F0AC: /*14063f0ac*/ mov byte ptr [r15+1ADh], 0
/*14063f0b4*/  mov r8d, 88h
/*14063f0ba*/  mov rcx, r12
/*14063f0bd*/  call sub_141684120
/*14063f0c2*/  mov byte ptr [r15+358h], 0
loc_14063F0CA: /*14063f0ca*/ lea rdx, [r15+1B8h]; jumptable 000000014063DF20 case 5
loc_14063F0D1: /*14063f0d1*/ lea rcx, [rbp+7E0h+var_4A0]
/*14063f0d8*/  mov [rbp+7E0h+var_60], rdx
/*14063f0df*/  mov r8, rdi
/*14063f0e2*/  call sub_14061E020
/*14063f0e7*/  nop
/*14063f0e8*/  cmp dword ptr [rbp+7E0h+var_4A0], 1
/*14063f0ef*/  jnz short loc_14063F120
/*14063f0f1*/  mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
/*14063f0f8*/  mov al, 5
loc_14063F0FA: /*14063f0fa*/ mov rdi, [rbp+7E0h+var_58]
loc_14063F101: /*14063f101*/ mov [rdi+1B0h], al
/*14063f107*/  movaps xmm6, [rbp+7E0h+var_40]
/*14063f10e*/  add rsp, 830h
/*14063f115*/  pop rbx
/*14063f116*/  pop rdi
/*14063f117*/  pop rsi
/*14063f118*/  pop r12
/*14063f11a*/  pop r14
/*14063f11c*/  pop r15
/*14063f11e*/  pop rbp
/*14063f11f*/  retn
loc_14063F120: /*14063f120*/ mov rbx, qword ptr [rbp+7E0h+var_4A0+8]
/*14063f127*/  mov rdi, qword ptr [rbp+7E0h+var_490]
/*14063f12e*/  movups xmm0, [rbp+7E0h+var_490+8]
/*14063f135*/  movaps [rbp+7E0h+var_780], xmm0
loc_14063F139: /*14063f139*/ mov rcx, [rbp+7E0h+var_60]
/*14063f140*/  call sub_1405DA6C0
/*14063f145*/  nop
/*14063f146*/  test rbx, rbx
/*14063f149*/  jz loc_14063F1F5
/*14063f14f*/  movaps xmm0, [rbp+7E0h+var_780]
/*14063f153*/  movups [rbp+7E0h+var_240], xmm0
/*14063f15a*/  mov qword ptr [rbp+7E0h+var_250], rbx
/*14063f161*/  mov qword ptr [rbp+7E0h+var_250+8], rdi
/*14063f168*/  mov rax, qword ptr [rbp+7E0h+var_240]
/*14063f16f*/  mov qword ptr [rbp+7E0h+var_4A0], rdi
/*14063f176*/  mov qword ptr [rbp+7E0h+var_4A0+8], rax
/*14063f17d*/  xorps xmm0, xmm0
/*14063f180*/  movups [rbp+7E0h+var_490], xmm0
loc_14063F187: /*14063f187*/ lea rcx, [rbp+7E0h+var_650]
/*14063f18e*/  lea rdx, [rbp+7E0h+var_4A0]
/*14063f195*/  call sub_1408A8DF0
/*14063f19a*/  nop
/*14063f19b*/  cmp byte ptr [rbp+7E0h+var_650], 0FFh
/*14063f1a2*/  jz loc_14063F37E
/*14063f1a8*/  movups xmm0, [rbp+7E0h+var_650]
/*14063f1af*/  movups xmm1, [rbp+7E0h+var_640]
/*14063f1b6*/  movaps [rbp+7E0h+var_1D0], xmm1
/*14063f1bd*/  movaps [rbp+7E0h+var_1E0], xmm0
/*14063f1c4*/  mov rax, [rbp+7E0h+var_58]
/*14063f1cb*/  mov r8, [rax+0C8h]
/*14063f1d2*/  cmp byte ptr [rax+1ABh], 1
/*14063f1d9*/  jnz loc_14063F4D9
loc_14063F1DF: /*14063f1df*/ lea rcx, [rbp+7E0h+var_7A0]
/*14063f1e3*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063f1ea*/  call sub_140A41C10
/*14063f1ef*/  nop
/*14063f1f0*/  jmp loc_14063F4EA
loc_14063F1F5: /*14063f1f5*/ mov qword ptr [rbp+7E0h+var_F0], rdi
/*14063f1fc*/  lea rdi, [rbp+7E0h+var_F0]
/*14063f203*/  mov qword ptr [rbp+7E0h+var_650], rdi
/*14063f20a*/  lea r14, sub_141031F10
/*14063f211*/  mov qword ptr [rbp+7E0h+var_650+8], r14
loc_14063F218: /*14063f218*/ lea rdx, unk_141767FB1
/*14063f21f*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063f226*/  lea r8, [rbp+7E0h+var_650]
/*14063f22d*/  call sub_14149C0F0
/*14063f232*/  nop
/*14063f233*/  mov rax, qword ptr [rbp+7E0h+var_4A0]
/*14063f23a*/  mov [rbp+7E0h+var_60], rax
/*14063f241*/  mov rax, qword ptr [rbp+7E0h+var_4A0+8]
/*14063f248*/  mov [rbp+7E0h+var_88], rax
/*14063f24f*/  mov rbx, qword ptr [rbp+7E0h+var_490]
/*14063f256*/  mov qword ptr [rbp+7E0h+var_1E0], rdi
/*14063f25d*/  mov qword ptr [rbp+7E0h+var_1E0+8], r14
loc_14063F264: /*14063f264*/ lea rdx, unk_141767FB1
/*14063f26b*/  lea rcx, [rbp+7E0h+var_650]
/*14063f272*/  lea r8, [rbp+7E0h+var_1E0]
/*14063f279*/  call sub_14149C0F0
/*14063f27e*/  nop
/*14063f27f*/  mov rax, qword ptr [rbp+7E0h+var_650]
/*14063f286*/  mov [rbp+7E0h+var_78], rax
/*14063f28d*/  mov r8, qword ptr [rbp+7E0h+var_650+8]
/*14063f294*/  mov r9, qword ptr [rbp+7E0h+var_640]
loc_14063F29B: /*14063f29b*/ lea rax, aProxyUpstream; "proxy.upstream"
/*14063f2a2*/  mov [rsp+860h+var_840], rax
/*14063f2a7*/  mov [rsp+860h+var_838], 0Eh
/*14063f2b0*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063f2b7*/  mov dx, 1F6h
/*14063f2bb*/  mov [rbp+7E0h+var_2A8], r8
/*14063f2c2*/  call sub_14066B160
/*14063f2c7*/  nop
/*14063f2c8*/  mov r14, qword ptr [rbp+7E0h+var_4A0]
/*14063f2cf*/  movups xmm0, [rbp+7E0h+var_4A0+8]
/*14063f2d6*/  movaps [rbp+7E0h+var_170], xmm0
/*14063f2dd*/  movups xmm0, [rbp+7E0h+var_490+8]
/*14063f2e4*/  movaps [rbp+7E0h+var_160], xmm0
/*14063f2eb*/  movups xmm0, xmmword ptr [rbp+368h]
/*14063f2f2*/  movaps [rbp+7E0h+var_150], xmm0
/*14063f2f9*/  movups xmm0, [rbp+7E0h+var_470+8]
/*14063f300*/  movaps [rbp+7E0h+var_140], xmm0
/*14063f307*/  movups xmm0, [rbp+7E0h+var_460+8]
/*14063f30e*/  movaps [rbp+7E0h+var_130], xmm0
/*14063f315*/  movups xmm0, [rbp+7E0h+var_450+8]
/*14063f31c*/  movaps [rbp+7E0h+var_120], xmm0
/*14063f323*/  movups xmm0, [rbp+7E0h+var_440+8]
/*14063f32a*/  movaps [rbp+7E0h+var_110], xmm0
/*14063f331*/  mov rax, qword ptr [rbp+7E0h+var_430+8]
/*14063f338*/  mov [rbp+7E0h+var_100], rax
/*14063f33f*/  mov rdx, [rbp+7E0h+var_78]
/*14063f346*/  test rdx, rdx
/*14063f349*/  jz short loc_14063F35E
/*14063f34b*/  mov r8d, 1
/*14063f351*/  mov rcx, [rbp+7E0h+var_2A8]
/*14063f358*/  call sub_140001660
/*14063f35d*/  nop
loc_14063F35E: /*14063f35e*/ lea rcx, [rbp+7E0h+var_F0]
/*14063f365*/  call sub_1405E12D0
/*14063f36a*/  nop
/*14063f36b*/  mov r15, [rbp+7E0h+var_60]
/*14063f372*/  mov r12, [rbp+7E0h+var_88]
/*14063f379*/  jmp loc_14063EB81
loc_14063F37E: /*14063f37e*/ mov rdi, qword ptr [rbp+7E0h+var_650+8]
/*14063f385*/  mov qword ptr [rbp+7E0h+var_2A0], rdi
/*14063f38c*/  mov rax, [rbp+7E0h+var_58]
/*14063f393*/  mov rdx, [rax+0B0h]
/*14063f39a*/  mov rax, [rax+0B8h]
/*14063f3a1*/  mov r8, [rax+8]
/*14063f3a5*/  mov r9, [rax+10h]
loc_14063F3A9: /*14063f3a9*/ lea rax, [rbp+7E0h+var_2A0]
/*14063f3b0*/  mov [rsp+860h+var_830], rax
/*14063f3b5*/  lea rax, aCodexRouter; "codex-router"
/*14063f3bc*/  mov [rsp+860h+var_840], rax
/*14063f3c1*/  mov [rsp+860h+var_838], 0Ch
/*14063f3ca*/  lea rcx, [rbp+7E0h+var_F0]
/*14063f3d1*/  call sub_14066F8E0
/*14063f3d6*/  nop
/*14063f3d7*/  mov r8, qword ptr [rbp+7E0h+var_F0+8]
/*14063f3de*/  mov r9, qword ptr [rbp+7E0h+var_E0]
loc_14063F3E5: /*14063f3e5*/ lea rax, aProxyUpstream; "proxy.upstream"
/*14063f3ec*/  mov [rsp+860h+var_840], rax
/*14063f3f1*/  mov [rsp+860h+var_838], 0Eh
/*14063f3fa*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063f401*/  mov dx, 1F6h
/*14063f405*/  mov [rbp+7E0h+var_78], r8
/*14063f40c*/  call sub_14066B160
/*14063f411*/  nop
/*14063f412*/  mov rax, qword ptr [rbp+7E0h+var_430]
/*14063f419*/  mov [rbp+7E0h+var_100], rax
/*14063f420*/  movups xmm0, [rbp+7E0h+var_440]
/*14063f427*/  movaps [rbp+7E0h+var_110], xmm0
/*14063f42e*/  movups xmm0, [rbp+7E0h+var_450]
/*14063f435*/  movaps [rbp+7E0h+var_120], xmm0
/*14063f43c*/  movups xmm0, [rbp+7E0h+var_460]
/*14063f443*/  movaps [rbp+7E0h+var_130], xmm0
/*14063f44a*/  movups xmm0, [rbp+7E0h+var_4A0]
/*14063f451*/  movups xmm1, [rbp+7E0h+var_490]
/*14063f458*/  movups xmm2, [rbp+7E0h+var_480]
/*14063f45f*/  movups xmm3, [rbp+7E0h+var_470]
/*14063f466*/  movaps [rbp+7E0h+var_140], xmm3
/*14063f46d*/  movaps [rbp+7E0h+var_150], xmm2
/*14063f474*/  movaps [rbp+7E0h+var_160], xmm1
/*14063f47b*/  movaps [rbp+7E0h+var_170], xmm0
/*14063f482*/  mov r15, qword ptr [rbp+7E0h+var_430+8]
/*14063f489*/  mov rdx, qword ptr [rbp+7E0h+var_F0]
/*14063f490*/  test rdx, rdx
/*14063f493*/  jz short loc_14063F4A7
/*14063f495*/  mov r8d, 1
/*14063f49b*/  mov rcx, [rbp+7E0h+var_78]
/*14063f4a2*/  call sub_140001660
loc_14063F4A7: /*14063f4a7*/ mov rax, [rdi]
/*14063f4aa*/  test rax, rax
/*14063f4ad*/  mov [rbp+7E0h+var_60], rdi
/*14063f4b4*/  jz loc_14063FEC2
/*14063f4ba*/  cmp eax, 1
/*14063f4bd*/  jnz loc_14063FEE1
/*14063f4c3*/  mov rax, [rbp+7E0h+var_60]
/*14063f4ca*/  lea rcx, [rax+8]
loc_14063F4CE: /*14063f4ce*/ call sub_140018650
/*14063f4d3*/  nop
/*14063f4d4*/  jmp loc_14063FEE1
loc_14063F4D9: /*14063f4d9*/ lea rcx, [rbp+7E0h+var_7A0]
/*14063f4dd*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063f4e4*/  call sub_140A022B0
/*14063f4e9*/  nop
loc_14063F4EA: /*14063f4ea*/ lea rdx, [rbp+7E0h+var_650+8]
/*14063f4f1*/  movups xmm0, [rbp+7E0h+var_7A0]
/*14063f4f5*/  movups xmm1, [rbp+7E0h+var_790]
/*14063f4f9*/  movups [rbp+7E0h+var_640+8], xmm1
/*14063f500*/  movups [rbp+7E0h+var_650+8], xmm0
/*14063f507*/  mov word ptr [rbp+7E0h+var_650], 0C8h
/*14063f510*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063f517*/  call sub_140677670
/*14063f51c*/  nop
/*14063f51d*/  mov word ptr [rbp+7E0h+var_440+8], 0C8h
/*14063f526*/  movups xmm0, [rbp+7E0h+var_4A0]
/*14063f52d*/  movups xmm1, [rbp+7E0h+var_490]
/*14063f534*/  movups xmm2, [rbp+7E0h+var_480]
/*14063f53b*/  movups xmm3, [rbp+7E0h+var_470]
/*14063f542*/  movaps [rbp+7E0h+var_170], xmm0
/*14063f549*/  movaps [rbp+7E0h+var_160], xmm1
/*14063f550*/  movaps [rbp+7E0h+var_150], xmm2
/*14063f557*/  movaps [rbp+7E0h+var_140], xmm3
/*14063f55e*/  movups xmm0, [rbp+7E0h+var_460]
/*14063f565*/  movaps [rbp+7E0h+var_130], xmm0
/*14063f56c*/  movups xmm0, [rbp+7E0h+var_450]
/*14063f573*/  movaps [rbp+7E0h+var_120], xmm0
/*14063f57a*/  mov rax, qword ptr [rbp+7E0h+var_430]
/*14063f581*/  mov [rbp+7E0h+var_100], rax
/*14063f588*/  mov rax, qword ptr [rbp+7E0h+var_440]
/*14063f58f*/  mov qword ptr [rbp+7E0h+var_110], rax
/*14063f596*/  movzx eax, word ptr [rbp+7E0h+var_440+8]
/*14063f59d*/  mov word ptr [rbp+7E0h+var_110+8], ax
/*14063f5a4*/  mov eax, dword ptr [rbp+7E0h+var_440+0Ah]
/*14063f5aa*/  mov dword ptr [rbp+7E0h+var_110+0Ah], eax
/*14063f5b0*/  movzx eax, word ptr [rbp+7E0h+var_440+0Eh]
/*14063f5b7*/  mov word ptr [rbp+7E0h+var_110+0Eh], ax
/*14063f5be*/  mov r15, qword ptr [rbp+7E0h+var_430+8]
loc_14063F5C5: /*14063f5c5*/ lea rcx, [rbp+7E0h+var_1E0]
/*14063f5cc*/  call sub_1400104F0
/*14063f5d1*/  nop
/*14063f5d2*/  mov rax, qword ptr [rbp+7E0h+var_250]
/*14063f5d9*/  mov rdx, qword ptr [rbp+7E0h+var_250+8]
/*14063f5e0*/  lea rcx, [rbp+7E0h+var_240+8]
/*14063f5e7*/  mov r8, qword ptr [rbp+7E0h+var_240]
loc_14063F5EE: /*14063f5ee*/ call qword ptr [rax+20h]
/*14063f5f1*/  nop
/*14063f5f2*/  mov r14d, 3
/*14063f5f8*/  jmp loc_14063EB81
loc_14063F5FD: /*14063f5fd*/ mov rax, qword ptr [rbp+7E0h+var_430]
/*14063f604*/  mov [rbp+7E0h+var_100], rax
/*14063f60b*/  movups xmm0, [rbp+7E0h+var_440]
/*14063f612*/  movaps [rbp+7E0h+var_110], xmm0
/*14063f619*/  movups xmm0, [rbp+7E0h+var_450]
/*14063f620*/  movaps [rbp+7E0h+var_120], xmm0
/*14063f627*/  movups xmm0, [rbp+7E0h+var_460]
/*14063f62e*/  movaps [rbp+7E0h+var_130], xmm0
/*14063f635*/  movups xmm0, [rbp+7E0h+var_4A0]
/*14063f63c*/  movups xmm1, [rbp+7E0h+var_490]
/*14063f643*/  movups xmm2, [rbp+7E0h+var_480]
/*14063f64a*/  movups xmm3, [rbp+7E0h+var_470]
/*14063f651*/  movaps [rbp+7E0h+var_140], xmm3
/*14063f658*/  movaps [rbp+7E0h+var_150], xmm2
/*14063f65f*/  movaps [rbp+7E0h+var_160], xmm1
/*14063f666*/  movaps [rbp+7E0h+var_170], xmm0
/*14063f66d*/  mov r14d, 5
/*14063f673*/  mov r15, qword ptr [rbp+7E0h+var_430+8]
/*14063f67a*/  jmp loc_14063EB88
loc_14063F67F: /*14063f67f*/ mov rdx, [rax+0B8h]
/*14063f686*/  add rdx, 60h ; '`'
/*14063f68a*/  mov [rbp+7E0h+var_63], 1
loc_14063F691: /*14063f691*/ lea rcx, [rbp+7E0h+var_2A0]
/*14063f698*/  mov rbx, rax
/*14063f69b*/  call sub_14149C500
/*14063f6a0*/  nop
/*14063f6a1*/  mov rdx, [rbx+0C8h]
/*14063f6a8*/  movups xmm6, xmmword ptr [rdx+20h]
/*14063f6ac*/  mov [rbp+7E0h+var_62], 1
loc_14063F6B3: /*14063f6b3*/ lea rcx, [rbp+7E0h+var_F0]
/*14063f6ba*/  call sub_14067C640
/*14063f6bf*/  nop
/*14063f6c0*/  movups [rbp+7E0h+var_D0], xmm6
/*14063f6c7*/  mov rdx, [rbx+0D0h]
/*14063f6ce*/  movups xmm6, xmmword ptr [rdx+20h]
/*14063f6d2*/  mov [rbp+7E0h+var_65], 1
loc_14063F6D9: /*14063f6d9*/ lea rcx, [rbp+7E0h+var_250]
/*14063f6e0*/  call sub_14067DB50
/*14063f6e5*/  nop
/*14063f6e6*/  movups xmmword ptr [rbp+5B0h], xmm6
/*14063f6ed*/  call nullsub_1
/*14063f6f2*/  mov ecx, 10h
/*14063f6f7*/  mov edx, 8
/*14063f6fc*/  call sub_140001650
/*14063f701*/  test rax, rax
/*14063f704*/  mov [rbp+7E0h+var_88], rax
/*14063f70b*/  jz loc_14063FFCA
/*14063f711*/  mov rcx, rax
/*14063f714*/  mov rax, [rbp+7E0h+var_78]
/*14063f71b*/  mov [rcx], rax
/*14063f71e*/  mov rax, [rbp+7E0h+var_60]
/*14063f725*/  mov [rcx+8], rax
/*14063f729*/  xorps xmm0, xmm0
/*14063f72c*/  movaps [rbp+7E0h+var_6B0], xmm0
/*14063f733*/  mov qword ptr [rbp+7E0h+var_6A0], 1
/*14063f73e*/  mov qword ptr [rbp+7E0h+var_6A0+8], 0
/*14063f749*/  mov qword ptr [rbp+7E0h+var_690], rcx
/*14063f750*/  mov byte ptr [rbp+7E0h+var_690+8], 0
/*14063f757*/  mov rbx, qword ptr [rbp+7E0h+var_2A0+8]
/*14063f75e*/  mov r8, qword ptr [rbp+7E0h+var_290]
/*14063f765*/  movups xmm0, [rbp+7E0h+var_F0]
/*14063f76c*/  movups xmm1, [rbp+7E0h+var_E0]
/*14063f773*/  movups xmm2, [rbp+7E0h+var_D0]
/*14063f77a*/  movaps [rbp+7E0h+var_1C0], xmm2
/*14063f781*/  movaps [rbp+7E0h+var_1D0], xmm1
/*14063f788*/  movaps [rbp+7E0h+var_1E0], xmm0
/*14063f78f*/  movups xmm0, [rbp+7E0h+var_250]
/*14063f796*/  movups xmm1, [rbp+7E0h+var_240]
/*14063f79d*/  movups xmm2, xmmword ptr [rbp+5B0h]
/*14063f7a4*/  movaps [rbp+7E0h+var_480], xmm2
/*14063f7ab*/  movaps [rbp+7E0h+var_490], xmm1
/*14063f7b2*/  movaps [rbp+7E0h+var_4A0], xmm0
/*14063f7b9*/  mov [rbp+7E0h+var_66], 1
loc_14063F7C0: /*14063f7c0*/ mov [rsp+860h+var_840], rdi
/*14063f7c5*/  lea rcx, [rbp+7E0h+var_650]
/*14063f7cc*/  lea r9, [rbp+7E0h+var_1E0]
/*14063f7d3*/  mov rdx, rbx
/*14063f7d6*/  call sub_1409A8EA0
/*14063f7db*/  nop
loc_14063F7DC: /*14063f7dc*/ call nullsub_1
/*14063f7e1*/  mov ecx, 40h ; '@'
/*14063f7e6*/  mov edx, 8
/*14063f7eb*/  call sub_140001650
/*14063f7f0*/  test rax, rax
/*14063f7f3*/  jz loc_14063FFEE
/*14063f7f9*/  mov rdi, rax
/*14063f7fc*/  movaps xmm0, [rbp+7E0h+var_6B0]
/*14063f803*/  movaps xmm1, [rbp+7E0h+var_6A0]
/*14063f80a*/  movaps xmm2, [rbp+7E0h+var_690]
/*14063f811*/  movaps xmm3, [rbp+7E0h+var_680]
/*14063f818*/  movups xmmword ptr [rax+30h], xmm3
/*14063f81c*/  movups xmmword ptr [rax+20h], xmm2
/*14063f820*/  movups xmmword ptr [rax+10h], xmm1
/*14063f824*/  movups xmmword ptr [rax], xmm0
/*14063f827*/  lea rcx, [rbp+7E0h+var_4A0+8]
/*14063f82e*/  lea rdx, [rbp+7E0h+var_650]
/*14063f835*/  mov r8d, 1B0h
/*14063f83b*/  call sub_141684120
/*14063f840*/  mov qword ptr [rbp+7E0h+var_4A0], 0
/*14063f84b*/  mov [rbp+7E0h+var_2E8], 0
/*14063f856*/  mov [rbp+7E0h+var_2E0], 1
/*14063f861*/  mov [rbp+7E0h+var_2D8], 0
/*14063f86c*/  mov [rbp+7E0h+var_2D0], rdi
/*14063f873*/  mov [rbp+7E0h+var_2C8], 0
/*14063f87a*/  mov rdx, qword ptr [rbp+7E0h+var_2A0]
/*14063f881*/  test rdx, rdx
/*14063f884*/  mov r14, [rbp+7E0h+var_58]
/*14063f88b*/  jz short loc_14063F89B
/*14063f88d*/  mov r8d, 1
/*14063f893*/  mov rcx, rbx
/*14063f896*/  call sub_140001660
loc_14063F89B: /*14063f89b*/ call nullsub_1
/*14063f8a0*/  mov ecx, 1F0h
/*14063f8a5*/  mov edx, 8
/*14063f8aa*/  call sub_140001650
/*14063f8af*/  test rax, rax
/*14063f8b2*/  jz loc_14063FFA6
/*14063f8b8*/  mov rbx, rax
/*14063f8bb*/  lea rdx, [rbp+7E0h+var_4A0]
/*14063f8c2*/  mov r8d, 1F0h
/*14063f8c8*/  mov rcx, rax
/*14063f8cb*/  call sub_141684120
/*14063f8d0*/  lea rax, off_141790F60
loc_14063F8D7: /*14063f8d7*/ mov [rbp+7E0h+var_60], rax
/*14063f8de*/  mov rax, [r14+0B0h]
/*14063f8e5*/  mov rdi, [rax]
/*14063f8e8*/  lock inc qword ptr [rdi]
/*14063f8ec*/  jle loc_14063FFFE
/*14063f8f2*/  mov [rbp+7E0h+var_78], rbx
/*14063f8f9*/  mov qword ptr [rbp+7E0h+var_F0], rdi
/*14063f900*/  mov rax, [r14+0B0h]
/*14063f907*/  mov rbx, [rax+8]
/*14063f90b*/  lock inc qword ptr [rbx]
/*14063f90f*/  jle loc_14063FFFE
/*14063f915*/  mov qword ptr [rbp+7E0h+var_250], rbx
/*14063f91c*/  mov rdx, [r14+0B8h]
/*14063f923*/  mov [rbp+7E0h+var_4B], 1
loc_14063F92A: /*14063f92a*/ lea rcx, [rbp+7E0h+var_4A0]
/*14063f931*/  call sub_14149C500
/*14063f936*/  nop
/*14063f937*/  mov qword ptr [rbp+7E0h+var_1E0], rdi
/*14063f93e*/  mov qword ptr [rbp+7E0h+var_650], rbx
/*14063f945*/  call nullsub_1
/*14063f94a*/  mov ecx, 18h
/*14063f94f*/  mov edx, 8
/*14063f954*/  call sub_140001650
/*14063f959*/  test rax, rax
/*14063f95c*/  jz loc_14063FF62
/*14063f962*/  mov qword ptr [rax], 1
/*14063f969*/  mov qword ptr [rax+8], 1
/*14063f971*/  mov byte ptr [rax+10h], 0
/*14063f975*/  mov rcx, qword ptr [rbp+7E0h+var_490]
/*14063f97c*/  mov qword ptr [rbp+7E0h+var_290], rcx
/*14063f983*/  movups xmm0, [rbp+7E0h+var_4A0]
/*14063f98a*/  movaps [rbp+7E0h+var_2A0], xmm0
/*14063f991*/  mov rcx, [rbp+7E0h+var_78]
/*14063f998*/  mov [rbp+7E0h+var_260], rcx
/*14063f99f*/  mov rcx, [rbp+7E0h+var_60]
/*14063f9a6*/  mov [rbp+7E0h+var_258], rcx
/*14063f9ad*/  mov qword ptr [rbp+7E0h+var_290+8], rax
/*14063f9b4*/  lea rax, aCodexResponses; "codex responses translated stream faile"...
/*14063f9bb*/  mov [rbp+7E0h+var_280], rax
/*14063f9c2*/  mov [rbp+7E0h+var_278], 28h ; '('
/*14063f9cd*/  mov [rbp+7E0h+var_270], rbx
/*14063f9d4*/  mov [rbp+7E0h+var_268], rdi
/*14063f9db*/  mov [rbp+7E0h+var_4A], 1
loc_14063F9E2: /*14063f9e2*/ lea rcx, [rbp+7E0h+var_650]
/*14063f9e9*/  call sub_141442B90
/*14063f9ee*/  nop
/*14063f9ef*/  mov rax, qword ptr [rbp+7E0h+var_650]
/*14063f9f6*/  movups xmm0, [rbp+7E0h+var_650+8]
/*14063f9fd*/  movaps [rbp+7E0h+var_F0], xmm0
/*14063fa04*/  movups xmm0, [rbp+7E0h+var_640+8]
/*14063fa0b*/  movaps [rbp+7E0h+var_E0], xmm0
/*14063fa12*/  movups xmm0, [rbp+7E0h+var_628]
/*14063fa19*/  movaps [rbp+7E0h+var_D0], xmm0
/*14063fa20*/  movups xmm0, [rbp+7E0h+var_618]
/*14063fa27*/  movaps [rbp+7E0h+var_C0], xmm0
/*14063fa2e*/  movups xmm0, [rbp+7E0h+var_608]
/*14063fa35*/  movaps [rbp+7E0h+var_B0], xmm0
/*14063fa3c*/  movups xmm0, [rbp+7E0h+var_5F8]
/*14063fa43*/  movaps [rbp+7E0h+var_A0], xmm0
/*14063fa4a*/  movzx ecx, [rbp+7E0h+var_5E8]
/*14063fa51*/  mov edx, [rbp+7E0h+var_5E6]
/*14063fa57*/  mov [rbp+7E0h+var_80], edx
/*14063fa5d*/  movzx edx, [rbp+7E0h+var_5E2]
/*14063fa64*/  mov [rbp+7E0h+var_7C], dx
/*14063fa6b*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14063fa6f*/  jz short loc_14063FAD1
/*14063fa71*/  lea rcx, [rbp+7E0h+var_650+8]
/*14063fa78*/  movups xmm0, xmmword ptr [rcx+50h]
/*14063fa7c*/  movaps [rbp+7E0h+var_A0], xmm0
/*14063fa83*/  movups xmm0, xmmword ptr [rcx+40h]
/*14063fa87*/  movaps [rbp+7E0h+var_B0], xmm0
/*14063fa8e*/  movups xmm0, xmmword ptr [rcx]
/*14063fa91*/  movups xmm1, xmmword ptr [rcx+10h]
/*14063fa95*/  movups xmm2, xmmword ptr [rcx+20h]
/*14063fa99*/  movups xmm3, xmmword ptr [rcx+30h]
/*14063fa9d*/  movaps [rbp+7E0h+var_C0], xmm3
/*14063faa4*/  movaps [rbp+7E0h+var_D0], xmm2
/*14063faab*/  movaps [rbp+7E0h+var_E0], xmm1
/*14063fab2*/  movaps [rbp+7E0h+var_F0], xmm0
/*14063fab9*/  mov edx, [rcx+62h]
/*14063fabc*/  mov [rbp+7E0h+var_80], edx
/*14063fac2*/  movzx ecx, word ptr [rcx+66h]
/*14063fac6*/  mov [rbp+7E0h+var_7C], cx
/*14063facd*/  mov cx, 0C8h
loc_14063FAD1: /*14063fad1*/ mov qword ptr [rbp+7E0h+var_1E0], rax
/*14063fad8*/  movaps xmm0, [rbp+7E0h+var_F0]
/*14063fadf*/  movaps xmm1, [rbp+7E0h+var_E0]
/*14063fae6*/  movaps xmm2, [rbp+7E0h+var_D0]
/*14063faed*/  movaps xmm3, [rbp+7E0h+var_C0]
/*14063faf4*/  movups [rbp+7E0h+var_1E0+8], xmm0
/*14063fafb*/  movups [rbp+7E0h+var_1D0+8], xmm1
/*14063fb02*/  movups [rbp+7E0h+var_1C0+8], xmm2
/*14063fb09*/  movups [rbp+7E0h+var_1B0+8], xmm3
/*14063fb10*/  movaps xmm0, [rbp+7E0h+var_B0]
/*14063fb17*/  movups [rbp+7E0h+var_1A0+8], xmm0
/*14063fb1e*/  movaps xmm0, [rbp+7E0h+var_A0]
/*14063fb25*/  movups [rbp+7E0h+var_190+8], xmm0
/*14063fb2c*/  mov [rbp+7E0h+var_178], cx
/*14063fb33*/  mov eax, [rbp+7E0h+var_80]
/*14063fb39*/  mov [rbp+7E0h+var_176], eax
/*14063fb3f*/  movzx eax, [rbp+7E0h+var_7C]
/*14063fb46*/  mov [rbp+7E0h+var_172], ax
/*14063fb4d*/  movups xmm0, cs:xmmword_141766788
/*14063fb54*/  movups [rbp+7E0h+var_D0], xmm0
/*14063fb5b*/  movups xmm0, cs:xmmword_141766778
/*14063fb62*/  movups [rbp+7E0h+var_E0], xmm0
/*14063fb69*/  lea rax, aTextEventStrea; "text/event-stream"
/*14063fb70*/  mov qword ptr [rbp+7E0h+var_F0], rax
/*14063fb77*/  mov qword ptr [rbp+7E0h+var_F0+8], 11h
/*14063fb82*/  mov [rbp+7E0h+var_4A], 1
/*14063fb89*/  lea rcx, [rbp+7E0h+var_650]
/*14063fb90*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063fb97*/  lea r8, [rbp+7E0h+var_F0]
/*14063fb9e*/  call sub_1406C5190
/*14063fba3*/  nop
/*14063fba4*/  movups xmm0, cs:xmmword_1417683A8
/*14063fbab*/  movups [rbp+7E0h+var_D0], xmm0
/*14063fbb2*/  movups xmm0, cs:xmmword_141768398
/*14063fbb9*/  movups [rbp+7E0h+var_E0], xmm0
/*14063fbc0*/  lea rax, aNoCache; "no-cache"
/*14063fbc7*/  mov qword ptr [rbp+7E0h+var_F0], rax
/*14063fbce*/  mov qword ptr [rbp+7E0h+var_F0+8], 8
/*14063fbd9*/  mov [rbp+7E0h+var_4A], 1
/*14063fbe0*/  lea rcx, [rbp+7E0h+var_1E0]
/*14063fbe7*/  lea rdx, [rbp+7E0h+var_650]
/*14063fbee*/  lea r8, [rbp+7E0h+var_F0]
/*14063fbf5*/  call sub_1406C5190
/*14063fbfa*/  nop
/*14063fbfb*/  lea rax, aXAccelBufferin; "X-Accel-Buffering"
/*14063fc02*/  mov qword ptr [rbp+7E0h+var_650], rax
/*14063fc09*/  mov qword ptr [rbp+7E0h+var_650+8], 11h
/*14063fc14*/  lea rax, aNo; "no"
/*14063fc1b*/  mov qword ptr [rbp+7E0h+var_640], rax
/*14063fc22*/  mov qword ptr [rbp+7E0h+var_640+8], 2
/*14063fc2d*/  mov [rbp+7E0h+var_4A], 1
/*14063fc34*/  lea rcx, [rbp+7E0h+var_250]
/*14063fc3b*/  lea rdx, [rbp+7E0h+var_1E0]
/*14063fc42*/  lea r8, [rbp+7E0h+var_650]
/*14063fc49*/  call sub_1406C5590
/*14063fc4e*/  nop
/*14063fc4f*/  mov rax, qword ptr [rbp+7E0h+var_2A0]
/*14063fc56*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14063fc5a*/  jz loc_14063FF7E
/*14063fc60*/  lea rcx, [rbp+7E0h+var_290+8]
/*14063fc67*/  mov rdx, [rcx+30h]
/*14063fc6b*/  mov qword ptr [rbp+7E0h+var_608], rdx
/*14063fc72*/  movups xmm0, xmmword ptr [rcx]
/*14063fc75*/  movups xmm1, xmmword ptr [rcx+10h]
/*14063fc79*/  movups xmm2, xmmword ptr [rcx+20h]
/*14063fc7d*/  movups [rbp+7E0h+var_618], xmm2
/*14063fc84*/  movups [rbp+7E0h+var_628], xmm1
/*14063fc8b*/  movups [rbp+7E0h+var_640+8], xmm0
/*14063fc92*/  mov qword ptr [rbp+7E0h+var_650], rax
/*14063fc99*/  movups xmm0, [rbp+7E0h+var_2A0+8]
/*14063fca0*/  movups [rbp+7E0h+var_650+8], xmm0
/*14063fca7*/  call nullsub_1
/*14063fcac*/  mov ecx, 50h ; 'P'
/*14063fcb1*/  mov edx, 8
/*14063fcb6*/  call sub_140001650
/*14063fcbb*/  test rax, rax
/*14063fcbe*/  mov r9, [rbp+7E0h+var_58]
/*14063fcc5*/  jz loc_14063FF4D
/*14063fccb*/  movups xmm0, [rbp+7E0h+var_618+8]
/*14063fcd2*/  movups xmmword ptr [rax+40h], xmm0
/*14063fcd6*/  movups xmm0, [rbp+7E0h+var_650]
/*14063fcdd*/  movups xmm1, [rbp+7E0h+var_640]
/*14063fce4*/  movups xmm2, xmmword ptr [rbp+1B0h]
/*14063fceb*/  movups xmm3, [rbp+7E0h+var_628+8]
/*14063fcf2*/  movups xmmword ptr [rax+30h], xmm3
/*14063fcf6*/  movups xmmword ptr [rax+20h], xmm2
/*14063fcfa*/  movups xmmword ptr [rax+10h], xmm1
/*14063fcfe*/  movups xmmword ptr [rax], xmm0
/*14063fd01*/  mov r8, qword ptr [rbp+7E0h+var_250]
/*14063fd08*/  cmp r8, 0FFFFFFFFFFFFFFFFh
/*14063fd0c*/  jz loc_14063FDA0
/*14063fd12*/  movzx ecx, word ptr [rbp+7E0h+var_250+8]
/*14063fd19*/  movups xmm0, [rbp+7E0h+var_250+0Ah]
/*14063fd20*/  movups [rbp+7E0h+var_4A0+0Ah], xmm0
/*14063fd27*/  movups xmm0, [rbp+7E0h+var_240+0Ah]
/*14063fd2e*/  movups [rbp+7E0h+var_490+0Ah], xmm0
/*14063fd35*/  movups xmm0, [rbp+7E0h+var_226]
/*14063fd3c*/  movups [rbp+7E0h+var_480+0Ah], xmm0
/*14063fd43*/  movups xmm0, [rbp+7E0h+var_216]
/*14063fd4a*/  movups [rbp+7E0h+var_470+0Ah], xmm0
/*14063fd51*/  movups xmm0, [rbp+7E0h+var_206]
/*14063fd58*/  movups [rbp+7E0h+var_460+0Ah], xmm0
/*14063fd5f*/  movups xmm0, xmmword ptr [rbp+7E0h+var_1F6]
/*14063fd66*/  movups [rbp+7E0h+var_450+0Ah], xmm0
/*14063fd6d*/  mov rdx, qword ptr [rbp+7E0h+var_1F6+0Eh]
/*14063fd74*/  mov qword ptr [rbp+7E0h+var_440+8], rdx
/*14063fd7b*/  mov qword ptr [rbp+7E0h+var_4A0], r8
/*14063fd82*/  mov word ptr [rbp+7E0h+var_4A0+8], cx
/*14063fd89*/  mov qword ptr [rbp+7E0h+var_430], rax
/*14063fd90*/  lea r15, off_1417B3C70
/*14063fd97*/  mov qword ptr [rbp+7E0h+var_430+8], r15
/*14063fd9e*/  jmp short loc_14063FE0F
loc_14063FDA0: /*14063fda0*/ mov [rbp+7E0h+var_60], rax
/*14063fda7*/  mov rcx, rax
/*14063fdaa*/  call sub_140B22C80
/*14063fdaf*/  nop
/*14063fdb0*/  mov edx, 50h ; 'P'
/*14063fdb5*/  mov r8d, 8
/*14063fdbb*/  mov rcx, [rbp+7E0h+var_60]
/*14063fdc2*/  call sub_140001660
/*14063fdc7*/  mov [rbp+7E0h+var_4A], 0
loc_14063FDCE: /*14063fdce*/ lea rax, aProxyUpstream; "proxy.upstream"
/*14063fdd5*/  mov [rsp+860h+var_840], rax
/*14063fdda*/  mov [rsp+860h+var_838], 0Eh
/*14063fde3*/  lea r8, aBuildSseBodyFa; "build sse body failed"
/*14063fdea*/  lea rcx, [rbp+7E0h+var_4A0]
/*14063fdf1*/  mov r9d, 15h
/*14063fdf7*/  mov dx, 1F4h
/*14063fdfb*/  call sub_14066B160
/*14063fe00*/  nop
/*14063fe01*/  mov r15, qword ptr [rbp+7E0h+var_430+8]
/*14063fe08*/  mov r9, [rbp+7E0h+var_58]
loc_14063FE0F: /*14063fe0f*/ mov rax, qword ptr [rbp+7E0h+var_430]
/*14063fe16*/  mov [rbp+7E0h+var_100], rax
/*14063fe1d*/  mov rax, qword ptr [rbp+7E0h+var_440]
/*14063fe24*/  mov qword ptr [rbp+7E0h+var_110], rax
/*14063fe2b*/  mov rax, qword ptr [rbp+7E0h+var_440+8]
/*14063fe32*/  mov qword ptr [rbp+7E0h+var_110+8], rax
/*14063fe39*/  movups xmm0, [rbp+7E0h+var_450]
/*14063fe40*/  movaps [rbp+7E0h+var_120], xmm0
/*14063fe47*/  movups xmm0, [rbp+7E0h+var_460]
/*14063fe4e*/  movaps [rbp+7E0h+var_130], xmm0
/*14063fe55*/  mov rax, qword ptr [rbp+7E0h+var_4A0]
/*14063fe5c*/  movzx ecx, word ptr [rbp+7E0h+var_4A0+8]
/*14063fe63*/  mov edx, dword ptr [rbp+7E0h+var_4A0+0Ah]
/*14063fe69*/  movzx r8d, word ptr [rbp+7E0h+var_4A0+0Eh]
/*14063fe71*/  movups xmm0, [rbp+7E0h+var_490]
/*14063fe78*/  movups xmm1, [rbp+7E0h+var_480]
/*14063fe7f*/  movups xmm2, [rbp+7E0h+var_470]
/*14063fe86*/  movaps [rbp+7E0h+var_140], xmm2
/*14063fe8d*/  movaps [rbp+7E0h+var_150], xmm1
/*14063fe94*/  movaps [rbp+7E0h+var_160], xmm0
/*14063fe9b*/  mov qword ptr [rbp+7E0h+var_170], rax
/*14063fea2*/  mov word ptr [rbp+7E0h+var_170+8], cx
/*14063fea9*/  mov dword ptr [rbp+7E0h+var_170+0Ah], edx
/*14063feaf*/  mov word ptr [rbp+7E0h+var_170+0Eh], r8w
/*14063feb7*/  mov r14d, 3
/*14063febd*/  jmp loc_14063EB88
loc_14063FEC2: /*14063fec2*/ mov rdx, [rdi+10h]
/*14063fec6*/  test rdx, rdx
/*14063fec9*/  jz short loc_14063FEE1
/*14063fecb*/  mov rax, [rbp+7E0h+var_60]
/*14063fed2*/  mov rcx, [rax+8]
/*14063fed6*/  mov r8d, 1
/*14063fedc*/  call sub_140001660
loc_14063FEE1: /*14063fee1*/ mov edx, 28h ; '('
/*14063fee6*/  mov r8d, 8
/*14063feec*/  mov rcx, [rbp+7E0h+var_60]
/*14063fef3*/  call sub_140001660
/*14063fef8*/  mov rax, qword ptr [rbp+7E0h+var_250]
/*14063feff*/  mov rdx, qword ptr [rbp+7E0h+var_250+8]
/*14063ff06*/  lea rcx, [rbp+7E0h+var_240+8]
/*14063ff0d*/  mov r8, qword ptr [rbp+7E0h+var_240]
loc_14063FF14: /*14063ff14*/ call qword ptr [rax+20h]
/*14063ff17*/  nop
/*14063ff18*/  mov r14d, 5
/*14063ff1e*/  jmp loc_14063EB81
loc_14063FF23: /*14063ff23*/ mov rcx, r14; Address
/*14063ff26*/  call sub_1416C1680
/*14063ff2b*/  nop
/*14063ff2c*/  jmp loc_14063E144
loc_14063FF31: /*14063ff31*/ mov rcx, r14; Address
/*14063ff34*/  call sub_1416C1680
/*14063ff39*/  nop
/*14063ff3a*/  jmp loc_14063E1A3
loc_14063FF3F: /*14063ff3f*/ mov rcx, r14
/*14063ff42*/  call sub_1416C1970
/*14063ff47*/  nop
/*14063ff48*/  jmp loc_14063E1D6
loc_14063FF4D: /*14063ff4d*/ mov ecx, 8
/*14063ff52*/  mov edx, 50h ; 'P'
/*14063ff57*/  call sub_1416C2D31
/*14063ff5d*/  jmp loc_14063FFFE
loc_14063FF62: /*14063ff62*/ mov [rbp+7E0h+var_88], rbx
/*14063ff69*/  mov ecx, 8
/*14063ff6e*/  mov edx, 18h
/*14063ff73*/  call sub_1416C2D31
/*14063ff79*/  jmp loc_14063FFFE
loc_14063FF7E: /*14063ff7e*/ mov [rbp+7E0h+var_61], 1
loc_14063FF85: /*14063ff85*/ lea rcx, off_1417B3BC8; "C:\\Users\\runneradmin\\.cargo\\registr"...
/*14063ff8c*/  call sub_1416C3040
/*14063ff92*/  jmp short loc_14063FFFE
loc_14063FF94: /*14063ff94*/ mov ecx, 8
/*14063ff99*/  mov edx, 1B0h
/*14063ff9e*/  call sub_1416C2D31
/*14063ffa4*/  jmp short loc_14063FFFE
loc_14063FFA6: /*14063ffa6*/ mov ecx, 8
/*14063ffab*/  mov edx, 1F0h
/*14063ffb0*/  call sub_1416C2D31
/*14063ffb6*/  jmp short loc_14063FFFE
loc_14063FFB8: /*14063ffb8*/ mov ecx, 8
/*14063ffbd*/  mov edx, 10h
/*14063ffc2*/  call sub_1416C2D31
/*14063ffc8*/  jmp short loc_14063FFFE
loc_14063FFCA: /*14063ffca*/ mov ecx, 8
/*14063ffcf*/  mov edx, 10h
/*14063ffd4*/  call sub_1416C2D31
/*14063ffda*/  jmp short loc_14063FFFE
loc_14063FFDC: /*14063ffdc*/ mov ecx, 8
/*14063ffe1*/  mov edx, 40h ; '@'
/*14063ffe6*/  call sub_1416C2D31
/*14063ffec*/  jmp short loc_14063FFFE
loc_14063FFEE: /*14063ffee*/ mov ecx, 8
/*14063fff3*/  mov edx, 40h ; '@'
/*14063fff8*/  call sub_1416C2D31
loc_14063FFFE: /*14063fffe*/ ud2
