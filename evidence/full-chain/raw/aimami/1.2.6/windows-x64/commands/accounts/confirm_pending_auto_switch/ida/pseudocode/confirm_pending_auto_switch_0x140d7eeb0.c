// Pseudocode for confirm_pending_auto_switch (EA: 0x140d7eeb0, size: 0x9c3)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:确认挂起的auto-switch切换,不重启Codex。副作用:提交pending切换(mutation)。归属:锚src\commands\system.rs。
// Tauri命令handler:确认挂起的auto-switch切换,不重启Codex。副作用:提交pending切换(mutation)。归属:锚src\commands\system.rs。
char __fastcall confirm_pending_auto_switch(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  char v8; // r12
  const char *v9; // r14
  __int128 v10; // rdi
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  _BYTE *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  _BYTE *v18; // rdx
  char v19; // cl
  char result; // al
  unsigned __int8 v21; // bl
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rsi
  __int64 *v25; // r14
  __int128 v26; // xmm6
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 *v35; // rcx
  __int64 *v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-60h]
  _BYTE v40[448]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+1F8h] [rbp+178h] BYREF
  __int64 *v42; // [rsp+200h] [rbp+180h]
  unsigned __int64 v43; // [rsp+208h] [rbp+188h]
  __int128 v44; // [rsp+210h] [rbp+190h]
  _OWORD v45[28]; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v46; // [rsp+3E0h] [rbp+360h] BYREF
  const char *v47; // [rsp+3F0h] [rbp+370h]
  __int128 v48; // [rsp+3F8h] [rbp+378h]
  _QWORD v49[57]; // [rsp+408h] [rbp+388h] BYREF
  __int128 v50; // [rsp+5D0h] [rbp+550h]
  __int128 v51; // [rsp+5E0h] [rbp+560h]
  __int128 v52; // [rsp+5F0h] [rbp+570h]
  __int128 v53; // [rsp+600h] [rbp+580h]
  __int128 v54; // [rsp+610h] [rbp+590h]
  __int128 v55; // [rsp+620h] [rbp+5A0h]
  __int128 v56; // [rsp+630h] [rbp+5B0h]
  _QWORD v57[3]; // [rsp+640h] [rbp+5C0h] BYREF
  __int64 v58; // [rsp+658h] [rbp+5D8h] BYREF
  char v59; // [rsp+660h] [rbp+5E0h]
  int v60; // [rsp+661h] [rbp+5E1h]
  __int16 v61; // [rsp+665h] [rbp+5E5h]
  char v62; // [rsp+667h] [rbp+5E7h]
  const char *v63; // [rsp+668h] [rbp+5E8h]
  __int128 v64; // [rsp+670h] [rbp+5F0h]
  const char *v65; // [rsp+680h] [rbp+600h] BYREF
  __int128 v66; // [rsp+688h] [rbp+608h]
  __int64 v67; // [rsp+698h] [rbp+618h]
  char v68; // [rsp+6A7h] [rbp+627h] BYREF
  __int64 v69; // [rsp+6A8h] [rbp+628h]
  unsigned __int64 v70; // [rsp+6B0h] [rbp+630h]
  _BYTE *v71; // [rsp+6B8h] [rbp+638h]
  _BYTE *v72; // [rsp+6C0h] [rbp+640h]
  __int64 *v73; // [rsp+6C8h] [rbp+648h]
  __int64 v74; // [rsp+6D0h] [rbp+650h]
  __int64 v75; // [rsp+6D8h] [rbp+658h]

  v75 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 3488);
  v74 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3489) = 257;
      *(_BYTE *)(a1 + 3491) = 1;
      v5 = a1 + 1936;
      sub_14172B820(a1 + 1936, a1 + 392, 1544);
      switch ( *(_BYTE *)(v3 + 3472) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_51;
        case 2:
          goto LABEL_50;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1936;
      switch ( *(_BYTE *)(a1 + 3472) )
      {
        case 0:
LABEL_4:
          v6 = (__int64 *)(v3 + 2456);
          v49[1] = 0;
          *(_QWORD *)&v46 = aConfirmPending_1;
          *((_QWORD *)&v46 + 1) = 27;
          v47 = aApp_4;
          *(_QWORD *)&v48 = 3;
          v69 = v5;
          *((_QWORD *)&v48 + 1) = v5;
          v49[0] = v6;
          sub_1401A9630((__int64)&v41, (__int64)&v46);
          v7 = ((unsigned __int64)((HIBYTE(v42) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v42 + 5)) << 32)
             | *(unsigned int *)((char *)&v42 + 1);
          v8 = (char)v42;
          v9 = (const char *)v43;
          v10 = v44;
          if ( v41 != -1 )
          {
            v56 = v45[6];
            v55 = v45[5];
            v54 = v45[4];
            v53 = v45[3];
            v52 = v45[2];
            v51 = v45[1];
            v50 = v45[0];
            v3 = v74;
            v11 = v74 + 2480;
            *(_QWORD *)(v74 + 2480) = v41;
            *(_BYTE *)(v3 + 2488) = v8;
            *(_BYTE *)(v3 + 2495) = BYTE6(v7);
            *(_WORD *)(v3 + 2493) = WORD2(v7);
            *(_DWORD *)(v3 + 2489) = v7;
            *(_QWORD *)(v3 + 2496) = v9;
            *(_OWORD *)(v3 + 2504) = v10;
            v12 = v51;
            v13 = v52;
            v14 = v53;
            *(_OWORD *)(v3 + 2520) = v50;
            *(_OWORD *)(v3 + 2536) = v12;
            *(_OWORD *)(v3 + 2552) = v13;
            *(_OWORD *)(v3 + 2568) = v14;
            *(_OWORD *)(v3 + 2584) = v54;
            *(_OWORD *)(v3 + 2600) = v55;
            *(_OWORD *)(v3 + 2616) = v56;
            *(_BYTE *)(v3 + 2800) = 0;
            v15 = (_BYTE *)(v3 + 2808);
            sub_14172B820(v3 + 2808, v11, 328);
            v72 = (_BYTE *)(v3 + 3464);
            *(_BYTE *)(v3 + 3464) = 0;
LABEL_7:
            v17 = v3 + 3136;
            v71 = v15;
            sub_14172B820(v3 + 3136, v15, 328);
            switch ( *(_BYTE *)(v3 + 3456) )
            {
              case 0:
                goto LABEL_9;
              case 1:
                goto LABEL_55;
              case 2:
                goto LABEL_52;
              case 3:
                goto LABEL_10;
            }
          }
          v73 = v6;
          sub_140CAB140(v69);
          v21 = 1;
          if ( *v73 != -1 )
          {
            v22 = *(_QWORD *)(v74 + 2464);
            v71 = *(_BYTE **)(v74 + 2472);
            v72 = nullptr;
            v70 = v22;
            while ( v71 != v72 )
            {
              ++v72;
              v23 = v22 + 96;
              sub_140401FB0();
              v22 = v23;
            }
            v33 = *v73;
            if ( *v73 )
            {
              v34 = v74;
              goto LABEL_42;
            }
          }
          v34 = v74;
          goto LABEL_43;
        case 1:
LABEL_51:
          v69 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_50:
          v69 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v69 = v5;
  v16 = *(unsigned __int8 *)(v3 + 3464);
  v15 = (_BYTE *)(v3 + 2808);
  v72 = (_BYTE *)(v3 + 3464);
  switch ( v16 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      v67 = v3 + 2808;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v67 = v3 + 2808;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v71 = (_BYTE *)(v3 + 2808);
      v17 = v3 + 3136;
      switch ( *(_BYTE *)(v3 + 3456) )
      {
        case 0:
LABEL_9:
          sub_14172B820(v3 + 3288, v17, 152);
          *(_BYTE *)(v3 + 3448) = 0;
          break;
        case 1:
LABEL_55:
          JUMPOUT(0x140D7F831LL);
        case 2:
LABEL_52:
          v70 = v17;
          sub_14176EC20(&off_1418888E0);
        case 3:
          break;
      }
LABEL_10:
      v70 = v17;
      v73 = (__int64 *)(v3 + 3288);
      sub_140DB5E90(&v46, v3 + 3288, a2);
      *(_QWORD *)&v10 = v46;
      if ( (_QWORD)v46 == -1 )
      {
        v18 = (_BYTE *)v74;
        *(_BYTE *)(v74 + 3456) = 3;
        v18[3464] = 3;
        v18[3472] = 3;
        v19 = 3;
        result = 1;
        goto LABEL_44;
      }
      if ( *(_BYTE *)(v74 + 3448) == 3 )
      {
        v24 = *(_QWORD *)(v74 + 3440);
        if ( (unsigned __int8)sub_141398090(v24) )
          sub_14139A2E0(v24);
      }
      else if ( !*(_BYTE *)(v74 + 3448) )
      {
        sub_140203A20(v73);
      }
      *(_BYTE *)(v74 + 3456) = 1;
      v25 = *((__int64 **)&v46 + 1);
      v7 = (unsigned __int64)v47;
      v26 = v48;
      *((_QWORD *)&v10 + 1) = v48;
      sub_14172B820(v40, v49, 448);
      if ( (_DWORD)v10 == 2 )
      {
        if ( v10 < 0 )
        {
          v31 = 0;
          goto LABEL_24;
        }
        if ( *((_QWORD *)&v10 + 1) )
        {
          nullsub_1(v28, v27, v29, v30, v39);
          v31 = 1;
          v32 = sub_140001650(*((_QWORD *)&v10 + 1), 1);
          if ( !v32 )
          {
LABEL_24:
            v70 = v7;
            v73 = v25;
            sub_14176E54B(v31, *((_QWORD *)&v10 + 1));
          }
          *(_QWORD *)&v10 = v32;
          sub_14172B820(v32, v7, *((_QWORD *)&v10 + 1));
          if ( !v25 )
            goto LABEL_32;
        }
        else
        {
          *(_QWORD *)&v10 = 1;
          if ( !v25 )
            goto LABEL_32;
        }
        sub_140001660(v7, v25, 1);
LABEL_32:
        v21 = 1;
        v8 = 3;
        v9 = *((const char **)&v10 + 1);
        goto LABEL_37;
      }
      sub_14172B820(v45, v40, 448);
      v41 = v10;
      v42 = v25;
      v43 = v7;
      v44 = v26;
      sub_140507740(&v46, &v41);
      v7 = ((unsigned __int64)((HIBYTE(v46) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v46 + 13)) << 32)
         | *(unsigned int *)((char *)&v46 + 9);
      v8 = BYTE8(v46);
      v9 = v47;
      v10 = v48;
      if ( (_QWORD)v46 == -1 )
      {
        v21 = 0;
      }
      else
      {
        HIBYTE(v46) = (((unsigned __int64)((HIBYTE(v46) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v46 + 13)) << 32)
                     | *(unsigned int *)((char *)&v46 + 9)) >> 48;
        *(_WORD *)((char *)&v46 + 13) = WORD2(v7);
        *(_DWORD *)((char *)&v46 + 9) = v7;
        v65 = nullptr;
        v66 = 1u;
        v57[2] = 1610612768;
        v57[0] = &v65;
        v57[1] = &off_141891B48;
        if ( (unsigned __int8)sub_1412DDF00(&v46, v57) )
          sub_14176E860(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v68,
            (unsigned int)&unk_141889838,
            (__int64)&off_141891C00);
        v9 = v65;
        v10 = v66;
        sub_140CAB2C0(&v46);
        v21 = 1;
        v8 = 3;
      }
LABEL_37:
      *v72 = 1;
      sub_140C7ED70(v71);
      sub_140CAB140(v69);
      v34 = v74;
      if ( *(_QWORD *)(v74 + 2456) != -1 )
      {
        v35 = *(__int64 **)(v74 + 2464);
        v71 = *(_BYTE **)(v74 + 2472);
        v72 = nullptr;
        v73 = v35;
        while ( v71 != v72 )
        {
          ++v72;
          v36 = v35 + 12;
          sub_140401FB0();
          v35 = v36;
        }
        v34 = v74;
        v33 = *(_QWORD *)(v74 + 2456);
        if ( v33 )
LABEL_42:
          sub_140001660(*(_QWORD *)(v34 + 2464), 96 * v33, 8);
      }
LABEL_43:
      *(_BYTE *)(v34 + 3472) = 1;
      sub_140C9F1D0(v69);
      v60 = v7;
      v62 = BYTE6(v7);
      v61 = WORD2(v7);
      v63 = v9;
      v64 = v10;
      v59 = v8;
      v58 = v21;
      v37 = v74;
      *(_BYTE *)(v74 + 3491) = 0;
      sub_14172B820(&v41, v37, 360);
      *(_BYTE *)(v37 + 3490) = 0;
      v38 = *(_QWORD *)(v37 + 384);
      *(_BYTE *)(v37 + 3489) = 0;
      v47 = *(const char **)(v37 + 376);
      v46 = *(_OWORD *)(v37 + 360);
      sub_140AFFC30((__int64)&v41, v38, (__int64)&v58, &v46, *(_DWORD *)(v37 + 3480), *(_DWORD *)(v37 + 3484));
      v19 = 1;
      result = 0;
      v18 = (_BYTE *)v74;
LABEL_44:
      v18[3488] = v19;
      return result;
  }
}
