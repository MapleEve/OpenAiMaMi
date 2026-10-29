// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140b5fc10 | name sub_140B5FC10
// win 1.2.7 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B5FC10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // xmm0_8
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
  char **v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 (__fastcall *v43)(); // r14
  char **v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 (__fastcall *v50)(); // rax
  __int64 v51; // rdx
  __int64 v52; // rbx
  bool v53; // zf
  char **v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // [rsp+28h] [rbp-58h]
  _QWORD *v59; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v60)(); // [rsp+38h] [rbp-48h]
  __int64 (__fastcall *v61)(); // [rsp+40h] [rbp-40h]
  __int64 v62; // [rsp+48h] [rbp-38h]
  __int64 v63; // [rsp+50h] [rbp-30h]
  _BYTE v64[7]; // [rsp+58h] [rbp-28h]
  char v65; // [rsp+5Fh] [rbp-21h] BYREF
  __int128 v66; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall *v67)(); // [rsp+70h] [rbp-10h]
  __int128 v68; // [rsp+80h] [rbp+0h] BYREF
  __int64 (__fastcall *v69)(); // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v70)(); // [rsp+98h] [rbp+18h]
  __int64 v71; // [rsp+A0h] [rbp+20h]
  char **v72; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v73; // [rsp+B0h] [rbp+30h]
  char **v74; // [rsp+B8h] [rbp+38h]
  char *v75; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v76; // [rsp+C8h] [rbp+48h]
  __int64 v77; // [rsp+D0h] [rbp+50h]

  v77 = -2;
  v6 = *(unsigned __int8 *)(a2 + 840);
  v76 = a2;
  switch ( v6 )
  {
    case 0LL:
      v7 = a3;
      v8 = *(_QWORD *)(a2 + 824);
      v9 = *(_QWORD *)(a2 + 784);
      v10 = *(_QWORD *)(a2 + 792);
      v11 = *(unsigned __int8 *)(a2 + 841);
      v12 = (_QWORD *)a2;
      v13 = &unk_141A2C508;
      if ( (_DWORD)v11 )
        v13 = &unk_141A2C516;
      v14 = v12[104];
      v12[96] = v13;
      v12[97] = 2 * v11 + 14;
      v59 = v12 + 96;
      v60 = sub_140186EE0;
      sub_1416ABFD0(&v68, &unk_141A2C526, &v59);
      a2 = v76;
      *(_QWORD *)(v76 + 816) = v69;
      v4 = (char *)v68;
      *(_OWORD *)(a2 + 800) = v68;
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
      sub_1419393E0(&off_141A2C560);
    case 2LL:
      sub_141939400(&off_141A2C560);
    case 3LL:
      break;
  }
  sub_140B608B0(&v68, a2, a3, a4);
  v17 = v68;
  if ( (_QWORD)v68 != 2 )
  {
    v20 = BYTE8(v68);
    *(_DWORD *)v64 = *(_DWORD *)((char *)&v68 + 9);
    *(_DWORD *)&v64[3] = HIDWORD(v68);
    v21 = (__int64)v69;
    v22 = v70;
    v23 = v71;
    v24 = *(unsigned __int8 *)(v76 + 48);
    if ( v24 == 4 )
    {
      if ( *(_BYTE *)(v76 + 760) == 3 )
      {
        sub_1407A90D0(v76 + 336);
      }
      else if ( !*(_BYTE *)(v76 + 760) )
      {
        sub_140757C80(v76 + 200);
        v25 = *(_QWORD **)(v76 + 328);
        if ( *v25 )
          sub_140001660(v25[1], *v25, 1);
        sub_140001660(v25, 88, 8);
      }
    }
    else if ( v24 == 3 )
    {
      sub_1407AC3B0(*(_QWORD *)(v76 + 56), *(_QWORD *)(v76 + 64));
    }
    if ( v17 == 1 )
    {
      LOBYTE(v68) = v20;
      *(_DWORD *)((char *)&v68 + 1) = *(_DWORD *)v64;
      DWORD1(v68) = *(_DWORD *)&v64[3];
      *((_QWORD *)&v68 + 1) = v21;
      v69 = v22;
      v70 = (__int64 (__fastcall *)())v23;
      *(_QWORD *)&v66 = 0;
      *((_QWORD *)&v66 + 1) = 1;
      v67 = nullptr;
      if ( (unsigned __int16)v68 == 2 )
      {
        v75 = (char *)&v68 + 8;
        v72 = &v75;
        v73 = (__int64)sub_140369D80;
        v26 = sub_1416B2DC0(&v66, &off_141A353B8, &unk_141A4FD67, &v72);
      }
      else if ( (unsigned __int16)v68 == 1 )
      {
        v75 = (char *)&v68 + 8;
        v72 = &v75;
        v73 = (__int64)sub_140369D80;
        v26 = sub_1416B2DC0(&v66, &off_141A353B8, &unk_141A4FD54, &v72);
      }
      else
      {
        v75 = (char *)&v68 + 2;
        v72 = &v75;
        v73 = (__int64)sub_140286310;
        v26 = sub_1416B2DC0(&v66, &off_141A353B8, &unk_141A4D724, &v72);
      }
      if ( v26 )
        sub_141939040(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v65,
          (unsigned int)&unk_141A2C928,
          (__int64)&off_141A35470);
      v22 = *((__int64 (__fastcall **)())&v66 + 1);
      v21 = v66;
      v23 = (__int64)v67;
      if ( (_WORD)v68 && *((_QWORD *)&v68 + 1) )
        sub_140001660(v69, *((_QWORD *)&v68 + 1), 1);
    }
    else if ( v20 != -1 )
    {
      HIDWORD(v59) = *(_DWORD *)&v64[3];
      *(_DWORD *)((char *)&v59 + 1) = *(_DWORD *)v64;
      LOBYTE(v59) = v20;
      v60 = (__int64 (__fastcall *)())v21;
      v61 = v22;
      v62 = v23;
      v27 = sub_1416419F0(aBaseResp, 9, &v59);
      v28 = v27;
      if ( !v27 )
        goto LABEL_39;
      v29 = sub_1416419F0(aStatusCode, 11, v27);
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
      v75 = v31;
      if ( v31 )
      {
        v33 = sub_1416419F0(aStatusMsg, 10, v28);
        if ( v33 )
        {
          if ( *(_BYTE *)v33 == 3 )
            v34 = *(char ***)(v33 + 16);
          else
            v34 = nullptr;
          v33 = *(_QWORD *)(v33 + 24);
        }
        else
        {
          v34 = nullptr;
        }
        v53 = v34 == nullptr;
        v54 = (char **)&unk_141A2C596;
        if ( v34 )
          v54 = v34;
        v55 = 13;
        if ( !v53 )
          v55 = v33;
        v72 = v54;
        v73 = v55;
        *(_QWORD *)&v68 = &v75;
        *((_QWORD *)&v68 + 1) = sub_1416BCBE0;
        v69 = (__int64 (__fastcall *)())&v72;
        v70 = sub_140186EE0;
        sub_1416ABFD0(&v66, &unk_141A2C5A3, &v68);
        v22 = *((__int64 (__fastcall **)())&v66 + 1);
        v21 = v66;
        v23 = (__int64)v67;
      }
      else
      {
LABEL_39:
        v35 = sub_1416419F0(aModelRemains, 13, &v59);
        if ( v35 && *(_BYTE *)v35 == 4 && (v37 = *(_QWORD *)(v35 + 24)) != 0 )
        {
          v38 = *(_QWORD *)(v35 + 16);
          v39 = v38 + 32 * v37;
          while ( 1 )
          {
            v40 = sub_1416419F0(aModelName, 10, v38);
            if ( v40 )
            {
              if ( *(_BYTE *)v40 == 3 && *(_QWORD *)(v40 + 24) == 7 )
              {
                v41 = *(_DWORD **)(v40 + 16);
                v36 = *v41 ^ 0x656E6567u;
                if ( !((unsigned int)v36 | *(_DWORD *)((char *)v41 + 3) ^ 0x6C617265) )
                  break;
              }
            }
            v38 += 32;
            if ( v38 == v39 )
              goto LABEL_57;
          }
          v72 = nullptr;
          v73 = 8;
          v74 = nullptr;
          v42 = sub_1416419F0(aCurrentInterva, 34, v38);
          if ( (sub_140DBAB50(v42) & 1) != 0 )
          {
            v75 = v4;
            *(_QWORD *)&v66 = &v75;
            *((_QWORD *)&v66 + 1) = sub_1416BB8F0;
            sub_1416ABFD0(&v68, &unk_141A2C5F3, &v66);
            v58 = *((_QWORD *)&v68 + 1);
            v63 = v68;
            v43 = v69;
            v44 = v74;
            if ( v74 == v72 )
              sub_14190FDC0(&v72);
            v45 = v73;
            v46 = 3LL * (_QWORD)v44;
            *(_QWORD *)(v73 + 8 * v46) = v63;
            *(_QWORD *)(v45 + 8 * v46 + 8) = v58;
            *(_QWORD *)(v45 + 8 * v46 + 16) = v43;
            v74 = (char **)((char *)v44 + 1);
          }
          v47 = sub_1416419F0(aCurrentWeeklyS, 21, v38);
          if ( v47 )
          {
            if ( *(_BYTE *)v47 == 2 )
            {
              v48 = *(_QWORD *)(v47 + 8);
              if ( v48 != 2 )
              {
                v49 = *(_QWORD *)(v47 + 16);
                LOBYTE(v48) = (_DWORD)v48 == 1 || v49 >= 0;
                if ( (_BYTE)v48 )
                {
                  if ( v49 == 1 )
                  {
                    v56 = sub_1416419F0(aCurrentWeeklyR, 32, v38);
                    if ( sub_140DBAB50(v56) == 1 )
                    {
                      v75 = v4;
                      *(_QWORD *)&v66 = &v75;
                      *((_QWORD *)&v66 + 1) = sub_1416BB8F0;
                      sub_140BA0AC0(&v68, &unk_141A2C634, &v66);
                      v66 = v68;
                      v67 = v69;
                      sub_1401F4600(&v72, &v66);
                    }
                  }
                }
              }
            }
          }
          if ( v74 )
          {
            sub_140D1EE10((unsigned int)&v68, v73, (_DWORD)v74, (unsigned int)&unk_141A2C496, 3);
            v21 = *((_QWORD *)&v68 + 1);
            v52 = v68;
            v22 = v69;
            sub_1403FAE40(&v72);
            if ( v72 )
              sub_140001660(v73, 24LL * (_QWORD)v72, 8);
            sub_14002F9D0(&v59);
            v19 = v76;
            v51 = *(_QWORD *)(v76 + 800);
            v23 = (__int64)&unk_141A2C641;
            if ( !v51 )
              goto LABEL_62;
            goto LABEL_61;
          }
          nullsub_1(v48);
          v57 = (__int64 (__fastcall *)())sub_140001650(54, 1);
          if ( !v57 )
            sub_141938D2B(1, 54);
          v22 = v57;
          qmemcpy(v57, "MiniMax coding plan response missing remaining percent", 54);
          sub_1403FAE40(&v72);
          if ( v72 )
            sub_140001660(v73, 24LL * (_QWORD)v72, 8);
          v21 = 54;
          v23 = 54;
        }
        else
        {
LABEL_57:
          nullsub_1(v36);
          v21 = 50;
          v50 = (__int64 (__fastcall *)())sub_140001650(50, 1);
          if ( !v50 )
            sub_141938D2B(1, 50);
          v22 = v50;
          qmemcpy(v50, "MiniMax coding plan response missing general quota", 50);
          v23 = 50;
        }
      }
      sub_14002F9D0(&v59);
    }
    v19 = v76;
    v51 = *(_QWORD *)(v76 + 800);
    v52 = -1;
    if ( !v51 )
    {
LABEL_62:
      *a1 = v52;
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
    sub_140001660(*(_QWORD *)(v19 + 808), v51, 1);
    goto LABEL_62;
  }
  *a1 = -2;
  result = 3;
  v19 = v76;
LABEL_63:
  *(_BYTE *)(v19 + 840) = result;
  return result;
}
