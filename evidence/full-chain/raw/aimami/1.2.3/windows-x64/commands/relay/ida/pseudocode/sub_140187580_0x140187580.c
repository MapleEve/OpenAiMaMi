__int64 __fastcall sub_140187580(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BYTE v13[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+238h] [rbp+1B8h]
  char v15[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C8h] [rbp+348h]
  int v18; // [rsp+3CCh] [rbp+34Ch]
  __int64 v19; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v20; // [rsp+3D8h] [rbp+358h]
  __int128 v21; // [rsp+3E8h] [rbp+368h]
  __int128 v22; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v23; // [rsp+570h] [rbp+4F0h]
  __int64 v24; // [rsp+578h] [rbp+4F8h]
  __int64 v25; // [rsp+6F8h] [rbp+678h] BYREF
  __int64 v26; // [rsp+700h] [rbp+680h]
  const char *v27; // [rsp+708h] [rbp+688h] BYREF
  __int64 v28; // [rsp+710h] [rbp+690h]
  const char *v29; // [rsp+718h] [rbp+698h]
  __int128 *v30; // [rsp+720h] [rbp+6A0h]
  __int64 v31; // [rsp+728h] [rbp+6A8h]
  _OWORD v32[2]; // [rsp+888h] [rbp+808h] BYREF
  __int64 v33; // [rsp+8A8h] [rbp+828h]
  __int128 v34; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v35; // [rsp+8C0h] [rbp+840h]
  __int64 v36; // [rsp+8C8h] [rbp+848h]
  __int64 v37; // [rsp+8D0h] [rbp+850h]
  char v38; // [rsp+8DEh] [rbp+85Eh]
  char v39; // [rsp+8DFh] [rbp+85Fh]
  __int64 v40; // [rsp+8E0h] [rbp+860h]

  v40 = -2; /*0x140187597*/
  sub_141684120(v13, a1, 520); /*0x1401875b5*/
  sub_141684120(v15, a1 + 520, 400); /*0x1401875d1*/
  v35 = *(_QWORD *)(a1 + 936); /*0x1401875dd*/
  v34 = *(_OWORD *)(a1 + 920); /*0x1401875eb*/
  v31 = 0; /*0x1401875f2*/
  v25 = (__int64)aDiagnoseCodexR; /*0x140187604*/
  v26 = 21; /*0x14018760b*/
  v27 = aManager_0; /*0x14018761d*/
  v28 = 7; /*0x140187624*/
  v29 = v13; /*0x14018762f*/
  v30 = &v34; /*0x14018763d*/
  v39 = 1; /*0x14018764f*/
  v2 = sub_140004B10((volatile void *)(v14 + 16)); /*0x140187656*/
  if ( v2 ) /*0x14018765f*/
  {
LABEL_2:
    v39 = 1; /*0x140187661*/
    sub_140485820(&v22, v2); /*0x140187672*/
    sub_141684120(&v19, a1 + 520, 400); /*0x140187688*/
    if ( (_QWORD)v22 != -1 ) /*0x140187695*/
    {
      sub_141684120(&v25, &v22, 400); /*0x1401876af*/
LABEL_14:
      v38 = 0; /*0x140187829*/
      sub_140437E60(&v19, &v25); /*0x14018783e*/
      goto LABEL_15; /*0x14018783e*/
    }
    v4 = *((_QWORD *)&v22 + 1); /*0x140187781*/
    v5 = v23; /*0x140187788*/
    v6 = (const char *)v24; /*0x14018778f*/
    if ( v24 < 0 ) /*0x140187799*/
    {
      v7 = 0; /*0x14018779b*/
      goto LABEL_8; /*0x14018779b*/
    }
    if ( v24 ) /*0x1401877b9*/
    {
      nullsub_1(v3); /*0x1401877bf*/
      v7 = 1; /*0x1401877c4*/
      v8 = sub_140001650(v6, 1); /*0x1401877d1*/
      if ( !v8 ) /*0x1401877d9*/
      {
LABEL_8:
        v36 = v5; /*0x14018779d*/
        v37 = v4; /*0x1401877a4*/
        sub_1416C2D4B(v7, v6); /*0x1401877b1*/
      }
      v9 = v8; /*0x1401877db*/
      sub_141684120(v8, v5, v6); /*0x1401877e7*/
      if ( !v4 ) /*0x1401877ef*/
      {
LABEL_13:
        LOBYTE(v26) = 3; /*0x140187802*/
        v27 = v6; /*0x140187809*/
        v28 = v9; /*0x140187810*/
        v29 = v6; /*0x140187817*/
        v25 = -1; /*0x14018781e*/
        goto LABEL_14; /*0x14018781e*/
      }
    }
    else
    {
      v9 = 1; /*0x1401878f5*/
      if ( !*((_QWORD *)&v22 + 1) ) /*0x1401878fd*/
        goto LABEL_13; /*0x1401878fd*/
    }
    sub_140001660(v5, v4, 1); /*0x1401877fd*/
    goto LABEL_13; /*0x1401877fd*/
  }
  v39 = 1; /*0x1401876c0*/
  sub_1416850A0(v32, &v25, &v27); /*0x1401876d5*/
  if ( LOBYTE(v32[0]) == 0xFF ) /*0x1401876e2*/
  {
    v2 = *((_QWORD *)&v32[0] + 1); /*0x1401878e9*/
    goto LABEL_2; /*0x1401878f0*/
  }
  v21 = v32[1]; /*0x1401876f6*/
  v20 = v32[0]; /*0x1401876fd*/
  sub_141684120(&v25, a1 + 520, 360); /*0x140187717*/
  v22 = *(_OWORD *)(a1 + 880); /*0x14018772a*/
  v23 = *(_QWORD *)(a1 + 896); /*0x140187738*/
  v19 = 1; /*0x14018774b*/
  v39 = 0; /*0x140187756*/
  sub_14047E370((unsigned int)&v25, v16, (unsigned int)&v19, (unsigned int)&v22, v17, v18); /*0x140187776*/
LABEL_15:
  if ( (_QWORD)v34 != -1 ) /*0x14018784c*/
  {
    v10 = *((_QWORD *)&v34 + 1); /*0x140187852*/
    v36 = v35; /*0x140187860*/
    v37 = 0; /*0x140187867*/
    v33 = *((_QWORD *)&v34 + 1); /*0x140187872*/
    while ( v36 != v37 ) /*0x14018788e*/
    {
      ++v37; /*0x140187893*/
      v11 = v10 + 96; /*0x14018789a*/
      sub_1402C7520(); /*0x14018789e*/
      v10 = v11; /*0x1401878a4*/
    }
    if ( (_QWORD)v34 ) /*0x1401878b3*/
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8); /*0x1401878ca*/
  }
  return sub_140014270(v13); /*0x1401878d9*/
}