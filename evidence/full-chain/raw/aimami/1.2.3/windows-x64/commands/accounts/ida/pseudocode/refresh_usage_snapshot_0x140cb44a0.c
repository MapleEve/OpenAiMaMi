// module: codexmate_lib/commands/accounts
// addr: 0x140cb44a0
// name: refresh_usage_snapshot
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CB540B for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cb44a0  push    rbp
0x140cb44a1  push    r15
0x140cb44a3  push    r14
0x140cb44a5  push    r13
0x140cb44a7  push    r12
0x140cb44a9  push    rsi
0x140cb44aa  push    rdi
0x140cb44ab  push    rbx
0x140cb44ac  mov     eax, 2198h
0x140cb44b1  call    __alloca_probe
0x140cb44b6  sub     rsp, rax
0x140cb44b9  lea     rbp, [rsp+80h]
0x140cb44c1  mov     [rbp+2150h+var_40], 0FFFFFFFFFFFFFFFEh
0x140cb44cc  mov     rdi, rdx
0x140cb44cf  mov     r13, rcx
0x140cb44d2  movzx   eax, byte ptr [rcx+1520h]
0x140cb44d9  lea     rcx, jpt_140CB44EE
0x140cb44e0  movsxd  rax, ds:(jpt_140CB44EE - 1417C6384h)[rcx+rax*4]; switch 4 cases
0x140cb44e4  add     rax, rcx
0x140cb44e7  mov     [rbp+2150h+var_50], r13
0x140cb44ee  jmp     rax; switch jump
0x140cb44f0  mov     word ptr [r13+1521h], 101h; jumptable 0000000140CB44EE case 0
0x140cb44fa  mov     byte ptr [r13+1523h], 1
0x140cb4502  lea     rdx, [r13+188h]
0x140cb4509  lea     rsi, [r13+0B50h]
0x140cb4510  mov     r8d, 9C8h
0x140cb4516  mov     rcx, rsi
0x140cb4519  call    sub_141684120
0x140cb451e  movzx   eax, byte ptr [r13+1510h]
0x140cb4526  lea     rcx, jpt_140CB4534
0x140cb452d  movsxd  rax, ds:(jpt_140CB4534 - 1417C6394h)[rcx+rax*4]; switch 5 cases
0x140cb4531  add     rax, rcx
0x140cb4534  jmp     rax; switch jump
0x140cb4536  lea     rsi, [r13+0B50h]; jumptable 0000000140CB44EE case 3
0x140cb453d  movzx   eax, byte ptr [r13+1510h]
0x140cb4545  lea     rcx, jpt_140CB4534
0x140cb454c  movsxd  rax, ds:(jpt_140CB4534 - 1417C6394h)[rcx+rax*4]; switch 4 cases
0x140cb4550  add     rax, rcx
0x140cb4553  jmp     rax; switch jump
0x140cb4555  add     r13, 0D58h; jumptable 0000000140CB4534 case 0
0x140cb455c  mov     [rbp+2150h+var_940], 0
0x140cb4567  lea     rax, aRefreshUsageSn; "refresh_usage_snapshot"
0x140cb456e  mov     qword ptr [rbp+2150h+var_970], rax
0x140cb4575  mov     qword ptr [rbp+2150h+var_970+8], 16h
0x140cb4580  lea     rax, aApp_2; "app"
0x140cb4587  mov     [rbp+2150h+var_960], rax
0x140cb458e  mov     [rbp+2150h+var_958], 3
0x140cb4599  mov     [rbp+2150h+var_70], rsi
0x140cb45a0  mov     [rbp+2150h+var_950], rsi
0x140cb45a7  mov     [rbp+2150h+var_948], r13
0x140cb45ae  lea     rcx, [rbp+2150h+var_550]
0x140cb45b5  lea     rdx, [rbp+2150h+var_970]
0x140cb45bc  call    sub_1401C3650
0x140cb45c1  nop
0x140cb45c2  mov     rax, [rbp+2150h+var_550]
0x140cb45c9  movzx   ecx, byte ptr [rbp+2150h+var_548+7]
0x140cb45d0  shl     ecx, 10h
0x140cb45d3  movzx   edx, word ptr [rbp+2150h+var_548+5]
0x140cb45da  or      edx, ecx
0x140cb45dc  shl     rdx, 20h
0x140cb45e0  mov     r15d, dword ptr [rbp+2150h+var_548+1]
0x140cb45e7  or      r15, rdx
0x140cb45ea  movzx   r12d, byte ptr [rbp+2150h+var_548]
0x140cb45f2  mov     r14, [rbp+2150h+var_540]
0x140cb45f9  mov     rbx, [rbp+2150h+var_538]
0x140cb4600  mov     rsi, qword ptr [rbp+2150h+var_530]
0x140cb4607  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb460b  jz      loc_140CB4DC4
0x140cb4611  movups  xmm0, [rbp+2150h+var_4C8]
0x140cb4618  movaps  [rbp+2150h+var_170], xmm0
0x140cb461f  movups  xmm0, [rbp+2150h+var_4D8]
0x140cb4626  movaps  [rbp+2150h+var_180], xmm0
0x140cb462d  movups  xmm0, [rbp+2150h+var_4E8]
0x140cb4634  movaps  [rbp+2150h+var_190], xmm0
0x140cb463b  movups  xmm0, [rbp+2150h+var_530+8]
0x140cb4642  movups  xmm1, [rbp+2150h+var_518]
0x140cb4649  movups  xmm2, [rbp+2150h+var_508]
0x140cb4650  movups  xmm3, [rbp+2150h+var_4F8]
0x140cb4657  movaps  [rbp+2150h+var_1A0], xmm3
0x140cb465e  movaps  [rbp+2150h+var_1B0], xmm2
0x140cb4665  movaps  [rbp+2150h+var_1C0], xmm1
0x140cb466c  movaps  [rbp+2150h+var_1D0], xmm0
0x140cb4673  mov     r13, [rbp+2150h+var_50]
0x140cb467a  lea     rdx, [r13+0D70h]
0x140cb4681  mov     [r13+0D70h], rax
0x140cb4688  mov     [r13+0D78h], r12b
0x140cb468f  mov     rax, r15
0x140cb4692  shr     rax, 30h
0x140cb4696  mov     [r13+0D7Fh], al
0x140cb469d  mov     rax, r15
0x140cb46a0  shr     rax, 20h
0x140cb46a4  mov     [r13+0D7Dh], ax
0x140cb46ac  mov     [r13+0D79h], r15d
0x140cb46b3  mov     [r13+0D80h], r14
0x140cb46ba  mov     [r13+0D88h], rbx
0x140cb46c1  mov     [r13+0D90h], rsi
0x140cb46c8  movaps  xmm0, [rbp+2150h+var_1D0]
0x140cb46cf  movaps  xmm1, [rbp+2150h+var_1C0]
0x140cb46d6  movaps  xmm2, [rbp+2150h+var_1B0]
0x140cb46dd  movaps  xmm3, [rbp+2150h+var_1A0]
0x140cb46e4  movups  xmmword ptr [r13+0D98h], xmm0
0x140cb46ec  movups  xmmword ptr [r13+0DA8h], xmm1
0x140cb46f4  movups  xmmword ptr [r13+0DB8h], xmm2
0x140cb46fc  movups  xmmword ptr [r13+0DC8h], xmm3
0x140cb4704  movaps  xmm0, [rbp+2150h+var_190]
0x140cb470b  movups  xmmword ptr [r13+0DD8h], xmm0
0x140cb4713  movaps  xmm0, [rbp+2150h+var_180]
0x140cb471a  movups  xmmword ptr [r13+0DE8h], xmm0
0x140cb4722  movaps  xmm0, [rbp+2150h+var_170]
0x140cb4729  movups  xmmword ptr [r13+0DF8h], xmm0
0x140cb4731  mov     byte ptr [r13+0FF0h], 0
0x140cb4739  lea     rbx, [r13+0FF8h]
0x140cb4740  mov     r8d, 288h
0x140cb4746  mov     rcx, rbx
0x140cb4749  call    sub_141684120
0x140cb474e  lea     r14, [r13+1508h]
0x140cb4755  mov     byte ptr [r13+1508h], 0
0x140cb475d  mov     rsi, [rbp+2150h+var_70]
0x140cb4764  jmp     short loc_140CB478C; jumptable 0000000140CB478A case 0
0x140cb4766  lea     r14, [r13+1508h]; jumptable 0000000140CB4534 case 3
0x140cb476d  movzx   eax, byte ptr [r13+1508h]
0x140cb4775  lea     rbx, [r13+0FF8h]
0x140cb477c  lea     rcx, jpt_140CB478A; jumptable 0000000140CB4534 case 4
0x140cb4783  movsxd  rax, ds:(jpt_140CB478A - 1417C63A4h)[rcx+rax*4]; switch 4 cases
0x140cb4787  add     rax, rcx
0x140cb478a  jmp     rax; switch jump
0x140cb478c  lea     r15, [r13+1280h]; jumptable 0000000140CB478A case 0
0x140cb4793  mov     r8d, 288h
0x140cb4799  mov     rcx, r15
0x140cb479c  mov     rdx, rbx
0x140cb479f  call    sub_141684120
0x140cb47a4  movzx   eax, byte ptr [r13+1500h]
0x140cb47ac  lea     rcx, jpt_140CB47BA
0x140cb47b3  movsxd  rax, ds:(jpt_140CB47BA - 1417C63B4h)[rcx+rax*4]; switch 6 cases
0x140cb47b7  add     rax, rcx
0x140cb47ba  jmp     rax; switch jump
0x140cb47bc  lea     r15, [r13+1280h]; jumptable 0000000140CB478A case 3
0x140cb47c3  movzx   eax, byte ptr [r13+1500h]
0x140cb47cb  lea     rcx, jpt_140CB47BA
0x140cb47d2  movsxd  rax, ds:(jpt_140CB47BA - 1417C63B4h)[rcx+rax*4]; switch 4 cases
0x140cb47d6  add     rax, rcx
0x140cb47d9  jmp     rax; switch jump
0x140cb47db  mov     [rbp+2150h+var_B0], r14; jumptable 0000000140CB47BA case 0
0x140cb47e2  mov     [rbp+2150h+var_B8], rbx
0x140cb47e9  mov     [rbp+2150h+var_70], rsi
0x140cb47f0  lea     r12, [r13+1318h]
0x140cb47f7  mov     r8d, 98h
0x140cb47fd  mov     rcx, r12
0x140cb4800  mov     [rbp+2150h+var_C0], r15
0x140cb4807  mov     rdx, r15
0x140cb480a  call    sub_141684120
0x140cb480f  lea     rbx, [r13+14F8h]
0x140cb4816  mov     byte ptr [r13+14F8h], 0
0x140cb481e  jmp     short loc_140CB4870
0x140cb4820  lea     rax, [r13+14F8h]; jumptable 0000000140CB47BA case 3
0x140cb4827  mov     [rbp+2150h+var_58], rax
0x140cb482e  movzx   eax, byte ptr [r13+14F8h]
0x140cb4836  lea     r12, [r13+1318h]
0x140cb483d  lea     rcx, jpt_140CB4867
0x140cb4844  movsxd  rax, ds:(jpt_140CB4867 - 1417C63C4h)[rcx+rax*4]; switch 4 cases
0x140cb4848  add     rax, rcx
0x140cb484b  mov     [rbp+2150h+var_70], rsi
0x140cb4852  mov     [rbp+2150h+var_B8], rbx
0x140cb4859  mov     [rbp+2150h+var_B0], r14; jumptable 0000000140CB47BA case 4
0x140cb4860  mov     [rbp+2150h+var_C0], r15
0x140cb4867  jmp     rax; switch jump
0x140cb4869  lea     rbx, [r13+14F8h]; jumptable 0000000140CB4867 case 0
0x140cb4870  mov     byte ptr [r13+14F9h], 0
0x140cb4878  lea     rsi, [r13+13B0h]
0x140cb487f  mov     r8d, 98h
0x140cb4885  mov     rcx, rsi
0x140cb4888  mov     rdx, r12
0x140cb488b  call    sub_141684120
0x140cb4890  mov     [rbp+2150h+var_58], rbx
0x140cb4897  mov     [rbp+2150h+var_E8], rbx
0x140cb489e  mov     [rbp+2150h+var_F0], r12
0x140cb48a5  lea     rcx, [rbp+2150h+var_550]
0x140cb48ac  mov     rdx, rsi
0x140cb48af  call    sub_1401C50B0
0x140cb48b4  nop
0x140cb48b5  mov     r15, [rbp+2150h+var_50]
0x140cb48bc  mov     rbx, [r15+1438h]
0x140cb48c3  lock inc qword ptr [rbx]
0x140cb48c7  jle     loc_140CB5485
0x140cb48cd  mov     r14, [r15+1440h]
0x140cb48d4  lock inc qword ptr [r14]
0x140cb48d8  mov     r13, [rbp+2150h+var_58]
0x140cb48df  jle     loc_140CB5485
0x140cb48e5  lea     rcx, [rbp+2150h+var_5E8]
0x140cb48ec  lea     rdx, [rbp+2150h+var_550]
0x140cb48f3  mov     r8d, 88h
0x140cb48f9  call    sub_141684120
0x140cb48fe  mov     [rbp+2150h+var_560], rbx
0x140cb4905  mov     [rbp+2150h+var_558], r14
0x140cb490c  mov     byte ptr [r15+14F9h], 1
0x140cb4914  mov     [rbp+2150h+var_D8], r13
0x140cb491b  mov     [rbp+2150h+var_E0], r12
0x140cb4922  mov     rcx, rsi
0x140cb4925  call    sub_1403EF390
0x140cb492a  nop
0x140cb492b  mov     ebx, eax
0x140cb492d  mov     [rbp+2150h+var_78], r12
0x140cb4934  mov     r14, [rbp+2150h+var_50]
0x140cb493b  mov     byte ptr [r14+14F9h], 0
0x140cb4943  lea     rsi, [r14+1448h]
0x140cb494a  lea     rdx, [rbp+2150h+var_5E8]
0x140cb4951  mov     r8d, 98h
0x140cb4957  mov     rcx, rsi
0x140cb495a  call    sub_141684120
0x140cb495f  mov     [r14+14E0h], bl
0x140cb4966  lea     rax, [r14+14F0h]
0x140cb496d  mov     [rbp+2150h+var_60], rax
0x140cb4974  mov     byte ptr [r14+14F0h], 0
0x140cb497c  lea     rcx, [rbp+2150h+var_A10]; jumptable 0000000140CB4DB6 case 0
0x140cb4983  mov     r8d, 0A0h
0x140cb4989  mov     [rbp+2150h+var_68], rsi
0x140cb4990  mov     rdx, rsi
0x140cb4993  call    sub_141684120
0x140cb4998  mov     rdx, cs:off_141EC8710
0x140cb499f  mov     eax, [rdx+60h]
0x140cb49a2  test    eax, eax
0x140cb49a4  jnz     loc_140CB52CC
0x140cb49aa  cmp     dword ptr [rdx+10h], 2
0x140cb49ae  jnz     short loc_140CB49E2
0x140cb49b0  cmp     byte ptr [rdx], 0
0x140cb49b3  mov     eax, 1D8h
0x140cb49b8  mov     ecx, 2C0h
0x140cb49bd  cmovnz  rcx, rax
0x140cb49c1  add     rcx, [rdx+8]
0x140cb49c5  mov     [rbp+2150h+var_41], 0
0x140cb49cc  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb49d3  lea     r8, [rbp+2150h+var_A10]
0x140cb49da  call    sub_14089CAA0
0x140cb49df  nop
0x140cb49e0  jmp     short loc_140CB4A1A
0x140cb49e2  cmp     byte ptr [rdx+40h], 0
0x140cb49e6  mov     eax, 1D8h
0x140cb49eb  mov     ecx, 2C0h
0x140cb49f0  cmovnz  rcx, rax
0x140cb49f4  lea     rax, [rdx+40h]
0x140cb49f8  add     rcx, [rdx+48h]
0x140cb49fc  mov     [rbp+2150h+var_41], 0
0x140cb4a03  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb4a0a  lea     r8, [rbp+2150h+var_A10]
0x140cb4a11  mov     rdx, rax
0x140cb4a14  call    sub_14089CAA0
0x140cb4a19  nop
0x140cb4a1a  mov     r13, [rbp+2150h+var_50]
0x140cb4a21  mov     [r13+14E8h], rax
0x140cb4a28  lea     rdx, [r13+14E8h]
0x140cb4a2f  lea     rbx, [rbp+2150h+var_550]
0x140cb4a36  mov     rcx, rbx
0x140cb4a39  mov     [rbp+2150h+var_D0], rdx
0x140cb4a40  mov     r8, rdi
0x140cb4a43  call    sub_140AFFB00
0x140cb4a48  nop
0x140cb4a49  mov     r14, [rbp+2150h+var_550]
0x140cb4a50  cmp     r14, 0FFFFFFFFFFFFFFFDh
0x140cb4a54  jz      short loc_140CB4A8B
0x140cb4a56  cmp     r14d, 0FFFFFFFEh
0x140cb4a5a  jnz     short loc_140CB4ABE
0x140cb4a5c  mov     rax, [rbp+2150h+var_548]
0x140cb4a63  mov     [rbp+2150h+var_80], rax
0x140cb4a6a  mov     rax, [rbp+2150h+var_540]
0x140cb4a71  mov     [rbp+2150h+var_C8], rax
0x140cb4a78  mov     r15, 800000000000000Ch
0x140cb4a82  mov     rsi, [rbp+2150h+var_538]
0x140cb4a89  jmp     short loc_140CB4B01
0x140cb4a8b  mov     rdx, [rbp+2150h+var_50]
0x140cb4a92  mov     byte ptr [rdx+14F0h], 3
0x140cb4a99  mov     byte ptr [rdx+14F8h], 3
0x140cb4aa0  mov     byte ptr [rdx+1500h], 3
0x140cb4aa7  mov     byte ptr [rdx+1508h], 3
0x140cb4aae  mov     byte ptr [rdx+1510h], 3
0x140cb4ab5  mov     cl, 3
0x140cb4ab7  mov     al, 1
0x140cb4ab9  jmp     loc_140CB529F
0x140cb4abe  mov     r15, [rbp+2150h+var_548]
0x140cb4ac5  mov     rax, [rbp+2150h+var_540]
0x140cb4acc  mov     [rbp+2150h+var_80], rax
0x140cb4ad3  mov     rax, [rbp+2150h+var_538]
0x140cb4ada  mov     [rbp+2150h+var_C8], rax
0x140cb4ae1  mov     rsi, qword ptr [rbp+2150h+var_530]
0x140cb4ae8  lea     rdx, [rbp+2150h+var_530+8]
0x140cb4aef  lea     rcx, [rbp+2150h+var_1440]
0x140cb4af6  mov     r8d, 358h
0x140cb4afc  call    sub_141684120
0x140cb4b01  mov     r12, [rbp+2150h+var_78]
0x140cb4b08  mov     r13, [rbp+2150h+var_58]
0x140cb4b0f  mov     rdi, [rbp+2150h+var_D0]
0x140cb4b16  lea     rcx, [rbp+2150h+var_1798]
0x140cb4b1d  lea     rdx, [rbp+2150h+var_1440]
0x140cb4b24  mov     r8d, 358h
0x140cb4b2a  call    sub_141684120
0x140cb4b2f  mov     rdi, [rdi]
0x140cb4b32  mov     [rbp+2150h+var_88], r13
0x140cb4b39  mov     [rbp+2150h+var_90], r12
0x140cb4b40  mov     rax, [rbp+2150h+var_60]
0x140cb4b47  mov     [rbp+2150h+var_98], rax
0x140cb4b4e  mov     rax, [rbp+2150h+var_68]
0x140cb4b55  mov     [rbp+2150h+var_A0], rax
0x140cb4b5c  mov     rcx, rdi
0x140cb4b5f  call    sub_1412F2A80
0x140cb4b64  nop
0x140cb4b65  test    al, al
0x140cb4b67  jz      short loc_140CB4B9C
0x140cb4b69  mov     [rbp+2150h+var_88], r13
0x140cb4b70  mov     [rbp+2150h+var_90], r12
0x140cb4b77  mov     rax, [rbp+2150h+var_60]
0x140cb4b7e  mov     [rbp+2150h+var_98], rax
0x140cb4b85  mov     rax, [rbp+2150h+var_68]
0x140cb4b8c  mov     [rbp+2150h+var_A0], rax
0x140cb4b93  mov     rcx, rdi
0x140cb4b96  call    sub_1412E7580
0x140cb4b9b  nop
0x140cb4b9c  cmp     r14d, 0FFFFFFFEh
0x140cb4ba0  jnz     loc_140CB4C85
0x140cb4ba6  mov     [rbp+2150h+var_550], r15
0x140cb4bad  mov     rax, [rbp+2150h+var_80]
0x140cb4bb4  mov     [rbp+2150h+var_548], rax
0x140cb4bbb  mov     rax, [rbp+2150h+var_C8]
0x140cb4bc2  mov     [rbp+2150h+var_540], rax
0x140cb4bc9  mov     [rbp+2150h+var_538], rsi
0x140cb4bd0  movups  xmm0, [rbp+2150h+var_1798]
0x140cb4bd7  movups  [rbp+2150h+var_530], xmm0
0x140cb4bde  mov     [rbp+2150h+var_160], rbx
0x140cb4be5  lea     rax, sub_141230630
0x140cb4bec  mov     [rbp+2150h+var_158], rax
0x140cb4bf3  lea     rdx, unk_1417B8CB0
0x140cb4bfa  lea     rcx, [rbp+2150h+var_1440]
0x140cb4c01  lea     r8, [rbp+2150h+var_160]
0x140cb4c08  call    sub_14149C0F0
0x140cb4c0d  nop
0x140cb4c0e  mov     r13, [rbp+2150h+var_58]
0x140cb4c15  mov     [rbp+2150h+var_88], r13
0x140cb4c1c  mov     r12, [rbp+2150h+var_78]
0x140cb4c23  mov     [rbp+2150h+var_90], r12
0x140cb4c2a  mov     rax, [rbp+2150h+var_60]
0x140cb4c31  mov     [rbp+2150h+var_98], rax
0x140cb4c38  mov     rax, [rbp+2150h+var_68]
0x140cb4c3f  mov     [rbp+2150h+var_A0], rax
0x140cb4c46  lea     rcx, [rbp+2150h+var_550]
0x140cb4c4d  call    sub_140BF0F60
0x140cb4c52  nop
0x140cb4c53  mov     r15, [rbp+2150h+var_1440]
0x140cb4c5a  mov     rax, [rbp+2150h+var_1438]
0x140cb4c61  mov     [rbp+2150h+var_80], rax
0x140cb4c68  mov     rsi, [rbp+2150h+var_1430]
0x140cb4c6f  mov     rax, [rbp+2150h+var_60]
0x140cb4c76  mov     byte ptr [rax], 1
0x140cb4c79  mov     rbx, [rbp+2150h+var_50]
0x140cb4c80  jmp     loc_140CB4E77
0x140cb4c85  lea     rcx, [rbp+2150h+var_D68]
0x140cb4c8c  lea     rdx, [rbp+2150h+var_1798]
0x140cb4c93  mov     r8d, 358h
0x140cb4c99  call    sub_141684120
0x140cb4c9e  mov     rax, [rbp+2150h+var_60]
0x140cb4ca5  mov     byte ptr [rax], 1
0x140cb4ca8  cmp     r14d, 0FFFFFFFFh
0x140cb4cac  mov     rbx, [rbp+2150h+var_50]
0x140cb4cb3  jz      loc_140CB4E70
0x140cb4cb9  mov     r13, rsi
0x140cb4cbc  mov     [rbp+2150h+var_950], rsi
0x140cb4cc3  lea     rcx, [rbp+2150h+var_948]
0x140cb4cca  lea     rdx, [rbp+2150h+var_D68]
0x140cb4cd1  mov     r8d, 358h
0x140cb4cd7  call    sub_141684120
0x140cb4cdc  mov     qword ptr [rbp+2150h+var_970+8], r15
0x140cb4ce3  mov     rax, [rbp+2150h+var_80]
0x140cb4cea  mov     [rbp+2150h+var_960], rax
0x140cb4cf1  mov     rsi, [rbp+2150h+var_C8]
0x140cb4cf8  mov     [rbp+2150h+var_958], rsi
0x140cb4cff  mov     qword ptr [rbp+2150h+var_970], r14
0x140cb4d06  lea     rdi, [rbx+13B0h]
0x140cb4d0d  mov     [rsp+21D0h+var_21B0], 0
0x140cb4d16  lea     r8, aUsage; "usage"
0x140cb4d1d  lea     rdx, [rbp+2150h+var_970]
0x140cb4d24  mov     r9d, 5
0x140cb4d2a  mov     rcx, rdi
0x140cb4d2d  call    sub_1403EE240
0x140cb4d32  nop
0x140cb4d33  lea     rcx, [rbp+2150h+var_1E48]
0x140cb4d3a  lea     rdx, [rbp+2150h+var_D68]
0x140cb4d41  mov     r8d, 358h
0x140cb4d47  call    sub_141684120
0x140cb4d4c  mov     rax, [rbp+2150h+var_50]
0x140cb4d53  mov     byte ptr [rax+14F9h], 0
0x140cb4d5a  mov     rax, [rbp+2150h+var_58]
0x140cb4d61  mov     [rbp+2150h+var_F8], rax
0x140cb4d68  mov     rax, [rbp+2150h+var_78]
0x140cb4d6f  mov     [rbp+2150h+var_100], rax
0x140cb4d76  mov     rcx, rdi
0x140cb4d79  call    sub_140014150
0x140cb4d7e  nop
0x140cb4d7f  jmp     loc_140CB4EA0
0x140cb4d84  lea     rax, [r13+14F0h]; jumptable 0000000140CB4867 case 3
0x140cb4d8b  mov     [rbp+2150h+var_60], rax
0x140cb4d92  movzx   eax, byte ptr [r13+14F0h]
0x140cb4d9a  lea     rsi, [r13+1448h]
0x140cb4da1  lea     rcx, jpt_140CB4DB6
0x140cb4da8  movsxd  rax, ds:(jpt_140CB4DB6 - 1417C63D4h)[rcx+rax*4]; switch 4 cases
0x140cb4dac  add     rax, rcx
0x140cb4daf  mov     [rbp+2150h+var_78], r12
0x140cb4db6  jmp     rax; switch jump
0x140cb4db8  mov     [rbp+2150h+var_68], rsi; jumptable 0000000140CB4DB6 case 3
0x140cb4dbf  jmp     loc_140CB4A28
0x140cb4dc4  mov     [rbp+2150h+var_68], r13
0x140cb4dcb  mov     rcx, [rbp+2150h+var_70]
0x140cb4dd2  call    sub_140BF0DE0
0x140cb4dd7  nop
0x140cb4dd8  mov     dil, 1
0x140cb4ddb  mov     rax, [rbp+2150h+var_68]
0x140cb4de2  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cb4de6  jz      short loc_140CB4E64
0x140cb4de8  mov     rax, [rbp+2150h+var_50]
0x140cb4def  mov     rcx, [rax+0D60h]
0x140cb4df6  mov     rax, [rax+0D68h]
0x140cb4dfd  mov     [rbp+2150h+var_60], rax
0x140cb4e04  mov     [rbp+2150h+var_58], 0
0x140cb4e0f  mov     [rbp+2150h+var_78], rcx
0x140cb4e16  nop     word ptr [rax+rax+00000000h]
0x140cb4e20  mov     rax, [rbp+2150h+var_58]
0x140cb4e27  cmp     [rbp+2150h+var_60], rax
0x140cb4e2e  jz      short loc_140CB4E49
0x140cb4e30  inc     rax
0x140cb4e33  mov     [rbp+2150h+var_58], rax
0x140cb4e3a  lea     r13, [rcx+60h]
0x140cb4e3e  call    sub_1402C7520
0x140cb4e43  nop
0x140cb4e44  mov     rcx, r13
0x140cb4e47  jmp     short loc_140CB4E20
0x140cb4e49  mov     rax, [rbp+2150h+var_68]
0x140cb4e50  mov     rax, [rax]
0x140cb4e53  test    rax, rax
0x140cb4e56  jz      short loc_140CB4E64
0x140cb4e58  mov     r13, [rbp+2150h+var_50]
0x140cb4e5f  jmp     loc_140CB519C
0x140cb4e64  mov     r13, [rbp+2150h+var_50]
0x140cb4e6b  jmp     loc_140CB51B6
0x140cb4e70  mov     rsi, [rbp+2150h+var_C8]
0x140cb4e77  mov     byte ptr [rbx+14F9h], 0
0x140cb4e7e  lea     rcx, [rbx+13B0h]
0x140cb4e85  mov     [rbp+2150h+var_F8], r13
0x140cb4e8c  mov     [rbp+2150h+var_100], r12
0x140cb4e93  call    sub_140014150
0x140cb4e98  nop
0x140cb4e99  mov     r14, 0FFFFFFFFFFFFFFFFh
0x140cb4ea0  lea     rdi, [rbp+2150h+var_21A0]
0x140cb4ea4  lea     rdx, [rbp+2150h+var_1E48]
0x140cb4eab  mov     r8d, 358h
0x140cb4eb1  mov     rcx, rdi
0x140cb4eb4  call    sub_141684120
0x140cb4eb9  mov     rax, [rbp+2150h+var_50]
0x140cb4ec0  mov     byte ptr [rax+14F8h], 1
0x140cb4ec7  mov     byte ptr [rax+1500h], 1
0x140cb4ece  lea     rcx, [rbp+2150h+var_1AF0]
0x140cb4ed5  mov     r8d, 358h
0x140cb4edb  mov     rdx, rdi
0x140cb4ede  call    sub_141684120
0x140cb4ee3  cmp     r14d, 0FFFFFFFFh
0x140cb4ee7  jz      loc_140CB5074
0x140cb4eed  lea     rcx, [rbp+2150h+var_10C0]
0x140cb4ef4  lea     rdx, [rbp+2150h+var_1AF0]
0x140cb4efb  mov     r8d, 358h
0x140cb4f01  call    sub_141684120
0x140cb4f06  mov     [rbp+2150h+var_10E8], r14
0x140cb4f0d  mov     [rbp+2150h+var_10E0], r15
0x140cb4f14  mov     rax, [rbp+2150h+var_80]
0x140cb4f1b  mov     [rbp+2150h+var_10D8], rax
0x140cb4f22  mov     [rbp+2150h+var_10D0], rsi
0x140cb4f29  mov     [rbp+2150h+var_10C8], r13
0x140cb4f30  lea     rcx, [rbp+2150h+var_550]
0x140cb4f37  lea     rdx, [rbp+2150h+var_10E8]
0x140cb4f3e  call    sub_140B064D0
0x140cb4f43  nop
0x140cb4f44  mov     rax, [rbp+2150h+var_550]
0x140cb4f4b  movzx   ecx, byte ptr [rbp+2150h+var_548+7]
0x140cb4f52  shl     ecx, 10h
0x140cb4f55  movzx   edx, word ptr [rbp+2150h+var_548+5]
0x140cb4f5c  or      edx, ecx
0x140cb4f5e  shl     rdx, 20h
0x140cb4f62  mov     r15d, dword ptr [rbp+2150h+var_548+1]
0x140cb4f69  or      r15, rdx
0x140cb4f6c  movzx   r12d, byte ptr [rbp+2150h+var_548]
0x140cb4f74  mov     r14, [rbp+2150h+var_540]
0x140cb4f7b  mov     rbx, [rbp+2150h+var_538]
0x140cb4f82  mov     rsi, qword ptr [rbp+2150h+var_530]
0x140cb4f89  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb4f8d  jz      loc_140CB5093
0x140cb4f93  mov     rcx, qword ptr [rbp+2150h+var_530+8]
0x140cb4f9a  mov     rdx, r15
0x140cb4f9d  shr     rdx, 30h
0x140cb4fa1  mov     byte ptr [rbp+2150h+var_548+7], dl
0x140cb4fa7  mov     rdx, r15
0x140cb4faa  shr     rdx, 20h
0x140cb4fae  mov     word ptr [rbp+2150h+var_548+5], dx
0x140cb4fb5  mov     dword ptr [rbp+2150h+var_548+1], r15d
0x140cb4fbc  mov     [rbp+2150h+var_540], r14
0x140cb4fc3  mov     [rbp+2150h+var_538], rbx
0x140cb4fca  mov     qword ptr [rbp+2150h+var_530], rsi
0x140cb4fd1  mov     [rbp+2150h+var_550], rax
0x140cb4fd8  mov     byte ptr [rbp+2150h+var_548], r12b
0x140cb4fdf  mov     qword ptr [rbp+2150h+var_530+8], rcx
0x140cb4fe6  mov     [rbp+2150h+var_D68], 0
0x140cb4ff1  mov     [rbp+2150h+var_D60], 1
0x140cb4ffc  mov     [rbp+2150h+var_D58], 0
0x140cb5007  mov     [rbp+2150h+var_960], 60000020h
0x140cb5012  lea     rax, [rbp+2150h+var_D68]
0x140cb5019  mov     qword ptr [rbp+2150h+var_970], rax
0x140cb5020  lea     rax, off_1417C41C0
0x140cb5027  mov     qword ptr [rbp+2150h+var_970+8], rax
0x140cb502e  lea     rcx, [rbp+2150h+var_550]
0x140cb5035  lea     rdx, [rbp+2150h+var_970]
0x140cb503c  call    sub_141230630
0x140cb5041  nop
0x140cb5042  test    al, al
0x140cb5044  jnz     loc_140CB52EA
0x140cb504a  mov     r14, [rbp+2150h+var_D68]
0x140cb5051  mov     rbx, [rbp+2150h+var_D60]
0x140cb5058  mov     rsi, [rbp+2150h+var_D58]
0x140cb505f  lea     rcx, [rbp+2150h+var_550]
0x140cb5066  call    sub_140BF0F60
0x140cb506b  nop
0x140cb506c  mov     dil, 1
0x140cb506f  mov     r12b, 3
0x140cb5072  jmp     short loc_140CB50F1
0x140cb5074  test    rsi, rsi
0x140cb5077  jns     short loc_140CB5097
0x140cb5079  xor     edi, edi
0x140cb507b  mov     [rbp+2150h+var_58], r15
0x140cb5082  mov     rcx, rdi
0x140cb5085  mov     rdx, rsi
0x140cb5088  call    sub_1416C2D4B
0x140cb508d  align 2
0x140cb508e  jmp     loc_140CB5485
0x140cb5093  xor     edi, edi
0x140cb5095  jmp     short loc_140CB50F1
0x140cb5097  jz      loc_140CB52B9
0x140cb509d  call    nullsub_1
0x140cb50a2  mov     edi, 1
0x140cb50a7  mov     edx, 1
0x140cb50ac  mov     rcx, rsi
0x140cb50af  call    sub_140001650
0x140cb50b4  test    rax, rax
0x140cb50b7  jz      short loc_140CB507B
0x140cb50b9  mov     rbx, rax
0x140cb50bc  mov     rcx, rax
0x140cb50bf  mov     rdx, [rbp+2150h+var_80]
0x140cb50c6  mov     r8, rsi
0x140cb50c9  call    sub_141684120
0x140cb50ce  test    r15, r15
0x140cb50d1  jz      short loc_140CB50E8
0x140cb50d3  mov     r8d, 1
0x140cb50d9  mov     rcx, [rbp+2150h+var_80]
0x140cb50e0  mov     rdx, r15
0x140cb50e3  call    sub_140001660
0x140cb50e8  mov     dil, 1
0x140cb50eb  mov     r12b, 3
0x140cb50ee  mov     r14, rsi
0x140cb50f1  mov     rax, [rbp+2150h+var_B0]
0x140cb50f8  mov     byte ptr [rax], 1
0x140cb50fb  mov     rcx, [rbp+2150h+var_B8]
0x140cb5102  call    sub_140BC65B0
0x140cb5107  nop
0x140cb5108  mov     rcx, [rbp+2150h+var_70]
0x140cb510f  call    sub_140BF0DE0
0x140cb5114  nop
0x140cb5115  mov     r13, [rbp+2150h+var_50]
0x140cb511c  cmp     qword ptr [r13+0D58h], 0FFFFFFFFFFFFFFFFh
0x140cb5124  jz      loc_140CB51B6
0x140cb512a  mov     rcx, [r13+0D60h]
0x140cb5131  mov     rax, [r13+0D68h]
0x140cb5138  mov     [rbp+2150h+var_60], rax
0x140cb513f  mov     [rbp+2150h+var_58], 0
0x140cb514a  mov     [rbp+2150h+var_68], rcx
0x140cb5151  nop     word ptr [rax+rax+00000000h]
0x140cb5160  mov     rax, [rbp+2150h+var_58]
0x140cb5167  cmp     [rbp+2150h+var_60], rax
0x140cb516e  jz      short loc_140CB5189
0x140cb5170  inc     rax
0x140cb5173  mov     [rbp+2150h+var_58], rax
0x140cb517a  lea     r13, [rcx+60h]
0x140cb517e  call    sub_1402C7520
0x140cb5183  nop
0x140cb5184  mov     rcx, r13
0x140cb5187  jmp     short loc_140CB5160
0x140cb5189  mov     r13, [rbp+2150h+var_50]
0x140cb5190  mov     rax, [r13+0D58h]
0x140cb5197  test    rax, rax
0x140cb519a  jz      short loc_140CB51B6
0x140cb519c  mov     rcx, [r13+0D60h]
0x140cb51a3  shl     rax, 5
0x140cb51a7  lea     rdx, [rax+rax*2]
0x140cb51ab  mov     r8d, 8
0x140cb51b1  call    sub_140001660
0x140cb51b6  mov     byte ptr [r13+1510h], 1
0x140cb51be  mov     rcx, [rbp+2150h+var_70]
0x140cb51c5  call    sub_140BE3A20
0x140cb51ca  nop
0x140cb51cb  mov     [rbp+2150h+var_147], r15d
0x140cb51d2  mov     rax, r15
0x140cb51d5  shr     rax, 30h
0x140cb51d9  mov     [rbp+2150h+var_141], al
0x140cb51df  shr     r15, 20h
0x140cb51e3  mov     [rbp+2150h+var_143], r15w
0x140cb51eb  mov     [rbp+2150h+var_140], r14
0x140cb51f2  mov     [rbp+2150h+var_138], rbx
0x140cb51f9  mov     [rbp+2150h+var_130], rsi
0x140cb5200  movzx   eax, dil
0x140cb5204  mov     [rbp+2150h+var_148], r12b
0x140cb520b  mov     [rbp+2150h+var_150], rax
0x140cb5212  mov     rdi, [rbp+2150h+var_50]
0x140cb5219  mov     byte ptr [rdi+1523h], 0
0x140cb5220  lea     rsi, [rbp+2150h+var_550]
0x140cb5227  mov     r8d, 168h
0x140cb522d  mov     rcx, rsi
0x140cb5230  mov     rdx, rdi
0x140cb5233  call    sub_141684120
0x140cb5238  mov     byte ptr [rdi+1522h], 0
0x140cb523f  mov     rdx, [rdi+180h]
0x140cb5246  mov     byte ptr [rdi+1521h], 0
0x140cb524d  mov     rax, [rdi+178h]
0x140cb5254  mov     [rbp+2150h+var_960], rax
0x140cb525b  movups  xmm0, xmmword ptr [rdi+168h]
0x140cb5262  movaps  [rbp+2150h+var_970], xmm0
0x140cb5269  mov     eax, [rdi+1518h]
0x140cb526f  mov     ecx, [rdi+151Ch]
0x140cb5275  mov     [rsp+21D0h+var_21A8], ecx
0x140cb5279  mov     dword ptr [rsp+21D0h+var_21B0], eax
0x140cb527d  lea     r8, [rbp+2150h+var_150]
0x140cb5284  lea     r9, [rbp+2150h+var_970]
0x140cb528b  mov     rcx, rsi
0x140cb528e  call    sub_14047E370
0x140cb5293  nop
0x140cb5294  mov     cl, 1
0x140cb5296  xor     eax, eax
0x140cb5298  mov     rdx, [rbp+2150h+var_50]
0x140cb529f  mov     [rdx+1520h], cl
0x140cb52a5  add     rsp, 2198h
0x140cb52ac  pop     rbx
0x140cb52ad  pop     rdi
0x140cb52ae  pop     rsi
0x140cb52af  pop     r12
0x140cb52b1  pop     r13
0x140cb52b3  pop     r14
0x140cb52b5  pop     r15
0x140cb52b7  pop     rbp
0x140cb52b8  retn
0x140cb52b9  mov     ebx, 1
0x140cb52be  test    r15, r15
0x140cb52c1  jnz     loc_140CB50D3
0x140cb52c7  jmp     loc_140CB50E8
0x140cb52cc  mov     [rbp+2150h+var_41], 1
0x140cb52d3  mov     rcx, cs:off_141EC8710
0x140cb52da  mov     rsi, rdx
0x140cb52dd  call    sub_1416984A3
0x140cb52e2  mov     rdx, rsi
0x140cb52e5  jmp     loc_140CB49AA
0x140cb52ea  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140cb52f1  mov     [rsp+21D0h+var_21B0], rax
0x140cb52f6  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140cb52fd  lea     r9, unk_1417BC180
0x140cb5304  lea     r8, [rbp+2150h+var_A1]
0x140cb530b  mov     edx, 37h ; '7'
0x140cb5310  call    sub_1416C3060
0x140cb5315  align 2
0x140cb5316  jmp     loc_140CB5485
0x140cb531b  lea     rcx, off_1417B7C00; jumptable 0000000140CB44EE case 2
0x140cb5322  call    sub_1416C3420
0x140cb5327  ud2
0x140cb5329  lea     rcx, off_1417B7C00; jumptable 0000000140CB44EE case 1
0x140cb5330  call    sub_1416C3400
0x140cb5335  ud2
0x140cb5337  mov     [rbp+2150h+var_70], rsi; jumptable 0000000140CB4534 case 2
0x140cb533e  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb5345  call    sub_1416C3420
0x140cb534a  db 90h
0x140cb534b  jmp     loc_140CB5485
0x140cb5350  mov     [rbp+2150h+var_70], rsi; jumptable 0000000140CB4534 case 1
0x140cb5357  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb535e  call    sub_1416C3400
0x140cb5363  align 4
0x140cb5364  jmp     loc_140CB5485
0x140cb5369  mov     [rbp+2150h+var_C0], r15; jumptable 0000000140CB47BA case 2
0x140cb5370  mov     [rbp+2150h+var_B0], r14
0x140cb5377  mov     [rbp+2150h+var_B8], rbx
0x140cb537e  mov     [rbp+2150h+var_70], rsi
0x140cb5385  lea     rcx, off_1417BB340; "src\\commands\\accounts.rs"
0x140cb538c  call    sub_1416C3420
0x140cb5391  align 2
0x140cb5392  jmp     loc_140CB5485
0x140cb5397  mov     [rbp+2150h+var_C0], r15; jumptable 0000000140CB47BA case 1
0x140cb539e  mov     [rbp+2150h+var_B0], r14
0x140cb53a5  mov     [rbp+2150h+var_B8], rbx
0x140cb53ac  mov     [rbp+2150h+var_70], rsi
0x140cb53b3  lea     rcx, off_1417BB340; "src\\commands\\accounts.rs"
0x140cb53ba  call    sub_1416C3400
0x140cb53bf  align 20h
0x140cb53c0  jmp     loc_140CB5485
0x140cb53c5  mov     [rbp+2150h+var_70], rsi; jumptable 0000000140CB478A case 2
0x140cb53cc  mov     [rbp+2150h+var_128], rbx
0x140cb53d3  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb53da  call    sub_1416C3420
0x140cb53df  align 20h
0x140cb53e0  jmp     loc_140CB5485
0x140cb53e5  mov     [rbp+2150h+var_70], rsi; jumptable 0000000140CB478A case 1
0x140cb53ec  mov     [rbp+2150h+var_128], rbx
0x140cb53f3  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb53fa  call    sub_1416C3400
0x140cb53ff  align 20h
0x140cb5400  jmp     loc_140CB5485
0x140cb5405  mov     [rbp+2150h+var_120], r12; jumptable 0000000140CB4867 case 2
0x140cb540c  lea     rcx, off_1417BB3A8; "src\\commands\\accounts.rs"
0x140cb5413  call    sub_1416C3420
0x140cb5418  db 90h
0x140cb5419  jmp     short loc_140CB5485
0x140cb541b  mov     [rbp+2150h+var_120], r12; jumptable 0000000140CB4867 case 1
0x140cb5422  lea     rcx, off_1417BB3A8; "src\\commands\\accounts.rs"
0x140cb5429  call    sub_1416C3400
0x140cb542e  db 90h
0x140cb542f  jmp     short loc_140CB5485
0x140cb5431  mov     rax, [rbp+2150h+var_58]; jumptable 0000000140CB4DB6 case 2
0x140cb5438  mov     [rbp+2150h+var_108], rax
0x140cb543f  mov     [rbp+2150h+var_110], r12
0x140cb5446  mov     [rbp+2150h+var_118], rsi
0x140cb544d  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb5454  call    sub_1416C3420
0x140cb5459  align 2
0x140cb545a  jmp     short loc_140CB5485
0x140cb545c  mov     rax, [rbp+2150h+var_58]; jumptable 0000000140CB4DB6 case 1
0x140cb5463  mov     [rbp+2150h+var_108], rax
0x140cb546a  mov     [rbp+2150h+var_110], r12
0x140cb5471  mov     [rbp+2150h+var_118], rsi
0x140cb5478  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb547f  call    sub_1416C3400
0x140cb5484  db 90h
0x140cb5485  ud2