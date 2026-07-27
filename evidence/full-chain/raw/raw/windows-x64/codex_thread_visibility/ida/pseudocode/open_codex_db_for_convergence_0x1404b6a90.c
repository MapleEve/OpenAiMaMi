// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall open_codex_db_for_convergence(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // r12
  __int64 v9; // rax
  int v10; // ecx
  char *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int128 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  void *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+38h] [rbp-48h]
  _OWORD v33[2]; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+68h] [rbp-18h]
  _BYTE v35[28]; // [rsp+70h] [rbp-10h]
  _BYTE v36[36]; // [rsp+90h] [rbp+10h] BYREF
  unsigned __int8 v37; // [rsp+B4h] [rbp+34h]
  _BYTE v38[27]; // [rsp+B5h] [rbp+35h]
  __m256i v39; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v40; // [rsp+F0h] [rbp+70h]
  _OWORD v41[2]; // [rsp+100h] [rbp+80h]
  __int64 v42; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v43; // [rsp+128h] [rbp+A8h] BYREF
  __int128 v44; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v45; // [rsp+140h] [rbp+C0h]
  _BYTE v46[67]; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v47; // [rsp+1A0h] [rbp+120h]
  __int64 v48; // [rsp+1A8h] [rbp+128h]
  _BYTE v49[28]; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v50[112]; // [rsp+1D0h] [rbp+150h] BYREF
  _DWORD v51[2]; // [rsp+248h] [rbp+1C8h]
  _DWORD v52[2]; // [rsp+250h] [rbp+1D0h]
  __int64 v53; // [rsp+258h] [rbp+1D8h] BYREF
  _BYTE v54[112]; // [rsp+260h] [rbp+1E0h] BYREF
  char v55; // [rsp+2DEh] [rbp+25Eh]
  char v56; // [rsp+2DFh] [rbp+25Fh] BYREF
  __int64 v57; // [rsp+2E0h] [rbp+260h]

  v57 = -2; /*0x1404b6aab*/
  v47 = a3; /*0x1404b6ab6*/
  v48 = a2; /*0x1404b6abd*/
  v42 = a1; /*0x1404b6ac4*/
  v53 = 4; /*0x1404b6acb*/
  v31 = sub_141471910(a1, a2, a3); /*0x1404b6adb*/
  v32 = v3; /*0x1404b6adf*/
  *(_QWORD *)&v44 = 0; /*0x1404b6ae2*/
  *((_QWORD *)&v44 + 1) = 1; /*0x1404b6aed*/
  v45 = 0; /*0x1404b6af8*/
  v4 = 4; /*0x1404b6b11*/
  v5 = 0; /*0x1404b6b16*/
  v34 = 0; /*0x1404b6b18*/
  while ( v5 < v4 ) /*0x1404b6b4a*/
  {
    v6 = v5 + 1; /*0x1404b6b50*/
    v43 = v5 + 1; /*0x1404b6b54*/
    sub_140429C50(v54, v48, v47, 32770); /*0x1404b6b76*/
    v7 = *(_QWORD *)v54; /*0x1404b6b83*/
    *(_OWORD *)v36 = *(_OWORD *)&v54[8]; /*0x1404b6b94*/
    *(_OWORD *)&v36[12] = *(_OWORD *)&v54[20]; /*0x1404b6b98*/
    v8 = v54[36]; /*0x1404b6b9c*/
    v33[0] = *(_OWORD *)&v54[37]; /*0x1404b6bae*/
    *(_OWORD *)((char *)v33 + 11) = *(_OWORD *)&v54[48]; /*0x1404b6bb2*/
    if ( v54[104] == 0xFF ) /*0x1404b6bb8*/
    {
      *(_OWORD *)v49 = *(_OWORD *)v36; /*0x1404b6c94*/
      *(_OWORD *)&v49[12] = *(_OWORD *)&v36[12]; /*0x1404b6c9f*/
      *(_OWORD *)v46 = v33[0]; /*0x1404b6caa*/
      *(_OWORD *)&v46[11] = *(_OWORD *)((char *)v33 + 11); /*0x1404b6cb5*/
      goto LABEL_9; /*0x1404b6cb5*/
    }
    *(_QWORD *)&v50[96] = *(_QWORD *)&v54[96]; /*0x1404b6bc2*/
    *(_OWORD *)&v50[80] = *(_OWORD *)&v54[80]; /*0x1404b6bd0*/
    *(_OWORD *)&v50[64] = *(_OWORD *)&v54[64]; /*0x1404b6bd4*/
    *(_DWORD *)&v50[108] = *(_DWORD *)&v54[108]; /*0x1404b6bdf*/
    *(_DWORD *)&v50[105] = *(_DWORD *)&v54[105]; /*0x1404b6be2*/
    *(_QWORD *)v50 = *(_QWORD *)v54; /*0x1404b6be4*/
    *(_OWORD *)&v50[20] = *(_OWORD *)&v36[12]; /*0x1404b6bef*/
    *(_OWORD *)&v50[8] = *(_OWORD *)v36; /*0x1404b6bf7*/
    v50[36] = v54[36]; /*0x1404b6bfb*/
    *(_OWORD *)&v50[48] = *(_OWORD *)((char *)v33 + 11); /*0x1404b6c06*/
    *(_OWORD *)&v50[37] = v33[0]; /*0x1404b6c0e*/
    v50[104] = v54[104]; /*0x1404b6c12*/
    sub_140FB95D0(v54, v50, 5, 0); /*0x1404b6c2f*/
    v7 = *(_QWORD *)v54; /*0x1404b6c35*/
    if ( *(_QWORD *)v54 != -1 ) /*0x1404b6c40*/
    {
      *(_OWORD *)&v49[12] = *(_OWORD *)&v54[20]; /*0x1404b6c50*/
      *(_OWORD *)v49 = *(_OWORD *)&v54[8]; /*0x1404b6c57*/
      v8 = v54[36]; /*0x1404b6c5e*/
      *(_OWORD *)v46 = *(_OWORD *)&v54[37]; /*0x1404b6c70*/
      *(_OWORD *)&v46[11] = *(_OWORD *)&v54[48]; /*0x1404b6c77*/
      sub_14043C900(v50); /*0x1404b6c85*/
LABEL_9:
      *(_OWORD *)&v35[12] = *(_OWORD *)&v49[12]; /*0x1404b6cbc*/
      *(_OWORD *)v35 = *(_OWORD *)v49; /*0x1404b6cce*/
      v39 = *(__m256i *)v46; /*0x1404b6cee*/
      v40 = *(_OWORD *)&v46[32]; /*0x1404b6cf6*/
      v41[0] = *(_OWORD *)&v46[48]; /*0x1404b6cfa*/
      *(_DWORD *)((char *)v41 + 15) = *(_DWORD *)&v46[63]; /*0x1404b6d07*/
      v52[0] = v51[0]; /*0x1404b6d19*/
      *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)((char *)v51 + 3); /*0x1404b6d1f*/
      goto LABEL_10; /*0x1404b6d1f*/
    }
    v7 = *(_QWORD *)v50; /*0x1404b71a0*/
    *(_OWORD *)&v49[12] = *(_OWORD *)&v50[20]; /*0x1404b71af*/
    *(_OWORD *)v49 = *(_OWORD *)&v50[8]; /*0x1404b71b6*/
    v8 = v50[36]; /*0x1404b71bd*/
    *(_DWORD *)&v46[63] = *(_DWORD *)&v50[100]; /*0x1404b71c8*/
    *(_OWORD *)&v46[48] = *(_OWORD *)&v50[85]; /*0x1404b71de*/
    *(_OWORD *)&v46[32] = *(_OWORD *)&v50[69]; /*0x1404b71e5*/
    *(_OWORD *)&v46[16] = *(_OWORD *)&v50[53]; /*0x1404b71ec*/
    *(_OWORD *)v46 = *(_OWORD *)&v50[37]; /*0x1404b71f3*/
    *(_DWORD *)((char *)v51 + 3) = *(_DWORD *)&v50[108]; /*0x1404b7206*/
    v51[0] = *(_DWORD *)&v50[105]; /*0x1404b720c*/
    if ( v50[104] == 0xFF ) /*0x1404b7214*/
      goto LABEL_9; /*0x1404b7214*/
    *(_OWORD *)&v50[20] = *(_OWORD *)&v49[12]; /*0x1404b7228*/
    *(_OWORD *)&v50[8] = *(_OWORD *)v49; /*0x1404b7233*/
    *(_DWORD *)&v50[100] = *(_DWORD *)&v46[63]; /*0x1404b7244*/
    *(_OWORD *)&v50[85] = *(_OWORD *)&v46[48]; /*0x1404b7263*/
    *(_OWORD *)&v50[69] = *(_OWORD *)&v46[32]; /*0x1404b7267*/
    *(_OWORD *)&v50[53] = *(_OWORD *)&v46[16]; /*0x1404b726b*/
    *(_OWORD *)&v50[37] = *(_OWORD *)v46; /*0x1404b726f*/
    *(_DWORD *)&v50[108] = *(_DWORD *)((char *)v51 + 3); /*0x1404b727f*/
    *(_DWORD *)&v50[105] = v51[0]; /*0x1404b7282*/
    v55 = 1; /*0x1404b728a*/
    sub_140FB96B0(v36, v50, aPragmaWalCheck, 28); /*0x1404b72a9*/
    *(_OWORD *)&v54[96] = *(_OWORD *)&v50[96]; /*0x1404b72b6*/
    *(_OWORD *)&v54[80] = *(_OWORD *)&v50[80]; /*0x1404b72c4*/
    *(_OWORD *)&v54[64] = *(_OWORD *)&v50[64]; /*0x1404b72d2*/
    *(_OWORD *)&v54[48] = *(_OWORD *)&v50[48]; /*0x1404b72f5*/
    *(_OWORD *)&v54[32] = *(_OWORD *)&v50[32]; /*0x1404b72fc*/
    *(_OWORD *)&v54[16] = *(_OWORD *)&v50[16]; /*0x1404b7303*/
    *(_OWORD *)v54 = *(_OWORD *)v50; /*0x1404b730a*/
    v7 = *(_QWORD *)v36; /*0x1404b7311*/
    if ( *(_QWORD *)v36 == -1 ) /*0x1404b7319*/
    {
      v7 = *(_QWORD *)v50; /*0x1404b735c*/
      *(_OWORD *)&v35[12] = *(_OWORD *)&v50[20]; /*0x1404b736b*/
      *(_OWORD *)v35 = *(_OWORD *)&v50[8]; /*0x1404b736f*/
      v8 = v50[36]; /*0x1404b7373*/
      *(_DWORD *)((char *)v41 + 15) = *(_DWORD *)&v50[100]; /*0x1404b737e*/
      v41[0] = *(_OWORD *)&v50[85]; /*0x1404b7394*/
      v40 = *(_OWORD *)&v50[69]; /*0x1404b739b*/
      v39 = *(__m256i *)&v50[37]; /*0x1404b739f*/
      *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)&v50[108]; /*0x1404b73b3*/
      v52[0] = *(_DWORD *)&v50[105]; /*0x1404b73b9*/
      if ( v50[104] != 0xFF ) /*0x1404b73c1*/
      {
        *(_QWORD *)v54 = *(_QWORD *)v50; /*0x1404b73c7*/
        *(_OWORD *)&v54[8] = *(_OWORD *)v35; /*0x1404b73d2*/
        *(_OWORD *)&v54[20] = *(_OWORD *)&v35[12]; /*0x1404b73dd*/
        v54[36] = v50[36]; /*0x1404b73e4*/
        *(__m256i *)&v54[37] = v39; /*0x1404b73fe*/
        *(_OWORD *)&v54[69] = v40; /*0x1404b740c*/
        *(_OWORD *)&v54[85] = v41[0]; /*0x1404b7413*/
        *(_DWORD *)&v54[100] = *(_DWORD *)((char *)v41 + 15); /*0x1404b7420*/
        v54[104] = v50[104]; /*0x1404b7426*/
        *(_DWORD *)&v54[105] = v52[0]; /*0x1404b7438*/
        *(_DWORD *)&v54[108] = *(_DWORD *)((char *)v52 + 3); /*0x1404b743e*/
        if ( v43 > 1 && *(_QWORD *)off_141EC8D80 >= 3u ) /*0x1404b7460*/
        {
          *(_QWORD *)v36 = v48; /*0x1404b746d*/
          *(_QWORD *)&v36[8] = v47; /*0x1404b7478*/
          *(_QWORD *)v46 = v36; /*0x1404b7480*/
          *(_QWORD *)&v46[8] = sub_14148F3A0; /*0x1404b748e*/
          *(_QWORD *)&v46[16] = &v43; /*0x1404b749c*/
          *(_QWORD *)&v46[24] = sub_1414AC520; /*0x1404b74aa*/
          *(_QWORD *)v50 = aCodexmateLibCo_0; /*0x1404b74b8*/
          *(_QWORD *)&v50[8] = 51; /*0x1404b74bf*/
          *(_QWORD *)&v50[16] = aCodexmateLibCo_0; /*0x1404b74ca*/
          *(_QWORD *)&v50[24] = 51; /*0x1404b74d1*/
          *(_QWORD *)&v50[32] = &off_14175D318; /*0x1404b74e3*/
          sub_140985BA0(&unk_14175D2C5, v46, 3, v50); /*0x1404b7505*/
        }
        v14 = v42; /*0x1404b7511*/
        *(_QWORD *)(v42 + 96) = *(_QWORD *)&v54[96]; /*0x1404b7518*/
        *(_BYTE *)(v14 + 104) = v54[104]; /*0x1404b752b*/
        *(_DWORD *)(v14 + 105) = *(_DWORD *)&v54[105]; /*0x1404b7534*/
        *(_WORD *)(v14 + 109) = *(_WORD *)&v54[109]; /*0x1404b753e*/
        result = v54[111]; /*0x1404b7542*/
        *(_BYTE *)(v14 + 111) = v54[111]; /*0x1404b7549*/
        *(_OWORD *)(v14 + 80) = *(_OWORD *)&v54[80]; /*0x1404b7553*/
        *(_OWORD *)(v14 + 64) = *(_OWORD *)&v54[64]; /*0x1404b755e*/
        v16 = *(_OWORD *)v54; /*0x1404b7562*/
        v17 = *(_OWORD *)&v54[16]; /*0x1404b7569*/
        v18 = *(_OWORD *)&v54[32]; /*0x1404b7570*/
        *(_OWORD *)(v14 + 48) = *(_OWORD *)&v54[48]; /*0x1404b757e*/
        *(_OWORD *)(v14 + 32) = v18; /*0x1404b7582*/
        *(_OWORD *)(v14 + 16) = v17; /*0x1404b7586*/
        *(_OWORD *)v14 = v16; /*0x1404b758a*/
        goto LABEL_55; /*0x1404b758d*/
      }
    }
    else
    {
      *(_OWORD *)&v35[12] = *(_OWORD *)&v36[20]; /*0x1404b7326*/
      *(_OWORD *)v35 = *(_OWORD *)&v36[8]; /*0x1404b732a*/
      v8 = v37; /*0x1404b732e*/
      *(_OWORD *)v39.m256i_i8 = *(_OWORD *)v38; /*0x1404b733b*/
      *(_OWORD *)((char *)&v39.m256i_u64[1] + 3) = *(_OWORD *)&v38[11]; /*0x1404b733f*/
      v55 = 0; /*0x1404b7343*/
      sub_14043C900(v54); /*0x1404b7351*/
    }
LABEL_10:
    v9 = -v7; /*0x1404b6d25*/
    if ( !__OFSUB__(-v7, 1) /*0x1404b6d56*/
      || (LOBYTE(v9) = (unsigned __int8)(v8 - 3) < 2u, v34 = v9, (unsigned __int8)(v8 - 3) >= 2u)
      && (v8 > 0xDu || (v10 = 12608, !_bittest(&v10, v8))) )
    {
      *(_QWORD *)v54 = v7; /*0x1404b7592*/
      *(_OWORD *)&v54[8] = *(_OWORD *)v35; /*0x1404b759d*/
      *(_OWORD *)&v54[20] = *(_OWORD *)&v35[12]; /*0x1404b75a8*/
      v54[36] = v8; /*0x1404b75af*/
      *(_OWORD *)&v54[37] = *(_OWORD *)v39.m256i_i8; /*0x1404b75ba*/
      *(_OWORD *)&v54[48] = *(_OWORD *)((char *)&v39.m256i_u64[1] + 3); /*0x1404b75c5*/
      *(_QWORD *)v46 = v54; /*0x1404b75d3*/
      *(_QWORD *)&v46[8] = sub_140FB8910; /*0x1404b75e1*/
      sub_14149C0F0(v50, &unk_14175D405, v46); /*0x1404b75fd*/
      v19 = v42; /*0x1404b760a*/
      *(_QWORD *)(v42 + 24) = *(_QWORD *)&v50[16]; /*0x1404b7611*/
      *(_OWORD *)(v19 + 8) = *(_OWORD *)v50; /*0x1404b761c*/
      *(_QWORD *)v19 = 10; /*0x1404b7620*/
      *(_BYTE *)(v19 + 104) = -1; /*0x1404b7627*/
      result = sub_14043D020(v54); /*0x1404b7632*/
      goto LABEL_55; /*0x1404b7638*/
    }
    *(_QWORD *)v46 = 0x8000000000000000uLL; /*0x1404b6d69*/
    *(_OWORD *)&v46[20] = *(_OWORD *)&v35[12]; /*0x1404b6d7b*/
    *(_OWORD *)&v46[8] = *(_OWORD *)v35; /*0x1404b6d83*/
    v46[36] = v8; /*0x1404b6d86*/
    *(_OWORD *)&v46[48] = *(_OWORD *)((char *)&v39.m256i_u64[1] + 3); /*0x1404b6d91*/
    *(_OWORD *)&v46[37] = *(_OWORD *)v39.m256i_i8; /*0x1404b6d99*/
    *(_QWORD *)v50 = 0; /*0x1404b6d9d*/
    *(_QWORD *)&v50[8] = 1; /*0x1404b6da8*/
    *(_QWORD *)&v50[16] = 0; /*0x1404b6db3*/
    *(_QWORD *)&v54[16] = 1610612768; /*0x1404b6dbe*/
    *(_QWORD *)v54 = v50; /*0x1404b6dd0*/
    *(_QWORD *)&v54[8] = &off_14175E8C8; /*0x1404b6dde*/
    if ( (unsigned __int8)sub_140FB8910(v46, v54) ) /*0x1404b6df3*/
      sub_1416C3060( /*0x1404b7c60*/
        (unsigned int)aADisplayImplem_2,
        55,
        (unsigned int)&v56,
        (unsigned int)&unk_141758598,
        (__int64)&off_14175E980);
    *(_QWORD *)&v36[16] = *(_QWORD *)&v50[16]; /*0x1404b6e08*/
    *(_OWORD *)v36 = *(_OWORD *)v50; /*0x1404b6e13*/
    if ( (_QWORD)v44 ) /*0x1404b6e21*/
      sub_140001660(*((_QWORD *)&v44 + 1), v44, 1); /*0x1404b6e30*/
    v45 = *(_QWORD *)&v36[16]; /*0x1404b6e39*/
    v44 = *(_OWORD *)v36; /*0x1404b6e44*/
    if ( v5 >= 3 ) /*0x1404b6e4f*/
    {
      sub_14043D020(v46); /*0x1404b6b37*/
    }
    else
    {
      v11 = (char *)&unk_14175C050 + 16 * v5; /*0x1404b6e60*/
      v12 = *(_QWORD *)off_141EC8D80; /*0x1404b6e6b*/
      v13 = *(_QWORD *)v11; /*0x1404b6e6e*/
      if ( (unsigned __int8)(v8 - 3) >= 2u ) /*0x1404b6e76*/
      {
        if ( v12 >= 2 ) /*0x1404b7004*/
        {
          *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL; /*0x1404b702f*/
          *(_QWORD *)v49 = v48; /*0x1404b703a*/
          *(_QWORD *)&v49[8] = v47; /*0x1404b7048*/
          *(_QWORD *)v50 = v49; /*0x1404b7056*/
          *(_QWORD *)&v50[8] = sub_14148F3A0; /*0x1404b7064*/
          *(_QWORD *)&v50[16] = &v43; /*0x1404b7072*/
          *(_QWORD *)&v50[24] = sub_1414AC520; /*0x1404b7080*/
          *(_QWORD *)&v50[32] = &v53; /*0x1404b708e*/
          *(_QWORD *)&v50[40] = sub_1414AC520; /*0x1404b7095*/
          *(_QWORD *)&v50[48] = v46; /*0x1404b70a3*/
          *(_QWORD *)&v50[56] = sub_140FB8910; /*0x1404b70b1*/
          *(_QWORD *)&v50[64] = v36; /*0x1404b70bc*/
          *(_QWORD *)&v50[72] = sub_1414A9600; /*0x1404b70ca*/
          *(_QWORD *)v54 = 0; /*0x1404b70d1*/
          *(_QWORD *)&v54[8] = aCodexmateLibCo_0; /*0x1404b70e3*/
          *(_OWORD *)&v54[16] = 0x33u; /*0x1404b70ea*/
          *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0; /*0x1404b7107*/
          *(_QWORD *)&v54[40] = 41; /*0x1404b710e*/
          *(_QWORD *)&v54[48] = 2; /*0x1404b7119*/
          *(_QWORD *)&v54[56] = aCodexmateLibCo_0; /*0x1404b7124*/
          *(_QWORD *)&v54[64] = 51; /*0x1404b712b*/
          *(_QWORD *)&v54[72] = 0xB9500000001LL; /*0x1404b7140*/
          *(_QWORD *)&v54[80] = &unk_14175D330; /*0x1404b714e*/
          *(_QWORD *)&v54[88] = v50; /*0x1404b715c*/
          sub_1412C36A0(&v56, v54); /*0x1404b7171*/
        }
      }
      else if ( v12 >= 2 ) /*0x1404b6e80*/
      {
        *(_OWORD *)v36 = 0x3E8 * (unsigned __int128)v13 + *((unsigned int *)v11 + 2) / 0xF4240uLL; /*0x1404b6eab*/
        *(_QWORD *)v49 = v48; /*0x1404b6eb6*/
        *(_QWORD *)&v49[8] = v47; /*0x1404b6ec4*/
        *(_QWORD *)v50 = v49; /*0x1404b6ed2*/
        *(_QWORD *)&v50[8] = sub_14148F3A0; /*0x1404b6ee0*/
        *(_QWORD *)&v50[16] = &v43; /*0x1404b6eee*/
        *(_QWORD *)&v50[24] = sub_1414AC520; /*0x1404b6efc*/
        *(_QWORD *)&v50[32] = &v53; /*0x1404b6f0a*/
        *(_QWORD *)&v50[40] = sub_1414AC520; /*0x1404b6f11*/
        *(_QWORD *)&v50[48] = v46; /*0x1404b6f1f*/
        *(_QWORD *)&v50[56] = sub_140FB8910; /*0x1404b6f2d*/
        *(_QWORD *)&v50[64] = v36; /*0x1404b6f38*/
        *(_QWORD *)&v50[72] = sub_1414A9600; /*0x1404b6f46*/
        *(_QWORD *)v54 = 0; /*0x1404b6f4d*/
        *(_QWORD *)&v54[8] = aCodexmateLibCo_0; /*0x1404b6f5f*/
        *(_OWORD *)&v54[16] = 0x33u; /*0x1404b6f66*/
        *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0; /*0x1404b6f83*/
        *(_QWORD *)&v54[40] = 41; /*0x1404b6f8a*/
        *(_QWORD *)&v54[48] = 2; /*0x1404b6f95*/
        *(_QWORD *)&v54[56] = aCodexmateLibCo_0; /*0x1404b6fa0*/
        *(_QWORD *)&v54[64] = 51; /*0x1404b6fa7*/
        *(_QWORD *)&v54[72] = 0xB8F00000001LL; /*0x1404b6fbc*/
        *(_QWORD *)&v54[80] = &unk_14175D3A6; /*0x1404b6fca*/
        *(_QWORD *)&v54[88] = v50; /*0x1404b6fd8*/
        sub_1412C36A0(&v56, v54); /*0x1404b6fed*/
      }
      sub_141487490(v13, *((unsigned int *)v11 + 2)); /*0x1404b717e*/
      sub_14043D020(v46); /*0x1404b718b*/
    }
    v4 = v53; /*0x1404b6b3d*/
    v5 = v6; /*0x1404b6b44*/
  }
  v20 = sub_141471AC0(&v31); /*0x1404b7641*/
  *(_OWORD *)v49 = 0x3E8 * (unsigned __int128)(unsigned __int64)v20 + v21 / 0xF4240uLL; /*0x1404b7665*/
  codex_db_log_path(v36, v48, v47); /*0x1404b7688*/
  sub_1403FE220(v54); /*0x1404b7695*/
  *(_QWORD *)&v22 = *(_QWORD *)v54; /*0x1404b769b*/
  *((_QWORD *)&v22 + 1) = *(_QWORD *)&v54[8] + 32LL * *(_QWORD *)&v54[16]; /*0x1404b76b4*/
  *(_QWORD *)v54 = *(_QWORD *)&v54[8]; /*0x1404b76b7*/
  *(_OWORD *)&v54[16] = v22; /*0x1404b76c5*/
  sub_1402CB4A0(v46, v54); /*0x1404b76e1*/
  v24 = *(_QWORD *)&v46[16]; /*0x1404b76e7*/
  if ( *(_QWORD *)&v46[16] )
  {
    v25 = *(_QWORD *)&v46[8]; /*0x1404b76f7*/
    sub_140440300((unsigned int)v54, *(_DWORD *)&v46[8], *(_DWORD *)&v46[16], (unsigned int)&unk_141758CC9, 3); /*0x1404b771b*/
    *(_QWORD *)&v50[16] = *(_QWORD *)&v54[16]; /*0x1404b7728*/
    *(_OWORD *)v50 = *(_OWORD *)v54; /*0x1404b7736*/
    *(_QWORD *)v54 = v50; /*0x1404b7744*/
    *(_QWORD *)&v54[8] = sub_1400015F0; /*0x1404b7752*/
    sub_14149C0F0(&v39, &unk_14175B4D8, v54); /*0x1404b776b*/
    if ( *(_QWORD *)v50 ) /*0x1404b777b*/
      sub_140001660(*(_QWORD *)&v50[8], *(_QWORD *)v50, 1); /*0x1404b778a*/
    v26 = (_QWORD *)(v25 + 8); /*0x1404b778f*/
    do /*0x1404b77a7*/
    {
      v27 = *(v26 - 1); /*0x1404b77a9*/
      if ( v27 ) /*0x1404b77b0*/
        sub_140001660(*v26, v27, 1); /*0x1404b77bb*/
      v26 += 3; /*0x1404b77a0*/
      --v24; /*0x1404b77a4*/
    }
    while ( v24 ); /*0x1404b77a7*/
  }
  else
  {
    nullsub_1(v23); /*0x1404b77c2*/
    v28 = (void *)sub_140001650(25, 1); /*0x1404b77d1*/
    if ( !v28 ) /*0x1404b77d9*/
      sub_1416C2D4B(1, 25); /*0x1404b7c72*/
    qmemcpy(v28, "db holders: none detected", 25);
    v39.m256i_i64[0] = 25; /*0x1404b77f4*/
    v39.m256i_i64[1] = (__int64)v28; /*0x1404b77fc*/
    v39.m256i_i64[2] = 25; /*0x1404b7800*/
    v25 = *(_QWORD *)&v46[8]; /*0x1404b7808*/
  }
  if ( *(_QWORD *)v46 ) /*0x1404b7819*/
    sub_140001660(v25, 24LL * *(_QWORD *)v46, 8); /*0x1404b782c*/
  v29 = *(_QWORD *)off_141EC8D80; /*0x1404b7838*/
  if ( (v34 & 1) != 0 ) /*0x1404b783f*/
  {
    if ( v29 >= 2 ) /*0x1404b7849*/
    {
      *(_QWORD *)v50 = v36; /*0x1404b784f*/
      *(_QWORD *)&v50[8] = sub_1400015F0; /*0x1404b785d*/
      *(_QWORD *)&v50[16] = &v53; /*0x1404b786b*/
      *(_QWORD *)&v50[24] = sub_1414AC520; /*0x1404b7879*/
      *(_QWORD *)&v50[32] = v49; /*0x1404b7887*/
      *(_QWORD *)&v50[40] = sub_1414A9600; /*0x1404b7895*/
      *(_QWORD *)&v50[48] = &v44; /*0x1404b78a3*/
      *(_QWORD *)&v50[56] = sub_1400015F0; /*0x1404b78aa*/
      *(_QWORD *)&v50[64] = &v39; /*0x1404b78b5*/
      *(_QWORD *)&v50[72] = sub_1400015F0; /*0x1404b78bc*/
      *(_QWORD *)v54 = 0; /*0x1404b78c3*/
      *(_QWORD *)&v54[8] = aCodexmateLibCo_0; /*0x1404b78d5*/
      *(_OWORD *)&v54[16] = 0x33u; /*0x1404b78dc*/
      *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0; /*0x1404b78f9*/
      *(_QWORD *)&v54[40] = 41; /*0x1404b7900*/
      *(_QWORD *)&v54[48] = 2; /*0x1404b790b*/
      *(_QWORD *)&v54[56] = aCodexmateLibCo_0; /*0x1404b7916*/
      *(_QWORD *)&v54[64] = 51; /*0x1404b791d*/
      *(_QWORD *)&v54[72] = 0xBAB00000001LL; /*0x1404b7932*/
      *(_QWORD *)&v54[80] = &unk_14175D21F; /*0x1404b7940*/
      *(_QWORD *)&v54[88] = v50; /*0x1404b794e*/
      sub_1412C36A0(&v56, v54); /*0x1404b7963*/
    }
    *(_QWORD *)v54 = v36; /*0x1404b7969*/
    *(_QWORD *)&v54[8] = sub_1400015F0; /*0x1404b7977*/
    *(_QWORD *)&v54[16] = &v53; /*0x1404b7985*/
    *(_QWORD *)&v54[24] = sub_1414AC520; /*0x1404b7993*/
    *(_QWORD *)&v54[32] = v49; /*0x1404b79a1*/
    *(_QWORD *)&v54[40] = sub_1414A9600; /*0x1404b79af*/
    *(_QWORD *)&v54[48] = &v44; /*0x1404b79bd*/
    *(_QWORD *)&v54[56] = sub_1400015F0; /*0x1404b79c4*/
    *(_QWORD *)&v54[64] = &v39; /*0x1404b79cf*/
    *(_QWORD *)&v54[72] = sub_1400015F0; /*0x1404b79d6*/
    sub_14149C0F0(v50, &unk_14175D27E, v54); /*0x1404b79f5*/
  }
  else
  {
    if ( v29 >= 2 ) /*0x1404b7a04*/
    {
      *(_QWORD *)v50 = v36; /*0x1404b7a0a*/
      *(_QWORD *)&v50[8] = sub_1400015F0; /*0x1404b7a18*/
      *(_QWORD *)&v50[16] = &v53; /*0x1404b7a26*/
      *(_QWORD *)&v50[24] = sub_1414AC520; /*0x1404b7a34*/
      *(_QWORD *)&v50[32] = v49; /*0x1404b7a42*/
      *(_QWORD *)&v50[40] = sub_1414A9600; /*0x1404b7a50*/
      *(_QWORD *)&v50[48] = &v44; /*0x1404b7a5e*/
      *(_QWORD *)&v50[56] = sub_1400015F0; /*0x1404b7a65*/
      *(_QWORD *)&v50[64] = &v39; /*0x1404b7a70*/
      *(_QWORD *)&v50[72] = sub_1400015F0; /*0x1404b7a77*/
      *(_QWORD *)v54 = 0; /*0x1404b7a7e*/
      *(_QWORD *)&v54[8] = aCodexmateLibCo_0; /*0x1404b7a90*/
      *(_OWORD *)&v54[16] = 0x33u; /*0x1404b7a97*/
      *(_QWORD *)&v54[32] = aSrcCoreRelayCo_0; /*0x1404b7ab4*/
      *(_QWORD *)&v54[40] = 41; /*0x1404b7abb*/
      *(_QWORD *)&v54[48] = 2; /*0x1404b7ac6*/
      *(_QWORD *)&v54[56] = aCodexmateLibCo_0; /*0x1404b7ad1*/
      *(_QWORD *)&v54[64] = 51; /*0x1404b7ad8*/
      *(_QWORD *)&v54[72] = 0xBB200000001LL; /*0x1404b7aed*/
      *(_QWORD *)&v54[80] = &unk_14175D169; /*0x1404b7afb*/
      *(_QWORD *)&v54[88] = v50; /*0x1404b7b09*/
      sub_1412C36A0(&v56, v54); /*0x1404b7b1e*/
    }
    *(_QWORD *)v54 = v36; /*0x1404b7b24*/
    *(_QWORD *)&v54[8] = sub_1400015F0; /*0x1404b7b32*/
    *(_QWORD *)&v54[16] = &v53; /*0x1404b7b40*/
    *(_QWORD *)&v54[24] = sub_1414AC520; /*0x1404b7b4e*/
    *(_QWORD *)&v54[32] = v49; /*0x1404b7b5c*/
    *(_QWORD *)&v54[40] = sub_1414A9600; /*0x1404b7b6a*/
    *(_QWORD *)&v54[48] = &v44; /*0x1404b7b78*/
    *(_QWORD *)&v54[56] = sub_1400015F0; /*0x1404b7b7f*/
    *(_QWORD *)&v54[64] = &v39; /*0x1404b7b8a*/
    *(_QWORD *)&v54[72] = sub_1400015F0; /*0x1404b7b91*/
    sub_14149C0F0(v50, &unk_14175D1D4, v54); /*0x1404b7bb0*/
  }
  result = *(_QWORD *)&v50[16]; /*0x1404b7bb6*/
  v30 = v42; /*0x1404b7bba*/
  *(_QWORD *)(v42 + 24) = *(_QWORD *)&v50[16]; /*0x1404b7bc1*/
  *(_OWORD *)(v30 + 8) = *(_OWORD *)v50; /*0x1404b7bc8*/
  *(_QWORD *)v30 = 10; /*0x1404b7bcc*/
  *(_BYTE *)(v30 + 104) = -1; /*0x1404b7bd3*/
  if ( v39.m256i_i64[0] ) /*0x1404b7bde*/
    result = sub_140001660(v39.m256i_i64[1], v39.m256i_i64[0], 1); /*0x1404b7bea*/
  if ( *(_QWORD *)v36 ) /*0x1404b7bf6*/
    result = sub_140001660(*(_QWORD *)&v36[8], *(_QWORD *)v36, 1); /*0x1404b7c02*/
LABEL_55:
  if ( (_QWORD)v44 ) /*0x1404b7c11*/
    return sub_140001660(*((_QWORD *)&v44 + 1), v44, 1); /*0x1404b7c20*/
  return result; /*0x1404b7c26*/
}