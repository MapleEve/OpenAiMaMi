// module: codexmate_lib/core/debug_bundle
// addr: 0x14072a670
// name: publish_debug_bundle
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::publish_debug_bundle | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall publish_debug_bundle(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _BYTE *v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rcx
  _BYTE *v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // r12
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm0
  _QWORD *result; // rax
  unsigned __int64 v26; // rcx
  __int128 v27; // xmm1
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 i; // rax
  __int64 v34; // rdx
  __int64 j; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-60h]
  __int64 v43; // [rsp+48h] [rbp-38h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h]
  __int128 v45; // [rsp+60h] [rbp-20h]
  _BYTE v46[24]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v47; // [rsp+88h] [rbp+8h]
  __int128 v48; // [rsp+98h] [rbp+18h]
  __int128 v49; // [rsp+A8h] [rbp+28h]
  __int128 v50; // [rsp+B8h] [rbp+38h]
  __int128 v51; // [rsp+C8h] [rbp+48h]
  _BYTE v52[136]; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 v53; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v54; // [rsp+168h] [rbp+E8h]
  __int64 v55; // [rsp+170h] [rbp+F0h]
  __int64 v56; // [rsp+178h] [rbp+F8h]
  __int128 v57; // [rsp+180h] [rbp+100h] BYREF
  __int128 v58; // [rsp+190h] [rbp+110h]
  __int128 v59; // [rsp+1A0h] [rbp+120h]
  __int128 v60; // [rsp+1B0h] [rbp+130h]
  __int128 v61; // [rsp+1C0h] [rbp+140h]
  _BYTE v62[88]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v63; // [rsp+228h] [rbp+1A8h]
  _BYTE v64[144]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v65; // [rsp+2C8h] [rbp+248h] BYREF
  __int128 v66; // [rsp+2D0h] [rbp+250h]
  volatile signed __int64 *v67; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v68; // [rsp+2E8h] [rbp+268h]
  __int128 v69; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v70; // [rsp+300h] [rbp+280h]
  __int128 v71; // [rsp+310h] [rbp+290h] BYREF
  __int64 v72; // [rsp+320h] [rbp+2A0h]
  unsigned __int64 v73; // [rsp+330h] [rbp+2B0h]
  __int64 v74; // [rsp+338h] [rbp+2B8h]
  _BYTE v75[24]; // [rsp+340h] [rbp+2C0h] BYREF
  _BYTE v76[24]; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+378h] [rbp+2F8h]
  char v78; // [rsp+38Eh] [rbp+30Eh] BYREF
  char v79; // [rsp+38Fh] [rbp+30Fh]
  __int64 v80; // [rsp+390h] [rbp+310h]

  v80 = -2;
  v74 = a1;
  *(_QWORD *)v46 = a4;
  *(_QWORD *)&v46[8] = a5;
  *(_QWORD *)&v46[16] = 0;
  v8 = v46;
  sub_140841A40(v62, v46);
  if ( !*(_QWORD *)v62 )
  {
    *(_QWORD *)&v76[16] = *(_QWORD *)&v62[24];
    *(_OWORD *)v76 = *(_OWORD *)&v62[8];
    *(_QWORD *)v75 = v76;
    *(_QWORD *)&v75[8] = sub_140FF2B70;
    sub_14149C0F0(v46, &unk_141788508, v75);
    v21 = *(_QWORD *)v46;
    *(_OWORD *)v75 = *(_OWORD *)&v46[8];
    v22 = 1;
    if ( (*(_QWORD *)v76 ^ 0x8000000000000000uLL) < 5 )
      v22 = *(_QWORD *)v76 ^ 0x8000000000000000uLL;
    if ( v22 == 1 )
    {
      if ( *(_QWORD *)v76 != -1 && *(_QWORD *)v76 )
        sub_140001660(*(_QWORD *)&v76[8], *(_QWORD *)v76, 1);
    }
    else if ( !v22 )
    {
      sub_1401DD260(*(_QWORD *)&v76[8]);
    }
    v57 = *(_OWORD *)v75;
    *(_QWORD *)&v58 = *(_QWORD *)&v75[16];
    goto LABEL_29;
  }
  v56 = a4;
  v55 = a2;
  v54 = a3;
  v65 = *(_QWORD *)v62;
  v66 = *(_OWORD *)&v62[8];
  v67 = *(volatile signed __int64 **)&v62[24];
  *(_QWORD *)&v69 = 0;
  v70 = 0;
  v73 = *(_QWORD *)(*(_QWORD *)&v62[24] + 80LL);
  v9 = 0;
  if ( v73 )
  {
    while ( 1 )
    {
      v53 = v9;
      sub_140841490((unsigned int)v62, (unsigned int)&v65, v9, 0, v42);
      v10 = *(_QWORD *)v62;
      if ( *(_QWORD *)v62 == -1 )
        break;
      v45 = *(_OWORD *)&v62[24];
      v51 = v63;
      v50 = *(_OWORD *)&v62[72];
      v49 = *(_OWORD *)&v62[56];
      v48 = *(_OWORD *)&v62[40];
      sub_141684120(v52, v64, 136);
      v12 = v8;
      if ( v10 == 2 )
        v12 = *(_BYTE **)&v62[8];
      ++v9;
      v47 = v45;
      *(_QWORD *)v46 = v10;
      *(_OWORD *)&v46[8] = *(_OWORD *)&v62[8];
      v13 = *((_QWORD *)v12 + 9);
      if ( v13 < 0 )
      {
        v16 = 0;
        goto LABEL_19;
      }
      if ( v13 )
      {
        v14 = v8;
        v15 = *((_QWORD *)v12 + 8);
        nullsub_1(v11);
        v16 = 1;
        v17 = sub_140001650(v13, 1);
        if ( !v17 )
        {
          v68 = v13;
LABEL_19:
          sub_1416C2D4B(v16, v68);
        }
        v18 = v17;
        sub_141684120(v17, v15, v13);
        v19 = v18;
        v8 = v14;
      }
      else
      {
        v19 = 1;
      }
      *(_QWORD *)v75 = v13;
      v68 = v19;
      *(_QWORD *)&v75[8] = v19;
      *(_QWORD *)&v75[16] = v13;
      v79 = 1;
      if ( (sub_14036D740(v8, &v78) & 1) != 0 )
      {
        *(_QWORD *)&v71 = v20;
        *(_QWORD *)v62 = v75;
        *(_QWORD *)&v62[8] = sub_1400015F0;
        *(_QWORD *)&v62[16] = &v71;
        *(_QWORD *)&v62[24] = sub_141490720;
        sub_14149C0F0(v76, &unk_141788529, v62);
        v21 = *(_QWORD *)v76;
        *(_OWORD *)v62 = *(_OWORD *)&v76[8];
        v79 = 1;
        sub_1401DD260(v71);
        v57 = *(_OWORD *)v62;
        v58 = *(_OWORD *)&v62[16];
        v59 = *(_OWORD *)&v62[32];
        v60 = *(_OWORD *)&v62[48];
        v61 = *(_OWORD *)&v62[64];
        if ( *(_QWORD *)v75 )
          sub_140001660(*(_QWORD *)&v75[8], *(_QWORD *)v75, 1);
        sub_1406CAC80(v46);
        goto LABEL_46;
      }
      *(_QWORD *)&v62[16] = *(_QWORD *)&v75[16];
      *(_OWORD *)v62 = *(_OWORD *)v75;
      v79 = 0;
      sub_140307390(&v69, v62);
      sub_1406CAC80(v8);
      if ( v9 >= v73 )
        goto LABEL_13;
    }
    v72 = *(_QWORD *)&v62[24];
    v71 = *(_OWORD *)&v62[8];
    *(_QWORD *)v76 = &v53;
    *(_QWORD *)&v76[8] = sub_1414AC520;
    *(_QWORD *)&v76[16] = &v71;
    v77 = sub_140FF2B70;
    sub_14149C0F0(v75, &unk_141788561, v76);
    v21 = *(_QWORD *)v75;
    *(_OWORD *)v76 = *(_OWORD *)&v75[8];
    v28 = 1;
    if ( ((unsigned __int64)v71 ^ 0x8000000000000000uLL) < 5 )
      v28 = v71 ^ 0x8000000000000000uLL;
    if ( v28 == 1 )
    {
      if ( (_QWORD)v71 != -1 && (_QWORD)v71 )
        sub_140001660(*((_QWORD *)&v71 + 1), v71, 1);
    }
    else if ( !v28 )
    {
      sub_1401DD260(*((_QWORD *)&v71 + 1));
    }
    v57 = *(_OWORD *)v76;
    goto LABEL_46;
  }
LABEL_13:
  *(_QWORD *)v62 = &off_14178A0E8;
  *(_QWORD *)&v62[8] = &unk_14178A168;
  *(_QWORD *)&v62[16] = &v69;
  sub_14031C450(v76, v62);
  if ( *(_QWORD *)&v76[16] )
  {
    v73 = *(_QWORD *)&v76[8];
    sub_1404408C0((unsigned int)v62, *(_DWORD *)&v76[8], *(_DWORD *)&v76[16], (unsigned int)&unk_141789F28, 2);
    *(_QWORD *)&v46[16] = *(_QWORD *)&v62[16];
    *(_OWORD *)v46 = *(_OWORD *)v62;
    *(_QWORD *)v62 = v46;
    *(_QWORD *)&v62[8] = sub_1400015F0;
    sub_14149C0F0(&v43, &unk_14178A168, v62);
    if ( *(_QWORD *)v46 )
      sub_140001660(*(_QWORD *)&v46[8], *(_QWORD *)v46, 1);
    v21 = v43;
    v57 = v44;
    if ( *(_QWORD *)v76 )
      sub_140001660(v73, 16LL * *(_QWORD *)v76, 8);
LABEL_46:
    if ( (_QWORD)v69 )
    {
      v31 = v70;
      *(_QWORD *)&v62[8] = 0;
      *(_OWORD *)&v62[16] = v69;
      *(_QWORD *)&v62[40] = 0;
      *(_OWORD *)&v62[48] = v69;
      v32 = 1;
    }
    else
    {
      v32 = 0;
      v31 = 0;
    }
    *(_QWORD *)v62 = v32;
    *(_QWORD *)&v62[32] = v32;
    *(_QWORD *)&v62[64] = v31;
    sub_140308850(v46, v62);
    for ( i = *(_QWORD *)v46; *(_QWORD *)v46; i = *(_QWORD *)v46 )
    {
      v34 = *(_QWORD *)(i + 24LL * *(_QWORD *)&v46[16] + 8);
      if ( v34 )
        sub_140001660(*(_QWORD *)(i + 24LL * *(_QWORD *)&v46[16] + 16), v34, 1);
      sub_140308850(v46, v62);
    }
    if ( !_InterlockedDecrement64(v67) )
      sub_140E82280(&v67);
LABEL_29:
    v23 = v74;
    *(_OWORD *)(v74 + 80) = v61;
    v24 = v57;
    v26 = *((_QWORD *)&v58 + 1);
    result = (_QWORD *)v58;
    v27 = v59;
    *(_OWORD *)(v23 + 64) = v60;
    *(_OWORD *)(v23 + 48) = v27;
    *(_OWORD *)(v23 + 32) = __PAIR128__(v26, (unsigned __int64)result);
    *(_OWORD *)(v23 + 16) = v24;
    *(_QWORD *)v23 = 10;
    *(_QWORD *)(v23 + 8) = v21;
    return result;
  }
  if ( *(_QWORD *)v76 )
    sub_140001660(*(_QWORD *)&v76[8], 16LL * *(_QWORD *)v76, 8);
  if ( (_QWORD)v69 )
  {
    v29 = v70;
    *(_QWORD *)&v62[8] = 0;
    *(_OWORD *)&v62[16] = v69;
    *(_QWORD *)&v62[40] = 0;
    *(_OWORD *)&v62[48] = v69;
    v30 = 1;
  }
  else
  {
    v30 = 0;
    v29 = 0;
  }
  *(_QWORD *)v62 = v30;
  *(_QWORD *)&v62[32] = v30;
  *(_QWORD *)&v62[64] = v29;
  sub_140308850(v46, v62);
  for ( j = *(_QWORD *)v46; *(_QWORD *)v46; j = *(_QWORD *)v46 )
  {
    v36 = *(_QWORD *)(j + 24LL * *(_QWORD *)&v46[16] + 8);
    if ( v36 )
      sub_140001660(*(_QWORD *)(j + 24LL * *(_QWORD *)&v46[16] + 16), v36, 1);
    sub_140308850(v46, v62);
  }
  if ( !_InterlockedDecrement64(v67) )
    sub_140E82280(&v67);
  v37 = v55;
  v38 = v54;
  v39 = sub_1408726C0(v55, v54, v56, a5);
  if ( v39 )
  {
    *(_QWORD *)v76 = v39;
    *(_QWORD *)&v57 = v37;
    *((_QWORD *)&v57 + 1) = v38;
    *(_QWORD *)v62 = &v57;
    *(_QWORD *)&v62[8] = sub_14148F3A0;
    *(_QWORD *)&v62[16] = v76;
    *(_QWORD *)&v62[24] = sub_141490720;
    sub_14149C0F0(v46, &unk_1417884E2, v62);
    v40 = v74;
    *(_QWORD *)(v74 + 24) = *(_QWORD *)&v46[16];
    *(_OWORD *)(v40 + 8) = *(_OWORD *)v46;
    result = (_QWORD *)sub_1401DD260(*(_QWORD *)v76);
LABEL_64:
    *(_QWORD *)v40 = 10;
    return result;
  }
  sub_141486710(v62, v37, v38);
  if ( *(_DWORD *)v62 == 2 )
  {
    result = *(_QWORD **)&v62[8];
    v41 = v74;
    *(_QWORD *)v74 = 2;
    *(_QWORD *)(v41 + 8) = result;
  }
  else
  {
    *(_QWORD *)&v57 = *(_QWORD *)&v62[56];
    if ( *(_QWORD *)&v62[56] != a5 )
    {
      *(_QWORD *)v46 = a5;
      *(_QWORD *)v62 = v46;
      *(_QWORD *)&v62[8] = sub_1414AC520;
      *(_QWORD *)&v62[16] = &v57;
      *(_QWORD *)&v62[24] = sub_1414AC520;
      v40 = v74;
      result = (_QWORD *)sub_14149C0F0(v74 + 8, &unk_141789F41, v62);
      goto LABEL_64;
    }
    result = (_QWORD *)v74;
    *(_QWORD *)(v74 + 8) = a5;
    *result = -1;
  }
  return result;
}
