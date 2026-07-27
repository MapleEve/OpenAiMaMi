// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140aec4a0
// name: endpoint_for_protocol
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::voice::aliyun_asr::endpoint_for_protocol | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall endpoint_for_protocol(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r14
  _OWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  char v19; // bl
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r15
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int128 v40; // xmm0
  _QWORD v41[2]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v42[24]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v43; // [rsp+88h] [rbp+8h]
  __int128 v44; // [rsp+90h] [rbp+10h]
  __int128 v45; // [rsp+A0h] [rbp+20h]
  __int128 v46; // [rsp+B0h] [rbp+30h]
  __int64 v47; // [rsp+C0h] [rbp+40h]
  __int128 *v48; // [rsp+C8h] [rbp+48h] BYREF
  __int128 v49; // [rsp+D0h] [rbp+50h]
  __int64 v50; // [rsp+E0h] [rbp+60h]
  __int128 v51; // [rsp+E8h] [rbp+68h]
  __int128 v52; // [rsp+F8h] [rbp+78h]
  __int128 v53; // [rsp+108h] [rbp+88h]
  __int64 v54; // [rsp+118h] [rbp+98h]
  __int64 v55; // [rsp+120h] [rbp+A0h]
  __int64 v56; // [rsp+128h] [rbp+A8h]
  __int128 v57; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v58; // [rsp+140h] [rbp+C0h]
  char v59; // [rsp+156h] [rbp+D6h] BYREF
  char v60; // [rsp+157h] [rbp+D7h] BYREF
  __int64 v61; // [rsp+158h] [rbp+D8h]

  v61 = -2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = sub_14033BC10(v6, v7);
  if ( v9 )
  {
    if ( a3 != 1 )
    {
      v17 = v9;
      if ( v9 >= 0 )
      {
        v23 = v8;
        nullsub_1(v10);
        v18 = 1;
        v24 = sub_140001650(v17, 1);
        if ( v24 )
        {
          v25 = v24;
          sub_141684120(v24, v23, v17);
          a1[1] = v17;
          a1[2] = v25;
          a1[3] = v17;
          *a1 = 0;
          return a1;
        }
      }
      else
      {
        v18 = 0;
      }
      sub_1416C2D4B(v18, v17);
    }
    v11 = sub_14033BC10(v6, v7);
    v13 = v12;
    if ( (unsigned __int8)sub_140B12070(aRealtime, 9, v11, v12) )
    {
      if ( v13 < 0 )
      {
        v15 = 0;
        goto LABEL_6;
      }
      if ( v13 )
      {
        nullsub_1(v14);
        v15 = 1;
        v27 = sub_140001650(v13, 1);
        if ( !v27 )
LABEL_6:
          sub_1416C2D4B(v15, v13);
        v28 = v11;
        v29 = v27;
        sub_141684120(v27, v28, v13);
        v22 = v29;
      }
      else
      {
        v22 = 1;
        v13 = 0;
      }
    }
    else
    {
      v19 = sub_140B12070(aDashscopeIntlA, 27, v11, v13);
      nullsub_1(v20);
      if ( v19 )
      {
        v13 = 52;
        v21 = (void *)sub_140001650(52, 1);
        if ( !v21 )
          sub_1416C2D4B(1, 52);
        v22 = (__int64)v21;
        qmemcpy(v21, "wss://dashscope-intl.aliyuncs.com/api-ws/v1/realtime", 52);
      }
      else
      {
        v13 = 47;
        v26 = (void *)sub_140001650(47, 1);
        if ( !v26 )
          sub_1416C2D4B(1, 47);
        v22 = (__int64)v26;
        qmemcpy(v26, "wss://dashscope.aliyuncs.com/api-ws/v1/realtime", 47);
      }
    }
    *(_QWORD *)&v44 = 0;
    *(_QWORD *)v42 = 0;
    *(_QWORD *)&v42[16] = 0;
    v56 = v22;
    v55 = v13;
    sub_141447EC0(&v48, v42, v22, v13);
    if ( v48 == (__int128 *)-1LL )
    {
      v60 = v49;
      v41[0] = &v60;
      v41[1] = sub_141454EB0;
      sub_14149C0F0(v42, &unk_1417AE91F, v41);
      v40 = *(_OWORD *)v42;
      a1[3] = *(_QWORD *)&v42[16];
      *(_OWORD *)(a1 + 1) = v40;
      *a1 = 1;
      v37 = v55;
      v38 = v56;
      if ( !v55 )
        return a1;
      goto LABEL_38;
    }
    v58 = v50;
    v44 = v51;
    v45 = v52;
    v46 = v53;
    v47 = v54;
    v43 = v50;
    *(_OWORD *)&v42[8] = v49;
    *(_QWORD *)v42 = v48;
    sub_141449F40(&v48, v42);
    if ( v48 == (__int128 *)-2LL )
      sub_1416C3000(aUrlFormUrlenco, 41, &off_1417563F8);
    v30 = sub_14144C670(&v48);
    v31 = *(_QWORD *)(v30 + 16);
    if ( (unsigned __int64)v51 <= v31 )
    {
      if ( (unsigned __int64)v51 < v31 && (_QWORD)v51 != 0 && *(char *)(*(_QWORD *)(v30 + 8) + v51) <= -65 )
        sub_1416C32A0("assertion failed: self.is_char_boundary(new_len)", 48, &off_141758908);
      *(_QWORD *)(v30 + 16) = v51;
    }
    v32 = sub_14033BC10(a2[7], a2[8]);
    if ( v48 == (__int128 *)-2LL )
      sub_1416C3000(aUrlFormUrlenco, 41, &off_1417563F8);
    v34 = v32;
    v35 = v33;
    v36 = (_QWORD *)sub_14144C670(&v48);
    sub_141464F30(v36, v51, SDWORD2(v51), v52, (__int64)aModel_7, 5, v34, v35);
    if ( v48 != (__int128 *)-2LL )
    {
      sub_14144C6C0(&v48);
      if ( v48 != (__int128 *)-1LL )
      {
        if ( v48 )
          sub_140001660(v49, v48, 1);
      }
    }
    *(_QWORD *)&v57 = 0;
    *((_QWORD *)&v57 + 1) = 1;
    v58 = 0;
    *((_QWORD *)&v49 + 1) = 1610612768;
    v48 = &v57;
    *(_QWORD *)&v49 = &off_1417B1268;
    if ( (unsigned __int8)sub_1414ACAB0(*(_QWORD *)&v42[8], *(_QWORD *)&v42[16], &v48) )
      sub_1416C3060(
        (unsigned int)aADisplayImplem_9,
        55,
        (unsigned int)&v59,
        (unsigned int)&unk_1417AEA70,
        (__int64)&off_1417B1320);
    a1[3] = v58;
    *(_OWORD *)(a1 + 1) = v57;
    *a1 = 0;
    if ( *(_QWORD *)v42 )
      sub_140001660(*(_QWORD *)&v42[8], *(_QWORD *)v42, 1);
    v37 = v55;
    v38 = v56;
    if ( v55 )
LABEL_38:
      sub_140001660(v38, v37, 1);
  }
  else
  {
    nullsub_1(v10);
    v16 = (_OWORD *)sub_140001650(25, 1);
    if ( !v16 )
      sub_1416C2D4B(1, 25);
    *(_OWORD *)((char *)v16 + 9) = *(__int128 *)((char *)&xmmword_1417B0A96 + 9);
    *v16 = xmmword_1417B0A96;
    a1[1] = 25;
    a1[2] = v16;
    a1[3] = 25;
    *a1 = 1;
  }
  return a1;
}
