// module: codexmate_lib/platform/single_instance
// addr: 0x140488f50
// name: request_existing_instance_activation_wit
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::platform::single_instance::request_existing_instance_activation_with_url | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall request_existing_instance_activation_wit(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 (__fastcall **v11)(); // rcx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __int64 (__fastcall **v17)(); // r14
  __int64 v18; // r15
  __int64 *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rdi
  void *v33; // rdx
  __int64 v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // rdx
  _QWORD v42[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  __int64 v44; // [rsp+40h] [rbp-40h]
  __int64 v45; // [rsp+48h] [rbp-38h]
  __int64 v46; // [rsp+58h] [rbp-28h] BYREF
  __int64 v47; // [rsp+60h] [rbp-20h]
  __int64 v48; // [rsp+68h] [rbp-18h]
  __int64 *v49; // [rsp+70h] [rbp-10h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+78h] [rbp-8h]
  __int64 v51; // [rsp+80h] [rbp+0h]
  __int64 v52; // [rsp+88h] [rbp+8h] BYREF
  __int64 v53; // [rsp+90h] [rbp+10h]
  __int64 v54; // [rsp+98h] [rbp+18h]
  HANDLE hObject; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v56; // [rsp+A8h] [rbp+28h]
  __int64 v57; // [rsp+B0h] [rbp+30h]
  _QWORD *v58; // [rsp+B8h] [rbp+38h] BYREF
  char (__fastcall *v59)(__int64 *, __int64 *); // [rsp+C0h] [rbp+40h]
  __int64 v60; // [rsp+C8h] [rbp+48h]
  char v61; // [rsp+DFh] [rbp+5Fh] BYREF
  __int64 *v62; // [rsp+E0h] [rbp+60h] BYREF
  __int64 (__fastcall *v63)(_QWORD, _QWORD); // [rsp+E8h] [rbp+68h]
  __int64 v64; // [rsp+F0h] [rbp+70h]
  unsigned __int64 v65; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v66; // [rsp+100h] [rbp+80h] BYREF
  __int64 v67; // [rsp+108h] [rbp+88h] BYREF
  _BYTE v68[17]; // [rsp+110h] [rbp+90h]
  __int64 v69; // [rsp+128h] [rbp+A8h]
  __int64 v70; // [rsp+130h] [rbp+B0h]

  v70 = -2;
  sub_140488E00(&v43);
  v5 = v45;
  v56 = v44;
  v6 = sub_1414740B0(v44, v45);
  if ( v6 )
  {
    LOBYTE(v49) = 1;
    v8 = sub_14147B9A0(&v49, v6, v7);
    if ( v8 )
    {
      v58 = (_QWORD *)v8;
      v66 = (__int64)&v58;
      v67 = (__int64)sub_141490720;
      sub_14149C0F0(&v49, &unk_1417575B4, &v66);
      sub_140018650(&v58);
      v9 = (__int64)v49;
      if ( v49 != (__int64 *)-1LL )
      {
        v5 = (__int64)v50;
        goto LABEL_68;
      }
    }
  }
  sub_141356270(&v58);
  v66 = 0;
  v67 = 1;
  *(_QWORD *)v68 = 0;
  v51 = 1610612768;
  v49 = &v66;
  v50 = &off_14175E8C8;
  if ( (unsigned __int8)sub_141356790(&v58, &v49) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_2,
      55,
      (unsigned int)&v61,
      (unsigned int)&unk_141758598,
      (__int64)&off_14175E980);
  v10 = (__int64 *)v66;
  v11 = (__int64 (__fastcall **)())v67;
  v12 = *(_QWORD *)v68;
  if ( a1 )
  {
    if ( a2 < 0 )
    {
      v64 = v67;
      v69 = v66;
      v13 = 0;
      goto LABEL_9;
    }
    if ( a2 )
    {
      v64 = v67;
      v69 = v66;
      nullsub_1(v67);
      v13 = 1;
      v14 = sub_140001650(a2, 1);
      if ( !v14 )
LABEL_9:
        sub_1416C2D4B(v13, a2);
      v2 = v14;
      sub_141684120(v14, a1, a2);
      v10 = (__int64 *)v69;
      v11 = (__int64 (__fastcall **)())v64;
    }
    else
    {
      v2 = 1;
      a2 = 0;
    }
  }
  else
  {
    a2 = -1;
  }
  v49 = v10;
  v50 = v11;
  v51 = v12;
  v52 = a2;
  v53 = v2;
  v54 = a2;
  nullsub_1(v11);
  v15 = (_BYTE *)sub_140001650(128, 1);
  if ( !v15 )
    sub_1416C2D4B(1, 128);
  v66 = 128;
  v67 = (__int64)v15;
  v62 = &v66;
  *v15 = 123;
  *(_QWORD *)v68 = 1;
  LOWORD(v58) = 512;
  v59 = (char (__fastcall *)(__int64 *, __int64 *))&v62;
  v17 = v50;
  v18 = v51;
  sub_140441880(&v62, v16, aToken_0, 5);
  v19 = v62;
  v20 = v62[2];
  if ( *v62 == v20 )
  {
    sub_141688D30((_DWORD)v62, v20, 1, 1, 1);
    v20 = v19[2];
  }
  *(_BYTE *)(v19[1] + v20) = 58;
  v21 = v20 + 1;
  v19[2] = v21;
  sub_140441880(&v62, v21, v17, v18);
  sub_14045AE20(&v58, aUrl_1, 3, &v52);
  if ( ((unsigned __int8)v58 & 1) == 0 && BYTE1(v58) )
  {
    v22 = *(_QWORD *)v59;
    v23 = *(_QWORD *)(*(_QWORD *)v59 + 16LL);
    if ( **(_QWORD **)v59 == v23 )
    {
      sub_141688D30(v22, v23, 1, 1, 1);
      v23 = *(_QWORD *)(v22 + 16);
    }
    *(_BYTE *)(*(_QWORD *)(v22 + 8) + v23) = 125;
    *(_QWORD *)(v22 + 16) = v23 + 1;
  }
  if ( v66 == -1 )
  {
    v62 = (__int64 *)v67;
    v58 = &v62;
    v59 = sub_14142D3F0;
    sub_14149C0F0(&v66, &unk_14175764C, &v58);
    v29 = *v62;
    v30 = *v62 == 1;
    v69 = (__int64)v62;
    if ( v30 )
    {
      sub_140018650(v62 + 1);
    }
    else if ( !v29 )
    {
      v31 = *(_QWORD *)(v69 + 16);
      if ( v31 )
        sub_140001660(*(_QWORD *)(v69 + 8), v31, 1);
    }
    sub_140001660(v69, 40, 8);
    v9 = v66;
    v5 = v67;
    v39 = v49;
    if ( v49 )
      goto LABEL_64;
    goto LABEL_65;
  }
  v57 = v67;
  v64 = v66;
  v24 = *(_QWORD *)v68;
  v25 = sub_1414742C0(v56, v5);
  if ( v25 )
  {
    sub_1414A3C90(&v66, v25, v26);
    v27 = &unk_14175965E;
    if ( !(_BYTE)v66 )
      v27 = (void *)v67;
    v28 = 23;
    if ( !(_BYTE)v66 )
      v28 = *(_QWORD *)v68;
  }
  else
  {
    v28 = 23;
    v27 = &unk_14175965E;
  }
  v42[0] = v27;
  v42[1] = v28;
  v66 = (__int64)v42;
  v67 = (__int64)sub_14041F680;
  *(_QWORD *)v68 = &v49;
  *(_QWORD *)&v68[8] = sub_1400015F0;
  sub_14149C0F0(&v46, &unk_141759675, &v66);
  v69 = v47;
  sub_141473E20((unsigned int)&v58, v56, v5, v47, v48);
  if ( v46 )
    sub_140001660(v69, v46, 1);
  LODWORD(v66) = 0;
  v67 = 0;
  *(_DWORD *)v68 = 7;
  *(_QWORD *)&v68[4] = 0;
  *(_QWORD *)&v68[9] = 16842753;
  v32 = v60;
  v69 = (__int64)v59;
  if ( sub_141481480(&v66, v59, v60) == 1 )
  {
    v65 = (unsigned __int64)v33;
    v62 = (__int64 *)&v65;
    v63 = sub_141490720;
    sub_14149C0F0(&v66, &unk_1417575DE, &v62);
    sub_140018650(&v65);
    goto LABEL_59;
  }
  hObject = v33;
  if ( !v24 )
    goto LABEL_55;
  v34 = v57;
  while ( 1 )
  {
    v66 = sub_141491C00(&hObject, v34, v24);
    v67 = v35;
    if ( v66 == 1 )
      break;
    if ( !v35 )
    {
      v35 = (unsigned __int64)&off_141785228;
LABEL_53:
      v65 = v35;
      v62 = (__int64 *)&v65;
      v63 = sub_141490720;
      sub_14149C0F0(&v66, &unk_141757603, &v62);
      sub_140018650(&v65);
      v9 = v66;
      v5 = v67;
      CloseHandle(hObject);
      v37 = v58;
      if ( v58 )
        goto LABEL_60;
      goto LABEL_61;
    }
    if ( v24 < v35 )
      sub_1416C32F0(v35, v24, v24, &off_141785290);
    v34 += v35;
    v24 -= v35;
LABEL_41:
    if ( !v24 )
      goto LABEL_55;
  }
  switch ( v35 & 3 )
  {
    case 0uLL:
      LOBYTE(v36) = *(_BYTE *)(v35 + 16);
      goto LABEL_50;
    case 1uLL:
      LOBYTE(v36) = *(_BYTE *)(v35 + 15);
      goto LABEL_50;
    case 2uLL:
      goto LABEL_52;
    case 3uLL:
      v36 = HIDWORD(v35);
LABEL_50:
      if ( (_BYTE)v36 == 35 )
      {
        sub_140018650(&v67);
        goto LABEL_41;
      }
LABEL_52:
      if ( v35 )
        goto LABEL_53;
LABEL_55:
      CloseHandle(hObject);
      v38 = sub_141486540(v69, v32, v56, v5);
      if ( v38 )
      {
        v65 = v38;
        v66 = sub_141485EF0(v69, v32);
        if ( v66 )
          sub_140018650(&v66);
        v62 = (__int64 *)&v65;
        v63 = sub_141490720;
        sub_14149C0F0(&v66, &unk_141757627, &v62);
        sub_140018650(&v65);
LABEL_59:
        v9 = v66;
        v5 = v67;
        v37 = v58;
        if ( v58 )
LABEL_60:
          sub_140001660(v69, v37, 1);
      }
      else
      {
        v9 = -1;
        v37 = v58;
        if ( v58 )
          goto LABEL_60;
      }
LABEL_61:
      if ( v64 )
        sub_140001660(v57, v64, 1);
      v39 = v49;
      if ( v49 )
LABEL_64:
        sub_140001660(v50, v39, 1);
LABEL_65:
      if ( (unsigned __int64)(v52 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
        sub_140001660(v53, v52, 1);
      if ( v9 == -1 )
      {
        LOBYTE(v5) = 1;
        v40 = v43;
        if ( v43 )
          goto LABEL_71;
      }
      else
      {
LABEL_68:
        if ( v9 )
          sub_140001660(v5, v9, 1);
        LODWORD(v5) = 0;
        v40 = v43;
        if ( v43 )
LABEL_71:
          sub_140001660(v44, v40, 1);
      }
      return (unsigned int)v5;
  }
}
