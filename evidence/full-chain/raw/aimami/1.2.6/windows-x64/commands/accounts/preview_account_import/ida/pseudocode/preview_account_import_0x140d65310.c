// Pseudocode for preview_account_import (EA: 0x140d65310, size: 0xd33)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:预览账号导入文件(filePath),只解析不落库,返回可导入账号预览。归属:锚src\commands\account_io.rs。
// Tauri命令handler:预览账号导入文件(filePath),只解析不落库,返回可导入账号预览。归属:锚src\commands\account_io.rs。
char __fastcall preview_account_import(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rsi
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
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int8 v20; // di
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int128 v24; // xmm6
  unsigned __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbx
  char v28; // of
  volatile signed __int64 *v29; // rsi
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r14
  __int64 v32; // rt0
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r15
  unsigned __int64 v40; // rdi
  __int64 v41; // rbx
  _BYTE *v42; // rdx
  char v43; // cl
  char result; // al
  __int64 v45; // r13
  __int64 *v46; // r14
  __int64 v47; // r14
  unsigned __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 *v57; // rcx
  __int64 *v58; // r13
  __int64 v59; // rdi
  __int64 v60; // rdx
  _QWORD *v61; // rsi
  __int64 v62; // [rsp+20h] [rbp-60h]
  _BYTE v63[208]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v64[26]; // [rsp+100h] [rbp+80h] BYREF
  __int128 v65; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v66; // [rsp+1E0h] [rbp+160h]
  __int128 v67; // [rsp+2A0h] [rbp+220h] BYREF
  unsigned __int64 v68; // [rsp+2B0h] [rbp+230h]
  __int64 v69; // [rsp+2B8h] [rbp+238h]
  __int64 v70; // [rsp+2C0h] [rbp+240h]
  _OWORD v71[13]; // [rsp+2C8h] [rbp+248h] BYREF
  const char *v72; // [rsp+398h] [rbp+318h] BYREF
  __int128 v73; // [rsp+3A0h] [rbp+320h]
  __int64 v74; // [rsp+3B0h] [rbp+330h]
  __int64 v75; // [rsp+3B8h] [rbp+338h]
  __int64 v76; // [rsp+3C0h] [rbp+340h]
  __int64 v77; // [rsp+3C8h] [rbp+348h]
  _QWORD v78[2]; // [rsp+468h] [rbp+3E8h] BYREF
  const char *v79; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v80; // [rsp+480h] [rbp+400h]
  const char *v81; // [rsp+488h] [rbp+408h]
  __int64 v82; // [rsp+490h] [rbp+410h]
  _QWORD v83[13]; // [rsp+498h] [rbp+418h] BYREF
  __int128 v84; // [rsp+500h] [rbp+480h]
  unsigned __int64 v85; // [rsp+510h] [rbp+490h]
  __int64 v86; // [rsp+518h] [rbp+498h]
  __int64 v87; // [rsp+520h] [rbp+4A0h]
  __int64 v88; // [rsp+5E0h] [rbp+560h] BYREF
  char v89; // [rsp+5E8h] [rbp+568h]
  int v90; // [rsp+5E9h] [rbp+569h]
  __int16 v91; // [rsp+5EDh] [rbp+56Dh]
  char v92; // [rsp+5EFh] [rbp+56Fh]
  __int64 v93; // [rsp+5F0h] [rbp+570h]
  __int64 v94; // [rsp+5F8h] [rbp+578h]
  __int64 v95; // [rsp+600h] [rbp+580h]
  __int64 v96; // [rsp+608h] [rbp+588h]
  __int64 v97; // [rsp+610h] [rbp+590h]
  __int64 v98; // [rsp+618h] [rbp+598h]
  char v99; // [rsp+627h] [rbp+5A7h] BYREF
  __int64 v100; // [rsp+628h] [rbp+5A8h]
  unsigned __int64 v101; // [rsp+630h] [rbp+5B0h]
  __int64 *v102; // [rsp+638h] [rbp+5B8h]
  __int64 v103; // [rsp+640h] [rbp+5C0h]
  __int64 *v104; // [rsp+648h] [rbp+5C8h]
  __int64 v105; // [rsp+650h] [rbp+5D0h]
  unsigned __int64 v106; // [rsp+658h] [rbp+5D8h]
  unsigned __int64 v107; // [rsp+660h] [rbp+5E0h]
  __int64 v108; // [rsp+668h] [rbp+5E8h]
  char v109; // [rsp+677h] [rbp+5F7h]
  __int64 v110; // [rsp+678h] [rbp+5F8h]

  v110 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 3584);
  v108 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3585) = 257;
      *(_BYTE *)(a1 + 3587) = 1;
      v5 = a1 + 1984;
      sub_14172B820(a1 + 1984, a1 + 392, 1592);
      switch ( *(_BYTE *)(v3 + 3568) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_67;
        case 2:
          goto LABEL_66;
        case 3:
          goto LABEL_11;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1984;
      switch ( *(_BYTE *)(a1 + 3568) )
      {
        case 0:
LABEL_4:
          v77 = 0;
          v72 = aPreviewAccount;
          *(_QWORD *)&v73 = 22;
          *((_QWORD *)&v73 + 1) = aApp_4;
          v74 = 3;
          v105 = v5;
          v75 = v5;
          v104 = (__int64 *)(v3 + 2504);
          v76 = v3 + 2504;
          sub_1401A9630((__int64)&v79, (__int64)&v72);
          v6 = (unsigned __int64)((HIBYTE(v80) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32;
          v7 = v6 | *(unsigned int *)((char *)&v80 + 1);
          v8 = v80;
          v9 = (__int64)v81;
          v10 = v82;
          v11 = v83[0];
          if ( v79 != (const char *)-1LL )
          {
            v71[6] = v84;
            v71[5] = *(_OWORD *)&v83[11];
            v71[4] = *(_OWORD *)&v83[9];
            v71[3] = *(_OWORD *)&v83[7];
            v71[2] = *(_OWORD *)&v83[5];
            v71[1] = *(_OWORD *)&v83[3];
            v71[0] = *(_OWORD *)&v83[1];
            *(_DWORD *)((char *)&v67 + 9) = *(_DWORD *)((char *)&v80 + 1);
            HIBYTE(v67) = (v6 | *(unsigned int *)((char *)&v80 + 1)) >> 48;
            *(_WORD *)((char *)&v67 + 13) = WORD2(v7);
            v68 = (unsigned __int64)v81;
            v69 = v82;
            v70 = v83[0];
            *(_QWORD *)&v67 = v79;
            BYTE8(v67) = v80;
            v83[2] = 0;
            v79 = aPreviewAccount;
            v80 = 22;
            v81 = aFilepath_1;
            v82 = 8;
            v83[0] = v105;
            v83[1] = v104;
            sub_140955980(&v72, &v79);
            v8 = (char)v72;
            if ( (_BYTE)v72 == 0xFF )
            {
              v22 = v74;
              v3 = v108;
              v23 = v108 + 2528;
              v24 = v73;
              sub_14172B820(v108 + 2528, &v67, 152);
              *(_OWORD *)(v3 + 2680) = v24;
              *(_QWORD *)(v3 + 2696) = v22;
              *(_BYTE *)(v3 + 2864) = 0;
              v18 = v3 + 2872;
              sub_14172B820(v3 + 2872, v23, 344);
              v104 = (__int64 *)(v3 + 3560);
              *(_BYTE *)(v3 + 3560) = 0;
              v5 = v105;
LABEL_17:
              v105 = v5;
              v106 = v3 + 3216;
              v96 = v18;
              sub_14172B820(v3 + 3216, v18, 344);
              switch ( *(_BYTE *)(v3 + 3552) )
              {
                case 0:
                  goto LABEL_18;
                case 1:
                  goto LABEL_69;
                case 2:
                  goto LABEL_68;
                case 3:
                  goto LABEL_30;
              }
            }
            v12 = HIBYTE(v72);
            v13 = *(unsigned __int16 *)((char *)&v72 + 5);
            v14 = *(unsigned int *)((char *)&v72 + 1);
            v10 = *((_QWORD *)&v73 + 1);
            v9 = v73;
            v11 = v74;
            sub_140203A20(&v67);
            v7 = ((unsigned __int64)((v12 << 16) | v13) << 32) | v14;
          }
          sub_140CAB140(v105);
          if ( *v104 == -1 )
          {
            v20 = 1;
            v21 = v108;
            goto LABEL_59;
          }
          v102 = (__int64 *)(v108 + 2512);
          v15 = *(_QWORD *)(v108 + 2512);
          v107 = *(_QWORD *)(v108 + 2520);
          v106 = 0;
          v103 = v15;
          while ( v107 != v106 )
          {
            ++v106;
            v16 = v15 + 96;
            sub_140401FB0();
            v15 = v16;
          }
          v19 = *v104;
          v20 = 1;
          v21 = v108;
          if ( !*v104 )
            goto LABEL_59;
          goto LABEL_58;
        case 1:
LABEL_67:
          v105 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_66:
          v105 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_11;
      }
  }
LABEL_11:
  v17 = *(unsigned __int8 *)(v3 + 3560);
  v18 = v3 + 2872;
  v104 = (__int64 *)(v3 + 3560);
  switch ( v17 )
  {
    case 0LL:
      goto LABEL_17;
    case 1LL:
      v105 = v5;
      v98 = v3 + 3560;
      v97 = v3 + 2872;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v105 = v5;
      v98 = v3 + 3560;
      v97 = v3 + 2872;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v96 = v3 + 2872;
      v105 = v5;
      v106 = v3 + 3216;
      switch ( *(_BYTE *)(v3 + 3552) )
      {
        case 0:
LABEL_18:
          sub_14172B820(v3 + 3392, v106, 152);
          *(_BYTE *)(v3 + 3553) = 1;
          v25 = *(_QWORD *)(v3 + 3368);
          v26 = *(_QWORD *)(v3 + 3376);
          v27 = *(_QWORD *)(v3 + 3384);
          sub_1401A9D00(v64, v3 + 3392);
          v29 = *(volatile signed __int64 **)(v3 + 3528);
          v30 = _InterlockedIncrement64(v29);
          if ( (v30 < 0) ^ v28 | (v30 == 0)
            || (v31 = *(volatile signed __int64 **)(v3 + 3536),
                v32 = _InterlockedIncrement64(v31),
                (v32 < 0) ^ v28 | (v32 == 0)) )
          {
            BUG();
          }
          sub_14172B820(&v79, v64, 136);
          *(_BYTE *)(v3 + 3553) = 0;
          *(_QWORD *)&v84 = v29;
          *((_QWORD *)&v84 + 1) = v31;
          v107 = v25;
          v85 = v25;
          v103 = v26;
          v86 = v26;
          v87 = v27;
          v33 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v109 = 1;
            v61 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v33 = v61;
          }
          if ( *((_DWORD *)v33 + 4) == 2 )
          {
            v34 = 704;
            if ( *(_BYTE *)v33 )
              v34 = 472;
            v35 = v33[1] + v34;
            v109 = 0;
            v36 = sub_140856790(v35, v33, &v79, &off_1417EBF48);
          }
          else
          {
            v37 = 704;
            if ( *((_BYTE *)v33 + 64) )
              v37 = 472;
            v38 = v33[9] + v37;
            v109 = 0;
            v36 = sub_140856790(v38, v33 + 8, &v79, &off_1417EBF30);
          }
          v3 = v108;
          *(_QWORD *)(v108 + 3544) = v36;
          break;
        case 1:
LABEL_69:
          sub_14176EC00(&off_141888170);
        case 2:
LABEL_68:
          sub_14176EC20(&off_141888170);
        case 3:
          break;
      }
LABEL_30:
      v102 = (__int64 *)(v3 + 3544);
      sub_140502810(&v79, v3 + 3544, a2);
      v39 = (__int64)v79;
      if ( v79 == (const char *)-3LL )
      {
        v42 = (_BYTE *)v108;
        *(_BYTE *)(v108 + 3552) = 3;
        v42[3560] = 3;
        v42[3568] = 3;
        v43 = 3;
        result = 1;
        goto LABEL_60;
      }
      if ( v79 == (const char *)-2LL )
      {
        v7 = v80;
        v11 = (__int64)v81;
        v40 = 0x800000000000000CuLL;
        v41 = v82;
      }
      else
      {
        v40 = v80;
        v7 = (unsigned __int64)v81;
        v11 = v82;
        v41 = v83[0];
        sub_14172B820(v64, &v83[1], 208);
      }
      v45 = v103;
      v46 = v102;
      sub_14172B820(&v65, v64, 208);
      v47 = *v46;
      v101 = v107;
      v100 = v45;
      if ( (unsigned __int8)sub_141398090(v47) )
      {
        v101 = v107;
        v100 = v45;
        sub_14139A2E0(v47);
      }
      if ( v39 == -2 )
      {
        v79 = (const char *)v40;
        v80 = v7;
        v81 = (const char *)v11;
        v82 = v41;
        *(_OWORD *)v83 = v65;
        v78[0] = &v79;
        v78[1] = sub_1412DDF00;
        sub_141543AF0(v64, &unk_1418862D0, v78);
        v101 = v107;
        v100 = v103;
        sub_140CAB2C0(&v79);
        v48 = v64[0];
        v7 = v64[1];
        v11 = v64[2];
        v49 = v108;
        *(_BYTE *)(v108 + 3553) = 0;
        sub_140203A20(v49 + 3392);
        v39 = -1;
      }
      else
      {
        sub_14172B820(&v72, &v65, 208);
        v50 = v108;
        *(_BYTE *)(v108 + 3553) = 0;
        sub_140203A20(v50 + 3392);
        v48 = v40;
      }
      sub_14172B820(v63, &v72, 208);
      *(_BYTE *)(v108 + 3552) = 1;
      sub_140CA3260(v106);
      if ( v39 != -1 )
      {
        sub_14172B820(v71, v63, 208);
        *(_QWORD *)&v67 = v39;
        *((_QWORD *)&v67 + 1) = v48;
        v68 = v7;
        v69 = v11;
        v70 = v41;
        sub_14050D070(&v79, &v67);
        v7 = ((unsigned __int64)((HIBYTE(v80) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32)
           | *(unsigned int *)((char *)&v80 + 1);
        v8 = v80;
        v9 = (__int64)v81;
        v10 = v82;
        v11 = v83[0];
        if ( v79 == (const char *)-1LL )
        {
          v20 = 0;
        }
        else
        {
          HIBYTE(v80) = (((unsigned __int64)((HIBYTE(v80) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v80 + 5)) << 32)
                       | *(unsigned int *)((char *)&v80 + 1)) >> 48;
          *(_WORD *)((char *)&v80 + 5) = WORD2(v7);
          *(_DWORD *)((char *)&v80 + 1) = v7;
          *(_QWORD *)&v65 = 0;
          *((_QWORD *)&v65 + 1) = 1;
          v66 = 0;
          *((_QWORD *)&v73 + 1) = 1610612768;
          v72 = (const char *)&v65;
          *(_QWORD *)&v73 = &off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v79, &v72) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v99,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v10 = *((_QWORD *)&v65 + 1);
          v9 = v65;
          v11 = v66;
          sub_140CAB2C0(&v79);
          v20 = 1;
          v8 = 3;
        }
        goto LABEL_53;
      }
      if ( v11 < 0 )
      {
        v55 = 0;
        goto LABEL_46;
      }
      if ( v11 )
      {
        nullsub_1(v52, v51, v53, v54, v62);
        v55 = 1;
        v56 = sub_140001650(v11, 1);
        if ( !v56 )
        {
LABEL_46:
          v107 = v7;
          v106 = v48;
          sub_14176E54B(v55, v11);
        }
        v10 = v56;
        sub_14172B820(v56, v7, v11);
        if ( v48 )
          goto LABEL_51;
      }
      else
      {
        v10 = 1;
        if ( v48 )
LABEL_51:
          sub_140001660(v7, v48, 1);
      }
      v20 = 1;
      v8 = 3;
      v9 = v11;
LABEL_53:
      *(_BYTE *)v104 = 1;
      sub_140CAB140(v105);
      v21 = v108;
      if ( *(_QWORD *)(v108 + 2504) != -1 )
      {
        v102 = (__int64 *)(v108 + 2512);
        v57 = *(__int64 **)(v108 + 2512);
        v107 = *(_QWORD *)(v108 + 2520);
        v106 = 0;
        v104 = v57;
        while ( v107 != v106 )
        {
          ++v106;
          v58 = v57 + 12;
          sub_140401FB0();
          v57 = v58;
        }
        v21 = v108;
        v19 = *(_QWORD *)(v108 + 2504);
        if ( v19 )
LABEL_58:
          sub_140001660(*v102, 96 * v19, 8);
      }
LABEL_59:
      *(_BYTE *)(v21 + 3568) = 1;
      sub_140C9C510(v105);
      v90 = v7;
      v92 = BYTE6(v7);
      v91 = WORD2(v7);
      v93 = v9;
      v94 = v10;
      v95 = v11;
      v89 = v8;
      v88 = v20;
      v59 = v108;
      *(_BYTE *)(v108 + 3587) = 0;
      sub_14172B820(&v79, v59, 360);
      *(_BYTE *)(v59 + 3586) = 0;
      v60 = *(_QWORD *)(v59 + 384);
      *(_BYTE *)(v59 + 3585) = 0;
      v68 = *(_QWORD *)(v59 + 376);
      v67 = *(_OWORD *)(v59 + 360);
      sub_140AFFC30((__int64)&v79, v60, (__int64)&v88, &v67, *(_DWORD *)(v59 + 3576), *(_DWORD *)(v59 + 3580));
      v43 = 1;
      result = 0;
      v42 = (_BYTE *)v108;
LABEL_60:
      v42[3584] = v43;
      return result;
  }
}
