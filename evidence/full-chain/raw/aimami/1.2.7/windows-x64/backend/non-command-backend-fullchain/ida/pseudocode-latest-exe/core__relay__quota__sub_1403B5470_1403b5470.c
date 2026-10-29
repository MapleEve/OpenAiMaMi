// win 1.2.7 latest-exe | module src/core/relay/quota.rs | ea 0x1403b5470 | successor of pre-update 0x140b5fc10 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR"}
char __fastcall sub_1403B5470(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  double v4; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r8
  void *v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r13d
  char result; // al
  __int64 v19; // r12
  char v20; // r12
  __int64 v21; // r14
  __int64 (__fastcall *v22)(); // rdi
  __int64 v23; // r15
  int v24; // eax
  _QWORD *v25; // rbx
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  char *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  double *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // r14
  __int64 v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // rax
  __int64 (__fastcall *v44)(); // r14
  double *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 (__fastcall *v52)(); // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  bool v55; // zf
  double *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 (__fastcall *v59)(); // rax
  __int64 v60; // [rsp+28h] [rbp-58h]
  _QWORD *v61; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v62)(); // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *v63)(); // [rsp+40h] [rbp-40h]
  __int64 v64; // [rsp+48h] [rbp-38h]
  __int64 v65; // [rsp+50h] [rbp-30h]
  _BYTE v66[7]; // [rsp+58h] [rbp-28h]
  char v67; // [rsp+5Fh] [rbp-21h] BYREF
  __int128 v68; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+70h] [rbp-10h]
  __int128 v70; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v71)(); // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v72)(); // [rsp+98h] [rbp+18h]
  __int64 v73; // [rsp+A0h] [rbp+20h]
  double *v74; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v75; // [rsp+B0h] [rbp+30h]
  double *v76; // [rsp+B8h] [rbp+38h]
  double v77; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v78; // [rsp+C8h] [rbp+48h]
  __int64 v79; // [rsp+D0h] [rbp+50h]

  v79 = -2;
  v6 = *(unsigned __int8 *)(a2 + 840);
  v78 = a2;
  switch ( v6 )
  {
    case 0LL:
      v7 = a3;
      v8 = *(_QWORD *)(a2 + 824);
      v9 = *(_QWORD *)(a2 + 784);
      v10 = *(_QWORD *)(a2 + 792);
      v11 = *(unsigned __int8 *)(a2 + 841);
      v12 = (_QWORD *)a2;
      v13 = &unk_141A102E8;
      if ( (_DWORD)v11 )
        v13 = &unk_141A102F6;
      v14 = v12[104];
      v12[96] = v13;
      v12[97] = 2 * v11 + 14;
      v61 = v12 + 96;
      v62 = sub_140191200;
      sub_1416DAFA0(&v70, &unk_141A10306, &v61);
      a2 = v78;
      *(_QWORD *)(v78 + 816) = v71;
      v4 = *(double *)&v70;
      *(_OWORD *)(a2 + 800) = v70;
      v15 = *(_QWORD *)(a2 + 808);
      v16 = *(_QWORD *)(a2 + 816);
      *(_QWORD *)a2 = v8;
      *(_QWORD *)(a2 + 8) = v15;
      *(_QWORD *)(a2 + 16) = v16;
      *(_QWORD *)(a2 + 24) = v9;
      *(_QWORD *)(a2 + 32) = v10;
      *(_QWORD *)(a2 + 40) = v14;
      *(_BYTE *)(a2 + 48) = 0;
      a3 = v7;
      break;
    case 1LL:
      sub_14196B990(&off_141A10340);
    case 2LL:
      sub_14196B9B0(&off_141A10340);
    case 3LL:
      break;
  }
  sub_1403B6030(&v70, a2, a3, a4);
  v17 = v70;
  if ( (_QWORD)v70 != 2 )
  {
    v20 = BYTE8(v70);
    *(_DWORD *)v66 = *(_DWORD *)((char *)&v70 + 9);
    *(_DWORD *)&v66[3] = HIDWORD(v70);
    v21 = (__int64)v71;
    v22 = v72;
    v23 = v73;
    v24 = *(unsigned __int8 *)(v78 + 48);
    if ( v24 == 4 )
    {
      if ( *(_BYTE *)(v78 + 760) == 3 )
      {
        sub_140285110(v78 + 336);
      }
      else if ( !*(_BYTE *)(v78 + 760) )
      {
        sub_14023AEC0(v78 + 200);
        v25 = *(_QWORD **)(v78 + 328);
        if ( *v25 )
          sub_140001660(v25[1], *v25, 1);
        v4 = sub_140001660(v25, 88, 8);
      }
    }
    else if ( v24 == 3 )
    {
      sub_140290050(*(_QWORD *)(v78 + 56), *(_QWORD *)(v78 + 64));
    }
    if ( v17 == 1 )
    {
      LOBYTE(v70) = v20;
      *(_DWORD *)((char *)&v70 + 1) = *(_DWORD *)v66;
      DWORD1(v70) = *(_DWORD *)&v66[3];
      *((_QWORD *)&v70 + 1) = v21;
      v71 = v22;
      v72 = (__int64 (__fastcall *)())v23;
      *(_QWORD *)&v68 = 0;
      *((_QWORD *)&v68 + 1) = 1;
      v69 = nullptr;
      if ( (unsigned __int16)v70 == 2 )
      {
        v77 = COERCE_DOUBLE((__int128 *)((char *)&v70 + 8));
        v74 = &v77;
        v75 = (__int64)sub_14021E5E0;
        v26 = sub_1416E1D90(&v68, &off_141A19198, &unk_141A42AD6, &v74);
      }
      else if ( (unsigned __int16)v70 == 1 )
      {
        v77 = COERCE_DOUBLE((__int128 *)((char *)&v70 + 8));
        v74 = &v77;
        v75 = (__int64)sub_14021E5E0;
        v26 = sub_1416E1D90(&v68, &off_141A19198, &unk_141A42AC3, &v74);
      }
      else
      {
        v77 = COERCE_DOUBLE((__int128 *)((char *)&v70 + 2));
        v74 = &v77;
        v75 = (__int64)sub_140763660;
        v26 = sub_1416E1D90(&v68, &off_141A19198, &unk_141A3ECA4, &v74);
      }
      if ( v26 )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_0,
          55,
          (unsigned int)&v67,
          (unsigned int)&unk_141A10708,
          (__int64)&off_141A19250);
      v22 = *((__int64 (__fastcall **)())&v68 + 1);
      v21 = v68;
      v23 = (__int64)v69;
      if ( (_WORD)v70 && *((_QWORD *)&v70 + 1) )
        sub_140001660(v71, *((_QWORD *)&v70 + 1), 1);
    }
    else if ( v20 != -1 )
    {
      HIDWORD(v61) = *(_DWORD *)&v66[3];
      *(_DWORD *)((char *)&v61 + 1) = *(_DWORD *)v66;
      LOBYTE(v61) = v20;
      v62 = (__int64 (__fastcall *)())v21;
      v63 = v22;
      v64 = v23;
      v27 = sub_1416724D0(aBaseResp, 9, &v61);
      v28 = v27;
      if ( !v27 )
        goto LABEL_39;
      v29 = sub_1416724D0(aStatusCode, 11, v27);
      if ( !v29 )
        goto LABEL_39;
      if ( *(_BYTE *)v29 != 2 )
        goto LABEL_39;
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 == 2 )
        goto LABEL_39;
      if ( (_DWORD)v30 == 1 )
      {
        v31 = *(char **)(v29 + 16);
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 16);
        v31 = nullptr;
        if ( v32 > 0 )
          v31 = (char *)v32;
      }
      v77 = *(double *)&v31;
      if ( v31 )
      {
        v33 = sub_1416724D0(aStatusMsg, 10, v28);
        if ( v33 )
        {
          if ( *(_BYTE *)v33 == 3 )
            v34 = *(double **)(v33 + 16);
          else
            v34 = nullptr;
          v33 = *(_QWORD *)(v33 + 24);
        }
        else
        {
          v34 = nullptr;
        }
        v55 = v34 == nullptr;
        v56 = (double *)&unk_141A10376;
        if ( v34 )
          v56 = v34;
        v57 = 13;
        if ( !v55 )
          v57 = v33;
        v74 = v56;
        v75 = v57;
        *(_QWORD *)&v70 = &v77;
        *((_QWORD *)&v70 + 1) = sub_1416EBBB0;
        v71 = (__int64 (__fastcall *)())&v74;
        v72 = sub_140191200;
        sub_1416DAFA0(&v68, &unk_141A10383, &v70);
        v22 = *((__int64 (__fastcall **)())&v68 + 1);
        v21 = v68;
        v23 = (__int64)v69;
      }
      else
      {
LABEL_39:
        v35 = sub_1416724D0(aModelRemains, 13, &v61);
        if ( v35 && *(_BYTE *)v35 == 4 && (v38 = *(_QWORD *)(v35 + 24)) != 0 )
        {
          v39 = *(_QWORD *)(v35 + 16);
          v40 = v39 + 32 * v38;
          while ( 1 )
          {
            v41 = sub_1416724D0(aModelName, 10, v39);
            if ( v41 )
            {
              if ( *(_BYTE *)v41 == 3 && *(_QWORD *)(v41 + 24) == 7 )
              {
                v42 = *(_DWORD **)(v41 + 16);
                v37 = *v42 ^ 0x656E6567u;
                if ( !((unsigned int)v37 | *(_DWORD *)((char *)v42 + 3) ^ 0x6C617265) )
                  break;
              }
            }
            v39 += 32;
            if ( v39 == v40 )
              goto LABEL_57;
          }
          v74 = nullptr;
          v75 = 8;
          v76 = nullptr;
          v43 = sub_1416724D0(aCurrentInterva, 34, v39);
          if ( (sub_1407443D0(v43) & 1) != 0 )
          {
            v77 = v4;
            *(_QWORD *)&v68 = &v77;
            *((_QWORD *)&v68 + 1) = sub_1416EA8C0;
            sub_1416DAFA0(&v70, &unk_141A103D3, &v68);
            v60 = *((_QWORD *)&v70 + 1);
            v65 = v70;
            v44 = v71;
            v45 = v76;
            if ( v76 == v74 )
              sub_141939F90(&v74);
            v46 = v75;
            v47 = 3LL * (_QWORD)v45;
            *(_QWORD *)(v75 + 8 * v47) = v65;
            *(_QWORD *)(v46 + 8 * v47 + 8) = v60;
            *(_QWORD *)(v46 + 8 * v47 + 16) = v44;
            v76 = (double *)((char *)v45 + 1);
          }
          v48 = sub_1416724D0(aCurrentWeeklyS, 21, v39);
          if ( v48 )
          {
            if ( *(_BYTE *)v48 == 2 )
            {
              v50 = *(_QWORD *)(v48 + 8);
              if ( v50 != 2 )
              {
                v51 = *(_QWORD *)(v48 + 16);
                LOBYTE(v50) = (_DWORD)v50 == 1 || v51 >= 0;
                if ( (_BYTE)v50 )
                {
                  if ( v51 == 1 )
                  {
                    v58 = sub_1416724D0(aCurrentWeeklyR, 32, v39);
                    if ( sub_1407443D0(v58) == 1 )
                    {
                      v77 = v4;
                      *(_QWORD *)&v68 = &v77;
                      *((_QWORD *)&v68 + 1) = sub_1416EA8C0;
                      sub_1403F7C60(&v70, &unk_141A10414, &v68);
                      v68 = v70;
                      v69 = v71;
                      sub_1401E7610(&v74, &v68);
                    }
                  }
                }
              }
            }
          }
          if ( v76 )
          {
            sub_1406C5480((unsigned int)&v70, v75, (_DWORD)v76, (unsigned int)&unk_141A10276, 3);
            v21 = *((_QWORD *)&v70 + 1);
            v54 = v70;
            v22 = v71;
            sub_1402346F0(&v74);
            if ( v74 )
              sub_140001660(v75, 24LL * (_QWORD)v74, 8);
            sub_140032FF0(&v61);
            v19 = v78;
            v53 = *(_QWORD *)(v78 + 800);
            v23 = (__int64)&unk_141A10421;
            if ( !v53 )
              goto LABEL_62;
            goto LABEL_61;
          }
          nullsub_1(v50, v49);
          v59 = (__int64 (__fastcall *)())sub_140001650(54, 1);
          if ( !v59 )
            sub_14196B2DB(1, 54);
          v22 = v59;
          qmemcpy(v59, "MiniMax coding plan response missing remaining percent", 54);
          sub_1402346F0(&v74);
          if ( v74 )
            sub_140001660(v75, 24LL * (_QWORD)v74, 8);
          v21 = 54;
          v23 = 54;
        }
        else
        {
LABEL_57:
          nullsub_1(v37, v36);
          v21 = 50;
          v52 = (__int64 (__fastcall *)())sub_140001650(50, 1);
          if ( !v52 )
            sub_14196B2DB(1, 50);
          v22 = v52;
          qmemcpy(v52, "MiniMax coding plan response missing general quota", 50);
          v23 = 50;
        }
      }
      sub_140032FF0(&v61);
    }
    v19 = v78;
    v53 = *(_QWORD *)(v78 + 800);
    v54 = -1;
    if ( !v53 )
    {
LABEL_62:
      *a1 = v54;
      a1[1] = v21;
      a1[2] = (__int64)v22;
      a1[3] = v23;
      a1[4] = 19;
      a1[5] = (__int64)aMinimaxTokenPl;
      a1[6] = 25;
      result = 1;
      goto LABEL_63;
    }
LABEL_61:
    sub_140001660(*(_QWORD *)(v19 + 808), v53, 1);
    goto LABEL_62;
  }
  *a1 = -2;
  result = 3;
  v19 = v78;
LABEL_63:
  *(_BYTE *)(v19 + 840) = result;
  return result;
}
