// module: codexmate_lib/core/repository
// addr: 0x1403af090
// name: logout_0
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::logout | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall logout_0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // kr10_16
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // kr20_16
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int8 v25; // al
  __int64 v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // r12
  __int64 v33; // rcx
  void *v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int128 v44; // xmm3
  __int64 v46; // rax
  __int128 v47; // [rsp+30h] [rbp-50h] BYREF
  __int64 v48; // [rsp+40h] [rbp-40h]
  __int128 v49; // [rsp+48h] [rbp-38h] BYREF
  __int64 v50; // [rsp+58h] [rbp-28h]
  _OWORD v51[3]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v52; // [rsp+90h] [rbp+10h]
  _QWORD v53[4]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v54; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v55; // [rsp+D0h] [rbp+50h]
  __int128 v56; // [rsp+E0h] [rbp+60h]
  __int128 v57; // [rsp+F0h] [rbp+70h]
  __int128 v58; // [rsp+100h] [rbp+80h]
  __int64 v59; // [rsp+110h] [rbp+90h]
  __int128 v60; // [rsp+120h] [rbp+A0h] BYREF
  __m256i v61; // [rsp+130h] [rbp+B0h]
  __int128 v62; // [rsp+150h] [rbp+D0h]
  __int128 v63; // [rsp+160h] [rbp+E0h]
  __int128 v64; // [rsp+170h] [rbp+F0h]
  _BYTE v65[48]; // [rsp+180h] [rbp+100h] BYREF
  __int128 v66; // [rsp+1B0h] [rbp+130h]
  __int128 v67; // [rsp+1C0h] [rbp+140h]
  __int128 v68; // [rsp+1D0h] [rbp+150h]
  __int64 v69; // [rsp+1E0h] [rbp+160h] BYREF
  __int64 v70; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v71; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v72; // [rsp+200h] [rbp+180h]
  __int128 v73; // [rsp+210h] [rbp+190h]
  __int128 v74; // [rsp+220h] [rbp+1A0h]
  __int128 v75; // [rsp+230h] [rbp+1B0h]
  __int128 v76; // [rsp+240h] [rbp+1C0h]
  HANDLE v77; // [rsp+250h] [rbp+1D0h] BYREF
  HANDLE hObject; // [rsp+258h] [rbp+1D8h]
  __int64 v79; // [rsp+260h] [rbp+1E0h]
  __int64 v80; // [rsp+268h] [rbp+1E8h]
  _BYTE v81[96]; // [rsp+270h] [rbp+1F0h] BYREF
  __int64 v82; // [rsp+2D0h] [rbp+250h]
  char v83; // [rsp+2DFh] [rbp+25Fh]
  __int64 v84; // [rsp+2E0h] [rbp+260h]

  v84 = -2;
  v4 = sub_140712590(a2);
  if ( v4 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v4;
    return a1;
  }
  v5 = *(_QWORD *)(a2 + 264);
  v6 = *(_QWORD *)(a2 + 272);
  sub_1403886D0(v81, v5, v6);
  v7 = *(_OWORD *)v81;
  if ( *(_QWORD *)v81 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v81[80];
    v8 = *(_OWORD *)&v81[16];
    v9 = *(_OWORD *)&v81[32];
    v10 = *(_OWORD *)&v81[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v81[64];
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_OWORD *)a1 = v7;
    return a1;
  }
  v77 = *(HANDLE *)&v81[8];
  sub_1403871C0(v81, v5, v6);
  v11 = *(_OWORD *)v81;
  if ( *(_QWORD *)v81 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v81[80];
    v12 = *(_OWORD *)&v81[16];
    v13 = *(_OWORD *)&v81[32];
    v14 = *(_OWORD *)&v81[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v81[64];
    *(_OWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
LABEL_41:
    *(_QWORD *)v81 = sub_1412018B0(&v77);
    if ( *(_QWORD *)v81 )
      sub_140018650(v81);
    CloseHandle(v77);
    return a1;
  }
  v70 = *(_QWORD *)&v81[8];
  sub_1403885B0(v81, v5, v6);
  v15 = *(_OWORD *)v81;
  if ( *(_QWORD *)v81 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v81[80];
    v16 = *(_OWORD *)&v81[16];
    v17 = *(_OWORD *)&v81[32];
    v18 = *(_OWORD *)&v81[48];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v81[64];
    *(_OWORD *)(a1 + 48) = v18;
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
LABEL_38:
    hObject = *((HANDLE *)&v11 + 1);
    *(_QWORD *)v81 = sub_1412018B0(&v70);
    if ( *(_QWORD *)v81 )
      sub_140018650(v81);
    CloseHandle(hObject);
    goto LABEL_41;
  }
  v69 = *(_QWORD *)&v81[8];
  if ( (unsigned __int8)sub_14048ED60(a2) == 1 )
  {
    nullsub_1(v19);
    v20 = sub_140001650(120, 1);
    if ( !v20 )
      sub_1416C2D4B(1, 120);
    *(_OWORD *)(v20 + 96) = xmmword_14174FCEA;
    *(_OWORD *)(v20 + 80) = xmmword_14174FCDA;
    *(_OWORD *)(v20 + 64) = xmmword_14174FCCA;
    *(_OWORD *)(v20 + 48) = xmmword_14174FCBA;
    *(_OWORD *)(v20 + 32) = xmmword_14174FCAA;
    *(_OWORD *)(v20 + 16) = xmmword_14174FC9A;
    *(_OWORD *)v20 = xmmword_14174FC8A;
    *(_QWORD *)(v20 + 112) = 0x8280E3B78FE5A6B4uLL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 120;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = 120;
    goto LABEL_37;
  }
  sub_14039C370((__int64)v81, *(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 304));
  v21 = *(_QWORD *)v81;
  v71 = *(_OWORD *)&v81[8];
  v72 = *(_OWORD *)&v81[24];
  v73 = *(_OWORD *)&v81[40];
  v74 = *(_OWORD *)&v81[56];
  v75 = *(_OWORD *)&v81[72];
  *(_QWORD *)&v76 = *(_QWORD *)&v81[88];
  if ( *(_QWORD *)v81 != -1 )
  {
    *(_QWORD *)(a1 + 88) = v76;
    *(_OWORD *)(a1 + 72) = v75;
    v22 = v71;
    v23 = v72;
    v24 = v73;
    *(_OWORD *)(a1 + 56) = v74;
    *(_OWORD *)(a1 + 40) = v24;
    *(_OWORD *)(a1 + 24) = v23;
    *(_OWORD *)(a1 + 8) = v22;
    *(_QWORD *)a1 = v21;
LABEL_37:
    sub_14034E7D0(&v69);
    goto LABEL_38;
  }
  v59 = v76;
  v58 = v75;
  v57 = v74;
  v56 = v73;
  v55 = v72;
  v54 = v71;
  sub_14032C610(v65, a2 + 32);
  v25 = *(_BYTE *)(a2 + 56);
  v61.m256i_i64[0] = *(_QWORD *)&v65[16];
  v60 = *(_OWORD *)v65;
  v61.m256i_i8[8] = v25;
  sub_140381430((__int64)v81, (__int64)&v60);
  v26 = *(_QWORD *)v81;
  v71 = *(_OWORD *)&v81[8];
  v72 = *(_OWORD *)&v81[24];
  v73 = *(_OWORD *)&v81[40];
  *(_QWORD *)&v74 = *(_QWORD *)&v81[56];
  if ( *(_QWORD *)v81 != -1 )
  {
    v27 = *(_OWORD *)&v81[64];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v81[80];
    *(_OWORD *)(a1 + 64) = v27;
    *(_QWORD *)(a1 + 56) = v74;
    v28 = v71;
    v29 = v72;
    *(_OWORD *)(a1 + 40) = v73;
    *(_OWORD *)(a1 + 24) = v29;
    *(_OWORD *)(a1 + 8) = v28;
    *(_QWORD *)a1 = v26;
LABEL_36:
    sub_14034DF40(&v54);
    goto LABEL_37;
  }
  v51[0] = v71;
  v51[1] = v72;
  v51[2] = v73;
  v52 = v74;
  v30 = *(_QWORD *)(a2 + 40);
  v31 = *(_QWORD *)(a2 + 48);
  sub_141486710(v81, v30, v31);
  if ( *(_DWORD *)v81 == 2 )
  {
    *((_QWORD *)&v71 + 1) = *(_QWORD *)&v81[8];
    *(_QWORD *)&v71 = 2;
LABEL_19:
    sub_140018650((char *)&v71 + 8);
    LODWORD(v32) = 0;
    LODWORD(v30) = 0;
    goto LABEL_20;
  }
  v71 = *(_OWORD *)v81;
  *(_QWORD *)&v76 = *(_QWORD *)&v81[80];
  v75 = *(_OWORD *)&v81[64];
  v74 = *(_OWORD *)&v81[48];
  v73 = *(_OWORD *)&v81[32];
  v72 = *(_OWORD *)&v81[16];
  if ( *(_QWORD *)v81 == 2 )
    goto LABEL_19;
  *(_QWORD *)&v60 = sub_1403C9370();
  *(_QWORD *)&v71 = &v60;
  *((_QWORD *)&v71 + 1) = sub_1414AC5F0;
  sub_14149C0F0(v81, &unk_14174E5A8, &v71);
  v82 = *(_QWORD *)v81;
  v39 = *(_QWORD *)(a2 + 368);
  v38 = *(_QWORD *)(a2 + 360);
  v79 = *(_QWORD *)&v81[8];
  sub_141473FA0((unsigned int)v81, v38, v39, *(_DWORD *)&v81[8], *(__int64 *)&v81[16]);
  v80 = *(_QWORD *)&v81[8];
  v40 = sub_140872600(v30, v31, *(__int64 *)&v81[8], *(__int64 *)&v81[16]);
  if ( v40 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v40;
    v41 = *(_QWORD *)v81;
    if ( !*(_QWORD *)v81 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v46 = sub_141485EF0(v30, v31);
  v32 = v46;
  LOBYTE(v30) = v46 == 0;
  if ( v46 )
  {
    if ( (unsigned __int8)sub_1403887F0(v46) )
    {
      *(_QWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v32;
      v41 = *(_QWORD *)v81;
      if ( !*(_QWORD *)v81 )
      {
LABEL_32:
        if ( v82 )
          sub_140001660(v79, v82, 1);
        goto LABEL_35;
      }
LABEL_31:
      sub_140001660(v80, v41, 1);
      goto LABEL_32;
    }
    *(_QWORD *)&v71 = v32;
    sub_140018650(&v71);
  }
  if ( *(_QWORD *)v81 )
    sub_140001660(v80, *(_QWORD *)v81, 1);
  LOBYTE(v32) = 1;
  if ( v82 )
    sub_140001660(v79, v82, 1);
LABEL_20:
  if ( *((__int64 *)&v55 + 1) > 0 )
    sub_140001660(v56, *((_QWORD *)&v55 + 1), 1);
  *((_QWORD *)&v55 + 1) = -1;
  *((_QWORD *)&v58 + 1) = sub_1403C9370();
  persist_registry(v65, (_QWORD *)a2, (__int64)&v54, 1);
  if ( *(_DWORD *)v65 != -1 )
  {
    v64 = v68;
    v63 = v67;
    v62 = v66;
    v61 = *(__m256i *)&v65[16];
    v60 = *(_OWORD *)v65;
    sub_140381540(&v71, v51);
    if ( (_DWORD)v71 == -1 )
    {
      *(_QWORD *)a1 = v60;
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v65[8];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v65[24];
      v42 = v66;
      v43 = v67;
      v44 = v68;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v65[32];
      *(_OWORD *)(a1 + 48) = v42;
      *(_OWORD *)(a1 + 64) = v43;
      *(_OWORD *)(a1 + 80) = v44;
    }
    else
    {
      *(_OWORD *)&v81[80] = v76;
      *(_OWORD *)&v81[64] = v75;
      *(_OWORD *)&v81[48] = v74;
      *(_OWORD *)&v81[32] = v73;
      *(_OWORD *)&v81[16] = v72;
      *(_OWORD *)v81 = v71;
      v53[0] = &v60;
      v53[1] = sub_140B036A0;
      v53[2] = v81;
      v53[3] = sub_140B036A0;
      sub_14149C0F0(&v49, &unk_14174FC06, v53);
      sub_14034ED40(v81);
      *(_QWORD *)a1 = 10;
      *(_OWORD *)(a1 + 8) = v49;
      *(_QWORD *)(a1 + 24) = v50;
      sub_14034ED40(&v60);
    }
LABEL_35:
    sub_14034E200(v51);
    goto LABEL_36;
  }
  *(_QWORD *)v65 = 0;
  *(_OWORD *)&v65[8] = 8u;
  v83 = 1;
  sub_1403A9160((__int64)&v71, (_QWORD *)a2);
  if ( (_DWORD)v71 != -1 )
  {
    *(_OWORD *)&v81[80] = v76;
    *(_OWORD *)&v81[64] = v75;
    *(_OWORD *)&v81[48] = v74;
    *(_OWORD *)&v81[32] = v73;
    *(_OWORD *)&v81[16] = v72;
    *(_OWORD *)v81 = v71;
    nullsub_1(v33);
    v34 = (void *)sub_140001650(36, 1);
    if ( !v34 )
      sub_1416C2D4B(1, 36);
    qmemcpy(v34, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36);
    hObject = v34;
    *(_QWORD *)&v60 = v81;
    *((_QWORD *)&v60 + 1) = sub_140B036A0;
    sub_14149C0F0(&v47, &unk_14174FC49, &v60);
    *(_QWORD *)&v60 = 36;
    *((_QWORD *)&v60 + 1) = hObject;
    v61.m256i_i64[0] = 36;
    *(_OWORD *)&v61.m256i_u64[1] = v47;
    v61.m256i_i64[3] = v48;
    sub_1403B1FF0(v65, &v60);
    v83 = 1;
    sub_14034ED40(v81);
  }
  *(_QWORD *)&v72 = *(_QWORD *)&v65[16];
  v71 = *(_OWORD *)v65;
  v83 = 0;
  sub_140AC9640(v81, (unsigned int)v30, (unsigned int)v32, &v71);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v81[64];
  v35 = *(_OWORD *)v81;
  v36 = *(_OWORD *)&v81[16];
  v37 = *(_OWORD *)&v81[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v81[48];
  *(_OWORD *)(a1 + 40) = v37;
  *(_OWORD *)(a1 + 24) = v36;
  *(_OWORD *)(a1 + 8) = v35;
  *(_QWORD *)a1 = -1;
  sub_14034E200(v51);
  sub_14034DF40(&v54);
  sub_14034E7D0(&v69);
  sub_14034E7D0(&v70);
  sub_14034E7D0(&v77);
  return a1;
}
