// module: codexmate_lib
// addr: 0x140ca4d00
// name: import_accounts_from_file
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CA5257 for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140ca4d00  push    rbp
0x140ca4d01  push    r15
0x140ca4d03  push    r14
0x140ca4d05  push    r13
0x140ca4d07  push    r12
0x140ca4d09  push    rsi
0x140ca4d0a  push    rdi
0x140ca4d0b  push    rbx
0x140ca4d0c  sub     rsp, 0A58h
0x140ca4d13  lea     rbp, [rsp+80h]
0x140ca4d1b  movaps  [rbp+0A10h+var_50], xmm6
0x140ca4d22  mov     [rbp+0A10h+var_58], 0FFFFFFFFFFFFFFFEh
0x140ca4d2d  mov     r13, rdx
0x140ca4d30  mov     r14, rcx
0x140ca4d33  movzx   eax, byte ptr [rcx+24B0h]
0x140ca4d3a  lea     rcx, jpt_140CA4D4F
0x140ca4d41  movsxd  rax, ds:(jpt_140CA4D4F - 1417C6098h)[rcx+rax*4]; switch 4 cases
0x140ca4d45  add     rax, rcx
0x140ca4d48  mov     [rbp+0A10h+var_60], r14
0x140ca4d4f  jmp     rax; switch jump
0x140ca4d51  mov     word ptr [r14+24B1h], 101h; jumptable 0000000140CA4D4F case 0
0x140ca4d5b  mov     byte ptr [r14+24B3h], 1
0x140ca4d63  lea     rdx, [r14+188h]
0x140ca4d6a  lea     r15, [r14+1318h]
0x140ca4d71  mov     r8d, 1190h
0x140ca4d77  mov     rcx, r15
0x140ca4d7a  call    sub_141684120
0x140ca4d7f  movzx   eax, byte ptr [r14+24A0h]
0x140ca4d87  lea     rcx, jpt_140CA4D95
0x140ca4d8e  movsxd  rax, ds:(jpt_140CA4D95 - 1417C60A8h)[rcx+rax*4]; switch 5 cases
0x140ca4d92  add     rax, rcx
0x140ca4d95  jmp     rax; switch jump
0x140ca4d97  lea     r15, [r14+1318h]; jumptable 0000000140CA4D4F case 3
0x140ca4d9e  movzx   eax, byte ptr [r14+24A0h]
0x140ca4da6  lea     rcx, jpt_140CA4D95
0x140ca4dad  movsxd  rax, ds:(jpt_140CA4D95 - 1417C60A8h)[rcx+rax*4]; switch 4 cases
0x140ca4db1  add     rax, rcx
0x140ca4db4  jmp     rax; switch jump
0x140ca4db6  lea     rcx, [r14+1520h]; jumptable 0000000140CA4D95 case 0
0x140ca4dbd  mov     qword ptr [rbp+0A10h+var_168+8], 0
0x140ca4dc8  lea     rsi, aImportAccounts; "import_accounts_from_file"
0x140ca4dcf  mov     [rbp+0A10h+var_190], rsi
0x140ca4dd6  mov     qword ptr [rbp+0A10h+var_188], 19h
0x140ca4de1  lea     rax, aApp_2; "app"
0x140ca4de8  mov     qword ptr [rbp+0A10h+var_188+8], rax
0x140ca4def  mov     [rbp+0A10h+var_178], 3
0x140ca4dfa  mov     [rbp+0A10h+var_78], r15
0x140ca4e01  mov     [rbp+0A10h+var_170], r15
0x140ca4e08  mov     [rbp+0A10h+var_88], rcx
0x140ca4e0f  mov     qword ptr [rbp+0A10h+var_168], rcx
0x140ca4e16  lea     rcx, [rbp+0A10h+var_680]
0x140ca4e1d  lea     rdx, [rbp+0A10h+var_190]
0x140ca4e24  call    sub_1401C3650
0x140ca4e29  nop
0x140ca4e2a  mov     rax, [rbp+0A10h+var_680]
0x140ca4e31  mov     ecx, dword ptr [rbp+0A10h+var_678+2]
0x140ca4e37  movzx   r12d, word ptr [rbp+0A10h+var_678+6]
0x140ca4e3f  shl     r12, 20h
0x140ca4e43  or      r12, rcx
0x140ca4e46  movzx   r14d, byte ptr [rbp+0A10h+var_678]
0x140ca4e4e  movzx   r15d, byte ptr [rbp+0A10h+var_678+1]
0x140ca4e56  mov     rdx, qword ptr [rbp+0A10h+var_678+8]
0x140ca4e5d  mov     rbx, [rbp+0A10h+var_668]
0x140ca4e64  mov     rdi, qword ptr [rbp+0A10h+var_660]
0x140ca4e6b  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140ca4e6f  jz      loc_140CA5203
0x140ca4e75  movups  xmm0, [rbp+0A10h+var_5F8]
0x140ca4e7c  movups  [rbp+0A10h+var_9D8], xmm0
0x140ca4e80  movups  xmm0, [rbp+0A10h+var_608]
0x140ca4e87  movups  [rbp+0A10h+var_9E8], xmm0
0x140ca4e8b  movups  xmm0, [rbp+0A10h+var_618]
0x140ca4e92  movups  [rbp+0A10h+var_9F8], xmm0
0x140ca4e96  movdqu  xmm0, [rbp+0A10h+var_660+8]
0x140ca4e9e  movdqu  xmm1, [rbp+0A10h+var_648]
0x140ca4ea6  movups  xmm2, [rbp+0A10h+var_638]
0x140ca4ead  movups  xmm3, [rbp+0A10h+var_628]
0x140ca4eb4  movups  [rbp+0A10h+var_A08], xmm3
0x140ca4eb8  movups  [rbp+0A10h+var_A18], xmm2
0x140ca4ebc  movdqu  [rbp+0A10h+var_A28], xmm1
0x140ca4ec1  movdqu  [rbp+0A10h+var_A38], xmm0
0x140ca4ec6  mov     dword ptr [rbp+0A10h+var_A60+0Ah], r12d
0x140ca4eca  shr     r12, 20h
0x140ca4ece  mov     word ptr [rbp+0A10h+var_A60+0Eh], r12w
0x140ca4ed3  mov     qword ptr [rbp+0A10h+var_A50], rdx
0x140ca4ed7  mov     qword ptr [rbp+0A10h+var_A50+8], rbx
0x140ca4edb  mov     [rbp+0A10h+var_A40], rdi
0x140ca4edf  mov     qword ptr [rbp+0A10h+var_A60], rax
0x140ca4ee3  mov     byte ptr [rbp+0A10h+var_A60+8], r14b
0x140ca4ee7  mov     byte ptr [rbp+0A10h+var_A60+9], r15b
0x140ca4eeb  mov     [rbp+0A10h+var_650], 0
0x140ca4ef6  mov     [rbp+0A10h+var_680], rsi
0x140ca4efd  mov     qword ptr [rbp+0A10h+var_678], 19h
0x140ca4f08  lea     rax, aFilepath_1; "filePath"
0x140ca4f0f  mov     qword ptr [rbp+0A10h+var_678+8], rax
0x140ca4f16  mov     [rbp+0A10h+var_668], 8
0x140ca4f21  mov     rax, [rbp+0A10h+var_78]
0x140ca4f28  mov     qword ptr [rbp+0A10h+var_660], rax
0x140ca4f2f  mov     rax, [rbp+0A10h+var_88]
0x140ca4f36  mov     qword ptr [rbp+0A10h+var_660+8], rax
0x140ca4f3d  lea     rcx, [rbp+0A10h+var_190]
0x140ca4f44  lea     rdx, [rbp+0A10h+var_680]
0x140ca4f4b  call    sub_1409757B0
0x140ca4f50  nop
0x140ca4f51  movzx   r14d, byte ptr [rbp+0A10h+var_190]
0x140ca4f59  cmp     r14b, 0FFh
0x140ca4f5d  jz      loc_140CA52A3
0x140ca4f63  mov     r15b, byte ptr [rbp+0A10h+var_190+1]
0x140ca4f6a  mov     esi, dword ptr [rbp+0A10h+var_190+2]
0x140ca4f70  movzx   r12d, word ptr [rbp+0A10h+var_190+6]
0x140ca4f78  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca4f7f  mov     [rbp+0A10h+var_98], rax
0x140ca4f86  mov     rbx, qword ptr [rbp+0A10h+var_188+8]
0x140ca4f8d  mov     rdi, [rbp+0A10h+var_178]
0x140ca4f94  lea     rcx, [rbp+0A10h+var_A60]
0x140ca4f98  call    sub_140014150
0x140ca4f9d  nop
0x140ca4f9e  jmp     loc_140CA5B68
0x140ca4fa3  lea     rsi, [r14+2498h]; jumptable 0000000140CA4D95 case 3
0x140ca4faa  movzx   eax, byte ptr [r14+2498h]
0x140ca4fb2  lea     rbx, [r14+1A58h]
0x140ca4fb9  lea     rcx, jpt_140CA4FC7; jumptable 0000000140CA4D95 case 4
0x140ca4fc0  movsxd  rax, ds:(jpt_140CA4FC7 - 1417C60B8h)[rcx+rax*4]; switch 4 cases
0x140ca4fc4  add     rax, rcx
0x140ca4fc7  jmp     rax; switch jump
0x140ca4fc9  lea     r12, [r14+1F78h]; jumptable 0000000140CA4FC7 case 0
0x140ca4fd0  mov     r8d, 520h
0x140ca4fd6  mov     rcx, r12
0x140ca4fd9  mov     rdx, rbx
0x140ca4fdc  call    sub_141684120
0x140ca4fe1  movzx   eax, byte ptr [r14+20F1h]
0x140ca4fe9  lea     rcx, jpt_140CA4FF7
0x140ca4ff0  movsxd  rax, ds:(jpt_140CA4FF7 - 1417C60C8h)[rcx+rax*4]; switch 6 cases
0x140ca4ff4  add     rax, rcx
0x140ca4ff7  jmp     rax; switch jump
0x140ca4ff9  lea     r12, [r14+1F78h]; jumptable 0000000140CA4FC7 case 3
0x140ca5000  movzx   eax, byte ptr [r14+20F1h]
0x140ca5008  lea     rcx, jpt_140CA4FF7
0x140ca500f  movsxd  rax, ds:(jpt_140CA4FF7 - 1417C60C8h)[rcx+rax*4]; switch 5 cases
0x140ca5013  add     rax, rcx
0x140ca5016  jmp     rax; switch jump
0x140ca5018  mov     [rbp+0A10h+var_D8], rbx; jumptable 0000000140CA4FF7 case 0
0x140ca501f  mov     [rbp+0A10h+var_90], rsi
0x140ca5026  mov     [rbp+0A10h+var_78], r15
0x140ca502d  mov     word ptr [r14+20F2h], 1
0x140ca5037  lea     rdi, [r14+2058h]
0x140ca503e  mov     r8d, 98h
0x140ca5044  mov     rcx, rdi
0x140ca5047  mov     [rbp+0A10h+var_68], r12
0x140ca504e  mov     rdx, r12
0x140ca5051  call    sub_141684120
0x140ca5056  mov     r8, [r14+2010h]
0x140ca505d  mov     r12, [r14+2018h]
0x140ca5064  mov     word ptr [r14+20F5h], 101h
0x140ca506e  mov     rcx, [r14+2028h]
0x140ca5075  movups  xmm6, xmmword ptr [r14+2020h]
0x140ca507d  mov     rdx, [r14+2030h]
0x140ca5084  mov     rsi, [r14+2038h]
0x140ca508b  mov     bl, [r14+20F0h]
0x140ca5092  mov     byte ptr [r14+20F4h], 1
0x140ca509a  mov     rax, [r14+2050h]
0x140ca50a1  mov     [rbp+0A10h+var_2C0], rax
0x140ca50a8  movdqu  xmm0, xmmword ptr [r14+2040h]
0x140ca50b1  movdqa  [rbp+0A10h+var_2D0], xmm0
0x140ca50b9  mov     [rbp+0A10h+var_88], r8
0x140ca50c0  mov     [rbp+0A10h+var_198], r8
0x140ca50c7  mov     [rbp+0A10h+var_1A0], r12
0x140ca50ce  mov     [rbp+0A10h+var_98], rcx
0x140ca50d5  mov     [rbp+0A10h+var_1A8], rcx
0x140ca50dc  mov     [rbp+0A10h+var_80], rdx
0x140ca50e3  mov     [rbp+0A10h+var_1B0], rdx
0x140ca50ea  lea     rcx, [rbp+0A10h+var_A60]
0x140ca50ee  mov     rdx, rdi
0x140ca50f1  call    sub_1401C50B0
0x140ca50f6  nop
0x140ca50f7  mov     r15, [rbp+0A10h+var_60]
0x140ca50fe  mov     rdi, [r15+20E0h]
0x140ca5105  lock inc qword ptr [rdi]
0x140ca5109  jle     loc_140CA64BB
0x140ca510f  mov     r14, [r15+20E8h]
0x140ca5116  lock inc qword ptr [r14]
0x140ca511a  jle     loc_140CA64BB
0x140ca5120  lea     rcx, [rbp+0A10h+var_680]
0x140ca5127  lea     rdx, [rbp+0A10h+var_A60]
0x140ca512b  mov     r8d, 88h
0x140ca5131  call    sub_141684120
0x140ca5136  mov     byte ptr [r15+20F6h], 0
0x140ca513e  mov     word ptr [r15+20F4h], 0
0x140ca5148  mov     qword ptr [rbp+0A10h+var_5F8], rdi
0x140ca514f  mov     qword ptr [rbp+0A10h+var_5F8+8], r14
0x140ca5156  mov     rax, [rbp+0A10h+var_88]
0x140ca515d  mov     [rbp+0A10h+var_5E8], rax
0x140ca5164  mov     [rbp+0A10h+var_C8], r12
0x140ca516b  mov     [rbp+0A10h+var_5E0], r12
0x140ca5172  movups  [rbp+0A10h+var_5D8], xmm6
0x140ca5179  mov     rax, [rbp+0A10h+var_80]
0x140ca5180  mov     [rbp+0A10h+var_5C8], rax
0x140ca5187  mov     [rbp+0A10h+var_5C0], rsi
0x140ca518e  mov     [rbp+0A10h+var_5A0], bl
0x140ca5194  movdqa  xmm0, [rbp+0A10h+var_2D0]
0x140ca519c  movdqu  [rbp+0A10h+var_5B8], xmm0
0x140ca51a4  mov     rax, [rbp+0A10h+var_2C0]
0x140ca51ab  mov     [rbp+0A10h+var_5A8], rax
0x140ca51b2  mov     rdx, cs:off_141EC8710
0x140ca51b9  mov     eax, [rdx+60h]
0x140ca51bc  test    eax, eax
0x140ca51be  jnz     loc_140CA6342
0x140ca51c4  cmp     dword ptr [rdx+10h], 2
0x140ca51c8  jnz     loc_140CA53B1
0x140ca51ce  cmp     byte ptr [rdx], 0
0x140ca51d1  mov     eax, 1D8h
0x140ca51d6  mov     ecx, 2C0h
0x140ca51db  cmovnz  rcx, rax
0x140ca51df  add     rcx, [rdx+8]
0x140ca51e3  mov     [rbp+0A10h+var_69], 0
0x140ca51ea  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140ca51f1  lea     r8, [rbp+0A10h+var_680]
0x140ca51f8  call    sub_140896E40
0x140ca51fd  nop
0x140ca51fe  jmp     loc_140CA53E9
0x140ca5203  mov     rcx, [rbp+0A10h+var_78]
0x140ca520a  mov     [rbp+0A10h+var_98], rdx
0x140ca5211  jmp     loc_140CA5B76
0x140ca5216  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA4FF7 case 3
0x140ca521d  mov     [rbp+0A10h+var_D8], rbx
0x140ca5224  mov     [rbp+0A10h+var_90], rsi
0x140ca522b  mov     [rbp+0A10h+var_78], r15
0x140ca5232  jmp     loc_140CA53F7
0x140ca5237  mov     [rbp+0A10h+var_D8], rbx; jumptable 0000000140CA4FF7 case 4
0x140ca523e  mov     [rbp+0A10h+var_90], rsi
0x140ca5245  lea     rdx, [r14+2490h]
0x140ca524c  movzx   eax, byte ptr [r14+2490h]
0x140ca5254  lea     rcx, jpt_140CA5269
0x140ca525b  movsxd  rax, ds:(jpt_140CA5269 - 1417C60DCh)[rcx+rax*4]; switch 4 cases
0x140ca525f  add     rax, rcx
0x140ca5262  mov     [rbp+0A10h+var_E0], rdx
0x140ca5269  jmp     rax; switch jump
0x140ca526b  lea     rdi, [r14+2198h]; jumptable 0000000140CA5269 case 0
0x140ca5272  movdqu  xmm0, xmmword ptr [r14+2230h]
0x140ca527b  mov     rcx, [r14+2240h]
0x140ca5282  mov     rax, [r14+2248h]
0x140ca5289  mov     rdx, [r14+2250h]
0x140ca5290  mov     rsi, [r14+2258h]
0x140ca5297  mov     rbx, [r14+2260h]
0x140ca529e  jmp     loc_140CA5827
0x140ca52a3  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca52aa  mov     [rbp+0A10h+var_68], rax
0x140ca52b1  mov     rax, qword ptr [rbp+0A10h+var_188+8]
0x140ca52b8  mov     [rbp+0A10h+var_80], rax
0x140ca52bf  mov     rbx, [rbp+0A10h+var_178]
0x140ca52c6  mov     [rbp+0A10h+var_650], 0
0x140ca52d1  mov     [rbp+0A10h+var_680], rsi
0x140ca52d8  mov     qword ptr [rbp+0A10h+var_678], 19h
0x140ca52e3  lea     rax, aExpectedconten; "expectedContentSha256"
0x140ca52ea  mov     qword ptr [rbp+0A10h+var_678+8], rax
0x140ca52f1  mov     [rbp+0A10h+var_668], 15h
0x140ca52fc  mov     rax, [rbp+0A10h+var_78]
0x140ca5303  mov     qword ptr [rbp+0A10h+var_660], rax
0x140ca530a  mov     rax, [rbp+0A10h+var_88]
0x140ca5311  mov     qword ptr [rbp+0A10h+var_660+8], rax
0x140ca5318  lea     rcx, [rbp+0A10h+var_190]
0x140ca531f  lea     rdx, [rbp+0A10h+var_680]
0x140ca5326  call    sub_1409757B0
0x140ca532b  nop
0x140ca532c  movzx   r14d, byte ptr [rbp+0A10h+var_190]
0x140ca5334  cmp     r14b, 0FFh
0x140ca5338  jz      loc_140CA592D
0x140ca533e  movzx   r15d, byte ptr [rbp+0A10h+var_190+1]
0x140ca5346  mov     esi, dword ptr [rbp+0A10h+var_190+2]
0x140ca534c  movzx   r12d, word ptr [rbp+0A10h+var_190+6]
0x140ca5354  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca535b  mov     [rbp+0A10h+var_98], rax
0x140ca5362  mov     rbx, qword ptr [rbp+0A10h+var_188+8]
0x140ca5369  mov     rdi, [rbp+0A10h+var_178]
0x140ca5370  mov     rdx, [rbp+0A10h+var_68]
0x140ca5377  test    rdx, rdx
0x140ca537a  jz      short loc_140CA538F
0x140ca537c  mov     r8d, 1
0x140ca5382  mov     rcx, [rbp+0A10h+var_80]
0x140ca5389  call    sub_140001660
0x140ca538e  nop
0x140ca538f  lea     rcx, [rbp+0A10h+var_A60]
0x140ca5393  call    sub_140014150
0x140ca5398  nop
0x140ca5399  jmp     loc_140CA5B68
0x140ca539e  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA5269 case 3
0x140ca53a5  mov     [rbp+0A10h+var_78], r15
0x140ca53ac  jmp     loc_140CA587E
0x140ca53b1  cmp     byte ptr [rdx+40h], 0
0x140ca53b5  mov     eax, 1D8h
0x140ca53ba  mov     ecx, 2C0h
0x140ca53bf  cmovnz  rcx, rax
0x140ca53c3  lea     rax, [rdx+40h]
0x140ca53c7  add     rcx, [rdx+48h]
0x140ca53cb  mov     [rbp+0A10h+var_69], 0
0x140ca53d2  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140ca53d9  lea     r8, [rbp+0A10h+var_680]
0x140ca53e0  mov     rdx, rax
0x140ca53e3  call    sub_140896E40
0x140ca53e8  nop
0x140ca53e9  mov     r14, [rbp+0A10h+var_60]
0x140ca53f0  mov     [r14+20F8h], rax
0x140ca53f7  lea     rdx, [r14+20F8h]
0x140ca53fe  lea     rcx, [rbp+0A10h+var_680]
0x140ca5405  mov     [rbp+0A10h+var_A0], rdx
0x140ca540c  mov     r8, r13
0x140ca540f  call    sub_140B01860
0x140ca5414  nop
0x140ca5415  mov     rsi, [rbp+0A10h+var_680]
0x140ca541c  cmp     rsi, 0FFFFFFFFFFFFFFFDh
0x140ca5420  jz      short loc_140CA5450
0x140ca5422  mov     [rbp+0A10h+var_268], r13
0x140ca5429  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140ca542d  jnz     short loc_140CA5457
0x140ca542f  mov     r13, qword ptr [rbp+0A10h+var_678]
0x140ca5436  mov     rdi, qword ptr [rbp+0A10h+var_678+8]
0x140ca543d  mov     rbx, 800000000000000Ch
0x140ca5447  mov     r15, [rbp+0A10h+var_668]
0x140ca544e  jmp     short loc_140CA5496
0x140ca5450  mov     al, 3
0x140ca5452  jmp     loc_140CA58B5
0x140ca5457  mov     rbx, qword ptr [rbp+0A10h+var_678]
0x140ca545e  mov     r13, qword ptr [rbp+0A10h+var_678+8]
0x140ca5465  mov     rdi, [rbp+0A10h+var_668]
0x140ca546c  mov     r15, qword ptr [rbp+0A10h+var_660]
0x140ca5473  movups  xmm0, [rbp+0A10h+var_660+8]
0x140ca547a  movaps  [rbp+0A10h+var_A60], xmm0
0x140ca547e  movdqu  xmm0, [rbp+0A10h+var_648]
0x140ca5486  movdqa  [rbp+0A10h+var_A50], xmm0
0x140ca548b  mov     rax, qword ptr [rbp+0A10h+var_638]
0x140ca5492  mov     [rbp+0A10h+var_A40], rax
0x140ca5496  mov     r12, [rbp+0A10h+var_C8]
0x140ca549d  movdqa  xmm0, [rbp+0A10h+var_A60]
0x140ca54a2  movdqa  xmm1, [rbp+0A10h+var_A50]
0x140ca54a7  movdqa  [rbp+0A10h+var_300], xmm0
0x140ca54af  movdqa  [rbp+0A10h+var_2F0], xmm1
0x140ca54b7  mov     rax, [rbp+0A10h+var_A40]
0x140ca54bb  mov     [rbp+0A10h+var_2E0], rax
0x140ca54c2  mov     rax, [rbp+0A10h+var_A0]
0x140ca54c9  mov     r14, [rax]
0x140ca54cc  mov     rax, [rbp+0A10h+var_88]
0x140ca54d3  mov     [rbp+0A10h+var_A8], rax
0x140ca54da  mov     [rbp+0A10h+var_B0], r12
0x140ca54e1  mov     rax, [rbp+0A10h+var_98]
0x140ca54e8  mov     [rbp+0A10h+var_B8], rax
0x140ca54ef  mov     rax, [rbp+0A10h+var_80]
0x140ca54f6  mov     [rbp+0A10h+var_C0], rax
0x140ca54fd  mov     rcx, r14
0x140ca5500  call    sub_1412F2A80
0x140ca5505  nop
0x140ca5506  test    al, al
0x140ca5508  jz      short loc_140CA5544
0x140ca550a  mov     rax, [rbp+0A10h+var_88]
0x140ca5511  mov     [rbp+0A10h+var_A8], rax
0x140ca5518  mov     [rbp+0A10h+var_B0], r12
0x140ca551f  mov     rax, [rbp+0A10h+var_98]
0x140ca5526  mov     [rbp+0A10h+var_B8], rax
0x140ca552d  mov     rax, [rbp+0A10h+var_80]
0x140ca5534  mov     [rbp+0A10h+var_C0], rax
0x140ca553b  mov     rcx, r14
0x140ca553e  call    sub_1412E7580
0x140ca5543  nop
0x140ca5544  cmp     rsi, 0FFFFFFFFFFFFFFFFh
0x140ca5548  jz      loc_140CA560B
0x140ca554e  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140ca5552  jnz     loc_140CA564B
0x140ca5558  mov     [rbp+0A10h+var_680], rbx
0x140ca555f  mov     qword ptr [rbp+0A10h+var_678], r13
0x140ca5566  mov     qword ptr [rbp+0A10h+var_678+8], rdi
0x140ca556d  mov     [rbp+0A10h+var_668], r15
0x140ca5574  movdqa  xmm0, [rbp+0A10h+var_300]
0x140ca557c  movdqu  [rbp+0A10h+var_660], xmm0
0x140ca5584  lea     rax, [rbp+0A10h+var_680]
0x140ca558b  mov     [rbp+0A10h+var_240], rax
0x140ca5592  lea     rax, sub_141230630
0x140ca5599  mov     qword ptr [rbp+0A10h+var_238], rax
0x140ca55a0  lea     rdx, unk_1417B8CB0
0x140ca55a7  lea     rcx, [rbp+0A10h+var_A60]
0x140ca55ab  lea     r8, [rbp+0A10h+var_240]
0x140ca55b2  call    sub_14149C0F0
0x140ca55b7  nop
0x140ca55b8  mov     rax, [rbp+0A10h+var_88]
0x140ca55bf  mov     [rbp+0A10h+var_A8], rax
0x140ca55c6  mov     rax, [rbp+0A10h+var_C8]
0x140ca55cd  mov     [rbp+0A10h+var_B0], rax
0x140ca55d4  mov     rax, [rbp+0A10h+var_98]
0x140ca55db  mov     [rbp+0A10h+var_B8], rax
0x140ca55e2  mov     rax, [rbp+0A10h+var_80]
0x140ca55e9  mov     [rbp+0A10h+var_C0], rax
0x140ca55f0  lea     rcx, [rbp+0A10h+var_680]
0x140ca55f7  call    sub_140BF0F60
0x140ca55fc  nop
0x140ca55fd  mov     r12, qword ptr [rbp+0A10h+var_A60]
0x140ca5601  mov     r13, qword ptr [rbp+0A10h+var_A60+8]
0x140ca5605  mov     r15, qword ptr [rbp+0A10h+var_A50]
0x140ca5609  jmp     short loc_140CA5611
0x140ca560b  mov     r15, rdi
0x140ca560e  mov     r12, rbx
0x140ca5611  mov     rax, [rbp+0A10h+var_60]
0x140ca5618  mov     dword ptr [rax+20F3h], 0
0x140ca5622  lea     rcx, [rax+2058h]
0x140ca5629  call    sub_140014150
0x140ca562e  nop
0x140ca562f  mov     rax, [rbp+0A10h+var_60]
0x140ca5636  mov     word ptr [rax+20F1h], 1
0x140ca563f  mov     rsi, 0FFFFFFFFFFFFFFFFh
0x140ca5646  jmp     loc_140CA5E38
0x140ca564b  mov     qword ptr [rbp+0A10h+var_200], r15
0x140ca5652  movaps  xmm0, [rbp+0A10h+var_300]
0x140ca5659  movaps  xmm1, [rbp+0A10h+var_2F0]
0x140ca5660  movups  [rbp+0A10h+var_200+8], xmm0
0x140ca5667  movups  [rbp+0A10h+var_1E8], xmm1
0x140ca566e  mov     rax, [rbp+0A10h+var_2E0]
0x140ca5675  mov     [rbp+0A10h+var_1D8], rax
0x140ca567c  mov     [rbp+0A10h+var_218], rbx
0x140ca5683  mov     [rbp+0A10h+var_210], r13
0x140ca568a  mov     [rbp+0A10h+var_208], rdi
0x140ca5691  mov     [rbp+0A10h+var_220], rsi
0x140ca5698  mov     rax, [rbp+0A10h+var_60]
0x140ca569f  mov     byte ptr [rax+20F3h], 0
0x140ca56a6  mov     rax, qword ptr [rbp+0A10h+var_1E8+8]
0x140ca56ad  mov     qword ptr [rbp+0A10h+var_648+8], rax
0x140ca56b4  mov     rax, [rbp+0A10h+var_1D8]
0x140ca56bb  mov     qword ptr [rbp+0A10h+var_638], rax
0x140ca56c2  mov     rax, [rbp+0A10h+var_220]
0x140ca56c9  mov     rcx, [rbp+0A10h+var_218]
0x140ca56d0  mov     rdx, [rbp+0A10h+var_210]
0x140ca56d7  mov     r8, [rbp+0A10h+var_208]
0x140ca56de  movdqu  xmm0, [rbp+0A10h+var_200]
0x140ca56e6  movdqu  xmm1, xmmword ptr [rbp+820h]
0x140ca56ee  movdqa  xmmword ptr [rbp+3C0h], xmm1
0x140ca56f6  movdqa  [rbp+0A10h+var_660], xmm0
0x140ca56fe  mov     qword ptr [rbp+0A10h+var_678+8], rdx
0x140ca5705  mov     [rbp+0A10h+var_668], r8
0x140ca570c  mov     [rbp+0A10h+var_680], rax
0x140ca5713  mov     qword ptr [rbp+0A10h+var_678], rcx
0x140ca571a  mov     rax, [rbp+0A10h+var_88]
0x140ca5721  mov     [rbp+0A10h+var_1B8], rax
0x140ca5728  mov     [rbp+0A10h+var_1C0], r12
0x140ca572f  mov     rax, [rbp+0A10h+var_98]
0x140ca5736  mov     [rbp+0A10h+var_1C8], rax
0x140ca573d  mov     rax, [rbp+0A10h+var_80]
0x140ca5744  mov     [rbp+0A10h+var_1D0], rax
0x140ca574b  lea     rdx, [rbp+0A10h+var_680]
0x140ca5752  mov     rbx, [rbp+0A10h+var_A0]
0x140ca5759  mov     rcx, rbx
0x140ca575c  call    sub_140ACB050
0x140ca5761  nop
0x140ca5762  mov     r14, [rbp+0A10h+var_60]
0x140ca5769  mov     byte ptr [r14+20F2h], 0
0x140ca5771  lea     rdx, [r14+2058h]
0x140ca5778  lea     rdi, [r14+2198h]
0x140ca577f  mov     r8d, 98h
0x140ca5785  mov     rcx, rdi
0x140ca5788  call    sub_141684120
0x140ca578d  mov     [r14+2230h], rbx
0x140ca5794  lea     rcx, aRuntimeRefresh_0; "RUNTIME_REFRESH_FAILED_AFTER_IMPORT"
0x140ca579b  mov     [r14+2238h], rcx
0x140ca57a2  mov     qword ptr [r14+2240h], 23h ; '#'
0x140ca57ad  lea     rax, aAccountsWereIm; "Accounts were imported"
0x140ca57b4  mov     [r14+2248h], rax
0x140ca57bb  mov     qword ptr [r14+2250h], 16h
0x140ca57c6  lea     rsi, aImport; "import"
0x140ca57cd  mov     [r14+2258h], rsi
0x140ca57d4  mov     qword ptr [r14+2260h], 6
0x140ca57df  lea     rdx, [r14+2490h]
0x140ca57e6  mov     [rbp+0A10h+var_E0], rdx
0x140ca57ed  mov     byte ptr [r14+2490h], 0
0x140ca57f5  movq    xmm1, rcx
0x140ca57fa  movq    xmm0, rbx
0x140ca57ff  punpcklqdq xmm0, xmm1
0x140ca5803  mov     ecx, 23h ; '#'
0x140ca5808  mov     edx, 16h
0x140ca580d  mov     ebx, 6
0x140ca5812  mov     r15, [rbp+0A10h+var_78]
0x140ca5819  mov     r12, [rbp+0A10h+var_68]
0x140ca5820  mov     r13, [rbp+0A10h+var_268]
0x140ca5827  mov     [rbp+0A10h+var_68], r12
0x140ca582e  mov     [rbp+0A10h+var_78], r15
0x140ca5835  movdqu  xmmword ptr [r14+2268h], xmm0
0x140ca583e  mov     [r14+2278h], rcx
0x140ca5845  mov     [r14+2280h], rax
0x140ca584c  mov     [r14+2288h], rdx
0x140ca5853  lea     rcx, [r14+2290h]
0x140ca585a  mov     r8d, 98h
0x140ca5860  mov     rdx, rdi
0x140ca5863  call    sub_141684120
0x140ca5868  mov     [r14+2328h], rsi
0x140ca586f  mov     [r14+2330h], rbx
0x140ca5876  mov     byte ptr [r14+2488h], 0
0x140ca587e  lea     rdx, [r14+2290h]
0x140ca5885  lea     rcx, [rbp+0A10h+var_680]
0x140ca588c  mov     [rbp+0A10h+var_A0], rdx
0x140ca5893  mov     r8, r13
0x140ca5896  call    sub_140CF87B0
0x140ca589b  nop
0x140ca589c  mov     rsi, [rbp+0A10h+var_680]
0x140ca58a3  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140ca58a7  jnz     short loc_140CA58C7
0x140ca58a9  mov     rax, [rbp+0A10h+var_E0]
0x140ca58b0  mov     byte ptr [rax], 3
0x140ca58b3  mov     al, 4
0x140ca58b5  mov     rdx, [rbp+0A10h+var_60]
0x140ca58bc  mov     [rdx+20F1h], al
0x140ca58c2  jmp     loc_140CA5E21
0x140ca58c7  mov     rax, [rbp+0A10h+var_668]
0x140ca58ce  mov     [rbp+0A10h+var_250], rax
0x140ca58d5  movdqu  xmm0, [rbp+0A10h+var_678]
0x140ca58dd  movdqa  [rbp+0A10h+var_260], xmm0
0x140ca58e5  lea     rdx, [rbp+0A10h+var_660]
0x140ca58ec  lea     rcx, [rbp+0A10h+var_A60]
0x140ca58f0  mov     r8d, 358h
0x140ca58f6  call    sub_141684120
0x140ca58fb  mov     rdi, [rbp+0A10h+var_308]
0x140ca5902  mov     rdx, [rbp+0A10h+var_60]
0x140ca5909  movzx   eax, byte ptr [rdx+2488h]
0x140ca5910  cmp     eax, 3
0x140ca5913  jz      loc_140CA5A46
0x140ca5919  test    eax, eax
0x140ca591b  mov     rcx, [rbp+0A10h+var_A0]
0x140ca5922  jz      loc_140CA5C4B
0x140ca5928  jmp     loc_140CA5C51
0x140ca592d  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca5934  mov     [rbp+0A10h+var_90], rax
0x140ca593b  mov     rax, qword ptr [rbp+0A10h+var_188+8]
0x140ca5942  mov     [rbp+0A10h+var_A0], rax
0x140ca5949  mov     r12, [rbp+0A10h+var_178]
0x140ca5950  mov     [rbp+0A10h+var_650], 0
0x140ca595b  mov     [rbp+0A10h+var_680], rsi
0x140ca5962  mov     qword ptr [rbp+0A10h+var_678], 19h
0x140ca596d  lea     rax, aOverwriteexist; "overwriteExisting"
0x140ca5974  mov     qword ptr [rbp+0A10h+var_678+8], rax
0x140ca597b  mov     [rbp+0A10h+var_668], 11h
0x140ca5986  mov     rax, [rbp+0A10h+var_78]
0x140ca598d  mov     qword ptr [rbp+0A10h+var_660], rax
0x140ca5994  mov     rax, [rbp+0A10h+var_88]
0x140ca599b  mov     qword ptr [rbp+0A10h+var_660+8], rax
0x140ca59a2  lea     rcx, [rbp+0A10h+var_190]
0x140ca59a9  lea     rdx, [rbp+0A10h+var_680]
0x140ca59b0  call    sub_1401BCE80
0x140ca59b5  nop
0x140ca59b6  movzx   r14d, byte ptr [rbp+0A10h+var_190]
0x140ca59be  movzx   r15d, byte ptr [rbp+0A10h+var_190+1]
0x140ca59c6  cmp     r14b, 0FFh
0x140ca59ca  jz      loc_140CA5A77
0x140ca59d0  mov     esi, dword ptr [rbp+0A10h+var_190+2]
0x140ca59d6  movzx   r12d, word ptr [rbp+0A10h+var_190+6]
0x140ca59de  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca59e5  mov     [rbp+0A10h+var_98], rax
0x140ca59ec  mov     rbx, qword ptr [rbp+0A10h+var_188+8]
0x140ca59f3  mov     rdi, [rbp+0A10h+var_178]
0x140ca59fa  mov     rdx, [rbp+0A10h+var_90]
0x140ca5a01  test    rdx, rdx
0x140ca5a04  jz      short loc_140CA5A18
0x140ca5a06  mov     r8d, 1
0x140ca5a0c  mov     rcx, [rbp+0A10h+var_A0]
0x140ca5a13  call    sub_140001660
0x140ca5a18  mov     rdx, [rbp+0A10h+var_68]
0x140ca5a1f  test    rdx, rdx
0x140ca5a22  jz      short loc_140CA5A37
0x140ca5a24  mov     r8d, 1
0x140ca5a2a  mov     rcx, [rbp+0A10h+var_80]
0x140ca5a31  call    sub_140001660
0x140ca5a36  nop
0x140ca5a37  lea     rcx, [rbp+0A10h+var_A60]
0x140ca5a3b  call    sub_140014150
0x140ca5a40  nop
0x140ca5a41  jmp     loc_140CA5B68
0x140ca5a46  movzx   eax, byte ptr [rdx+2480h]
0x140ca5a4d  cmp     eax, 3
0x140ca5a50  jz      loc_140CA5C30
0x140ca5a56  test    eax, eax
0x140ca5a58  jnz     loc_140CA5C3D
0x140ca5a5e  mov     rax, [rbp+0A10h+var_60]
0x140ca5a65  lea     rcx, [rax+23E0h]
0x140ca5a6c  call    sub_140014150
0x140ca5a71  nop
0x140ca5a72  jmp     loc_140CA5C3D
0x140ca5a77  mov     [rbp+0A10h+var_650], 0
0x140ca5a82  mov     [rbp+0A10h+var_680], rsi
0x140ca5a89  mov     qword ptr [rbp+0A10h+var_678], 19h
0x140ca5a94  lea     rax, aSelectedkeys; "selectedKeys"
0x140ca5a9b  mov     qword ptr [rbp+0A10h+var_678+8], rax
0x140ca5aa2  mov     [rbp+0A10h+var_668], 0Ch
0x140ca5aad  mov     rax, [rbp+0A10h+var_78]
0x140ca5ab4  mov     qword ptr [rbp+0A10h+var_660], rax
0x140ca5abb  mov     rax, [rbp+0A10h+var_88]
0x140ca5ac2  mov     qword ptr [rbp+0A10h+var_660+8], rax
0x140ca5ac9  lea     rcx, [rbp+0A10h+var_190]
0x140ca5ad0  lea     rdx, [rbp+0A10h+var_680]
0x140ca5ad7  call    sub_140972400
0x140ca5adc  nop
0x140ca5add  movzx   r14d, byte ptr [rbp+0A10h+var_190]
0x140ca5ae5  cmp     r14b, 0FFh
0x140ca5ae9  jz      loc_140CA627D
0x140ca5aef  movzx   r15d, byte ptr [rbp+0A10h+var_190+1]
0x140ca5af7  mov     esi, dword ptr [rbp+0A10h+var_190+2]
0x140ca5afd  movzx   r12d, word ptr [rbp+0A10h+var_190+6]
0x140ca5b05  mov     rax, qword ptr [rbp+0A10h+var_188]
0x140ca5b0c  mov     [rbp+0A10h+var_98], rax
0x140ca5b13  mov     rbx, qword ptr [rbp+0A10h+var_188+8]
0x140ca5b1a  mov     rdi, [rbp+0A10h+var_178]
0x140ca5b21  mov     rdx, [rbp+0A10h+var_90]
0x140ca5b28  test    rdx, rdx
0x140ca5b2b  jz      short loc_140CA5B3F
0x140ca5b2d  mov     r8d, 1
0x140ca5b33  mov     rcx, [rbp+0A10h+var_A0]
0x140ca5b3a  call    sub_140001660
0x140ca5b3f  mov     rdx, [rbp+0A10h+var_68]
0x140ca5b46  test    rdx, rdx
0x140ca5b49  jz      short loc_140CA5B5E
0x140ca5b4b  mov     r8d, 1
0x140ca5b51  mov     rcx, [rbp+0A10h+var_80]
0x140ca5b58  call    sub_140001660
0x140ca5b5d  nop
0x140ca5b5e  lea     rcx, [rbp+0A10h+var_A60]
0x140ca5b62  call    sub_140014150
0x140ca5b67  nop
0x140ca5b68  shl     r12, 20h
0x140ca5b6c  or      r12, rsi
0x140ca5b6f  mov     rcx, [rbp+0A10h+var_78]
0x140ca5b76  call    sub_140BF0DE0
0x140ca5b7b  nop
0x140ca5b7c  mov     rax, [rbp+0A10h+var_88]
0x140ca5b83  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140ca5b87  jz      loc_140CA5C1E
0x140ca5b8d  mov     rax, [rbp+0A10h+var_60]
0x140ca5b94  lea     rcx, [rax+1528h]
0x140ca5b9b  mov     [rbp+0A10h+var_90], rcx
0x140ca5ba2  mov     rcx, [rax+1528h]
0x140ca5ba9  mov     rax, [rax+1530h]
0x140ca5bb0  mov     [rbp+0A10h+var_80], rax
0x140ca5bb7  mov     [rbp+0A10h+var_68], 0
0x140ca5bc2  mov     [rbp+0A10h+var_A0], rcx
0x140ca5bc9  nop     dword ptr [rax+00000000h]
0x140ca5bd0  mov     rax, [rbp+0A10h+var_68]
0x140ca5bd7  cmp     [rbp+0A10h+var_80], rax
0x140ca5bde  jz      short loc_140CA5BF9
0x140ca5be0  inc     rax
0x140ca5be3  mov     [rbp+0A10h+var_68], rax
0x140ca5bea  lea     rsi, [rcx+60h]
0x140ca5bee  call    sub_1402C7520
0x140ca5bf3  nop
0x140ca5bf4  mov     rcx, rsi
0x140ca5bf7  jmp     short loc_140CA5BD0
0x140ca5bf9  mov     r13d, r15d
0x140ca5bfc  mov     rax, [rbp+0A10h+var_88]
0x140ca5c03  mov     rax, [rax]
0x140ca5c06  mov     sil, 1
0x140ca5c09  test    rax, rax
0x140ca5c0c  mov     r15, [rbp+0A10h+var_60]
0x140ca5c13  jnz     loc_140CA615C
0x140ca5c19  jmp     loc_140CA6179
0x140ca5c1e  mov     r13d, r15d
0x140ca5c21  mov     sil, 1
0x140ca5c24  mov     r15, [rbp+0A10h+var_60]
0x140ca5c2b  jmp     loc_140CA6179
0x140ca5c30  lea     rcx, [rdx+2478h]
0x140ca5c37  call    sub_140B03640
0x140ca5c3c  nop
0x140ca5c3d  mov     rax, [rbp+0A10h+var_60]
0x140ca5c44  lea     rcx, [rax+2338h]
0x140ca5c4b  call    sub_140014150
0x140ca5c50  nop
0x140ca5c51  cmp     esi, 0FFFFFFFFh
0x140ca5c54  jz      loc_140CA5D06
0x140ca5c5a  mov     [rbp+0A10h+var_680], rsi
0x140ca5c61  movdqa  xmm0, [rbp+0A10h+var_260]
0x140ca5c69  movdqu  [rbp+0A10h+var_678], xmm0
0x140ca5c71  mov     rax, [rbp+0A10h+var_250]
0x140ca5c78  mov     [rbp+0A10h+var_668], rax
0x140ca5c7f  lea     rcx, [rbp+0A10h+var_660]
0x140ca5c86  lea     rdx, [rbp+0A10h+var_A60]
0x140ca5c8a  mov     r8d, 358h
0x140ca5c90  call    sub_141684120
0x140ca5c95  mov     [rbp+0A10h+var_308], rdi
0x140ca5c9c  mov     rdx, [rbp+0A10h+var_350]
0x140ca5ca3  test    rdx, rdx
0x140ca5ca6  jz      short loc_140CA5CBA
0x140ca5ca8  mov     rcx, [rbp+0A10h+var_348]
0x140ca5caf  mov     r8d, 1
0x140ca5cb5  call    sub_140001660
0x140ca5cba  mov     rdx, [rbp+0A10h+var_338]
0x140ca5cc1  test    rdx, rdx
0x140ca5cc4  jz      short loc_140CA5CD9
0x140ca5cc6  mov     rcx, [rbp+0A10h+var_330]
0x140ca5ccd  mov     r8d, 1
0x140ca5cd3  call    sub_140001660
0x140ca5cd8  nop
0x140ca5cd9  lea     rcx, [rbp+0A10h+var_680]
0x140ca5ce0  call    sub_140A8ED10
0x140ca5ce5  nop
0x140ca5ce6  movups  xmm0, [rbp+0A10h+var_720]
0x140ca5ced  movups  [rbp+0A10h+var_238], xmm0
0x140ca5cf4  mov     rax, [rbp+0A10h+var_710]
0x140ca5cfb  mov     [rbp+0A10h+var_228], rax
0x140ca5d02  xor     eax, eax
0x140ca5d04  jmp     short loc_140CA5D27
0x140ca5d06  mov     rax, [rbp+0A10h+var_250]
0x140ca5d0d  mov     [rbp+0A10h+var_228], rax
0x140ca5d14  movaps  xmm0, [rbp+0A10h+var_260]
0x140ca5d1b  movups  [rbp+0A10h+var_238], xmm0
0x140ca5d22  mov     eax, 1
0x140ca5d27  mov     rdx, [rbp+0A10h+var_60]
0x140ca5d2e  mov     [rbp+0A10h+var_240], rax
0x140ca5d35  mov     rcx, [rdx+2268h]
0x140ca5d3c  mov     r8, [rdx+2270h]
0x140ca5d43  mov     r9, [rdx+2278h]
0x140ca5d4a  movdqu  xmm0, xmmword ptr [rdx+2280h]
0x140ca5d52  movdqu  [rsp+0A90h+var_A70], xmm0
0x140ca5d58  lea     rdx, [rbp+0A10h+var_240]
0x140ca5d5f  call    sub_140354D30
0x140ca5d64  nop
0x140ca5d65  mov     rdx, [rbp+0A10h+var_60]
0x140ca5d6c  mov     byte ptr [rdx+2490h], 1
0x140ca5d73  mov     rsi, [rdx+20F8h]
0x140ca5d7a  mov     rbx, [rdx+2118h]
0x140ca5d81  mov     rax, [rdx+2190h]
0x140ca5d88  mov     [rbp+0A10h+var_690], rax
0x140ca5d8f  movups  xmm0, xmmword ptr [rdx+2180h]
0x140ca5d96  movaps  [rbp+0A10h+var_6A0], xmm0
0x140ca5d9d  movups  xmm0, xmmword ptr [rdx+2170h]
0x140ca5da4  movaps  [rbp+0A10h+var_6B0], xmm0
0x140ca5dab  movups  xmm0, xmmword ptr [rdx+2160h]
0x140ca5db2  movaps  [rbp+0A10h+var_6C0], xmm0
0x140ca5db9  movups  xmm0, xmmword ptr [rdx+2150h]
0x140ca5dc0  movaps  [rbp+0A10h+var_6D0], xmm0
0x140ca5dc7  movups  xmm0, xmmword ptr [rdx+2140h]
0x140ca5dce  movaps  [rbp+0A10h+var_6E0], xmm0
0x140ca5dd5  movups  xmm0, xmmword ptr [rdx+2130h]
0x140ca5ddc  movaps  [rbp+0A10h+var_6F0], xmm0
0x140ca5de3  movdqu  xmm0, xmmword ptr [rdx+2120h]
0x140ca5deb  movdqa  [rbp+0A10h+var_700], xmm0
0x140ca5df3  mov     word ptr [rdx+20F5h], 0
0x140ca5dfc  mov     r12, [rdx+2100h]
0x140ca5e03  mov     r13, [rdx+2108h]
0x140ca5e0a  mov     r15, [rdx+2110h]
0x140ca5e11  mov     dword ptr [rdx+20F1h], 1
0x140ca5e1b  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140ca5e1f  jnz     short loc_140CA5E38
0x140ca5e21  mov     byte ptr [rdx+2498h], 3
0x140ca5e28  mov     byte ptr [rdx+24A0h], 3
0x140ca5e2f  mov     cl, 3
0x140ca5e31  mov     al, 1
0x140ca5e33  jmp     loc_140CA625C
0x140ca5e38  mov     rcx, [rbp+0A10h+var_68]
0x140ca5e3f  call    sub_140BE92F0
0x140ca5e44  nop
0x140ca5e45  cmp     rsi, 0FFFFFFFFFFFFFFFFh
0x140ca5e49  jz      loc_140CA601E
0x140ca5e4f  mov     rax, [rbp+0A10h+var_690]
0x140ca5e56  mov     [rbp+0A10h+var_F8], rax
0x140ca5e5d  movaps  xmm0, [rbp+0A10h+var_6A0]
0x140ca5e64  movups  [rbp+0A10h+var_108], xmm0
0x140ca5e6b  movaps  xmm0, [rbp+0A10h+var_6B0]
0x140ca5e72  movups  [rbp+0A10h+var_118], xmm0
0x140ca5e79  movaps  xmm0, [rbp+0A10h+var_6C0]
0x140ca5e80  movups  [rbp+0A10h+var_128], xmm0
0x140ca5e87  movdqa  xmm0, [rbp+0A10h+var_700]
0x140ca5e8f  movdqa  xmm1, [rbp+0A10h+var_6F0]
0x140ca5e97  movaps  xmm2, [rbp+0A10h+var_6E0]
0x140ca5e9e  movaps  xmm3, [rbp+0A10h+var_6D0]
0x140ca5ea5  movups  [rbp+0A10h+var_138], xmm3
0x140ca5eac  movups  [rbp+0A10h+var_148], xmm2
0x140ca5eb3  movdqu  [rbp+0A10h+var_158], xmm1
0x140ca5ebb  movdqu  [rbp+0A10h+var_168], xmm0
0x140ca5ec3  mov     [rbp+0A10h+var_190], rsi
0x140ca5eca  mov     qword ptr [rbp+0A10h+var_188], r12
0x140ca5ed1  mov     qword ptr [rbp+0A10h+var_188+8], r13
0x140ca5ed8  mov     [rbp+0A10h+var_178], r15
0x140ca5edf  mov     [rbp+0A10h+var_170], rbx
0x140ca5ee6  lea     rcx, [rbp+0A10h+var_680]
0x140ca5eed  lea     rdx, [rbp+0A10h+var_190]
0x140ca5ef4  call    sub_140B06C80
0x140ca5ef9  nop
0x140ca5efa  mov     rax, [rbp+0A10h+var_680]
0x140ca5f01  mov     ecx, dword ptr [rbp+0A10h+var_678+2]
0x140ca5f07  movzx   r12d, word ptr [rbp+0A10h+var_678+6]
0x140ca5f0f  shl     r12, 20h
0x140ca5f13  or      r12, rcx
0x140ca5f16  movzx   r14d, byte ptr [rbp+0A10h+var_678]
0x140ca5f1e  movzx   r13d, byte ptr [rbp+0A10h+var_678+1]
0x140ca5f26  mov     r15, qword ptr [rbp+0A10h+var_678+8]
0x140ca5f2d  mov     rbx, [rbp+0A10h+var_668]
0x140ca5f34  mov     rdi, qword ptr [rbp+0A10h+var_660]
0x140ca5f3b  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140ca5f3f  jz      loc_140CA6044
0x140ca5f45  mov     rcx, qword ptr [rbp+0A10h+var_660+8]
0x140ca5f4c  mov     byte ptr [rbp+0A10h+var_678+1], r13b
0x140ca5f53  mov     rdx, r12
0x140ca5f56  shr     rdx, 20h
0x140ca5f5a  mov     word ptr [rbp+0A10h+var_678+6], dx
0x140ca5f61  mov     dword ptr [rbp+0A10h+var_678+2], r12d
0x140ca5f68  mov     qword ptr [rbp+0A10h+var_678+8], r15
0x140ca5f6f  mov     [rbp+0A10h+var_668], rbx
0x140ca5f76  mov     qword ptr [rbp+0A10h+var_660], rdi
0x140ca5f7d  mov     [rbp+0A10h+var_680], rax
0x140ca5f84  mov     byte ptr [rbp+0A10h+var_678], r14b
0x140ca5f8b  mov     qword ptr [rbp+0A10h+var_660+8], rcx
0x140ca5f92  mov     [rbp+0A10h+var_220], 0
0x140ca5f9d  mov     [rbp+0A10h+var_218], 1
0x140ca5fa8  mov     [rbp+0A10h+var_210], 0
0x140ca5fb3  mov     qword ptr [rbp+0A10h+var_A50], 60000020h
0x140ca5fbb  lea     rax, [rbp+0A10h+var_220]
0x140ca5fc2  mov     qword ptr [rbp+0A10h+var_A60], rax
0x140ca5fc6  lea     rax, off_1417C41C0
0x140ca5fcd  mov     qword ptr [rbp+0A10h+var_A60+8], rax
0x140ca5fd1  lea     rcx, [rbp+0A10h+var_680]
0x140ca5fd8  lea     rdx, [rbp+0A10h+var_A60]
0x140ca5fdc  call    sub_141230630
0x140ca5fe1  nop
0x140ca5fe2  test    al, al
0x140ca5fe4  jnz     loc_140CA6360
0x140ca5fea  mov     r15, [rbp+0A10h+var_220]
0x140ca5ff1  mov     rbx, [rbp+0A10h+var_218]
0x140ca5ff8  mov     rdi, [rbp+0A10h+var_210]
0x140ca5fff  lea     rcx, [rbp+0A10h+var_680]
0x140ca6006  call    sub_140BF0F60
0x140ca600b  nop
0x140ca600c  mov     sil, 1
0x140ca600f  mov     r14b, 3
0x140ca6012  mov     rcx, [rbp+0A10h+var_78]
0x140ca6019  jmp     loc_140CA60B9
0x140ca601e  test    r15, r15
0x140ca6021  jns     short loc_140CA604F
0x140ca6023  xor     esi, esi
0x140ca6025  mov     [rbp+0A10h+var_80], r13
0x140ca602c  mov     [rbp+0A10h+var_68], r12
0x140ca6033  mov     rcx, rsi
0x140ca6036  mov     rdx, r15
0x140ca6039  call    sub_1416C2D4B
0x140ca603e  db 90h
0x140ca603f  jmp     loc_140CA64BB
0x140ca6044  xor     esi, esi
0x140ca6046  mov     rcx, [rbp+0A10h+var_78]
0x140ca604d  jmp     short loc_140CA60B9
0x140ca604f  jz      short loc_140CA6080
0x140ca6051  call    nullsub_1
0x140ca6056  mov     esi, 1
0x140ca605b  mov     edx, 1
0x140ca6060  mov     rcx, r15
0x140ca6063  call    sub_140001650
0x140ca6068  test    rax, rax
0x140ca606b  jz      short loc_140CA6025
0x140ca606d  mov     rbx, rax
0x140ca6070  mov     rcx, rax
0x140ca6073  mov     rdx, r13
0x140ca6076  mov     r8, r15
0x140ca6079  call    sub_141684120
0x140ca607e  jmp     short loc_140CA6085
0x140ca6080  mov     ebx, 1
0x140ca6085  mov     sil, 1
0x140ca6088  mov     r14b, 3
0x140ca608b  test    r12, r12
0x140ca608e  mov     rcx, [rbp+0A10h+var_78]
0x140ca6095  jz      short loc_140CA60B6
0x140ca6097  mov     r8d, 1
0x140ca609d  mov     rdi, r15
0x140ca60a0  mov     r15, rcx
0x140ca60a3  mov     rcx, r13
0x140ca60a6  mov     rdx, r12
0x140ca60a9  call    sub_140001660
0x140ca60ae  mov     rcx, r15
0x140ca60b1  mov     r15, rdi
0x140ca60b4  jmp     short loc_140CA60B9
0x140ca60b6  mov     rdi, r15
0x140ca60b9  mov     [rbp+0A10h+var_98], r15
0x140ca60c0  mov     rax, [rbp+0A10h+var_90]
0x140ca60c7  mov     byte ptr [rax], 1
0x140ca60ca  call    sub_140BF0DE0
0x140ca60cf  nop
0x140ca60d0  mov     r15, [rbp+0A10h+var_60]
0x140ca60d7  cmp     qword ptr [r15+1520h], 0FFFFFFFFFFFFFFFFh
0x140ca60df  jz      loc_140CA6179
0x140ca60e5  lea     rax, [r15+1528h]
0x140ca60ec  mov     [rbp+0A10h+var_90], rax
0x140ca60f3  mov     rcx, [r15+1528h]
0x140ca60fa  mov     rax, [r15+1530h]
0x140ca6101  mov     [rbp+0A10h+var_80], rax
0x140ca6108  mov     [rbp+0A10h+var_68], 0
0x140ca6113  mov     [rbp+0A10h+var_88], rcx
0x140ca611a  nop     word ptr [rax+rax+00h]
0x140ca6120  mov     rax, [rbp+0A10h+var_68]
0x140ca6127  cmp     [rbp+0A10h+var_80], rax
0x140ca612e  jz      short loc_140CA6149
0x140ca6130  inc     rax
0x140ca6133  mov     [rbp+0A10h+var_68], rax
0x140ca613a  lea     r15, [rcx+60h]
0x140ca613e  call    sub_1402C7520
0x140ca6143  nop
0x140ca6144  mov     rcx, r15
0x140ca6147  jmp     short loc_140CA6120
0x140ca6149  mov     r15, [rbp+0A10h+var_60]
0x140ca6150  mov     rax, [r15+1520h]
0x140ca6157  test    rax, rax
0x140ca615a  jz      short loc_140CA6179
0x140ca615c  mov     rcx, [rbp+0A10h+var_90]
0x140ca6163  mov     rcx, [rcx]
0x140ca6166  shl     rax, 5
0x140ca616a  lea     rdx, [rax+rax*2]
0x140ca616e  mov     r8d, 8
0x140ca6174  call    sub_140001660
0x140ca6179  mov     byte ptr [r15+24A0h], 1
0x140ca6181  mov     rcx, [rbp+0A10h+var_78]
0x140ca6188  call    sub_140BE1E40
0x140ca618d  nop
0x140ca618e  mov     [rbp+0A10h+var_2A6], r12d
0x140ca6195  shr     r12, 20h
0x140ca6199  mov     [rbp+0A10h+var_2A2], r12w
0x140ca61a1  mov     rax, [rbp+0A10h+var_98]
0x140ca61a8  mov     [rbp+0A10h+var_2A0], rax
0x140ca61af  mov     [rbp+0A10h+var_298], rbx
0x140ca61b6  mov     [rbp+0A10h+var_290], rdi
0x140ca61bd  movzx   eax, sil
0x140ca61c1  mov     [rbp+0A10h+var_2A8], r14b
0x140ca61c8  mov     [rbp+0A10h+var_2A7], r13b
0x140ca61cf  mov     [rbp+0A10h+var_2B0], rax
0x140ca61d6  mov     rdi, [rbp+0A10h+var_60]
0x140ca61dd  mov     byte ptr [rdi+24B3h], 0
0x140ca61e4  lea     rsi, [rbp+0A10h+var_680]
0x140ca61eb  mov     r8d, 168h
0x140ca61f1  mov     rcx, rsi
0x140ca61f4  mov     rdx, rdi
0x140ca61f7  call    sub_141684120
0x140ca61fc  mov     byte ptr [rdi+24B2h], 0
0x140ca6203  mov     rdx, [rdi+180h]
0x140ca620a  mov     byte ptr [rdi+24B1h], 0
0x140ca6211  mov     rax, [rdi+178h]
0x140ca6218  mov     qword ptr [rbp+0A10h+var_A50], rax
0x140ca621c  movdqu  xmm0, xmmword ptr [rdi+168h]
0x140ca6224  movdqa  [rbp+0A10h+var_A60], xmm0
0x140ca6229  mov     eax, [rdi+24A8h]
0x140ca622f  mov     ecx, [rdi+24ACh]
0x140ca6235  mov     dword ptr [rsp+0A90h+var_A70+8], ecx
0x140ca6239  mov     dword ptr [rsp+0A90h+var_A70], eax
0x140ca623d  lea     r8, [rbp+0A10h+var_2B0]
0x140ca6244  lea     r9, [rbp+0A10h+var_A60]
0x140ca6248  mov     rcx, rsi
0x140ca624b  call    sub_14047E370
0x140ca6250  nop
0x140ca6251  mov     cl, 1
0x140ca6253  xor     eax, eax
0x140ca6255  mov     rdx, [rbp+0A10h+var_60]
0x140ca625c  mov     [rdx+24B0h], cl
0x140ca6262  movaps  xmm6, [rbp+0A10h+var_50]
0x140ca6269  add     rsp, 0A58h
0x140ca6270  pop     rbx
0x140ca6271  pop     rdi
0x140ca6272  pop     rsi
0x140ca6273  pop     r12
0x140ca6275  pop     r13
0x140ca6277  pop     r14
0x140ca6279  pop     r15
0x140ca627b  pop     rbp
0x140ca627c  retn
0x140ca627d  movups  xmm6, [rbp+0A10h+var_188]
0x140ca6284  mov     rsi, [rbp+0A10h+var_178]
0x140ca628b  mov     r14, [rbp+0A10h+var_60]
0x140ca6292  lea     rdi, [r14+1538h]
0x140ca6299  lea     rdx, [rbp+0A10h+var_A60]
0x140ca629d  mov     r8d, 98h
0x140ca62a3  mov     rcx, rdi
0x140ca62a6  call    sub_141684120
0x140ca62ab  mov     rax, [rbp+0A10h+var_68]
0x140ca62b2  mov     [r14+15D0h], rax
0x140ca62b9  mov     rax, [rbp+0A10h+var_80]
0x140ca62c0  mov     [r14+15D8h], rax
0x140ca62c7  mov     [r14+15E0h], rbx
0x140ca62ce  mov     rax, [rbp+0A10h+var_90]
0x140ca62d5  mov     [r14+15E8h], rax
0x140ca62dc  mov     rax, [rbp+0A10h+var_A0]
0x140ca62e3  mov     [r14+15F0h], rax
0x140ca62ea  mov     [r14+15F8h], r12
0x140ca62f1  mov     [r14+16B0h], r15b
0x140ca62f8  movups  xmmword ptr [r14+1600h], xmm6
0x140ca6300  mov     [r14+1610h], rsi
0x140ca6307  mov     byte ptr [r14+16B1h], 0
0x140ca630f  lea     rbx, [r14+1A58h]
0x140ca6316  mov     r8d, 520h
0x140ca631c  mov     rcx, rbx
0x140ca631f  mov     rdx, rdi
0x140ca6322  call    sub_141684120
0x140ca6327  lea     rsi, [r14+2498h]
0x140ca632e  mov     byte ptr [r14+2498h], 0
0x140ca6336  mov     r15, [rbp+0A10h+var_78]
0x140ca633d  jmp     loc_140CA4FC9; jumptable 0000000140CA4FC7 case 0
0x140ca6342  mov     [rbp+0A10h+var_69], 1
0x140ca6349  mov     rcx, cs:off_141EC8710
0x140ca6350  mov     rsi, rdx
0x140ca6353  call    sub_1416984A3
0x140ca6358  mov     rdx, rsi
0x140ca635b  jmp     loc_140CA51C4
0x140ca6360  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140ca6367  mov     qword ptr [rsp+0A90h+var_A70], rax
0x140ca636c  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140ca6373  lea     r9, unk_1417BC180
0x140ca637a  lea     r8, [rbp+0A10h+var_C9]
0x140ca6381  mov     edx, 37h ; '7'
0x140ca6386  call    sub_1416C3060
0x140ca638b  align 4
0x140ca638c  jmp     loc_140CA64BB
0x140ca6391  lea     rcx, off_1417B7C00; jumptable 0000000140CA4D4F case 2
0x140ca6398  call    sub_1416C3420
0x140ca639d  ud2
0x140ca639f  lea     rcx, off_1417B7C00; jumptable 0000000140CA4D4F case 1
0x140ca63a6  call    sub_1416C3400
0x140ca63ab  ud2
0x140ca63ad  mov     [rbp+0A10h+var_78], r15; jumptable 0000000140CA4D95 case 2
0x140ca63b4  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140ca63bb  call    sub_1416C3420
0x140ca63c0  db 90h
0x140ca63c1  jmp     loc_140CA64BB
0x140ca63c6  mov     [rbp+0A10h+var_78], r15; jumptable 0000000140CA4D95 case 1
0x140ca63cd  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140ca63d4  call    sub_1416C3400
0x140ca63d9  align 2
0x140ca63da  jmp     loc_140CA64BB
0x140ca63df  mov     [rbp+0A10h+var_78], r15; jumptable 0000000140CA4FC7 case 2
0x140ca63e6  mov     [rbp+0A10h+var_E8], rsi
0x140ca63ed  mov     [rbp+0A10h+var_F0], rbx
0x140ca63f4  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140ca63fb  call    sub_1416C3420
0x140ca6400  db 90h
0x140ca6401  jmp     loc_140CA64BB
0x140ca6406  mov     [rbp+0A10h+var_78], r15; jumptable 0000000140CA4FC7 case 1
0x140ca640d  mov     [rbp+0A10h+var_E8], rsi
0x140ca6414  mov     [rbp+0A10h+var_F0], rbx
0x140ca641b  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140ca6422  call    sub_1416C3400
0x140ca6427  align 8
0x140ca6428  jmp     loc_140CA64BB
0x140ca642d  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA4FF7 case 2
0x140ca6434  mov     [rbp+0A10h+var_D8], rbx
0x140ca643b  mov     [rbp+0A10h+var_90], rsi
0x140ca6442  mov     [rbp+0A10h+var_78], r15
0x140ca6449  lea     rcx, off_1417BAB30; "src\\commands\\account_io.rs"
0x140ca6450  call    sub_1416C3420
0x140ca6455  align 2
0x140ca6456  jmp     short loc_140CA64BB
0x140ca6458  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA4FF7 case 1
0x140ca645f  mov     [rbp+0A10h+var_D8], rbx
0x140ca6466  mov     [rbp+0A10h+var_90], rsi
0x140ca646d  mov     [rbp+0A10h+var_78], r15
0x140ca6474  lea     rcx, off_1417BAB30; "src\\commands\\account_io.rs"
0x140ca647b  call    sub_1416C3400
0x140ca6480  db 90h
0x140ca6481  jmp     short loc_140CA64BB
0x140ca6483  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA5269 case 2
0x140ca648a  mov     [rbp+0A10h+var_78], r15
0x140ca6491  lea     rcx, off_1417B8060; "src\\commands\\accounts.rs"
0x140ca6498  call    sub_1416C3420
0x140ca649d  align 2
0x140ca649e  jmp     short loc_140CA64BB
0x140ca64a0  mov     [rbp+0A10h+var_68], r12; jumptable 0000000140CA5269 case 1
0x140ca64a7  mov     [rbp+0A10h+var_78], r15
0x140ca64ae  lea     rcx, off_1417B8060; "src\\commands\\accounts.rs"
0x140ca64b5  call    sub_1416C3400
0x140ca64ba  db 90h
0x140ca64bb  ud2