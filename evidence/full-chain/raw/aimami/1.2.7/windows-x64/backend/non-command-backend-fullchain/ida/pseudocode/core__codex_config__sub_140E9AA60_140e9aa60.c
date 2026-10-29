// win 1.2.7 | module src/core/codex_config.rs | ea 0x140e9aa60 | name sub_140E9AA60
// win 1.2.7 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_140E9AA60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 *a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // rax
  bool v14; // si
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // r13
  __int64 (__fastcall *v19)(_QWORD, _QWORD); // r15
  __int64 v20; // rax
  __int64 (__fastcall *v21)(_QWORD, _QWORD); // rcx
  __int64 v22; // r15
  _QWORD *v23; // rsi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  __int128 v36; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 *v37; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall *v38)(); // [rsp+50h] [rbp-30h]
  void *v39; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v40)(); // [rsp+60h] [rbp-20h]
  unsigned __int64 v41; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v43; // [rsp+80h] [rbp+0h] BYREF
  __int64 v44; // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+98h] [rbp+18h]
  __int128 v46; // [rsp+A0h] [rbp+20h]
  __int128 v47; // [rsp+B0h] [rbp+30h]
  __int128 v48; // [rsp+C0h] [rbp+40h]
  __int128 v49; // [rsp+D0h] [rbp+50h]
  __int64 v50; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v51; // [rsp+E8h] [rbp+68h]
  __int64 v52; // [rsp+F0h] [rbp+70h]
  __int64 v53; // [rsp+F8h] [rbp+78h]
  __int64 v54; // [rsp+100h] [rbp+80h]
  __int64 v55; // [rsp+108h] [rbp+88h]
  __int64 v56; // [rsp+110h] [rbp+90h]
  char v57; // [rsp+11Fh] [rbp+9Fh] BYREF
  __int64 v58; // [rsp+120h] [rbp+A0h]
  unsigned __int8 v59; // [rsp+12Fh] [rbp+AFh]
  __int64 v60; // [rsp+130h] [rbp+B0h]

  v60 = -2;
  v58 = a1;
  v42[0] = a4;
  v42[1] = a5;
  v8 = sub_141682A00(a2, a3);
  if ( v8 && (LOBYTE(v43) = 1, (v10 = sub_14168A790(&v43, v8, v9)) != 0) )
  {
    v11 = v58;
    *(_QWORD *)v58 = 2;
    *(_QWORD *)(v11 + 8) = v10;
    return (_QWORD *)v11;
  }
  else
  {
    v59 = *a6;
    v13 = 1;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 || v13 > 3 )
      {
        *(_QWORD *)&v43 = v42;
        *((_QWORD *)&v43 + 1) = sub_140186EE0;
        v23 = (_QWORD *)v58;
        sub_1416ABFD0(v58 + 8, &unk_141A55A3A, &v43);
        *v23 = 10;
        return v23;
      }
      v15 = v13 + 1;
      v14 = v13 == 3;
      if ( v13 == 3 )
        v15 = 3;
      v41 = v13;
      sub_140EC7390(&v43, a2, a3);
      v55 = *((_QWORD *)&v43 + 1);
      v16 = v43;
      v17 = v44;
      v18 = v45;
      if ( (_QWORD)v43 != -1 )
      {
        v24 = v46;
        v25 = v47;
        v26 = v48;
        v27 = v58;
        *(_OWORD *)(v58 + 80) = v49;
        *(_OWORD *)(v27 + 64) = v26;
        *(_OWORD *)(v27 + 48) = v25;
        *(_OWORD *)(v27 + 32) = v24;
        *(_QWORD *)(v27 + 8) = v55;
        *(_QWORD *)(v27 + 16) = v17;
        *(_QWORD *)(v27 + 24) = v18;
        *(_QWORD *)v27 = v16;
        return (_QWORD *)v58;
      }
      v52 = v44;
      sub_140C53FF0((char *)&v43 + 8, v44, v45, v59);
      v51 = *((_QWORD *)&v43 + 1);
      v53 = v44;
      v19 = v45;
      if ( v45 == v18 && !(unsigned int)sub_1418F4B70(v53, v52) )
      {
        *(_QWORD *)v58 = -1;
        goto LABEL_36;
      }
      sub_140EC7390(&v43, a2, a3);
      v56 = *((_QWORD *)&v43 + 1);
      v20 = v43;
      v54 = v44;
      v21 = v45;
      if ( (_QWORD)v43 != -1 )
      {
        v28 = v46;
        v29 = v47;
        v30 = v48;
        v31 = v58;
        *(_OWORD *)(v58 + 80) = v49;
        *(_OWORD *)(v31 + 64) = v30;
        *(_OWORD *)(v31 + 48) = v29;
        *(_OWORD *)(v31 + 32) = v28;
        *(_QWORD *)(v31 + 8) = v56;
        *(_QWORD *)(v31 + 16) = v54;
        *(_QWORD *)(v31 + 24) = v21;
        *(_QWORD *)v31 = v20;
        goto LABEL_36;
      }
      if ( v45 == v18 && !(unsigned int)sub_1418F4B70(v54, v52) )
        break;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v36 = v42;
        *((_QWORD *)&v36 + 1) = sub_140186EE0;
        v37 = &v41;
        v38 = sub_1416BCB10;
        v39 = &unk_141A55A88;
        v40 = sub_1416BCB10;
        *(_QWORD *)&v47 = 2;
        *((_QWORD *)&v47 + 1) = aCodexmateLibCo_38;
        *(_QWORD *)&v48 = 33;
        *(_QWORD *)&v49 = &unk_141A55A90;
        *((_QWORD *)&v49 + 1) = &v36;
        *(_QWORD *)&v43 = 0;
        *((_QWORD *)&v43 + 1) = aCodexmateLibCo_38;
        v44 = 33;
        v45 = nullptr;
        *(_QWORD *)&v46 = aSrcCoreCodexCo;
        *((_QWORD *)&v46 + 1) = 24;
        *((_QWORD *)&v48 + 1) = 0x2600000001LL;
        sub_1414D53A0(&v57, &v43);
      }
      v22 = v51;
      if ( v56 )
        sub_140001660(v54, v56, 1);
      if ( v22 )
        sub_140001660(v53, v22, 1);
      if ( v55 )
        sub_140001660(v52, v55, 1);
      v13 = v15;
    }
    if ( (sub_140222E10(a2, a3, v53, v19) & 1) != 0 )
    {
      v50 = v32;
      *(_QWORD *)&v43 = v42;
      *((_QWORD *)&v43 + 1) = sub_140186EE0;
      v44 = (__int64)&v50;
      v45 = sub_1416BB0B0;
      sub_1416ABFD0(&v36, &unk_141A56E20, &v43);
      v43 = v36;
      v44 = (__int64)v37;
      if ( (unsigned int)(v50 & 3) - 2 >= 2 && (v50 & 3) != 0 )
      {
        v35 = v50 - 1;
        sub_1416BCB00(&v35);
      }
      v33 = v58;
      *(_QWORD *)(v58 + 24) = v44;
      *(_OWORD *)(v33 + 8) = v43;
      v34 = 10;
    }
    else
    {
      v34 = -1;
      sub_1401BD710(v32);
    }
    *(_QWORD *)v58 = v34;
    if ( v56 )
      sub_140001660(v54, v56, 1);
LABEL_36:
    if ( v51 )
      sub_140001660(v53, v51, 1);
    if ( v55 )
      sub_140001660(v52, v55, 1);
    return (_QWORD *)v58;
  }
}
