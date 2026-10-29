// fn runtime_display_state_update_and_emit (0x140ED1DD0, 2523B) — 状态 writer（feeder×9 调用）VERBATIM decompile
// kind 串比较(live 实证): "push"(4) "account"(7) "account-alias"(13) "auth"(4=0x68747561) "full"(4=0x6C6C7566)
//   "usage"(5) "progressive"(11)
// full/usage/account/progressive → lastScanAt = FILETIME - 0x019DB1DED53E8000 (sub_1416B2E00 两常数)
// 更新全局 0x142239468 后 emit "runtime-state-updated"(0x141aa18d7, 21B, 载荷=snapshot)
__int64 __fastcall sub_140ED1DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v6; // xmm6
  int v11; // r13d
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rsi
  char v22; // al
  int v23; // edx
  char *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // r15
  int v31; // r15d
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rsi
  _BYTE v37[880]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v38; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v39; // [rsp+3A8h] [rbp+328h]
  _BYTE v40[864]; // [rsp+710h] [rbp+690h] BYREF
  _BOOL8 v41; // [rsp+A80h] [rbp+A00h] BYREF
  char *v42; // [rsp+A88h] [rbp+A08h]
  char v43; // [rsp+A90h] [rbp+A10h]
  __int64 v44; // [rsp+CD8h] [rbp+C58h]
  __int64 v45; // [rsp+CE0h] [rbp+C60h]
  __int64 v46; // [rsp+CE8h] [rbp+C68h]
  __int64 v47; // [rsp+D10h] [rbp+C90h]
  __int128 v48; // [rsp+D18h] [rbp+C98h]
  char v49; // [rsp+D28h] [rbp+CA8h]
  __int64 v50; // [rsp+D50h] [rbp+CD0h]
  char v51; // [rsp+D5Ch] [rbp+CDCh]
  __int64 v52; // [rsp+D60h] [rbp+CE0h]
  __int64 v53; // [rsp+D68h] [rbp+CE8h]
  __int64 v54; // [rsp+D70h] [rbp+CF0h]
  __int64 v55; // [rsp+D78h] [rbp+CF8h] BYREF
  __int128 v56; // [rsp+D80h] [rbp+D00h]
  __int64 v57; // [rsp+D90h] [rbp+D10h]
  __int128 v58; // [rsp+D98h] [rbp+D18h]
  __int128 v59; // [rsp+DA8h] [rbp+D28h]
  __int128 v60; // [rsp+DB8h] [rbp+D38h]
  __int128 v61; // [rsp+DC8h] [rbp+D48h]
  __int128 v62; // [rsp+DD8h] [rbp+D58h]
  char v63; // [rsp+DE8h] [rbp+D68h]
  __int64 v64; // [rsp+DF0h] [rbp+D70h]
  __int64 v65; // [rsp+DF8h] [rbp+D78h]
  __int64 v66; // [rsp+E00h] [rbp+D80h]
  __int64 v67; // [rsp+E08h] [rbp+D88h]
  __int64 v68; // [rsp+E10h] [rbp+D90h]
  __int64 v69; // [rsp+E18h] [rbp+D98h]
  __int128 v70; // [rsp+E20h] [rbp+DA0h]
  __int128 v71; // [rsp+E30h] [rbp+DB0h]
  __int128 v72; // [rsp+E40h] [rbp+DC0h]
  __int128 v73; // [rsp+E50h] [rbp+DD0h]
  __int128 v74; // [rsp+E60h] [rbp+DE0h]
  __int64 v75; // [rsp+E70h] [rbp+DF0h]
  __int64 v76; // [rsp+E78h] [rbp+DF8h]
  __int64 v77; // [rsp+E80h] [rbp+E00h]
  __int64 v78; // [rsp+E88h] [rbp+E08h]
  char v79; // [rsp+E97h] [rbp+E17h]
  __int64 v80; // [rsp+E98h] [rbp+E18h]

  v80 = -2;
  if ( dword_1422397D8 )
  {
    sub_14194106E(&byte_142239460);
    if ( !_InterlockedCompareExchange8(&byte_142239460, 1, 0) )
      goto LABEL_3;
  }
  else if ( !_InterlockedCompareExchange8(&byte_142239460, 1, 0) )
  {
    goto LABEL_3;
  }
  sub_141969A30(&byte_142239460);
LABEL_3:
  if ( 2 * *off_142240260 )
  {
    v11 = sub_14196A710();
    LOBYTE(v11) = v11 ^ 1;
  }
  else
  {
    v11 = 0;
  }
  v12 = a6;
  v42 = &byte_142239460;
  v43 = v11;
  v41 = byte_142239461 != 0;
  if ( byte_142239461 )
  {
    sub_140ED8380((__int64)&v38, a2);
    if ( (_BYTE)v11 )
      goto LABEL_45;
    goto LABEL_44;
  }
  LODWORD(v78) = v11;
  if ( qword_142239468 == -1 || *(_QWORD *)(a2 + 688) == -1 )
  {
    if ( (_DWORD)qword_142239468 == -1 )
      goto LABEL_42;
  }
  else if ( qword_142239718 != -1 )
  {
    v13 = *(_QWORD *)(a2 + 704);
    if ( v13 == qword_142239728
      && !(unsigned int)sub_141923B40(*(_QWORD *)(a2 + 696), qword_142239720, v13)
      && *(_QWORD *)(a2 + 712) < (unsigned __int64)qword_142239730 )
    {
      sub_140ED8380((__int64)&v38, (__int64)&qword_142239468);
      sub_14002B980(&byte_142239460, (unsigned int)v78);
      v14 = a4 - 4;
      if ( (unsigned __int64)(a4 - 4) > 7 )
        goto LABEL_59;
      goto LABEL_47;
    }
  }
  if ( a4 == 4 )
  {
    if ( *(_DWORD *)a3 == 1752462689 )      // "auth"
    {
LABEL_77:
      sub_140D42EC0(v37, &qword_142239468, a2);   // 账户项合并
      goto LABEL_43;
    }
LABEL_42:
    sub_140ED8380((__int64)v37, a2);
    goto LABEL_43;
  }
  if ( a4 != 7 )
  {
    if ( a4 == 13 && !(*(_QWORD *)a3 ^ 0x2D746E756F636361LL | *(_QWORD *)(a3 + 5) ^ 0x7361696C612D746ELL) )  // "account-alias"
      goto LABEL_77;
    goto LABEL_42;
  }
  if ( !a5 || *(_DWORD *)a3 ^ 0x6F636361 | *(_DWORD *)(a3 + 3) ^ 0x746E756F )   // "account"
    goto LABEL_42;
  v75 = a1;
  v15 = *(_QWORD *)(a2 + 752);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 744);
    v17 = 384 * v15;
    while ( *(_QWORD *)(v16 + 224) != a6 || (unsigned int)sub_141923B40(*(_QWORD *)(v16 + 216), a5, a6) )
    {
      v16 += 384;
      v17 -= 384;
      if ( !v17 )
        goto LABEL_78;
    }
    sub_140ED8380((__int64)&v41, (__int64)&qword_142239468);
    v77 = 7;
    v76 = v53;
    v18 = v54;
    if ( v54 )
    {
      v19 = 384 * v54;
      v20 = v76;
      while ( *(_QWORD *)(v20 + 224) != a6 || (unsigned int)sub_141923B40(*(_QWORD *)(v20 + 216), a5, a6) )
      {
        v20 += 384;
        v19 -= 384;
        if ( !v19 )
          goto LABEL_79;
      }
      sub_140EC9250(v40, v20, v16);
      sub_140037CD0(v20);
      sub_1419234B0(v20, v40, 384);
      if ( v44 != -1 && v46 == a6 && !(unsigned int)sub_141923B40(v45, a5, a6) )
      {
        sub_140D74C80(v40, v20);
        sub_1419234B0(&v38, v40, 384);
        if ( v41 != 2 )
          sub_140037CD0(&v41);
        sub_1419234B0(&v41, &v38, 384);
        v51 = *(_BYTE *)(a2 + 732);
        LOBYTE(v18) = *(_BYTE *)(a2 + 680);
        if ( *(_QWORD *)(a2 + 656) == -1 )
        {
          v21 = -1;
        }
        else
        {
          sub_1416DB410(v40, a2 + 656);
          v21 = *(_QWORD *)v40;
          v71 = *(_OWORD *)&v40[8];
        }
        if ( v47 != -1 && v47 )
          sub_140001660(v48, v47, 1);
        v47 = v21;
        v48 = v71;
        v49 = v18;
      }
      v35 = v50;
      if ( *(_QWORD *)(a2 + 720) > v50 )
        v35 = *(_QWORD *)(a2 + 720);
      v50 = v35;
      if ( *(_QWORD *)(a2 + 760) == -1 )
      {
        v36 = -1;
      }
      else
      {
        sub_1416DB410(&v38, a2 + 760);
        LOBYTE(v18) = *(_BYTE *)(a2 + 872);
        if ( *(_QWORD *)(a2 + 784) == -1 )
        {
          v16 = -1;
        }
        else
        {
          sub_1416DB410(v40, a2 + 784);
          v16 = *(_QWORD *)v40;
          v70 = *(_OWORD *)&v40[8];
        }
        v6 = *(_OWORD *)(a2 + 856);
        v72 = *(_OWORD *)(a2 + 808);
        v73 = *(_OWORD *)(a2 + 824);
        v74 = *(_OWORD *)(a2 + 840);
        v36 = v38;
        *(_OWORD *)v40 = v39;
      }
      sub_140026250(&v55);
      v55 = v36;
      v56 = *(_OWORD *)v40;
      v57 = v16;
      v58 = v70;
      v59 = v72;
      v60 = v73;
      v61 = v74;
      v62 = v6;
      v63 = v18;
      sub_1419234B0(v37, &v41, 880);
      a4 = v77;
    }
    else
    {
LABEL_79:
      sub_140ED8380((__int64)v37, (__int64)&qword_142239468);
      sub_1405295E0(&v41);
      if ( v18 )
      {
        v34 = v76;
        do
        {
          sub_1401AF3C0(v34);
          v34 += 384;
          --v18;
        }
        while ( v18 );
      }
      a4 = v77;
      if ( v52 )
        sub_140001660(v76, 384 * v52, 8);
      sub_140026250(&v55);
    }
    a1 = v75;
  }
  else
  {
LABEL_78:
    sub_140ED8380((__int64)v37, (__int64)&qword_142239468);
    a1 = v75;
  }
LABEL_43:
  sub_140ED8380((__int64)&v41, (__int64)v37);
  sub_1419234B0(v40, &v41, 880);
  sub_140D86090(&qword_142239468);            // drop 全局旧值
  sub_1419234B0(&qword_142239468, v40, 880);  // 写入新状态
  sub_1419234B0(&v38, v37, 880);
  if ( (_BYTE)v78 )
    goto LABEL_45;
LABEL_44:
  if ( 2 * *off_142240260 && !(unsigned __int8)sub_14196A710() )
    byte_142239461 = 1;
LABEL_45:
  v22 = byte_142239460;
  byte_142239460 = 0;
  if ( v22 == 2 )
  {
    WakeByAddressSingle(&byte_142239460);
    v14 = a4 - 4;
    if ( (unsigned __int64)(a4 - 4) > 7 )
      goto LABEL_59;
  }
  else
  {
    v14 = a4 - 4;
  }
LABEL_47:
  switch ( v14 )
  {
    case 0LL:
      if ( *(_DWORD *)a3 == 1819047270 )      // "full"
        goto LABEL_55;
      break;
    case 1LL:
      if ( !(*(_DWORD *)a3 ^ 0x67617375 | *(unsigned __int8 *)(a3 + 4) ^ 0x65) )  // "usage"
        goto LABEL_55;
      break;
    case 3LL:
      if ( !(*(_DWORD *)a3 ^ 0x6F636361 | *(_DWORD *)(a3 + 3) ^ 0x746E756F) )    // "account"
        goto LABEL_55;
      break;
    case 7LL:
      if ( !(*(_QWORD *)a3 ^ 0x73736572676F7270LL | *(_QWORD *)(a3 + 3) ^ 0x6576697373657267LL) )  // "progressive"
      {
LABEL_55:
        v79 = 1;
        *(_DWORD *)v40 = sub_1416B2E50();     // FILETIME now
        *(_DWORD *)&v40[4] = v23;
        v79 = 1;
        sub_1416B2E00(&v41, v40, 3577643008LL, 27111902);  // - 0x019DB1DED53E8000 → Unix
        if ( v41 )
          v24 = nullptr;
        else
          v24 = v42;
        v79 = 1;
        sub_140724910(v24);                   // lastScanAt 写入
      }
      break;
    default:
      break;
  }
LABEL_59:
  v79 = 1;
  sub_140B46A60(a1, &v38);
  sub_1419234B0(v40, &v38, 880);
  if ( a4 < 0 )
  {
    v27 = 0;
    goto LABEL_61;
  }
  if ( a4 )
  {
    nullsub_1(v26, v25);
    v27 = 1;
    v28 = sub_140001650(a4, 1);
    if ( !v28 )
LABEL_61:
      sub_14196B2DB(v27, a4);
    v29 = v28;
    sub_1419234B0(v28, a3, a4);               // kind 副本
    if ( a5 )
      goto LABEL_65;
LABEL_69:
    v31 = a1;
    v12 = -1;
    goto LABEL_74;
  }
  v29 = 1;
  if ( !a5 )
    goto LABEL_69;
LABEL_65:
  if ( a6 < 0 )
  {
    v30 = 0;
    goto LABEL_67;
  }
  if ( a6 )
  {
    nullsub_1(v26, v25);
    v30 = 1;
    v32 = sub_140001650(a6, 1);
    if ( !v32 )
    {
LABEL_67:
      v78 = v29;
      v77 = a4;
      sub_14196B2DB(v30, a6);
    }
    a3 = v32;
    v31 = a1;
    sub_1419234B0(v32, a5, a6);               // key 副本
  }
  else
  {
    v31 = a1;
    a3 = 1;
    v12 = 0;
  }
LABEL_74:
  sub_1419234B0(&v41, &v38, 880);
  v64 = a4;
  v65 = v29;
  v66 = a4;
  v67 = a3;
  v68 = v12;
  v69 = v12;
  v79 = 0;
  result = sub_140594C70((unsigned int)v40, v31, (unsigned int)aRuntimeStateUp, 21, (__int64)&v41);  // emit "runtime-state-updated"
  if ( *(_QWORD *)v40 != -1 )
  {
    v79 = 0;
    return sub_140D892E0(v40);
  }
  return result;
}
