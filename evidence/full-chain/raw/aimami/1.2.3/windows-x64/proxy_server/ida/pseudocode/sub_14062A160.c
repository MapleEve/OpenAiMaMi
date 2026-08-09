// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14062a160  size: 0x319c  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host 192.168.110.94)
// status: PARTIAL Hex-Rays pseudocode (server-side decompile response cap hit; full text was collapsed to first 1024 chars + '[N chars total]' marker, both with and without include_addresses).
//         Recovered to FULL completeness via chunked basic_blocks/disasm pagination (page size 350 instructions, below the ~450-instruction / ~50KB server response-size ceiling discovered empirically).
//         Companion files: sub_14062A160_disasm.json (raw paginated instruction JSON), sub_14062A160_disasm.txt (linear listing, this file's body below the partial Hex-Rays declarations).
//
// Functional summary:
//   TRUNCATED by server-side decompile cap (server returned 1024/75011 chars for the pseudocode;
//   recovered via full instruction-level disassembly chunked through basic_blocks/disasm pagination, see
//   companion _disasm.json/.txt). Only string ref is 'stream'; size (0x319c, ~12.7KB) and proximity to
//   the failover closure (0x140631ce0) suggest this is the core per-attempt streaming-forward body used
//   by forward_with_failover.
//
// Referenced strings/symbols:
//   0x141433d50  sub_141433D50
//   0x141767f58  aStream   "stream"
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d4b  sub_1416C2D4B
//   0x140307860  sub_140307860
//   0x1400104f0  sub_1400104F0
//   0x140669440  sub_140669440
//   0x1416c1680  sub_1416C1680
//   0x1416c1970  sub_1416C1970
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14062A160(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int64 v14; // r14
  _BYTE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  char v21; // cl
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  __int64 v24; // r8
  __int128 v25; // xmm0
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int32 v29; // eax
  bool v30; // of
  signed __int32 v31; // eax
  int v32; // ett
  __int64 v33; // rt0
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int32 v39; // eax
  bool v40; // of
  signed __int32 v41; // eax
 ... [75011 chars total]

/* ---- FULL DISASSEMBLY (chunked via basic_blocks/disasm pagination, complete instruction coverage) ---- */
/* 2175 instructions, 14062a160 .. 14062d2f7 */
/*
  14062a160: push rbp
  14062a161: push r15
  14062a163: push r14
  14062a165: push r13
  14062a167: push r12
  14062a169: push rsi
  14062a16a: push rdi
  14062a16b: push rbx
  14062a16c: sub rsp, 908h
  14062a173: lea rbp, [rsp+80h]
  14062a17b: mov [rbp+8C0h+var_40], 0FFFFFFFFFFFFFFFEh
  14062a186: mov rdi, r8
  14062a189: mov r15, rdx
  14062a18c: mov rsi, rcx
  14062a18f: movzx eax, byte ptr [rdx+0C5h]
  14062a196: lea rcx, jpt_14062A1AB
  14062a19d: movsxd rax, ds:(jpt_14062A1AB - 14177E6C0h)[rcx+rax*4]; switch 6 cases
  14062a1a1: add rax, rcx
  14062a1a4: mov [rbp+8C0h+var_50], rdx
  14062a1ab: jmp rax; switch jump
loc_14062A1AD:
  14062a1ad: mov dword ptr [r15+0C1h], 100h; jumptable 000000014062A1AB case 0
  14062a1b8: movups xmm0, xmmword ptr [r15+0A8h]
  14062a1c0: movups xmmword ptr [r15+90h], xmm0
  14062a1c8: mov rbx, [r15+80h]
  14062a1cf: mov r12, [r15+88h]
  14062a1d6: movups xmm0, xmmword ptr [r15+40h]
  14062a1db: movups xmm1, xmmword ptr [r15+50h]
  14062a1e0: movups xmm2, xmmword ptr [r15+60h]
  14062a1e5: movups xmm3, xmmword ptr [r15+70h]
  14062a1ea: movups xmmword ptr [r15], xmm0
  14062a1ee: movups xmmword ptr [r15+10h], xmm1
  14062a1f3: mov r14, [r15+0B8h]
  14062a1fa: lea r8, [r15+20h]
  14062a1fe: movups xmmword ptr [r15+20h], xmm2
  14062a203: movups xmmword ptr [r15+30h], xmm3
  14062a208: movzx eax, byte ptr [r15+0C6h]
  14062a210: mov [r15+0C0h], al
loc_14062A217:
  14062a217: lea rcx, aStream; "stream"
  14062a21e: mov edx, 6
  14062a223: call sub_141433D50
  14062a228: nop
  14062a229: test rax, rax
  14062a22c: jz loc_14062A4F1
  14062a232: cmp byte ptr [rax], 1
  14062a235: jnz loc_14062A4F1
  14062a23b: test byte ptr [rax+1], 1
  14062a23f: jz loc_14062A4F1
  14062a245: mov r15, [rbp+8C0h+var_50]
  14062a24c: cmp byte ptr [r15], 5
  14062a250: jnz loc_14062A2E1
  14062a256: call nullsub_1
  14062a25b: mov ecx, 6
  14062a260: mov edx, 1
  14062a265: call sub_140001650
  14062a26a: test rax, rax
  14062a26d: jz loc_14062D284
  14062a273: mov word ptr [rax+4], 6D61h
  14062a279: mov dword ptr [rax], 65727473h
  14062a27f: mov qword ptr [rbp+8C0h+var_270], 6
  14062a28a: mov qword ptr [rbp+8C0h+var_270+8], rax
  14062a291: mov qword ptr [rbp+8C0h+var_260], 6
  14062a29c: lea rdx, [r15+8]
  14062a2a0: mov word ptr [rbp+8C0h+var_1E0], 101h
  14062a2a9: lea rcx, [rbp+8C0h+var_4B0]
  14062a2b0: lea r8, [rbp+8C0h+var_270]
  14062a2b7: lea r9, [rbp+8C0h+var_1E0]
  14062a2be: call sub_140307860
  14062a2c3: nop
  14062a2c4: cmp byte ptr [rbp+8C0h+var_4B0], 0FFh
  14062a2cb: jz short loc_14062A2DA
  14062a2cd: lea rcx, [rbp+8C0h+var_4B0]
  14062a2d4: call sub_1400104F0
  14062a2d9: nop
loc_14062A2DA:
  14062a2da: mov r15, [rbp+8C0h+var_50]
loc_14062A2E1:
  14062a2e1: mov rax, [r15+90h]
  14062a2e8: mov rdx, [r15+98h]
  14062a2ef: mov byte ptr [r15+0C2h], 0
  14062a2f7: movups xmm0, xmmword ptr [r15]
  14062a2fb: movups xmm1, xmmword ptr [r15+10h]
  14062a300: movups [rbp+8C0h+var_1B0], xmm1
  14062a307: movups [rbp+8C0h+var_1C0], xmm0
  14062a30e: movzx ecx, byte ptr [r15+0C0h]
  14062a316: movups xmm2, [rbp+8C0h+var_1E0]
  14062a31d: movups xmm3, [rbp+8C0h+var_1D0]
  14062a324: movaps [rbp+8C0h+var_8F0], xmm3
  14062a328: movaps [rbp+8C0h+var_8E0], xmm0
  14062a32c: movaps [rbp+8C0h+var_8D0], xmm1
  14062a330: movaps [rbp+8C0h+var_900], xmm2
  14062a334: lea r13, [r15+0C8h]
  14062a33b: movups xmmword ptr [r15+0F8h], xmm1
  14062a343: movups xmmword ptr [r15+0E8h], xmm0
  14062a34b: movups xmmword ptr [r15+0D8h], xmm3
  14062a353: movups xmmword ptr [r15+0C8h], xmm2
  14062a35b: mov [r15+108h], rbx
  14062a362: mov [r15+110h], r12
  14062a369: mov [r15+130h], rax
  14062a370: mov [r15+138h], rdx
  14062a377: mov [r15+140h], r14
  14062a37e: lea r8, [r15+14Bh]
  14062a385: mov byte ptr [r15+14Bh], 0
  14062a38d: mov [r15+14Ch], cl
  14062a394: jmp short loc_14062A3EE
loc_14062A396:
  14062a396: lea rax, [r15+14Bh]; jumptable 000000014062A1AB case 3
  14062a39d: mov [rbp+8C0h+var_60], rax
  14062a3a4: movzx eax, byte ptr [r15+14Bh]
  14062a3ac: lea r13, [r15+0C8h]
  14062a3b3: lea rcx, jpt_14062A3C1
  14062a3ba: movsxd rax, ds:(jpt_14062A3C1 - 14177E6D8h)[rcx+rax*4]; switch 5 cases
  14062a3be: add rax, rcx
  14062a3c1: jmp rax; switch jump
loc_14062A3C3:
  14062a3c3: mov rax, [r15+130h]; jumptable 000000014062A3C1 case 0
  14062a3ca: mov rdx, [r15+138h]
  14062a3d1: mov rbx, [r15+108h]
  14062a3d8: mov r12, [r15+110h]
  14062a3df: movzx ecx, byte ptr [r15+14Ch]
  14062a3e7: lea r8, [r15+14Bh]
loc_14062A3EE:
  14062a3ee: mov word ptr [r15+149h], 0
  14062a3f8: mov [r15+118h], rax
  14062a3ff: mov [r15+120h], rdx
  14062a406: movups xmm0, xmmword ptr [r15+0E8h]
  14062a40e: movups xmm1, xmmword ptr [r15+0F8h]
  14062a416: movups xmmword ptr [r13+10h], xmm1
  14062a41b: movups xmmword ptr [r13+0], xmm0
  14062a420: mov [r15+148h], cl
  14062a427: mov [rbp+8C0h+var_60], r8
  14062a42e: mov [rbp+8C0h+var_378], r8
  14062a435: mov [rbp+8C0h+var_380], r13
loc_14062A43C:
  14062a43c: mov rcx, rbp
  14062a43f: call sub_140669440
  14062a444: nop
  14062a445: mov rcx, [rbp+8C0h+var_50]
  14062a44c: mov byte ptr [rcx+14Ah], 1
  14062a453: mov rax, [rcx+118h]
  14062a45a: mov rcx, [rcx+120h]
  14062a461: cmp byte ptr [rcx+0E5h], 1
  14062a468: jnz loc_14062A978
  14062a46e: mov r15, [rax+20h]
  14062a472: lea r14, [r15+10h]
  14062a476: mov eax, [r15+10h]
  14062a47a: cmp eax, 3FFFFFFDh
  14062a47f: ja loc_14062D138
  14062a485: lea ecx, [rax+1]
  14062a488: lock cmpxchg [r14], ecx
  14062a48d: jnz loc_14062D138
loc_14062A493:
  14062a493: movzx eax, byte ptr [r15+18h]
  14062a498: mov rax, [r15+20h]
  14062a49c: lock inc qword ptr [rax]
  14062a4a0: jle loc_14062D2B4
  14062a4a6: mov rdx, [r15+20h]
  14062a4aa: mov eax, 0FFFFFFFFh
  14062a4af: lock xadd [r15+10h], eax
  14062a4b5: dec eax
  14062a4b7: mov ecx, eax
  14062a4b9: and ecx, 0BFFFFFFFh
  14062a4bf: neg ecx
  14062a4c1: jno loc_14062A9D1
  14062a4c7: mov rcx, [rbp+8C0h+var_60]
  14062a4ce: mov [rbp+8C0h+var_1E8], rcx
  14062a4d5: mov [rbp+8C0h+var_1F0], r13
loc_14062A4DC:
  14062a4dc: mov rcx, r14
  14062a4df: mov r14, rdx
  14062a4e2: mov edx, eax
  14062a4e4: call sub_1416C1970
  14062a4e9: mov rdx, r14
  14062a4ec: jmp loc_14062A9D1
loc_14062A4F1:
  14062a4f1: mov r14, [rbp+8C0h+var_50]
  14062a4f8: cmp byte ptr [r14], 5
  14062a4fc: jnz loc_14062A58D
  14062a502: call nullsub_1
  14062a507: mov ecx, 6
  14062a50c: mov edx, 1
  14062a511: call sub_140001650
  14062a516: test rax, rax
  14062a519: jz loc_14062D246
  14062a51f: mov word ptr [rax+4], 6D61h
  14062a525: mov dword ptr [rax], 65727473h
  14062a52b: mov qword ptr [rbp+8C0h+var_270], 6
  14062a536: mov qword ptr [rbp+8C0h+var_270+8], rax
  14062a53d: mov qword ptr [rbp+8C0h+var_260], 6
  14062a548: lea rdx, [r14+8]
  14062a54c: mov word ptr [rbp+8C0h+var_1E0], 1
loc_14062A555:
  14062a555: lea rcx, [rbp+8C0h+var_4B0]
  14062a55c: lea r8, [rbp+8C0h+var_270]
  14062a563: lea r9, [rbp+8C0h+var_1E0]
  14062a56a: call sub_140307860
  14062a56f: nop
  14062a570: cmp byte ptr [rbp+8C0h+var_4B0], 0FFh
  14062a577: jz short loc_14062A586
  14062a579: lea rcx, [rbp+8C0h+var_4B0]
  14062a580: call sub_1400104F0
  14062a585: nop
loc_14062A586:
  14062a586: mov r14, [rbp+8C0h+var_50]
loc_14062A58D:
  14062a58d: mov rdx, [r14+98h]
loc_14062A594:
  14062a594: lea rcx, [rbp+8C0h+var_760]
  14062a59b: call sub_140669440
  14062a5a0: nop
  14062a5a1: mov rcx, [rbp+8C0h+var_50]
  14062a5a8: mov byte ptr [rcx+0C4h], 1
  14062a5af: mov rax, [rcx+90h]
  14062a5b6: mov rcx, [rcx+98h]
  14062a5bd: cmp byte ptr [rcx+0E5h], 1
  14062a5c4: jnz short loc_14062A625
  14062a5c6: mov r13, [rax+20h]
  14062a5ca: lea r15, [r13+10h]
  14062a5ce: mov eax, [r13+10h]
  14062a5d2: cmp eax, 3FFFFFFDh
  14062a5d7: ja loc_14062D11C
  14062a5dd: lea ecx, [rax+1]
  14062a5e0: lock cmpxchg [r15], ecx
  14062a5e5: jnz loc_14062D11C
loc_14062A5EB:
  14062a5eb: movzx eax, byte ptr [r13+18h]
  14062a5f0: mov rax, [r13+20h]
  14062a5f4: lock inc qword ptr [rax]
  14062a5f8: jle loc_14062D2B4
  14062a5fe: mov r14, [r13+20h]
  14062a602: mov edx, 0FFFFFFFFh
  14062a607: lock xadd [r13+10h], edx
  14062a60d: dec edx
  14062a60f: mov eax, edx
  14062a611: and eax, 0BFFFFFFFh
  14062a616: neg eax
  14062a618: jno short loc_14062A67D
loc_14062A61A:
  14062a61a: mov rcx, r15
  14062a61d: call sub_1416C1970
  14062a622: nop
  14062a623: jmp short loc_14062A67D
loc_14062A625:
  14062a625: mov r13, [rax+18h]
  14062a629: lea r15, [r13+10h]
  14062a62d: mov eax, [r13+10h]
  14062a631: cmp eax, 3FFFFFFDh
  14062a636: ja loc_14062D12A
  14062a63c: lea ecx, [rax+1]
  14062a63f: lock cmpxchg [r15], ecx
  14062a644: jnz loc_14062D12A
loc_14062A64A:
  14062a64a: movzx eax, byte ptr [r13+18h]
  14062a64f: mov rax, [r13+20h]
  14062a653: lock inc qword ptr [rax]
  14062a657: jle loc_14062D2B4
  14062a65d: mov r14, [r13+20h]
  14062a661: mov edx, 0FFFFFFFFh
  14062a666: lock xadd [r13+10h], edx
  14062a66c: dec edx
  14062a66e: mov eax, edx
  14062a670: and eax, 0BFFFFFFFh
  14062a675: neg eax
  14062a677: jo loc_14062D193
loc_14062A67D:
  14062a67d: mov rax, [rbp+8C0h+var_50]
  14062a684: mov [rax+0A0h], r14
loc_14062A68B:
  14062a68b: mov [rsp+940h+var_920], r12
  14062a690: lea r8, unk_141764700
  14062a697: lea rcx, [rbp+8C0h+var_1E0]
  14062a69e: mov rdx, r14
  14062a6a1: mov r9, rbx
  14062a6a4: call sub_1405A48C0
  14062a6a9: nop
  14062a6aa: mov rax, [rbp+8C0h+var_50]
  14062a6b1: mov byte ptr [rax+0C4h], 0
  14062a6b8: movups xmm0, [rbp+8C0h+var_710]
  14062a6bf: movaps [rbp+8C0h+var_220], xmm0
  14062a6c6: movups xmm0, [rbp+8C0h+var_720]
  14062a6cd: movaps [rbp+8C0h+var_230], xmm0
  14062a6d4: movups xmm0, [rbp+8C0h+var_760]
  14062a6db: movups xmm1, [rbp+8C0h+var_750]
  14062a6e2: movups xmm2, [rbp+8C0h+var_740]
  14062a6e9: movups xmm3, [rbp+8C0h+var_730]
  14062a6f0: movaps [rbp+8C0h+var_240], xmm3
  14062a6f7: movaps [rbp+8C0h+var_250], xmm2
  14062a6fe: movaps [rbp+8C0h+var_260], xmm1
  14062a705: movaps [rbp+8C0h+var_270], xmm0
  14062a70c: lea rcx, [rbp+8C0h+var_4B0]
  14062a713: lea rdx, [rbp+8C0h+var_1E0]
  14062a71a: lea r8, [rbp+8C0h+var_270]
  14062a721: call sub_14103C250
  14062a726: nop
  14062a727: lea rcx, [rbp+8C0h+var_1E0]
  14062a72e: lea rdx, [rbp+8C0h+var_4B0]
  14062a735: mov r8, [rbp+8C0h+var_50]
  14062a73c: call sub_1406C67E0
  14062a741: nop
  14062a742: lea rcx, [rbp+8C0h+var_1E0]
  14062a749: call sub_14103C180
  14062a74e: nop
  14062a74f: mov r15, [rbp+8C0h+var_50]
  14062a756: mov [r15+0C8h], rax
  14062a75d: mov [r15+0D0h], rdx
loc_14062A764:
  14062a764: lea rdx, [r15+0C8h]; jumptable 000000014062A1AB case 4
loc_14062A76B:
  14062a76b: lea rcx, [rbp+8C0h+var_1E0]
  14062a772: mov [rbp+8C0h+var_60], rdx
  14062a779: mov r8, rdi
  14062a77c: call sub_14104DCF0
  14062a781: nop
  14062a782: mov r14, qword ptr [rbp+8C0h+var_1E0]
  14062a789: cmp r14, 0FFFFFFFFFFFFFFFEh
  14062a78d: jnz short loc_14062A79D
  14062a78f: mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
  14062a796: mov al, 4
  14062a798: jmp loc_14062B57B
loc_14062A79D:
  14062a79d: mov r15, qword ptr [rbp+8C0h+var_1E0+8]
  14062a7a4: movups xmm0, [rbp+8C0h+var_1D0]
  14062a7ab: movaps [rbp+8C0h+var_840], xmm0
  14062a7b2: movups xmm0, [rbp+8C0h+var_1C0]
  14062a7b9: movaps [rbp+8C0h+var_830], xmm0
  14062a7c0: movups xmm0, [rbp+8C0h+var_1B0]
  14062a7c7: movaps [rbp+8C0h+var_820], xmm0
  14062a7ce: movups xmm0, [rbp+8C0h+var_1A0]
  14062a7d5: movaps [rbp+8C0h+var_810], xmm0
  14062a7dc: movups xmm0, [rbp+8C0h+var_190]
  14062a7e3: movaps [rbp+8C0h+var_800], xmm0
  14062a7ea: movups xmm0, [rbp+8C0h+var_180]
  14062a7f1: movaps [rbp+8C0h+var_7F0], xmm0
  14062a7f8: movups xmm0, [rbp+8C0h+var_170]
  14062a7ff: movaps [rbp+8C0h+var_7E0], xmm0
  14062a806: mov rax, qword ptr [rbp+8C0h+var_160]
  14062a80d: mov [rbp+8C0h+var_7D0], rax
loc_14062A814:
  14062a814: mov rcx, [rbp+8C0h+var_60]
  14062a81b: call sub_1405E6830
  14062a820: nop
  14062a821: cmp r14d, 0FFFFFFFFh
  14062a825: jz loc_14062ADE5
  14062a82b: mov rcx, [rbp+8C0h+var_50]
  14062a832: mov byte ptr [rcx+0C3h], 1
  14062a839: lea rbx, [rcx+0D0h]
  14062a840: mov [rcx+0D0h], r14
  14062a847: mov [rcx+0D8h], r15
  14062a84e: movaps xmm0, [rbp+8C0h+var_840]
  14062a855: movaps xmm1, [rbp+8C0h+var_830]
  14062a85c: movaps xmm2, [rbp+8C0h+var_820]
  14062a863: movaps xmm3, [rbp+8C0h+var_810]
  14062a86a: movups xmmword ptr [rcx+0E0h], xmm0
  14062a871: movups xmmword ptr [rcx+0F0h], xmm1
  14062a878: movups xmmword ptr [rcx+100h], xmm2
  14062a87f: movups xmmword ptr [rcx+110h], xmm3
  14062a886: movaps xmm0, [rbp+8C0h+var_800]
  14062a88d: movups xmmword ptr [rcx+120h], xmm0
  14062a894: movaps xmm0, [rbp+8C0h+var_7F0]
  14062a89b: movups xmmword ptr [rcx+130h], xmm0
  14062a8a2: movaps xmm0, [rbp+8C0h+var_7E0]
  14062a8a9: movups xmmword ptr [rcx+140h], xmm0
  14062a8b0: mov rax, [rbp+8C0h+var_7D0]
  14062a8b7: mov [rcx+150h], rax
  14062a8be: movzx eax, word ptr [rcx+138h]
  14062a8c5: mov [rcx+0C8h], ax
  14062a8cc: movups xmm0, cs:xmmword_141766788
  14062a8d3: movaps [rbp+8C0h+var_1D0], xmm0
  14062a8da: movups xmm0, cs:xmmword_141766778
  14062a8e1: movaps [rbp+8C0h+var_1E0], xmm0
loc_14062A8E8:
  14062a8e8: lea rdx, [rbp+8C0h+var_1E0]
  14062a8ef: mov rcx, rbx
  14062a8f2: call sub_1406C11C0
  14062a8f7: nop
  14062a8f8: mov ecx, 158h
  14062a8fd: test rax, rax
  14062a900: jz loc_14062AFA2
  14062a906: mov rdx, [rax+10h]
  14062a90a: test rdx, rdx
  14062a90d: mov r15, [rbp+8C0h+var_50]
  14062a914: jz loc_14062B4F8
  14062a91a: mov r14, [rax+8]
  14062a91e: xor eax, eax
loc_14062A920:
  14062a920: movzx r8d, byte ptr [r14+rax]
  14062a925: lea r9d, [r8-20h]
  14062a929: cmp r9b, 5Fh ; '_'
  14062a92d: setb r9b
  14062a931: cmp r8b, 9
  14062a935: setz r8b
  14062a939: or r8b, r9b
  14062a93c: jz loc_14062B513
  14062a942: inc rax
  14062a945: cmp rdx, rax
  14062a948: jnz short loc_14062A920
  14062a94a: test rdx, rdx
  14062a94d: jns loc_14062D2B6
  14062a953: xor ecx, ecx
loc_14062A955:
  14062a955: call sub_1416C2D4B
  14062a95b: jmp loc_14062D2B4
loc_14062A960:
  14062a960: mov [rbp+8C0h+var_80], r13; jumptable 000000014062A3C1 case 3
  14062a967: jmp loc_14062AAE5
loc_14062A96C:
  14062a96c: mov [rbp+8C0h+var_80], r13; jumptable 000000014062A3C1 case 4
  14062a973: jmp loc_14062B18F
loc_14062A978:
  14062a978: mov r15, [rax+18h]
  14062a97c: lea r14, [r15+10h]
  14062a980: mov eax, [r15+10h]
  14062a984: cmp eax, 3FFFFFFDh
  14062a989: ja loc_14062D15B
  14062a98f: lea ecx, [rax+1]
  14062a992: lock cmpxchg [r14], ecx
  14062a997: jnz loc_14062D15B
loc_14062A99D:
  14062a99d: movzx eax, byte ptr [r15+18h]
  14062a9a2: mov rax, [r15+20h]
  14062a9a6: lock inc qword ptr [rax]
  14062a9aa: jle loc_14062D2B4
  14062a9b0: mov rdx, [r15+20h]
  14062a9b4: mov eax, 0FFFFFFFFh
  14062a9b9: lock xadd [r15+10h], eax
  14062a9bf: dec eax
  14062a9c1: mov ecx, eax
  14062a9c3: and ecx, 0BFFFFFFFh
  14062a9c9: neg ecx
  14062a9cb: jo loc_14062D1A1
loc_14062A9D1:
  14062a9d1: mov rax, [rbp+8C0h+var_50]
  14062a9d8: mov [rax+128h], rdx
  14062a9df: mov r14, [rbp+8C0h+var_60]
  14062a9e6: mov [rbp+8C0h+var_C0], r14
  14062a9ed: mov [rbp+8C0h+var_C8], r13
loc_14062A9F4:
  14062a9f4: mov [rsp+940h+var_920], r12
  14062a9f9: lea r8, unk_141764700
  14062aa00: lea rcx, [rbp+8C0h+var_1E0]
  14062aa07: mov r9, rbx
  14062aa0a: call sub_1405A48C0
  14062aa0f: nop
  14062aa10: mov rax, [rbp+8C0h+var_50]
  14062aa17: mov byte ptr [rax+14Ah], 0
  14062aa1e: movups xmm0, [rbp+8C0h+var_870]
  14062aa22: movaps [rbp+8C0h+var_2A0], xmm0
  14062aa29: movups xmm0, [rbp+8C0h+var_880]
  14062aa2d: movaps [rbp+8C0h+var_2B0], xmm0
  14062aa34: movups xmm0, [rbp+8C0h+var_8C0]
  14062aa38: movups xmm1, [rbp+8C0h+var_8B0]
  14062aa3c: movups xmm2, [rbp+8C0h+var_8A0]
  14062aa40: movups xmm3, [rbp+8C0h+var_890]
  14062aa44: movaps [rbp+8C0h+var_2C0], xmm3
  14062aa4b: movaps [rbp+8C0h+var_2D0], xmm2
  14062aa52: movaps [rbp+8C0h+var_2E0], xmm1
  14062aa59: movaps [rbp+8C0h+var_2F0], xmm0
  14062aa60: mov [rbp+8C0h+var_C0], r14
  14062aa67: mov [rbp+8C0h+var_C8], r13
  14062aa6e: lea rcx, [rbp+8C0h+var_4B0]
  14062aa75: lea rdx, [rbp+8C0h+var_1E0]
  14062aa7c: lea r8, [rbp+8C0h+var_2F0]
  14062aa83: call sub_14103C250
  14062aa88: nop
  14062aa89: mov [rbp+8C0h+var_C0], r14
  14062aa90: mov [rbp+8C0h+var_C8], r13
  14062aa97: lea rcx, [rbp+8C0h+var_1E0]
  14062aa9e: lea rdx, [rbp+8C0h+var_4B0]
  14062aaa5: mov r8, r13
  14062aaa8: call sub_1406C67E0
  14062aaad: nop
  14062aaae: mov [rbp+8C0h+var_C0], r14
  14062aab5: mov [rbp+8C0h+var_C8], r13
  14062aabc: lea rcx, [rbp+8C0h+var_1E0]
  14062aac3: call sub_14103C180
  14062aac8: nop
  14062aac9: mov [rbp+8C0h+var_80], r13
  14062aad0: mov r15, [rbp+8C0h+var_50]
  14062aad7: mov [r15+150h], rax
  14062aade: mov [r15+158h], rdx
loc_14062AAE5:
  14062aae5: lea rdx, [r15+150h]
loc_14062AAEC:
  14062aaec: lea rcx, [rbp+8C0h+var_1E0]
  14062aaf3: mov [rbp+8C0h+var_70], rdx
  14062aafa: mov r8, rdi
  14062aafd: call sub_14104DCF0
  14062ab02: nop
  14062ab03: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062ab0a: cmp rbx, 0FFFFFFFFFFFFFFFEh
  14062ab0e: jnz short loc_14062AB17
  14062ab10: mov al, 3
  14062ab12: jmp loc_14062B1B8
loc_14062AB17:
  14062ab17: mov r14, qword ptr [rbp+8C0h+var_1E0+8]
  14062ab1e: movups xmm0, [rbp+8C0h+var_1D0]
  14062ab25: movaps [rbp+8C0h+var_760], xmm0
  14062ab2c: movups xmm0, [rbp+8C0h+var_1C0]
  14062ab33: movaps [rbp+8C0h+var_750], xmm0
  14062ab3a: movups xmm0, [rbp+8C0h+var_1B0]
  14062ab41: movaps [rbp+8C0h+var_740], xmm0
  14062ab48: movups xmm0, [rbp+8C0h+var_1A0]
  14062ab4f: movaps [rbp+8C0h+var_730], xmm0
  14062ab56: movups xmm0, [rbp+8C0h+var_190]
  14062ab5d: movaps [rbp+8C0h+var_720], xmm0
  14062ab64: movups xmm0, [rbp+8C0h+var_180]
  14062ab6b: movaps [rbp+8C0h+var_710], xmm0
  14062ab72: movups xmm0, [rbp+8C0h+var_170]
  14062ab79: movaps [rbp+8C0h+var_700], xmm0
  14062ab80: mov rax, qword ptr [rbp+8C0h+var_160]
  14062ab87: mov [rbp+8C0h+var_6F0], rax
  14062ab8e: mov rax, [rbp+8C0h+var_60]
  14062ab95: mov [rbp+8C0h+var_C0], rax
  14062ab9c: mov r12, [rbp+8C0h+var_80]
  14062aba3: mov [rbp+8C0h+var_C8], r12
loc_14062ABAA:
  14062abaa: mov r13, [rbp+8C0h+var_70]
  14062abb1: mov rcx, r13
  14062abb4: call sub_1405E6830
  14062abb9: nop
loc_14062ABBA:
  14062abba: cmp ebx, 0FFFFFFFFh
  14062abbd: jz loc_14062AFB5
  14062abc3: mov r15, [rbp+8C0h+var_50]
  14062abca: mov byte ptr [r15+149h], 1
  14062abd2: lea rdx, [r15+158h]
  14062abd9: mov [r15+158h], rbx
  14062abe0: mov [r15+160h], r14
  14062abe7: movaps xmm0, [rbp+8C0h+var_760]
  14062abee: movaps xmm1, [rbp+8C0h+var_750]
  14062abf5: movaps xmm2, [rbp+8C0h+var_740]
  14062abfc: movaps xmm3, [rbp+8C0h+var_730]
  14062ac03: movups xmmword ptr [r15+168h], xmm0
  14062ac0b: movups xmmword ptr [r15+178h], xmm1
  14062ac13: movups xmmword ptr [r15+188h], xmm2
  14062ac1b: movups xmmword ptr [r15+198h], xmm3
  14062ac23: movaps xmm0, [rbp+8C0h+var_720]
  14062ac2a: movups xmmword ptr [r15+1A8h], xmm0
  14062ac32: movaps xmm0, [rbp+8C0h+var_710]
  14062ac39: movups xmmword ptr [r15+1B8h], xmm0
  14062ac41: movaps xmm0, [rbp+8C0h+var_700]
  14062ac48: movups xmmword ptr [r15+1C8h], xmm0
  14062ac50: mov rax, [rbp+8C0h+var_6F0]
  14062ac57: mov [r15+1D8h], rax
  14062ac5e: mov eax, [r15+1C0h]
  14062ac65: mov [r15+150h], ax
  14062ac6d: add eax, 0FFFFFF38h
  14062ac72: cmp ax, 63h ; 'c'
  14062ac76: ja loc_14062B16D
  14062ac7c: mov byte ptr [r15+149h], 0
  14062ac84: lea rdi, [rbp+8C0h+var_1E0]
  14062ac8b: mov r8d, 88h
  14062ac91: mov rcx, rdi
  14062ac94: call sub_141684120
  14062ac99: mov rax, [rbp+8C0h+var_60]
  14062aca0: mov [rbp+8C0h+var_B0], rax
  14062aca7: mov [rbp+8C0h+var_B8], r12
loc_14062ACAE:
  14062acae: mov rcx, rdi
  14062acb1: call sub_140EA3B00
  14062acb6: mov [rbp+8C0h+var_90], rax
  14062acbd: mov [rbp+8C0h+var_A8], rdx
  14062acc4: mov rdi, [rbp+8C0h+var_50]
  14062accb: mov rdx, [rdi+120h]
  14062acd2: add rdx, 60h ; '`'
  14062acd6: mov [rbp+8C0h+var_91], 1
loc_14062ACDD:
  14062acdd: lea rcx, [rbp+8C0h+var_2F0]
  14062ace4: call sub_14149C500
  14062ace9: nop
  14062acea: movzx ebx, byte ptr [rdi+148h]
  14062acf1: call nullsub_1
  14062acf6: mov ecx, 10h
  14062acfb: mov edx, 8
  14062ad00: call sub_140001650
  14062ad05: test rax, rax
  14062ad08: jz loc_14062D1CB
  14062ad0e: mov rcx, [rbp+8C0h+var_90]
  14062ad15: mov [rax], rcx
  14062ad18: mov rcx, [rbp+8C0h+var_A8]
  14062ad1f: mov [rax+8], rcx
  14062ad23: xorps xmm0, xmm0
  14062ad26: movaps [rbp+8C0h+var_7A0], xmm0
  14062ad2d: mov qword ptr [rbp+8C0h+var_790], 1
  14062ad38: mov qword ptr [rbp+8C0h+var_790+8], 0
  14062ad43: mov qword ptr [rbp+8C0h+var_780], rax
  14062ad4a: mov byte ptr [rbp+8C0h+var_780+8], 0
  14062ad51: test bl, bl
  14062ad53: jz loc_14062BD78
  14062ad59: mov rdi, qword ptr [rbp+8C0h+var_2F0+8]
  14062ad60: mov r8, qword ptr [rbp+8C0h+var_2E0]
  14062ad67: mov [rbp+8C0h+var_81], 1
loc_14062AD6E:
  14062ad6e: lea rcx, [rbp+8C0h+var_1E0]
  14062ad75: mov rdx, rdi
  14062ad78: call sub_1409A2A80
  14062ad7d: nop
  14062ad7e: movups xmm0, [rbp+8C0h+var_180]
  14062ad85: movaps [rbp+8C0h+var_450], xmm0
  14062ad8c: movups xmm0, [rbp+8C0h+var_190]
  14062ad93: movaps [rbp+8C0h+var_460], xmm0
  14062ad9a: movups xmm0, [rbp+8C0h+var_1A0]
  14062ada1: movaps [rbp+8C0h+var_470], xmm0
  14062ada8: movups xmm0, [rbp+8C0h+var_1E0]
  14062adaf: movups xmm1, [rbp+8C0h+var_1D0]
  14062adb6: movups xmm2, [rbp+8C0h+var_1C0]
  14062adbd: movups xmm3, [rbp+8C0h+var_1B0]
  14062adc4: movaps [rbp+8C0h+var_480], xmm3
  14062adcb: movaps [rbp+8C0h+var_490], xmm2
  14062add2: movaps [rbp+8C0h+var_4A0], xmm1
  14062add9: movaps [rbp+8C0h+var_4B0], xmm0
  14062ade0: jmp loc_14062BE0A
loc_14062ADE5:
  14062ade5: mov qword ptr [rbp+8C0h+var_590], r15
  14062adec: mov rax, [rbp+8C0h+var_50]
  14062adf3: mov rcx, [rax+90h]
loc_14062ADFA:
  14062adfa: call sub_140660A60
  14062adff: nop
  14062ae00: lea rbx, [rbp+8C0h+var_590]
  14062ae07: mov qword ptr [rbp+8C0h+var_4B0], rbx
  14062ae0e: lea r14, sub_141031F10
  14062ae15: mov qword ptr [rbp+8C0h+var_4B0+8], r14
  14062ae1c: lea rdx, unk_141767F78
  14062ae23: lea rcx, [rbp+8C0h+var_1E0]
  14062ae2a: lea r8, [rbp+8C0h+var_4B0]
  14062ae31: call sub_14149C0F0
  14062ae36: nop
  14062ae37: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062ae3e: mov [rbp+8C0h+var_70], rax
  14062ae45: mov rax, qword ptr [rbp+8C0h+var_1E0+8]
  14062ae4c: mov [rbp+8C0h+var_90], rax
  14062ae53: mov rdi, qword ptr [rbp+8C0h+var_1D0]
  14062ae5a: mov qword ptr [rbp+8C0h+var_270], rbx
  14062ae61: mov qword ptr [rbp+8C0h+var_270+8], r14
loc_14062AE68:
  14062ae68: lea rdx, unk_141767F78
  14062ae6f: lea rcx, [rbp+8C0h+var_4B0]
  14062ae76: lea r8, [rbp+8C0h+var_270]
  14062ae7d: call sub_14149C0F0
  14062ae82: nop
  14062ae83: mov rax, qword ptr [rbp+8C0h+var_4B0]
  14062ae8a: mov [rbp+8C0h+var_60], rax
  14062ae91: mov r8, qword ptr [rbp+8C0h+var_4B0+8]
  14062ae98: mov r9, qword ptr [rbp+8C0h+var_4A0]
loc_14062AE9F:
  14062ae9f: lea rax, aProxyUpstream; "proxy.upstream"
  14062aea6: mov [rsp+940h+var_920], rax
  14062aeab: mov [rsp+940h+var_918], 0Eh
  14062aeb4: lea rcx, [rbp+8C0h+var_1E0]
  14062aebb: mov dx, 1F6h
  14062aebf: mov [rbp+8C0h+var_80], r8
  14062aec6: call sub_14066B160
  14062aecb: nop
  14062aecc: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062aed3: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062aeda: movaps [rbp+8C0h+var_370], xmm0
  14062aee1: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062aee8: movaps [rbp+8C0h+var_360], xmm0
  14062aeef: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062aef6: movaps [rbp+8C0h+var_350], xmm0
  14062aefd: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062af04: movaps [rbp+8C0h+var_340], xmm0
  14062af0b: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062af12: movaps [rbp+8C0h+var_330], xmm0
  14062af19: movups xmm0, [rbp+8C0h+var_190+8]
  14062af20: movaps [rbp+8C0h+var_320], xmm0
  14062af27: movups xmm0, [rbp+8C0h+var_180+8]
  14062af2e: movaps [rbp+8C0h+var_310], xmm0
  14062af35: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062af3c: mov [rbp+8C0h+var_300], rax
  14062af43: mov rdx, [rbp+8C0h+var_60]
  14062af4a: test rdx, rdx
  14062af4d: jz short loc_14062AF62
  14062af4f: mov r8d, 1
  14062af55: mov rcx, [rbp+8C0h+var_80]
  14062af5c: call sub_140001660
  14062af61: nop
loc_14062AF62:
  14062af62: lea rcx, [rbp+8C0h+var_590]
  14062af69: call sub_1405E12D0
  14062af6e: nop
  14062af6f: mov r12, [rbp+8C0h+var_70]
  14062af76: mov r14, [rbp+8C0h+var_50]
  14062af7d: mov r13, [rbp+8C0h+var_90]
  14062af84: mov byte ptr [r14+0C3h], 0
  14062af8c: mov rax, [r14+0A0h]
  14062af93: lock dec qword ptr [rax]
  14062af97: jz loc_14062CF27
  14062af9d: jmp loc_14062CF3B
loc_14062AFA2:
  14062afa2: mov rdx, 0FFFFFFFFFFFFFFFFh
  14062afa9: mov r15, [rbp+8C0h+var_50]
  14062afb0: jmp loc_14062B51A
loc_14062AFB5:
  14062afb5: mov [rbp+8C0h+var_600], r14
  14062afbc: mov rax, [rbp+8C0h+var_50]
  14062afc3: mov rcx, [rax+118h]
loc_14062AFCA:
  14062afca: call sub_140660A60
  14062afcf: nop
  14062afd0: lea rbx, [rbp+8C0h+var_600]
  14062afd7: mov qword ptr [rbp+8C0h+var_4B0], rbx
  14062afde: lea r14, sub_141031F10
  14062afe5: mov qword ptr [rbp+8C0h+var_4B0+8], r14
  14062afec: lea rdx, unk_141767F78
  14062aff3: lea rcx, [rbp+8C0h+var_1E0]
  14062affa: lea r8, [rbp+8C0h+var_4B0]
  14062b001: call sub_14149C0F0
  14062b006: nop
  14062b007: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062b00e: mov [rbp+8C0h+var_70], rax
  14062b015: mov rax, qword ptr [rbp+8C0h+var_1E0+8]
  14062b01c: mov [rbp+8C0h+var_90], rax
  14062b023: mov rdi, qword ptr [rbp+8C0h+var_1D0]
  14062b02a: mov qword ptr [rbp+8C0h+var_2F0], rbx
  14062b031: mov qword ptr [rbp+8C0h+var_2F0+8], r14
loc_14062B038:
  14062b038: lea rdx, unk_141767F78
  14062b03f: lea rcx, [rbp+8C0h+var_4B0]
  14062b046: lea r8, [rbp+8C0h+var_2F0]
  14062b04d: call sub_14149C0F0
  14062b052: nop
  14062b053: mov rax, qword ptr [rbp+8C0h+var_4B0]
  14062b05a: mov [rbp+8C0h+var_A8], rax
  14062b061: mov r8, qword ptr [rbp+8C0h+var_4B0+8]
  14062b068: mov r9, qword ptr [rbp+8C0h+var_4A0]
loc_14062B06F:
  14062b06f: lea rax, aProxyUpstream; "proxy.upstream"
  14062b076: mov [rsp+940h+var_920], rax
  14062b07b: mov [rsp+940h+var_918], 0Eh
  14062b084: lea rcx, [rbp+8C0h+var_1E0]
  14062b08b: mov dx, 1F6h
  14062b08f: mov [rbp+8C0h+var_D0], r8
  14062b096: call sub_14066B160
  14062b09b: nop
  14062b09c: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062b0a3: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062b0aa: movaps [rbp+8C0h+var_270], xmm0
  14062b0b1: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062b0b8: movaps [rbp+8C0h+var_260], xmm0
  14062b0bf: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062b0c6: movaps [rbp+8C0h+var_250], xmm0
  14062b0cd: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062b0d4: movaps [rbp+8C0h+var_240], xmm0
  14062b0db: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062b0e2: movaps [rbp+8C0h+var_230], xmm0
  14062b0e9: movups xmm0, [rbp+8C0h+var_190+8]
  14062b0f0: movaps [rbp+8C0h+var_220], xmm0
  14062b0f7: movups xmm0, [rbp+8C0h+var_180+8]
  14062b0fe: movaps [rbp+8C0h+var_210], xmm0
  14062b105: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062b10c: mov [rbp+8C0h+var_200], rax
  14062b113: mov rdx, [rbp+8C0h+var_A8]
  14062b11a: test rdx, rdx
  14062b11d: jz short loc_14062B131
  14062b11f: mov r8d, 1
  14062b125: mov rcx, [rbp+8C0h+var_D0]
  14062b12c: call sub_140001660
loc_14062B131:
  14062b131: mov rax, [rbp+8C0h+var_60]
  14062b138: mov [rbp+8C0h+var_C0], rax
  14062b13f: mov r14, [rbp+8C0h+var_80]
  14062b146: mov [rbp+8C0h+var_C8], r14
loc_14062B14D:
  14062b14d: lea rcx, [rbp+8C0h+var_600]
  14062b154: call sub_1405E12D0
  14062b159: nop
loc_14062B15A:
  14062b15a: mov r12, [rbp+8C0h+var_70]
  14062b161: mov r13, [rbp+8C0h+var_90]
  14062b168: jmp loc_14062BB78
loc_14062B16D:
  14062b16d: mov byte ptr [r15+149h], 0
  14062b175: lea rcx, [r15+1E0h]
  14062b17c: mov r8d, 88h
  14062b182: call sub_141684120
  14062b187: mov byte ptr [r15+380h], 0
loc_14062B18F:
  14062b18f: lea rdx, [r15+1E0h]
loc_14062B196:
  14062b196: lea rcx, [rbp+8C0h+var_1E0]
  14062b19d: mov [rbp+8C0h+var_70], rdx
  14062b1a4: mov r8, rdi
  14062b1a7: call sub_14061E020
  14062b1ac: nop
  14062b1ad: cmp dword ptr [rbp+8C0h+var_1E0], 1
  14062b1b4: jnz short loc_14062B1CF
  14062b1b6: mov al, 4
loc_14062B1B8:
  14062b1b8: mov rcx, [rbp+8C0h+var_60]
  14062b1bf: mov [rcx], al
loc_14062B1C1:
  14062b1c1: mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
  14062b1c8: mov al, 3
  14062b1ca: jmp loc_14062B57B
loc_14062B1CF:
  14062b1cf: mov rdi, qword ptr [rbp+8C0h+var_1E0+8]
  14062b1d6: mov rbx, qword ptr [rbp+8C0h+var_1D0]
  14062b1dd: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062b1e4: movaps [rbp+8C0h+var_860], xmm0
  14062b1e8: mov rax, [rbp+8C0h+var_60]
  14062b1ef: mov [rbp+8C0h+var_B0], rax
  14062b1f6: mov rax, [rbp+8C0h+var_80]
  14062b1fd: mov [rbp+8C0h+var_B8], rax
loc_14062B204:
  14062b204: mov rcx, [rbp+8C0h+var_70]
  14062b20b: call sub_1405DA6C0
  14062b210: nop
  14062b211: test rdi, rdi
  14062b214: jz loc_14062B9D9
  14062b21a: movaps xmm0, [rbp+8C0h+var_860]
  14062b21e: movups [rbp+8C0h+var_500], xmm0
  14062b225: mov [rbp+8C0h+var_70], rdi
  14062b22c: mov qword ptr [rbp+8C0h+var_510], rdi
  14062b233: mov [rbp+8C0h+var_90], rbx
  14062b23a: mov qword ptr [rbp+8C0h+var_510+8], rbx
  14062b241: mov rax, [rbp+8C0h+var_50]
  14062b248: movzx edi, word ptr [rax+150h]
  14062b24f: mov [rbp+8C0h+var_52], 1
loc_14062B256:
  14062b256: lea rcx, [rbp+8C0h+var_4B0]
  14062b25d: call sub_141442B90
  14062b262: nop
  14062b263: mov rax, qword ptr [rbp+8C0h+var_4B0]
  14062b26a: movups xmm0, [rbp+8C0h+var_4B0+8]
  14062b271: movaps [rbp+8C0h+var_670], xmm0
  14062b278: movups xmm0, [rbp+8C0h+var_4A0+8]
  14062b27f: movaps [rbp+8C0h+var_660], xmm0
  14062b286: movups xmm0, [rbp+8C0h+var_490+8]
  14062b28d: movaps [rbp+8C0h+var_650], xmm0
  14062b294: movups xmm0, [rbp+8C0h+var_480+8]
  14062b29b: movaps [rbp+8C0h+var_640], xmm0
  14062b2a2: movups xmm0, [rbp+8C0h+var_470+8]
  14062b2a9: movaps [rbp+8C0h+var_630], xmm0
  14062b2b0: movups xmm0, [rbp+8C0h+var_460+8]
  14062b2b7: movaps [rbp+8C0h+var_620], xmm0
  14062b2be: movzx ecx, word ptr [rbp+8C0h+var_450+8]
  14062b2c5: mov edx, dword ptr [rbp+8C0h+var_450+0Ah]
  14062b2cb: mov dword ptr [rbp+8C0h+var_A0], edx
  14062b2d1: movzx edx, word ptr [rbp+8C0h+var_450+0Eh]
  14062b2d8: mov word ptr [rbp+8C0h+var_A0+4], dx
  14062b2df: cmp rax, 0FFFFFFFFFFFFFFFFh
  14062b2e3: jz short loc_14062B35A
  14062b2e5: lea rdx, [rbp+8C0h+var_4B0+8]
  14062b2ec: lea ecx, [rdi-3E8h]
  14062b2f2: movzx ecx, cx
  14062b2f5: cmp ecx, 0FC7Ch
  14062b2fb: mov ecx, 1F6h
  14062b300: cmovnb ecx, edi
  14062b303: movups xmm0, xmmword ptr [rdx+50h]
  14062b307: movaps [rbp+8C0h+var_620], xmm0
  14062b30e: movups xmm0, xmmword ptr [rdx+40h]
  14062b312: movaps [rbp+8C0h+var_630], xmm0
  14062b319: movups xmm0, xmmword ptr [rdx]
  14062b31c: movups xmm1, xmmword ptr [rdx+10h]
  14062b320: movups xmm2, xmmword ptr [rdx+20h]
  14062b324: movups xmm3, xmmword ptr [rdx+30h]
  14062b328: movaps [rbp+8C0h+var_640], xmm3
  14062b32f: movaps [rbp+8C0h+var_650], xmm2
  14062b336: movaps [rbp+8C0h+var_660], xmm1
  14062b33d: movaps [rbp+8C0h+var_670], xmm0
  14062b344: mov r8d, [rdx+62h]
  14062b348: mov dword ptr [rbp+8C0h+var_A0], r8d
  14062b34f: movzx edx, word ptr [rdx+66h]
  14062b353: mov word ptr [rbp+8C0h+var_A0+4], dx
loc_14062B35A:
  14062b35a: mov qword ptr [rbp+8C0h+var_2F0], rax
  14062b361: movaps xmm0, [rbp+8C0h+var_670]
  14062b368: movaps xmm1, [rbp+8C0h+var_660]
  14062b36f: movaps xmm2, [rbp+8C0h+var_650]
  14062b376: movaps xmm3, [rbp+8C0h+var_640]
  14062b37d: movups [rbp+8C0h+var_2F0+8], xmm0
  14062b384: movups [rbp+8C0h+var_2E0+8], xmm1
  14062b38b: movups [rbp+8C0h+var_2D0+8], xmm2
  14062b392: movups [rbp+8C0h+var_2C0+8], xmm3
  14062b399: movaps xmm0, [rbp+8C0h+var_630]
  14062b3a0: movups [rbp+8C0h+var_2B0+8], xmm0
  14062b3a7: movaps xmm0, [rbp+8C0h+var_620]
  14062b3ae: movups [rbp+8C0h+var_2A0+8], xmm0
  14062b3b5: mov [rbp+8C0h+var_288], cx
  14062b3bc: mov eax, dword ptr [rbp+8C0h+var_A0]
  14062b3c2: mov [rbp+8C0h+var_286], eax
  14062b3c8: movzx eax, word ptr [rbp+8C0h+var_A0+4]
  14062b3cf: mov [rbp+8C0h+var_282], ax
  14062b3d6: movups xmm0, cs:xmmword_141766788
  14062b3dd: movups [rbp+8C0h+var_490], xmm0
  14062b3e4: movups xmm0, cs:xmmword_141766778
  14062b3eb: movups [rbp+8C0h+var_4A0], xmm0
  14062b3f2: lea rax, aApplicationJso; "application/json"
  14062b3f9: mov qword ptr [rbp+8C0h+var_4B0], rax
  14062b400: mov qword ptr [rbp+8C0h+var_4B0+8], 10h
  14062b40b: mov [rbp+8C0h+var_52], 1
  14062b412: lea rcx, [rbp+8C0h+var_600]
  14062b419: lea rdx, [rbp+8C0h+var_2F0]
  14062b420: lea r8, [rbp+8C0h+var_4B0]
  14062b427: call sub_1406C5190
  14062b42c: nop
  14062b42d: movups xmm0, [rbp+8C0h+var_510]
  14062b434: movups xmm1, [rbp+8C0h+var_500]
  14062b43b: movaps [rbp+8C0h+var_4A0], xmm1
  14062b442: movaps [rbp+8C0h+var_4B0], xmm0
  14062b449: mov [rbp+8C0h+var_92], 1
loc_14062B450:
  14062b450: lea rcx, [rbp+8C0h+var_4B0]
  14062b457: call sub_140FB1000
  14062b45c: nop
loc_14062B45D:
  14062b45d: mov r8, [rbp+8C0h+var_600]
  14062b464: cmp r8, 0FFFFFFFFFFFFFFFFh
  14062b468: jz loc_14062C7EA
  14062b46e: movzx ecx, [rbp+8C0h+var_5F8]
  14062b475: movups xmm0, [rbp+8C0h+var_5F6]
  14062b47c: movups [rbp+8C0h+var_1E0+0Ah], xmm0
  14062b483: movups xmm0, [rbp+8C0h+var_5E6]
  14062b48a: movups [rbp+8C0h+var_1D0+0Ah], xmm0
  14062b491: movups xmm0, [rbp+8C0h+var_5D6]
  14062b498: movups [rbp+8C0h+var_1C0+0Ah], xmm0
  14062b49f: movups xmm0, [rbp+8C0h+var_5C6]
  14062b4a6: movups [rbp+8C0h+var_1B0+0Ah], xmm0
  14062b4ad: movups xmm0, [rbp+8C0h+var_5B6]
  14062b4b4: movups [rbp+8C0h+var_1A0+0Ah], xmm0
  14062b4bb: movups xmm0, xmmword ptr [rbp+8C0h+var_5A6]
  14062b4c2: movups [rbp+8C0h+var_190+0Ah], xmm0
  14062b4c9: mov r9, qword ptr [rbp+8C0h+var_5A6+0Eh]
  14062b4d0: mov qword ptr [rbp+8C0h+var_180+8], r9
  14062b4d7: mov qword ptr [rbp+8C0h+var_1E0], r8
  14062b4de: mov word ptr [rbp+8C0h+var_1E0+8], cx
  14062b4e5: mov qword ptr [rbp+8C0h+var_170], rax
  14062b4ec: mov qword ptr [rbp+8C0h+var_170+8], rdx
  14062b4f3: jmp loc_14062C864
loc_14062B4F8:
  14062b4f8: mov r12d, 1
loc_14062B4FE:
  14062b4fe: mov [r15+158h], rdx
  14062b505: mov [r15+160h], r12
  14062b50c: mov ecx, 168h
  14062b511: jmp short loc_14062B51A
loc_14062B513:
  14062b513: mov rdx, 0FFFFFFFFFFFFFFFFh
loc_14062B51A:
  14062b51a: mov [r15+rcx], rdx
  14062b51e: mov byte ptr [r15+0C1h], 1
  14062b526: mov byte ptr [r15+0C3h], 0
  14062b52e: lea rcx, [r15+170h]
  14062b535: mov r8d, 88h
  14062b53b: mov rdx, rbx
  14062b53e: call sub_141684120
  14062b543: mov byte ptr [r15+310h], 0
loc_14062B54B:
  14062b54b: lea rdx, [r15+170h]; jumptable 000000014062A1AB case 5
loc_14062B552:
  14062b552: lea rcx, [rbp+8C0h+var_1E0]
  14062b559: mov [rbp+8C0h+var_60], rdx
  14062b560: mov r8, rdi
  14062b563: call sub_14061E020
  14062b568: nop
  14062b569: cmp dword ptr [rbp+8C0h+var_1E0], 1
  14062b570: jnz short loc_14062B587
  14062b572: mov qword ptr [rsi], 0FFFFFFFFFFFFFFFFh
  14062b579: mov al, 5
loc_14062B57B:
  14062b57b: mov rcx, [rbp+8C0h+var_50]
  14062b582: jmp loc_14062CFF0
loc_14062B587:
  14062b587: mov rdi, qword ptr [rbp+8C0h+var_1E0+8]
  14062b58e: mov r14, qword ptr [rbp+8C0h+var_1D0]
  14062b595: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062b59c: movaps [rbp+8C0h+var_850], xmm0
loc_14062B5A0:
  14062b5a0: mov rcx, [rbp+8C0h+var_60]
  14062b5a7: call sub_1405DA6C0
  14062b5ac: nop
  14062b5ad: test rdi, rdi
  14062b5b0: jz loc_14062B683
  14062b5b6: movaps xmm0, [rbp+8C0h+var_850]
  14062b5ba: movups [rbp+8C0h+var_2E0], xmm0
  14062b5c1: mov qword ptr [rbp+8C0h+var_2F0], rdi
  14062b5c8: mov qword ptr [rbp+8C0h+var_2F0+8], r14
  14062b5cf: mov rax, [rbp+8C0h+var_50]
  14062b5d6: lea rbx, [rax+0C8h]
  14062b5dd: mov edi, [rax+0C8h]
  14062b5e3: lea eax, [rdi-0C8h]
  14062b5e9: cmp ax, 64h ; 'd'
  14062b5ed: jnb loc_14062B813
  14062b5f3: mov rax, qword ptr [rbp+8C0h+var_2E0]
  14062b5fa: mov qword ptr [rbp+8C0h+var_1E0], r14
  14062b601: mov qword ptr [rbp+8C0h+var_1E0+8], rax
  14062b608: xorps xmm0, xmm0
  14062b60b: movups [rbp+8C0h+var_1D0], xmm0
  14062b612: mov [rbp+8C0h+var_41], 1
loc_14062B619:
  14062b619: lea rcx, [rbp+8C0h+var_4B0]
  14062b620: lea rdx, [rbp+8C0h+var_1E0]
  14062b627: call sub_1408A8DF0
  14062b62c: nop
  14062b62d: cmp byte ptr [rbp+8C0h+var_4B0], 0FFh
  14062b634: jz loc_14062BB9D
  14062b63a: movups xmm0, [rbp+8C0h+var_4B0]
  14062b641: movups xmm1, [rbp+8C0h+var_4A0]
  14062b648: movaps [rbp+8C0h+var_580], xmm1
  14062b64f: movaps [rbp+8C0h+var_590], xmm0
  14062b656: mov rax, [rbp+8C0h+var_50]
  14062b65d: cmp byte ptr [rax+0C0h], 1
  14062b664: jnz loc_14062C410
loc_14062B66A:
  14062b66a: lea rcx, [rbp+8C0h+var_270]
  14062b671: lea rdx, [rbp+8C0h+var_590]
  14062b678: call sub_140A1CBA0
  14062b67d: nop
  14062b67e: jmp loc_14062C424
loc_14062B683:
  14062b683: mov qword ptr [rbp+8C0h+var_590], r14
  14062b68a: lea rbx, [rbp+8C0h+var_590]
  14062b691: mov qword ptr [rbp+8C0h+var_4B0], rbx
  14062b698: lea r14, sub_141031F10
  14062b69f: mov qword ptr [rbp+8C0h+var_4B0+8], r14
loc_14062B6A6:
  14062b6a6: lea rdx, unk_141767FB1
  14062b6ad: lea rcx, [rbp+8C0h+var_1E0]
  14062b6b4: lea r8, [rbp+8C0h+var_4B0]
  14062b6bb: call sub_14149C0F0
  14062b6c0: nop
  14062b6c1: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062b6c8: mov [rbp+8C0h+var_70], rax
  14062b6cf: mov rax, qword ptr [rbp+8C0h+var_1E0+8]
  14062b6d6: mov [rbp+8C0h+var_90], rax
  14062b6dd: mov rdi, qword ptr [rbp+8C0h+var_1D0]
  14062b6e4: mov qword ptr [rbp+8C0h+var_270], rbx
  14062b6eb: mov qword ptr [rbp+8C0h+var_270+8], r14
loc_14062B6F2:
  14062b6f2: lea rdx, unk_141767FB1
  14062b6f9: lea rcx, [rbp+8C0h+var_4B0]
  14062b700: lea r8, [rbp+8C0h+var_270]
  14062b707: call sub_14149C0F0
  14062b70c: nop
  14062b70d: mov rax, qword ptr [rbp+8C0h+var_4B0]
  14062b714: mov [rbp+8C0h+var_60], rax
  14062b71b: mov r8, qword ptr [rbp+8C0h+var_4B0+8]
  14062b722: mov r9, qword ptr [rbp+8C0h+var_4A0]
loc_14062B729:
  14062b729: lea rax, aProxyUpstream; "proxy.upstream"
  14062b730: mov [rsp+940h+var_920], rax
  14062b735: mov [rsp+940h+var_918], 0Eh
  14062b73e: lea rcx, [rbp+8C0h+var_1E0]
  14062b745: mov dx, 1F6h
  14062b749: mov [rbp+8C0h+var_80], r8
  14062b750: call sub_14066B160
  14062b755: nop
  14062b756: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062b75d: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062b764: movaps [rbp+8C0h+var_370], xmm0
  14062b76b: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062b772: movaps [rbp+8C0h+var_360], xmm0
  14062b779: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062b780: movaps [rbp+8C0h+var_350], xmm0
  14062b787: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062b78e: movaps [rbp+8C0h+var_340], xmm0
  14062b795: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062b79c: movaps [rbp+8C0h+var_330], xmm0
  14062b7a3: movups xmm0, [rbp+8C0h+var_190+8]
  14062b7aa: movaps [rbp+8C0h+var_320], xmm0
  14062b7b1: movups xmm0, [rbp+8C0h+var_180+8]
  14062b7b8: movaps [rbp+8C0h+var_310], xmm0
  14062b7bf: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062b7c6: mov [rbp+8C0h+var_300], rax
  14062b7cd: mov rdx, [rbp+8C0h+var_60]
  14062b7d4: test rdx, rdx
  14062b7d7: jz short loc_14062B7EC
  14062b7d9: mov r8d, 1
  14062b7df: mov rcx, [rbp+8C0h+var_80]
  14062b7e6: call sub_140001660
  14062b7eb: nop
loc_14062B7EC:
  14062b7ec: lea rcx, [rbp+8C0h+var_590]
  14062b7f3: call sub_1405E12D0
  14062b7f8: nop
  14062b7f9: mov r12, [rbp+8C0h+var_70]
  14062b800: mov r14, [rbp+8C0h+var_50]
  14062b807: mov r13, [rbp+8C0h+var_90]
  14062b80e: jmp loc_14062CEDC
loc_14062B813:
  14062b813: mov [rbp+8C0h+var_41], 1
loc_14062B81A:
  14062b81a: lea rcx, [rbp+8C0h+var_1E0]
  14062b821: call sub_141442B90
  14062b826: nop
  14062b827: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062b82e: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062b835: movaps [rbp+8C0h+var_4B0], xmm0
  14062b83c: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062b843: movaps [rbp+8C0h+var_4A0], xmm0
  14062b84a: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062b851: movaps [rbp+8C0h+var_490], xmm0
  14062b858: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062b85f: movaps [rbp+8C0h+var_480], xmm0
  14062b866: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062b86d: movaps [rbp+8C0h+var_470], xmm0
  14062b874: movups xmm0, [rbp+8C0h+var_190+8]
  14062b87b: movaps [rbp+8C0h+var_460], xmm0
  14062b882: movzx ecx, word ptr [rbp+8C0h+var_180+8]
  14062b889: mov edx, dword ptr [rbp+8C0h+var_180+0Ah]
  14062b88f: mov dword ptr [rbp+8C0h+var_270], edx
  14062b895: movzx edx, word ptr [rbp+8C0h+var_180+0Eh]
  14062b89c: mov word ptr [rbp+8C0h+var_270+4], dx
  14062b8a3: cmp rax, 0FFFFFFFFFFFFFFFFh
  14062b8a7: jz short loc_14062B91E
  14062b8a9: lea rdx, [rbp+8C0h+var_1E0+8]
  14062b8b0: lea ecx, [rdi-3E8h]
  14062b8b6: movzx ecx, cx
  14062b8b9: cmp ecx, 0FC7Ch
  14062b8bf: mov ecx, 1F6h
  14062b8c4: cmovnb ecx, edi
  14062b8c7: movups xmm0, xmmword ptr [rdx+50h]
  14062b8cb: movaps [rbp+8C0h+var_460], xmm0
  14062b8d2: movups xmm0, xmmword ptr [rdx+40h]
  14062b8d6: movaps [rbp+8C0h+var_470], xmm0
  14062b8dd: movups xmm0, xmmword ptr [rdx]
  14062b8e0: movups xmm1, xmmword ptr [rdx+10h]
  14062b8e4: movups xmm2, xmmword ptr [rdx+20h]
  14062b8e8: movups xmm3, xmmword ptr [rdx+30h]
  14062b8ec: movaps [rbp+8C0h+var_480], xmm3
  14062b8f3: movaps [rbp+8C0h+var_490], xmm2
  14062b8fa: movaps [rbp+8C0h+var_4A0], xmm1
  14062b901: movaps [rbp+8C0h+var_4B0], xmm0
  14062b908: mov r8d, [rdx+62h]
  14062b90c: mov dword ptr [rbp+8C0h+var_270], r8d
  14062b913: movzx edx, word ptr [rdx+66h]
  14062b917: mov word ptr [rbp+8C0h+var_270+4], dx
loc_14062B91E:
  14062b91e: mov qword ptr [rbp+8C0h+var_6E0], rax
  14062b925: movaps xmm0, [rbp+8C0h+var_4B0]
  14062b92c: movaps xmm1, [rbp+8C0h+var_4A0]
  14062b933: movaps xmm2, [rbp+8C0h+var_490]
  14062b93a: movaps xmm3, [rbp+8C0h+var_480]
  14062b941: movups [rbp+8C0h+var_6E0+8], xmm0
  14062b948: movups [rbp+8C0h+var_6C8], xmm1
  14062b94f: movups [rbp+8C0h+var_6B8], xmm2
  14062b956: movups [rbp+8C0h+var_6A8], xmm3
  14062b95d: movaps xmm0, [rbp+8C0h+var_470]
  14062b964: movups [rbp+8C0h+var_698], xmm0
  14062b96b: movaps xmm0, [rbp+8C0h+var_460]
  14062b972: movups [rbp+8C0h+var_688], xmm0
  14062b979: mov word ptr [rbp+8C0h+var_678], cx
  14062b980: mov eax, dword ptr [rbp+8C0h+var_270]
  14062b986: mov dword ptr [rbp+8C0h+var_678+2], eax
  14062b98c: movzx eax, word ptr [rbp+8C0h+var_270+4]
  14062b993: mov word ptr [rbp+8C0h+var_678+6], ax
  14062b99a: mov rax, [rbp+8C0h+var_50]
  14062b9a1: mov byte ptr [rax+0C1h], 0
  14062b9a8: mov r15, [rax+158h]
  14062b9af: cmp r15, 0FFFFFFFFFFFFFFFFh
  14062b9b3: jz loc_14062BCF8
  14062b9b9: mov r14, [rax+160h]
  14062b9c0: mov rdi, [rax+168h]
  14062b9c7: test rdi, rdi
  14062b9ca: jz loc_14062CAD5
  14062b9d0: lea rax, [r14+rdi]
  14062b9d4: jmp loc_14062BD31
loc_14062B9D9:
  14062b9d9: mov [rbp+8C0h+var_600], rbx
  14062b9e0: lea rbx, [rbp+8C0h+var_600]
  14062b9e7: mov qword ptr [rbp+8C0h+var_4B0], rbx
  14062b9ee: lea r14, sub_141031F10
  14062b9f5: mov qword ptr [rbp+8C0h+var_4B0+8], r14
loc_14062B9FC:
  14062b9fc: lea rdx, unk_141767FB1
  14062ba03: lea rcx, [rbp+8C0h+var_1E0]
  14062ba0a: lea r8, [rbp+8C0h+var_4B0]
  14062ba11: call sub_14149C0F0
  14062ba16: nop
  14062ba17: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062ba1e: mov [rbp+8C0h+var_70], rax
  14062ba25: mov rax, qword ptr [rbp+8C0h+var_1E0+8]
  14062ba2c: mov [rbp+8C0h+var_90], rax
  14062ba33: mov rdi, qword ptr [rbp+8C0h+var_1D0]
  14062ba3a: mov qword ptr [rbp+8C0h+var_2F0], rbx
  14062ba41: mov qword ptr [rbp+8C0h+var_2F0+8], r14
loc_14062BA48:
  14062ba48: lea rdx, unk_141767FB1
  14062ba4f: lea rcx, [rbp+8C0h+var_4B0]
  14062ba56: lea r8, [rbp+8C0h+var_2F0]
  14062ba5d: call sub_14149C0F0
  14062ba62: nop
  14062ba63: mov rax, qword ptr [rbp+8C0h+var_4B0]
  14062ba6a: mov [rbp+8C0h+var_A8], rax
  14062ba71: mov r8, qword ptr [rbp+8C0h+var_4B0+8]
  14062ba78: mov r9, qword ptr [rbp+8C0h+var_4A0]
loc_14062BA7F:
  14062ba7f: lea rax, aProxyUpstream; "proxy.upstream"
  14062ba86: mov [rsp+940h+var_920], rax
  14062ba8b: mov [rsp+940h+var_918], 0Eh
  14062ba94: lea rcx, [rbp+8C0h+var_1E0]
  14062ba9b: mov dx, 1F6h
  14062ba9f: mov [rbp+8C0h+var_D0], r8
  14062baa6: call sub_14066B160
  14062baab: nop
  14062baac: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062bab3: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062baba: movaps [rbp+8C0h+var_270], xmm0
  14062bac1: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062bac8: movaps [rbp+8C0h+var_260], xmm0
  14062bacf: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062bad6: movaps [rbp+8C0h+var_250], xmm0
  14062badd: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062bae4: movaps [rbp+8C0h+var_240], xmm0
  14062baeb: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062baf2: movaps [rbp+8C0h+var_230], xmm0
  14062baf9: movups xmm0, [rbp+8C0h+var_190+8]
  14062bb00: movaps [rbp+8C0h+var_220], xmm0
  14062bb07: movups xmm0, [rbp+8C0h+var_180+8]
  14062bb0e: movaps [rbp+8C0h+var_210], xmm0
  14062bb15: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062bb1c: mov [rbp+8C0h+var_200], rax
  14062bb23: mov rdx, [rbp+8C0h+var_A8]
  14062bb2a: test rdx, rdx
  14062bb2d: jz short loc_14062BB41
  14062bb2f: mov r8d, 1
  14062bb35: mov rcx, [rbp+8C0h+var_D0]
  14062bb3c: call sub_140001660
loc_14062BB41:
  14062bb41: mov rax, [rbp+8C0h+var_60]
  14062bb48: mov [rbp+8C0h+var_B0], rax
  14062bb4f: mov r14, [rbp+8C0h+var_80]
  14062bb56: mov [rbp+8C0h+var_B8], r14
loc_14062BB5D:
  14062bb5d: lea rcx, [rbp+8C0h+var_600]
  14062bb64: call sub_1405E12D0
  14062bb69: nop
  14062bb6a: mov r12, [rbp+8C0h+var_70]
  14062bb71: mov r13, [rbp+8C0h+var_90]
loc_14062BB78:
  14062bb78: mov r8, [rbp+8C0h+var_50]
  14062bb7f: mov byte ptr [r8+149h], 0
  14062bb87: mov rax, [r8+128h]
  14062bb8e: lock dec qword ptr [rax]
  14062bb92: jz loc_14062C97D
  14062bb98: jmp loc_14062C9A6
loc_14062BB9D:
  14062bb9d: mov rdi, qword ptr [rbp+8C0h+var_4B0+8]
  14062bba4: mov [rbp+8C0h+var_600], rdi
  14062bbab: mov rax, [rbp+8C0h+var_50]
  14062bbb2: mov rdx, [rax+90h]
  14062bbb9: mov rax, [rax+98h]
  14062bbc0: mov r8, [rax+8]
  14062bbc4: mov r9, [rax+10h]
loc_14062BBC8:
  14062bbc8: lea rax, [rbp+8C0h+var_600]
  14062bbcf: mov [rsp+940h+var_910], rax
  14062bbd4: lea rax, aRelay; "relay"
  14062bbdb: mov [rsp+940h+var_920], rax
  14062bbe0: mov [rsp+940h+var_918], 5
  14062bbe9: lea rcx, [rbp+8C0h+var_270]
  14062bbf0: call sub_14066F8E0
  14062bbf5: nop
  14062bbf6: mov r8, qword ptr [rbp+8C0h+var_270+8]
  14062bbfd: mov r9, qword ptr [rbp+8C0h+var_260]
loc_14062BC04:
  14062bc04: lea rax, aProxyUpstream; "proxy.upstream"
  14062bc0b: mov [rsp+940h+var_920], rax
  14062bc10: mov [rsp+940h+var_918], 0Eh
  14062bc19: lea rcx, [rbp+8C0h+var_1E0]
  14062bc20: mov dx, 1F6h
  14062bc24: mov [rbp+8C0h+var_80], r8
  14062bc2b: call sub_14066B160
  14062bc30: nop
  14062bc31: mov rax, qword ptr [rbp+8C0h+var_170]
  14062bc38: mov [rbp+8C0h+var_300], rax
  14062bc3f: movups xmm0, [rbp+8C0h+var_180]
  14062bc46: movaps [rbp+8C0h+var_310], xmm0
  14062bc4d: movups xmm0, [rbp+8C0h+var_190]
  14062bc54: movaps [rbp+8C0h+var_320], xmm0
  14062bc5b: movups xmm0, [rbp+8C0h+var_1A0]
  14062bc62: movaps [rbp+8C0h+var_330], xmm0
  14062bc69: movups xmm0, [rbp+8C0h+var_1E0]
  14062bc70: movups xmm1, [rbp+8C0h+var_1D0]
  14062bc77: movups xmm2, [rbp+8C0h+var_1C0]
  14062bc7e: movups xmm3, [rbp+8C0h+var_1B0]
  14062bc85: movaps [rbp+8C0h+var_340], xmm3
  14062bc8c: movaps [rbp+8C0h+var_350], xmm2
  14062bc93: movaps [rbp+8C0h+var_360], xmm1
  14062bc9a: movaps [rbp+8C0h+var_370], xmm0
  14062bca1: mov r12, qword ptr [rbp+8C0h+var_170+8]
  14062bca8: mov rdx, qword ptr [rbp+8C0h+var_270]
  14062bcaf: test rdx, rdx
  14062bcb2: jz short loc_14062BCC6
  14062bcb4: mov r8d, 1
  14062bcba: mov rcx, [rbp+8C0h+var_80]
  14062bcc1: call sub_140001660
loc_14062BCC6:
  14062bcc6: mov rax, [rdi]
  14062bcc9: test rax, rax
  14062bccc: mov [rbp+8C0h+var_60], rdi
  14062bcd3: jz loc_14062CE7A
  14062bcd9: cmp eax, 1
  14062bcdc: jnz loc_14062CE99
  14062bce2: mov rax, [rbp+8C0h+var_60]
  14062bce9: lea rcx, [rax+8]
loc_14062BCED:
  14062bced: call sub_140018650
  14062bcf2: nop
  14062bcf3: jmp loc_14062CE99
loc_14062BCF8:
  14062bcf8: call nullsub_1
  14062bcfd: mov edi, 10h
  14062bd02: mov ecx, 10h
  14062bd07: mov edx, 1
  14062bd0c: call sub_140001650
  14062bd11: test rax, rax
  14062bd14: jz loc_14062D296
  14062bd1a: mov r14, rax
  14062bd1d: movups xmm0, xmmword ptr cs:aApplicationJso; "application/json"
  14062bd24: movups xmmword ptr [rax], xmm0
  14062bd27: add rax, 10h
  14062bd2b: mov r15d, 10h
loc_14062BD31:
  14062bd31: mov rcx, r14
  14062bd34: jmp short loc_14062BD51
loc_14062BD40:
  14062bd40: cmp dl, 7Fh
  14062bd43: jz short loc_14062BD5E
loc_14062BD45:
  14062bd45: inc rcx
  14062bd48: cmp rcx, rax
  14062bd4b: jz loc_14062CAD7
loc_14062BD51:
  14062bd51: movzx edx, byte ptr [rcx]
  14062bd54: cmp dl, 1Fh
  14062bd57: ja short loc_14062BD40
  14062bd59: cmp dl, 9
  14062bd5c: jz short loc_14062BD45
loc_14062BD5E:
  14062bd5e: mov [rbp+8C0h+var_60], r15
  14062bd65: mov [rbp+8C0h+var_80], r14
  14062bd6c: mov byte ptr [rbp+8C0h+var_7A8], 2
  14062bd73: jmp loc_14062CBFA
loc_14062BD78:
  14062bd78: mov rdi, qword ptr [rbp+8C0h+var_2F0+8]
  14062bd7f: mov r8, qword ptr [rbp+8C0h+var_2E0]
  14062bd86: mov [rbp+8C0h+var_81], 1
loc_14062BD8D:
  14062bd8d: lea rcx, [rbp+8C0h+var_1E0]
  14062bd94: mov rdx, rdi
  14062bd97: call sub_1409D4DB0
  14062bd9c: nop
  14062bd9d: mov rax, qword ptr [rbp+8C0h+var_180]
  14062bda4: mov qword ptr [rbp+8C0h+var_450+8], rax
  14062bdab: movups xmm0, [rbp+8C0h+var_190]
  14062bdb2: movups [rbp+8C0h+var_460+8], xmm0
  14062bdb9: movups xmm0, [rbp+8C0h+var_1A0]
  14062bdc0: movups [rbp+8C0h+var_470+8], xmm0
  14062bdc7: movups xmm0, [rbp+8C0h+var_1E0]
  14062bdce: movups xmm1, [rbp+8C0h+var_1D0]
  14062bdd5: movups xmm2, [rbp+8C0h+var_1C0]
  14062bddc: movups xmm3, [rbp+8C0h+var_1B0]
  14062bde3: movups [rbp+8C0h+var_480+8], xmm3
  14062bdea: movups [rbp+8C0h+var_490+8], xmm2
  14062bdf1: movups [rbp+8C0h+var_4A0+8], xmm1
  14062bdf8: movups [rbp+8C0h+var_4B0+8], xmm0
  14062bdff: mov qword ptr [rbp+8C0h+var_4B0], 0FFFFFFFFFFFFFFFFh
loc_14062BE0A:
  14062be0a: call nullsub_1
  14062be0f: mov ecx, 40h ; '@'
  14062be14: mov edx, 8
  14062be19: call sub_140001650
  14062be1e: test rax, rax
  14062be21: mov r14, [rbp+8C0h+var_50]
  14062be28: jz loc_14062D1E0
  14062be2e: mov rbx, rax
  14062be31: movaps xmm0, [rbp+8C0h+var_7A0]
  14062be38: movaps xmm1, [rbp+8C0h+var_790]
  14062be3f: movaps xmm2, [rbp+8C0h+var_780]
  14062be46: movaps xmm3, [rbp+8C0h+var_770]
  14062be4d: movups xmmword ptr [rax+30h], xmm3
  14062be51: movups xmmword ptr [rax+20h], xmm2
  14062be55: movups xmmword ptr [rax+10h], xmm1
  14062be59: movups xmmword ptr [rax], xmm0
  14062be5c: movaps xmm0, [rbp+8C0h+var_4B0]
  14062be63: movaps xmm1, [rbp+8C0h+var_4A0]
  14062be6a: movaps xmm2, [rbp+8C0h+var_490]
  14062be71: movaps xmm3, [rbp+8C0h+var_480]
  14062be78: movaps [rbp+8C0h+var_670], xmm0
  14062be7f: movaps [rbp+8C0h+var_660], xmm1
  14062be86: movaps [rbp+8C0h+var_650], xmm2
  14062be8d: movaps [rbp+8C0h+var_640], xmm3
  14062be94: movaps xmm0, [rbp+8C0h+var_470]
  14062be9b: movaps [rbp+8C0h+var_630], xmm0
  14062bea2: movaps xmm0, [rbp+8C0h+var_460]
  14062bea9: movaps [rbp+8C0h+var_620], xmm0
  14062beb0: movaps xmm0, [rbp+8C0h+var_450]
  14062beb7: movaps [rbp+8C0h+var_610], xmm0
  14062bebe: mov rdx, qword ptr [rbp+8C0h+var_2F0]
  14062bec5: test rdx, rdx
  14062bec8: jz short loc_14062BED8
  14062beca: mov r8d, 1
  14062bed0: mov rcx, rdi
  14062bed3: call sub_140001660
loc_14062BED8:
  14062bed8: xorps xmm0, xmm0
  14062bedb: movaps [rbp+8C0h+var_1E0], xmm0
  14062bee2: mov qword ptr [rbp+8C0h+var_1D0], 1
  14062beed: mov qword ptr [rbp+8C0h+var_1D0+8], 0
  14062bef8: movaps xmm0, [rbp+8C0h+var_670]
  14062beff: movaps xmm1, [rbp+8C0h+var_660]
  14062bf06: movaps xmm2, [rbp+8C0h+var_650]
  14062bf0d: movaps xmm3, [rbp+8C0h+var_640]
  14062bf14: movaps [rbp+8C0h+var_1C0], xmm0
  14062bf1b: movaps [rbp+8C0h+var_1B0], xmm1
  14062bf22: movaps [rbp+8C0h+var_1A0], xmm2
  14062bf29: movaps [rbp+8C0h+var_190], xmm3
  14062bf30: movaps xmm0, [rbp+8C0h+var_630]
  14062bf37: movaps [rbp+8C0h+var_180], xmm0
  14062bf3e: movaps xmm0, [rbp+8C0h+var_620]
  14062bf45: movaps [rbp+8C0h+var_170], xmm0
  14062bf4c: movaps xmm0, [rbp+8C0h+var_610]
  14062bf53: movaps [rbp+8C0h+var_160], xmm0
  14062bf5a: mov [rbp+8C0h+var_150], rbx
  14062bf61: mov [rbp+8C0h+var_148], 0
  14062bf68: mov rax, [r14+118h]
  14062bf6f: mov rbx, [rax]
  14062bf72: lock inc qword ptr [rbx]
  14062bf76: jle loc_14062D2B4
  14062bf7c: mov [rbp+8C0h+var_518], rbx
  14062bf83: mov rax, [r14+118h]
  14062bf8a: mov r15, [rax+8]
  14062bf8e: lock inc qword ptr [r15]
  14062bf92: jle loc_14062D2B4
  14062bf98: mov [rbp+8C0h+var_A0], r15
  14062bf9f: mov rdx, [r14+120h]
  14062bfa6: mov [rbp+8C0h+var_61], 1
loc_14062BFAD:
  14062bfad: lea rcx, [rbp+8C0h+var_2F0]
  14062bfb4: call sub_14149C500
  14062bfb9: nop
loc_14062BFBA:
  14062bfba: mov qword ptr [rbp+8C0h+var_510], rbx
  14062bfc1: mov [rbp+8C0h+var_600], r15
  14062bfc8: call nullsub_1
  14062bfcd: mov ecx, 18h
  14062bfd2: mov edx, 8
  14062bfd7: call sub_140001650
  14062bfdc: test rax, rax
  14062bfdf: jz loc_14062D1F5
  14062bfe5: mov rdi, rax
  14062bfe8: mov qword ptr [rax], 1
  14062bfef: mov qword ptr [rax+8], 1
  14062bff7: mov byte ptr [rax+10h], 0
  14062bffb: lea rcx, [rbp+8C0h+var_4B0]
  14062c002: lea rdx, [rbp+8C0h+var_1E0]
  14062c009: mov r8d, 0B0h
  14062c00f: call sub_141684120
  14062c014: movups xmm0, [rbp+8C0h+var_2F0]
  14062c01b: movups [rbp+8C0h+var_400], xmm0
  14062c022: mov rax, qword ptr [rbp+8C0h+var_2E0]
  14062c029: mov [rbp+8C0h+var_3F0], rax
  14062c030: mov [rbp+8C0h+var_3E8], rdi
  14062c037: lea rax, aRelayTranslate; "relay translated stream failed"
  14062c03e: mov [rbp+8C0h+var_3E0], rax
  14062c045: mov [rbp+8C0h+var_3D8], 1Eh
  14062c050: mov [rbp+8C0h+var_3D0], r15
  14062c057: mov [rbp+8C0h+var_3C8], rbx
  14062c05e: movzx edi, word ptr [r13+0]
  14062c063: mov [rbp+8C0h+var_51], 1
loc_14062C06A:
  14062c06a: lea rcx, [rbp+8C0h+var_1E0]
  14062c071: call sub_141442B90
  14062c076: nop
  14062c077: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062c07e: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062c085: movaps [rbp+8C0h+var_510], xmm0
  14062c08c: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062c093: movaps [rbp+8C0h+var_500], xmm0
  14062c09a: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062c0a1: movaps [rbp+8C0h+var_4F0], xmm0
  14062c0a8: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062c0af: movaps [rbp+8C0h+var_4E0], xmm0
  14062c0b6: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062c0bd: movaps [rbp+8C0h+var_4D0], xmm0
  14062c0c4: movups xmm0, [rbp+8C0h+var_190+8]
  14062c0cb: movaps [rbp+8C0h+var_4C0], xmm0
  14062c0d2: movzx ecx, word ptr [rbp+8C0h+var_180+8]
  14062c0d9: mov edx, dword ptr [rbp+8C0h+var_180+0Ah]
  14062c0df: mov dword ptr [rbp+8C0h+var_A0], edx
  14062c0e5: movzx edx, word ptr [rbp+8C0h+var_180+0Eh]
  14062c0ec: mov word ptr [rbp+8C0h+var_A0+4], dx
  14062c0f3: cmp rax, 0FFFFFFFFFFFFFFFFh
  14062c0f7: jz short loc_14062C16E
  14062c0f9: lea rdx, [rbp+8C0h+var_1E0+8]
  14062c100: lea ecx, [rdi-3E8h]
  14062c106: movzx ecx, cx
  14062c109: cmp ecx, 0FC7Ch
  14062c10f: mov ecx, 0C8h
  14062c114: cmovnb ecx, edi
  14062c117: movups xmm0, xmmword ptr [rdx+50h]
  14062c11b: movaps [rbp+8C0h+var_4C0], xmm0
  14062c122: movups xmm0, xmmword ptr [rdx+40h]
  14062c126: movaps [rbp+8C0h+var_4D0], xmm0
  14062c12d: movups xmm0, xmmword ptr [rdx]
  14062c130: movups xmm1, xmmword ptr [rdx+10h]
  14062c134: movups xmm2, xmmword ptr [rdx+20h]
  14062c138: movups xmm3, xmmword ptr [rdx+30h]
  14062c13c: movaps [rbp+8C0h+var_4E0], xmm3
  14062c143: movaps [rbp+8C0h+var_4F0], xmm2
  14062c14a: movaps [rbp+8C0h+var_500], xmm1
  14062c151: movaps [rbp+8C0h+var_510], xmm0
  14062c158: mov r8d, [rdx+62h]
  14062c15c: mov dword ptr [rbp+8C0h+var_A0], r8d
  14062c163: movzx edx, word ptr [rdx+66h]
  14062c167: mov word ptr [rbp+8C0h+var_A0+4], dx
loc_14062C16E:
  14062c16e: mov qword ptr [rbp+8C0h+var_2F0], rax
  14062c175: movaps xmm0, [rbp+8C0h+var_510]
  14062c17c: movaps xmm1, [rbp+8C0h+var_500]
  14062c183: movaps xmm2, [rbp+8C0h+var_4F0]
  14062c18a: movaps xmm3, [rbp+8C0h+var_4E0]
  14062c191: movups [rbp+8C0h+var_2F0+8], xmm0
  14062c198: movups [rbp+8C0h+var_2E0+8], xmm1
  14062c19f: movups [rbp+8C0h+var_2D0+8], xmm2
  14062c1a6: movups [rbp+8C0h+var_2C0+8], xmm3
  14062c1ad: movaps xmm0, [rbp+8C0h+var_4D0]
  14062c1b4: movups [rbp+8C0h+var_2B0+8], xmm0
  14062c1bb: movaps xmm0, [rbp+8C0h+var_4C0]
  14062c1c2: movups [rbp+8C0h+var_2A0+8], xmm0
  14062c1c9: mov [rbp+8C0h+var_288], cx
  14062c1d0: mov eax, dword ptr [rbp+8C0h+var_A0]
  14062c1d6: mov [rbp+8C0h+var_286], eax
  14062c1dc: movzx eax, word ptr [rbp+8C0h+var_A0+4]
  14062c1e3: mov [rbp+8C0h+var_282], ax
  14062c1ea: movups xmm0, cs:xmmword_141766788
  14062c1f1: movups [rbp+8C0h+var_4F0], xmm0
  14062c1f8: movups xmm0, cs:xmmword_141766778
  14062c1ff: movups [rbp+8C0h+var_500], xmm0
  14062c206: lea rax, aTextEventStrea; "text/event-stream"
  14062c20d: mov qword ptr [rbp+8C0h+var_510], rax
  14062c214: mov qword ptr [rbp+8C0h+var_510+8], 11h
  14062c21f: mov [rbp+8C0h+var_51], 1
  14062c226: lea rcx, [rbp+8C0h+var_1E0]
  14062c22d: lea rdx, [rbp+8C0h+var_2F0]
  14062c234: lea r8, [rbp+8C0h+var_510]
  14062c23b: call sub_1406C5190
  14062c240: nop
  14062c241: movups xmm0, cs:xmmword_1417683A8
  14062c248: movups [rbp+8C0h+var_4F0], xmm0
  14062c24f: movups xmm0, cs:xmmword_141768398
  14062c256: movups [rbp+8C0h+var_500], xmm0
  14062c25d: lea rax, aNoCache; "no-cache"
  14062c264: mov qword ptr [rbp+8C0h+var_510], rax
  14062c26b: mov qword ptr [rbp+8C0h+var_510+8], 8
  14062c276: mov [rbp+8C0h+var_51], 1
  14062c27d: lea rcx, [rbp+8C0h+var_2F0]
  14062c284: lea rdx, [rbp+8C0h+var_1E0]
  14062c28b: lea r8, [rbp+8C0h+var_510]
  14062c292: call sub_1406C5190
  14062c297: nop
  14062c298: lea rax, aXAccelBufferin; "X-Accel-Buffering"
  14062c29f: mov qword ptr [rbp+8C0h+var_1E0], rax
  14062c2a6: mov qword ptr [rbp+8C0h+var_1E0+8], 11h
  14062c2b1: lea rax, aNo; "no"
  14062c2b8: mov qword ptr [rbp+8C0h+var_1D0], rax
  14062c2bf: mov qword ptr [rbp+8C0h+var_1D0+8], 2
  14062c2ca: mov [rbp+8C0h+var_51], 1
  14062c2d1: lea rcx, [rbp+8C0h+var_600]
  14062c2d8: lea rdx, [rbp+8C0h+var_2F0]
  14062c2df: lea r8, [rbp+8C0h+var_1E0]
  14062c2e6: call sub_1406C5590
  14062c2eb: nop
loc_14062C2EC:
  14062c2ec: mov rdi, qword ptr [rbp+8C0h+var_4B0]
  14062c2f3: cmp rdi, 0FFFFFFFFFFFFFFFFh
  14062c2f7: jz loc_14062D211
  14062c2fd: lea rdx, [rbp+8C0h+var_4A0+8]
  14062c304: lea rcx, [rbp+8C0h+var_1D0+8]
  14062c30b: mov r8d, 0D8h
  14062c311: call sub_141684120
  14062c316: mov qword ptr [rbp+8C0h+var_1E0], rdi
  14062c31d: movups xmm0, [rbp+8C0h+var_4B0+8]
  14062c324: movups [rbp+8C0h+var_1E0+8], xmm0
  14062c32b: call nullsub_1
  14062c330: mov ecx, 0F0h
  14062c335: mov edx, 8
  14062c33a: call sub_140001650
  14062c33f: test rax, rax
  14062c342: jz loc_14062D17E
  14062c348: mov rdi, rax
  14062c34b: lea rdx, [rbp+8C0h+var_1E0]
  14062c352: mov r8d, 0F0h
  14062c358: mov rcx, rax
  14062c35b: call sub_141684120
  14062c360: mov rax, [rbp+8C0h+var_600]
  14062c367: cmp rax, 0FFFFFFFFFFFFFFFFh
  14062c36b: mov r9, [rbp+8C0h+var_50]
  14062c372: mov r14, [rbp+8C0h+var_80]
  14062c379: jz loc_14062C5E5
  14062c37f: movzx ecx, [rbp+8C0h+var_5F8]
  14062c386: movups xmm0, [rbp+8C0h+var_5F6]
  14062c38d: movups [rbp+8C0h+var_1E0+0Ah], xmm0
  14062c394: movups xmm0, [rbp+8C0h+var_5E6]
  14062c39b: movups [rbp+8C0h+var_1D0+0Ah], xmm0
  14062c3a2: movups xmm0, [rbp+8C0h+var_5D6]
  14062c3a9: movups [rbp+8C0h+var_1C0+0Ah], xmm0
  14062c3b0: movups xmm0, [rbp+8C0h+var_5C6]
  14062c3b7: movups [rbp+8C0h+var_1B0+0Ah], xmm0
  14062c3be: movups xmm0, [rbp+8C0h+var_5B6]
  14062c3c5: movups [rbp+8C0h+var_1A0+0Ah], xmm0
  14062c3cc: movups xmm0, xmmword ptr [rbp+8C0h+var_5A6]
  14062c3d3: movups [rbp+8C0h+var_190+0Ah], xmm0
  14062c3da: mov rdx, qword ptr [rbp+8C0h+var_5A6+0Eh]
  14062c3e1: mov qword ptr [rbp+8C0h+var_180+8], rdx
  14062c3e8: mov qword ptr [rbp+8C0h+var_1E0], rax
  14062c3ef: mov word ptr [rbp+8C0h+var_1E0+8], cx
  14062c3f6: mov qword ptr [rbp+8C0h+var_170], rdi
  14062c3fd: lea r12, off_1417B3C40
  14062c404: mov qword ptr [rbp+8C0h+var_170+8], r12
  14062c40b: jmp loc_14062C65B
loc_14062C410:
  14062c410: lea rcx, [rbp+8C0h+var_270]
  14062c417: lea rdx, [rbp+8C0h+var_590]
  14062c41e: call sub_140A19DA0
  14062c423: nop
loc_14062C424:
  14062c424: mov eax, [rbx]
  14062c426: lea ecx, [rax-3E8h]
  14062c42c: movzx ecx, cx
  14062c42f: cmp ecx, 0FC7Ch
  14062c435: mov edi, 0C8h
  14062c43a: cmovnb edi, eax
  14062c43d: lea rdx, [rbp+8C0h+var_4B0+8]
  14062c444: movups xmm0, [rbp+8C0h+var_270]
  14062c44b: movups xmm1, [rbp+8C0h+var_260]
  14062c452: movups [rbp+8C0h+var_4A0+8], xmm1
  14062c459: movups [rbp+8C0h+var_4B0+8], xmm0
  14062c460: mov word ptr [rbp+8C0h+var_4B0], di
  14062c467: lea rcx, [rbp+8C0h+var_1E0]
  14062c46e: call sub_140677670
  14062c473: nop
  14062c474: mov word ptr [rbp+8C0h+var_180+8], di
  14062c47b: movups xmm0, [rbp+8C0h+var_1E0]
  14062c482: movups xmm1, [rbp+8C0h+var_1D0]
  14062c489: movups xmm2, [rbp+8C0h+var_1C0]
  14062c490: movups xmm3, [rbp+8C0h+var_1B0]
  14062c497: movaps [rbp+8C0h+var_370], xmm0
  14062c49e: movaps [rbp+8C0h+var_360], xmm1
  14062c4a5: movaps [rbp+8C0h+var_350], xmm2
  14062c4ac: movaps [rbp+8C0h+var_340], xmm3
  14062c4b3: movups xmm0, [rbp+8C0h+var_1A0]
  14062c4ba: movaps [rbp+8C0h+var_330], xmm0
  14062c4c1: movups xmm0, [rbp+8C0h+var_190]
  14062c4c8: movaps [rbp+8C0h+var_320], xmm0
  14062c4cf: mov rax, qword ptr [rbp+8C0h+var_170]
  14062c4d6: mov [rbp+8C0h+var_300], rax
  14062c4dd: mov rax, qword ptr [rbp+8C0h+var_180]
  14062c4e4: mov qword ptr [rbp+8C0h+var_310], rax
  14062c4eb: movzx eax, word ptr [rbp+8C0h+var_180+8]
  14062c4f2: mov word ptr [rbp+8C0h+var_310+8], ax
  14062c4f9: mov eax, dword ptr [rbp+8C0h+var_180+0Ah]
  14062c4ff: mov dword ptr [rbp+8C0h+var_310+0Ah], eax
  14062c505: movzx eax, word ptr [rbp+8C0h+var_180+0Eh]
  14062c50c: mov word ptr [rbp+8C0h+var_310+0Eh], ax
  14062c513: mov r12, qword ptr [rbp+8C0h+var_170+8]
  14062c51a: mov [rbp+8C0h+var_41], 1
loc_14062C521:
  14062c521: lea rcx, [rbp+8C0h+var_590]
  14062c528: call sub_1400104F0
  14062c52d: nop
  14062c52e: mov rax, qword ptr [rbp+8C0h+var_2F0]
  14062c535: mov rdx, qword ptr [rbp+8C0h+var_2F0+8]
  14062c53c: lea rcx, [rbp+8C0h+var_2E0+8]
  14062c543: mov r8, qword ptr [rbp+8C0h+var_2E0]
loc_14062C54A:
  14062c54a: call qword ptr [rax+20h]
  14062c54d: nop
  14062c54e: mov rdi, [rbp+8C0h+var_50]
  14062c555: mov rdx, [rdi+158h]
  14062c55c: cmp rdx, 0FFFFFFFFFFFFFFFFh
  14062c560: jz short loc_14062C579
  14062c562: test rdx, rdx
  14062c565: jz short loc_14062C579
  14062c567: mov rcx, [rdi+160h]
  14062c56e: mov r8d, 1
  14062c574: call sub_140001660
loc_14062C579:
  14062c579: mov byte ptr [rdi+0C1h], 0
  14062c580: mov byte ptr [rdi+0C3h], 0
  14062c587: mov rax, [rdi+0A0h]
  14062c58e: lock dec qword ptr [rax]
  14062c592: jnz short loc_14062C5A8
  14062c594: mov rax, [rbp+8C0h+var_50]
  14062c59b: lea rcx, [rax+0A0h]
loc_14062C5A2:
  14062c5a2: call sub_141018B80
  14062c5a7: nop
loc_14062C5A8:
  14062c5a8: mov rax, [rbp+8C0h+var_50]
  14062c5af: mov byte ptr [rax+0C4h], 0
  14062c5b6: lea rcx, [rax+20h]
loc_14062C5BA:
  14062c5ba: call sub_1400104F0
  14062c5bf: nop
loc_14062C5C0:
  14062c5c0: mov rcx, [rbp+8C0h+var_50]
  14062c5c7: call sub_1400104F0
  14062c5cc: nop
  14062c5cd: mov rcx, [rbp+8C0h+var_50]
  14062c5d4: mov byte ptr [rcx+0C2h], 0
  14062c5db: mov ebx, 3
  14062c5e0: jmp loc_14062CF7E
loc_14062C5E5:
  14062c5e5: mov [rbp+8C0h+var_70], rdi
  14062c5ec: mov rcx, rdi
  14062c5ef: call sub_140B22D20
  14062c5f4: nop
  14062c5f5: mov edx, 0F0h
  14062c5fa: mov r8d, 8
  14062c600: mov rcx, [rbp+8C0h+var_70]
  14062c607: call sub_140001660
  14062c60c: mov [rbp+8C0h+var_51], 0
loc_14062C613:
  14062c613: lea rax, aProxyUpstream; "proxy.upstream"
  14062c61a: mov [rsp+940h+var_920], rax
  14062c61f: mov [rsp+940h+var_918], 0Eh
  14062c628: lea r8, aBuildSseBodyFa; "build sse body failed"
  14062c62f: lea rcx, [rbp+8C0h+var_1E0]
  14062c636: mov r9d, 15h
  14062c63c: mov dx, 1F4h
  14062c640: call sub_14066B160
  14062c645: nop
  14062c646: mov r12, qword ptr [rbp+8C0h+var_170+8]
  14062c64d: mov r9, [rbp+8C0h+var_50]
  14062c654: mov r14, [rbp+8C0h+var_80]
loc_14062C65B:
  14062c65b: mov rax, qword ptr [rbp+8C0h+var_170]
  14062c662: mov [rbp+8C0h+var_200], rax
  14062c669: mov rax, qword ptr [rbp+8C0h+var_180]
  14062c670: mov qword ptr [rbp+8C0h+var_210], rax
  14062c677: mov rax, qword ptr [rbp+8C0h+var_180+8]
  14062c67e: mov qword ptr [rbp+8C0h+var_210+8], rax
  14062c685: movups xmm0, [rbp+8C0h+var_190]
  14062c68c: movaps [rbp+8C0h+var_220], xmm0
  14062c693: movups xmm0, [rbp+8C0h+var_1A0]
  14062c69a: movaps [rbp+8C0h+var_230], xmm0
  14062c6a1: mov rax, qword ptr [rbp+8C0h+var_1E0]
  14062c6a8: movzx ecx, word ptr [rbp+8C0h+var_1E0+8]
  14062c6af: mov edx, dword ptr [rbp+8C0h+var_1E0+0Ah]
  14062c6b5: movzx r8d, word ptr [rbp+8C0h+var_1E0+0Eh]
  14062c6bd: movups xmm0, [rbp+8C0h+var_1D0]
  14062c6c4: movups xmm1, [rbp+8C0h+var_1C0]
  14062c6cb: movups xmm2, [rbp+8C0h+var_1B0]
  14062c6d2: movaps [rbp+8C0h+var_240], xmm2
  14062c6d9: movaps [rbp+8C0h+var_250], xmm1
  14062c6e0: movaps [rbp+8C0h+var_260], xmm0
  14062c6e7: mov qword ptr [rbp+8C0h+var_270], rax
  14062c6ee: mov word ptr [rbp+8C0h+var_270+8], cx
  14062c6f5: mov dword ptr [rbp+8C0h+var_270+0Ah], edx
  14062c6fb: mov word ptr [rbp+8C0h+var_270+0Eh], r8w
  14062c703: mov byte ptr [r9+149h], 0
  14062c70b: mov rax, [r9+128h]
  14062c712: lock dec qword ptr [rax]
  14062c716: jnz short loc_14062C741
  14062c718: mov rax, [rbp+8C0h+var_50]
  14062c71f: lea rcx, [rax+128h]
  14062c726: mov rax, [rbp+8C0h+var_60]
  14062c72d: mov [rbp+8C0h+var_1E8], rax
  14062c734: mov [rbp+8C0h+var_1F0], r14
loc_14062C73B:
  14062c73b: call sub_141018B80
  14062c740: nop
loc_14062C741:
  14062c741: mov rax, [rbp+8C0h+var_50]
  14062c748: mov byte ptr [rax+14Ah], 0
  14062c74f: mov rdi, [rbp+8C0h+var_60]
  14062c756: mov [rbp+8C0h+var_388], rdi
  14062c75d: mov [rbp+8C0h+var_390], r14
loc_14062C764:
  14062c764: mov rcx, r14
  14062c767: call sub_1400104F0
  14062c76c: nop
  14062c76d: mov rax, [rbp+8C0h+var_200]
  14062c774: mov [rbp+8C0h+var_520], rax
  14062c77b: movaps xmm0, [rbp+8C0h+var_210]
  14062c782: movaps [rbp+8C0h+var_530], xmm0
  14062c789: movaps xmm0, [rbp+8C0h+var_220]
  14062c790: movaps [rbp+8C0h+var_540], xmm0
  14062c797: movaps xmm0, [rbp+8C0h+var_230]
  14062c79e: movaps [rbp+8C0h+var_550], xmm0
  14062c7a5: movaps xmm0, [rbp+8C0h+var_270]
  14062c7ac: movaps xmm1, [rbp+8C0h+var_260]
  14062c7b3: movaps xmm2, [rbp+8C0h+var_250]
  14062c7ba: movaps xmm3, [rbp+8C0h+var_240]
  14062c7c1: movaps [rbp+8C0h+var_560], xmm3
  14062c7c8: movaps [rbp+8C0h+var_570], xmm2
  14062c7cf: movaps [rbp+8C0h+var_580], xmm1
  14062c7d6: movaps [rbp+8C0h+var_590], xmm0
  14062c7dd: mov byte ptr [rdi], 1
  14062c7e0: mov ebx, 3
  14062c7e5: jmp loc_14062CA50
loc_14062C7EA:
  14062c7ea: mov [rbp+8C0h+var_A8], rax
  14062c7f1: mov [rbp+8C0h+var_D0], rdx
  14062c7f8: mov rax, [rdx]
  14062c7fb: test rax, rax
  14062c7fe: jz short loc_14062C80A
loc_14062C800:
  14062c800: mov rcx, [rbp+8C0h+var_A8]
  14062c807: call rax
  14062c809: nop
loc_14062C80A:
  14062c80a: mov rax, [rbp+8C0h+var_D0]
  14062c811: mov rdx, [rax+8]
  14062c815: test rdx, rdx
  14062c818: jz short loc_14062C82A
  14062c81a: mov r8, [rax+10h]
  14062c81e: mov rcx, [rbp+8C0h+var_A8]
  14062c825: call sub_140001660
loc_14062C82A:
  14062c82a: mov [rbp+8C0h+var_52], 0
loc_14062C831:
  14062c831: lea rax, aProxyUpstream; "proxy.upstream"
  14062c838: mov [rsp+940h+var_920], rax
  14062c83d: mov [rsp+940h+var_918], 0Eh
  14062c846: lea r8, aBuildErrorBody; "build error body failed"
  14062c84d: lea rcx, [rbp+8C0h+var_1E0]
  14062c854: mov r9d, 17h
  14062c85a: mov dx, 1F6h
  14062c85e: call sub_14066B160
  14062c863: nop
loc_14062C864:
  14062c864: mov r8, [rbp+8C0h+var_50]
  14062c86b: lea rax, [r8+150h]
  14062c872: movzx ecx, word ptr [rax]
  14062c875: lea edx, [rcx-1F4h]
  14062c87b: cmp dx, 64h ; 'd'
  14062c87f: jb short loc_14062C89E
  14062c881: add ecx, 0FFFFFE6Fh
  14062c887: cmp ecx, 1Ch
  14062c88a: ja loc_14062D09B
  14062c890: mov edx, 100001CDh
  14062c895: bt edx, ecx
  14062c898: jnb loc_14062D09B
loc_14062C89E:
  14062c89e: mov qword ptr [rbp+8C0h+var_2F0], rax
  14062c8a5: lea rax, sub_14143ED80
  14062c8ac: mov qword ptr [rbp+8C0h+var_2F0+8], rax
loc_14062C8B3:
  14062c8b3: lea rdx, unk_1417683D3
  14062c8ba: lea rcx, [rbp+8C0h+var_4B0]
  14062c8c1: lea r8, [rbp+8C0h+var_2F0]
  14062c8c8: call sub_14149C0F0
  14062c8cd: nop
  14062c8ce: mov r12, qword ptr [rbp+8C0h+var_4B0]
  14062c8d5: mov r13, qword ptr [rbp+8C0h+var_4B0+8]
  14062c8dc: mov rdi, qword ptr [rbp+8C0h+var_4A0]
  14062c8e3: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062c8ea: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062c8f1: movaps [rbp+8C0h+var_270], xmm0
  14062c8f8: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062c8ff: movaps [rbp+8C0h+var_260], xmm0
  14062c906: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062c90d: movaps [rbp+8C0h+var_250], xmm0
  14062c914: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062c91b: movaps [rbp+8C0h+var_240], xmm0
  14062c922: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062c929: movaps [rbp+8C0h+var_230], xmm0
  14062c930: movups xmm0, [rbp+8C0h+var_190+8]
  14062c937: movaps [rbp+8C0h+var_220], xmm0
  14062c93e: movups xmm0, [rbp+8C0h+var_180+8]
  14062c945: movaps [rbp+8C0h+var_210], xmm0
  14062c94c: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062c953: mov [rbp+8C0h+var_200], rax
  14062c95a: mov r8, [rbp+8C0h+var_50]
loc_14062C961:
  14062c961: mov r14, [rbp+8C0h+var_80]
  14062c968: mov byte ptr [r8+149h], 0
  14062c970: mov rax, [r8+128h]
  14062c977: lock dec qword ptr [rax]
  14062c97b: jnz short loc_14062C9A6
loc_14062C97D:
  14062c97d: mov rax, [rbp+8C0h+var_50]
  14062c984: lea rcx, [rax+128h]
  14062c98b: mov rax, [rbp+8C0h+var_60]
  14062c992: mov [rbp+8C0h+var_1E8], rax
  14062c999: mov [rbp+8C0h+var_1F0], r14
loc_14062C9A0:
  14062c9a0: call sub_141018B80
  14062c9a5: nop
loc_14062C9A6:
  14062c9a6: mov rax, [rbp+8C0h+var_50]
  14062c9ad: mov byte ptr [rax+14Ah], 0
  14062c9b4: mov r15, [rbp+8C0h+var_60]
  14062c9bb: mov [rbp+8C0h+var_388], r15
  14062c9c2: mov [rbp+8C0h+var_390], r14
loc_14062C9C9:
  14062c9c9: mov rcx, r14
  14062c9cc: call sub_1400104F0
  14062c9d1: nop
  14062c9d2: mov rax, [rbp+8C0h+var_200]
  14062c9d9: mov [rbp+8C0h+var_520], rax
  14062c9e0: movaps xmm0, [rbp+8C0h+var_210]
  14062c9e7: movaps [rbp+8C0h+var_530], xmm0
  14062c9ee: movaps xmm0, [rbp+8C0h+var_220]
  14062c9f5: movaps [rbp+8C0h+var_540], xmm0
  14062c9fc: movaps xmm0, [rbp+8C0h+var_230]
  14062ca03: movaps [rbp+8C0h+var_550], xmm0
  14062ca0a: movaps xmm0, [rbp+8C0h+var_270]
  14062ca11: movaps xmm1, [rbp+8C0h+var_260]
  14062ca18: movaps xmm2, [rbp+8C0h+var_250]
  14062ca1f: movaps xmm3, [rbp+8C0h+var_240]
  14062ca26: movaps [rbp+8C0h+var_560], xmm3
  14062ca2d: movaps [rbp+8C0h+var_570], xmm2
  14062ca34: movaps [rbp+8C0h+var_580], xmm1
  14062ca3b: movaps [rbp+8C0h+var_590], xmm0
  14062ca42: mov byte ptr [r15], 1
  14062ca46: cmp rbx, 0FFFFFFFFFFFFFFFFh
  14062ca4a: jz loc_14062B1C1
loc_14062CA50:
  14062ca50: mov rax, [rbp+8C0h+var_520]
  14062ca57: mov [rbp+8C0h+var_300], rax
  14062ca5e: movaps xmm0, [rbp+8C0h+var_530]
  14062ca65: movaps [rbp+8C0h+var_310], xmm0
  14062ca6c: movaps xmm0, [rbp+8C0h+var_540]
  14062ca73: movaps [rbp+8C0h+var_320], xmm0
  14062ca7a: movaps xmm0, [rbp+8C0h+var_550]
  14062ca81: movaps [rbp+8C0h+var_330], xmm0
  14062ca88: movaps xmm0, [rbp+8C0h+var_590]
  14062ca8f: movaps xmm1, [rbp+8C0h+var_580]
  14062ca96: movaps xmm2, [rbp+8C0h+var_570]
  14062ca9d: movaps xmm3, [rbp+8C0h+var_560]
  14062caa4: movaps [rbp+8C0h+var_340], xmm3
  14062caab: movaps [rbp+8C0h+var_350], xmm2
  14062cab2: movaps [rbp+8C0h+var_360], xmm1
  14062cab9: movaps [rbp+8C0h+var_370], xmm0
loc_14062CAC0:
  14062cac0: mov rcx, r14
  14062cac3: call sub_1405DD460
  14062cac8: nop
  14062cac9: mov rax, [rbp+8C0h+var_50]
  14062cad0: jmp loc_14062CF49
loc_14062CAD5:
  14062cad5: xor edi, edi
loc_14062CAD7:
  14062cad7: mov [rbp+8C0h+var_278], r15
  14062cade: mov [rbp+8C0h+var_280], r14
  14062cae5: mov [rbp+8C0h+var_62], 1
  14062caec: mov [rbp+8C0h+var_63], 1
loc_14062CAF3:
  14062caf3: lea rcx, [rbp+8C0h+var_7C8]
  14062cafa: mov rdx, r14
  14062cafd: mov r8, rdi
  14062cb00: call sub_1414464F0
  14062cb05: nop
  14062cb06: mov byte ptr [rbp+8C0h+var_7A8], 0
  14062cb0d: movups xmm0, cs:xmmword_141766788
  14062cb14: movaps [rbp+8C0h+var_4A0], xmm0
  14062cb1b: movups xmm0, cs:xmmword_141766778
  14062cb22: movaps [rbp+8C0h+var_4B0], xmm0
  14062cb29: movups xmm0, [rbp+8C0h+var_7C8]
  14062cb30: movups xmm1, [rbp+8C0h+var_7B8]
  14062cb37: movaps [rbp+8C0h+var_490], xmm0
  14062cb3e: movaps [rbp+8C0h+var_480], xmm1
  14062cb45: mov rax, [rbp+8C0h+var_7A8]
  14062cb4c: mov qword ptr [rbp+8C0h+var_470], rax
  14062cb53: mov [rbp+8C0h+var_278], r15
  14062cb5a: mov [rbp+8C0h+var_280], r14
  14062cb61: mov [rbp+8C0h+var_62], 1
  14062cb68: mov [rbp+8C0h+var_63], 0
  14062cb6f: lea rcx, [rbp+8C0h+var_1E0]
  14062cb76: lea rdx, [rbp+8C0h+var_6E0]
  14062cb7d: lea r8, [rbp+8C0h+var_4B0]
  14062cb84: call sub_1406C4A30
  14062cb89: nop
  14062cb8a: mov [rbp+8C0h+var_60], r15
  14062cb91: mov [rbp+8C0h+var_80], r14
  14062cb98: movups xmm0, [rbp+8C0h+var_1E0]
  14062cb9f: movups xmm1, [rbp+8C0h+var_1D0]
  14062cba6: movups xmm2, [rbp+8C0h+var_1C0]
  14062cbad: movups xmm3, [rbp+8C0h+var_1B0]
  14062cbb4: movaps [rbp+8C0h+var_6E0], xmm0
  14062cbbb: movaps xmmword ptr [rbp+1F0h], xmm1
  14062cbc2: movaps [rbp+8C0h+var_6C8+8], xmm2
  14062cbc9: movaps [rbp+8C0h+var_6B8+8], xmm3
  14062cbd0: movups xmm0, [rbp+8C0h+var_1A0]
  14062cbd7: movaps [rbp+8C0h+var_6A8+8], xmm0
  14062cbde: movups xmm0, [rbp+8C0h+var_190]
  14062cbe5: movaps [rbp+8C0h+var_698+8], xmm0
  14062cbec: movups xmm0, [rbp+8C0h+var_180]
  14062cbf3: movaps [rbp+8C0h+var_688+8], xmm0
loc_14062CBFA:
  14062cbfa: movups xmm0, [rbp+8C0h+var_2F0]
  14062cc01: movups xmm1, [rbp+8C0h+var_2E0]
  14062cc08: movaps [rbp+8C0h+var_1D0], xmm1
  14062cc0f: movaps [rbp+8C0h+var_1E0], xmm0
  14062cc16: mov [rbp+8C0h+var_93], 1
loc_14062CC1D:
  14062cc1d: lea rcx, [rbp+8C0h+var_1E0]
  14062cc24: call sub_140FB1000
  14062cc29: nop
  14062cc2a: mov r8, qword ptr [rbp+8C0h+var_6E0]
  14062cc31: cmp r8, 0FFFFFFFFFFFFFFFFh
  14062cc35: jz loc_14062CCCC
  14062cc3b: movzx ecx, word ptr [rbp+8C0h+var_6E0+8]
  14062cc42: movups xmm0, [rbp+8C0h+var_6E0+0Ah]
  14062cc49: movups [rbp+8C0h+var_1E0+0Ah], xmm0
  14062cc50: movups xmm0, [rbp+8C0h+var_6C8+2]
  14062cc57: movups [rbp+8C0h+var_1D0+0Ah], xmm0
  14062cc5e: movups xmm0, [rbp+8C0h+var_6B8+2]
  14062cc65: movups [rbp+8C0h+var_1C0+0Ah], xmm0
  14062cc6c: movups xmm0, [rbp+8C0h+var_6A8+2]
  14062cc73: movups [rbp+8C0h+var_1B0+0Ah], xmm0
  14062cc7a: movups xmm0, [rbp+8C0h+var_698+2]
  14062cc81: movups [rbp+8C0h+var_1A0+0Ah], xmm0
  14062cc88: movups xmm0, [rbp+8C0h+var_688+2]
  14062cc8f: movups [rbp+8C0h+var_190+0Ah], xmm0
  14062cc96: mov r9, [rbp+8C0h+var_678]
  14062cc9d: mov qword ptr [rbp+8C0h+var_180+8], r9
  14062cca4: mov qword ptr [rbp+8C0h+var_1E0], r8
  14062ccab: mov word ptr [rbp+8C0h+var_1E0+8], cx
  14062ccb2: mov qword ptr [rbp+8C0h+var_170], rax
  14062ccb9: mov qword ptr [rbp+8C0h+var_170+8], rdx
  14062ccc0: mov r15, [rbp+8C0h+var_60]
  14062ccc7: jmp loc_14062CD69
loc_14062CCCC:
  14062cccc: mov [rbp+8C0h+var_70], rax
  14062ccd3: mov [rbp+8C0h+var_90], rdx
  14062ccda: mov rax, [rdx]
  14062ccdd: test rax, rax
  14062cce0: jz short loc_14062CCEC
loc_14062CCE2:
  14062cce2: mov rcx, [rbp+8C0h+var_70]
  14062cce9: call rax
  14062cceb: nop
loc_14062CCEC:
  14062ccec: mov rax, [rbp+8C0h+var_90]
  14062ccf3: mov rdx, [rax+8]
  14062ccf7: test rdx, rdx
  14062ccfa: jz short loc_14062CD0C
  14062ccfc: mov r8, [rax+10h]
  14062cd00: mov rcx, [rbp+8C0h+var_70]
  14062cd07: call sub_140001660
loc_14062CD0C:
  14062cd0c: mov r15, [rbp+8C0h+var_60]
  14062cd13: mov [rbp+8C0h+var_278], r15
  14062cd1a: mov rax, [rbp+8C0h+var_80]
  14062cd21: mov [rbp+8C0h+var_280], rax
  14062cd28: mov [rbp+8C0h+var_62], 0
  14062cd2f: mov [rbp+8C0h+var_63], 0
loc_14062CD36:
  14062cd36: lea rax, aProxyUpstream; "proxy.upstream"
  14062cd3d: mov [rsp+940h+var_920], rax
  14062cd42: mov [rsp+940h+var_918], 0Eh
  14062cd4b: lea r8, aBuildErrorBody; "build error body failed"
  14062cd52: lea rcx, [rbp+8C0h+var_1E0]
  14062cd59: mov r9d, 17h
  14062cd5f: mov dx, 1F6h
  14062cd63: call sub_14066B160
  14062cd68: nop
loc_14062CD69:
  14062cd69: movzx eax, word ptr [rbx]
  14062cd6c: lea ecx, [rax-1F4h]
  14062cd72: cmp cx, 64h ; 'd'
  14062cd76: jb short loc_14062CD94
  14062cd78: add eax, 0FFFFFE6Fh
  14062cd7d: cmp eax, 1Ch
  14062cd80: ja loc_14062D00A
  14062cd86: mov ecx, 100001CDh
  14062cd8b: bt ecx, eax
  14062cd8e: jnb loc_14062D00A
loc_14062CD94:
  14062cd94: mov qword ptr [rbp+8C0h+var_270], rbx
  14062cd9b: lea rax, sub_14143ED80
  14062cda2: mov qword ptr [rbp+8C0h+var_270+8], rax
loc_14062CDA9:
  14062cda9: lea rdx, unk_141767F93
  14062cdb0: lea rcx, [rbp+8C0h+var_4B0]
  14062cdb7: lea r8, [rbp+8C0h+var_270]
  14062cdbe: call sub_14149C0F0
  14062cdc3: nop
  14062cdc4: mov r12, qword ptr [rbp+8C0h+var_4B0]
  14062cdcb: mov r13, qword ptr [rbp+8C0h+var_4B0+8]
  14062cdd2: mov rdi, qword ptr [rbp+8C0h+var_4A0]
  14062cdd9: mov rbx, qword ptr [rbp+8C0h+var_1E0]
  14062cde0: movups xmm0, [rbp+8C0h+var_1E0+8]
  14062cde7: movaps [rbp+8C0h+var_370], xmm0
  14062cdee: movups xmm0, [rbp+8C0h+var_1D0+8]
  14062cdf5: movaps [rbp+8C0h+var_360], xmm0
  14062cdfc: movups xmm0, [rbp+8C0h+var_1C0+8]
  14062ce03: movaps [rbp+8C0h+var_350], xmm0
  14062ce0a: movups xmm0, [rbp+8C0h+var_1B0+8]
  14062ce11: movaps [rbp+8C0h+var_340], xmm0
  14062ce18: movups xmm0, [rbp+8C0h+var_1A0+8]
  14062ce1f: movaps [rbp+8C0h+var_330], xmm0
  14062ce26: movups xmm0, [rbp+8C0h+var_190+8]
  14062ce2d: movaps [rbp+8C0h+var_320], xmm0
  14062ce34: movups xmm0, [rbp+8C0h+var_180+8]
  14062ce3b: movaps [rbp+8C0h+var_310], xmm0
  14062ce42: mov rax, qword ptr [rbp+8C0h+var_170+8]
  14062ce49: mov [rbp+8C0h+var_300], rax
  14062ce50: mov r15, [rbp+8C0h+var_60]
  14062ce57: test r15, r15
  14062ce5a: mov r14, [rbp+8C0h+var_50]
  14062ce61: jz short loc_14062CEDC
loc_14062CE63:
  14062ce63: mov r8d, 1
  14062ce69: mov rcx, [rbp+8C0h+var_80]
  14062ce70: mov rdx, r15
  14062ce73: call sub_140001660
  14062ce78: jmp short loc_14062CEDC
loc_14062CE7A:
  14062ce7a: mov rdx, [rdi+10h]
  14062ce7e: test rdx, rdx
  14062ce81: jz short loc_14062CE99
  14062ce83: mov rax, [rbp+8C0h+var_60]
  14062ce8a: mov rcx, [rax+8]
  14062ce8e: mov r8d, 1
  14062ce94: call sub_140001660
loc_14062CE99:
  14062ce99: mov edx, 28h ; '('
  14062ce9e: mov r8d, 8
  14062cea4: mov rcx, [rbp+8C0h+var_60]
  14062ceab: call sub_140001660
  14062ceb0: mov rax, qword ptr [rbp+8C0h+var_2F0]
  14062ceb7: mov rdx, qword ptr [rbp+8C0h+var_2F0+8]
  14062cebe: lea rcx, [rbp+8C0h+var_2E0+8]
  14062cec5: mov r8, qword ptr [rbp+8C0h+var_2E0]
loc_14062CECC:
  14062cecc: call qword ptr [rax+20h]
  14062cecf: nop
  14062ced0: mov ebx, 5
  14062ced5: mov r14, [rbp+8C0h+var_50]
loc_14062CEDC:
  14062cedc: cmp byte ptr [r14+0C1h], 0
  14062cee4: jz short loc_14062CF0A
  14062cee6: mov rdx, [r14+158h]
  14062ceed: cmp rdx, 0FFFFFFFFFFFFFFFFh
  14062cef1: jz short loc_14062CF0A
  14062cef3: test rdx, rdx
  14062cef6: jz short loc_14062CF0A
  14062cef8: mov rcx, [r14+160h]
  14062ceff: mov r8d, 1
  14062cf05: call sub_140001660
loc_14062CF0A:
  14062cf0a: mov byte ptr [r14+0C1h], 0
  14062cf12: mov byte ptr [r14+0C3h], 0
  14062cf1a: mov rax, [r14+0A0h]
  14062cf21: lock dec qword ptr [rax]
  14062cf25: jnz short loc_14062CF3B
loc_14062CF27:
  14062cf27: mov rax, [rbp+8C0h+var_50]
  14062cf2e: lea rcx, [rax+0A0h]
loc_14062CF35:
  14062cf35: call sub_141018B80
  14062cf3a: nop
loc_14062CF3B:
  14062cf3b: mov rax, [rbp+8C0h+var_50]
  14062cf42: mov byte ptr [rax+0C4h], 0
loc_14062CF49:
  14062cf49: lea rcx, [rax+20h]
loc_14062CF4D:
  14062cf4d: call sub_1400104F0
  14062cf52: nop
  14062cf53: mov rax, [rbp+8C0h+var_50]
  14062cf5a: cmp byte ptr [rax+0C2h], 0
  14062cf61: jz short loc_14062CF70
loc_14062CF63:
  14062cf63: mov rcx, [rbp+8C0h+var_50]
  14062cf6a: call sub_1400104F0
  14062cf6f: nop
loc_14062CF70:
  14062cf70: mov rcx, [rbp+8C0h+var_50]
  14062cf77: mov byte ptr [rcx+0C2h], 0
loc_14062CF7E:
  14062cf7e: mov [rsi], rbx
  14062cf81: movaps xmm0, [rbp+8C0h+var_370]
  14062cf88: movaps xmm1, [rbp+8C0h+var_360]
  14062cf8f: movaps xmm2, [rbp+8C0h+var_350]
  14062cf96: movaps xmm3, [rbp+8C0h+var_340]
  14062cf9d: movups xmmword ptr [rsi+8], xmm0
  14062cfa1: movups xmmword ptr [rsi+18h], xmm1
  14062cfa5: movups xmmword ptr [rsi+28h], xmm2
  14062cfa9: movups xmmword ptr [rsi+38h], xmm3
  14062cfad: movaps xmm0, [rbp+8C0h+var_330]
  14062cfb4: movups xmmword ptr [rsi+48h], xmm0
  14062cfb8: movaps xmm0, [rbp+8C0h+var_320]
  14062cfbf: movups xmmword ptr [rsi+58h], xmm0
  14062cfc3: movaps xmm0, [rbp+8C0h+var_310]
  14062cfca: movups xmmword ptr [rsi+68h], xmm0
  14062cfce: mov rax, [rbp+8C0h+var_300]
  14062cfd5: mov [rsi+78h], rax
  14062cfd9: mov [rsi+80h], r12
  14062cfe0: mov [rsi+88h], r13
  14062cfe7: mov [rsi+90h], rdi
  14062cfee: mov al, 1
loc_14062CFF0:
  14062cff0: mov [rcx+0C5h], al
  14062cff6: add rsp, 908h
  14062cffd: pop rbx
  14062cffe: pop rdi
  14062cfff: pop rsi
  14062d000: pop r12
  14062d002: pop r13
  14062d004: pop r14
  14062d006: pop r15
  14062d008: pop rbp
  14062d009: retn
loc_14062D00A:
  14062d00a: mov rax, qword ptr [rbp+8C0h+var_170]
  14062d011: mov [rbp+8C0h+var_300], rax
  14062d018: movups xmm0, [rbp+8C0h+var_180]
  14062d01f: movaps [rbp+8C0h+var_310], xmm0
  14062d026: movups xmm0, [rbp+8C0h+var_190]
  14062d02d: movaps [rbp+8C0h+var_320], xmm0
  14062d034: movups xmm0, [rbp+8C0h+var_1A0]
  14062d03b: movaps [rbp+8C0h+var_330], xmm0
  14062d042: movups xmm0, [rbp+8C0h+var_1E0]
  14062d049: movups xmm1, [rbp+8C0h+var_1D0]
  14062d050: movups xmm2, [rbp+8C0h+var_1C0]
  14062d057: movups xmm3, [rbp+8C0h+var_1B0]
  14062d05e: movaps [rbp+8C0h+var_340], xmm3
  14062d065: movaps [rbp+8C0h+var_350], xmm2
  14062d06c: movaps [rbp+8C0h+var_360], xmm1
  14062d073: movaps [rbp+8C0h+var_370], xmm0
  14062d07a: mov ebx, 5
  14062d07f: mov r12, qword ptr [rbp+8C0h+var_170+8]
  14062d086: test r15, r15
  14062d089: mov r14, [rbp+8C0h+var_50]
  14062d090: jnz loc_14062CE63
  14062d096: jmp loc_14062CEDC
loc_14062D09B:
  14062d09b: mov rax, qword ptr [rbp+8C0h+var_170]
  14062d0a2: mov [rbp+8C0h+var_200], rax
  14062d0a9: movups xmm0, [rbp+8C0h+var_180]
  14062d0b0: movaps [rbp+8C0h+var_210], xmm0
  14062d0b7: movups xmm0, [rbp+8C0h+var_190]
  14062d0be: movaps [rbp+8C0h+var_220], xmm0
  14062d0c5: movups xmm0, [rbp+8C0h+var_1A0]
  14062d0cc: movaps [rbp+8C0h+var_230], xmm0
  14062d0d3: movups xmm0, [rbp+8C0h+var_1E0]
  14062d0da: movups xmm1, [rbp+8C0h+var_1D0]
  14062d0e1: movups xmm2, [rbp+8C0h+var_1C0]
  14062d0e8: movups xmm3, [rbp+8C0h+var_1B0]
  14062d0ef: movaps [rbp+8C0h+var_240], xmm3
  14062d0f6: movaps [rbp+8C0h+var_250], xmm2
  14062d0fd: movaps [rbp+8C0h+var_260], xmm1
  14062d104: movaps [rbp+8C0h+var_270], xmm0
  14062d10b: mov ebx, 5
  14062d110: mov r12, qword ptr [rbp+8C0h+var_170+8]
  14062d117: jmp loc_14062C961
loc_14062D11C:
  14062d11c: mov rcx, r15; Address
  14062d11f: call sub_1416C1680
  14062d124: nop
  14062d125: jmp loc_14062A5EB
loc_14062D12A:
  14062d12a: mov rcx, r15; Address
  14062d12d: call sub_1416C1680
  14062d132: nop
  14062d133: jmp loc_14062A64A
loc_14062D138:
  14062d138: mov rax, [rbp+8C0h+var_60]
  14062d13f: mov [rbp+8C0h+var_1E8], rax
  14062d146: mov [rbp+8C0h+var_1F0], r13
loc_14062D14D:
  14062d14d: mov rcx, r14; Address
  14062d150: call sub_1416C1680
  14062d155: nop
  14062d156: jmp loc_14062A493
loc_14062D15B:
  14062d15b: mov rax, [rbp+8C0h+var_60]
  14062d162: mov [rbp+8C0h+var_1E8], rax
  14062d169: mov [rbp+8C0h+var_1F0], r13
  14062d170: mov rcx, r14; Address
  14062d173: call sub_1416C1680
  14062d178: nop
  14062d179: jmp loc_14062A99D
loc_14062D17E:
  14062d17e: mov ecx, 8
  14062d183: mov edx, 0F0h
  14062d188: call sub_1416C2D31
  14062d18e: jmp loc_14062D2B4
loc_14062D193:
  14062d193: mov rcx, r15
  14062d196: call sub_1416C1970
  14062d19b: nop
  14062d19c: jmp loc_14062A67D
loc_14062D1A1:
  14062d1a1: mov rcx, [rbp+8C0h+var_60]
  14062d1a8: mov [rbp+8C0h+var_1E8], rcx
  14062d1af: mov [rbp+8C0h+var_1F0], r13
loc_14062D1B6:
  14062d1b6: mov rcx, r14
  14062d1b9: mov r14, rdx
  14062d1bc: mov edx, eax
  14062d1be: call sub_1416C1970
  14062d1c3: mov rdx, r14
  14062d1c6: jmp loc_14062A9D1
loc_14062D1CB:
  14062d1cb: mov ecx, 8
  14062d1d0: mov edx, 10h
  14062d1d5: call sub_1416C2D31
  14062d1db: jmp loc_14062D2B4
loc_14062D1E0:
  14062d1e0: mov ecx, 8
  14062d1e5: mov edx, 40h ; '@'
  14062d1ea: call sub_1416C2D31
  14062d1f0: jmp loc_14062D2B4
loc_14062D1F5:
  14062d1f5: mov [rbp+8C0h+var_70], r15
  14062d1fc: mov ecx, 8
  14062d201: mov edx, 18h
  14062d206: call sub_1416C2D31
  14062d20c: jmp loc_14062D2B4
loc_14062D211:
  14062d211: mov [rbp+8C0h+var_71], 1
loc_14062D218:
  14062d218: lea rcx, off_1417B3BC8; "C:\\Users\\runneradmin\\.cargo\\registr"...
  14062d21f: call sub_1416C3040
loc_14062D225:
  14062d225: jmp loc_14062D2B4
loc_14062D22A:
  14062d22a: lea rcx, off_141767F60; jumptable 000000014062A1AB case 2
  14062d231: call sub_1416C3420
  14062d236: ud2
loc_14062D238:
  14062d238: lea rcx, off_141767F60; jumptable 000000014062A1AB case 1
  14062d23f: call sub_1416C3400
  14062d244: ud2
loc_14062D246:
  14062d246: mov ecx, 1
  14062d24b: mov edx, 6
  14062d250: call sub_1416C2D4B
  14062d256: jmp short loc_14062D2B4
loc_14062D258:
  14062d258: mov [rbp+8C0h+var_398], r13; jumptable 000000014062A3C1 case 2
loc_14062D25F:
  14062d25f: lea rcx, off_141768350; "src\\core\\relay\\proxy_server.rs"
  14062d266: call sub_1416C3420
  14062d26c: jmp short loc_14062D2B4
loc_14062D26E:
  14062d26e: mov [rbp+8C0h+var_398], r13; jumptable 000000014062A3C1 case 1
  14062d275: lea rcx, off_141768350; "src\\core\\relay\\proxy_server.rs"
  14062d27c: call sub_1416C3400
  14062d282: jmp short loc_14062D2B4
loc_14062D284:
  14062d284: mov ecx, 1
  14062d289: mov edx, 6
  14062d28e: call sub_1416C2D4B
  14062d294: jmp short loc_14062D2B4
loc_14062D296:
  14062d296: mov [rbp+8C0h+var_94], 1
  14062d29d: mov [rbp+8C0h+var_95], 1
loc_14062D2A4:
  14062d2a4: mov ecx, 1
  14062d2a9: mov edx, 10h
  14062d2ae: call sub_1416C2D4B
loc_14062D2B4:
  14062d2b4: ud2
loc_14062D2B6:
  14062d2b6: mov r15, rdx
  14062d2b9: call nullsub_1
  14062d2be: mov edx, 1
  14062d2c3: mov rcx, r15
  14062d2c6: call sub_140001650
  14062d2cb: mov ecx, 1
  14062d2d0: mov rdx, r15
  14062d2d3: test rax, rax
  14062d2d6: jz loc_14062A955
  14062d2dc: mov r12, rax
  14062d2df: mov rcx, rax
  14062d2e2: mov rdx, r14
  14062d2e5: mov r8, r15
  14062d2e8: call sub_141684120
  14062d2ed: mov rdx, r15
  14062d2f0: mov r15, [rbp+8C0h+var_50]
  14062d2f7: jmp loc_14062B4FE
*/
