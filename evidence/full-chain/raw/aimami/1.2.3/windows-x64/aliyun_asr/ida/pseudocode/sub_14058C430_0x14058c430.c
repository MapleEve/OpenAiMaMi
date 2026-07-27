// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14058c430
// name: sub_14058C430
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_14058C430(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // edx
  int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // cl
  _BYTE *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r15
  char v26; // al
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  void (__fastcall *v32)(__int64); // rax
  __int64 *v33; // rax
  char v35[11184]; // [rsp+30h] [rbp-50h] BYREF
  char v36[11184]; // [rsp+2BE0h] [rbp+2B60h] BYREF
  __int128 v37; // [rsp+5790h] [rbp+5710h] BYREF
  __int64 *v38; // [rsp+57A0h] [rbp+5720h]
  __int64 v39; // [rsp+8340h] [rbp+82C0h] BYREF
  __int128 v40; // [rsp+8348h] [rbp+82C8h] BYREF
  unsigned __int64 v41; // [rsp+8358h] [rbp+82D8h]
  __int128 v42; // [rsp+8360h] [rbp+82E0h]
  __int128 v43; // [rsp+8370h] [rbp+82F0h]
  __int128 v44; // [rsp+8380h] [rbp+8300h]
  __int128 v45; // [rsp+8390h] [rbp+8310h]
  __int128 v46; // [rsp+83A0h] [rbp+8320h]
  __int64 v47; // [rsp+83B0h] [rbp+8330h]
  __int64 v48; // [rsp+83B8h] [rbp+8338h] BYREF
  int v49; // [rsp+83C0h] [rbp+8340h]
  char *v50; // [rsp+83C8h] [rbp+8348h]
  char v51[32]; // [rsp+83E8h] [rbp+8368h] BYREF
  char v52; // [rsp+8408h] [rbp+8388h]
  __int64 v53; // [rsp+8410h] [rbp+8390h] BYREF
  unsigned __int64 v54; // [rsp+8418h] [rbp+8398h]
  __int64 v55; // [rsp+8518h] [rbp+8498h]
  char v56; // [rsp+852Ch] [rbp+84ACh]
  __m256i v57; // [rsp+AEF0h] [rbp+AE70h] BYREF
  __int128 v58; // [rsp+AF10h] [rbp+AE90h]
  __int128 v59; // [rsp+AF20h] [rbp+AEA0h]
  __int128 v60; // [rsp+AF30h] [rbp+AEB0h]
  __int128 v61; // [rsp+AF40h] [rbp+AEC0h]
  __int64 v62; // [rsp+AF50h] [rbp+AED0h]
  _QWORD v63[4]; // [rsp+AF60h] [rbp+AEE0h] BYREF
  __int128 v64; // [rsp+AF80h] [rbp+AF00h]
  __int128 v65; // [rsp+AF90h] [rbp+AF10h]
  __int128 v66; // [rsp+AFA0h] [rbp+AF20h]
  __int128 v67; // [rsp+AFB0h] [rbp+AF30h]
  __int128 v68; // [rsp+AFC0h] [rbp+AF40h]
  __int64 v69; // [rsp+AFD0h] [rbp+AF50h]
  __int64 v70; // [rsp+AFE0h] [rbp+AF60h] BYREF
  __int128 v71; // [rsp+AFE8h] [rbp+AF68h]
  __int64 *v72; // [rsp+AFF8h] [rbp+AF78h]
  __int128 v73; // [rsp+B000h] [rbp+AF80h]
  __int64 *v74; // [rsp+B010h] [rbp+AF90h]
  __int128 v75; // [rsp+B020h] [rbp+AFA0h]
  __int128 v76; // [rsp+B030h] [rbp+AFB0h]
  __int64 v77; // [rsp+B048h] [rbp+AFC8h] BYREF
  volatile signed __int64 *v78[2]; // [rsp+B050h] [rbp+AFD0h] BYREF
  __int64 v79; // [rsp+B060h] [rbp+AFE0h] BYREF
  __int64 v80; // [rsp+B068h] [rbp+AFE8h]
  __int64 *v81; // [rsp+B070h] [rbp+AFF0h]
  char v82; // [rsp+B07Ah] [rbp+AFFAh] BYREF
  _BYTE v83[2]; // [rsp+B07Bh] [rbp+AFFBh] BYREF
  char v84; // [rsp+B07Dh] [rbp+AFFDh]
  char v85; // [rsp+B07Eh] [rbp+AFFEh]
  char v86; // [rsp+B07Fh] [rbp+AFFFh]
  __int64 v87; // [rsp+B080h] [rbp+B000h]

  v87 = -2;
  v81 = a1;
  sub_141684120(v36, a3, 11184);
  v85 = 1;
  sub_1412EB530(&v77, a2);
  if ( *(_DWORD *)a2 != 1 )
  {
    sub_141684120(&v39, a3, 11184);
    *(_QWORD *)&v37 = a2 + 48;
    *((_QWORD *)&v37 + 1) = a2 + 8;
    v38 = &v39;
    sub_140617670((_DWORD)v81, a2 + 48, 0, (unsigned int)&v37, a4);
    sub_1407D83C0(&v39);
    goto LABEL_52;
  }
  sub_141684120(v35, a3, 11184);
  v86 = 1;
  v7 = sub_1412F09C0();
  v8 = *(unsigned __int8 *)(v7 + 72);
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
      goto LABEL_4;
    v86 = 1;
    sub_14148BBF0(v7, sub_140B82FF0);
    *(_BYTE *)(v7 + 72) = 1;
  }
  if ( *(_BYTE *)(v7 + 70) != 2 )
    goto LABEL_61;
  *(_BYTE *)(v7 + 70) = 1;
  v9 = 720;
  if ( *(_BYTE *)(a2 + 48) )
    v9 = 512;
  v10 = *(_QWORD *)(a2 + 56) + v9;
  v86 = 1;
  v11 = sub_141302F30(v10);
  v13 = v12;
  if ( (*(_BYTE *)(v7 + 56) & 1) != 0 )
  {
    v14 = *(_DWORD *)(v7 + 60);
    v15 = *(_DWORD *)(v7 + 64);
  }
  else
  {
    v86 = 1;
    v14 = sub_1412FEBA0();
    v15 = v16;
  }
  *(_DWORD *)(v7 + 56) = 1;
  *(_DWORD *)(v7 + 60) = v11;
  *(_DWORD *)(v7 + 64) = v13;
  v86 = 1;
  sub_1412F6360(&v39, v7, a2 + 48);
  v41 = __PAIR64__(v15, v14);
  v37 = v40;
  v38 = (__int64 *)__PAIR64__(v15, v14);
  if ( v39 == -2 )
  {
LABEL_4:
    v86 = 1;
    sub_1416C2100(&off_141792398);
  }
  v74 = v38;
  v73 = v37;
  if ( v39 == -1 )
  {
LABEL_61:
    v86 = 1;
    sub_1416C32C0(&unk_141766AF5, 387, &off_141764458);
  }
  v70 = v39;
  v71 = v73;
  v72 = v74;
  sub_141684120(&v37, a3, 11184);
  v84 = 1;
  v17 = sub_1412F90E0(&v82);
  if ( !v17 )
  {
    sub_1405DADF0(&v37);
    sub_1416C3060(
      (unsigned int)aFailedToParkTh,
      21,
      (unsigned int)&v82,
      (unsigned int)&unk_141769398,
      (__int64)&off_141766E98);
  }
  v79 = v17;
  v80 = v18;
  v63[0] = &v79;
  v63[1] = &v79;
  v63[2] = 0;
  sub_141684120(&v39, &v37, 11184);
  while ( 2 )
  {
    v21 = (_BYTE *)sub_1412F09C0();
    v24 = (unsigned __int8)v21[72];
    if ( v24 != 1 )
    {
      if ( v24 == 2 )
        goto LABEL_21;
      sub_14148BBF0(v21, sub_140B82FF0);
      v21[72] = 1;
    }
    LOBYTE(v24) = v21[68];
    v20 = v21[69];
    *((_WORD *)v21 + 34) = -32767;
LABEL_21:
    v83[0] = v24;
    v83[1] = v20;
    switch ( (char)v40 )
    {
      case 0:
        v55 = v39;
        v56 = 0;
        goto LABEL_23;
      case 1:
        sub_1416C3400(&off_141767CC8, v19, v22, v23);
      case 2:
        sub_1416C3420(&off_141767CC8, v19, v22, v23);
      case 3:
LABEL_23:
        hbb4b340bd79fba8f(&v57, (char *)&v40 + 8, v63);
        v25 = v57.m256i_i64[0];
        if ( v57.m256i_i64[0] == -2 )
        {
          v26 = 3;
          goto LABEL_29;
        }
        v27 = v57.m256i_i64[1];
        v76 = *(_OWORD *)&v57.m256i_u64[2];
        v69 = v62;
        v68 = v61;
        v67 = v60;
        v66 = v59;
        v65 = v58;
        sub_1405DAF60((char *)&v40 + 8);
        if ( v25 == -1 )
        {
          v75 = v76;
          goto LABEL_47;
        }
        *((_QWORD *)&v40 + 1) = v25;
        v41 = v27;
        v42 = v76;
        v47 = v69;
        v46 = v68;
        v45 = v67;
        v44 = v66;
        v43 = v65;
        v48 = 0;
        v49 = 100000000;
        v50 = (char *)&v40 + 8;
        v52 = 0;
LABEL_27:
        sub_14061E4D0(&v57, &v48, v63);
        v27 = v57.m256i_i64[0];
        if ( v57.m256i_i64[0] == -2 )
        {
          v26 = 4;
LABEL_29:
          v27 = -2;
          LOBYTE(v40) = v26;
          if ( v83[0] == 2 )
            goto LABEL_49;
          goto LABEL_48;
        }
        v75 = *(_OWORD *)&v57.m256i_u64[1];
        if ( v52 == 5 )
          goto LABEL_45;
        if ( v52 == 4 )
        {
          sub_1405E6D10(&v53);
          goto LABEL_45;
        }
        if ( v52 != 3 )
          goto LABEL_46;
        v28 = v53;
        if ( v53 == -1 )
          goto LABEL_45;
        v29 = v53 ^ 0x8000000000000000uLL;
        if ( v53 >= 0 )
          v29 = 5;
        v30 = v29 == 4;
        if ( v29 >= 4 )
        {
          v31 = 208;
          if ( v30 )
          {
            v28 = v54;
            v31 = 216;
            if ( v54 > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_45;
          }
        }
        else
        {
          v31 = 216;
          v28 = v54;
        }
        if ( v28 )
          sub_140001660(*(_QWORD *)((char *)&v40 + v31), v28, 1);
LABEL_45:
        sub_1400104F0(v51);
LABEL_46:
        sub_1405E7D00((char *)&v40 + 8);
LABEL_47:
        v64 = v75;
        LOBYTE(v40) = 1;
        if ( v83[0] == 2 )
          goto LABEL_49;
LABEL_48:
        sub_1412F1BF0(v83);
LABEL_49:
        if ( v27 == -2 )
        {
          sub_1412F9060(&v82);
          continue;
        }
        *(_OWORD *)v57.m256i_i8 = v64;
        sub_1405DADF0(&v39);
        v32 = *(void (__fastcall **)(__int64))(v79 + 24);
        v84 = 0;
        v32(v80);
        v33 = v81;
        *v81 = v27;
        *(_OWORD *)(v33 + 1) = *(_OWORD *)v57.m256i_i8;
        v86 = 0;
        sub_1405E80C0(&v70);
LABEL_52:
        sub_1412EC290(&v77);
        if ( v77 != 2 )
        {
          if ( v77 )
          {
            if ( !_InterlockedDecrement64(v78[0]) )
            {
              v85 = 0;
              sub_1412E9930(v78);
            }
          }
          else if ( !_InterlockedDecrement64(v78[0]) )
          {
            v85 = 0;
            sub_1412E9570(v78);
          }
        }
        return v81;
      case 4:
        goto LABEL_27;
    }
  }
}