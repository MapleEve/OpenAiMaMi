// win 1.2.3 | = mac codexmate_lib::commands::system::restart_codex::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__18(__int64 a1, __int64 *a2)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r15
  char v11; // al
  int v12; // ecx
  _BYTE v14[136]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h]
  __int64 v16; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v17[144]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v18; // [rsp+160h] [rbp+E0h] BYREF
  __int128 v19; // [rsp+170h] [rbp+F0h]
  __int128 v20; // [rsp+180h] [rbp+100h]
  __int128 v21; // [rsp+190h] [rbp+110h]
  __int128 v22; // [rsp+1A0h] [rbp+120h]
  __int128 v23; // [rsp+1B0h] [rbp+130h]
  __int64 *v24; // [rsp+1C8h] [rbp+148h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+1D0h] [rbp+150h]
  __int64 v26; // [rsp+1D8h] [rbp+158h]
  __int128 v27; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v28; // [rsp+1F0h] [rbp+170h]
  __int128 v29; // [rsp+200h] [rbp+180h]
  __int128 v30; // [rsp+210h] [rbp+190h]
  __int128 v31; // [rsp+220h] [rbp+1A0h]
  __int128 v32; // [rsp+230h] [rbp+1B0h]
  PVOID Address; // [rsp+240h] [rbp+1C0h]
  __int64 v34; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v35; // [rsp+250h] [rbp+1D0h]
  __int64 v36; // [rsp+258h] [rbp+1D8h]
  _DWORD v37[2]; // [rsp+264h] [rbp+1E4h]
  char v38; // [rsp+26Dh] [rbp+1EDh] BYREF
  char v39; // [rsp+26Eh] [rbp+1EEh]
  char v40; // [rsp+26Fh] [rbp+1EFh]
  __int64 v41; // [rsp+270h] [rbp+1F0h]

  v41 = -2; /*0x140af5f57*/
  v4 = *a2; /*0x140af5f62*/
  *a2 = -1; /*0x140af5f65*/
  if ( v4 == -1 ) /*0x140af5f70*/
    sub_1416C3000(aInternalExcept, 45, &off_1417B0C60); /*0x140af635b*/
  v16 = v4; /*0x140af5f7d*/
  sub_141684120(v17, a2 + 1, 144); /*0x140af5f8b*/
  v40 = 1; /*0x140af5f90*/
  sub_1412F1410(); /*0x140af5f97*/
  sub_141684120(v14, &v16, 152); /*0x140af5fab*/
  v6 = sub_1400048C0((volatile void *)(*(_QWORD *)(v15 + 5016) + 16LL)); /*0x140af5fbf*/
  if ( !v6 ) /*0x140af5fc8*/
  {
    *(_QWORD *)&v18 = aCodexmateLibCo; /*0x140af6370*/
    *((_QWORD *)&v18 + 1) = 61; /*0x140af6377*/
    *(_QWORD *)&v27 = &v18; /*0x140af6382*/
    *((_QWORD *)&v27 + 1) = sub_14041F680; /*0x140af6390*/
    sub_1416C32C0(&unk_1416C99C2, &v27, &off_1416C9A50); /*0x140af63ac*/
  }
  lock(&v18, v6, aRestartingTheC, 34); /*0x140af5fe5*/
  if ( (_DWORD)v18 != -1 ) /*0x140af5ff2*/
  {
    v32 = v23; /*0x140af5fff*/
    v31 = v22; /*0x140af600d*/
    v30 = v21; /*0x140af6030*/
    v29 = v20; /*0x140af6037*/
    v28 = v19; /*0x140af603e*/
    v27 = v18; /*0x140af6045*/
    v34 = 0; /*0x140af604c*/
    v35 = 1; /*0x140af6057*/
    v36 = 0; /*0x140af6062*/
    v26 = 1610612768; /*0x140af606d*/
    v24 = &v34; /*0x140af607f*/
    v25 = &off_1417B1268; /*0x140af608d*/
    if ( (unsigned __int8)sub_140B036A0(&v27, &v24) ) /*0x140af60a2*/
      sub_1416C3060( /*0x140af63da*/
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v38,
        (unsigned int)&unk_1417AEA70,
        (__int64)&off_1417B1320);
    v7 = v34; /*0x140af60b0*/
    v3 = v35; /*0x140af60b7*/
    v2 = v36; /*0x140af60be*/
    v37[0] = *(_DWORD *)((char *)&v36 + 1); /*0x140af60ca*/
    *(_DWORD *)((char *)v37 + 3) = HIDWORD(v36); /*0x140af60d6*/
    sub_140A8FF60(&v18); /*0x140af60e3*/
    LODWORD(v27) = v37[0]; /*0x140af60f5*/
    *(_DWORD *)((char *)&v27 + 3) = *(_DWORD *)((char *)v37 + 3); /*0x140af60fb*/
    goto LABEL_17; /*0x140af6101*/
  }
  Address = *((PVOID *)&v18 + 1); /*0x140af610d*/
  v39 = v19; /*0x140af611b*/
  prepare_transition(&v27, 5, 0, 0); /*0x140af6133*/
  if ( (_DWORD)v27 == -1 ) /*0x140af6140*/
  {
    sub_1403B6530(&v18); /*0x140af619f*/
  }
  else
  {
    v23 = v32; /*0x140af6149*/
    v22 = v31; /*0x140af6157*/
    v21 = v30; /*0x140af617a*/
    v20 = v29; /*0x140af6181*/
    v19 = v28; /*0x140af6188*/
    v18 = v27; /*0x140af618f*/
  }
  if ( (_QWORD)v18 != -1 ) /*0x140af61ad*/
  {
    v32 = v23; /*0x140af61ba*/
    v31 = v22; /*0x140af61c8*/
    v30 = v21; /*0x140af61eb*/
    v29 = v20; /*0x140af61f2*/
    v28 = v19; /*0x140af61f9*/
    v27 = v18; /*0x140af6200*/
    v34 = 0; /*0x140af6207*/
    v35 = 1; /*0x140af6212*/
    v36 = 0; /*0x140af621d*/
    v26 = 1610612768; /*0x140af6228*/
    v24 = &v34; /*0x140af623a*/
    v25 = &off_1417B1268; /*0x140af6248*/
    if ( (unsigned __int8)sub_140B036A0(&v27, &v24) ) /*0x140af625d*/
      sub_1416C3060( /*0x140af6416*/
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v38,
        (unsigned int)&unk_1417AEA70,
        (__int64)&off_1417B1320);
    v7 = v34; /*0x140af626b*/
    v3 = v35; /*0x140af6272*/
    v2 = v36; /*0x140af6279*/
    v37[0] = *(_DWORD *)((char *)&v36 + 1); /*0x140af6285*/
    *(_DWORD *)((char *)v37 + 3) = HIDWORD(v36); /*0x140af6291*/
    sub_140A8FF60(&v18); /*0x140af629e*/
    v9 = *(_DWORD *)((char *)v37 + 3); /*0x140af62aa*/
    LODWORD(v27) = v37[0]; /*0x140af62b0*/
    *(_DWORD *)((char *)&v27 + 3) = *(_DWORD *)((char *)v37 + 3); /*0x140af62b6*/
    v10 = (char *)Address; /*0x140af62bc*/
    if ( v39 ) /*0x140af62ca*/
      goto LABEL_15; /*0x140af62ca*/
    goto LABEL_14; /*0x140af62ca*/
  }
  v7 = -1; /*0x140af62ce*/
  v10 = (char *)Address; /*0x140af62d5*/
  if ( !v39 ) /*0x140af62e3*/
  {
LABEL_14:
    if ( 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v9, v8) ) /*0x140af641e*/
      v10[1] = 1; /*0x140af642c*/
  }
LABEL_15:
  v11 = *v10; /*0x140af62fb*/
  *v10 = 0; /*0x140af62fd*/
  if ( v11 == 2 ) /*0x140af6302*/
    WakeByAddressSingle(v10); /*0x140af63e5*/
LABEL_17:
  v40 = 0; /*0x140af6308*/
  sub_140014150(v14); /*0x140af6313*/
  *(_QWORD *)a1 = v7; /*0x140af6319*/
  *(_QWORD *)(a1 + 8) = v3; /*0x140af631c*/
  *(_BYTE *)(a1 + 16) = v2; /*0x140af6320*/
  v12 = *(_DWORD *)((char *)&v27 + 3); /*0x140af6329*/
  *(_DWORD *)(a1 + 17) = v27; /*0x140af632f*/
  *(_DWORD *)(a1 + 20) = v12; /*0x140af6332*/
  return a1; /*0x140af6338*/
}