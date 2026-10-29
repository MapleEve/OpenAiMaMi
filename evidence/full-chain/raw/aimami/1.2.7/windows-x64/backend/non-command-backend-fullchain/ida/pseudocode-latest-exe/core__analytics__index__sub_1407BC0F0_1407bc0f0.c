// win 1.2.7 latest-exe | module src/core/analytics/index.rs | ea 0x1407bc0f0 | successor of pre-update 0x140ebe600 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.98, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1407BC0F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  void *v8; // rdx
  __int64 v9; // rdx
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
  _QWORD *v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rbx
  _QWORD *v32; // r13
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
  if ( sub_1416BFE10(&v38, a2, a3) != 1 )
  {
    hObject = v8;
    sub_1416B2180(&v38, &hObject);
    if ( (_DWORD)v38 == 2 )
    {
      v11 = v39;
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v11;
      *(_QWORD *)a1 = 1;
LABEL_29:
      CloseHandle(hObject);
      return a1;
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
      nullsub_1(v10, v9);
      v15 = 1;
      v19 = sub_140001680(v14, 1);
      if ( !v19 )
LABEL_13:
        sub_14196B2DB(v15, v14);
      a4 = v18;
    }
    else
    {
      v19 = 1;
    }
    v61 = 1;
    v50 = (__int64 (__fastcall *)())v19;
    v49 = (_QWORD *)v14;
    v20 = sub_140C45960(&hObject, v19, v14);
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
      if ( sub_1416D07B0(&hObject, 0, v21) != 1 )
      {
        v25 = (_QWORD *)(a4 - v21);
        if ( (__int64)(a4 - v21) >= 0 )
        {
          v46 = a4;
          v27 = 1;
          if ( a4 == v21 || (nullsub_1(v23, v22), v26 = 1, (v27 = sub_140001680(v25, 1)) != 0) )
          {
            v47 = v21;
            v60 = 1;
            v59 = 1;
            v52 = (__int64 (__fastcall *)())v27;
            v51 = v25;
            v28 = sub_140C45960(&hObject, v27, v25);
            if ( !v28 )
            {
              v60 = 1;
              v59 = 1;
              v29 = sub_140832490((unsigned int)v56, v17);
              v31 = v30;
              _mm_storel_ps((double *)((char *)&v53 + 4), v16);
              LODWORD(v53) = 1;
              v38 = &v53;
              v39 = sub_1408412C0;
              v60 = 1;
              v59 = 1;
              sub_1416DAFA0(&v36, &unk_141A48A7D, &v38);
              v45 = v29;
              v53 = v49;
              v54 = v50;
              v55 = v49;
              v58 = 1;
              sub_1407841A0(&v38, &v53);
              v35[0] = &v38;
              v35[1] = sub_140759D50;
              v58 = 1;
              sub_1416DAFA0(&v53, &unk_141A48A7D, v35);
              v56 = v53;
              v48 = v54;
              v32 = v55;
              v53 = v51;
              v54 = v52;
              v55 = v51;
              sub_1407841A0(&v38, &v53);
              v53 = &v38;
              v54 = sub_140759D50;
              sub_1416DAFA0(&v33, &unk_141A48A7D, &v53);
              *(_QWORD *)(a1 + 48) = v37;
              *(_OWORD *)(a1 + 32) = v36;
              *(_QWORD *)(a1 + 56) = v56;
              *(_QWORD *)(a1 + 64) = v48;
              *(_QWORD *)(a1 + 72) = v32;
              *(_OWORD *)(a1 + 80) = v33;
              *(_QWORD *)(a1 + 96) = v34;
              *(_QWORD *)(a1 + 24) = v31;
              *(_QWORD *)(a1 + 16) = v45;
              *(_QWORD *)(a1 + 104) = v12;
              *(_QWORD *)(a1 + 112) = v13;
              *(_QWORD *)a1 = 0;
              goto LABEL_29;
            }
            *(_QWORD *)(a1 + 8) = 2;
            *(_QWORD *)(a1 + 16) = v28;
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
          v26 = 0;
        }
        v61 = 1;
        sub_14196B2DB(v26, v25);
      }
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v22;
    }
    *(_QWORD *)a1 = 1;
    goto LABEL_27;
  }
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)a1 = 1;
  return a1;
}
