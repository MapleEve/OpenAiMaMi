// module: codexmate_lib/commands/accounts
// addr: 0x140cae510
// name: switch_account_and_restart_codex
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CAF37A for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cae510  push    rbp
0x140cae511  push    r15
0x140cae513  push    r14
0x140cae515  push    r13
0x140cae517  push    r12
0x140cae519  push    rsi
0x140cae51a  push    rdi
0x140cae51b  push    rbx
0x140cae51c  sub     rsp, 0B98h
0x140cae523  lea     rbp, [rsp+80h]
0x140cae52b  movaps  [rbp+0B50h+var_50], xmm6
0x140cae532  mov     [rbp+0B50h+var_58], 0FFFFFFFFFFFFFFFEh
0x140cae53d  mov     rdi, rdx
0x140cae540  mov     r14, rcx
0x140cae543  movzx   eax, byte ptr [rcx+1250h]
0x140cae54a  lea     rcx, jpt_140CAE55F
0x140cae551  movsxd  rax, ds:(jpt_140CAE55F - 1417C6254h)[rcx+rax*4]; switch 4 cases
0x140cae555  add     rax, rcx
0x140cae558  mov     [rbp+0B50h+var_68], r14
0x140cae55f  jmp     rax; switch jump
0x140cae561  mov     word ptr [r14+1251h], 101h; jumptable 0000000140CAE55F case 0
0x140cae56b  mov     byte ptr [r14+1253h], 1
0x140cae573  lea     rdx, [r14+188h]
0x140cae57a  lea     rsi, [r14+9E8h]
0x140cae581  mov     r8d, 860h
0x140cae587  mov     rcx, rsi
0x140cae58a  call    sub_141684120
0x140cae58f  movzx   eax, byte ptr [r14+1240h]
0x140cae597  lea     rcx, jpt_140CAE5A5
0x140cae59e  movsxd  rax, ds:(jpt_140CAE5A5 - 1417C6264h)[rcx+rax*4]; switch 4 cases
0x140cae5a2  add     rax, rcx
0x140cae5a5  jmp     rax; switch jump
0x140cae5a7  lea     rsi, [r14+9E8h]; jumptable 0000000140CAE55F case 3
0x140cae5ae  movzx   eax, byte ptr [r14+1240h]
0x140cae5b6  lea     rcx, jpt_140CAE5A5
0x140cae5bd  movsxd  rax, ds:(jpt_140CAE5A5 - 1417C6264h)[rcx+rax*4]; switch 4 cases
0x140cae5c1  add     rax, rcx
0x140cae5c4  jmp     rax; switch jump
0x140cae5c6  lea     rcx, [r14+0BF0h]; jumptable 0000000140CAE5A5 case 0
0x140cae5cd  mov     [rbp+0B50h+var_6B0], 0
0x140cae5d8  lea     r13, aSwitchAccountA; "switch_account_and_restart_codex"
0x140cae5df  mov     [rbp+0B50h+var_6E0], r13
0x140cae5e6  mov     qword ptr [rbp+0B50h+var_6D8], 20h ; ' '
0x140cae5f1  lea     rax, aApp_2; "app"
0x140cae5f8  mov     qword ptr [rbp+0B50h+var_6D8+8], rax
0x140cae5ff  mov     [rbp+0B50h+var_6C8], 3
0x140cae60a  mov     [rbp+0B50h+var_88], rsi
0x140cae611  mov     [rbp+0B50h+var_6C0], rsi
0x140cae618  mov     [rbp+0B50h+var_70], rcx
0x140cae61f  mov     [rbp+0B50h+var_6B8], rcx
0x140cae626  lea     rcx, [rbp+0B50h+var_338]
0x140cae62d  lea     rdx, [rbp+0B50h+var_6E0]
0x140cae634  call    sub_1401C3650
0x140cae639  nop
0x140cae63a  mov     rax, [rbp+0B50h+var_338]
0x140cae641  movzx   ecx, byte ptr [rbp+0B50h+var_330+7]
0x140cae648  shl     ecx, 10h
0x140cae64b  movzx   edx, word ptr [rbp+0B50h+var_330+5]
0x140cae652  or      edx, ecx
0x140cae654  shl     rdx, 20h
0x140cae658  mov     r12d, dword ptr [rbp+0B50h+var_330+1]
0x140cae65f  or      r12, rdx
0x140cae662  movzx   r14d, byte ptr [rbp+0B50h+var_330]
0x140cae66a  mov     r15, [rbp+0B50h+var_328]
0x140cae671  mov     rbx, [rbp+0B50h+var_320]
0x140cae678  mov     rsi, qword ptr [rbp+0B50h+var_318]
0x140cae67f  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cae683  jz      loc_140CAE7EC
0x140cae689  movups  xmm0, [rbp+0B50h+var_2B0]
0x140cae690  movups  [rbp+0B50h+var_498], xmm0
0x140cae697  movups  xmm0, [rbp+0B50h+var_2C0]
0x140cae69e  movups  [rbp+0B50h+var_4A8], xmm0
0x140cae6a5  movups  xmm0, [rbp+0B50h+var_2D0]
0x140cae6ac  movups  [rbp+0B50h+var_4B8], xmm0
0x140cae6b3  movups  xmm0, [rbp+0B50h+var_318+8]
0x140cae6ba  movups  xmm1, [rbp+0B50h+var_300]
0x140cae6c1  movups  xmm2, [rbp+0B50h+var_2F0]
0x140cae6c8  movups  xmm3, [rbp+0B50h+var_2E0]
0x140cae6cf  movups  [rbp+0B50h+var_4C8], xmm3
0x140cae6d6  movups  [rbp+0B50h+var_4D8], xmm2
0x140cae6dd  movups  [rbp+0B50h+var_4E8], xmm1
0x140cae6e4  movups  [rbp+0B50h+var_4F8], xmm0
0x140cae6eb  mov     dword ptr [rbp+0B50h+var_520+9], r12d
0x140cae6f2  mov     rcx, r12
0x140cae6f5  shr     rcx, 30h
0x140cae6f9  mov     byte ptr [rbp+0B50h+var_520+0Fh], cl
0x140cae6ff  shr     r12, 20h
0x140cae703  mov     word ptr [rbp+0B50h+var_520+0Dh], r12w
0x140cae70b  mov     [rbp+0B50h+var_510], r15
0x140cae712  mov     [rbp+0B50h+var_508], rbx
0x140cae719  mov     [rbp+0B50h+var_500], rsi
0x140cae720  mov     qword ptr [rbp+0B50h+var_520], rax
0x140cae727  mov     byte ptr [rbp+0B50h+var_520+8], r14b
0x140cae72e  mov     qword ptr [rbp+848h], 0
0x140cae739  mov     [rbp+0B50h+var_338], r13
0x140cae740  mov     [rbp+0B50h+var_330], 20h ; ' '
0x140cae74b  lea     rax, aAccountkey_5; "accountKey"
0x140cae752  mov     [rbp+0B50h+var_328], rax
0x140cae759  mov     [rbp+0B50h+var_320], 0Ah
0x140cae764  mov     rax, [rbp+0B50h+var_88]
0x140cae76b  mov     qword ptr [rbp+0B50h+var_318], rax
0x140cae772  mov     rax, [rbp+0B50h+var_70]
0x140cae779  mov     qword ptr [rbp+0B50h+var_318+8], rax
0x140cae780  lea     rcx, [rbp+0B50h+var_6E0]
0x140cae787  lea     rdx, [rbp+0B50h+var_338]
0x140cae78e  call    sub_1409757B0
0x140cae793  nop
0x140cae794  movzx   r14d, byte ptr [rbp+0B50h+var_6E0]
0x140cae79c  cmp     r14b, 0FFh
0x140cae7a0  jz      loc_140CAE8EF
0x140cae7a6  movzx   r13d, byte ptr [rbp+0B50h+var_6E0+7]
0x140cae7ae  movzx   edi, word ptr [rbp+0B50h+var_6E0+5]
0x140cae7b5  mov     r12d, dword ptr [rbp+0B50h+var_6E0+1]
0x140cae7bc  mov     r15, qword ptr [rbp+0B50h+var_6D8]
0x140cae7c3  mov     rbx, qword ptr [rbp+0B50h+var_6D8+8]
0x140cae7ca  mov     rsi, [rbp+0B50h+var_6C8]
0x140cae7d1  lea     rcx, [rbp+0B50h+var_520]
0x140cae7d8  call    sub_140014150
0x140cae7dd  nop
0x140cae7de  shl     r13d, 10h
0x140cae7e2  or      edi, r13d
0x140cae7e5  shl     rdi, 20h
0x140cae7e9  or      r12, rdi
0x140cae7ec  mov     rcx, [rbp+0B50h+var_88]
0x140cae7f3  call    sub_140BF0DE0
0x140cae7f8  nop
0x140cae7f9  mov     rax, [rbp+0B50h+var_70]
0x140cae800  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cae804  jz      loc_140CAE8E0
0x140cae80a  mov     rax, [rbp+0B50h+var_68]
0x140cae811  lea     rcx, [rax+0BF8h]
0x140cae818  mov     [rbp+0B50h+var_90], rcx
0x140cae81f  mov     rcx, [rax+0BF8h]
0x140cae826  mov     rax, [rax+0C00h]
0x140cae82d  mov     [rbp+0B50h+var_80], rax
0x140cae834  mov     [rbp+0B50h+var_78], 0
0x140cae83f  mov     [rbp+0B50h+var_C0], rcx
0x140cae846  nop     word ptr [rax+rax+00000000h]
0x140cae850  mov     rax, [rbp+0B50h+var_78]
0x140cae857  cmp     [rbp+0B50h+var_80], rax
0x140cae85e  jz      short loc_140CAE8BE
0x140cae860  inc     rax
0x140cae863  mov     [rbp+0B50h+var_78], rax
0x140cae86a  lea     rdi, [rcx+60h]
0x140cae86e  call    sub_1402C7520
0x140cae873  nop
0x140cae874  mov     rcx, rdi
0x140cae877  jmp     short loc_140CAE850
0x140cae879  lea     rbx, [r14+1238h]; jumptable 0000000140CAE5A5 case 3
0x140cae880  movzx   eax, byte ptr [r14+1238h]
0x140cae888  lea     r15, [r14+0E18h]
0x140cae88f  lea     rcx, jpt_140CAE89D
0x140cae896  movsxd  rax, ds:(jpt_140CAE89D - 1417C6274h)[rcx+rax*4]; switch 4 cases
0x140cae89a  add     rax, rcx
0x140cae89d  jmp     rax; switch jump
0x140cae89f  lea     r12, [r14+1028h]; jumptable 0000000140CAE89D case 3
0x140cae8a6  movzx   eax, byte ptr [r14+1230h]
0x140cae8ae  lea     rcx, jpt_140CAE8BC
0x140cae8b5  movsxd  rax, ds:(jpt_140CAE8BC - 1417C6284h)[rcx+rax*4]; switch 6 cases
0x140cae8b9  add     rax, rcx
0x140cae8bc  jmp     rax; switch jump
0x140cae8be  mov     rax, [rbp+0B50h+var_70]
0x140cae8c5  mov     rax, [rax]
0x140cae8c8  mov     dil, 1
0x140cae8cb  test    rax, rax
0x140cae8ce  mov     r13, [rbp+0B50h+var_68]
0x140cae8d5  jnz     loc_140CAF0FC
0x140cae8db  jmp     loc_140CAF119
0x140cae8e0  mov     dil, 1
0x140cae8e3  mov     r13, [rbp+0B50h+var_68]
0x140cae8ea  jmp     loc_140CAF119
0x140cae8ef  mov     rbx, [rbp+0B50h+var_6C8]
0x140cae8f6  mov     r14, [rbp+0B50h+var_68]
0x140cae8fd  lea     rsi, [r14+0C08h]
0x140cae904  movups  xmm6, [rbp+0B50h+var_6D8]
0x140cae90b  lea     rdx, [rbp+0B50h+var_520]
0x140cae912  mov     r8d, 98h
0x140cae918  mov     rcx, rsi
0x140cae91b  call    sub_141684120
0x140cae920  movups  xmmword ptr [r14+0CA0h], xmm6
0x140cae928  mov     [r14+0CB0h], rbx
0x140cae92f  mov     byte ptr [r14+0E10h], 0
0x140cae937  lea     r15, [r14+0E18h]
0x140cae93e  mov     r8d, 210h
0x140cae944  mov     rcx, r15
0x140cae947  mov     rdx, rsi
0x140cae94a  call    sub_141684120
0x140cae94f  lea     rbx, [r14+1238h]
0x140cae956  mov     byte ptr [r14+1238h], 0
0x140cae95e  mov     rsi, [rbp+0B50h+var_88]
0x140cae965  lea     r12, [r14+1028h]; jumptable 0000000140CAE89D case 0
0x140cae96c  mov     r8d, 210h
0x140cae972  mov     rcx, r12
0x140cae975  mov     rdx, r15
0x140cae978  call    sub_141684120
0x140cae97d  movzx   eax, byte ptr [r14+1230h]
0x140cae985  lea     rcx, jpt_140CAE8BC
0x140cae98c  movsxd  rax, ds:(jpt_140CAE8BC - 1417C6284h)[rcx+rax*4]; switch 4 cases
0x140cae990  add     rax, rcx
0x140cae993  jmp     rax; switch jump
0x140cae995  mov     [rbp+0B50h+var_D0], r15; jumptable 0000000140CAE8BC case 0
0x140cae99c  mov     [rbp+0B50h+var_90], rbx
0x140cae9a3  mov     [rbp+0B50h+var_88], rsi
0x140cae9aa  lea     rsi, [r14+10D8h]
0x140cae9b1  mov     r8d, 98h
0x140cae9b7  mov     rcx, rsi
0x140cae9ba  mov     [rbp+0B50h+var_C0], r12
0x140cae9c1  mov     rdx, r12
0x140cae9c4  call    sub_141684120
0x140cae9c9  mov     byte ptr [r14+1231h], 1
0x140cae9d1  mov     rax, [r14+10C0h]
0x140cae9d8  mov     r13, [r14+10C8h]
0x140cae9df  mov     rbx, [r14+10D0h]
0x140cae9e6  mov     [rbp+0B50h+var_78], rax
0x140cae9ed  mov     [rbp+0B50h+var_100], rax
0x140cae9f4  mov     [rbp+0B50h+var_108], r13
0x140cae9fb  lea     rcx, [rbp+0B50h+var_338]
0x140caea02  mov     rdx, rsi
0x140caea05  call    sub_1401C50B0
0x140caea0a  nop
0x140caea0b  mov     r12, [rbp+0B50h+var_68]
0x140caea12  mov     r14, [r12+1160h]
0x140caea1a  lock inc qword ptr [r14]
0x140caea1e  jle     loc_140CAF39E
0x140caea24  mov     [rbp+0B50h+var_70], rdi
0x140caea2b  mov     r15, [r12+1168h]
0x140caea33  lock inc qword ptr [r15]
0x140caea37  jle     loc_140CAF39E
0x140caea3d  lea     rsi, [rbp+0B50h+var_B98]
0x140caea41  lea     rdx, [rbp+0B50h+var_338]
0x140caea48  mov     r8d, 88h
0x140caea4e  mov     rcx, rsi
0x140caea51  call    sub_141684120
0x140caea56  mov     byte ptr [r12+1231h], 0
0x140caea5f  lea     rdi, [r12+1170h]
0x140caea67  mov     r8d, 88h
0x140caea6d  mov     rcx, rdi
0x140caea70  mov     rdx, rsi
0x140caea73  call    sub_141684120
0x140caea78  mov     rdx, rdi
0x140caea7b  mov     [r12+11F8h], r14
0x140caea83  mov     [r12+1200h], r15
0x140caea8b  mov     rax, [rbp+0B50h+var_78]
0x140caea92  mov     [r12+1208h], rax
0x140caea9a  mov     [rbp+0B50h+var_B8], r13
0x140caeaa1  mov     [r12+1210h], r13
0x140caeaa9  mov     [r12+1218h], rbx
0x140caeab1  lea     rax, [r12+1228h]
0x140caeab9  mov     [rbp+0B50h+var_80], rax
0x140caeac0  mov     byte ptr [r12+1228h], 0
0x140caeac9  mov     rdi, [rbp+0B50h+var_70]
0x140caead0  jmp     short loc_140CAEB1B; jumptable 0000000140CAEB19 case 0
0x140caead2  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CAE8BC case 3
0x140caead9  mov     [rbp+0B50h+var_D0], r15
0x140caeae0  mov     [rbp+0B50h+var_90], rbx
0x140caeae7  mov     [rbp+0B50h+var_88], rsi
0x140caeaee  lea     rax, [r14+1228h]
0x140caeaf5  mov     [rbp+0B50h+var_80], rax
0x140caeafc  movzx   eax, byte ptr [r14+1228h]
0x140caeb04  lea     rdx, [r14+1170h]
0x140caeb0b  lea     rcx, jpt_140CAEB19; jumptable 0000000140CAE8BC case 4
0x140caeb12  movsxd  rax, ds:(jpt_140CAEB19 - 1417C6294h)[rcx+rax*4]; switch 4 cases
0x140caeb16  add     rax, rcx
0x140caeb19  jmp     rax; switch jump
0x140caeb1b  lea     rcx, [rbp+0B50h+var_950]; jumptable 0000000140CAEB19 case 0
0x140caeb22  mov     r8d, 0B0h
0x140caeb28  mov     [rbp+0B50h+var_70], rdx
0x140caeb2f  call    sub_141684120
0x140caeb34  mov     rdx, cs:off_141EC8710
0x140caeb3b  mov     eax, [rdx+60h]
0x140caeb3e  test    eax, eax
0x140caeb40  jnz     loc_140CAF236
0x140caeb46  cmp     dword ptr [rdx+10h], 2
0x140caeb4a  jnz     short loc_140CAEB7E
0x140caeb4c  cmp     byte ptr [rdx], 0
0x140caeb4f  mov     eax, 1D8h
0x140caeb54  mov     ecx, 2C0h
0x140caeb59  cmovnz  rcx, rax
0x140caeb5d  add     rcx, [rdx+8]
0x140caeb61  mov     [rbp+0B50h+var_59], 0
0x140caeb68  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140caeb6f  lea     r8, [rbp+0B50h+var_950]
0x140caeb76  call    sub_14089C4C0
0x140caeb7b  nop
0x140caeb7c  jmp     short loc_140CAEBB6
0x140caeb7e  cmp     byte ptr [rdx+40h], 0
0x140caeb82  mov     eax, 1D8h
0x140caeb87  mov     ecx, 2C0h
0x140caeb8c  cmovnz  rcx, rax
0x140caeb90  lea     rax, [rdx+40h]
0x140caeb94  add     rcx, [rdx+48h]
0x140caeb98  mov     [rbp+0B50h+var_59], 0
0x140caeb9f  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140caeba6  lea     r8, [rbp+0B50h+var_950]
0x140caebad  mov     rdx, rax
0x140caebb0  call    sub_14089C4C0
0x140caebb5  nop
0x140caebb6  mov     r14, [rbp+0B50h+var_68]
0x140caebbd  mov     [r14+1220h], rax
0x140caebc4  jmp     short loc_140CAEBCD
0x140caebc6  mov     [rbp+0B50h+var_70], rdx; jumptable 0000000140CAEB19 case 3
0x140caebcd  lea     rdx, [r14+1220h]
0x140caebd4  lea     rbx, [rbp+0B50h+var_338]
0x140caebdb  mov     rcx, rbx
0x140caebde  mov     [rbp+0B50h+var_F8], rdx
0x140caebe5  mov     r8, rdi
0x140caebe8  call    sub_140AFF3A0
0x140caebed  nop
0x140caebee  mov     r15, [rbp+0B50h+var_338]
0x140caebf5  cmp     r15, 0FFFFFFFFFFFFFFFEh
0x140caebf9  jz      short loc_140CAEC29
0x140caebfb  cmp     r15d, 0FFFFFFFFh
0x140caebff  jnz     short loc_140CAEC55
0x140caec01  mov     r12, [rbp+0B50h+var_330]
0x140caec08  mov     rsi, [rbp+0B50h+var_328]
0x140caec0f  mov     rdi, 800000000000000Ch
0x140caec19  mov     rax, [rbp+0B50h+var_320]
0x140caec20  mov     [rbp+0B50h+var_D8], rax
0x140caec27  jmp     short loc_140CAEC91
0x140caec29  mov     rdx, [rbp+0B50h+var_68]
0x140caec30  mov     byte ptr [rdx+1228h], 3
0x140caec37  mov     byte ptr [rdx+1230h], 3
0x140caec3e  mov     byte ptr [rdx+1238h], 3
0x140caec45  mov     byte ptr [rdx+1240h], 3
0x140caec4c  mov     cl, 3
0x140caec4e  mov     al, 1
0x140caec50  jmp     loc_140CAF202
0x140caec55  mov     rdi, [rbp+0B50h+var_330]
0x140caec5c  mov     r12, [rbp+0B50h+var_328]
0x140caec63  mov     rsi, [rbp+0B50h+var_320]
0x140caec6a  mov     rax, qword ptr [rbp+0B50h+var_318]
0x140caec71  mov     [rbp+0B50h+var_D8], rax
0x140caec78  lea     rdx, [rbp+0B50h+var_318+8]
0x140caec7f  lea     rcx, [rbp+0B50h+var_8A0]
0x140caec86  mov     r8d, 1C0h
0x140caec8c  call    sub_141684120
0x140caec91  mov     r13, [rbp+0B50h+var_B8]
0x140caec98  lea     rcx, [rbp+0B50h+var_B10]
0x140caec9c  lea     rdx, [rbp+0B50h+var_8A0]
0x140caeca3  mov     r8d, 1C0h
0x140caeca9  call    sub_141684120
0x140caecae  mov     rax, [rbp+0B50h+var_F8]
0x140caecb5  mov     r14, [rax]
0x140caecb8  mov     rax, [rbp+0B50h+var_78]
0x140caecbf  mov     [rbp+0B50h+var_98], rax
0x140caecc6  mov     [rbp+0B50h+var_A0], r13
0x140caeccd  mov     rax, [rbp+0B50h+var_80]
0x140caecd4  mov     [rbp+0B50h+var_A8], rax
0x140caecdb  mov     rax, [rbp+0B50h+var_70]
0x140caece2  mov     [rbp+0B50h+var_B0], rax
0x140caece9  mov     rcx, r14
0x140caecec  call    sub_1412F2A80
0x140caecf1  nop
0x140caecf2  test    al, al
0x140caecf4  jz      short loc_140CAED30
0x140caecf6  mov     rax, [rbp+0B50h+var_78]
0x140caecfd  mov     [rbp+0B50h+var_98], rax
0x140caed04  mov     [rbp+0B50h+var_A0], r13
0x140caed0b  mov     rax, [rbp+0B50h+var_80]
0x140caed12  mov     [rbp+0B50h+var_A8], rax
0x140caed19  mov     rax, [rbp+0B50h+var_70]
0x140caed20  mov     [rbp+0B50h+var_B0], rax
0x140caed27  mov     rcx, r14
0x140caed2a  call    sub_1412E7580
0x140caed2f  nop
0x140caed30  cmp     r15d, 0FFFFFFFFh
0x140caed34  jz      short loc_140CAED5B
0x140caed36  lea     rcx, [rbp+0B50h+var_6E0]
0x140caed3d  lea     rdx, [rbp+0B50h+var_B10]
0x140caed41  mov     r8d, 1C0h
0x140caed47  call    sub_141684120
0x140caed4c  mov     rax, [rbp+0B50h+var_68]
0x140caed53  mov     r14, rdi
0x140caed56  jmp     loc_140CAEE20
0x140caed5b  mov     [rbp+0B50h+var_338], rdi
0x140caed62  mov     [rbp+0B50h+var_330], r12
0x140caed69  mov     [rbp+0B50h+var_328], rsi
0x140caed70  mov     rax, [rbp+0B50h+var_D8]
0x140caed77  mov     [rbp+0B50h+var_320], rax
0x140caed7e  movups  xmm0, [rbp+0B50h+var_B10]
0x140caed82  movups  [rbp+0B50h+var_318], xmm0
0x140caed89  mov     [rbp+0B50h+var_150], rbx
0x140caed90  lea     rax, sub_141230630
0x140caed97  mov     [rbp+0B50h+var_148], rax
0x140caed9e  lea     rdx, unk_1417B8CB0
0x140caeda5  lea     rcx, [rbp+0B50h+var_8A0]
0x140caedac  lea     r8, [rbp+0B50h+var_150]
0x140caedb3  call    sub_14149C0F0
0x140caedb8  nop
0x140caedb9  mov     rax, [rbp+0B50h+var_78]
0x140caedc0  mov     [rbp+0B50h+var_98], rax
0x140caedc7  mov     rax, [rbp+0B50h+var_B8]
0x140caedce  mov     [rbp+0B50h+var_A0], rax
0x140caedd5  mov     rax, [rbp+0B50h+var_80]
0x140caeddc  mov     [rbp+0B50h+var_A8], rax
0x140caede3  mov     rax, [rbp+0B50h+var_70]
0x140caedea  mov     [rbp+0B50h+var_B0], rax
0x140caedf1  lea     rcx, [rbp+0B50h+var_338]
0x140caedf8  call    sub_140BF0F60
0x140caedfd  nop
0x140caedfe  mov     r14, [rbp+0B50h+var_8A0]
0x140caee05  mov     r12, [rbp+0B50h+var_898]
0x140caee0c  mov     rsi, [rbp+0B50h+var_890]
0x140caee13  mov     r15d, 2
0x140caee19  mov     rax, [rbp+0B50h+var_68]
0x140caee20  mov     byte ptr [rax+1228h], 1
0x140caee27  mov     byte ptr [rax+1231h], 0
0x140caee2e  lea     rcx, [rax+10D8h]
0x140caee35  call    sub_140014150
0x140caee3a  nop
0x140caee3b  mov     rax, [rbp+0B50h+var_68]
0x140caee42  mov     byte ptr [rax+1230h], 1
0x140caee49  mov     rcx, [rbp+0B50h+var_C0]
0x140caee50  call    sub_140BEC490
0x140caee55  nop
0x140caee56  cmp     r15d, 2
0x140caee5a  jnz     short loc_140CAEE86
0x140caee5c  test    rsi, rsi
0x140caee5f  jns     loc_140CAF001
0x140caee65  xor     edi, edi
0x140caee67  mov     [rbp+0B50h+var_80], r12
0x140caee6e  mov     [rbp+0B50h+var_78], r14
0x140caee75  mov     rcx, rdi
0x140caee78  mov     rdx, rsi
0x140caee7b  call    sub_1416C2D4B
0x140caee80  db 90h
0x140caee81  jmp     loc_140CAF39E
0x140caee86  lea     rcx, [rbp+0B50h+var_4F8]
0x140caee8d  lea     rdx, [rbp+0B50h+var_6E0]
0x140caee94  mov     r8d, 1C0h
0x140caee9a  call    sub_141684120
0x140caee9f  mov     qword ptr [rbp+0B50h+var_520], r15
0x140caeea6  mov     qword ptr [rbp+0B50h+var_520+8], r14
0x140caeead  mov     [rbp+0B50h+var_510], r12
0x140caeeb4  mov     [rbp+0B50h+var_508], rsi
0x140caeebb  mov     rax, [rbp+0B50h+var_D8]
0x140caeec2  mov     [rbp+0B50h+var_500], rax
0x140caeec9  lea     rcx, [rbp+0B50h+var_338]
0x140caeed0  lea     rdx, [rbp+0B50h+var_520]
0x140caeed7  call    sub_140B048C0
0x140caeedc  nop
0x140caeedd  mov     rax, [rbp+0B50h+var_338]
0x140caeee4  movzx   ecx, byte ptr [rbp+0B50h+var_330+7]
0x140caeeeb  shl     ecx, 10h
0x140caeeee  movzx   edx, word ptr [rbp+0B50h+var_330+5]
0x140caeef5  or      edx, ecx
0x140caeef7  shl     rdx, 20h
0x140caeefb  mov     r12d, dword ptr [rbp+0B50h+var_330+1]
0x140caef02  or      r12, rdx
0x140caef05  movzx   r14d, byte ptr [rbp+0B50h+var_330]
0x140caef0d  mov     r15, [rbp+0B50h+var_328]
0x140caef14  mov     rbx, [rbp+0B50h+var_320]
0x140caef1b  mov     rsi, qword ptr [rbp+0B50h+var_318]
0x140caef22  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140caef26  jz      loc_140CAF059
0x140caef2c  mov     rcx, qword ptr [rbp+0B50h+var_318+8]
0x140caef33  mov     rdx, r12
0x140caef36  shr     rdx, 30h
0x140caef3a  mov     byte ptr [rbp+0B50h+var_330+7], dl
0x140caef40  mov     rdx, r12
0x140caef43  shr     rdx, 20h
0x140caef47  mov     word ptr [rbp+0B50h+var_330+5], dx
0x140caef4e  mov     dword ptr [rbp+0B50h+var_330+1], r12d
0x140caef55  mov     [rbp+0B50h+var_328], r15
0x140caef5c  mov     [rbp+0B50h+var_320], rbx
0x140caef63  mov     qword ptr [rbp+0B50h+var_318], rsi
0x140caef6a  mov     [rbp+0B50h+var_338], rax
0x140caef71  mov     byte ptr [rbp+0B50h+var_330], r14b
0x140caef78  mov     qword ptr [rbp+0B50h+var_318+8], rcx
0x140caef7f  mov     [rbp+0B50h+var_8A0], 0
0x140caef8a  mov     [rbp+0B50h+var_898], 1
0x140caef95  mov     [rbp+0B50h+var_890], 0
0x140caefa0  mov     [rbp+0B50h+var_B00], 60000020h
0x140caefa8  lea     rax, [rbp+0B50h+var_8A0]
0x140caefaf  mov     qword ptr [rbp+0B50h+var_B10], rax
0x140caefb3  lea     rax, off_1417C41C0
0x140caefba  mov     qword ptr [rbp+0B50h+var_B10+8], rax
0x140caefbe  lea     rcx, [rbp+0B50h+var_338]
0x140caefc5  lea     rdx, [rbp+0B50h+var_B10]
0x140caefc9  call    sub_141230630
0x140caefce  nop
0x140caefcf  test    al, al
0x140caefd1  jnz     loc_140CAF254
0x140caefd7  mov     r15, [rbp+0B50h+var_8A0]
0x140caefde  mov     rbx, [rbp+0B50h+var_898]
0x140caefe5  mov     rsi, [rbp+0B50h+var_890]
0x140caefec  lea     rcx, [rbp+0B50h+var_338]
0x140caeff3  call    sub_140BF0F60
0x140caeff8  nop
0x140caeff9  mov     dil, 1
0x140caeffc  mov     r14b, 3
0x140caefff  jmp     short loc_140CAF05B
0x140caf001  jz      loc_140CAF223
0x140caf007  call    nullsub_1
0x140caf00c  mov     edi, 1
0x140caf011  mov     edx, 1
0x140caf016  mov     rcx, rsi
0x140caf019  call    sub_140001650
0x140caf01e  test    rax, rax
0x140caf021  jz      loc_140CAEE67
0x140caf027  mov     rbx, rax
0x140caf02a  mov     rcx, rax
0x140caf02d  mov     rdx, r12
0x140caf030  mov     r8, rsi
0x140caf033  call    sub_141684120
0x140caf038  test    r14, r14
0x140caf03b  jz      short loc_140CAF04E
0x140caf03d  mov     r8d, 1
0x140caf043  mov     rcx, r12
0x140caf046  mov     rdx, r14
0x140caf049  call    sub_140001660
0x140caf04e  mov     dil, 1
0x140caf051  mov     r14b, 3
0x140caf054  mov     r15, rsi
0x140caf057  jmp     short loc_140CAF05B
0x140caf059  xor     edi, edi
0x140caf05b  mov     rax, [rbp+0B50h+var_90]
0x140caf062  mov     byte ptr [rax], 1
0x140caf065  mov     rcx, [rbp+0B50h+var_88]
0x140caf06c  call    sub_140BF0DE0
0x140caf071  nop
0x140caf072  mov     r13, [rbp+0B50h+var_68]
0x140caf079  cmp     qword ptr [r13+0BF0h], 0FFFFFFFFFFFFFFFFh
0x140caf081  jz      loc_140CAF119
0x140caf087  lea     rax, [r13+0BF8h]
0x140caf08e  mov     [rbp+0B50h+var_90], rax
0x140caf095  mov     rcx, [r13+0BF8h]
0x140caf09c  mov     rax, [r13+0C00h]
0x140caf0a3  mov     [rbp+0B50h+var_80], rax
0x140caf0aa  mov     [rbp+0B50h+var_78], 0
0x140caf0b5  mov     [rbp+0B50h+var_70], rcx
0x140caf0bc  nop     dword ptr [rax+00h]
0x140caf0c0  mov     rax, [rbp+0B50h+var_78]
0x140caf0c7  cmp     [rbp+0B50h+var_80], rax
0x140caf0ce  jz      short loc_140CAF0E9
0x140caf0d0  inc     rax
0x140caf0d3  mov     [rbp+0B50h+var_78], rax
0x140caf0da  lea     r13, [rcx+60h]
0x140caf0de  call    sub_1402C7520
0x140caf0e3  nop
0x140caf0e4  mov     rcx, r13
0x140caf0e7  jmp     short loc_140CAF0C0
0x140caf0e9  mov     r13, [rbp+0B50h+var_68]
0x140caf0f0  mov     rax, [r13+0BF0h]
0x140caf0f7  test    rax, rax
0x140caf0fa  jz      short loc_140CAF119
0x140caf0fc  mov     rcx, [rbp+0B50h+var_90]
0x140caf103  mov     rcx, [rcx]
0x140caf106  shl     rax, 5
0x140caf10a  lea     rdx, [rax+rax*2]
0x140caf10e  mov     r8d, 8
0x140caf114  call    sub_140001660
0x140caf119  mov     byte ptr [r13+1240h], 1
0x140caf121  mov     rcx, [rbp+0B50h+var_88]
0x140caf128  call    sub_140BE3320
0x140caf12d  nop
0x140caf12e  mov     [rbp+0B50h+var_137], r12d
0x140caf135  mov     rax, r12
0x140caf138  shr     rax, 30h
0x140caf13c  mov     [rbp+0B50h+var_131], al
0x140caf142  shr     r12, 20h
0x140caf146  mov     [rbp+0B50h+var_133], r12w
0x140caf14e  mov     [rbp+0B50h+var_130], r15
0x140caf155  mov     [rbp+0B50h+var_128], rbx
0x140caf15c  mov     [rbp+0B50h+var_120], rsi
0x140caf163  movzx   eax, dil
0x140caf167  mov     [rbp+0B50h+var_138], r14b
0x140caf16e  mov     [rbp+0B50h+var_140], rax
0x140caf175  mov     rdi, [rbp+0B50h+var_68]
0x140caf17c  mov     byte ptr [rdi+1253h], 0
0x140caf183  lea     rsi, [rbp+0B50h+var_338]
0x140caf18a  mov     r8d, 168h
0x140caf190  mov     rcx, rsi
0x140caf193  mov     rdx, rdi
0x140caf196  call    sub_141684120
0x140caf19b  mov     byte ptr [rdi+1252h], 0
0x140caf1a2  mov     rdx, [rdi+180h]
0x140caf1a9  mov     byte ptr [rdi+1251h], 0
0x140caf1b0  mov     rax, [rdi+178h]
0x140caf1b7  mov     [rbp+0B50h+var_510], rax
0x140caf1be  movups  xmm0, xmmword ptr [rdi+168h]
0x140caf1c5  movaps  [rbp+0B50h+var_520], xmm0
0x140caf1cc  mov     eax, [rdi+1248h]
0x140caf1d2  mov     ecx, [rdi+124Ch]
0x140caf1d8  mov     [rsp+0BD0h+var_BA8], ecx
0x140caf1dc  mov     dword ptr [rsp+0BD0h+var_BB0], eax
0x140caf1e0  lea     r8, [rbp+0B50h+var_140]
0x140caf1e7  lea     r9, [rbp+0B50h+var_520]
0x140caf1ee  mov     rcx, rsi
0x140caf1f1  call    sub_14047E370
0x140caf1f6  nop
0x140caf1f7  mov     cl, 1
0x140caf1f9  xor     eax, eax
0x140caf1fb  mov     rdx, [rbp+0B50h+var_68]
0x140caf202  mov     [rdx+1250h], cl
0x140caf208  movaps  xmm6, [rbp+0B50h+var_50]
0x140caf20f  add     rsp, 0B98h
0x140caf216  pop     rbx
0x140caf217  pop     rdi
0x140caf218  pop     rsi
0x140caf219  pop     r12
0x140caf21b  pop     r13
0x140caf21d  pop     r14
0x140caf21f  pop     r15
0x140caf221  pop     rbp
0x140caf222  retn
0x140caf223  mov     ebx, 1
0x140caf228  test    r14, r14
0x140caf22b  jnz     loc_140CAF03D
0x140caf231  jmp     loc_140CAF04E
0x140caf236  mov     [rbp+0B50h+var_59], 1
0x140caf23d  mov     rcx, cs:off_141EC8710
0x140caf244  mov     rsi, rdx
0x140caf247  call    sub_1416984A3
0x140caf24c  mov     rdx, rsi
0x140caf24f  jmp     loc_140CAEB46
0x140caf254  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140caf25b  mov     [rsp+0BD0h+var_BB0], rax
0x140caf260  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140caf267  lea     r9, unk_1417BC180
0x140caf26e  lea     r8, [rbp+0B50h+var_C1]
0x140caf275  mov     edx, 37h ; '7'
0x140caf27a  call    sub_1416C3060
0x140caf27f  align 20h
0x140caf280  jmp     loc_140CAF39E
0x140caf285  lea     rcx, off_1417B7C00; jumptable 0000000140CAE55F case 2
0x140caf28c  call    sub_1416C3420
0x140caf291  ud2
0x140caf293  lea     rcx, off_1417B7C00; jumptable 0000000140CAE55F case 1
0x140caf29a  call    sub_1416C3400
0x140caf29f  ud2
0x140caf2a1  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAE5A5 case 2
0x140caf2a8  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140caf2af  call    sub_1416C3420
0x140caf2b4  db 90h
0x140caf2b5  jmp     loc_140CAF39E
0x140caf2ba  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAE5A5 case 1
0x140caf2c1  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140caf2c8  call    sub_1416C3400
0x140caf2cd  align 2
0x140caf2ce  jmp     loc_140CAF39E
0x140caf2d3  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CAE8BC case 2
0x140caf2da  mov     [rbp+0B50h+var_D0], r15
0x140caf2e1  mov     [rbp+0B50h+var_90], rbx
0x140caf2e8  mov     [rbp+0B50h+var_88], rsi
0x140caf2ef  lea     rcx, off_1417BB378; "src\\commands\\accounts.rs"
0x140caf2f6  call    sub_1416C3420
0x140caf2fb  align 4
0x140caf2fc  jmp     loc_140CAF39E
0x140caf301  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CAE8BC case 1
0x140caf308  mov     [rbp+0B50h+var_D0], r15
0x140caf30f  mov     [rbp+0B50h+var_90], rbx
0x140caf316  mov     [rbp+0B50h+var_88], rsi
0x140caf31d  lea     rcx, off_1417BB378; "src\\commands\\accounts.rs"
0x140caf324  call    sub_1416C3400
0x140caf329  align 2
0x140caf32a  jmp     short loc_140CAF39E
0x140caf32c  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAE89D case 2
0x140caf333  mov     [rbp+0B50h+var_E8], rbx
0x140caf33a  mov     [rbp+0B50h+var_F0], r15
0x140caf341  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140caf348  call    sub_1416C3420
0x140caf34d  align 2
0x140caf34e  jmp     short loc_140CAF39E
0x140caf350  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAE89D case 1
0x140caf357  mov     [rbp+0B50h+var_E8], rbx
0x140caf35e  mov     [rbp+0B50h+var_F0], r15
0x140caf365  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140caf36c  call    sub_1416C3400
0x140caf371  align 2
0x140caf372  jmp     short loc_140CAF39E
0x140caf374  mov     [rbp+0B50h+var_E0], rdx; jumptable 0000000140CAEB19 case 2
0x140caf37b  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140caf382  call    sub_1416C3420
0x140caf387  align 8
0x140caf388  jmp     short loc_140CAF39E
0x140caf38a  mov     [rbp+0B50h+var_E0], rdx; jumptable 0000000140CAEB19 case 1
0x140caf391  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140caf398  call    sub_1416C3400
0x140caf39d  align 2
0x140caf39e  ud2