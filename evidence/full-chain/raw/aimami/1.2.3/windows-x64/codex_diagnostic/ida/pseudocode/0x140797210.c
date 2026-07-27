// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// decompile() server-side truncates this function's pseudocode at ~999 chars; full body reconstructed via disasm() chunked offset paging (max_instructions=250/call).
// total_instructions=4423 fetched=4423 complete=True

// ---- partial Hex-Rays pseudocode (server-truncated) ----
// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_thread_poisoned_instructions | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_thread_poisoned_instructions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  char v11; // al
  __int64 v12; // r8
  void *v13; // rdx
  void (__fastcall *v15)(_BYTE *, __int64); // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  _OWORD *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbx
  _BYTE *v28; // r15
  __int64 v29; // rax
  __int128 v30; // xmm0
  __m128i v31; // xmm1
  __int128 v32; // xmm2
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __in... [142738 chars total]

// ---- full disassembly reconstruction (4423/4423 instructions) ----
fix_thread_poisoned_instructions: /*140797210*/ push rbp
/*140797211*/  push r15
/*140797213*/  push r14
/*140797215*/  push r13
/*140797217*/  push r12
/*140797219*/  push rsi
/*14079721a*/  push rdi
/*14079721b*/  push rbx
/*14079721c*/  mov eax, 1128h
/*140797221*/  call __alloca_probe
/*140797226*/  sub rsp, rax
/*140797229*/  lea rbp, [rsp+80h]
/*140797231*/  movaps [rbp+10E0h+var_50], xmm7
/*140797238*/  movaps [rbp+10E0h+var_60], xmm6
/*14079723f*/  mov [rbp+10E0h+var_68], 0FFFFFFFFFFFFFFFEh
/*14079724a*/  mov r14, r9
/*14079724d*/  mov rbx, r8
/*140797250*/  mov rdi, rdx
/*140797253*/  mov [rbp+10E0h+var_70], rcx
/*14079725a*/  mov r15, [rbp+10E0h+arg_20]
/*140797261*/  movzx esi, [rbp+10E0h+arg_38]
/*140797268*/  mov [rbp+10E0h+var_738], r9
/*14079726f*/  mov [rbp+10E0h+var_730], r15
/*140797276*/  mov rcx, r9
/*140797279*/  mov rdx, r15
/*14079727c*/  call sub_14076D370
/*140797281*/  test sil, sil
/*140797284*/  jnz short loc_1407972B2
/*140797286*/  and al, 1
/*140797288*/  jz short loc_1407972B2
/*14079728a*/  lea rax, [rbp+10E0h+var_738]
/*140797291*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*140797298*/  lea rax, sub_14041F680
/*14079729f*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*1407972a6*/  lea rdx, unk_14178FC9E
/*1407972ad*/  jmp loc_140797B5C
loc_1407972B2: /*1407972b2*/ add r15, 0FFFFFFFFFFFFFFF4h; switch 21 cases
/*1407972b6*/  cmp r15, 14h
/*1407972ba*/  ja def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*1407972c0*/  mov rcx, [rbp+10E0h+arg_30]
/*1407972c7*/  mov r9, [rbp+10E0h+arg_28]
/*1407972ce*/  lea rax, jpt_1407972DC
/*1407972d5*/  movsxd rdx, ds:(jpt_1407972DC - 141791E54h)[rax+r15*4]
/*1407972d9*/  add rdx, rax
/*1407972dc*/  jmp rdx; switch jump
loc_1407972DE: /*1407972de*/ mov rax, 735F6769666E6F63h; jumptable 00000001407972DC case 12
/*1407972e8*/  xor rax, [r14]
/*1407972eb*/  mov edx, [r14+8]
/*1407972ef*/  xor rdx, 656C6174h
/*1407972f6*/  or rdx, rax
/*1407972f9*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*1407972ff*/  mov rax, [rcx+28h]
/*140797303*/  mov rdx, [rdi+48h]
/*140797307*/  mov r8, [rdi+50h]
/*14079730b*/  mov [rsp+1160h+var_1138], rax
/*140797310*/  mov [rsp+1160h+var_1140], r9
/*140797315*/  mov rsi, [rbp+10E0h+var_70]
/*14079731c*/  mov rcx, rsi
/*14079731f*/  mov r9, rbx
/*140797322*/  call sub_1407605B0
/*140797327*/  mov rax, rsi
/*14079732a*/  jmp loc_140797B98
loc_14079732F: /*14079732f*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 32
/*140797334*/  movdqu xmm1, xmmword ptr [r14+10h]
/*14079733a*/  pcmpeqb xmm1, cs:xmmword_141786510
/*140797342*/  pcmpeqb xmm0, cs:xmmword_141786520
/*14079734a*/  pand xmm0, xmm1
/*14079734e*/  pmovmskb eax, xmm0
/*140797352*/  cmp eax, 0FFFFh
/*140797357*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*14079735d*/  cmp byte ptr [rbx+124h], 0
/*140797364*/  jz loc_140798125
/*14079736a*/  mov rbx, r9
/*14079736d*/  mov r14, [rcx+28h]
/*140797371*/  lea rcx, [rbp+10E0h+var_E70]
/*140797378*/  mov rdx, rdi
/*14079737b*/  call sub_1404C0AB0
/*140797380*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140797387*/  or rax, qword ptr [rbp+10E0h+var_E30]
/*14079738e*/  jnz loc_14079879B
loc_140797394: /*140797394*/ lea rcx, [rbp+10E0h+var_E70]
/*14079739b*/  call sub_140334760
/*1407973a0*/  nop
/*1407973a1*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*1407973a8*/  test rax, rax
/*1407973ab*/  jz short loc_1407973C7
/*1407973ad*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*1407973b4*/  shl rax, 3
/*1407973b8*/  lea rdx, [rax+rax*2]
/*1407973bc*/  mov r8d, 8
/*1407973c2*/  call sub_140001660
loc_1407973C7: /*1407973c7*/ lea rcx, [rbp+10E0h+var_E60+8]
loc_1407973CE: /*1407973ce*/ call sub_140334760
/*1407973d3*/  nop
loc_1407973D4: /*1407973d4*/ mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*1407973db*/  test rax, rax
/*1407973de*/  jz short loc_1407973FA
/*1407973e0*/  mov rcx, qword ptr [rbp+10E0h+var_E50]
/*1407973e7*/  shl rax, 3
/*1407973eb*/  lea rdx, [rax+rax*2]
/*1407973ef*/  mov r8d, 8
/*1407973f5*/  call sub_140001660
loc_1407973FA: /*1407973fa*/ call nullsub_1
/*1407973ff*/  mov ecx, 18h
/*140797404*/  mov edx, 8
/*140797409*/  call sub_140001650
/*14079740e*/  test rax, rax
/*140797411*/  jz loc_14079C92D
/*140797417*/  mov rsi, rax
/*14079741a*/  call nullsub_1
/*14079741f*/  mov ecx, 20h ; ' '
/*140797424*/  mov edx, 1
/*140797429*/  call sub_140001650
/*14079742e*/  test rax, rax
/*140797431*/  jz loc_14079CDC6
/*140797437*/  movups xmm0, cs:xmmword_14178D8D7
/*14079743e*/  movups xmmword ptr [rax+10h], xmm0
/*140797442*/  movdqu xmm0, cs:xmmword_14178D8C7
/*14079744a*/  movdqu xmmword ptr [rax], xmm0
/*14079744e*/  mov qword ptr [rsi], 20h ; ' '
/*140797455*/  mov [rsi+8], rax
/*140797459*/  mov qword ptr [rsi+10h], 20h ; ' '
/*140797461*/  mov qword ptr [rbp+10E0h+var_720], 1
/*14079746c*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*140797473*/  mov qword ptr [rbp+10E0h+var_710], 1
/*14079747e*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*140797489*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*140797494*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*14079749f*/  call nullsub_1
/*1407974a4*/  mov ecx, 18h
/*1407974a9*/  mov edx, 8
/*1407974ae*/  call sub_140001650
/*1407974b3*/  test rax, rax
/*1407974b6*/  jz loc_14079C9FB
/*1407974bc*/  mov rsi, rax
/*1407974bf*/  call nullsub_1
/*1407974c4*/  mov ecx, 3Ah ; ':'
/*1407974c9*/  mov edx, 1
/*1407974ce*/  call sub_140001650
/*1407974d3*/  test rax, rax
/*1407974d6*/  jz loc_14079CDE2
/*1407974dc*/  movups xmm0, cs:xmmword_14178F8B3+0Ah
/*1407974e3*/  movups xmmword ptr [rax+2Ah], xmm0
/*1407974e7*/  movups xmm0, cs:xmmword_14178F8B3
/*1407974ee*/  movups xmmword ptr [rax+20h], xmm0
/*1407974f2*/  movups xmm0, cs:xmmword_14178F8A3
/*1407974f9*/  movups xmmword ptr [rax+10h], xmm0
/*1407974fd*/  movups xmm0, cs:xmmword_14178F893
/*140797504*/  movups xmmword ptr [rax], xmm0
/*140797507*/  mov qword ptr [rsi], 3Ah ; ':'
/*14079750e*/  mov [rsi+8], rax
/*140797512*/  mov qword ptr [rsi+10h], 3Ah ; ':'
/*14079751a*/  jmp loc_14079854C
loc_14079751F: /*14079751f*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 26
/*140797524*/  movdqu xmm1, xmmword ptr [r14+0Ah]
/*14079752a*/  pcmpeqb xmm1, cs:xmmword_141786590
/*140797532*/  pcmpeqb xmm0, cs:xmmword_1417865A0
/*14079753a*/  pand xmm0, xmm1
/*14079753e*/  pmovmskb eax, xmm0
/*140797542*/  cmp eax, 0FFFFh
/*140797547*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*14079754d*/  movzx r8d, byte ptr [rbx+124h]
/*140797555*/  mov rsi, [rbp+10E0h+var_70]
/*14079755c*/  mov rcx, rsi
/*14079755f*/  mov rdx, rdi
/*140797562*/  call sub_14078A3B0
/*140797567*/  mov rax, rsi
/*14079756a*/  jmp loc_140797B98
loc_14079756F: /*14079756f*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 19
/*140797574*/  movdqu xmm1, xmmword ptr [r14+3]
/*14079757a*/  pcmpeqb xmm1, cs:xmmword_141786550
/*140797582*/  pcmpeqb xmm0, cs:xmmword_141786560
/*14079758a*/  pand xmm0, xmm1
/*14079758e*/  pmovmskb eax, xmm0
/*140797592*/  cmp eax, 0FFFFh
/*140797597*/  jz loc_140797C8C
/*14079759d*/  movdqu xmm0, xmmword ptr [r14]
/*1407975a2*/  movdqu xmm1, xmmword ptr [r14+3]
/*1407975a8*/  pcmpeqb xmm1, cs:xmmword_141786570
/*1407975b0*/  pcmpeqb xmm0, cs:xmmword_141786580
/*1407975b8*/  pand xmm0, xmm1
/*1407975bc*/  pmovmskb eax, xmm0
/*1407975c0*/  cmp eax, 0FFFFh
/*1407975c5*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*1407975cb*/  mov rsi, [rdi+8]
/*1407975cf*/  mov rbx, [rdi+10h]
/*1407975d3*/  mov [rsp+1160h+var_1140], 6
/*1407975dc*/  lea r9, unk_141789397
/*1407975e3*/  lea rcx, [rbp+10E0h+var_190]
/*1407975ea*/  mov rdx, rsi
/*1407975ed*/  mov r8, rbx
/*1407975f0*/  call sub_141473FA0
/*1407975f5*/  nop
loc_1407975F6: /*1407975f6*/ lea rcx, [rbp+10E0h+var_130]
/*1407975fd*/  mov [rbp+10E0h+var_A8], rsi
/*140797604*/  mov rdx, rsi
/*140797607*/  mov [rbp+10E0h+var_B8], rbx
/*14079760e*/  mov r8, rbx
/*140797611*/  call sub_1407130B0
/*140797616*/  nop
/*140797617*/  cmp qword ptr [rdi+3C0h], 0FFFFFFFFFFFFFFFFh
/*14079761f*/  jz loc_14079886C
loc_140797625: /*140797625*/ lea rdx, [rdi+3C0h]
/*14079762c*/  lea rcx, [rbp+10E0h+var_1F0]
/*140797633*/  call sub_14032C610
/*140797638*/  nop
loc_140797639: /*140797639*/ movzx eax, byte ptr [rdi+3D8h]
/*140797640*/  mov byte ptr [rbp+10E0h+var_1E0+8], al
/*140797646*/  jmp loc_140798887
loc_14079764B: /*14079764b*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 28
/*140797650*/  movdqu xmm1, xmmword ptr [r14+0Ch]
/*140797656*/  pcmpeqb xmm1, cs:xmmword_1417864F0
/*14079765e*/  pcmpeqb xmm0, cs:xmmword_141786500
/*140797666*/  pand xmm0, xmm1
/*14079766a*/  pmovmskb eax, xmm0
/*14079766e*/  cmp eax, 0FFFFh
/*140797673*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797679*/  lea rcx, [rbp+10E0h+var_E70]
/*140797680*/  mov rdx, rdi
/*140797683*/  call sub_140712830
/*140797688*/  cmp qword ptr [rbp+10E0h+var_E60], 0
/*140797690*/  jz loc_1407982DF
loc_140797696: /*140797696*/ lea rcx, [rbp+10E0h+var_E70]
/*14079769d*/  call sub_140334B70
/*1407976a2*/  nop
loc_1407976A3: /*1407976a3*/ mov rdx, qword ptr [rbp+10E0h+var_E70]
/*1407976aa*/  test rdx, rdx
/*1407976ad*/  jz short loc_1407976C5
/*1407976af*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*1407976b6*/  shl rdx, 5
/*1407976ba*/  mov r8d, 8
/*1407976c0*/  call sub_140001660
loc_1407976C5: /*1407976c5*/ lea r15, [rbp+10E0h+var_E70]
/*1407976cc*/  mov rcx, r15
/*1407976cf*/  mov rdx, rdi
/*1407976d2*/  call collect_diagnostic_main_threads
/*1407976d7*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*1407976de*/  movups xmm0, [rbp+10E0h+var_E70+8]
/*1407976e5*/  movaps [rbp+10E0h+var_4B0], xmm0
/*1407976ec*/  mov rcx, qword ptr [rbp+10E0h+var_E60+8]
/*1407976f3*/  mov qword ptr [rbp+10E0h+var_4A0], rcx
/*1407976fa*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1407976fe*/  jz loc_140798D48
/*140797704*/  movups xmm0, [rbp+10E0h+var_E50]
/*14079770b*/  movdqu xmm1, [rbp+10E0h+var_E40]
/*140797713*/  movups xmm2, [rbp+10E0h+var_E30]
/*14079771a*/  movups xmm3, [rbp+10E0h+var_E20]
/*140797721*/  mov rdx, [rbp+10E0h+var_70]
/*140797728*/  movups xmmword ptr [rdx+50h], xmm3
/*14079772c*/  movups xmmword ptr [rdx+40h], xmm2
/*140797730*/  movdqu xmmword ptr [rdx+30h], xmm1
/*140797735*/  movups xmmword ptr [rdx+20h], xmm0
/*140797739*/  mov rcx, qword ptr [rbp+10E0h+var_4A0]
/*140797740*/  mov [rdx+18h], rcx
/*140797744*/  movdqa xmm0, [rbp+10E0h+var_4B0]
/*14079774c*/  movdqu xmmword ptr [rdx+8], xmm0
/*140797751*/  mov [rdx], rax
/*140797754*/  jmp loc_140799FF5
loc_140797759: /*140797759*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 20
/*14079775e*/  movd xmm1, dword ptr [r14+10h]
/*140797764*/  pcmpeqb xmm1, cs:xmmword_1417866D0
/*14079776c*/  pcmpeqb xmm0, cs:xmmword_1417866E0
/*140797774*/  pand xmm0, xmm1
/*140797778*/  pmovmskb eax, xmm0
/*14079777c*/  cmp eax, 0FFFFh
/*140797781*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797787*/  mov rax, [rcx+28h]
/*14079778b*/  mov rdx, [rdi+48h]
/*14079778f*/  mov r8, [rdi+50h]
/*140797793*/  mov [rsp+1160h+var_1138], rax
/*140797798*/  mov [rsp+1160h+var_1140], r9
/*14079779d*/  mov rsi, [rbp+10E0h+var_70]
/*1407977a4*/  mov rcx, rsi
/*1407977a7*/  mov r9, rbx
/*1407977aa*/  call sub_14076B250
/*1407977af*/  mov rax, rsi
/*1407977b2*/  jmp loc_140797B98
loc_1407977B7: /*1407977b7*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 27
/*1407977bc*/  movdqu xmm1, xmmword ptr [r14+0Bh]
/*1407977c2*/  pcmpeqb xmm1, cs:xmmword_141786530
/*1407977ca*/  pcmpeqb xmm0, cs:xmmword_141786540
/*1407977d2*/  pand xmm0, xmm1
/*1407977d6*/  pmovmskb eax, xmm0
/*1407977da*/  cmp eax, 0FFFFh
/*1407977df*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*1407977e5*/  movzx r8d, byte ptr [rbx+124h]
/*1407977ed*/  mov rsi, [rbp+10E0h+var_70]
/*1407977f4*/  mov rcx, rsi
/*1407977f7*/  mov rdx, rdi
/*1407977fa*/  call fix_thread_provider_consistency
/*1407977ff*/  mov rax, rsi
/*140797802*/  jmp loc_140797B98
loc_140797807: /*140797807*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 18
/*14079780c*/  movzx eax, word ptr [r14+10h]
/*140797811*/  movd xmm1, eax
/*140797815*/  pcmpeqb xmm0, cs:xmmword_141786690
/*14079781d*/  pcmpeqb xmm1, cs:xmmword_1417866A0
/*140797825*/  pand xmm1, xmm0
/*140797829*/  pmovmskb eax, xmm1
/*14079782d*/  cmp eax, 0FFFFh
/*140797832*/  jz loc_140797CA9
/*140797838*/  movdqu xmm0, xmmword ptr [r14]
/*14079783d*/  movzx eax, word ptr [r14+10h]
/*140797842*/  movd xmm1, eax
/*140797846*/  pcmpeqb xmm0, cs:xmmword_1417866B0
/*14079784e*/  pcmpeqb xmm1, cs:xmmword_1417866C0
/*140797856*/  pand xmm1, xmm0
/*14079785a*/  pmovmskb eax, xmm1
/*14079785e*/  cmp eax, 0FFFFh
/*140797863*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797869*/  mov r8, [rbx+8]
/*14079786d*/  mov rax, [rbx+10h]
/*140797871*/  mov rcx, [rcx+28h]
/*140797875*/  mov [rsp+1160h+var_1138], rcx
/*14079787a*/  mov [rsp+1160h+var_1140], r9
/*14079787f*/  mov rsi, [rbp+10E0h+var_70]
/*140797886*/  mov rcx, rsi
/*140797889*/  mov rdx, rdi
/*14079788c*/  mov r9, rax
/*14079788f*/  call sub_1407646C0
/*140797894*/  mov rax, rsi
/*140797897*/  jmp loc_140797B98
loc_14079789C: /*14079789c*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 17
/*1407978a1*/  movzx eax, byte ptr [r14+10h]
/*1407978a6*/  movd xmm1, eax
/*1407978aa*/  pcmpeqb xmm0, cs:xmmword_1417866F0
/*1407978b2*/  pcmpeqb xmm1, cs:xmmword_1416C6BB0
/*1407978ba*/  pand xmm1, xmm0
/*1407978be*/  pmovmskb eax, xmm1
/*1407978c2*/  cmp eax, 0FFFFh
/*1407978c7*/  jz loc_140797CCD
/*1407978cd*/  movdqu xmm0, xmmword ptr [r14]
/*1407978d2*/  movzx eax, byte ptr [r14+10h]
/*1407978d7*/  movd xmm1, eax
/*1407978db*/  pcmpeqb xmm0, cs:xmmword_141786700
/*1407978e3*/  pcmpeqb xmm1, cs:xmmword_1416C6430
/*1407978eb*/  pand xmm1, xmm0
/*1407978ef*/  pmovmskb eax, xmm1
/*1407978f3*/  cmp eax, 0FFFFh
/*1407978f8*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*1407978fe*/  mov rdx, [rdi+308h]
/*140797905*/  mov r8, [rdi+310h]
/*14079790c*/  mov rax, [rcx+28h]
/*140797910*/  mov [rsp+1160h+var_1138], rax
/*140797915*/  mov [rsp+1160h+var_1140], r9
/*14079791a*/  mov rsi, [rbp+10E0h+var_70]
/*140797921*/  mov rcx, rsi
/*140797924*/  mov r9, rbx
/*140797927*/  call sub_140763CB0
/*14079792c*/  mov rax, rsi
/*14079792f*/  jmp loc_140797B98
loc_140797934: /*140797934*/ mov rax, 746E695F68747561h; jumptable 00000001407972DC case 14
/*14079793e*/  xor rax, [r14]
/*140797941*/  mov rcx, 797469726765746Eh
/*14079794b*/  xor rcx, [r14+6]
/*14079794f*/  or rcx, rax
/*140797952*/  jz loc_140797EFC
/*140797958*/  mov rbx, 6C61756469736572h
/*140797962*/  mov rax, [r14]
/*140797965*/  xor rax, rbx
/*140797968*/  mov r15, 65686361635F6C61h
/*140797972*/  mov rcx, [r14+6]
/*140797976*/  xor rcx, r15
/*140797979*/  or rcx, rax
/*14079797c*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797982*/  mov rdx, [rdi+308h]
/*140797989*/  mov r8, [rdi+310h]
/*140797990*/  mov [rsp+1160h+var_1140], 18h
/*140797999*/  lea r9, unk_14178BDE1
/*1407979a0*/  lea rcx, [rbp+10E0h+var_E70]
/*1407979a7*/  call sub_141473FA0
/*1407979ac*/  mov rdx, qword ptr [rbp+10E0h+var_E70+8]
/*1407979b3*/  mov r8, qword ptr [rbp+10E0h+var_E60]
loc_1407979BA: /*1407979ba*/ mov [rsp+1160h+var_1140], 16h
/*1407979c3*/  lea r9, unk_14178BDF9
/*1407979ca*/  lea rcx, [rbp+10E0h+var_4B0]
/*1407979d1*/  mov [rbp+10E0h+var_78], rdx
/*1407979d8*/  call sub_141473FA0
/*1407979dd*/  nop
/*1407979de*/  mov rdx, qword ptr [rbp+10E0h+var_E70]
/*1407979e5*/  test rdx, rdx
/*1407979e8*/  jz short loc_1407979FC
/*1407979ea*/  mov r8d, 1
/*1407979f0*/  mov rcx, [rbp+10E0h+var_78]
/*1407979f7*/  call sub_140001660
loc_1407979FC: /*1407979fc*/ mov rdx, qword ptr [rbp+10E0h+var_4B0+8]
/*140797a03*/  mov rdi, qword ptr [rbp+10E0h+var_4A0]
loc_140797A0A: /*140797a0a*/ lea rcx, [rbp+10E0h+var_E70]
/*140797a11*/  mov [rbp+10E0h+var_78], rdx
/*140797a18*/  mov r8, rdi
/*140797a1b*/  call sub_141486710
/*140797a20*/  nop
/*140797a21*/  cmp dword ptr [rbp+10E0h+var_E70], 2
/*140797a28*/  jnz loc_1407985E0
/*140797a2e*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*140797a35*/  call sub_1401DD260
/*140797a3a*/  nop
loc_140797A3B: /*140797a3b*/ jmp loc_14079860C
loc_140797A40: /*140797a40*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 21
/*140797a45*/  movdqu xmm1, xmmword ptr [r14+5]
/*140797a4b*/  pcmpeqb xmm1, cs:xmmword_1417865B0
/*140797a53*/  pcmpeqb xmm0, cs:xmmword_1417865C0
/*140797a5b*/  pand xmm0, xmm1
/*140797a5f*/  pmovmskb eax, xmm0
/*140797a63*/  cmp eax, 0FFFFh
/*140797a68*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797a6e*/  movzx r8d, byte ptr [rbx+124h]
/*140797a76*/  mov rax, [rcx+28h]
/*140797a7a*/  mov [rsp+1160h+var_1140], rax
/*140797a7f*/  mov rsi, [rbp+10E0h+var_70]
/*140797a86*/  mov rcx, rsi
/*140797a89*/  mov rdx, rdi
/*140797a8c*/  call sub_14076D1E0
/*140797a91*/  mov rax, rsi
/*140797a94*/  jmp loc_140797B98
loc_140797A99: /*140797a99*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 22
/*140797a9e*/  movdqu xmm1, xmmword ptr [r14+6]
/*140797aa4*/  pcmpeqb xmm1, cs:xmmword_1417865D0
/*140797aac*/  pcmpeqb xmm0, cs:xmmword_1417865E0
/*140797ab4*/  pand xmm0, xmm1
/*140797ab8*/  pmovmskb eax, xmm0
/*140797abc*/  cmp eax, 0FFFFh
/*140797ac1*/  jz loc_140797F16
/*140797ac7*/  movdqu xmm0, xmmword ptr [r14]
/*140797acc*/  movdqu xmm1, xmmword ptr [r14+6]
/*140797ad2*/  pcmpeqb xmm1, cs:xmmword_1417865F0
/*140797ada*/  pcmpeqb xmm0, cs:xmmword_141786600
/*140797ae2*/  pand xmm0, xmm1
/*140797ae6*/  pmovmskb eax, xmm0
/*140797aea*/  cmp eax, 0FFFFh
/*140797aef*/  jnz short def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797af1*/  mov rsi, [rbp+10E0h+var_70]
/*140797af8*/  mov rcx, rsi
/*140797afb*/  mov rdx, rdi
/*140797afe*/  call sub_14077A2B0
/*140797b03*/  mov rax, rsi
/*140797b06*/  jmp loc_140797B98
loc_140797B0B: /*140797b0b*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 24
/*140797b10*/  movq xmm1, qword ptr [r14+10h]
/*140797b16*/  pcmpeqb xmm1, cs:xmmword_1417864D0
/*140797b1e*/  pcmpeqb xmm0, cs:xmmword_1417864E0
/*140797b26*/  pand xmm0, xmm1
/*140797b2a*/  pmovmskb eax, xmm0
/*140797b2e*/  cmp eax, 0FFFFh
/*140797b33*/  jz loc_140797F38
def_1407972DC: /*140797b39*/ lea rax, [rbp+10E0h+var_738]; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797b40*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*140797b47*/  lea rax, sub_14041F680
/*140797b4e*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*140797b55*/  lea rdx, unk_14178FCDA
loc_140797B5C: /*140797b5c*/ lea rcx, [rbp+10E0h+var_E70]
/*140797b63*/  lea r8, [rbp+10E0h+var_4B0]
/*140797b6a*/  call sub_14149C0F0
/*140797b6f*/  mov rdx, [rbp+10E0h+var_70]
/*140797b76*/  mov qword ptr [rdx], 0Ah
/*140797b7d*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*140797b85*/  movdqu xmmword ptr [rdx+8], xmm0
/*140797b8a*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140797b91*/  mov [rdx+18h], rax
loc_140797B95: /*140797b95*/ mov rax, rdx
loc_140797B98: /*140797b98*/ movaps xmm6, [rbp+10E0h+var_60]
/*140797b9f*/  movaps xmm7, [rbp+10E0h+var_50]
/*140797ba6*/  add rsp, 1128h
/*140797bad*/  pop rbx
/*140797bae*/  pop rdi
/*140797baf*/  pop rsi
/*140797bb0*/  pop r12
/*140797bb2*/  pop r13
/*140797bb4*/  pop r14
/*140797bb6*/  pop r15
/*140797bb8*/  pop rbp
/*140797bb9*/  retn
loc_140797BBA: /*140797bba*/ movdqu xmm0, xmmword ptr [r14]; jumptable 00000001407972DC case 23
/*140797bbf*/  movdqu xmm1, xmmword ptr [r14+7]
/*140797bc5*/  pcmpeqb xmm1, cs:xmmword_141786610
/*140797bcd*/  pcmpeqb xmm0, cs:xmmword_141786620
/*140797bd5*/  pand xmm0, xmm1
/*140797bd9*/  pmovmskb eax, xmm0
/*140797bdd*/  cmp eax, 0FFFFh
/*140797be2*/  jz loc_1407980E5
/*140797be8*/  movdqu xmm0, xmmword ptr [r14]
/*140797bed*/  movdqu xmm1, xmmword ptr [r14+7]
/*140797bf3*/  pcmpeqb xmm1, cs:xmmword_141786630
/*140797bfb*/  pcmpeqb xmm0, cs:xmmword_141786640
/*140797c03*/  pand xmm0, xmm1
/*140797c07*/  pmovmskb eax, xmm0
/*140797c0b*/  cmp eax, 0FFFFh
/*140797c10*/  jz loc_14079810B
/*140797c16*/  movdqu xmm0, xmmword ptr [r14]
/*140797c1b*/  movdqu xmm1, xmmword ptr [r14+7]
/*140797c21*/  pcmpeqb xmm1, cs:xmmword_141786650
/*140797c29*/  pcmpeqb xmm0, cs:xmmword_141786660
/*140797c31*/  pand xmm0, xmm1
/*140797c35*/  pmovmskb eax, xmm0
/*140797c39*/  cmp eax, 0FFFFh
/*140797c3e*/  jz loc_1407982BD
/*140797c44*/  movdqu xmm0, xmmword ptr [r14]
/*140797c49*/  movdqu xmm1, xmmword ptr [r14+7]
/*140797c4f*/  pcmpeqb xmm1, cs:xmmword_141786670
/*140797c57*/  pcmpeqb xmm0, cs:xmmword_141786680
/*140797c5f*/  pand xmm0, xmm1
/*140797c63*/  pmovmskb eax, xmm0
/*140797c67*/  cmp eax, 0FFFFh
/*140797c6c*/  jnz def_1407972DC; jumptable 00000001407972DC default case, cases 13,15,16,25,29-31
/*140797c72*/  mov rsi, [rbp+10E0h+var_70]
/*140797c79*/  mov rcx, rsi
/*140797c7c*/  mov rdx, rdi
/*140797c7f*/  call fix_project_state_integrity
/*140797c84*/  mov rax, rsi
/*140797c87*/  jmp loc_140797B98
loc_140797C8C: /*140797c8c*/ mov rsi, [rbp+10E0h+var_70]
/*140797c93*/  mov rcx, rsi
/*140797c96*/  mov rdx, rdi
/*140797c99*/  mov r8, rbx
/*140797c9c*/  call __u7b__u7b_closure_u7d__u7d__13
/*140797ca1*/  mov rax, rsi
/*140797ca4*/  jmp loc_140797B98
loc_140797CA9: /*140797ca9*/ mov rax, [rcx+28h]
/*140797cad*/  mov rsi, [rbp+10E0h+var_70]
/*140797cb4*/  mov rcx, rsi
/*140797cb7*/  mov rdx, rdi
/*140797cba*/  mov r8, r9
/*140797cbd*/  mov r9, rax
/*140797cc0*/  call sub_140764B20
/*140797cc5*/  mov rax, rsi
/*140797cc8*/  jmp loc_140797B98
loc_140797CCD: /*140797ccd*/ mov rdx, [rdi+308h]
/*140797cd4*/  mov r8, [rdi+310h]
/*140797cdb*/  mov [rsp+1160h+var_1140], 18h
/*140797ce4*/  lea r9, unk_14178BDE1
/*140797ceb*/  lea rcx, [rbp+10E0h+var_1F0]
/*140797cf2*/  call sub_141473FA0
/*140797cf7*/  mov rdx, qword ptr [rbp+10E0h+var_1F0+8]
/*140797cfe*/  mov rbx, qword ptr [rbp+10E0h+var_1E0]
loc_140797D05: /*140797d05*/ mov [rsp+1160h+var_1140], 0Ch
/*140797d0e*/  lea r9, unk_14178C424
/*140797d15*/  mov rcx, rbp
/*140797d18*/  mov [rbp+10E0h+var_78], rdx
/*140797d1f*/  mov r8, rbx
/*140797d22*/  call sub_141473FA0
/*140797d27*/  nop
/*140797d28*/  mov rdx, qword ptr [rbp+10E0h+var_10E0+8]
/*140797d2c*/  mov rdi, qword ptr [rbp+10E0h+var_10D0]
loc_140797D30: /*140797d30*/ lea rcx, [rbp+10E0h+var_E70]
/*140797d37*/  mov [rbp+10E0h+var_88], rdx
/*140797d3e*/  mov r8, rdi
/*140797d41*/  call sub_141486710
/*140797d46*/  nop
/*140797d47*/  cmp dword ptr [rbp+10E0h+var_E70], 2
/*140797d4e*/  jnz loc_14079824A
/*140797d54*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*140797d5b*/  call sub_1401DD260
/*140797d60*/  nop
loc_140797D61: /*140797d61*/ call nullsub_1
/*140797d66*/  mov ecx, 18h
/*140797d6b*/  mov edx, 8
/*140797d70*/  call sub_140001650
/*140797d75*/  test rax, rax
/*140797d78*/  jz loc_14079C93E
/*140797d7e*/  mov rsi, rax
/*140797d81*/  call nullsub_1
/*140797d86*/  mov ecx, 11h
/*140797d8b*/  mov edx, 1
/*140797d90*/  call sub_140001650
/*140797d95*/  test rax, rax
/*140797d98*/  jz loc_14079CCAE
/*140797d9e*/  movdqu xmm0, xmmword ptr cs:aResidualManife; "residual_manifest"
/*140797da6*/  movdqu xmmword ptr [rax], xmm0
/*140797daa*/  mov byte ptr [rax+10h], 74h ; 't'
/*140797dae*/  mov qword ptr [rsi], 11h
/*140797db5*/  mov [rsi+8], rax
/*140797db9*/  mov qword ptr [rsi+10h], 11h
/*140797dc1*/  mov qword ptr [rbp+10E0h+var_720], 1
/*140797dcc*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*140797dd3*/  mov qword ptr [rbp+10E0h+var_710], 1
/*140797dde*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*140797de9*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*140797df4*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*140797dff*/  call nullsub_1
/*140797e04*/  mov ecx, 18h
/*140797e09*/  mov edx, 8
/*140797e0e*/  call sub_140001650
/*140797e13*/  test rax, rax
/*140797e16*/  jz loc_14079C968
/*140797e1c*/  mov rsi, rax
/*140797e1f*/  call nullsub_1
/*140797e24*/  mov ecx, 21h ; '!'
/*140797e29*/  mov edx, 1
/*140797e2e*/  call sub_140001650
/*140797e33*/  test rax, rax
/*140797e36*/  jz loc_14079CCE6
/*140797e3c*/  movups xmm0, cs:xmmword_14178C451
/*140797e43*/  movups xmmword ptr [rax+10h], xmm0
/*140797e47*/  movups xmm0, cs:xmmword_14178C441
/*140797e4e*/  movups xmmword ptr [rax], xmm0
/*140797e51*/  mov byte ptr [rax+20h], 86h
/*140797e55*/  mov qword ptr [rsi], 21h ; '!'
/*140797e5c*/  mov [rsi+8], rax
/*140797e60*/  mov qword ptr [rsi+10h], 21h ; '!'
/*140797e68*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*140797e6f*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*140797e76*/  movdqu xmm0, [rbp+10E0h+var_720]
/*140797e7e*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140797e86*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*140797e8d*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140797e94*/  movdqu xmm1, [rbp+10E0h+var_4B0]
/*140797e9c*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140797ea4*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*140797eab*/  mov rcx, [rbp+10E0h+var_70]
/*140797eb2*/  mov [rcx+28h], rax
/*140797eb6*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*140797ebd*/  mov [rcx+30h], rax
/*140797ec1*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140797ec8*/  mov [rcx+18h], rax
/*140797ecc*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*140797ed3*/  mov [rcx+20h], rax
/*140797ed7*/  movdqu xmmword ptr [rcx+8], xmm0
/*140797edc*/  mov qword ptr [rcx+38h], 1
/*140797ee4*/  mov [rcx+40h], rsi
/*140797ee8*/  mov qword ptr [rcx+48h], 1
/*140797ef0*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*140797ef7*/  jmp loc_140799FBC
loc_140797EFC: /*140797efc*/ mov rsi, [rbp+10E0h+var_70]
/*140797f03*/  mov rcx, rsi
/*140797f06*/  mov rdx, rdi
/*140797f09*/  call sub_140762620
/*140797f0e*/  mov rax, rsi
/*140797f11*/  jmp loc_140797B98
loc_140797F16: /*140797f16*/ movzx r8d, byte ptr [rbx+124h]
/*140797f1e*/  mov rsi, [rbp+10E0h+var_70]
/*140797f25*/  mov rcx, rsi
/*140797f28*/  mov rdx, rdi
/*140797f2b*/  call fix_takeover_backup_orphan
/*140797f30*/  mov rax, rsi
/*140797f33*/  jmp loc_140797B98
loc_140797F38: /*140797f38*/ lea rcx, [rbp+10E0h+var_E70]
/*140797f3f*/  mov rdx, rdi
/*140797f42*/  call sub_140712830
/*140797f47*/  cmp qword ptr [rbp+10E0h+var_E60], 0
/*140797f4f*/  jz loc_14079840C
loc_140797F55: /*140797f55*/ lea rcx, [rbp+10E0h+var_E70]
/*140797f5c*/  call sub_140334B70
/*140797f61*/  nop
loc_140797F62: /*140797f62*/ mov rdx, qword ptr [rbp+10E0h+var_E70]
/*140797f69*/  test rdx, rdx
/*140797f6c*/  jz short loc_140797F84
/*140797f6e*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*140797f75*/  shl rdx, 5
/*140797f79*/  mov r8d, 8
/*140797f7f*/  call sub_140001660
loc_140797F84: /*140797f84*/ mov r14, [rbx+8]
/*140797f88*/  imul r15, [rbx+10h], 0E8h
/*140797f90*/  add r15, r14
/*140797f93*/  lea rcx, off_141786738
/*140797f9a*/  call sub_1407BF4A0
/*140797f9f*/  movups xmm6, xmmword ptr cs:off_141786750
/*140797fa6*/  movaps [rbp+10E0h+var_E70], xmm6
/*140797fad*/  movups xmm7, xmmword ptr cs:off_141786750+10h
/*140797fb4*/  movaps [rbp+10E0h+var_E60], xmm7
/*140797fbb*/  mov qword ptr [rbp+10E0h+var_E50], rax
/*140797fc2*/  mov qword ptr [rbp+10E0h+var_E50+8], rdx
loc_140797FC9: /*140797fc9*/ lea rcx, [rbp+10E0h+var_E70]
/*140797fd0*/  mov rdx, r14
/*140797fd3*/  mov r8, r15
/*140797fd6*/  call sub_140999720
/*140797fdb*/  nop
/*140797fdc*/  movdqa xmm0, [rbp+10E0h+var_E70]
/*140797fe4*/  movdqa xmm1, [rbp+10E0h+var_E60]
/*140797fec*/  movaps xmm2, [rbp+10E0h+var_E50]
/*140797ff3*/  movaps [rbp+10E0h+var_110], xmm2
/*140797ffa*/  movdqa [rbp+10E0h+var_120], xmm1
/*140798002*/  movdqa [rbp+10E0h+var_130], xmm0
/*14079800a*/  mov bl, [rbx+124h]
/*140798010*/  mov rdx, [rdi+48h]
/*140798014*/  mov r8, [rdi+50h]
loc_140798018: /*140798018*/ mov byte ptr [rsp+1160h+var_1140], bl
/*14079801c*/  lea r14, [rbp+10E0h+var_1F0]
/*140798023*/  lea r9, [rbp+10E0h+var_130]
/*14079802a*/  mov rcx, r14
/*14079802d*/  call sub_1407883E0
/*140798032*/  nop
loc_140798033: /*140798033*/ lea rcx, [rbp+10E0h+var_E70]
/*14079803a*/  mov rdx, rdi
/*14079803d*/  call collect_diagnostic_main_threads
/*140798042*/  nop
/*140798043*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079804a*/  movups xmm0, [rbp+10E0h+var_E70+8]
/*140798051*/  movaps [rbp+10E0h+var_4B0], xmm0
/*140798058*/  mov rcx, qword ptr [rbp+10E0h+var_E60+8]
/*14079805f*/  mov qword ptr [rbp+10E0h+var_4A0], rcx
/*140798066*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14079806a*/  jz loc_140798EDD
/*140798070*/  movups xmm0, [rbp+10E0h+var_E50]
/*140798077*/  movdqu xmm1, [rbp+10E0h+var_E40]
/*14079807f*/  movups xmm2, [rbp+10E0h+var_E30]
/*140798086*/  movups xmm3, [rbp+10E0h+var_E20]
/*14079808d*/  mov rdx, [rbp+10E0h+var_70]
/*140798094*/  movups xmmword ptr [rdx+50h], xmm3
/*140798098*/  movups xmmword ptr [rdx+40h], xmm2
/*14079809c*/  movdqu xmmword ptr [rdx+30h], xmm1
/*1407980a1*/  movups xmmword ptr [rdx+20h], xmm0
/*1407980a5*/  mov rcx, qword ptr [rbp+10E0h+var_4A0]
/*1407980ac*/  mov [rdx+18h], rcx
/*1407980b0*/  movdqa xmm0, [rbp+10E0h+var_4B0]
/*1407980b8*/  movdqu xmmword ptr [rdx+8], xmm0
/*1407980bd*/  mov [rdx], rax
loc_1407980C0: /*1407980c0*/ lea rcx, [rbp+10E0h+var_1F0]
/*1407980c7*/  call sub_14067FFB0
/*1407980cc*/  nop
loc_1407980CD: /*1407980cd*/ lea rcx, [rbp+10E0h+var_130]
/*1407980d4*/  call sub_14067FFB0
/*1407980d9*/  mov rdx, [rbp+10E0h+var_70]
/*1407980e0*/  jmp loc_140797B95
loc_1407980E5: /*1407980e5*/ mov rax, [rcx+28h]
/*1407980e9*/  mov [rsp+1160h+var_1140], rax
/*1407980ee*/  mov rsi, [rbp+10E0h+var_70]
/*1407980f5*/  mov rcx, rsi
/*1407980f8*/  mov rdx, rdi
/*1407980fb*/  mov r8, rbx
/*1407980fe*/  call sub_14077E260
/*140798103*/  mov rax, rsi
/*140798106*/  jmp loc_140797B98
loc_14079810B: /*14079810b*/ mov rsi, [rbp+10E0h+var_70]
/*140798112*/  mov rcx, rsi
/*140798115*/  mov rdx, rdi
/*140798118*/  call sub_140783940
/*14079811d*/  mov rax, rsi
/*140798120*/  jmp loc_140797B98
loc_140798125: /*140798125*/ call nullsub_1
/*14079812a*/  mov ecx, 18h
/*14079812f*/  mov edx, 8
/*140798134*/  call sub_140001650
/*140798139*/  test rax, rax
/*14079813c*/  jz loc_14079C92D
/*140798142*/  mov rsi, rax
/*140798145*/  call nullsub_1
/*14079814a*/  mov ecx, 20h ; ' '
/*14079814f*/  mov edx, 1
/*140798154*/  call sub_140001650
/*140798159*/  test rax, rax
/*14079815c*/  jz loc_14079CC92
/*140798162*/  movups xmm0, cs:xmmword_14178D8D7
/*140798169*/  movups xmmword ptr [rax+10h], xmm0
/*14079816d*/  movdqu xmm0, cs:xmmword_14178D8C7
/*140798175*/  movdqu xmmword ptr [rax], xmm0
/*140798179*/  mov qword ptr [rsi], 20h ; ' '
/*140798180*/  mov [rsi+8], rax
/*140798184*/  mov qword ptr [rsi+10h], 20h ; ' '
/*14079818c*/  mov qword ptr [rbp+10E0h+var_720], 1
/*140798197*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*14079819e*/  mov qword ptr [rbp+10E0h+var_710], 1
/*1407981a9*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*1407981b4*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*1407981bf*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*1407981ca*/  call nullsub_1
/*1407981cf*/  mov ecx, 18h
/*1407981d4*/  mov edx, 8
/*1407981d9*/  call sub_140001650
/*1407981de*/  test rax, rax
/*1407981e1*/  jz loc_14079C953
/*1407981e7*/  mov rsi, rax
/*1407981ea*/  call nullsub_1
/*1407981ef*/  mov ecx, 3Ch ; '<'
/*1407981f4*/  mov edx, 1
/*1407981f9*/  call sub_140001650
/*1407981fe*/  test rax, rax
/*140798201*/  jz loc_14079CCCA
/*140798207*/  movups xmm0, cs:xmmword_14178F7E1+0Ch
/*14079820e*/  movups xmmword ptr [rax+2Ch], xmm0
/*140798212*/  movups xmm0, cs:xmmword_14178F7E1
/*140798219*/  movups xmmword ptr [rax+20h], xmm0
/*14079821d*/  movups xmm0, cs:xmmword_14178F7D1
/*140798224*/  movups xmmword ptr [rax+10h], xmm0
/*140798228*/  movups xmm0, cs:xmmword_14178F7C1
/*14079822f*/  movups xmmword ptr [rax], xmm0
/*140798232*/  mov qword ptr [rsi], 3Ch ; '<'
/*140798239*/  mov [rsi+8], rax
/*14079823d*/  mov qword ptr [rsi+10h], 3Ch ; '<'
/*140798245*/  jmp loc_14079854C
loc_14079824A: /*14079824a*/ mov [rsp+1160h+var_1140], 7
/*140798253*/  lea r9, aHistory; "history"
/*14079825a*/  lea rcx, [rbp+10E0h+var_720]
/*140798261*/  mov rdx, [rbp+10E0h+var_78]
/*140798268*/  mov r8, rbx
/*14079826b*/  call sub_141473FA0
/*140798270*/  nop
/*140798271*/  mov byte ptr [rbp+10E0h+var_E70], 1
/*140798278*/  mov rdx, qword ptr [rbp+10E0h+var_720+8]
/*14079827f*/  mov rbx, qword ptr [rbp+10E0h+var_710]
loc_140798286: /*140798286*/ lea rcx, [rbp+10E0h+var_E70]
/*14079828d*/  mov qword ptr [rbp+10E0h+var_A0], rdx
/*140798294*/  mov r8, rbx
/*140798297*/  call sub_14147B9A0
/*14079829c*/  nop
loc_14079829D: /*14079829d*/ test rax, rax
/*1407982a0*/  jz loc_140799322
/*1407982a6*/  mov rcx, [rbp+10E0h+var_70]
/*1407982ad*/  mov qword ptr [rcx], 2
/*1407982b4*/  mov [rcx+8], rax
/*1407982b8*/  jmp loc_140799F9E
loc_1407982BD: /*1407982bd*/ movzx r8d, byte ptr [rbx+124h]
/*1407982c5*/  mov rsi, [rbp+10E0h+var_70]
/*1407982cc*/  mov rcx, rsi
/*1407982cf*/  mov rdx, rdi
/*1407982d2*/  call sub_140781D30
/*1407982d7*/  mov rax, rsi
/*1407982da*/  jmp loc_140797B98
loc_1407982DF: /*1407982df*/ lea rcx, [rbp+10E0h+var_E70]
/*1407982e6*/  call sub_140334B70
/*1407982eb*/  nop
/*1407982ec*/  mov rdx, qword ptr [rbp+10E0h+var_E70]
/*1407982f3*/  test rdx, rdx
/*1407982f6*/  jz short loc_14079830E
/*1407982f8*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*1407982ff*/  shl rdx, 5
/*140798303*/  mov r8d, 8
/*140798309*/  call sub_140001660
loc_14079830E: /*14079830e*/ call nullsub_1
/*140798313*/  mov ecx, 18h
/*140798318*/  mov edx, 8
/*14079831d*/  call sub_140001650
/*140798322*/  test rax, rax
/*140798325*/  jz loc_14079C92D
/*14079832b*/  mov rsi, rax
/*14079832e*/  call nullsub_1
/*140798333*/  mov ecx, 1Ch
/*140798338*/  mov edx, 1
/*14079833d*/  call sub_140001650
/*140798342*/  test rax, rax
/*140798345*/  jz loc_14079CD3A
/*14079834b*/  movups xmm0, cs:xmmword_14178D8E7+0Ch
/*140798352*/  movups xmmword ptr [rax+0Ch], xmm0
/*140798356*/  movdqu xmm0, cs:xmmword_14178D8E7
/*14079835e*/  movdqu xmmword ptr [rax], xmm0
/*140798362*/  mov qword ptr [rsi], 1Ch
/*140798369*/  mov [rsi+8], rax
/*14079836d*/  mov qword ptr [rsi+10h], 1Ch
/*140798375*/  mov qword ptr [rbp+10E0h+var_720], 1
/*140798380*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*140798387*/  mov qword ptr [rbp+10E0h+var_710], 1
/*140798392*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*14079839d*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*1407983a8*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*1407983b3*/  call nullsub_1
/*1407983b8*/  mov ecx, 18h
/*1407983bd*/  mov edx, 8
/*1407983c2*/  call sub_140001650
/*1407983c7*/  test rax, rax
/*1407983ca*/  jz loc_14079C9A7
/*1407983d0*/  mov rsi, rax
/*1407983d3*/  call nullsub_1
/*1407983d8*/  mov ecx, 21h ; '!'
/*1407983dd*/  mov edx, 1
/*1407983e2*/  call sub_140001650
/*1407983e7*/  test rax, rax
/*1407983ea*/  jnz loc_140798520
loc_1407983F0: /*1407983f0*/ mov [rbp+10E0h+var_70], rsi
/*1407983f7*/  mov ecx, 1
/*1407983fc*/  mov edx, 21h ; '!'
/*140798401*/  call sub_1416C2D4B
/*140798407*/  jmp loc_14079CF99
loc_14079840C: /*14079840c*/ lea rcx, [rbp+10E0h+var_E70]
/*140798413*/  call sub_140334B70
/*140798418*/  nop
/*140798419*/  mov rdx, qword ptr [rbp+10E0h+var_E70]
/*140798420*/  test rdx, rdx
/*140798423*/  jz short loc_14079843B
/*140798425*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*14079842c*/  shl rdx, 5
/*140798430*/  mov r8d, 8
/*140798436*/  call sub_140001660
loc_14079843B: /*14079843b*/ call nullsub_1
/*140798440*/  mov ecx, 18h
/*140798445*/  mov edx, 8
/*14079844a*/  call sub_140001650
/*14079844f*/  test rax, rax
/*140798452*/  jz loc_14079C92D
/*140798458*/  mov rsi, rax
/*14079845b*/  call nullsub_1
/*140798460*/  mov ecx, 18h
/*140798465*/  mov edx, 1
/*14079846a*/  call sub_140001650
/*14079846f*/  test rax, rax
/*140798472*/  jz loc_14079CD56
/*140798478*/  movdqu xmm0, xmmword ptr cs:aRolloutOrphanP; "rollout_orphan_providers"
/*140798480*/  movdqu xmmword ptr [rax], xmm0
/*140798484*/  mov rcx, 7372656469766F72h
/*14079848e*/  mov [rax+10h], rcx
/*140798492*/  mov qword ptr [rsi], 18h
/*140798499*/  mov [rsi+8], rax
/*14079849d*/  mov qword ptr [rsi+10h], 18h
/*1407984a5*/  mov qword ptr [rbp+10E0h+var_720], 1
/*1407984b0*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*1407984b7*/  mov qword ptr [rbp+10E0h+var_710], 1
/*1407984c2*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*1407984cd*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*1407984d8*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*1407984e3*/  call nullsub_1
/*1407984e8*/  mov ecx, 18h
/*1407984ed*/  mov edx, 8
/*1407984f2*/  call sub_140001650
/*1407984f7*/  test rax, rax
/*1407984fa*/  jz loc_14079C9BC
/*140798500*/  mov rsi, rax
/*140798503*/  call nullsub_1
/*140798508*/  mov ecx, 21h ; '!'
/*14079850d*/  mov edx, 1
/*140798512*/  call sub_140001650
/*140798517*/  test rax, rax
/*14079851a*/  jz loc_14079CD72
loc_140798520: /*140798520*/ movups xmm0, cs:xmmword_14178CD9E
/*140798527*/  movups xmmword ptr [rax+10h], xmm0
/*14079852b*/  movups xmm0, cs:xmmword_14178CD8E
/*140798532*/  movups xmmword ptr [rax], xmm0
/*140798535*/  mov byte ptr [rax+20h], 8Dh
/*140798539*/  mov qword ptr [rsi], 21h ; '!'
/*140798540*/  mov [rsi+8], rax
/*140798544*/  mov qword ptr [rsi+10h], 21h ; '!'
loc_14079854C: /*14079854c*/ mov rax, qword ptr [rbp+10E0h+var_710]
/*140798553*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079855a*/  movdqu xmm0, [rbp+10E0h+var_720]
/*140798562*/  movdqa [rbp+10E0h+var_E70], xmm0
/*14079856a*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*140798571*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140798578*/  movdqu xmm1, [rbp+10E0h+var_4B0]
/*140798580*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140798588*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079858f*/  mov rdx, [rbp+10E0h+var_70]
/*140798596*/  mov [rdx+28h], rax
/*14079859a*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*1407985a1*/  mov [rdx+30h], rax
/*1407985a5*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*1407985ac*/  mov [rdx+18h], rax
/*1407985b0*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*1407985b7*/  mov [rdx+20h], rax
/*1407985bb*/  movdqu xmmword ptr [rdx+8], xmm0
/*1407985c0*/  mov qword ptr [rdx+38h], 1
/*1407985c8*/  mov [rdx+40h], rsi
/*1407985cc*/  mov qword ptr [rdx+48h], 1
/*1407985d4*/  mov qword ptr [rdx], 0FFFFFFFFFFFFFFFFh
/*1407985db*/  jmp loc_140797B95
loc_1407985E0: /*1407985e0*/ mov rcx, [rbp+10E0h+var_78]
/*1407985e7*/  mov rdx, rdi
/*1407985ea*/  call sub_141485EF0
/*1407985ef*/  nop
/*1407985f0*/  test rax, rax
/*1407985f3*/  jz short loc_14079860C
/*1407985f5*/  mov rcx, [rbp+10E0h+var_70]
/*1407985fc*/  mov qword ptr [rcx], 2
/*140798603*/  mov [rcx+8], rax
/*140798607*/  jmp loc_140798786
loc_14079860C: /*14079860c*/ call nullsub_1
/*140798611*/  mov ecx, 18h
/*140798616*/  mov edx, 8
/*14079861b*/  call sub_140001650
/*140798620*/  test rax, rax
/*140798623*/  jz loc_14079C97D
/*140798629*/  mov rsi, rax
/*14079862c*/  call nullsub_1
/*140798631*/  mov ecx, 0Eh
/*140798636*/  mov edx, 1
/*14079863b*/  call sub_140001650
/*140798640*/  test rax, rax
/*140798643*/  jz loc_14079CD02
/*140798649*/  mov [rax+6], r15
/*14079864d*/  mov [rax], rbx
/*140798650*/  mov qword ptr [rsi], 0Eh
/*140798657*/  mov [rsi+8], rax
/*14079865b*/  mov qword ptr [rsi+10h], 0Eh
/*140798663*/  mov qword ptr [rbp+10E0h+var_10E0], 1
/*14079866b*/  mov qword ptr [rbp+10E0h+var_10E0+8], rsi
/*14079866f*/  mov qword ptr [rbp+10E0h+var_10D0], 1
/*140798677*/  mov qword ptr [rbp+10E0h+var_720], 0
/*140798682*/  mov qword ptr [rbp+10E0h+var_720+8], 8
/*14079868d*/  mov qword ptr [rbp+10E0h+var_710], 0
/*140798698*/  call nullsub_1
/*14079869d*/  mov ecx, 18h
/*1407986a2*/  mov edx, 8
/*1407986a7*/  call sub_140001650
/*1407986ac*/  test rax, rax
/*1407986af*/  jz loc_14079C992
/*1407986b5*/  mov rsi, rax
/*1407986b8*/  call nullsub_1
/*1407986bd*/  mov ecx, 1Bh
/*1407986c2*/  mov edx, 1
/*1407986c7*/  call sub_140001650
/*1407986cc*/  test rax, rax
/*1407986cf*/  jz loc_14079CD1E
/*1407986d5*/  movups xmm0, cs:xmmword_14178BE1D+0Bh
/*1407986dc*/  movups xmmword ptr [rax+0Bh], xmm0
/*1407986e0*/  movups xmm0, cs:xmmword_14178BE1D
/*1407986e7*/  movups xmmword ptr [rax], xmm0
/*1407986ea*/  mov qword ptr [rsi], 1Bh
/*1407986f1*/  mov [rsi+8], rax
/*1407986f5*/  mov qword ptr [rsi+10h], 1Bh
/*1407986fd*/  mov rax, qword ptr [rbp+10E0h+var_10D0]
/*140798701*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*140798708*/  movdqu xmm0, [rbp+10E0h+var_10E0]
/*14079870d*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140798715*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*14079871c*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140798723*/  movdqu xmm1, [rbp+10E0h+var_720]
/*14079872b*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140798733*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079873a*/  mov rcx, [rbp+10E0h+var_70]
/*140798741*/  mov [rcx+28h], rax
/*140798745*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*14079874c*/  mov [rcx+30h], rax
/*140798750*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140798757*/  mov [rcx+18h], rax
/*14079875b*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*140798762*/  mov [rcx+20h], rax
/*140798766*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079876b*/  mov qword ptr [rcx+38h], 1
/*140798773*/  mov [rcx+40h], rsi
/*140798777*/  mov qword ptr [rcx+48h], 1
/*14079877f*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_140798786: /*140798786*/ mov rdx, qword ptr [rbp+10E0h+var_4B0]
/*14079878d*/  test rdx, rdx
/*140798790*/  jnz loc_140799FE3
/*140798796*/  jmp loc_140799FF5
loc_14079879B: /*14079879b*/ lea rcx, [rbp+10E0h+var_E70]
/*1407987a2*/  call sub_140334760
/*1407987a7*/  nop
/*1407987a8*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*1407987af*/  test rax, rax
/*1407987b2*/  jz short loc_1407987CE
/*1407987b4*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*1407987bb*/  shl rax, 3
/*1407987bf*/  lea rdx, [rax+rax*2]
/*1407987c3*/  mov r8d, 8
/*1407987c9*/  call sub_140001660
loc_1407987CE: /*1407987ce*/ lea rcx, [rbp+10E0h+var_E60+8]
loc_1407987D5: /*1407987d5*/ call sub_140334760
/*1407987da*/  nop
loc_1407987DB: /*1407987db*/ mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*1407987e2*/  test rax, rax
/*1407987e5*/  jz short loc_140798801
/*1407987e7*/  mov rcx, qword ptr [rbp+10E0h+var_E50]
/*1407987ee*/  shl rax, 3
/*1407987f2*/  lea rdx, [rax+rax*2]
/*1407987f6*/  mov r8d, 8
/*1407987fc*/  call sub_140001660
loc_140798801: /*140798801*/ lea rcx, [rbp+10E0h+var_E70]
/*140798808*/  mov rdx, rbx
/*14079880b*/  call r14
/*14079880e*/  cmp dword ptr [rbp+10E0h+var_E70], 0FFFFFFFFh
/*140798815*/  jz loc_140799477
/*14079881b*/  movups xmm0, [rbp+10E0h+var_E20]
/*140798822*/  mov rdx, [rbp+10E0h+var_70]
/*140798829*/  movups xmmword ptr [rdx+50h], xmm0
/*14079882d*/  movups xmm0, [rbp+10E0h+var_E30]
/*140798834*/  movups xmmword ptr [rdx+40h], xmm0
/*140798838*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*140798840*/  movdqu xmm1, [rbp+10E0h+var_E60]
/*140798848*/  movups xmm2, [rbp+10E0h+var_E50]
/*14079884f*/  movups xmm3, [rbp+10E0h+var_E40]
/*140798856*/  movups xmmword ptr [rdx+30h], xmm3
/*14079885a*/  movups xmmword ptr [rdx+20h], xmm2
/*14079885e*/  movdqu xmmword ptr [rdx+10h], xmm1
/*140798863*/  movdqu xmmword ptr [rdx], xmm0
/*140798867*/  jmp loc_140797B95
loc_14079886C: /*14079886c*/ lea rcx, [rbp+10E0h+var_1F0]
/*140798873*/  mov rdx, [rbp+10E0h+var_A8]
/*14079887a*/  mov r8, [rbp+10E0h+var_B8]
/*140798881*/  call sub_140713CC0
/*140798886*/  nop
loc_140798887: /*140798887*/ mov rcx, qword ptr [rbp+10E0h+var_1F0+8]
/*14079888e*/  mov rdx, qword ptr [rbp+10E0h+var_1E0]
/*140798895*/  mov r8, qword ptr [rbp+10E0h+var_190+8]
/*14079889c*/  mov rbx, [rbp+10E0h+var_180]
loc_1407988A3: /*1407988a3*/ mov [rbp+10E0h+var_C8], rcx
/*1407988aa*/  mov [rbp+10E0h+var_90], r8
/*1407988b1*/  mov r9, rbx
/*1407988b4*/  call sub_1414734E0
/*1407988b9*/  nop
/*1407988ba*/  test al, al
/*1407988bc*/  jz loc_140798C32
/*1407988c2*/  mov rax, qword ptr [rbp+10E0h+var_130]
/*1407988c9*/  mov [rbp+10E0h+var_1B8], rax
/*1407988d0*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1407988d4*/  jz loc_1407990ED
/*1407988da*/  mov rdx, qword ptr [rbp+10E0h+var_130+8]
/*1407988e1*/  mov r8, qword ptr [rbp+10E0h+var_120]
/*1407988e8*/  lea rcx, [rbp+10E0h+var_720]
/*1407988ef*/  mov [rbp+10E0h+var_728], rdx
/*1407988f6*/  call sub_141473290
/*1407988fb*/  nop
/*1407988fc*/  lea rcx, [rbp+10E0h+var_4B0]
/*140798903*/  mov rdx, [rbp+10E0h+var_90]
/*14079890a*/  mov r8, rbx
/*14079890d*/  call sub_141473290
/*140798912*/  nop
/*140798913*/  mov r8, qword ptr [rbp+10E0h+var_720+8]
/*14079891a*/  cmp r8, qword ptr [rbp+10E0h+var_4B0+8]
/*140798921*/  jnz short loc_140798973
/*140798923*/  movzx eax, byte ptr [rbp+10E0h+var_6F0+8]
/*14079892a*/  cmp al, byte ptr [rbp+10E0h+var_480+8]
/*140798930*/  jnz short loc_140798973
/*140798932*/  cmp byte ptr [rbp+10E0h+var_6F0+9], 2
/*140798939*/  jnz short loc_140798973
/*14079893b*/  cmp byte ptr [rbp+10E0h+var_480+9], 2
/*140798942*/  jnz short loc_140798973
/*140798944*/  cmp byte ptr [rbp+10E0h+var_710], 3
/*14079894b*/  setb al
/*14079894e*/  cmp byte ptr [rbp+10E0h+var_4A0], 3
/*140798955*/  setb cl
/*140798958*/  xor cl, al
/*14079895a*/  jnz short loc_140798973
/*14079895c*/  mov rcx, qword ptr [rbp+10E0h+var_720]
/*140798963*/  mov rdx, qword ptr [rbp+10E0h+var_4B0]
/*14079896a*/  call sub_1416847B0
/*14079896f*/  test eax, eax
/*140798971*/  jz short loc_1407989CB
loc_140798973: /*140798973*/ movdqu xmm0, [rbp+10E0h+var_4B0]
/*14079897b*/  movdqu xmm1, [rbp+10E0h+var_4A0]
/*140798983*/  movups xmm2, [rbp+10E0h+var_490]
/*14079898a*/  movups xmm3, [rbp+10E0h+var_480]
/*140798991*/  movaps [rbp+10E0h+var_E40], xmm3
/*140798998*/  movaps [rbp+10E0h+var_E50], xmm2
/*14079899f*/  movdqa [rbp+10E0h+var_E60], xmm1
/*1407989a7*/  movdqa [rbp+10E0h+var_E70], xmm0
/*1407989af*/  lea rcx, [rbp+10E0h+var_720]
/*1407989b6*/  lea rdx, [rbp+10E0h+var_E70]
/*1407989bd*/  call sub_140467AB0
/*1407989c2*/  nop
/*1407989c3*/  test al, al
/*1407989c5*/  jz loc_1407990ED
loc_1407989CB: /*1407989cb*/ lea rcx, [rbp+10E0h+var_208]
/*1407989d2*/  mov rdx, [rbp+10E0h+var_A8]
/*1407989d9*/  mov r8, [rbp+10E0h+var_B8]
/*1407989e0*/  call sub_1407635A0
/*1407989e5*/  nop
/*1407989e6*/  mov rax, [rbp+10E0h+var_1F8]
/*1407989ed*/  test rax, rax
/*1407989f0*/  jz loc_14079A001
/*1407989f6*/  mov rsi, rax
/*1407989f9*/  mov rdx, [rdi+308h]
/*140798a00*/  mov r8, [rdi+310h]
loc_140798A07: /*140798a07*/ mov [rsp+1160h+var_1140], 10h
/*140798a10*/  lea r9, unk_14178CF90
/*140798a17*/  mov rcx, rbp
/*140798a1a*/  call sub_141473FA0
/*140798a1f*/  nop
/*140798a20*/  mov byte ptr [rbp+10E0h+var_E70], 1
/*140798a27*/  mov rdx, qword ptr [rbp+10E0h+var_10E0+8]
/*140798a2b*/  mov r8, qword ptr [rbp+10E0h+var_10D0]
loc_140798A2F: /*140798a2f*/ lea rcx, [rbp+10E0h+var_E70]
/*140798a36*/  mov [rbp+10E0h+var_C0], rdx
/*140798a3d*/  mov [rbp+10E0h+var_228], r8
/*140798a44*/  call sub_14147B9A0
/*140798a49*/  nop
/*140798a4a*/  test rax, rax
/*140798a4d*/  jz loc_14079A366
/*140798a53*/  mov qword ptr [rbp+10E0h+var_158], rax
/*140798a5a*/  mov qword ptr [rbp+10E0h+var_100], 0
/*140798a65*/  mov qword ptr [rbp+10E0h+var_100+8], 8
/*140798a70*/  mov [rbp+10E0h+var_F0], 0
/*140798a7b*/  call nullsub_1
/*140798a80*/  mov ecx, 18h
/*140798a85*/  mov edx, 8
/*140798a8a*/  call sub_140001650
/*140798a8f*/  test rax, rax
/*140798a92*/  jz loc_14079CAE2
/*140798a98*/  mov rsi, rax
/*140798a9b*/  call nullsub_1
/*140798aa0*/  mov ecx, 13h
/*140798aa5*/  mov edx, 1
/*140798aaa*/  call sub_140001650
/*140798aaf*/  test rax, rax
/*140798ab2*/  jz loc_14079CE98
/*140798ab8*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*140798ac0*/  movdqu xmmword ptr [rax], xmm0
/*140798ac4*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*140798acb*/  mov qword ptr [rsi], 13h
/*140798ad2*/  mov [rsi+8], rax
/*140798ad6*/  mov qword ptr [rsi+10h], 13h
/*140798ade*/  mov qword ptr [rbp+10E0h+var_720], 1
/*140798ae9*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*140798af0*/  mov qword ptr [rbp+10E0h+var_710], 1
/*140798afb*/  call nullsub_1
/*140798b00*/  mov ecx, 18h
/*140798b05*/  mov edx, 8
/*140798b0a*/  call sub_140001650
/*140798b0f*/  mov [rbp+10E0h+var_78], rax
/*140798b16*/  test rax, rax
/*140798b19*/  jz loc_14079CAF7
/*140798b1f*/  lea rax, [rbp+10E0h+var_158]
/*140798b26*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*140798b2d*/  lea rax, sub_141490720
/*140798b34*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
loc_140798B3B: /*140798b3b*/ lea rdx, unk_14178CFA0
/*140798b42*/  lea rcx, [rbp+10E0h+var_4B0]
/*140798b49*/  lea r8, [rbp+10E0h+var_E70]
/*140798b50*/  call sub_14149C0F0
/*140798b55*/  nop
/*140798b56*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*140798b5d*/  mov rdx, [rbp+10E0h+var_78]
/*140798b64*/  mov [rdx+10h], rax
/*140798b68*/  movups xmm0, [rbp+10E0h+var_4B0]
/*140798b6f*/  movups xmmword ptr [rdx], xmm0
/*140798b72*/  movdqu xmm0, [rbp+10E0h+var_100]
/*140798b7a*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140798b82*/  mov rax, [rbp+10E0h+var_F0]
/*140798b89*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*140798b90*/  movdqu xmm1, [rbp+10E0h+var_720]
/*140798b98*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140798ba0*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*140798ba7*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140798bae*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*140798bb5*/  mov rcx, [rbp+10E0h+var_70]
/*140798bbc*/  mov [rcx+28h], rax
/*140798bc0*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*140798bc7*/  mov [rcx+30h], rax
/*140798bcb*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140798bd2*/  mov [rcx+18h], rax
/*140798bd6*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*140798bdd*/  mov [rcx+20h], rax
/*140798be1*/  movdqu xmmword ptr [rcx+8], xmm0
/*140798be6*/  mov qword ptr [rcx+38h], 1
/*140798bee*/  mov [rcx+40h], rdx
/*140798bf2*/  mov qword ptr [rcx+48h], 1
/*140798bfa*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*140798c01*/  mov rcx, qword ptr [rbp+10E0h+var_158]
loc_140798C08: /*140798c08*/ call sub_1401DD260
/*140798c0d*/  nop
/*140798c0e*/  mov rdx, qword ptr [rbp+10E0h+var_10E0]
/*140798c12*/  test rdx, rdx
/*140798c15*/  jz loc_14079A19C
/*140798c1b*/  mov r8d, 1
/*140798c21*/  mov rcx, [rbp+10E0h+var_C0]
/*140798c28*/  call sub_140001660
/*140798c2d*/  jmp loc_14079A19C
loc_140798C32: /*140798c32*/ call nullsub_1
/*140798c37*/  mov ecx, 18h
/*140798c3c*/  mov edx, 8
/*140798c41*/  call sub_140001650
/*140798c46*/  test rax, rax
/*140798c49*/  jz loc_14079C9D1
/*140798c4f*/  mov rsi, rax
/*140798c52*/  call nullsub_1
/*140798c57*/  mov ecx, 13h
/*140798c5c*/  mov edx, 1
/*140798c61*/  call sub_140001650
/*140798c66*/  test rax, rax
/*140798c69*/  jz loc_14079CD8E
/*140798c6f*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*140798c77*/  movdqu xmmword ptr [rax], xmm0
/*140798c7b*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*140798c82*/  mov qword ptr [rsi], 13h
/*140798c89*/  mov [rsi+8], rax
/*140798c8d*/  mov qword ptr [rsi+10h], 13h
/*140798c95*/  mov qword ptr [rbp+10E0h+var_720], 1
/*140798ca0*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*140798ca7*/  mov qword ptr [rbp+10E0h+var_710], 1
/*140798cb2*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*140798cbd*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*140798cc8*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*140798cd3*/  call nullsub_1
/*140798cd8*/  mov ecx, 18h
/*140798cdd*/  mov edx, 8
/*140798ce2*/  call sub_140001650
/*140798ce7*/  test rax, rax
/*140798cea*/  jz loc_14079C9E6
/*140798cf0*/  mov rsi, rax
/*140798cf3*/  call nullsub_1
/*140798cf8*/  mov ecx, 2Dh ; '-'
/*140798cfd*/  mov edx, 1
/*140798d02*/  call sub_140001650
/*140798d07*/  test rax, rax
/*140798d0a*/  jz loc_14079CDAA
/*140798d10*/  movups xmm0, cs:xmmword_14178CF73+0Dh
/*140798d17*/  movups xmmword ptr [rax+1Dh], xmm0
/*140798d1b*/  movups xmm0, cs:xmmword_14178CF73
/*140798d22*/  movups xmmword ptr [rax+10h], xmm0
/*140798d26*/  movups xmm0, cs:xmmword_14178CF63
/*140798d2d*/  movups xmmword ptr [rax], xmm0
/*140798d30*/  mov qword ptr [rsi], 2Dh ; '-'
/*140798d37*/  mov [rsi+8], rax
/*140798d3b*/  mov qword ptr [rsi+10h], 2Dh ; '-'
/*140798d43*/  jmp loc_14079922A
loc_140798D48: /*140798d48*/ movdqa xmm0, [rbp+10E0h+var_4B0]
/*140798d50*/  movdqa [rbp+10E0h+var_220], xmm0
/*140798d58*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*140798d5f*/  mov [rbp+10E0h+var_210], rax
loc_140798D66: /*140798d66*/ lea rcx, [rbp+10E0h+var_1F0]
/*140798d6d*/  mov rdx, rdi
/*140798d70*/  call sub_1404A69E0
/*140798d75*/  nop
/*140798d76*/  mov rsi, qword ptr [rbp+10E0h+var_1F0]
/*140798d7d*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*140798d81*/  jz loc_140799532
/*140798d87*/  mov rax, qword ptr [rbp+10E0h+var_1F0]
/*140798d8e*/  mov [rbp+10E0h+var_78], rax
/*140798d95*/  mov rax, qword ptr [rbp+10E0h+var_1F0+8]
/*140798d9c*/  mov [rbp+10E0h+var_88], rax
/*140798da3*/  mov qword ptr [rbp+10E0h+var_10E0], 0
/*140798dab*/  mov qword ptr [rbp+10E0h+var_10D0], 0
/*140798db3*/  call nullsub_1
/*140798db8*/  mov ecx, 4
/*140798dbd*/  mov edx, 1
/*140798dc2*/  call sub_140001650
/*140798dc7*/  test rax, rax
/*140798dca*/  jz loc_14079CE36
/*140798dd0*/  mov dword ptr [rax], 74786574h
/*140798dd6*/  mov qword ptr [rbp+10E0h+var_720], 4
/*140798de1*/  mov qword ptr [rbp+10E0h+var_720+8], rax
/*140798de8*/  mov qword ptr [rbp+10E0h+var_710], 4
/*140798df3*/  mov [rbp+10E0h+var_7B], 1
loc_140798DFA: /*140798dfa*/ lea rcx, [rbp+10E0h+var_E70]
/*140798e01*/  lea rdx, [rbp+10E0h+var_1F0]
/*140798e08*/  call sub_140B56520
/*140798e0d*/  nop
/*140798e0e*/  cmp byte ptr [rbp+10E0h+var_E70], 0FFh
/*140798e15*/  jz loc_14079CA3A
/*140798e1b*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*140798e23*/  movdqu xmm1, [rbp+10E0h+var_E60]
/*140798e2b*/  movdqa [rbp+10E0h+var_4A0], xmm1
/*140798e33*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*140798e3b*/  mov [rbp+10E0h+var_7B], 0
/*140798e42*/  lea rcx, [rbp+10E0h+var_E70]
/*140798e49*/  mov rdx, rbp
/*140798e4c*/  lea r8, [rbp+10E0h+var_720]
/*140798e53*/  lea r9, [rbp+10E0h+var_4B0]
/*140798e5a*/  call sub_140307860
/*140798e5f*/  nop
/*140798e60*/  cmp byte ptr [rbp+10E0h+var_E70], 0FFh
/*140798e67*/  jz short loc_140798E76
loc_140798E69: /*140798e69*/ lea rcx, [rbp+10E0h+var_E70]
/*140798e70*/  call sub_1400104F0
/*140798e75*/  nop
loc_140798E76: /*140798e76*/ movups xmm0, [rbp+10E0h+var_10E0]
/*140798e7a*/  mov rax, qword ptr [rbp+10E0h+var_10D0]
/*140798e7e*/  mov qword ptr [rbp+10E0h+var_E60+7], rax
/*140798e85*/  movups [rbp+10E0h+var_E70+7], xmm0
/*140798e8c*/  movups xmm0, [rbp+10E0h+var_E70]
/*140798e93*/  movaps [rbp+10E0h+var_4B0], xmm0
/*140798e9a*/  mov rax, qword ptr [rbp+10E0h+var_E70+0Fh]
/*140798ea1*/  mov qword ptr [rbp+10E0h+var_4B0+0Fh], rax
/*140798ea8*/  mov rax, qword ptr [rbp+10E0h+var_E60+7]
/*140798eaf*/  mov qword ptr [rbp+10E0h+var_4A0+7], rax
/*140798eb6*/  mov rdx, [rbp+10E0h+var_78]
/*140798ebd*/  test rdx, rdx
/*140798ec0*/  jz loc_140799645
/*140798ec6*/  mov r8d, 1
/*140798ecc*/  mov rcx, [rbp+10E0h+var_88]
/*140798ed3*/  call sub_140001660
/*140798ed8*/  jmp loc_140799645
loc_140798EDD: /*140798edd*/ movdqa xmm0, [rbp+10E0h+var_4B0]
/*140798ee5*/  movdqa [rbp+10E0h+var_E0], xmm0
/*140798eed*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*140798ef4*/  mov [rbp+10E0h+var_D0], rax
loc_140798EFB: /*140798efb*/ lea rcx, off_141786738
/*140798f02*/  call sub_1407BF4A0
/*140798f07*/  nop
/*140798f08*/  mov byte ptr [rbp+10E0h+var_A0], bl
/*140798f0e*/  movaps [rbp+10E0h+var_10D0], xmm7
/*140798f12*/  movaps [rbp+10E0h+var_10E0], xmm6
/*140798f16*/  mov [rbp+10E0h+var_10C0], rax
/*140798f1a*/  mov [rbp+10E0h+var_10B8], rdx
loc_140798F1E: /*140798f1e*/ lea rcx, off_141786738
/*140798f25*/  call sub_1407BF4A0
/*140798f2a*/  nop
loc_140798F2B: /*140798f2b*/ movaps [rbp+10E0h+var_710], xmm7
/*140798f32*/  movaps [rbp+10E0h+var_720], xmm6
/*140798f39*/  mov qword ptr [rbp+10E0h+var_700], rax
/*140798f40*/  mov qword ptr [rbp+10E0h+var_700+8], rdx
/*140798f47*/  mov rax, qword ptr [rbp+10E0h+var_E0+8]
/*140798f4e*/  imul rsi, [rbp+10E0h+var_D0], 70h ; 'p'
/*140798f56*/  add rsi, rax
/*140798f59*/  mov rbx, rbp
/*140798f5c*/  mov qword ptr [rbp+10E0h+var_A0+8], rax
/*140798f63*/  mov [rbp+10E0h+var_78], rax
loc_140798F6A: /*140798f6a*/ mov r13, [rbp+10E0h+var_78]
/*140798f71*/  cmp r13, rsi
/*140798f74*/  jz loc_14079AD58
/*140798f7a*/  lea rax, [r13+70h]
/*140798f7e*/  mov [rbp+10E0h+var_78], rax
/*140798f85*/  cmp qword ptr [r13+50h], 0FFFFFFFFFFFFFFFFh
/*140798f8a*/  jz short loc_140798F6A
/*140798f8c*/  mov r15, [r13+60h]
/*140798f90*/  test r15, r15
/*140798f93*/  js loc_1407990DA
/*140798f99*/  jz short loc_140798FE9
/*140798f9b*/  mov [rbp+10E0h+var_88], rsi
/*140798fa2*/  mov rsi, r14
/*140798fa5*/  mov r14, [r13+58h]
/*140798fa9*/  call nullsub_1
/*140798fae*/  mov ebx, 1
/*140798fb3*/  mov edx, 1
/*140798fb8*/  mov rcx, r15
/*140798fbb*/  call sub_140001650
/*140798fc0*/  test rax, rax
/*140798fc3*/  jz loc_1407990DC
/*140798fc9*/  mov r12, rax
/*140798fcc*/  mov rcx, rax
/*140798fcf*/  mov rdx, r14
/*140798fd2*/  mov r8, r15
/*140798fd5*/  call sub_141684120
/*140798fda*/  mov r14, rsi
/*140798fdd*/  mov rsi, [rbp+10E0h+var_88]
/*140798fe4*/  mov rbx, rbp
/*140798fe7*/  jmp short loc_140798FEF
loc_140798FE9: /*140798fe9*/ mov r12d, 1
loc_140798FEF: /*140798fef*/ movzx eax, byte ptr [r13+68h]
/*140798ff4*/  mov qword ptr [rbp+10E0h+var_E70], r15
/*140798ffb*/  mov qword ptr [rbp+10E0h+var_E70+8], r12
/*140799002*/  mov qword ptr [rbp+10E0h+var_E60], r15
/*140799009*/  mov byte ptr [rbp+10E0h+var_E60+8], al
loc_14079900F: /*14079900f*/ mov rcx, rbx
/*140799012*/  lea rdx, [rbp+10E0h+var_E70]
/*140799019*/  call sub_140474DC0
/*14079901e*/  nop
/*14079901f*/  test al, al
/*140799021*/  jnz loc_140798F6A
/*140799027*/  mov r15, [r13+58h]
/*14079902b*/  mov r12, [r13+60h]
/*14079902f*/  lea rcx, [rbp+10E0h+var_E70]
/*140799036*/  mov rdx, r15
/*140799039*/  mov r8, r12
/*14079903c*/  call sub_141486710
/*140799041*/  nop
/*140799042*/  cmp dword ptr [rbp+10E0h+var_E70], 2
/*140799049*/  jnz short loc_14079905D
/*14079904b*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*140799052*/  call sub_1401DD260
/*140799057*/  nop
/*140799058*/  jmp loc_140798F6A
loc_14079905D: /*14079905d*/ mov [rsp+1160h+var_1138], r14
/*140799062*/  mov [rsp+1160h+var_1140], 6
/*14079906b*/  lea rcx, [rbp+10E0h+var_E70]
/*140799072*/  mov rdx, r15
/*140799075*/  mov r8, r12
/*140799078*/  lea r9, aOpenai_0; "openai"
/*14079907f*/  call sub_140443170
/*140799084*/  nop
/*140799085*/  cmp dword ptr [rbp+10E0h+var_E70], 0FFFFFFFFh
/*14079908c*/  jz short loc_1407990A0
/*14079908e*/  lea rcx, [rbp+10E0h+var_E70]
/*140799095*/  call sub_1406CDA20
/*14079909a*/  nop
/*14079909b*/  jmp loc_140798F6A
loc_1407990A0: /*1407990a0*/ cmp byte ptr [rbp+10E0h+var_E70+8], 0
/*1407990a7*/  jz loc_140798F6A
/*1407990ad*/  add r13, 20h ; ' '
/*1407990b1*/  lea rcx, [rbp+10E0h+var_E70]
/*1407990b8*/  mov rdx, r13
/*1407990bb*/  call sub_14149C500
/*1407990c0*/  nop
/*1407990c1*/  lea rcx, [rbp+10E0h+var_720]
/*1407990c8*/  lea rdx, [rbp+10E0h+var_E70]
/*1407990cf*/  call sub_140474440
/*1407990d4*/  nop
/*1407990d5*/  jmp loc_140798F6A
loc_1407990DA: /*1407990da*/ xor ebx, ebx
loc_1407990DC: /*1407990dc*/ mov rcx, rbx
/*1407990df*/  mov rdx, r15
/*1407990e2*/  call sub_1416C2D4B
/*1407990e8*/  jmp loc_14079CF99
loc_1407990ED: /*1407990ed*/ mov qword ptr [rbp+10E0h+var_720], 0
/*1407990f8*/  mov qword ptr [rbp+10E0h+var_720+8], 8
/*140799103*/  mov qword ptr [rbp+10E0h+var_710], 0
/*14079910e*/  call nullsub_1
/*140799113*/  mov ecx, 18h
/*140799118*/  mov edx, 8
/*14079911d*/  call sub_140001650
/*140799122*/  test rax, rax
/*140799125*/  jz loc_14079CA10
/*14079912b*/  mov rsi, rax
/*14079912e*/  call nullsub_1
/*140799133*/  mov ecx, 13h
/*140799138*/  mov edx, 1
/*14079913d*/  call sub_140001650
/*140799142*/  test rax, rax
/*140799145*/  jz loc_14079CDFE
/*14079914b*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*140799153*/  movdqu xmmword ptr [rax], xmm0
/*140799157*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*14079915e*/  mov qword ptr [rsi], 13h
/*140799165*/  mov [rsi+8], rax
/*140799169*/  mov qword ptr [rsi+10h], 13h
/*140799171*/  mov qword ptr [rbp+10E0h+var_4B0], 1
/*14079917c*/  mov qword ptr [rbp+10E0h+var_4B0+8], rsi
/*140799183*/  mov qword ptr [rbp+10E0h+var_4A0], 1
/*14079918e*/  call nullsub_1
/*140799193*/  mov ecx, 18h
/*140799198*/  mov edx, 8
/*14079919d*/  call sub_140001650
/*1407991a2*/  test rax, rax
/*1407991a5*/  jz loc_14079CA25
/*1407991ab*/  mov rsi, rax
/*1407991ae*/  call nullsub_1
/*1407991b3*/  mov ecx, 6Ch ; 'l'
/*1407991b8*/  mov edx, 1
/*1407991bd*/  call sub_140001650
/*1407991c2*/  test rax, rax
/*1407991c5*/  jz loc_14079CE1A
/*1407991cb*/  movups xmm0, cs:xmmword_14178D10B+0Ch
/*1407991d2*/  movups xmmword ptr [rax+5Ch], xmm0
/*1407991d6*/  movups xmm0, cs:xmmword_14178D10B
/*1407991dd*/  movups xmmword ptr [rax+50h], xmm0
/*1407991e1*/  movups xmm0, cs:xmmword_14178D0FB
/*1407991e8*/  movups xmmword ptr [rax+40h], xmm0
/*1407991ec*/  movups xmm0, cs:xmmword_14178D0EB
/*1407991f3*/  movups xmmword ptr [rax+30h], xmm0
/*1407991f7*/  movups xmm0, cs:xmmword_14178D0DB
/*1407991fe*/  movups xmmword ptr [rax+20h], xmm0
/*140799202*/  movups xmm0, cs:xmmword_14178D0CB
/*140799209*/  movups xmmword ptr [rax+10h], xmm0
/*14079920d*/  movups xmm0, cs:xmmword_14178D0BB
/*140799214*/  movups xmmword ptr [rax], xmm0
/*140799217*/  mov qword ptr [rsi], 6Ch ; 'l'
/*14079921e*/  mov [rsi+8], rax
/*140799222*/  mov qword ptr [rsi+10h], 6Ch ; 'l'
loc_14079922A: /*14079922a*/ mov rax, qword ptr [rbp+10E0h+var_710]
/*140799231*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*140799238*/  movdqu xmm0, [rbp+10E0h+var_720]
/*140799240*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140799248*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079924f*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140799256*/  movdqu xmm1, [rbp+10E0h+var_4B0]
/*14079925e*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140799266*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079926d*/  mov rcx, [rbp+10E0h+var_70]
/*140799274*/  mov [rcx+28h], rax
/*140799278*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*14079927f*/  mov [rcx+30h], rax
/*140799283*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079928a*/  mov [rcx+18h], rax
/*14079928e*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*140799295*/  mov [rcx+20h], rax
/*140799299*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079929e*/  mov qword ptr [rcx+38h], 1
/*1407992a6*/  mov [rcx+40h], rsi
/*1407992aa*/  mov qword ptr [rcx+48h], 1
/*1407992b2*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_1407992B9: /*1407992b9*/ mov rdx, qword ptr [rbp+10E0h+var_1F0]
/*1407992c0*/  test rdx, rdx
/*1407992c3*/  jz short loc_1407992D7
/*1407992c5*/  mov r8d, 1
/*1407992cb*/  mov rcx, [rbp+10E0h+var_C8]
/*1407992d2*/  call sub_140001660
loc_1407992D7: /*1407992d7*/ mov rdx, qword ptr [rbp+10E0h+var_130]
/*1407992de*/  cmp rdx, 0FFFFFFFFFFFFFFFFh
/*1407992e2*/  jz short loc_1407992FB
/*1407992e4*/  test rdx, rdx
/*1407992e7*/  jz short loc_1407992FB
/*1407992e9*/  mov rcx, qword ptr [rbp+10E0h+var_130+8]
/*1407992f0*/  mov r8d, 1
loc_1407992F6: /*1407992f6*/ call sub_140001660
loc_1407992FB: /*1407992fb*/ mov rdx, qword ptr [rbp+10E0h+var_190]
/*140799302*/  test rdx, rdx
/*140799305*/  jz loc_140799FF5
/*14079930b*/  mov r8d, 1
/*140799311*/  mov rcx, [rbp+10E0h+var_90]
/*140799318*/  call sub_140001660
/*14079931d*/  jmp loc_140799FF5
loc_140799322: /*140799322*/ lea rcx, [rbp+10E0h+var_E70]
/*140799329*/  call sub_140FFA6E0
/*14079932e*/  nop
/*14079932f*/  mov eax, dword ptr [rbp+10E0h+var_E70]
/*140799335*/  mov r8d, eax
/*140799338*/  sar r8d, 0Dh
/*14079933c*/  lea edx, [r8-1]
/*140799340*/  xor ecx, ecx
/*140799342*/  test r8d, r8d
/*140799345*/  jg short loc_14079936C
/*140799347*/  mov ecx, 1
/*14079934c*/  sub ecx, r8d
/*14079934f*/  imul rcx, 51EB851Fh
/*140799356*/  shr rcx, 27h
/*14079935a*/  inc ecx
/*14079935c*/  imul r8d, ecx, 190h
/*140799363*/  add edx, r8d
/*140799366*/  imul ecx, 0FFFDC54Fh
loc_14079936C: /*14079936c*/ movsxd r8, edx
/*14079936f*/  imul rdx, r8, 51EB851Fh
/*140799376*/  mov r9, rdx
/*140799379*/  shr r9, 3Fh
/*14079937d*/  sar rdx, 25h
/*140799381*/  add edx, r9d
/*140799384*/  imul r8d, 5B5h
/*14079938b*/  sar r8d, 2
/*14079938f*/  shr eax, 4
/*140799392*/  and eax, 1FFh
/*140799397*/  add eax, ecx
/*140799399*/  mov ecx, dword ptr [rbp+10E0h+var_E70+4]
/*14079939f*/  mov r9d, dword ptr [rbp+10E0h+var_E70+8]
/*1407993a6*/  sub eax, edx
/*1407993a8*/  sar edx, 2
/*1407993ab*/  add eax, r8d
/*1407993ae*/  add eax, edx
/*1407993b0*/  add eax, 0FFF506C5h
/*1407993b5*/  cdqe
/*1407993b7*/  imul rax, 15180h
/*1407993be*/  add rax, rcx
/*1407993c1*/  imul rax, 3E8h
/*1407993c8*/  imul rcx, r9, 431BDE83h
/*1407993cf*/  shr rcx, 32h
/*1407993d3*/  add rcx, rax
/*1407993d6*/  mov qword ptr [rbp+10E0h+var_158], rcx
/*1407993dd*/  lea rax, [rbp+10E0h+var_158]
/*1407993e4*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*1407993eb*/  lea rax, sub_1414AC5F0
/*1407993f2*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
/*1407993f9*/  lea rdx, unk_14178C462
/*140799400*/  lea rcx, [rbp+10E0h+var_100]
/*140799407*/  lea r8, [rbp+10E0h+var_E70]
/*14079940e*/  call sub_14149C0F0
/*140799413*/  nop
/*140799414*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079941b*/  lea r9, [rbp+10E0h+var_100]
/*140799422*/  mov rdx, qword ptr [rbp+10E0h+var_A0]
/*140799429*/  mov r8, rbx
/*14079942c*/  call sub_14033DC20
/*140799431*/  nop
/*140799432*/  mov r8, qword ptr [rbp+10E0h+var_4B0+8]
/*140799439*/  mov r9, qword ptr [rbp+10E0h+var_4A0]
loc_140799440: /*140799440*/ mov rcx, [rbp+10E0h+var_88]
/*140799447*/  mov rdx, rdi
/*14079944a*/  mov qword ptr [rbp+10E0h+var_A0+8], r8
/*140799451*/  call sub_141486540
/*140799456*/  nop
loc_140799457: /*140799457*/ test rax, rax
/*14079945a*/  jz loc_140799DE0
/*140799460*/  mov rcx, [rbp+10E0h+var_70]
/*140799467*/  mov qword ptr [rcx], 2
/*14079946e*/  mov [rcx+8], rax
/*140799472*/  jmp loc_140799F80
loc_140799477: /*140799477*/ lea rcx, [rbp+10E0h+var_E70]
/*14079947e*/  mov rdx, rdi
/*140799481*/  call converge_router_thread_models_to_catalog
/*140799486*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079948d*/  movups xmm0, [rbp+10E0h+var_E70+8]
/*140799494*/  movaps [rbp+10E0h+var_4B0], xmm0
/*14079949b*/  movups xmm0, [rbp+10E0h+var_E60+8]
/*1407994a2*/  movaps [rbp+10E0h+var_4A0], xmm0
/*1407994a9*/  movups xmm0, [rbp+10E0h+var_E50+8]
/*1407994b0*/  movaps [rbp+10E0h+var_490], xmm0
/*1407994b7*/  movups xmm0, [rbp+10E0h+var_E40+8]
/*1407994be*/  movaps [rbp+10E0h+var_480], xmm0
/*1407994c5*/  mov rcx, qword ptr [rbp+10E0h+var_E30+8]
/*1407994cc*/  mov qword ptr [rbp+10E0h+var_470], rcx
/*1407994d3*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*1407994d7*/  jz loc_14079A1D4
/*1407994dd*/  movups xmm0, [rbp+10E0h+var_E20]
/*1407994e4*/  mov rdx, [rbp+10E0h+var_70]
/*1407994eb*/  movups xmmword ptr [rdx+50h], xmm0
/*1407994ef*/  mov rcx, qword ptr [rbp+10E0h+var_470]
/*1407994f6*/  mov [rdx+48h], rcx
/*1407994fa*/  movdqa xmm0, [rbp+10E0h+var_4B0]
/*140799502*/  movdqa xmm1, [rbp+10E0h+var_4A0]
/*14079950a*/  movaps xmm2, [rbp+10E0h+var_490]
/*140799511*/  movaps xmm3, [rbp+10E0h+var_480]
/*140799518*/  movups xmmword ptr [rdx+38h], xmm3
/*14079951c*/  movups xmmword ptr [rdx+28h], xmm2
/*140799520*/  movdqu xmmword ptr [rdx+18h], xmm1
/*140799525*/  movdqu xmmword ptr [rdx+8], xmm0
/*14079952a*/  mov [rdx], rax
/*14079952d*/  jmp loc_140797B95
loc_140799532: /*140799532*/ mov qword ptr [rbp+10E0h+var_10E0], 0
/*14079953a*/  mov qword ptr [rbp+10E0h+var_10D0], 0
/*140799542*/  call nullsub_1
/*140799547*/  mov ecx, 4
/*14079954c*/  mov edx, 1
/*140799551*/  call sub_140001650
/*140799556*/  test rax, rax
/*140799559*/  jz loc_14079CE4B
/*14079955f*/  mov dword ptr [rax], 74786574h
/*140799565*/  mov qword ptr [rbp+10E0h+var_720], 4
/*140799570*/  mov qword ptr [rbp+10E0h+var_720+8], rax
/*140799577*/  mov qword ptr [rbp+10E0h+var_710], 4
/*140799582*/  mov [rbp+10E0h+var_7A], 1
loc_140799589: /*140799589*/ lea rdx, off_14178BE98; "Follow the user's instructions carefull"...
/*140799590*/  lea rcx, [rbp+10E0h+var_E70]
/*140799597*/  call sub_140B56640
/*14079959c*/  nop
/*14079959d*/  cmp byte ptr [rbp+10E0h+var_E70], 0FFh
/*1407995a4*/  jz loc_14079CAA3
/*1407995aa*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*1407995b2*/  movdqu xmm1, [rbp+10E0h+var_E60]
/*1407995ba*/  movdqa [rbp+10E0h+var_4A0], xmm1
/*1407995c2*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*1407995ca*/  mov [rbp+10E0h+var_7A], 0
/*1407995d1*/  lea rcx, [rbp+10E0h+var_E70]
/*1407995d8*/  mov rdx, rbp
/*1407995db*/  lea r8, [rbp+10E0h+var_720]
/*1407995e2*/  lea r9, [rbp+10E0h+var_4B0]
/*1407995e9*/  call sub_140307860
/*1407995ee*/  nop
/*1407995ef*/  cmp byte ptr [rbp+10E0h+var_E70], 0FFh
/*1407995f6*/  jz short loc_140799605
loc_1407995F8: /*1407995f8*/ lea rcx, [rbp+10E0h+var_E70]
/*1407995ff*/  call sub_1400104F0
/*140799604*/  nop
loc_140799605: /*140799605*/ mov rax, qword ptr [rbp+10E0h+var_10D0]
/*140799609*/  movups xmm0, [rbp+10E0h+var_10E0]
/*14079960d*/  movups [rbp+10E0h+var_E70+7], xmm0
/*140799614*/  mov qword ptr [rbp+10E0h+var_E60+7], rax
/*14079961b*/  movups xmm0, [rbp+10E0h+var_E70]
/*140799622*/  movaps [rbp+10E0h+var_4B0], xmm0
/*140799629*/  mov rax, qword ptr [rbp+10E0h+var_E70+0Fh]
/*140799630*/  mov qword ptr [rbp+10E0h+var_4B0+0Fh], rax
/*140799637*/  mov rax, qword ptr [rbp+10E0h+var_E60+7]
/*14079963e*/  mov qword ptr [rbp+10E0h+var_4A0+7], rax
loc_140799645: /*140799645*/ mov byte ptr [rbp+10E0h+var_158], 5
/*14079964c*/  movdqa xmm0, [rbp+10E0h+var_4B0]
/*140799654*/  movdqu [rbp+10E0h+var_158+1], xmm0
/*14079965c*/  mov rax, qword ptr [rbp+10E0h+var_4B0+0Fh]
/*140799663*/  mov qword ptr [rbp+10E0h+var_148], rax
/*14079966a*/  mov rax, qword ptr [rbp+10E0h+var_4A0+7]
/*140799671*/  mov qword ptr [rbp+10E0h+var_148+8], rax
/*140799678*/  mov rbx, [rdi+308h]
/*14079967f*/  mov r14, [rdi+310h]
loc_140799686: /*140799686*/ mov [rsp+1160h+var_1140], 1Ah
/*14079968f*/  lea r9, unk_14178F1E1
/*140799696*/  lea rcx, [rbp+10E0h+var_100]
/*14079969d*/  mov rdx, rbx
/*1407996a0*/  mov r8, r14
/*1407996a3*/  call sub_141473FA0
/*1407996a8*/  nop
loc_1407996A9: /*1407996a9*/ mov qword ptr [rbp+10E0h+var_A0+8], r14
/*1407996b0*/  mov qword ptr [rbp+10E0h+var_A0], rbx
/*1407996b7*/  lea rcx, off_141786738
/*1407996be*/  call sub_1407BF4A0
/*1407996c3*/  nop
loc_1407996C4: /*1407996c4*/ movups xmm0, xmmword ptr cs:off_141786750+10h
/*1407996cb*/  movaps [rbp+10E0h+var_1E0], xmm0
/*1407996d2*/  movdqu xmm0, xmmword ptr cs:off_141786750
/*1407996da*/  movdqa [rbp+10E0h+var_1F0], xmm0
/*1407996e2*/  mov [rbp+10E0h+var_1D0], rax
/*1407996e9*/  mov [rbp+10E0h+var_1C8], rdx
/*1407996f0*/  mov [rbp+10E0h+var_230], 0
/*1407996fb*/  mov [rbp+10E0h+var_170], 0
/*140799706*/  mov [rbp+10E0h+var_168], 8
/*140799711*/  mov [rbp+10E0h+var_160], 0
/*14079971c*/  imul rax, [rbp+10E0h+var_210], 70h ; 'p'
/*140799724*/  mov rcx, qword ptr [rbp+10E0h+var_220+8]
/*14079972b*/  mov [rbp+10E0h+var_78], rcx
/*140799732*/  add rax, rcx
/*140799735*/  mov [rbp+10E0h+var_88], rax
loc_14079973C: /*14079973c*/ mov r13, [rbp+10E0h+var_78]
/*140799743*/  cmp r13, [rbp+10E0h+var_88]
/*14079974a*/  jz loc_14079AF9C
/*140799750*/  lea rax, [r13+70h]
/*140799754*/  mov [rbp+10E0h+var_78], rax
/*14079975b*/  cmp qword ptr [r13+50h], 0FFFFFFFFFFFFFFFFh
/*140799760*/  jz short loc_14079973C
/*140799762*/  mov r14, [r13+60h]
/*140799766*/  test r14, r14
/*140799769*/  js loc_140799DCD
/*14079976f*/  jz short loc_1407997BC
/*140799771*/  mov [rbp+10E0h+var_138], rsi
/*140799778*/  mov rsi, r15
/*14079977b*/  mov r15, [r13+58h]
/*14079977f*/  call nullsub_1
/*140799784*/  mov ebx, 1
/*140799789*/  mov edx, 1
/*14079978e*/  mov rcx, r14
/*140799791*/  call sub_140001650
/*140799796*/  test rax, rax
/*140799799*/  jz loc_140799DCF
/*14079979f*/  mov r12, rax
/*1407997a2*/  mov rcx, rax
/*1407997a5*/  mov rdx, r15
/*1407997a8*/  mov r8, r14
/*1407997ab*/  call sub_141684120
/*1407997b0*/  mov r15, rsi
/*1407997b3*/  mov rsi, [rbp+10E0h+var_138]
/*1407997ba*/  jmp short loc_1407997C2
loc_1407997BC: /*1407997bc*/ mov r12d, 1
loc_1407997C2: /*1407997c2*/ movzx eax, byte ptr [r13+68h]
/*1407997c7*/  mov qword ptr [rbp+10E0h+var_E70], r14
/*1407997ce*/  mov qword ptr [rbp+10E0h+var_E70+8], r12
/*1407997d5*/  mov qword ptr [rbp+10E0h+var_E60], r14
/*1407997dc*/  mov byte ptr [rbp+10E0h+var_E60+8], al
loc_1407997E2: /*1407997e2*/ lea rcx, [rbp+10E0h+var_1F0]
/*1407997e9*/  mov rdx, r15
/*1407997ec*/  call sub_140474DC0
/*1407997f1*/  nop
/*1407997f2*/  test al, al
/*1407997f4*/  jnz loc_14079973C
/*1407997fa*/  mov r12, [r13+58h]
/*1407997fe*/  mov r14, [r13+60h]
/*140799802*/  mov rcx, r15
/*140799805*/  mov rdx, r12
/*140799808*/  mov r8, r14
/*14079980b*/  call sub_141486710
/*140799810*/  nop
/*140799811*/  cmp dword ptr [rbp+10E0h+var_E70], 2
/*140799818*/  jnz short loc_14079982C
/*14079981a*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*140799821*/  call sub_1401DD260
/*140799826*/  nop
/*140799827*/  jmp loc_14079973C
loc_14079982C: /*14079982c*/ mov rcx, r15
/*14079982f*/  mov rdx, r12
/*140799832*/  mov r8, r14
/*140799835*/  call find_first_session_meta_line
/*14079983a*/  nop
/*14079983b*/  cmp dword ptr [rbp+10E0h+var_E70], 0FFFFFFFFh
/*140799842*/  jz short loc_140799852
/*140799844*/  mov rcx, r15
/*140799847*/  call sub_1406CDA20
/*14079984c*/  nop
/*14079984d*/  jmp loc_14079973C
loc_140799852: /*140799852*/ mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*140799859*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14079985d*/  jz loc_14079973C
/*140799863*/  mov [rbp+10E0h+var_90], rax
/*14079986a*/  mov rcx, qword ptr [rbp+10E0h+var_E60]
/*140799871*/  mov rdx, qword ptr [rbp+10E0h+var_E60+8]
loc_140799878: /*140799878*/ mov [rbp+10E0h+var_C8], rcx
/*14079987f*/  mov [rbp+10E0h+var_A8], rdx
/*140799886*/  call sub_14078EA80
/*14079988b*/  nop
/*14079988c*/  test al, al
/*14079988e*/  jz loc_140799A51
/*140799894*/  mov byte ptr [rbp+10E0h+var_E70], 1
/*14079989b*/  mov rdx, qword ptr [rbp+10E0h+var_100+8]
/*1407998a2*/  mov r8, [rbp+10E0h+var_F0]
/*1407998a9*/  mov rcx, r15
/*1407998ac*/  mov rbx, rdx
/*1407998af*/  mov [rbp+10E0h+var_B8], r8
/*1407998b6*/  call sub_14147B9A0
/*1407998bb*/  nop
/*1407998bc*/  mov [rbp+10E0h+var_138], rsi
/*1407998c3*/  test rax, rax
/*1407998c6*/  jnz short loc_14079993C
/*1407998c8*/  lea rax, [r13+20h]
/*1407998cc*/  mov [rbp+10E0h+var_C0], rax
/*1407998d3*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*1407998da*/  lea rax, sub_1400015F0
/*1407998e1*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
/*1407998e8*/  lea rcx, [rbp+10E0h+var_4B0]
/*1407998ef*/  lea rdx, unk_141788D7E
/*1407998f6*/  mov rsi, r15
/*1407998f9*/  mov r8, r15
/*1407998fc*/  call sub_14149C0F0
/*140799901*/  nop
/*140799902*/  mov rcx, rsi
/*140799905*/  mov rdx, rbx
/*140799908*/  mov r8, [rbp+10E0h+var_B8]
/*14079990f*/  lea r9, [rbp+10E0h+var_4B0]
/*140799916*/  call sub_14033DC20
/*14079991b*/  nop
/*14079991c*/  mov rcx, rsi
/*14079991f*/  mov rdx, [rbp+10E0h+var_C8]
/*140799926*/  mov r8, [rbp+10E0h+var_A8]
/*14079992d*/  call sub_140690520
/*140799932*/  nop
/*140799933*/  test rax, rax
/*140799936*/  jz loc_140799A78
loc_14079993C: /*14079993c*/ mov qword ptr [rbp+10E0h+var_720], rax
/*140799943*/  mov rax, cs:off_141EC8D80
/*14079994a*/  mov rax, [rax]
/*14079994d*/  cmp rax, 2
/*140799951*/  jb loc_1407999E2
/*140799957*/  lea rax, [r13+20h]
/*14079995b*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*140799962*/  lea rax, sub_1400015F0
/*140799969*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*140799970*/  lea rax, [rbp+10E0h+var_720]
/*140799977*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079997e*/  lea rax, sub_141490720
/*140799985*/  mov qword ptr [rbp+10E0h+var_4A0+8], rax
/*14079998c*/  lea rax, aCodexmateLibCo_29; "codexmate_lib::core::relay::codex_diagn"...
/*140799993*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*14079999a*/  mov qword ptr [rbp+10E0h+var_E70+8], 2Ch ; ','
/*1407999a5*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*1407999ac*/  mov qword ptr [rbp+10E0h+var_E60+8], 2Ch ; ','
/*1407999b7*/  lea rax, off_14178F240; "src\\core\\relay\\codex_diagnostic.rs"
/*1407999be*/  mov qword ptr [rbp+10E0h+var_E50], rax
loc_1407999C5: /*1407999c5*/ mov r8d, 2
/*1407999cb*/  lea rcx, unk_14178F1FB
/*1407999d2*/  lea rdx, [rbp+10E0h+var_4B0]
/*1407999d9*/  mov r9, r15
/*1407999dc*/  call sub_140985BA0
/*1407999e1*/  nop
loc_1407999E2: /*1407999e2*/ add r13, 20h ; ' '
/*1407999e6*/  mov rcx, r15
/*1407999e9*/  mov rdx, r13
/*1407999ec*/  call sub_14149C500
/*1407999f1*/  nop
/*1407999f2*/  mov rsi, [rbp+10E0h+var_160]
/*1407999f9*/  cmp rsi, [rbp+10E0h+var_170]
/*140799a00*/  jnz short loc_140799A0F
loc_140799A02: /*140799a02*/ lea rcx, [rbp+10E0h+var_170]
/*140799a09*/  call sub_141689AB0
/*140799a0e*/  nop
loc_140799A0F: /*140799a0f*/ mov rax, [rbp+10E0h+var_168]
/*140799a16*/  lea rcx, [rsi+rsi*2]
/*140799a1a*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*140799a21*/  mov [rax+rcx*8+10h], rdx
/*140799a26*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*140799a2e*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*140799a33*/  inc rsi
/*140799a36*/  mov [rbp+10E0h+var_160], rsi
/*140799a3d*/  mov rcx, qword ptr [rbp+10E0h+var_720]
loc_140799A44: /*140799a44*/ call sub_1401DD260
/*140799a49*/  nop
/*140799a4a*/  mov rsi, [rbp+10E0h+var_138]
loc_140799A51: /*140799a51*/ mov rdx, [rbp+10E0h+var_90]
/*140799a58*/  test rdx, rdx
/*140799a5b*/  jz loc_14079973C
/*140799a61*/  mov r8d, 1
/*140799a67*/  mov rcx, [rbp+10E0h+var_C8]
/*140799a6e*/  call sub_140001660
/*140799a73*/  jmp loc_14079973C
loc_140799A78: /*140799a78*/ lea rcx, [rbp+10E0h+var_4B0]
/*140799a7f*/  mov rdx, [rbp+10E0h+var_C8]
/*140799a86*/  mov r8, [rbp+10E0h+var_A8]
/*140799a8d*/  lea r9, [rbp+10E0h+var_158]
/*140799a94*/  call sub_140790450
/*140799a99*/  nop
/*140799a9a*/  cmp dword ptr [rbp+10E0h+var_4B0], 0FFFFFFFFh
/*140799aa1*/  jz loc_140799BFE
/*140799aa7*/  movups xmm0, [rbp+10E0h+var_460]
/*140799aae*/  movaps [rbp+10E0h+var_E20], xmm0
/*140799ab5*/  movups xmm0, [rbp+10E0h+var_470]
/*140799abc*/  movaps [rbp+10E0h+var_E30], xmm0
/*140799ac3*/  movdqu xmm0, [rbp+10E0h+var_4B0]
/*140799acb*/  movdqu xmm1, [rbp+10E0h+var_4A0]
/*140799ad3*/  movups xmm2, [rbp+10E0h+var_490]
/*140799ada*/  movups xmm3, [rbp+10E0h+var_480]
/*140799ae1*/  movaps [rbp+10E0h+var_E40], xmm3
/*140799ae8*/  movaps [rbp+10E0h+var_E50], xmm2
/*140799aef*/  movdqa [rbp+10E0h+var_E60], xmm1
/*140799af7*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140799aff*/  mov rax, cs:off_141EC8D80
/*140799b06*/  mov rax, [rax]
/*140799b09*/  cmp rax, 2
/*140799b0d*/  jb short loc_140799B8A
/*140799b0f*/  mov rax, [rbp+10E0h+var_C0]
/*140799b16*/  mov qword ptr [rbp+10E0h+var_10E0], rax
/*140799b1a*/  lea rax, sub_1400015F0
/*140799b21*/  mov qword ptr [rbp+10E0h+var_10E0+8], rax
/*140799b25*/  mov qword ptr [rbp+10E0h+var_10D0], r15
/*140799b29*/  lea rax, sub_140B036A0
/*140799b30*/  mov qword ptr [rbp+10E0h+var_10D0+8], rax
/*140799b34*/  lea rax, aCodexmateLibCo_29; "codexmate_lib::core::relay::codex_diagn"...
/*140799b3b*/  mov qword ptr [rbp+10E0h+var_720], rax
/*140799b42*/  mov qword ptr [rbp+10E0h+var_720+8], 2Ch ; ','
/*140799b4d*/  mov qword ptr [rbp+10E0h+var_710], rax
/*140799b54*/  mov qword ptr [rbp+10E0h+var_710+8], 2Ch ; ','
/*140799b5f*/  lea rax, off_14178F2E0; "src\\core\\relay\\codex_diagnostic.rs"
/*140799b66*/  mov qword ptr [rbp+10E0h+var_700], rax
loc_140799B6D: /*140799b6d*/ mov r8d, 2
/*140799b73*/  lea rcx, unk_14178F2A8
/*140799b7a*/  mov rdx, rbp
/*140799b7d*/  lea r9, [rbp+10E0h+var_720]
/*140799b84*/  call sub_140985BA0
/*140799b89*/  nop
loc_140799B8A: /*140799b8a*/ lea rcx, [rbp+10E0h+var_720]
/*140799b91*/  mov rdx, [rbp+10E0h+var_C0]
/*140799b98*/  call sub_14149C500
/*140799b9d*/  nop
/*140799b9e*/  mov rsi, [rbp+10E0h+var_160]
/*140799ba5*/  cmp rsi, [rbp+10E0h+var_170]
/*140799bac*/  jnz short loc_140799BBB
loc_140799BAE: /*140799bae*/ lea rcx, [rbp+10E0h+var_170]
/*140799bb5*/  call sub_141689AB0
/*140799bba*/  nop
loc_140799BBB: /*140799bbb*/ mov rax, [rbp+10E0h+var_168]
/*140799bc2*/  lea rcx, [rsi+rsi*2]
/*140799bc6*/  mov rdx, qword ptr [rbp+10E0h+var_710]
/*140799bcd*/  mov [rax+rcx*8+10h], rdx
/*140799bd2*/  movdqu xmm0, [rbp+10E0h+var_720]
/*140799bda*/  movdqu xmmword ptr [rax+rcx*8], xmm0
/*140799bdf*/  inc rsi
/*140799be2*/  mov [rbp+10E0h+var_160], rsi
loc_140799BE9: /*140799be9*/ mov rcx, r15
/*140799bec*/  call sub_1406CDA20
/*140799bf1*/  nop
/*140799bf2*/  mov rsi, [rbp+10E0h+var_138]
/*140799bf9*/  jmp loc_140799A51
loc_140799BFE: /*140799bfe*/ mov rax, qword ptr [rbp+10E0h+var_4B0+8]
/*140799c05*/  mov [rbp+10E0h+var_B8], rax
/*140799c0c*/  mov r9, qword ptr [rbp+10E0h+var_4A0]
/*140799c13*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
loc_140799C1A: /*140799c1a*/ mov rcx, [rbp+10E0h+var_A8]
/*140799c21*/  mov [rsp+1160h+var_1130], rcx
/*140799c26*/  mov rcx, [rbp+10E0h+var_C8]
/*140799c2d*/  mov [rsp+1160h+var_1138], rcx
/*140799c32*/  mov [rsp+1160h+var_1140], rax
/*140799c37*/  lea rcx, [rbp+10E0h+var_4B0]
/*140799c3e*/  mov rdx, r12
/*140799c41*/  mov r8, r14
/*140799c44*/  mov [rbp+10E0h+var_A8], r9
/*140799c4b*/  call sub_1404B9880
/*140799c50*/  nop
/*140799c51*/  cmp dword ptr [rbp+10E0h+var_4B0], 0FFFFFFFFh
/*140799c58*/  jz loc_140799D74
/*140799c5e*/  movups xmm0, [rbp+10E0h+var_460]
/*140799c65*/  movaps [rbp+10E0h+var_E20], xmm0
/*140799c6c*/  movups xmm0, [rbp+10E0h+var_470]
/*140799c73*/  movaps [rbp+10E0h+var_E30], xmm0
/*140799c7a*/  movdqu xmm0, [rbp+10E0h+var_4B0]
/*140799c82*/  movdqu xmm1, [rbp+10E0h+var_4A0]
/*140799c8a*/  movups xmm2, [rbp+10E0h+var_490]
/*140799c91*/  movups xmm3, [rbp+10E0h+var_480]
/*140799c98*/  movaps [rbp+10E0h+var_E40], xmm3
/*140799c9f*/  movaps [rbp+10E0h+var_E50], xmm2
/*140799ca6*/  movdqa [rbp+10E0h+var_E60], xmm1
/*140799cae*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140799cb6*/  mov rax, cs:off_141EC8D80
/*140799cbd*/  mov rax, [rax]
/*140799cc0*/  cmp rax, 2
/*140799cc4*/  jb short loc_140799D41
/*140799cc6*/  mov rax, [rbp+10E0h+var_C0]
/*140799ccd*/  mov qword ptr [rbp+10E0h+var_10E0], rax
/*140799cd1*/  lea rax, sub_1400015F0
/*140799cd8*/  mov qword ptr [rbp+10E0h+var_10E0+8], rax
/*140799cdc*/  mov qword ptr [rbp+10E0h+var_10D0], r15
/*140799ce0*/  lea rax, sub_140B036A0
/*140799ce7*/  mov qword ptr [rbp+10E0h+var_10D0+8], rax
/*140799ceb*/  lea rax, aCodexmateLibCo_29; "codexmate_lib::core::relay::codex_diagn"...
/*140799cf2*/  mov qword ptr [rbp+10E0h+var_720], rax
/*140799cf9*/  mov qword ptr [rbp+10E0h+var_720+8], 2Ch ; ','
/*140799d04*/  mov qword ptr [rbp+10E0h+var_710], rax
/*140799d0b*/  mov qword ptr [rbp+10E0h+var_710+8], 2Ch ; ','
/*140799d16*/  lea rax, off_14178F290; "src\\core\\relay\\codex_diagnostic.rs"
/*140799d1d*/  mov qword ptr [rbp+10E0h+var_700], rax
loc_140799D24: /*140799d24*/ mov r8d, 2
/*140799d2a*/  lea rcx, unk_14178F258
/*140799d31*/  mov rdx, rbp
/*140799d34*/  lea r9, [rbp+10E0h+var_720]
/*140799d3b*/  call sub_140985BA0
/*140799d40*/  nop
loc_140799D41: /*140799d41*/ lea rcx, [rbp+10E0h+var_720]
/*140799d48*/  mov rdx, [rbp+10E0h+var_C0]
/*140799d4f*/  call sub_14149C500
/*140799d54*/  nop
/*140799d55*/  lea rcx, [rbp+10E0h+var_170]
/*140799d5c*/  lea rdx, [rbp+10E0h+var_720]
/*140799d63*/  call sub_1403B1EC0
/*140799d68*/  nop
loc_140799D69: /*140799d69*/ mov rcx, r15
/*140799d6c*/  call sub_1406CDA20
/*140799d71*/  nop
/*140799d72*/  jmp short loc_140799D7B
loc_140799D74: /*140799d74*/ inc [rbp+10E0h+var_230]
loc_140799D7B: /*140799d7b*/ cmp [rbp+10E0h+var_B8], 0
/*140799d83*/  jz short loc_140799D9E
/*140799d85*/  mov r8d, 1
/*140799d8b*/  mov rcx, [rbp+10E0h+var_A8]
/*140799d92*/  mov rdx, [rbp+10E0h+var_B8]
/*140799d99*/  call sub_140001660
loc_140799D9E: /*140799d9e*/ cmp [rbp+10E0h+var_90], 0
/*140799da6*/  jz short loc_140799DC1
/*140799da8*/  mov r8d, 1
/*140799dae*/  mov rcx, [rbp+10E0h+var_C8]
/*140799db5*/  mov rdx, [rbp+10E0h+var_90]
/*140799dbc*/  call sub_140001660
loc_140799DC1: /*140799dc1*/ mov rsi, [rbp+10E0h+var_138]
/*140799dc8*/  jmp loc_14079973C
loc_140799DCD: /*140799dcd*/ xor ebx, ebx
loc_140799DCF: /*140799dcf*/ mov rcx, rbx
/*140799dd2*/  mov rdx, r14
/*140799dd5*/  call sub_1416C2D4B
/*140799ddb*/  jmp loc_14079CF99
loc_140799DE0: /*140799de0*/ call nullsub_1
/*140799de5*/  mov ecx, 18h
/*140799dea*/  mov edx, 8
/*140799def*/  call sub_140001650
/*140799df4*/  test rax, rax
/*140799df7*/  jz loc_14079CA79
/*140799dfd*/  mov rsi, rax
/*140799e00*/  call nullsub_1
/*140799e05*/  mov ecx, 11h
/*140799e0a*/  mov edx, 1
/*140799e0f*/  call sub_140001650
/*140799e14*/  test rax, rax
/*140799e17*/  jz loc_14079CE60
/*140799e1d*/  movdqu xmm0, xmmword ptr cs:aResidualManife; "residual_manifest"
/*140799e25*/  movdqu xmmword ptr [rax], xmm0
/*140799e29*/  mov byte ptr [rax+10h], 74h ; 't'
/*140799e2d*/  mov qword ptr [rsi], 11h
/*140799e34*/  mov [rsi+8], rax
/*140799e38*/  mov qword ptr [rsi+10h], 11h
/*140799e40*/  mov qword ptr [rbp+10E0h+var_190], 1
/*140799e4b*/  mov qword ptr [rbp+10E0h+var_190+8], rsi
/*140799e52*/  mov [rbp+10E0h+var_180], 1
/*140799e5d*/  mov qword ptr [rbp+10E0h+var_130], 0
/*140799e68*/  mov qword ptr [rbp+10E0h+var_130+8], 8
/*140799e73*/  mov qword ptr [rbp+10E0h+var_120], 0
/*140799e7e*/  call nullsub_1
/*140799e83*/  mov ecx, 18h
/*140799e88*/  mov edx, 8
/*140799e8d*/  call sub_140001650
/*140799e92*/  test rax, rax
/*140799e95*/  jz loc_14079CA8E
/*140799e9b*/  mov rsi, rax
/*140799e9e*/  call nullsub_1
/*140799ea3*/  mov ecx, 27h ; '''
/*140799ea8*/  mov edx, 1
/*140799ead*/  call sub_140001650
/*140799eb2*/  test rax, rax
/*140799eb5*/  jz loc_14079CE7C
/*140799ebb*/  movups xmm0, cs:xmmword_14178C483
/*140799ec2*/  movups xmmword ptr [rax+10h], xmm0
/*140799ec6*/  movups xmm0, cs:xmmword_14178C473
/*140799ecd*/  movups xmmword ptr [rax], xmm0
/*140799ed0*/  mov rcx, 79726F7473696820h
/*140799eda*/  mov [rax+1Fh], rcx
/*140799ede*/  mov qword ptr [rsi], 27h ; '''
/*140799ee5*/  mov [rsi+8], rax
/*140799ee9*/  mov qword ptr [rsi+10h], 27h ; '''
/*140799ef1*/  mov rax, [rbp+10E0h+var_180]
/*140799ef8*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*140799eff*/  movdqu xmm0, [rbp+10E0h+var_190]
/*140799f07*/  movdqa [rbp+10E0h+var_E70], xmm0
/*140799f0f*/  mov rax, qword ptr [rbp+10E0h+var_120]
/*140799f16*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*140799f1d*/  movdqu xmm1, [rbp+10E0h+var_130]
/*140799f25*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*140799f2d*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*140799f34*/  mov rcx, [rbp+10E0h+var_70]
/*140799f3b*/  mov [rcx+28h], rax
/*140799f3f*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*140799f46*/  mov [rcx+30h], rax
/*140799f4a*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*140799f51*/  mov [rcx+18h], rax
/*140799f55*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*140799f5c*/  mov [rcx+20h], rax
/*140799f60*/  movdqu xmmword ptr [rcx+8], xmm0
/*140799f65*/  mov qword ptr [rcx+38h], 1
/*140799f6d*/  mov [rcx+40h], rsi
/*140799f71*/  mov qword ptr [rcx+48h], 1
/*140799f79*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_140799F80: /*140799f80*/ mov rdx, qword ptr [rbp+10E0h+var_4B0]
/*140799f87*/  test rdx, rdx
/*140799f8a*/  jz short loc_140799F9E
/*140799f8c*/  mov r8d, 1
/*140799f92*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*140799f99*/  call sub_140001660
loc_140799F9E: /*140799f9e*/ mov rdx, qword ptr [rbp+10E0h+var_720]
/*140799fa5*/  test rdx, rdx
/*140799fa8*/  jz short loc_140799FBC
/*140799faa*/  mov r8d, 1
/*140799fb0*/  mov rcx, qword ptr [rbp+10E0h+var_A0]
/*140799fb7*/  call sub_140001660
loc_140799FBC: /*140799fbc*/ mov rdx, qword ptr [rbp+10E0h+var_10E0]
/*140799fc0*/  test rdx, rdx
/*140799fc3*/  jz short loc_140799FD7
/*140799fc5*/  mov r8d, 1
/*140799fcb*/  mov rcx, [rbp+10E0h+var_88]
/*140799fd2*/  call sub_140001660
loc_140799FD7: /*140799fd7*/ mov rdx, qword ptr [rbp+10E0h+var_1F0]
/*140799fde*/  test rdx, rdx
/*140799fe1*/  jz short loc_140799FF5
loc_140799FE3: /*140799fe3*/ mov r8d, 1
/*140799fe9*/  mov rcx, [rbp+10E0h+var_78]
/*140799ff0*/  call sub_140001660
loc_140799FF5: /*140799ff5*/ mov rdx, [rbp+10E0h+var_70]
/*140799ffc*/  jmp loc_140797B95
loc_14079A001: /*14079a001*/ call nullsub_1
/*14079a006*/  mov ecx, 18h
/*14079a00b*/  mov edx, 8
/*14079a010*/  call sub_140001650
/*14079a015*/  test rax, rax
/*14079a018*/  jz loc_14079CB0C
/*14079a01e*/  mov rsi, rax
/*14079a021*/  call nullsub_1
/*14079a026*/  mov ecx, 13h
/*14079a02b*/  mov edx, 1
/*14079a030*/  call sub_140001650
/*14079a035*/  test rax, rax
/*14079a038*/  jz loc_14079CEB4
/*14079a03e*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*14079a046*/  movdqu xmmword ptr [rax], xmm0
/*14079a04a*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*14079a051*/  mov qword ptr [rsi], 13h
/*14079a058*/  mov [rsi+8], rax
/*14079a05c*/  mov qword ptr [rsi+10h], 13h
/*14079a064*/  mov qword ptr [rbp+10E0h+var_720], 1
/*14079a06f*/  mov qword ptr [rbp+10E0h+var_720+8], rsi
/*14079a076*/  mov qword ptr [rbp+10E0h+var_710], 1
/*14079a081*/  mov qword ptr [rbp+10E0h+var_4B0], 0
/*14079a08c*/  mov qword ptr [rbp+10E0h+var_4B0+8], 8
/*14079a097*/  mov qword ptr [rbp+10E0h+var_4A0], 0
/*14079a0a2*/  call nullsub_1
/*14079a0a7*/  mov ecx, 18h
/*14079a0ac*/  mov edx, 8
/*14079a0b1*/  call sub_140001650
/*14079a0b6*/  test rax, rax
/*14079a0b9*/  jz loc_14079CB21
/*14079a0bf*/  mov rsi, rax
/*14079a0c2*/  call nullsub_1
/*14079a0c7*/  mov ecx, 0Fh
/*14079a0cc*/  mov edx, 1
/*14079a0d1*/  call sub_140001650
/*14079a0d6*/  test rax, rax
/*14079a0d9*/  jz loc_14079CED0
/*14079a0df*/  mov rcx, 9995E78BAEE693BAh
/*14079a0e9*/  mov [rax+7], rcx
/*14079a0ed*/  mov rcx, 0BAE5A797E6A097E6h
/*14079a0f7*/  mov [rax], rcx
/*14079a0fa*/  mov qword ptr [rsi], 0Fh
/*14079a101*/  mov [rsi+8], rax
/*14079a105*/  mov qword ptr [rsi+10h], 0Fh
/*14079a10d*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*14079a114*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079a11b*/  movdqu xmm0, [rbp+10E0h+var_720]
/*14079a123*/  movdqa [rbp+10E0h+var_E70], xmm0
/*14079a12b*/  movdqu xmm1, [rbp+10E0h+var_4B0]
/*14079a133*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*14079a13b*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079a142*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*14079a149*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079a150*/  mov rcx, [rbp+10E0h+var_70]
/*14079a157*/  mov [rcx+28h], rax
/*14079a15b*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*14079a162*/  mov [rcx+30h], rax
/*14079a166*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079a16d*/  mov [rcx+18h], rax
/*14079a171*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*14079a178*/  mov [rcx+20h], rax
/*14079a17c*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079a181*/  mov qword ptr [rcx+38h], 1
/*14079a189*/  mov [rcx+40h], rsi
/*14079a18d*/  mov qword ptr [rcx+48h], 1
/*14079a195*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_14079A19C: /*14079a19c*/ lea rcx, [rbp+10E0h+var_208]
/*14079a1a3*/  call sub_140334B70
/*14079a1a8*/  nop
/*14079a1a9*/  mov rdx, qword ptr [rbp+10E0h+var_208]
/*14079a1b0*/  test rdx, rdx
/*14079a1b3*/  jz loc_1407992B9
/*14079a1b9*/  mov rcx, qword ptr [rbp+10E0h+var_208+8]
/*14079a1c0*/  shl rdx, 5
/*14079a1c4*/  mov r8d, 8
/*14079a1ca*/  call sub_140001660
/*14079a1cf*/  jmp loc_1407992B9
loc_14079A1D4: /*14079a1d4*/ movdqa xmm0, [rbp+10E0h+var_4B0]
/*14079a1dc*/  movdqa xmm1, [rbp+10E0h+var_4A0]
/*14079a1e4*/  movaps xmm2, [rbp+10E0h+var_490]
/*14079a1eb*/  movaps xmm3, [rbp+10E0h+var_480]
/*14079a1f2*/  movdqa [rbp+10E0h+var_720], xmm0
/*14079a1fa*/  movdqa [rbp+10E0h+var_710], xmm1
/*14079a202*/  movaps [rbp+10E0h+var_700], xmm2
/*14079a209*/  movaps [rbp+10E0h+var_6F0], xmm3
/*14079a210*/  mov rax, qword ptr [rbp+10E0h+var_470]
/*14079a217*/  mov [rbp+10E0h+var_6E0], rax
loc_14079A21E: /*14079a21e*/ lea rcx, [rbp+10E0h+var_E70]
/*14079a225*/  mov rdx, rdi
/*14079a228*/  mov r8b, 1
/*14079a22b*/  call sub_14078FD60
/*14079a230*/  nop
/*14079a231*/  cmp qword ptr [rbp+10E0h+var_E50+8], 2
/*14079a239*/  jnz short loc_14079A24D
/*14079a23b*/  mov rdi, qword ptr [rbp+10E0h+var_E50]
/*14079a242*/  cmp word ptr [rdi], 6B6Fh
/*14079a247*/  jz loc_14079C1C3
loc_14079A24D: /*14079a24d*/ mov qword ptr [rbp+10E0h+var_190], 0
/*14079a258*/  mov qword ptr [rbp+10E0h+var_190+8], 8
/*14079a263*/  mov [rbp+10E0h+var_180], 0
/*14079a26e*/  call nullsub_1
/*14079a273*/  mov ecx, 18h
/*14079a278*/  mov edx, 8
/*14079a27d*/  call sub_140001650
/*14079a282*/  test rax, rax
/*14079a285*/  jz loc_14079CB48
/*14079a28b*/  mov rsi, rax
/*14079a28e*/  call nullsub_1
/*14079a293*/  mov ecx, 20h ; ' '
/*14079a298*/  mov edx, 1
/*14079a29d*/  call sub_140001650
/*14079a2a2*/  test rax, rax
/*14079a2a5*/  jz loc_14079CEEC
/*14079a2ab*/  movups xmm0, cs:xmmword_14178D8D7
/*14079a2b2*/  movups xmmword ptr [rax+10h], xmm0
/*14079a2b6*/  movdqu xmm0, cs:xmmword_14178D8C7
/*14079a2be*/  movdqu xmmword ptr [rax], xmm0
/*14079a2c2*/  mov qword ptr [rsi], 20h ; ' '
/*14079a2c9*/  mov [rsi+8], rax
/*14079a2cd*/  mov qword ptr [rsi+10h], 20h ; ' '
/*14079a2d5*/  mov qword ptr [rbp+10E0h+var_130], 1
/*14079a2e0*/  mov qword ptr [rbp+10E0h+var_130+8], rsi
/*14079a2e7*/  mov qword ptr [rbp+10E0h+var_120], 1
/*14079a2f2*/  call nullsub_1
/*14079a2f7*/  mov ecx, 18h
/*14079a2fc*/  mov edx, 8
/*14079a301*/  call sub_140001650
/*14079a306*/  test rax, rax
/*14079a309*/  jz loc_14079CB64
/*14079a30f*/  lea rsi, [rbp+10E0h+var_700+8]
/*14079a316*/  mov r8, qword ptr [rbp+10E0h+var_E30+8]
/*14079a31d*/  cmp r8, 0FFFFFFFFFFFFFFFFh
/*14079a321*/  mov [rbp+10E0h+var_78], rax
/*14079a328*/  jz loc_14079BAF6
/*14079a32e*/  mov rdx, qword ptr [rbp+10E0h+var_E40]
/*14079a335*/  mov rcx, qword ptr [rbp+10E0h+var_E40+8]
/*14079a33c*/  mov qword ptr [rbp+10E0h+var_10E0], r8
/*14079a340*/  movdqu xmm0, [rbp+10E0h+var_E20]
/*14079a348*/  movdqu [rbp+10E0h+var_10E0+8], xmm0
/*14079a34d*/  test rdx, rdx
/*14079a350*/  jz loc_14079BB0E
/*14079a356*/  mov r8d, 1
/*14079a35c*/  call sub_140001660
/*14079a361*/  jmp loc_14079BB0E
loc_14079A366: /*14079a366*/ call sub_141475580
/*14079a36b*/  nop
/*14079a36c*/  mov dword ptr [rbp+10E0h+var_4B0], eax
/*14079a372*/  mov dword ptr [rbp+10E0h+var_4B0+4], edx
/*14079a378*/  lea rcx, [rbp+10E0h+var_E70]
/*14079a37f*/  lea rdx, [rbp+10E0h+var_4B0]
/*14079a386*/  mov r8d, 0D53E8000h
/*14079a38c*/  mov r9d, 19DB1DEh
/*14079a392*/  call sub_141475530
/*14079a397*/  nop
/*14079a398*/  mov [rbp+10E0h+var_4C0], 0
/*14079a3a3*/  cmp byte ptr [rbp+10E0h+var_E70], 0
/*14079a3aa*/  mov eax, 0
/*14079a3af*/  jnz short loc_14079A3B8
/*14079a3b1*/  mov rax, qword ptr [rbp+10E0h+var_E70+8]
loc_14079A3B8: /*14079a3b8*/ mov r15, qword ptr [rbp+10E0h+var_208+8]
/*14079a3bf*/  mov qword ptr [rbp+10E0h+var_1A8], rax
/*14079a3c6*/  shl rsi, 5
/*14079a3ca*/  add rsi, r15
/*14079a3cd*/  mov [rbp+10E0h+var_1C0], rsi
/*14079a3d4*/  lea rcx, [rbp+10E0h+var_4A0]
/*14079a3db*/  lea rsi, [rbp+10E0h+var_E70]
/*14079a3e2*/  mov [rbp+10E0h+var_4B8], r15
/*14079a3e9*/  jmp short loc_14079A3F2
loc_14079A3EB: /*14079a3eb*/ mov r15, [rbp+10E0h+var_138]
loc_14079A3F2: /*14079a3f2*/ cmp r15, [rbp+10E0h+var_1C0]
/*14079a3f9*/  jz loc_14079AA83
/*14079a3ff*/  lea rax, [r15+20h]
/*14079a403*/  mov [rbp+10E0h+var_138], rax
/*14079a40a*/  mov qword ptr [rbp+10E0h+var_4B0+8], 3
/*14079a415*/  mov qword ptr [rbp+10E0h+var_4A0], 1
/*14079a420*/  mov qword ptr [rbp+10E0h+var_4A0+8], 0
/*14079a42b*/  lea rax, aWal_1; "-wal"
/*14079a432*/  mov qword ptr [rbp+10E0h+var_490], rax
/*14079a439*/  mov qword ptr [rbp+10E0h+var_490+8], 4
/*14079a444*/  lea rax, aShm_0; "-shm"
/*14079a44b*/  mov qword ptr [rbp+10E0h+var_480], rax
/*14079a452*/  mov qword ptr [rbp+10E0h+var_480+8], 4
/*14079a45d*/  xor r13d, r13d
loc_14079A460: /*14079a460*/ mov rax, r13
/*14079a463*/  jmp short loc_14079A47A
loc_14079A470: /*14079a470*/ mov rax, r13
/*14079a473*/  lea rcx, [rbp+10E0h+var_4A0]
loc_14079A47A: /*14079a47a*/ cmp rax, 3
/*14079a47e*/  jz loc_14079A3EB
/*14079a484*/  lea r13, [rax+1]
/*14079a488*/  mov qword ptr [rbp+10E0h+var_4B0], r13
/*14079a48f*/  shl rax, 4
/*14079a493*/  mov rbx, [rcx+rax+8]
/*14079a498*/  mov rdx, [r15+8]
/*14079a49c*/  mov r8, [r15+10h]
/*14079a4a0*/  test rbx, rbx
/*14079a4a3*/  jz loc_14079A5CA
/*14079a4a9*/  mov rdi, [rcx+rax]
/*14079a4ad*/  mov rcx, rsi
/*14079a4b0*/  call sub_14149BB70
/*14079a4b5*/  nop
/*14079a4b6*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*14079a4bd*/  mov al, 1
/*14079a4bf*/  xor r14d, r14d
/*14079a4c2*/  cmp rdx, 3
/*14079a4c6*/  jb short loc_14079A503
/*14079a4c8*/  mov r8, qword ptr [rbp+10E0h+var_E70+8]
/*14079a4cf*/  movzx ecx, byte ptr [r8+rdx-2]
/*14079a4d5*/  mov r9d, ecx
/*14079a4d8*/  and r9b, 0F0h
/*14079a4dc*/  cmp r9b, 0A0h
/*14079a4e0*/  jnz short loc_14079A503
/*14079a4e2*/  cmp byte ptr [r8+rdx-3], 0EDh
/*14079a4e8*/  jnz short loc_14079A503
/*14079a4ea*/  movzx r14d, byte ptr [r8+rdx-1]
/*14079a4f0*/  and ecx, 0Fh
/*14079a4f3*/  and r14d, 3Fh
/*14079a4f7*/  shl ecx, 10h
/*14079a4fa*/  shl r14d, 0Ah
/*14079a4fe*/  or r14d, ecx
/*14079a501*/  xor eax, eax
loc_14079A503: /*14079a503*/ cmp rbx, 3
/*14079a507*/  jb short loc_14079A527
/*14079a509*/  cmp byte ptr [rdi], 0EDh
/*14079a50c*/  jnz short loc_14079A527
/*14079a50e*/  movzx r12d, byte ptr [rdi+1]
/*14079a513*/  mov ecx, r12d
/*14079a516*/  and cl, 0F0h
/*14079a519*/  cmp cl, 0B0h
/*14079a51c*/  setnz cl
/*14079a51f*/  or al, cl
/*14079a521*/  jz loc_14079A5DC
loc_14079A527: /*14079a527*/ cmp byte ptr [rbp+10E0h+var_E60+8], 0
/*14079a52e*/  jz loc_14079A689
/*14079a534*/  lea rax, [rdi+rbx]
/*14079a538*/  mov r8, rdi
/*14079a53b*/  jmp short loc_14079A55C
loc_14079A53D: /*14079a53d*/ add r8, 2
/*14079a541*/  cmp rcx, rax
/*14079a544*/  cmovnz rcx, r8
/*14079a548*/  nop dword ptr [rax+rax+00000000h]
loc_14079A550: /*14079a550*/ mov r8, rcx
/*14079a553*/  cmp rcx, rax
/*14079a556*/  jz loc_14079A689
loc_14079A55C: /*14079a55c*/ lea rcx, [r8+1]
/*14079a560*/  movzx r9d, byte ptr [r8]
/*14079a564*/  test r9b, r9b
/*14079a567*/  jns short loc_14079A550
/*14079a569*/  cmp r9b, 0E0h
/*14079a56d*/  jb short loc_14079A53D
/*14079a56f*/  cmp r9b, 0EDh
/*14079a573*/  jnz short loc_14079A59F
/*14079a575*/  cmp rcx, rax
/*14079a578*/  jz loc_14079A689
/*14079a57e*/  lea rcx, [r8+2]
/*14079a582*/  cmp rcx, rax
/*14079a585*/  jz loc_14079A689
/*14079a58b*/  cmp byte ptr [r8+1], 9Fh
/*14079a590*/  ja loc_14079A682
/*14079a596*/  add r8, 3
/*14079a59a*/  mov rcx, r8
/*14079a59d*/  jmp short loc_14079A550
loc_14079A59F: /*14079a59f*/ add r8, 2
/*14079a5a3*/  cmp rcx, rax
/*14079a5a6*/  cmovz r8, rcx
/*14079a5aa*/  xor ecx, ecx
/*14079a5ac*/  cmp r8, rax
/*14079a5af*/  setnz cl
/*14079a5b2*/  add rcx, r8
/*14079a5b5*/  cmp r9b, 0F0h
/*14079a5b9*/  jb short loc_14079A550
/*14079a5bb*/  xor r8d, r8d
/*14079a5be*/  cmp rcx, rax
/*14079a5c1*/  setnz r8b
/*14079a5c5*/  add rcx, r8
/*14079a5c8*/  jmp short loc_14079A550
loc_14079A5CA: /*14079a5ca*/ lea rcx, [rbp+10E0h+var_720]
/*14079a5d1*/  call sub_1414734D0
/*14079a5d6*/  nop
/*14079a5d7*/  jmp loc_14079A6EE
loc_14079A5DC: /*14079a5dc*/ movzx esi, byte ptr [rdi+2]
/*14079a5e0*/  cmp rdx, 3
/*14079a5e4*/  jb short loc_14079A5F1
/*14079a5e6*/  add rdx, 0FFFFFFFFFFFFFFFDh
/*14079a5ea*/  mov qword ptr [rbp+10E0h+var_E60], rdx
loc_14079A5F1: /*14079a5f1*/ lea r8, [rbx+1]
/*14079a5f5*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079a5fc*/  sub rax, rdx
/*14079a5ff*/  cmp r8, rax
/*14079a602*/  ja loc_14079A7F4
loc_14079A608: /*14079a608*/ shl r12d, 6
/*14079a60c*/  and esi, 3Fh
/*14079a60f*/  or r14d, esi
/*14079a612*/  and r12d, 3C0h
/*14079a619*/  or r12d, r14d
/*14079a61c*/  add r12d, 10000h
loc_14079A623: /*14079a623*/ lea rcx, [rbp+10E0h+var_E70]
/*14079a62a*/  mov edx, r12d
/*14079a62d*/  call sub_14149A2C0
/*14079a632*/  nop
loc_14079A633: /*14079a633*/ lea r12, [rbx-3]
/*14079a637*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079a63e*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*14079a645*/  sub rax, rdx
/*14079a648*/  cmp r12, rax
/*14079a64b*/  ja loc_14079A815
/*14079a651*/  test r12, r12
/*14079a654*/  lea rsi, [rbp+10E0h+var_E70]
/*14079a65b*/  jz short loc_14079A67D
loc_14079A65D: /*14079a65d*/ add rdi, 3
/*14079a661*/  add rdx, qword ptr [rbp+10E0h+var_E70+8]
/*14079a668*/  mov rcx, rdx
/*14079a66b*/  mov rdx, rdi
/*14079a66e*/  mov r8, r12
/*14079a671*/  call sub_141684120
/*14079a676*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
loc_14079A67D: /*14079a67d*/ add rdx, r12
/*14079a680*/  jmp short loc_14079A6BB
loc_14079A682: /*14079a682*/ mov byte ptr [rbp+10E0h+var_E60+8], 0
loc_14079A689: /*14079a689*/ mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079a690*/  sub rax, rdx
/*14079a693*/  cmp rbx, rax
/*14079a696*/  ja loc_14079A7C6
loc_14079A69C: /*14079a69c*/ add rdx, qword ptr [rbp+10E0h+var_E70+8]
/*14079a6a3*/  mov rcx, rdx
/*14079a6a6*/  mov rdx, rdi
/*14079a6a9*/  mov r8, rbx
/*14079a6ac*/  call sub_141684120
/*14079a6b1*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*14079a6b8*/  add rdx, rbx
loc_14079A6BB: /*14079a6bb*/ mov qword ptr [rbp+10E0h+var_E60], rdx
/*14079a6c2*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*14079a6ca*/  movdqa [rbp+10E0h+var_720], xmm0
/*14079a6d2*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079a6d9*/  mov qword ptr [rbp+10E0h+var_710], rax
/*14079a6e0*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*14079a6e7*/  mov qword ptr [rbp+10E0h+var_710+8], rax
loc_14079A6EE: /*14079a6ee*/ mov rdx, qword ptr [rbp+10E0h+var_720+8]
/*14079a6f5*/  mov rdi, qword ptr [rbp+10E0h+var_710]
loc_14079A6FC: /*14079a6fc*/ mov rcx, rsi
/*14079a6ff*/  mov [rbp+10E0h+var_78], rdx
/*14079a706*/  mov r8, rdi
/*14079a709*/  call sub_141486710
/*14079a70e*/  nop
/*14079a70f*/  cmp dword ptr [rbp+10E0h+var_E70], 2
/*14079a716*/  jnz loc_14079A847
/*14079a71c*/  mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*14079a723*/  mov ecx, eax
/*14079a725*/  and ecx, 3
/*14079a728*/  lea edx, [rcx-2]
/*14079a72b*/  cmp edx, 2
/*14079a72e*/  jb short loc_14079A79F
/*14079a730*/  test rcx, rcx
/*14079a733*/  jz short loc_14079A79F
/*14079a735*/  lea rcx, [rax-1]
/*14079a739*/  mov qword ptr [rbp+10E0h+var_A0+8], rcx
/*14079a740*/  mov rcx, [rax-1]
/*14079a744*/  mov [rbp+10E0h+var_88], rcx
/*14079a74b*/  mov rax, [rax+7]
/*14079a74f*/  mov qword ptr [rbp+10E0h+var_A0], rax
/*14079a756*/  mov rax, [rax]
/*14079a759*/  test rax, rax
/*14079a75c*/  jz short loc_14079A768
loc_14079A75E: /*14079a75e*/ mov rcx, [rbp+10E0h+var_88]
/*14079a765*/  call rax
/*14079a767*/  nop
loc_14079A768: /*14079a768*/ mov rcx, [rbp+10E0h+var_88]
/*14079a76f*/  mov rax, qword ptr [rbp+10E0h+var_A0]
/*14079a776*/  mov rdx, [rax+8]
/*14079a77a*/  test rdx, rdx
/*14079a77d*/  jz short loc_14079A788
/*14079a77f*/  mov r8, [rax+10h]
/*14079a783*/  call sub_140001660
loc_14079A788: /*14079a788*/ mov edx, 18h
/*14079a78d*/  mov r8d, 8
/*14079a793*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*14079a79a*/  call sub_140001660
loc_14079A79F: /*14079a79f*/ mov rdx, qword ptr [rbp+10E0h+var_720]
/*14079a7a6*/  test rdx, rdx
/*14079a7a9*/  jz loc_14079A470
/*14079a7af*/  mov r8d, 1
/*14079a7b5*/  mov rcx, [rbp+10E0h+var_78]
/*14079a7bc*/  call sub_140001660
/*14079a7c1*/  jmp loc_14079A470
loc_14079A7C6: /*14079a7c6*/ mov [rsp+1160h+var_1140], 1
/*14079a7cf*/  mov r9d, 1
/*14079a7d5*/  mov rcx, rsi
/*14079a7d8*/  mov r8, rbx
/*14079a7db*/  call sub_141688D30
/*14079a7e0*/  nop
/*14079a7e1*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*14079a7e8*/  lea rsi, [rbp+10E0h+var_E70]
/*14079a7ef*/  jmp loc_14079A69C
loc_14079A7F4: /*14079a7f4*/ mov [rsp+1160h+var_1140], 1
/*14079a7fd*/  mov r9d, 1
/*14079a803*/  lea rcx, [rbp+10E0h+var_E70]
/*14079a80a*/  call sub_141688D30
/*14079a80f*/  nop
/*14079a810*/  jmp loc_14079A608
loc_14079A815: /*14079a815*/ mov [rsp+1160h+var_1140], 1
/*14079a81e*/  mov r9d, 1
/*14079a824*/  lea rcx, [rbp+10E0h+var_E70]
/*14079a82b*/  mov r8, r12
/*14079a82e*/  call sub_141688D30
/*14079a833*/  nop
/*14079a834*/  mov rdx, qword ptr [rbp+10E0h+var_E60]
/*14079a83b*/  lea rsi, [rbp+10E0h+var_E70]
/*14079a842*/  jmp loc_14079A65D
loc_14079A847: /*14079a847*/ mov rcx, [rbp+10E0h+var_78]
/*14079a84e*/  mov rdx, rdi
/*14079a851*/  call sub_1414742C0
/*14079a856*/  nop
/*14079a857*/  test rax, rax
/*14079a85a*/  jz short loc_14079A896
/*14079a85c*/  mov r8, rdx
/*14079a85f*/  mov rcx, rsi
/*14079a862*/  mov rdx, rax
/*14079a865*/  call sub_1414A3C90
/*14079a86a*/  nop
/*14079a86b*/  cmp byte ptr [rbp+10E0h+var_E70], 0
/*14079a872*/  mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*14079a879*/  lea rcx, aStateSqlite_0; "state.sqlite"
/*14079a880*/  cmovnz rax, rcx
/*14079a884*/  mov rcx, qword ptr [rbp+10E0h+var_E60]
/*14079a88b*/  mov edx, 0Ch
/*14079a890*/  cmovnz rcx, rdx
/*14079a894*/  jmp short loc_14079A8A2
loc_14079A896: /*14079a896*/ mov ecx, 0Ch
/*14079a89b*/  lea rax, aStateSqlite_0; "state.sqlite"
loc_14079A8A2: /*14079a8a2*/ mov qword ptr [rbp+10E0h+var_158], rax
/*14079a8a9*/  mov qword ptr [rbp+10E0h+var_158+8], rcx
/*14079a8b0*/  lea rax, [rbp+10E0h+var_1A8]
/*14079a8b7*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*14079a8be*/  lea rax, sub_1414AC520
/*14079a8c5*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
/*14079a8cc*/  lea rax, [rbp+10E0h+var_158]
/*14079a8d3*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079a8da*/  lea rax, sub_14041F680
/*14079a8e1*/  mov qword ptr [rbp+10E0h+var_E60+8], rax
/*14079a8e8*/  lea rcx, [rbp+10E0h+var_100]
/*14079a8ef*/  lea rdx, unk_14178EF14
/*14079a8f6*/  mov r8, rsi
/*14079a8f9*/  call sub_14149C0F0
/*14079a8fe*/  nop
/*14079a8ff*/  mov rcx, rsi
/*14079a902*/  mov rdx, [rbp+10E0h+var_C0]
/*14079a909*/  mov r8, [rbp+10E0h+var_228]
/*14079a910*/  lea r9, [rbp+10E0h+var_100]
/*14079a917*/  call sub_14033DC20
/*14079a91c*/  nop
/*14079a91d*/  mov r8, qword ptr [rbp+10E0h+var_E70+8]
/*14079a924*/  mov r9, qword ptr [rbp+10E0h+var_E60]
loc_14079A92B: /*14079a92b*/ mov rcx, [rbp+10E0h+var_78]
/*14079a932*/  mov rdx, rdi
/*14079a935*/  mov [rbp+10E0h+var_88], r8
/*14079a93c*/  call sub_141486360
/*14079a941*/  nop
/*14079a942*/  test rax, rax
/*14079a945*/  jz short loc_14079A996
/*14079a947*/  mov eax, edx
/*14079a949*/  and eax, 3
/*14079a94c*/  lea ecx, [rax-2]
/*14079a94f*/  cmp ecx, 2
/*14079a952*/  jb loc_14079AA3B
/*14079a958*/  test rax, rax
/*14079a95b*/  jz loc_14079AA3B
/*14079a961*/  lea rax, [rdx-1]
/*14079a965*/  mov [rbp+10E0h+var_1B0], rax
/*14079a96c*/  mov rax, [rdx-1]
/*14079a970*/  mov qword ptr [rbp+10E0h+var_A0], rax
/*14079a977*/  mov rax, [rdx+7]
/*14079a97b*/  mov qword ptr [rbp+10E0h+var_A0+8], rax
/*14079a982*/  mov rax, [rax]
/*14079a985*/  test rax, rax
/*14079a988*/  jz short loc_14079A9F6
loc_14079A98A: /*14079a98a*/ mov rcx, qword ptr [rbp+10E0h+var_A0]
/*14079a991*/  call rax
/*14079a993*/  nop
/*14079a994*/  jmp short loc_14079A9F6
loc_14079A996: /*14079a996*/ mov rcx, [rbp+10E0h+var_78]
/*14079a99d*/  mov rdx, rdi
/*14079a9a0*/  call sub_141485EF0
/*14079a9a5*/  nop
/*14079a9a6*/  test rax, rax
/*14079a9a9*/  jz loc_14079AA2F
/*14079a9af*/  mov ecx, eax
/*14079a9b1*/  and ecx, 3
/*14079a9b4*/  lea edx, [rcx-2]
/*14079a9b7*/  cmp edx, 2
/*14079a9ba*/  jb short loc_14079AA3B
/*14079a9bc*/  test rcx, rcx
/*14079a9bf*/  jz short loc_14079AA3B
/*14079a9c1*/  mov rcx, rax
/*14079a9c4*/  dec rcx
/*14079a9c7*/  mov [rbp+10E0h+var_1B0], rcx
/*14079a9ce*/  mov rcx, [rax-1]
/*14079a9d2*/  mov qword ptr [rbp+10E0h+var_A0], rcx
/*14079a9d9*/  mov rax, [rax+7]
/*14079a9dd*/  mov qword ptr [rbp+10E0h+var_A0+8], rax
/*14079a9e4*/  mov rax, [rax]
/*14079a9e7*/  test rax, rax
/*14079a9ea*/  jz short loc_14079A9F6
loc_14079A9EC: /*14079a9ec*/ mov rcx, qword ptr [rbp+10E0h+var_A0]
/*14079a9f3*/  call rax
/*14079a9f5*/  nop
loc_14079A9F6: /*14079a9f6*/ mov rcx, qword ptr [rbp+10E0h+var_A0]
/*14079a9fd*/  mov rax, qword ptr [rbp+10E0h+var_A0+8]
/*14079aa04*/  mov rdx, [rax+8]
/*14079aa08*/  test rdx, rdx
/*14079aa0b*/  jz short loc_14079AA16
/*14079aa0d*/  mov r8, [rax+10h]
/*14079aa11*/  call sub_140001660
loc_14079AA16: /*14079aa16*/ mov edx, 18h
/*14079aa1b*/  mov r8d, 8
/*14079aa21*/  mov rcx, [rbp+10E0h+var_1B0]
/*14079aa28*/  call sub_140001660
/*14079aa2d*/  jmp short loc_14079AA3B
loc_14079AA2F: /*14079aa2f*/ cmp rbx, 1
/*14079aa33*/  adc [rbp+10E0h+var_4C0], 0
loc_14079AA3B: /*14079aa3b*/ mov rdx, qword ptr [rbp+10E0h+var_E70]
/*14079aa42*/  test rdx, rdx
/*14079aa45*/  jz short loc_14079AA59
/*14079aa47*/  mov r8d, 1
/*14079aa4d*/  mov rcx, [rbp+10E0h+var_88]
/*14079aa54*/  call sub_140001660
loc_14079AA59: /*14079aa59*/ mov rdx, qword ptr [rbp+10E0h+var_720]
/*14079aa60*/  test rdx, rdx
/*14079aa63*/  jz short loc_14079AA77
/*14079aa65*/  mov r8d, 1
/*14079aa6b*/  mov rcx, [rbp+10E0h+var_78]
/*14079aa72*/  call sub_140001660
loc_14079AA77: /*14079aa77*/ lea rcx, [rbp+10E0h+var_4A0]
/*14079aa7e*/  jmp loc_14079A460
loc_14079AA83: /*14079aa83*/ mov rax, [rbp+10E0h+var_4C0]
/*14079aa8a*/  mov [rbp+10E0h+var_170], rax
loc_14079AA91: /*14079aa91*/ lea rcx, [rbp+10E0h+var_E0]
/*14079aa98*/  mov rdx, [rbp+10E0h+var_A8]
/*14079aa9f*/  mov r8, [rbp+10E0h+var_B8]
/*14079aaa6*/  call sub_1407635A0
/*14079aaab*/  nop
/*14079aaac*/  mov rdi, [rbp+10E0h+var_D0]
/*14079aab3*/  test rdi, rdi
/*14079aab6*/  jz loc_14079BC95
/*14079aabc*/  mov rdx, qword ptr [rbp+10E0h+var_E0+8]
/*14079aac3*/  mov r8, rdi
/*14079aac6*/  shl r8, 5
/*14079aaca*/  add r8, rdx
loc_14079AACD: /*14079aacd*/ lea rcx, [rbp+10E0h+var_1A8]
/*14079aad4*/  call sub_1403118F0
/*14079aad9*/  nop
/*14079aada*/  mov qword ptr [rbp+10E0h+var_158], 0
/*14079aae5*/  mov qword ptr [rbp+10E0h+var_158+8], 8
/*14079aaf0*/  mov qword ptr [rbp+10E0h+var_148], 0
/*14079aafb*/  call nullsub_1
/*14079ab00*/  mov ecx, 18h
/*14079ab05*/  mov edx, 8
/*14079ab0a*/  call sub_140001650
/*14079ab0f*/  test rax, rax
/*14079ab12*/  jz loc_14079CBE9
/*14079ab18*/  mov rsi, rax
/*14079ab1b*/  call nullsub_1
/*14079ab20*/  mov ecx, 13h
/*14079ab25*/  mov edx, 1
/*14079ab2a*/  call sub_140001650
/*14079ab2f*/  test rax, rax
/*14079ab32*/  jz loc_14079CF3A
/*14079ab38*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*14079ab40*/  movdqu xmmword ptr [rax], xmm0
/*14079ab44*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*14079ab4b*/  mov qword ptr [rsi], 13h
/*14079ab52*/  mov [rsi+8], rax
/*14079ab56*/  mov qword ptr [rsi+10h], 13h
/*14079ab5e*/  mov qword ptr [rbp+10E0h+var_100], 1
/*14079ab69*/  mov qword ptr [rbp+10E0h+var_100+8], rsi
/*14079ab70*/  mov [rbp+10E0h+var_F0], 1
/*14079ab7b*/  call nullsub_1
/*14079ab80*/  mov ecx, 18h
/*14079ab85*/  mov edx, 8
/*14079ab8a*/  call sub_140001650
/*14079ab8f*/  mov [rbp+10E0h+var_78], rax
/*14079ab96*/  test rax, rax
/*14079ab99*/  jz loc_14079CBFE
/*14079ab9f*/  mov qword ptr [rbp+10E0h+var_E88], rdi
/*14079aba6*/  mov rdi, qword ptr [rbp+10E0h+var_1A8+8]
/*14079abad*/  mov r8, [rbp+10E0h+var_198]
loc_14079ABB4: /*14079abb4*/ mov [rsp+1160h+var_1140], 2
/*14079abbd*/  lea r9, unk_141789F28
/*14079abc4*/  lea rcx, [rbp+10E0h+var_E70]
/*14079abcb*/  mov rdx, rdi
/*14079abce*/  call sub_140440300
/*14079abd3*/  nop
/*14079abd4*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079abdb*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079abe2*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*14079abea*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079abf2*/  lea rax, [rbp+10E0h+var_E88]
/*14079abf9*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*14079ac00*/  lea rax, sub_1414AC520
/*14079ac07*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
/*14079ac0e*/  lea rax, [rbp+10E0h+var_4B0]
/*14079ac15*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079ac1c*/  lea rax, sub_1400015F0
/*14079ac23*/  mov qword ptr [rbp+10E0h+var_E60+8], rax
loc_14079AC2A: /*14079ac2a*/ lea rdx, unk_14178D015
/*14079ac31*/  lea rcx, [rbp+10E0h+var_720]
/*14079ac38*/  lea r8, [rbp+10E0h+var_E70]
/*14079ac3f*/  call sub_14149C0F0
/*14079ac44*/  nop
/*14079ac45*/  mov rsi, [rbp+10E0h+var_1B8]
/*14079ac4c*/  mov [rbp+10E0h+var_88], rdi
/*14079ac53*/  mov rdx, qword ptr [rbp+10E0h+var_4B0]
/*14079ac5a*/  test rdx, rdx
/*14079ac5d*/  jz short loc_14079AC71
/*14079ac5f*/  mov rcx, qword ptr [rbp+10E0h+var_4B0+8]
/*14079ac66*/  mov r8d, 1
/*14079ac6c*/  call sub_140001660
loc_14079AC71: /*14079ac71*/ mov rax, qword ptr [rbp+10E0h+var_710]
/*14079ac78*/  mov rdx, [rbp+10E0h+var_78]
/*14079ac7f*/  mov [rdx+10h], rax
/*14079ac83*/  movups xmm0, [rbp+10E0h+var_720]
/*14079ac8a*/  movups xmmword ptr [rdx], xmm0
/*14079ac8d*/  movdqu xmm0, [rbp+10E0h+var_158]
/*14079ac95*/  movdqa [rbp+10E0h+var_E70], xmm0
/*14079ac9d*/  mov rax, qword ptr [rbp+10E0h+var_148]
/*14079aca4*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079acab*/  movdqu xmm1, [rbp+10E0h+var_100]
/*14079acb3*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*14079acbb*/  mov rax, [rbp+10E0h+var_F0]
/*14079acc2*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*14079acc9*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079acd0*/  mov rcx, [rbp+10E0h+var_70]
/*14079acd7*/  mov [rcx+28h], rax
/*14079acdb*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*14079ace2*/  mov [rcx+30h], rax
/*14079ace6*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079aced*/  mov [rcx+18h], rax
/*14079acf1*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*14079acf8*/  mov [rcx+20h], rax
/*14079acfc*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079ad01*/  mov qword ptr [rcx+38h], 1
/*14079ad09*/  mov [rcx+40h], rdx
/*14079ad0d*/  mov qword ptr [rcx+48h], 1
/*14079ad15*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
loc_14079AD1C: /*14079ad1c*/ lea rcx, [rbp+10E0h+var_1A8]
/*14079ad23*/  call sub_140334760
/*14079ad28*/  nop
/*14079ad29*/  mov rax, qword ptr [rbp+10E0h+var_1A8]
/*14079ad30*/  test rax, rax
/*14079ad33*/  jz loc_14079BE1E
/*14079ad39*/  shl rax, 3
/*14079ad3d*/  lea rdx, [rax+rax*2]
/*14079ad41*/  mov r8d, 8
/*14079ad47*/  mov rcx, [rbp+10E0h+var_88]
/*14079ad4e*/  call sub_140001660
/*14079ad53*/  jmp loc_14079BE1E
loc_14079AD58: /*14079ad58*/ lea rcx, [rbp+10E0h+var_E70]
/*14079ad5f*/  lea r8, [rbp+10E0h+var_130]
/*14079ad66*/  mov rdx, rdi
/*14079ad69*/  movzx r9d, byte ptr [rbp+10E0h+var_A0]
/*14079ad71*/  call check_rollout_orphan_providers
/*14079ad76*/  nop
/*14079ad77*/  cmp qword ptr [rbp+10E0h+var_E50+8], 2
/*14079ad7f*/  jnz short loc_14079AD93
/*14079ad81*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079ad88*/  cmp word ptr [rax], 6B6Fh
/*14079ad8d*/  jz loc_14079C444
loc_14079AD93: /*14079ad93*/ mov qword ptr [rbp+10E0h+var_158], 0
/*14079ad9e*/  mov qword ptr [rbp+10E0h+var_158+8], 8
/*14079ada9*/  mov qword ptr [rbp+10E0h+var_148], 0
/*14079adb4*/  call nullsub_1
/*14079adb9*/  mov ecx, 18h
/*14079adbe*/  mov edx, 8
/*14079adc3*/  call sub_140001650
/*14079adc8*/  test rax, rax
/*14079adcb*/  jz loc_14079CB95
/*14079add1*/  mov rsi, rax
/*14079add4*/  call nullsub_1
/*14079add9*/  mov ecx, 18h
/*14079adde*/  mov edx, 1
/*14079ade3*/  call sub_140001650
/*14079ade8*/  test rax, rax
/*14079adeb*/  jz loc_14079CF08
/*14079adf1*/  movdqu xmm0, xmmword ptr cs:aRolloutOrphanP; "rollout_orphan_providers"
/*14079adf9*/  movdqu xmmword ptr [rax], xmm0
/*14079adfd*/  mov rcx, 7372656469766F72h
/*14079ae07*/  mov [rax+10h], rcx
/*14079ae0b*/  mov qword ptr [rsi], 18h
/*14079ae12*/  mov [rsi+8], rax
/*14079ae16*/  mov qword ptr [rsi+10h], 18h
/*14079ae1e*/  mov qword ptr [rbp+10E0h+var_100], 1
/*14079ae29*/  mov qword ptr [rbp+10E0h+var_100+8], rsi
/*14079ae30*/  mov [rbp+10E0h+var_F0], 1
/*14079ae3b*/  call nullsub_1
/*14079ae40*/  mov ecx, 18h
/*14079ae45*/  mov edx, 8
/*14079ae4a*/  call sub_140001650
/*14079ae4f*/  mov [rbp+10E0h+var_78], rax
/*14079ae56*/  test rax, rax
/*14079ae59*/  jz loc_14079CBAA
/*14079ae5f*/  lea rax, [rbp+10E0h+var_E40]
/*14079ae66*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079ae6d*/  lea rax, sub_1400015F0
/*14079ae74*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
loc_14079AE7B: /*14079ae7b*/ lea rdx, unk_14178E586
/*14079ae82*/  lea rcx, [rbp+10E0h+var_1A8]
/*14079ae89*/  lea r8, [rbp+10E0h+var_4B0]
/*14079ae90*/  call sub_14149C0F0
/*14079ae95*/  nop
/*14079ae96*/  mov rax, [rbp+10E0h+var_198]
/*14079ae9d*/  mov rdx, [rbp+10E0h+var_78]
/*14079aea4*/  mov [rdx+10h], rax
/*14079aea8*/  movups xmm0, [rbp+10E0h+var_1A8]
/*14079aeaf*/  movups xmmword ptr [rdx], xmm0
/*14079aeb2*/  movdqu xmm0, [rbp+10E0h+var_158]
/*14079aeba*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079aec2*/  mov rax, qword ptr [rbp+10E0h+var_148]
/*14079aec9*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079aed0*/  movdqu xmm1, [rbp+10E0h+var_100]
/*14079aed8*/  movdqu [rbp+10E0h+var_4A0+8], xmm1
/*14079aee0*/  mov rax, [rbp+10E0h+var_F0]
/*14079aee7*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079aeee*/  mov rax, qword ptr [rbp+10E0h+var_490]
/*14079aef5*/  mov rcx, [rbp+10E0h+var_70]
/*14079aefc*/  mov [rcx+28h], rax
/*14079af00*/  mov rax, qword ptr [rbp+10E0h+var_490+8]
/*14079af07*/  mov [rcx+30h], rax
/*14079af0b*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079af12*/  mov [rcx+18h], rax
/*14079af16*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
/*14079af1d*/  mov [rcx+20h], rax
/*14079af21*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079af26*/  mov qword ptr [rcx+38h], 1
/*14079af2e*/  mov [rcx+40h], rdx
/*14079af32*/  mov qword ptr [rcx+48h], 1
/*14079af3a*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079af41*/  lea rcx, [rbp+10E0h+var_E70]
/*14079af48*/  call sub_1406CE150
/*14079af4d*/  nop
loc_14079AF4E: /*14079af4e*/ lea rcx, [rbp+10E0h+var_720]
/*14079af55*/  call sub_14067FFB0
/*14079af5a*/  nop
loc_14079AF5B: /*14079af5b*/ mov rcx, rbp
/*14079af5e*/  call sub_14067FEC0
/*14079af63*/  nop
loc_14079AF64: /*14079af64*/ lea rcx, [rbp+10E0h+var_E0]
/*14079af6b*/  call sub_140335260
/*14079af70*/  nop
/*14079af71*/  mov rax, qword ptr [rbp+10E0h+var_E0]
/*14079af78*/  test rax, rax
/*14079af7b*/  jz loc_1407980C0
/*14079af81*/  imul rdx, rax, 70h ; 'p'
/*14079af85*/  mov r8d, 8
/*14079af8b*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*14079af92*/  call sub_140001660
/*14079af97*/  jmp loc_1407980C0
loc_14079AF9C: /*14079af9c*/ mov [rsp+1160h+var_1140], 18h
/*14079afa5*/  lea r9, unk_14178BDE1
/*14079afac*/  lea rcx, [rbp+10E0h+var_190]
/*14079afb3*/  mov rdx, qword ptr [rbp+10E0h+var_A0]
/*14079afba*/  mov r8, qword ptr [rbp+10E0h+var_A0+8]
/*14079afc1*/  call sub_141473FA0
/*14079afc6*/  nop
/*14079afc7*/  call nullsub_1
/*14079afcc*/  mov ecx, 20h ; ' '
/*14079afd1*/  mov edx, 8
/*14079afd6*/  call sub_140001650
/*14079afdb*/  mov [rbp+10E0h+var_78], rax
/*14079afe2*/  test rax, rax
/*14079afe5*/  jz loc_14079CB80
/*14079afeb*/  mov rbx, qword ptr [rbp+10E0h+var_190+8]
/*14079aff2*/  mov r14, [rbp+10E0h+var_180]
loc_14079AFF9: /*14079aff9*/ mov [rsp+1160h+var_1140], 0Ch
/*14079b002*/  lea r9, unk_14178C424
/*14079b009*/  lea rcx, [rbp+10E0h+var_E70]
/*14079b010*/  mov rdx, rbx
/*14079b013*/  mov r8, r14
/*14079b016*/  call sub_141473FA0
/*14079b01b*/  nop
/*14079b01c*/  movdqu xmm0, [rbp+10E0h+var_E70]
/*14079b024*/  movdqu xmm1, [rbp+10E0h+var_E60]
/*14079b02c*/  mov rax, [rbp+10E0h+var_78]
/*14079b033*/  movdqu xmmword ptr [rax+10h], xmm1
/*14079b038*/  movdqu xmmword ptr [rax], xmm0
/*14079b03c*/  mov qword ptr [rbp+10E0h+var_E0], 1
/*14079b047*/  mov qword ptr [rbp+10E0h+var_E0+8], rax
/*14079b04e*/  mov [rbp+10E0h+var_D0], 1
/*14079b059*/  mov [rbp+10E0h+var_79], 1
loc_14079B060: /*14079b060*/ mov [rsp+1160h+var_1140], 7
/*14079b069*/  lea r9, aHistory; "history"
/*14079b070*/  lea rcx, [rbp+10E0h+var_E70]
/*14079b077*/  mov rdx, rbx
/*14079b07a*/  mov r8, r14
/*14079b07d*/  call sub_141473FA0
/*14079b082*/  nop
/*14079b083*/  mov [rbp+10E0h+var_79], 1
/*14079b08a*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079b091*/  lea rdx, [rbp+10E0h+var_E70]
/*14079b098*/  call sub_140690660
/*14079b09d*/  nop
loc_14079B09E: /*14079b09e*/ cmp dword ptr [rbp+10E0h+var_4B0], 2
/*14079b0a5*/  jz loc_14079B271
/*14079b0ab*/  lea rcx, [rbp+10E0h+var_9B0]
/*14079b0b2*/  lea rdx, [rbp+10E0h+var_4B0]
/*14079b0b9*/  mov r8d, 270h
/*14079b0bf*/  call sub_141684120
/*14079b0c4*/  mov qword ptr [rbp+10E0h+var_E70], 0
/*14079b0cf*/  mov [rbp+10E0h+var_C10], 0
/*14079b0da*/  mov rbx, rbp
/*14079b0dd*/  lea r14, [rbp+10E0h+var_E70]
/*14079b0e4*/  lea r15, [rbp+10E0h+var_720]
/*14079b0eb*/  lea r12, [rbp+10E0h+var_130]
/*14079b0f2*/  lea r13, [rbp+10E0h+var_1A8]
/*14079b0f9*/  jmp short loc_14079B104
loc_14079B0FB: /*14079b0fb*/ mov rcx, r15
/*14079b0fe*/  call sub_140F8A980
/*14079b103*/  nop
loc_14079B104: /*14079b104*/ mov rcx, rbx
/*14079b107*/  mov rdx, r14
/*14079b10a*/  call sub_1407BC170
/*14079b10f*/  nop
loc_14079B110: /*14079b110*/ cmp qword ptr [rbp+10E0h+var_10E0], 0
/*14079b115*/  jz loc_14079B25A
/*14079b11b*/  mov r8d, 258h
/*14079b121*/  mov rcx, r15
/*14079b124*/  mov rdx, rbx
/*14079b127*/  call sub_141684120
/*14079b12c*/  nop
loc_14079B12D: /*14079b12d*/ mov rcx, r12
/*14079b130*/  mov rdx, r15
/*14079b133*/  call sub_14147B870
/*14079b138*/  nop
/*14079b139*/  mov rcx, qword ptr [rbp+10E0h+var_130+8]
/*14079b140*/  mov rdx, qword ptr [rbp+10E0h+var_120]
/*14079b147*/  mov [rbp+10E0h+var_7D], 1
loc_14079B14E: /*14079b14e*/ mov [rbp+10E0h+var_78], rcx
/*14079b155*/  call sub_141474250
/*14079b15a*/  nop
/*14079b15b*/  test rax, rax
/*14079b15e*/  jz short loc_14079B198
/*14079b160*/  mov r8, rdx
/*14079b163*/  mov [rbp+10E0h+var_7D], 1
/*14079b16a*/  mov rcx, r13
/*14079b16d*/  mov rdx, rax
/*14079b170*/  call sub_1414A3C90
/*14079b175*/  nop
/*14079b176*/  cmp dword ptr [rbp+10E0h+var_1A8], 1
/*14079b17d*/  jz short loc_14079B198
/*14079b17f*/  cmp [rbp+10E0h+var_198], 4
/*14079b187*/  jnz short loc_14079B198
/*14079b189*/  mov rax, qword ptr [rbp+10E0h+var_1A8+8]
/*14079b190*/  cmp dword ptr [rax], 6E6F736Ah
/*14079b196*/  jz short loc_14079B1CC
loc_14079B198: /*14079b198*/ mov rdx, qword ptr [rbp+10E0h+var_130]
/*14079b19f*/  test rdx, rdx
/*14079b1a2*/  jz short loc_14079B1B6
/*14079b1a4*/  mov r8d, 1
/*14079b1aa*/  mov rcx, [rbp+10E0h+var_78]
/*14079b1b1*/  call sub_140001660
loc_14079B1B6: /*14079b1b6*/ mov rax, qword ptr [rbp+10E0h+var_720]
/*14079b1bd*/  lock dec qword ptr [rax]
/*14079b1c1*/  jnz loc_14079B104
/*14079b1c7*/  jmp loc_14079B0FB
loc_14079B1CC: /*14079b1cc*/ mov r13, rsi
/*14079b1cf*/  mov rax, qword ptr [rbp+10E0h+var_130]
/*14079b1d6*/  mov [rbp+10E0h+var_88], rax
/*14079b1dd*/  mov rsi, [rbp+10E0h+var_D0]
/*14079b1e4*/  cmp rsi, qword ptr [rbp+10E0h+var_E0]
/*14079b1eb*/  jnz short loc_14079B1FA
loc_14079B1ED: /*14079b1ed*/ lea rcx, [rbp+10E0h+var_E0]
/*14079b1f4*/  call sub_1416890A0
/*14079b1f9*/  nop
loc_14079B1FA: /*14079b1fa*/ mov rax, qword ptr [rbp+10E0h+var_E0+8]
/*14079b201*/  mov rcx, rsi
/*14079b204*/  shl rcx, 5
/*14079b208*/  mov rdx, [rbp+10E0h+var_88]
/*14079b20f*/  mov [rax+rcx], rdx
/*14079b213*/  mov rdx, [rbp+10E0h+var_78]
/*14079b21a*/  mov [rax+rcx+8], rdx
/*14079b21f*/  lea rdx, [rbp+10E0h+var_120]
/*14079b226*/  movdqu xmm0, xmmword ptr [rdx]
/*14079b22a*/  movdqu xmmword ptr [rax+rcx+10h], xmm0
/*14079b230*/  inc rsi
/*14079b233*/  mov [rbp+10E0h+var_D0], rsi
/*14079b23a*/  mov rsi, r13
/*14079b23d*/  lea r13, [rbp+10E0h+var_1A8]
/*14079b244*/  mov rax, qword ptr [rbp+10E0h+var_720]
/*14079b24b*/  lock dec qword ptr [rax]
/*14079b24f*/  jnz loc_14079B104
/*14079b255*/  jmp loc_14079B0FB
loc_14079B25A: /*14079b25a*/ lea rcx, [rbp+10E0h+var_E70]
/*14079b261*/  call sub_14043C3D0
/*14079b266*/  nop
/*14079b267*/  cmp qword ptr [rbp+10E0h+var_4B0], 2
/*14079b26f*/  jnz short loc_14079B285
loc_14079B271: /*14079b271*/ mov rcx, qword ptr [rbp+10E0h+var_4B0+8]
/*14079b278*/  mov [rbp+10E0h+var_79], 1
loc_14079B27F: /*14079b27f*/ call sub_1401DD260
/*14079b284*/  nop
loc_14079B285: /*14079b285*/ mov rax, qword ptr [rbp+10E0h+var_E0]
/*14079b28c*/  mov r12, qword ptr [rbp+10E0h+var_E0+8]
/*14079b293*/  mov r13, [rbp+10E0h+var_D0]
/*14079b29a*/  shl r13, 5
/*14079b29e*/  add r13, r12
/*14079b2a1*/  mov qword ptr [rbp+10E0h+var_10E0], r12
/*14079b2a5*/  mov qword ptr [rbp+10E0h+var_10E0+8], r12
/*14079b2a9*/  mov qword ptr [rbp+10E0h+var_10D0], rax
/*14079b2ad*/  mov qword ptr [rbp+10E0h+var_10D0+8], r13
/*14079b2b1*/  xorps xmm6, xmm6
/*14079b2b4*/  lea r15, [rbp+10E0h+var_720]
/*14079b2bb*/  lea rbx, [rbp+10E0h+var_130]
/*14079b2c2*/  mov [rbp+10E0h+var_C8], 0
loc_14079B2CD: /*14079b2cd*/ mov rax, r12
loc_14079B2D0: /*14079b2d0*/ cmp rax, r13
/*14079b2d3*/  jz loc_14079B99C
/*14079b2d9*/  lea r12, [rax+20h]
/*14079b2dd*/  mov qword ptr [rbp+10E0h+var_10E0+8], r12
/*14079b2e1*/  mov rcx, [rax]
/*14079b2e4*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*14079b2e8*/  jz loc_14079B99C
loc_14079B2EE: /*14079b2ee*/ mov [rbp+10E0h+var_78], rcx
/*14079b2f5*/  mov rdx, [rax+8]
/*14079b2f9*/  mov r14, [rax+10h]
/*14079b2fd*/  lea rcx, [rbp+10E0h+var_E70]
/*14079b304*/  mov [rbp+10E0h+var_88], rdx
/*14079b30b*/  mov r8, r14
/*14079b30e*/  call sub_14148D130
/*14079b313*/  nop
/*14079b314*/  mov rax, qword ptr [rbp+10E0h+var_E70]
/*14079b31b*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*14079b322*/  cmp rax, 0FFFFFFFFFFFFFFFFh
/*14079b326*/  jz loc_14079B3B1
/*14079b32c*/  mov qword ptr [rbp+10E0h+var_A0], rax
/*14079b333*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079b33a*/  mov qword ptr [rbp+10E0h+var_E70], rcx
/*14079b341*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
/*14079b348*/  lea rdx, [rbp+10E0h+var_E60]
/*14079b34f*/  movups xmmword ptr [rdx], xmm6
/*14079b352*/  mov qword ptr [rbp+10E0h+var_A0+8], rcx
/*14079b359*/  mov qword ptr [rbp+10E0h+var_E50], rcx
/*14079b360*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
loc_14079B367: /*14079b367*/ lea rcx, [rbp+10E0h+var_4B0]
/*14079b36e*/  lea rdx, [rbp+10E0h+var_E70]
/*14079b375*/  call sub_1408A6200
/*14079b37a*/  nop
/*14079b37b*/  cmp byte ptr [rbp+10E0h+var_4B0], 0FFh
/*14079b382*/  jnz short loc_14079B3E1
/*14079b384*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079b38b*/  call sub_1406C9CF0
/*14079b390*/  nop
/*14079b391*/  mov rdx, qword ptr [rbp+10E0h+var_A0]
/*14079b398*/  test rdx, rdx
/*14079b39b*/  jz short loc_14079B3B7
/*14079b39d*/  mov r8d, 1
/*14079b3a3*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*14079b3aa*/  call sub_140001660
/*14079b3af*/  jmp short loc_14079B3B7
loc_14079B3B1: /*14079b3b1*/ call sub_1401DD260
/*14079b3b6*/  nop
loc_14079B3B7: /*14079b3b7*/ mov rax, r12
/*14079b3ba*/  mov rdx, [rbp+10E0h+var_78]
/*14079b3c1*/  test rdx, rdx
/*14079b3c4*/  jz loc_14079B2D0
loc_14079B3CA: /*14079b3ca*/ mov r8d, 1
/*14079b3d0*/  mov rcx, [rbp+10E0h+var_88]
/*14079b3d7*/  call sub_140001660
/*14079b3dc*/  jmp loc_14079B2CD
loc_14079B3E1: /*14079b3e1*/ mov [rbp+10E0h+var_138], rsi
/*14079b3e8*/  movdqu xmm0, [rbp+10E0h+var_4B0]
/*14079b3f0*/  movdqu xmm1, [rbp+10E0h+var_4A0]
/*14079b3f8*/  movdqa [rbp+10E0h+var_710], xmm1
/*14079b400*/  movdqa [rbp+10E0h+var_720], xmm0
loc_14079B408: /*14079b408*/ mov edx, 7
/*14079b40d*/  lea rcx, aEntries_1; "entries"
/*14079b414*/  mov r8, r15
/*14079b417*/  call sub_141433D50
/*14079b41c*/  nop
/*14079b41d*/  test rax, rax
/*14079b420*/  jz loc_14079B94B
/*14079b426*/  cmp byte ptr [rax], 4
/*14079b429*/  jnz loc_14079B94B
/*14079b42f*/  mov rcx, [rax+10h]
/*14079b433*/  mov rax, [rax+18h]
/*14079b437*/  shl rax, 5
/*14079b43b*/  mov [rbp+10E0h+var_1C0], rcx
/*14079b442*/  add rax, rcx
/*14079b445*/  mov [rbp+10E0h+var_228], rax
/*14079b44c*/  mov [rbp+10E0h+var_C0], 0
loc_14079B457: /*14079b457*/ mov rax, [rbp+10E0h+var_1C0]
/*14079b45e*/  mov rcx, [rbp+10E0h+var_228]
loc_14079B465: /*14079b465*/ cmp rax, rcx
/*14079b468*/  jz loc_14079B7C0
/*14079b46e*/  lea rdx, [rax+20h]
/*14079b472*/  cmp byte ptr [rax], 5
/*14079b475*/  mov rax, rdx
/*14079b478*/  jnz short loc_14079B465
/*14079b47a*/  mov [rbp+10E0h+var_1C0], rdx
/*14079b481*/  mov rcx, [rdx-18h]
/*14079b485*/  test rcx, rcx
/*14079b488*/  jz short loc_14079B4A1
/*14079b48a*/  mov rax, [rbp+10E0h+var_1C0]
/*14079b491*/  mov rdx, [rax-10h]
/*14079b495*/  mov rax, [rax-8]
/*14079b499*/  mov r8d, 1
/*14079b49f*/  jmp short loc_14079B4A6
loc_14079B4A1: /*14079b4a1*/ xor eax, eax
/*14079b4a3*/  xor r8d, r8d
loc_14079B4A6: /*14079b4a6*/ mov qword ptr [rbp+10E0h+var_4B0], r8
/*14079b4ad*/  mov qword ptr [rbp+10E0h+var_4B0+8], 0
/*14079b4b8*/  mov qword ptr [rbp+10E0h+var_4A0], rcx
/*14079b4bf*/  mov qword ptr [rbp+10E0h+var_4A0+8], rdx
/*14079b4c6*/  mov qword ptr [rbp+10E0h+var_490], r8
/*14079b4cd*/  mov qword ptr [rbp+10E0h+var_490+8], 0
/*14079b4d8*/  mov qword ptr [rbp+10E0h+var_480], rcx
/*14079b4df*/  mov qword ptr [rbp+10E0h+var_480+8], rdx
/*14079b4e6*/  jmp short loc_14079B4EF
loc_14079B4E8: /*14079b4e8*/ mov rax, qword ptr [rbp+10E0h+var_470]
loc_14079B4EF: /*14079b4ef*/ test rax, rax
/*14079b4f2*/  jz loc_14079B457
/*14079b4f8*/  dec rax
/*14079b4fb*/  mov qword ptr [rbp+10E0h+var_470], rax
/*14079b502*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079b509*/  call sub_1406B1170
/*14079b50e*/  test rax, rax
/*14079b511*/  jz loc_14079CB36
/*14079b517*/  mov r8, [rax]
/*14079b51a*/  mov rdx, [rax+8]
/*14079b51e*/  mov rcx, [rax+10h]
/*14079b522*/  movzx r9d, word ptr [r8+272h]
/*14079b52a*/  cmp rcx, r9
/*14079b52d*/  jnb short loc_14079B534
/*14079b52f*/  mov rbx, r8
/*14079b532*/  jmp short loc_14079B55B
loc_14079B534: /*14079b534*/ mov rbx, [r8+160h]
/*14079b53b*/  test rbx, rbx
/*14079b53e*/  jz loc_14079CC80
/*14079b544*/  inc rdx
/*14079b547*/  movzx ecx, word ptr [r8+270h]
/*14079b54f*/  mov r8, rbx
/*14079b552*/  cmp cx, [rbx+272h]
/*14079b559*/  jnb short loc_14079B534
loc_14079B55B: /*14079b55b*/ test rdx, rdx
/*14079b55e*/  jz short loc_14079B591
/*14079b560*/  lea r8, [rbx+rcx*8]
/*14079b564*/  add r8, 280h
/*14079b56b*/  mov r10, rdx
/*14079b56e*/  and r10, 7
/*14079b572*/  jz short loc_14079B59A
/*14079b574*/  xor r11d, r11d
loc_14079B577: /*14079b577*/ mov r9, [r8]
/*14079b57a*/  lea r8, [r9+278h]
/*14079b581*/  inc r11
/*14079b584*/  cmp r10, r11
/*14079b587*/  jnz short loc_14079B577
/*14079b589*/  mov r10, rdx
/*14079b58c*/  sub r10, r11
/*14079b58f*/  jmp short loc_14079B59D
loc_14079B591: /*14079b591*/ lea rdx, [rcx+1]
/*14079b595*/  mov r9, rbx
/*14079b598*/  jmp short loc_14079B5E6
loc_14079B59A: /*14079b59a*/ mov r10, rdx
loc_14079B59D: /*14079b59d*/ cmp rdx, 8
/*14079b5a1*/  jb short loc_14079B5E4
loc_14079B5A3: /*14079b5a3*/ mov rdx, [r8]
/*14079b5a6*/  mov rdx, [rdx+278h]
/*14079b5ad*/  mov rdx, [rdx+278h]
/*14079b5b4*/  mov rdx, [rdx+278h]
/*14079b5bb*/  mov rdx, [rdx+278h]
/*14079b5c2*/  mov rdx, [rdx+278h]
/*14079b5c9*/  mov rdx, [rdx+278h]
/*14079b5d0*/  mov r9, [rdx+278h]
/*14079b5d7*/  lea r8, [r9+278h]
/*14079b5de*/  add r10, 0FFFFFFFFFFFFFFF8h
/*14079b5e2*/  jnz short loc_14079B5A3
loc_14079B5E4: /*14079b5e4*/ xor edx, edx
loc_14079B5E6: /*14079b5e6*/ mov [rax], r9
/*14079b5e9*/  mov qword ptr [rax+8], 0
/*14079b5f1*/  mov [rax+10h], rdx
/*14079b5f5*/  shl rcx, 5
/*14079b5f9*/  cmp byte ptr [rbx+rcx], 3
/*14079b5fd*/  jnz loc_14079B4E8
/*14079b603*/  add rbx, rcx
/*14079b606*/  mov r15, [rbx+10h]
/*14079b60a*/  mov [rbp+10E0h+var_90], rbx
/*14079b611*/  mov rbx, [rbx+18h]
/*14079b615*/  mov rcx, r15
/*14079b618*/  mov rdx, rbx
/*14079b61b*/  call sub_14078EA80
/*14079b620*/  nop
loc_14079B621: /*14079b621*/ test al, al
/*14079b623*/  jz loc_14079B4E8
/*14079b629*/  mov [rsp+1160h+var_1140], 1
/*14079b632*/  mov r9d, 1
/*14079b638*/  lea rcx, [rbp+10E0h+var_E70]
/*14079b63f*/  mov rdx, rbx
/*14079b642*/  xor r8d, r8d
/*14079b645*/  call sub_140388B60
/*14079b64a*/  mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*14079b651*/  mov [rbp+10E0h+var_A8], rax
/*14079b658*/  cmp dword ptr [rbp+10E0h+var_E70], 1
/*14079b65f*/  jz loc_14079CC13
/*14079b665*/  mov rsi, qword ptr [rbp+10E0h+var_E60]
/*14079b66c*/  test rbx, rbx
/*14079b66f*/  jz short loc_14079B680
/*14079b671*/  mov rcx, rsi
/*14079b674*/  mov rdx, r15
/*14079b677*/  mov r8, rbx
/*14079b67a*/  call sub_141684120
/*14079b67f*/  nop
loc_14079B680: /*14079b680*/ lea rcx, [rbp+10E0h+var_E70]
/*14079b687*/  mov [rbp+10E0h+var_B8], rsi
/*14079b68e*/  mov rdx, rsi
/*14079b691*/  mov r8, rbx
/*14079b694*/  lea r9, [rbp+10E0h+var_158]
/*14079b69b*/  call sub_140790450
/*14079b6a0*/  nop
/*14079b6a1*/  mov rbx, qword ptr [rbp+10E0h+var_E70]
/*14079b6a8*/  cmp rbx, 0FFFFFFFFFFFFFFFFh
/*14079b6ac*/  jnz loc_14079B787
/*14079b6b2*/  lea rcx, [rbp+10E0h+var_E60]
/*14079b6b9*/  mov rax, [rcx+8]
/*14079b6bd*/  lea rdx, [rbp+10E0h+var_130+7]
/*14079b6c4*/  mov [rdx+10h], rax
/*14079b6c8*/  movups xmm0, xmmword ptr [rcx-8]
/*14079b6cc*/  movups xmmword ptr [rdx], xmm0
/*14079b6cf*/  mov rax, [rbp+10E0h+var_90]
/*14079b6d6*/  movzx eax, byte ptr [rax]
/*14079b6d9*/  cmp eax, 3
/*14079b6dc*/  jb short loc_14079B75C
/*14079b6de*/  jz short loc_14079B723
/*14079b6e0*/  cmp eax, 4
/*14079b6e3*/  jnz short loc_14079B74B
/*14079b6e5*/  mov rax, [rbp+10E0h+var_90]
/*14079b6ec*/  lea rcx, [rax+8]
loc_14079B6F0: /*14079b6f0*/ mov [rbp+10E0h+var_1B8], rcx
/*14079b6f7*/  call sub_1403348B0
/*14079b6fc*/  nop
/*14079b6fd*/  mov rax, [rbp+10E0h+var_1B8]
/*14079b704*/  mov rdx, [rax]
/*14079b707*/  test rdx, rdx
/*14079b70a*/  jz short loc_14079B75C
/*14079b70c*/  mov rax, [rbp+10E0h+var_90]
/*14079b713*/  mov rcx, [rax+10h]
/*14079b717*/  shl rdx, 5
/*14079b71b*/  mov r8d, 8
/*14079b721*/  jmp short loc_14079B744
loc_14079B723: /*14079b723*/ mov rax, [rbp+10E0h+var_90]
/*14079b72a*/  mov rdx, [rax+8]
/*14079b72e*/  test rdx, rdx
/*14079b731*/  jz short loc_14079B75C
/*14079b733*/  mov rax, [rbp+10E0h+var_90]
/*14079b73a*/  mov rcx, [rax+10h]
/*14079b73e*/  mov r8d, 1
loc_14079B744: /*14079b744*/ call sub_140001660
/*14079b749*/  jmp short loc_14079B75C
loc_14079B74B: /*14079b74b*/ mov rax, [rbp+10E0h+var_90]
/*14079b752*/  lea rcx, [rax+8]
loc_14079B756: /*14079b756*/ call sub_1403212D0
/*14079b75b*/  nop
loc_14079B75C: /*14079b75c*/ mov rax, [rbp+10E0h+var_90]
/*14079b763*/  mov byte ptr [rax], 3
/*14079b766*/  movdqu xmm0, [rbp+10E0h+var_130]
/*14079b76e*/  movdqu xmm1, [rbp+10E0h+var_130+0Fh]
/*14079b776*/  movdqu xmmword ptr [rax+1], xmm0
/*14079b77b*/  movdqu xmmword ptr [rax+10h], xmm1
/*14079b780*/  inc [rbp+10E0h+var_C0]
loc_14079B787: /*14079b787*/ mov rdx, [rbp+10E0h+var_A8]
/*14079b78e*/  test rdx, rdx
/*14079b791*/  jz short loc_14079B7A5
/*14079b793*/  mov r8d, 1
/*14079b799*/  mov rcx, [rbp+10E0h+var_B8]
/*14079b7a0*/  call sub_140001660
loc_14079B7A5: /*14079b7a5*/ cmp ebx, 0FFFFFFFFh
/*14079b7a8*/  jz loc_14079B4E8
loc_14079B7AE: /*14079b7ae*/ lea rcx, [rbp+10E0h+var_E70]
/*14079b7b5*/  call sub_1406CDA20
/*14079b7ba*/  nop
/*14079b7bb*/  jmp loc_14079B4E8
loc_14079B7C0: /*14079b7c0*/ cmp [rbp+10E0h+var_C0], 0
/*14079b7c8*/  jz loc_14079B94B
/*14079b7ce*/  lea rcx, [rbp+10E0h+var_130]
/*14079b7d5*/  lea rdx, [rbp+10E0h+var_720]
/*14079b7dc*/  call sub_1406CF290
/*14079b7e1*/  nop
/*14079b7e2*/  mov rcx, qword ptr [rbp+10E0h+var_130]
/*14079b7e9*/  mov rax, qword ptr [rbp+10E0h+var_130+8]
/*14079b7f0*/  mov [rbp+10E0h+var_90], rax
/*14079b7f7*/  mov [rbp+10E0h+var_A8], rcx
/*14079b7fe*/  cmp rcx, 0FFFFFFFFFFFFFFFFh
/*14079b802*/  jz loc_14079B903
/*14079b808*/  mov r9, qword ptr [rbp+10E0h+var_120]
loc_14079B80F: /*14079b80f*/ mov rcx, [rbp+10E0h+var_88]
/*14079b816*/  mov rdx, r14
/*14079b819*/  mov r8, [rbp+10E0h+var_90]
/*14079b820*/  call sub_1408726C0
/*14079b825*/  nop
/*14079b826*/  test rax, rax
/*14079b829*/  jz loc_14079B919
/*14079b82f*/  mov [rbp+10E0h+var_238], rax
/*14079b836*/  mov rcx, cs:off_141EC8D80
/*14079b83d*/  mov rcx, [rcx]
/*14079b840*/  cmp rcx, 2
/*14079b844*/  jb loc_14079B8F8
/*14079b84a*/  mov rax, [rbp+10E0h+var_88]
/*14079b851*/  mov qword ptr [rbp+10E0h+var_1A8], rax
/*14079b858*/  mov qword ptr [rbp+10E0h+var_1A8+8], r14
/*14079b85f*/  lea rax, [rbp+10E0h+var_1A8]
/*14079b866*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079b86d*/  lea rax, sub_14148F3A0
/*14079b874*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*14079b87b*/  lea rax, [rbp+10E0h+var_238]
/*14079b882*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079b889*/  lea rax, sub_141490720
/*14079b890*/  mov qword ptr [rbp+10E0h+var_4A0+8], rax
/*14079b897*/  lea rax, aCodexmateLibCo_29; "codexmate_lib::core::relay::codex_diagn"...
/*14079b89e*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*14079b8a5*/  mov qword ptr [rbp+10E0h+var_E70+8], 2Ch ; ','
/*14079b8b0*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079b8b7*/  mov qword ptr [rbp+10E0h+var_E60+8], 2Ch ; ','
/*14079b8c2*/  lea rax, off_14178F798; "src\\core\\relay\\codex_diagnostic.rs"
/*14079b8c9*/  mov qword ptr [rbp+10E0h+var_E50], rax
loc_14079B8D0: /*14079b8d0*/ mov r8d, 2
/*14079b8d6*/  lea rcx, unk_14178F75E
/*14079b8dd*/  lea rdx, [rbp+10E0h+var_4B0]
/*14079b8e4*/  lea r9, [rbp+10E0h+var_E70]
/*14079b8eb*/  call sub_140985BA0
/*14079b8f0*/  nop
/*14079b8f1*/  mov rax, [rbp+10E0h+var_238]
loc_14079B8F8: /*14079b8f8*/ mov rcx, rax
/*14079b8fb*/  call sub_1401DD260
/*14079b900*/  nop
/*14079b901*/  jmp short loc_14079B927
loc_14079B903: /*14079b903*/ mov rcx, 0FFFFFFFFFFFFFFFFh
/*14079b90a*/  mov rdx, [rbp+10E0h+var_90]
/*14079b911*/  call sub_1406C99A0
/*14079b916*/  nop
/*14079b917*/  jmp short loc_14079B94B
loc_14079B919: /*14079b919*/ mov rax, [rbp+10E0h+var_C0]
/*14079b920*/  add [rbp+10E0h+var_C8], rax
loc_14079B927: /*14079b927*/ cmp [rbp+10E0h+var_A8], 0
/*14079b92f*/  jz short loc_14079B94B
/*14079b931*/  mov r8d, 1
/*14079b937*/  mov rcx, [rbp+10E0h+var_90]
/*14079b93e*/  mov rdx, [rbp+10E0h+var_A8]
/*14079b945*/  call sub_140001660
/*14079b94a*/  nop
loc_14079B94B: /*14079b94b*/ lea r15, [rbp+10E0h+var_720]
/*14079b952*/  mov rcx, r15
/*14079b955*/  call sub_1400104F0
/*14079b95a*/  nop
/*14079b95b*/  mov rsi, [rbp+10E0h+var_138]
/*14079b962*/  lea rbx, [rbp+10E0h+var_130]
/*14079b969*/  mov rdx, qword ptr [rbp+10E0h+var_A0]
/*14079b970*/  test rdx, rdx
/*14079b973*/  jz short loc_14079B987
/*14079b975*/  mov r8d, 1
/*14079b97b*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*14079b982*/  call sub_140001660
loc_14079B987: /*14079b987*/ mov rdx, [rbp+10E0h+var_78]
/*14079b98e*/  test rdx, rdx
/*14079b991*/  jnz loc_14079B3CA
/*14079b997*/  jmp loc_14079B2CD
loc_14079B99C: /*14079b99c*/ mov [rbp+10E0h+var_79], 0
loc_14079B9A3: /*14079b9a3*/ mov rcx, rbp
/*14079b9a6*/  call sub_140001000
/*14079b9ab*/  nop
/*14079b9ac*/  mov rdx, qword ptr [rbp+10E0h+var_190]
/*14079b9b3*/  test rdx, rdx
/*14079b9b6*/  jz short loc_14079B9CA
/*14079b9b8*/  mov rcx, qword ptr [rbp+10E0h+var_190+8]
/*14079b9bf*/  mov r8d, 1
/*14079b9c5*/  call sub_140001660
loc_14079B9CA: /*14079b9ca*/ mov rax, [rbp+10E0h+var_C8]
/*14079b9d1*/  mov [rbp+10E0h+var_4C8], rax
loc_14079B9D8: /*14079b9d8*/ lea rcx, [rbp+10E0h+var_E70]
/*14079b9df*/  mov rdx, rdi
/*14079b9e2*/  call sub_14078EC40
/*14079b9e7*/  nop
/*14079b9e8*/  cmp rsi, 0FFFFFFFFFFFFFFFFh
/*14079b9ec*/  lea rax, unk_14178F2F8
/*14079b9f3*/  lea rcx, asc_14178F340; "已从正常线程恢复完整系统提示"
/*14079b9fa*/  cmovz rcx, rax
/*14079b9fe*/  mov eax, 48h ; 'H'
/*14079ba03*/  mov edx, 2Ah ; '*'
/*14079ba08*/  cmovz rdx, rax
/*14079ba0c*/  mov qword ptr [rbp+10E0h+var_190], rcx
/*14079ba13*/  mov qword ptr [rbp+10E0h+var_190+8], rdx
/*14079ba1a*/  mov r8, [rbp+10E0h+var_160]
/*14079ba21*/  test r8, r8
/*14079ba24*/  jz loc_14079BED4
/*14079ba2a*/  mov qword ptr [rbp+10E0h+var_1A8], r8
/*14079ba31*/  mov rdx, [rbp+10E0h+var_168]
loc_14079BA38: /*14079ba38*/ mov [rsp+1160h+var_1140], 3
/*14079ba41*/  lea r9, unk_141789BA4
/*14079ba48*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079ba4f*/  call sub_140440300
/*14079ba54*/  nop
/*14079ba55*/  lea rsi, sub_1400015F0
/*14079ba5c*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079ba63*/  mov qword ptr [rbp+10E0h+var_710], rax
/*14079ba6a*/  movdqu xmm0, [rbp+10E0h+var_4B0]
/*14079ba72*/  movdqa [rbp+10E0h+var_720], xmm0
/*14079ba7a*/  lea rax, [rbp+10E0h+var_1A8]
/*14079ba81*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079ba88*/  lea rax, sub_1414AC520
/*14079ba8f*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*14079ba96*/  mov qword ptr [rbp+10E0h+var_4A0], r15
/*14079ba9d*/  mov qword ptr [rbp+10E0h+var_4A0+8], rsi
loc_14079BAA4: /*14079baa4*/ lea rdx, unk_14178F36A
/*14079baab*/  mov rcx, rbp
/*14079baae*/  lea r8, [rbp+10E0h+var_4B0]
/*14079bab5*/  call sub_14149C0F0
/*14079baba*/  nop
/*14079babb*/  mov rdx, qword ptr [rbp+10E0h+var_720]
/*14079bac2*/  test rdx, rdx
/*14079bac5*/  jz short loc_14079BAD9
/*14079bac7*/  mov rcx, qword ptr [rbp+10E0h+var_720+8]
/*14079bace*/  mov r8d, 1
/*14079bad4*/  call sub_140001660
loc_14079BAD9: /*14079bad9*/ movdqu xmm0, [rbp+10E0h+var_10E0]
/*14079bade*/  movdqa [rbp+10E0h+var_130], xmm0
/*14079bae6*/  mov rax, qword ptr [rbp+10E0h+var_10D0]
/*14079baea*/  mov qword ptr [rbp+10E0h+var_120], rax
/*14079baf1*/  jmp loc_14079BEFC
loc_14079BAF6: /*14079baf6*/ lea rax, [rbp+10E0h+var_E40]
/*14079bafd*/  mov rcx, [rax+10h]
/*14079bb01*/  mov qword ptr [rbp+10E0h+var_10D0], rcx
/*14079bb05*/  movdqu xmm0, xmmword ptr [rax]
/*14079bb09*/  movdqa [rbp+10E0h+var_10E0], xmm0
loc_14079BB0E: /*14079bb0e*/ mov qword ptr [rbp+10E0h+var_4B0], rsi
/*14079bb15*/  lea rax, sub_1414AC520
/*14079bb1c*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*14079bb23*/  mov rax, rbp
/*14079bb26*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079bb2d*/  lea rax, sub_1400015F0
/*14079bb34*/  mov qword ptr [rbp+10E0h+var_4A0+8], rax
loc_14079BB3B: /*14079bb3b*/ lea rdx, unk_14178F7FD
/*14079bb42*/  lea rcx, [rbp+10E0h+var_1F0]
/*14079bb49*/  lea r8, [rbp+10E0h+var_4B0]
/*14079bb50*/  call sub_14149C0F0
/*14079bb55*/  nop
/*14079bb56*/  mov rdx, qword ptr [rbp+10E0h+var_10E0]
/*14079bb5a*/  test rdx, rdx
/*14079bb5d*/  jz short loc_14079BB6E
/*14079bb5f*/  mov rcx, qword ptr [rbp+10E0h+var_10E0+8]
/*14079bb63*/  mov r8d, 1
/*14079bb69*/  call sub_140001660
loc_14079BB6E: /*14079bb6e*/ mov rax, qword ptr [rbp+10E0h+var_1E0]
/*14079bb75*/  mov rdx, [rbp+10E0h+var_78]
/*14079bb7c*/  mov [rdx+10h], rax
/*14079bb80*/  movups xmm0, [rbp+10E0h+var_1F0]
/*14079bb87*/  movups xmmword ptr [rdx], xmm0
/*14079bb8a*/  movdqu xmm0, [rbp+10E0h+var_190]
/*14079bb92*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079bb9a*/  mov rax, [rbp+10E0h+var_180]
/*14079bba1*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079bba8*/  mov rax, qword ptr [rbp+10E0h+var_120]
/*14079bbaf*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079bbb6*/  movdqu xmm1, [rbp+10E0h+var_130]
/*14079bbbe*/  movdqu [rbp+10E0h+var_4A0+8], xmm1
/*14079bbc6*/  mov rax, qword ptr [rbp+10E0h+var_490]
/*14079bbcd*/  mov rcx, [rbp+10E0h+var_70]
/*14079bbd4*/  mov [rcx+28h], rax
/*14079bbd8*/  mov rax, qword ptr [rbp+10E0h+var_490+8]
/*14079bbdf*/  mov [rcx+30h], rax
/*14079bbe3*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079bbea*/  mov [rcx+18h], rax
/*14079bbee*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
/*14079bbf5*/  mov [rcx+20h], rax
/*14079bbf9*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079bbfe*/  mov qword ptr [rcx+38h], 1
/*14079bc06*/  mov [rcx+40h], rdx
/*14079bc0a*/  mov qword ptr [rcx+48h], 1
/*14079bc12*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079bc19*/  mov rdx, qword ptr [rbp+10E0h+var_E70]
/*14079bc20*/  test rdx, rdx
/*14079bc23*/  jz short loc_14079BC37
/*14079bc25*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*14079bc2c*/  mov r8d, 1
/*14079bc32*/  call sub_140001660
loc_14079BC37: /*14079bc37*/ mov rdx, qword ptr [rbp+10E0h+var_E60+8]
/*14079bc3e*/  test rdx, rdx
/*14079bc41*/  jz short loc_14079BC59
/*14079bc43*/  lea rax, [rbp+10E0h+var_E50]
loc_14079BC4A: /*14079bc4a*/ mov rcx, [rax]
/*14079bc4d*/  mov r8d, 1
/*14079bc53*/  call sub_140001660
/*14079bc58*/  nop
loc_14079BC59: /*14079bc59*/ lea rcx, [rbp+10E0h+var_720]
/*14079bc60*/  call sub_140334760
/*14079bc65*/  nop
/*14079bc66*/  mov rax, qword ptr [rbp+10E0h+var_720]
/*14079bc6d*/  test rax, rax
/*14079bc70*/  jz loc_140799FF5
/*14079bc76*/  mov rcx, qword ptr [rbp+10E0h+var_720+8]
/*14079bc7d*/  shl rax, 3
/*14079bc81*/  lea rdx, [rax+rax*2]
/*14079bc85*/  mov r8d, 8
/*14079bc8b*/  call sub_140001660
/*14079bc90*/  jmp loc_140799FF5
loc_14079BC95: /*14079bc95*/ call sub_1407198C0
/*14079bc9a*/  mov [rbp+10E0h+var_78], rax
/*14079bca1*/  call nullsub_1
/*14079bca6*/  mov ecx, 13h
/*14079bcab*/  mov edx, 1
/*14079bcb0*/  call sub_140001650
/*14079bcb5*/  test rax, rax
/*14079bcb8*/  jz loc_14079CF53
/*14079bcbe*/  movdqu xmm0, xmmword ptr cs:aStateDbRelocat; "state_db_relocation"
/*14079bcc6*/  movdqu xmmword ptr [rax], xmm0
/*14079bcca*/  mov dword ptr [rax+0Fh], 6E6F6974h
/*14079bcd1*/  mov rcx, [rbp+10E0h+var_78]
/*14079bcd8*/  mov qword ptr [rcx], 13h
/*14079bcdf*/  mov [rcx+8], rax
/*14079bce3*/  mov qword ptr [rcx+10h], 13h
/*14079bceb*/  mov qword ptr [rbp+10E0h+var_100], 1
/*14079bcf6*/  mov qword ptr [rbp+10E0h+var_100+8], rcx
/*14079bcfd*/  mov [rbp+10E0h+var_F0], 1
/*14079bd08*/  mov qword ptr [rbp+10E0h+var_720], 0
/*14079bd13*/  mov qword ptr [rbp+10E0h+var_720+8], 8
/*14079bd1e*/  mov qword ptr [rbp+10E0h+var_710], 0
loc_14079BD29: /*14079bd29*/ call sub_1407198C0
/*14079bd2e*/  mov [rbp+10E0h+var_78], rax
/*14079bd35*/  lea rax, [rbp+10E0h+var_170]
/*14079bd3c*/  mov qword ptr [rbp+10E0h+var_E70], rax
/*14079bd43*/  lea rax, sub_1414AC520
/*14079bd4a*/  mov qword ptr [rbp+10E0h+var_E70+8], rax
loc_14079BD51: /*14079bd51*/ lea rdx, unk_14178CFBE
/*14079bd58*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079bd5f*/  lea r8, [rbp+10E0h+var_E70]
/*14079bd66*/  call sub_14149C0F0
/*14079bd6b*/  nop
/*14079bd6c*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079bd73*/  mov rdx, [rbp+10E0h+var_78]
/*14079bd7a*/  mov [rdx+10h], rax
/*14079bd7e*/  movups xmm0, [rbp+10E0h+var_4B0]
/*14079bd85*/  movups xmmword ptr [rdx], xmm0
/*14079bd88*/  movdqu xmm0, [rbp+10E0h+var_100]
/*14079bd90*/  movdqa [rbp+10E0h+var_E70], xmm0
/*14079bd98*/  mov rax, [rbp+10E0h+var_F0]
/*14079bd9f*/  mov qword ptr [rbp+10E0h+var_E60], rax
/*14079bda6*/  movdqu xmm1, [rbp+10E0h+var_720]
/*14079bdae*/  movdqu [rbp+10E0h+var_E60+8], xmm1
/*14079bdb6*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*14079bdbd*/  mov qword ptr [rbp+10E0h+var_E50+8], rax
/*14079bdc4*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079bdcb*/  mov rcx, [rbp+10E0h+var_70]
/*14079bdd2*/  mov [rcx+28h], rax
/*14079bdd6*/  mov rax, qword ptr [rbp+10E0h+var_E50+8]
/*14079bddd*/  mov [rcx+30h], rax
/*14079bde1*/  mov rax, qword ptr [rbp+10E0h+var_E60]
/*14079bde8*/  mov [rcx+18h], rax
/*14079bdec*/  mov rax, qword ptr [rbp+10E0h+var_E60+8]
/*14079bdf3*/  mov [rcx+20h], rax
/*14079bdf7*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079bdfc*/  mov qword ptr [rcx+38h], 1
/*14079be04*/  mov [rcx+40h], rdx
/*14079be08*/  mov qword ptr [rcx+48h], 1
/*14079be10*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079be17*/  mov rsi, [rbp+10E0h+var_1B8]
loc_14079BE1E: /*14079be1e*/ lea rcx, [rbp+10E0h+var_E0]
/*14079be25*/  call sub_140334B70
/*14079be2a*/  nop
/*14079be2b*/  mov rdx, qword ptr [rbp+10E0h+var_E0]
/*14079be32*/  test rdx, rdx
/*14079be35*/  jz short loc_14079BE4D
/*14079be37*/  mov rcx, qword ptr [rbp+10E0h+var_E0+8]
/*14079be3e*/  shl rdx, 5
/*14079be42*/  mov r8d, 8
/*14079be48*/  call sub_140001660
loc_14079BE4D: /*14079be4d*/ mov rdx, qword ptr [rbp+10E0h+var_10E0]
/*14079be51*/  test rdx, rdx
/*14079be54*/  jz short loc_14079BE69
/*14079be56*/  mov r8d, 1
/*14079be5c*/  mov rcx, [rbp+10E0h+var_C0]
/*14079be63*/  call sub_140001660
/*14079be68*/  nop
loc_14079BE69: /*14079be69*/ lea rcx, [rbp+10E0h+var_208]
/*14079be70*/  call sub_140334B70
/*14079be75*/  nop
/*14079be76*/  mov rdx, qword ptr [rbp+10E0h+var_208]
/*14079be7d*/  test rdx, rdx
/*14079be80*/  jz short loc_14079BE98
/*14079be82*/  shl rdx, 5
/*14079be86*/  mov r8d, 8
/*14079be8c*/  mov rcx, [rbp+10E0h+var_4B8]
/*14079be93*/  call sub_140001660
loc_14079BE98: /*14079be98*/ mov rdx, qword ptr [rbp+10E0h+var_1F0]
/*14079be9f*/  test rdx, rdx
/*14079bea2*/  jz short loc_14079BEB6
/*14079bea4*/  mov r8d, 1
/*14079beaa*/  mov rcx, [rbp+10E0h+var_C8]
/*14079beb1*/  call sub_140001660
loc_14079BEB6: /*14079beb6*/ test rsi, rsi
/*14079beb9*/  jz loc_1407992FB
/*14079bebf*/  mov r8d, 1
/*14079bec5*/  mov rcx, [rbp+10E0h+var_728]
/*14079becc*/  mov rdx, rsi
/*14079becf*/  jmp loc_1407992F6
loc_14079BED4: /*14079bed4*/ mov qword ptr [rbp+10E0h+var_130], 0
/*14079bedf*/  mov qword ptr [rbp+10E0h+var_130+8], 1
/*14079beea*/  mov qword ptr [rbp+10E0h+var_120], 0
/*14079bef5*/  lea rsi, sub_1400015F0
loc_14079BEFC: /*14079befc*/ cmp qword ptr [rbp+10E0h+var_E50+8], 2
/*14079bf04*/  jnz short loc_14079BF18
/*14079bf06*/  mov rax, qword ptr [rbp+10E0h+var_E50]
/*14079bf0d*/  cmp word ptr [rax], 6B6Fh
/*14079bf12*/  jz loc_14079C670
loc_14079BF18: /*14079bf18*/ mov qword ptr [rbp+10E0h+var_10E0], 0
/*14079bf20*/  mov qword ptr [rbp+10E0h+var_10E0+8], 8
/*14079bf28*/  mov qword ptr [rbp+10E0h+var_10D0], 0
/*14079bf30*/  call nullsub_1
/*14079bf35*/  mov ecx, 18h
/*14079bf3a*/  mov edx, 8
/*14079bf3f*/  call sub_140001650
/*14079bf44*/  test rax, rax
/*14079bf47*/  jz loc_14079CBBF
/*14079bf4d*/  mov rdi, rax
/*14079bf50*/  call nullsub_1
/*14079bf55*/  mov ecx, 1Ch
/*14079bf5a*/  mov edx, 1
/*14079bf5f*/  call sub_140001650
/*14079bf64*/  test rax, rax
/*14079bf67*/  jz loc_14079CF21
/*14079bf6d*/  movups xmm0, cs:xmmword_14178D8E7+0Ch
/*14079bf74*/  movups xmmword ptr [rax+0Ch], xmm0
/*14079bf78*/  movdqu xmm0, cs:xmmword_14178D8E7
/*14079bf80*/  movdqu xmmword ptr [rax], xmm0
/*14079bf84*/  mov qword ptr [rdi], 1Ch
/*14079bf8b*/  mov [rdi+8], rax
/*14079bf8f*/  mov qword ptr [rdi+10h], 1Ch
/*14079bf97*/  mov qword ptr [rbp+10E0h+var_720], 1
/*14079bfa2*/  mov qword ptr [rbp+10E0h+var_720+8], rdi
/*14079bfa9*/  mov qword ptr [rbp+10E0h+var_710], 1
/*14079bfb4*/  call nullsub_1
/*14079bfb9*/  mov ecx, 18h
/*14079bfbe*/  mov edx, 8
/*14079bfc3*/  call sub_140001650
/*14079bfc8*/  mov [rbp+10E0h+var_78], rax
/*14079bfcf*/  test rax, rax
/*14079bfd2*/  jz loc_14079CBD4
/*14079bfd8*/  lea rax, [rbp+10E0h+var_E40]
/*14079bfdf*/  lea rcx, [rbp+10E0h+var_230]
/*14079bfe6*/  mov qword ptr [rbp+10E0h+var_4B0], rcx
/*14079bfed*/  lea rcx, sub_1414AC520
/*14079bff4*/  mov qword ptr [rbp+10E0h+var_4B0+8], rcx
/*14079bffb*/  lea rdx, [rbp+10E0h+var_4C8]
/*14079c002*/  mov qword ptr [rbp+10E0h+var_4A0], rdx
/*14079c009*/  mov qword ptr [rbp+10E0h+var_4A0+8], rcx
/*14079c010*/  mov qword ptr [rbp+10E0h+var_490], rax
/*14079c017*/  mov qword ptr [rbp+10E0h+var_490+8], rsi
/*14079c01e*/  mov qword ptr [rbp+10E0h+var_480], rbx
/*14079c025*/  mov qword ptr [rbp+10E0h+var_480+8], rsi
loc_14079C02C: /*14079c02c*/ lea rdx, unk_14178F429
/*14079c033*/  lea rcx, [rbp+10E0h+var_E88]
/*14079c03a*/  lea r8, [rbp+10E0h+var_4B0]
/*14079c041*/  call sub_14149C0F0
/*14079c046*/  nop
/*14079c047*/  mov rax, [rbp+10E0h+var_E78]
/*14079c04e*/  mov rdx, [rbp+10E0h+var_78]
/*14079c055*/  mov [rdx+10h], rax
/*14079c059*/  movups xmm0, [rbp+10E0h+var_E88]
/*14079c060*/  movups xmmword ptr [rdx], xmm0
/*14079c063*/  movdqu xmm0, [rbp+10E0h+var_10E0]
/*14079c068*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079c070*/  mov rax, qword ptr [rbp+10E0h+var_10D0]
/*14079c074*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079c07b*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*14079c082*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079c089*/  movdqu xmm1, [rbp+10E0h+var_720]
/*14079c091*/  movdqu [rbp+10E0h+var_4A0+8], xmm1
/*14079c099*/  mov rax, qword ptr [rbp+10E0h+var_490]
/*14079c0a0*/  mov rcx, [rbp+10E0h+var_70]
/*14079c0a7*/  mov [rcx+28h], rax
/*14079c0ab*/  mov rax, qword ptr [rbp+10E0h+var_490+8]
/*14079c0b2*/  mov [rcx+30h], rax
/*14079c0b6*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079c0bd*/  mov [rcx+18h], rax
/*14079c0c1*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
/*14079c0c8*/  mov [rcx+20h], rax
/*14079c0cc*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079c0d1*/  mov qword ptr [rcx+38h], 1
/*14079c0d9*/  mov [rcx+40h], rdx
/*14079c0dd*/  mov qword ptr [rcx+48h], 1
/*14079c0e5*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079c0ec*/  mov rdx, qword ptr [rbp+10E0h+var_130]
/*14079c0f3*/  test rdx, rdx
/*14079c0f6*/  jz short loc_14079C10A
/*14079c0f8*/  mov rcx, qword ptr [rbp+10E0h+var_130+8]
/*14079c0ff*/  mov r8d, 1
/*14079c105*/  call sub_140001660
loc_14079C10A: /*14079c10a*/ lea rcx, [rbp+10E0h+var_E70]
/*14079c111*/  call sub_1406CE150
/*14079c116*/  nop
loc_14079C117: /*14079c117*/ lea rcx, [rbp+10E0h+var_170]
/*14079c11e*/  call sub_140334760
/*14079c123*/  nop
/*14079c124*/  mov rax, [rbp+10E0h+var_170]
/*14079c12b*/  test rax, rax
/*14079c12e*/  jz short loc_14079C14B
/*14079c130*/  mov rcx, [rbp+10E0h+var_168]
/*14079c137*/  shl rax, 3
/*14079c13b*/  lea rdx, [rax+rax*2]
/*14079c13f*/  mov r8d, 8
/*14079c145*/  call sub_140001660
/*14079c14a*/  nop
loc_14079C14B: /*14079c14b*/ lea rcx, [rbp+10E0h+var_1F0]
/*14079c152*/  call sub_14067FEC0
/*14079c157*/  nop
/*14079c158*/  mov rdx, qword ptr [rbp+10E0h+var_100]
/*14079c15f*/  test rdx, rdx
/*14079c162*/  jz short loc_14079C177
/*14079c164*/  mov rcx, qword ptr [rbp+10E0h+var_100+8]
/*14079c16b*/  mov r8d, 1
/*14079c171*/  call sub_140001660
/*14079c176*/  nop
loc_14079C177: /*14079c177*/ lea rcx, [rbp+10E0h+var_158]
/*14079c17e*/  call sub_1400104F0
/*14079c183*/  nop
loc_14079C184: /*14079c184*/ lea rcx, [rbp+10E0h+var_220]
/*14079c18b*/  call sub_140335260
/*14079c190*/  nop
/*14079c191*/  mov rax, qword ptr [rbp+10E0h+var_220]
/*14079c198*/  test rax, rax
/*14079c19b*/  jz loc_140799FF5
/*14079c1a1*/  mov rcx, qword ptr [rbp+10E0h+var_220+8]
/*14079c1a8*/  imul rdx, rax, 70h ; 'p'
/*14079c1ac*/  mov r8d, 8
/*14079c1b2*/  call sub_140001660
/*14079c1b7*/  mov rdx, [rbp+10E0h+var_70]
/*14079c1be*/  jmp loc_140797B95
loc_14079C1C3: /*14079c1c3*/ mov [rbp+10E0h+var_7C], 1
loc_14079C1CA: /*14079c1ca*/ call sub_1407198C0
/*14079c1cf*/  mov [rbp+10E0h+var_78], rax
/*14079c1d6*/  lea rax, [rbp+10E0h+var_700+8]
/*14079c1dd*/  lea rcx, [rbp+10E0h+var_6F0]
/*14079c1e4*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079c1eb*/  lea rbx, sub_1414AC520
/*14079c1f2*/  mov qword ptr [rbp+10E0h+var_4B0+8], rbx
/*14079c1f9*/  mov qword ptr [rbp+10E0h+var_4A0], rcx
/*14079c200*/  mov qword ptr [rbp+10E0h+var_4A0+8], rbx
loc_14079C207: /*14079c207*/ lea rdx, unk_14178F83A
/*14079c20e*/  lea rcx, [rbp+10E0h+var_158]
/*14079c215*/  lea r8, [rbp+10E0h+var_4B0]
/*14079c21c*/  call sub_14149C0F0
/*14079c221*/  nop
/*14079c222*/  mov rax, qword ptr [rbp+10E0h+var_148]
/*14079c229*/  mov rcx, [rbp+10E0h+var_78]
/*14079c230*/  mov [rcx+10h], rax
/*14079c234*/  movdqu xmm0, [rbp+10E0h+var_158]
/*14079c23c*/  movdqu xmmword ptr [rcx], xmm0
/*14079c240*/  mov qword ptr [rbp+10E0h+var_130], 1
/*14079c24b*/  mov qword ptr [rbp+10E0h+var_130+8], rcx
/*14079c252*/  mov qword ptr [rbp+10E0h+var_120], 1
/*14079c25d*/  cmp [rbp+10E0h+var_6E0], 0
/*14079c265*/  jz loc_14079C323
/*14079c26b*/  mov rdx, qword ptr [rbp+10E0h+var_720+8]
/*14079c272*/  mov r8, qword ptr [rbp+10E0h+var_710]
loc_14079C279: /*14079c279*/ mov [rsp+1160h+var_1140], 3
/*14079c282*/  lea r9, unk_14178CCCE
/*14079c289*/  lea rcx, [rbp+10E0h+var_4B0]
/*14079c290*/  call sub_140440300
/*14079c295*/  nop
/*14079c296*/  lea rax, [rbp+10E0h+var_6E0]
/*14079c29d*/  mov rcx, qword ptr [rbp+10E0h+var_4A0]
/*14079c2a4*/  mov qword ptr [rbp+10E0h+var_10D0], rcx
/*14079c2a8*/  movdqu xmm0, [rbp+10E0h+var_4B0]
/*14079c2b0*/  movdqa [rbp+10E0h+var_10E0], xmm0
/*14079c2b5*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079c2bc*/  mov qword ptr [rbp+10E0h+var_4B0+8], rbx
/*14079c2c3*/  mov rax, rbp
/*14079c2c6*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079c2cd*/  lea rax, sub_1400015F0
/*14079c2d4*/  mov qword ptr [rbp+10E0h+var_4A0+8], rax
loc_14079C2DB: /*14079c2db*/ lea rdx, unk_14178F870
/*14079c2e2*/  lea rcx, [rbp+10E0h+var_100]
/*14079c2e9*/  lea r8, [rbp+10E0h+var_4B0]
/*14079c2f0*/  call sub_14149C0F0
/*14079c2f5*/  nop
/*14079c2f6*/  mov rdx, qword ptr [rbp+10E0h+var_10E0]
/*14079c2fa*/  test rdx, rdx
/*14079c2fd*/  jz short loc_14079C30F
/*14079c2ff*/  mov rcx, qword ptr [rbp+10E0h+var_10E0+8]
/*14079c303*/  mov r8d, 1
/*14079c309*/  call sub_140001660
/*14079c30e*/  nop
loc_14079C30F: /*14079c30f*/ lea rcx, [rbp+10E0h+var_130]
/*14079c316*/  lea rdx, [rbp+10E0h+var_100]
/*14079c31d*/  call sub_1403B1EC0
/*14079c322*/  nop
loc_14079C323: /*14079c323*/ call sub_1407198C0
/*14079c328*/  mov [rbp+10E0h+var_78], rax
/*14079c32f*/  call nullsub_1
/*14079c334*/  mov ecx, 20h ; ' '
/*14079c339*/  mov edx, 1
/*14079c33e*/  call sub_140001650
/*14079c343*/  test rax, rax
/*14079c346*/  jz loc_14079CF65
/*14079c34c*/  movups xmm0, cs:xmmword_14178D8D7
/*14079c353*/  movups xmmword ptr [rax+10h], xmm0
/*14079c357*/  movups xmm0, cs:xmmword_14178D8C7
/*14079c35e*/  movups xmmword ptr [rax], xmm0
/*14079c361*/  mov rdx, [rbp+10E0h+var_78]
/*14079c368*/  mov qword ptr [rdx], 20h ; ' '
/*14079c36f*/  mov [rdx+8], rax
/*14079c373*/  mov qword ptr [rdx+10h], 20h ; ' '
/*14079c37b*/  movdqu xmm0, [rbp+10E0h+var_130]
/*14079c383*/  mov rcx, [rbp+10E0h+var_70]
/*14079c38a*/  movdqu xmmword ptr [rcx+38h], xmm0
/*14079c38f*/  mov rax, qword ptr [rbp+10E0h+var_120]
/*14079c396*/  mov [rcx+48h], rax
/*14079c39a*/  mov qword ptr [rcx+8], 1
/*14079c3a2*/  mov [rcx+10h], rdx
/*14079c3a6*/  mov qword ptr [rcx+18h], 1
/*14079c3ae*/  mov qword ptr [rcx+20h], 0
/*14079c3b6*/  mov qword ptr [rcx+28h], 8
/*14079c3be*/  mov qword ptr [rcx+30h], 0
/*14079c3c6*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079c3cd*/  mov rdx, qword ptr [rbp+10E0h+var_E70]
/*14079c3d4*/  test rdx, rdx
/*14079c3d7*/  jz short loc_14079C3EB
/*14079c3d9*/  mov rcx, qword ptr [rbp+10E0h+var_E70+8]
/*14079c3e0*/  mov r8d, 1
/*14079c3e6*/  call sub_140001660
loc_14079C3EB: /*14079c3eb*/ mov rdx, qword ptr [rbp+10E0h+var_E60+8]
/*14079c3f2*/  test rdx, rdx
/*14079c3f5*/  jz short loc_14079C405
/*14079c3f7*/  mov r8d, 1
/*14079c3fd*/  mov rcx, rdi
/*14079c400*/  call sub_140001660
loc_14079C405: /*14079c405*/ mov rdx, qword ptr [rbp+10E0h+var_E40]
/*14079c40c*/  test rdx, rdx
/*14079c40f*/  jz short loc_14079C423
/*14079c411*/  mov rcx, qword ptr [rbp+10E0h+var_E40+8]
/*14079c418*/  mov r8d, 1
/*14079c41e*/  call sub_140001660
loc_14079C423: /*14079c423*/ mov rdx, qword ptr [rbp+10E0h+var_E30+8]
/*14079c42a*/  lea rax, [rdx-1]
/*14079c42e*/  cmp rax, 0FFFFFFFFFFFFFFFEh
/*14079c432*/  jnb loc_14079BC59
/*14079c438*/  lea rax, [rbp+10E0h+var_E20]
/*14079c43f*/  jmp loc_14079BC4A
loc_14079C444: /*14079c444*/ call nullsub_1
/*14079c449*/  mov ecx, 18h
/*14079c44e*/  mov edx, 8
/*14079c453*/  call sub_140001650
/*14079c458*/  mov [rbp+10E0h+var_78], rax
/*14079c45f*/  test rax, rax
/*14079c462*/  jz loc_14079CC2C
/*14079c468*/  call nullsub_1
/*14079c46d*/  mov ecx, 18h
/*14079c472*/  mov edx, 1
/*14079c477*/  call sub_140001650
/*14079c47c*/  test rax, rax
/*14079c47f*/  jz loc_14079CF77
/*14079c485*/  movdqu xmm0, xmmword ptr cs:aRolloutOrphanP; "rollout_orphan_providers"
/*14079c48d*/  movdqu xmmword ptr [rax], xmm0
/*14079c491*/  mov rcx, 7372656469766F72h
/*14079c49b*/  mov [rax+10h], rcx
/*14079c49f*/  mov rcx, [rbp+10E0h+var_78]
/*14079c4a6*/  mov qword ptr [rcx], 18h
/*14079c4ad*/  mov [rcx+8], rax
/*14079c4b1*/  mov qword ptr [rcx+10h], 18h
/*14079c4b9*/  mov qword ptr [rbp+10E0h+var_158], 1
/*14079c4c4*/  mov qword ptr [rbp+10E0h+var_158+8], rcx
/*14079c4cb*/  mov qword ptr [rbp+10E0h+var_148], 1
/*14079c4d6*/  mov qword ptr [rbp+10E0h+var_100], 0
/*14079c4e1*/  mov qword ptr [rbp+10E0h+var_100+8], 8
/*14079c4ec*/  mov [rbp+10E0h+var_F0], 0
/*14079c4f7*/  call nullsub_1
/*14079c4fc*/  mov ecx, 18h
/*14079c501*/  mov edx, 8
/*14079c506*/  call sub_140001650
/*14079c50b*/  mov [rbp+10E0h+var_78], rax
/*14079c512*/  test rax, rax
/*14079c515*/  jz loc_14079CC41
/*14079c51b*/  mov rax, qword ptr [rbp+10E0h+var_710+8]
/*14079c522*/  mov qword ptr [rbp+10E0h+var_208], rax
/*14079c529*/  lea rax, [rbp+10E0h+var_208]
/*14079c530*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079c537*/  lea rax, sub_1414AC520
/*14079c53e*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
loc_14079C545: /*14079c545*/ lea rdx, unk_14178E549
/*14079c54c*/  lea rcx, [rbp+10E0h+var_190]
/*14079c553*/  lea r8, [rbp+10E0h+var_4B0]
/*14079c55a*/  call sub_14149C0F0
/*14079c55f*/  nop
/*14079c560*/  mov rax, [rbp+10E0h+var_180]
/*14079c567*/  mov rdx, [rbp+10E0h+var_78]
/*14079c56e*/  mov [rdx+10h], rax
/*14079c572*/  movups xmm0, [rbp+10E0h+var_190]
/*14079c579*/  movups xmmword ptr [rdx], xmm0
/*14079c57c*/  movdqu xmm0, [rbp+10E0h+var_158]
/*14079c584*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079c58c*/  mov rax, qword ptr [rbp+10E0h+var_148]
/*14079c593*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079c59a*/  movdqu xmm1, [rbp+10E0h+var_100]
/*14079c5a2*/  movdqu [rbp+10E0h+var_4A0+8], xmm1
/*14079c5aa*/  mov rax, [rbp+10E0h+var_F0]
/*14079c5b1*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079c5b8*/  mov rax, qword ptr [rbp+10E0h+var_490]
/*14079c5bf*/  mov rcx, [rbp+10E0h+var_70]
/*14079c5c6*/  mov [rcx+28h], rax
/*14079c5ca*/  mov rax, qword ptr [rbp+10E0h+var_490+8]
/*14079c5d1*/  mov [rcx+30h], rax
/*14079c5d5*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079c5dc*/  mov [rcx+18h], rax
/*14079c5e0*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
/*14079c5e7*/  mov [rcx+20h], rax
/*14079c5eb*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079c5f0*/  mov qword ptr [rcx+38h], 1
/*14079c5f8*/  mov [rcx+40h], rdx
/*14079c5fc*/  mov qword ptr [rcx+48h], 1
/*14079c604*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079c60b*/  lea rcx, [rbp+10E0h+var_E70]
/*14079c612*/  call sub_1406CE150
/*14079c617*/  nop
loc_14079C618: /*14079c618*/ lea rcx, [rbp+10E0h+var_720]
/*14079c61f*/  call sub_14067FFB0
/*14079c624*/  nop
loc_14079C625: /*14079c625*/ mov rcx, rbp
/*14079c628*/  call sub_14067FEC0
/*14079c62d*/  nop
loc_14079C62E: /*14079c62e*/ lea rcx, [rbp+10E0h+var_E0]
/*14079c635*/  call sub_140335260
/*14079c63a*/  nop
/*14079c63b*/  mov rax, qword ptr [rbp+10E0h+var_E0]
/*14079c642*/  test rax, rax
/*14079c645*/  jz short loc_14079C65E
/*14079c647*/  imul rdx, rax, 70h ; 'p'
/*14079c64b*/  mov r8d, 8
/*14079c651*/  mov rcx, qword ptr [rbp+10E0h+var_A0+8]
/*14079c658*/  call sub_140001660
/*14079c65d*/  nop
loc_14079C65E: /*14079c65e*/ lea rcx, [rbp+10E0h+var_1F0]
/*14079c665*/  call sub_14067FFB0
/*14079c66a*/  nop
/*14079c66b*/  jmp loc_1407980CD
loc_14079C670: /*14079c670*/ call nullsub_1
/*14079c675*/  mov ecx, 18h
/*14079c67a*/  mov edx, 8
/*14079c67f*/  call sub_140001650
/*14079c684*/  mov [rbp+10E0h+var_78], rax
/*14079c68b*/  test rax, rax
/*14079c68e*/  jz loc_14079CC56
/*14079c694*/  call nullsub_1
/*14079c699*/  mov ecx, 1Ch
/*14079c69e*/  mov edx, 1
/*14079c6a3*/  call sub_140001650
/*14079c6a8*/  test rax, rax
/*14079c6ab*/  jz loc_14079CF89
/*14079c6b1*/  movups xmm0, cs:xmmword_14178D8E7+0Ch
/*14079c6b8*/  movups xmmword ptr [rax+0Ch], xmm0
/*14079c6bc*/  movdqu xmm0, cs:xmmword_14178D8E7
/*14079c6c4*/  movdqu xmmword ptr [rax], xmm0
/*14079c6c8*/  mov rcx, [rbp+10E0h+var_78]
/*14079c6cf*/  mov qword ptr [rcx], 1Ch
/*14079c6d6*/  mov [rcx+8], rax
/*14079c6da*/  mov qword ptr [rcx+10h], 1Ch
/*14079c6e2*/  mov qword ptr [rbp+10E0h+var_10E0], 1
/*14079c6ea*/  mov qword ptr [rbp+10E0h+var_10E0+8], rcx
/*14079c6ee*/  mov qword ptr [rbp+10E0h+var_10D0], 1
/*14079c6f6*/  mov qword ptr [rbp+10E0h+var_720], 0
/*14079c701*/  mov qword ptr [rbp+10E0h+var_720+8], 8
/*14079c70c*/  mov qword ptr [rbp+10E0h+var_710], 0
/*14079c717*/  call nullsub_1
/*14079c71c*/  mov ecx, 18h
/*14079c721*/  mov edx, 8
/*14079c726*/  call sub_140001650
/*14079c72b*/  mov [rbp+10E0h+var_78], rax
/*14079c732*/  test rax, rax
/*14079c735*/  jz loc_14079CC6B
/*14079c73b*/  lea rax, [rbp+10E0h+var_230]
/*14079c742*/  mov qword ptr [rbp+10E0h+var_4B0], rax
/*14079c749*/  lea rax, sub_1414AC520
/*14079c750*/  mov qword ptr [rbp+10E0h+var_4B0+8], rax
/*14079c757*/  lea rcx, [rbp+10E0h+var_190]
/*14079c75e*/  mov qword ptr [rbp+10E0h+var_4A0], rcx
/*14079c765*/  lea rcx, sub_14041F680
/*14079c76c*/  mov qword ptr [rbp+10E0h+var_4A0+8], rcx
/*14079c773*/  lea rcx, [rbp+10E0h+var_4C8]
/*14079c77a*/  mov qword ptr [rbp+10E0h+var_490], rcx
/*14079c781*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079c788*/  mov qword ptr [rbp+10E0h+var_480], rbx
/*14079c78f*/  lea rax, sub_1400015F0
/*14079c796*/  mov qword ptr [rbp+10E0h+var_480+8], rax
loc_14079C79D: /*14079c79d*/ lea rdx, unk_14178F38B
/*14079c7a4*/  lea rcx, [rbp+10E0h+var_208]
/*14079c7ab*/  lea r8, [rbp+10E0h+var_4B0]
/*14079c7b2*/  call sub_14149C0F0
/*14079c7b7*/  nop
/*14079c7b8*/  mov rax, [rbp+10E0h+var_1F8]
/*14079c7bf*/  mov rdx, [rbp+10E0h+var_78]
/*14079c7c6*/  mov [rdx+10h], rax
/*14079c7ca*/  movups xmm0, [rbp+10E0h+var_208]
/*14079c7d1*/  movups xmmword ptr [rdx], xmm0
/*14079c7d4*/  movdqu xmm0, [rbp+10E0h+var_10E0]
/*14079c7d9*/  movdqa [rbp+10E0h+var_4B0], xmm0
/*14079c7e1*/  mov rax, qword ptr [rbp+10E0h+var_10D0]
/*14079c7e5*/  mov qword ptr [rbp+10E0h+var_4A0], rax
/*14079c7ec*/  mov rax, qword ptr [rbp+10E0h+var_710]
/*14079c7f3*/  mov qword ptr [rbp+10E0h+var_490+8], rax
/*14079c7fa*/  movdqu xmm1, [rbp+10E0h+var_720]
/*14079c802*/  movdqu [rbp+10E0h+var_4A0+8], xmm1
/*14079c80a*/  mov rax, qword ptr [rbp+10E0h+var_490]
/*14079c811*/  mov rcx, [rbp+10E0h+var_70]
/*14079c818*/  mov [rcx+28h], rax
/*14079c81c*/  mov rax, qword ptr [rbp+10E0h+var_490+8]
/*14079c823*/  mov [rcx+30h], rax
/*14079c827*/  mov rax, qword ptr [rbp+10E0h+var_4A0]
/*14079c82e*/  mov [rcx+18h], rax
/*14079c832*/  mov rax, qword ptr [rbp+10E0h+var_4A0+8]
/*14079c839*/  mov [rcx+20h], rax
/*14079c83d*/  movdqu xmmword ptr [rcx+8], xmm0
/*14079c842*/  mov qword ptr [rcx+38h], 1
/*14079c84a*/  mov [rcx+40h], rdx
/*14079c84e*/  mov qword ptr [rcx+48h], 1
/*14079c856*/  mov qword ptr [rcx], 0FFFFFFFFFFFFFFFFh
/*14079c85d*/  mov rdx, qword ptr [rbp+10E0h+var_130]
/*14079c864*/  test rdx, rdx
/*14079c867*/  jz short loc_14079C87B
/*14079c869*/  mov rcx, qword ptr [rbp+10E0h+var_130+8]
/*14079c870*/  mov r8d, 1
/*14079c876*/  call sub_140001660
loc_14079C87B: /*14079c87b*/ lea rcx, [rbp+10E0h+var_E70]
/*14079c882*/  call sub_1406CE150
/*14079c887*/  nop
loc_14079C888: /*14079c888*/ lea rcx, [rbp+10E0h+var_170]
/*14079c88f*/  call sub_140334760
/*14079c894*/  nop
/*14079c895*/  mov rax, [rbp+10E0h+var_170]
/*14079c89c*/  test rax, rax
/*14079c89f*/  jz short loc_14079C8BC
/*14079c8a1*/  mov rcx, [rbp+10E0h+var_168]
/*14079c8a8*/  shl rax, 3
/*14079c8ac*/  lea rdx, [rax+rax*2]
/*14079c8b0*/  mov r8d, 8
/*14079c8b6*/  call sub_140001660
/*14079c8bb*/  nop
loc_14079C8BC: /*14079c8bc*/ lea rcx, [rbp+10E0h+var_1F0]
/*14079c8c3*/  call sub_14067FEC0
/*14079c8c8*/  nop
/*14079c8c9*/  mov rdx, qword ptr [rbp+10E0h+var_100]
/*14079c8d0*/  test rdx, rdx
/*14079c8d3*/  jz short loc_14079C8E8
/*14079c8d5*/  mov rcx, qword ptr [rbp+10E0h+var_100+8]
/*14079c8dc*/  mov r8d, 1
/*14079c8e2*/  call sub_140001660
/*14079c8e7*/  nop
loc_14079C8E8: /*14079c8e8*/ lea rcx, [rbp+10E0h+var_158]
/*14079c8ef*/  call sub_1400104F0
/*14079c8f4*/  nop
loc_14079C8F5: /*14079c8f5*/ lea rcx, [rbp+10E0h+var_220]
/*14079c8fc*/  call sub_140335260
/*14079c901*/  nop
loc_14079C902: /*14079c902*/ mov rax, qword ptr [rbp+10E0h+var_220]
/*14079c909*/  test rax, rax
/*14079c90c*/  jz loc_140799FF5
/*14079c912*/  mov rcx, qword ptr [rbp+10E0h+var_220+8]
/*14079c919*/  imul rdx, rax, 70h ; 'p'
/*14079c91d*/  mov r8d, 8
/*14079c923*/  call sub_140001660
/*14079c928*/  jmp loc_140799FF5
loc_14079C92D: /*14079c92d*/ mov ecx, 8
/*14079c932*/  mov edx, 18h
/*14079c937*/  call sub_1416C2D31
/*14079c93c*/  ud2
loc_14079C93E: /*14079c93e*/ mov ecx, 8
/*14079c943*/  mov edx, 18h
/*14079c948*/  call sub_1416C2D31
/*14079c94e*/  jmp loc_14079CF99
loc_14079C953: /*14079c953*/ mov ecx, 8
/*14079c958*/  mov edx, 18h
/*14079c95d*/  call sub_1416C2D31
/*14079c963*/  jmp loc_14079CF99
loc_14079C968: /*14079c968*/ mov ecx, 8
/*14079c96d*/  mov edx, 18h
/*14079c972*/  call sub_1416C2D31
/*14079c978*/  jmp loc_14079CF99
loc_14079C97D: /*14079c97d*/ mov ecx, 8
/*14079c982*/  mov edx, 18h
/*14079c987*/  call sub_1416C2D31
/*14079c98d*/  jmp loc_14079CF99
loc_14079C992: /*14079c992*/ mov ecx, 8
/*14079c997*/  mov edx, 18h
/*14079c99c*/  call sub_1416C2D31
/*14079c9a2*/  jmp loc_14079CF99
loc_14079C9A7: /*14079c9a7*/ mov ecx, 8
/*14079c9ac*/  mov edx, 18h
/*14079c9b1*/  call sub_1416C2D31
/*14079c9b7*/  jmp loc_14079CF99
loc_14079C9BC: /*14079c9bc*/ mov ecx, 8
/*14079c9c1*/  mov edx, 18h
/*14079c9c6*/  call sub_1416C2D31
/*14079c9cc*/  jmp loc_14079CF99
loc_14079C9D1: /*14079c9d1*/ mov ecx, 8
/*14079c9d6*/  mov edx, 18h
/*14079c9db*/  call sub_1416C2D31
/*14079c9e1*/  jmp loc_14079CF99
loc_14079C9E6: /*14079c9e6*/ mov ecx, 8
/*14079c9eb*/  mov edx, 18h
/*14079c9f0*/  call sub_1416C2D31
/*14079c9f6*/  jmp loc_14079CF99
loc_14079C9FB: /*14079c9fb*/ mov ecx, 8
/*14079ca00*/  mov edx, 18h
/*14079ca05*/  call sub_1416C2D31
/*14079ca0b*/  jmp loc_14079CF99
loc_14079CA10: /*14079ca10*/ mov ecx, 8
/*14079ca15*/  mov edx, 18h
/*14079ca1a*/  call sub_1416C2D31
/*14079ca20*/  jmp loc_14079CF99
loc_14079CA25: /*14079ca25*/ mov ecx, 8
/*14079ca2a*/  mov edx, 18h
/*14079ca2f*/  call sub_1416C2D31
/*14079ca35*/  jmp loc_14079CF99
loc_14079CA3A: /*14079ca3a*/ mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*14079ca41*/  mov qword ptr [rbp+10E0h+var_4B0], rax
loc_14079CA48: /*14079ca48*/ lea rax, off_14178BEC0; "src\\core\\relay\\codex_diagnostic.rs"
/*14079ca4f*/  mov [rsp+1160h+var_1140], rax
/*14079ca54*/  lea rcx, aCalledResultUn_10; "called `Result::unwrap()` on an `Err` v"...
/*14079ca5b*/  lea r9, off_141789020
/*14079ca62*/  lea r8, [rbp+10E0h+var_4B0]
/*14079ca69*/  mov edx, 2Bh ; '+'
/*14079ca6e*/  call sub_1416C3060
/*14079ca74*/  jmp loc_14079CF99
loc_14079CA79: /*14079ca79*/ mov ecx, 8
/*14079ca7e*/  mov edx, 18h
/*14079ca83*/  call sub_1416C2D31
/*14079ca89*/  jmp loc_14079CF99
loc_14079CA8E: /*14079ca8e*/ mov ecx, 8
/*14079ca93*/  mov edx, 18h
/*14079ca98*/  call sub_1416C2D31
/*14079ca9e*/  jmp loc_14079CF99
loc_14079CAA3: /*14079caa3*/ mov rax, qword ptr [rbp+10E0h+var_E70+8]
/*14079caaa*/  mov qword ptr [rbp+10E0h+var_4B0], rax
loc_14079CAB1: /*14079cab1*/ lea rax, off_14178BEA8; "src\\core\\relay\\codex_diagnostic.rs"
/*14079cab8*/  mov [rsp+1160h+var_1140], rax
/*14079cabd*/  lea rcx, aCalledResultUn_10; "called `Result::unwrap()` on an `Err` v"...
/*14079cac4*/  lea r9, off_141789020
/*14079cacb*/  lea r8, [rbp+10E0h+var_4B0]
/*14079cad2*/  mov edx, 2Bh ; '+'
/*14079cad7*/  call sub_1416C3060
/*14079cadd*/  jmp loc_14079CF99
loc_14079CAE2: /*14079cae2*/ mov ecx, 8
/*14079cae7*/  mov edx, 18h
/*14079caec*/  call sub_1416C2D31
/*14079caf2*/  jmp loc_14079CF99
loc_14079CAF7: /*14079caf7*/ mov ecx, 8
/*14079cafc*/  mov edx, 18h
/*14079cb01*/  call sub_1416C2D31
/*14079cb07*/  jmp loc_14079CF99
loc_14079CB0C: /*14079cb0c*/ mov ecx, 8
/*14079cb11*/  mov edx, 18h
/*14079cb16*/  call sub_1416C2D31
/*14079cb1c*/  jmp loc_14079CF99
loc_14079CB21: /*14079cb21*/ mov ecx, 8
/*14079cb26*/  mov edx, 18h
/*14079cb2b*/  call sub_1416C2D31
/*14079cb31*/  jmp loc_14079CF99
loc_14079CB36: /*14079cb36*/ lea rcx, off_1417898B0; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*14079cb3d*/  call sub_1416C3040
/*14079cb43*/  jmp loc_14079CF99
loc_14079CB48: /*14079cb48*/ mov [rbp+10E0h+var_7E], 1
loc_14079CB4F: /*14079cb4f*/ mov ecx, 8
/*14079cb54*/  mov edx, 18h
/*14079cb59*/  call sub_1416C2D31
/*14079cb5f*/  jmp loc_14079CF99
loc_14079CB64: /*14079cb64*/ mov [rbp+10E0h+var_A9], 1
loc_14079CB6B: /*14079cb6b*/ mov ecx, 8
/*14079cb70*/  mov edx, 18h
/*14079cb75*/  call sub_1416C2D31
/*14079cb7b*/  jmp loc_14079CF99
loc_14079CB80: /*14079cb80*/ mov ecx, 8
/*14079cb85*/  mov edx, 20h ; ' '
/*14079cb8a*/  call sub_1416C2D31
/*14079cb90*/  jmp loc_14079CF99
loc_14079CB95: /*14079cb95*/ mov ecx, 8
/*14079cb9a*/  mov edx, 18h
/*14079cb9f*/  call sub_1416C2D31
/*14079cba5*/  jmp loc_14079CF99
loc_14079CBAA: /*14079cbaa*/ mov ecx, 8
/*14079cbaf*/  mov edx, 18h
/*14079cbb4*/  call sub_1416C2D31
/*14079cbba*/  jmp loc_14079CF99
loc_14079CBBF: /*14079cbbf*/ mov ecx, 8
/*14079cbc4*/  mov edx, 18h
/*14079cbc9*/  call sub_1416C2D31
/*14079cbcf*/  jmp loc_14079CF99
loc_14079CBD4: /*14079cbd4*/ mov ecx, 8
/*14079cbd9*/  mov edx, 18h
/*14079cbde*/  call sub_1416C2D31
/*14079cbe4*/  jmp loc_14079CF99
loc_14079CBE9: /*14079cbe9*/ mov ecx, 8
/*14079cbee*/  mov edx, 18h
/*14079cbf3*/  call sub_1416C2D31
/*14079cbf9*/  jmp loc_14079CF99
loc_14079CBFE: /*14079cbfe*/ mov ecx, 8
/*14079cc03*/  mov edx, 18h
/*14079cc08*/  call sub_1416C2D31
/*14079cc0e*/  jmp loc_14079CF99
loc_14079CC13: /*14079cc13*/ mov rdx, qword ptr [rbp+10E0h+var_E60]
loc_14079CC1A: /*14079cc1a*/ mov rcx, [rbp+10E0h+var_A8]
/*14079cc21*/  call sub_1416C2D4B
/*14079cc27*/  jmp loc_14079CF99
loc_14079CC2C: /*14079cc2c*/ mov ecx, 8
/*14079cc31*/  mov edx, 18h
/*14079cc36*/  call sub_1416C2D31
/*14079cc3c*/  jmp loc_14079CF99
loc_14079CC41: /*14079cc41*/ mov ecx, 8
/*14079cc46*/  mov edx, 18h
/*14079cc4b*/  call sub_1416C2D31
/*14079cc51*/  jmp loc_14079CF99
loc_14079CC56: /*14079cc56*/ mov ecx, 8
/*14079cc5b*/  mov edx, 18h
/*14079cc60*/  call sub_1416C2D31
/*14079cc66*/  jmp loc_14079CF99
loc_14079CC6B: /*14079cc6b*/ mov ecx, 8
/*14079cc70*/  mov edx, 18h
/*14079cc75*/  call sub_1416C2D31
/*14079cc7b*/  jmp loc_14079CF99
loc_14079CC80: /*14079cc80*/ lea rcx, off_1417883C8; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
/*14079cc87*/  call sub_1416C3040
/*14079cc8d*/  jmp loc_14079CF99
loc_14079CC92: /*14079cc92*/ mov [rbp+10E0h+var_70], rsi
/*14079cc99*/  mov ecx, 1
/*14079cc9e*/  mov edx, 20h ; ' '
/*14079cca3*/  call sub_1416C2D4B
/*14079cca9*/  jmp loc_14079CF99
loc_14079CCAE: /*14079ccae*/ mov [rbp+10E0h+var_70], rsi
/*14079ccb5*/  mov ecx, 1
/*14079ccba*/  mov edx, 11h
/*14079ccbf*/  call sub_1416C2D4B
/*14079ccc5*/  jmp loc_14079CF99
loc_14079CCCA: /*14079ccca*/ mov [rbp+10E0h+var_70], rsi
/*14079ccd1*/  mov ecx, 1
/*14079ccd6*/  mov edx, 3Ch ; '<'
/*14079ccdb*/  call sub_1416C2D4B
/*14079cce1*/  jmp loc_14079CF99
loc_14079CCE6: /*14079cce6*/ mov [rbp+10E0h+var_70], rsi
/*14079cced*/  mov ecx, 1
/*14079ccf2*/  mov edx, 21h ; '!'
/*14079ccf7*/  call sub_1416C2D4B
/*14079ccfd*/  jmp loc_14079CF99
loc_14079CD02: /*14079cd02*/ mov [rbp+10E0h+var_70], rsi
/*14079cd09*/  mov ecx, 1
/*14079cd0e*/  mov edx, 0Eh
/*14079cd13*/  call sub_1416C2D4B
/*14079cd19*/  jmp loc_14079CF99
loc_14079CD1E: /*14079cd1e*/ mov [rbp+10E0h+var_70], rsi
/*14079cd25*/  mov ecx, 1
/*14079cd2a*/  mov edx, 1Bh
/*14079cd2f*/  call sub_1416C2D4B
/*14079cd35*/  jmp loc_14079CF99
loc_14079CD3A: /*14079cd3a*/ mov [rbp+10E0h+var_70], rsi
/*14079cd41*/  mov ecx, 1
/*14079cd46*/  mov edx, 1Ch
/*14079cd4b*/  call sub_1416C2D4B
/*14079cd51*/  jmp loc_14079CF99
loc_14079CD56: /*14079cd56*/ mov [rbp+10E0h+var_70], rsi
/*14079cd5d*/  mov ecx, 1
/*14079cd62*/  mov edx, 18h
/*14079cd67*/  call sub_1416C2D4B
/*14079cd6d*/  jmp loc_14079CF99
loc_14079CD72: /*14079cd72*/ mov [rbp+10E0h+var_70], rsi
/*14079cd79*/  mov ecx, 1
/*14079cd7e*/  mov edx, 21h ; '!'
/*14079cd83*/  call sub_1416C2D4B
/*14079cd89*/  jmp loc_14079CF99
loc_14079CD8E: /*14079cd8e*/ mov [rbp+10E0h+var_70], rsi
/*14079cd95*/  mov ecx, 1
/*14079cd9a*/  mov edx, 13h
/*14079cd9f*/  call sub_1416C2D4B
/*14079cda5*/  jmp loc_14079CF99
loc_14079CDAA: /*14079cdaa*/ mov [rbp+10E0h+var_70], rsi
/*14079cdb1*/  mov ecx, 1
/*14079cdb6*/  mov edx, 2Dh ; '-'
/*14079cdbb*/  call sub_1416C2D4B
/*14079cdc1*/  jmp loc_14079CF99
loc_14079CDC6: /*14079cdc6*/ mov [rbp+10E0h+var_70], rsi
/*14079cdcd*/  mov ecx, 1
/*14079cdd2*/  mov edx, 20h ; ' '
/*14079cdd7*/  call sub_1416C2D4B
/*14079cddd*/  jmp loc_14079CF99
loc_14079CDE2: /*14079cde2*/ mov [rbp+10E0h+var_70], rsi
/*14079cde9*/  mov ecx, 1
/*14079cdee*/  mov edx, 3Ah ; ':'
/*14079cdf3*/  call sub_1416C2D4B
/*14079cdf9*/  jmp loc_14079CF99
loc_14079CDFE: /*14079cdfe*/ mov [rbp+10E0h+var_70], rsi
/*14079ce05*/  mov ecx, 1
/*14079ce0a*/  mov edx, 13h
/*14079ce0f*/  call sub_1416C2D4B
/*14079ce15*/  jmp loc_14079CF99
loc_14079CE1A: /*14079ce1a*/ mov [rbp+10E0h+var_70], rsi
/*14079ce21*/  mov ecx, 1
/*14079ce26*/  mov edx, 6Ch ; 'l'
/*14079ce2b*/  call sub_1416C2D4B
/*14079ce31*/  jmp loc_14079CF99
loc_14079CE36: /*14079ce36*/ mov ecx, 1
/*14079ce3b*/  mov edx, 4
/*14079ce40*/  call sub_1416C2D4B
/*14079ce46*/  jmp loc_14079CF99
loc_14079CE4B: /*14079ce4b*/ mov ecx, 1
/*14079ce50*/  mov edx, 4
/*14079ce55*/  call sub_1416C2D4B
/*14079ce5b*/  jmp loc_14079CF99
loc_14079CE60: /*14079ce60*/ mov [rbp+10E0h+var_70], rsi
/*14079ce67*/  mov ecx, 1
/*14079ce6c*/  mov edx, 11h
/*14079ce71*/  call sub_1416C2D4B
/*14079ce77*/  jmp loc_14079CF99
loc_14079CE7C: /*14079ce7c*/ mov [rbp+10E0h+var_70], rsi
/*14079ce83*/  mov ecx, 1
/*14079ce88*/  mov edx, 27h ; '''
/*14079ce8d*/  call sub_1416C2D4B
/*14079ce93*/  jmp loc_14079CF99
loc_14079CE98: /*14079ce98*/ mov [rbp+10E0h+var_70], rsi
/*14079ce9f*/  mov ecx, 1
/*14079cea4*/  mov edx, 13h
/*14079cea9*/  call sub_1416C2D4B
/*14079ceaf*/  jmp loc_14079CF99
loc_14079CEB4: /*14079ceb4*/ mov [rbp+10E0h+var_70], rsi
/*14079cebb*/  mov ecx, 1
/*14079cec0*/  mov edx, 13h
/*14079cec5*/  call sub_1416C2D4B
/*14079cecb*/  jmp loc_14079CF99
loc_14079CED0: /*14079ced0*/ mov [rbp+10E0h+var_70], rsi
/*14079ced7*/  mov ecx, 1
/*14079cedc*/  mov edx, 0Fh
/*14079cee1*/  call sub_1416C2D4B
/*14079cee7*/  jmp loc_14079CF99
loc_14079CEEC: /*14079ceec*/ mov [rbp+10E0h+var_70], rsi
/*14079cef3*/  mov ecx, 1
/*14079cef8*/  mov edx, 20h ; ' '
/*14079cefd*/  call sub_1416C2D4B
/*14079cf03*/  jmp loc_14079CF99
loc_14079CF08: /*14079cf08*/ mov [rbp+10E0h+var_70], rsi
/*14079cf0f*/  mov ecx, 1
/*14079cf14*/  mov edx, 18h
/*14079cf19*/  call sub_1416C2D4B
/*14079cf1f*/  jmp short loc_14079CF99
loc_14079CF21: /*14079cf21*/ mov [rbp+10E0h+var_70], rdi
/*14079cf28*/  mov ecx, 1
/*14079cf2d*/  mov edx, 1Ch
/*14079cf32*/  call sub_1416C2D4B
/*14079cf38*/  jmp short loc_14079CF99
loc_14079CF3A: /*14079cf3a*/ mov [rbp+10E0h+var_70], rsi
/*14079cf41*/  mov ecx, 1
/*14079cf46*/  mov edx, 13h
/*14079cf4b*/  call sub_1416C2D4B
/*14079cf51*/  jmp short loc_14079CF99
loc_14079CF53: /*14079cf53*/ mov ecx, 1
/*14079cf58*/  mov edx, 13h
/*14079cf5d*/  call sub_1416C2D4B
/*14079cf63*/  jmp short loc_14079CF99
loc_14079CF65: /*14079cf65*/ mov ecx, 1
/*14079cf6a*/  mov edx, 20h ; ' '
/*14079cf6f*/  call sub_1416C2D4B
/*14079cf75*/  jmp short loc_14079CF99
loc_14079CF77: /*14079cf77*/ mov ecx, 1
/*14079cf7c*/  mov edx, 18h
/*14079cf81*/  call sub_1416C2D4B
/*14079cf87*/  jmp short loc_14079CF99
loc_14079CF89: /*14079cf89*/ mov ecx, 1
/*14079cf8e*/  mov edx, 1Ch
/*14079cf93*/  call sub_1416C2D4B
loc_14079CF99: /*14079cf99*/ ud2
