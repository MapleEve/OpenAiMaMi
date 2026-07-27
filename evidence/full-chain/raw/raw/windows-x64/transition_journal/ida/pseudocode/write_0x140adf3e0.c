// module: codexmate_lib/core/relay/transition_journal
// addr: 0x140adf3e0
// name: write
// win 1.2.3 | = mac codexmate_lib::core::relay::transition_journal::write | 跨平台字符串签名匹配(名↔函数一致)
// local variable allocation has failed, the output may be wrong!
int __cdecl write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  __int64 v3; // r9
  __int64 v6; // rsi
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  bool v16; // zf
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // rax
  _BYTE *v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rsi
  __int64 v27; // rdi
  __int128 *v28; // rdi
  const char *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // [rsp+38h] [rbp-48h]
  __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+48h] [rbp-38h]
  __int64 v41; // [rsp+50h] [rbp-30h]
  __int64 v42; // [rsp+58h] [rbp-28h] BYREF
  __int64 v43; // [rsp+60h] [rbp-20h]
  __int64 v44; // [rsp+68h] [rbp-18h]
  unsigned __int64 v45; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-8h] BYREF
  char v47; // [rsp+80h] [rbp+0h] BYREF
  char v48[7]; // [rsp+81h] [rbp+1h] BYREF
  __int128 *v49; // [rsp+88h] [rbp+8h] BYREF
  const char *v50; // [rsp+90h] [rbp+10h]
  __int64 v51; // [rsp+98h] [rbp+18h]
  __int64 v52; // [rsp+A0h] [rbp+20h]
  char v53; // [rsp+A8h] [rbp+28h]
  __int128 v54; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v55; // [rsp+C0h] [rbp+40h]
  __int64 v56; // [rsp+D0h] [rbp+50h] BYREF
  const char *v57; // [rsp+D8h] [rbp+58h]
  __int64 v58; // [rsp+E0h] [rbp+60h]
  __int128 v59; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v60; // [rsp+F8h] [rbp+78h]
  _QWORD *v61; // [rsp+100h] [rbp+80h]
  __int64 v62; // [rsp+108h] [rbp+88h]
  __int16 v63; // [rsp+110h] [rbp+90h] BYREF
  __int128 **v64; // [rsp+118h] [rbp+98h]
  __int64 v65; // [rsp+120h] [rbp+A0h]
  __int64 v66; // [rsp+128h] [rbp+A8h]
  __int64 v67; // [rsp+130h] [rbp+B0h]
  __int64 v68; // [rsp+1A0h] [rbp+120h]
  __int64 v69; // [rsp+1A8h] [rbp+128h]
  __int64 v70; // [rsp+1B0h] [rbp+130h]

  v67 = -2;
  v66 = v3;
  v6 = *(_QWORD *)&FileHandle;
  sub_140FFA6E0(&v39);
  v7 = ((int)v39 >> 13) - 1;
  v8 = 0;
  if ( (int)v39 >> 13 <= 0 )
  {
    v9 = (1 - ((int)v39 >> 13)) / 0x190u + 1;
    v7 += 400 * v9;
    v8 = -146097 * v9;
  }
  v10 = 1000
      * (HIDWORD(v39)
       + 86400LL
       * (int)(((v7 / 100) >> 2) + ((1461 * v7) >> 2) + v8 + (((unsigned int)v39 >> 4) & 0x1FF) - v7 / 100 - 719163))
      + (unsigned int)v40 / 0xF4240uLL;
  sub_140ADEEC0(&v39, Buf);
  if ( v39 != -1 )
  {
    v11 = v40;
    v12 = v42;
    v13 = v43;
    if ( v47 == (_BYTE)MaxCharCount )
    {
      v14 = v45;
      if ( v39 )
        sub_140001660(v40, v39, 1);
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        sub_140001660(v13, v12, 1);
      v15 = v68;
      v16 = v68 == 0;
      if ( v68 < 0 )
        goto LABEL_10;
      goto LABEL_17;
    }
    if ( v39 )
      sub_140001660(v40, v39, 1);
    if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v13, v12, 1);
  }
  v14 = v10;
  v15 = v68;
  v16 = v68 == 0;
  if ( v68 < 0 )
  {
LABEL_10:
    v17 = 0;
    goto LABEL_11;
  }
LABEL_17:
  v61 = (_QWORD *)v6;
  if ( v16 )
  {
    v58 = 1;
    v19 = v70;
    v20 = v69;
    if ( v69 )
    {
LABEL_20:
      if ( v19 < 0 )
      {
        v21 = 0;
        goto LABEL_22;
      }
      if ( v19 )
      {
        nullsub_1(v11);
        v21 = 1;
        v22 = sub_140001650(v19, 1);
        if ( !v22 )
LABEL_22:
          sub_1416C2D4B(v21, v19);
        v6 = v22;
        v20 = v69;
        sub_141684120(v22, v69, v19);
      }
      else
      {
        v6 = 1;
        v19 = 0;
      }
      goto LABEL_29;
    }
  }
  else
  {
    nullsub_1(v11);
    v17 = 1;
    v18 = sub_140001650(v15, 1);
    if ( !v18 )
LABEL_11:
      sub_1416C2D4B(v17, v15);
    v58 = v18;
    sub_141684120(v18, v66, v15);
    v19 = v70;
    v20 = v69;
    if ( v69 )
      goto LABEL_20;
  }
  v19 = -1;
LABEL_29:
  v48[0] = 1;
  v47 = MaxCharCount;
  v39 = v68;
  v40 = v58;
  v41 = v68;
  v45 = v14;
  v46 = v10;
  v42 = v19;
  v43 = v6;
  v38 = v19;
  v44 = v19;
  nullsub_1(v58);
  v23 = (_BYTE *)sub_140001650(128, 1);
  if ( !v23 )
    sub_1416C2D4B(1, 128);
  v24 = v6;
  *(_QWORD *)&v59 = 128;
  *((_QWORD *)&v59 + 1) = v23;
  v49 = &v59;
  v50 = asc_1417ABA68;
  v51 = 2;
  v52 = 1;
  v53 = 0;
  *v23 = 123;
  v60 = 1;
  v63 = 256;
  v64 = &v49;
  v25 = sub_140456140(&v63, aSchemaversion_5, 13, v48);
  v26 = v61;
  v27 = v25;
  if ( v25 )
    goto LABEL_34;
  if ( (_BYTE)v63 )
    goto LABEL_32;
  v27 = sub_140454D40(&v63, aTarget_1, 6, &v47);
  if ( v27 )
    goto LABEL_34;
  if ( (_BYTE)v63 )
    goto LABEL_32;
  v27 = sub_140452760(&v63, aPhase_0, 5, &v39);
  if ( v27 )
    goto LABEL_34;
  if ( (_BYTE)v63 )
    goto LABEL_32;
  v27 = sub_140456E50(&v63, aStartedatms_0, 11, &v45);
  if ( v27 )
    goto LABEL_34;
  if ( (_BYTE)v63 )
    goto LABEL_32;
  v27 = sub_140456E50(&v63, aUpdatedatms_0, 11, &v46);
  if ( v27 )
    goto LABEL_34;
  if ( (_BYTE)v63 )
  {
LABEL_32:
    v27 = sub_1416BF0E0();
    goto LABEL_34;
  }
  v27 = sub_1404504B0(&v63, aReason_0, 6, &v42);
  if ( v27 )
  {
LABEL_34:
    if ( (_QWORD)v59 )
      sub_140001660(*((_QWORD *)&v59 + 1), v59, 1);
    goto LABEL_36;
  }
  sub_1407BB0F0(&v63);
  v62 = *((_QWORD *)&v59 + 1);
  v65 = v59;
  if ( (_QWORD)v59 == -1 )
  {
    v26 = v61;
    v27 = v62;
LABEL_36:
    *(_QWORD *)&v54 = v27;
    *(_QWORD *)&v59 = &v54;
    *((_QWORD *)&v59 + 1) = sub_14142D3F0;
    sub_14149C0F0(&v49, &unk_1417AE84E, &v59);
    v28 = v49;
    v29 = v50;
    v30 = v51;
    v31 = *(_QWORD *)v54;
    v16 = *(_QWORD *)v54 == 1;
    v66 = v54;
    if ( v16 )
    {
      sub_140018650(v54 + 8);
    }
    else if ( !v31 )
    {
      v32 = *(_QWORD *)(v66 + 16);
      if ( v32 )
        sub_140001660(*(_QWORD *)(v66 + 8), v32, 1);
    }
    sub_140001660(v66, 40, 8);
    *v26 = 10;
    v26[1] = v28;
    v26[2] = v29;
    v26[3] = v30;
    goto LABEL_42;
  }
  v34 = v60;
  v26 = *((_QWORD **)Buf + 97);
  v35 = *((_QWORD *)Buf + 98);
  sub_141473FA0((unsigned int)&v49, (_DWORD)v26, v35, (unsigned int)&unk_1417AF7EA, 30);
  v57 = v50;
  v36 = sub_1408726C0((__int64)v50, v51, v62, v34);
  if ( v36 )
  {
    v56 = v36;
    *(_QWORD *)&v54 = &v56;
    *((_QWORD *)&v54 + 1) = sub_141490720;
    sub_14149C0F0(&v59, &unk_1417AE87D, &v54);
    v54 = v59;
    v55 = v60;
    sub_140018650(&v56);
    v37 = v61;
    v61[3] = v55;
    *(_OWORD *)(v37 + 1) = v54;
    *v37 = 10;
    if ( v49 )
      sub_140001660(v57, v49, 1);
    LODWORD(v26) = (_DWORD)v61;
    if ( !v65 )
      goto LABEL_42;
LABEL_65:
    sub_140001660(v62, v65, 1);
    goto LABEL_42;
  }
  if ( v49 )
    sub_140001660(v57, v49, 1);
  sub_140ADD7A0((_DWORD)v26, v35, MaxCharCount, v66, v68, v20, v70);
  LODWORD(v26) = (_DWORD)v61;
  *v61 = -1;
  if ( v65 )
    goto LABEL_65;
LABEL_42:
  if ( v68 )
    sub_140001660(v58, v68, 1);
  if ( v38 > 0 )
    sub_140001660(v24, v38, 1);
  return (int)v26;
}