// win 1.2.7 | module src/platform/process.rs | ea 0x140ec0ac0 | name sub_140EC0AC0
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
volatile signed __int64 *__fastcall sub_140EC0AC0(__int64 a1, int a2, int a3, char a4, unsigned __int8 a5)
{
  volatile signed __int64 *result; // rax
  bool v8; // r14
  __int64 v9; // rcx
  char v10; // r15
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  volatile signed __int64 *v20; // r12
  volatile signed __int64 *v21; // r13
  void *v22; // rax
  __int64 v23; // rdx
  volatile signed __int64 *v24; // rcx
  volatile signed __int64 *v25; // rdx
  __int64 v26; // r8
  __int128 v27; // xmm6
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // [rsp+20h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h]
  __int128 v33; // [rsp+70h] [rbp-10h]
  __int128 v34; // [rsp+80h] [rbp+0h]
  __int128 v35; // [rsp+90h] [rbp+10h]
  __int128 v36; // [rsp+A0h] [rbp+20h]
  volatile signed __int64 *v37; // [rsp+B8h] [rbp+38h]
  volatile signed __int64 *v38; // [rsp+C0h] [rbp+40h]
  volatile signed __int64 *v39; // [rsp+C8h] [rbp+48h]
  __int128 v40; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v41; // [rsp+E0h] [rbp+60h]
  __int128 v42; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v43; // [rsp+100h] [rbp+80h]
  __int128 v44; // [rsp+110h] [rbp+90h]
  __int128 v45; // [rsp+120h] [rbp+A0h]
  __int128 v46; // [rsp+130h] [rbp+B0h]
  __int128 v47; // [rsp+140h] [rbp+C0h]
  __int128 v48; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v49; // [rsp+160h] [rbp+E0h]
  __int64 v50; // [rsp+168h] [rbp+E8h]
  const char *v51; // [rsp+170h] [rbp+F0h]
  __int64 v52; // [rsp+178h] [rbp+F8h]
  __int64 v53; // [rsp+180h] [rbp+100h]
  const char *v54; // [rsp+188h] [rbp+108h]
  __int64 v55; // [rsp+190h] [rbp+110h]
  __int64 v56; // [rsp+198h] [rbp+118h]
  void *v57; // [rsp+1A0h] [rbp+120h]
  __int128 *v58; // [rsp+1A8h] [rbp+128h]
  int v59; // [rsp+1B4h] [rbp+134h] BYREF
  volatile signed __int64 *v60; // [rsp+1B8h] [rbp+138h] BYREF
  volatile signed __int64 *v61; // [rsp+1C0h] [rbp+140h] BYREF
  volatile signed __int64 *v62; // [rsp+1C8h] [rbp+148h] BYREF
  char v63; // [rsp+1D5h] [rbp+155h] BYREF
  char v64; // [rsp+1D6h] [rbp+156h] BYREF
  char v65; // [rsp+1D7h] [rbp+157h]
  __int64 v66; // [rsp+1D8h] [rbp+158h]

  v66 = -2;
  v63 = 0;
  result = (volatile signed __int64 *)sub_140EC23E0((unsigned int)&v42, a2, a3, a5, (__int64)&v63);
  v8 = (_QWORD)v42 != -1;
  if ( (_QWORD)v42 == -1 )
  {
    if ( a4 )
      goto LABEL_7;
    result = (volatile signed __int64 *)sub_140E9FA40((__int64)&v42, 0xCu, 0, a5, (__int64)&v63);
    if ( (_DWORD)v42 == -1 )
      goto LABEL_13;
LABEL_12:
    *(_OWORD *)(a1 + 80) = v47;
    *(_OWORD *)(a1 + 64) = v46;
    v11 = v42;
    v12 = v43;
    v13 = v44;
    *(_OWORD *)(a1 + 48) = v45;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    return result;
  }
  if ( !a4 )
    goto LABEL_12;
  v36 = v47;
  v35 = v46;
  v34 = v45;
  v33 = v44;
  v32 = v43;
  v31 = v42;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v40 = &v31;
    *((_QWORD *)&v40 + 1) = sub_14104A7D0;
    v53 = 2;
    v54 = aCodexmateLibPl_2;
    v55 = 32;
    v57 = &unk_141A59500;
    v58 = &v40;
    *(_QWORD *)&v48 = 0;
    *((_QWORD *)&v48 + 1) = aCodexmateLibPl_2;
    v49 = 32;
    v50 = 0;
    v51 = aSrcPlatformPro_1;
    v52 = 23;
    v56 = 0x66F00000001LL;
    sub_1414D53A0(&v64, &v48);
  }
  sub_140E97700(&v31);
LABEL_7:
  sub_140E9FA40((__int64)&v42, 2u, 0, a5, (__int64)&v63);
  if ( (_DWORD)v42 == -1 )
  {
LABEL_13:
    v59 = DWORD2(v42);
    v10 = 1;
    if ( DWORD2(v42) && *(_QWORD *)off_1421E6EC0 >= 2u )
    {
      *(_QWORD *)&v31 = &v59;
      *((_QWORD *)&v31 + 1) = sub_1416BBD00;
      v53 = 2;
      v54 = aCodexmateLibPl_2;
      v55 = 32;
      v57 = &unk_141A595D7;
      v58 = &v31;
      *(_QWORD *)&v48 = 0;
      *((_QWORD *)&v48 + 1) = aCodexmateLibPl_2;
      v49 = 32;
      v50 = 0;
      v51 = aSrcPlatformPro_1;
      v52 = 23;
      v56 = 0x69000000001LL;
      sub_1414D53A0(&v64, &v48);
    }
    goto LABEL_16;
  }
  v36 = v47;
  v35 = v46;
  v34 = v45;
  v33 = v44;
  v32 = v43;
  v31 = v42;
  if ( *(_QWORD *)off_1421E6EC0 >= 2u )
  {
    *(_QWORD *)&v40 = &v31;
    *((_QWORD *)&v40 + 1) = sub_14104A7D0;
    v53 = 2;
    v54 = aCodexmateLibPl_2;
    v55 = 32;
    v57 = &unk_141A59562;
    v58 = &v40;
    *(_QWORD *)&v48 = 0;
    *((_QWORD *)&v48 + 1) = aCodexmateLibPl_2;
    v49 = 32;
    v50 = 0;
    v51 = aSrcPlatformPro_1;
    v52 = 23;
    v56 = 0x68800000001LL;
    sub_1414D53A0(&v64, &v48);
  }
  sub_140E97700(&v31);
  v59 = 0;
  v8 = 1;
  v10 = 0;
LABEL_16:
  nullsub_1(v9);
  v14 = sub_140001650(24, 8);
  if ( !v14 )
    sub_141938D11(8, 24);
  *(_QWORD *)v14 = 1;
  *(_QWORD *)(v14 + 8) = 1;
  *(_BYTE *)(v14 + 16) = 0;
  v62 = (volatile signed __int64 *)v14;
  nullsub_1(v15);
  v16 = sub_140001650(24, 8);
  if ( !v16 )
    sub_141938D11(8, 24);
  *(_QWORD *)v16 = 1;
  *(_QWORD *)(v16 + 8) = 1;
  *(_DWORD *)(v16 + 16) = 0;
  v61 = (volatile signed __int64 *)v16;
  nullsub_1(v17);
  v18 = sub_140001650(24, 8);
  if ( !v18 )
    sub_141938D11(8, 24);
  *(_QWORD *)v18 = 1;
  *(_QWORD *)(v18 + 8) = 1;
  *(_BYTE *)(v18 + 16) = v8;
  v60 = (volatile signed __int64 *)v18;
  if ( _InterlockedIncrement64(v62) <= 0
    || (v20 = v62, v38 = v62, _InterlockedIncrement64(v61) <= 0)
    || (v21 = v61, v37 = v61, _InterlockedIncrement64(v60) <= 0) )
  {
    BUG();
  }
  v39 = v60;
  v49 = -1;
  *(_QWORD *)&v48 = 0;
  LOBYTE(v52) = 0;
  nullsub_1(v19);
  v22 = (void *)sub_140001650(22, 1);
  if ( !v22 )
    sub_141938D2B(1, 22);
  qmemcpy(v22, "codex-transition-fence", 22);
  *(_QWORD *)&v42 = 22;
  *((_QWORD *)&v42 + 1) = v22;
  *(_QWORD *)&v43 = 22;
  sub_1416802B0(&v31, &v48, &v42);
  *(_QWORD *)&v48 = v20;
  *((_QWORD *)&v48 + 1) = v21;
  LOBYTE(v50) = a5;
  v49 = (__int64)v39;
  v41 = v33;
  v40 = v32;
  v65 = 0;
  LOBYTE(v30) = BYTE8(v33);
  sub_140050590(&v42, &v40, v31, *((_QWORD *)&v31 + 1), v30, 0, &v48);
  if ( (_QWORD)v42 )
  {
    v23 = v43;
    *(_OWORD *)(a1 + 8) = v42;
    *(_QWORD *)(a1 + 24) = v23;
    result = v62;
    v24 = v61;
    v25 = v60;
    *(_QWORD *)(a1 + 32) = v62;
    *(_QWORD *)(a1 + 40) = v24;
    *(_QWORD *)(a1 + 48) = v25;
    *(_BYTE *)(a1 + 56) = v10;
    *(_BYTE *)(a1 + 57) = a4;
    *(_BYTE *)(a1 + 58) = a5;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_QWORD *)&v42 = *((_QWORD *)&v42 + 1);
    *(_QWORD *)&v31 = &v42;
    *((_QWORD *)&v31 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v48, &unk_141A5713A, &v31);
    v27 = v48;
    v28 = v49;
    v29 = (unsigned int)(v42 & 3) - 2;
    if ( (unsigned int)v29 >= 2 && (v42 & 3) != 0 )
    {
      *((_QWORD *)&v31 + 1) = v42 - 1;
      LOBYTE(v31) = 3;
      v65 = 0;
      sub_1416BCB00((char *)&v31 + 8);
    }
    *(_OWORD *)(a1 + 8) = v27;
    *(_QWORD *)(a1 + 24) = v28;
    *(_QWORD *)a1 = 10;
    if ( !_InterlockedDecrement64(v60) )
      sub_1409E3900(&v60, v29, v26);
    if ( !_InterlockedDecrement64(v61) )
      sub_1409E3900(&v61, v29, v26);
    result = v62;
    if ( !_InterlockedDecrement64(v62) )
      return (volatile signed __int64 *)sub_1409E3900(&v62, v29, v26);
  }
  return result;
}
