// addr: 0x14085a330
// name (owner-map): bootstrap
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::bootstrap | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall bootstrap(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // r12
  char *v4; // rdi
  __int64 *v5; // r13
  unsigned int v6; // ebx
  char v7; // al
  _BOOL8 v8; // rcx
  char v9; // al
  const void *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  PVOID v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r15
  const char *v19; // r14
  __int64 v20; // rcx
  char v21; // al
  _QWORD *v22; // r15
  __int64 v23; // r8
  __int128 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rdi
  __int64 v28; // r15
  __int64 v29; // rcx
  char v30; // al
  PVOID v31; // rcx
  char v32; // al
  unsigned __int128 v33; // [rsp+40h] [rbp-40h] BYREF
  __int128 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+60h] [rbp-20h]
  __int128 v36; // [rsp+70h] [rbp-10h]
  __int128 v37; // [rsp+80h] [rbp+0h]
  __int128 v38; // [rsp+90h] [rbp+10h]
  __int64 v39; // [rsp+420h] [rbp+3A0h]
  __int64 v40; // [rsp+428h] [rbp+3A8h]
  unsigned __int128 v41; // [rsp+448h] [rbp+3C8h] BYREF
  __int128 v42; // [rsp+458h] [rbp+3D8h]
  __int128 v43; // [rsp+468h] [rbp+3E8h]
  __int128 v44; // [rsp+478h] [rbp+3F8h]
  __int128 v45; // [rsp+488h] [rbp+408h]
  __int128 v46; // [rsp+498h] [rbp+418h]
  char v47; // [rsp+56Ch] [rbp+4ECh]
  __int128 v48; // [rsp+570h] [rbp+4F0h]
  _BYTE v49[1040]; // [rsp+580h] [rbp+500h] BYREF
  _QWORD v50[2]; // [rsp+990h] [rbp+910h] BYREF
  PVOID v51; // [rsp+9A0h] [rbp+920h]
  __int64 v52; // [rsp+9A8h] [rbp+928h] BYREF
  __int128 v53; // [rsp+9B0h] [rbp+930h]
  _BYTE *v54; // [rsp+9C0h] [rbp+940h] BYREF
  __int64 (__fastcall *v55)(_QWORD, _QWORD); // [rsp+9C8h] [rbp+948h]
  const char *v56; // [rsp+9D8h] [rbp+958h] BYREF
  __int64 v57; // [rsp+9E0h] [rbp+960h]
  __int128 v58; // [rsp+9E8h] [rbp+968h]
  char **v59; // [rsp+9F8h] [rbp+978h]
  __int64 v60; // [rsp+A00h] [rbp+980h] BYREF
  __int64 v61; // [rsp+A08h] [rbp+988h]
  const char *v62; // [rsp+A10h] [rbp+990h]
  __int64 v63; // [rsp+A18h] [rbp+998h]
  _BYTE FileHandle[80]; // [rsp+A20h] [rbp+9A0h] BYREF
  __int128 v65; // [rsp+A70h] [rbp+9F0h]
  __int128 v66; // [rsp+A80h] [rbp+A00h] BYREF
  __int128 v67; // [rsp+A90h] [rbp+A10h] BYREF
  __int128 v68; // [rsp+AA0h] [rbp+A20h]
  __int128 v69; // [rsp+AB0h] [rbp+A30h]
  __int64 v70; // [rsp+AC0h] [rbp+A40h]
  unsigned int v71; // [rsp+AD4h] [rbp+A54h]
  __int64 v72; // [rsp+AD8h] [rbp+A58h]
  PVOID Address; // [rsp+AE0h] [rbp+A60h]
  unsigned __int8 v74; // [rsp+AEEh] [rbp+A6Eh] BYREF
  char v75; // [rsp+AEFh] [rbp+A6Fh] BYREF
  __int64 v76; // [rsp+AF0h] [rbp+A70h]

  v76 = -2; /*0x14085a34b*/
  v1 = *(_QWORD *)(a1 + 16); /*0x14085a356*/
  if ( *(_QWORD *)(v1 + 16) != -1 ) /*0x14085a35f*/
  {
    sub_14149C500((char *)&v41 + 8, v1 + 16); /*0x14085a370*/
    *(_QWORD *)&v41 = 9; /*0x14085a375*/
    v38 = v46; /*0x14085a387*/
    v37 = v45; /*0x14085a3a7*/
    v36 = v44; /*0x14085a3ab*/
    v35 = v43; /*0x14085a3af*/
    v34 = v42; /*0x14085a3b3*/
    v33 = __PAIR128__(*((unsigned __int64 *)&v41 + 1), 9); /*0x14085a3be*/
    if ( *(_QWORD *)off_141EC8D80 ) /*0x14085a3d4*/
    {
      *(_QWORD *)FileHandle = &v33; /*0x14085a3e4*/
      *(_QWORD *)&FileHandle[8] = sub_140B036A0; /*0x14085a3f2*/
      *(_QWORD *)v49 = 0; /*0x14085a3f9*/
      *(_QWORD *)&v49[8] = aCodexmateLibCo_5; /*0x14085a40b*/
      *(_OWORD *)&v49[16] = 0x23u; /*0x14085a412*/
      *(_QWORD *)&v49[32] = aSrcCoreRelayMa_2; /*0x14085a42f*/
      *(_QWORD *)&v49[40] = 25; /*0x14085a436*/
      *(_QWORD *)&v49[48] = 1; /*0x14085a441*/
      *(_QWORD *)&v49[56] = aCodexmateLibCo_5; /*0x14085a44c*/
      *(_QWORD *)&v49[64] = 35; /*0x14085a453*/
      *(_QWORD *)&v49[72] = 0xBB00000001LL; /*0x14085a468*/
      *(_QWORD *)&v49[80] = &unk_141797E90; /*0x14085a476*/
      *(_QWORD *)&v49[88] = FileHandle; /*0x14085a484*/
      sub_1412C36A0(&v75, v49); /*0x14085a499*/
    }
    sub_1407DA310(&v33); /*0x14085a4a3*/
    return; /*0x14085a4a8*/
  }
  v2 = a1; /*0x14085a4ad*/
  v3 = *(_QWORD *)(a1 + 32); /*0x14085a4b0*/
  v4 = (char *)(v3 + 16); /*0x14085a4b4*/
  LOBYTE(a1) = 1; /*0x14085a4b9*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v3 + 16), 1, 0) ) /*0x14085a4bd*/
    sub_1416C15B0((volatile void *)(v3 + 16)); /*0x14085b771*/
  v5 = off_141EC90B8; /*0x14085a4ca*/
  if ( 2 * *off_141EC90B8 ) /*0x14085a4d5*/
  {
    v6 = sub_1416C2250(a1, v1); /*0x14085b780*/
    LOBYTE(v6) = v6 ^ 1; /*0x14085b782*/
  }
  else
  {
    v6 = 0; /*0x14085a4e1*/
  }
  v7 = *(_BYTE *)(v3 + 17); /*0x14085a4e3*/
  v8 = v7 != 0; /*0x14085a4ed*/
  *((_QWORD *)&v33 + 1) = v3 + 16; /*0x14085a4f0*/
  LOBYTE(v34) = v6; /*0x14085a4f4*/
  *(_QWORD *)&v33 = v8; /*0x14085a4f7*/
  if ( v7 ) /*0x14085a4fb*/
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085a50f*/
    {
      *(_QWORD *)v49 = 0; /*0x14085a515*/
      *(_QWORD *)&v49[8] = aCodexmateLibCo_5; /*0x14085a527*/
      *(_OWORD *)&v49[16] = 0x23u; /*0x14085a52e*/
      *(_QWORD *)&v49[32] = aSrcCoreRelayMa_2; /*0x14085a54b*/
      *(_QWORD *)&v49[40] = 25; /*0x14085a552*/
      *(_QWORD *)&v49[48] = 2; /*0x14085a55d*/
      *(_QWORD *)&v49[56] = aCodexmateLibCo_5; /*0x14085a568*/
      *(_QWORD *)&v49[64] = 35; /*0x14085a56f*/
      *(_QWORD *)&v49[72] = 0xC100000001LL; /*0x14085a584*/
      *(_QWORD *)&v49[80] = &unk_141798018; /*0x14085a592*/
      *(_QWORD *)&v49[88] = 153; /*0x14085a599*/
      sub_1412C36A0(&v75, v49); /*0x14085a5b2*/
    }
    if ( !(_BYTE)v6 && 2 * *v5 && !(unsigned __int8)sub_1416C2250(v8, v1) ) /*0x14085b791*/
      *(_BYTE *)(v3 + 17) = 1; /*0x14085b79e*/
    v9 = *v4; /*0x14085a5ce*/
    *v4 = 0; /*0x14085a5ce*/
    if ( v9 == 2 ) /*0x14085a5d2*/
      WakeByAddressSingle((PVOID)(v3 + 16)); /*0x14085a5db*/
    return; /*0x14085a5e0*/
  }
  v71 = v6; /*0x14085a5e5*/
  v51 = (PVOID)(v3 + 16); /*0x14085a5eb*/
  ensure_proxy_started(&v41, (volatile signed __int64 **)v2); /*0x14085a5fc*/
  if ( (_DWORD)v41 != -1 ) /*0x14085a609*/
  {
    v38 = v46; /*0x14085a616*/
    v37 = v45; /*0x14085a621*/
    v36 = v44; /*0x14085a641*/
    v35 = v43; /*0x14085a645*/
    v34 = v42; /*0x14085a649*/
    v33 = v41; /*0x14085a64d*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085a65f*/
    {
      *(_QWORD *)FileHandle = &v33; /*0x14085a669*/
      *(_QWORD *)&FileHandle[8] = sub_140B036A0; /*0x14085a677*/
      *(_QWORD *)v49 = 0; /*0x14085a67e*/
      *(_QWORD *)&v49[8] = aCodexmateLibCo_5; /*0x14085a690*/
      *(_OWORD *)&v49[16] = 0x23u; /*0x14085a697*/
      *(_QWORD *)&v49[32] = aSrcCoreRelayMa_2; /*0x14085a6b4*/
      *(_QWORD *)&v49[40] = 25; /*0x14085a6bb*/
      *(_QWORD *)&v49[48] = 2; /*0x14085a6c6*/
      *(_QWORD *)&v49[56] = aCodexmateLibCo_5; /*0x14085a6d1*/
      *(_QWORD *)&v49[64] = 35; /*0x14085a6d8*/
      *(_QWORD *)&v49[72] = 0x8FF00000001LL; /*0x14085a6ed*/
      *(_QWORD *)&v49[80] = &unk_141796AC8; /*0x14085a6fb*/
      *(_QWORD *)&v49[88] = FileHandle; /*0x14085a709*/
      sub_1412C36A0(&v75, v49); /*0x14085a71e*/
    }
    sub_1407DA310(&v33); /*0x14085a728*/
  }
  if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) == 1 || (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1 ) /*0x14085a75a*/
  {
    sub_14085A1E0((__int64)&v41, v2); /*0x14085a76a*/
    LOBYTE(v6) = v47 ^ 1; /*0x14085a776*/
    LOBYTE(v60) = v47 ^ 1; /*0x14085a779*/
    v10 = (const void *)(*(_QWORD *)v2 + 16LL); /*0x14085a782*/
    sub_14047C8E0(v49, v10, 0); /*0x14085a793*/
    if ( *(_QWORD *)v49 == -1 ) /*0x14085a7a1*/
    {
      v38 = *(_OWORD *)&v49[88]; /*0x14085a822*/
      v37 = *(_OWORD *)&v49[72]; /*0x14085a82d*/
      v36 = *(_OWORD *)&v49[56]; /*0x14085a84d*/
      v35 = *(_OWORD *)&v49[40]; /*0x14085a851*/
      v34 = *(_OWORD *)&v49[24]; /*0x14085a855*/
      v33 = *(_OWORD *)&v49[8]; /*0x14085a859*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085a86b*/
      {
        *(_QWORD *)&v66 = &v33; /*0x14085a871*/
        *((_QWORD *)&v66 + 1) = sub_140B036A0; /*0x14085a87f*/
        *(_QWORD *)FileHandle = aCodexmateLibCo_5; /*0x14085a88d*/
        *(_QWORD *)&FileHandle[8] = 35; /*0x14085a894*/
        *(_QWORD *)&FileHandle[16] = aCodexmateLibCo_5; /*0x14085a89f*/
        *(_QWORD *)&FileHandle[24] = 35; /*0x14085a8a6*/
        *(_QWORD *)&FileHandle[32] = &off_141798000; /*0x14085a8b8*/
        sub_140985BA0(&unk_141797AE0, &v66, 2, FileHandle); /*0x14085a8da*/
      }
      sub_1407DA310(&v33); /*0x14085a8e4*/
    }
    else
    {
      sub_141684120(&v33, v49, 1032); /*0x14085a7b7*/
      sub_140852800((unsigned int)&v52, *(_QWORD *)(v2 + 24), (unsigned int)&v33, (unsigned __int8)v60, 0); /*0x14085a7d7*/
      codex_config_stale_reason(&v56, v2); /*0x14085a7ea*/
      v11 = *((_QWORD *)&v53 + 1); /*0x14085a7f0*/
      if ( *((_QWORD *)&v53 + 1) | ~(unsigned __int64)v56 ) /*0x14085a804*/
      {
        *(_QWORD *)&v66 = *((_QWORD *)&v53 + 1); /*0x14085aa3e*/
        LOBYTE(v54) = v56 + 1 != nullptr; /*0x14085aa49*/
        *(_QWORD *)v49 = &v66; /*0x14085aa57*/
        *(_QWORD *)&v49[8] = sub_1414AC520; /*0x14085aa65*/
        *(_QWORD *)&v49[16] = &v54; /*0x14085aa73*/
        *(_QWORD *)&v49[24] = sub_1414AC660; /*0x14085aa81*/
        sub_14149C0F0(FileHandle, &unk_141797EBC, v49); /*0x14085aaa0*/
        Address = *(PVOID *)FileHandle; /*0x14085aaad*/
        v72 = *(_QWORD *)&FileHandle[8]; /*0x14085aac7*/
        write((int)FileHandle, v10, v6); /*0x14085aaf0*/
        if ( *(_DWORD *)FileHandle != -1 ) /*0x14085aafd*/
        {
          *(_OWORD *)&v49[80] = v65; /*0x14085ab0a*/
          *(_OWORD *)&v49[64] = *(_OWORD *)&FileHandle[64]; /*0x14085ab18*/
          *(_OWORD *)&v49[48] = *(_OWORD *)&FileHandle[48]; /*0x14085ab3b*/
          *(_OWORD *)&v49[32] = *(_OWORD *)&FileHandle[32]; /*0x14085ab42*/
          *(_OWORD *)&v49[16] = *(_OWORD *)&FileHandle[16]; /*0x14085ab49*/
          *(_OWORD *)v49 = *(_OWORD *)FileHandle; /*0x14085ab50*/
          if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085ab65*/
          {
            v54 = v49; /*0x14085ab67*/
            v55 = sub_140B036A0; /*0x14085ab75*/
            *(_QWORD *)&v66 = aCodexmateLibCo_5; /*0x14085ab83*/
            *((_QWORD *)&v66 + 1) = 35; /*0x14085ab8a*/
            *(_QWORD *)&v67 = aCodexmateLibCo_5; /*0x14085ab95*/
            *((_QWORD *)&v67 + 1) = 35; /*0x14085ab9c*/
            *(_QWORD *)&v68 = &off_141797F58; /*0x14085abae*/
            sub_140985BA0(&unk_141797F0D, &v54, 2, &v66); /*0x14085abd0*/
          }
          sub_1407DA310(v49); /*0x14085abdd*/
        }
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085abf1*/
        {
          sub_1408731C0(&v66, v53, v11); /*0x14085ac0b*/
          *(_QWORD *)v49 = &v60; /*0x14085ac18*/
          *(_QWORD *)&v49[8] = sub_1408881C0; /*0x14085ac26*/
          *(_QWORD *)&v49[16] = &v66; /*0x14085ac2d*/
          *(_QWORD *)&v49[24] = sub_1400015F0; /*0x14085ac3b*/
          *(_QWORD *)&v49[32] = &v56; /*0x14085ac42*/
          *(_QWORD *)&v49[40] = sub_140892300; /*0x14085ac50*/
          *(_QWORD *)FileHandle = aCodexmateLibCo_5; /*0x14085ac5e*/
          *(_QWORD *)&FileHandle[8] = 35; /*0x14085ac65*/
          *(_QWORD *)&FileHandle[16] = aCodexmateLibCo_5; /*0x14085ac70*/
          *(_QWORD *)&FileHandle[24] = 35; /*0x14085ac77*/
          *(_QWORD *)&FileHandle[32] = &off_141797FE8; /*0x14085ac89*/
          sub_140985BA0(&unk_141797F70, v49, 2, FileHandle); /*0x14085acab*/
          if ( (_QWORD)v66 ) /*0x14085acbb*/
            sub_140001660(*((_QWORD *)&v66 + 1), v66, 1); /*0x14085acca*/
        }
        if ( Address ) /*0x14085acd9*/
          sub_140001660(v72, Address, 1); /*0x14085ace8*/
      }
      else
      {
        sub_140ADF0F0(v10); /*0x14085a810*/
      }
      if ( v56 != (const char *)-1LL && v56 ) /*0x14085acfd*/
        sub_140001660(v57, v56, 1); /*0x14085ad0c*/
      v14 = v53; /*0x14085ad11*/
      if ( v11 ) /*0x14085ad1b*/
      {
        v15 = 32 * v11; /*0x14085ad1d*/
        v16 = 0; /*0x14085ad21*/
        do /*0x14085ad37*/
        {
          v17 = *(_QWORD *)(v14 + v16); /*0x14085ad39*/
          if ( v17 ) /*0x14085ad40*/
            sub_140001660(*(_QWORD *)(v14 + v16 + 8), v17, 1); /*0x14085ad4d*/
          v16 += 32; /*0x14085ad30*/
        }
        while ( v15 != v16 ); /*0x14085ad37*/
      }
      if ( v52 ) /*0x14085ad5e*/
        sub_140001660(v14, 32 * v52, 8); /*0x14085ad6d*/
      sub_140016620(&v33); /*0x14085ad76*/
      if ( v39 ) /*0x14085ad85*/
        sub_140001660(v40, v39, 1); /*0x14085ad94*/
    }
    sub_140018740(&v41); /*0x14085ada1*/
    if ( (_BYTE)v71 || !(2 * *v5) ) /*0x14085adb8*/
      goto LABEL_112; /*0x14085adbe*/
    goto LABEL_118; /*0x14085adbe*/
  }
  lock(&v41, v2 + 40, aRunningRouterB, 33); /*0x14085a907*/
  if ( (_DWORD)v41 != -1 ) /*0x14085a914*/
  {
    v38 = v46; /*0x14085a921*/
    v37 = v45; /*0x14085a92c*/
    v36 = v44; /*0x14085a94c*/
    v35 = v43; /*0x14085a950*/
    v34 = v42; /*0x14085a954*/
    v33 = v41; /*0x14085a958*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085a96a*/
    {
      *(_QWORD *)FileHandle = &v33; /*0x14085a974*/
      *(_QWORD *)&FileHandle[8] = sub_140B036A0; /*0x14085a982*/
      *(_QWORD *)v49 = 0; /*0x14085a989*/
      *(_QWORD *)&v49[8] = aCodexmateLibCo_5; /*0x14085a99b*/
      *(_OWORD *)&v49[16] = 0x23u; /*0x14085a9a2*/
      *(_QWORD *)&v49[32] = aSrcCoreRelayMa_2; /*0x14085a9bf*/
      *(_QWORD *)&v49[40] = 25; /*0x14085a9c6*/
      *(_QWORD *)&v49[48] = 2; /*0x14085a9d1*/
      *(_QWORD *)&v49[56] = aCodexmateLibCo_5; /*0x14085a9dc*/
      *(_QWORD *)&v49[64] = 35; /*0x14085a9e3*/
      *(_QWORD *)&v49[72] = 0x20600000001LL; /*0x14085a9f8*/
      *(_QWORD *)&v49[80] = &unk_141797B30; /*0x14085aa06*/
      *(_QWORD *)&v49[88] = FileHandle; /*0x14085aa14*/
      sub_1412C36A0(&v75, v49); /*0x14085aa29*/
    }
    sub_1407DA310(&v33); /*0x14085aa33*/
    goto LABEL_110; /*0x14085aa39*/
  }
  Address = *((PVOID *)&v41 + 1); /*0x14085add0*/
  LOBYTE(v72) = v42; /*0x14085adde*/
  sub_14085A1E0((__int64)&v41, v2); /*0x14085adee*/
  v74 = v47 ^ 1; /*0x14085adfd*/
  v18 = *(_QWORD *)v2 + 16LL; /*0x14085ae06*/
  sub_14047C8E0(v49, v18, 0); /*0x14085ae17*/
  if ( *(_QWORD *)v49 == -1 ) /*0x14085ae25*/
  {
    v65 = *(_OWORD *)&v49[88]; /*0x14085af2d*/
    *(_OWORD *)&FileHandle[64] = *(_OWORD *)&v49[72]; /*0x14085af3b*/
    *(_OWORD *)&FileHandle[48] = *(_OWORD *)&v49[56]; /*0x14085af5e*/
    *(_OWORD *)&FileHandle[32] = *(_OWORD *)&v49[40]; /*0x14085af65*/
    *(_OWORD *)&FileHandle[16] = *(_OWORD *)&v49[24]; /*0x14085af6c*/
    *(_OWORD *)FileHandle = *(_OWORD *)&v49[8]; /*0x14085af73*/
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085af88*/
    {
      v56 = FileHandle; /*0x14085af91*/
      v57 = (__int64)sub_140B036A0; /*0x14085af9f*/
      *(_QWORD *)&v66 = aCodexmateLibCo_5; /*0x14085afad*/
      *((_QWORD *)&v66 + 1) = 35; /*0x14085afb4*/
      *(_QWORD *)&v67 = aCodexmateLibCo_5; /*0x14085afbf*/
      *((_QWORD *)&v67 + 1) = 35; /*0x14085afc6*/
      *(_QWORD *)&v68 = &off_141797B18; /*0x14085afd8*/
      sub_140985BA0(&unk_141797AE0, &v56, 2, &v66); /*0x14085affa*/
    }
    sub_1407DA310(FileHandle); /*0x14085b007*/
  }
  else
  {
    sub_141684120(&v33, v49, 1032); /*0x14085ae42*/
    sub_140852800((unsigned int)&v60, *(_QWORD *)(v2 + 24), (unsigned int)&v33, v74, 0); /*0x14085ae62*/
    codex_config_stale_reason(&v54, v2); /*0x14085ae75*/
    v19 = v62; /*0x14085ae7b*/
    if ( v62 || v54 != (_BYTE *)-1LL ) /*0x14085ae93*/
    {
      sub_140ADEEC0(FileHandle, v18); /*0x14085b05b*/
      if ( *(_QWORD *)FileHandle != -1 ) /*0x14085b069*/
      {
        *(_QWORD *)&v49[64] = *(_QWORD *)&FileHandle[64]; /*0x14085b076*/
        *(_OWORD *)&v49[48] = *(_OWORD *)&FileHandle[48]; /*0x14085b099*/
        *(_OWORD *)&v49[32] = *(_OWORD *)&FileHandle[32]; /*0x14085b0a0*/
        *(_OWORD *)&v49[16] = *(_OWORD *)&FileHandle[16]; /*0x14085b0a7*/
        *(_OWORD *)v49 = *(_OWORD *)FileHandle; /*0x14085b0ae*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085b0c3*/
        {
          *(_QWORD *)&v66 = &v49[64]; /*0x14085b0d7*/
          *((_QWORD *)&v66 + 1) = sub_1408881C0; /*0x14085b0e5*/
          *(_QWORD *)&v67 = v49; /*0x14085b0ec*/
          *((_QWORD *)&v67 + 1) = sub_1400015F0; /*0x14085b0fa*/
          *(_QWORD *)&v68 = &v49[56]; /*0x14085b101*/
          *((_QWORD *)&v68 + 1) = sub_1414AC5F0; /*0x14085b10f*/
          v56 = aCodexmateLibCo_5; /*0x14085b11d*/
          v57 = 35; /*0x14085b124*/
          *(_QWORD *)&v58 = aCodexmateLibCo_5; /*0x14085b12f*/
          *((_QWORD *)&v58 + 1) = 35; /*0x14085b136*/
          v59 = &off_1417979D8; /*0x14085b148*/
          sub_140985BA0(&unk_14179797A, &v66, 2, &v56); /*0x14085b16a*/
        }
        sub_14043EBD0(v49); /*0x14085b177*/
      }
      v22 = off_141EC8D80; /*0x14085b17c*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x14085b18a*/
      {
        v56 = v19; /*0x14085b190*/
        sub_140328B20(FileHandle, v61, v61 + 32LL * (_QWORD)v19); /*0x14085b1af*/
        v63 = *(_QWORD *)&FileHandle[8]; /*0x14085b1da*/
        sub_140440300( /*0x14085b1e1*/
          (unsigned int)v49,
          *(_DWORD *)&FileHandle[8],
          *(_DWORD *)&FileHandle[16],
          (unsigned int)&unk_141796798,
          3);
        *(_QWORD *)&v67 = *(_QWORD *)&v49[16]; /*0x14085b1ee*/
        v66 = *(_OWORD *)v49; /*0x14085b1fc*/
        sub_140334760(FileHandle); /*0x14085b20a*/
        if ( *(_QWORD *)FileHandle ) /*0x14085b21a*/
          sub_140001660(v63, 24LL * *(_QWORD *)FileHandle, 8); /*0x14085b231*/
        *(_QWORD *)v49 = &v74; /*0x14085b23d*/
        *(_QWORD *)&v49[8] = sub_1408881C0; /*0x14085b24b*/
        *(_QWORD *)&v49[16] = &v56; /*0x14085b259*/
        *(_QWORD *)&v49[24] = sub_1414AC520; /*0x14085b267*/
        *(_QWORD *)&v49[32] = &v66; /*0x14085b275*/
        *(_QWORD *)&v49[40] = sub_1400015F0; /*0x14085b283*/
        *(_QWORD *)&v49[48] = &v54; /*0x14085b28a*/
        *(_QWORD *)&v49[56] = sub_140892300; /*0x14085b298*/
        *(_QWORD *)FileHandle = aCodexmateLibCo_5; /*0x14085b2a6*/
        *(_QWORD *)&FileHandle[8] = 35; /*0x14085b2ad*/
        *(_QWORD *)&FileHandle[16] = aCodexmateLibCo_5; /*0x14085b2b8*/
        *(_QWORD *)&FileHandle[24] = 35; /*0x14085b2bf*/
        *(_QWORD *)&FileHandle[32] = &off_141797A48; /*0x14085b2d1*/
        sub_140985BA0(&unk_1417979F0, v49, 2, FileHandle); /*0x14085b2f3*/
        if ( (_QWORD)v66 ) /*0x14085b303*/
          sub_140001660(*((_QWORD *)&v66 + 1), v66, 1); /*0x14085b312*/
      }
      sub_1408547A0((unsigned int)FileHandle, v2, (unsigned int)aBootstrapSelfH, 19, 1); /*0x14085b334*/
      if ( *(_DWORD *)FileHandle == -1 ) /*0x14085b341*/
      {
        v69 = *(_OWORD *)&FileHandle[56]; /*0x14085b441*/
        v70 = *(_QWORD *)&FileHandle[72]; /*0x14085b44f*/
        v68 = *(_OWORD *)&FileHandle[40]; /*0x14085b456*/
        v67 = *(_OWORD *)&FileHandle[24]; /*0x14085b45d*/
        v66 = *(_OWORD *)&FileHandle[8]; /*0x14085b464*/
        v23 = *(_QWORD *)&FileHandle[64]; /*0x14085b472*/
        *(_QWORD *)&v24 = *(_QWORD *)&FileHandle[56]; /*0x14085b472*/
        *((_QWORD *)&v24 + 1) = *(_QWORD *)&FileHandle[64] + 24LL * *(_QWORD *)&FileHandle[72]; /*0x14085b47d*/
        v56 = *(const char **)&FileHandle[64]; /*0x14085b481*/
        v57 = *(_QWORD *)&FileHandle[64]; /*0x14085b488*/
        v58 = v24; /*0x14085b48f*/
        if ( *(_QWORD *)&FileHandle[72] ) /*0x14085b4a0*/
        {
          v23 = *(_QWORD *)&FileHandle[64] + 24LL; /*0x14085b4ad*/
          while ( 1 ) /*0x14085b4cf*/
          {
            v26 = *(_QWORD *)(v23 - 24); /*0x14085b4cf*/
            v48 = *(_OWORD *)(v23 - 16); /*0x14085b4d8*/
            if ( v26 == -1 ) /*0x14085b4e3*/
              break; /*0x14085b4e3*/
            v52 = v26; /*0x14085b4e9*/
            v53 = v48; /*0x14085b4f7*/
            if ( *v22 >= 3u ) /*0x14085b502*/
            {
              v63 = v23; /*0x14085b508*/
              v50[0] = &v52; /*0x14085b516*/
              v50[1] = sub_1400015F0; /*0x14085b524*/
              *(_QWORD *)v49 = 0; /*0x14085b52b*/
              *(_QWORD *)&v49[8] = aCodexmateLibCo_5; /*0x14085b536*/
              *(_OWORD *)&v49[16] = 0x23u; /*0x14085b53d*/
              *(_QWORD *)&v49[32] = aSrcCoreRelayMa_2; /*0x14085b55a*/
              *(_QWORD *)&v49[40] = 25; /*0x14085b561*/
              *(_QWORD *)&v49[48] = 3; /*0x14085b56c*/
              *(_QWORD *)&v49[56] = aCodexmateLibCo_5; /*0x14085b577*/
              *(_QWORD *)&v49[64] = 35; /*0x14085b57e*/
              *(_QWORD *)&v49[72] = 0x23000000001LL; /*0x14085b593*/
              *(_QWORD *)&v49[80] = &unk_141797A73; /*0x14085b5a1*/
              *(_QWORD *)&v49[88] = v50; /*0x14085b5af*/
              sub_1412C36A0(&v75, v49); /*0x14085b5c4*/
              v26 = v52; /*0x14085b5ca*/
              v23 = v63; /*0x14085b5d1*/
            }
            if ( v26 ) /*0x14085b5db*/
            {
              v27 = v22; /*0x14085b5e8*/
              v28 = v23; /*0x14085b5eb*/
              sub_140001660(v53, v26, 1); /*0x14085b5f4*/
              v23 = v28; /*0x14085b5f9*/
              v22 = v27; /*0x14085b5fc*/
            }
            v25 = v23 - 24; /*0x14085b4ba*/
            v23 += 24; /*0x14085b4be*/
            if ( v25 + 24 == *((_QWORD *)&v24 + 1) ) /*0x14085b4c9*/
            {
              v23 = *((_QWORD *)&v24 + 1); /*0x14085b604*/
              break; /*0x14085b604*/
            }
          }
        }
        v57 = v23; /*0x14085b607*/
        sub_1402BAE80(&v56); /*0x14085b615*/
        sub_140334760(&v66); /*0x14085b622*/
        if ( (_QWORD)v66 ) /*0x14085b632*/
          sub_140001660(*((_QWORD *)&v66 + 1), 24 * v66, 8); /*0x14085b649*/
        sub_140334760((char *)&v67 + 8); /*0x14085b655*/
        if ( *((_QWORD *)&v67 + 1) ) /*0x14085b665*/
          sub_140001660(v68, 24LL * *((_QWORD *)&v67 + 1), 8); /*0x14085b67c*/
      }
      else
      {
        *(_OWORD *)&v49[80] = v65; /*0x14085b34e*/
        *(_OWORD *)&v49[64] = *(_OWORD *)&FileHandle[64]; /*0x14085b35c*/
        *(_OWORD *)&v49[48] = *(_OWORD *)&FileHandle[48]; /*0x14085b37f*/
        *(_OWORD *)&v49[32] = *(_OWORD *)&FileHandle[32]; /*0x14085b386*/
        *(_OWORD *)&v49[16] = *(_OWORD *)&FileHandle[16]; /*0x14085b38d*/
        *(_OWORD *)v49 = *(_OWORD *)FileHandle; /*0x14085b394*/
        if ( *v22 >= 2u ) /*0x14085b3a2*/
        {
          v56 = v49; /*0x14085b3a4*/
          v57 = (__int64)sub_140B036A0; /*0x14085b3b2*/
          *(_QWORD *)&v66 = aCodexmateLibCo_5; /*0x14085b3c0*/
          *((_QWORD *)&v66 + 1) = 35; /*0x14085b3c7*/
          *(_QWORD *)&v67 = aCodexmateLibCo_5; /*0x14085b3d2*/
          *((_QWORD *)&v67 + 1) = 35; /*0x14085b3d9*/
          *(_QWORD *)&v68 = &off_141797AC8; /*0x14085b3eb*/
          sub_140985BA0(&unk_141797A91, &v56, 2, &v66); /*0x14085b40d*/
        }
        sub_1407DA310(v49); /*0x14085b41a*/
      }
      if ( v54 != (_BYTE *)-1LL && v54 ) /*0x14085b691*/
        sub_140001660(v55, v54, 1); /*0x14085b6a0*/
      sub_140334B70(&v60); /*0x14085b6ad*/
      if ( v60 ) /*0x14085b6bd*/
        sub_140001660(v61, 32 * v60, 8); /*0x14085b6d0*/
      sub_140016620(&v33); /*0x14085b6d9*/
      if ( v39 ) /*0x14085b6e8*/
        sub_140001660(v40, v39, 1); /*0x14085b6f7*/
      sub_140018740(&v41); /*0x14085b704*/
      if ( !(_BYTE)v72 && 2 * *v5 && !(unsigned __int8)sub_1416C2250(v29, v12) ) /*0x14085b7e3*/
        *((_BYTE *)Address + 1) = 1; /*0x14085b7f8*/
      v13 = Address; /*0x14085b725*/
      v30 = *(_BYTE *)Address; /*0x14085b72c*/
      *(_BYTE *)Address = 0; /*0x14085b72c*/
      if ( v30 == 2 ) /*0x14085b730*/
        goto LABEL_109; /*0x14085b730*/
      goto LABEL_110; /*0x14085b730*/
    }
    sub_140ADF0F0(v18); /*0x14085ae9c*/
    if ( v54 != (_BYTE *)-1LL && v54 ) /*0x14085aeb2*/
      sub_140001660(v55, v54, 1); /*0x14085aec1*/
    sub_140334B70(&v60); /*0x14085aece*/
    if ( v60 ) /*0x14085aede*/
      sub_140001660(v61, 32 * v60, 8); /*0x14085aef1*/
    sub_140016620(&v33); /*0x14085aefa*/
    if ( v39 ) /*0x14085af09*/
      sub_140001660(v40, v39, 1); /*0x14085af1c*/
  }
  sub_140018740(&v41); /*0x14085b014*/
  if ( !(_BYTE)v72 && 2 * *v5 && !(unsigned __int8)sub_1416C2250(v20, v12) ) /*0x14085b7ba*/
    *((_BYTE *)Address + 1) = 1; /*0x14085b7cf*/
  v13 = Address; /*0x14085b035*/
  v21 = *(_BYTE *)Address; /*0x14085b03c*/
  *(_BYTE *)Address = 0; /*0x14085b03c*/
  if ( v21 == 2 ) /*0x14085b040*/
LABEL_109:
    WakeByAddressSingle(v13); /*0x14085b7d8*/
LABEL_110:
  if ( !(_BYTE)v71 && 2 * *v5 ) /*0x14085b743*/
  {
LABEL_118:
    if ( !(unsigned __int8)sub_1416C2250(v13, v12) ) /*0x14085b7a9*/
      *(_BYTE *)(v3 + 17) = 1; /*0x14085b7b2*/
  }
LABEL_112:
  v31 = v51; /*0x14085b74b*/
  v32 = *(_BYTE *)v51; /*0x14085b754*/
  *(_BYTE *)v51 = 0; /*0x14085b754*/
  if ( v32 == 2 ) /*0x14085b758*/
    WakeByAddressSingle(v31); /*0x14085b78a*/
}

// --- refs ---
// 0x14149c500  sub_14149C500
// 0x140b036a0  sub_140B036A0
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x141797e90  unk_141797E90
// 0x1412c36a0  sub_1412C36A0
// 0x141ec8d80  off_141EC8D80
// 0x1407da310  sub_1407DA310
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x141798018  unk_141798018
// 0x1416c1670  WakeByAddressSingle
// 0x1408476e0  ensure_proxy_started
// 0x141796ac8  unk_141796AC8
// 0x14085a1e0  sub_14085A1E0
// 0x14047c8e0  sub_14047C8E0
// 0x141798000  off_141798000
// 0x140985ba0  sub_140985BA0
// 0x141797ae0  unk_141797AE0
// 0x141684120  sub_141684120
// 0x140852800  sub_140852800
// 0x14084e000  codex_config_stale_reason
// 0x1414ac520  sub_1414AC520
// 0x1414ac660  sub_1414AC660
// 0x14149c0f0  sub_14149C0F0
// 0x141797ebc  unk_141797EBC
// 0x140adf3e0  write
// 0x141797f58  off_141797F58
// 0x141797f0d  unk_141797F0D
// 0x1408731c0  sub_1408731C0
// 0x1408881c0  sub_1408881C0
// 0x1400015f0  sub_1400015F0
// 0x140892300  sub_140892300
// 0x141797fe8  off_141797FE8
// 0x141797f70  unk_141797F70
// 0x140001660  sub_140001660
// 0x140adf0f0  sub_140ADF0F0
// 0x140016620  sub_140016620
// 0x140018740  sub_140018740
// 0x140aeceb0  sub_140AECEB0
// 0x141751b25  aChatgpt  // string: "ChatGPT"
// 0x141751879  aCodex_0  // string: "Codex"
// 0x1403b7e80  lock
// 0x141797959  aRunningRouterB  // string: "running router bootstrap recovery"
// 0x141797b30  unk_141797B30
// 0x141797b18  off_141797B18
// 0x140adeec0  sub_140ADEEC0
// 0x1414ac5f0  sub_1414AC5F0
// 0x1417979d8  off_1417979D8
// 0x14179797a  unk_14179797A
// 0x14043ebd0  sub_14043EBD0
// 0x140328b20  sub_140328B20
// 0x140440300  sub_140440300
// 0x141796798  unk_141796798
// 0x140334760  sub_140334760
// 0x141797a48  off_141797A48
// 0x1417979f0  unk_1417979F0
// 0x1408547a0  sub_1408547A0
// 0x141797a60  aBootstrapSelfH  // string: "bootstrap self-heal"
// 0x141797a73  unk_141797A73
// 0x1402bae80  sub_1402BAE80
// 0x141797ac8  off_141797AC8
// 0x141797a91  unk_141797A91
// 0x140334b70  sub_140334B70
