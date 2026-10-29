// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140ebe600 | name sub_140EBE600
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140EBE600(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(); // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r14
  __m128 v16; // xmm6
  unsigned int v17; // ebx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rbx
  _QWORD *v31; // r13
  __int128 v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 v34; // [rsp+30h] [rbp-50h]
  _QWORD v35[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+58h] [rbp-28h]
  _QWORD **v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+68h] [rbp-18h]
  int v40; // [rsp+70h] [rbp-10h]
  _BYTE v41[20]; // [rsp+74h] [rbp-Ch]
  int v42; // [rsp+90h] [rbp+10h]
  unsigned int v43; // [rsp+94h] [rbp+14h]
  unsigned __int64 v44; // [rsp+98h] [rbp+18h]
  __int64 v45; // [rsp+B8h] [rbp+38h]
  unsigned __int64 v46; // [rsp+C0h] [rbp+40h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+48h]
  __int64 (__fastcall *v48)(); // [rsp+D0h] [rbp+50h]
  _QWORD *v49; // [rsp+D8h] [rbp+58h]
  __int64 (__fastcall *v50)(); // [rsp+E0h] [rbp+60h]
  _QWORD *v51; // [rsp+E8h] [rbp+68h]
  __int64 (__fastcall *v52)(); // [rsp+F0h] [rbp+70h]
  _QWORD *v53; // [rsp+F8h] [rbp+78h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+100h] [rbp+80h]
  _QWORD *v55; // [rsp+108h] [rbp+88h]
  _QWORD *v56; // [rsp+110h] [rbp+90h]
  HANDLE hObject; // [rsp+118h] [rbp+98h] BYREF
  char v58; // [rsp+124h] [rbp+A4h]
  char v59; // [rsp+125h] [rbp+A5h]
  char v60; // [rsp+126h] [rbp+A6h]
  char v61; // [rsp+127h] [rbp+A7h]
  __int64 v62; // [rsp+128h] [rbp+A8h]

  v62 = -2;
  LODWORD(v38) = 0;
  v39 = nullptr;
  v40 = 7;
  *(_QWORD *)v41 = 0x100000000LL;
  *(_QWORD *)&v41[5] = 0;
  v8 = sub_141690E40(&v38);
  if ( v8 != 1 )
  {
    hObject = v9;
    sub_1416831B0(&v38, &hObject);
    if ( (_DWORD)v38 == 2 )
    {
      v11 = v39;
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 1;
LABEL_29:
      LODWORD(v8) = CloseHandle(hObject);
      return v8;
    }
    v12 = v44;
    v13 = 4096;
    if ( v44 < 0x1000 )
      v13 = v44;
    if ( (a5 & 1) != 0 )
      v13 = a6;
    v14 = v13;
    if ( v44 < v13 )
      v14 = v44;
    if ( v14 < 0 )
    {
      v15 = 0;
      goto LABEL_13;
    }
    v16 = (__m128)*(unsigned __int64 *)&v41[12];
    LODWORD(v56) = v42;
    v17 = v43;
    if ( v14 )
    {
      v18 = a4;
      nullsub_1(v10);
      v15 = 1;
      v19 = sub_140001680(v14, 1);
      if ( !v19 )
LABEL_13:
        sub_141938D2B(v15, v14);
      a4 = v18;
    }
    else
    {
      v19 = 1;
    }
    v61 = 1;
    v50 = (__int64 (__fastcall *)())v19;
    v49 = (_QWORD *)v14;
    v20 = sub_140BB1420(&hObject, v19, v14);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v20;
    }
    else
    {
      if ( v12 < a4 )
        a4 = v12;
      v21 = a4 - 4096;
      if ( a4 < 0x1000 )
        v21 = 0;
      v61 = 1;
      if ( sub_1416A17E0(&hObject, 0) != 1 )
      {
        v24 = (_QWORD *)(a4 - v21);
        if ( (__int64)(a4 - v21) >= 0 )
        {
          v46 = a4;
          v26 = 1;
          if ( a4 == v21 || (nullsub_1(v23), v25 = 1, (v26 = sub_140001680(v24, 1)) != 0) )
          {
            v47 = v21;
            v60 = 1;
            v59 = 1;
            v52 = (__int64 (__fastcall *)())v26;
            v51 = v24;
            v27 = sub_140BB1420(&hObject, v26, v24);
            if ( !v27 )
            {
              v60 = 1;
              v59 = 1;
              v28 = sub_140F8DEA0((unsigned int)v56, v17);
              v30 = v29;
              _mm_storel_ps((double *)((char *)&v53 + 4), v16);
              LODWORD(v53) = 1;
              v38 = &v53;
              v39 = sub_140F9C520;
              v60 = 1;
              v59 = 1;
              sub_1416ABFD0(&v36, &unk_141A59367, &v38);
              v45 = v28;
              v53 = v49;
              v54 = v50;
              v55 = v49;
              v58 = 1;
              sub_140EB55A0(&v38, &v53);
              v35[0] = &v38;
              v35[1] = sub_140364610;
              v58 = 1;
              sub_1416ABFD0(&v53, &unk_141A59367, v35);
              v56 = v53;
              v48 = v54;
              v31 = v55;
              v53 = v51;
              v54 = v52;
              v55 = v51;
              sub_140EB55A0(&v38, &v53);
              v53 = &v38;
              v54 = sub_140364610;
              sub_1416ABFD0(&v33, &unk_141A59367, &v53);
              *(_QWORD *)(a1 + 48) = v37;
              *(_OWORD *)(a1 + 32) = v36;
              *(_QWORD *)(a1 + 56) = v56;
              *(_QWORD *)(a1 + 64) = v48;
              *(_QWORD *)(a1 + 72) = v31;
              *(_OWORD *)(a1 + 80) = v33;
              *(_QWORD *)(a1 + 96) = v34;
              *(_QWORD *)(a1 + 24) = v30;
              *(_QWORD *)(a1 + 16) = v45;
              *(_QWORD *)(a1 + 104) = v12;
              *(_QWORD *)(a1 + 112) = v13;
              *(_QWORD *)a1 = 0;
              goto LABEL_29;
            }
            *(_QWORD *)(a1 + 8) = 2;
            *(_QWORD *)(a1 + 16) = v27;
            *(_QWORD *)a1 = 1;
            if ( v46 != v47 )
              sub_140001660(v52, v51, 1);
LABEL_27:
            if ( v49 )
              sub_140001660(v50, v49, 1);
            goto LABEL_29;
          }
        }
        else
        {
          v25 = 0;
        }
        v61 = 1;
        sub_141938D2B(v25, v24);
      }
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v22;
    }
    *(_QWORD *)a1 = 1;
    goto LABEL_27;
  }
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)a1 = 1;
  return v8;
}
