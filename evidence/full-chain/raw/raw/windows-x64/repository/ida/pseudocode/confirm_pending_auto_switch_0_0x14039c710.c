// module: codexmate_lib/core/repository
// addr: 0x14039c710
// name: confirm_pending_auto_switch_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::confirm_pending_auto_switch | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall confirm_pending_auto_switch_0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  void *v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  int v12; // ebx
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // cl
  void *v17; // rax
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // cl
  void *v36; // rax
  __int64 v37; // rcx
  void *v38; // rax
  void *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rcx
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  __int64 v46; // [rsp+58h] [rbp-28h] BYREF
  __int128 v47; // [rsp+60h] [rbp-20h]
  __int128 v48; // [rsp+70h] [rbp-10h]
  __int128 v49; // [rsp+80h] [rbp+0h]
  __int128 v50; // [rsp+90h] [rbp+10h]
  __int128 v51; // [rsp+A0h] [rbp+20h]
  __int128 v52; // [rsp+B0h] [rbp+30h]
  _BYTE v53[48]; // [rsp+C0h] [rbp+40h] BYREF
  int v54; // [rsp+F0h] [rbp+70h]
  int v55; // [rsp+140h] [rbp+C0h]
  int v56; // [rsp+160h] [rbp+E0h]
  int v57; // [rsp+168h] [rbp+E8h]
  int v58; // [rsp+188h] [rbp+108h]
  __int64 v59; // [rsp+1B0h] [rbp+130h]
  __int64 v60; // [rsp+1B8h] [rbp+138h]
  char v61; // [rsp+242h] [rbp+1C2h]
  __int64 v62; // [rsp+308h] [rbp+288h]
  __int64 v63; // [rsp+310h] [rbp+290h]
  __int64 v64; // [rsp+330h] [rbp+2B0h] BYREF
  int v65; // [rsp+338h] [rbp+2B8h]
  int v66; // [rsp+33Ch] [rbp+2BCh]
  char v67; // [rsp+340h] [rbp+2C0h]
  __int64 v68; // [rsp+388h] [rbp+308h]
  __int64 v69; // [rsp+390h] [rbp+310h]
  __int64 v70; // [rsp+488h] [rbp+408h] BYREF
  __int128 v71; // [rsp+490h] [rbp+410h]
  __int128 v72; // [rsp+4A0h] [rbp+420h]
  __int128 v73; // [rsp+4B0h] [rbp+430h]
  __int128 v74; // [rsp+4C0h] [rbp+440h]
  __int128 v75; // [rsp+4D0h] [rbp+450h]
  __int128 v76; // [rsp+4E0h] [rbp+460h]
  _BYTE v77[88]; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 v78; // [rsp+548h] [rbp+4C8h]
  __int64 v79; // [rsp+550h] [rbp+4D0h]
  _QWORD v80[24]; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v81; // [rsp+6A8h] [rbp+628h]
  __int64 v82; // [rsp+6B0h] [rbp+630h]
  __int64 v83; // [rsp+750h] [rbp+6D0h]
  _BYTE v84[104]; // [rsp+760h] [rbp+6E0h] BYREF
  _BYTE v85[976]; // [rsp+7C8h] [rbp+748h] BYREF
  __int128 v86; // [rsp+B98h] [rbp+B18h] BYREF
  __int64 v87; // [rsp+BA8h] [rbp+B28h]
  __int128 v88; // [rsp+BB0h] [rbp+B30h] BYREF
  __int64 v89; // [rsp+BC0h] [rbp+B40h]
  __int128 v90; // [rsp+BC8h] [rbp+B48h] BYREF
  __int64 v91; // [rsp+BD8h] [rbp+B58h]
  __int128 v92; // [rsp+BE0h] [rbp+B60h] BYREF
  __int64 v93; // [rsp+BF0h] [rbp+B70h]
  _QWORD v94[2]; // [rsp+BF8h] [rbp+B78h] BYREF
  __int128 v95; // [rsp+C08h] [rbp+B88h] BYREF
  __int128 v96; // [rsp+C18h] [rbp+B98h]
  __int128 v97; // [rsp+C28h] [rbp+BA8h]
  __int128 v98; // [rsp+C38h] [rbp+BB8h]
  __int128 v99; // [rsp+C48h] [rbp+BC8h]
  __int128 v100; // [rsp+C58h] [rbp+BD8h]
  __int64 v101; // [rsp+C68h] [rbp+BE8h] BYREF
  __int64 v102; // [rsp+C70h] [rbp+BF0h]
  __int64 v103; // [rsp+C88h] [rbp+C08h]
  __int128 v104; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v105; // [rsp+CA0h] [rbp+C20h]
  __int128 v106; // [rsp+CB0h] [rbp+C30h]
  __int128 v107; // [rsp+CC0h] [rbp+C40h]
  __int128 v108; // [rsp+CD0h] [rbp+C50h]
  __int128 v109; // [rsp+CE0h] [rbp+C60h]
  __m128i v110; // [rsp+D40h] [rbp+CC0h] BYREF
  __int64 v111; // [rsp+D58h] [rbp+CD8h]
  __int64 v112; // [rsp+D60h] [rbp+CE0h]
  __int64 v113; // [rsp+D68h] [rbp+CE8h]

  v113 = -2;
  sub_140392B70(v84);
  v5 = *(_QWORD *)v84;
  if ( *(_QWORD *)v84 != 2 )
  {
    v7 = *(_OWORD *)&v84[24];
    v73 = *(_OWORD *)&v84[40];
    v74 = *(_OWORD *)&v84[56];
    v75 = *(_OWORD *)&v84[72];
    v76 = *(_OWORD *)&v84[88];
    sub_141684120(v77, v85, 624);
    v70 = v5;
    v71 = *(_OWORD *)&v84[8];
    v72 = v7;
    load_local_state_synced((__int64)v84, (__int64)a2);
    v8 = *(_QWORD *)v84;
    v104 = *(_OWORD *)&v84[8];
    v105 = *(_OWORD *)&v84[24];
    v106 = *(_OWORD *)&v84[40];
    v107 = *(_OWORD *)&v84[56];
    v108 = *(_OWORD *)&v84[72];
    v109 = *(_OWORD *)&v84[88];
    if ( *(_QWORD *)v84 == 2 )
    {
      *(_OWORD *)(a1 + 88) = v109;
      *(_OWORD *)(a1 + 72) = v108;
      v9 = v104;
      v10 = v105;
      v11 = v106;
      *(_OWORD *)(a1 + 56) = v107;
      *(_OWORD *)(a1 + 40) = v11;
      *(_OWORD *)(a1 + 24) = v10;
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 2;
LABEL_15:
      sub_14034EA30(&v70);
      sub_14034EA30(v80);
      return a1;
    }
    sub_141684120(v53, v85, 968);
    v47 = v104;
    v48 = v105;
    v49 = v106;
    v50 = v107;
    v51 = v108;
    v52 = v109;
    v46 = v8;
    if ( v54 == 2 || (v12 = v60, v60 != v79) || (v13 = v78, (unsigned int)sub_1416847B0(v59, v78, v60)) )
    {
      sub_1403ADBB0(v84, a2, &v70);
      v15 = *(_QWORD *)v84;
      if ( *(_QWORD *)v84 == -1 )
      {
        nullsub_1(v14);
        v17 = (void *)sub_140001650(73, 1);
        if ( !v17 )
          sub_1416C2D4B(1, 73);
        qmemcpy(v17, "The automatic switch request is stale because the active account changed.", 73);
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)(a1 + 16) = 73;
        *(_QWORD *)(a1 + 24) = v17;
        *(_QWORD *)(a1 + 32) = 73;
        goto LABEL_13;
      }
      goto LABEL_10;
    }
    if ( v67 != 1
      || (v103 = v64, v64 != v83)
      || !v61
      || (v55 == 2 || v56 > v65) && (v57 == 2 || v58 > v66)
      || (v20 = v68, v21 = v69, (v22 = sub_1403BC780(v68, v69, v13, v12, (__int64)&v64, 0)) == 0)
      || (v23 = *(_QWORD *)(v22 + 200), v23 != v82)
      || (v24 = v81, (unsigned int)sub_1416847B0(*(_QWORD *)(v22 + 192), v81, *(_QWORD *)(v22 + 200))) )
    {
      sub_1403ADBB0(&v104, a2, &v70);
      if ( (_DWORD)v104 != -1 )
      {
        *(_OWORD *)&v84[80] = v109;
        *(_OWORD *)&v84[64] = v108;
        *(_OWORD *)&v84[48] = v107;
        *(_OWORD *)&v84[32] = v106;
        *(_OWORD *)&v84[16] = v105;
        *(_OWORD *)v84 = v104;
        *(_QWORD *)&v95 = v84;
        *((_QWORD *)&v95 + 1) = sub_140B036A0;
        sub_14149C0F0(&v92, &unk_14174F534, &v95);
        *(_QWORD *)(a1 + 32) = v93;
        *(_OWORD *)(a1 + 16) = v92;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 2;
        sub_14034ED40(v84);
        goto LABEL_14;
      }
      nullsub_1(v19);
      v27 = (void *)sub_140001650(78, 1);
      if ( !v27 )
        sub_1416C2D4B(1, 78);
      qmemcpy(v27, "The automatic switch request no longer matches the current settings or quotas.", 78);
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 78;
      *(_QWORD *)(a1 + 24) = v27;
      *(_QWORD *)(a1 + 32) = 78;
LABEL_13:
      *(_QWORD *)a1 = 2;
LABEL_14:
      sub_14034DB60(&v46);
      goto LABEL_15;
    }
    *(_QWORD *)v84 = v20;
    *(_QWORD *)&v84[8] = v20 + 352 * v21;
    v25 = sub_140376A50(v84, v24, v23);
    if ( !v25 )
    {
      sub_1403ADBB0(&v104, a2, &v70);
      if ( (_DWORD)v104 != -1 )
      {
        *(_OWORD *)&v84[80] = v109;
        *(_OWORD *)&v84[64] = v108;
        *(_OWORD *)&v84[48] = v107;
        *(_OWORD *)&v84[32] = v106;
        *(_OWORD *)&v84[16] = v105;
        *(_OWORD *)v84 = v104;
        *(_QWORD *)&v95 = v84;
        *((_QWORD *)&v95 + 1) = sub_140B036A0;
        sub_14149C0F0(&v90, &unk_14174F2BC, &v95);
        *(_QWORD *)(a1 + 32) = v91;
        *(_OWORD *)(a1 + 16) = v90;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 2;
        sub_14034ED40(v84);
        goto LABEL_14;
      }
      nullsub_1(v28);
      v36 = (void *)sub_140001650(42, 1);
      if ( !v36 )
        sub_1416C2D4B(1, 42);
      qmemcpy(v36, "Candidate account no longer exists locally", 42);
      *(_QWORD *)(a1 + 8) = 8;
      *(_QWORD *)(a1 + 16) = 42;
      *(_QWORD *)(a1 + 24) = v36;
      *(_QWORD *)(a1 + 32) = 42;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v25 + 160) != 2 && (*(_BYTE *)(v25 + 176) & 0xFE) == 2 )
    {
      sub_1403ADBB0(&v104, a2, &v70);
      if ( (_DWORD)v104 != -1 )
      {
        *(_OWORD *)&v84[80] = v109;
        *(_OWORD *)&v84[64] = v108;
        *(_OWORD *)&v84[48] = v107;
        *(_OWORD *)&v84[32] = v106;
        *(_OWORD *)&v84[16] = v105;
        *(_OWORD *)v84 = v104;
        *(_QWORD *)&v95 = v84;
        *((_QWORD *)&v95 + 1) = sub_140B036A0;
        sub_14149C0F0(&v88, &unk_14174F49F, &v95);
        *(_QWORD *)(a1 + 32) = v89;
        *(_OWORD *)(a1 + 16) = v88;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 2;
        sub_14034ED40(v84);
        goto LABEL_14;
      }
      nullsub_1(v26);
      v39 = (void *)sub_140001650(72, 1);
      if ( !v39 )
        sub_1416C2D4B(1, 72);
      qmemcpy(v39, "Candidate account credentials have expired since the suggestion was made", 72);
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 72;
      *(_QWORD *)(a1 + 24) = v39;
      *(_QWORD *)(a1 + 32) = 72;
      goto LABEL_13;
    }
    *(_QWORD *)&v104 = v62;
    *((_QWORD *)&v104 + 1) = v62 + 424 * v63;
    v29 = sub_1403769D0(&v104, v24, v23);
    if ( !v29 )
    {
      sub_1403ADBB0(v84, a2, &v70);
      v15 = *(_QWORD *)v84;
      if ( *(_QWORD *)v84 == -1 )
      {
        nullsub_1(v37);
        v38 = (void *)sub_140001650(50, 1);
        if ( !v38 )
          sub_1416C2D4B(1, 50);
        qmemcpy(v38, "Candidate account snapshot is no longer registered", 50);
        *(_QWORD *)(a1 + 8) = 8;
        *(_QWORD *)(a1 + 16) = 50;
        *(_QWORD *)(a1 + 24) = v38;
        *(_QWORD *)(a1 + 32) = 50;
        goto LABEL_13;
      }
LABEL_10:
      v16 = v84[8];
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v84[88];
      *(_OWORD *)(a1 + 81) = *(_OWORD *)&v84[73];
      *(_OWORD *)(a1 + 65) = *(_OWORD *)&v84[57];
      *(_OWORD *)(a1 + 49) = *(_OWORD *)&v84[41];
      *(_OWORD *)(a1 + 33) = *(_OWORD *)&v84[25];
      *(_OWORD *)(a1 + 17) = *(_OWORD *)&v84[9];
      *(_QWORD *)(a1 + 8) = v15;
      *(_BYTE *)(a1 + 16) = v16;
      goto LABEL_13;
    }
    sub_14149BB70(v84, *(_QWORD *)(v29 + 224), *(_QWORD *)(v29 + 232));
    v112 = *(_QWORD *)v84;
    v30 = *(_QWORD *)&v84[16];
    v31 = a2[41];
    v32 = a2[42];
    v111 = *(_QWORD *)&v84[8];
    sub_1403C04A0((unsigned int)v84, *(_DWORD *)&v84[8], *(_DWORD *)&v84[16], v31, v32, v24, v23);
    if ( *(_QWORD *)v84 == -2 )
    {
      sub_1403ADBB0(v84, a2, &v70);
      v34 = *(_QWORD *)v84;
      if ( *(_QWORD *)v84 == -1 )
      {
        nullsub_1(v33);
        v43 = (void *)sub_140001650(88, 1);
        if ( !v43 )
          sub_1416C2D4B(1, 88);
        qmemcpy(v43, "Candidate account snapshot is missing, unsafe, unreadable, or belongs to another account", 88);
        *(_QWORD *)(a1 + 8) = 9;
        *(_QWORD *)(a1 + 16) = 88;
        *(_QWORD *)(a1 + 24) = v43;
        *(_QWORD *)(a1 + 32) = 88;
        *(_QWORD *)a1 = 2;
      }
      else
      {
        v35 = v84[8];
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&v84[88];
        *(_OWORD *)(a1 + 81) = *(_OWORD *)&v84[73];
        *(_OWORD *)(a1 + 65) = *(_OWORD *)&v84[57];
        *(_OWORD *)(a1 + 49) = *(_OWORD *)&v84[41];
        *(_OWORD *)(a1 + 33) = *(_OWORD *)&v84[25];
        *(_OWORD *)(a1 + 17) = *(_OWORD *)&v84[9];
        *(_QWORD *)(a1 + 8) = v34;
        *(_BYTE *)(a1 + 16) = v35;
        *(_QWORD *)a1 = 2;
      }
LABEL_72:
      if ( v112 )
        sub_140001660(v111, v112, 1);
      goto LABEL_14;
    }
    sub_141684120(&v104, v84, 176);
    sub_14038E2B0(&v101, a2);
    refresh_token_with_policy(&v110, v111, v30, (__int64 *)&v104, (__int64)&v101, a2[33], a2[34], a2[5], a2[6], 0);
    log_token_refresh_outcome((__int64)aPendingAutoSwi, 19, v110.m128i_i64);
    v40 = v110.m128i_i64[0];
    if ( v110.m128i_i64[0] >= (__int64)0x8000000000000002uLL )
    {
      sub_1403ADBB0(&v95, a2, &v70);
      if ( (_DWORD)v95 != -1 )
      {
        *(_OWORD *)&v84[80] = v100;
        *(_OWORD *)&v84[64] = v99;
        *(_OWORD *)&v84[48] = v98;
        *(_OWORD *)&v84[32] = v97;
        *(_OWORD *)&v84[16] = v96;
        *(_OWORD *)v84 = v95;
        v94[0] = v84;
        v94[1] = sub_140B036A0;
        sub_14149C0F0(&v86, &unk_14174F37D, v94);
        *(_QWORD *)(a1 + 32) = v87;
        *(_OWORD *)(a1 + 16) = v86;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = 2;
        sub_14034ED40(v84);
LABEL_69:
        sub_1400156E0(v40, v110.m128i_i64[1]);
        if ( v101 > 0 )
          sub_140001660(v102, v101, 1);
        sub_14034E960(&v104);
        goto LABEL_72;
      }
      nullsub_1(v42);
      v45 = (void *)sub_140001650(62, 1);
      if ( !v45 )
        sub_1416C2D4B(1, 62);
      qmemcpy(v45, "Candidate token is no longer valid, please try another account", 62);
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 62;
      *(_QWORD *)(a1 + 24) = v45;
      *(_QWORD *)(a1 + 32) = 62;
    }
    else
    {
      auto_switch_config((__int64)&v95, (__int64)a2);
      sub_140392B70(v84);
      if ( *(_DWORD *)v84 == 2 || !(unsigned __int8)sub_140420E20(v84, &v70) )
      {
        sub_140348A40(v84);
      }
      else
      {
        sub_140348A40(v84);
        if ( (_BYTE)v96 == 1 && (_QWORD)v95 == v103 )
        {
          switch_account_0(a1, (__int64)a2, v24, v23);
          sub_1400156E0(v40, v110.m128i_i64[1]);
          if ( v101 > 0 )
            sub_140001660(v102, v101, 1);
          sub_14034E960(&v104);
          if ( v112 )
            sub_140001660(v111, v112, 1);
          goto LABEL_14;
        }
      }
      nullsub_1(v41);
      v44 = (void *)sub_140001650(66, 1);
      if ( !v44 )
        sub_1416C2D4B(1, 66);
      qmemcpy(v44, "The automatic switch request changed while it was being confirmed.", 66);
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 66;
      *(_QWORD *)(a1 + 24) = v44;
      *(_QWORD *)(a1 + 32) = 66;
    }
    *(_QWORD *)a1 = 2;
    goto LABEL_69;
  }
  nullsub_1(v4);
  v6 = (void *)sub_140001650(30, 1);
  if ( !v6 )
    sub_1416C2D4B(1, 30);
  qmemcpy(v6, "No pending auto-switch request", 30);
  *(_QWORD *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 16) = 30;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = 30;
  *(_QWORD *)a1 = 2;
  return a1;
}
