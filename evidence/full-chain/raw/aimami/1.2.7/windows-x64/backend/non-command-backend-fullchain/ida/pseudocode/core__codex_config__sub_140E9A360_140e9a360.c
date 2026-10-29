// win 1.2.7 | module src/core/codex_config.rs | ea 0x140e9a360 | name sub_140E9A360
// win 1.2.7 | module src/core/codex_config.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E9A360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  bool v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // r13
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // r14
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(_QWORD, _QWORD); // rcx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 (__fastcall *v29)(_QWORD, _QWORD); // rbx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int64 v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v39; // [rsp+28h] [rbp-58h] BYREF
  __int128 v40; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+40h] [rbp-40h]
  __int128 v42; // [rsp+50h] [rbp-30h]
  __int128 v43; // [rsp+60h] [rbp-20h]
  _QWORD v44[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v45; // [rsp+80h] [rbp+0h] BYREF
  __int64 v46; // [rsp+88h] [rbp+8h] BYREF
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // [rsp+90h] [rbp+10h]
  __int64 v48; // [rsp+98h] [rbp+18h] BYREF
  __int64 v49; // [rsp+A0h] [rbp+20h]
  __int64 v50; // [rsp+A8h] [rbp+28h]
  __int128 v51; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v52; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // [rsp+C8h] [rbp+48h]
  __int128 v54; // [rsp+D0h] [rbp+50h]
  __int128 v55; // [rsp+E0h] [rbp+60h]
  __int128 v56; // [rsp+F0h] [rbp+70h]
  __int128 v57; // [rsp+100h] [rbp+80h]
  __int64 v58; // [rsp+110h] [rbp+90h]
  __int64 v59; // [rsp+118h] [rbp+98h]
  __int64 v60; // [rsp+120h] [rbp+A0h]
  __int64 v61; // [rsp+128h] [rbp+A8h]
  char v62; // [rsp+137h] [rbp+B7h] BYREF
  __int64 v63; // [rsp+138h] [rbp+B8h]
  __int64 v64; // [rsp+140h] [rbp+C0h]

  v64 = -2;
  v44[0] = a4;
  v44[1] = a5;
  v49 = a3;
  v8 = sub_141682A00(a2, a3);
  if ( v8 && (LOBYTE(v51) = 1, (v10 = sub_14168A790(&v51, v8, v9)) != 0) )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v10;
  }
  else
  {
    v11 = 1;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 || v11 > 3 )
      {
        *(_QWORD *)&v51 = v44;
        *((_QWORD *)&v51 + 1) = sub_140186EE0;
        sub_1416ABFD0(a1 + 8, &unk_141A55A3A, &v51);
        *(_QWORD *)a1 = 10;
        return a1;
      }
      v13 = v11 + 1;
      v12 = v11 == 3;
      if ( v11 == 3 )
        v13 = 3;
      v39 = v11;
      sub_140EC7390(&v51, a2, v49);
      v60 = *((_QWORD *)&v51 + 1);
      v14 = v51;
      v15 = v52;
      v16 = v53;
      if ( (_QWORD)v51 != -1 )
      {
        v24 = v54;
        v25 = v55;
        v26 = v56;
        *(_OWORD *)(a1 + 80) = v57;
        *(_OWORD *)(a1 + 64) = v26;
        *(_OWORD *)(a1 + 48) = v25;
        *(_OWORD *)(a1 + 32) = v24;
        *(_QWORD *)(a1 + 8) = v60;
        *(_QWORD *)(a1 + 16) = v15;
        *(_QWORD *)(a1 + 24) = v16;
        *(_QWORD *)a1 = v14;
        return a1;
      }
      v59 = v52;
      sub_140C6AD00(&v45, v52, v53, a6);
      v17 = a1;
      v18 = v47;
      v63 = v46;
      sub_140EC6F50(&v51, v46, v47);
      v19 = v51;
      if ( (_QWORD)v51 != -1 )
        break;
      v58 = v45;
      if ( v18 == v16 && !(unsigned int)sub_1418F4B70(v63, v59) )
      {
        a1 = v17;
        *(_QWORD *)v17 = -1;
LABEL_40:
        if ( v58 )
          sub_140001660(v63, v58, 1);
        goto LABEL_42;
      }
      sub_140EC7390(&v51, a2, v49);
      a1 = v17;
      v61 = *((_QWORD *)&v51 + 1);
      v20 = v51;
      v21 = v52;
      v22 = v53;
      if ( (_QWORD)v51 != -1 )
      {
        v33 = v54;
        v34 = v55;
        v35 = v56;
        *(_OWORD *)(a1 + 80) = v57;
        *(_OWORD *)(a1 + 64) = v35;
        *(_OWORD *)(a1 + 48) = v34;
        *(_OWORD *)(a1 + 32) = v33;
        *(_QWORD *)(a1 + 8) = v61;
        *(_QWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 24) = v22;
        *(_QWORD *)a1 = v20;
        goto LABEL_40;
      }
      v50 = v52;
      if ( v53 == v16 && !(unsigned int)sub_1418F4B70(v52, v59) )
      {
        if ( (sub_140222E10(a2, v49, v63, v18) & 1) != 0 )
        {
          v48 = v36;
          *(_QWORD *)&v51 = v44;
          *((_QWORD *)&v51 + 1) = sub_140186EE0;
          v52 = (__int64)&v48;
          v53 = sub_1416BB0B0;
          sub_1416ABFD0(&v40, &unk_141A56E20, &v51);
          v51 = v40;
          v52 = v41;
          if ( (unsigned int)(v48 & 3) - 2 >= 2 && (v48 & 3) != 0 )
          {
            v46 = v48 - 1;
            LOBYTE(v45) = 3;
            sub_1416BCB00(&v46);
          }
          *(_QWORD *)(a1 + 24) = v52;
          *(_OWORD *)(a1 + 8) = v51;
          v37 = 10;
        }
        else
        {
          v37 = -1;
          sub_1401BD710(v36);
        }
        *(_QWORD *)a1 = v37;
        if ( v61 )
          sub_140001660(v50, v61, 1);
        goto LABEL_40;
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v40 = v44;
        *((_QWORD *)&v40 + 1) = sub_140186EE0;
        *(_QWORD *)&v41 = &v39;
        *((_QWORD *)&v41 + 1) = sub_1416BCB10;
        *(_QWORD *)&v42 = &unk_141A55A88;
        *((_QWORD *)&v42 + 1) = sub_1416BCB10;
        *(_QWORD *)&v55 = 2;
        *((_QWORD *)&v55 + 1) = aCodexmateLibCo_38;
        *(_QWORD *)&v56 = 33;
        *(_QWORD *)&v57 = &unk_141A55A90;
        *((_QWORD *)&v57 + 1) = &v40;
        *(_QWORD *)&v51 = 0;
        *((_QWORD *)&v51 + 1) = aCodexmateLibCo_38;
        v52 = 33;
        v53 = nullptr;
        *(_QWORD *)&v54 = aSrcCoreCodexCo;
        *((_QWORD *)&v54 + 1) = 24;
        *((_QWORD *)&v56 + 1) = 0x2600000001LL;
        sub_1414D53A0(&v62, &v51);
      }
      v23 = v58;
      if ( v61 )
        sub_140001660(v50, v61, 1);
      if ( v23 )
        sub_140001660(v63, v23, 1);
      if ( v60 )
        sub_140001660(v59, v60, 1);
      v11 = v13;
    }
    v27 = *((_QWORD *)&v51 + 1);
    v28 = v52;
    v29 = v53;
    v40 = v54;
    v41 = v55;
    v42 = v56;
    v43 = v57;
    if ( v45 )
      sub_140001660(v63, v45, 1);
    v30 = v40;
    v31 = v41;
    v32 = v42;
    *(_OWORD *)(v17 + 80) = v43;
    *(_OWORD *)(v17 + 64) = v32;
    *(_OWORD *)(v17 + 48) = v31;
    *(_OWORD *)(v17 + 32) = v30;
    *(_QWORD *)(v17 + 8) = v27;
    *(_QWORD *)(v17 + 16) = v28;
    *(_QWORD *)(v17 + 24) = v29;
    *(_QWORD *)v17 = v19;
    a1 = v17;
LABEL_42:
    if ( v60 )
      sub_140001660(v59, v60, 1);
  }
  return a1;
}
