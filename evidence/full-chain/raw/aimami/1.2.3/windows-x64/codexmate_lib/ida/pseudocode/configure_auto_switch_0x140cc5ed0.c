// module: codexmate_lib
// addr: 0x140cc5ed0
// name: configure_auto_switch
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CC6F38 for case 6]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cc5ed0  push    rbp
0x140cc5ed1  push    r15
0x140cc5ed3  push    r14
0x140cc5ed5  push    r13
0x140cc5ed7  push    r12
0x140cc5ed9  push    rsi
0x140cc5eda  push    rdi
0x140cc5edb  push    rbx
0x140cc5edc  sub     rsp, 428h
0x140cc5ee3  lea     rbp, [rsp+80h]
0x140cc5eeb  movaps  [rbp+3E0h+var_50], xmm7
0x140cc5ef2  movaps  [rbp+3E0h+var_60], xmm6
0x140cc5ef9  mov     [rbp+3E0h+var_68], 0FFFFFFFFFFFFFFFEh
0x140cc5f04  mov     r12, rdx
0x140cc5f07  mov     rbx, rcx
0x140cc5f0a  movzx   eax, byte ptr [rcx+2270h]
0x140cc5f11  lea     rcx, jpt_140CC5F26
0x140cc5f18  movsxd  rax, ds:(jpt_140CC5F26 - 1417C6718h)[rcx+rax*4]; switch 4 cases
0x140cc5f1c  add     rax, rcx
0x140cc5f1f  mov     [rbp+3E0h+var_78], rbx
0x140cc5f26  jmp     rax; switch jump
0x140cc5f28  mov     word ptr [rbx+2271h], 101h; jumptable 0000000140CC5F26 case 0
0x140cc5f31  mov     byte ptr [rbx+2273h], 1
0x140cc5f38  lea     rdx, [rbx+188h]
0x140cc5f3f  lea     rdi, [rbx+11F8h]
0x140cc5f46  mov     r8d, 1070h
0x140cc5f4c  mov     rcx, rdi
0x140cc5f4f  call    sub_141684120
0x140cc5f54  movzx   eax, byte ptr [rbx+2260h]
0x140cc5f5b  lea     rcx, jpt_140CC5F69
0x140cc5f62  movsxd  rax, ds:(jpt_140CC5F69 - 1417C6728h)[rcx+rax*4]; switch 8 cases
0x140cc5f66  add     rax, rcx
0x140cc5f69  jmp     rax; switch jump
0x140cc5f6b  lea     rdi, [rbx+11F8h]; jumptable 0000000140CC5F26 case 3
0x140cc5f72  movzx   eax, byte ptr [rbx+2260h]
0x140cc5f79  lea     rcx, jpt_140CC5F69
0x140cc5f80  movsxd  rax, ds:(jpt_140CC5F69 - 1417C6728h)[rcx+rax*4]; switch 4 cases
0x140cc5f84  add     rax, rcx
0x140cc5f87  jmp     rax; switch jump
0x140cc5f89  lea     rcx, [rbx+1400h]; jumptable 0000000140CC5F69 case 0
0x140cc5f90  mov     qword ptr [rbp+3E0h+var_120+8], 0
0x140cc5f9b  lea     rsi, aConfigureAutoS; "configure_auto_switch"
0x140cc5fa2  mov     [rbp+3E0h+var_148], rsi
0x140cc5fa9  mov     [rbp+3E0h+var_140], 15h
0x140cc5fb4  lea     rax, aApp_2; "app"
0x140cc5fbb  mov     [rbp+3E0h+var_138], rax
0x140cc5fc2  mov     [rbp+3E0h+var_130], 3
0x140cc5fcd  mov     [rbp+3E0h+var_A0], rdi
0x140cc5fd4  mov     [rbp+3E0h+var_128], rdi
0x140cc5fdb  mov     [rbp+3E0h+var_88], rcx
0x140cc5fe2  mov     qword ptr [rbp+3E0h+var_120], rcx
0x140cc5fe9  lea     rcx, [rbp+3E0h+var_348]
0x140cc5ff0  lea     rdx, [rbp+3E0h+var_148]
0x140cc5ff7  call    sub_1401C3650
0x140cc5ffc  nop
0x140cc5ffd  mov     rax, [rbp+3E0h+var_348]
0x140cc6004  movzx   r14d, byte ptr [rbp+3E0h+var_340]
0x140cc600c  movzx   r8d, byte ptr [rbp+3E0h+var_340+1]
0x140cc6014  movzx   r9d, word ptr [rbp+3E0h+var_340+2]
0x140cc601c  mov     r15d, dword ptr [rbp+3E0h+var_340+4]
0x140cc6023  mov     ebx, dword ptr [rbp+3E0h+var_338]
0x140cc6029  mov     r13d, dword ptr [rbp+3E0h+var_338+4]
0x140cc6030  mov     rdx, [rbp+3E0h+var_330]
0x140cc6037  mov     rcx, qword ptr [rbp+3E0h+var_328]
0x140cc603e  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cc6042  jz      loc_140CC633E
0x140cc6048  movups  xmm0, [rbp+3E0h+var_2C0]
0x140cc604f  movups  [rbp+3E0h+var_158], xmm0
0x140cc6056  movups  xmm0, [rbp+3E0h+var_2D0]
0x140cc605d  movups  [rbp+3E0h+var_168], xmm0
0x140cc6064  movups  xmm0, [rbp+3E0h+var_2E0]
0x140cc606b  movups  [rbp+3E0h+var_178], xmm0
0x140cc6072  movups  xmm0, [rbp+3E0h+var_328+8]
0x140cc6079  movups  xmm1, [rbp+3E0h+var_310]
0x140cc6080  movups  xmm2, [rbp+3E0h+var_300]
0x140cc6087  movups  xmm3, [rbp+3E0h+var_2F0]
0x140cc608e  movups  [rbp+3E0h+var_188], xmm3
0x140cc6095  movups  [rbp+3E0h+var_198], xmm2
0x140cc609c  movups  [rbp+3E0h+var_1A8], xmm1
0x140cc60a3  movups  [rbp+3E0h+var_1C0+8], xmm0
0x140cc60aa  mov     dword ptr [rbp+3E0h+var_1D0+4], r13d
0x140cc60b1  mov     qword ptr [rbp+3E0h+var_1D0+8], rdx
0x140cc60b8  mov     qword ptr [rbp+3E0h+var_1C0], rcx
0x140cc60bf  mov     qword ptr [rbp+3E0h+var_1E0], rax
0x140cc60c6  mov     byte ptr [rbp+3E0h+var_1E0+8], r14b
0x140cc60cd  mov     byte ptr [rbp+3E0h+var_1E0+9], r8b
0x140cc60d4  mov     word ptr [rbp+3E0h+var_1E0+0Ah], r9w
0x140cc60dc  mov     dword ptr [rbp+3E0h+var_1E0+0Ch], r15d
0x140cc60e3  mov     dword ptr [rbp+3E0h+var_1D0], ebx
0x140cc60e9  mov     [rbp+3E0h+var_318], 0
0x140cc60f4  mov     [rbp+3E0h+var_348], rsi
0x140cc60fb  mov     [rbp+3E0h+var_340], 15h
0x140cc6106  lea     rax, aThreshold5hper_3; "threshold5hPercent"
0x140cc610d  mov     [rbp+3E0h+var_338], rax
0x140cc6114  mov     [rbp+3E0h+var_330], 12h
0x140cc611f  mov     rax, [rbp+3E0h+var_A0]
0x140cc6126  mov     qword ptr [rbp+3E0h+var_328], rax
0x140cc612d  mov     rax, [rbp+3E0h+var_88]
0x140cc6134  mov     qword ptr [rbp+3E0h+var_328+8], rax
0x140cc613b  lea     rcx, [rbp+3E0h+var_148]
0x140cc6142  lea     rdx, [rbp+3E0h+var_348]
0x140cc6149  call    sub_140974FD0
0x140cc614e  nop
0x140cc614f  movzx   r14d, byte ptr [rbp+3E0h+var_148]
0x140cc6157  cmp     r14b, 0FFh
0x140cc615b  jz      loc_140CC635C
0x140cc6161  movzx   eax, byte ptr [rbp+3E0h+var_148+1]
0x140cc6168  mov     byte ptr [rbp+3E0h+var_A8], al
0x140cc616e  movzx   eax, word ptr [rbp+3E0h+var_148+2]
0x140cc6175  mov     [rbp+3E0h+var_7A], ax
0x140cc617c  mov     r15d, dword ptr [rbp+3E0h+var_148+4]
0x140cc6183  mov     ebx, dword ptr [rbp+3E0h+var_140]
0x140cc6189  mov     r13d, dword ptr [rbp+3E0h+var_140+4]
0x140cc6190  mov     r12, [rbp+3E0h+var_138]
0x140cc6197  mov     rax, [rbp+3E0h+var_130]
0x140cc619e  mov     [rbp+3E0h+var_98], rax
0x140cc61a5  lea     rcx, [rbp+3E0h+var_1E0]
0x140cc61ac  call    sub_140014150
0x140cc61b1  nop
0x140cc61b2  jmp     loc_140CC687B
0x140cc61b7  mov     [rbp+3E0h+var_A0], rdi; jumptable 0000000140CC5F69 case 3
0x140cc61be  lea     rdx, [rbx+2258h]
0x140cc61c5  movzx   eax, byte ptr [rbx+2258h]
0x140cc61cc  lea     rdi, [rbx+18D8h]
0x140cc61d3  lea     rcx, jpt_140CC61E8
0x140cc61da  movsxd  rax, ds:(jpt_140CC61E8 - 1417C6738h)[rcx+rax*4]; jumptable 0000000140CC5F69 case 4
0x140cc61de  add     rax, rcx
0x140cc61e1  mov     [rbp+3E0h+var_B0], rdx
0x140cc61e8  jmp     rax; switch jump
0x140cc61ea  lea     rcx, [rbx+1D98h]; jumptable 0000000140CC61E8 case 0
0x140cc61f1  mov     r8d, 4C0h
0x140cc61f7  mov     [rbp+3E0h+var_90], rcx
0x140cc61fe  mov     [rbp+3E0h+var_98], rdi
0x140cc6205  mov     rdx, rdi
0x140cc6208  call    sub_141684120
0x140cc620d  movzx   eax, byte ptr [rbx+1ED9h]
0x140cc6214  lea     rcx, jpt_140CC6222; jumptable 0000000140CC5F69 case 7
0x140cc621b  movsxd  rax, ds:(jpt_140CC6222 - 1417C6748h)[rcx+rax*4]; switch 5 cases
0x140cc621f  add     rax, rcx
0x140cc6222  jmp     rax; switch jump
0x140cc6224  mov     [rbp+3E0h+var_98], rdi; jumptable 0000000140CC61E8 case 3
0x140cc622b  lea     rax, [rbx+1D98h]
0x140cc6232  mov     [rbp+3E0h+var_90], rax
0x140cc6239  movzx   eax, byte ptr [rbx+1ED9h]
0x140cc6240  lea     rcx, jpt_140CC6222
0x140cc6247  movsxd  rax, ds:(jpt_140CC6222 - 1417C6748h)[rcx+rax*4]; switch 5 cases
0x140cc624b  add     rax, rcx
0x140cc624e  jmp     rax; switch jump
0x140cc6250  mov     byte ptr [rbx+1EDAh], 1; jumptable 0000000140CC6222 case 0
0x140cc6257  lea     rsi, [rbx+1E40h]
0x140cc625e  mov     r8d, 98h
0x140cc6264  mov     rcx, rsi
0x140cc6267  mov     rdx, [rbp+3E0h+var_90]
0x140cc626e  call    sub_141684120
0x140cc6273  movups  xmm6, xmmword ptr [rbx+1E30h]
0x140cc627a  mov     bl, [rbx+1ED8h]
0x140cc6280  lea     rcx, [rbp+3E0h+var_1E0]
0x140cc6287  mov     rdx, rsi
0x140cc628a  call    sub_1401C50B0
0x140cc628f  nop
0x140cc6290  mov     rax, [rbp+3E0h+var_78]
0x140cc6297  mov     rsi, [rax+1EC8h]
0x140cc629e  lock inc qword ptr [rsi]
0x140cc62a2  jle     loc_140CC6F9E
0x140cc62a8  mov     rdi, [rax+1ED0h]
0x140cc62af  lock inc qword ptr [rdi]
0x140cc62b3  jle     loc_140CC6F9E
0x140cc62b9  lea     rcx, [rbp+3E0h+var_348]
0x140cc62c0  lea     rdx, [rbp+3E0h+var_1E0]
0x140cc62c7  mov     r8d, 88h
0x140cc62cd  call    sub_141684120
0x140cc62d2  mov     qword ptr [rbp+3E0h+var_2C0], rsi
0x140cc62d9  mov     qword ptr [rbp+3E0h+var_2C0+8], rdi
0x140cc62e0  movups  [rbp+3E0h+var_2B0], xmm6
0x140cc62e7  mov     [rbp+3E0h+var_2A0], bl
0x140cc62ed  mov     rdx, cs:off_141EC8710
0x140cc62f4  mov     eax, [rdx+60h]
0x140cc62f7  test    eax, eax
0x140cc62f9  jnz     loc_140CC6EB1
0x140cc62ff  cmp     dword ptr [rdx+10h], 2
0x140cc6303  jnz     loc_140CC6432
0x140cc6309  cmp     byte ptr [rdx], 0
0x140cc630c  mov     eax, 1D8h
0x140cc6311  mov     ecx, 2C0h
0x140cc6316  cmovnz  rcx, rax
0x140cc631a  add     rcx, [rdx+8]
0x140cc631e  mov     [rbp+3E0h+var_69], 0
0x140cc6325  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cc632c  lea     r8, [rbp+3E0h+var_348]
0x140cc6333  call    sub_14089AA50
0x140cc6338  nop
0x140cc6339  jmp     loc_140CC646A
0x140cc633e  mov     [rbp+3E0h+var_7A], r9w
0x140cc6346  mov     byte ptr [rbp+3E0h+var_A8], r8b
0x140cc634d  mov     [rbp+3E0h+var_98], rcx
0x140cc6354  mov     r12, rdx
0x140cc6357  jmp     loc_140CC687B
0x140cc635c  movsd   xmm6, [rbp+3E0h+var_148+4]
0x140cc6364  mov     [rbp+3E0h+var_318], 0
0x140cc636f  mov     [rbp+3E0h+var_348], rsi
0x140cc6376  mov     [rbp+3E0h+var_340], 15h
0x140cc6381  lea     rax, aThresholdweekl_3; "thresholdWeeklyPercent"
0x140cc6388  mov     [rbp+3E0h+var_338], rax
0x140cc638f  mov     [rbp+3E0h+var_330], 16h
0x140cc639a  mov     rax, [rbp+3E0h+var_A0]
0x140cc63a1  mov     qword ptr [rbp+3E0h+var_328], rax
0x140cc63a8  mov     rax, [rbp+3E0h+var_88]
0x140cc63af  mov     qword ptr [rbp+3E0h+var_328+8], rax
0x140cc63b6  lea     rcx, [rbp+3E0h+var_148]
0x140cc63bd  lea     rdx, [rbp+3E0h+var_348]
0x140cc63c4  call    sub_140974FD0
0x140cc63c9  nop
0x140cc63ca  movzx   r14d, byte ptr [rbp+3E0h+var_148]
0x140cc63d2  cmp     r14b, 0FFh
0x140cc63d6  jz      loc_140CC67A9
0x140cc63dc  movzx   eax, byte ptr [rbp+3E0h+var_148+1]
0x140cc63e3  mov     byte ptr [rbp+3E0h+var_A8], al
0x140cc63e9  movzx   eax, word ptr [rbp+3E0h+var_148+2]
0x140cc63f0  mov     [rbp+3E0h+var_7A], ax
0x140cc63f7  mov     r15d, dword ptr [rbp+3E0h+var_148+4]
0x140cc63fe  mov     ebx, dword ptr [rbp+3E0h+var_140]
0x140cc6404  mov     r13d, dword ptr [rbp+3E0h+var_140+4]
0x140cc640b  mov     r12, [rbp+3E0h+var_138]
0x140cc6412  mov     rax, [rbp+3E0h+var_130]
0x140cc6419  mov     [rbp+3E0h+var_98], rax
0x140cc6420  lea     rcx, [rbp+3E0h+var_1E0]
0x140cc6427  call    sub_140014150
0x140cc642c  nop
0x140cc642d  jmp     loc_140CC687B
0x140cc6432  cmp     byte ptr [rdx+40h], 0
0x140cc6436  mov     eax, 1D8h
0x140cc643b  mov     ecx, 2C0h
0x140cc6440  cmovnz  rcx, rax
0x140cc6444  lea     rax, [rdx+40h]
0x140cc6448  add     rcx, [rdx+48h]
0x140cc644c  mov     [rbp+3E0h+var_69], 0
0x140cc6453  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cc645a  lea     r8, [rbp+3E0h+var_348]
0x140cc6461  mov     rdx, rax
0x140cc6464  call    sub_14089AA50
0x140cc6469  nop
0x140cc646a  mov     rbx, [rbp+3E0h+var_78]
0x140cc6471  mov     [rbx+1EE0h], rax
0x140cc6478  lea     rdx, [rbx+1EE0h]; jumptable 0000000140CC6222 case 3
0x140cc647f  lea     rbx, [rbp+3E0h+var_348]
0x140cc6486  mov     rcx, rbx
0x140cc6489  mov     [rbp+3E0h+var_88], rdx
0x140cc6490  mov     r8, r12
0x140cc6493  call    sub_140B00260
0x140cc6498  nop
0x140cc6499  mov     rsi, [rbp+3E0h+var_348]
0x140cc64a0  cmp     rsi, 0FFFFFFFFFFFFFFFDh
0x140cc64a4  jz      short loc_140CC64D4
0x140cc64a6  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140cc64aa  jnz     short loc_140CC64DB
0x140cc64ac  mov     rdi, [rbp+3E0h+var_340]
0x140cc64b3  mov     r15, [rbp+3E0h+var_338]
0x140cc64ba  mov     r13, 800000000000000Ch
0x140cc64c4  mov     rax, [rbp+3E0h+var_330]
0x140cc64cb  mov     [rbp+3E0h+var_A8], rax
0x140cc64d2  jmp     short loc_140CC6544
0x140cc64d4  mov     cl, 3
0x140cc64d6  jmp     loc_140CC676C
0x140cc64db  mov     r13, [rbp+3E0h+var_340]
0x140cc64e2  mov     rdi, [rbp+3E0h+var_338]
0x140cc64e9  mov     r15, [rbp+3E0h+var_330]
0x140cc64f0  mov     rax, qword ptr [rbp+3E0h+var_328]
0x140cc64f7  mov     [rbp+3E0h+var_A8], rax
0x140cc64fe  movups  xmm0, [rbp+3E0h+var_328+8]
0x140cc6505  movaps  [rbp+3E0h+var_1E0], xmm0
0x140cc650c  movups  xmm0, [rbp+3E0h+var_310]
0x140cc6513  movaps  [rbp+3E0h+var_1D0], xmm0
0x140cc651a  movups  xmm0, [rbp+3E0h+var_300]
0x140cc6521  movaps  [rbp+3E0h+var_1C0], xmm0
0x140cc6528  movups  xmm0, [rbp+3E0h+var_2F0]
0x140cc652f  movaps  xmmword ptr [rbp+230h], xmm0
0x140cc6536  movups  xmm0, [rbp+3E0h+var_2E0]
0x140cc653d  movaps  [rbp+3E0h+var_1A8+8], xmm0
0x140cc6544  movaps  xmm0, [rbp+3E0h+var_1E0]
0x140cc654b  movaps  xmm1, [rbp+3E0h+var_1D0]
0x140cc6552  movaps  xmm2, [rbp+3E0h+var_1C0]
0x140cc6559  movaps  xmm3, xmmword ptr [rbp+230h]
0x140cc6560  movaps  [rbp+3E0h+var_3A0], xmm0
0x140cc6564  movaps  [rbp+3E0h+var_390], xmm1
0x140cc6568  movaps  [rbp+3E0h+var_380], xmm2
0x140cc656c  movaps  [rbp+3E0h+var_370], xmm3
0x140cc6570  movaps  xmm0, [rbp+3E0h+var_1A8+8]
0x140cc6577  movaps  [rbp+3E0h+var_360], xmm0
0x140cc657e  mov     rax, [rbp+3E0h+var_88]
0x140cc6585  mov     r14, [rax]
0x140cc6588  mov     rcx, r14
0x140cc658b  call    sub_1412F2A80
0x140cc6590  nop
0x140cc6591  test    al, al
0x140cc6593  jz      short loc_140CC659E
0x140cc6595  mov     rcx, r14
0x140cc6598  call    sub_1412E7580
0x140cc659d  nop
0x140cc659e  cmp     rsi, 0FFFFFFFFFFFFFFFFh
0x140cc65a2  jz      loc_140CC6631
0x140cc65a8  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140cc65ac  jnz     loc_140CC6664
0x140cc65b2  mov     [rbp+3E0h+var_348], r13
0x140cc65b9  mov     [rbp+3E0h+var_340], rdi
0x140cc65c0  mov     [rbp+3E0h+var_338], r15
0x140cc65c7  mov     rax, [rbp+3E0h+var_A8]
0x140cc65ce  mov     [rbp+3E0h+var_330], rax
0x140cc65d5  movaps  xmm0, [rbp+3E0h+var_3A0]
0x140cc65d9  movups  [rbp+3E0h+var_328], xmm0
0x140cc65e0  mov     [rbp+3E0h+var_3E0], rbx
0x140cc65e4  lea     rax, sub_141230630
0x140cc65eb  mov     [rbp+3E0h+var_3D8], rax
0x140cc65ef  lea     rdx, unk_1417B8CB0
0x140cc65f6  lea     rcx, [rbp+3E0h+var_1E0]
0x140cc65fd  mov     r8, rbp
0x140cc6600  call    sub_14149C0F0
0x140cc6605  nop
0x140cc6606  lea     rcx, [rbp+3E0h+var_348]
0x140cc660d  call    sub_140BF0F60
0x140cc6612  nop
0x140cc6613  mov     r13, qword ptr [rbp+3E0h+var_1E0]
0x140cc661a  mov     r14, qword ptr [rbp+3E0h+var_1E0+8]
0x140cc6621  mov     r15, qword ptr [rbp+3E0h+var_1D0]
0x140cc6628  mov     rax, [rbp+3E0h+var_78]
0x140cc662f  jmp     short loc_140CC663B
0x140cc6631  mov     rax, [rbp+3E0h+var_78]
0x140cc6638  mov     r14, rdi
0x140cc663b  lea     rcx, [rax+1E40h]
0x140cc6642  call    sub_140014150
0x140cc6647  nop
0x140cc6648  mov     rax, [rbp+3E0h+var_78]
0x140cc664f  mov     word ptr [rax+1ED9h], 1
0x140cc6658  mov     rsi, 0FFFFFFFFFFFFFFFFh
0x140cc665f  jmp     loc_140CC6A9A
0x140cc6664  mov     rbx, [rbp+3E0h+var_78]
0x140cc666b  mov     [rbx+1EE0h], rsi
0x140cc6672  mov     [rbx+1EE8h], r13
0x140cc6679  mov     [rbx+1EF0h], rdi
0x140cc6680  mov     [rbx+1EF8h], r15
0x140cc6687  mov     rax, [rbp+3E0h+var_A8]
0x140cc668e  mov     [rbx+1F00h], rax
0x140cc6695  movaps  xmm0, [rbp+3E0h+var_3A0]
0x140cc6699  movaps  xmm1, [rbp+3E0h+var_390]
0x140cc669d  movaps  xmm2, [rbp+3E0h+var_380]
0x140cc66a1  movaps  xmm3, [rbp+3E0h+var_370]
0x140cc66a5  movups  xmmword ptr [rbx+1F08h], xmm0
0x140cc66ac  movups  xmmword ptr [rbx+1F18h], xmm1
0x140cc66b3  movups  xmmword ptr [rbx+1F28h], xmm2
0x140cc66ba  movups  xmmword ptr [rbx+1F38h], xmm3
0x140cc66c1  movaps  xmm0, [rbp+3E0h+var_360]
0x140cc66c8  movups  xmmword ptr [rbx+1F48h], xmm0
0x140cc66cf  mov     byte ptr [rbx+1EDAh], 0
0x140cc66d6  lea     rdx, [rbx+1E40h]
0x140cc66dd  lea     rcx, [rbx+1F58h]
0x140cc66e4  mov     r8d, 98h
0x140cc66ea  call    sub_141684120
0x140cc66ef  mov     rax, [rbp+3E0h+var_88]
0x140cc66f6  mov     [rbx+1FF0h], rax
0x140cc66fd  lea     rax, aRuntimeRefresh; "RUNTIME_REFRESH_FAILED_AFTER_AUTO_SWITC"...
0x140cc6704  mov     [rbx+1FF8h], rax
0x140cc670b  mov     qword ptr [rbx+2000h], 2Fh ; '/'
0x140cc6716  lea     rax, aAutoSwitchConf; "Auto-switch configuration committed"
0x140cc671d  mov     [rbx+2008h], rax
0x140cc6724  mov     qword ptr [rbx+2010h], 23h ; '#'
0x140cc672f  lea     rax, aMutation_0; "mutation"
0x140cc6736  mov     [rbx+2018h], rax
0x140cc673d  mov     qword ptr [rbx+2020h], 8
0x140cc6748  mov     byte ptr [rbx+2250h], 0
0x140cc674f  lea     rcx, [rbx+1F58h]; jumptable 0000000140CC6222 case 4
0x140cc6756  mov     [rbp+3E0h+var_88], rcx
0x140cc675d  mov     rdx, r12
0x140cc6760  call    sub_140CE1E30
0x140cc6765  nop
0x140cc6766  mov     cl, 4
0x140cc6768  test    al, al
0x140cc676a  jz      short loc_140CC677E
0x140cc676c  mov     rdx, [rbp+3E0h+var_78]
0x140cc6773  mov     [rdx+1ED9h], cl
0x140cc6779  jmp     loc_140CC6A83
0x140cc677e  mov     rcx, [rbp+3E0h+var_78]
0x140cc6785  movzx   eax, byte ptr [rcx+2250h]
0x140cc678c  cmp     eax, 3
0x140cc678f  jz      loc_140CC692C
0x140cc6795  test    eax, eax
0x140cc6797  mov     rcx, [rbp+3E0h+var_88]
0x140cc679e  jz      loc_140CC6A0D
0x140cc67a4  jmp     loc_140CC6A13
0x140cc67a9  movsd   xmm7, [rbp+3E0h+var_148+4]
0x140cc67b1  mov     [rbp+3E0h+var_318], 0
0x140cc67bc  mov     [rbp+3E0h+var_348], rsi
0x140cc67c3  mov     [rbp+3E0h+var_340], 15h
0x140cc67ce  lea     rax, aEnabled_7; "enabled"
0x140cc67d5  mov     [rbp+3E0h+var_338], rax
0x140cc67dc  mov     [rbp+3E0h+var_330], 7
0x140cc67e7  mov     rax, [rbp+3E0h+var_A0]
0x140cc67ee  mov     qword ptr [rbp+3E0h+var_328], rax
0x140cc67f5  mov     rax, [rbp+3E0h+var_88]
0x140cc67fc  mov     qword ptr [rbp+3E0h+var_328+8], rax
0x140cc6803  lea     rcx, [rbp+3E0h+var_148]
0x140cc680a  lea     rdx, [rbp+3E0h+var_348]
0x140cc6811  call    sub_140974DE0
0x140cc6816  nop
0x140cc6817  movzx   r14d, byte ptr [rbp+3E0h+var_148]
0x140cc681f  movzx   edi, byte ptr [rbp+3E0h+var_148+1]
0x140cc6826  cmp     r14b, 0FFh
0x140cc682a  jz      loc_140CC697C
0x140cc6830  mov     byte ptr [rbp+3E0h+var_A8], dil
0x140cc6837  movzx   eax, word ptr [rbp+3E0h+var_148+2]
0x140cc683e  mov     [rbp+3E0h+var_7A], ax
0x140cc6845  mov     r15d, dword ptr [rbp+3E0h+var_148+4]
0x140cc684c  mov     ebx, dword ptr [rbp+3E0h+var_140]
0x140cc6852  mov     r13d, dword ptr [rbp+3E0h+var_140+4]
0x140cc6859  mov     r12, [rbp+3E0h+var_138]
0x140cc6860  mov     rax, [rbp+3E0h+var_130]
0x140cc6867  mov     [rbp+3E0h+var_98], rax
0x140cc686e  lea     rcx, [rbp+3E0h+var_1E0]
0x140cc6875  call    sub_140014150
0x140cc687a  nop
0x140cc687b  mov     rcx, [rbp+3E0h+var_A0]
0x140cc6882  call    sub_140BF0DE0
0x140cc6887  nop
0x140cc6888  mov     rax, [rbp+3E0h+var_88]
0x140cc688f  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cc6893  jz      loc_140CC6924
0x140cc6899  mov     rax, [rbp+3E0h+var_78]
0x140cc68a0  lea     rcx, [rax+1408h]
0x140cc68a7  mov     [rbp+3E0h+var_C0], rcx
0x140cc68ae  mov     rcx, [rax+1408h]
0x140cc68b5  mov     rax, [rax+1410h]
0x140cc68bc  mov     [rbp+3E0h+var_B0], rax
0x140cc68c3  mov     [rbp+3E0h+var_90], 0
0x140cc68ce  mov     [rbp+3E0h+var_3A8], rcx
0x140cc68d2  nop     word ptr [rax+rax+00000000h]
0x140cc68e0  mov     rax, [rbp+3E0h+var_90]
0x140cc68e7  cmp     [rbp+3E0h+var_B0], rax
0x140cc68ee  jz      short loc_140CC6909
0x140cc68f0  inc     rax
0x140cc68f3  mov     [rbp+3E0h+var_90], rax
0x140cc68fa  lea     rsi, [rcx+60h]
0x140cc68fe  call    sub_1402C7520
0x140cc6903  nop
0x140cc6904  mov     rcx, rsi
0x140cc6907  jmp     short loc_140CC68E0
0x140cc6909  mov     rax, [rbp+3E0h+var_88]
0x140cc6910  mov     rax, [rax]
0x140cc6913  mov     sil, 1
0x140cc6916  test    rax, rax
0x140cc6919  jnz     loc_140CC6D8C
0x140cc691f  jmp     loc_140CC6DA9
0x140cc6924  mov     sil, 1
0x140cc6927  jmp     loc_140CC6DA9
0x140cc692c  movzx   eax, byte ptr [rcx+2248h]
0x140cc6933  test    eax, eax
0x140cc6935  jz      loc_140CC69E9
0x140cc693b  cmp     eax, 3
0x140cc693e  jnz     loc_140CC6A13
0x140cc6944  mov     rdx, [rbp+3E0h+var_78]
0x140cc694b  movzx   eax, byte ptr [rdx+2240h]
0x140cc6952  cmp     eax, 3
0x140cc6955  jz      loc_140CC69F2
0x140cc695b  test    eax, eax
0x140cc695d  jnz     loc_140CC69FF
0x140cc6963  mov     rax, [rbp+3E0h+var_78]
0x140cc696a  lea     rcx, [rax+21A0h]
0x140cc6971  call    sub_140014150
0x140cc6976  nop
0x140cc6977  jmp     loc_140CC69FF
0x140cc697c  mov     rbx, [rbp+3E0h+var_78]
0x140cc6983  lea     rsi, [rbx+1418h]
0x140cc698a  lea     rdx, [rbp+3E0h+var_1E0]
0x140cc6991  mov     r8d, 98h
0x140cc6997  mov     rcx, rsi
0x140cc699a  call    sub_141684120
0x140cc699f  movlhps xmm6, xmm7
0x140cc69a2  movups  xmmword ptr [rbx+14B0h], xmm6
0x140cc69a9  mov     [rbx+1558h], dil
0x140cc69b0  mov     byte ptr [rbx+1559h], 0
0x140cc69b7  lea     rdi, [rbx+18D8h]
0x140cc69be  mov     r8d, 4C0h
0x140cc69c4  mov     rcx, rdi
0x140cc69c7  mov     rdx, rsi
0x140cc69ca  call    sub_141684120
0x140cc69cf  lea     rax, [rbx+2258h]
0x140cc69d6  mov     [rbp+3E0h+var_B0], rax
0x140cc69dd  mov     byte ptr [rbx+2258h], 0
0x140cc69e4  jmp     loc_140CC61EA; jumptable 0000000140CC61E8 case 0
0x140cc69e9  add     rcx, 2050h
0x140cc69f0  jmp     short loc_140CC6A0D
0x140cc69f2  lea     rcx, [rdx+2238h]
0x140cc69f9  call    sub_140B03640
0x140cc69fe  nop
0x140cc69ff  mov     rax, [rbp+3E0h+var_78]
0x140cc6a06  lea     rcx, [rax+20F8h]
0x140cc6a0d  call    sub_140014150
0x140cc6a12  nop
0x140cc6a13  mov     rdx, [rbp+3E0h+var_78]
0x140cc6a1a  mov     rsi, [rdx+1EE0h]
0x140cc6a21  mov     rdi, [rdx+1F00h]
0x140cc6a28  movups  xmm0, xmmword ptr [rdx+1F48h]
0x140cc6a2f  movaps  [rbp+3E0h+var_3F0], xmm0
0x140cc6a33  movups  xmm0, xmmword ptr [rdx+1F38h]
0x140cc6a3a  movaps  [rbp+3E0h+var_400], xmm0
0x140cc6a3e  movups  xmm0, xmmword ptr [rdx+1F28h]
0x140cc6a45  movaps  [rbp+3E0h+var_410], xmm0
0x140cc6a49  movups  xmm0, xmmword ptr [rdx+1F18h]
0x140cc6a50  movaps  [rbp+3E0h+var_420], xmm0
0x140cc6a54  movups  xmm0, xmmword ptr [rdx+1F08h]
0x140cc6a5b  movaps  [rbp+3E0h+var_430], xmm0
0x140cc6a5f  mov     r13, [rdx+1EE8h]
0x140cc6a66  mov     r14, [rdx+1EF0h]
0x140cc6a6d  mov     r15, [rdx+1EF8h]
0x140cc6a74  mov     word ptr [rdx+1ED9h], 1
0x140cc6a7d  cmp     rsi, 0FFFFFFFFFFFFFFFEh
0x140cc6a81  jnz     short loc_140CC6A9A
0x140cc6a83  mov     byte ptr [rdx+2258h], 3
0x140cc6a8a  mov     byte ptr [rdx+2260h], 3
0x140cc6a91  mov     cl, 3
0x140cc6a93  mov     al, 1
0x140cc6a95  jmp     loc_140CC6E89
0x140cc6a9a  mov     rcx, [rbp+3E0h+var_90]
0x140cc6aa1  call    sub_140BEBF80
0x140cc6aa6  nop
0x140cc6aa7  cmp     rsi, 0FFFFFFFFFFFFFFFFh
0x140cc6aab  jz      loc_140CC6C3D
0x140cc6ab1  movaps  xmm0, [rbp+3E0h+var_3F0]
0x140cc6ab5  movups  [rbp+3E0h+var_E0], xmm0
0x140cc6abc  movaps  xmm0, [rbp+3E0h+var_430]
0x140cc6ac0  movaps  xmm1, [rbp+3E0h+var_420]
0x140cc6ac4  movaps  xmm2, [rbp+3E0h+var_410]
0x140cc6ac8  movaps  xmm3, [rbp+3E0h+var_400]
0x140cc6acc  movups  [rbp+3E0h+var_F0], xmm3
0x140cc6ad3  movups  [rbp+3E0h+var_100], xmm2
0x140cc6ada  movups  [rbp+3E0h+var_110], xmm1
0x140cc6ae1  movups  [rbp+3E0h+var_120], xmm0
0x140cc6ae8  mov     [rbp+3E0h+var_148], rsi
0x140cc6aef  mov     [rbp+3E0h+var_140], r13
0x140cc6af6  mov     [rbp+3E0h+var_138], r14
0x140cc6afd  mov     [rbp+3E0h+var_130], r15
0x140cc6b04  mov     [rbp+3E0h+var_128], rdi
0x140cc6b0b  lea     rcx, [rbp+3E0h+var_348]
0x140cc6b12  lea     rdx, [rbp+3E0h+var_148]
0x140cc6b19  call    sub_140B092C0
0x140cc6b1e  nop
0x140cc6b1f  mov     rax, [rbp+3E0h+var_348]
0x140cc6b26  movzx   r14d, byte ptr [rbp+3E0h+var_340]
0x140cc6b2e  movzx   r8d, byte ptr [rbp+3E0h+var_340+1]
0x140cc6b36  movzx   r9d, word ptr [rbp+3E0h+var_340+2]
0x140cc6b3e  mov     r15d, dword ptr [rbp+3E0h+var_340+4]
0x140cc6b45  mov     ebx, dword ptr [rbp+3E0h+var_338]
0x140cc6b4b  mov     r13d, dword ptr [rbp+3E0h+var_338+4]
0x140cc6b52  mov     r12, [rbp+3E0h+var_330]
0x140cc6b59  mov     rdx, qword ptr [rbp+3E0h+var_328]
0x140cc6b60  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cc6b64  jz      loc_140CC6C63
0x140cc6b6a  mov     rcx, qword ptr [rbp+3E0h+var_328+8]
0x140cc6b71  mov     byte ptr [rbp+3E0h+var_340+1], r8b
0x140cc6b78  mov     word ptr [rbp+3E0h+var_340+2], r9w
0x140cc6b80  mov     dword ptr [rbp+3E0h+var_340+4], r15d
0x140cc6b87  mov     dword ptr [rbp+3E0h+var_338], ebx
0x140cc6b8d  mov     dword ptr [rbp+3E0h+var_338+4], r13d
0x140cc6b94  mov     [rbp+3E0h+var_330], r12
0x140cc6b9b  mov     qword ptr [rbp+3E0h+var_328], rdx
0x140cc6ba2  mov     [rbp+3E0h+var_348], rax
0x140cc6ba9  mov     byte ptr [rbp+3E0h+var_340], r14b
0x140cc6bb0  mov     qword ptr [rbp+3E0h+var_328+8], rcx
0x140cc6bb7  mov     qword ptr [rbp+3E0h+var_3A0], 0
0x140cc6bbf  mov     qword ptr [rbp+3E0h+var_3A0+8], 1
0x140cc6bc7  mov     qword ptr [rbp+3E0h+var_390], 0
0x140cc6bcf  mov     qword ptr [rbp+3E0h+var_1D0], 60000020h
0x140cc6bda  lea     rax, [rbp+3E0h+var_3A0]
0x140cc6bde  mov     qword ptr [rbp+3E0h+var_1E0], rax
0x140cc6be5  lea     rax, off_1417C41C0
0x140cc6bec  mov     qword ptr [rbp+3E0h+var_1E0+8], rax
0x140cc6bf3  lea     rcx, [rbp+3E0h+var_348]
0x140cc6bfa  lea     rdx, [rbp+3E0h+var_1E0]
0x140cc6c01  call    sub_141230630
0x140cc6c06  nop
0x140cc6c07  test    al, al
0x140cc6c09  jnz     loc_140CC6ECF
0x140cc6c0f  mov     ebx, dword ptr [rbp+3E0h+var_3A0]
0x140cc6c12  mov     r13d, dword ptr [rbp+3E0h+var_3A0+4]
0x140cc6c16  mov     r12, qword ptr [rbp+3E0h+var_3A0+8]
0x140cc6c1a  mov     rsi, qword ptr [rbp+3E0h+var_390]
0x140cc6c1e  lea     rcx, [rbp+3E0h+var_348]
0x140cc6c25  call    sub_140BF0F60
0x140cc6c2a  nop
0x140cc6c2b  mov     [rbp+3E0h+var_98], rsi
0x140cc6c32  mov     sil, 1
0x140cc6c35  mov     r14b, 3
0x140cc6c38  jmp     loc_140CC6CE3
0x140cc6c3d  test    r15, r15
0x140cc6c40  jns     short loc_140CC6C7D
0x140cc6c42  xor     edi, edi
0x140cc6c44  mov     [rbp+3E0h+var_90], r13
0x140cc6c4b  mov     [rbp+3E0h+var_88], r14
0x140cc6c52  mov     rcx, rdi
0x140cc6c55  mov     rdx, r15
0x140cc6c58  call    sub_1416C2D4B
0x140cc6c5d  align 2
0x140cc6c5e  jmp     loc_140CC6F9E
0x140cc6c63  mov     [rbp+3E0h+var_7A], r9w
0x140cc6c6b  mov     byte ptr [rbp+3E0h+var_A8], r8b
0x140cc6c72  mov     [rbp+3E0h+var_98], rdx
0x140cc6c79  xor     esi, esi
0x140cc6c7b  jmp     short loc_140CC6CE3
0x140cc6c7d  jz      short loc_140CC6CAE
0x140cc6c7f  call    nullsub_1
0x140cc6c84  mov     edi, 1
0x140cc6c89  mov     edx, 1
0x140cc6c8e  mov     rcx, r15
0x140cc6c91  call    sub_140001650
0x140cc6c96  test    rax, rax
0x140cc6c99  jz      short loc_140CC6C44
0x140cc6c9b  mov     r12, rax
0x140cc6c9e  mov     rcx, rax
0x140cc6ca1  mov     rdx, r14
0x140cc6ca4  mov     r8, r15
0x140cc6ca7  call    sub_141684120
0x140cc6cac  jmp     short loc_140CC6CB4
0x140cc6cae  mov     r12d, 1
0x140cc6cb4  test    r13, r13
0x140cc6cb7  jz      short loc_140CC6CCA
0x140cc6cb9  mov     r8d, 1
0x140cc6cbf  mov     rcx, r14
0x140cc6cc2  mov     rdx, r13
0x140cc6cc5  call    sub_140001660
0x140cc6cca  mov     r13, r15
0x140cc6ccd  shr     r13, 20h
0x140cc6cd1  mov     sil, 1
0x140cc6cd4  mov     r14b, 3
0x140cc6cd7  mov     rax, r15
0x140cc6cda  mov     [rbp+3E0h+var_98], rax
0x140cc6ce1  mov     ebx, eax
0x140cc6ce3  mov     rax, [rbp+3E0h+var_B0]
0x140cc6cea  mov     byte ptr [rax], 1
0x140cc6ced  mov     rcx, [rbp+3E0h+var_A0]
0x140cc6cf4  call    sub_140BF0DE0
0x140cc6cf9  nop
0x140cc6cfa  mov     rax, [rbp+3E0h+var_78]
0x140cc6d01  cmp     qword ptr [rax+1400h], 0FFFFFFFFFFFFFFFFh
0x140cc6d09  jz      loc_140CC6DA9
0x140cc6d0f  lea     rcx, [rax+1408h]
0x140cc6d16  mov     [rbp+3E0h+var_C0], rcx
0x140cc6d1d  mov     rcx, [rax+1408h]
0x140cc6d24  mov     rax, [rax+1410h]
0x140cc6d2b  mov     [rbp+3E0h+var_B0], rax
0x140cc6d32  mov     [rbp+3E0h+var_90], 0
0x140cc6d3d  mov     [rbp+3E0h+var_88], rcx
0x140cc6d44  nop     word ptr [rax+rax+00000000h]
0x140cc6d50  mov     rax, [rbp+3E0h+var_90]
0x140cc6d57  cmp     [rbp+3E0h+var_B0], rax
0x140cc6d5e  jz      short loc_140CC6D79
0x140cc6d60  inc     rax
0x140cc6d63  mov     [rbp+3E0h+var_90], rax
0x140cc6d6a  lea     rdi, [rcx+60h]
0x140cc6d6e  call    sub_1402C7520
0x140cc6d73  nop
0x140cc6d74  mov     rcx, rdi
0x140cc6d77  jmp     short loc_140CC6D50
0x140cc6d79  mov     rax, [rbp+3E0h+var_78]
0x140cc6d80  mov     rax, [rax+1400h]
0x140cc6d87  test    rax, rax
0x140cc6d8a  jz      short loc_140CC6DA9
0x140cc6d8c  mov     rcx, [rbp+3E0h+var_C0]
0x140cc6d93  mov     rcx, [rcx]
0x140cc6d96  shl     rax, 5
0x140cc6d9a  lea     rdx, [rax+rax*2]
0x140cc6d9e  mov     r8d, 8
0x140cc6da4  call    sub_140001660
0x140cc6da9  mov     rax, [rbp+3E0h+var_78]
0x140cc6db0  mov     byte ptr [rax+2260h], 1
0x140cc6db7  mov     rcx, [rbp+3E0h+var_A0]
0x140cc6dbe  call    sub_140BE55D0
0x140cc6dc3  nop
0x140cc6dc4  mov     [rbp+3E0h+var_3BC], r13d
0x140cc6dc8  mov     [rbp+3E0h+var_3B8], r12
0x140cc6dcc  mov     rax, [rbp+3E0h+var_98]
0x140cc6dd3  mov     [rbp+3E0h+var_3B0], rax
0x140cc6dd7  movzx   eax, sil
0x140cc6ddb  mov     [rbp+3E0h+var_3C8], r14b
0x140cc6ddf  movzx   ecx, byte ptr [rbp+3E0h+var_A8]
0x140cc6de6  mov     [rbp+3E0h+var_3C7], cl
0x140cc6de9  movzx   ecx, [rbp+3E0h+var_7A]
0x140cc6df0  mov     [rbp+3E0h+var_3C6], cx
0x140cc6df4  mov     [rbp+3E0h+var_3C4], r15d
0x140cc6df8  mov     [rbp+3E0h+var_3C0], ebx
0x140cc6dfb  mov     [rbp+3E0h+var_3D0], rax
0x140cc6dff  mov     rdi, [rbp+3E0h+var_78]
0x140cc6e06  mov     byte ptr [rdi+2273h], 0
0x140cc6e0d  lea     rsi, [rbp+3E0h+var_348]
0x140cc6e14  mov     r8d, 168h
0x140cc6e1a  mov     rcx, rsi
0x140cc6e1d  mov     rdx, rdi
0x140cc6e20  call    sub_141684120
0x140cc6e25  mov     byte ptr [rdi+2272h], 0
0x140cc6e2c  mov     rdx, [rdi+180h]
0x140cc6e33  mov     byte ptr [rdi+2271h], 0
0x140cc6e3a  mov     rax, [rdi+178h]
0x140cc6e41  mov     qword ptr [rbp+3E0h+var_1D0], rax
0x140cc6e48  movups  xmm0, xmmword ptr [rdi+168h]
0x140cc6e4f  movaps  [rbp+3E0h+var_1E0], xmm0
0x140cc6e56  mov     eax, [rdi+2268h]
0x140cc6e5c  mov     ecx, [rdi+226Ch]
0x140cc6e62  mov     [rsp+460h+var_438], ecx
0x140cc6e66  mov     dword ptr [rsp+460h+var_440], eax
0x140cc6e6a  lea     r8, [rbp+3E0h+var_3D0]
0x140cc6e6e  lea     r9, [rbp+3E0h+var_1E0]
0x140cc6e75  mov     rcx, rsi
0x140cc6e78  call    sub_14047E370
0x140cc6e7d  nop
0x140cc6e7e  mov     cl, 1
0x140cc6e80  xor     eax, eax
0x140cc6e82  mov     rdx, [rbp+3E0h+var_78]
0x140cc6e89  mov     [rdx+2270h], cl
0x140cc6e8f  movaps  xmm6, [rbp+3E0h+var_60]
0x140cc6e96  movaps  xmm7, [rbp+3E0h+var_50]
0x140cc6e9d  add     rsp, 428h
0x140cc6ea4  pop     rbx
0x140cc6ea5  pop     rdi
0x140cc6ea6  pop     rsi
0x140cc6ea7  pop     r12
0x140cc6ea9  pop     r13
0x140cc6eab  pop     r14
0x140cc6ead  pop     r15
0x140cc6eaf  pop     rbp
0x140cc6eb0  retn
0x140cc6eb1  mov     [rbp+3E0h+var_69], 1
0x140cc6eb8  mov     rcx, cs:off_141EC8710
0x140cc6ebf  mov     rsi, rdx
0x140cc6ec2  call    sub_1416984A3
0x140cc6ec7  mov     rdx, rsi
0x140cc6eca  jmp     loc_140CC62FF
0x140cc6ecf  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140cc6ed6  mov     [rsp+460h+var_440], rax
0x140cc6edb  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140cc6ee2  lea     r9, unk_1417BC180
0x140cc6ee9  lea     r8, [rbp+3E0h+var_B1]
0x140cc6ef0  mov     edx, 37h ; '7'
0x140cc6ef5  call    sub_1416C3060
0x140cc6efa  db 90h
0x140cc6efb  jmp     loc_140CC6F9E
0x140cc6f00  lea     rcx, off_1417B7C00; jumptable 0000000140CC5F26 case 2
0x140cc6f07  call    sub_1416C3420
0x140cc6f0c  ud2
0x140cc6f0e  lea     rcx, off_1417B7C00; jumptable 0000000140CC5F26 case 1
0x140cc6f15  call    sub_1416C3400
0x140cc6f1a  ud2
0x140cc6f1c  mov     [rbp+3E0h+var_A0], rdi; jumptable 0000000140CC5F69 case 2
0x140cc6f23  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cc6f2a  call    sub_1416C3420
0x140cc6f2f  align 10h
0x140cc6f30  jmp     short loc_140CC6F9E
0x140cc6f32  mov     [rbp+3E0h+var_A0], rdi; jumptable 0000000140CC5F69 case 1
0x140cc6f39  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cc6f40  call    sub_1416C3400
0x140cc6f45  align 2
0x140cc6f46  jmp     short loc_140CC6F9E
0x140cc6f48  mov     [rbp+3E0h+var_C8], rdx; jumptable 0000000140CC61E8 case 2
0x140cc6f4f  mov     [rbp+3E0h+var_D0], rdi
0x140cc6f56  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cc6f5d  call    sub_1416C3420
0x140cc6f62  db 90h
0x140cc6f63  jmp     short loc_140CC6F9E
0x140cc6f65  mov     [rbp+3E0h+var_C8], rdx; jumptable 0000000140CC61E8 case 1
0x140cc6f6c  mov     [rbp+3E0h+var_D0], rdi
0x140cc6f73  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cc6f7a  call    sub_1416C3400
0x140cc6f7f  align 20h
0x140cc6f80  jmp     short loc_140CC6F9E
0x140cc6f82  lea     rcx, off_1417BB210; jumptable 0000000140CC6222 case 2
0x140cc6f89  call    sub_1416C3420
0x140cc6f8e  db 90h
0x140cc6f8f  jmp     short loc_140CC6F9E
0x140cc6f91  lea     rcx, off_1417BB210; jumptable 0000000140CC6222 case 1
0x140cc6f98  call    sub_1416C3400
0x140cc6f9d  align 2
0x140cc6f9e  ud2