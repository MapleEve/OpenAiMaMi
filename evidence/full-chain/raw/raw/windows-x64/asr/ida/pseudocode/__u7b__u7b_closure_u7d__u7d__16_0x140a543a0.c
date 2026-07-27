// module: codexmate_lib/core/voice/asr
// addr: 0x140a543a0
// name: __u7b__u7b_closure_u7d__u7d__16
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::voice::asr::save_config::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__16(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  _BYTE *v27; // rax
  __int64 v28; // rax
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v32; // r15
  __int64 v33; // r13
  __int128 v34; // rax
  __int64 v35; // r8
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r15
  __int128 v42; // xmm0
  _QWORD v43[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h]
  __int64 v45; // [rsp+40h] [rbp-40h]
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  __int64 v48; // [rsp+60h] [rbp-20h]
  __int64 v49; // [rsp+68h] [rbp-18h]
  __int64 v50; // [rsp+70h] [rbp-10h]
  __int64 v51; // [rsp+78h] [rbp-8h]
  _QWORD v52[2]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v53; // [rsp+90h] [rbp+10h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+20h]
  __int128 v55; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v56; // [rsp+B8h] [rbp+38h]
  __int128 v57; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v58; // [rsp+D0h] [rbp+50h]
  __int128 v59; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v60; // [rsp+F0h] [rbp+70h]
  __int128 v61; // [rsp+100h] [rbp+80h] BYREF
  __int64 v62; // [rsp+110h] [rbp+90h]
  __int64 v63; // [rsp+118h] [rbp+98h]
  __int128 v64; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v65; // [rsp+130h] [rbp+B0h]
  __int128 v66; // [rsp+138h] [rbp+B8h] BYREF
  __int64 v67; // [rsp+148h] [rbp+C8h]
  __int128 v68; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v69; // [rsp+160h] [rbp+E0h]
  __int128 v70; // [rsp+168h] [rbp+E8h] BYREF
  __int128 v71; // [rsp+178h] [rbp+F8h]
  __int128 v72; // [rsp+188h] [rbp+108h]
  __int128 v73; // [rsp+198h] [rbp+118h] BYREF
  __int64 v74; // [rsp+1A8h] [rbp+128h]
  __int128 v75; // [rsp+1B0h] [rbp+130h] BYREF
  _BYTE v76[72]; // [rsp+1C0h] [rbp+140h]
  __int64 v77; // [rsp+208h] [rbp+188h]
  __int64 v78; // [rsp+210h] [rbp+190h]
  __int64 v79; // [rsp+218h] [rbp+198h]
  __int64 v80; // [rsp+220h] [rbp+1A0h]
  __int64 v81; // [rsp+228h] [rbp+1A8h]
  __int64 v82; // [rsp+230h] [rbp+1B0h]
  __int64 v83; // [rsp+238h] [rbp+1B8h]
  _QWORD *v84; // [rsp+240h] [rbp+1C0h]
  char v85; // [rsp+249h] [rbp+1C9h]
  char v86; // [rsp+24Ah] [rbp+1CAh]
  char v87; // [rsp+24Bh] [rbp+1CBh]
  char v88; // [rsp+24Ch] [rbp+1CCh]
  char v89; // [rsp+24Dh] [rbp+1CDh]
  char v90; // [rsp+24Eh] [rbp+1CEh]
  char v91; // [rsp+24Fh] [rbp+1CFh]
  __int64 v92; // [rsp+250h] [rbp+1D0h]

  v92 = -2;
  v3 = a2[1];
  v84 = a2;
  v4 = a2[2];
  v87 = 1;
  v86 = 1;
  v78 = v3;
  sub_140A56620(&v61, v3, v4);
  v5 = v62;
  v79 = *((_QWORD *)&v61 + 1);
  if ( v62 != 11
    || **((_QWORD **)&v61 + 1) ^ 0x657053656C707061LL | *(_QWORD *)(*((_QWORD *)&v61 + 1) + 3LL) ^ 0x686365657053656CLL )
  {
    v91 = 1;
    v90 = 1;
    sub_140A560E0(v43, *((_QWORD *)&v61 + 1), v62);
    v6 = v84[4];
    v7 = v84[5];
    v89 = 1;
    v88 = 1;
    v8 = sub_14033BC10(v6, v7);
    v11 = v9;
    if ( v9 < 0 )
    {
      v12 = 0;
      goto LABEL_5;
    }
    if ( v9 )
    {
      v13 = v8;
      nullsub_1(v10);
      v12 = 1;
      v14 = sub_140001650(v11, 1);
      if ( !v14 )
      {
LABEL_5:
        v89 = 1;
        v88 = 1;
        sub_1416C2D4B(v12, v11);
      }
      v15 = v14;
      sub_141684120(v14, v13, v11);
    }
    else
    {
      v15 = 1;
    }
    *(_QWORD *)&v73 = v11;
    *((_QWORD *)&v73 + 1) = v15;
    v74 = v11;
    v21 = v84;
    v22 = v47;
    v63 = v11;
    v85 = 1;
    sub_140A553D0(&v68, v84 + 6, v47, v48);
    v23 = v21 + 9;
    v24 = v50;
    sub_140A553D0(&v66, v23, v50, v51);
    if ( !v11 || !v69 || !v67 )
    {
      nullsub_1(v25);
      v29 = (void *)sub_140001650(48, 1);
      if ( !v29 )
        sub_1416C2D4B(1, 48);
      qmemcpy(v29, "ASR config requires API Key, model, and Base URL", 48);
      *(_QWORD *)(a1 + 8) = 9;
      *(_QWORD *)(a1 + 16) = 48;
      *(_QWORD *)(a1 + 24) = v29;
      *(_QWORD *)(a1 + 32) = 48;
      *(_QWORD *)a1 = -1;
LABEL_29:
      if ( (_QWORD)v66 )
        sub_140001660(*((_QWORD *)&v66 + 1), v66, 1);
      if ( (_QWORD)v68 )
        sub_140001660(*((_QWORD *)&v68 + 1), v68, 1);
      if ( (_QWORD)v73 )
        sub_140001660(*((_QWORD *)&v73 + 1), v73, 1);
      if ( v43[0] )
        sub_140001660(v43[1], v43[0], 1);
      if ( v44 )
        sub_140001660(v45, v44, 1);
      if ( v46 )
        sub_140001660(v22, v46, 1);
      if ( v49 )
        sub_140001660(v24, v49, 1);
      if ( (_QWORD)v61 )
        sub_140001660(v79, v61, 1);
      v30 = *v84;
      if ( *v84 )
LABEL_46:
        sub_140001660(v78, v30, 1);
LABEL_47:
      v19 = v84[3];
      if ( v19 )
      {
        v20 = v6;
        goto LABEL_49;
      }
      return a1;
    }
    sub_14149C500(&v64, &v73);
    sub_14149C500(&v70, &v68);
    sub_14149C500(&v75, &v66);
    v54 = v65;
    v53 = v64;
    v55 = v70;
    v56 = v71;
    v57 = v75;
    v58 = *(_QWORD *)v76;
    nullsub_1(v26);
    v27 = (_BYTE *)sub_140001650(128, 1);
    if ( !v27 )
      sub_1416C2D4B(1, 128);
    *(_QWORD *)&v75 = 128;
    *((_QWORD *)&v75 + 1) = v27;
    *(_QWORD *)&v64 = &v75;
    *v27 = 123;
    *(_QWORD *)v76 = 1;
    LOWORD(v70) = 256;
    *((_QWORD *)&v70 + 1) = &v64;
    v28 = sub_14045E240(&v70, aApikey_6, 6, &v53, v43[0]);
    if ( v28 )
      goto LABEL_52;
    if ( (_BYTE)v70 )
      goto LABEL_26;
    v28 = sub_14045E240(&v70, aModel_6, 5, &v55, v43[0]);
    if ( !v28 )
    {
      if ( (_BYTE)v70 )
      {
LABEL_26:
        v28 = sub_1416BF0E0();
        goto LABEL_52;
      }
      v28 = sub_14045E240(&v70, aBaseurl_2, 7, &v57, v43[0]);
      if ( !v28 )
      {
        if ( (v70 & 1) == 0 && BYTE1(v70) )
          sub_140301CD0(**((_QWORD **)&v70 + 1), asc_1417A47C9, 1);
        v82 = *((_QWORD *)&v75 + 1);
        v80 = v75;
        if ( (_QWORD)v75 != -1 )
        {
          v33 = *(_QWORD *)v76;
          keyring_entry((__int64)&v75, v79, v5);
          v34 = v75;
          v35 = *(_QWORD *)v76;
          if ( (_QWORD)v75 == -1 )
          {
            v81 = *((_QWORD *)&v75 + 1);
            v52[0] = *((_QWORD *)&v75 + 1);
            v83 = *(_QWORD *)v76;
            v52[1] = *(_QWORD *)v76;
            sub_140F84790(&v70, v52, v82, v33);
            if ( (_QWORD)v70 == -1 )
            {
              sub_14000AD50(v81, v83);
              *(_QWORD *)v76 = v62;
              v42 = v61;
              v75 = v61;
              *(_QWORD *)&v76[24] = v74;
              *(_OWORD *)&v76[8] = v73;
              *(_QWORD *)&v76[48] = v69;
              *(_OWORD *)&v76[32] = v68;
              v77 = v67;
              *(_OWORD *)&v76[56] = v66;
              *(_OWORD *)(a1 + 48) = v68;
              *(_OWORD *)a1 = v42;
              *(_QWORD *)(a1 + 32) = *(_QWORD *)&v76[16];
              *(_QWORD *)(a1 + 40) = *(_QWORD *)&v76[24];
              *(_OWORD *)(a1 + 16) = *(_OWORD *)v76;
              *(_QWORD *)(a1 + 80) = *(_QWORD *)&v76[64];
              *(_QWORD *)(a1 + 88) = v77;
              *(_OWORD *)(a1 + 64) = *(_OWORD *)&v76[48];
              *(_BYTE *)(a1 + 96) = 1;
              if ( v80 )
                sub_140001660(v82, v80, 1);
              sub_1402C3920(&v53);
              sub_1402C6460(v43);
              v30 = *v84;
              if ( *v84 )
                goto LABEL_46;
              goto LABEL_47;
            }
            *(_OWORD *)&v76[16] = v72;
            *(_OWORD *)v76 = v71;
            v75 = v70;
            *(_QWORD *)&v59 = &v75;
            *((_QWORD *)&v59 + 1) = sub_140F85190;
            sub_14149C0F0(&v64, &unk_1417A53A8, &v59);
            v59 = v64;
            v60 = v65;
            sub_1409833A0(&v75);
            *(_QWORD *)(a1 + 32) = v60;
            *(_OWORD *)(a1 + 16) = v59;
            *(_QWORD *)(a1 + 8) = 10;
            *(_QWORD *)a1 = -1;
            if ( *(_QWORD *)v83 )
              (*(void (__fastcall **)(__int64))v83)(v81);
            v40 = *(_QWORD *)(v83 + 8);
            v39 = v82;
            if ( v40 )
            {
              v41 = v82;
              sub_140001660(v81, v40, *(_QWORD *)(v83 + 16));
              v39 = v41;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 96) = v77;
            v36 = *(_OWORD *)&v76[8];
            v37 = *(_OWORD *)&v76[24];
            v38 = *(_OWORD *)&v76[40];
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v76[56];
            *(_OWORD *)(a1 + 64) = v38;
            *(_OWORD *)(a1 + 48) = v37;
            *(_OWORD *)(a1 + 32) = v36;
            *(_OWORD *)(a1 + 8) = v34;
            *(_QWORD *)(a1 + 24) = v35;
            *(_QWORD *)a1 = -1;
            v39 = v82;
          }
          if ( v80 )
            sub_140001660(v39, v80, 1);
          goto LABEL_55;
        }
        v32 = v82;
LABEL_54:
        *(_QWORD *)(a1 + 8) = 3;
        *(_QWORD *)(a1 + 16) = v32;
        *(_QWORD *)a1 = -1;
LABEL_55:
        if ( (_QWORD)v53 )
          sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
        if ( (_QWORD)v55 )
          sub_140001660(*((_QWORD *)&v55 + 1), v55, 1);
        if ( (_QWORD)v57 )
          sub_140001660(*((_QWORD *)&v57 + 1), v57, 1);
        goto LABEL_29;
      }
    }
LABEL_52:
    v32 = v28;
    if ( (_QWORD)v75 )
      sub_140001660(*((_QWORD *)&v75 + 1), v75, 1);
    goto LABEL_54;
  }
  v91 = 1;
  v90 = 1;
  load_saved_config(a1, aApplespeech, 11);
  if ( (_QWORD)v61 )
    sub_140001660(v79, v61, 1);
  v16 = v84;
  if ( *v84 )
    sub_140001660(v78, *v84, 1);
  v17 = v16[3];
  if ( v17 )
    sub_140001660(v16[4], v17, 1);
  v18 = v16[6];
  if ( v18 )
    sub_140001660(v16[7], v18, 1);
  v19 = v16[9];
  if ( v19 )
  {
    v20 = v16[10];
LABEL_49:
    sub_140001660(v20, v19, 1);
  }
  return a1;
}
