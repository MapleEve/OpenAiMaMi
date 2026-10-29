// win 1.2.7 latest-exe | module src/core/sessions/detail.rs | ea 0x140b4c9c0 | successor of pre-update 0x140f750b0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.914, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
unsigned __int64 __fastcall sub_140B4C9C0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // esi
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  bool v35; // cf
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  unsigned __int64 result; // rax
  __int128 v56; // [rsp+30h] [rbp-50h]
  __int128 v57; // [rsp+40h] [rbp-40h]
  __int128 v58; // [rsp+50h] [rbp-30h]
  __int128 v59; // [rsp+60h] [rbp-20h]
  __int64 v60; // [rsp+78h] [rbp-8h]
  __int64 v62; // [rsp+90h] [rbp+10h]
  __int64 v63; // [rsp+A0h] [rbp+20h]
  _QWORD v64[3]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v65; // [rsp+C0h] [rbp+40h]
  __int64 v66; // [rsp+C8h] [rbp+48h]
  __int64 v67; // [rsp+D0h] [rbp+50h]
  __int128 v68; // [rsp+D8h] [rbp+58h] BYREF
  unsigned __int64 v69; // [rsp+E8h] [rbp+68h]
  __int64 v70; // [rsp+F0h] [rbp+70h]
  __int64 v71; // [rsp+F8h] [rbp+78h]
  __int64 v72; // [rsp+100h] [rbp+80h]
  __int64 v73; // [rsp+108h] [rbp+88h]
  __int64 v74; // [rsp+110h] [rbp+90h]
  unsigned __int64 v75; // [rsp+118h] [rbp+98h]
  __int64 v76; // [rsp+120h] [rbp+A0h]
  __int64 v77; // [rsp+128h] [rbp+A8h]
  __int64 v78; // [rsp+130h] [rbp+B0h]
  char v79; // [rsp+13Eh] [rbp+BEh]
  char v80; // [rsp+13Fh] [rbp+BFh]
  __int64 v81; // [rsp+140h] [rbp+C0h]

  v81 = -2;
  v4 = a2[2];
  if ( v4 )
  {
    nullsub_1(a1, a2);
    v5 = sub_140001650(72 * v4, 8);
    if ( !v5 )
    {
      v79 = 1;
      sub_14196B2DB(8, 72 * v4);
    }
  }
  else
  {
    v5 = 8;
  }
  *(_QWORD *)&v68 = v4;
  *((_QWORD *)&v68 + 1) = v5;
  v69 = 0;
  v6 = *a2;
  v7 = a2[1];
  v8 = v7 + 72 * v4;
  v64[0] = v7;
  v64[1] = v7;
  v64[2] = v6;
  v65 = v8;
  if ( v4 )
  {
    v9 = 0x200000;
    v10 = 0;
    v11 = v7 + 72 * v4;
    while ( 1 )
    {
      v8 = v11 - 72;
      if ( *(_QWORD *)(v11 - 72) == -1 )
        goto LABEL_47;
      v72 = *(_QWORD *)(v11 - 72);
      v66 = *(_QWORD *)(v11 - 64);
      v14 = *(_QWORD *)(v11 - 48);
      v15 = *(_QWORD *)(v11 - 40);
      v16 = *(_QWORD *)(v11 - 24);
      v67 = *(_QWORD *)(v11 - 16);
      if ( !v9 )
      {
LABEL_50:
        v65 = v11 - 72;
        if ( v72 )
        {
          v39 = v15;
          v40 = v14;
          sub_140001660(v66, v72, 1);
          v14 = v40;
          v15 = v39;
        }
        if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v41 = v15;
          v42 = v14;
          sub_140001660(v67, v16, 1);
          v14 = v42;
          v15 = v41;
        }
        LOBYTE(v10) = 1;
        if ( v14 )
          sub_140001660(v15, v14, 1);
        goto LABEL_56;
      }
      v60 = *(_QWORD *)(v11 - 56);
      v17 = *(_QWORD *)(v11 - 32);
      v18 = *(_QWORD *)(v11 - 8);
      v19 = 0x10000;
      if ( v9 < 0x10000 )
        v19 = v9;
      if ( v17 <= v19 )
      {
        v78 = v11 - 72;
        v76 = v15;
        if ( v17 )
        {
          v77 = v14;
          nullsub_1(v19, v8);
          v21 = sub_140001650(v17, 1);
          if ( !v21 )
          {
            v65 = v78;
            v71 = v15;
            v70 = v77;
            v80 = 1;
            sub_14196B2DB(1, v17);
          }
          v73 = v21;
          sub_1419234B0(v21, v15, v17);
          v74 = 0;
          v22 = v17;
          v23 = v72;
          v14 = v77;
        }
        else
        {
          v73 = 1;
          v22 = 0;
          v74 = 0;
          v23 = v72;
        }
        goto LABEL_40;
      }
      v62 = *(_QWORD *)(v11 - 8);
      v20 = 0;
      if ( v19 >= 7 )
        v20 = v19 - 7;
      if ( v9 >= 8 )
        break;
LABEL_19:
      LOBYTE(a3) = 1;
      if ( v9 > 6 )
        goto LABEL_28;
      while ( *(char *)(v15 + v19) <= -65 )
      {
        if ( !--v19 )
          goto LABEL_50;
      }
      v30 = v14;
      v78 = v11 - 72;
      v31 = v19;
      nullsub_1(v19, v8);
      v32 = sub_140001650(v31, 1);
      if ( !v32 )
      {
        v65 = v78;
        v71 = v15;
        v70 = v30;
        v80 = 1;
        sub_14196B2DB(1, v31);
      }
      v73 = v32;
      v76 = v15;
      v33 = sub_1419234B0(v32, v15, v31);
      LOBYTE(v33) = 1;
      v74 = v33;
      v23 = v72;
      v14 = v30;
      v22 = v31;
LABEL_39:
      v18 = v62;
LABEL_40:
      v35 = v9 < v22;
      v36 = v9 - v22;
      v9 = 0;
      if ( !v35 )
        v9 = v36;
      if ( v14 )
      {
        v37 = v22;
        sub_140001660(v76, v14, 1);
        v22 = v37;
      }
      *(_QWORD *)&v56 = v23;
      *((_QWORD *)&v56 + 1) = v66;
      *(_QWORD *)&v57 = v60;
      *((_QWORD *)&v57 + 1) = v22;
      *(_QWORD *)&v58 = v73;
      v75 = v22;
      *((_QWORD *)&v58 + 1) = v22;
      *(_QWORD *)&v59 = v16;
      *((_QWORD *)&v59 + 1) = v67;
      v38 = v69;
      if ( v69 == (_QWORD)v68 )
        sub_141939DD0(&v68);
      LOBYTE(v10) = v74 | v10;
      v12 = *((_QWORD *)&v68 + 1);
      v13 = 9 * v38;
      *(_QWORD *)(*((_QWORD *)&v68 + 1) + 8 * v13 + 64) = v18;
      *(_OWORD *)(v12 + 8 * v13 + 48) = v59;
      *(_OWORD *)(v12 + 8 * v13 + 32) = v58;
      *(_OWORD *)(v12 + 8 * v13 + 16) = v57;
      *(_OWORD *)(v12 + 8 * v13) = v56;
      v69 = v38 + 1;
      v8 = v78;
      v11 = v78;
      if ( v7 == v78 )
        goto LABEL_47;
    }
    while ( *(char *)(v15 + v20) <= -65 )
    {
      if ( !--v20 )
      {
        v20 = 0;
        goto LABEL_19;
      }
    }
    a3 = 0;
LABEL_28:
    if ( (__int64)(v20 + 7) < 0 )
    {
      v26 = 0;
      goto LABEL_49;
    }
    LODWORD(v74) = a3;
    v76 = v15;
    v24 = v10;
    v25 = v7;
    v77 = v14;
    v78 = v11 - 72;
    nullsub_1(v19, v8);
    v26 = 1;
    v75 = v20 + 7;
    v27 = sub_140001650(v20 + 7, 1);
    if ( !v27 )
    {
      v63 = v75;
      v8 = v78;
      v14 = v77;
      v15 = v76;
LABEL_49:
      v65 = v8;
      v71 = v15;
      v70 = v14;
      v80 = 1;
      sub_14196B2DB(v26, v63);
    }
    v14 = v77;
    v7 = v25;
    v10 = v24;
    v22 = v75;
    v73 = v27;
    if ( !(_BYTE)v74 )
    {
      if ( v20 >= v17 )
      {
        v29 = v76;
        if ( v20 != v17 )
        {
LABEL_63:
          v65 = v78;
          sub_14196B4F0(v29, v17, 0, v20, (__int64)&off_141A81A98);
        }
      }
      else
      {
        v29 = v76;
        if ( *(char *)(v76 + v20) <= -65 )
          goto LABEL_63;
      }
      v34 = v27;
      sub_1419234B0(v27, v29, v20);
      v27 = v34;
      v14 = v77;
      v22 = v75;
    }
    *(_DWORD *)(v27 + v20 + 3) = 1563307566;
    *(_DWORD *)(v27 + v20) = 777718282;
    LOBYTE(v28) = 1;
    v74 = v28;
    v63 = v27;
    v23 = v72;
    goto LABEL_39;
  }
  LOBYTE(v10) = 0;
LABEL_47:
  v65 = v8;
LABEL_56:
  sub_140232E00(v64);
  v43 = v69 >> 1;
  if ( v69 >> 1 )
  {
    v44 = (__int64 *)(*((_QWORD *)&v68 + 1) + 72 * v69 - 8);
    v45 = (__int64 *)(*((_QWORD *)&v68 + 1) + 64LL);
    do
    {
      v46 = *(v45 - 8);
      *(v45 - 8) = *(v44 - 8);
      *(v44 - 8) = v46;
      v47 = *(v45 - 7);
      *(v45 - 7) = *(v44 - 7);
      *(v44 - 7) = v47;
      v48 = *(v45 - 6);
      *(v45 - 6) = *(v44 - 6);
      *(v44 - 6) = v48;
      v49 = *(v45 - 5);
      *(v45 - 5) = *(v44 - 5);
      *(v44 - 5) = v49;
      v50 = *(v45 - 4);
      *(v45 - 4) = *(v44 - 4);
      *(v44 - 4) = v50;
      v51 = *(v45 - 3);
      *(v45 - 3) = *(v44 - 3);
      *(v44 - 3) = v51;
      v52 = *(v45 - 2);
      *(v45 - 2) = *(v44 - 2);
      *(v44 - 2) = v52;
      v53 = *(v45 - 1);
      *(v45 - 1) = *(v44 - 1);
      *(v44 - 1) = v53;
      v54 = *v45;
      *v45 = *v44;
      *v44 = v54;
      v45 += 9;
      v44 -= 9;
      --v43;
    }
    while ( v43 );
  }
  result = v69;
  *(_QWORD *)(a1 + 16) = v69;
  *(_OWORD *)a1 = v68;
  *(_BYTE *)(a1 + 24) = v10;
  return result;
}
