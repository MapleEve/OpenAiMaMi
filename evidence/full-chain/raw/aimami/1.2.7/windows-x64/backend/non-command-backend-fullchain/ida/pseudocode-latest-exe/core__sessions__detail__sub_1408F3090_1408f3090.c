// win 1.2.7 latest-exe | module src/core/sessions/detail.rs | ea 0x1408f3090 | successor of pre-update 0x140f7c920 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.818, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_1408F3090(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  char v22; // r12
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  char v25; // al
  __int64 v26; // rax
  bool v27; // zf
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  bool v41; // r8
  __int128 *v42; // rdx
  __int128 *v43; // rax
  __int128 v44; // xmm0
  __int128 v45; // xmm0
  __int128 v46; // xmm0
  __int128 v47; // xmm0
  __int64 v49; // [rsp+20h] [rbp-60h] BYREF
  __int64 v50; // [rsp+28h] [rbp-58h]
  _BYTE v51[17]; // [rsp+30h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-28h]
  _QWORD *v53; // [rsp+78h] [rbp-8h]
  unsigned __int64 v54; // [rsp+80h] [rbp+0h]
  __int128 v55; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp+18h]
  HANDLE hObject; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v58; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v59; // [rsp+B0h] [rbp+30h]
  char v60; // [rsp+BDh] [rbp+3Dh]
  char v61; // [rsp+BEh] [rbp+3Eh] BYREF
  bool v62; // [rsp+BFh] [rbp+3Fh]
  __int64 v63; // [rsp+C0h] [rbp+40h]

  v63 = -2;
  LODWORD(v49) = 0;
  v50 = 0;
  *(_DWORD *)v51 = 7;
  *(_QWORD *)&v51[4] = 0x100000000LL;
  *(_QWORD *)&v51[9] = 0;
  if ( sub_1416BFE10(&v49, a2, a3) == 1 )
  {
    *a1 = 2;
    a1[1] = v6;
  }
  else
  {
    hObject = v6;
    sub_1416B2180(&v49, &hObject);
    if ( (_DWORD)v49 == 2 )
    {
      v9 = v50;
      *a1 = 2;
      a1[1] = v9;
      goto LABEL_70;
    }
    v53 = a1;
    v10 = v52;
    v54 = a4;
    v11 = a4 + 1;
    v12 = -1;
    if ( v11 )
      v12 = v11;
    v13 = 301;
    if ( v12 < 0x12D )
      v13 = v12;
    nullsub_1(v8, v7);
    v14 = sub_140001650((unsigned int)((_DWORD)v13 << 6), 8);
    if ( !v14 )
      sub_14196B2DB(8, (unsigned int)((_DWORD)v13 << 6));
    *(_QWORD *)&v55 = v13;
    *((_QWORD *)&v55 + 1) = v14;
    v56 = 0;
    v49 = 0;
    v50 = 1;
    *(_QWORD *)v51 = 0;
    v61 = 0;
    v16 = 0;
    v17 = 0;
LABEL_12:
    v18 = v56;
    if ( !v10 )
    {
      v24 = v54;
      if ( v56 < v12 )
      {
LABEL_35:
        v25 = sub_1408EDCC0(&v49, &v61, &v55);
        v18 = v56;
        v16 = (v16 | v25) & 1;
      }
LABEL_36:
      if ( (v16 & 1) == 0 )
      {
        v62 = v18 > v24;
        goto LABEL_40;
      }
      v62 = 1;
      v26 = *((_QWORD *)&v55 + 1);
      v28 = v18 - v24;
      v27 = v18 == v24;
      if ( v18 >= v24 )
        goto LABEL_56;
LABEL_41:
      v24 = v18;
      a1 = v53;
      goto LABEL_64;
    }
    if ( v56 >= v12 || v17 >= 0x4000000 )
    {
      v62 = 1;
      v24 = v54;
      v26 = *((_QWORD *)&v55 + 1);
      v28 = v56 - v54;
      v27 = v56 == v54;
      if ( v56 < v54 )
        goto LABEL_41;
      goto LABEL_56;
    }
    v19 = 0x4000000 - v17;
    if ( v10 < 0x4000000 - v17 )
      v19 = v10;
    if ( v19 >= 0x10000 )
      v19 = 0x10000;
    nullsub_1(v56, v15);
    v58 = sub_140001680(v19, 1);
    if ( !v58 )
      sub_14196B2DB(1, v19);
    v59 = v19;
    v10 -= v19;
    v60 = 1;
    if ( sub_1416D07B0(&hObject, 0, v10) != 1 )
    {
      v60 = 1;
      v20 = sub_140C45960(&hObject, v58, v59);
      if ( !v20 )
      {
        v62 = 1;
        v21 = v59;
        v17 += v59;
        while ( 1 )
        {
          v22 = *(_BYTE *)(v58 + v21 - 1);
          if ( v22 == 10 )
          {
            v16 = (sub_1408EDCC0(&v49, &v61, &v55) | v16) & 1;
            if ( v56 >= v12 )
            {
              sub_140001660(v58, v59, 1);
              v18 = v56;
              v24 = v54;
              if ( !v10 )
              {
                if ( v56 < v12 )
                  goto LABEL_35;
                goto LABEL_36;
              }
LABEL_40:
              v26 = *((_QWORD *)&v55 + 1);
              v28 = v18 - v24;
              v27 = v18 == v24;
              if ( v18 < v24 )
                goto LABEL_41;
LABEL_56:
              v56 = v24;
              a1 = v53;
              if ( !v27 )
              {
                v37 = (_QWORD *)((v24 << 6) + v26 + 32);
                do
                {
                  v38 = *(v37 - 1);
                  if ( v38 > 0 )
                    sub_140001660(*v37, v38, 1);
                  v39 = *(v37 - 4);
                  if ( v39 )
                    sub_140001660(*(v37 - 3), v39, 1);
                  v37 += 8;
                  --v28;
                }
                while ( v28 );
                v26 = *((_QWORD *)&v55 + 1);
                v24 = v56;
              }
LABEL_64:
              v40 = v24 >> 1;
              v41 = v62;
              if ( v24 >> 1 )
              {
                v42 = (__int128 *)((v24 << 6) + v26 - 16);
                v43 = (__int128 *)(v26 + 48);
                do
                {
                  v44 = *(v43 - 3);
                  *(v43 - 3) = *(v42 - 3);
                  *(v42 - 3) = v44;
                  v45 = *(v43 - 2);
                  *(v43 - 2) = *(v42 - 2);
                  *(v42 - 2) = v45;
                  v46 = *(v43 - 1);
                  *(v43 - 1) = *(v42 - 1);
                  *(v42 - 1) = v46;
                  v47 = *v43;
                  *v43 = *v42;
                  *v42 = v47;
                  v43 += 4;
                  v42 -= 4;
                  --v40;
                }
                while ( v40 );
              }
              a1[3] = v56;
              *(_OWORD *)(a1 + 1) = v55;
              *((_BYTE *)a1 + 32) = v41;
              *a1 = -1;
              v35 = v49;
              if ( v49 )
              {
                v34 = v50;
                v36 = 1;
LABEL_69:
                sub_140001660(v34, v35, v36);
              }
              goto LABEL_70;
            }
          }
          else if ( !v61 )
          {
            v23 = *(_QWORD *)v51;
            if ( *(_QWORD *)v51 >= 0x400000u )
            {
              *(_QWORD *)v51 = 0;
              v61 = 1;
              v16 = 1;
            }
            else
            {
              if ( *(_QWORD *)v51 == v49 )
                sub_14196B1D0(&v49, v20);
              *(_BYTE *)(v50 + v23) = v22;
              *(_QWORD *)v51 = v23 + 1;
            }
          }
          if ( !--v21 )
          {
            sub_140001660(v58, v59, 1);
            goto LABEL_12;
          }
        }
      }
    }
    v29 = v59;
    a1 = v53;
    *v53 = 2;
    a1[1] = v20;
    sub_140001660(v58, v29, 1);
    if ( v49 )
      sub_140001660(v50, v49, 1);
    v30 = v56;
    if ( v56 )
    {
      v31 = (_QWORD *)(*((_QWORD *)&v55 + 1) + 32LL);
      do
      {
        v32 = *(v31 - 1);
        if ( v32 > 0 )
          sub_140001660(*v31, v32, 1);
        v33 = *(v31 - 4);
        if ( v33 )
          sub_140001660(*(v31 - 3), v33, 1);
        v31 += 8;
        --v30;
      }
      while ( v30 );
    }
    if ( (_QWORD)v55 )
    {
      v34 = *((_QWORD *)&v55 + 1);
      v35 = (_QWORD)v55 << 6;
      v36 = 8;
      goto LABEL_69;
    }
LABEL_70:
    CloseHandle(hObject);
  }
  return a1;
}
