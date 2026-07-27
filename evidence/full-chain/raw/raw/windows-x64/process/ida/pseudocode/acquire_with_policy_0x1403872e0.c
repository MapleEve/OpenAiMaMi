// module: codexmate_lib/platform/process
// addr: 0x1403872e0
// name: acquire_with_policy
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::platform::process::CodexTransitionFence::acquire_with_policy | 跨平台字符串签名匹配(名↔函数一致)
volatile signed __int64 *__fastcall acquire_with_policy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5)
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
  __int128 v23; // xmm0
  volatile signed __int64 *v24; // rcx
  volatile signed __int64 *v25; // rdx
  __int128 v26; // xmm0
  __int128 v27; // [rsp+70h] [rbp-10h] BYREF
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int128 v30; // [rsp+A0h] [rbp+20h]
  __int128 v31; // [rsp+B0h] [rbp+30h]
  __int128 v32; // [rsp+C0h] [rbp+40h]
  volatile signed __int64 *v33; // [rsp+D8h] [rbp+58h]
  volatile signed __int64 *v34; // [rsp+E0h] [rbp+60h]
  volatile signed __int64 *v35; // [rsp+E8h] [rbp+68h]
  __int128 v36; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v37; // [rsp+100h] [rbp+80h]
  __int128 v38; // [rsp+110h] [rbp+90h]
  __int128 v39; // [rsp+120h] [rbp+A0h]
  __int128 v40; // [rsp+130h] [rbp+B0h]
  __int128 v41; // [rsp+140h] [rbp+C0h]
  __int128 v42; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v43; // [rsp+160h] [rbp+E0h]
  __int128 v44; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v45; // [rsp+178h] [rbp+F8h]
  __int64 v46; // [rsp+180h] [rbp+100h]
  const char *v47; // [rsp+188h] [rbp+108h]
  __int64 v48; // [rsp+190h] [rbp+110h]
  __int64 v49; // [rsp+198h] [rbp+118h]
  const char *v50; // [rsp+1A0h] [rbp+120h]
  __int64 v51; // [rsp+1A8h] [rbp+128h]
  __int64 v52; // [rsp+1B0h] [rbp+130h]
  void *v53; // [rsp+1B8h] [rbp+138h]
  __int128 *v54; // [rsp+1C0h] [rbp+140h]
  int v55; // [rsp+1CCh] [rbp+14Ch] BYREF
  volatile signed __int64 *v56; // [rsp+1D0h] [rbp+150h] BYREF
  volatile signed __int64 *v57; // [rsp+1D8h] [rbp+158h] BYREF
  volatile signed __int64 *v58; // [rsp+1E0h] [rbp+160h] BYREF
  char v59; // [rsp+1EEh] [rbp+16Eh] BYREF
  char v60; // [rsp+1EFh] [rbp+16Fh]
  __int64 v61; // [rsp+1F0h] [rbp+170h]

  v61 = -2;
  result = (volatile signed __int64 *)prepare_transition(&v36, a2, a3, a5);
  v8 = (_QWORD)v36 != -1;
  if ( (_QWORD)v36 == -1 )
  {
    if ( a4 )
      goto LABEL_7;
    result = (volatile signed __int64 *)enforce_codex_quiet_window_with(&v36, 12, 0, a5);
    if ( (_DWORD)v36 == -1 )
      goto LABEL_13;
LABEL_12:
    *(_OWORD *)(a1 + 80) = v41;
    *(_OWORD *)(a1 + 64) = v40;
    v11 = v36;
    v12 = v37;
    v13 = v38;
    *(_OWORD *)(a1 + 48) = v39;
    *(_OWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    return result;
  }
  if ( !a4 )
    goto LABEL_12;
  v32 = v41;
  v31 = v40;
  v30 = v39;
  v29 = v38;
  v28 = v37;
  v27 = v36;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    *(_QWORD *)&v42 = &v27;
    *((_QWORD *)&v42 + 1) = sub_140B036A0;
    *(_QWORD *)&v44 = 0;
    *((_QWORD *)&v44 + 1) = aCodexmateLibPl_2;
    v45 = 32;
    v46 = 0;
    v47 = aSrcPlatformPro_2;
    v48 = 23;
    v49 = 2;
    v50 = aCodexmateLibPl_2;
    v51 = 32;
    v52 = 0x63200000001LL;
    v53 = &unk_14174E35D;
    v54 = &v42;
    sub_1412C36A0(&v59, &v44);
  }
  sub_14034ED40(&v27);
LABEL_7:
  enforce_codex_quiet_window_with(&v36, 2, 0, a5);
  if ( (_DWORD)v36 == -1 )
  {
LABEL_13:
    v55 = DWORD2(v36);
    v10 = 1;
    if ( DWORD2(v36) && *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v27 = &v55;
      *((_QWORD *)&v27 + 1) = sub_1414AB780;
      *(_QWORD *)&v44 = 0;
      *((_QWORD *)&v44 + 1) = aCodexmateLibPl_2;
      v45 = 32;
      v46 = 0;
      v47 = aSrcPlatformPro_2;
      v48 = 23;
      v49 = 2;
      v50 = aCodexmateLibPl_2;
      v51 = 32;
      v52 = 0x65200000001LL;
      v53 = &unk_14174E434;
      v54 = &v27;
      sub_1412C36A0(&v59, &v44);
    }
    goto LABEL_16;
  }
  v32 = v41;
  v31 = v40;
  v30 = v39;
  v29 = v38;
  v28 = v37;
  v27 = v36;
  if ( *(_QWORD *)off_141EC8D80 >= 2u )
  {
    *(_QWORD *)&v42 = &v27;
    *((_QWORD *)&v42 + 1) = sub_140B036A0;
    *(_QWORD *)&v44 = 0;
    *((_QWORD *)&v44 + 1) = aCodexmateLibPl_2;
    v45 = 32;
    v46 = 0;
    v47 = aSrcPlatformPro_2;
    v48 = 23;
    v49 = 2;
    v50 = aCodexmateLibPl_2;
    v51 = 32;
    v52 = 0x64A00000001LL;
    v53 = &unk_14174E3BF;
    v54 = &v42;
    sub_1412C36A0(&v59, &v44);
  }
  sub_14034ED40(&v27);
  v55 = 0;
  v8 = 1;
  v10 = 0;
LABEL_16:
  nullsub_1(v9);
  v14 = sub_140001650(24, 8);
  if ( !v14 )
    sub_1416C2D31(8, 24);
  *(_QWORD *)v14 = 1;
  *(_QWORD *)(v14 + 8) = 1;
  *(_BYTE *)(v14 + 16) = 0;
  v58 = (volatile signed __int64 *)v14;
  nullsub_1(v15);
  v16 = sub_140001650(24, 8);
  if ( !v16 )
    sub_1416C2D31(8, 24);
  *(_QWORD *)v16 = 1;
  *(_QWORD *)(v16 + 8) = 1;
  *(_DWORD *)(v16 + 16) = 0;
  v57 = (volatile signed __int64 *)v16;
  nullsub_1(v17);
  v18 = sub_140001650(24, 8);
  if ( !v18 )
    sub_1416C2D31(8, 24);
  *(_QWORD *)v18 = 1;
  *(_QWORD *)(v18 + 8) = 1;
  *(_BYTE *)(v18 + 16) = v8;
  v56 = (volatile signed __int64 *)v18;
  if ( _InterlockedIncrement64(v58) <= 0
    || (v20 = v58, v34 = v58, _InterlockedIncrement64(v57) <= 0)
    || (v21 = v57, v33 = v57, _InterlockedIncrement64(v56) <= 0) )
  {
    BUG();
  }
  v35 = v56;
  v45 = -1;
  *(_QWORD *)&v44 = 0;
  LOBYTE(v48) = 0;
  nullsub_1(v19);
  v22 = (void *)sub_140001650(22, 1);
  if ( !v22 )
    sub_1416C2D4B(1, 22);
  qmemcpy(v22, "codex-transition-fence", 22);
  *(_QWORD *)&v36 = 22;
  *((_QWORD *)&v36 + 1) = v22;
  *(_QWORD *)&v37 = 22;
  sub_141471DD0(&v27, &v44, &v36);
  *(_QWORD *)&v44 = v20;
  *((_QWORD *)&v44 + 1) = v21;
  LOBYTE(v46) = a5;
  v45 = (__int64)v35;
  v60 = 0;
  sub_1404EA370(&v42, &v27, &v44);
  if ( (_QWORD)v42 )
  {
    v23 = v42;
    *(_QWORD *)(a1 + 24) = v43;
    *(_OWORD *)(a1 + 8) = v23;
    result = v58;
    v24 = v57;
    v25 = v56;
    *(_QWORD *)(a1 + 32) = v58;
    *(_QWORD *)(a1 + 40) = v24;
    *(_QWORD *)(a1 + 48) = v25;
    *(_BYTE *)(a1 + 56) = v10;
    *(_BYTE *)(a1 + 57) = a4;
    *(_BYTE *)(a1 + 58) = a5;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_QWORD *)&v36 = *((_QWORD *)&v42 + 1);
    *(_QWORD *)&v27 = &v36;
    *((_QWORD *)&v27 + 1) = sub_141490720;
    sub_14149C0F0(&v44, &unk_14174CA70, &v27);
    v27 = v44;
    *(_QWORD *)&v28 = v45;
    v60 = 0;
    sub_140018650(&v36);
    v26 = v27;
    *(_QWORD *)(a1 + 24) = v28;
    *(_OWORD *)(a1 + 8) = v26;
    *(_QWORD *)a1 = 10;
    if ( !_InterlockedDecrement64(v56) )
      sub_140573D40(&v56);
    if ( !_InterlockedDecrement64(v57) )
      sub_140573D40(&v57);
    result = v58;
    if ( !_InterlockedDecrement64(v58) )
      return (volatile signed __int64 *)sub_140573D40(&v58);
  }
  return result;
}