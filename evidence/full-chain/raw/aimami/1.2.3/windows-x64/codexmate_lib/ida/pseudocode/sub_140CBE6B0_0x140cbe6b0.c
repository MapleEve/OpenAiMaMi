// module: codexmate_lib
// addr: 0x140cbe6b0
// name: sub_140CBE6B0
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140CBE6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // r13
  unsigned __int64 v9; // r15
  char v10; // r12
  const char *v11; // r14
  __int128 v12; // rdi
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  _BYTE *v21; // rdx
  char v22; // cl
  char result; // al
  unsigned __int8 v24; // bl
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  __int64 *v28; // r14
  __int128 v29; // xmm6
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 *v36; // rcx
  __int64 *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rdx
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
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 3488);
  v74 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 3489) = 257;
      *(_BYTE *)(a1 + 3491) = 1;
      v7 = a1 + 1936;
      sub_141684120(a1 + 1936, a1 + 392, 1544);
      switch ( *(_BYTE *)(v5 + 3472) )
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
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1936;
      switch ( *(_BYTE *)(a1 + 3472) )
      {
        case 0:
LABEL_4:
          v8 = (__int64 *)(v5 + 2456);
          v49[1] = 0;
          *(_QWORD *)&v46 = aConfirmPending_0;
          *((_QWORD *)&v46 + 1) = 45;
          v47 = aApp_2;
          *(_QWORD *)&v48 = 3;
          v69 = v7;
          *((_QWORD *)&v48 + 1) = v7;
          v49[0] = v8;
          sub_1401C3650(&v41, &v46);
          v9 = ((unsigned __int64)((HIBYTE(v42) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v42 + 5)) << 32)
             | *(unsigned int *)((char *)&v42 + 1);
          v10 = (char)v42;
          v11 = (const char *)v43;
          v12 = v44;
          if ( v41 != -1 )
          {
            v56 = v45[6];
            v55 = v45[5];
            v54 = v45[4];
            v53 = v45[3];
            v52 = v45[2];
            v51 = v45[1];
            v50 = v45[0];
            v5 = v74;
            v13 = v74 + 2480;
            *(_QWORD *)(v74 + 2480) = v41;
            *(_BYTE *)(v5 + 2488) = v10;
            *(_BYTE *)(v5 + 2495) = BYTE6(v9);
            *(_WORD *)(v5 + 2493) = WORD2(v9);
            *(_DWORD *)(v5 + 2489) = v9;
            *(_QWORD *)(v5 + 2496) = v11;
            *(_OWORD *)(v5 + 2504) = v12;
            v14 = v51;
            v15 = v52;
            v16 = v53;
            *(_OWORD *)(v5 + 2520) = v50;
            *(_OWORD *)(v5 + 2536) = v14;
            *(_OWORD *)(v5 + 2552) = v15;
            *(_OWORD *)(v5 + 2568) = v16;
            *(_OWORD *)(v5 + 2584) = v54;
            *(_OWORD *)(v5 + 2600) = v55;
            *(_OWORD *)(v5 + 2616) = v56;
            *(_BYTE *)(v5 + 2800) = 0;
            v17 = (_BYTE *)(v5 + 2808);
            sub_141684120(v5 + 2808, v13, 328);
            v72 = (_BYTE *)(v5 + 3464);
            *(_BYTE *)(v5 + 3464) = 0;
LABEL_7:
            v20 = v5 + 3136;
            v71 = v17;
            sub_141684120(v5 + 3136, v17, 328);
            switch ( *(_BYTE *)(v5 + 3456) )
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
          v73 = v8;
          sub_140BF0DE0(v69);
          v24 = 1;
          if ( *v73 != -1 )
          {
            v25 = *(_QWORD *)(v74 + 2464);
            v71 = *(_BYTE **)(v74 + 2472);
            v72 = nullptr;
            v70 = v25;
            while ( v71 != v72 )
            {
              ++v72;
              v26 = v25 + 96;
              sub_1402C7520();
              v25 = v26;
            }
            v34 = *v73;
            if ( *v73 )
            {
              v35 = v74;
              goto LABEL_42;
            }
          }
          v35 = v74;
          goto LABEL_43;
        case 1:
LABEL_51:
          v69 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_50:
          v69 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v69 = v7;
  v18 = v5 + 3464;
  v19 = *(unsigned __int8 *)(v5 + 3464);
  v17 = (_BYTE *)(v5 + 2808);
  v72 = (_BYTE *)(v5 + 3464);
  switch ( v19 )
  {
    case 0LL:
      goto LABEL_7;
    case 1LL:
      v67 = v5 + 2808;
      sub_1416C3400(&off_1417B7B80, v18, a3, a4);
    case 2LL:
      v67 = v5 + 2808;
      sub_1416C3420(&off_1417B7B80, v18, a3, a4);
    case 3LL:
      v71 = (_BYTE *)(v5 + 2808);
      v20 = v5 + 3136;
      switch ( *(_BYTE *)(v5 + 3456) )
      {
        case 0:
LABEL_9:
          sub_141684120(v5 + 3288, v20, 152);
          *(_BYTE *)(v5 + 3448) = 0;
          break;
        case 1:
LABEL_55:
          JUMPOUT(0x140CBF031LL);
        case 2:
LABEL_52:
          v70 = v20;
          sub_1416C3420(&off_1417BB288, v18, a3, a4);
        case 3:
          break;
      }
LABEL_10:
      v70 = v20;
      v73 = (__int64 *)(v5 + 3288);
      sub_140CF8380(&v46, v5 + 3288, a2);
      *(_QWORD *)&v12 = v46;
      if ( (_QWORD)v46 == -1 )
      {
        v21 = (_BYTE *)v74;
        *(_BYTE *)(v74 + 3456) = 3;
        v21[3464] = 3;
        v21[3472] = 3;
        v22 = 3;
        result = 1;
        goto LABEL_44;
      }
      if ( *(_BYTE *)(v74 + 3448) == 3 )
      {
        v27 = *(_QWORD *)(v74 + 3440);
        if ( (unsigned __int8)sub_1412F2A80(v27) )
          sub_1412E7580(v27);
      }
      else if ( !*(_BYTE *)(v74 + 3448) )
      {
        sub_140014150(v73);
      }
      *(_BYTE *)(v74 + 3456) = 1;
      v28 = *((__int64 **)&v46 + 1);
      v9 = (unsigned __int64)v47;
      v29 = v48;
      *((_QWORD *)&v12 + 1) = v48;
      sub_141684120(v40, v49, 448);
      if ( (_DWORD)v12 == 2 )
      {
        if ( v12 < 0 )
        {
          v31 = 0;
          goto LABEL_24;
        }
        if ( *((_QWORD *)&v12 + 1) )
        {
          nullsub_1(v30);
          v31 = 1;
          v33 = sub_140001650(*((_QWORD *)&v12 + 1), 1);
          if ( !v33 )
          {
LABEL_24:
            v70 = v9;
            v73 = v28;
            sub_1416C2D4B(v31, *((_QWORD *)&v12 + 1));
          }
          *(_QWORD *)&v12 = v33;
          sub_141684120(v33, v9, *((_QWORD *)&v12 + 1));
          if ( !v28 )
            goto LABEL_32;
        }
        else
        {
          *(_QWORD *)&v12 = 1;
          if ( !v28 )
            goto LABEL_32;
        }
        sub_140001660(v9, v28, 1);
LABEL_32:
        v24 = 1;
        v10 = 3;
        v11 = *((const char **)&v12 + 1);
        goto LABEL_37;
      }
      sub_141684120(v45, v40, 448);
      v41 = v12;
      v42 = v28;
      v43 = v9;
      v44 = v29;
      sub_140B048C0(&v46, &v41);
      v9 = ((unsigned __int64)((HIBYTE(v46) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v46 + 13)) << 32)
         | *(unsigned int *)((char *)&v46 + 9);
      v10 = BYTE8(v46);
      v11 = v47;
      v12 = v48;
      if ( (_QWORD)v46 == -1 )
      {
        v24 = 0;
      }
      else
      {
        HIBYTE(v46) = (((unsigned __int64)((HIBYTE(v46) << 16) | (unsigned int)*(unsigned __int16 *)((char *)&v46 + 13)) << 32)
                     | *(unsigned int *)((char *)&v46 + 9)) >> 48;
        *(_WORD *)((char *)&v46 + 13) = WORD2(v9);
        *(_DWORD *)((char *)&v46 + 9) = v9;
        v65 = nullptr;
        v66 = 1u;
        v57[2] = 1610612768;
        v57[0] = &v65;
        v57[1] = &off_1417C41C0;
        if ( (unsigned __int8)sub_141230630(&v46, v57, v32) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v68,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v11 = v65;
        v12 = v66;
        sub_140BF0F60(&v46);
        v24 = 1;
        v10 = 3;
      }
LABEL_37:
      *v72 = 1;
      sub_140BC6060(v71);
      sub_140BF0DE0(v69);
      v35 = v74;
      if ( *(_QWORD *)(v74 + 2456) != -1 )
      {
        v36 = *(__int64 **)(v74 + 2464);
        v71 = *(_BYTE **)(v74 + 2472);
        v72 = nullptr;
        v73 = v36;
        while ( v71 != v72 )
        {
          ++v72;
          v37 = v36 + 12;
          sub_1402C7520();
          v36 = v37;
        }
        v35 = v74;
        v34 = *(_QWORD *)(v74 + 2456);
        if ( v34 )
LABEL_42:
          sub_140001660(*(_QWORD *)(v35 + 2464), 96 * v34, 8);
      }
LABEL_43:
      *(_BYTE *)(v35 + 3472) = 1;
      sub_140BE4B20(v69);
      v60 = v9;
      v62 = BYTE6(v9);
      v61 = WORD2(v9);
      v63 = v11;
      v64 = v12;
      v59 = v10;
      v58 = v24;
      v38 = v74;
      *(_BYTE *)(v74 + 3491) = 0;
      sub_141684120(&v41, v38, 360);
      *(_BYTE *)(v38 + 3490) = 0;
      v39 = *(_QWORD *)(v38 + 384);
      *(_BYTE *)(v38 + 3489) = 0;
      v47 = *(const char **)(v38 + 376);
      v46 = *(_OWORD *)(v38 + 360);
      sub_14047E370(
        (unsigned int)&v41,
        v39,
        (unsigned int)&v58,
        (unsigned int)&v46,
        *(_DWORD *)(v38 + 3480),
        *(_DWORD *)(v38 + 3484));
      v22 = 1;
      result = 0;
      v21 = (_BYTE *)v74;
LABEL_44:
      v21[3488] = v22;
      return result;
  }
}