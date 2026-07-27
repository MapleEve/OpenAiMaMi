// module: codexmate_lib/core/relay/quota
// addr: 0x140d03270
// name: sub_140D03270
// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D03270(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r13d
  char result; // al
  __int64 v18; // r12
  char v19; // r12
  __int64 v20; // r14
  _OWORD *v21; // rdi
  _OWORD *v22; // r15
  int v23; // eax
  _QWORD *v24; // rbx
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned __int8 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int128 v32; // xmm0
  unsigned __int8 *v33; // rax
  void *v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // [rsp+30h] [rbp-50h]
  __int64 v39; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+40h] [rbp-40h]
  _OWORD *v41; // [rsp+48h] [rbp-38h]
  void *v42; // [rsp+50h] [rbp-30h]
  __int64 v43; // [rsp+58h] [rbp-28h]
  char **v44; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+68h] [rbp-18h]
  __int128 v46; // [rsp+70h] [rbp-10h] BYREF
  _OWORD *v47; // [rsp+80h] [rbp+0h]
  char *v48; // [rsp+90h] [rbp+10h] BYREF
  __int128 v49; // [rsp+98h] [rbp+18h] BYREF
  __int64 v50; // [rsp+A8h] [rbp+28h]
  _OWORD *v51; // [rsp+B0h] [rbp+30h]
  _OWORD *v52; // [rsp+B8h] [rbp+38h]
  _BYTE v53[7]; // [rsp+C0h] [rbp+40h]
  char v54; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v55; // [rsp+C8h] [rbp+48h]
  __int64 v56; // [rsp+D0h] [rbp+50h]

  v56 = -2;
  v5 = *(unsigned __int8 *)(a2 + 841);
  v55 = a2;
  switch ( v5 )
  {
    case 0LL:
      v6 = *(_QWORD *)(a2 + 824);
      v7 = *(_QWORD *)(a2 + 784);
      v8 = *(_QWORD *)(a2 + 792);
      v9 = *(_QWORD *)(a2 + 832);
      v10 = *(unsigned __int8 *)(a2 + 842);
      v12 = &unk_1417BBB44;
      if ( v10 )
        v12 = &unk_1417BBB57;
      *(_BYTE *)(a2 + 840) = v10;
      *(_QWORD *)(a2 + 768) = v12;
      *(_QWORD *)(a2 + 776) = v10 ^ 0x13;
      v39 = a2 + 768;
      v40 = sub_14041F680;
      sub_14149C0F0(&v49, &unk_1417BBB69, &v39);
      v13 = v55;
      *(_QWORD *)(v55 + 816) = v50;
      *(_OWORD *)(v13 + 800) = v49;
      v14 = *(_QWORD *)(v13 + 808);
      v15 = *(_QWORD *)(v13 + 816);
      *(_QWORD *)v13 = v6;
      *(_QWORD *)(v13 + 8) = v14;
      *(_QWORD *)(v13 + 16) = v15;
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 32) = v8;
      *(_QWORD *)(v13 + 40) = v9;
      *(_BYTE *)(v13 + 48) = 0;
      break;
    case 1LL:
      sub_1416C3400(&off_1417BBB88, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BBB88, a2, a3, a4);
    case 3LL:
      break;
  }
  sub_140D04E20(&v49);
  v16 = v49;
  if ( (_QWORD)v49 != 2 )
  {
    v19 = BYTE8(v49);
    *(_DWORD *)v53 = *(_DWORD *)((char *)&v49 + 9);
    *(_DWORD *)&v53[3] = HIDWORD(v49);
    v20 = v50;
    v21 = v51;
    v22 = v52;
    v23 = *(unsigned __int8 *)(v55 + 48);
    if ( v23 == 4 )
    {
      if ( *(_BYTE *)(v55 + 760) == 3 )
      {
        sub_140BE80E0(v55 + 336);
      }
      else if ( !*(_BYTE *)(v55 + 760) )
      {
        sub_140BA5F10(v55 + 200);
        v24 = *(_QWORD **)(v55 + 328);
        if ( *v24 )
          sub_140001660(v24[1], *v24, 1);
        sub_140001660(v24, 88, 8);
      }
    }
    else if ( v23 == 3 )
    {
      sub_140BF25D0(*(_QWORD *)(v55 + 56), *(_QWORD *)(v55 + 64));
    }
    if ( v16 == 1 )
    {
      LOBYTE(v49) = v19;
      *(_DWORD *)((char *)&v49 + 1) = *(_DWORD *)v53;
      DWORD1(v49) = *(_DWORD *)&v53[3];
      *((_QWORD *)&v49 + 1) = v20;
      v50 = (__int64)v21;
      v51 = v22;
      *(_QWORD *)&v46 = 0;
      *((_QWORD *)&v46 + 1) = 1;
      v47 = nullptr;
      if ( (unsigned __int16)v49 == 2 )
      {
        v48 = (char *)&v49 + 8;
        v44 = &v48;
        v45 = sub_1406B5450;
        v25 = sub_1414A2FC0(&v46, &off_1417C41C0, &unk_14175EB07, &v44);
      }
      else if ( (unsigned __int16)v49 == 1 )
      {
        v48 = (char *)&v49 + 8;
        v44 = &v48;
        v45 = sub_1406B5450;
        v25 = sub_1414A2FC0(&v46, &off_1417C41C0, &unk_14175EAF4, &v44);
      }
      else
      {
        v48 = (char *)&v49 + 2;
        v44 = &v48;
        v45 = sub_14041F6C0;
        v25 = sub_1414A2FC0(&v46, &off_1417C41C0, &unk_14175EAE8, &v44);
      }
      if ( v25 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v54,
          (unsigned int)&unk_1417BC180,
          (__int64)&off_1417C4278);
      v21 = *((_OWORD **)&v46 + 1);
      v20 = v46;
      v22 = v47;
      if ( (_WORD)v49 && *((_QWORD *)&v49 + 1) )
        sub_140001660(v50, *((_QWORD *)&v49 + 1), 1);
    }
    else if ( v19 != -1 )
    {
      HIDWORD(v39) = *(_DWORD *)&v53[3];
      *(_DWORD *)((char *)&v39 + 1) = *(_DWORD *)v53;
      LOBYTE(v39) = v19;
      v40 = (__int64 (__fastcall *)())v20;
      v41 = v21;
      v42 = v22;
      v26 = sub_141433D50(aData_8, 4, &v39);
      v28 = v26;
      if ( v26 )
      {
        v29 = (unsigned __int8 *)sub_141433D50(aTotalbalance, 12, v26);
        sub_1404D16A0((__int64)&v49, v29);
        if ( (_QWORD)v49 == -1 )
        {
          v33 = (unsigned __int8 *)sub_141433D50(aBalance_1, 7, v28);
          sub_1404D16A0((__int64)&v46, v33);
        }
        else
        {
          v47 = (_OWORD *)v50;
          v46 = v49;
        }
        if ( (_QWORD)v46 != -1 )
        {
          v43 = v46;
          v34 = &unk_1417BB860;
          if ( *(_BYTE *)(v55 + 840) )
            v34 = &unk_1417BB8C8;
          v38 = *((_QWORD *)&v46 + 1);
          sub_1404D13C0((__int64)&v49, *((__int64 *)&v46 + 1), (__int64)v47, (__int64)v34, 3);
          v20 = *((_QWORD *)&v49 + 1);
          v35 = v49;
          v21 = (_OWORD *)v50;
          if ( v43 )
            sub_140001660(v38, v43, 1);
          sub_1400104F0(&v39);
          v18 = v55;
          v36 = *(_QWORD *)(v55 + 800);
          v22 = &unk_1417BBBAC;
          if ( !v36 )
            goto LABEL_45;
          goto LABEL_44;
        }
        nullsub_1(v30);
        v20 = 46;
        v37 = sub_140001650(46, 1);
        if ( !v37 )
          sub_1416C2D4B(1, 46);
        v21 = (_OWORD *)v37;
        qmemcpy((void *)(v37 + 16), " info response missing balance", 30);
        v32 = unk_1417BA3E0;
      }
      else
      {
        nullsub_1(v27);
        v20 = 43;
        v31 = sub_140001650(43, 1);
        if ( !v31 )
          sub_1416C2D4B(1, 43);
        v21 = (_OWORD *)v31;
        qmemcpy((void *)(v31 + 16), " info response missing data", 27);
        v32 = unk_1417BA40E;
      }
      *v21 = v32;
      sub_1400104F0(&v39);
      v22 = (_OWORD *)v20;
    }
    v18 = v55;
    v36 = *(_QWORD *)(v55 + 800);
    v35 = -1;
    if ( !v36 )
    {
LABEL_45:
      *a1 = v35;
      a1[1] = v20;
      a1[2] = (__int64)v21;
      a1[3] = (__int64)v22;
      a1[4] = 20;
      a1[5] = (__int64)"SiliconFlow 官方余额https://api.moonshot.ai/v1/users/me/balancehttps://api.moonshot.cn/v1/users/me/balance";
      a1[6] = 24;
      result = 1;
      goto LABEL_46;
    }
LABEL_44:
    sub_140001660(*(_QWORD *)(v18 + 808), v36, 1);
    goto LABEL_45;
  }
  *a1 = -2;
  result = 3;
  v18 = v55;
LABEL_46:
  *(_BYTE *)(v18 + 841) = result;
  return result;
}