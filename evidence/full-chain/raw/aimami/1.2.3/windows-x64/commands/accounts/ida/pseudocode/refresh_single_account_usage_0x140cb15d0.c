// module: codexmate_lib/commands/accounts
// addr: 0x140cb15d0
// name: refresh_single_account_usage
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CB25B0 for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cb15d0  push    rbp
0x140cb15d1  push    r15
0x140cb15d3  push    r14
0x140cb15d5  push    r13
0x140cb15d7  push    r12
0x140cb15d9  push    rsi
0x140cb15da  push    rdi
0x140cb15db  push    rbx
0x140cb15dc  mov     eax, 1B08h
0x140cb15e1  call    __alloca_probe
0x140cb15e6  sub     rsp, rax
0x140cb15e9  lea     rbp, [rsp+80h]
0x140cb15f1  movaps  [rbp+1AC0h+var_50], xmm6
0x140cb15f8  mov     [rbp+1AC0h+var_58], 0FFFFFFFFFFFFFFFEh
0x140cb1603  mov     rdi, rdx
0x140cb1606  mov     r14, rcx
0x140cb1609  movzx   eax, byte ptr [rcx+1310h]
0x140cb1610  lea     rcx, jpt_140CB1625
0x140cb1617  movsxd  rax, ds:(jpt_140CB1625 - 1417C62F4h)[rcx+rax*4]; switch 4 cases
0x140cb161b  add     rax, rcx
0x140cb161e  mov     [rbp+1AC0h+var_68], r14
0x140cb1625  jmp     rax; switch jump
0x140cb1627  mov     word ptr [r14+1311h], 101h; jumptable 0000000140CB1625 case 0
0x140cb1631  mov     byte ptr [r14+1313h], 1
0x140cb1639  lea     rdx, [r14+188h]
0x140cb1640  lea     rsi, [r14+0A48h]
0x140cb1647  mov     r8d, 8C0h
0x140cb164d  mov     rcx, rsi
0x140cb1650  call    sub_141684120
0x140cb1655  movzx   eax, byte ptr [r14+1300h]
0x140cb165d  lea     rcx, jpt_140CB166B
0x140cb1664  movsxd  rax, ds:(jpt_140CB166B - 1417C6304h)[rcx+rax*4]; switch 4 cases
0x140cb1668  add     rax, rcx
0x140cb166b  jmp     rax; switch jump
0x140cb166d  lea     rsi, [r14+0A48h]; jumptable 0000000140CB1625 case 3
0x140cb1674  movzx   eax, byte ptr [r14+1300h]
0x140cb167c  lea     rcx, jpt_140CB166B
0x140cb1683  movsxd  rax, ds:(jpt_140CB166B - 1417C6304h)[rcx+rax*4]; switch 4 cases
0x140cb1687  add     rax, rcx
0x140cb168a  jmp     rax; switch jump
0x140cb168c  lea     rcx, [r14+0C50h]; jumptable 0000000140CB166B case 0
0x140cb1693  mov     [rbp+1AC0h+var_C18], 0
0x140cb169e  lea     r13, aRefreshSingleA; "refresh_single_account_usage"
0x140cb16a5  mov     [rbp+1AC0h+var_C48], r13
0x140cb16ac  mov     qword ptr [rbp+1AC0h+var_C40], 1Ch
0x140cb16b7  lea     rax, aApp_2; "app"
0x140cb16be  mov     qword ptr [rbp+1AC0h+var_C40+8], rax
0x140cb16c5  mov     [rbp+1AC0h+var_C30], 3
0x140cb16d0  mov     [rbp+1AC0h+var_80], rsi
0x140cb16d7  mov     [rbp+1AC0h+var_C28], rsi
0x140cb16de  mov     [rbp+1AC0h+var_88], rcx
0x140cb16e5  mov     [rbp+1AC0h+var_C20], rcx
0x140cb16ec  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb16f3  lea     rdx, [rbp+1AC0h+var_C48]
0x140cb16fa  call    sub_1401C3650
0x140cb16ff  nop
0x140cb1700  mov     rax, [rbp+1AC0h+var_4D0]
0x140cb1707  movzx   ecx, byte ptr [rbp+1AC0h+var_4C8+7]
0x140cb170e  shl     ecx, 10h
0x140cb1711  movzx   edx, word ptr [rbp+1AC0h+var_4C8+5]
0x140cb1718  or      edx, ecx
0x140cb171a  shl     rdx, 20h
0x140cb171e  mov     r12d, dword ptr [rbp+1AC0h+var_4C8+1]
0x140cb1725  or      r12, rdx
0x140cb1728  movzx   r14d, byte ptr [rbp+1AC0h+var_4C8]
0x140cb1730  mov     r15, [rbp+1AC0h+var_4C0]
0x140cb1737  mov     rbx, [rbp+1AC0h+var_4B8]
0x140cb173e  mov     rsi, qword ptr [rbp+1AC0h+var_4B0]
0x140cb1745  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb1749  jz      loc_140CB18B2
0x140cb174f  movups  xmm0, [rbp+1AC0h+var_448]
0x140cb1756  movups  [rbp+1AC0h+var_868], xmm0
0x140cb175d  movups  xmm0, [rbp+1AC0h+var_458]
0x140cb1764  movups  [rbp+1AC0h+var_878], xmm0
0x140cb176b  movups  xmm0, [rbp+1AC0h+var_468]
0x140cb1772  movups  [rbp+1AC0h+var_888], xmm0
0x140cb1779  movups  xmm0, [rbp+1AC0h+var_4B0+8]
0x140cb1780  movups  xmm1, [rbp+1AC0h+var_498]
0x140cb1787  movups  xmm2, [rbp+1AC0h+var_488]
0x140cb178e  movups  xmm3, [rbp+1AC0h+var_478]
0x140cb1795  movups  [rbp+1AC0h+var_898], xmm3
0x140cb179c  movups  [rbp+1AC0h+var_8A8], xmm2
0x140cb17a3  movups  [rbp+1AC0h+var_8B8], xmm1
0x140cb17aa  movups  [rbp+1AC0h+var_8C8], xmm0
0x140cb17b1  mov     dword ptr [rbp+1AC0h+var_8F0+9], r12d
0x140cb17b8  mov     rcx, r12
0x140cb17bb  shr     rcx, 30h
0x140cb17bf  mov     byte ptr [rbp+1AC0h+var_8F0+0Fh], cl
0x140cb17c5  shr     r12, 20h
0x140cb17c9  mov     word ptr [rbp+1AC0h+var_8F0+0Dh], r12w
0x140cb17d1  mov     [rbp+1AC0h+var_8E0], r15
0x140cb17d8  mov     [rbp+1AC0h+var_8D8], rbx
0x140cb17df  mov     [rbp+1AC0h+var_8D0], rsi
0x140cb17e6  mov     qword ptr [rbp+1AC0h+var_8F0], rax
0x140cb17ed  mov     byte ptr [rbp+1AC0h+var_8F0+8], r14b
0x140cb17f4  mov     qword ptr [rbp+1620h], 0
0x140cb17ff  mov     [rbp+1AC0h+var_4D0], r13
0x140cb1806  mov     [rbp+1AC0h+var_4C8], 1Ch
0x140cb1811  lea     rax, aAccountkey_5; "accountKey"
0x140cb1818  mov     [rbp+1AC0h+var_4C0], rax
0x140cb181f  mov     [rbp+1AC0h+var_4B8], 0Ah
0x140cb182a  mov     rax, [rbp+1AC0h+var_80]
0x140cb1831  mov     qword ptr [rbp+1AC0h+var_4B0], rax
0x140cb1838  mov     rax, [rbp+1AC0h+var_88]
0x140cb183f  mov     qword ptr [rbp+1AC0h+var_4B0+8], rax
0x140cb1846  lea     rcx, [rbp+1AC0h+var_C48]
0x140cb184d  lea     rdx, [rbp+1AC0h+var_4D0]
0x140cb1854  call    sub_1409757B0
0x140cb1859  nop
0x140cb185a  movzx   r14d, byte ptr [rbp+1AC0h+var_C48]
0x140cb1862  cmp     r14b, 0FFh
0x140cb1866  jz      loc_140CB19A1
0x140cb186c  movzx   r13d, byte ptr [rbp+1AC0h+var_C48+7]
0x140cb1874  movzx   edi, word ptr [rbp+1AC0h+var_C48+5]
0x140cb187b  mov     r12d, dword ptr [rbp+1AC0h+var_C48+1]
0x140cb1882  mov     r15, qword ptr [rbp+1AC0h+var_C40]
0x140cb1889  mov     rbx, qword ptr [rbp+1AC0h+var_C40+8]
0x140cb1890  mov     rsi, [rbp+1AC0h+var_C30]
0x140cb1897  lea     rcx, [rbp+1AC0h+var_8F0]
0x140cb189e  call    sub_140014150
0x140cb18a3  nop
0x140cb18a4  shl     r13d, 10h
0x140cb18a8  or      edi, r13d
0x140cb18ab  shl     rdi, 20h
0x140cb18af  or      r12, rdi
0x140cb18b2  mov     rcx, [rbp+1AC0h+var_80]
0x140cb18b9  call    sub_140BF0DE0
0x140cb18be  nop
0x140cb18bf  mov     rax, [rbp+1AC0h+var_88]
0x140cb18c6  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cb18ca  jz      loc_140CB1999
0x140cb18d0  mov     rax, [rbp+1AC0h+var_68]
0x140cb18d7  lea     rcx, [rax+0C58h]
0x140cb18de  mov     [rbp+1AC0h+var_90], rcx
0x140cb18e5  mov     rcx, [rax+0C58h]
0x140cb18ec  mov     rax, [rax+0C60h]
0x140cb18f3  mov     [rbp+1AC0h+var_78], rax
0x140cb18fa  mov     [rbp+1AC0h+var_70], 0
0x140cb1905  mov     [rbp+1AC0h+var_B8], rcx
0x140cb190c  nop     dword ptr [rax+00h]
0x140cb1910  mov     rax, [rbp+1AC0h+var_70]
0x140cb1917  cmp     [rbp+1AC0h+var_78], rax
0x140cb191e  jz      short loc_140CB197E
0x140cb1920  inc     rax
0x140cb1923  mov     [rbp+1AC0h+var_70], rax
0x140cb192a  lea     rdi, [rcx+60h]
0x140cb192e  call    sub_1402C7520
0x140cb1933  nop
0x140cb1934  mov     rcx, rdi
0x140cb1937  jmp     short loc_140CB1910
0x140cb1939  lea     rbx, [r14+12F8h]; jumptable 0000000140CB166B case 3
0x140cb1940  movzx   eax, byte ptr [r14+12F8h]
0x140cb1948  lea     r15, [r14+0E98h]
0x140cb194f  lea     rcx, jpt_140CB195D
0x140cb1956  movsxd  rax, ds:(jpt_140CB195D - 1417C6314h)[rcx+rax*4]; switch 4 cases
0x140cb195a  add     rax, rcx
0x140cb195d  jmp     rax; switch jump
0x140cb195f  lea     r12, [r14+10C8h]; jumptable 0000000140CB195D case 3
0x140cb1966  movzx   eax, byte ptr [r14+12F0h]
0x140cb196e  lea     rcx, jpt_140CB197C
0x140cb1975  movsxd  rax, ds:(jpt_140CB197C - 1417C6324h)[rcx+rax*4]; switch 6 cases
0x140cb1979  add     rax, rcx
0x140cb197c  jmp     rax; switch jump
0x140cb197e  mov     rax, [rbp+1AC0h+var_88]
0x140cb1985  mov     rax, [rax]
0x140cb1988  mov     dil, 1
0x140cb198b  test    rax, rax
0x140cb198e  jnz     loc_140CB232C
0x140cb1994  jmp     loc_140CB2349
0x140cb1999  mov     dil, 1
0x140cb199c  jmp     loc_140CB2349
0x140cb19a1  mov     rbx, [rbp+1AC0h+var_C30]
0x140cb19a8  mov     r14, [rbp+1AC0h+var_68]
0x140cb19af  lea     rsi, [r14+0C68h]
0x140cb19b6  movups  xmm6, [rbp+1AC0h+var_C40]
0x140cb19bd  lea     rdx, [rbp+1AC0h+var_8F0]
0x140cb19c4  mov     r8d, 98h
0x140cb19ca  mov     rcx, rsi
0x140cb19cd  call    sub_141684120
0x140cb19d2  movups  xmmword ptr [r14+0D00h], xmm6
0x140cb19da  mov     [r14+0D10h], rbx
0x140cb19e1  mov     byte ptr [r14+0E90h], 0
0x140cb19e9  lea     r15, [r14+0E98h]
0x140cb19f0  mov     r8d, 230h
0x140cb19f6  mov     rcx, r15
0x140cb19f9  mov     rdx, rsi
0x140cb19fc  call    sub_141684120
0x140cb1a01  lea     rbx, [r14+12F8h]
0x140cb1a08  mov     byte ptr [r14+12F8h], 0
0x140cb1a10  mov     rsi, [rbp+1AC0h+var_80]
0x140cb1a17  lea     r12, [r14+10C8h]; jumptable 0000000140CB195D case 0
0x140cb1a1e  mov     r8d, 230h
0x140cb1a24  mov     rcx, r12
0x140cb1a27  mov     rdx, r15
0x140cb1a2a  call    sub_141684120
0x140cb1a2f  movzx   eax, byte ptr [r14+12F0h]
0x140cb1a37  lea     rcx, jpt_140CB197C
0x140cb1a3e  movsxd  rax, ds:(jpt_140CB197C - 1417C6324h)[rcx+rax*4]; switch 4 cases
0x140cb1a42  add     rax, rcx
0x140cb1a45  jmp     rax; switch jump
0x140cb1a47  mov     [rbp+1AC0h+var_B0], r15; jumptable 0000000140CB197C case 0
0x140cb1a4e  mov     [rbp+1AC0h+var_88], rbx
0x140cb1a55  mov     [rbp+1AC0h+var_80], rsi
0x140cb1a5c  mov     word ptr [r14+12F1h], 0
0x140cb1a66  lea     rsi, [r14+1178h]
0x140cb1a6d  mov     r8d, 98h
0x140cb1a73  mov     rcx, rsi
0x140cb1a76  mov     [rbp+1AC0h+var_90], r12
0x140cb1a7d  mov     rdx, r12
0x140cb1a80  call    sub_141684120
0x140cb1a85  movups  xmm0, xmmword ptr [r14+1160h]
0x140cb1a8d  movups  xmmword ptr [r14+1210h], xmm0
0x140cb1a95  mov     rax, [r14+1170h]
0x140cb1a9c  mov     [r14+1220h], rax
0x140cb1aa3  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb1aaa  mov     rdx, rsi
0x140cb1aad  call    sub_1401C50B0
0x140cb1ab2  nop
0x140cb1ab3  mov     r12, [rbp+1AC0h+var_68]
0x140cb1aba  mov     r14, [r12+1200h]
0x140cb1ac2  lock inc qword ptr [r14]
0x140cb1ac6  jle     loc_140CB25D4
0x140cb1acc  mov     r15, [r12+1208h]
0x140cb1ad4  lock inc qword ptr [r15]
0x140cb1ad8  jle     loc_140CB25D4
0x140cb1ade  lea     rbx, [r12+1210h]
0x140cb1ae6  lea     rcx, [rbp+1AC0h+var_568]
0x140cb1aed  lea     rdx, [rbp+1AC0h+var_4D0]
0x140cb1af4  mov     r8d, 88h
0x140cb1afa  call    sub_141684120
0x140cb1aff  mov     [rbp+1AC0h+var_4E0], r14
0x140cb1b06  mov     [rbp+1AC0h+var_4D8], r15
0x140cb1b0d  mov     byte ptr [r12+12F2h], 1
0x140cb1b16  lea     rcx, [rbp+1AC0h+var_128]
0x140cb1b1d  mov     rdx, rbx
0x140cb1b20  call    sub_14149C500
0x140cb1b25  nop
0x140cb1b26  mov     rax, [rbp+1AC0h+var_68]
0x140cb1b2d  mov     byte ptr [rax+12F1h], 1
0x140cb1b34  mov     rcx, rsi
0x140cb1b37  call    sub_1403EF390
0x140cb1b3c  nop
0x140cb1b3d  mov     ebx, eax
0x140cb1b3f  mov     r15, [rbp+1AC0h+var_68]
0x140cb1b46  mov     word ptr [r15+12F1h], 0
0x140cb1b50  lea     rsi, [rbp+1AC0h+var_4D0]
0x140cb1b57  lea     rdx, [rbp+1AC0h+var_568]
0x140cb1b5e  mov     r8d, 98h
0x140cb1b64  mov     rcx, rsi
0x140cb1b67  call    sub_141684120
0x140cb1b6c  movups  xmm0, [rbp+1AC0h+var_128]
0x140cb1b73  movups  [rbp+1AC0h+var_438], xmm0
0x140cb1b7a  mov     rax, [rbp+1AC0h+var_118]
0x140cb1b81  mov     [rbp+1AC0h+var_428], rax
0x140cb1b88  lea     r14, [rbp+1AC0h+var_1460]
0x140cb1b8f  mov     r8d, 0B0h
0x140cb1b95  mov     rcx, r14
0x140cb1b98  mov     rdx, rsi
0x140cb1b9b  call    sub_141684120
0x140cb1ba0  lea     rsi, [r15+1228h]
0x140cb1ba7  mov     r8d, 0B0h
0x140cb1bad  mov     rcx, rsi
0x140cb1bb0  mov     rdx, r14
0x140cb1bb3  call    sub_141684120
0x140cb1bb8  mov     [r15+12D8h], bl
0x140cb1bbf  lea     rax, [r15+12E8h]
0x140cb1bc6  mov     [rbp+1AC0h+var_70], rax
0x140cb1bcd  mov     byte ptr [r15+12E8h], 0
0x140cb1bd5  jmp     short loc_140CB1C20; jumptable 0000000140CB1C1E case 0
0x140cb1bd7  mov     [rbp+1AC0h+var_90], r12; jumptable 0000000140CB197C case 3
0x140cb1bde  mov     [rbp+1AC0h+var_B0], r15
0x140cb1be5  mov     [rbp+1AC0h+var_88], rbx
0x140cb1bec  mov     [rbp+1AC0h+var_80], rsi
0x140cb1bf3  lea     rax, [r14+12E8h]
0x140cb1bfa  mov     [rbp+1AC0h+var_70], rax
0x140cb1c01  movzx   eax, byte ptr [r14+12E8h]
0x140cb1c09  lea     rsi, [r14+1228h]
0x140cb1c10  lea     rcx, jpt_140CB1C1E; jumptable 0000000140CB197C case 4
0x140cb1c17  movsxd  rax, ds:(jpt_140CB1C1E - 1417C6334h)[rcx+rax*4]; switch 4 cases
0x140cb1c1b  add     rax, rcx
0x140cb1c1e  jmp     rax; switch jump
0x140cb1c20  lea     rcx, [rbp+1AC0h+var_D00]; jumptable 0000000140CB1C1E case 0
0x140cb1c27  mov     r8d, 0B8h
0x140cb1c2d  mov     [rbp+1AC0h+var_78], rsi
0x140cb1c34  mov     rdx, rsi
0x140cb1c37  call    sub_141684120
0x140cb1c3c  mov     rdx, cs:off_141EC8710
0x140cb1c43  mov     eax, [rdx+60h]
0x140cb1c46  test    eax, eax
0x140cb1c48  jnz     loc_140CB246C
0x140cb1c4e  cmp     dword ptr [rdx+10h], 2
0x140cb1c52  jnz     short loc_140CB1C86
0x140cb1c54  cmp     byte ptr [rdx], 0
0x140cb1c57  mov     eax, 1D8h
0x140cb1c5c  mov     ecx, 2C0h
0x140cb1c61  cmovnz  rcx, rax
0x140cb1c65  add     rcx, [rdx+8]
0x140cb1c69  mov     [rbp+1AC0h+var_59], 0
0x140cb1c70  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb1c77  lea     r8, [rbp+1AC0h+var_D00]
0x140cb1c7e  call    sub_14089C1D0
0x140cb1c83  nop
0x140cb1c84  jmp     short loc_140CB1CBE
0x140cb1c86  cmp     byte ptr [rdx+40h], 0
0x140cb1c8a  mov     eax, 1D8h
0x140cb1c8f  mov     ecx, 2C0h
0x140cb1c94  cmovnz  rcx, rax
0x140cb1c98  lea     rax, [rdx+40h]
0x140cb1c9c  add     rcx, [rdx+48h]
0x140cb1ca0  mov     [rbp+1AC0h+var_59], 0
0x140cb1ca7  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb1cae  lea     r8, [rbp+1AC0h+var_D00]
0x140cb1cb5  mov     rdx, rax
0x140cb1cb8  call    sub_14089C1D0
0x140cb1cbd  nop
0x140cb1cbe  mov     r14, [rbp+1AC0h+var_68]
0x140cb1cc5  mov     [r14+12E0h], rax
0x140cb1ccc  jmp     short loc_140CB1CD5
0x140cb1cce  mov     [rbp+1AC0h+var_78], rsi; jumptable 0000000140CB1C1E case 3
0x140cb1cd5  lea     rdx, [r14+12E0h]
0x140cb1cdc  lea     rbx, [rbp+1AC0h+var_4D0]
0x140cb1ce3  mov     rcx, rbx
0x140cb1ce6  mov     [rbp+1AC0h+var_B8], rdx
0x140cb1ced  mov     r8, rdi
0x140cb1cf0  call    sub_140B030D0
0x140cb1cf5  nop
0x140cb1cf6  mov     r15, [rbp+1AC0h+var_4D0]
0x140cb1cfd  cmp     r15, 0FFFFFFFFFFFFFFFDh
0x140cb1d01  jz      short loc_140CB1D2D
0x140cb1d03  cmp     r15d, 0FFFFFFFEh
0x140cb1d07  jnz     short loc_140CB1D59
0x140cb1d09  mov     r13, [rbp+1AC0h+var_4C8]
0x140cb1d10  mov     rsi, [rbp+1AC0h+var_4C0]
0x140cb1d17  mov     rdi, 800000000000000Ch
0x140cb1d21  mov     r12, [rbp+1AC0h+var_4B8]
0x140cb1d28  jmp     loc_140CB1DB8
0x140cb1d2d  mov     rdx, [rbp+1AC0h+var_68]
0x140cb1d34  mov     byte ptr [rdx+12E8h], 3
0x140cb1d3b  mov     byte ptr [rdx+12F0h], 3
0x140cb1d42  mov     byte ptr [rdx+12F8h], 3
0x140cb1d49  mov     byte ptr [rdx+1300h], 3
0x140cb1d50  mov     cl, 3
0x140cb1d52  mov     al, 1
0x140cb1d54  jmp     loc_140CB2438
0x140cb1d59  mov     rdi, [rbp+1AC0h+var_4C8]
0x140cb1d60  mov     r13, [rbp+1AC0h+var_4C0]
0x140cb1d67  mov     rsi, [rbp+1AC0h+var_4B8]
0x140cb1d6e  mov     r12, qword ptr [rbp+1AC0h+var_4B0]
0x140cb1d75  lea     rdx, [rbp+1AC0h+var_4B0+8]
0x140cb1d7c  lea     rcx, [rbp+1AC0h+var_13B0]
0x140cb1d83  mov     r8d, 358h
0x140cb1d89  call    sub_141684120
0x140cb1d8e  mov     rax, [rbp+1AC0h+var_150]
0x140cb1d95  mov     [rbp+1AC0h+var_C0], rax
0x140cb1d9c  mov     rax, [rbp+1AC0h+var_148]
0x140cb1da3  mov     [rbp+1AC0h+var_E0], rax
0x140cb1daa  mov     rax, [rbp+1AC0h+var_140]
0x140cb1db1  mov     [rbp+1AC0h+var_E8], rax
0x140cb1db8  lea     rcx, [rbp+1AC0h+var_1058]
0x140cb1dbf  lea     rdx, [rbp+1AC0h+var_13B0]
0x140cb1dc6  mov     r8d, 358h
0x140cb1dcc  call    sub_141684120
0x140cb1dd1  mov     rax, [rbp+1AC0h+var_B8]
0x140cb1dd8  mov     r14, [rax]
0x140cb1ddb  mov     rax, [rbp+1AC0h+var_70]
0x140cb1de2  mov     [rbp+1AC0h+var_98], rax
0x140cb1de9  mov     rax, [rbp+1AC0h+var_78]
0x140cb1df0  mov     [rbp+1AC0h+var_A0], rax
0x140cb1df7  mov     rcx, r14
0x140cb1dfa  call    sub_1412F2A80
0x140cb1dff  nop
0x140cb1e00  test    al, al
0x140cb1e02  jz      short loc_140CB1E29
0x140cb1e04  mov     rax, [rbp+1AC0h+var_70]
0x140cb1e0b  mov     [rbp+1AC0h+var_98], rax
0x140cb1e12  mov     rax, [rbp+1AC0h+var_78]
0x140cb1e19  mov     [rbp+1AC0h+var_A0], rax
0x140cb1e20  mov     rcx, r14
0x140cb1e23  call    sub_1412E7580
0x140cb1e28  nop
0x140cb1e29  cmp     r15d, 0FFFFFFFEh
0x140cb1e2d  jnz     loc_140CB1EDA
0x140cb1e33  mov     [rbp+1AC0h+var_4D0], rdi
0x140cb1e3a  mov     [rbp+1AC0h+var_4C8], r13
0x140cb1e41  mov     [rbp+1AC0h+var_4C0], rsi
0x140cb1e48  mov     [rbp+1AC0h+var_4B8], r12
0x140cb1e4f  movups  xmm0, [rbp+1AC0h+var_1058]
0x140cb1e56  movups  [rbp+1AC0h+var_4B0], xmm0
0x140cb1e5d  mov     [rbp+1AC0h+var_138], rbx
0x140cb1e64  lea     rax, sub_141230630
0x140cb1e6b  mov     [rbp+1AC0h+var_130], rax
0x140cb1e72  lea     rdx, unk_1417B8CB0
0x140cb1e79  lea     rcx, [rbp+1AC0h+var_13B0]
0x140cb1e80  lea     r8, [rbp+1AC0h+var_138]
0x140cb1e87  call    sub_14149C0F0
0x140cb1e8c  nop
0x140cb1e8d  mov     rax, [rbp+1AC0h+var_70]
0x140cb1e94  mov     [rbp+1AC0h+var_98], rax
0x140cb1e9b  mov     rax, [rbp+1AC0h+var_78]
0x140cb1ea2  mov     [rbp+1AC0h+var_A0], rax
0x140cb1ea9  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb1eb0  call    sub_140BF0F60
0x140cb1eb5  nop
0x140cb1eb6  mov     r14, [rbp+1AC0h+var_13B0]
0x140cb1ebd  mov     r13, [rbp+1AC0h+var_13A8]
0x140cb1ec4  mov     rsi, [rbp+1AC0h+var_13A0]
0x140cb1ecb  mov     rax, [rbp+1AC0h+var_70]
0x140cb1ed2  mov     byte ptr [rax], 1
0x140cb1ed5  jmp     loc_140CB1FB1
0x140cb1eda  lea     rcx, [rbp+1AC0h+var_C48]
0x140cb1ee1  lea     rdx, [rbp+1AC0h+var_1058]
0x140cb1ee8  mov     r8d, 358h
0x140cb1eee  call    sub_141684120
0x140cb1ef3  mov     rax, [rbp+1AC0h+var_70]
0x140cb1efa  mov     byte ptr [rax], 1
0x140cb1efd  cmp     r15d, 0FFFFFFFFh
0x140cb1f01  mov     r14, rdi
0x140cb1f04  jz      loc_140CB1FB1
0x140cb1f0a  mov     [rbp+1AC0h+var_4C8], r14
0x140cb1f11  mov     [rbp+1AC0h+var_4C0], r13
0x140cb1f18  mov     [rbp+1AC0h+var_4B8], rsi
0x140cb1f1f  mov     [rbp+1AC0h+var_4D0], r15
0x140cb1f26  mov     qword ptr [rbp+1AC0h+var_4B0], r12
0x140cb1f2d  lea     rcx, [rbp+1AC0h+var_4B0+8]
0x140cb1f34  lea     rdx, [rbp+1AC0h+var_C48]
0x140cb1f3b  mov     r8d, 358h
0x140cb1f41  call    sub_141684120
0x140cb1f46  mov     rax, [rbp+1AC0h+var_68]
0x140cb1f4d  lea     rbx, [rax+1178h]
0x140cb1f54  movups  xmm0, xmmword ptr [rax+1218h]
0x140cb1f5b  movups  [rsp+1B40h+var_1B20], xmm0
0x140cb1f60  lea     r8, aAccount; "account"
0x140cb1f67  lea     rdx, [rbp+1AC0h+var_4D0]
0x140cb1f6e  mov     r9d, 7
0x140cb1f74  mov     rcx, rbx
0x140cb1f77  call    sub_1403EE240
0x140cb1f7c  nop
0x140cb1f7d  mov     rdi, [rbp+1AC0h+var_C0]
0x140cb1f84  cmp     rdi, 0FFFFFFFFFFFFFFFFh
0x140cb1f88  jz      short loc_140CB1FFA
0x140cb1f8a  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb1f91  call    sub_140A8B330
0x140cb1f96  nop
0x140cb1f97  mov     r15, 0FFFFFFFFFFFFFFFFh
0x140cb1f9e  mov     r14, rdi
0x140cb1fa1  mov     r13, [rbp+1AC0h+var_E0]
0x140cb1fa8  mov     rsi, [rbp+1AC0h+var_E8]
0x140cb1faf  jmp     short loc_140CB2010
0x140cb1fb1  mov     rbx, [rbp+1AC0h+var_68]
0x140cb1fb8  mov     byte ptr [rbx+12F1h], 0
0x140cb1fbf  mov     byte ptr [rbx+12F2h], 0
0x140cb1fc6  mov     rdx, [rbx+1210h]
0x140cb1fcd  test    rdx, rdx
0x140cb1fd0  jz      short loc_140CB1FE4
0x140cb1fd2  mov     rcx, [rbx+1218h]
0x140cb1fd9  mov     r8d, 1
0x140cb1fdf  call    sub_140001660
0x140cb1fe4  lea     rcx, [rbx+1178h]
0x140cb1feb  call    sub_140014150
0x140cb1ff0  nop
0x140cb1ff1  mov     r15, 0FFFFFFFFFFFFFFFFh
0x140cb1ff8  jmp     short loc_140CB204D
0x140cb1ffa  lea     rcx, [rbp+1AC0h+var_1B10]
0x140cb1ffe  lea     rdx, [rbp+1AC0h+var_C48]
0x140cb2005  mov     r8d, 358h
0x140cb200b  call    sub_141684120
0x140cb2010  mov     rax, [rbp+1AC0h+var_68]
0x140cb2017  mov     byte ptr [rax+12F1h], 0
0x140cb201e  mov     byte ptr [rax+12F2h], 0
0x140cb2025  mov     rdx, [rax+1210h]
0x140cb202c  test    rdx, rdx
0x140cb202f  jz      short loc_140CB2044
0x140cb2031  mov     rcx, [rax+1218h]
0x140cb2038  mov     r8d, 1
0x140cb203e  call    sub_140001660
0x140cb2043  nop
0x140cb2044  mov     rcx, rbx
0x140cb2047  call    sub_140014150
0x140cb204c  nop
0x140cb204d  lea     rcx, [rbp+1AC0h+var_17B8]
0x140cb2054  lea     rdx, [rbp+1AC0h+var_1B10]
0x140cb2058  mov     r8d, 358h
0x140cb205e  call    sub_141684120
0x140cb2063  mov     rax, [rbp+1AC0h+var_68]
0x140cb206a  mov     byte ptr [rax+12F0h], 1
0x140cb2071  mov     rcx, [rbp+1AC0h+var_90]
0x140cb2078  call    sub_140BECAC0
0x140cb207d  nop
0x140cb207e  cmp     r15d, 0FFFFFFFFh
0x140cb2082  jz      loc_140CB2208
0x140cb2088  lea     rcx, [rbp+1AC0h+var_8C8]
0x140cb208f  lea     rdx, [rbp+1AC0h+var_17B8]
0x140cb2096  mov     r8d, 358h
0x140cb209c  call    sub_141684120
0x140cb20a1  mov     qword ptr [rbp+1AC0h+var_8F0], r15
0x140cb20a8  mov     qword ptr [rbp+1AC0h+var_8F0+8], r14
0x140cb20af  mov     [rbp+1AC0h+var_8E0], r13
0x140cb20b6  mov     [rbp+1AC0h+var_8D8], rsi
0x140cb20bd  mov     [rbp+1AC0h+var_8D0], r12
0x140cb20c4  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb20cb  lea     rdx, [rbp+1AC0h+var_8F0]
0x140cb20d2  call    sub_140B064D0
0x140cb20d7  nop
0x140cb20d8  mov     rax, [rbp+1AC0h+var_4D0]
0x140cb20df  movzx   ecx, byte ptr [rbp+1AC0h+var_4C8+7]
0x140cb20e6  shl     ecx, 10h
0x140cb20e9  movzx   edx, word ptr [rbp+1AC0h+var_4C8+5]
0x140cb20f0  or      edx, ecx
0x140cb20f2  shl     rdx, 20h
0x140cb20f6  mov     r12d, dword ptr [rbp+1AC0h+var_4C8+1]
0x140cb20fd  or      r12, rdx
0x140cb2100  movzx   r14d, byte ptr [rbp+1AC0h+var_4C8]
0x140cb2108  mov     r15, [rbp+1AC0h+var_4C0]
0x140cb210f  mov     rbx, [rbp+1AC0h+var_4B8]
0x140cb2116  mov     rsi, qword ptr [rbp+1AC0h+var_4B0]
0x140cb211d  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb2121  jz      loc_140CB222E
0x140cb2127  mov     rcx, qword ptr [rbp+1AC0h+var_4B0+8]
0x140cb212e  mov     rdx, r12
0x140cb2131  shr     rdx, 30h
0x140cb2135  mov     byte ptr [rbp+1AC0h+var_4C8+7], dl
0x140cb213b  mov     rdx, r12
0x140cb213e  shr     rdx, 20h
0x140cb2142  mov     word ptr [rbp+1AC0h+var_4C8+5], dx
0x140cb2149  mov     dword ptr [rbp+1AC0h+var_4C8+1], r12d
0x140cb2150  mov     [rbp+1AC0h+var_4C0], r15
0x140cb2157  mov     [rbp+1AC0h+var_4B8], rbx
0x140cb215e  mov     qword ptr [rbp+1AC0h+var_4B0], rsi
0x140cb2165  mov     [rbp+1AC0h+var_4D0], rax
0x140cb216c  mov     byte ptr [rbp+1AC0h+var_4C8], r14b
0x140cb2173  mov     qword ptr [rbp+1AC0h+var_4B0+8], rcx
0x140cb217a  mov     qword ptr [rbp+1AC0h+var_1058], 0
0x140cb2185  mov     qword ptr [rbp+1AC0h+var_1058+8], 1
0x140cb2190  mov     [rbp+1AC0h+var_1048], 0
0x140cb219b  mov     qword ptr [rbp+1AC0h+var_C40+8], 60000020h
0x140cb21a6  lea     rax, [rbp+1AC0h+var_1058]
0x140cb21ad  mov     [rbp+1AC0h+var_C48], rax
0x140cb21b4  lea     rax, off_1417C41C0
0x140cb21bb  mov     qword ptr [rbp+1AC0h+var_C40], rax
0x140cb21c2  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb21c9  lea     rdx, [rbp+1AC0h+var_C48]
0x140cb21d0  call    sub_141230630
0x140cb21d5  nop
0x140cb21d6  test    al, al
0x140cb21d8  jnz     loc_140CB248A
0x140cb21de  mov     r15, qword ptr [rbp+1AC0h+var_1058]
0x140cb21e5  mov     rbx, qword ptr [rbp+1AC0h+var_1058+8]
0x140cb21ec  mov     rsi, [rbp+1AC0h+var_1048]
0x140cb21f3  lea     rcx, [rbp+1AC0h+var_4D0]
0x140cb21fa  call    sub_140BF0F60
0x140cb21ff  nop
0x140cb2200  mov     dil, 1
0x140cb2203  mov     r14b, 3
0x140cb2206  jmp     short loc_140CB2284
0x140cb2208  test    rsi, rsi
0x140cb220b  jns     short loc_140CB2232
0x140cb220d  xor     edi, edi
0x140cb220f  mov     [rbp+1AC0h+var_78], r13
0x140cb2216  mov     [rbp+1AC0h+var_70], r14
0x140cb221d  mov     rcx, rdi
0x140cb2220  mov     rdx, rsi
0x140cb2223  call    sub_1416C2D4B
0x140cb2228  db 90h
0x140cb2229  jmp     loc_140CB25D4
0x140cb222e  xor     edi, edi
0x140cb2230  jmp     short loc_140CB2284
0x140cb2232  jz      loc_140CB2459
0x140cb2238  call    nullsub_1
0x140cb223d  mov     edi, 1
0x140cb2242  mov     edx, 1
0x140cb2247  mov     rcx, rsi
0x140cb224a  call    sub_140001650
0x140cb224f  test    rax, rax
0x140cb2252  jz      short loc_140CB220F
0x140cb2254  mov     rbx, rax
0x140cb2257  mov     rcx, rax
0x140cb225a  mov     rdx, r13
0x140cb225d  mov     r8, rsi
0x140cb2260  call    sub_141684120
0x140cb2265  test    r14, r14
0x140cb2268  jz      short loc_140CB227B
0x140cb226a  mov     r8d, 1
0x140cb2270  mov     rcx, r13
0x140cb2273  mov     rdx, r14
0x140cb2276  call    sub_140001660
0x140cb227b  mov     dil, 1
0x140cb227e  mov     r14b, 3
0x140cb2281  mov     r15, rsi
0x140cb2284  mov     rax, [rbp+1AC0h+var_88]
0x140cb228b  mov     byte ptr [rax], 1
0x140cb228e  mov     rcx, [rbp+1AC0h+var_80]
0x140cb2295  call    sub_140BF0DE0
0x140cb229a  nop
0x140cb229b  mov     rax, [rbp+1AC0h+var_68]
0x140cb22a2  cmp     qword ptr [rax+0C50h], 0FFFFFFFFFFFFFFFFh
0x140cb22aa  jz      loc_140CB2349
0x140cb22b0  lea     rcx, [rax+0C58h]
0x140cb22b7  mov     [rbp+1AC0h+var_90], rcx
0x140cb22be  mov     rcx, [rax+0C58h]
0x140cb22c5  mov     rax, [rax+0C60h]
0x140cb22cc  mov     [rbp+1AC0h+var_78], rax
0x140cb22d3  mov     [rbp+1AC0h+var_70], 0
0x140cb22de  mov     [rbp+1AC0h+var_88], rcx
0x140cb22e5  nop     word ptr [rax+rax+00000000h]
0x140cb22f0  mov     rax, [rbp+1AC0h+var_70]
0x140cb22f7  cmp     [rbp+1AC0h+var_78], rax
0x140cb22fe  jz      short loc_140CB2319
0x140cb2300  inc     rax
0x140cb2303  mov     [rbp+1AC0h+var_70], rax
0x140cb230a  lea     r13, [rcx+60h]
0x140cb230e  call    sub_1402C7520
0x140cb2313  nop
0x140cb2314  mov     rcx, r13
0x140cb2317  jmp     short loc_140CB22F0
0x140cb2319  mov     rax, [rbp+1AC0h+var_68]
0x140cb2320  mov     rax, [rax+0C50h]
0x140cb2327  test    rax, rax
0x140cb232a  jz      short loc_140CB2349
0x140cb232c  mov     rcx, [rbp+1AC0h+var_90]
0x140cb2333  mov     rcx, [rcx]
0x140cb2336  shl     rax, 5
0x140cb233a  lea     rdx, [rax+rax*2]
0x140cb233e  mov     r8d, 8
0x140cb2344  call    sub_140001660
0x140cb2349  mov     rax, [rbp+1AC0h+var_68]
0x140cb2350  mov     byte ptr [rax+1300h], 1
0x140cb2357  mov     rcx, [rbp+1AC0h+var_80]
0x140cb235e  call    sub_140BE36A0
0x140cb2363  nop
0x140cb2364  mov     [rbp+1AC0h+var_107], r12d
0x140cb236b  mov     rax, r12
0x140cb236e  shr     rax, 30h
0x140cb2372  mov     [rbp+1AC0h+var_101], al
0x140cb2378  shr     r12, 20h
0x140cb237c  mov     [rbp+1AC0h+var_103], r12w
0x140cb2384  mov     [rbp+1AC0h+var_100], r15
0x140cb238b  mov     [rbp+1AC0h+var_F8], rbx
0x140cb2392  mov     [rbp+1AC0h+var_F0], rsi
0x140cb2399  movzx   eax, dil
0x140cb239d  mov     [rbp+1AC0h+var_108], r14b
0x140cb23a4  mov     [rbp+1AC0h+var_110], rax
0x140cb23ab  mov     rdi, [rbp+1AC0h+var_68]
0x140cb23b2  mov     byte ptr [rdi+1313h], 0
0x140cb23b9  lea     rsi, [rbp+1AC0h+var_4D0]
0x140cb23c0  mov     r8d, 168h
0x140cb23c6  mov     rcx, rsi
0x140cb23c9  mov     rdx, rdi
0x140cb23cc  call    sub_141684120
0x140cb23d1  mov     byte ptr [rdi+1312h], 0
0x140cb23d8  mov     rdx, [rdi+180h]
0x140cb23df  mov     byte ptr [rdi+1311h], 0
0x140cb23e6  mov     rax, [rdi+178h]
0x140cb23ed  mov     [rbp+1AC0h+var_8E0], rax
0x140cb23f4  movups  xmm0, xmmword ptr [rdi+168h]
0x140cb23fb  movaps  [rbp+1AC0h+var_8F0], xmm0
0x140cb2402  mov     eax, [rdi+1308h]
0x140cb2408  mov     ecx, [rdi+130Ch]
0x140cb240e  mov     dword ptr [rsp+1B40h+var_1B20+8], ecx
0x140cb2412  mov     dword ptr [rsp+1B40h+var_1B20], eax
0x140cb2416  lea     r8, [rbp+1AC0h+var_110]
0x140cb241d  lea     r9, [rbp+1AC0h+var_8F0]
0x140cb2424  mov     rcx, rsi
0x140cb2427  call    sub_14047E370
0x140cb242c  nop
0x140cb242d  mov     cl, 1
0x140cb242f  xor     eax, eax
0x140cb2431  mov     rdx, [rbp+1AC0h+var_68]
0x140cb2438  mov     [rdx+1310h], cl
0x140cb243e  movaps  xmm6, [rbp+1AC0h+var_50]
0x140cb2445  add     rsp, 1B08h
0x140cb244c  pop     rbx
0x140cb244d  pop     rdi
0x140cb244e  pop     rsi
0x140cb244f  pop     r12
0x140cb2451  pop     r13
0x140cb2453  pop     r14
0x140cb2455  pop     r15
0x140cb2457  pop     rbp
0x140cb2458  retn
0x140cb2459  mov     ebx, 1
0x140cb245e  test    r14, r14
0x140cb2461  jnz     loc_140CB226A
0x140cb2467  jmp     loc_140CB227B
0x140cb246c  mov     [rbp+1AC0h+var_59], 1
0x140cb2473  mov     rcx, cs:off_141EC8710
0x140cb247a  mov     rsi, rdx
0x140cb247d  call    sub_1416984A3
0x140cb2482  mov     rdx, rsi
0x140cb2485  jmp     loc_140CB1C4E
0x140cb248a  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140cb2491  mov     qword ptr [rsp+1B40h+var_1B20], rax
0x140cb2496  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140cb249d  lea     r9, unk_1417BC180
0x140cb24a4  lea     r8, [rbp+1AC0h+var_A1]
0x140cb24ab  mov     edx, 37h ; '7'
0x140cb24b0  call    sub_1416C3060
0x140cb24b5  align 2
0x140cb24b6  jmp     loc_140CB25D4
0x140cb24bb  lea     rcx, off_1417B7C00; jumptable 0000000140CB1625 case 2
0x140cb24c2  call    sub_1416C3420
0x140cb24c7  ud2
0x140cb24c9  lea     rcx, off_1417B7C00; jumptable 0000000140CB1625 case 1
0x140cb24d0  call    sub_1416C3400
0x140cb24d5  ud2
0x140cb24d7  mov     [rbp+1AC0h+var_80], rsi; jumptable 0000000140CB166B case 2
0x140cb24de  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb24e5  call    sub_1416C3420
0x140cb24ea  db 90h
0x140cb24eb  jmp     loc_140CB25D4
0x140cb24f0  mov     [rbp+1AC0h+var_80], rsi; jumptable 0000000140CB166B case 1
0x140cb24f7  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb24fe  call    sub_1416C3400
0x140cb2503  align 4
0x140cb2504  jmp     loc_140CB25D4
0x140cb2509  mov     [rbp+1AC0h+var_90], r12; jumptable 0000000140CB197C case 2
0x140cb2510  mov     [rbp+1AC0h+var_B0], r15
0x140cb2517  mov     [rbp+1AC0h+var_88], rbx
0x140cb251e  mov     [rbp+1AC0h+var_80], rsi
0x140cb2525  lea     rcx, off_1417BB358; "src\\commands\\accounts.rs"
0x140cb252c  call    sub_1416C3420
0x140cb2531  align 2
0x140cb2532  jmp     loc_140CB25D4
0x140cb2537  mov     [rbp+1AC0h+var_90], r12; jumptable 0000000140CB197C case 1
0x140cb253e  mov     [rbp+1AC0h+var_B0], r15
0x140cb2545  mov     [rbp+1AC0h+var_88], rbx
0x140cb254c  mov     [rbp+1AC0h+var_80], rsi
0x140cb2553  lea     rcx, off_1417BB358; "src\\commands\\accounts.rs"
0x140cb255a  call    sub_1416C3400
0x140cb255f  align 20h
0x140cb2560  jmp     short loc_140CB25D4
0x140cb2562  mov     [rbp+1AC0h+var_80], rsi; jumptable 0000000140CB195D case 2
0x140cb2569  mov     [rbp+1AC0h+var_D0], rbx
0x140cb2570  mov     [rbp+1AC0h+var_D8], r15
0x140cb2577  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb257e  call    sub_1416C3420
0x140cb2583  align 4
0x140cb2584  jmp     short loc_140CB25D4
0x140cb2586  mov     [rbp+1AC0h+var_80], rsi; jumptable 0000000140CB195D case 1
0x140cb258d  mov     [rbp+1AC0h+var_D0], rbx
0x140cb2594  mov     [rbp+1AC0h+var_D8], r15
0x140cb259b  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb25a2  call    sub_1416C3400
0x140cb25a7  align 8
0x140cb25a8  jmp     short loc_140CB25D4
0x140cb25aa  mov     [rbp+1AC0h+var_C8], rsi; jumptable 0000000140CB1C1E case 2
0x140cb25b1  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb25b8  call    sub_1416C3420
0x140cb25bd  align 2
0x140cb25be  jmp     short loc_140CB25D4
0x140cb25c0  mov     [rbp+1AC0h+var_C8], rsi; jumptable 0000000140CB1C1E case 1
0x140cb25c7  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb25ce  call    sub_1416C3400
0x140cb25d3  align 4
0x140cb25d4  ud2