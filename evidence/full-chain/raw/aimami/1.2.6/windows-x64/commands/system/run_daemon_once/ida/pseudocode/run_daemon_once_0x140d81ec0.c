// Pseudocode for run_daemon_once (EA: 0x140d81ec0, size: 0xc19)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: run_daemon_once Tauri 命令的 async 状态机 dispatcher（经 run_daemon_once 字符串精确 xref 定位，0x141887265 唯一引用者）。仅含框架代码：State/AppHandle 提取、tracing span 包装(sub_14085A6F0)、tokio coop::budget 轮询(sub_140501B40，非业务锁)。真实业
// run_daemon_once Tauri 命令的 async 状态机 dispatcher（经 run_daemon_once 字符串精确 xref 定位，0x141887265 唯一引用者）。仅含框架代码：State/AppHandle 提取、tracing span 包装(sub_14085A6F0)、tokio coop::budget 轮询(sub_140501B40，非业务锁)。真实业务体经 Instrumented<F> 动态分发(vtable @ off_1417EBF48/1417EBF30)未能静态解析，1.2.6 windows deep pass 20260806
// [补充] 边界：真实业务体经 Instrumented<F> 动态分发未能静态解析，本函数仅为框架层(State/AppHandle 提取+tracing+coop::budget)。副作用：无直接副作用，转发至 core 业务体。
char __fastcall sub_140D81EC0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  char v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  __int64 *v23; // r13
  unsigned __int64 v24; // r12
  _BYTE *v25; // rdx
  char v26; // cl
  char result; // al
  __int64 v28; // rbx
  unsigned __int8 v29; // bl
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 *v36; // rcx
  __int64 *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rdx
  _QWORD *v40; // rsi
  __int128 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-40h]
  __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+70h] [rbp-10h]
  __int128 v46; // [rsp+80h] [rbp+0h]
  __int128 v47; // [rsp+90h] [rbp+10h]
  __int128 v48; // [rsp+A0h] [rbp+20h]
  __int128 v49; // [rsp+B0h] [rbp+30h]
  __int128 v50; // [rsp+C0h] [rbp+40h]
  __int128 v51; // [rsp+D0h] [rbp+50h]
  __int128 v52; // [rsp+E0h] [rbp+60h]
  __int128 v53; // [rsp+F0h] [rbp+70h]
  __int128 v54; // [rsp+100h] [rbp+80h]
  __int128 v55; // [rsp+110h] [rbp+90h]
  __int128 v56; // [rsp+120h] [rbp+A0h] BYREF
  const char *v57; // [rsp+130h] [rbp+B0h]
  __int64 v58; // [rsp+138h] [rbp+B8h]
  unsigned __int64 v59; // [rsp+140h] [rbp+C0h]
  __int128 v60; // [rsp+148h] [rbp+C8h]
  __int128 v61; // [rsp+158h] [rbp+D8h]
  __int128 v62; // [rsp+168h] [rbp+E8h]
  __int128 v63; // [rsp+178h] [rbp+F8h]
  __int128 v64; // [rsp+188h] [rbp+108h]
  __int128 v65; // [rsp+198h] [rbp+118h]
  __int128 v66; // [rsp+1A8h] [rbp+128h]
  __int128 v67; // [rsp+1B8h] [rbp+138h]
  __int128 v68; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v69; // [rsp+1E0h] [rbp+160h]
  __int128 v70; // [rsp+1F0h] [rbp+170h]
  __int128 v71; // [rsp+200h] [rbp+180h]
  __int128 v72; // [rsp+210h] [rbp+190h]
  __int128 v73; // [rsp+220h] [rbp+1A0h]
  __int128 v74; // [rsp+230h] [rbp+1B0h]
  __int128 v75; // [rsp+240h] [rbp+1C0h]
  unsigned __int64 v76; // [rsp+250h] [rbp+1D0h] BYREF
  unsigned __int64 v77; // [rsp+258h] [rbp+1D8h]
  __int64 v78; // [rsp+260h] [rbp+1E0h]
  unsigned __int64 v79; // [rsp+268h] [rbp+1E8h]
  _BYTE v80[24]; // [rsp+270h] [rbp+1F0h]
  __int128 v81; // [rsp+288h] [rbp+208h]
  __int128 v82; // [rsp+298h] [rbp+218h]
  __int128 v83; // [rsp+2A8h] [rbp+228h]
  __int128 v84; // [rsp+2B8h] [rbp+238h]
  __int128 v85; // [rsp+2C8h] [rbp+248h]
  __int128 v86; // [rsp+2D8h] [rbp+258h]
  __int128 v87; // [rsp+2E8h] [rbp+268h]
  _QWORD v88[2]; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v89; // [rsp+3C8h] [rbp+348h] BYREF
  char v90; // [rsp+3D0h] [rbp+350h]
  int v91; // [rsp+3D1h] [rbp+351h]
  __int16 v92; // [rsp+3D5h] [rbp+355h]
  char v93; // [rsp+3D7h] [rbp+357h]
  __int64 v94; // [rsp+3D8h] [rbp+358h]
  __int64 v95; // [rsp+3E0h] [rbp+360h]
  __int64 v96; // [rsp+3E8h] [rbp+368h]
  __int128 v97; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v98; // [rsp+400h] [rbp+380h]
  __int128 v99; // [rsp+410h] [rbp+390h]
  __int128 v100; // [rsp+420h] [rbp+3A0h]
  __int128 v101; // [rsp+430h] [rbp+3B0h]
  __int128 v102; // [rsp+440h] [rbp+3C0h]
  __int128 v103; // [rsp+450h] [rbp+3D0h]
  __int128 v104; // [rsp+460h] [rbp+3E0h]
  __int64 v105; // [rsp+478h] [rbp+3F8h]
  __int64 v106; // [rsp+480h] [rbp+400h]
  char v107; // [rsp+48Fh] [rbp+40Fh] BYREF
  unsigned __int64 v108; // [rsp+490h] [rbp+410h]
  _BYTE *v109; // [rsp+498h] [rbp+418h]
  _QWORD *v110; // [rsp+4A0h] [rbp+420h]
  __int64 *v111; // [rsp+4A8h] [rbp+428h]
  __int64 v112; // [rsp+4B0h] [rbp+430h]
  char v113; // [rsp+4BFh] [rbp+43Fh]
  __int64 v114; // [rsp+4C0h] [rbp+440h]

  v114 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 2528);
  v112 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2529) = 257;
      *(_BYTE *)(a1 + 2531) = 1;
      v5 = a1 + 1456;
      sub_14172B820(a1 + 1456, a1 + 392, 1064);
      switch ( *(_BYTE *)(v3 + 2512) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_61;
        case 2:
          goto LABEL_60;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1456;
      switch ( *(_BYTE *)(a1 + 2512) )
      {
        case 0:
LABEL_4:
          v6 = (__int64 *)(v3 + 1976);
          *(_QWORD *)&v56 = aRunDaemonOnce;
          *((_QWORD *)&v56 + 1) = 15;
          v57 = aApp_4;
          v58 = 3;
          v108 = v5;
          v59 = v5;
          v60 = (unsigned __int64)v6;
          sub_1401A9630(&v76, &v56);
          v7 = ((unsigned __int64)((HIBYTE(v77) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
             | *(unsigned int *)((char *)&v77 + 1);
          v8 = v77;
          v9 = v78;
          v10 = v79;
          v11 = *(_QWORD *)v80;
          if ( v76 == -1 )
          {
            v111 = v6;
            sub_140CAB140(v108);
            v29 = 1;
            if ( *v111 == -1 )
              goto LABEL_45;
            v31 = *(_QWORD *)(v112 + 1984);
            v110 = *(_QWORD **)(v112 + 1992);
            v109 = nullptr;
            v106 = v31;
            while ( v110 != (_QWORD *)v109 )
            {
              ++v109;
              v32 = v31 + 96;
              sub_140401FB0();
              v31 = v32;
            }
            v34 = *v111;
            if ( !*v111 )
            {
LABEL_45:
              v35 = v112;
              goto LABEL_55;
            }
            v35 = v112;
            goto LABEL_54;
          }
          v55 = v86;
          v54 = v85;
          v53 = v84;
          v52 = v83;
          v51 = v82;
          v50 = v81;
          v49 = *(_OWORD *)&v80[8];
          v3 = v112;
          v12 = v112 + 2000;
          *(_QWORD *)(v112 + 2000) = v76;
          *(_BYTE *)(v3 + 2008) = v8;
          *(_BYTE *)(v3 + 2015) = BYTE6(v7);
          *(_WORD *)(v3 + 2013) = WORD2(v7);
          *(_DWORD *)(v3 + 2009) = v7;
          *(_QWORD *)(v3 + 2016) = v9;
          *(_QWORD *)(v3 + 2024) = v10;
          *(_QWORD *)(v3 + 2032) = v11;
          *(_OWORD *)(v3 + 2040) = v49;
          *(_OWORD *)(v3 + 2056) = v50;
          *(_OWORD *)(v3 + 2072) = v51;
          *(_OWORD *)(v3 + 2088) = v52;
          *(_OWORD *)(v3 + 2104) = v53;
          *(_OWORD *)(v3 + 2120) = v54;
          *(_OWORD *)(v3 + 2136) = v55;
          *(_BYTE *)(v3 + 2160) = 0;
          v13 = v3 + 2168;
          sub_14172B820(v3 + 2168, v12, 168);
          v109 = (_BYTE *)(v3 + 2504);
          *(_BYTE *)(v3 + 2504) = 0;
LABEL_7:
          v111 = (__int64 *)(v3 + 2336);
          v106 = v13;
          sub_14172B820(v3 + 2336, v13, 168);
LABEL_9:
          sub_14172B820(&v76, v111, 152);
          v15 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v113 = 1;
            v40 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v15 = v40;
          }
          if ( *((_DWORD *)v15 + 4) == 2 )
          {
            v16 = 704;
            if ( *(_BYTE *)v15 )
              v16 = 472;
            v17 = v15[1] + v16;
            v113 = 0;
            v18 = sub_14085A6F0(v17, v15, &v76, &off_1417EBF48);
          }
          else
          {
            v19 = 704;
            if ( *((_BYTE *)v15 + 64) )
              v19 = 472;
            v20 = v15[9] + v19;
            v113 = 0;
            v18 = sub_14085A6F0(v20, v15 + 8, &v76, &off_1417EBF30);
          }
          v21 = v112;
          *(_QWORD *)(v112 + 2488) = v18;
          v110 = (_QWORD *)(v21 + 2488);
          coop_budget_poll_wrapper(&v76, v21 + 2488, a2);
          v22 = v76;
          if ( v76 == -3 )
          {
            v25 = (_BYTE *)v112;
            *(_BYTE *)(v112 + 2496) = 3;
            v25[2504] = 3;
            v25[2512] = 3;
            v26 = 3;
            result = 1;
            goto LABEL_56;
          }
          if ( v76 == -2 )
          {
            v23 = (__int64 *)v77;
            v11 = v78;
            v24 = 0x800000000000000CuLL;
            v7 = v79;
          }
          else
          {
            v24 = v77;
            v23 = (__int64 *)v78;
            v11 = v79;
            v7 = *(_QWORD *)v80;
            v97 = *(_OWORD *)&v80[8];
            v98 = v81;
            v99 = v82;
            v100 = v83;
            v101 = v84;
            v102 = v85;
            v103 = v86;
            v104 = v87;
          }
          v68 = v97;
          v69 = v98;
          v70 = v99;
          v71 = v100;
          v72 = v101;
          v73 = v102;
          v74 = v103;
          v75 = v104;
          v28 = *v110;
          if ( (unsigned __int8)sub_141398090(*v110) )
            sub_14139A2E0(v28);
          if ( v22 == -2 )
          {
            v76 = v24;
            v77 = (unsigned __int64)v23;
            v78 = v11;
            v79 = v7;
            *(_OWORD *)v80 = v68;
            v88[0] = &v76;
            v88[1] = sub_1412DDF00;
            sub_141543AF0(&v97, &unk_1418877E7, v88);
            sub_140CAB2C0(&v76);
            v23 = *((__int64 **)&v97 + 1);
            v24 = v97;
            v11 = v98;
            *(_BYTE *)(v112 + 2496) = 1;
            goto LABEL_31;
          }
          v48 = v75;
          v47 = v74;
          v46 = v73;
          v45 = v72;
          v44 = v71;
          v43 = v70;
          v42 = v69;
          v41 = v68;
          *(_BYTE *)(v112 + 2496) = 1;
          if ( v22 == -1 )
          {
LABEL_31:
            if ( v11 < 0 )
            {
              v30 = 0;
              goto LABEL_33;
            }
            if ( v11 )
            {
              nullsub_1();
              v30 = 1;
              v33 = sub_140001650(v11, 1);
              if ( !v33 )
              {
LABEL_33:
                v111 = v23;
                v110 = (_QWORD *)v24;
                sub_14176E54B(v30, v11);
              }
              v10 = v33;
              sub_14172B820(v33, v23, v11);
              if ( !v24 )
                goto LABEL_42;
            }
            else
            {
              v10 = 1;
              if ( !v24 )
                goto LABEL_42;
            }
            sub_140001660(v23, v24, 1);
LABEL_42:
            v29 = 1;
            v8 = 3;
            v9 = v11;
            goto LABEL_49;
          }
          v67 = v48;
          v66 = v47;
          v65 = v46;
          v64 = v45;
          v63 = v44;
          v62 = v43;
          v61 = v42;
          v60 = v41;
          *(_QWORD *)&v56 = v22;
          *((_QWORD *)&v56 + 1) = v24;
          v57 = (const char *)v23;
          v58 = v11;
          v59 = v7;
          sub_140507EE0(&v76, &v56);
          v7 = ((unsigned __int64)((HIBYTE(v77) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
             | *(unsigned int *)((char *)&v77 + 1);
          v8 = v77;
          v9 = v78;
          v10 = v79;
          v11 = *(_QWORD *)v80;
          if ( v76 == -1 )
          {
            v29 = 0;
          }
          else
          {
            HIBYTE(v77) = (((unsigned __int64)((HIBYTE(v77) << 16)
                                             | (unsigned int)*(unsigned __int16 *)((char *)&v77 + 5)) << 32)
                         | *(unsigned int *)((char *)&v77 + 1)) >> 48;
            *(_WORD *)((char *)&v77 + 5) = WORD2(v7);
            *(_DWORD *)((char *)&v77 + 1) = v7;
            *(_QWORD *)&v97 = 0;
            *((_QWORD *)&v97 + 1) = 1;
            *(_QWORD *)&v98 = 0;
            *(_QWORD *)&v69 = 1610612768;
            *(_QWORD *)&v68 = &v97;
            *((_QWORD *)&v68 + 1) = &off_141891B48;
            if ( (unsigned __int8)sub_1412DDF00(&v76, &v68) )
              sub_14176E860(
                (unsigned int)aADisplayImplem_11,
                55,
                (unsigned int)&v107,
                (unsigned int)&unk_141889838,
                (__int64)&off_141891C00);
            v10 = *((_QWORD *)&v97 + 1);
            v9 = v97;
            v11 = v98;
            sub_140CAB2C0(&v76);
            v29 = 1;
            v8 = 3;
          }
LABEL_49:
          *v109 = 1;
          sub_140CAB140(v108);
          v35 = v112;
          if ( *(_QWORD *)(v112 + 1976) != -1 )
          {
            v36 = *(__int64 **)(v112 + 1984);
            v110 = *(_QWORD **)(v112 + 1992);
            v109 = nullptr;
            v111 = v36;
            while ( v110 != (_QWORD *)v109 )
            {
              ++v109;
              v37 = v36 + 12;
              sub_140401FB0();
              v36 = v37;
            }
            v35 = v112;
            v34 = *(_QWORD *)(v112 + 1976);
            if ( v34 )
LABEL_54:
              sub_140001660(*(_QWORD *)(v35 + 1984), 96 * v34, 8);
          }
LABEL_55:
          *(_BYTE *)(v35 + 2512) = 1;
          sub_140C9F530(v108);
          v91 = v7;
          v93 = BYTE6(v7);
          v92 = WORD2(v7);
          v94 = v9;
          v95 = v10;
          v96 = v11;
          v90 = v8;
          v89 = v29;
          v38 = v112;
          *(_BYTE *)(v112 + 2531) = 0;
          sub_14172B820(&v76, v38, 360);
          *(_BYTE *)(v38 + 2530) = 0;
          v39 = *(_QWORD *)(v38 + 384);
          *(_BYTE *)(v38 + 2529) = 0;
          v57 = *(const char **)(v38 + 376);
          v56 = *(_OWORD *)(v38 + 360);
          sub_140AFFC30(
            (unsigned int)&v76,
            v39,
            (unsigned int)&v89,
            (unsigned int)&v56,
            *(_DWORD *)(v38 + 2520),
            *(_DWORD *)(v38 + 2524));
          v26 = 1;
          result = 0;
          v25 = (_BYTE *)v112;
LABEL_56:
          v25[2528] = v26;
          return result;
        case 1:
LABEL_61:
          v108 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_60:
          v108 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_6:
          v108 = v5;
          v14 = *(unsigned __int8 *)(v3 + 2504);
          v13 = v3 + 2168;
          v109 = (_BYTE *)(v3 + 2504);
          switch ( v14 )
          {
            case 0LL:
              goto LABEL_7;
            case 1LL:
              v105 = v3 + 2168;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v105 = v3 + 2168;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v106 = v3 + 2168;
              v111 = (__int64 *)(v3 + 2336);
              goto LABEL_9;
          }
      }
  }
}
