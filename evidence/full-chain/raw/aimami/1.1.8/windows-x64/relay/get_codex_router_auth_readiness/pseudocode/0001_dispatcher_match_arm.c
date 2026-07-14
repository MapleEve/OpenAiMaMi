// Disassembly-derived (NOT Hex-Rays decompile: owner_va 0x1403cf5b0 is the
// shared 90-command IPC dispatcher, size=0x4ad3(19155B)/353 basic_blocks/cc=160;
// decompile() truncates at 1023 of 85524 chars for this function per redline13
// "budget rule" -> segmented via disasm() walk instead, per
// references/ida-deep-recovery.md line21/27 guidance).
// Function: sub_1403CF5B0 (main IPC command dispatcher, NOT renamed: shared by
// ~90 commands, confirmed via 112 direct callees + string-pool blob containing
// all command-name literals concatenated).
// Block: inline match-arm for "get_codex_router_auth_readiness" (owner_va per
// owner-map-118.jsonl line 28). Reached via a perfect-hash jump table (indices
// visible in sibling disasm windows: "jumptable 00000001403CF605 ... cases
// 7,10,11,30,33,35,37-44" for one neighboring default path, "case 20" for the
// next case after this arm at 0x1403d021c) followed by a 16-byte SIMD
// byte-exact confirm compare (pcmpeqb) to disambiguate hash collisions.
//
// xrefs_to(0x14133b621 "get_codex_router_auth_readiness" literal) = EXACTLY
// 1 code xref, at 0x1403d00f6, inside sub_1403CF5B0 -- confirmed live,
// dispatcher-wired IPC endpoint (not dead code).

sub_1403CF5B0_case_get_codex_router_auth_readiness:
; --- 1) perfect-hash confirm compare (shared codegen shape, not command logic) ---
1403d0065  pcmpeqb xmm0, cs:xmmword_141339550
1403d006d  pand xmm0, xmm1
1403d0071  pmovmskb eax, xmm0
1403d0075  cmp eax, 0FFFFh
1403d007a  jnz def_1403CF605          ; miss -> shared default-case block (other commands)

; --- 2) 3x generic buffer-prep calls (shared helper sub_1412762D0, copies
;         fields out of the shared "app state" struct pointed to by r15;
;         identical shape reused by dozens of other command arms, not
;         command-specific business logic) ---
1403d0080  lea rdi, [r15+208h]
1403d0087  lea rsi, [rbp+24B0h+var_22F0]
1403d008e  mov r8d, 190h
1403d0094  mov rcx, rsi
1403d0097  mov rdx, rdi
1403d009a  call sub_1412762D0
1403d009f  lea rbx, [rbp+24B0h+var_A70]
1403d00a6  mov r8d, 208h
1403d00ac  mov rcx, rbx
1403d00af  mov rdx, r15
1403d00b2  call sub_1412762D0
1403d00b7  lea rcx, [rbp+24B0h+var_CA8]
1403d00be  mov r8d, 190h
1403d00c4  mov rdx, rdi
1403d00c7  call sub_1412762D0
1403d00cc  mov rax, [r15+3A8h]
1403d00d3  mov [rbp+24B0h+var_50], rax
1403d00da  movdqu xmm0, xmmword ptr [r15+398h]
1403d00e3  movdqa [rbp+24B0h+var_60], xmm0
1403d00eb  mov [rbp+24B0h+var_690], 0

; --- 3) tracing::instrument span-metadata literals: THIS is the
;         command-specific part of the shared dispatch shape (span name +
;         target are per-arm immediates baked in at compile time) ---
1403d00f6  lea rax, aGetCodexRouter        ; "get_codex_router_auth_readiness" (32B)
1403d00fd  mov [rbp+24B0h+var_6C0], rax
1403d0104  mov qword ptr [rbp+24B0h+var_6B8], 1Fh
1403d010f  lea rax, aManager_0             ; "manager" (tracing target/module literal)
1403d0116  mov qword ptr [rbp+24B0h+var_6B8+8], rax
1403d011d  mov qword ptr [rbp+24B0h+var_6A8], 7   ; tracing level/field-count immediate
1403d0128  mov qword ptr [rbp+24B0h+var_6A8+8], rbx
1403d012f  lea rax, [rbp+24B0h+var_60]
1403d0136  mov [rbp+24B0h+var_698], rax

; --- 4) tracing callsite-registration trampoline (SHARED: sub_140419560 has
;         25 distinct callers incl. 2 other sites inside this very dispatcher
;         + reveal_relay_api_key_owner_sys; internally is a std::sync::Once
;         guard + hashbrown-style SIMD interest-cache probe -- pure tracing
;         crate machinery, not business logic) ---
1403d013d  mov rcx, [rbp+24B0h+var_870]
1403d0144  add rcx, 10h
1403d0148  mov [rbp+24B0h+var_37], 1
1403d014f  call sub_140419560              ; tracing callsite/interest cache (SHARED, 25 callers)
1403d0154  nop
1403d0155  test rax, rax
1403d0158  jnz short loc_1403D0190         ; interest already cached -> skip record-build below

; --- 5) (cold path, only if not yet interest-cached) span "new"/record call,
;         shared span-creation helper sub_14127A550, and a disc==6 sanity
;         check with an error/panic branch far away (loc_1403D3976) ---
1403d015a  lea r8, [rbp+24B0h+var_6B8+8]
1403d0161  mov [rbp+24B0h+var_37], 1
1403d0168  lea rcx, [rbp+24B0h+var_A0]
1403d016f  lea rdx, [rbp+24B0h+var_6C0]
1403d0176  call sub_14127A550
1403d017c  cmp byte ptr [rbp+24B0h+var_A0], 6
1403d0183  jnz loc_1403D3976               ; (far-away error/panic path, not traced this round)
1403d0189  mov rax, qword ptr [rbp+24B0h+var_A0+8]

; --- 6) THE REAL PER-COMMAND CALL (merge point of both paths above):
;         get_codex_router_auth_readiness_owner_sys(&var_410, rax).
;         Confirmed command-specific via analyze_function: this callee has
;         EXACTLY 1 caller in the entire binary (this exact call site). ---
loc_1403D0190:
1403d0190  mov [rbp+24B0h+var_37], 1
1403d0197  lea rcx, [rbp+24B0h+var_410]
1403d019e  mov rdx, rax
1403d01a1  call get_codex_router_auth_readiness_owner_sys   ; was sub_140024B90, renamed this session

; --- 7) result-discriminant check + (rare) error-path construction, then a
;         shared 16-byte tag/copy epilogue and jmp to a shared continuation
;         (loc_1403D2C29) common to many command arms ---
1403d01a7  lea rcx, [rbp+24B0h+var_6C0]
1403d01ae  mov r8d, 190h
1403d01b4  mov rdx, rsi
1403d01b7  call sub_1412762D0
1403d01bc  xor eax, eax
1403d01be  cmp rax, qword ptr [rbp+24B0h+var_410]
1403d01c5  jno loc_1403D2BC3               ; success path (normal Ok(..) return, this command never errors)
1403d01cb  lea rdx, [rbp+24B0h+var_410+8]
1403d01d2  mov [rbp+24B0h+var_71], 1
1403d01d9  lea rcx, [rbp+24B0h+var_A0]
1403d01e0  call sub_140408A20              ; (error/panic construction, not reached by this command's Ok-only body)
1403d01e6  movdqu xmm0, [rbp+24B0h+var_A0]
1403d01ee  movdqu xmm1, [rbp+24B0h+var_90]
1403d01f6  movdqu [rbp+24B0h+var_258], xmm1
1403d01fe  movdqu [rbp+24B0h+var_270+8], xmm0
1403d0206  mov rax, 8000000000000000h
1403d0210  mov qword ptr [rbp+24B0h+var_270], rax
1403d0217  jmp loc_1403D2C29               ; shared IPC-response-serialize continuation (many commands)
; --- end of this command's inline match-arm; 0x1403d021c begins the next
;     arm ("jumptable 00000001403CF605 case 20", a different command) ---
