// module: codexmate_lib/commands/accounts
// addr: 0x140cafd70
// name: switch_account
// [HEXRAYS_DECOMPILE_FAILED: switch analysis failed: bad target 0x140CB0BDA for case 5]
// Hex-Rays could not produce pseudocode for this function (see failure reason above).
// Falling back to raw disassembly (NOT decompiled C, NOT to be treated as complete pseudocode).
// [TRUNCATED]
0x140cafd70  push    rbp
0x140cafd71  push    r15
0x140cafd73  push    r14
0x140cafd75  push    r13
0x140cafd77  push    r12
0x140cafd79  push    rsi
0x140cafd7a  push    rdi
0x140cafd7b  push    rbx
0x140cafd7c  sub     rsp, 0B98h
0x140cafd83  lea     rbp, [rsp+80h]
0x140cafd8b  movaps  [rbp+0B50h+var_50], xmm6
0x140cafd92  mov     [rbp+0B50h+var_58], 0FFFFFFFFFFFFFFFEh
0x140cafd9d  mov     rdi, rdx
0x140cafda0  mov     r14, rcx
0x140cafda3  movzx   eax, byte ptr [rcx+1250h]
0x140cafdaa  lea     rcx, jpt_140CAFDBF
0x140cafdb1  movsxd  rax, ds:(jpt_140CAFDBF - 1417C62A4h)[rcx+rax*4]; switch 4 cases
0x140cafdb5  add     rax, rcx
0x140cafdb8  mov     [rbp+0B50h+var_68], r14
0x140cafdbf  jmp     rax; switch jump
0x140cafdc1  mov     word ptr [r14+1251h], 101h; jumptable 0000000140CAFDBF case 0
0x140cafdcb  mov     byte ptr [r14+1253h], 1
0x140cafdd3  lea     rdx, [r14+188h]
0x140cafdda  lea     rsi, [r14+9E8h]
0x140cafde1  mov     r8d, 860h
0x140cafde7  mov     rcx, rsi
0x140cafdea  call    sub_141684120
0x140cafdef  movzx   eax, byte ptr [r14+1240h]
0x140cafdf7  lea     rcx, jpt_140CAFE05
0x140cafdfe  movsxd  rax, ds:(jpt_140CAFE05 - 1417C62B4h)[rcx+rax*4]; switch 4 cases
0x140cafe02  add     rax, rcx
0x140cafe05  jmp     rax; switch jump
0x140cafe07  lea     rsi, [r14+9E8h]; jumptable 0000000140CAFDBF case 3
0x140cafe0e  movzx   eax, byte ptr [r14+1240h]
0x140cafe16  lea     rcx, jpt_140CAFE05
0x140cafe1d  movsxd  rax, ds:(jpt_140CAFE05 - 1417C62B4h)[rcx+rax*4]; switch 4 cases
0x140cafe21  add     rax, rcx
0x140cafe24  jmp     rax; switch jump
0x140cafe26  lea     rcx, [r14+0BF0h]; jumptable 0000000140CAFE05 case 0
0x140cafe2d  mov     [rbp+0B50h+var_6B0], 0
0x140cafe38  lea     r13, aSwitchAccount; "switch_account"
0x140cafe3f  mov     [rbp+0B50h+var_6E0], r13
0x140cafe46  mov     qword ptr [rbp+0B50h+var_6D8], 0Eh
0x140cafe51  lea     rax, aApp_2; "app"
0x140cafe58  mov     qword ptr [rbp+0B50h+var_6D8+8], rax
0x140cafe5f  mov     [rbp+0B50h+var_6C8], 3
0x140cafe6a  mov     [rbp+0B50h+var_88], rsi
0x140cafe71  mov     [rbp+0B50h+var_6C0], rsi
0x140cafe78  mov     [rbp+0B50h+var_70], rcx
0x140cafe7f  mov     [rbp+0B50h+var_6B8], rcx
0x140cafe86  lea     rcx, [rbp+0B50h+var_338]
0x140cafe8d  lea     rdx, [rbp+0B50h+var_6E0]
0x140cafe94  call    sub_1401C3650
0x140cafe99  nop
0x140cafe9a  mov     rax, [rbp+0B50h+var_338]
0x140cafea1  movzx   ecx, byte ptr [rbp+0B50h+var_330+7]
0x140cafea8  shl     ecx, 10h
0x140cafeab  movzx   edx, word ptr [rbp+0B50h+var_330+5]
0x140cafeb2  or      edx, ecx
0x140cafeb4  shl     rdx, 20h
0x140cafeb8  mov     r12d, dword ptr [rbp+0B50h+var_330+1]
0x140cafebf  or      r12, rdx
0x140cafec2  movzx   r14d, byte ptr [rbp+0B50h+var_330]
0x140cafeca  mov     r15, [rbp+0B50h+var_328]
0x140cafed1  mov     rbx, [rbp+0B50h+var_320]
0x140cafed8  mov     rsi, qword ptr [rbp+0B50h+var_318]
0x140cafedf  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cafee3  jz      loc_140CB004C
0x140cafee9  movups  xmm0, [rbp+0B50h+var_2B0]
0x140cafef0  movups  [rbp+0B50h+var_498], xmm0
0x140cafef7  movups  xmm0, [rbp+0B50h+var_2C0]
0x140cafefe  movups  [rbp+0B50h+var_4A8], xmm0
0x140caff05  movups  xmm0, [rbp+0B50h+var_2D0]
0x140caff0c  movups  [rbp+0B50h+var_4B8], xmm0
0x140caff13  movups  xmm0, [rbp+0B50h+var_318+8]
0x140caff1a  movups  xmm1, [rbp+0B50h+var_300]
0x140caff21  movups  xmm2, [rbp+0B50h+var_2F0]
0x140caff28  movups  xmm3, [rbp+0B50h+var_2E0]
0x140caff2f  movups  [rbp+0B50h+var_4C8], xmm3
0x140caff36  movups  [rbp+0B50h+var_4D8], xmm2
0x140caff3d  movups  [rbp+0B50h+var_4E8], xmm1
0x140caff44  movups  [rbp+0B50h+var_4F8], xmm0
0x140caff4b  mov     dword ptr [rbp+0B50h+var_520+9], r12d
0x140caff52  mov     rcx, r12
0x140caff55  shr     rcx, 30h
0x140caff59  mov     byte ptr [rbp+0B50h+var_520+0Fh], cl
0x140caff5f  shr     r12, 20h
0x140caff63  mov     word ptr [rbp+0B50h+var_520+0Dh], r12w
0x140caff6b  mov     [rbp+0B50h+var_510], r15
0x140caff72  mov     [rbp+0B50h+var_508], rbx
0x140caff79  mov     [rbp+0B50h+var_500], rsi
0x140caff80  mov     qword ptr [rbp+0B50h+var_520], rax
0x140caff87  mov     byte ptr [rbp+0B50h+var_520+8], r14b
0x140caff8e  mov     qword ptr [rbp+848h], 0
0x140caff99  mov     [rbp+0B50h+var_338], r13
0x140caffa0  mov     [rbp+0B50h+var_330], 0Eh
0x140caffab  lea     rax, aAccountkey_5; "accountKey"
0x140caffb2  mov     [rbp+0B50h+var_328], rax
0x140caffb9  mov     [rbp+0B50h+var_320], 0Ah
0x140caffc4  mov     rax, [rbp+0B50h+var_88]
0x140caffcb  mov     qword ptr [rbp+0B50h+var_318], rax
0x140caffd2  mov     rax, [rbp+0B50h+var_70]
0x140caffd9  mov     qword ptr [rbp+0B50h+var_318+8], rax
0x140caffe0  lea     rcx, [rbp+0B50h+var_6E0]
0x140caffe7  lea     rdx, [rbp+0B50h+var_338]
0x140caffee  call    sub_1409757B0
0x140cafff3  nop
0x140cafff4  movzx   r14d, byte ptr [rbp+0B50h+var_6E0]
0x140cafffc  cmp     r14b, 0FFh
0x140cb0000  jz      loc_140CB014F
0x140cb0006  movzx   r13d, byte ptr [rbp+0B50h+var_6E0+7]
0x140cb000e  movzx   edi, word ptr [rbp+0B50h+var_6E0+5]
0x140cb0015  mov     r12d, dword ptr [rbp+0B50h+var_6E0+1]
0x140cb001c  mov     r15, qword ptr [rbp+0B50h+var_6D8]
0x140cb0023  mov     rbx, qword ptr [rbp+0B50h+var_6D8+8]
0x140cb002a  mov     rsi, [rbp+0B50h+var_6C8]
0x140cb0031  lea     rcx, [rbp+0B50h+var_520]
0x140cb0038  call    sub_140014150
0x140cb003d  nop
0x140cb003e  shl     r13d, 10h
0x140cb0042  or      edi, r13d
0x140cb0045  shl     rdi, 20h
0x140cb0049  or      r12, rdi
0x140cb004c  mov     rcx, [rbp+0B50h+var_88]
0x140cb0053  call    sub_140BF0DE0
0x140cb0058  nop
0x140cb0059  mov     rax, [rbp+0B50h+var_70]
0x140cb0060  cmp     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
0x140cb0064  jz      loc_140CB0140
0x140cb006a  mov     rax, [rbp+0B50h+var_68]
0x140cb0071  lea     rcx, [rax+0BF8h]
0x140cb0078  mov     [rbp+0B50h+var_90], rcx
0x140cb007f  mov     rcx, [rax+0BF8h]
0x140cb0086  mov     rax, [rax+0C00h]
0x140cb008d  mov     [rbp+0B50h+var_80], rax
0x140cb0094  mov     [rbp+0B50h+var_78], 0
0x140cb009f  mov     [rbp+0B50h+var_C0], rcx
0x140cb00a6  nop     word ptr [rax+rax+00000000h]
0x140cb00b0  mov     rax, [rbp+0B50h+var_78]
0x140cb00b7  cmp     [rbp+0B50h+var_80], rax
0x140cb00be  jz      short loc_140CB011E
0x140cb00c0  inc     rax
0x140cb00c3  mov     [rbp+0B50h+var_78], rax
0x140cb00ca  lea     rdi, [rcx+60h]
0x140cb00ce  call    sub_1402C7520
0x140cb00d3  nop
0x140cb00d4  mov     rcx, rdi
0x140cb00d7  jmp     short loc_140CB00B0
0x140cb00d9  lea     rbx, [r14+1238h]; jumptable 0000000140CAFE05 case 3
0x140cb00e0  movzx   eax, byte ptr [r14+1238h]
0x140cb00e8  lea     r15, [r14+0E18h]
0x140cb00ef  lea     rcx, jpt_140CB00FD
0x140cb00f6  movsxd  rax, ds:(jpt_140CB00FD - 1417C62C4h)[rcx+rax*4]; switch 4 cases
0x140cb00fa  add     rax, rcx
0x140cb00fd  jmp     rax; switch jump
0x140cb00ff  lea     r12, [r14+1028h]; jumptable 0000000140CB00FD case 3
0x140cb0106  movzx   eax, byte ptr [r14+1230h]
0x140cb010e  lea     rcx, jpt_140CB011C
0x140cb0115  movsxd  rax, ds:(jpt_140CB011C - 1417C62D4h)[rcx+rax*4]; switch 6 cases
0x140cb0119  add     rax, rcx
0x140cb011c  jmp     rax; switch jump
0x140cb011e  mov     rax, [rbp+0B50h+var_70]
0x140cb0125  mov     rax, [rax]
0x140cb0128  mov     dil, 1
0x140cb012b  test    rax, rax
0x140cb012e  mov     r13, [rbp+0B50h+var_68]
0x140cb0135  jnz     loc_140CB095C
0x140cb013b  jmp     loc_140CB0979
0x140cb0140  mov     dil, 1
0x140cb0143  mov     r13, [rbp+0B50h+var_68]
0x140cb014a  jmp     loc_140CB0979
0x140cb014f  mov     rbx, [rbp+0B50h+var_6C8]
0x140cb0156  mov     r14, [rbp+0B50h+var_68]
0x140cb015d  lea     rsi, [r14+0C08h]
0x140cb0164  movups  xmm6, [rbp+0B50h+var_6D8]
0x140cb016b  lea     rdx, [rbp+0B50h+var_520]
0x140cb0172  mov     r8d, 98h
0x140cb0178  mov     rcx, rsi
0x140cb017b  call    sub_141684120
0x140cb0180  movups  xmmword ptr [r14+0CA0h], xmm6
0x140cb0188  mov     [r14+0CB0h], rbx
0x140cb018f  mov     byte ptr [r14+0E10h], 0
0x140cb0197  lea     r15, [r14+0E18h]
0x140cb019e  mov     r8d, 210h
0x140cb01a4  mov     rcx, r15
0x140cb01a7  mov     rdx, rsi
0x140cb01aa  call    sub_141684120
0x140cb01af  lea     rbx, [r14+1238h]
0x140cb01b6  mov     byte ptr [r14+1238h], 0
0x140cb01be  mov     rsi, [rbp+0B50h+var_88]
0x140cb01c5  lea     r12, [r14+1028h]; jumptable 0000000140CB00FD case 0
0x140cb01cc  mov     r8d, 210h
0x140cb01d2  mov     rcx, r12
0x140cb01d5  mov     rdx, r15
0x140cb01d8  call    sub_141684120
0x140cb01dd  movzx   eax, byte ptr [r14+1230h]
0x140cb01e5  lea     rcx, jpt_140CB011C
0x140cb01ec  movsxd  rax, ds:(jpt_140CB011C - 1417C62D4h)[rcx+rax*4]; switch 4 cases
0x140cb01f0  add     rax, rcx
0x140cb01f3  jmp     rax; switch jump
0x140cb01f5  mov     [rbp+0B50h+var_D0], r15; jumptable 0000000140CB011C case 0
0x140cb01fc  mov     [rbp+0B50h+var_90], rbx
0x140cb0203  mov     [rbp+0B50h+var_88], rsi
0x140cb020a  lea     rsi, [r14+10D8h]
0x140cb0211  mov     r8d, 98h
0x140cb0217  mov     rcx, rsi
0x140cb021a  mov     [rbp+0B50h+var_C0], r12
0x140cb0221  mov     rdx, r12
0x140cb0224  call    sub_141684120
0x140cb0229  mov     byte ptr [r14+1231h], 1
0x140cb0231  mov     rax, [r14+10C0h]
0x140cb0238  mov     r13, [r14+10C8h]
0x140cb023f  mov     rbx, [r14+10D0h]
0x140cb0246  mov     [rbp+0B50h+var_78], rax
0x140cb024d  mov     [rbp+0B50h+var_100], rax
0x140cb0254  mov     [rbp+0B50h+var_108], r13
0x140cb025b  lea     rcx, [rbp+0B50h+var_338]
0x140cb0262  mov     rdx, rsi
0x140cb0265  call    sub_1401C50B0
0x140cb026a  nop
0x140cb026b  mov     r12, [rbp+0B50h+var_68]
0x140cb0272  mov     r14, [r12+1160h]
0x140cb027a  lock inc qword ptr [r14]
0x140cb027e  jle     loc_140CB0BFE
0x140cb0284  mov     [rbp+0B50h+var_70], rdi
0x140cb028b  mov     r15, [r12+1168h]
0x140cb0293  lock inc qword ptr [r15]
0x140cb0297  jle     loc_140CB0BFE
0x140cb029d  lea     rsi, [rbp+0B50h+var_B98]
0x140cb02a1  lea     rdx, [rbp+0B50h+var_338]
0x140cb02a8  mov     r8d, 88h
0x140cb02ae  mov     rcx, rsi
0x140cb02b1  call    sub_141684120
0x140cb02b6  mov     byte ptr [r12+1231h], 0
0x140cb02bf  lea     rdi, [r12+1170h]
0x140cb02c7  mov     r8d, 88h
0x140cb02cd  mov     rcx, rdi
0x140cb02d0  mov     rdx, rsi
0x140cb02d3  call    sub_141684120
0x140cb02d8  mov     rdx, rdi
0x140cb02db  mov     [r12+11F8h], r14
0x140cb02e3  mov     [r12+1200h], r15
0x140cb02eb  mov     rax, [rbp+0B50h+var_78]
0x140cb02f2  mov     [r12+1208h], rax
0x140cb02fa  mov     [rbp+0B50h+var_B8], r13
0x140cb0301  mov     [r12+1210h], r13
0x140cb0309  mov     [r12+1218h], rbx
0x140cb0311  lea     rax, [r12+1228h]
0x140cb0319  mov     [rbp+0B50h+var_80], rax
0x140cb0320  mov     byte ptr [r12+1228h], 0
0x140cb0329  mov     rdi, [rbp+0B50h+var_70]
0x140cb0330  jmp     short loc_140CB037B; jumptable 0000000140CB0379 case 0
0x140cb0332  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CB011C case 3
0x140cb0339  mov     [rbp+0B50h+var_D0], r15
0x140cb0340  mov     [rbp+0B50h+var_90], rbx
0x140cb0347  mov     [rbp+0B50h+var_88], rsi
0x140cb034e  lea     rax, [r14+1228h]
0x140cb0355  mov     [rbp+0B50h+var_80], rax
0x140cb035c  movzx   eax, byte ptr [r14+1228h]
0x140cb0364  lea     rdx, [r14+1170h]
0x140cb036b  lea     rcx, jpt_140CB0379; jumptable 0000000140CB011C case 4
0x140cb0372  movsxd  rax, ds:(jpt_140CB0379 - 1417C62E4h)[rcx+rax*4]; switch 4 cases
0x140cb0376  add     rax, rcx
0x140cb0379  jmp     rax; switch jump
0x140cb037b  lea     rcx, [rbp+0B50h+var_950]; jumptable 0000000140CB0379 case 0
0x140cb0382  mov     r8d, 0B0h
0x140cb0388  mov     [rbp+0B50h+var_70], rdx
0x140cb038f  call    sub_141684120
0x140cb0394  mov     rdx, cs:off_141EC8710
0x140cb039b  mov     eax, [rdx+60h]
0x140cb039e  test    eax, eax
0x140cb03a0  jnz     loc_140CB0A96
0x140cb03a6  cmp     dword ptr [rdx+10h], 2
0x140cb03aa  jnz     short loc_140CB03DE
0x140cb03ac  cmp     byte ptr [rdx], 0
0x140cb03af  mov     eax, 1D8h
0x140cb03b4  mov     ecx, 2C0h
0x140cb03b9  cmovnz  rcx, rax
0x140cb03bd  add     rcx, [rdx+8]
0x140cb03c1  mov     [rbp+0B50h+var_59], 0
0x140cb03c8  lea     r9, off_1417642A8; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb03cf  lea     r8, [rbp+0B50h+var_950]
0x140cb03d6  call    sub_14089BBF0
0x140cb03db  nop
0x140cb03dc  jmp     short loc_140CB0416
0x140cb03de  cmp     byte ptr [rdx+40h], 0
0x140cb03e2  mov     eax, 1D8h
0x140cb03e7  mov     ecx, 2C0h
0x140cb03ec  cmovnz  rcx, rax
0x140cb03f0  lea     rax, [rdx+40h]
0x140cb03f4  add     rcx, [rdx+48h]
0x140cb03f8  mov     [rbp+0B50h+var_59], 0
0x140cb03ff  lea     r9, off_141764290; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb0406  lea     r8, [rbp+0B50h+var_950]
0x140cb040d  mov     rdx, rax
0x140cb0410  call    sub_14089BBF0
0x140cb0415  nop
0x140cb0416  mov     r14, [rbp+0B50h+var_68]
0x140cb041d  mov     [r14+1220h], rax
0x140cb0424  jmp     short loc_140CB042D
0x140cb0426  mov     [rbp+0B50h+var_70], rdx; jumptable 0000000140CB0379 case 3
0x140cb042d  lea     rdx, [r14+1220h]
0x140cb0434  lea     rbx, [rbp+0B50h+var_338]
0x140cb043b  mov     rcx, rbx
0x140cb043e  mov     [rbp+0B50h+var_F8], rdx
0x140cb0445  mov     r8, rdi
0x140cb0448  call    sub_140AFF3A0
0x140cb044d  nop
0x140cb044e  mov     r15, [rbp+0B50h+var_338]
0x140cb0455  cmp     r15, 0FFFFFFFFFFFFFFFEh
0x140cb0459  jz      short loc_140CB0489
0x140cb045b  cmp     r15d, 0FFFFFFFFh
0x140cb045f  jnz     short loc_140CB04B5
0x140cb0461  mov     r12, [rbp+0B50h+var_330]
0x140cb0468  mov     rsi, [rbp+0B50h+var_328]
0x140cb046f  mov     rdi, 800000000000000Ch
0x140cb0479  mov     rax, [rbp+0B50h+var_320]
0x140cb0480  mov     [rbp+0B50h+var_D8], rax
0x140cb0487  jmp     short loc_140CB04F1
0x140cb0489  mov     rdx, [rbp+0B50h+var_68]
0x140cb0490  mov     byte ptr [rdx+1228h], 3
0x140cb0497  mov     byte ptr [rdx+1230h], 3
0x140cb049e  mov     byte ptr [rdx+1238h], 3
0x140cb04a5  mov     byte ptr [rdx+1240h], 3
0x140cb04ac  mov     cl, 3
0x140cb04ae  mov     al, 1
0x140cb04b0  jmp     loc_140CB0A62
0x140cb04b5  mov     rdi, [rbp+0B50h+var_330]
0x140cb04bc  mov     r12, [rbp+0B50h+var_328]
0x140cb04c3  mov     rsi, [rbp+0B50h+var_320]
0x140cb04ca  mov     rax, qword ptr [rbp+0B50h+var_318]
0x140cb04d1  mov     [rbp+0B50h+var_D8], rax
0x140cb04d8  lea     rdx, [rbp+0B50h+var_318+8]
0x140cb04df  lea     rcx, [rbp+0B50h+var_8A0]
0x140cb04e6  mov     r8d, 1C0h
0x140cb04ec  call    sub_141684120
0x140cb04f1  mov     r13, [rbp+0B50h+var_B8]
0x140cb04f8  lea     rcx, [rbp+0B50h+var_B10]
0x140cb04fc  lea     rdx, [rbp+0B50h+var_8A0]
0x140cb0503  mov     r8d, 1C0h
0x140cb0509  call    sub_141684120
0x140cb050e  mov     rax, [rbp+0B50h+var_F8]
0x140cb0515  mov     r14, [rax]
0x140cb0518  mov     rax, [rbp+0B50h+var_78]
0x140cb051f  mov     [rbp+0B50h+var_98], rax
0x140cb0526  mov     [rbp+0B50h+var_A0], r13
0x140cb052d  mov     rax, [rbp+0B50h+var_80]
0x140cb0534  mov     [rbp+0B50h+var_A8], rax
0x140cb053b  mov     rax, [rbp+0B50h+var_70]
0x140cb0542  mov     [rbp+0B50h+var_B0], rax
0x140cb0549  mov     rcx, r14
0x140cb054c  call    sub_1412F2A80
0x140cb0551  nop
0x140cb0552  test    al, al
0x140cb0554  jz      short loc_140CB0590
0x140cb0556  mov     rax, [rbp+0B50h+var_78]
0x140cb055d  mov     [rbp+0B50h+var_98], rax
0x140cb0564  mov     [rbp+0B50h+var_A0], r13
0x140cb056b  mov     rax, [rbp+0B50h+var_80]
0x140cb0572  mov     [rbp+0B50h+var_A8], rax
0x140cb0579  mov     rax, [rbp+0B50h+var_70]
0x140cb0580  mov     [rbp+0B50h+var_B0], rax
0x140cb0587  mov     rcx, r14
0x140cb058a  call    sub_1412E7580
0x140cb058f  nop
0x140cb0590  cmp     r15d, 0FFFFFFFFh
0x140cb0594  jz      short loc_140CB05BB
0x140cb0596  lea     rcx, [rbp+0B50h+var_6E0]
0x140cb059d  lea     rdx, [rbp+0B50h+var_B10]
0x140cb05a1  mov     r8d, 1C0h
0x140cb05a7  call    sub_141684120
0x140cb05ac  mov     rax, [rbp+0B50h+var_68]
0x140cb05b3  mov     r14, rdi
0x140cb05b6  jmp     loc_140CB0680
0x140cb05bb  mov     [rbp+0B50h+var_338], rdi
0x140cb05c2  mov     [rbp+0B50h+var_330], r12
0x140cb05c9  mov     [rbp+0B50h+var_328], rsi
0x140cb05d0  mov     rax, [rbp+0B50h+var_D8]
0x140cb05d7  mov     [rbp+0B50h+var_320], rax
0x140cb05de  movups  xmm0, [rbp+0B50h+var_B10]
0x140cb05e2  movups  [rbp+0B50h+var_318], xmm0
0x140cb05e9  mov     [rbp+0B50h+var_150], rbx
0x140cb05f0  lea     rax, sub_141230630
0x140cb05f7  mov     [rbp+0B50h+var_148], rax
0x140cb05fe  lea     rdx, unk_1417B8CB0
0x140cb0605  lea     rcx, [rbp+0B50h+var_8A0]
0x140cb060c  lea     r8, [rbp+0B50h+var_150]
0x140cb0613  call    sub_14149C0F0
0x140cb0618  nop
0x140cb0619  mov     rax, [rbp+0B50h+var_78]
0x140cb0620  mov     [rbp+0B50h+var_98], rax
0x140cb0627  mov     rax, [rbp+0B50h+var_B8]
0x140cb062e  mov     [rbp+0B50h+var_A0], rax
0x140cb0635  mov     rax, [rbp+0B50h+var_80]
0x140cb063c  mov     [rbp+0B50h+var_A8], rax
0x140cb0643  mov     rax, [rbp+0B50h+var_70]
0x140cb064a  mov     [rbp+0B50h+var_B0], rax
0x140cb0651  lea     rcx, [rbp+0B50h+var_338]
0x140cb0658  call    sub_140BF0F60
0x140cb065d  nop
0x140cb065e  mov     r14, [rbp+0B50h+var_8A0]
0x140cb0665  mov     r12, [rbp+0B50h+var_898]
0x140cb066c  mov     rsi, [rbp+0B50h+var_890]
0x140cb0673  mov     r15d, 2
0x140cb0679  mov     rax, [rbp+0B50h+var_68]
0x140cb0680  mov     byte ptr [rax+1228h], 1
0x140cb0687  mov     byte ptr [rax+1231h], 0
0x140cb068e  lea     rcx, [rax+10D8h]
0x140cb0695  call    sub_140014150
0x140cb069a  nop
0x140cb069b  mov     rax, [rbp+0B50h+var_68]
0x140cb06a2  mov     byte ptr [rax+1230h], 1
0x140cb06a9  mov     rcx, [rbp+0B50h+var_C0]
0x140cb06b0  call    sub_140BEC490
0x140cb06b5  nop
0x140cb06b6  cmp     r15d, 2
0x140cb06ba  jnz     short loc_140CB06E6
0x140cb06bc  test    rsi, rsi
0x140cb06bf  jns     loc_140CB0861
0x140cb06c5  xor     edi, edi
0x140cb06c7  mov     [rbp+0B50h+var_80], r12
0x140cb06ce  mov     [rbp+0B50h+var_78], r14
0x140cb06d5  mov     rcx, rdi
0x140cb06d8  mov     rdx, rsi
0x140cb06db  call    sub_1416C2D4B
0x140cb06e0  db 90h
0x140cb06e1  jmp     loc_140CB0BFE
0x140cb06e6  lea     rcx, [rbp+0B50h+var_4F8]
0x140cb06ed  lea     rdx, [rbp+0B50h+var_6E0]
0x140cb06f4  mov     r8d, 1C0h
0x140cb06fa  call    sub_141684120
0x140cb06ff  mov     qword ptr [rbp+0B50h+var_520], r15
0x140cb0706  mov     qword ptr [rbp+0B50h+var_520+8], r14
0x140cb070d  mov     [rbp+0B50h+var_510], r12
0x140cb0714  mov     [rbp+0B50h+var_508], rsi
0x140cb071b  mov     rax, [rbp+0B50h+var_D8]
0x140cb0722  mov     [rbp+0B50h+var_500], rax
0x140cb0729  lea     rcx, [rbp+0B50h+var_338]
0x140cb0730  lea     rdx, [rbp+0B50h+var_520]
0x140cb0737  call    sub_140B048C0
0x140cb073c  nop
0x140cb073d  mov     rax, [rbp+0B50h+var_338]
0x140cb0744  movzx   ecx, byte ptr [rbp+0B50h+var_330+7]
0x140cb074b  shl     ecx, 10h
0x140cb074e  movzx   edx, word ptr [rbp+0B50h+var_330+5]
0x140cb0755  or      edx, ecx
0x140cb0757  shl     rdx, 20h
0x140cb075b  mov     r12d, dword ptr [rbp+0B50h+var_330+1]
0x140cb0762  or      r12, rdx
0x140cb0765  movzx   r14d, byte ptr [rbp+0B50h+var_330]
0x140cb076d  mov     r15, [rbp+0B50h+var_328]
0x140cb0774  mov     rbx, [rbp+0B50h+var_320]
0x140cb077b  mov     rsi, qword ptr [rbp+0B50h+var_318]
0x140cb0782  cmp     rax, 0FFFFFFFFFFFFFFFFh
0x140cb0786  jz      loc_140CB08B9
0x140cb078c  mov     rcx, qword ptr [rbp+0B50h+var_318+8]
0x140cb0793  mov     rdx, r12
0x140cb0796  shr     rdx, 30h
0x140cb079a  mov     byte ptr [rbp+0B50h+var_330+7], dl
0x140cb07a0  mov     rdx, r12
0x140cb07a3  shr     rdx, 20h
0x140cb07a7  mov     word ptr [rbp+0B50h+var_330+5], dx
0x140cb07ae  mov     dword ptr [rbp+0B50h+var_330+1], r12d
0x140cb07b5  mov     [rbp+0B50h+var_328], r15
0x140cb07bc  mov     [rbp+0B50h+var_320], rbx
0x140cb07c3  mov     qword ptr [rbp+0B50h+var_318], rsi
0x140cb07ca  mov     [rbp+0B50h+var_338], rax
0x140cb07d1  mov     byte ptr [rbp+0B50h+var_330], r14b
0x140cb07d8  mov     qword ptr [rbp+0B50h+var_318+8], rcx
0x140cb07df  mov     [rbp+0B50h+var_8A0], 0
0x140cb07ea  mov     [rbp+0B50h+var_898], 1
0x140cb07f5  mov     [rbp+0B50h+var_890], 0
0x140cb0800  mov     [rbp+0B50h+var_B00], 60000020h
0x140cb0808  lea     rax, [rbp+0B50h+var_8A0]
0x140cb080f  mov     qword ptr [rbp+0B50h+var_B10], rax
0x140cb0813  lea     rax, off_1417C41C0
0x140cb081a  mov     qword ptr [rbp+0B50h+var_B10+8], rax
0x140cb081e  lea     rcx, [rbp+0B50h+var_338]
0x140cb0825  lea     rdx, [rbp+0B50h+var_B10]
0x140cb0829  call    sub_141230630
0x140cb082e  nop
0x140cb082f  test    al, al
0x140cb0831  jnz     loc_140CB0AB4
0x140cb0837  mov     r15, [rbp+0B50h+var_8A0]
0x140cb083e  mov     rbx, [rbp+0B50h+var_898]
0x140cb0845  mov     rsi, [rbp+0B50h+var_890]
0x140cb084c  lea     rcx, [rbp+0B50h+var_338]
0x140cb0853  call    sub_140BF0F60
0x140cb0858  nop
0x140cb0859  mov     dil, 1
0x140cb085c  mov     r14b, 3
0x140cb085f  jmp     short loc_140CB08BB
0x140cb0861  jz      loc_140CB0A83
0x140cb0867  call    nullsub_1
0x140cb086c  mov     edi, 1
0x140cb0871  mov     edx, 1
0x140cb0876  mov     rcx, rsi
0x140cb0879  call    sub_140001650
0x140cb087e  test    rax, rax
0x140cb0881  jz      loc_140CB06C7
0x140cb0887  mov     rbx, rax
0x140cb088a  mov     rcx, rax
0x140cb088d  mov     rdx, r12
0x140cb0890  mov     r8, rsi
0x140cb0893  call    sub_141684120
0x140cb0898  test    r14, r14
0x140cb089b  jz      short loc_140CB08AE
0x140cb089d  mov     r8d, 1
0x140cb08a3  mov     rcx, r12
0x140cb08a6  mov     rdx, r14
0x140cb08a9  call    sub_140001660
0x140cb08ae  mov     dil, 1
0x140cb08b1  mov     r14b, 3
0x140cb08b4  mov     r15, rsi
0x140cb08b7  jmp     short loc_140CB08BB
0x140cb08b9  xor     edi, edi
0x140cb08bb  mov     rax, [rbp+0B50h+var_90]
0x140cb08c2  mov     byte ptr [rax], 1
0x140cb08c5  mov     rcx, [rbp+0B50h+var_88]
0x140cb08cc  call    sub_140BF0DE0
0x140cb08d1  nop
0x140cb08d2  mov     r13, [rbp+0B50h+var_68]
0x140cb08d9  cmp     qword ptr [r13+0BF0h], 0FFFFFFFFFFFFFFFFh
0x140cb08e1  jz      loc_140CB0979
0x140cb08e7  lea     rax, [r13+0BF8h]
0x140cb08ee  mov     [rbp+0B50h+var_90], rax
0x140cb08f5  mov     rcx, [r13+0BF8h]
0x140cb08fc  mov     rax, [r13+0C00h]
0x140cb0903  mov     [rbp+0B50h+var_80], rax
0x140cb090a  mov     [rbp+0B50h+var_78], 0
0x140cb0915  mov     [rbp+0B50h+var_70], rcx
0x140cb091c  nop     dword ptr [rax+00h]
0x140cb0920  mov     rax, [rbp+0B50h+var_78]
0x140cb0927  cmp     [rbp+0B50h+var_80], rax
0x140cb092e  jz      short loc_140CB0949
0x140cb0930  inc     rax
0x140cb0933  mov     [rbp+0B50h+var_78], rax
0x140cb093a  lea     r13, [rcx+60h]
0x140cb093e  call    sub_1402C7520
0x140cb0943  nop
0x140cb0944  mov     rcx, r13
0x140cb0947  jmp     short loc_140CB0920
0x140cb0949  mov     r13, [rbp+0B50h+var_68]
0x140cb0950  mov     rax, [r13+0BF0h]
0x140cb0957  test    rax, rax
0x140cb095a  jz      short loc_140CB0979
0x140cb095c  mov     rcx, [rbp+0B50h+var_90]
0x140cb0963  mov     rcx, [rcx]
0x140cb0966  shl     rax, 5
0x140cb096a  lea     rdx, [rax+rax*2]
0x140cb096e  mov     r8d, 8
0x140cb0974  call    sub_140001660
0x140cb0979  mov     byte ptr [r13+1240h], 1
0x140cb0981  mov     rcx, [rbp+0B50h+var_88]
0x140cb0988  call    sub_140BE3320
0x140cb098d  nop
0x140cb098e  mov     [rbp+0B50h+var_137], r12d
0x140cb0995  mov     rax, r12
0x140cb0998  shr     rax, 30h
0x140cb099c  mov     [rbp+0B50h+var_131], al
0x140cb09a2  shr     r12, 20h
0x140cb09a6  mov     [rbp+0B50h+var_133], r12w
0x140cb09ae  mov     [rbp+0B50h+var_130], r15
0x140cb09b5  mov     [rbp+0B50h+var_128], rbx
0x140cb09bc  mov     [rbp+0B50h+var_120], rsi
0x140cb09c3  movzx   eax, dil
0x140cb09c7  mov     [rbp+0B50h+var_138], r14b
0x140cb09ce  mov     [rbp+0B50h+var_140], rax
0x140cb09d5  mov     rdi, [rbp+0B50h+var_68]
0x140cb09dc  mov     byte ptr [rdi+1253h], 0
0x140cb09e3  lea     rsi, [rbp+0B50h+var_338]
0x140cb09ea  mov     r8d, 168h
0x140cb09f0  mov     rcx, rsi
0x140cb09f3  mov     rdx, rdi
0x140cb09f6  call    sub_141684120
0x140cb09fb  mov     byte ptr [rdi+1252h], 0
0x140cb0a02  mov     rdx, [rdi+180h]
0x140cb0a09  mov     byte ptr [rdi+1251h], 0
0x140cb0a10  mov     rax, [rdi+178h]
0x140cb0a17  mov     [rbp+0B50h+var_510], rax
0x140cb0a1e  movups  xmm0, xmmword ptr [rdi+168h]
0x140cb0a25  movaps  [rbp+0B50h+var_520], xmm0
0x140cb0a2c  mov     eax, [rdi+1248h]
0x140cb0a32  mov     ecx, [rdi+124Ch]
0x140cb0a38  mov     [rsp+0BD0h+var_BA8], ecx
0x140cb0a3c  mov     dword ptr [rsp+0BD0h+var_BB0], eax
0x140cb0a40  lea     r8, [rbp+0B50h+var_140]
0x140cb0a47  lea     r9, [rbp+0B50h+var_520]
0x140cb0a4e  mov     rcx, rsi
0x140cb0a51  call    sub_14047E370
0x140cb0a56  nop
0x140cb0a57  mov     cl, 1
0x140cb0a59  xor     eax, eax
0x140cb0a5b  mov     rdx, [rbp+0B50h+var_68]
0x140cb0a62  mov     [rdx+1250h], cl
0x140cb0a68  movaps  xmm6, [rbp+0B50h+var_50]
0x140cb0a6f  add     rsp, 0B98h
0x140cb0a76  pop     rbx
0x140cb0a77  pop     rdi
0x140cb0a78  pop     rsi
0x140cb0a79  pop     r12
0x140cb0a7b  pop     r13
0x140cb0a7d  pop     r14
0x140cb0a7f  pop     r15
0x140cb0a81  pop     rbp
0x140cb0a82  retn
0x140cb0a83  mov     ebx, 1
0x140cb0a88  test    r14, r14
0x140cb0a8b  jnz     loc_140CB089D
0x140cb0a91  jmp     loc_140CB08AE
0x140cb0a96  mov     [rbp+0B50h+var_59], 1
0x140cb0a9d  mov     rcx, cs:off_141EC8710
0x140cb0aa4  mov     rsi, rdx
0x140cb0aa7  call    sub_1416984A3
0x140cb0aac  mov     rdx, rsi
0x140cb0aaf  jmp     loc_140CB03A6
0x140cb0ab4  lea     rax, off_1417C4278; "/rustc/8bab26f4f68e0e26f0bb7960be334d5b"...
0x140cb0abb  mov     [rsp+0BD0h+var_BB0], rax
0x140cb0ac0  lea     rcx, aADisplayImplem_11; "a Display implementation returned an er"...
0x140cb0ac7  lea     r9, unk_1417BC180
0x140cb0ace  lea     r8, [rbp+0B50h+var_C1]
0x140cb0ad5  mov     edx, 37h ; '7'
0x140cb0ada  call    sub_1416C3060
0x140cb0adf  align 20h
0x140cb0ae0  jmp     loc_140CB0BFE
0x140cb0ae5  lea     rcx, off_1417B7C00; jumptable 0000000140CAFDBF case 2
0x140cb0aec  call    sub_1416C3420
0x140cb0af1  ud2
0x140cb0af3  lea     rcx, off_1417B7C00; jumptable 0000000140CAFDBF case 1
0x140cb0afa  call    sub_1416C3400
0x140cb0aff  ud2
0x140cb0b01  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAFE05 case 2
0x140cb0b08  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb0b0f  call    sub_1416C3420
0x140cb0b14  db 90h
0x140cb0b15  jmp     loc_140CB0BFE
0x140cb0b1a  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CAFE05 case 1
0x140cb0b21  lea     rcx, off_1417B9768; "src\\lib.rs"
0x140cb0b28  call    sub_1416C3400
0x140cb0b2d  align 2
0x140cb0b2e  jmp     loc_140CB0BFE
0x140cb0b33  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CB011C case 2
0x140cb0b3a  mov     [rbp+0B50h+var_D0], r15
0x140cb0b41  mov     [rbp+0B50h+var_90], rbx
0x140cb0b48  mov     [rbp+0B50h+var_88], rsi
0x140cb0b4f  lea     rcx, off_1417BB2D8; "src\\commands\\accounts.rs"
0x140cb0b56  call    sub_1416C3420
0x140cb0b5b  align 4
0x140cb0b5c  jmp     loc_140CB0BFE
0x140cb0b61  mov     [rbp+0B50h+var_C0], r12; jumptable 0000000140CB011C case 1
0x140cb0b68  mov     [rbp+0B50h+var_D0], r15
0x140cb0b6f  mov     [rbp+0B50h+var_90], rbx
0x140cb0b76  mov     [rbp+0B50h+var_88], rsi
0x140cb0b7d  lea     rcx, off_1417BB2D8; "src\\commands\\accounts.rs"
0x140cb0b84  call    sub_1416C3400
0x140cb0b89  align 2
0x140cb0b8a  jmp     short loc_140CB0BFE
0x140cb0b8c  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CB00FD case 2
0x140cb0b93  mov     [rbp+0B50h+var_E8], rbx
0x140cb0b9a  mov     [rbp+0B50h+var_F0], r15
0x140cb0ba1  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb0ba8  call    sub_1416C3420
0x140cb0bad  align 2
0x140cb0bae  jmp     short loc_140CB0BFE
0x140cb0bb0  mov     [rbp+0B50h+var_88], rsi; jumptable 0000000140CB00FD case 1
0x140cb0bb7  mov     [rbp+0B50h+var_E8], rbx
0x140cb0bbe  mov     [rbp+0B50h+var_F0], r15
0x140cb0bc5  lea     rcx, off_1417B7B80; "C:\\Users\\runneradmin\\.cargo\\registr"...
0x140cb0bcc  call    sub_1416C3400
0x140cb0bd1  align 2
0x140cb0bd2  jmp     short loc_140CB0BFE
0x140cb0bd4  mov     [rbp+0B50h+var_E0], rdx; jumptable 0000000140CB0379 case 2
0x140cb0bdb  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb0be2  call    sub_1416C3420
0x140cb0be7  align 8
0x140cb0be8  jmp     short loc_140CB0BFE
0x140cb0bea  mov     [rbp+0B50h+var_E0], rdx; jumptable 0000000140CB0379 case 1
0x140cb0bf1  lea     rcx, off_1417B8048; "src\\commands\\accounts.rs"
0x140cb0bf8  call    sub_1416C3400
0x140cb0bfd  align 2
0x140cb0bfe  ud2