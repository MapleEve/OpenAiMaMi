// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140440f40
// name: sub_140440F40
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140440F40(_QWORD *a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  unsigned __int64 v12; // r12
  _QWORD *i; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  _QWORD **v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  char v20; // al
  _QWORD **v21; // rcx
  __int64 v22; // r13
  _QWORD *v23; // rsi
  __int64 v24; // r13
  __int64 v25; // r13
  __int64 v26; // r13
  _QWORD **v27; // rcx
  _QWORD *v28; // r15
  _QWORD *v29; // r12
  unsigned __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  _QWORD **v35; // rdi
  _QWORD *v36; // rsi
  __int64 v37; // r15
  __int64 v38; // r13
  _QWORD *v39; // r12
  unsigned __int64 v40; // r14
  __int64 j; // rdi
  __int64 result; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rbx
  _QWORD **v45; // rax
  _QWORD *v46; // rsi
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rbx
  _QWORD *v50; // r14
  unsigned __int64 v51; // rdi
  __int64 m; // r12
  __int64 v53; // r12
  __int64 v54; // rbx
  _QWORD *v55; // r14
  unsigned __int64 v56; // r15
  __int64 k; // rdi
  _OWORD *v58; // rcx
  _QWORD v59[4]; // [rsp+28h] [rbp-58h] BYREF
  char v60; // [rsp+48h] [rbp-38h]
  __int16 v61; // [rsp+50h] [rbp-30h] BYREF
  _QWORD **v62; // [rsp+58h] [rbp-28h]
  _QWORD *v63; // [rsp+60h] [rbp-20h]
  __int128 v64; // [rsp+68h] [rbp-18h] BYREF
  __int64 v65; // [rsp+78h] [rbp-8h]
  __int64 v66; // [rsp+80h] [rbp+0h]
  __int16 v67; // [rsp+88h] [rbp+8h] BYREF
  _QWORD **v68; // [rsp+90h] [rbp+10h]
  _QWORD **v69; // [rsp+98h] [rbp+18h]
  __int64 v70; // [rsp+A0h] [rbp+20h]

  v70 = -2;
  v63 = a1;
  nullsub_1(a1);
  v3 = (_BYTE *)sub_140001650(128, 1);
  if ( !v3 )
    sub_1416C2D4B(1, 128);
  *(_QWORD *)&v64 = 128;
  *((_QWORD *)&v64 + 1) = v3;
  v59[0] = &v64;
  v59[1] = asc_141756910;
  v59[2] = 2;
  v59[3] = 1;
  v60 = 0;
  *v3 = 123;
  v65 = 1;
  v61 = 256;
  v62 = (_QWORD **)v59;
  sub_1404566A0(&v61, aVersion_4, 7, a2 + 24);
  if ( (_BYTE)v61 )
  {
LABEL_64:
    result = sub_1416BF0E0();
    v43 = v63;
    v63[1] = result;
    *v43 = -1;
    if ( (_QWORD)v64 )
      return sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    v66 = *(_QWORD *)(a2 + 16);
    v69 = v62;
    v6 = *v62;
    if ( HIBYTE(v61) == 1 )
    {
      v7 = v6[2];
      if ( *v6 == v7 )
      {
        sub_141688D30((_DWORD)v6, v7, 1, 1, 1);
        v7 = v6[2];
      }
      *(_BYTE *)(v6[1] + v7) = 10;
      v8 = v7 + 1;
    }
    else
    {
      v9 = v6[2];
      if ( (unsigned __int64)(*v6 - v9) <= 1 )
      {
        sub_141688D30((_DWORD)v6, v9, 2, 1, 1);
        v9 = v6[2];
      }
      *(_WORD *)(v6[1] + v9) = 2604;
      v8 = v9 + 2;
    }
    v6[2] = v8;
    v10 = v69[3];
    if ( v10 )
    {
      v11 = v69[1];
      v12 = (unsigned __int64)v69[2];
      for ( i = nullptr; i != v10; i = (_QWORD *)((char *)i + 1) )
      {
        if ( v12 > *v6 - v8 )
        {
          sub_141688D30((_DWORD)v6, v8, v12, 1, 1);
          v8 = v6[2];
        }
        else if ( !v12 )
        {
          goto LABEL_14;
        }
        sub_141684120(v8 + v6[1], v11, v12);
LABEL_14:
        v8 += v12;
        v6[2] = v8;
      }
    }
    sub_140441880(v69, v4, aEntries_0, 7);
    v14 = *v69;
    v15 = (*v69)[2];
    if ( (unsigned __int64)(**v69 - v15) <= 1 )
    {
      sub_141688D30((_DWORD)v14, v15, 2, 1, 1);
      v15 = v14[2];
    }
    *(_WORD *)(v14[1] + v15) = 8250;
    v14[2] = v15 + 2;
    v16 = v69;
    v17 = *v69;
    v18 = v69[3];
    v69[3] = (_QWORD *)((char *)v18 + 1);
    *((_BYTE *)v16 + 32) = 0;
    v19 = v17[2];
    if ( *v17 == v19 )
    {
      sub_141688D30((_DWORD)v17, v19, 1, 1, 1);
      v19 = v17[2];
    }
    *(_BYTE *)(v17[1] + v19) = 91;
    v17[2] = v19 + 1;
    if ( v66 )
    {
      v66 = v5 + 80 * v66;
      v20 = 1;
      v21 = v69;
      do
      {
        v23 = *v21;
        if ( (v20 & 1) != 0 )
        {
          v24 = v23[2];
          if ( *v23 == v24 )
          {
            sub_141688D30((_DWORD)v23, v24, 1, 1, 1);
            v24 = v23[2];
          }
          *(_BYTE *)(v23[1] + v24) = 10;
          v25 = v24 + 1;
        }
        else
        {
          v26 = v23[2];
          if ( (unsigned __int64)(*v23 - v26) <= 1 )
          {
            sub_141688D30((_DWORD)v23, v26, 2, 1, 1);
            v26 = v23[2];
          }
          *(_WORD *)(v23[1] + v26) = 2604;
          v25 = v26 + 2;
        }
        v23[2] = v25;
        v27 = v69;
        v28 = v69[3];
        if ( v28 )
        {
          v29 = v69[1];
          v30 = (unsigned __int64)v69[2];
          v31 = 0;
          while ( 1 )
          {
            if ( v30 > *v23 - v25 )
            {
              sub_141688D30((_DWORD)v23, v25, v30, 1, 1);
              v25 = v23[2];
            }
            else if ( !v30 )
            {
              goto LABEL_39;
            }
            sub_141684120(v25 + v23[1], v29, v30);
LABEL_39:
            v25 += v30;
            v23[2] = v25;
            if ( (_QWORD *)++v31 == v28 )
            {
              v27 = v69;
              v32 = (__int64)v69[3] + 1;
              goto LABEL_46;
            }
          }
        }
        v32 = 1;
LABEL_46:
        v33 = *v27;
        v27[3] = (_QWORD *)v32;
        *((_BYTE *)v27 + 32) = 0;
        v34 = v33[2];
        if ( *v33 == v34 )
        {
          sub_141688D30((_DWORD)v33, v34, 1, 1, 1);
          v34 = v33[2];
        }
        *(_BYTE *)(v33[1] + v34) = 123;
        v33[2] = v34 + 1;
        v67 = 256;
        v68 = v69;
        sub_140452760(&v67, aThreadId, 9, v5);
        if ( (_BYTE)v67 )
          goto LABEL_64;
        sub_140452760(&v67, aOriginalModel, 14, v5 + 24);
        if ( (_BYTE)v67 )
          goto LABEL_64;
        sub_140452760(&v67, aFallbackModel, 14, v5 + 48);
        if ( (_BYTE)v67 )
          goto LABEL_64;
        sub_1404566A0(&v67, aAttempts, 8, v5 + 72);
        if ( !(_BYTE)v67 && HIBYTE(v67) )
        {
          v35 = v68;
          v36 = *v68;
          v37 = (__int64)v68[3] - 1;
          v68[3] = (_QWORD *)v37;
          if ( *((_BYTE *)v35 + 32) )
          {
            v38 = v36[2];
            if ( *v36 == v38 )
            {
              sub_141688D30((_DWORD)v36, v38, 1, 1, 1);
              v38 = v36[2];
            }
            *(_BYTE *)(v36[1] + v38) = 10;
            v22 = v38 + 1;
            v36[2] = v22;
            if ( v37 )
            {
              v39 = v35[1];
              v40 = (unsigned __int64)v35[2];
              for ( j = 0; j != v37; ++j )
              {
                if ( v40 > *v36 - v22 )
                {
                  sub_141688D30((_DWORD)v36, v22, v40, 1, 1);
                  v22 = v36[2];
                }
                else if ( !v40 )
                {
                  goto LABEL_59;
                }
                sub_141684120(v22 + v36[1], v39, v40);
LABEL_59:
                v22 += v40;
                v36[2] = v22;
              }
            }
          }
          else
          {
            v22 = v36[2];
          }
          if ( *v36 == v22 )
          {
            sub_141688D30((_DWORD)v36, v22, 1, 1, 1);
            v22 = v36[2];
          }
          *(_BYTE *)(v36[1] + v22) = 125;
          v36[2] = v22 + 1;
        }
        v5 += 80;
        v21 = v69;
        *((_BYTE *)v69 + 32) = 1;
        v20 = 0;
      }
      while ( v5 != v66 );
      v17 = *v21;
      v53 = (__int64)v21[3] - 1;
      v21[3] = (_QWORD *)v53;
      v54 = v17[2];
      if ( *v17 == v54 )
      {
        sub_141688D30((_DWORD)v17, v54, 1, 1, 1);
        v54 = v17[2];
      }
      *(_BYTE *)(v17[1] + v54) = 10;
      v44 = v54 + 1;
      v17[2] = v44;
      if ( v53 )
      {
        v55 = v69[1];
        v56 = (unsigned __int64)v69[2];
        for ( k = 0; k != v53; ++k )
        {
          if ( v56 > *v17 - v44 )
          {
            sub_141688D30((_DWORD)v17, v44, v56, 1, 1);
            v44 = v17[2];
          }
          else if ( !v56 )
          {
            goto LABEL_78;
          }
          sub_141684120(v44 + v17[1], v55, v56);
LABEL_78:
          v44 += v56;
          v17[2] = v44;
        }
      }
    }
    else
    {
      v69[3] = v18;
      v44 = v17[2];
    }
    if ( *v17 == v44 )
    {
      sub_141688D30((_DWORD)v17, v44, 1, 1, 1);
      v44 = v17[2];
    }
    *(_BYTE *)(v17[1] + v44) = 93;
    v17[2] = v44 + 1;
    v45 = v69;
    *((_BYTE *)v69 + 32) = 1;
    v46 = *v45;
    v47 = (__int64)v45[3] - 1;
    v45[3] = (_QWORD *)v47;
    v48 = v46[2];
    if ( *v46 == v48 )
    {
      sub_141688D30((_DWORD)v46, v48, 1, 1, 1);
      v48 = v46[2];
    }
    *(_BYTE *)(v46[1] + v48) = 10;
    v49 = v48 + 1;
    v46[2] = v49;
    if ( v47 )
    {
      v50 = v69[1];
      v51 = (unsigned __int64)v69[2];
      for ( m = 0; m != v47; ++m )
      {
        if ( v51 > *v46 - v49 )
        {
          sub_141688D30((_DWORD)v46, v49, v51, 1, 1);
          v49 = v46[2];
        }
        else if ( !v51 )
        {
          goto LABEL_85;
        }
        sub_141684120(v49 + v46[1], v50, v51);
LABEL_85:
        v49 += v51;
        v46[2] = v49;
      }
    }
    if ( *v46 == v49 )
    {
      sub_141688D30((_DWORD)v46, v49, 1, 1, 1);
      v49 = v46[2];
    }
    *(_BYTE *)(v46[1] + v49) = 125;
    v46[2] = v49 + 1;
    result = v65;
    v58 = v63;
    v63[2] = v65;
    *v58 = v64;
  }
  return result;
}