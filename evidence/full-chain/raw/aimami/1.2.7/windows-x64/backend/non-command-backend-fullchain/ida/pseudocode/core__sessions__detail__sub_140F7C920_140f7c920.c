// win 1.2.7 | module src/core/sessions/detail.rs | ea 0x140f7c920 | name sub_140F7C920
// win 1.2.7 | module src/core/sessions/detail.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
int __fastcall sub_140F7C920(_QWORD *a1)
{
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // bl
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  char v15; // r13
  __int64 v16; // r15
  bool v17; // r14
  char v18; // al
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int128 *v26; // rcx
  __int128 *v27; // rdi
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  _QWORD *v37; // rax
  unsigned __int64 v38; // rsi
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v43; // [rsp+20h] [rbp-60h]
  __int64 v44; // [rsp+28h] [rbp-58h] BYREF
  __int64 v45; // [rsp+30h] [rbp-50h]
  _BYTE v46[17]; // [rsp+38h] [rbp-48h]
  unsigned __int64 v47; // [rsp+60h] [rbp-20h]
  _QWORD *v48; // [rsp+80h] [rbp+0h]
  __int128 v49; // [rsp+88h] [rbp+8h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp+18h]
  HANDLE hObject; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v53; // [rsp+B0h] [rbp+30h]
  char v54; // [rsp+BEh] [rbp+3Eh]
  char v55; // [rsp+BFh] [rbp+3Fh] BYREF
  __int64 v56; // [rsp+C0h] [rbp+40h]

  v56 = -2;
  LODWORD(v44) = 0;
  v45 = 0;
  *(_DWORD *)v46 = 7;
  *(_QWORD *)&v46[4] = 0x100000000LL;
  *(_QWORD *)&v46[9] = 0;
  v2 = sub_141690E40(&v44);
  if ( v2 == 1 )
  {
    *a1 = 2;
    a1[1] = v3;
  }
  else
  {
    hObject = v3;
    sub_1416831B0(&v44, &hObject);
    if ( (_DWORD)v44 == 2 )
    {
      v5 = v45;
      *a1 = 2;
      a1[1] = v5;
      goto LABEL_51;
    }
    v48 = a1;
    v6 = v47;
    nullsub_1(v4);
    v7 = sub_140001650(19264, 8);
    if ( !v7 )
      sub_141938D2B(8, 19264);
    *(_QWORD *)&v49 = 301;
    *((_QWORD *)&v49 + 1) = v7;
    v50 = 0;
    v44 = 0;
    v45 = 1;
    *(_QWORD *)v46 = 0;
    v55 = 0;
    v9 = 0;
    v10 = 0;
LABEL_8:
    v11 = v50;
    if ( !v6 )
    {
LABEL_30:
      if ( v11 <= 0x12C )
      {
        v18 = sub_140F77BE0((__int64)&v44, &v55, &v49);
        v11 = v50;
        v9 = (v9 | v18) & 1;
      }
      v17 = 1;
      if ( (v9 & 1) == 0 )
        v17 = v11 >= 0x12D;
      goto LABEL_34;
    }
    if ( v50 > 0x12C || v10 >= 0x4000000 )
    {
      v17 = 1;
      v19 = *((_QWORD *)&v49 + 1);
      v20 = v50 == 300;
      if ( v50 >= 0x12C )
        goto LABEL_35;
      goto LABEL_45;
    }
    v12 = 0x4000000 - v10;
    if ( v6 < 0x4000000 - v10 )
      v12 = v6;
    if ( v12 >= 0x10000 )
      v12 = 0x10000;
    nullsub_1(v8);
    v52 = sub_140001680(v12, 1);
    if ( !v52 )
      sub_141938D2B(1, v12);
    v53 = v12;
    v6 -= v12;
    v54 = 1;
    if ( sub_1416A17E0(&hObject, 0) != 1 )
    {
      v54 = 1;
      v13 = sub_140BB1420(&hObject, v52, v53);
      if ( !v13 )
      {
        v14 = v53;
        v43 = v53 + v10;
        while ( 1 )
        {
          v15 = *(_BYTE *)(v52 + v14 - 1);
          if ( v15 == 10 )
          {
            v9 = (sub_140F77BE0((__int64)&v44, &v55, &v49) | v9) & 1;
            if ( v50 >= 0x12D )
            {
              sub_140001660(v52, v53, 1);
              v11 = v50;
              v17 = 1;
              if ( !v6 )
                goto LABEL_30;
LABEL_34:
              v19 = *((_QWORD *)&v49 + 1);
              v20 = v11 == 300;
              if ( v11 >= 0x12C )
              {
LABEL_35:
                v50 = 300;
                if ( v20 )
                {
                  v11 = 300;
                  v21 = 150;
LABEL_46:
                  v26 = (__int128 *)((v11 << 6) + v19 - 16);
                  v27 = (__int128 *)(v19 + 48);
                  do
                  {
                    v28 = *(v27 - 3);
                    *(v27 - 3) = *(v26 - 3);
                    *(v26 - 3) = v28;
                    v29 = *(v27 - 2);
                    *(v27 - 2) = *(v26 - 2);
                    *(v26 - 2) = v29;
                    v30 = *(v27 - 1);
                    *(v27 - 1) = *(v26 - 1);
                    *(v26 - 1) = v30;
                    v31 = *v27;
                    *v27 = *v26;
                    *v26 = v31;
                    v27 += 4;
                    v26 -= 4;
                    --v21;
                  }
                  while ( v21 );
LABEL_48:
                  v32 = v48;
                  v48[3] = v50;
                  *(_OWORD *)(v32 + 1) = v49;
                  *((_BYTE *)v32 + 32) = v17;
                  *v32 = -1;
                  v33 = v44;
                  if ( v44 )
                  {
                    v34 = v45;
                    v35 = 1;
                    goto LABEL_50;
                  }
                  goto LABEL_51;
                }
                v22 = v11 - 300;
                v23 = (_QWORD *)(v19 + 19232);
                do
                {
                  v24 = *(v23 - 1);
                  if ( v24 != -1 && v24 )
                    sub_140001660(*v23, v24, 1);
                  v25 = *(v23 - 4);
                  if ( v25 )
                    sub_140001660(*(v23 - 3), v25, 1);
                  v23 += 8;
                  --v22;
                }
                while ( v22 );
                v19 = *((_QWORD *)&v49 + 1);
                v11 = v50;
              }
LABEL_45:
              v21 = v11 >> 1;
              if ( v11 >> 1 )
                goto LABEL_46;
              goto LABEL_48;
            }
          }
          else if ( !v55 )
          {
            v16 = *(_QWORD *)v46;
            if ( *(_QWORD *)v46 >= 0x400000u )
            {
              *(_QWORD *)v46 = 0;
              v55 = 1;
              v9 = 1;
            }
            else
            {
              if ( *(_QWORD *)v46 == v44 )
                sub_141938C20(&v44, v13);
              *(_BYTE *)(v45 + v16) = v15;
              *(_QWORD *)v46 = v16 + 1;
            }
          }
          if ( !--v14 )
          {
            sub_140001660(v52, v53, 1);
            v10 = v43;
            goto LABEL_8;
          }
        }
      }
    }
    v36 = v53;
    v37 = v48;
    *v48 = 2;
    v37[1] = v13;
    sub_140001660(v52, v36, 1);
    if ( v44 )
      sub_140001660(v45, v44, 1);
    v38 = v50;
    if ( v50 )
    {
      v39 = (_QWORD *)(*((_QWORD *)&v49 + 1) + 32LL);
      do
      {
        v40 = *(v39 - 1);
        if ( v40 != -1 && v40 )
          sub_140001660(*v39, v40, 1);
        v41 = *(v39 - 4);
        if ( v41 )
          sub_140001660(*(v39 - 3), v41, 1);
        v39 += 8;
        --v38;
      }
      while ( v38 );
    }
    if ( (_QWORD)v49 )
    {
      v34 = *((_QWORD *)&v49 + 1);
      v33 = (_QWORD)v49 << 6;
      v35 = 8;
LABEL_50:
      sub_140001660(v34, v33, v35);
    }
LABEL_51:
    LODWORD(v2) = CloseHandle(hObject);
  }
  return v2;
}
