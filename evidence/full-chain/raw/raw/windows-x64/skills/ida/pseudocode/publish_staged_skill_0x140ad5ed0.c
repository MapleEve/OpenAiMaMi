// module: codexmate_lib/core/skills
// addr: 0x140ad5ed0
// name: publish_staged_skill
// win 1.2.1 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::skills::publish_staged_skill | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall publish_staged_skill(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  _OWORD v23[5]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+80h] [rbp+0h]
  __int64 v25; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v26; // [rsp+F8h] [rbp+78h]
  __int128 v27; // [rsp+108h] [rbp+88h] BYREF
  __int128 v28; // [rsp+118h] [rbp+98h]
  __int128 v29; // [rsp+128h] [rbp+A8h]
  __int128 v30; // [rsp+138h] [rbp+B8h]
  __int128 v31; // [rsp+148h] [rbp+C8h]
  __int64 v32; // [rsp+158h] [rbp+D8h]
  _QWORD v33[3]; // [rsp+1C0h] [rbp+140h] BYREF
  _QWORD v34[2]; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v35; // [rsp+1E8h] [rbp+168h] BYREF
  __int64 v36; // [rsp+1F0h] [rbp+170h]
  __int64 v37; // [rsp+1F8h] [rbp+178h]
  _QWORD v38[12]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v39; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v40; // [rsp+268h] [rbp+1E8h]
  __int64 v41; // [rsp+270h] [rbp+1F0h]
  __int64 v42; // [rsp+280h] [rbp+200h] BYREF
  __int64 v43; // [rsp+288h] [rbp+208h]
  char v44; // [rsp+297h] [rbp+217h] BYREF
  __int64 v45; // [rsp+298h] [rbp+218h]

  v45 = -2;
  sub_141356270(v23);
  *(_QWORD *)&v27 = v23;
  *((_QWORD *)&v27 + 1) = sub_140421AE0;
  sub_14149C0F0(&v35, &unk_1417AF1B6, &v27);
  v43 = v36;
  sub_141473E20((unsigned int)&v39, a3, a4, v36, v37);
  if ( v35 )
    sub_140001660(v43, v35, 1);
  sub_141486710(&v27, a3, a4);
  if ( (_DWORD)v27 == 2 )
  {
    *((_QWORD *)&v23[0] + 1) = *((_QWORD *)&v27 + 1);
    *(_QWORD *)&v23[0] = 2;
LABEL_6:
    sub_140018650((char *)v23 + 8);
    v10 = 1;
    goto LABEL_7;
  }
  v23[0] = v27;
  v24 = v32;
  v23[4] = v31;
  v23[3] = v30;
  v23[2] = v29;
  v23[1] = v28;
  if ( (_QWORD)v27 == 2 )
    goto LABEL_6;
  v11 = sub_141486540(a3, a4, v40, v41);
  if ( v11 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 8) = 2;
    *(_QWORD *)(a1 + 16) = v11;
LABEL_30:
    *(_QWORD *)a1 = 2;
    goto LABEL_31;
  }
  v10 = 0;
LABEL_7:
  v11 = sub_141486540(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a3, a4);
  if ( v11 )
  {
    v38[0] = v11;
    if ( !v10 )
    {
      v12 = v11;
      v13 = sub_141486540(v40, v41, a3, a4);
      v11 = v12;
      if ( v13 )
      {
        *(_QWORD *)&v23[0] = v13;
        *(_QWORD *)&v27 = v38;
        *((_QWORD *)&v27 + 1) = sub_141490720;
        *(_QWORD *)&v28 = v23;
        *((_QWORD *)&v28 + 1) = sub_141490720;
        sub_14149C0F0(&v25, &unk_1417AF1D0, &v27);
        v14 = v25;
        sub_140018650(v23);
        *(_QWORD *)(a1 + 8) = 10;
        *(_QWORD *)(a1 + 16) = v14;
        *(_OWORD *)(a1 + 24) = v26;
        *(_QWORD *)a1 = 2;
        sub_140018650(v38);
        goto LABEL_31;
      }
    }
    goto LABEL_20;
  }
  *(_BYTE *)(a2 + 32) = 1;
  sub_141473FA0((unsigned int)&v27, a3, a4, (unsigned int)&unk_1417AE817, 8);
  v43 = *((_QWORD *)&v27 + 1);
  sub_140AD4760((unsigned int)v23, DWORD2(v27), v28, a5, a6);
  if ( (_QWORD)v27 )
    sub_140001660(v43, v27, 1);
  if ( LODWORD(v23[0]) == 2 )
  {
    *(_QWORD *)&v27 = sub_1414860D0(a3, a4);
    if ( (_QWORD)v27 )
      sub_140018650(&v27);
    if ( v10 || (v16 = sub_141486540(v40, v41, a3, a4)) == 0 )
    {
      nullsub_1(v15);
      v17 = 33;
      v22 = (void *)sub_140001650(33, 1);
      if ( !v22 )
        sub_1416C2D4B(1, 33);
      v18 = v22;
      qmemcpy(v22, "Published skill failed validation", 33);
      v20 = 9;
      v19 = 33;
    }
    else
    {
      v38[0] = v16;
      *(_QWORD *)&v27 = v38;
      *((_QWORD *)&v27 + 1) = sub_141490720;
      sub_14149C0F0(v33, &unk_1417AF2AE, &v27);
      v17 = v33[0];
      v18 = (void *)v33[1];
      v19 = v33[2];
      sub_140018650(v38);
      v20 = 10;
    }
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 16) = v17;
    *(_QWORD *)(a1 + 24) = v18;
    *(_QWORD *)(a1 + 32) = v19;
    goto LABEL_30;
  }
  sub_141684120(&v27, v23, 184);
  if ( !v10 )
  {
    v21 = sub_1414860D0(v40, v41);
    if ( v21 )
    {
      v42 = v21;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v34[0] = &v42;
        v34[1] = sub_141490720;
        v38[0] = 0;
        v38[1] = aCodexmateLibCo_35;
        v38[2] = 27;
        v38[3] = 0;
        v38[4] = aSrcCoreSkillsR;
        v38[5] = 18;
        v38[6] = 2;
        v38[7] = aCodexmateLibCo_35;
        v38[8] = 27;
        v38[9] = 0x24500000001LL;
        v38[10] = &unk_1417AF21A;
        v38[11] = v34;
        sub_1412C36A0(&v44, v38);
      }
      sub_140018650(&v42);
    }
  }
  sub_141684120(a1, &v27, 184);
LABEL_31:
  if ( v39 )
    sub_140001660(v40, v39, 1);
}