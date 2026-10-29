// win 1.2.7 latest-exe | module src/core/skills.rs | ea 0x140d3e570 | successor of pre-update 0x140edee90 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.86, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140D3E570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // rbx
  void *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD v26[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int64 v29; // [rsp+100h] [rbp+80h] BYREF
  void *v30; // [rsp+108h] [rbp+88h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  _QWORD v32[2]; // [rsp+118h] [rbp+98h] BYREF
  __int64 *v33; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v34; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD *v35; // [rsp+138h] [rbp+B8h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+140h] [rbp+C0h]
  __int64 v37; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v38; // [rsp+1F0h] [rbp+170h]
  __int64 v39; // [rsp+1F8h] [rbp+178h]
  __int64 v40; // [rsp+200h] [rbp+180h] BYREF
  _QWORD v41[11]; // [rsp+208h] [rbp+188h] BYREF
  __int64 v42; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v43; // [rsp+268h] [rbp+1E8h]
  __int64 v44; // [rsp+270h] [rbp+1F0h]
  __int64 v45; // [rsp+280h] [rbp+200h] BYREF
  __int64 v46; // [rsp+288h] [rbp+208h]
  char v47; // [rsp+297h] [rbp+217h] BYREF
  __int64 v48; // [rsp+298h] [rbp+218h]

  v48 = -2;
  sub_141597890(v26);
  v33 = v26;
  v34 = (__int64)sub_1402230B0;
  sub_1416DAFA0(&v37, &unk_141A96955, &v33);
  v46 = v38;
  sub_1416B1720((unsigned int)&v42, a3, a4, v38, v39);
  if ( v37 )
    sub_140001660(v46, v37, 1);
  sub_1416C49D0(&v33, a3, a4);
  v10 = (int)v33;
  if ( v33 == (__int64 *)2 )
  {
    if ( (unsigned int)(v34 & 3) - 2 >= 2 && (v34 & 3) != 0 )
    {
      --v34;
      LOBYTE(v33) = 3;
      sub_1416EBAD0(&v34);
    }
  }
  else
  {
    v11 = sub_1416C4800(a3, a4, v43, v44);
    if ( v11 )
    {
LABEL_17:
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v11;
LABEL_18:
      *(_QWORD *)a1 = 2;
      goto LABEL_19;
    }
  }
  v11 = sub_1416C4800(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3, a4);
  if ( v11 )
  {
    v40 = v11;
    if ( v10 != 2 )
    {
      v12 = v11;
      v13 = sub_1416C4800(v43, v44, a3, a4);
      v11 = v12;
      if ( v13 )
      {
        v26[0] = v13;
        v33 = &v40;
        v34 = (__int64)sub_1416EA080;
        v35 = v26;
        v36 = sub_1416EA080;
        sub_1416DAFA0(&v27, &unk_141A9696F, &v33);
        v14 = v27;
        if ( (v26[0] & 3) - 2 >= 2 && (v26[0] & 3) != 0 )
        {
          v34 = v26[0] - 1LL;
          LOBYTE(v33) = 3;
          sub_1416EBAD0(&v34);
        }
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)(a1 + 16) = v14;
        *(_OWORD *)(a1 + 24) = v28;
        *(_QWORD *)a1 = 2;
        if ( (unsigned int)(v40 & 3) - 2 >= 2 && (v40 & 3) != 0 )
        {
          v34 = v40 - 1;
          LOBYTE(v33) = 3;
          sub_1416EBAD0(&v34);
        }
LABEL_19:
        v15 = v42;
        if ( !v42 )
          return;
        goto LABEL_20;
      }
    }
    goto LABEL_17;
  }
  *(_BYTE *)(a2 + 32) = 1;
  sub_1416B18A0((unsigned int)&v33, a3, a4, (unsigned int)&unk_141A909F3, 8);
  v46 = v34;
  sub_140D3CCE0((unsigned int)v26, v34, (_DWORD)v35, a5, a6);
  if ( v33 )
    sub_140001660(v46, v33, 1);
  if ( LODWORD(v26[0]) == 2 )
  {
    v16 = sub_1416C42F0(a3, a4);
    if ( v16 )
    {
      v18 = v16 & 3;
      v17 = (unsigned int)(v18 - 2);
      if ( (unsigned int)v17 >= 2 && (v16 & 3) != 0 )
      {
        v34 = v16 - 1;
        LOBYTE(v33) = 3;
        sub_1416EBAD0(&v34);
      }
    }
    if ( v10 == 2 || (v19 = sub_1416C4800(v43, v44, a3, a4)) == 0 )
    {
      nullsub_1(v18, v17);
      v20 = 33;
      v21 = (void *)sub_140001650(33, 1);
      if ( !v21 )
        sub_14196B2DB(1, 33);
      qmemcpy(v21, "Published skill failed validation", 33);
      v24 = 9;
      v22 = 33;
    }
    else
    {
      v40 = v19;
      v33 = &v40;
      v34 = (__int64)sub_1416EA080;
      sub_1416DAFA0(&v29, &unk_141A96A4D, &v33);
      v20 = v29;
      v21 = v30;
      v22 = v31;
      if ( (unsigned int)(v40 & 3) - 2 >= 2 && (v40 & 3) != 0 )
      {
        v23 = v30;
        v34 = v40 - 1;
        LOBYTE(v33) = 3;
        sub_1416EBAD0(&v34);
        v21 = v23;
      }
      v24 = 10;
    }
    *(_QWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = v21;
    *(_QWORD *)(a1 + 32) = v22;
    goto LABEL_18;
  }
  sub_1419234B0(&v33, v26, 192);
  if ( v10 != 2 )
  {
    v25 = sub_1416C42F0(v43, v44);
    if ( v25 )
    {
      v45 = v25;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v32[0] = &v45;
        v32[1] = sub_1416EA080;
        v41[5] = 2;
        v41[6] = aCodexmateLibCo_46;
        v41[7] = 27;
        v41[9] = &unk_141A969B9;
        v41[10] = v32;
        v40 = 0;
        v41[0] = aCodexmateLibCo_46;
        v41[1] = 27;
        v41[2] = 0;
        v41[3] = aSrcCoreSkillsR;
        v41[4] = 18;
        v41[8] = 0x24E00000001LL;
        sub_141503E20(&v47, &v40);
        v25 = v45;
      }
      if ( (unsigned int)(v25 & 3) - 2 >= 2 && (v25 & 3) != 0 )
      {
        v41[0] = v25 - 1;
        LOBYTE(v40) = 3;
        sub_1416EBAD0(v41);
      }
    }
  }
  sub_1419234B0(a1, &v33, 192);
  v15 = v42;
  if ( v42 )
LABEL_20:
    sub_140001660(v43, v15, 1);
}
