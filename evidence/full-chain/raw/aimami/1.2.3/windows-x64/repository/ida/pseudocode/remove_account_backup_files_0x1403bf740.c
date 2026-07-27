// module: codexmate_lib/core/repository
// addr: 0x1403bf740
// name: remove_account_backup_files
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::remove_account_backup_files | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall remove_account_backup_files(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int128 v12; // kr00_16
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  volatile signed __int64 *v18; // r14
  volatile signed __int64 *v19; // rdi
  __int64 v20; // rdi
  signed __int64 v21; // rt0
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  volatile signed __int64 *v27[2]; // [rsp+28h] [rbp-58h] BYREF
  char v28[584]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v29; // [rsp+280h] [rbp+200h] BYREF
  _OWORD v30[4]; // [rsp+290h] [rbp+210h] BYREF
  void *v31; // [rsp+2D0h] [rbp+250h]
  __int128 v32; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v33; // [rsp+500h] [rbp+480h] BYREF
  __int128 v34; // [rsp+510h] [rbp+490h]
  __int128 v35; // [rsp+520h] [rbp+4A0h]
  __int128 v36; // [rsp+530h] [rbp+4B0h]
  void *v37; // [rsp+540h] [rbp+4C0h]
  __int128 *v38; // [rsp+548h] [rbp+4C8h]
  __int128 v39; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v40; // [rsp+770h] [rbp+6F0h]
  __int128 v41; // [rsp+778h] [rbp+6F8h] BYREF
  __int64 v42; // [rsp+788h] [rbp+708h]
  __int128 *v43; // [rsp+790h] [rbp+710h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+798h] [rbp+718h]
  __int64 *v45; // [rsp+7A0h] [rbp+720h]
  __int64 (__fastcall *v46)(); // [rsp+7A8h] [rbp+728h]
  __int64 v47; // [rsp+7B0h] [rbp+730h] BYREF
  const char *v48; // [rsp+7B8h] [rbp+738h]
  __int64 v49; // [rsp+7C0h] [rbp+740h]
  __int64 v50; // [rsp+7C8h] [rbp+748h]
  const char *v51; // [rsp+7D0h] [rbp+750h]
  __int64 v52; // [rsp+7D8h] [rbp+758h]
  __int64 v53; // [rsp+7E0h] [rbp+760h]
  const char *v54; // [rsp+7E8h] [rbp+768h]
  __int64 v55; // [rsp+7F0h] [rbp+770h]
  __int64 v56; // [rsp+7F8h] [rbp+778h]
  void *v57; // [rsp+800h] [rbp+780h]
  __int128 **v58; // [rsp+808h] [rbp+788h]
  __int128 v59; // [rsp+810h] [rbp+790h] BYREF
  __int64 v60; // [rsp+820h] [rbp+7A0h]
  __int64 v61; // [rsp+828h] [rbp+7A8h] BYREF
  __int64 v62; // [rsp+830h] [rbp+7B0h]
  __int64 v63; // [rsp+838h] [rbp+7B8h]
  __int64 v64; // [rsp+840h] [rbp+7C0h]
  int v65; // [rsp+848h] [rbp+7C8h] BYREF
  char v66; // [rsp+84Fh] [rbp+7CFh] BYREF
  __int64 v67; // [rsp+850h] [rbp+7D0h]

  v67 = -2;
  v59 = a6;
  sub_141486710(&v32, a2, a3);
  if ( (_DWORD)v32 == 2 )
  {
    *((_QWORD *)&v29 + 1) = *((_QWORD *)&v32 + 1);
    *(_QWORD *)&v29 = 2;
LABEL_4:
    result = sub_140018650((char *)&v29 + 8);
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v29 = v32;
  v31 = v37;
  v30[3] = v36;
  v30[2] = v35;
  v30[1] = v34;
  v30[0] = v33;
  if ( (_QWORD)v32 == 2 )
    goto LABEL_4;
  sub_141486800(&v32, a2, a3);
  v12 = v32;
  if ( (_QWORD)v32 == 2 )
  {
    v27[0] = *((volatile signed __int64 **)&v32 + 1);
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      *(_QWORD *)&v29 = &v59;
      *((_QWORD *)&v29 + 1) = sub_14041F680;
      *(_QWORD *)&v30[0] = v27;
      *((_QWORD *)&v30[0] + 1) = sub_141490720;
      *(_QWORD *)&v32 = 0;
      *((_QWORD *)&v32 + 1) = aCodexmateLibCo_16;
      v33 = 0x1Fu;
      *(_QWORD *)&v34 = aSrcCoreReposit;
      *((_QWORD *)&v34 + 1) = 22;
      *(_QWORD *)&v35 = 2;
      *((_QWORD *)&v35 + 1) = aCodexmateLibCo_16;
      *(_QWORD *)&v36 = 31;
      *((_QWORD *)&v36 + 1) = 0x1C200000001LL;
      v37 = &unk_141750511;
      v38 = &v29;
      sub_1412C36A0(&v66, &v32);
    }
    nullsub_1(v11);
    v13 = sub_140001650(48, 8);
    if ( !v13 )
      sub_1416C2D31(8, 48);
    v64 = v13;
    nullsub_1(v14);
    v15 = sub_140001650(a5, 1);
    if ( !v15 )
      sub_1416C2D4B(1, a5);
    v62 = v15;
    sub_141684120(v15, a4, a5);
    *(_QWORD *)&v32 = &v59;
    *((_QWORD *)&v32 + 1) = sub_14041F680;
    sub_14149C0F0(&v41, &unk_141750542, &v32);
    v16 = v64;
    *(_QWORD *)(v64 + 40) = v42;
    *(_OWORD *)(v16 + 24) = v41;
    *(_QWORD *)v16 = a5;
    *(_QWORD *)(v16 + 8) = v62;
    *(_QWORD *)(v16 + 16) = a5;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 1;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = 1;
    return sub_140018650(v27);
  }
  v62 = a4;
  sub_141684120(v30, &v33, 608);
  v29 = v12;
  v65 = 0;
  LODWORD(v64) = 0;
  while ( 1 )
  {
    sub_141493590(&v32, &v29);
    if ( (_DWORD)v32 != 1 )
      break;
    v18 = *((volatile signed __int64 **)&v32 + 1);
    v19 = (volatile signed __int64 *)v33;
    if ( *((_QWORD *)&v32 + 1) )
    {
      sub_141684120(v28, (char *)&v33 + 8, 584);
      v27[0] = v18;
      v27[1] = v19;
      sub_14147B870(&v47, v27);
      v63 = (__int64)v48;
      v20 = sub_141485EF0(v48, v49);
      if ( v47 )
        sub_140001660(v63, v47, 1);
      if ( v20 )
      {
        ++v65;
        v61 = v20;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v43 = &v59;
          v44 = sub_14041F680;
          v45 = &v61;
          v46 = sub_141490720;
          v47 = 0;
          v48 = aCodexmateLibCo_16;
          v49 = 31;
          v50 = 0;
          v51 = aSrcCoreReposit;
          v52 = 22;
          v53 = 2;
          v54 = aCodexmateLibCo_16;
          v55 = 31;
          v56 = 0x1DC00000001LL;
          v57 = &unk_1417504A8;
          v58 = &v43;
          sub_1412C36A0(&v66, &v47);
        }
        sub_140018650(&v61);
        if ( !_InterlockedDecrement64(v27[0]) )
LABEL_25:
          sub_140F8A980(v27);
      }
      else
      {
        LODWORD(v64) = v64 + 1;
        if ( !_InterlockedDecrement64(v27[0]) )
          goto LABEL_25;
      }
    }
    else
    {
      ++v65;
      v61 = v33;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v43 = &v59;
        v44 = sub_14041F680;
        v45 = &v61;
        v46 = sub_141490720;
        v47 = 0;
        v48 = aCodexmateLibCo_16;
        v49 = 31;
        v50 = 0;
        v51 = aSrcCoreReposit;
        v52 = 22;
        v53 = 2;
        v54 = aCodexmateLibCo_16;
        v55 = 31;
        v56 = 0x1D400000001LL;
        v57 = &unk_1417504DC;
        v58 = &v43;
        sub_1412C36A0(&v66, &v47);
      }
      sub_140018650(&v61);
    }
  }
  if ( (_QWORD)v29 )
    sub_1414908A0((char *)&v29 + 8);
  v21 = _InterlockedDecrement64(*(volatile signed __int64 **)&v30[0]);
  v22 = v62;
  if ( !v21 )
    sub_140F8A980(v30);
  if ( v65 )
  {
    nullsub_1(v17);
    v23 = sub_140001650(48, 8);
    if ( !v23 )
      sub_1416C2D31(8, 48);
    v63 = v23;
    nullsub_1(v24);
    v25 = sub_140001650(a5, 1);
    if ( !v25 )
      sub_1416C2D4B(1, a5);
    v60 = v25;
    sub_141684120(v25, v22, a5);
    *(_QWORD *)&v32 = &v65;
    *((_QWORD *)&v32 + 1) = sub_1414AB890;
    *(_QWORD *)&v33 = &v59;
    *((_QWORD *)&v33 + 1) = sub_14041F680;
    sub_14149C0F0(&v39, &unk_141750482, &v32);
    v26 = v63;
    *(_QWORD *)(v63 + 40) = v40;
    *(_OWORD *)(v26 + 24) = v39;
    *(_QWORD *)v26 = a5;
    *(_QWORD *)(v26 + 8) = v60;
    *(_QWORD *)(v26 + 16) = a5;
    result = 1;
  }
  else
  {
    v26 = 8;
    result = 0;
  }
  *(_DWORD *)a1 = v64;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v26;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}