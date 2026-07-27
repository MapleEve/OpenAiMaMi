// win 1.2.1 | tauri command handler = export_relay_config | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall export_relay_config(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  const char *v18; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v19; // [rsp+3D8h] [rbp+358h]
  const char *v20; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v21; // [rsp+3E8h] [rbp+368h]
  _BYTE *v22; // [rsp+3F0h] [rbp+370h]
  __int128 *v23; // [rsp+3F8h] [rbp+378h]
  __int64 v24; // [rsp+400h] [rbp+380h]
  _OWORD v25[2]; // [rsp+560h] [rbp+4E0h] BYREF
  _OWORD v26[2]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v27; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v28; // [rsp+5B0h] [rbp+530h]
  __int128 v29; // [rsp+5C0h] [rbp+540h]
  __int128 v30; // [rsp+5D0h] [rbp+550h]
  __int128 v31; // [rsp+5E0h] [rbp+560h]
  __int128 v32; // [rsp+5F0h] [rbp+570h]
  __int128 v33; // [rsp+600h] [rbp+580h]
  __int64 v34; // [rsp+610h] [rbp+590h]
  _BYTE v35[48]; // [rsp+620h] [rbp+5A0h] BYREF
  __int128 v36; // [rsp+650h] [rbp+5D0h]
  __int128 v37; // [rsp+660h] [rbp+5E0h]
  __int128 v38; // [rsp+670h] [rbp+5F0h]
  __int128 v39; // [rsp+680h] [rbp+600h]
  __int64 v40; // [rsp+690h] [rbp+610h]
  __int128 v41; // [rsp+6A0h] [rbp+620h] BYREF
  __int128 v42; // [rsp+6B0h] [rbp+630h]
  __int128 v43; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v44; // [rsp+6D0h] [rbp+650h]
  __int64 v45; // [rsp+6D8h] [rbp+658h]
  __int64 v46; // [rsp+6E0h] [rbp+660h]
  __int64 v47; // [rsp+6E8h] [rbp+668h]
  char v48; // [rsp+6F6h] [rbp+676h]
  char v49; // [rsp+6F7h] [rbp+677h]
  __int64 v50; // [rsp+6F8h] [rbp+678h]

  v50 = -2; /*0x14016a7c9*/
  sub_141684120(v12, a1, 520); /*0x14016a7e7*/
  sub_141684120(v14, a1 + 520, 400); /*0x14016a803*/
  v44 = *(_QWORD *)(a1 + 936); /*0x14016a80f*/
  v43 = *(_OWORD *)(a1 + 920); /*0x14016a81d*/
  v24 = 0; /*0x14016a824*/
  v18 = aExportRelayCon; /*0x14016a836*/
  v19 = 19; /*0x14016a83d*/
  v20 = aManager_0; /*0x14016a84f*/
  v21 = 7; /*0x14016a856*/
  v22 = v12; /*0x14016a861*/
  v23 = &v43; /*0x14016a86f*/
  v49 = 1; /*0x14016a881*/
  v2 = sub_140004B10((volatile void *)(v13 + 16)); /*0x14016a88e*/
  if ( !v2 ) /*0x14016a894*/
  {
    v49 = 1; /*0x14016a9a6*/
    sub_1416850A0(v26, &v18, &v20); /*0x14016a9bb*/
    if ( LOBYTE(v26[0]) != 0xFF ) /*0x14016a9c8*/
    {
      *(_OWORD *)&v35[24] = v26[1]; /*0x14016a9dc*/
      *(_OWORD *)&v35[8] = v26[0]; /*0x14016a9e3*/
      sub_141684120(&v18, a1 + 520, 360); /*0x14016a9fd*/
      v27 = *(_OWORD *)(a1 + 880); /*0x14016aa10*/
      *(_QWORD *)&v28 = *(_QWORD *)(a1 + 896); /*0x14016aa1e*/
      *(_QWORD *)v35 = 1; /*0x14016aa31*/
      v49 = 0; /*0x14016aa3c*/
      sub_14047E370((unsigned int)&v18, v15, (unsigned int)v35, (unsigned int)&v27, v16, v17); /*0x14016aa5c*/
      goto LABEL_23; /*0x14016aa62*/
    }
    v2 = *((_QWORD *)&v26[0] + 1); /*0x14016aba4*/
  }
  v24 = 0; /*0x14016a89a*/
  v18 = aExportRelayCon; /*0x14016a8a5*/
  v19 = 19; /*0x14016a8ac*/
  v20 = aFilepath; /*0x14016a8be*/
  v21 = 8; /*0x14016a8c5*/
  v22 = v12; /*0x14016a8d0*/
  v23 = &v43; /*0x14016a8d7*/
  v49 = 1; /*0x14016a8de*/
  sub_1409757B0(&v41, &v18); /*0x14016a8f3*/
  if ( (_BYTE)v41 != 0xFF ) /*0x14016a900*/
  {
    *(_OWORD *)&v35[24] = v42; /*0x14016a914*/
    *(_OWORD *)&v35[8] = v41; /*0x14016a91b*/
    sub_141684120(&v18, a1 + 520, 360); /*0x14016a935*/
    v27 = *(_OWORD *)(a1 + 880); /*0x14016a948*/
    *(_QWORD *)&v28 = *(_QWORD *)(a1 + 896); /*0x14016a956*/
    *(_QWORD *)v35 = 1; /*0x14016a969*/
    v49 = 0; /*0x14016a974*/
    sub_14047E370((unsigned int)&v18, v15, (unsigned int)v35, (unsigned int)&v27, v16, v17); /*0x14016a994*/
    goto LABEL_23; /*0x14016a99a*/
  }
  v47 = *((_QWORD *)&v41 + 1); /*0x14016aa6e*/
  v46 = v42; /*0x14016aa7c*/
  v24 = 0; /*0x14016aa83*/
  v18 = aExportRelayCon; /*0x14016aa8e*/
  v19 = 19; /*0x14016aa95*/
  v20 = aIncludeapikeys; /*0x14016aaa7*/
  v21 = 14; /*0x14016aaae*/
  v22 = v12; /*0x14016aab9*/
  v23 = &v43; /*0x14016aac0*/
  sub_1401BCE80(v25, &v18); /*0x14016aad5*/
  LOBYTE(v45) = v25[0]; /*0x14016aae2*/
  if ( LOBYTE(v25[0]) == 0xFF ) /*0x14016aaea*/
  {
    sub_140484D00(&v27, v2, (char *)&v41 + 8, BYTE1(v25[0])); /*0x14016abc9*/
    sub_141684120(&v18, a1 + 520, 400); /*0x14016abdf*/
    if ( (_QWORD)v27 != -1 ) /*0x14016abec*/
    {
      v40 = v34; /*0x14016abf5*/
      v39 = v33; /*0x14016ac03*/
      v38 = v32; /*0x14016ac11*/
      v37 = v31; /*0x14016ac1f*/
      v36 = v30; /*0x14016ac42*/
      *(_OWORD *)&v35[32] = v29; /*0x14016ac49*/
      *(_OWORD *)&v35[16] = v28; /*0x14016ac50*/
      *(_OWORD *)v35 = v27; /*0x14016ac57*/
LABEL_22:
      v48 = 0; /*0x14016ad0e*/
      sub_140436A80(&v18, v35); /*0x14016ad23*/
      goto LABEL_23; /*0x14016ad23*/
    }
    v4 = *((_QWORD *)&v27 + 1); /*0x14016ac63*/
    *((_QWORD *)&v5 + 1) = *((_QWORD *)&v28 + 1); /*0x14016ac71*/
    v6 = v28; /*0x14016ac71*/
    if ( v28 < 0 ) /*0x14016ac7b*/
    {
      v7 = 0; /*0x14016ac7d*/
      goto LABEL_14; /*0x14016ac7d*/
    }
    if ( *((_QWORD *)&v28 + 1) ) /*0x14016ac9b*/
    {
      nullsub_1(v3); /*0x14016ac9d*/
      v7 = 1; /*0x14016aca2*/
      v8 = sub_140001650(*((_QWORD *)&v5 + 1), 1); /*0x14016acaf*/
      if ( !v8 ) /*0x14016acb7*/
      {
LABEL_14:
        v46 = v6; /*0x14016ac7f*/
        v47 = v4; /*0x14016ac86*/
        sub_1416C2D4B(v7, *((_QWORD *)&v5 + 1)); /*0x14016ac93*/
      }
      *(_QWORD *)&v5 = v8; /*0x14016acb9*/
      sub_141684120(v8, v6, *((_QWORD *)&v5 + 1)); /*0x14016acc5*/
    }
    else
    {
      *(_QWORD *)&v5 = 1; /*0x14016accc*/
    }
    if ( v4 ) /*0x14016acd4*/
      sub_140001660(v6, v4, 1); /*0x14016ace2*/
    v35[8] = 3; /*0x14016ace7*/
    *(_QWORD *)&v35[16] = *((_QWORD *)&v5 + 1); /*0x14016acee*/
    *(_OWORD *)&v35[24] = v5; /*0x14016acf5*/
    *(_QWORD *)v35 = -1; /*0x14016ad03*/
    goto LABEL_22; /*0x14016ad03*/
  }
  *(_OWORD *)&v35[24] = v25[1]; /*0x14016aafe*/
  *(_OWORD *)&v35[8] = v25[0]; /*0x14016ab05*/
  sub_141684120(&v18, a1 + 520, 360); /*0x14016ab1f*/
  v27 = *(_OWORD *)(a1 + 880); /*0x14016ab32*/
  *(_QWORD *)&v28 = *(_QWORD *)(a1 + 896); /*0x14016ab40*/
  *(_QWORD *)v35 = 1; /*0x14016ab53*/
  sub_14047E370((unsigned int)&v18, v15, (unsigned int)v35, (unsigned int)&v27, v16, v17); /*0x14016ab77*/
  if ( v47 ) /*0x14016ab87*/
    sub_140001660(v46, v47, 1); /*0x14016ab9a*/
LABEL_23:
  if ( (_QWORD)v43 != -1 ) /*0x14016ad31*/
  {
    v9 = *((_QWORD *)&v43 + 1); /*0x14016ad33*/
    v46 = v44; /*0x14016ad41*/
    v47 = 0; /*0x14016ad48*/
    v45 = *((_QWORD *)&v43 + 1); /*0x14016ad53*/
    while ( v46 != v47 ) /*0x14016ad6e*/
    {
      ++v47; /*0x14016ad73*/
      v10 = v9 + 96; /*0x14016ad7a*/
      sub_1402C7520(); /*0x14016ad7e*/
      v9 = v10; /*0x14016ad84*/
    }
    if ( (_QWORD)v43 ) /*0x14016ad93*/
      sub_140001660(*((_QWORD *)&v43 + 1), 96 * v43, 8); /*0x14016adaa*/
  }
  return sub_140014270(v12); /*0x14016adb9*/
}