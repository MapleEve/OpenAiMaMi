// module: codexmate_lib/core/repository
// addr: 0x14039a510
// name: update_auto_switch_config
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::update_auto_switch_config | 跨平台字符串签名匹配(名↔函数一致)
int __fastcall update_auto_switch_config(
        __int64 a1,
        _QWORD *a2,
        char a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // r13
  int v21; // ecx
  int v22; // edx
  unsigned int v23; // r14d
  __int64 v24; // r9
  int v25; // r12d
  unsigned __int8 v26; // bl
  __int64 v27; // r8
  char v28; // r15
  __int64 v29; // rdx
  int v30; // r13d
  int v31; // edx
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // r8
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rcx
  char v41; // di
  __int64 v42; // rdx
  void *v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm2
  __int128 v47; // xmm1
  __int128 v48; // xmm2
  __int128 v49; // xmm3
  __int128 v51; // [rsp+20h] [rbp-60h] BYREF
  __int64 v52; // [rsp+30h] [rbp-50h]
  __int128 v53; // [rsp+38h] [rbp-48h] BYREF
  __int64 v54; // [rsp+48h] [rbp-38h]
  __int128 v55; // [rsp+50h] [rbp-30h] BYREF
  __int64 v56; // [rsp+60h] [rbp-20h]
  __int128 v57; // [rsp+68h] [rbp-18h] BYREF
  __int64 v58; // [rsp+78h] [rbp-8h]
  __int128 v59; // [rsp+80h] [rbp+0h] BYREF
  __int64 v60; // [rsp+90h] [rbp+10h]
  __int64 v61; // [rsp+98h] [rbp+18h]
  _OWORD v62[3]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v63; // [rsp+D0h] [rbp+50h]
  __int128 v64; // [rsp+E0h] [rbp+60h]
  __int64 v65; // [rsp+F0h] [rbp+70h]
  __int128 *v66; // [rsp+100h] [rbp+80h] BYREF
  __int64 (__fastcall *v67)(_QWORD, _QWORD); // [rsp+108h] [rbp+88h]
  _BYTE *v68; // [rsp+110h] [rbp+90h]
  __int64 (__fastcall *v69)(_QWORD, _QWORD); // [rsp+118h] [rbp+98h]
  __int128 v70; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v71; // [rsp+130h] [rbp+B0h]
  __int128 v72; // [rsp+150h] [rbp+D0h]
  __int128 v73; // [rsp+160h] [rbp+E0h]
  __int128 v74; // [rsp+170h] [rbp+F0h]
  _BYTE v75[48]; // [rsp+188h] [rbp+108h] BYREF
  __int128 v76; // [rsp+1B8h] [rbp+138h]
  __int128 v77; // [rsp+1C8h] [rbp+148h]
  __int128 v78; // [rsp+1D8h] [rbp+158h]
  unsigned int v79; // [rsp+1ECh] [rbp+16Ch]
  __int64 v80; // [rsp+1F0h] [rbp+170h] BYREF
  _DWORD v81[2]; // [rsp+1F8h] [rbp+178h]
  _BYTE v82[96]; // [rsp+200h] [rbp+180h] BYREF
  __int128 v83; // [rsp+260h] [rbp+1E0h]
  __int64 v84; // [rsp+270h] [rbp+1F0h]
  __int128 v85; // [rsp+280h] [rbp+200h] BYREF
  __int128 v86; // [rsp+290h] [rbp+210h]
  __int128 v87; // [rsp+2A0h] [rbp+220h]
  __int128 v88; // [rsp+2B0h] [rbp+230h]
  __int128 v89; // [rsp+2C0h] [rbp+240h]
  __int128 v90; // [rsp+2D0h] [rbp+250h]
  HANDLE hObject; // [rsp+2E8h] [rbp+268h]
  void *v92; // [rsp+2F0h] [rbp+270h]
  char v93; // [rsp+2FFh] [rbp+27Fh]
  __int64 v94; // [rsp+300h] [rbp+280h]

  v94 = -2;
  sub_1403885B0(v82, a2[33], a2[34]);
  v12 = *(_QWORD *)&v82[8];
  v11 = *(_QWORD *)v82;
  if ( *(_QWORD *)v82 == -1 )
  {
    hObject = *(HANDLE *)&v82[8];
    v80 = *(_QWORD *)&v82[8];
    sub_14039C370((__int64)v82, a2[37], a2[38]);
    v16 = *(_QWORD *)v82;
    v85 = *(_OWORD *)&v82[8];
    v86 = *(_OWORD *)&v82[24];
    v87 = *(_OWORD *)&v82[40];
    v88 = *(_OWORD *)&v82[56];
    v89 = *(_OWORD *)&v82[72];
    *(_QWORD *)&v90 = *(_QWORD *)&v82[88];
    if ( *(_QWORD *)v82 != -1 )
    {
      *(_QWORD *)(a1 + 96) = v90;
      *(_OWORD *)(a1 + 80) = v89;
      v17 = v85;
      v18 = v86;
      v19 = v87;
      *(_OWORD *)(a1 + 64) = v88;
      *(_OWORD *)(a1 + 48) = v19;
      *(_OWORD *)(a1 + 32) = v18;
      *(_OWORD *)(a1 + 16) = v17;
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = -1;
      goto LABEL_27;
    }
    v65 = v90;
    v64 = v89;
    v63 = v88;
    v62[2] = v87;
    v62[1] = v86;
    v62[0] = v85;
    if ( (_BYTE)v89 == 2 )
    {
      v20 = 1;
      v21 = 15;
      v22 = 10;
      v23 = 0;
      v24 = 15;
      if ( (a3 & 1) == 0 )
        goto LABEL_7;
    }
    else
    {
      v21 = DWORD2(v63);
      v22 = HIDWORD(v63);
      v81[0] = *(_DWORD *)((char *)&v64 + 1);
      *(_DWORD *)((char *)v81 + 3) = DWORD1(v64);
      v20 = 0x7FFFFFFFFFFFFFFFLL;
      if ( !__OFADD__(1, (_QWORD)v63) )
        v20 = v63 + 1;
      v23 = (unsigned __int8)v89;
      v24 = DWORD2(v63);
      if ( (a3 & 1) == 0 )
      {
LABEL_7:
        v25 = v22;
        if ( (a5 & 1) == 0 )
        {
LABEL_15:
          v26 = a7;
          v27 = v23;
          if ( a7 != 2 )
          {
            if ( a7 != (_BYTE)v23 )
            {
              v79 = v24;
              v34 = a2[2];
              v92 = (void *)a2[1];
              v61 = v34;
              sub_14039F250(v75, v92, v34, a7);
              if ( *(_DWORD *)v75 != -1 )
              {
                v74 = v78;
                v73 = v77;
                v72 = v76;
                v71 = *(__m256i *)&v75[16];
                v70 = *(_OWORD *)v75;
                sub_14039F250(&v85, v92, v61, v23);
                if ( (_DWORD)v85 != -1 )
                {
                  *(_OWORD *)&v82[80] = v90;
                  *(_OWORD *)&v82[64] = v89;
                  *(_OWORD *)&v82[48] = v88;
                  *(_OWORD *)&v82[32] = v87;
                  *(_OWORD *)&v82[16] = v86;
                  *(_OWORD *)v82 = v85;
                  v66 = &v70;
                  v67 = sub_140B036A0;
                  v68 = v82;
                  v69 = sub_140B036A0;
                  sub_14149C0F0(&v55, &unk_14174F05C, &v66);
                  sub_14034ED40(v82);
                  *(_QWORD *)(a1 + 8) = 10;
                  *(_OWORD *)(a1 + 16) = v55;
                  *(_QWORD *)(a1 + 32) = v56;
                  *(_QWORD *)a1 = -1;
                  sub_14034ED40(&v70);
                  goto LABEL_26;
                }
                goto LABEL_55;
              }
              v28 = 0;
              v24 = v79;
              goto LABEL_19;
            }
            v27 = a7;
          }
          v28 = 1;
          v29 = (unsigned int)v24 ^ v21 | v25 ^ v22;
          v26 = v27;
          if ( !(_DWORD)v29 )
          {
            *(_QWORD *)v75 = 0;
            *(_OWORD *)&v75[8] = 8u;
            v30 = DWORD2(v63);
            v25 = HIDWORD(v63);
            v26 = v89;
            goto LABEL_40;
          }
LABEL_19:
          DWORD1(v64) = *(_DWORD *)((char *)v81 + 3);
          *(_DWORD *)((char *)&v64 + 1) = v81[0];
          *(_QWORD *)&v63 = v20;
          v30 = v24;
          *((_QWORD *)&v63 + 1) = __PAIR64__(v25, v24);
          LOBYTE(v64) = v26;
          LODWORD(v85) = sub_141475580(*(_DWORD *)((char *)v81 + 3), v29, v27, v24);
          DWORD1(v85) = v31;
          sub_141475530(v82, &v85, 3577643008LL, 27111902);
          if ( v82[0] )
            v32 = 0;
          else
            v32 = *(_QWORD *)&v82[8];
          *((_QWORD *)&v64 + 1) = v32;
          persist_registry(v75, a2, (__int64)v62, 1);
          if ( *(_DWORD *)v75 != -1 )
          {
            v74 = v78;
            v73 = v77;
            v72 = v76;
            v71 = *(__m256i *)&v75[16];
            v70 = *(_OWORD *)v75;
            if ( v28 )
            {
              *(_OWORD *)(a1 + 88) = v78;
              *(_OWORD *)(a1 + 72) = v77;
              v35 = *(_OWORD *)v75;
              v36 = *(_OWORD *)&v75[16];
              v37 = *(_OWORD *)&v75[32];
              *(_OWORD *)(a1 + 56) = v76;
              *(_OWORD *)(a1 + 40) = v37;
              *(_OWORD *)(a1 + 24) = v36;
              *(_OWORD *)(a1 + 8) = v35;
              goto LABEL_25;
            }
            sub_14039F250(&v85, a2[1], a2[2], v23);
            if ( (_DWORD)v85 != -1 )
            {
              *(_OWORD *)&v82[80] = v90;
              *(_OWORD *)&v82[64] = v89;
              *(_OWORD *)&v82[48] = v88;
              *(_OWORD *)&v82[32] = v87;
              *(_OWORD *)&v82[16] = v86;
              *(_OWORD *)v82 = v85;
              v66 = &v70;
              v67 = sub_140B036A0;
              v68 = v82;
              v69 = sub_140B036A0;
              sub_14149C0F0(&v53, &unk_14174F0BC, &v66);
              sub_14034ED40(v82);
              *(_QWORD *)(a1 + 8) = 10;
              *(_OWORD *)(a1 + 16) = v53;
              *(_QWORD *)(a1 + 32) = v54;
              *(_QWORD *)a1 = -1;
              sub_14034ED40(&v70);
              goto LABEL_26;
            }
LABEL_55:
            *(_QWORD *)(a1 + 8) = v70;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v75[8];
            *(_QWORD *)(a1 + 32) = *(_QWORD *)&v75[24];
            v47 = v76;
            v48 = v77;
            v49 = v78;
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v75[32];
            *(_OWORD *)(a1 + 56) = v47;
            *(_OWORD *)(a1 + 72) = v48;
            *(_OWORD *)(a1 + 88) = v49;
            goto LABEL_25;
          }
          *(_QWORD *)v75 = 0;
          *(_OWORD *)&v75[8] = 8u;
          v93 = 1;
          sub_1403A9160((__int64)&v85, a2);
          if ( (_DWORD)v85 != -1 )
          {
            *(_OWORD *)&v82[80] = v90;
            *(_OWORD *)&v82[64] = v89;
            *(_OWORD *)&v82[48] = v88;
            *(_OWORD *)&v82[32] = v87;
            *(_OWORD *)&v82[16] = v86;
            *(_OWORD *)v82 = v85;
            nullsub_1(v38);
            v39 = (void *)sub_140001650(36, 1);
            if ( !v39 )
              sub_1416C2D4B(1, 36);
            qmemcpy(v39, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36);
            v92 = v39;
            *(_QWORD *)&v70 = v82;
            *((_QWORD *)&v70 + 1) = sub_140B036A0;
            sub_14149C0F0(&v51, &unk_14174F11D, &v70);
            *(_QWORD *)&v70 = 36;
            *((_QWORD *)&v70 + 1) = v92;
            v71.m256i_i64[0] = 36;
            *(_OWORD *)&v71.m256i_u64[1] = v51;
            v71.m256i_i64[3] = v52;
            sub_1403B1FF0(v75, &v70);
            v93 = 1;
            sub_14034ED40(v82);
          }
LABEL_40:
          v93 = 1;
          sub_1403F6BF0(v82);
          if ( *(_QWORD *)v82 )
          {
            v41 = 2;
            if ( *(_DWORD *)v82 == 1 )
              goto LABEL_48;
            v42 = *(_QWORD *)&v82[8];
            v41 = 3;
            if ( !*(_QWORD *)&v82[8] )
              goto LABEL_48;
            goto LABEL_47;
          }
          v42 = *(_QWORD *)&v82[8];
          v41 = 0;
          if ( *(_QWORD *)&v82[8] )
          {
            if ( *(_QWORD *)&v82[8] != -1 )
            {
LABEL_47:
              sub_140001660(*(_QWORD *)&v82[16], v42, 1);
              goto LABEL_48;
            }
            v41 = 3;
          }
LABEL_48:
          nullsub_1(v40);
          v43 = (void *)sub_140001650(22, 1);
          if ( !v43 )
          {
            v93 = 1;
            sub_1416C2D4B(1, 22);
          }
          if ( v26 == 2 )
          {
            v25 = 10;
            v30 = 15;
          }
          qmemcpy(v43, "dev.aimami.auto-switch", 22);
          *(_QWORD *)&v85 = 22;
          *((_QWORD *)&v85 + 1) = v43;
          *(_QWORD *)&v86 = 22;
          *((_QWORD *)&v86 + 1) = __PAIR64__(v25, v30);
          LOBYTE(v87) = v26 & 1;
          BYTE1(v87) = v41;
          v71.m256i_i64[0] = *(_QWORD *)&v75[16];
          v70 = *(_OWORD *)v75;
          v93 = 0;
          sub_140ACC750(v82, &v85, &v70);
          *(_QWORD *)(a1 + 112) = v84;
          *(_OWORD *)(a1 + 96) = v83;
          *(_OWORD *)(a1 + 80) = *(_OWORD *)&v82[80];
          *(_OWORD *)(a1 + 64) = *(_OWORD *)&v82[64];
          v44 = *(_OWORD *)v82;
          v45 = *(_OWORD *)&v82[16];
          v46 = *(_OWORD *)&v82[32];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v82[48];
          *(_OWORD *)(a1 + 32) = v46;
          *(_OWORD *)(a1 + 16) = v45;
          *(_OWORD *)a1 = v44;
          sub_14034DF40(v62);
          *(_QWORD *)v82 = sub_1412018B0(&v80);
          if ( *(_QWORD *)v82 )
            sub_140018650(v82);
          goto LABEL_29;
        }
        goto LABEL_14;
      }
    }
    LODWORD(v85) = a4;
    if ( a4 >= 0x65 )
    {
      *(_QWORD *)v82 = &v85;
      *(_QWORD *)&v82[8] = sub_1414AB890;
      sub_14149C0F0(&v59, &unk_14174F012, v82);
      *(_QWORD *)(a1 + 32) = v60;
      v33 = v59;
      goto LABEL_24;
    }
    v24 = a4;
    v25 = v22;
    if ( (a5 & 1) == 0 )
      goto LABEL_15;
LABEL_14:
    v25 = a6;
    LODWORD(v85) = a6;
    if ( a6 < 0x65 )
      goto LABEL_15;
    *(_QWORD *)v82 = &v85;
    *(_QWORD *)&v82[8] = sub_1414AB890;
    sub_14149C0F0(&v57, &unk_14174F035, v82);
    *(_QWORD *)(a1 + 32) = v58;
    v33 = v57;
LABEL_24:
    *(_OWORD *)(a1 + 16) = v33;
    *(_QWORD *)(a1 + 8) = 9;
LABEL_25:
    *(_QWORD *)a1 = -1;
LABEL_26:
    sub_14034DF40(v62);
LABEL_27:
    *(_QWORD *)v82 = sub_1412018B0(&v80);
    if ( *(_QWORD *)v82 )
      sub_140018650(v82);
LABEL_29:
    LODWORD(v11) = CloseHandle(hObject);
    return v11;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v82[80];
  v13 = *(_OWORD *)&v82[16];
  v14 = *(_OWORD *)&v82[32];
  v15 = *(_OWORD *)&v82[48];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v82[64];
  *(_OWORD *)(a1 + 56) = v15;
  *(_OWORD *)(a1 + 40) = v14;
  *(_OWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)a1 = -1;
  return v11;
}
