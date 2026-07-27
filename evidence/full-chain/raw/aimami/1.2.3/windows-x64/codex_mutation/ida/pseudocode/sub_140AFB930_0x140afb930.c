__int64 __fastcall sub_140AFB930(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int8 v7; // r14
  __int64 v8; // r12
  unsigned __int128 v9; // kr00_16
  _BYTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rbx
  __int64 *v14; // r15
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r12
  char v19; // al
  PVOID v20; // rcx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  char *v27; // r13
  char v28; // al
  char v29; // al
  int v30; // ecx
  unsigned __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  char v35[144]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v36[136]; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+150h] [rbp+D0h]
  unsigned __int128 v38; // [rsp+160h] [rbp+E0h] BYREF
  unsigned __int128 v39; // [rsp+170h] [rbp+F0h]
  __m512i v40; // [rsp+180h] [rbp+100h]
  unsigned __int128 v41; // [rsp+1C0h] [rbp+140h] BYREF
  unsigned __int128 v42; // [rsp+1D0h] [rbp+150h]
  __m512i v43; // [rsp+1E0h] [rbp+160h]
  unsigned __int64 *v44; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+228h] [rbp+1A8h]
  __int64 v46; // [rsp+230h] [rbp+1B0h]
  PVOID Address; // [rsp+238h] [rbp+1B8h]
  PVOID v48; // [rsp+240h] [rbp+1C0h]
  _DWORD v49[2]; // [rsp+248h] [rbp+1C8h]
  unsigned __int64 v50; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v51; // [rsp+258h] [rbp+1D8h]
  __int64 v52; // [rsp+260h] [rbp+1E0h]
  int v53; // [rsp+268h] [rbp+1E8h]
  char v54; // [rsp+26Dh] [rbp+1EDh] BYREF
  char v55; // [rsp+26Eh] [rbp+1EEh]
  char v56; // [rsp+26Fh] [rbp+1EFh]
  __int64 v57; // [rsp+270h] [rbp+1F0h]

  v57 = -2; /*0x140afb94b*/
  v2 = *a2; /*0x140afb956*/
  *a2 = -1; /*0x140afb959*/
  if ( v2 == -1 ) /*0x140afb964*/
    sub_1416C3000(aInternalExcept, 45, &off_1417B0C60); /*0x140afbcad*/
  v34 = v2; /*0x140afb971*/
  sub_141684120(v35, a2 + 1, 144); /*0x140afb97f*/
  v56 = 1; /*0x140afb984*/
  sub_1412F1410(); /*0x140afb98b*/
  sub_141684120(v36, &v34, 152); /*0x140afb99f*/
  v4 = sub_1400048C0((volatile void *)(*(_QWORD *)(v37 + 5016) + 16LL)); /*0x140afb9b6*/
  if ( !v4 ) /*0x140afb9bf*/
  {
    *(_QWORD *)&v41 = aCodexmateLibCo; /*0x140afbcc2*/
    *((_QWORD *)&v41 + 1) = 61; /*0x140afbcc9*/
    *(_QWORD *)&v38 = &v41; /*0x140afbcd4*/
    *((_QWORD *)&v38 + 1) = sub_14041F680; /*0x140afbce2*/
    sub_1416C32C0(&unk_1416C99C2, &v38, &off_1416C9A50); /*0x140afbcfe*/
  }
  lock(&v41, v4, aLoggingOutTheA, 36); /*0x140afb9df*/
  if ( (_DWORD)v41 != -1 ) /*0x140afb9ec*/
  {
    v40 = v43; /*0x140afb9f9*/
    v39 = v42; /*0x140afba38*/
    v38 = v41; /*0x140afba3f*/
    v50 = 0; /*0x140afba46*/
    v51 = 1; /*0x140afba51*/
    v52 = 0; /*0x140afba5c*/
    v46 = 1610612768; /*0x140afba67*/
    v44 = &v50; /*0x140afba79*/
    v45 = &off_1417B1268; /*0x140afba87*/
    if ( (unsigned __int8)sub_140B036A0(&v38, &v44) ) /*0x140afba9c*/
      sub_1416C3060( /*0x140afbd2f*/
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v54,
        (unsigned int)&unk_1417AEA70,
        (__int64)&off_1417B1320);
    v5 = v50; /*0x140afbaaa*/
    v6 = v51; /*0x140afbab1*/
    v7 = v52; /*0x140afbab8*/
    v49[0] = *(_DWORD *)((char *)&v52 + 1); /*0x140afbac5*/
    *(_DWORD *)((char *)v49 + 3) = HIDWORD(v52); /*0x140afbad1*/
    sub_140A8FF60(&v41); /*0x140afbade*/
    LODWORD(v50) = v49[0]; /*0x140afbaf0*/
    *(_DWORD *)((char *)&v50 + 3) = *(_DWORD *)((char *)v49 + 3); /*0x140afbaf6*/
    v8 = -1; /*0x140afbafc*/
    v9 = __PAIR128__(v6, v5); /*0x140afbb03*/
    goto LABEL_37; /*0x140afbb03*/
  }
  Address = *((PVOID *)&v41 + 1); /*0x140afbb0f*/
  v55 = v42; /*0x140afbb1d*/
  v10 = (_BYTE *)sub_140003640((volatile void *)(*(_QWORD *)(v37 + 5016) + 16LL)); /*0x140afbb35*/
  v13 = v10; /*0x140afbb3b*/
  if ( !v10 ) /*0x140afbb41*/
  {
    *(_QWORD *)&v41 = aStdSyncPoisonM; /*0x140afbd41*/
    *((_QWORD *)&v41 + 1) = 76; /*0x140afbd48*/
    *(_QWORD *)&v38 = &v41; /*0x140afbd53*/
    *((_QWORD *)&v38 + 1) = sub_14041F680; /*0x140afbd61*/
    sub_1416C32C0(&unk_1416C99C2, &v38, &off_1416C9A50); /*0x140afbd7d*/
  }
  LOBYTE(v12) = 1; /*0x140afbb47*/
  if ( _InterlockedCompareExchange8(v10, 1, 0) ) /*0x140afbb4b*/
    sub_1416C15B0(v10); /*0x140afbd8b*/
  v14 = off_141EC90B8; /*0x140afbb55*/
  if ( !(2 * *off_141EC90B8) ) /*0x140afbb5f*/
  {
    v53 = 0; /*0x140afbb6b*/
    v15 = v13[1]; /*0x140afbb75*/
    v48 = v13; /*0x140afbb7b*/
    if ( v15 ) /*0x140afbb82*/
      goto LABEL_11; /*0x140afbb82*/
LABEL_25:
    logout_0(&v41, v13 + 8); /*0x140afbdb7*/
    if ( (_DWORD)v41 == -1 ) /*0x140afbdd2*/
    {
      v8 = *((_QWORD *)&v41 + 1); /*0x140afbefb*/
      v7 = v43.m512i_i8[0]; /*0x140afbf10*/
      LODWORD(v50) = *(__int32 *)((char *)v43.m512i_i32 + 1); /*0x140afbf1e*/
      *(_DWORD *)((char *)&v50 + 3) = v43.m512i_i32[1]; /*0x140afbf2a*/
      v38 = *(_OWORD *)&v43.m512i_u64[1]; /*0x140afbf37*/
      v39 = *(_OWORD *)&v43.m512i_u64[3]; /*0x140afbf45*/
      *(_OWORD *)v40.m512i_i8 = *(_OWORD *)&v43.m512i_u64[5]; /*0x140afbf53*/
      v27 = (char *)v48; /*0x140afbf5a*/
      v9 = v42; /*0x140afbf68*/
      if ( (_BYTE)v53 ) /*0x140afbf68*/
        goto LABEL_31; /*0x140afbf68*/
    }
    else
    {
      v40 = v43; /*0x140afbddf*/
      v39 = v42; /*0x140afbe1e*/
      v38 = v41; /*0x140afbe25*/
      v50 = 0; /*0x140afbe2c*/
      v51 = 1; /*0x140afbe37*/
      v52 = 0; /*0x140afbe42*/
      v46 = 1610612768; /*0x140afbe4d*/
      v44 = &v50; /*0x140afbe5f*/
      v45 = &off_1417B1268; /*0x140afbe6d*/
      if ( (unsigned __int8)sub_140B036A0(&v38, &v44) ) /*0x140afbe82*/
        sub_1416C3060( /*0x140afc0d1*/
          (unsigned int)aADisplayImplem_9,
          55,
          (unsigned int)&v54,
          (unsigned int)&unk_1417AEA70,
          (__int64)&off_1417B1320);
      v25 = v50; /*0x140afbe90*/
      v26 = v51; /*0x140afbe97*/
      v7 = v52; /*0x140afbe9e*/
      v49[0] = *(_DWORD *)((char *)&v52 + 1); /*0x140afbeab*/
      *(_DWORD *)((char *)v49 + 3) = HIDWORD(v52); /*0x140afbeb7*/
      sub_140A8FF60(&v41); /*0x140afbec4*/
      v24 = *(_DWORD *)((char *)v49 + 3); /*0x140afbed0*/
      LODWORD(v50) = v49[0]; /*0x140afbed6*/
      *(_DWORD *)((char *)&v50 + 3) = *(_DWORD *)((char *)v49 + 3); /*0x140afbedc*/
      v8 = -1; /*0x140afbee2*/
      v27 = (char *)v48; /*0x140afbee9*/
      v9 = __PAIR128__(v26, v25); /*0x140afbef7*/
      if ( (_BYTE)v53 ) /*0x140afbef7*/
      {
LABEL_31:
        v28 = *v27; /*0x140afbf79*/
        *v27 = 0; /*0x140afbf7b*/
        if ( v28 == 2 ) /*0x140afbf81*/
          WakeByAddressSingle(v27); /*0x140afc05e*/
        if ( !v55 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v24, v23) ) /*0x140afc0f1*/
          *((_BYTE *)Address + 1) = 1; /*0x140afc106*/
        v20 = Address; /*0x140afbfa1*/
        v29 = *(_BYTE *)Address; /*0x140afbfa8*/
        *(_BYTE *)Address = 0; /*0x140afbfa8*/
        if ( v29 == 2 ) /*0x140afbfac*/
          goto LABEL_36; /*0x140afbfac*/
        goto LABEL_37; /*0x140afbfac*/
      }
    }
    if ( 2 * *v14 && !(unsigned __int8)sub_1416C2250(v24, v23) ) /*0x140afc0d9*/
      v27[1] = 1; /*0x140afc0e7*/
    goto LABEL_31; /*0x140afc0ec*/
  }
  v22 = sub_1416C2250(v12, v11); /*0x140afbd96*/
  LOBYTE(v22) = v22 ^ 1; /*0x140afbd9c*/
  v53 = v22; /*0x140afbd9e*/
  LOBYTE(v22) = v13[1]; /*0x140afbda4*/
  v48 = v13; /*0x140afbdaa*/
  if ( !(_BYTE)v22 ) /*0x140afbdb1*/
    goto LABEL_25; /*0x140afbdb1*/
LABEL_11:
  *(_QWORD *)&v41 = 0; /*0x140afbb88*/
  *((_QWORD *)&v41 + 1) = 1; /*0x140afbb93*/
  *(_QWORD *)&v42 = 0; /*0x140afbb9e*/
  *(_QWORD *)&v39 = 1610612768; /*0x140afbba9*/
  *(_QWORD *)&v38 = &v41; /*0x140afbbb4*/
  *((_QWORD *)&v38 + 1) = &off_1417B1268; /*0x140afbbc2*/
  if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v38) ) /*0x140afbbdc*/
    sub_1416C3060( /*0x140afc042*/
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v54,
      (unsigned int)&unk_1417AEA70,
      (__int64)&off_1417B1320);
  v9 = v41; /*0x140afbbf1*/
  v7 = v42; /*0x140afbbf8*/
  LODWORD(v44) = *(_DWORD *)((char *)&v42 + 1); /*0x140afbc06*/
  *(_DWORD *)((char *)&v44 + 3) = DWORD1(v42); /*0x140afbc12*/
  v18 = (char *)v48; /*0x140afbc1f*/
  if ( !(_BYTE)v53 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(v17, v16) ) /*0x140afc074*/
    v18[1] = 1; /*0x140afc082*/
  v19 = *v18; /*0x140afbc39*/
  *v18 = 0; /*0x140afbc39*/
  if ( v19 == 2 ) /*0x140afbc3f*/
    WakeByAddressSingle(v18); /*0x140afc050*/
  *(_DWORD *)((char *)&v50 + 3) = *(_DWORD *)((char *)&v44 + 3); /*0x140afbc51*/
  LODWORD(v50) = (_DWORD)v44; /*0x140afbc57*/
  if ( !v55 && 2 * *v14 && !(unsigned __int8)sub_1416C2250(*(unsigned int *)((char *)&v44 + 3), v16) ) /*0x140afc08d*/
    *((_BYTE *)Address + 1) = 1; /*0x140afc0a2*/
  v20 = Address; /*0x140afbc77*/
  v21 = *(_BYTE *)Address; /*0x140afbc7e*/
  *(_BYTE *)Address = 0; /*0x140afbc7e*/
  v8 = -1; /*0x140afbc80*/
  if ( v21 == 2 ) /*0x140afbc89*/
LABEL_36:
    WakeByAddressSingle(v20); /*0x140afc069*/
LABEL_37:
  v56 = 0; /*0x140afbfb2*/
  sub_140014150(v36); /*0x140afbfbd*/
  *(_QWORD *)a1 = v8; /*0x140afbfc3*/
  *(_OWORD *)(a1 + 8) = v9; /*0x140afbfc6*/
  *(_BYTE *)(a1 + 24) = v7; /*0x140afbfce*/
  v30 = *(_DWORD *)((char *)&v50 + 3); /*0x140afbfd8*/
  *(_DWORD *)(a1 + 25) = v50; /*0x140afbfde*/
  *(_DWORD *)(a1 + 28) = v30; /*0x140afbfe1*/
  v31 = v39; /*0x140afbfeb*/
  v32 = *(_OWORD *)v40.m512i_i8; /*0x140afbff2*/
  *(_OWORD *)(a1 + 32) = v38; /*0x140afbff9*/
  *(_OWORD *)(a1 + 48) = v31; /*0x140afbffd*/
  *(_OWORD *)(a1 + 64) = v32; /*0x140afc001*/
  return a1; /*0x140afc008*/
}