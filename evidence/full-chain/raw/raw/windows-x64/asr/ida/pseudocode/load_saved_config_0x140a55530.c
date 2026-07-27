// module: codexmate_lib/core/voice/asr
// addr: 0x140a55530
// name: load_saved_config
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::voice::asr::load_saved_config | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load_saved_config(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64); // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // r8
  void (__fastcall **v31)(__int64); // r14
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r9
  bool v35; // al
  __int64 v36; // rdx
  __int128 v37; // [rsp+28h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-48h]
  _QWORD v39[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v40; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v41[40]; // [rsp+60h] [rbp-20h]
  __int128 v42; // [rsp+88h] [rbp+8h]
  __int128 v43; // [rsp+98h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+28h]
  __int128 v45; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+48h]
  __int64 v47; // [rsp+D0h] [rbp+50h]
  __int64 v48; // [rsp+D8h] [rbp+58h]
  __int64 v49; // [rsp+E0h] [rbp+60h]
  __int64 v50; // [rsp+E8h] [rbp+68h]
  __int128 v51; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v52; // [rsp+100h] [rbp+80h]
  __int128 v53; // [rsp+110h] [rbp+90h]
  __int64 v54; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v55; // [rsp+128h] [rbp+A8h]
  __int64 v56; // [rsp+138h] [rbp+B8h]
  _QWORD *v57; // [rsp+140h] [rbp+C0h]
  __int128 v58; // [rsp+150h] [rbp+D0h]
  __int64 v59; // [rsp+160h] [rbp+E0h]
  __int128 v60; // [rsp+168h] [rbp+E8h]
  __int64 v61; // [rsp+178h] [rbp+F8h]
  __int128 v62; // [rsp+180h] [rbp+100h] BYREF
  __int64 v63; // [rsp+190h] [rbp+110h]
  __int64 v64; // [rsp+198h] [rbp+118h]
  __int64 v65; // [rsp+1A0h] [rbp+120h]
  __int64 v66; // [rsp+1A8h] [rbp+128h]
  _QWORD *v67; // [rsp+1B0h] [rbp+130h]
  __int64 v68; // [rsp+1B8h] [rbp+138h]
  __int64 v69; // [rsp+1C0h] [rbp+140h]
  __int64 v70; // [rsp+1C8h] [rbp+148h]
  __int64 v71; // [rsp+1D0h] [rbp+150h]
  __int64 v72; // [rsp+1D8h] [rbp+158h]
  char v73; // [rsp+1E1h] [rbp+161h]
  char v74; // [rsp+1E2h] [rbp+162h]
  char v75; // [rsp+1E3h] [rbp+163h]
  char v76; // [rsp+1E4h] [rbp+164h]
  char v77; // [rsp+1E5h] [rbp+165h]
  char v78; // [rsp+1E6h] [rbp+166h]
  char v79; // [rsp+1E7h] [rbp+167h]
  __int64 v80; // [rsp+1E8h] [rbp+168h]

  v80 = -2;
  sub_140A56620(&v62, a2, a3);
  v4 = v63;
  v76 = 1;
  v67 = *((_QWORD **)&v62 + 1);
  sub_140A560E0(&v54, *((_QWORD *)&v62 + 1), v63);
  if ( v4 != 11 || *v67 ^ 0x657053656C707061LL | *(_QWORD *)((char *)v67 + 3) ^ 0x686365657053656CLL )
  {
    v78 = 1;
    v77 = 1;
    keyring_entry((__int64)&v40, (__int64)v67, v4);
    v5 = v40;
    v6 = *(_QWORD *)v41;
    if ( (_QWORD)v40 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v44;
      v7 = *(_OWORD *)&v41[8];
      v8 = *(_OWORD *)&v41[24];
      v9 = v42;
      *(_OWORD *)(a1 + 80) = v43;
      *(_OWORD *)(a1 + 64) = v9;
      *(_OWORD *)(a1 + 48) = v8;
      *(_OWORD *)(a1 + 32) = v7;
      *(_OWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 24) = v6;
      *(_QWORD *)a1 = -1;
      v10 = 1;
      v11 = v54;
      if ( !v54 )
        goto LABEL_6;
      goto LABEL_5;
    }
    v70 = *((_QWORD *)&v40 + 1);
    v39[0] = *((_QWORD *)&v40 + 1);
    v72 = *(_QWORD *)v41;
    v39[1] = *(_QWORD *)v41;
    v79 = 1;
    sub_140F846B0((__int64)&v51, v39);
    if ( (_QWORD)v51 != -1 )
    {
      if ( (_QWORD)v51 == 0x8000000000000002uLL )
      {
        *(_QWORD *)(a1 + 16) = v63;
        *(_OWORD *)a1 = v62;
        *(_OWORD *)(a1 + 48) = v58;
        *(_QWORD *)(a1 + 64) = v59;
        *(_QWORD *)(a1 + 88) = v61;
        *(_OWORD *)(a1 + 72) = v60;
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = 1;
        *(_QWORD *)(a1 + 40) = 0;
        *(_BYTE *)(a1 + 96) = 0;
        v79 = 0;
        sub_1409833A0(&v51);
        LODWORD(v14) = 0;
      }
      else
      {
        *(_OWORD *)&v41[16] = v53;
        *(_OWORD *)v41 = v52;
        v40 = v51;
        *(_QWORD *)&v45 = &v40;
        *((_QWORD *)&v45 + 1) = sub_140F85190;
        sub_14149C0F0(&v37, &unk_1417A90F4, &v45);
        *(_QWORD *)(a1 + 32) = v38;
        *(_OWORD *)(a1 + 16) = v37;
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)a1 = -1;
        v79 = 1;
        v14 = sub_1409833A0(&v40);
        LOBYTE(v14) = 1;
      }
      goto LABEL_29;
    }
    v68 = *((_QWORD *)&v51 + 1);
    v51 = v52;
    v52 = 0;
    v64 = v51;
    v53 = v51;
    sub_1408A82F0(&v40, &v51);
    v16 = *((_QWORD *)&v40 + 1);
    LODWORD(v14) = v40;
    if ( (_QWORD)v40 == -1 )
    {
      *(_QWORD *)(a1 + 8) = 3;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)a1 = -1;
      LOBYTE(v14) = 1;
      if ( v68 )
      {
        LODWORD(v71) = v14;
        sub_140001660(v64, v68, 1);
        v24 = *(void (__fastcall **)(__int64))v72;
        if ( !*(_QWORD *)v72 )
        {
LABEL_31:
          v25 = *(_QWORD *)(v72 + 8);
          if ( v25 )
            sub_140001660(v70, v25, *(_QWORD *)(v72 + 16));
          v10 = v71;
          v11 = v54;
          if ( !v54 )
          {
LABEL_6:
            if ( v56 )
              sub_140001660(v57, v56, 1);
            if ( v10 )
            {
              if ( (_QWORD)v58 )
                sub_140001660(*((_QWORD *)&v58 + 1), v58, 1);
              if ( (_QWORD)v60 )
                sub_140001660(*((_QWORD *)&v60 + 1), v60, 1);
              v12 = v62;
              if ( (_QWORD)v62 )
              {
                v13 = v67;
LABEL_22:
                sub_140001660(v13, v12, 1);
                return a1;
              }
            }
            return a1;
          }
LABEL_5:
          sub_140001660(v55, v11, 1);
          goto LABEL_6;
        }
LABEL_30:
        v24(v70);
        goto LABEL_31;
      }
LABEL_29:
      LODWORD(v71) = v14;
      v24 = *(void (__fastcall **)(__int64))v72;
      if ( !*(_QWORD *)v72 )
        goto LABEL_31;
      goto LABEL_30;
    }
    v65 = v40;
    v71 = *(_QWORD *)&v41[8];
    v17 = *(_QWORD *)&v41[24];
    v48 = *(_QWORD *)&v41[16];
    v49 = *(_QWORD *)&v41[32];
    v18 = *((_QWORD *)&v42 + 1);
    v47 = v42;
    v75 = 1;
    v74 = 0;
    v50 = *((_QWORD *)&v40 + 1);
    v19 = sub_14033BC10(*((_QWORD *)&v40 + 1), *(_QWORD *)v41);
    v22 = v20;
    if ( v20 < 0 )
    {
      v23 = 0;
      goto LABEL_27;
    }
    v66 = v20;
    if ( v20 )
    {
      v26 = v19;
      nullsub_1(v21);
      v23 = 1;
      v27 = sub_140001650(v22, 1);
      if ( !v27 )
      {
LABEL_27:
        v75 = 1;
        v74 = 0;
        sub_1416C2D4B(v23, v22);
      }
      v69 = v27;
      sub_141684120(v27, v26, v22);
    }
    else
    {
      v69 = 1;
    }
    *(_QWORD *)&v40 = v71;
    *((_QWORD *)&v40 + 1) = v48;
    *(_QWORD *)v41 = v17;
    v28 = *((_QWORD *)&v58 + 1);
    v73 = 1;
    sub_140A553D0(&v45, &v40, *((_QWORD *)&v58 + 1), v59);
    *(_QWORD *)&v40 = v49;
    *((_QWORD *)&v40 + 1) = v47;
    *(_QWORD *)v41 = v18;
    v29 = *((_QWORD **)&v60 + 1);
    sub_140A553D0(&v51, &v40, *((_QWORD *)&v60 + 1), v61);
    v30 = v66;
    if ( v66 )
    {
      v31 = (void (__fastcall **)(__int64))v72;
      v32 = v68;
      v33 = v65;
      v34 = v69;
      if ( v46 )
        v35 = (_QWORD)v52 != 0;
      else
        v35 = 0;
    }
    else
    {
      v35 = 0;
      v31 = (void (__fastcall **)(__int64))v72;
      v32 = v68;
      v33 = v65;
      v34 = v69;
    }
    *(_QWORD *)(a1 + 64) = v46;
    *(_OWORD *)(a1 + 48) = v45;
    *(_OWORD *)a1 = v62;
    *(_QWORD *)(a1 + 16) = v63;
    *(_OWORD *)(a1 + 72) = v51;
    *(_QWORD *)(a1 + 88) = v52;
    *(_QWORD *)(a1 + 24) = v30;
    *(_QWORD *)(a1 + 32) = v34;
    *(_QWORD *)(a1 + 40) = v30;
    *(_BYTE *)(a1 + 96) = v35;
    if ( v33 )
      sub_140001660(v50, v33, 1);
    if ( v32 )
      sub_140001660(v64, v32, 1);
    if ( *v31 )
      (*v31)(v70);
    v36 = *(_QWORD *)(v72 + 8);
    if ( v36 )
      sub_140001660(v70, v36, *(_QWORD *)(v72 + 16));
    if ( v54 )
      sub_140001660(v55, v54, 1);
    if ( v56 )
      sub_140001660(v57, v56, 1);
    if ( (_QWORD)v58 )
      sub_140001660(v28, v58, 1);
    v12 = v60;
    if ( (_QWORD)v60 )
    {
      v13 = v29;
      goto LABEL_22;
    }
    return a1;
  }
  *(_QWORD *)(a1 + 16) = v63;
  *(_OWORD *)a1 = v62;
  *(_OWORD *)(a1 + 48) = v58;
  *(_QWORD *)(a1 + 64) = v59;
  *(_OWORD *)(a1 + 72) = v60;
  *(_QWORD *)(a1 + 88) = v61;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 96) = 1;
  if ( v54 )
    sub_140001660(v55, v54, 1);
  v12 = v56;
  if ( v56 )
  {
    v13 = v57;
    goto LABEL_22;
  }
  return a1;
}
