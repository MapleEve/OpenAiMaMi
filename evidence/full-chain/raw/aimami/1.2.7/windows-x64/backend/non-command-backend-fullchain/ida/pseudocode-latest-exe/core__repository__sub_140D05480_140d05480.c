// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d05480 | successor of pre-update 0x1401d1c40 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.913, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140D05480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  char v10; // al
  char v11; // cl
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 (__fastcall *v15)(unsigned __int64); // rax
  unsigned __int64 v16; // rax
  char v17; // al
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v23; // [rsp+20h] [rbp-60h] BYREF
  int v24; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  __int64 v32; // [rsp+80h] [rbp+0h]
  __int64 v33; // [rsp+90h] [rbp+10h]
  __int64 v34; // [rsp+98h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+28h]
  __int64 v36; // [rsp+B0h] [rbp+30h]
  __int128 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+E0h] [rbp+60h] BYREF
  _QWORD v39[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+78h]
  __int64 v41; // [rsp+100h] [rbp+80h]
  __int64 v42; // [rsp+110h] [rbp+90h]
  __int64 v43; // [rsp+118h] [rbp+98h]
  __int64 v44; // [rsp+128h] [rbp+A8h]
  __int64 v45; // [rsp+130h] [rbp+B0h]
  __int64 v46; // [rsp+140h] [rbp+C0h]
  __int64 v47; // [rsp+148h] [rbp+C8h]
  __int64 v48; // [rsp+158h] [rbp+D8h]
  __int64 v49; // [rsp+160h] [rbp+E0h]
  __int64 v50; // [rsp+170h] [rbp+F0h]
  __int64 v51; // [rsp+178h] [rbp+F8h]
  __int64 v52; // [rsp+190h] [rbp+110h]
  __int64 v53; // [rsp+198h] [rbp+118h]
  __int64 v54; // [rsp+1A0h] [rbp+120h]
  char v55; // [rsp+1AFh] [rbp+12Fh]
  __int64 v56; // [rsp+1B0h] [rbp+130h]

  v56 = -2;
  sub_140718ED0(&v23, a2, a3);
  if ( v23 == -2 )
  {
    if ( v24 == 2 )
    {
      v8 = v25;
      v9 = v25 & 3;
      switch ( v25 & 3 )
      {
        case 0uLL:
          v10 = *(_BYTE *)(v25 + 16);
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( v10 )
            goto LABEL_37;
          goto LABEL_41;
        case 1uLL:
          v17 = *(_BYTE *)(v25 + 31);
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( !v17 )
            goto LABEL_41;
          goto LABEL_37;
        case 2uLL:
          v55 = 1;
          v15 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v7, v6) + 8);
          v55 = 1;
          LOBYTE(v16) = v15(HIDWORD(v8));
          goto LABEL_36;
        case 3uLL:
          v16 = HIDWORD(v25);
LABEL_36:
          *(_QWORD *)a1 = -1;
          *(_BYTE *)(a1 + 24) = 0;
          if ( (_BYTE)v16 )
          {
LABEL_37:
            *(_BYTE *)(a1 + 25) = 0;
            if ( (unsigned int)(v9 - 2) >= 2 && v9 )
            {
              v39[0] = v8 - 1;
              LOBYTE(v38) = 3;
              sub_1416EBAD0(v39);
            }
          }
          else
          {
LABEL_41:
            *(_BYTE *)(a1 + 25) = 1;
            if ( (unsigned int)(v9 - 2) >= 2 )
            {
              if ( v9 )
              {
                v39[0] = v8 - 1;
                LOBYTE(v38) = 3;
                v55 = 0;
                sub_1416EBAD0(v39);
              }
            }
          }
          break;
      }
    }
    else
    {
      *(_QWORD *)a1 = -1;
      *(_WORD *)(a1 + 24) = 0;
      sub_140CB96B0(&v24);
    }
    return;
  }
  sub_1419234B0(&v38, &v23, 176);
  if ( (unsigned __int8)sub_14071CE40(&v38) )
    goto LABEL_7;
  v12 = sub_140719130(&v38);
  v11 = 1;
  if ( v12 )
  {
LABEL_10:
    *(_QWORD *)a1 = -1;
    *(_BYTE *)(a1 + 24) = v11;
    *(_BYTE *)(a1 + 25) = 0;
    v13 = v38;
    if ( v38 != -1 )
      goto LABEL_11;
    goto LABEL_13;
  }
  if ( !(unsigned __int8)sub_14071C530(&v38) )
  {
LABEL_7:
    v11 = 0;
    goto LABEL_10;
  }
  sub_140719C90(&v23, &v38, a2, a3);
  if ( (_DWORD)v23 == 2 )
  {
    sub_140CB96B0(&v24);
    v14 = -1;
    goto LABEL_53;
  }
  v14 = v27;
  v37 = v28;
  v18 = v29;
  v19 = v30;
  v20 = v31;
  v54 = v32;
  v21 = v33;
  v53 = v34;
  v22 = v35;
  v52 = v36;
  if ( v25 )
    sub_140001660(v26, v25, 1);
  if ( v18 )
    sub_140001660(v19, v18, 1);
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    sub_140001660(v54, v20, 1);
    if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_51:
      if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_53;
      goto LABEL_52;
    }
  }
  else if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    goto LABEL_51;
  }
  sub_140001660(v53, v21, 1);
  if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_52:
    sub_140001660(v52, v22, 1);
LABEL_53:
  *(_QWORD *)a1 = v14;
  *(_OWORD *)(a1 + 8) = v37;
  *(_WORD *)(a1 + 24) = 0;
  v13 = v38;
  if ( v38 != -1 )
  {
LABEL_11:
    if ( v13 )
      sub_140001660(v39[0], v13, 1);
  }
LABEL_13:
  if ( v40 != -1 && v40 )
    sub_140001660(v41, v40, 1);
  if ( v42 != -1 && v42 )
    sub_140001660(v43, v42, 1);
  if ( v44 != -1 && v44 )
    sub_140001660(v45, v44, 1);
  if ( v46 != -1 && v46 )
    sub_140001660(v47, v46, 1);
  if ( v48 != -1 && v48 )
    sub_140001660(v49, v48, 1);
  if ( v50 != -1 && v50 )
    sub_140001660(v51, v50, 1);
}
