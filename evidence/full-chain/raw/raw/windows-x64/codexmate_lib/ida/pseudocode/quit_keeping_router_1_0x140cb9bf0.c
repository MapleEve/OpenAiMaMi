// module: codexmate_lib
// addr: 0x140cb9bf0
// name: quit_keeping_router_1
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CBAAA8 for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cb9bf0  push    rbp
0x140cb9bf1  push    r15
0x140cb9bf3  push    r14
0x140cb9bf5  push    r13
0x140cb9bf7  push    r12
0x140cb9bf9  push    rsi
0x140cb9bfa  push    rdi
0x140cb9bfb  push    rbx
0x140cb9bfc  sub     rsp, 648h
0x140cb9c03  lea     rbp, [rsp+80h]
0x140cb9c0b  mov     [rbp+600h+var_40], 0FFFFFFFFFFFFFFFEh
0x140cb9c16  mov     rsi, rdx
0x140cb9c19  mov     r14, rcx
0x140cb9c1c  movzx   eax, byte ptr [rcx+0DD0h]
0x140cb9c23  lea     rcx, jpt_140CB9C38
0x140cb9c2a  movsxd  rax, ds:(jpt_140CB9C38 - 1417C6498h)[rcx+rax*4]; switch 4 cases
0x140cb9c2e  add     rax, rcx
0x140cb9c31  mov     [rbp+600h+var_50], r14
0x140cb9c38  jmp     rax; switch jump
0x140cb9c3a  mov     word ptr [r14+0DD1h], 101h; jumptable 0000000140CB9C38 case 0
0x140cb9c44  mov     byte ptr [r14+0DD3h], 1
0x140cb9c4c  lea     rdx, [r14+188h]
0x140cb9c53  lea     rdi, [r14+7A8h]
0x140cb9c5a  mov     r8d, 620h
0x140cb9c60  mov     rcx, rdi
0x140cb9c63  call    sub_141684120
0x140cb9c68  movzx   eax, byte ptr [r14+0DC0h]
0x140cb9c70  lea     rcx, jpt_140CB9C7E
0x140cb9c77  movsxd  rax, ds:(jpt_140CB9C7E - 1417C64A8h)[rcx+rax*4]; switch 6 cases
0x140cb9c7b  add     rax, rcx
0x140cb9c7e  jmp     rax; switch jump
0x140cb9c80  lea     rdi, [r14+7A8h]; jumptable 0000000140CB9C38 case 3
0x140cb9c87  movzx   eax, byte ptr [r14+0DC0h]
0x140cb9c8f  lea     rcx, jpt_140CB9C7E
0x140cb9c96  movsxd  rax, ds:(jpt_140CB9C7E - 1417C64A8h)[rcx+rax*4]; switch 4 cases
0x140cb9c9a  add     rax, rcx
0x140cb9c9d  jmp     rax; switch jump
0x140cb9c9f  lea     rcx, [r14+9B0h]; jumptable 0000000140CB9C7E case 0
0x140cb9ca6  mov     qword ptr [rbp+600h+var_4E8], 0
0x140cb9cb1  lea     r13, aQuitAfterClosi; "quit_after_closing_router"
0x140cb9cb8  mov     qword ptr [rbp+600h+var_518], r13
0x140cb9cbf  mov     qword ptr [rbp+600h+var_518+8], 19h
0x140cb9cca  lea     rax, aApp_2; "app"
0x140cb9cd1  mov     qword ptr [rbp+600h+var_508], rax
0x140cb9cd8  mov     qword ptr [rbp+600h+var_508+8], 3
0x140cb9ce3  mov     [rbp+600h+var_58], rdi
0x140cb9cea  mov     qword ptr [rbp+600h+var_4F8], rdi
0x140cb9cf1  mov     [rbp+600h+var_60], rcx
0x140cb9cf8  mov     qword ptr [rbp+600h+var_4F8+8], rcx
0x140cb9cff  lea     rcx, [rbp+600h+var_278]
0x140cb9d06  lea     rdx, [rbp+600h+var_518]
0x140cb9d0d  call    sub_1401C3650
0x140cb9d12  nop
0x140cb9d13  mov     rax, [rbp+600h+var_278]
0x140cb9d1a  movzx   ecx, byte ptr [rbp+600h+var_270+7]
0x140cb9d21  shl     ecx, 10h
0x140cb9d24  movzx   edx, word ptr [rbp+600h+var_270+5]
0x140cb9d2b  or      edx, ecx
0x140cb9d2d  shl     rdx, 20h
0x140cb9d31  mov     r12d, dword ptr [rbp+600h+var_270+1]
0x140cb9d38  or      r12, rdx
0x140cb9d3b  movzx   r15d, byte ptr [rbp+600h+var_270]
0x140cb9d43  mov     r14, [rbp+600h+var_268]
0x140cb9d4a  mov     rbx, [rbp+600h+var_260]
0x140cb9d51  mov     rdi, qword ptr [rbp+600h+var_258]
0x140cb9d58  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb9d5c  jz      loc_140CBA258
0x140cb9d62  movups  xmm0, [rbp+600h+var_1F0]
0x140cb9d69  movups  [rbp+600h+var_358], xmm0
0x140cb9d70  movups  xmm0, [rbp+600h+var_200]
0x140cb9d77  movups  [rbp+600h+var_368], xmm0
0x140cb9d7e  movups  xmm0, [rbp+600h+var_210]
0x140cb9d85  movups  [rbp+600h+var_378], xmm0
0x140cb9d8c  movups  xmm0, [rbp+600h+var_258+8]
0x140cb9d93  movups  xmm1, [rbp+600h+var_240]
0x140cb9d9a  movups  xmm2, [rbp+600h+var_230]
0x140cb9da1  movups  xmm3, [rbp+600h+var_220]
0x140cb9da8  movups  [rbp+600h+var_388], xmm3
0x140cb9daf  movups  [rbp+600h+var_398], xmm2
0x140cb9db6  movups  [rbp+600h+var_3A8], xmm1
0x140cb9dbd  movups  [rbp+600h+var_3B8], xmm0
0x140cb9dc4  mov     dword ptr [rbp+600h+var_3E0+9], r12d
0x140cb9dcb  mov     rcx, r12
0x140cb9dce  shr     rcx, 30h
0x140cb9dd2  mov     byte ptr [rbp+600h+var_3E0+0Fh], cl
0x140cb9dd8  shr     r12, 20h
0x140cb9ddc  mov     word ptr [rbp+600h+var_3E0+0Dh], r12w
0x140cb9de4  mov     [rbp+600h+var_3C8], rbx
0x140cb9deb  mov     [rbp+600h+var_3C0], rdi
0x140cb9df2  mov     qword ptr [rbp+600h+var_3E0], rax
0x140cb9df9  mov     byte ptr [rbp+600h+var_3E0+8], r15b
0x140cb9e00  mov     [rbp+600h+var_3D0], r14
0x140cb9e07  mov     qword ptr [rbp+3B8h], 0
0x140cb9e12  mov     [rbp+600h+var_278], r13
0x140cb9e19  mov     [rbp+600h+var_270], 19h
0x140cb9e24  lea     rax, aManager_1; "manager"
0x140cb9e2b  mov     [rbp+600h+var_268], rax
0x140cb9e32  mov     [rbp+600h+var_260], 7
0x140cb9e3d  mov     rax, [rbp+600h+var_58]
0x140cb9e44  mov     qword ptr [rbp+600h+var_258], rax
0x140cb9e4b  mov     rax, [rbp+600h+var_60]
0x140cb9e52  mov     qword ptr [rbp+600h+var_258+8], rax
0x140cb9e59  mov     rax, [rbp+600h+var_50]
0x140cb9e60  mov     rcx, [rax+9A8h]
0x140cb9e67  add     rcx, 10h; Address
0x140cb9e6b  call    sub_140004B10
0x140cb9e70  nop
0x140cb9e71  mov     rdi, rax
0x140cb9e74  test    rax, rax
0x140cb9e77  jz      loc_140CBA1E5
0x140cb9e7d  mov     r14, [rbp+600h+var_50]
0x140cb9e84  lea     rbx, [r14+9C8h]
0x140cb9e8b  lea     rdx, [rbp+600h+var_3E0]
0x140cb9e92  mov     r8d, 98h
0x140cb9e98  mov     rcx, rbx
0x140cb9e9b  call    sub_141684120
0x140cb9ea0  mov     [r14+0A60h], rdi
0x140cb9ea7  mov     byte ptr [r14+0B10h], 0
0x140cb9eaf  lea     r15, [r14+0B18h]
0x140cb9eb6  mov     r8d, 150h
0x140cb9ebc  mov     rcx, r15
0x140cb9ebf  mov     rdx, rbx
0x140cb9ec2  call    sub_141684120
0x140cb9ec7  lea     rbx, [r14+0DB8h]
0x140cb9ece  mov     byte ptr [r14+0DB8h], 0
0x140cb9ed6  mov     rdi, [rbp+600h+var_58]
0x140cb9edd  jmp     short loc_140CB9F05; jumptable 0000000140CB9F03 case 0
0x140cb9edf  lea     rbx, [r14+0DB8h]; jumptable 0000000140CB9C7E case 3
0x140cb9ee6  movzx   eax, byte ptr [r14+0DB8h]
0x140cb9eee  lea     r15, [r14+0B18h]
0x140cb9ef5  lea     rcx, jpt_140CB9F03; jumptable 0000000140CB9C7E case 4
0x140cb9efc  movsxd  rax, ds:(jpt_140CB9F03 - 1417C64B8h)[rcx+rax*4]; switch 4 cases
0x140cb9f00  add     rax, rcx
0x140cb9f03  jmp     rax; switch jump
0x140cb9f05  lea     r12, [r14+0C68h]; jumptable 0000000140CB9F03 case 0
0x140cb9f0c  mov     r8d, 150h
0x140cb9f12  mov     rcx, r12
0x140cb9f15  mov     rdx, r15
0x140cb9f18  call    sub_141684120
0x140cb9f1d  movzx   eax, byte ptr [r14+0DB0h]
0x140cb9f25  lea     rcx, jpt_140CB9F33
0x140cb9f2c  movsxd  rax, ds:(jpt_140CB9F33 - 1417C64C8h)[rcx+rax*4]; switch 4 cases
0x140cb9f30  add     rax, rcx
0x140cb9f33  jmp     rax; switch jump
0x140cb9f35  lea     r12, [r14+0C68h]; jumptable 0000000140CB9F03 case 3
0x140cb9f3c  movzx   eax, byte ptr [r14+0DB0h]
0x140cb9f44  lea     rcx, jpt_140CB9F33
0x140cb9f4b  movsxd  rax, ds:(jpt_140CB9F33 - 1417C64C8h)[rcx+rax*4]; switch 4 cases
0x140cb9f4f  add     rax, rcx
0x140cb9f52  jmp     rax; switch jump
0x140cb9f54  mov     [rbp+600h+var_78], rbx; jumptable 0000000140CB9F33 case 0
0x140cb9f5b  mov     [rbp+600h+var_68], r15
0x140cb9f62  mov     [rbp+600h+var_58], rdi
0x140cb9f69  mov     byte ptr [r14+0DB1h], 0
0x140cb9f71  lea     rdi, [r14+0D08h]
0x140cb9f78  mov     r8d, 98h
0x140cb9f7e  mov     rcx, rdi
0x140cb9f81  mov     [rbp+600h+var_70], r12
0x140cb9f88  mov     rdx, r12
0x140cb9f8b  call    sub_141684120
0x140cb9f90  mov     rcx, [r14+0D00h]
0x140cb9f97  mov     [r14+0DA0h], rcx
0x140cb9f9e  call    sub_14084FB80
0x140cb9fa3  nop
0x140cb9fa4  test    al, al
0x140cb9fa6  jz      loc_140CBA032
0x140cb9fac  call    nullsub_1
0x140cb9fb1  mov     edi, 36h ; '6'
0x140cb9fb6  mov     ecx, 36h ; '6'
0x140cb9fbb  mov     edx, 1
0x140cb9fc0  call    sub_140001650
0x140cb9fc5  test    rax, rax
0x140cb9fc8  mov     rcx, [rbp+600h+var_50]
0x140cb9fcf  jz      loc_140CBAAD5
0x140cb9fd5  mov     r14, rax
0x140cb9fd8  movups  xmm0, cs:xmmword_1417BAF88
0x140cb9fdf  movups  xmmword ptr [rax+20h], xmm0
0x140cb9fe3  movups  xmm0, cs:xmmword_1417BAF78
0x140cb9fea  movups  xmmword ptr [rax+10h], xmm0
0x140cb9fee  movups  xmm0, cs:xmmword_1417BAF68
0x140cb9ff5  movups  xmmword ptr [rax], xmm0
0x140cb9ff8  mov     rax, 0BA87E58080E98D86h
0x140cba002  mov     [r14+2Eh], rax
0x140cba006  mov     r15d, 36h ; '6'
0x140cba00c  jmp     loc_140CBA591
0x140cba011  mov     [rbp+600h+var_70], r12; jumptable 0000000140CB9F33 case 3
0x140cba018  mov     [rbp+600h+var_78], rbx
0x140cba01f  mov     [rbp+600h+var_68], r15
0x140cba026  mov     [rbp+600h+var_58], rdi
0x140cba02d  jmp     loc_140CBA360
0x140cba032  mov     r14, [rbp+600h+var_50]
0x140cba039  mov     rcx, [r14+0DA0h]
0x140cba040  mov     rax, [rcx]
0x140cba043  lock inc qword ptr [rax]
0x140cba047  jle     loc_140CBAAF7
0x140cba04d  mov     rdx, [rcx+8]
0x140cba051  lock inc qword ptr [rdx]
0x140cba055  jle     loc_140CBAAF7
0x140cba05b  mov     r8, [rcx+10h]
0x140cba05f  lock inc qword ptr [r8]
0x140cba063  jle     loc_140CBAAF7
0x140cba069  mov     r9, [rcx+18h]
0x140cba06d  lock inc qword ptr [r9]
0x140cba071  jle     loc_140CBAAF7
0x140cba077  mov     r10, [rcx+20h]
0x140cba07b  lock inc qword ptr [r10]
0x140cba07f  jle     loc_140CBAAF7
0x140cba085  mov     r11, [rcx+28h]
0x140cba089  lock inc qword ptr [r11]
0x140cba08d  jle     loc_140CBAAF7
0x140cba093  mov     rbx, [rcx+38h]
0x140cba097  test    rbx, rbx
0x140cba09a  jz      short loc_140CBA0A6
0x140cba09c  lock inc qword ptr [rbx]
0x140cba0a0  jle     loc_140CBAAF7
0x140cba0a6  mov     rcx, [rcx+30h]
0x140cba0aa  lock inc qword ptr [rcx]
0x140cba0ae  jle     loc_140CBAAF7
0x140cba0b4  mov     qword ptr [rbp+600h+var_110], rax
0x140cba0bb  mov     qword ptr [rbp+600h+var_110+8], rdx
0x140cba0c2  mov     qword ptr [rbp+600h+var_100], r8
0x140cba0c9  mov     qword ptr [rbp+600h+var_100+8], r9
0x140cba0d0  mov     qword ptr [rbp+600h+var_F0], r10
0x140cba0d7  mov     qword ptr [rbp+600h+var_F0+8], r11
0x140cba0de  mov     qword ptr [rbp+600h+var_E0+8], rbx
0x140cba0e5  mov     qword ptr [rbp+600h+var_E0], rcx
0x140cba0ec  mov     byte ptr [r14+0DB1h], 1
0x140cba0f4  lea     rcx, [rbp+600h+var_3E0]
0x140cba0fb  mov     rdx, rdi
0x140cba0fe  call    sub_1401C50B0
0x140cba103  nop
0x140cba104  mov     r14, [rbp+600h+var_50]
0x140cba10b  mov     rdi, [r14+0D90h]
0x140cba112  lock inc qword ptr [rdi]
0x140cba116  jle     loc_140CBAAF7
0x140cba11c  mov     rbx, [r14+0D98h]
0x140cba123  lock inc qword ptr [rbx]
0x140cba127  jle     loc_140CBAAF7
0x140cba12d  lea     rcx, [rbp+600h+var_278]
0x140cba134  lea     rdx, [rbp+600h+var_3E0]
0x140cba13b  mov     r8d, 88h
0x140cba141  call    sub_141684120
0x140cba146  mov     byte ptr [r14+0DB1h], 0
0x140cba14e  mov     qword ptr [rbp+600h+var_1F0], rdi
0x140cba155  mov     qword ptr [rbp+600h+var_1F0+8], rbx
0x140cba15c  movups  xmm0, [rbp+600h+var_110]
0x140cba163  movups  xmm1, [rbp+600h+var_100]
0x140cba16a  movups  xmm2, [rbp+600h+var_F0]
0x140cba171  movups  xmm3, [rbp+600h+var_E0]
0x140cba178  movups  [rbp+600h+var_1E0], xmm0
0x140cba17f  movups  [rbp+600h+var_1D0], xmm1
0x140cba186  movups  [rbp+600h+var_1C0], xmm2
0x140cba18d  movups  [rbp+600h+var_1B0], xmm3
0x140cba194  mov     rdx, cs:off_141EC8710
0x140cba19b  mov     eax, [rdx+60h]
0x140cba19e  test    eax, eax
0x140cba1a0  jnz     loc_140CBA993
0x140cba1a6  cmp     dword ptr [rdx+10h], 2
0x140cba1aa  jnz     loc_140CBA31A
0x140cba1b0  cmp     byte ptr [rdx], 0
0x140cba1b3  mov     eax, 1D8h
0x140cba1b8  mov     ecx, 2C0h
0x140cba1bd  cmovnz  rcx, rax
0x140cba1c1  add     rcx, [rdx+8]
0x140cba1c5  mov     [rbp+600h+var_41], 0
0x140cba1cc  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cba1d3  lea     r8, [rbp+600h+var_278]
0x140cba1da  call    sub_1408983B0
0x140cba1df  nop
0x140cba1e0  jmp     loc_140CBA352
0x140cba1e5  lea     r8, [rbp+600h+var_268]
0x140cba1ec  lea     rcx, [rbp+600h+var_518]
0x140cba1f3  lea     rdx, [rbp+600h+var_278]
0x140cba1fa  call    sub_1416850A0
0x140cba1ff  nop
0x140cba200  movzx   r15d, byte ptr [rbp+600h+var_518]
0x140cba208  cmp     r15b, 0FFh
0x140cba20c  jz      loc_140CBA974
0x140cba212  movzx   r13d, byte ptr [rbp+600h+var_518+7]
0x140cba21a  movzx   esi, word ptr [rbp+600h+var_518+5]
0x140cba221  mov     r12d, dword ptr [rbp+600h+var_518+1]
0x140cba228  mov     r14, qword ptr [rbp+600h+var_518+8]
0x140cba22f  mov     rbx, qword ptr [rbp+600h+var_508]
0x140cba236  mov     rdi, qword ptr [rbp+600h+var_508+8]
0x140cba23d  lea     rcx, [rbp+600h+var_3E0]
0x140cba244  call    sub_140014150
0x140cba249  nop
0x140cba24a  shl     r13d, 10h
0x140cba24e  or      esi, r13d
0x140cba251  shl     rsi, 20h
0x140cba255  or      r12, rsi
0x140cba258  mov     rcx, [rbp+600h+var_58]
0x140cba25f  call    sub_140BF0DE0
0x140cba264  nop
0x140cba265  mov     rax, [rbp+600h+var_60]
0x140cba26c  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cba270  jz      loc_140CBA30B
0x140cba276  mov     rax, [rbp+600h+var_50]
0x140cba27d  lea     rcx, [rax+9B8h]
0x140cba284  mov     [rbp+600h+var_70], rcx
0x140cba28b  mov     rcx, [rax+9B8h]
0x140cba292  mov     rax, [rax+9C0h]
0x140cba299  mov     [rbp+600h+var_78], rax
0x140cba2a0  mov     [rbp+600h+var_68], 0
0x140cba2ab  mov     [rbp+600h+var_A8], rcx
0x140cba2b2  nop     word ptr [rax+rax+00000000h]
0x140cba2c0  mov     rax, [rbp+600h+var_68]
0x140cba2c7  cmp     [rbp+600h+var_78], rax
0x140cba2ce  jz      short loc_140CBA2E9
0x140cba2d0  inc     rax
0x140cba2d3  mov     [rbp+600h+var_68], rax
0x140cba2da  lea     rsi, [rcx+60h]
0x140cba2de  call    sub_1402C7520
0x140cba2e3  nop
0x140cba2e4  mov     rcx, rsi
0x140cba2e7  jmp     short loc_140CBA2C0
0x140cba2e9  mov     rax, [rbp+600h+var_60]
0x140cba2f0  mov     rax, [rax]
0x140cba2f3  mov     sil, 1
0x140cba2f6  test    rax, rax
0x140cba2f9  mov     r13, [rbp+600h+var_50]
0x140cba300  jnz     loc_140CBA84F
0x140cba306  jmp     loc_140CBA871
0x140cba30b  mov     sil, 1
0x140cba30e  mov     r13, [rbp+600h+var_50]
0x140cba315  jmp     loc_140CBA871
0x140cba31a  cmp     byte ptr [rdx+40h], 0
0x140cba31e  mov     eax, 1D8h
0x140cba323  mov     ecx, 2C0h
0x140cba328  cmovnz  rcx, rax
0x140cba32c  lea     rax, [rdx+40h]
0x140cba330  add     rcx, [rdx+48h]
0x140cba334  mov     [rbp+600h+var_41], 0
0x140cba33b  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cba342  lea     r8, [rbp+600h+var_278]
0x140cba349  mov     rdx, rax
0x140cba34c  call    sub_1408983B0
0x140cba351  nop
0x140cba352  mov     r14, [rbp+600h+var_50]
0x140cba359  mov     [r14+0DA8h], rax
0x140cba360  lea     rdx, [r14+0DA8h]
0x140cba367  lea     rdi, [rbp+600h+var_278]
0x140cba36e  mov     rcx, rdi
0x140cba371  mov     [rbp+600h+var_60], rdx
0x140cba378  mov     r8, rsi
0x140cba37b  call    sub_140B02B20
0x140cba380  nop
0x140cba381  mov     rbx, [rbp+600h+var_278]
0x140cba388  cmp     rbx, 0FFFFFFFFFFFFFFFDh
0x140cba38c  jz      short loc_140CBA3B5
0x140cba38e  cmp     rbx, 0FFFFFFFFFFFFFFFEh
0x140cba392  jnz     short loc_140CBA3C8
0x140cba394  mov     r15, [rbp+600h+var_270]
0x140cba39b  mov     r14, [rbp+600h+var_268]
0x140cba3a2  mov     r12, 800000000000000Ch
0x140cba3ac  mov     r13, [rbp+600h+var_260]
0x140cba3b3  jmp     short loc_140CBA3FA
0x140cba3b5  mov     rdx, [rbp+600h+var_50]
0x140cba3bc  mov     byte ptr [rdx+0DB0h], 3
0x140cba3c3  jmp     loc_140CBA5E6
0x140cba3c8  mov     r12, [rbp+600h+var_270]
0x140cba3cf  mov     r15, [rbp+600h+var_268]
0x140cba3d6  mov     r14, [rbp+600h+var_260]
0x140cba3dd  mov     r13, qword ptr [rbp+600h+var_258]
0x140cba3e4  lea     rdx, [rbp+600h+var_258+8]
0x140cba3eb  lea     rcx, [rbp+600h+var_650]
0x140cba3ef  mov     r8d, 138h
0x140cba3f5  call    sub_141684120
0x140cba3fa  mov     rsi, [rbp+600h+var_60]
0x140cba401  lea     rcx, [rbp+600h+var_518]
0x140cba408  lea     rdx, [rbp+600h+var_650]
0x140cba40c  mov     r8d, 138h
0x140cba412  call    sub_141684120
0x140cba417  mov     rsi, [rsi]
0x140cba41a  mov     rcx, rsi
0x140cba41d  call    sub_1412F2A80
0x140cba422  nop
0x140cba423  test    al, al
0x140cba425  jz      short loc_140CBA430
0x140cba427  mov     rcx, rsi
0x140cba42a  call    sub_1412E7580
0x140cba42f  nop
0x140cba430  cmp     rbx, 0FFFFFFFFFFFFFFFFh
0x140cba434  jz      short loc_140CBA4B5
0x140cba436  cmp     rbx, 0FFFFFFFFFFFFFFFEh
0x140cba43a  jnz     loc_140CBA5FD
0x140cba440  mov     [rbp+600h+var_278], r12
0x140cba447  mov     [rbp+600h+var_270], r15
0x140cba44e  mov     [rbp+600h+var_268], r14
0x140cba455  mov     [rbp+600h+var_260], r13
0x140cba45c  movups  xmm0, [rbp+600h+var_518]
0x140cba463  movups  [rbp+600h+var_258], xmm0
0x140cba46a  mov     [rbp+600h+var_98], rdi
0x140cba471  lea     rax, sub_141230630
0x140cba478  mov     [rbp+600h+var_90], rax
0x140cba47f  lea     rdx, unk_1417BA10F
0x140cba486  lea     rcx, [rbp+600h+var_650]
0x140cba48a  lea     r8, [rbp+600h+var_98]
0x140cba491  call    sub_14149C0F0
0x140cba496  nop
0x140cba497  lea     rcx, [rbp+600h+var_278]
0x140cba49e  call    sub_140BF0F60
0x140cba4a3  nop
0x140cba4a4  mov     r15, [rbp+600h+var_650]
0x140cba4a8  mov     r14, [rbp+600h+var_648]
0x140cba4ac  mov     rdi, [rbp+600h+var_640]
0x140cba4b0  jmp     loc_140CBA583
0x140cba4b5  mov     [rbp+600h+var_278], r12
0x140cba4bc  mov     [rbp+600h+var_270], r15
0x140cba4c3  mov     [rbp+600h+var_268], r14
0x140cba4ca  mov     [rbp+600h+var_260], r13
0x140cba4d1  movups  xmm0, [rbp+600h+var_518]
0x140cba4d8  movups  xmm1, [rbp+600h+var_508]
0x140cba4df  movups  xmm2, [rbp+600h+var_4F8]
0x140cba4e6  movups  xmm3, [rbp+600h+var_4E8]
0x140cba4ed  movups  [rbp+600h+var_258], xmm0
0x140cba4f4  movups  xmmword ptr [rbp+3B8h], xmm1
0x140cba4fb  movups  [rbp+600h+var_240+8], xmm2
0x140cba502  movups  [rbp+600h+var_230+8], xmm3
0x140cba509  mov     [rbp+600h+var_98], 0
0x140cba514  mov     [rbp+600h+var_90], 1
0x140cba51f  mov     [rbp+600h+var_88], 0
0x140cba52a  mov     [rbp+600h+var_640], 60000020h
0x140cba532  lea     rax, [rbp+600h+var_98]
0x140cba539  mov     [rbp+600h+var_650], rax
0x140cba53d  lea     rax, off_1417C41C0
0x140cba544  mov     [rbp+600h+var_648], rax
0x140cba548  lea     rcx, [rbp+600h+var_278]
0x140cba54f  lea     rdx, [rbp+600h+var_650]
0x140cba553  call    sub_140B036A0
0x140cba558  nop
0x140cba559  test    al, al
0x140cba55b  jnz     loc_140CBA9B1
0x140cba561  mov     r15, [rbp+600h+var_98]
0x140cba568  mov     r14, [rbp+600h+var_90]
0x140cba56f  mov     rdi, [rbp+600h+var_88]
0x140cba576  lea     rcx, [rbp+600h+var_278]
0x140cba57d  call    sub_140BF2F60
0x140cba582  nop
0x140cba583  mov     rcx, [rbp+600h+var_50]
0x140cba58a  mov     byte ptr [rcx+0DB1h], 0
0x140cba591  add     rcx, 0D08h
0x140cba598  call    sub_140014150
0x140cba59d  nop
0x140cba59e  mov     rdx, [rbp+600h+var_50]
0x140cba5a5  mov     byte ptr [rdx+0DB0h], 1
0x140cba5ac  cmp     r15, 0FFFFFFFFFFFFFFFEh
0x140cba5b0  jz      short loc_140CBA5E6
0x140cba5b2  cmp     r15, 0FFFFFFFFFFFFFFFFh
0x140cba5b6  jz      loc_140CBA70D
0x140cba5bc  test    rdi, rdi
0x140cba5bf  jns     loc_140CBA745
0x140cba5c5  xor     esi, esi
0x140cba5c7  mov     [rbp+600h+var_60], r15
0x140cba5ce  mov     [rbp+600h+var_70], r14
0x140cba5d5  mov     rcx, rsi
0x140cba5d8  mov     rdx, rdi
0x140cba5db  call    sub_1416C2D4B
0x140cba5e0  db 90h
0x140cba5e1  jmp     loc_140CBAAF7
0x140cba5e6  mov     byte ptr [rdx+0DB8h], 3
0x140cba5ed  mov     byte ptr [rdx+0DC0h], 3
0x140cba5f4  mov     cl, 3
0x140cba5f6  mov     al, 1
0x140cba5f8  jmp     loc_140CBA95A
0x140cba5fd  mov     [rbp+600h+var_3C0], r13
0x140cba604  lea     rcx, [rbp+600h+var_3B8]
0x140cba60b  lea     rdx, [rbp+600h+var_518]
0x140cba612  mov     r8d, 138h
0x140cba618  call    sub_141684120
0x140cba61d  mov     qword ptr [rbp+600h+var_3E0], rbx
0x140cba624  mov     qword ptr [rbp+600h+var_3E0+8], r12
0x140cba62b  mov     [rbp+600h+var_3D0], r15
0x140cba632  mov     [rbp+600h+var_3C8], r14
0x140cba639  lea     rcx, [rbp+600h+var_3E0]
0x140cba640  call    sub_140A90470
0x140cba645  nop
0x140cba646  call    nullsub_1
0x140cba64b  mov     ecx, 27h ; '''
0x140cba650  mov     edx, 1
0x140cba655  call    sub_140001650
0x140cba65a  test    rax, rax
0x140cba65d  jz      loc_140CBAAE7
0x140cba663  movups  xmm0, cs:xmmword_1417BAFC8
0x140cba66a  movups  xmmword ptr [rax+10h], xmm0
0x140cba66e  movups  xmm0, cs:xmmword_1417BAFB8
0x140cba675  movups  xmmword ptr [rax], xmm0
0x140cba678  mov     rcx, 676E697474697571h
0x140cba682  mov     [rax+1Fh], rcx
0x140cba686  mov     [rbp+600h+var_278], 27h ; '''
0x140cba691  mov     [rbp+600h+var_270], rax
0x140cba698  mov     [rbp+600h+var_268], 27h ; '''
0x140cba6a3  mov     [rsp+680h+var_660], rdi
0x140cba6a8  lea     rcx, aExitGuard_1; "exit_guard"
0x140cba6af  lea     r8, aClosedThenExit; "closed_then_exit"
0x140cba6b6  mov     edx, 0Ah
0x140cba6bb  mov     r9d, 10h
0x140cba6c1  call    sub_1403565C0
0x140cba6c6  nop
0x140cba6c7  mov     rax, [rbp+600h+var_50]
0x140cba6ce  lea     rsi, [rax+0D08h]
0x140cba6d5  mov     al, 1
0x140cba6d7  xchg    al, cs:byte_141EC930C
0x140cba6dd  mov     rcx, rsi
0x140cba6e0  xor     edx, edx
0x140cba6e2  call    sub_1401B4A10
0x140cba6e7  nop
0x140cba6e8  mov     rax, [rbp+600h+var_50]
0x140cba6ef  mov     byte ptr [rax+0DB1h], 0
0x140cba6f6  mov     rcx, rsi
0x140cba6f9  call    sub_140014150
0x140cba6fe  nop
0x140cba6ff  mov     rax, [rbp+600h+var_50]
0x140cba706  mov     byte ptr [rax+0DB0h], 1
0x140cba70d  call    nullsub_1
0x140cba712  mov     r14d, 80h
0x140cba718  mov     ecx, 80h
0x140cba71d  mov     edx, 1
0x140cba722  call    sub_140001650
0x140cba727  test    rax, rax
0x140cba72a  jz      loc_140CBAA89
0x140cba730  mov     rbx, rax
0x140cba733  mov     dword ptr [rax], 6C6C756Eh
0x140cba739  mov     edi, 4
0x140cba73e  xor     esi, esi
0x140cba740  xor     r15d, r15d
0x140cba743  jmp     short loc_140CBA79B
0x140cba745  jz      loc_140CBA980
0x140cba74b  call    nullsub_1
0x140cba750  mov     esi, 1
0x140cba755  mov     edx, 1
0x140cba75a  mov     rcx, rdi
0x140cba75d  call    sub_140001650
0x140cba762  test    rax, rax
0x140cba765  jz      loc_140CBA5C7
0x140cba76b  mov     rbx, rax
0x140cba76e  mov     rcx, rax
0x140cba771  mov     rdx, r14
0x140cba774  mov     r8, rdi
0x140cba777  call    sub_141684120
0x140cba77c  test    r15, r15
0x140cba77f  jz      short loc_140CBA792
0x140cba781  mov     r8d, 1
0x140cba787  mov     rcx, r14
0x140cba78a  mov     rdx, r15
0x140cba78d  call    sub_140001660
0x140cba792  mov     r15b, 3
0x140cba795  mov     sil, 1
0x140cba798  mov     r14, rdi
0x140cba79b  mov     rax, [rbp+600h+var_78]
0x140cba7a2  mov     byte ptr [rax], 1
0x140cba7a5  mov     rcx, [rbp+600h+var_68]
0x140cba7ac  call    sub_140BC7C10
0x140cba7b1  nop
0x140cba7b2  mov     rcx, [rbp+600h+var_58]
0x140cba7b9  call    sub_140BF0DE0
0x140cba7be  nop
0x140cba7bf  mov     r13, [rbp+600h+var_50]
0x140cba7c6  cmp     qword ptr [r13+9B0h], 0FFFFFFFFFFFFFFFFh
0x140cba7ce  jz      loc_140CBA86E
0x140cba7d4  lea     rax, [r13+9B8h]
0x140cba7db  mov     [rbp+600h+var_70], rax
0x140cba7e2  mov     rcx, [r13+9B8h]
0x140cba7e9  mov     rax, [r13+9C0h]
0x140cba7f0  mov     [rbp+600h+var_78], rax
0x140cba7f7  mov     [rbp+600h+var_68], 0
0x140cba802  mov     [rbp+600h+var_60], rcx
0x140cba809  nop     dword ptr [rax+00000000h]
0x140cba810  mov     rax, [rbp+600h+var_68]
0x140cba817  cmp     [rbp+600h+var_78], rax
0x140cba81e  jz      short loc_140CBA839
0x140cba820  inc     rax
0x140cba823  mov     [rbp+600h+var_68], rax
0x140cba82a  lea     r12, [rcx+60h]
0x140cba82e  call    sub_1402C7520
0x140cba833  nop
0x140cba834  mov     rcx, r12
0x140cba837  jmp     short loc_140CBA810
0x140cba839  mov     r13, [rbp+600h+var_50]
0x140cba840  mov     rax, [r13+9B0h]
0x140cba847  xor     r12d, r12d
0x140cba84a  test    rax, rax
0x140cba84d  jz      short loc_140CBA871
0x140cba84f  mov     rcx, [rbp+600h+var_70]
0x140cba856  mov     rcx, [rcx]
0x140cba859  shl     rax, 5
0x140cba85d  lea     rdx, [rax+rax*2]
0x140cba861  mov     r8d, 8
0x140cba867  call    sub_140001660
0x140cba86c  jmp     short loc_140CBA871
0x140cba86e  xor     r12d, r12d
0x140cba871  mov     byte ptr [r13+0DC0h], 1
0x140cba879  mov     rcx, [rbp+600h+var_58]
0x140cba880  call    sub_140BE4460
0x140cba885  nop
0x140cba886  mov     [rbp+600h+var_C7], r12d
0x140cba88d  mov     rax, r12
0x140cba890  shr     rax, 30h
0x140cba894  mov     [rbp+600h+var_C1], al
0x140cba89a  shr     r12, 20h
0x140cba89e  mov     [rbp+600h+var_C3], r12w
0x140cba8a6  mov     [rbp+600h+var_B8], rbx
0x140cba8ad  mov     [rbp+600h+var_B0], rdi
0x140cba8b4  movzx   eax, sil
0x140cba8b8  mov     [rbp+600h+var_C8], r15b
0x140cba8bf  mov     [rbp+600h+var_C0], r14
0x140cba8c6  mov     [rbp+600h+var_D0], rax
0x140cba8cd  mov     rdi, [rbp+600h+var_50]
0x140cba8d4  mov     byte ptr [rdi+0DD3h], 0
0x140cba8db  lea     rsi, [rbp+600h+var_278]
0x140cba8e2  mov     r8d, 168h
0x140cba8e8  mov     rcx, rsi
0x140cba8eb  mov     rdx, rdi
0x140cba8ee  call    sub_141684120
0x140cba8f3  mov     byte ptr [rdi+0DD2h], 0
0x140cba8fa  mov     rdx, [rdi+180h]
0x140cba901  mov     byte ptr [rdi+0DD1h], 0
0x140cba908  mov     rax, [rdi+178h]
0x140cba90f  mov     [rbp+600h+var_3D0], rax
0x140cba916  movups  xmm0, xmmword ptr [rdi+168h]
0x140cba91d  movaps  [rbp+600h+var_3E0], xmm0
0x140cba924  mov     eax, [rdi+0DC8h]
0x140cba92a  mov     ecx, [rdi+0DCCh]
0x140cba930  mov     [rsp+680h+var_658], ecx
0x140cba934  mov     dword ptr [rsp+680h+var_660], eax
0x140cba938  lea     r8, [rbp+600h+var_D0]
0x140cba93f  lea     r9, [rbp+600h+var_3E0]
0x140cba946  mov     rcx, rsi
0x140cba949  call    sub_14047E370
0x140cba94e  nop
0x140cba94f  mov     cl, 1
0x140cba951  xor     eax, eax
0x140cba953  mov     rdx, [rbp+600h+var_50]
0x140cba95a  mov     [rdx+0DD0h], cl
0x140cba960  add     rsp, 648h
0x140cba967  pop     rbx
0x140cba968  pop     rdi
0x140cba969  pop     rsi
0x140cba96a  pop     r12
0x140cba96c  pop     r13
0x140cba96e  pop     r14
0x140cba970  pop     r15
0x140cba972  pop     rbp
0x140cba973  retn
0x140cba974  mov     rdi, qword ptr [rbp+600h+var_518+8]
0x140cba97b  jmp     loc_140CB9E7D
0x140cba980  mov     ebx, 1
0x140cba985  test    r15, r15
0x140cba988  jnz     loc_140CBA781
0x140cba98e  jmp     loc_140CBA792
0x140cba993  mov     [rbp+600h+var_41], 1
0x140cba99a  mov     rcx, cs:off_141EC8710
0x140cba9a1  mov     rdi, rdx
0x140cba9a4  call    sub_1416984A3
0x140cba9a9  mov     rdx, rdi
0x140cba9ac  jmp     loc_140CBA1A6
0x140cba9b1  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140cba9b8  mov     [rsp+680h+var_660], rax
0x140cba9bd  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140cba9c4  lea     r9, unk_1417BC180
0x140cba9cb  lea     r8, [rbp+600h+var_79]
0x140cba9d2  mov     edx, 37h ; '7'
0x140cba9d7  call    sub_1416C3060
0x140cba9dc  db 90h
0x140cba9dd  jmp     loc_140CBAAF7
0x140cba9e2  lea     rcx, off_1417B7C00; jumptable 0000000140CB9C38 case 2
0x140cba9e9  call    sub_1416C3420
0x140cba9ee  ud2
0x140cba9f0  lea     rcx, off_1417B7C00; jumptable 0000000140CB9C38 case 1
0x140cba9f7  call    sub_1416C3400
0x140cba9fc  ud2
0x140cba9fe  mov     [rbp+600h+var_58], rdi; jumptable 0000000140CB9C7E case 2
0x140cbaa05  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cbaa0c  call    sub_1416C3420
0x140cbaa11  align 2
0x140cbaa12  jmp     loc_140CBAAF7
0x140cbaa17  mov     [rbp+600h+var_58], rdi; jumptable 0000000140CB9C7E case 1
0x140cbaa1e  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cbaa25  call    sub_1416C3400
0x140cbaa2a  db 90h
0x140cbaa2b  jmp     loc_140CBAAF7
0x140cbaa30  mov     [rbp+600h+var_70], r12; jumptable 0000000140CB9F33 case 2
0x140cbaa37  mov     [rbp+600h+var_78], rbx
0x140cbaa3e  mov     [rbp+600h+var_68], r15
0x140cbaa45  mov     [rbp+600h+var_58], rdi
0x140cbaa4c  lea     rcx, off_1417BAFA0; "src\\commands\\relay.rs"
0x140cbaa53  call    sub_1416C3420
0x140cbaa58  db 90h
0x140cbaa59  jmp     loc_140CBAAF7
0x140cbaa5e  mov     [rbp+600h+var_70], r12; jumptable 0000000140CB9F33 case 1
0x140cbaa65  mov     [rbp+600h+var_78], rbx
0x140cbaa6c  mov     [rbp+600h+var_68], r15
0x140cbaa73  mov     [rbp+600h+var_58], rdi
0x140cbaa7a  lea     rcx, off_1417BAFA0; "src\\commands\\relay.rs"
0x140cbaa81  call    sub_1416C3400
0x140cbaa86  db 90h
0x140cbaa87  jmp     short loc_140CBAAF7
0x140cbaa89  mov     ecx, 1
0x140cbaa8e  mov     edx, 80h
0x140cbaa93  call    sub_1416C2D4B
0x140cbaa98  db 90h
0x140cbaa99  jmp     short loc_140CBAAF7
0x140cbaa9b  mov     [rbp+600h+var_58], rdi; jumptable 0000000140CB9F03 case 2
0x140cbaaa2  mov     [rbp+600h+var_A0], r15
0x140cbaaa9  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cbaab0  call    sub_1416C3420
0x140cbaab5  align 2
0x140cbaab6  jmp     short loc_140CBAAF7
0x140cbaab8  mov     [rbp+600h+var_58], rdi; jumptable 0000000140CB9F03 case 1
0x140cbaabf  mov     [rbp+600h+var_A0], r15
0x140cbaac6  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cbaacd  call    sub_1416C3400
0x140cbaad2  db 90h
0x140cbaad3  jmp     short loc_140CBAAF7
0x140cbaad5  mov     ecx, 1
0x140cbaada  mov     edx, 36h ; '6'
0x140cbaadf  call    sub_1416C2D4B
0x140cbaae4  db 90h
0x140cbaae5  jmp     short loc_140CBAAF7
0x140cbaae7  mov     ecx, 1
0x140cbaaec  mov     edx, 27h ; '''
0x140cbaaf1  call    sub_1416C2D4B
0x140cbaaf6  db 90h
0x140cbaaf7  ud2