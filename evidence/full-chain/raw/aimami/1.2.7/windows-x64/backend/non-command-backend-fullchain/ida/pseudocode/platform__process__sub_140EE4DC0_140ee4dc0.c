// win 1.2.7 | module src/platform/process.rs | ea 0x140ee4dc0 | name sub_140EE4DC0
// win 1.2.7 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140EE4DC0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  __m128 v14; // xmm3
  _DWORD *v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r14
  int *v23; // rdi
  int v24; // eax
  int v25; // r15d
  HANDLE Toolhelp32Snapshot; // rax
  void *v27; // r13
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  unsigned int *v33; // rcx
  __int64 v34; // rdx
  unsigned int *v35; // r11
  unsigned int *v36; // r9
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // ecx
  PROCESSENTRY32W pe; // [rsp+28h] [rbp-58h] BYREF
  __int64 v46; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v47; // [rsp+280h] [rbp+200h]
  __int64 v48; // [rsp+290h] [rbp+210h]
  __int128 v49; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v50; // [rsp+2B0h] [rbp+230h]
  __int128 v51; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v52; // [rsp+2C8h] [rbp+248h]
  __int128 v53; // [rsp+2D0h] [rbp+250h]
  __int128 v54; // [rsp+2E0h] [rbp+260h]
  __int128 v55; // [rsp+2F0h] [rbp+270h]
  __int64 v56; // [rsp+300h] [rbp+280h]
  char v57; // [rsp+310h] [rbp+290h]
  __int64 v58; // [rsp+318h] [rbp+298h] BYREF
  __int64 v59; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v60; // [rsp+328h] [rbp+2A8h]
  __int64 v61; // [rsp+330h] [rbp+2B0h]
  __int64 v62; // [rsp+338h] [rbp+2B8h]
  __int128 v63; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v64; // [rsp+350h] [rbp+2D0h]
  __int128 v65; // [rsp+360h] [rbp+2E0h]
  __int64 v66; // [rsp+370h] [rbp+2F0h]
  __int128 v67; // [rsp+380h] [rbp+300h] BYREF
  __int128 v68; // [rsp+390h] [rbp+310h]
  __int128 v69; // [rsp+3A0h] [rbp+320h]
  __int64 v70; // [rsp+3B0h] [rbp+330h]
  int *v71; // [rsp+3C0h] [rbp+340h]
  unsigned int v72; // [rsp+3C8h] [rbp+348h]
  int v73; // [rsp+3CCh] [rbp+34Ch]
  __int64 v74; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v75; // [rsp+3D8h] [rbp+358h]
  __int64 v76; // [rsp+3E0h] [rbp+360h]
  __int64 v77; // [rsp+3E8h] [rbp+368h]
  char v78; // [rsp+3F7h] [rbp+377h] BYREF
  unsigned int *v79; // [rsp+3F8h] [rbp+378h]
  __int64 v80; // [rsp+400h] [rbp+380h]

  v80 = -2;
  v3 = a1;
  if ( !a3 )
  {
    v8 = 4;
    v4 = 0;
    goto LABEL_6;
  }
  v4 = a3;
  v6 = 4 * a3;
  nullsub_1(a1);
  v7 = sub_140001650(v6, 4);
  if ( !v7 )
    sub_141938D2B(4, v6);
  v8 = v7;
  if ( v4 > 8 )
  {
    v11 = 8;
    if ( (v4 & 7) != 0 )
      v11 = v4 & 7;
    v9 = v4 - v11;
    v12 = (unsigned int *)(a2 + 224);
    v13 = 0;
    do
    {
      v14 = _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)*(v12 - 24), (__m128)*(v12 - 16)),
              _mm_unpacklo_ps((__m128)*(v12 - 8), (__m128)*v12));
      *(__m128 *)(v8 + 4 * v13) = _mm_movelh_ps(
                                    _mm_unpacklo_ps((__m128)*(v12 - 56), (__m128)*(v12 - 48)),
                                    _mm_unpacklo_ps((__m128)*(v12 - 40), (__m128)*(v12 - 32)));
      *(__m128 *)(v8 + 4 * v13 + 16) = v14;
      v13 += 8;
      v12 += 64;
    }
    while ( v9 != v13 );
  }
  else
  {
    v9 = 0;
  }
  v15 = (_DWORD *)(32 * v9 + a2);
  do
  {
    *(_DWORD *)(v8 + 4 * v9++) = *v15;
    v15 += 8;
  }
  while ( v4 != v9 );
  v16 = 1;
  v17 = 1;
  v79 = (unsigned int *)v8;
  if ( v4 == 1 )
    goto LABEL_15;
  if ( v4 >= 0x15 )
  {
    v77 = v6;
    sub_140EA2490(v8, v4, &v78);
  }
  else
  {
    v33 = (unsigned int *)(v8 + 4);
    v34 = 4;
    v35 = v79;
    do
    {
      v37 = *(v33 - 1);
      v38 = *v33;
      if ( *v33 < v37 )
      {
        v39 = v34;
        do
        {
          *(unsigned int *)((char *)v35 + v39) = v37;
          if ( v39 == 4 )
          {
            v36 = v35;
            goto LABEL_59;
          }
          v37 = *(unsigned int *)((char *)v35 + v39 - 8);
          v39 -= 4;
        }
        while ( v38 < v37 );
        v36 = (unsigned int *)((char *)v35 + v39);
LABEL_59:
        *v36 = v38;
      }
      ++v33;
      v34 += 4;
    }
    while ( v33 != (unsigned int *)(v8 + 4 * v4) );
  }
  v40 = 0;
  v8 = (__int64)v79;
  while ( v79[v40 + 1] != v79[v40] )
  {
    if ( v4 - 1 == ++v40 )
    {
      v16 = v4;
      goto LABEL_79;
    }
  }
  v41 = v40 + 2;
  v16 = v40 + 1;
  if ( v40 + 2 < v4 )
  {
    if ( (((_BYTE)v4 - (_BYTE)v40) & 1) != 0 )
    {
      v42 = v79[v40 + 2];
      if ( v42 != v79[v40] )
      {
        v79[v40 + 1] = v42;
        v16 = v40 + 2;
      }
      v41 = v40 + 3;
    }
    if ( v4 - 3 == v40 )
    {
LABEL_78:
      if ( v16 )
        goto LABEL_79;
LABEL_6:
      *(_QWORD *)v3 = -1;
      v10 = v4;
      if ( v4 )
        goto LABEL_52;
      return;
    }
    while ( 1 )
    {
      v43 = *(_DWORD *)(v8 + 4 * v41);
      if ( v43 == *(_DWORD *)(v8 + 4 * v16 - 4) )
      {
        v44 = *(_DWORD *)(v8 + 4 * v41 + 4);
        if ( v44 != *(_DWORD *)(v8 + 4 * v16 - 4) )
          goto LABEL_85;
      }
      else
      {
        *(_DWORD *)(v8 + 4 * v16++) = v43;
        v44 = *(_DWORD *)(v8 + 4 * v41 + 4);
        if ( v44 != *(_DWORD *)(v8 + 4 * v16 - 4) )
LABEL_85:
          *(_DWORD *)(v8 + 4 * v16++) = v44;
      }
      v41 += 2;
      if ( v4 == v41 )
        goto LABEL_78;
    }
  }
LABEL_79:
  v17 = v4;
LABEL_15:
  v77 = v17;
  sub_140EEAD80(&v59, v8, v16);
  sub_14168A510(&pe, aTaskkill, 8);
  *(_DWORD *)&pe.szExeFile[64] = 0x8000000;
  v18 = v60;
  v19 = v61;
  if ( v61 )
  {
    v20 = v60 + 24 * v61;
    v21 = v60;
    do
    {
      sub_14168A3F0(&pe, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
      v21 += 24;
    }
    while ( v21 != v20 );
  }
  sub_14168DB90(&v63, &pe);
  if ( (_QWORD)v63 == -1 )
  {
    v74 = *((_QWORD *)&v63 + 1);
    *(_QWORD *)&v67 = &v74;
    *((_QWORD *)&v67 + 1) = sub_1416BB0B0;
    sub_1416ABFD0(&v49, &unk_141A5751D, &v67);
    v67 = v49;
    *(_QWORD *)&v68 = v50;
    if ( (unsigned int)(v74 & 3) - 2 >= 2 && (v74 & 3) != 0 )
    {
      v58 = v74 - 1;
      v57 = 3;
      sub_1416BCB00(&v58);
    }
    v28 = v67;
    v29 = v68;
    v30 = v69;
    v47 = v69;
    v53 = v67;
    v54 = v68;
    v55 = v69;
    v56 = v70;
    *(_QWORD *)(v3 + 56) = v70;
    *(_OWORD *)(v3 + 40) = v30;
    *(_OWORD *)(v3 + 24) = v29;
    *(_OWORD *)(v3 + 8) = v28;
    *(_QWORD *)v3 = 10;
    sub_14029BE30(&pe);
    v8 = (__int64)v79;
    if ( !v19 )
      goto LABEL_49;
LABEL_45:
    v31 = (_QWORD *)(v18 + 8);
    do
    {
      v32 = *(v31 - 1);
      if ( v32 )
        sub_140001660(*v31, v32, 1);
      v31 += 3;
      --v19;
    }
    while ( v19 );
    goto LABEL_49;
  }
  v48 = v66;
  v53 = v63;
  v54 = v64;
  v55 = v65;
  v56 = v66;
  v70 = v66;
  v69 = v65;
  v68 = v64;
  v67 = v63;
  sub_14029BE30(&pe);
  v22 = -1;
  if ( !(_DWORD)v70 )
    goto LABEL_35;
  v72 = v70;
  v23 = (int *)v79;
  v62 = v16;
  v24 = (_DWORD)v79 + 4 * v16;
  v71 = (int *)&v79[v16];
  LOBYTE(v24) = 1;
  v75 = v3;
  v76 = v18;
  while ( 1 )
  {
    v73 = v24;
LABEL_22:
    v25 = *v23++;
    Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
    if ( Toolhelp32Snapshot == (HANDLE)-1LL )
      goto LABEL_29;
    v27 = Toolhelp32Snapshot;
    sub_1418F4C70(&pe, 0, 568);
    pe.dwSize = 568;
    if ( Process32FirstW(v27, &pe) )
      break;
    CloseHandle(v27);
LABEL_29:
    v24 = 0;
    v3 = v75;
    v18 = v76;
    if ( v23 == v71 )
      goto LABEL_32;
  }
  do
  {
    if ( pe.th32ProcessID == v25 )
    {
      CloseHandle(v27);
      v3 = v75;
      v18 = v76;
      goto LABEL_32;
    }
  }
  while ( Process32NextW(v27, &pe) );
  CloseHandle(v27);
  if ( v23 != v71 )
    goto LABEL_22;
  v3 = v75;
  v18 = v76;
  if ( (v73 & 1) == 0 )
  {
LABEL_32:
    sub_140F985D0(&pe, v72);
    *(_QWORD *)&v64 = pe.th32DefaultHeapID;
    v63 = *(_OWORD *)&pe.dwSize;
    v46 = v62;
    *(_QWORD *)&pe.dwSize = &v63;
    *(_QWORD *)&pe.th32ProcessID = sub_1400015F0;
    pe.th32DefaultHeapID = (ULONG_PTR)&v46;
    *(_QWORD *)&pe.th32ModuleID = sub_1416BCB10;
    sub_1416ABFD0(&v51, &unk_141A5A56D, &pe);
    if ( (_QWORD)v63 )
      sub_140001660(*((_QWORD *)&v63 + 1), v63, 1);
    *(_QWORD *)(v3 + 24) = v52;
    *(_OWORD *)(v3 + 8) = v51;
    v22 = 10;
  }
LABEL_35:
  *(_QWORD *)v3 = v22;
  if ( (_QWORD)v67 )
    sub_140001660(*((_QWORD *)&v67 + 1), v67, 1);
  v8 = (__int64)v79;
  if ( *((_QWORD *)&v68 + 1) )
    sub_140001660(v69, *((_QWORD *)&v68 + 1), 1);
  if ( v19 )
    goto LABEL_45;
LABEL_49:
  if ( v59 )
    sub_140001660(v18, 24 * v59, 8);
  v10 = v77;
  if ( v77 )
LABEL_52:
    sub_140001660(v8, 4 * v10, 4);
}
