// Pseudocode for switch_account (EA: 0x140d6f0d0, size: 0xe22)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// Tauri命令handler:切换当前账号到accountKey,不重启Codex。副作用:改当前账号指针(mutation)。归属:锚src\commands\accounts.rs。
char __fastcall switch_account(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  char v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22; // di
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int128 v26; // xmm6
  __int64 v27; // r14
  char v28; // of
  volatile signed __int64 *v29; // r15
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r12
  __int64 v32; // rt0
  __int64 v33; // rsi
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r15
  unsigned __int64 v41; // rdi
  _BYTE *v42; // rdx
  char v43; // cl
  char result; // al
  _QWORD *v45; // r13
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // r13
  __int64 v57; // rdi
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  __int64 v60; // [rsp+20h] [rbp-60h]
  _BYTE v61[136]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v62; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v63; // [rsp+D0h] [rbp+50h]
  _BYTE v64[176]; // [rsp+280h] [rbp+200h] BYREF
  unsigned __int64 v65; // [rsp+330h] [rbp+2B0h] BYREF
  __int64 v66; // [rsp+338h] [rbp+2B8h]
  __int64 v67; // [rsp+340h] [rbp+2C0h]
  const char *v68; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v69; // [rsp+4F8h] [rbp+478h]
  __int64 v70; // [rsp+508h] [rbp+488h]
  __int64 v71; // [rsp+510h] [rbp+490h]
  __int64 v72; // [rsp+518h] [rbp+498h]
  __int64 v73; // [rsp+520h] [rbp+4A0h]
  __int128 v74; // [rsp+6B0h] [rbp+630h] BYREF
  unsigned __int64 v75; // [rsp+6C0h] [rbp+640h]
  __int64 v76; // [rsp+6C8h] [rbp+648h]
  __int64 v77; // [rsp+6D0h] [rbp+650h]
  _OWORD v78[28]; // [rsp+6D8h] [rbp+658h] BYREF
  const char *v79; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v80; // [rsp+8A8h] [rbp+828h]
  const char *v81; // [rsp+8B0h] [rbp+830h]
  __int64 v82; // [rsp+8B8h] [rbp+838h]
  _OWORD v83[28]; // [rsp+8C0h] [rbp+840h] BYREF
  _QWORD v84[2]; // [rsp+A88h] [rbp+A08h] BYREF
  __int64 v85; // [rsp+A98h] [rbp+A18h] BYREF
  char v86; // [rsp+AA0h] [rbp+A20h]
  int v87; // [rsp+AA1h] [rbp+A21h]
  __int16 v88; // [rsp+AA5h] [rbp+A25h]
  char v89; // [rsp+AA7h] [rbp+A27h]
  __int64 v90; // [rsp+AA8h] [rbp+A28h]
  __int64 v91; // [rsp+AB0h] [rbp+A30h]
  __int64 v92; // [rsp+AB8h] [rbp+A38h]
  __int64 *v93; // [rsp+AD0h] [rbp+A50h]
  __int64 v94; // [rsp+AD8h] [rbp+A58h]
  __int64 v95; // [rsp+AE0h] [rbp+A60h]
  __int64 v96; // [rsp+AE8h] [rbp+A68h]
  __int64 v97; // [rsp+AF0h] [rbp+A70h]
  char v98; // [rsp+AFFh] [rbp+A7Fh] BYREF
  __int64 v99; // [rsp+B00h] [rbp+A80h]
  _QWORD *v100; // [rsp+B08h] [rbp+A88h]
  unsigned __int64 v101; // [rsp+B10h] [rbp+A90h]
  unsigned __int64 v102; // [rsp+B18h] [rbp+A98h]
  _QWORD *v103; // [rsp+B20h] [rbp+AA0h]
  __int64 v104; // [rsp+B28h] [rbp+AA8h]
  unsigned __int64 v105; // [rsp+B30h] [rbp+AB0h]
  _QWORD *v106; // [rsp+B38h] [rbp+AB8h]
  unsigned __int64 v107; // [rsp+B40h] [rbp+AC0h]
  __int64 v108; // [rsp+B48h] [rbp+AC8h]
  char v109; // [rsp+B57h] [rbp+AD7h]
  __int64 v110; // [rsp+B58h] [rbp+AD8h]

  v110 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 4688);
  v108 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 4689) = 257;
      *(_BYTE *)(a1 + 4691) = 1;
      v5 = a1 + 2536;
      sub_14172B820(a1 + 2536, a1 + 392, 2144);
      switch ( *(_BYTE *)(v3 + 4672) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_71;
        case 2:
          goto LABEL_70;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 2536;
      switch ( *(_BYTE *)(a1 + 4672) )
      {
        case 0:
LABEL_4:
          v73 = 0;
          v68 = aSwitchAccount;
          *(_QWORD *)&v69 = 14;
          *((_QWORD *)&v69 + 1) = aApp_4;
          v70 = 3;
          v104 = v5;
          v71 = v5;
          v106 = (_QWORD *)(v3 + 3056);
          v72 = v3 + 3056;
          sub_1401A9630((__int64)&v79, (__int64)&v68);
          v6 = (unsigned __int64)((HIBYTE(v80) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32;
          v7 = v6 | *(unsigned int *)((char *)&v80 + 1);
          v8 = v80;
          v9 = (__int64)v81;
          v10 = v82;
          v11 = *(_QWORD *)&v83[0];
          if ( v79 != (const char *)-1LL )
          {
            v78[6] = *(_OWORD *)((char *)&v83[6] + 8);
            v78[5] = *(_OWORD *)((char *)&v83[5] + 8);
            v78[4] = *(_OWORD *)((char *)&v83[4] + 8);
            v78[3] = *(_OWORD *)((char *)&v83[3] + 8);
            v78[2] = *(_OWORD *)((char *)&v83[2] + 8);
            v78[1] = *(_OWORD *)((char *)&v83[1] + 8);
            v78[0] = *(_OWORD *)((char *)v83 + 8);
            *(_DWORD *)((char *)&v74 + 9) = *(_DWORD *)((char *)&v80 + 1);
            HIBYTE(v74) = (v6 | *(unsigned int *)((char *)&v80 + 1)) >> 48;
            *(_WORD *)((char *)&v74 + 13) = WORD2(v7);
            v75 = (unsigned __int64)v81;
            v76 = v82;
            v77 = *(_QWORD *)&v83[0];
            *(_QWORD *)&v74 = v79;
            BYTE8(v74) = v80;
            *(_QWORD *)&v83[1] = 0;
            v79 = aSwitchAccount;
            v80 = 14;
            v81 = aAccountkey_6;
            v82 = 10;
            *(_QWORD *)&v83[0] = v104;
            *((_QWORD *)&v83[0] + 1) = v106;
            sub_140955980(&v68, &v79);
            v8 = (char)v68;
            if ( (_BYTE)v68 == 0xFF )
            {
              v24 = v70;
              v3 = v108;
              v25 = v108 + 3080;
              v26 = v69;
              sub_14172B820(v108 + 3080, &v74, 152);
              *(_OWORD *)(v3 + 3232) = v26;
              *(_QWORD *)(v3 + 3248) = v24;
              *(_BYTE *)(v3 + 3600) = 0;
              v18 = v3 + 3608;
              sub_14172B820(v3 + 3608, v25, 528);
              v17 = (_QWORD *)(v3 + 4664);
              *(_BYTE *)(v3 + 4664) = 0;
              v5 = v104;
LABEL_17:
              v19 = v3 + 4136;
              sub_14172B820(v3 + 4136, v18, 528);
              switch ( *(_BYTE *)(v3 + 4656) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_73;
                case 2:
                  goto LABEL_72;
                case 3:
                  goto LABEL_21;
              }
            }
            v12 = HIBYTE(v68);
            v13 = *(unsigned __int16 *)((char *)&v68 + 5);
            v14 = *(unsigned int *)((char *)&v68 + 1);
            v10 = *((_QWORD *)&v69 + 1);
            v9 = v69;
            v11 = v70;
            sub_140203A20(&v74);
            v7 = ((unsigned __int64)((v12 << 16) | v13) << 32) | v14;
          }
          sub_140CAB140(v104);
          if ( *v106 == -1 )
          {
            v22 = 1;
            v23 = v108;
            goto LABEL_63;
          }
          v103 = (_QWORD *)(v108 + 3064);
          v15 = *(_QWORD *)(v108 + 3064);
          v105 = *(_QWORD *)(v108 + 3072);
          v107 = 0;
          v99 = v15;
          while ( v105 != v107 )
          {
            ++v107;
            v16 = v15 + 96;
            sub_140401FB0();
            v15 = v16;
          }
          v21 = *v106;
          v22 = 1;
          v23 = v108;
          if ( !*v106 )
            goto LABEL_63;
          goto LABEL_62;
        case 1:
LABEL_71:
          v104 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_70:
          v104 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v17 = (_QWORD *)(v3 + 4664);
  v18 = v3 + 3608;
  switch ( *(_BYTE *)(v3 + 4664) )
  {
    case 0:
      goto LABEL_17;
    case 1:
      v104 = v5;
      v95 = v3 + 4664;
      v94 = v3 + 3608;
      sub_14176EC00(&off_1418851A0);
    case 2:
      v104 = v5;
      v95 = v3 + 4664;
      v94 = v3 + 3608;
      sub_14176EC20(&off_1418851A0);
    case 3:
      v19 = v3 + 4136;
      v20 = *(unsigned __int8 *)(v3 + 4656);
      switch ( *(_BYTE *)(v3 + 4656) )
      {
        case 0:
LABEL_18:
          v97 = v18;
          v103 = v17;
          v99 = v19;
          sub_14172B820(v3 + 4312, v19, 152);
          *(_BYTE *)(v3 + 4657) = 1;
          v105 = *(_QWORD *)(v3 + 4288);
          v107 = *(_QWORD *)(v3 + 4296);
          v27 = *(_QWORD *)(v3 + 4304);
          sub_1401A9D00(&v79, v3 + 4312);
          v29 = *(volatile signed __int64 **)(v3 + 4448);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v28 | (v30 == 0)
            || (v104 = v5,
                v31 = *(volatile signed __int64 **)(v3 + 4456),
                v32 = _InterlockedIncrement64(v31),
                (v32 < 0) ^ v28 | (v32 == 0)) )
          {
            BUG();
          }
          sub_14172B820(v61, &v79, 136);
          *(_BYTE *)(v3 + 4657) = 0;
          v33 = v3 + 4464;
          sub_14172B820(v3 + 4464, v61, 136);
          *(_QWORD *)(v3 + 4600) = v29;
          *(_QWORD *)(v3 + 4608) = v31;
          *(_QWORD *)(v3 + 4616) = v105;
          *(_QWORD *)(v3 + 4624) = v107;
          *(_QWORD *)(v3 + 4632) = v27;
          v106 = (_QWORD *)(v3 + 4648);
          *(_BYTE *)(v3 + 4648) = 0;
LABEL_24:
          sub_14172B820(v64, v33, 176);
          v34 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v109 = 1;
            v59 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v34 = v59;
          }
          if ( *((_DWORD *)v34 + 4) == 2 )
          {
            v35 = 704;
            if ( *(_BYTE *)v34 )
              v35 = 472;
            v36 = v34[1] + v35;
            v109 = 0;
            v37 = sub_14085C170(v36, v34, v64, &off_1417EBF48);
          }
          else
          {
            v38 = 704;
            if ( *((_BYTE *)v34 + 64) )
              v38 = 472;
            v39 = v34[9] + v38;
            v109 = 0;
            v37 = sub_14085C170(v39, v34 + 8, v64, &off_1417EBF30);
          }
          v3 = v108;
          *(_QWORD *)(v108 + 4640) = v37;
LABEL_34:
          v93 = (__int64 *)(v3 + 4640);
          sub_140501760(&v79, v3 + 4640, a2);
          v40 = (__int64)v79;
          if ( v79 == (const char *)-2LL )
          {
            v42 = (_BYTE *)v108;
            *(_BYTE *)(v108 + 4648) = 3;
            v42[4656] = 3;
            v42[4664] = 3;
            v42[4672] = 3;
            v43 = 3;
            result = 1;
            goto LABEL_64;
          }
          if ( (_DWORD)v79 == -1 )
          {
            v7 = v80;
            v11 = (__int64)v81;
            v41 = 0x800000000000000CuLL;
            v96 = v82;
          }
          else
          {
            v41 = v80;
            v7 = (unsigned __int64)v81;
            v11 = v82;
            v96 = *(_QWORD *)&v83[0];
            sub_14172B820(&v65, (char *)v83 + 8, 448);
          }
          v45 = v106;
          sub_14172B820(&v62, &v65, 448);
          v46 = *v93;
          v102 = v105;
          v101 = v107;
          v100 = v45;
          if ( (unsigned __int8)sub_141398090(v46) )
          {
            v102 = v105;
            v101 = v107;
            v100 = v45;
            sub_14139A2E0(v46);
          }
          if ( (_DWORD)v40 == -1 )
          {
            v79 = (const char *)v41;
            v80 = v7;
            v81 = (const char *)v11;
            v82 = v96;
            v83[0] = v62;
            v84[0] = &v79;
            v84[1] = sub_1412DDF00;
            sub_141543AF0(&v65, &unk_1418862D0, v84);
            v102 = v105;
            v101 = v107;
            v100 = v106;
            sub_140CAB2C0(&v79);
            v48 = v65;
            v7 = v66;
            v11 = v67;
            v40 = 2;
            v47 = v108;
          }
          else
          {
            sub_14172B820(&v68, &v62, 448);
            v47 = v108;
            v48 = v41;
          }
          *(_BYTE *)(v47 + 4648) = 1;
          *(_BYTE *)(v47 + 4657) = 0;
          sub_140203A20(v47 + 4312);
          *(_BYTE *)(v108 + 4656) = 1;
          sub_140CA6800(v99);
          if ( (_DWORD)v40 == 2 )
          {
            if ( v11 < 0 )
            {
              v53 = 0;
              goto LABEL_47;
            }
            if ( v11 )
            {
              nullsub_1(v50, v49, v51, v52, v60);
              v53 = 1;
              v54 = sub_140001650(v11, 1);
              if ( !v54 )
              {
LABEL_47:
                v105 = v7;
                v107 = v48;
                sub_14176E54B(v53, v11);
              }
              v10 = v54;
              sub_14172B820(v54, v7, v11);
              if ( !v48 )
                goto LABEL_55;
            }
            else
            {
              v10 = 1;
              if ( !v48 )
                goto LABEL_55;
            }
            sub_140001660(v7, v48, 1);
LABEL_55:
            v22 = 1;
            v8 = 3;
            v9 = v11;
            goto LABEL_57;
          }
          sub_14172B820(v78, &v68, 448);
          *(_QWORD *)&v74 = v40;
          *((_QWORD *)&v74 + 1) = v48;
          v75 = v7;
          v76 = v11;
          v77 = v96;
          sub_140507740(&v79, &v74);
          v7 = ((unsigned __int64)((HIBYTE(v80) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32)
             | *(unsigned int *)((char *)&v80 + 1);
          v8 = v80;
          v9 = (__int64)v81;
          v10 = v82;
          v11 = *(_QWORD *)&v83[0];
          if ( v79 == (const char *)-1LL )
          {
            v22 = 0;
          }
          else
          {
            HIBYTE(v80) = (((unsigned __int64)((HIBYTE(v80) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32)
                         | *(unsigned int *)((char *)&v80 + 1)) >> 48;
            *(_WORD *)((char *)&v80 + 5) = WORD2(v7);
            *(_DWORD *)((char *)&v80 + 1) = v7;
            v65 = 0;
            v66 = 1;
            v67 = 0;
            v63 = 1610612768;
            *(_QWORD *)&v62 = &v65;
            *((_QWORD *)&v62 + 1) = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v79, &v62) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v98,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v9 = v65;
            v10 = v66;
            v11 = v67;
            sub_140CAB2C0(&v79);
            v22 = 1;
            v8 = 3;
          }
LABEL_57:
          *(_BYTE *)v103 = 1;
          sub_140CAB140(v104);
          v23 = v108;
          if ( *(_QWORD *)(v108 + 3056) != -1 )
          {
            v103 = (_QWORD *)(v108 + 3064);
            v55 = *(_QWORD **)(v108 + 3064);
            v105 = *(_QWORD *)(v108 + 3072);
            v107 = 0;
            v106 = v55;
            while ( v105 != v107 )
            {
              ++v107;
              v56 = v55 + 12;
              sub_140401FB0();
              v55 = v56;
            }
            v23 = v108;
            v21 = *(_QWORD *)(v108 + 3056);
            if ( v21 )
LABEL_62:
              sub_140001660(*v103, 96 * v21, 8);
          }
LABEL_63:
          *(_BYTE *)(v23 + 4672) = 1;
          sub_140C9D670(v104);
          v87 = v7;
          v89 = BYTE6(v7);
          v88 = WORD2(v7);
          v90 = v9;
          v91 = v10;
          v92 = v11;
          v86 = v8;
          v85 = v22;
          v57 = v108;
          *(_BYTE *)(v108 + 4691) = 0;
          sub_14172B820(&v79, v57, 360);
          *(_BYTE *)(v57 + 4690) = 0;
          v58 = *(_QWORD *)(v57 + 384);
          *(_BYTE *)(v57 + 4689) = 0;
          v75 = *(_QWORD *)(v57 + 376);
          v74 = *(_OWORD *)(v57 + 360);
          sub_140AFFC30((__int64)&v79, v58, (__int64)&v85, &v74, *(_DWORD *)(v57 + 4680), *(_DWORD *)(v57 + 4684));
          v43 = 1;
          result = 0;
          v42 = (_BYTE *)v108;
LABEL_64:
          v42[4688] = v43;
          return result;
        case 1:
LABEL_73:
          v99 = v19;
          v97 = v18;
          v103 = v17;
          v104 = v5;
          sub_14176EC00(&off_141888978);
        case 2:
LABEL_72:
          v99 = v19;
          v97 = v18;
          v103 = v17;
          v104 = v5;
          sub_14176EC20(&off_141888978);
        case 3:
LABEL_21:
          v99 = v19;
          v97 = v18;
          v104 = v5;
          v106 = (_QWORD *)(v3 + 4648);
          v20 = *(unsigned __int8 *)(v3 + 4648);
          goto LABEL_22;
        case 4:
LABEL_22:
          v103 = v17;
          switch ( v20 )
          {
            case 0LL:
              v33 = v3 + 4464;
              goto LABEL_24;
            case 1LL:
              sub_14176EC00(&off_141885668);
            case 2LL:
              sub_14176EC20(&off_141885668);
            case 3LL:
              goto LABEL_34;
          }
        case 5:
          JUMPOUT(0x140D6FED3LL);
      }
  }
}
