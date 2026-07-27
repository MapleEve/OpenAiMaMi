// module: codexmate_lib/core/account_io
// addr: 0x14086aff0
// name: validate_import_display_fields
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_io::validate_import_display_fields | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall validate_import_display_fields(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r9
  __int64 *v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 i; // r13
  __int64 v22; // rcx
  char *v23; // rdx
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // r10
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // r11
  __int64 j; // r13
  char *v36; // rdx
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 k; // rdi
  __int64 v42; // rcx
  char *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  _QWORD *v55; // [rsp+20h] [rbp-60h]
  __int64 v56; // [rsp+28h] [rbp-58h] BYREF
  __int128 v57; // [rsp+30h] [rbp-50h] BYREF
  __int64 v58; // [rsp+40h] [rbp-40h]
  __int64 v59; // [rsp+48h] [rbp-38h] BYREF
  __int64 v60; // [rsp+50h] [rbp-30h]
  __int64 v61; // [rsp+58h] [rbp-28h] BYREF
  __int128 v62; // [rsp+60h] [rbp-20h] BYREF
  __int128 v63; // [rsp+70h] [rbp-10h] BYREF
  __int128 v64; // [rsp+80h] [rbp+0h]
  __int128 v65; // [rsp+90h] [rbp+10h]
  __int128 v66; // [rsp+A0h] [rbp+20h]
  __int128 v67; // [rsp+B0h] [rbp+30h]
  __int64 v68; // [rsp+C0h] [rbp+40h]
  __int64 v69; // [rsp+C8h] [rbp+48h]
  const char *v70; // [rsp+D0h] [rbp+50h]
  __int64 v71; // [rsp+D8h] [rbp+58h]
  __int64 v72; // [rsp+E0h] [rbp+60h]
  __int64 *v73; // [rsp+E8h] [rbp+68h]
  __int64 v74; // [rsp+F0h] [rbp+70h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+F8h] [rbp+78h] BYREF
  __int128 v76; // [rsp+100h] [rbp+80h]
  __int128 v77; // [rsp+110h] [rbp+90h]
  __int128 v78; // [rsp+120h] [rbp+A0h]
  __int128 v79; // [rsp+130h] [rbp+B0h]
  __int128 v80; // [rsp+140h] [rbp+C0h]
  __int64 v81; // [rsp+150h] [rbp+D0h]
  __int64 v82; // [rsp+158h] [rbp+D8h] BYREF
  __int64 v83; // [rsp+160h] [rbp+E0h]
  __int64 v84; // [rsp+168h] [rbp+E8h]
  const char *v85; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v86; // [rsp+178h] [rbp+F8h]
  __int64 *v87; // [rsp+180h] [rbp+100h]
  __int64 (__fastcall *v88)(); // [rsp+188h] [rbp+108h]
  _QWORD *v89; // [rsp+190h] [rbp+110h]
  __int64 v90; // [rsp+198h] [rbp+118h]
  __int64 v91; // [rsp+1A0h] [rbp+120h]

  v91 = -2;
  v3 = a2[5];
  v85 = aAppversion;
  v86 = 10;
  v82 = 1024;
  if ( v3 >= 0x401 || a2[9] != -1 && (v4 = a2[11], v85 = aExportedhostna, v86 = 16, v82 = 1024, v4 > 0x400) )
  {
    v74 = (__int64)&v85;
    v75 = sub_14041F680;
    *(_QWORD *)&v76 = &v82;
    *((_QWORD *)&v76 + 1) = sub_1414AC520;
    sub_14149C0F0((char *)&v62 + 8, &unk_14179858A, &v74);
    *(_QWORD *)&v62 = 9;
    *(_OWORD *)(a1 + 80) = v67;
    v5 = v63;
    v6 = v64;
    v7 = v65;
    *(_OWORD *)(a1 + 64) = v66;
    *(_OWORD *)(a1 + 48) = v7;
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_QWORD *)a1 = v62;
    result = *((_QWORD *)&v62 + 1);
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v62 + 1);
    return result;
  }
  v81 = a1;
  v9 = (_QWORD *)a2[7];
  v10 = 0;
  v55 = &v9[52 * a2[8]];
  if ( v9 == v55 )
    goto LABEL_71;
  while ( 2 )
  {
    v90 = v10;
    v56 = v10;
    v74 = (__int64)&v56;
    v75 = sub_1414AC520;
    v11 = &v74;
    sub_14149C0F0(&v62, &unk_14179873F, &v74);
    v57 = v62;
    v58 = v63;
    v85 = (const char *)&v57;
    v86 = (__int64)sub_1400015F0;
    sub_14149C0F0(&v74, &unk_14179874D, &v85);
    v12 = v9[6];
    v85 = (const char *)v75;
    v86 = v76;
    v82 = 256;
    if ( v12 < 0x101 )
    {
      if ( v74 )
        sub_140001660(v75, v74, 1);
      v85 = (const char *)&v57;
      v86 = (__int64)sub_1400015F0;
      sub_14149C0F0(&v74, &unk_14179875B, &v85);
      v13 = v9[9];
      v85 = (const char *)v75;
      v86 = v76;
      v82 = 1024;
      if ( v13 < 0x401 )
      {
        if ( v74 )
          sub_140001660(v75, v74, 1);
        v85 = (const char *)&v57;
        v86 = (__int64)sub_1400015F0;
        sub_14149C0F0(&v74, &unk_141798764, &v85);
        v15 = v74;
        v16 = v76;
        v17 = v9[12];
        v85 = (const char *)v75;
        v86 = v76;
        v82 = 4096;
        if ( v17 < 0x1001 )
        {
          if ( v74 )
            v16 = sub_140001660(v75, v74, 1);
          if ( v9[19] == -1 )
          {
            v18 = 0;
            if ( v9[22] != -1 )
            {
LABEL_17:
              v19 = v9[23];
              v15 = v9[24];
              if ( v9[25] != -1 )
              {
LABEL_18:
                v20 = v9[26];
                v14 = v9[27];
LABEL_22:
                v89 = v9 + 52;
                ++v90;
                *(_QWORD *)&v62 = 0;
                *((_QWORD *)&v62 + 1) = 3;
                *(_QWORD *)&v63 = "accountNameworkspaceNameprofileNameplanauthModehasActiveSubscriptionsubscriptionExpire"
                                  "sAtsubscriptionWillRenewcreatedAtlastUsedAtauth";
                *((_QWORD *)&v63 + 1) = 11;
                *(_QWORD *)&v64 = v18;
                *((_QWORD *)&v64 + 1) = v16;
                *(_QWORD *)&v65 = "workspaceNameprofileNameplanauthModehasActiveSubscriptionsubscriptionExpiresAtsubscrip"
                                  "tionWillRenewcreatedAtlastUsedAtauth";
                *((_QWORD *)&v65 + 1) = 13;
                *(_QWORD *)&v66 = v19;
                *((_QWORD *)&v66 + 1) = v15;
                *(_QWORD *)&v67 = "profileNameplanauthModehasActiveSubscriptionsubscriptionExpiresAtsubscriptionWillRenew"
                                  "createdAtlastUsedAtauth";
                *((_QWORD *)&v67 + 1) = 11;
                v68 = v20;
                v69 = v14;
                for ( i = 0; i != 3; ++i )
                {
                  v22 = 32 * i;
                  if ( !*((_QWORD *)&v63 + 4 * i) )
                    break;
                  v23 = (char *)&v63 + v22;
                  v11 = *((__int64 **)&v64 + 4 * i + 1);
                  v24 = *(_QWORD *)((char *)&v63 + v22 + 8);
                  v25 = *((_QWORD *)v23 + 2) == 0;
                  v59 = *((_QWORD *)&v63 + 4 * i);
                  v60 = v24;
                  if ( !v25 )
                  {
                    v85 = (const char *)&v57;
                    v86 = (__int64)sub_1400015F0;
                    v87 = &v59;
                    v88 = sub_14041F680;
                    sub_14149C0F0(&v82, &unk_1417987C3, &v85);
                    v26 = v82;
                    v27 = v83;
                    v82 = v83;
                    v83 = v84;
                    v61 = 4096;
                    if ( (unsigned __int64)v11 >= 0x1001 )
                    {
LABEL_72:
                      v89 = (_QWORD *)v27;
                      v90 = v26;
                      v85 = (const char *)&v82;
                      v86 = (__int64)sub_14041F680;
                      v87 = &v61;
                      v88 = sub_1414AC520;
                      sub_14149C0F0(&v75, &unk_14179858A, &v85);
                      v74 = 9;
                      v46 = v81;
                      *(_OWORD *)(v81 + 80) = v80;
                      v47 = v76;
                      v48 = v77;
                      v49 = v78;
                      *(_OWORD *)(v46 + 64) = v79;
                      *(_OWORD *)(v46 + 48) = v49;
                      *(_OWORD *)(v46 + 32) = v48;
                      *(_OWORD *)(v46 + 16) = v47;
                      *(_QWORD *)v46 = v74;
                      result = (__int64)v75;
                      *(_QWORD *)(v46 + 8) = v75;
                      v50 = v90;
                      if ( !v90 )
                        goto LABEL_74;
                      goto LABEL_73;
                    }
                    if ( v26 )
                      sub_140001660(v27, v26, 1);
                  }
                }
                v85 = (const char *)&v57;
                v86 = (__int64)sub_1400015F0;
                sub_14149C0F0(&v74, &unk_14179876D, &v85);
                v28 = v9[15];
                v85 = (const char *)v75;
                v86 = v76;
                v82 = 1024;
                if ( v28 >= 0x401 )
                  break;
                if ( v74 )
                  sub_140001660(v75, v74, 1);
                v85 = (const char *)&v57;
                v86 = (__int64)sub_1400015F0;
                sub_14149C0F0(&v74, &unk_141798775, &v85);
                v27 = (__int64)v75;
                v30 = v9[18];
                v85 = (const char *)v75;
                v86 = v76;
                v82 = 1024;
                if ( v30 >= 0x401 )
                  break;
                if ( v74 )
                  sub_140001660(v75, v74, 1);
                if ( v9[37] == -1 )
                {
                  v31 = 0;
                  if ( v9[40] != -1 )
                  {
LABEL_38:
                    v32 = v9[41];
                    v30 = v9[42];
                    if ( v9[34] != -1 )
                      goto LABEL_39;
                    goto LABEL_43;
                  }
                }
                else
                {
                  v31 = v9[38];
                  v27 = v9[39];
                  if ( v9[40] != -1 )
                    goto LABEL_38;
                }
                v32 = 0;
                if ( v9[34] != -1 )
                {
LABEL_39:
                  v33 = v9[35];
                  v29 = v9[36];
                  if ( v9[31] != -1 )
                  {
LABEL_40:
                    v34 = v9[32];
                    v11 = (__int64 *)v9[33];
LABEL_45:
                    *(_QWORD *)&v62 = 0;
                    *((_QWORD *)&v62 + 1) = 4;
                    *(_QWORD *)&v63 = aAccesstoken;
                    *((_QWORD *)&v63 + 1) = 11;
                    *(_QWORD *)&v64 = v31;
                    *((_QWORD *)&v64 + 1) = v27;
                    *(_QWORD *)&v65 = aRefreshtoken;
                    *((_QWORD *)&v65 + 1) = 12;
                    *(_QWORD *)&v66 = v32;
                    *((_QWORD *)&v66 + 1) = v30;
                    *(_QWORD *)&v67 = aIdtoken;
                    *((_QWORD *)&v67 + 1) = 7;
                    v68 = v33;
                    v69 = v29;
                    v70 = aApikey_4;
                    v71 = 6;
                    v72 = v34;
                    v73 = v11;
                    for ( j = 0; j != 4; ++j )
                    {
                      v27 = 32 * j;
                      if ( !*((_QWORD *)&v63 + 4 * j) )
                        break;
                      v36 = (char *)&v63 + v27;
                      v37 = *((_QWORD *)&v64 + 4 * j + 1);
                      v27 = *(_QWORD *)((char *)&v63 + v27 + 8);
                      v25 = *((_QWORD *)v36 + 2) == 0;
                      v59 = *((_QWORD *)&v63 + 4 * j);
                      v60 = v27;
                      if ( !v25 )
                      {
                        v85 = (const char *)&v57;
                        v86 = (__int64)sub_1400015F0;
                        v87 = &v59;
                        v88 = sub_14041F680;
                        sub_14149C0F0(&v82, &unk_1417987B9, &v85);
                        v26 = v82;
                        v27 = v83;
                        v82 = v83;
                        v83 = v84;
                        v61 = 0x100000;
                        if ( v37 >= 0x100001 )
                          goto LABEL_72;
                        if ( v26 )
                          sub_140001660(v27, v26, 1);
                      }
                    }
                    if ( v9[43] == -1 )
                    {
                      v38 = 0;
                      if ( v9[28] != -1 )
                      {
LABEL_55:
                        v39 = v9[29];
                        v30 = v9[30];
                        if ( v9[46] != -1 )
                        {
LABEL_56:
                          v40 = v9[47];
                          v29 = v9[48];
LABEL_60:
                          *(_QWORD *)&v62 = 0;
                          *((_QWORD *)&v62 + 1) = 3;
                          *(_QWORD *)&v63 = aAccountid_0;
                          *((_QWORD *)&v63 + 1) = 9;
                          *(_QWORD *)&v64 = v38;
                          *((_QWORD *)&v64 + 1) = v27;
                          *(_QWORD *)&v65 = "authModehasActiveSubscriptionsubscriptionExpiresAtsubscriptionWillRenewcreat"
                                            "edAtlastUsedAtauth";
                          *((_QWORD *)&v65 + 1) = 8;
                          *(_QWORD *)&v66 = v39;
                          *((_QWORD *)&v66 + 1) = v30;
                          *(_QWORD *)&v67 = aLastrefresh;
                          *((_QWORD *)&v67 + 1) = 11;
                          v68 = v40;
                          v69 = v29;
                          for ( k = 0; k != 3; ++k )
                          {
                            v42 = 32 * k;
                            if ( !*((_QWORD *)&v63 + 4 * k) )
                              break;
                            v43 = (char *)&v63 + v42;
                            v44 = *((_QWORD *)&v64 + 4 * k + 1);
                            v45 = *(_QWORD *)((char *)&v63 + v42 + 8);
                            v25 = *((_QWORD *)v43 + 2) == 0;
                            v59 = *((_QWORD *)&v63 + 4 * k);
                            v60 = v45;
                            if ( !v25 )
                            {
                              v85 = (const char *)&v57;
                              v86 = (__int64)sub_1400015F0;
                              v87 = &v59;
                              v88 = sub_14041F680;
                              sub_14149C0F0(&v82, &unk_1417987B9, &v85);
                              v26 = v82;
                              v27 = v83;
                              v82 = v83;
                              v83 = v84;
                              v61 = 1024;
                              if ( v44 >= 0x401 )
                                goto LABEL_72;
                              if ( v26 )
                                sub_140001660(v27, v26, 1);
                            }
                          }
                          if ( (_QWORD)v57 )
                            sub_140001660(*((_QWORD *)&v57 + 1), v57, 1);
                          v9 = v89;
                          v10 = v90;
                          if ( v89 != v55 )
                            continue;
LABEL_71:
                          result = v81;
                          *(_QWORD *)v81 = -1;
                          return result;
                        }
LABEL_59:
                        v40 = 0;
                        goto LABEL_60;
                      }
                    }
                    else
                    {
                      v38 = v9[44];
                      v27 = v9[45];
                      if ( v9[28] != -1 )
                        goto LABEL_55;
                    }
                    v39 = 0;
                    if ( v9[46] != -1 )
                      goto LABEL_56;
                    goto LABEL_59;
                  }
LABEL_44:
                  v34 = 0;
                  goto LABEL_45;
                }
LABEL_43:
                v33 = 0;
                if ( v9[31] != -1 )
                  goto LABEL_40;
                goto LABEL_44;
              }
LABEL_21:
              v20 = 0;
              goto LABEL_22;
            }
          }
          else
          {
            v18 = v9[20];
            v16 = v9[21];
            if ( v9[22] != -1 )
              goto LABEL_17;
          }
          v19 = 0;
          if ( v9[25] != -1 )
            goto LABEL_18;
          goto LABEL_21;
        }
      }
    }
    break;
  }
  v89 = v75;
  v90 = v74;
  v74 = (__int64)&v85;
  v75 = sub_14041F680;
  *(_QWORD *)&v76 = &v82;
  *((_QWORD *)&v76 + 1) = sub_1414AC520;
  sub_14149C0F0((char *)&v62 + 8, &unk_14179858A, &v74);
  *(_QWORD *)&v62 = 9;
  v51 = v81;
  *(_OWORD *)(v81 + 80) = v67;
  v52 = v63;
  v53 = v64;
  v54 = v65;
  *(_OWORD *)(v51 + 64) = v66;
  *(_OWORD *)(v51 + 48) = v54;
  *(_OWORD *)(v51 + 32) = v53;
  *(_OWORD *)(v51 + 16) = v52;
  *(_QWORD *)v51 = v62;
  result = *((_QWORD *)&v62 + 1);
  *(_QWORD *)(v51 + 8) = *((_QWORD *)&v62 + 1);
  v50 = v90;
  if ( v90 )
LABEL_73:
    result = sub_140001660(v89, v50, 1);
LABEL_74:
  if ( (_QWORD)v57 )
    return sub_140001660(*((_QWORD *)&v57 + 1), v57, 1);
  return result;
}
