// module: codexmate_lib/commands/system
// addr: 0x140021540
// name: sub_140021540
// win 1.2.1 | module src/commands/system.rs | attributed via panic-Location xref (win-native)
void __fastcall __noreturn sub_140021540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // esi
  _BOOL8 v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // of
  __int64 v12; // rax
  __int64 v13; // r8
  bool v14; // cc
  __int64 v15; // r8
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  char v25; // al
  _DWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rsi
  _DWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rcx
  int v52; // eax
  bool v53; // zf
  void *v54; // rax
  _BYTE *v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  char v73; // al
  __int128 v74; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v75[100]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v76[24]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v77; // [rsp+378h] [rbp+2F8h]
  __int128 v78; // [rsp+690h] [rbp+610h] BYREF
  __int64 v79; // [rsp+6A0h] [rbp+620h]
  __int128 *v80; // [rsp+6A8h] [rbp+628h]
  unsigned __int8 v81; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v82; // [rsp+6B8h] [rbp+638h]
  __int64 v83; // [rsp+6C8h] [rbp+648h]
  __int64 v84; // [rsp+6D0h] [rbp+650h]
  __int128 *v85; // [rsp+6D8h] [rbp+658h] BYREF
  __int128 v86; // [rsp+6E0h] [rbp+660h]
  __int64 v87; // [rsp+6F0h] [rbp+670h]
  __int128 *v88; // [rsp+708h] [rbp+688h] BYREF
  __int128 v89; // [rsp+710h] [rbp+690h] BYREF
  __int128 v90; // [rsp+720h] [rbp+6A0h]
  const char *v91; // [rsp+730h] [rbp+6B0h]
  __int64 v92; // [rsp+738h] [rbp+6B8h]
  __int128 v93; // [rsp+740h] [rbp+6C0h]
  __int64 v94; // [rsp+750h] [rbp+6D0h]
  __int64 v95; // [rsp+758h] [rbp+6D8h]
  void *v96; // [rsp+760h] [rbp+6E0h]
  __int64 v97; // [rsp+768h] [rbp+6E8h]
  __int64 v98; // [rsp+778h] [rbp+6F8h] BYREF
  _DWORD *v99; // [rsp+780h] [rbp+700h]
  __int64 v100; // [rsp+788h] [rbp+708h]
  __int64 v101; // [rsp+790h] [rbp+710h]
  __int64 v102; // [rsp+798h] [rbp+718h]
  char v103; // [rsp+7A7h] [rbp+727h] BYREF
  __int64 v104; // [rsp+7A8h] [rbp+728h]
  char v105; // [rsp+7B7h] [rbp+737h]
  __int64 v106; // [rsp+7B8h] [rbp+738h]

  v106 = -2;
  v84 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( dword_141EC24E8 )
            sub_141698659(&byte_141EC24C8);
          LOBYTE(a1) = 1;
          if ( _InterlockedCompareExchange8(&byte_141EC24C8, 1, 0) )
            sub_1416C15B0(&byte_141EC24C8);
          if ( 2 * *off_141EC90B8 )
          {
            v5 = sub_1416C2250(a1, a2);
            LOBYTE(v5) = v5 ^ 1;
          }
          else
          {
            v5 = 0;
          }
          v6 = byte_141EC24C9 != 0;
          *(_QWORD *)&v76[8] = &byte_141EC24C8;
          v76[16] = v5;
          *(_QWORD *)v76 = v6;
          if ( !byte_141EC24C9 )
            break;
          sub_141487490(1, 0);
          if ( !(_BYTE)v5 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(a1, a2) )
            byte_141EC24C9 = 1;
          v4 = byte_141EC24C8;
          byte_141EC24C8 = 0;
          if ( v4 == 2 )
            WakeByAddressSingle(&byte_141EC24C8);
        }
        LODWORD(v104) = v5;
        v105 = 1;
        LODWORD(v89) = sub_141475580(v6, a2, a3, a4);
        DWORD1(v89) = v7;
        v105 = 1;
        sub_141475530(v76, &v89, 3577643008LL, 27111902);
        v8 = 0;
        if ( !v76[0] )
          v8 = *(_QWORD *)&v76[8];
        v9 = qword_141EC24D8;
        if ( qword_141EC24D8 <= 0 )
          v9 = 0;
        v10 = (v8 - v9 >= 0) + 0x7FFFFFFFFFFFFFFFLL;
        v11 = __OFSUB__(v8, v9);
        v12 = v8 - v9;
        v13 = qword_141EC24D0;
        if ( v11 )
          v12 = v10;
        if ( (unsigned __int64)qword_141EC24D0 < 0x1F )
          v13 = 30;
        v14 = v13 <= v12;
        v15 = v13 - v12;
        if ( v14 )
          break;
        sub_141471F80(&unk_141EC24E0, &byte_141EC24C8, v15, 0);
        if ( byte_141EC24C9 )
        {
          if ( !(_BYTE)v104 )
          {
            if ( 2 * *off_141EC90B8 )
            {
              v105 = 0;
              if ( !(unsigned __int8)sub_1416C2250(a1, a2) )
                byte_141EC24C9 = 1;
            }
          }
          v16 = byte_141EC24C8;
          byte_141EC24C8 = 0;
          if ( v16 == 2 )
          {
            v105 = 0;
            WakeByAddressSingle(&byte_141EC24C8);
          }
          goto LABEL_29;
        }
        if ( !(_BYTE)v104 && 2 * *off_141EC90B8 )
        {
          v105 = 0;
          byte_141EC24C9 = (unsigned __int8)sub_1416C2250(a1, a2) == 0;
        }
        v24 = byte_141EC24C8;
        byte_141EC24C8 = 0;
        if ( v24 == 2 )
        {
LABEL_51:
          v105 = 0;
          WakeByAddressSingle(&byte_141EC24C8);
        }
      }
      v17 = byte_141EC9320;
      byte_141EC9320 = 1;
      if ( !v17 )
        break;
      sub_141471F80(&unk_141EC24E0, &byte_141EC24C8, 1, 0);
      if ( byte_141EC24C9 )
      {
        if ( !(_BYTE)v104 )
        {
          if ( 2 * *off_141EC90B8 )
          {
            v105 = 0;
            if ( !(unsigned __int8)sub_1416C2250(a1, a2) )
              byte_141EC24C9 = 1;
          }
        }
        v18 = byte_141EC24C8;
        byte_141EC24C8 = 0;
        if ( v18 == 2 )
        {
          v105 = 0;
          WakeByAddressSingle(&byte_141EC24C8);
        }
LABEL_29:
        v105 = 0;
        sub_141487490(1, 0);
      }
      else
      {
        if ( !(_BYTE)v104 && 2 * *off_141EC90B8 )
        {
          v105 = 0;
          byte_141EC24C9 = (unsigned __int8)sub_1416C2250(a1, a2) == 0;
        }
        v25 = byte_141EC24C8;
        byte_141EC24C8 = 0;
        if ( v25 == 2 )
          goto LABEL_51;
      }
    }
    if ( !(_BYTE)v104 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(30, v10) )
      byte_141EC24C9 = 1;
    v19 = byte_141EC24C8;
    byte_141EC24C8 = 0;
    if ( v19 == 2 )
      WakeByAddressSingle(&byte_141EC24C8);
    LOBYTE(v15) = 1;
    sub_1403EBE40(&v74, v84, v15);
    sub_141684120(&v76[16], v75, 800);
    *(_OWORD *)v76 = v74;
    if ( (_QWORD)v74 != -2 )
    {
      if ( (_QWORD)v74 == -1 )
      {
        v21 = &v76[8];
        *(_QWORD *)&v90 = v77;
        v89 = *(_OWORD *)&v76[8];
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v85 = &v89;
          *(_QWORD *)&v86 = sub_1400015F0;
          *(_QWORD *)&v74 = 0;
          *((_QWORD *)&v74 + 1) = aCodexmateLibCo_13;
          v75[0] = 31;
          v75[1] = 0;
          v75[2] = aSrcCommandsSys;
          v75[3] = 22;
          v75[4] = 2;
          v75[5] = aCodexmateLibCo_13;
          v75[6] = 31;
          v75[7] = 0x28500000001LL;
          v75[8] = &unk_1416CE290;
          v75[9] = &v85;
          sub_1412C36A0(&v103, &v74);
        }
        v20 = v89;
        if ( (_QWORD)v89 )
          sub_140001660(*((_QWORD *)&v89 + 1), v89, 1);
      }
      goto LABEL_117;
    }
    if ( *(_QWORD *)off_141EC8D80 )
    {
      *(_QWORD *)&v89 = 0;
      *((_QWORD *)&v89 + 1) = aCodexmateLibCo_13;
      v90 = 0x1Fu;
      v91 = aSrcCommandsSys;
      v92 = 22;
      *(_QWORD *)&v93 = 1;
      *((_QWORD *)&v93 + 1) = aCodexmateLibCo_13;
      v94 = 31;
      v95 = 0x28800000001LL;
      v96 = &unk_1416CE2FC;
      v97 = 103;
      sub_1412C36A0(&v103, &v89);
    }
    *(_QWORD *)&v78 = 0;
    v79 = 0;
    nullsub_1(v21);
    v26 = (_DWORD *)sub_140001650(4, 1);
    if ( !v26 )
      sub_1416C2D4B(1, 4);
    *v26 = 1701869940;
    v98 = 4;
    v99 = v26;
    v100 = 4;
    nullsub_1(v27);
    v28 = sub_140001650(5, 1);
    v104 = v28;
    if ( !v28 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v28 + 4) = 114;
    *(_DWORD *)v28 = 1869771365;
    LOBYTE(v89) = 3;
    *((_QWORD *)&v89 + 1) = 5;
    *(_QWORD *)&v90 = v28;
    *((_QWORD *)&v90 + 1) = 5;
    sub_140307860(&v85, &v78, &v98, &v89);
    if ( (unsigned __int8)v85 > 2u )
    {
      if ( (unsigned __int8)v85 == 3 )
      {
        v34 = v86;
        if ( !(_QWORD)v86 )
          goto LABEL_82;
        v35 = *((_QWORD *)&v86 + 1);
        v36 = 1;
        goto LABEL_81;
      }
      if ( (unsigned __int8)v85 == 4 )
      {
        v29 = *((_QWORD *)&v86 + 1);
        v102 = v87;
        v101 = *((_QWORD *)&v86 + 1);
        v104 = 0;
        while ( v102 != v104 )
        {
          ++v104;
          v37 = v29 + 32;
          sub_1402C3260();
          v29 = v37;
        }
        if ( (_QWORD)v86 )
        {
          v34 = 32 * v86;
          v36 = 8;
          v35 = v101;
LABEL_81:
          sub_140001660(v35, v34, v36);
        }
      }
      else if ( (unsigned __int8)v85 != 255 )
      {
        if ( (_QWORD)v86 )
        {
          v32 = v87;
          *((_QWORD *)&v89 + 1) = 0;
          v90 = v86;
          v92 = 0;
          v93 = v86;
          v33 = 1;
        }
        else
        {
          v33 = 0;
          v32 = 0;
        }
        *(_QWORD *)&v89 = v33;
        v91 = (const char *)v33;
        v94 = v32;
        sub_140308C30(&v98, &v89, v30, v31);
        while ( v98 )
        {
          v80 = &v89;
          v88 = (__int128 *)(v98 + 32 * v100);
          v67 = *(_QWORD *)(v98 + 24 * v100 + 360);
          if ( v67 )
            sub_140001660(*(_QWORD *)(v98 + 24 * v100 + 368), v67, 1);
          sub_140322890(&v88);
          sub_140308C30(&v98, &v89, v68, v69);
        }
      }
    }
LABEL_82:
    nullsub_1(v29);
    v38 = (_DWORD *)sub_140001650(7, 1);
    if ( !v38 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v38 + 3) = 1701273971;
    *v38 = 1936942445;
    v98 = 7;
    v99 = v38;
    v100 = 7;
    nullsub_1(v39);
    v40 = sub_140001650(54, 1);
    v104 = v40;
    if ( !v40 )
      sub_1416C2D4B(1, 54);
    *(_OWORD *)(v40 + 32) = xmmword_1416CE34F;
    *(_OWORD *)(v40 + 16) = xmmword_1416CE33F;
    *(_OWORD *)v40 = xmmword_1416CE32F;
    *(_QWORD *)(v40 + 46) = 0xB8B8E582BCE5B78EuLL;
    LOBYTE(v89) = 3;
    *((_QWORD *)&v89 + 1) = 54;
    *(_QWORD *)&v90 = v40;
    *((_QWORD *)&v90 + 1) = 54;
    sub_140307860(&v85, &v78, &v98, &v89);
    if ( (unsigned __int8)v85 > 2u )
    {
      if ( (unsigned __int8)v85 == 3 )
      {
        v45 = v86;
        if ( !(_QWORD)v86 )
          goto LABEL_98;
        v46 = *((_QWORD *)&v86 + 1);
        v47 = 1;
        goto LABEL_97;
      }
      if ( (unsigned __int8)v85 == 4 )
      {
        v48 = *((_QWORD *)&v86 + 1);
        v102 = v87;
        v101 = *((_QWORD *)&v86 + 1);
        v104 = 0;
        while ( v102 != v104 )
        {
          ++v104;
          v49 = v48 + 32;
          sub_1402C3260();
          v48 = v49;
        }
        if ( (_QWORD)v86 )
        {
          v45 = 32 * v86;
          v47 = 8;
          v46 = v101;
LABEL_97:
          sub_140001660(v46, v45, v47);
        }
      }
      else if ( (unsigned __int8)v85 != 255 )
      {
        if ( (_QWORD)v86 )
        {
          v43 = v87;
          *((_QWORD *)&v89 + 1) = 0;
          v90 = v86;
          v92 = 0;
          v93 = v86;
          v44 = 1;
        }
        else
        {
          v44 = 0;
          v43 = 0;
        }
        *(_QWORD *)&v89 = v44;
        v91 = (const char *)v44;
        v94 = v43;
        sub_140308C30(&v98, &v89, v41, v42);
        while ( v98 )
        {
          v80 = &v89;
          v88 = (__int128 *)(v98 + 32 * v100);
          v70 = *(_QWORD *)(v98 + 24 * v100 + 360);
          if ( v70 )
            sub_140001660(*(_QWORD *)(v98 + 24 * v100 + 368), v70, 1);
          sub_140322890(&v88);
          sub_140308C30(&v98, &v89, v71, v72);
        }
      }
    }
LABEL_98:
    v83 = v79;
    v82 = v78;
    v81 = 5;
    v50 = *(_QWORD *)(v84 + 136);
    if ( (unsigned __int8)sub_14122A860(aRuntimeNotify, 14) )
    {
      *(_QWORD *)&v89 = -1;
      *((_QWORD *)&v89 + 1) = &v81;
      sub_14059D5C0((unsigned int)&v85, v50 + 16, (unsigned int)aRuntimeNotify, 14, (__int64)&v89);
      v52 = v81;
      v53 = v81 == 3;
      if ( v81 < 3u )
        goto LABEL_115;
    }
    else
    {
      nullsub_1(v51);
      v54 = (void *)sub_140001650(14, 1);
      if ( !v54 )
        sub_1416C2D4B(1, 14);
      qmemcpy(v54, "runtime-notify", 14);
      v87 = 14;
      v21 = (_BYTE *)0x8000000000000023LL;
      v85 = (__int128 *)0x8000000000000023LL;
      *(_QWORD *)&v86 = 14;
      *((_QWORD *)&v86 + 1) = v54;
      v52 = v81;
      v53 = v81 == 3;
      if ( v81 < 3u )
        goto LABEL_115;
    }
    if ( v53 )
    {
      v20 = v82;
      if ( !(_QWORD)v82 )
        goto LABEL_115;
      v56 = *((_QWORD *)&v82 + 1);
      v57 = 1;
      goto LABEL_114;
    }
    if ( v52 != 4 )
    {
      if ( (_QWORD)v82 )
      {
        v58 = v83;
        *((_QWORD *)&v89 + 1) = 0;
        v90 = v82;
        v92 = 0;
        v93 = v82;
        v59 = 1;
      }
      else
      {
        v59 = 0;
        v58 = 0;
      }
      *(_QWORD *)&v89 = v59;
      v91 = (const char *)v59;
      v94 = v58;
      sub_140308C30(&v98, &v89, v22, v23);
      while ( v98 )
      {
        v88 = &v89;
        *(_QWORD *)&v78 = v98 + 32 * v100;
        v64 = *(_QWORD *)(v98 + 24 * v100 + 360);
        if ( v64 )
          sub_140001660(*(_QWORD *)(v98 + 24 * v100 + 368), v64, 1);
        sub_140322890(&v78);
        sub_140308C30(&v98, &v89, v65, v66);
      }
      goto LABEL_115;
    }
    v21 = *((_BYTE **)&v82 + 1);
    v102 = v83;
    v101 = *((_QWORD *)&v82 + 1);
    v104 = 0;
    while ( v102 != v104 )
    {
      ++v104;
      v55 = v21 + 32;
      sub_1402C3260();
      v21 = v55;
    }
    v20 = v82;
    if ( (_QWORD)v82 )
    {
      v56 = *((_QWORD *)&v82 + 1);
      v20 = 32 * v82;
      v57 = 8;
LABEL_114:
      sub_140001660(v56, v20, v57);
    }
LABEL_115:
    if ( v85 != (__int128 *)-1LL )
      sub_140014760(&v85);
LABEL_117:
    byte_141EC9320 = 0;
    LODWORD(v85) = sub_141475580(v21, v20, v22, v23);
    HIDWORD(v85) = v60;
    sub_141475530(&v89, &v85, 3577643008LL, 27111902);
    if ( (_BYTE)v89 )
    {
      v62 = 0;
      if ( !dword_141EC24E8 )
        goto LABEL_121;
    }
    else
    {
      v62 = *((_QWORD *)&v89 + 1);
      if ( !dword_141EC24E8 )
        goto LABEL_121;
    }
    sub_141698659(&byte_141EC24C8);
LABEL_121:
    LOBYTE(v61) = 1;
    if ( _InterlockedCompareExchange8(&byte_141EC24C8, 1, 0) )
      sub_1416C15B0(&byte_141EC24C8);
    if ( 2 * *off_141EC90B8 )
    {
      v63 = sub_1416C2250(v61, a2);
      LOBYTE(v63) = v63 ^ 1;
      a1 = (unsigned __int8)byte_141EC24C9;
      if ( !byte_141EC24C9 )
      {
LABEL_148:
        LODWORD(v104) = v63;
        qword_141EC24D8 = v62;
        sub_141471F60(&unk_141EC24E0);
        if ( (_BYTE)v104 || !(2 * *off_141EC90B8) )
          goto LABEL_150;
        goto LABEL_159;
      }
    }
    else
    {
      v63 = 0;
      a1 = (unsigned __int8)byte_141EC24C9;
      if ( !byte_141EC24C9 )
        goto LABEL_148;
    }
    if ( (_BYTE)v63 || !(2 * *off_141EC90B8) )
      goto LABEL_150;
LABEL_159:
    if ( !(unsigned __int8)sub_1416C2250(a1, a2) )
      byte_141EC24C9 = 1;
LABEL_150:
    v73 = byte_141EC24C8;
    byte_141EC24C8 = 0;
    if ( v73 == 2 )
      WakeByAddressSingle(&byte_141EC24C8);
    if ( *(_QWORD *)v76 != -1 )
    {
      if ( *(_DWORD *)v76 == -2 )
      {
        v104 = *(_QWORD *)&v76[8];
        v102 = *(_QWORD *)&v76[16];
        if ( **(_QWORD **)&v76[16] )
          (**(void (__fastcall ***)(__int64))&v76[16])(v104);
        a1 = v104;
        a2 = *(_QWORD *)(v102 + 8);
        if ( a2 )
          sub_140001660(v104, a2, *(_QWORD *)(v102 + 16));
      }
      else
      {
        sub_140015A70(v76);
      }
    }
  }
}