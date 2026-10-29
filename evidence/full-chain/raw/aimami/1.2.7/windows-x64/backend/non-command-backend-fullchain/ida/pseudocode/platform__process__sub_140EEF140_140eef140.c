// win 1.2.7 | module src/platform/process.rs | ea 0x140eef140 | name sub_140EEF140
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int128 *__fastcall sub_140EEF140(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // edx
  unsigned __int64 v7; // r12
  unsigned int v8; // edx
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 *result; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _QWORD *v29; // r14
  __int64 v30; // rdx
  char *v31; // r15
  __int64 v32; // rdi
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rcx
  _QWORD *v37; // r14
  __int64 v38; // rdx
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int128 v41; // [rsp+30h] [rbp-50h] BYREF
  __int64 v42; // [rsp+40h] [rbp-40h]
  __int128 v43; // [rsp+48h] [rbp-38h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h]
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF
  __int128 v46; // [rsp+70h] [rbp-10h]
  __int128 v47; // [rsp+80h] [rbp+0h]
  __int128 v48; // [rsp+90h] [rbp+10h]
  __int128 v49; // [rsp+A0h] [rbp+20h]
  __int128 v50; // [rsp+B0h] [rbp+30h]
  __int64 *v51; // [rsp+C0h] [rbp+40h] BYREF
  __int128 *v52; // [rsp+C8h] [rbp+48h] BYREF
  char *v53; // [rsp+D0h] [rbp+50h]
  __int64 v54; // [rsp+D8h] [rbp+58h]
  __int128 v55; // [rsp+E0h] [rbp+60h]
  __int64 v56; // [rsp+F0h] [rbp+70h]
  __int64 v57; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v58; // [rsp+100h] [rbp+80h]
  __int128 v59; // [rsp+110h] [rbp+90h] BYREF
  __int128 v60; // [rsp+120h] [rbp+A0h]
  __int128 v61; // [rsp+130h] [rbp+B0h]
  __int128 v62; // [rsp+140h] [rbp+C0h]
  __int128 v63; // [rsp+150h] [rbp+D0h]
  __int128 v64; // [rsp+160h] [rbp+E0h]
  _BYTE v65[24]; // [rsp+170h] [rbp+F0h] BYREF
  __int64 (__fastcall *v66)(); // [rsp+188h] [rbp+108h]
  __int128 v67; // [rsp+190h] [rbp+110h]
  __int128 v68; // [rsp+1A0h] [rbp+120h]
  __int128 v69; // [rsp+1B0h] [rbp+130h]
  __int128 v70; // [rsp+1C0h] [rbp+140h]
  __int64 v71; // [rsp+1D0h] [rbp+150h]
  char v72; // [rsp+1DFh] [rbp+15Fh] BYREF
  __int64 v73; // [rsp+1E0h] [rbp+160h]

  v73 = -2;
  v71 = a1;
  v5 = sub_14167FC00(a1, a2, a3, a4);
  v7 = sub_1416A1240(v5, v6, 3, 0, (__int64)&off_141A5B000);
  v9 = v8;
  v57 = -1;
  while ( 1 )
  {
    sub_140EE9280((__int64)v65);
    result = *(__int128 **)v65;
    v59 = *(_OWORD *)&v65[8];
    *(_QWORD *)&v60 = v66;
    if ( *(_QWORD *)v65 != -1 )
    {
      v20 = v67;
      v21 = v68;
      v22 = v69;
      v23 = v71;
      *(_OWORD *)(v71 + 80) = v70;
      *(_OWORD *)(v23 + 64) = v22;
      *(_OWORD *)(v23 + 48) = v21;
      *(_OWORD *)(v23 + 32) = v20;
      *(_QWORD *)(v23 + 24) = v60;
      *(_OWORD *)(v23 + 8) = v59;
      *(_QWORD *)v23 = result;
      goto LABEL_54;
    }
    v55 = v59;
    v14 = v60;
    v56 = v60;
    if ( !(_QWORD)v60 )
      break;
    v15 = sub_14167FC00(v66, v10, v11, v12);
    if ( v15 == v7 )
    {
      if ( v16 >= v9 )
        goto LABEL_26;
    }
    else if ( v15 >= v7 )
    {
LABEL_26:
      v17 = *((_QWORD *)&v55 + 1);
      sub_1403EC260((unsigned __int64 *)&v52, *((__int64 *)&v55 + 1), *((_QWORD *)&v55 + 1) + 32 * v14);
      v31 = v53;
      v32 = v54;
      sub_140D1EE10((unsigned int)v65, (_DWORD)v53, v54, (unsigned int)&unk_141A55FEA, 3);
      *(_QWORD *)&v46 = *(_QWORD *)&v65[16];
      v45 = *(_OWORD *)v65;
      if ( v57 == -1 )
      {
        *(_QWORD *)&v59 = 0;
        *((_QWORD *)&v59 + 1) = 1;
        *(_QWORD *)&v60 = 0;
      }
      else
      {
        v51 = &v57;
        *(_QWORD *)&v59 = &v51;
        *((_QWORD *)&v59 + 1) = sub_140369D80;
        sub_1416ABFD0(v65, &unk_141A57691, &v59);
        v59 = *(_OWORD *)v65;
        *(_QWORD *)&v60 = *(_QWORD *)&v65[16];
      }
      *(_QWORD *)v65 = &v45;
      *(_QWORD *)&v65[8] = sub_1400015F0;
      *(_QWORD *)&v65[16] = &v59;
      v66 = sub_1400015F0;
      sub_1416ABFD0(&v41, &unk_141A5B04E, v65);
      if ( (_QWORD)v59 )
        sub_140001660(*((_QWORD *)&v59 + 1), v59, 1);
      if ( (_QWORD)v45 )
        sub_140001660(*((_QWORD *)&v45 + 1), v45, 1);
      v36 = v71;
      *(_QWORD *)(v71 + 24) = v42;
      *(_OWORD *)(v36 + 8) = v41;
      *(_QWORD *)v36 = 10;
      if ( v32 )
      {
        v37 = v31 + 8;
        do
        {
          v38 = *(v37 - 1);
          if ( v38 )
            sub_140001660(*v37, v38, 1);
          v37 += 3;
          --v32;
        }
        while ( v32 );
      }
      result = v52;
      if ( v52 )
        result = (__int128 *)sub_140001660(v31, 24LL * (_QWORD)v52, 8);
      goto LABEL_47;
    }
    v17 = *((_QWORD *)&v55 + 1);
    sub_140EE9750((__int64)&v45, *((__int64 *)&v55 + 1), v14, a2);
    if ( (_DWORD)v45 != -1 )
    {
      v64 = v50;
      v63 = v49;
      v62 = v48;
      v61 = v47;
      v60 = v46;
      v59 = v45;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v52 = &v59;
        v53 = (char *)sub_14104A7D0;
        *(_QWORD *)&v68 = 2;
        *((_QWORD *)&v68 + 1) = aCodexmateLibPl_2;
        *(_QWORD *)&v69 = 32;
        *(_QWORD *)&v70 = &unk_141A5B018;
        *((_QWORD *)&v70 + 1) = &v52;
        *(_QWORD *)v65 = 0;
        *(_QWORD *)&v65[8] = aCodexmateLibPl_2;
        *(_QWORD *)&v65[16] = 32;
        v66 = nullptr;
        *(_QWORD *)&v67 = aSrcPlatformPro_1;
        *((_QWORD *)&v67 + 1) = 23;
        *((_QWORD *)&v69 + 1) = 0x5B400000001LL;
        sub_1414D53A0(&v72, v65);
      }
      result = (__int128 *)v71;
      *(_OWORD *)(v71 + 80) = v64;
      result[4] = v63;
      v33 = v59;
      v34 = v60;
      v35 = v61;
      result[3] = v62;
      result[2] = v35;
      result[1] = v34;
      *result = v33;
      goto LABEL_48;
    }
    if ( v57 != -1 && v57 )
      sub_140001660(v58, v57, 1);
    v57 = -1;
    sub_141696800(0, 300000000);
    v18 = (_QWORD *)(v17 + 16);
    do
    {
      v19 = *(v18 - 1);
      if ( v19 )
        sub_140001660(*v18, v19, 1);
      v18 += 4;
      --v14;
    }
    while ( v14 );
    if ( (_QWORD)v55 )
      sub_140001660(v17, 32 * v55, 8);
  }
  sub_140EEDA50(v65);
  v24 = *(_QWORD *)v65;
  v25 = *(_QWORD *)&v65[8] + 32LL * *(_QWORD *)&v65[16];
  *(_QWORD *)v65 = *(_QWORD *)&v65[8];
  *(_QWORD *)&v65[16] = v24;
  v66 = (__int64 (__fastcall *)())v25;
  sub_14038F600((unsigned __int64 *)&v45, v65);
  v26 = v46;
  if ( (_QWORD)v46 )
  {
    v27 = *((_QWORD *)&v45 + 1);
    sub_140D1EE10((unsigned int)v65, DWORD2(v45), v46, (unsigned int)&unk_141A55FEA, 3);
    *(_QWORD *)&v60 = *(_QWORD *)&v65[16];
    v59 = *(_OWORD *)v65;
    *(_QWORD *)v65 = &v59;
    *(_QWORD *)&v65[8] = sub_1400015F0;
    sub_1416ABFD0(&v43, &unk_141A55FED, v65);
    if ( (_QWORD)v59 )
      sub_140001660(*((_QWORD *)&v59 + 1), v59, 1);
    v28 = v71;
    *(_QWORD *)(v71 + 24) = v44;
    *(_OWORD *)(v28 + 8) = v43;
    *(_QWORD *)v28 = 10;
    v29 = (_QWORD *)(v27 + 8);
    do
    {
      v30 = *(v29 - 1);
      if ( v30 )
        sub_140001660(*v29, v30, 1);
      v29 += 3;
      --v26;
    }
    while ( v26 );
  }
  else
  {
    *(_QWORD *)v71 = -1;
    v27 = *((_QWORD *)&v45 + 1);
  }
  result = (__int128 *)v45;
  if ( (_QWORD)v45 )
    result = (__int128 *)sub_140001660(v27, 24 * v45, 8);
  v17 = *((_QWORD *)&v55 + 1);
LABEL_47:
  if ( !v14 )
    goto LABEL_52;
LABEL_48:
  v39 = (_QWORD *)(v17 + 16);
  do
  {
    v40 = *(v39 - 1);
    if ( v40 )
      result = (__int128 *)sub_140001660(*v39, v40, 1);
    v39 += 4;
    --v14;
  }
  while ( v14 );
LABEL_52:
  if ( (_QWORD)v55 )
    result = (__int128 *)sub_140001660(v17, 32 * v55, 8);
LABEL_54:
  if ( v57 != -1 )
  {
    if ( v57 )
      return (__int128 *)sub_140001660(v58, v57, 1);
  }
  return result;
}
