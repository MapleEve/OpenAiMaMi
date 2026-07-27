// module: codexmate_lib/platform/process
// addr: 0x1403f7aa0
// name: sub_1403F7AA0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1403F7AA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // rcx
  __int64 v12; // rdx
  __m128 v13; // xmm3
  _DWORD *v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r14
  int *v22; // rdi
  int v23; // eax
  int v24; // r15d
  HANDLE Toolhelp32Snapshot; // rax
  void *v26; // r13
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  _QWORD *v30; // rsi
  __int64 v31; // rdx
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  unsigned int *v34; // r11
  unsigned int *v35; // r9
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // ecx
  PROCESSENTRY32W pe; // [rsp+28h] [rbp-58h] BYREF
  __int64 v45; // [rsp+260h] [rbp+1E0h] BYREF
  __int128 v46; // [rsp+280h] [rbp+200h]
  __int64 v47; // [rsp+290h] [rbp+210h]
  __int128 v48; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v49; // [rsp+2B0h] [rbp+230h]
  __int128 v50; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v51; // [rsp+2C8h] [rbp+248h]
  __int128 v52; // [rsp+2D0h] [rbp+250h]
  __int128 v53; // [rsp+2E0h] [rbp+260h]
  __int128 v54; // [rsp+2F0h] [rbp+270h]
  __int64 v55; // [rsp+300h] [rbp+280h]
  __int64 v56; // [rsp+310h] [rbp+290h] BYREF
  __int64 v57; // [rsp+318h] [rbp+298h]
  __int64 v58; // [rsp+320h] [rbp+2A0h]
  __int64 v59; // [rsp+328h] [rbp+2A8h]
  __int128 v60; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v61; // [rsp+340h] [rbp+2C0h]
  __int128 v62; // [rsp+350h] [rbp+2D0h]
  __int64 v63; // [rsp+360h] [rbp+2E0h]
  __int128 v64; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v65; // [rsp+380h] [rbp+300h]
  __int128 v66; // [rsp+390h] [rbp+310h]
  __int64 v67; // [rsp+3A0h] [rbp+320h]
  int *v68; // [rsp+3B0h] [rbp+330h]
  unsigned int v69; // [rsp+3B8h] [rbp+338h]
  int v70; // [rsp+3BCh] [rbp+33Ch]
  __int64 v71; // [rsp+3C0h] [rbp+340h] BYREF
  __int64 v72; // [rsp+3C8h] [rbp+348h]
  __int64 v73; // [rsp+3D0h] [rbp+350h]
  unsigned __int64 v74; // [rsp+3D8h] [rbp+358h]
  char v75; // [rsp+3E7h] [rbp+367h] BYREF
  unsigned int *v76; // [rsp+3E8h] [rbp+368h]
  __int64 v77; // [rsp+3F0h] [rbp+370h]

  v77 = -2;
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
    sub_1416C2D4B(4, v6);
  v8 = v7;
  if ( v4 > 8 )
  {
    v10 = 8;
    if ( (v4 & 7) != 0 )
      v10 = v4 & 7;
    v9 = v4 - v10;
    v11 = (unsigned int *)(a2 + 224);
    v12 = 0;
    do
    {
      v13 = _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)*(v11 - 24), (__m128)*(v11 - 16)),
              _mm_unpacklo_ps((__m128)*(v11 - 8), (__m128)*v11));
      *(__m128 *)(v8 + 4 * v12) = _mm_movelh_ps(
                                    _mm_unpacklo_ps((__m128)*(v11 - 56), (__m128)*(v11 - 48)),
                                    _mm_unpacklo_ps((__m128)*(v11 - 40), (__m128)*(v11 - 32)));
      *(__m128 *)(v8 + 4 * v12 + 16) = v13;
      v12 += 8;
      v11 += 64;
    }
    while ( v9 != v12 );
  }
  else
  {
    v9 = 0;
  }
  v14 = (_DWORD *)(32 * v9 + a2);
  do
  {
    *(_DWORD *)(v8 + 4 * v9++) = *v14;
    v14 += 8;
  }
  while ( v4 != v9 );
  v15 = 1;
  v16 = 1;
  v76 = (unsigned int *)v8;
  if ( v4 == 1 )
    goto LABEL_14;
  if ( v4 >= 0x15 )
  {
    v74 = v6;
    sub_140B5B300(v8, v4, &v75);
  }
  else
  {
    v32 = (unsigned int *)(v8 + 4);
    v33 = 4;
    v34 = v76;
    do
    {
      v36 = *(v32 - 1);
      v37 = *v32;
      if ( *v32 < v36 )
      {
        v38 = v33;
        do
        {
          *(unsigned int *)((char *)v34 + v38) = v36;
          if ( v38 == 4 )
          {
            v35 = v34;
            goto LABEL_55;
          }
          v36 = *(unsigned int *)((char *)v34 + v38 - 8);
          v38 -= 4;
        }
        while ( v37 < v36 );
        v35 = (unsigned int *)((char *)v34 + v38);
LABEL_55:
        *v35 = v37;
      }
      ++v32;
      v33 += 4;
    }
    while ( v32 != (unsigned int *)(v8 + 4 * v4) );
  }
  v39 = 0;
  v8 = (__int64)v76;
  while ( v76[v39 + 1] != v76[v39] )
  {
    if ( v4 - 1 == ++v39 )
    {
      v15 = v4;
      goto LABEL_75;
    }
  }
  v40 = v39 + 2;
  v15 = v39 + 1;
  if ( v39 + 2 < v4 )
  {
    if ( (((_BYTE)v4 - (_BYTE)v39) & 1) != 0 )
    {
      v41 = v76[v39 + 2];
      if ( v41 != v76[v39] )
      {
        v76[v39 + 1] = v41;
        v15 = v39 + 2;
      }
      v40 = v39 + 3;
    }
    if ( v4 - 3 == v39 )
    {
LABEL_74:
      if ( v15 )
        goto LABEL_75;
LABEL_6:
      *(_QWORD *)v3 = -1;
      goto LABEL_47;
    }
    while ( 1 )
    {
      v42 = *(_DWORD *)(v8 + 4 * v40);
      if ( v42 == *(_DWORD *)(v8 + 4 * v15 - 4) )
      {
        v43 = *(_DWORD *)(v8 + 4 * v40 + 4);
        if ( v43 != *(_DWORD *)(v8 + 4 * v15 - 4) )
          goto LABEL_81;
      }
      else
      {
        *(_DWORD *)(v8 + 4 * v15++) = v42;
        v43 = *(_DWORD *)(v8 + 4 * v40 + 4);
        if ( v43 != *(_DWORD *)(v8 + 4 * v15 - 4) )
LABEL_81:
          *(_DWORD *)(v8 + 4 * v15++) = v43;
      }
      v40 += 2;
      if ( v4 == v40 )
        goto LABEL_74;
    }
  }
LABEL_75:
  v16 = v4;
LABEL_14:
  v74 = v16;
  sub_1403FBCA0(&v56, v8, v15);
  sub_14147B720(&pe, aTaskkill, 8);
  *(_DWORD *)&pe.szExeFile[64] = 0x8000000;
  v17 = v57;
  v18 = v58;
  if ( v58 )
  {
    v19 = v57 + 24 * v58;
    v20 = v57;
    do
    {
      sub_14147B600(&pe, *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 16));
      v20 += 24;
    }
    while ( v20 != v19 );
  }
  sub_141481530(&v60, &pe);
  if ( (_QWORD)v60 == -1 )
  {
    v71 = *((_QWORD *)&v60 + 1);
    *(_QWORD *)&v64 = &v71;
    *((_QWORD *)&v64 + 1) = sub_141490720;
    sub_14149C0F0(&v48, &unk_14174D56F, &v64);
    v64 = v48;
    *(_QWORD *)&v65 = v49;
    sub_140018650(&v71);
    v27 = v64;
    v28 = v65;
    v29 = v66;
    v46 = v66;
    v52 = v64;
    v53 = v65;
    v54 = v66;
    v55 = v67;
    *(_QWORD *)(v3 + 56) = v67;
    *(_OWORD *)(v3 + 40) = v29;
    *(_OWORD *)(v3 + 24) = v28;
    *(_OWORD *)(v3 + 8) = v27;
    *(_QWORD *)v3 = 10;
    sub_14034D6C0((__int64)&pe);
    v8 = (__int64)v76;
    v4 = v74;
    if ( !v18 )
      goto LABEL_45;
    goto LABEL_41;
  }
  v47 = v63;
  v52 = v60;
  v53 = v61;
  v54 = v62;
  v55 = v63;
  v67 = v63;
  v66 = v62;
  v65 = v61;
  v64 = v60;
  sub_14034D6C0((__int64)&pe);
  v21 = -1;
  if ( !(_DWORD)v67 )
    goto LABEL_34;
  v69 = v67;
  v22 = (int *)v76;
  v59 = v15;
  v23 = (_DWORD)v76 + 4 * v15;
  v68 = (int *)&v76[v15];
  LOBYTE(v23) = 1;
  v72 = v3;
  v73 = v17;
  while ( 1 )
  {
    v70 = v23;
LABEL_21:
    v24 = *v22++;
    Toolhelp32Snapshot = CreateToolhelp32Snapshot(2u, 0);
    if ( Toolhelp32Snapshot == (HANDLE)-1LL )
      goto LABEL_28;
    v26 = Toolhelp32Snapshot;
    sub_1416848B0(&pe, 0, 568);
    pe.dwSize = 568;
    if ( Process32FirstW(v26, &pe) )
      break;
    CloseHandle(v26);
LABEL_28:
    v23 = 0;
    v3 = v72;
    v17 = v73;
    if ( v22 == v68 )
      goto LABEL_31;
  }
  do
  {
    if ( pe.th32ProcessID == v24 )
    {
      CloseHandle(v26);
      v3 = v72;
      v17 = v73;
      goto LABEL_31;
    }
  }
  while ( Process32NextW(v26, &pe) );
  CloseHandle(v26);
  if ( v22 != v68 )
    goto LABEL_21;
  v3 = v72;
  v17 = v73;
  if ( (v70 & 1) == 0 )
  {
LABEL_31:
    sub_14041CA70(&pe, v69);
    *(_QWORD *)&v61 = pe.th32DefaultHeapID;
    v60 = *(_OWORD *)&pe.dwSize;
    v45 = v59;
    *(_QWORD *)&pe.dwSize = &v60;
    *(_QWORD *)&pe.th32ProcessID = sub_1400015F0;
    pe.th32DefaultHeapID = (ULONG_PTR)&v45;
    *(_QWORD *)&pe.th32ModuleID = sub_1414AC520;
    sub_14149C0F0(&v50, &unk_141751AF7, &pe);
    if ( (_QWORD)v60 )
      sub_140001660(*((_QWORD *)&v60 + 1), v60, 1);
    *(_QWORD *)(v3 + 24) = v51;
    *(_OWORD *)(v3 + 8) = v50;
    v21 = 10;
  }
LABEL_34:
  *(_QWORD *)v3 = v21;
  if ( (_QWORD)v64 )
    sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
  v8 = (__int64)v76;
  v4 = v74;
  if ( *((_QWORD *)&v65 + 1) )
    sub_140001660(v66, *((_QWORD *)&v65 + 1), 1);
  if ( v18 )
  {
LABEL_41:
    v30 = (_QWORD *)(v17 + 8);
    do
    {
      v31 = *(v30 - 1);
      if ( v31 )
        sub_140001660(*v30, v31, 1);
      v30 += 3;
      --v18;
    }
    while ( v18 );
  }
LABEL_45:
  if ( v56 )
    sub_140001660(v17, 24 * v56, 8);
LABEL_47:
  if ( v4 )
    sub_140001660(v8, 4 * v4, 4);
}