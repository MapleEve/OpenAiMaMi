// addr: 0x1408476e0
// name (owner-map): ensure_proxy_started
// module: core::relay::manager
// source: IDA remote hexrays decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::ensure_proxy_started | 跨平台字符串签名匹配(名↔函数一致)
volatile signed __int64 *__fastcall ensure_proxy_started(_QWORD *a1, volatile signed __int64 **a2)
{
  __int16 v2; // r15
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rcx
  __int16 v8; // r14
  __int16 v9; // dx
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v11; // rdx
  _BYTE *v12; // r12
  __int64 *v13; // r13
  volatile signed __int64 *v14; // rdx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdi
  char v19; // al
  int v20; // eax
  bool v21; // zf
  char v22; // of
  __int64 v23; // rdx
  __int64 v24; // rcx
  char *v25; // rsi
  char v26; // al
  volatile signed __int64 *v27; // r13
  __int64 v28; // rt0
  volatile signed __int64 *v29; // rax
  __int64 v30; // rt0
  __int64 v31; // rt0
  __int64 v32; // rdx
  volatile signed __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // r12
  char *v37; // rbx
  __int64 v38; // rcx
  signed __int8 v39; // al
  volatile signed __int64 *v40; // r14
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // r14
  char *v46; // rbx
  signed __int8 v47; // al
  volatile signed __int64 *v48; // r15
  __int64 v49; // rcx
  char v50; // al
  unsigned int v51; // eax
  __int16 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int64 v58; // rcx
  char *v59; // rdi
  char v60; // al
  __int64 *v61; // rbx
  volatile signed __int64 *v62; // rcx
  char *v63; // rsi
  char v64; // di
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rcx
  char *v71; // rdi
  char v72; // al
  char v73; // al
  char v74[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v75; // [rsp+28h] [rbp-58h]
  __int64 v76; // [rsp+38h] [rbp-48h]
  __int128 v77; // [rsp+40h] [rbp-40h] BYREF
  __int64 v78; // [rsp+50h] [rbp-30h]
  _QWORD v79[3]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v80; // [rsp+70h] [rbp-10h] BYREF
  __m256i v81; // [rsp+80h] [rbp+0h]
  __int128 v82; // [rsp+A0h] [rbp+20h]
  __int128 v83; // [rsp+B0h] [rbp+30h]
  __int128 v84; // [rsp+C0h] [rbp+40h]
  __int128 v85; // [rsp+D0h] [rbp+50h] BYREF
  __m256i v86; // [rsp+E0h] [rbp+60h]
  __int128 v87; // [rsp+100h] [rbp+80h]
  __int128 v88; // [rsp+110h] [rbp+90h]
  __int128 v89; // [rsp+120h] [rbp+A0h]
  __int16 v90; // [rsp+1C0h] [rbp+140h]
  __int16 v91; // [rsp+1C2h] [rbp+142h]
  char v92; // [rsp+1C4h] [rbp+144h]
  __int128 v93; // [rsp+1D0h] [rbp+150h] BYREF
  const char *v94; // [rsp+1E0h] [rbp+160h]
  __int64 v95; // [rsp+1E8h] [rbp+168h]
  char **v96; // [rsp+1F0h] [rbp+170h]
  _BYTE *v97; // [rsp+1F8h] [rbp+178h]
  __int128 v98; // [rsp+200h] [rbp+180h] BYREF
  __int64 v99; // [rsp+210h] [rbp+190h]
  volatile signed __int64 *v100; // [rsp+218h] [rbp+198h]
  __int128 v101; // [rsp+220h] [rbp+1A0h] BYREF
  _QWORD v102[2]; // [rsp+230h] [rbp+1B0h] BYREF
  volatile signed __int64 *v103; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v104; // [rsp+248h] [rbp+1C8h]
  volatile signed __int64 *v105; // [rsp+250h] [rbp+1D0h]
  char v106; // [rsp+25Fh] [rbp+1DFh] BYREF
  volatile signed __int64 *v107; // [rsp+260h] [rbp+1E0h]
  char v108; // [rsp+26Fh] [rbp+1EFh]
  __int64 v109; // [rsp+270h] [rbp+1F0h]

  v109 = -2; /*0x1408476fb*/
  v4 = a2[7]; /*0x140847709*/
  if ( v4 ) /*0x140847710*/
  {
    if ( _InterlockedIncrement64(v4) <= 0 ) /*0x140847716*/
      goto LABEL_127; /*0x140847716*/
    v103 = v4; /*0x14084771f*/
    v6 = *a2; /*0x140847726*/
    sub_14148D130(&v85, *((_QWORD *)*a2 + 11), *((_QWORD *)*a2 + 12)); /*0x140847735*/
    if ( (_QWORD)v85 == -1 ) /*0x140847743*/
    {
      sub_140018650((char *)&v85 + 8); /*0x1408477e7*/
      v8 = 0; /*0x1408477ed*/
    }
    else
    {
      v104 = *((_QWORD *)&v85 + 1); /*0x140847758*/
      v107 = (volatile signed __int64 *)v85; /*0x140847758*/
      v8 = sub_14040DF70(*((_QWORD *)&v85 + 1), v86.m256i_i64[0]); /*0x140847765*/
      v2 = v9; /*0x140847768*/
      if ( v107 ) /*0x140847775*/
        sub_140001660(v104, v107, 1); /*0x140847784*/
    }
    v11 = a2[3]; /*0x1408477f0*/
    v12 = v11 + 2; /*0x1408477f4*/
    LOBYTE(v7) = 1; /*0x1408477f8*/
    v107 = v11; /*0x1408477fc*/
    if ( _InterlockedCompareExchange8((volatile signed __int8 *)v11 + 16, 1, 0) ) /*0x140847803*/
      sub_1416C15B0(v11 + 2); /*0x1408478c7*/
    v13 = off_141EC90B8; /*0x14084780e*/
    if ( 2 * *off_141EC90B8 ) /*0x140847819*/
    {
      v20 = sub_1416C2250(v7, v11); /*0x1408478d2*/
      LOBYTE(v20) = v20 ^ 1; /*0x1408478d8*/
      LODWORD(v104) = v20; /*0x1408478da*/
      v14 = v107; /*0x1408478e0*/
      if ( *((_BYTE *)v107 + 17) ) /*0x1408478e7*/
        goto LABEL_13; /*0x1408478ed*/
    }
    else
    {
      LODWORD(v104) = 0; /*0x140847825*/
      v14 = v107; /*0x14084782f*/
      if ( *((_BYTE *)v107 + 17) ) /*0x140847836*/
      {
LABEL_13:
        nullsub_1(v7); /*0x140847842*/
        v15 = (void *)sub_140001650(34, 1); /*0x140847851*/
        if ( !v15 ) /*0x140847859*/
        {
          v97 = v12; /*0x1408483e8*/
          sub_1416C2D4B(1, 34); /*0x1408483f9*/
        }
        v18 = v15; /*0x14084785f*/
        qmemcpy(v15, "relay proxy state lock is poisoned", 34); /*0x140847874*/
        if ( !(_BYTE)v104 && 2 * *v13 && !(unsigned __int8)sub_1416C2250(v17, v16) ) /*0x140847d4a*/
          *((_BYTE *)v107 + 17) = 1; /*0x140847d5f*/
        v19 = *v12; /*0x140847898*/
        *v12 = 0; /*0x140847898*/
        if ( v19 == 2 ) /*0x14084789e*/
          WakeByAddressSingle(v12); /*0x140847d3f*/
        *a1 = 10; /*0x1408478a4*/
        a1[1] = 34; /*0x1408478ab*/
        a1[2] = v18; /*0x1408478b3*/
        a1[3] = 34; /*0x1408478b7*/
LABEL_111:
        result = v103; /*0x1408482e9*/
        if ( !_InterlockedDecrement64(v103) ) /*0x1408482f0*/
          return (volatile signed __int64 *)sub_140575F60(&v103); /*0x1408482fd*/
        return result; /*0x1408482fd*/
      }
    }
    v22 = 0; /*0x1408478f7*/
    v21 = *((_QWORD *)v14 + 3) == 0; /*0x1408478f7*/
    v97 = v12; /*0x1408478fc*/
    v105 = v14 + 3; /*0x140847903*/
    if ( !v21 ) /*0x14084790a*/
    {
      if ( (unsigned __int8)sub_1408730F0() ) /*0x140847910*/
      {
        *a1 = -1; /*0x14084791a*/
        v25 = (char *)(v107 + 2); /*0x14084792f*/
        if ( !(_BYTE)v104 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v24, v23) ) /*0x140848339*/
          *((_BYTE *)v107 + 17) = 1; /*0x14084834e*/
        v26 = *v25; /*0x14084794d*/
        *v25 = 0; /*0x14084794d*/
        if ( v26 == 2 ) /*0x140847951*/
          WakeByAddressSingle(v25); /*0x14084795a*/
        goto LABEL_111; /*0x140847960*/
      }
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140847973*/
      {
        *(_QWORD *)&v80 = v107 + 5; /*0x140847984*/
        *((_QWORD *)&v80 + 1) = sub_1414AAE30; /*0x14084798f*/
        *(_QWORD *)&v85 = 0; /*0x140847993*/
        *((_QWORD *)&v85 + 1) = aCodexmateLibCo_5; /*0x1408479a2*/
        *(_OWORD *)v86.m256i_i8 = 0x23u; /*0x1408479a6*/
        v86.m256i_i64[2] = (__int64)aSrcCoreRelayMa_2; /*0x1408479bd*/
        v86.m256i_i64[3] = 25; /*0x1408479c1*/
        *(_QWORD *)&v87 = 2; /*0x1408479c9*/
        *((_QWORD *)&v87 + 1) = aCodexmateLibCo_5; /*0x1408479d4*/
        *(_QWORD *)&v88 = 35; /*0x1408479db*/
        *((_QWORD *)&v88 + 1) = 0x95900000001LL; /*0x1408479f0*/
        *(_QWORD *)&v89 = &unk_141796854; /*0x1408479fe*/
        *((_QWORD *)&v89 + 1) = &v80; /*0x140847a09*/
        sub_1412C36A0(&v106, &v85); /*0x140847a1b*/
      }
      v22 = 0; /*0x140847a2b*/
      if ( *v105 ) /*0x140847a28*/
      {
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v105) ) /*0x140847a30*/
          sub_140573D70(v105); /*0x140847a3d*/
        if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v107 + 4)) ) /*0x140847a4e*/
          sub_140573D40(v107 + 4); /*0x140847a5f*/
      }
      *v105 = 0; /*0x140847a6c*/
    }
    v27 = a2[1]; /*0x140847a73*/
    v28 = _InterlockedIncrement64(v27); /*0x140847a77*/
    if ( (v28 < 0) ^ v22 | (v28 == 0) /*0x140847a94*/
      || (v29 = a2[6], v30 = _InterlockedIncrement64(v29), (v30 < 0) ^ v22 | (v30 == 0))
      || (v31 = _InterlockedIncrement64(v6), (v31 < 0) ^ v22 | (v31 == 0)) )
    {
LABEL_127:
      BUG(); /*0x1408483ff*/
    }
    *(_QWORD *)&v85 = v27; /*0x140847aa5*/
    *((_QWORD *)&v85 + 1) = v29; /*0x140847aa9*/
    v86.m256i_i64[0] = (__int64)v6; /*0x140847aad*/
    v90 = v8; /*0x140847ab1*/
    v91 = v2; /*0x140847ab9*/
    v92 = 0; /*0x140847ac1*/
    sub_140588900(v74, v103 + 2, &v85, &off_1417968D0); /*0x140847ad7*/
    v33 = v6 + 2; /*0x140847add*/
    if ( v74[0] ) /*0x140847ae9*/
    {
      v34 = v76; /*0x140847aef*/
      v99 = v76; /*0x140847af3*/
      v98 = v75; /*0x140847afd*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140847b12*/
      {
        *(_QWORD *)&v80 = &v98; /*0x140847b1f*/
        *((_QWORD *)&v80 + 1) = sub_1400015F0; /*0x140847b2a*/
        *(_QWORD *)&v85 = 0; /*0x140847b2e*/
        *((_QWORD *)&v85 + 1) = aCodexmateLibCo_5; /*0x140847b3d*/
        *(_OWORD *)v86.m256i_i8 = 0x23u; /*0x140847b41*/
        v86.m256i_i64[2] = (__int64)aSrcCoreRelayMa_2; /*0x140847b58*/
        v86.m256i_i64[3] = 25; /*0x140847b5c*/
        *(_QWORD *)&v87 = 2; /*0x140847b64*/
        *((_QWORD *)&v87 + 1) = aCodexmateLibCo_5; /*0x140847b6f*/
        *(_QWORD *)&v88 = 35; /*0x140847b76*/
        *((_QWORD *)&v88 + 1) = 0x97700000001LL; /*0x140847b8b*/
        *(_QWORD *)&v89 = &unk_141796938; /*0x140847b99*/
        *((_QWORD *)&v89 + 1) = &v80; /*0x140847ba4*/
        sub_1412C36A0(&v106, &v85); /*0x140847bb6*/
      }
      v35 = v99; /*0x140847bbc*/
      if ( v99 < 0 ) /*0x140847bc6*/
      {
        v36 = 0; /*0x140847bcc*/
        goto LABEL_42; /*0x140847bcc*/
      }
      if ( v99 ) /*0x140847c70*/
      {
        v43 = *((_QWORD *)&v98 + 1); /*0x140847c72*/
        nullsub_1(v34); /*0x140847c79*/
        v36 = 1; /*0x140847c7e*/
        v44 = sub_140001650(v35, 1); /*0x140847c8c*/
        if ( !v44 ) /*0x140847c94*/
LABEL_42:
          sub_1416C2D4B(v36, v35); /*0x140847bcf*/
        v45 = v44; /*0x140847c9a*/
        sub_141684120(v44, v43, v35); /*0x140847ca6*/
      }
      else
      {
        v45 = 1; /*0x140847cad*/
      }
      *(_QWORD *)&v101 = v35; /*0x140847cb3*/
      *((_QWORD *)&v101 + 1) = v45; /*0x140847cba*/
      v102[0] = v35; /*0x140847cc1*/
      v46 = (char *)(v27 + 2); /*0x140847cc8*/
      LOBYTE(v34) = 1; /*0x140847ccc*/
      v47 = _InterlockedCompareExchange8((volatile signed __int8 *)v27 + 16, 1, 0); /*0x140847cd0*/
      v48 = v107; /*0x140847cd6*/
      if ( v47 ) /*0x140847cdd*/
        sub_1416C15B0(v27 + 2); /*0x14084804c*/
      if ( 2 * *off_141EC90B8 ) /*0x140847ced*/
      {
        v65 = sub_1416C2250(v34, v32); /*0x140848057*/
        v49 = v65; /*0x14084805d*/
        LOBYTE(v49) = v65 ^ 1; /*0x14084805f*/
        if ( *((_BYTE *)v27 + 17) ) /*0x140848062*/
          goto LABEL_59; /*0x140848069*/
      }
      else
      {
        v49 = 0; /*0x140847cf9*/
        if ( *((_BYTE *)v27 + 17) ) /*0x140847cfb*/
        {
LABEL_59:
          if ( !(_BYTE)v49 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v49, v32) ) /*0x1408483b8*/
            *((_BYTE *)v27 + 17) = 1; /*0x1408483c6*/
          v50 = *v46; /*0x140847d24*/
          *v46 = 0; /*0x140847d24*/
          if ( v50 != 2 ) /*0x140847d28*/
            goto LABEL_103; /*0x140847d28*/
          goto LABEL_102; /*0x140847d28*/
        }
      }
      LODWORD(v105) = v49; /*0x14084806f*/
      v100 = v27 + 2; /*0x140848075*/
      sub_14149C500(&v85, &v101); /*0x14084808a*/
      v81.m256i_i64[0] = v86.m256i_i64[0]; /*0x140848094*/
      v80 = v85; /*0x14084809c*/
      v66 = *((_QWORD *)v27 + 9); /*0x1408480a0*/
      if ( v66 ) /*0x1408480a7*/
        sub_140001660(*((_QWORD *)v27 + 10), v66, 1); /*0x1408480b3*/
      v67 = *((_QWORD *)v27 + 12); /*0x1408480b8*/
      if ( v67 ) /*0x1408480bf*/
        sub_140001660(*((_QWORD *)v27 + 13), v67, 1); /*0x1408480cb*/
      v68 = *((_QWORD *)v27 + 15); /*0x1408480d4*/
      if ( v68 != -1 && v68 ) /*0x1408480e1*/
        sub_140001660(*((_QWORD *)v27 + 16), v68, 1); /*0x1408480f0*/
      *((_QWORD *)v27 + 9) = 0; /*0x1408480f5*/
      *((_QWORD *)v27 + 10) = 1; /*0x1408480fd*/
      *(_OWORD *)(v27 + 11) = 0; /*0x140848108*/
      *((_QWORD *)v27 + 13) = 1; /*0x14084810d*/
      *((_QWORD *)v27 + 14) = 0; /*0x140848115*/
      *((_QWORD *)v27 + 17) = v81.m256i_i64[0]; /*0x140848121*/
      *(_OWORD *)(v27 + 15) = v80; /*0x140848129*/
      *((_WORD *)v27 + 72) = 0; /*0x14084812d*/
      *((_BYTE *)v27 + 146) = 0; /*0x140848137*/
      sub_1404D8F10(&v80, v33, v27 + 3); /*0x14084814a*/
      if ( (_DWORD)v80 != -1 ) /*0x140848154*/
      {
        v89 = v84; /*0x14084815e*/
        v88 = v83; /*0x140848169*/
        v87 = v82; /*0x140848180*/
        v86 = v81; /*0x140848187*/
        v85 = v80; /*0x14084818f*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1408481a1*/
        {
          v79[0] = &v85; /*0x1408481a3*/
          v79[1] = sub_140B036A0; /*0x1408481ae*/
          *(_QWORD *)&v93 = aCodexmateLibCo_5; /*0x1408481b9*/
          *((_QWORD *)&v93 + 1) = 35; /*0x1408481c0*/
          v94 = aCodexmateLibCo_5; /*0x1408481cb*/
          v95 = 35; /*0x1408481d2*/
          v96 = &off_141796990; /*0x1408481e4*/
          sub_140985BA0(&unk_141796955, v79, 2, &v93); /*0x140848203*/
        }
        sub_1407DA310(&v85); /*0x14084820d*/
      }
      v71 = (char *)(v27 + 2); /*0x14084821a*/
      if ( !(_BYTE)v105 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(v70, v69) ) /*0x1408483d0*/
        *((_BYTE *)v27 + 17) = 1; /*0x1408483de*/
      v72 = *v71; /*0x140848238*/
      *v71 = 0; /*0x140848238*/
      if ( v72 != 2 ) /*0x14084823c*/
        goto LABEL_103; /*0x14084823c*/
LABEL_102:
      WakeByAddressSingle((PVOID)(v27 + 2)); /*0x1408483aa*/
LABEL_103:
      *(_QWORD *)&v85 = &v101; /*0x140848242*/
      *((_QWORD *)&v85 + 1) = sub_1400015F0; /*0x140848254*/
      sub_14149C0F0(&v77, &unk_141796938, &v85); /*0x140848267*/
      a1[3] = v78; /*0x140848271*/
      *(_OWORD *)(a1 + 1) = v77; /*0x140848279*/
      *a1 = 10; /*0x14084827d*/
      if ( (_QWORD)v101 ) /*0x14084828e*/
        sub_140001660(*((_QWORD *)&v101 + 1), v101, 1); /*0x14084829d*/
      v32 = v98; /*0x1408482a2*/
      v63 = (char *)(v48 + 2); /*0x1408482ac*/
      v64 = v104; /*0x1408482b0*/
      v61 = off_141EC90B8; /*0x1408482b6*/
      if ( (_QWORD)v98 ) /*0x1408482bd*/
        sub_140001660(*((_QWORD *)&v98 + 1), v98, 1); /*0x1408482cc*/
LABEL_107:
      if ( !v64 && 2 * *v61 && !(unsigned __int8)sub_1416C2250(v62, v32) ) /*0x140848322*/
        *((_BYTE *)v107 + 17) = 1; /*0x140848333*/
      v73 = *v63; /*0x1408482e3*/
      *v63 = 0; /*0x1408482e3*/
      if ( v73 == 2 ) /*0x1408482e7*/
        WakeByAddressSingle(v63); /*0x14084831a*/
      goto LABEL_111; /*0x14084831a*/
    }
    v38 = v76; /*0x140847be0*/
    v102[0] = v76; /*0x140847be4*/
    v101 = v75; /*0x140847bee*/
    v37 = (char *)(v27 + 2); /*0x140847bf5*/
    LOBYTE(v38) = 1; /*0x140847bf9*/
    v39 = _InterlockedCompareExchange8((volatile signed __int8 *)v27 + 16, 1, 0); /*0x140847bfd*/
    v40 = v107; /*0x140847c03*/
    if ( v39 ) /*0x140847c0a*/
    {
      v108 = 1; /*0x140847d68*/
      sub_1416C15B0(v27 + 2); /*0x140847d72*/
    }
    if ( 2 * *off_141EC90B8 ) /*0x140847c1a*/
    {
      v108 = 1; /*0x140847d7d*/
      v51 = sub_1416C2250(v38, v32); /*0x140847d84*/
      v41 = v51; /*0x140847d8a*/
      LOBYTE(v41) = v51 ^ 1; /*0x140847d8c*/
      if ( *((_BYTE *)v27 + 17) ) /*0x140847d8f*/
        goto LABEL_47; /*0x140847d96*/
    }
    else
    {
      v41 = 0; /*0x140847c26*/
      if ( *((_BYTE *)v27 + 17) ) /*0x140847c28*/
      {
LABEL_47:
        if ( !(_BYTE)v41 ) /*0x140847c37*/
        {
          if ( 2 * *off_141EC90B8 ) /*0x140847c43*/
          {
            v108 = 1; /*0x14084836c*/
            if ( !(unsigned __int8)sub_1416C2250(v41, v32) ) /*0x140848373*/
              *((_BYTE *)v27 + 17) = 1; /*0x140848381*/
          }
        }
        v42 = *v37; /*0x140847c51*/
        *v37 = 0; /*0x140847c51*/
        if ( v42 != 2 ) /*0x140847c55*/
          goto LABEL_81; /*0x140847c55*/
        goto LABEL_80; /*0x140847c55*/
      }
    }
    LODWORD(v100) = v41; /*0x140847d9c*/
    v79[2] = v27 + 2; /*0x140847da2*/
    v52 = v102[0]; /*0x140847dad*/
    *(_QWORD *)&v85 = v102; /*0x140847db5*/
    *((_QWORD *)&v85 + 1) = sub_1414AAE30; /*0x140847dc0*/
    sub_14149C0F0(&v93, &unk_14177A9BE, &v85); /*0x140847dd6*/
    *(_QWORD *)&v85 = v102; /*0x140847ddc*/
    *((_QWORD *)&v85 + 1) = sub_1414AAE30; /*0x140847de0*/
    sub_14149C0F0(&v80, &unk_14177A9A0, &v85); /*0x140847df6*/
    v85 = v93; /*0x140847e03*/
    v86.m256i_i64[0] = (__int64)v94; /*0x140847e0e*/
    *(_OWORD *)&v86.m256i_u64[1] = v80; /*0x140847e16*/
    v86.m256i_i64[3] = v81.m256i_i64[0]; /*0x140847e1e*/
    v53 = *((_QWORD *)v27 + 9); /*0x140847e22*/
    if ( v53 ) /*0x140847e29*/
      sub_140001660(*((_QWORD *)v27 + 10), v53, 1); /*0x140847e35*/
    v54 = *((_QWORD *)v27 + 12); /*0x140847e3a*/
    if ( v54 ) /*0x140847e41*/
      sub_140001660(*((_QWORD *)v27 + 13), v54, 1); /*0x140847e4d*/
    v55 = *((_QWORD *)v27 + 15); /*0x140847e56*/
    if ( v55 != -1 && v55 ) /*0x140847e63*/
      sub_140001660(*((_QWORD *)v27 + 16), v55, 1); /*0x140847e72*/
    v56 = v85; /*0x140847e77*/
    v57 = *(_OWORD *)v86.m256i_i8; /*0x140847e7b*/
    *(_OWORD *)(v27 + 13) = *(_OWORD *)&v86.m256i_u64[2]; /*0x140847e83*/
    *(_OWORD *)(v27 + 11) = v57; /*0x140847e88*/
    *(_OWORD *)(v27 + 9) = v56; /*0x140847e8d*/
    *((_QWORD *)v27 + 15) = -1; /*0x140847e91*/
    *((_WORD *)v27 + 72) = v52; /*0x140847e99*/
    *((_BYTE *)v27 + 146) = 1; /*0x140847ea1*/
    sub_1404D8F10(&v80, v33, v27 + 3); /*0x140847eb4*/
    v40 = v107; /*0x140847ebe*/
    if ( (_DWORD)v80 != -1 ) /*0x140847ec5*/
    {
      v89 = v84; /*0x140847ecf*/
      v88 = v83; /*0x140847eda*/
      v87 = v82; /*0x140847ef1*/
      v86 = v81; /*0x140847ef8*/
      v85 = v80; /*0x140847f00*/
      if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140847f12*/
      {
        *(_QWORD *)&v98 = &v85; /*0x140847f14*/
        *((_QWORD *)&v98 + 1) = sub_140B036A0; /*0x140847f22*/
        *(_QWORD *)&v93 = aCodexmateLibCo_5; /*0x140847f30*/
        *((_QWORD *)&v93 + 1) = 35; /*0x140847f37*/
        v94 = aCodexmateLibCo_5; /*0x140847f42*/
        v95 = 35; /*0x140847f49*/
        v96 = &off_141796920; /*0x140847f5b*/
        sub_140985BA0(&unk_1417968E8, &v98, 2, &v93); /*0x140847f7d*/
      }
      sub_1407DA310(&v85); /*0x140847f87*/
      v40 = v107; /*0x140847f8d*/
    }
    v59 = (char *)(v27 + 2); /*0x140847f9b*/
    if ( !(_BYTE)v100 ) /*0x140847f9f*/
    {
      if ( 2 * *off_141EC90B8 ) /*0x140847fab*/
      {
        v108 = 1; /*0x14084838b*/
        if ( !(unsigned __int8)sub_1416C2250(v58, v32) ) /*0x140848392*/
          *((_BYTE *)v27 + 17) = 1; /*0x1408483a0*/
      }
    }
    v60 = *v59; /*0x140847fb9*/
    *v59 = 0; /*0x140847fb9*/
    if ( v60 != 2 ) /*0x140847fbd*/
      goto LABEL_81; /*0x140847fbd*/
LABEL_80:
    v108 = 1; /*0x140848357*/
    WakeByAddressSingle((PVOID)(v27 + 2)); /*0x140848361*/
LABEL_81:
    v86.m256i_i64[0] = v102[0]; /*0x140847fc3*/
    v85 = v101; /*0x140847fd5*/
    v61 = off_141EC90B8; /*0x140847fe6*/
    if ( *v105 ) /*0x140847fe0*/
    {
      if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v105) ) /*0x140847fef*/
        sub_140573D70(v105); /*0x140847ffc*/
      v40 = v107; /*0x140848002*/
      if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v107 + 4)) ) /*0x14084800d*/
        sub_140573D40(v40 + 4); /*0x140848017*/
    }
    v62 = v105; /*0x140848021*/
    *((_QWORD *)v105 + 2) = v86.m256i_i64[0]; /*0x140848028*/
    *(_OWORD *)v62 = v85; /*0x140848030*/
    *a1 = -1; /*0x140848033*/
    v63 = (char *)(v40 + 2); /*0x14084803a*/
    v64 = v104; /*0x14084803e*/
    goto LABEL_107; /*0x140848044*/
  }
  nullsub_1(a1); /*0x14084778b*/
  result = (volatile signed __int64 *)sub_140001650(34, 1); /*0x14084779a*/
  if ( !result ) /*0x1408477a2*/
    sub_1416C2D4B(1, 34); /*0x14084840b*/
  qmemcpy((void *)result, "relay proxy runtime is unavailable", 34); /*0x1408477ba*/
  *a1 = 10; /*0x1408477c3*/
  a1[1] = 34; /*0x1408477ca*/
  a1[2] = result; /*0x1408477d2*/
  a1[3] = 34; /*0x1408477d6*/
  return result; /*0x140848303*/
}

// --- refs ---
// 0x14148d130  sub_14148D130
// 0x140018650  sub_140018650
// 0x14040df70  sub_14040DF70
// 0x140001660  sub_140001660
// 0x1416c15b0  sub_1416C15B0
// 0x141ec90b8  off_141EC90B8
// 0x1416c2250  sub_1416C2250
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d4b  sub_1416C2D4B
// 0x1416c1670  WakeByAddressSingle
// 0x140575f60  sub_140575F60
// 0x1408730f0  sub_1408730F0
// 0x1414aae30  sub_1414AAE30
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x141796854  unk_141796854
// 0x1412c36a0  sub_1412C36A0
// 0x141ec8d80  off_141EC8D80
// 0x140573d70  sub_140573D70
// 0x140573d40  sub_140573D40
// 0x140588900  sub_140588900
// 0x1417968d0  off_1417968D0
// 0x1400015f0  sub_1400015F0
// 0x141796938  unk_141796938
// 0x141684120  sub_141684120
// 0x14149c500  sub_14149C500
// 0x1404d8f10  sub_1404D8F10
// 0x140b036a0  sub_140B036A0
// 0x141796990  off_141796990
// 0x140985ba0  sub_140985BA0
// 0x141796955  unk_141796955
// 0x1407da310  sub_1407DA310
// 0x14149c0f0  sub_14149C0F0
// 0x14177a9be  unk_14177A9BE
// 0x14177a9a0  unk_14177A9A0
// 0x141796920  off_141796920
// 0x1417968e8  unk_1417968E8
