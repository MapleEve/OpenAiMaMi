// round3 (2026-08-07) item1递归展开目标4/4 win侧确认体：router_unlock_auth::commit_auth_for_router
// win addr=0x140bf4ce0 size=0xecb(3787B) FULL BODY, NO TRUNCATION（本文件为mcp__ida-pro-mcp-win__decompile()原始返回逐字节落盘，未做任何摘要/裁剪）
// 已在win IDB改名为 commit_auth_for_router，归入dirtree /codexmate_lib/core/relay/router_unlock_auth/commit_auth_for_router，加中文注释，idb_save()确认落盘
// 确认依据：①'OPENAI_API_KEY'(14B，qmemcpy逐字节构造)与mac侧完全相同的14字节常量
//          ②FileLock::acquire路径模式('.live-auth.lock'相关字符串簇)与mac account_coordination::FileLock::acquire调用完全对应
//          ③live_auth_state结果分支 v19==2(77B错误串)/v19==4(72B错误串)与mac侧v19==2(77B)/v19==4(72B)完全一致
//          ④'router-unlock-auth-marker.json'/'router-unlock-auth-backup.json'路径拼接与mac侧字符串块逐字节相同
//          ⑤a3(bool)分支结构：a3!=0时ensure_directories+FileLock+live_auth_state+managed_api_key路径；a3==0时load_auth_file+auth_is_usable_real_oauth路径，与mac if(a3){...}else{...}完全同构
// ⚠ 破坏性副作用：原子写 auth.json / router-unlock-auth-marker.json / router-unlock-auth-backup.json 三类认证相关文件

__int64 __fastcall commit_auth_for_router(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rbx
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _OWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r14
  char v34; // r12
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  char v45; // al
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int128 v62; // xmm0
  __int128 v63; // xmm2
  __int128 v64; // xmm3
  __int128 v65; // xmm1
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm2
  __int64 v73; // [rsp+20h] [rbp-60h]
  __int64 v74; // [rsp+20h] [rbp-60h]
  __int64 v75; // [rsp+20h] [rbp-60h]
  __int64 v76; // [rsp+20h] [rbp-60h]
  _BYTE v77[24]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v78; // [rsp+48h] [rbp-38h]
  __int64 v79; // [rsp+60h] [rbp-20h]
  __int64 v80; // [rsp+78h] [rbp-8h]
  char v81; // [rsp+80h] [rbp+0h]
  __int128 v82; // [rsp+88h] [rbp+8h] BYREF
  __int64 v83; // [rsp+98h] [rbp+18h]
  __int64 v84; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v85; // [rsp+A8h] [rbp+28h]
  __int64 v86; // [rsp+B0h] [rbp+30h]
  __int64 v87; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v88; // [rsp+C8h] [rbp+48h]
  __int64 v89; // [rsp+D0h] [rbp+50h]
  __int128 v90; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v91; // [rsp+F0h] [rbp+70h]
  __int128 v92; // [rsp+100h] [rbp+80h]
  __int128 v93; // [rsp+110h] [rbp+90h]
  __int128 v94; // [rsp+120h] [rbp+A0h]
  __int64 v95; // [rsp+130h] [rbp+B0h]
  __int128 v96; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v97; // [rsp+150h] [rbp+D0h]
  __int128 v98; // [rsp+160h] [rbp+E0h]
  __int128 v99; // [rsp+170h] [rbp+F0h]
  __int128 v100; // [rsp+180h] [rbp+100h]
  __int64 v101; // [rsp+190h] [rbp+110h]
  __int64 v102; // [rsp+1A0h] [rbp+120h]
  __int64 v103; // [rsp+1A8h] [rbp+128h]
  __int64 v104; // [rsp+1B8h] [rbp+138h]
  __int64 v105; // [rsp+1C0h] [rbp+140h]
  __int64 v106; // [rsp+1D0h] [rbp+150h]
  __int64 v107; // [rsp+1D8h] [rbp+158h]
  __int128 v108; // [rsp+1F0h] [rbp+170h] BYREF
  __int64 v109; // [rsp+200h] [rbp+180h]
  __int128 v110; // [rsp+210h] [rbp+190h] BYREF
  __int128 v111; // [rsp+220h] [rbp+1A0h]
  __int128 v112; // [rsp+230h] [rbp+1B0h]
  __int128 v113; // [rsp+240h] [rbp+1C0h]
  __int128 v114; // [rsp+250h] [rbp+1D0h]
  __int128 v115; // [rsp+260h] [rbp+1E0h]
  __int128 v116; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v117; // [rsp+2D0h] [rbp+250h]
  HANDLE hObject; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v119; // [rsp+2E0h] [rbp+260h]
  __int64 v120; // [rsp+2E8h] [rbp+268h]
  char v121; // [rsp+2F5h] [rbp+275h]
  char v122; // [rsp+2F6h] [rbp+276h]
  char v123; // [rsp+2F7h] [rbp+277h]
  __int64 v124; // [rsp+2F8h] [rbp+278h]

  v124 = -2;
  if ( a3 )
  {
    v5 = sub_140539CD0(a2);
    if ( v5 )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v5;
      return a1;
    }
    sub_14151B4E0((unsigned int)&v90, a2[33], a2[34], (unsigned int)aLiveAuthLockli, 15);
    v120 = *((_QWORD *)&v90 + 1);
    sub_1409A88F0((unsigned int)&v110, DWORD2(v90), v91, (unsigned int)&aLiveAuthLockli[15], 9);
    v12 = v110;
    if ( (_QWORD)v110 != -1 )
    {
      v100 = v115;
      v99 = v114;
      v98 = v113;
      v97 = v112;
      v96 = v111;
    }
    v13 = *((void **)&v110 + 1);
    if ( (_QWORD)v90 )
      sub_140001660(v120, v90, 1);
    if ( (_DWORD)v12 != -1 )
    {
      *(_OWORD *)(a1 + 80) = v100;
      v14 = v96;
      v15 = v97;
      v16 = v98;
      *(_OWORD *)(a1 + 64) = v99;
      *(_OWORD *)(a1 + 48) = v16;
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 16) = v14;
      *(_QWORD *)a1 = v12;
      *(_QWORD *)(a1 + 8) = v13;
      return a1;
    }
    hObject = v13;
    v17 = a2[97];
    v18 = a2[98];
    sub_14151B4E0((unsigned int)&v84, v17, v18, (unsigned int)&unk_14187DF1A, 30);
    sub_14151B4E0((unsigned int)&v87, v17, v18, (unsigned int)&unk_14187DEFC, 30);
    v19 = sub_140BF2D10(a2);
    if ( v19 == 2 )
    {
      nullsub_1(v21, v20, v22, v23, v74);
      v25 = (_OWORD *)sub_140001650(77, 1);
      if ( !v25 )
        sub_14176E54B(1, 77);
      *(_OWORD *)((char *)v25 + 61) = *(__int128 *)((char *)&xmmword_14187E848 + 13);
      v25[3] = xmmword_14187E848;
      v25[2] = xmmword_14187E838;
      v25[1] = xmmword_14187E828;
      *v25 = xmmword_14187E818;
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 77;
      *(_QWORD *)(a1 + 16) = v25;
      *(_QWORD *)(a1 + 24) = 77;
      goto LABEL_43;
    }
    if ( v19 == 4 )
    {
      nullsub_1(v21, v20, v22, v23, v74);
      v24 = sub_140001650(72, 1);
      if ( !v24 )
        sub_14176E54B(1, 72);
      *(_OWORD *)(v24 + 48) = xmmword_14187E895;
      *(_OWORD *)(v24 + 32) = xmmword_14187E885;
      *(_OWORD *)(v24 + 16) = xmmword_14187E875;
      *(_OWORD *)v24 = xmmword_14187E865;
      *(_QWORD *)(v24 + 64) = 0x8280E379654B2049uLL;
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 72;
      *(_QWORD *)(a1 + 16) = v24;
      *(_QWORD *)(a1 + 24) = 72;
      goto LABEL_43;
    }
    sub_140BF2F10(&v116, a2);
    if ( (_QWORD)v116 != -1 )
    {
      v119 = *((_QWORD *)&v116 + 1);
      v120 = v116;
      v121 = 1;
      if ( (unsigned __int8)sub_140BF7410(a2) )
      {
        *(_QWORD *)a1 = -1;
        if ( v120 )
          sub_140001660(v119, v120, 1);
        goto LABEL_43;
      }
      v31 = v85;
      v32 = v86;
      v33 = sub_140B1EA30();
      sub_14152E0B0(&v96, v88, v89);
      if ( (_DWORD)v96 == 2 )
      {
        *((_QWORD *)&v90 + 1) = *((_QWORD *)&v96 + 1);
        *(_QWORD *)&v90 = 2;
      }
      else
      {
        v90 = v96;
        v95 = v101;
        v94 = v100;
        v93 = v99;
        v92 = v98;
        v91 = v97;
        v45 = 1;
        if ( (_QWORD)v96 != 2 )
          goto LABEL_66;
      }
      sub_1400478E0((char *)&v90 + 8);
      v45 = 0;
LABEL_66:
      *(_OWORD *)v77 = v116;
      *(_QWORD *)&v77[16] = v117;
      v78 = -1;
      v79 = -1;
      v80 = v33;
      v81 = v45;
      sub_140B9CFE0(&v110, v31, v32, v77);
      if ( (_DWORD)v110 == -1 )
      {
        sub_14049CE60(v77);
        *(_QWORD *)a1 = -1;
      }
      else
      {
        *(_OWORD *)(a1 + 80) = v115;
        *(_OWORD *)(a1 + 64) = v114;
        v46 = v110;
        v47 = v111;
        v48 = v112;
        *(_OWORD *)(a1 + 48) = v113;
        *(_OWORD *)(a1 + 32) = v48;
        *(_OWORD *)(a1 + 16) = v47;
        *(_OWORD *)a1 = v46;
        sub_14049CE60(v77);
      }
      goto LABEL_43;
    }
    v29 = a2[5];
    v30 = a2[6];
    sub_14152E0B0(&v110, v29, v30);
    if ( (_DWORD)v110 == 2 )
    {
      *((_QWORD *)&v96 + 1) = *((_QWORD *)&v110 + 1);
      *(_QWORD *)&v96 = 2;
    }
    else
    {
      v96 = v110;
      v101 = v115;
      v100 = v114;
      v99 = v113;
      v98 = v112;
      v97 = v111;
      if ( (_QWORD)v110 != 2 )
      {
        sub_141534D60(&v96, v29, v30);
        if ( (_QWORD)v96 == -1 )
        {
          sub_140BB09B0(&v110, *((_QWORD *)&v96 + 1));
          v62 = v111;
          v63 = v113;
          v64 = v114;
          *(_OWORD *)(a1 + 32) = v112;
          *(_OWORD *)(a1 + 48) = v63;
          *(_OWORD *)(a1 + 64) = v64;
          *(_OWORD *)(a1 + 80) = v115;
          v65 = v110;
          *(_OWORD *)(a1 + 16) = v62;
          *(_OWORD *)a1 = v65;
          goto LABEL_43;
        }
        v119 = *((_QWORD *)&v96 + 1);
        v120 = v96;
        sub_140BF7D60(&v90, *((_QWORD *)&v96 + 1), v97);
        if ( (_QWORD)v90 == -1 )
        {
          v69 = sub_140A6D5E0(v29, v30, v88, v89);
          if ( !v69 )
          {
            v34 = 1;
            if ( v120 )
              sub_140001660(v119, v120, 1);
LABEL_62:
            sub_1413FD8E0(&v110);
            v90 = v110;
            *(_QWORD *)&v110 = &off_14187E780;
            *((_QWORD *)&v110 + 1) = sub_1402DDC10;
            *(_QWORD *)&v111 = &v90;
            *((_QWORD *)&v111 + 1) = sub_140512940;
            sub_141543AF0(&v96, &unk_14187E790, &v110);
            v108 = v96;
            v109 = v97;
            sub_141543F00(&v110, &v108);
            v119 = *((_QWORD *)&v110 + 1);
            v120 = v110;
            v35 = v111;
            v36 = sub_140B1EA30();
            *(_QWORD *)&v96 = v120;
            *((_QWORD *)&v96 + 1) = v119;
            *(_QWORD *)&v97 = v35;
            *((_QWORD *)&v97 + 1) = -1;
            *(_QWORD *)&v99 = -1;
            *((_QWORD *)&v100 + 1) = v36;
            LOBYTE(v101) = v34;
            v37 = v85;
            sub_140B9CFE0(&v110, v85, v86, &v96);
            if ( (_DWORD)v110 == -1 )
            {
              *(_QWORD *)&v82 = 0;
              v83 = 0;
              nullsub_1(v39, v38, v40, v41, v74);
              v49 = sub_140001650(9, 1);
              if ( !v49 )
                sub_14176E54B(1, 9);
              *(_QWORD *)v49 = 0x646F6D5F68747561LL;
              *(_BYTE *)(v49 + 8) = 101;
              *(_QWORD *)&v116 = 9;
              *((_QWORD *)&v116 + 1) = v49;
              v117 = 9;
              v123 = 1;
              sub_1404A1EA0(&v110, &off_14187E798);
              if ( (_BYTE)v110 == 0xFF )
              {
                *(_QWORD *)&v90 = *((_QWORD *)&v110 + 1);
                sub_14176E860(
                  (unsigned int)aCalledResultUn_17,
                  43,
                  (unsigned int)&v90,
                  (unsigned int)&off_14186ACE8,
                  (__int64)&off_14187E7A8);
              }
              v91 = v111;
              v90 = v110;
              v123 = 0;
              sub_1401A27E0(&v110, &v82, &v116, &v90);
              if ( (_BYTE)v110 != 0xFF )
                sub_1401FF690(&v110);
              nullsub_1(v51, v50, v52, v53, v75);
              v54 = (void *)sub_140001650(14, 1);
              if ( !v54 )
                sub_14176E54B(1, 14);
              qmemcpy(v54, "OPENAI_API_KEY", 14);
              *(_QWORD *)&v116 = 14;
              *((_QWORD *)&v116 + 1) = v54;
              v117 = 14;
              v122 = 1;
              sub_1404A0860(&v110, &v108);
              if ( (_BYTE)v110 == 0xFF )
              {
                *(_QWORD *)&v90 = *((_QWORD *)&v110 + 1);
                sub_14176E860(
                  (unsigned int)aCalledResultUn_17,
                  43,
                  (unsigned int)&v90,
                  (unsigned int)&off_14186ACE8,
                  (__int64)&off_14187E7A8);
              }
              v91 = v111;
              v90 = v110;
              v122 = 0;
              sub_1401A27E0(&v110, &v82, &v116, &v90);
              if ( (_BYTE)v110 != 0xFF )
                sub_1401FF690(&v110);
              *(_OWORD *)&v77[8] = v82;
              v78 = v83;
              v77[0] = 5;
              sub_140B9D420(&v110, v29, v30, v77);
              if ( (_DWORD)v110 == -1 )
              {
                if ( (unsigned __int8)sub_140BF2D10(a2) == 1 && (unsigned __int8)sub_140BF7410(a2) )
                {
                  *(_QWORD *)a1 = -1;
                  sub_1401FF690(v77);
                  sub_14049CE60(&v96);
                  if ( (_QWORD)v108 )
                    sub_140001660(*((_QWORD *)&v108 + 1), v108, 1);
                  if ( v87 )
                    sub_140001660(v88, v87, 1);
                  v26 = v84;
                  if ( !v84 )
                    goto LABEL_48;
                  v27 = v37;
                  goto LABEL_47;
                }
                nullsub_1(v59, v58, v60, v61, v76);
                v66 = sub_140001650(88, 1);
                if ( !v66 )
                  sub_14176E54B(1, 88);
                *(_OWORD *)(v66 + 64) = xmmword_14187E800;
                *(_OWORD *)(v66 + 48) = xmmword_14187E7F0;
                *(_OWORD *)(v66 + 32) = xmmword_14187E7E0;
                *(_OWORD *)(v66 + 16) = xmmword_14187E7D0;
                *(_OWORD *)v66 = xmmword_14187E7C0;
                *(_QWORD *)(v66 + 80) = 0x8280E381AFE8A4AEuLL;
                *(_QWORD *)a1 = 10;
                *(_QWORD *)(a1 + 8) = 88;
                *(_QWORD *)(a1 + 16) = v66;
                *(_QWORD *)(a1 + 24) = 88;
              }
              else
              {
                *(_OWORD *)(a1 + 80) = v115;
                *(_OWORD *)(a1 + 64) = v114;
                v55 = v110;
                v56 = v111;
                v57 = v112;
                *(_OWORD *)(a1 + 48) = v113;
                *(_OWORD *)(a1 + 32) = v57;
                *(_OWORD *)(a1 + 16) = v56;
                *(_OWORD *)a1 = v55;
              }
              sub_1401FF690(v77);
            }
            else
            {
              *(_OWORD *)(a1 + 80) = v115;
              *(_OWORD *)(a1 + 64) = v114;
              v42 = v110;
              v43 = v111;
              v44 = v112;
              *(_OWORD *)(a1 + 48) = v113;
              *(_OWORD *)(a1 + 32) = v44;
              *(_OWORD *)(a1 + 16) = v43;
              *(_OWORD *)a1 = v42;
            }
            sub_14049CE60(&v96);
            v67 = v108;
            if ( (_QWORD)v108 )
            {
              v68 = *((_QWORD *)&v108 + 1);
LABEL_96:
              sub_140001660(v68, v67, 1);
            }
LABEL_43:
            if ( v87 )
              sub_140001660(v88, v87, 1);
            v26 = v84;
            if ( !v84 )
              goto LABEL_48;
            v27 = v85;
LABEL_47:
            sub_140001660(v27, v26, 1);
LABEL_48:
            *(_QWORD *)&v110 = sub_1412A6C50(&hObject);
            if ( (_QWORD)v110 )
              sub_1400478E0(&v110);
            CloseHandle(hObject);
            return a1;
          }
          sub_140BB0A40(&v110, v69);
        }
        else
        {
          *(_QWORD *)&v97 = v91;
          v96 = v90;
          sub_140BB0AD0(&v110, &v96);
        }
        *(_OWORD *)(a1 + 80) = v115;
        *(_OWORD *)(a1 + 64) = v114;
        v70 = v110;
        v71 = v111;
        v72 = v112;
        *(_OWORD *)(a1 + 48) = v113;
        *(_OWORD *)(a1 + 32) = v72;
        *(_OWORD *)(a1 + 16) = v71;
        *(_OWORD *)a1 = v70;
        v67 = v120;
        v68 = v119;
        if ( !v120 )
          goto LABEL_43;
        goto LABEL_96;
      }
    }
    sub_1400478E0((char *)&v96 + 8);
    v34 = 0;
    goto LABEL_62;
  }
  sub_140B1E6D0((__int64)&v110);
  if ( (_QWORD)v110 == -2 )
  {
    sub_140B812E0((char *)&v110 + 8);
  }
  else
  {
    sub_14172B820(&v96, &v110, 176);
    v10 = sub_140BF6630(&v96);
    if ( (_QWORD)v96 != -1 && (_QWORD)v96 )
      sub_140001660(*((_QWORD *)&v96 + 1), v96, 1);
    if ( *((_QWORD *)&v97 + 1) != -1 && *((_QWORD *)&v97 + 1) )
      sub_140001660(v98, *((_QWORD *)&v97 + 1), 1);
    if ( (_QWORD)v99 != -1 && (_QWORD)v99 )
      sub_140001660(*((_QWORD *)&v99 + 1), v99, 1);
    if ( *((_QWORD *)&v100 + 1) != -1 && *((_QWORD *)&v100 + 1) )
      sub_140001660(v101, *((_QWORD *)&v100 + 1), 1);
    if ( v102 != -1 && v102 )
      sub_140001660(v103, v102, 1);
    if ( v104 != -1 && v104 )
      sub_140001660(v105, v104, 1);
    v6 = v106;
    if ( v106 != -1 && v106 )
      sub_140001660(v107, v106, 1);
    if ( v10 )
    {
      *(_QWORD *)a1 = -1;
      return a1;
    }
  }
  nullsub_1(v7, v6, v8, v9, v73);
  v11 = sub_140001650(84, 1);
  if ( !v11 )
    sub_14176E54B(1, 84);
  *(_OWORD *)(v11 + 64) = xmmword_14187E25A;
  *(_OWORD *)(v11 + 48) = xmmword_14187E24A;
  *(_OWORD *)(v11 + 32) = xmmword_14187E23A;
  *(_OWORD *)(v11 + 16) = xmmword_14187E22A;
  *(_OWORD *)v11 = xmmword_14187E21A;
  *(_DWORD *)(v11 + 80) = -2105482367;
  *(_QWORD *)a1 = 10;
  *(_QWORD *)(a1 + 8) = 84;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = 84;
  return a1;
}
