// module: codexmate_lib/commands/accounts
// addr: 0x1403ec5e0
// name: store_bootstrap_snapshot_best_effort
// win 1.2.1 | module src/commands/accounts.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall store_bootstrap_snapshot_best_effort(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edx
  const char *v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  _QWORD v28[130]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+440h] [rbp+3C0h] BYREF
  const char *v30; // [rsp+448h] [rbp+3C8h]
  _QWORD v31[46]; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v32; // [rsp+5C0h] [rbp+540h]
  __int64 v33; // [rsp+5D0h] [rbp+550h]
  __int64 v34; // [rsp+5D8h] [rbp+558h]
  __int64 v35; // [rsp+5E8h] [rbp+568h]
  __int64 v36; // [rsp+5F0h] [rbp+570h]
  __int64 v37; // [rsp+600h] [rbp+580h]
  __int64 v38; // [rsp+608h] [rbp+588h]
  __int64 v39; // [rsp+618h] [rbp+598h]
  __int64 v40; // [rsp+620h] [rbp+5A0h]
  __int64 v41; // [rsp+630h] [rbp+5B0h]
  __int64 v42; // [rsp+638h] [rbp+5B8h]
  __int64 v43; // [rsp+648h] [rbp+5C8h]
  __int64 v44; // [rsp+650h] [rbp+5D0h]
  char v45; // [rsp+658h] [rbp+5D8h]
  char v46; // [rsp+659h] [rbp+5D9h]
  char v47; // [rsp+65Ah] [rbp+5DAh]
  char v48[40]; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v49; // [rsp+688h] [rbp+608h]
  __int64 v50; // [rsp+690h] [rbp+610h]
  __int64 v51; // [rsp+698h] [rbp+618h]
  __int64 v52; // [rsp+6A0h] [rbp+620h]
  __int64 v53; // [rsp+6A8h] [rbp+628h]
  __int64 v54; // [rsp+6B0h] [rbp+630h]
  char v55; // [rsp+6B8h] [rbp+638h]
  __int64 v56; // [rsp+6C0h] [rbp+640h]
  __int64 v57; // [rsp+6C8h] [rbp+648h]
  __int64 v58; // [rsp+6D0h] [rbp+650h]
  char v59; // [rsp+6D8h] [rbp+658h]
  __int64 v60; // [rsp+6E0h] [rbp+660h]
  int v61; // [rsp+6E8h] [rbp+668h]
  char v62; // [rsp+6ECh] [rbp+66Ch]
  __int64 v63; // [rsp+6F8h] [rbp+678h]
  __int64 v64; // [rsp+700h] [rbp+680h]
  __int64 v65; // [rsp+708h] [rbp+688h]
  __int64 v66; // [rsp+710h] [rbp+690h]
  __int64 v67; // [rsp+718h] [rbp+698h]
  __int64 v68; // [rsp+720h] [rbp+6A0h]
  __int64 v69; // [rsp+728h] [rbp+6A8h]
  __int64 v70; // [rsp+730h] [rbp+6B0h]
  int v71; // [rsp+738h] [rbp+6B8h]
  int v72; // [rsp+73Ch] [rbp+6BCh]
  int v73; // [rsp+740h] [rbp+6C0h]
  char v74; // [rsp+744h] [rbp+6C4h]
  int v75; // [rsp+748h] [rbp+6C8h]
  int v76; // [rsp+74Ch] [rbp+6CCh]
  int v77; // [rsp+750h] [rbp+6D0h]
  char v78; // [rsp+754h] [rbp+6D4h]
  int v79; // [rsp+758h] [rbp+6D8h]
  int v80; // [rsp+75Ch] [rbp+6DCh]
  int v81; // [rsp+760h] [rbp+6E0h]
  char v82; // [rsp+764h] [rbp+6E4h]
  __int64 v83; // [rsp+768h] [rbp+6E8h]
  __int64 v84; // [rsp+770h] [rbp+6F0h]
  char v85; // [rsp+778h] [rbp+6F8h]
  int v86; // [rsp+860h] [rbp+7E0h]
  _QWORD v87[2]; // [rsp+868h] [rbp+7E8h] BYREF
  _QWORD *v88; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 (__fastcall *v89)(); // [rsp+880h] [rbp+800h]
  __int64 *v90; // [rsp+888h] [rbp+808h]
  __int64 (__fastcall *v91)(_QWORD, _QWORD); // [rsp+890h] [rbp+810h]
  __int64 (__fastcall *v92)(); // [rsp+898h] [rbp+818h]
  _QWORD *v93; // [rsp+8A0h] [rbp+820h]
  _BYTE v94[2]; // [rsp+8ADh] [rbp+82Dh] BYREF
  char v95; // [rsp+8AFh] [rbp+82Fh]
  __int64 v96; // [rsp+8B0h] [rbp+830h]

  v96 = -2;
  v87[0] = a3;
  v87[1] = a4;
  v6 = *(_QWORD *)(a1 + 616);
  v7 = *(_QWORD *)(a1 + 624);
  sub_1403C86D0(&v29, v6, v7);
  v8 = v31[0];
  if ( v31[0] != -1
    && v61 == *((_DWORD *)a2 + 166)
    && v60 == a2[82]
    && v45 == *((_BYTE *)a2 + 520)
    && v46 == *((_BYTE *)a2 + 521)
    && v47 == *((_BYTE *)a2 + 522)
    && v32 == a2[46]
    && !(unsigned int)sub_1416847B0(v31[45], a2[45], v32)
    && v34 == a2[49]
    && !(unsigned int)sub_1416847B0(v33, a2[48], v34)
    && v36 == a2[52]
    && !(unsigned int)sub_1416847B0(v35, a2[51], v36)
    && v38 == a2[55]
    && !(unsigned int)sub_1416847B0(v37, a2[54], v38)
    && v40 == a2[58]
    && !(unsigned int)sub_1416847B0(v39, a2[57], v40)
    && v42 == a2[61]
    && !(unsigned int)sub_1416847B0(v41, a2[60], v42)
    && v44 == a2[64]
    && !(unsigned int)sub_1416847B0(v43, a2[63], v44) )
  {
    v20 = a2[71];
    if ( v49 == -1 )
    {
      if ( v20 != -1 )
        goto LABEL_21;
    }
    else if ( v20 == -1 || v51 != a2[73] || (unsigned int)sub_1416847B0(v50, a2[72], v51) )
    {
      goto LABEL_21;
    }
    v21 = *a2;
    if ( v8 == 2 )
    {
      if ( (_DWORD)v21 != 2 )
        goto LABEL_21;
    }
    else if ( (_DWORD)v21 == 2 || !(unsigned __int8)sub_140420290(v31, a2) )
    {
      goto LABEL_21;
    }
    if ( v62 == *((_BYTE *)a2 + 668) && (unsigned __int8)sub_14041F770(v48, a2 + 66) && v55 == *((_BYTE *)a2 + 616) )
    {
      v22 = a2[74];
      if ( v52 == -1 )
      {
        if ( v22 != -1 )
          goto LABEL_21;
      }
      else if ( v22 == -1 || v54 != a2[76] || (unsigned int)sub_1416847B0(v53, a2[75], v54) )
      {
        goto LABEL_21;
      }
      if ( v59 != *((_BYTE *)a2 + 648) )
        goto LABEL_21;
      v23 = a2[78];
      if ( v56 == -1 || v23 == -1 )
      {
        if ( (v56 & v23) != 0xFFFFFFFFFFFFFFFFuLL )
          goto LABEL_21;
      }
      else if ( v58 != a2[80] || (unsigned int)sub_1416847B0(v57, a2[79], v58) )
      {
        goto LABEL_21;
      }
      if ( v64 == a2[86] && (unsigned __int8)sub_140AFE490(v63, a2[85]) )
      {
        v24 = a2[87];
        if ( v65 == -1 || v24 == -1 )
        {
          if ( (v65 & v24) != 0xFFFFFFFFFFFFFFFFuLL )
            goto LABEL_21;
        }
        else
        {
          if ( v83 != a2[99]
            || v84 != a2[100]
            || v67 != a2[89]
            || (unsigned int)sub_1416847B0(v66, a2[88], v67)
            || v85 != *((_BYTE *)a2 + 808) )
          {
            goto LABEL_21;
          }
          v25 = a2[90];
          if ( v68 == -1 )
          {
            if ( v25 != -1 )
              goto LABEL_21;
          }
          else if ( v25 == -1 || v70 != a2[92] || (unsigned int)sub_1416847B0(v69, a2[91], v70) )
          {
            goto LABEL_21;
          }
          if ( v71 != *((_DWORD *)a2 + 186)
            || v72 != *((_DWORD *)a2 + 187)
            || v73 != *((_DWORD *)a2 + 188)
            || v74 != *((_BYTE *)a2 + 756)
            || v75 != *((_DWORD *)a2 + 190)
            || v76 != *((_DWORD *)a2 + 191)
            || v77 != *((_DWORD *)a2 + 192)
            || v78 != *((_BYTE *)a2 + 772)
            || v79 != *((_DWORD *)a2 + 194)
            || v80 != *((_DWORD *)a2 + 195)
            || v81 != *((_DWORD *)a2 + 196)
            || v82 != *((_BYTE *)a2 + 788) )
          {
            goto LABEL_21;
          }
        }
        return sub_14034E660((__int64)&v29);
      }
    }
  }
LABEL_21:
  sub_14034E660((__int64)&v29);
  v9 = sub_140712590(a1);
  if ( v9 )
  {
    v10 = v9;
    goto LABEL_23;
  }
  sub_1403C86D0(&v26, v6, v7);
  v95 = 1;
  LODWORD(v88) = sub_141475580(v14, v13, v15, v16);
  HIDWORD(v88) = v17;
  v95 = 1;
  sub_141475530(&v29, &v88, 3577643008LL, 27111902);
  if ( (_BYTE)v29 )
    v18 = nullptr;
  else
    v18 = v30;
  v26 = 1;
  v27 = (__int64)v18;
  v95 = 1;
  sub_14041F7C0(&v29, a2);
  if ( LODWORD(v28[0]) != -1 )
    sub_14034EBB0(v28);
  sub_141684120(v28, &v29, 816);
  sub_141684120(&v29, &v26, 1056);
  v86 = 1;
  sub_140350AC0(&v88, &v29);
  v10 = (__int64)v89;
  if ( v88 == (_QWORD *)-1LL )
  {
    v95 = 0;
    sub_14034E660((__int64)&v29);
    v11 = 3;
    goto LABEL_24;
  }
  v93 = v88;
  v92 = v89;
  v19 = v90;
  v94[1] = 1;
  sub_14034E660((__int64)&v29);
  result = sub_14148D5C0(v6, v7, v92, v19);
  v10 = result;
  if ( v93 )
    result = sub_140001660(v92, v93, 1);
  if ( v10 )
  {
LABEL_23:
    v11 = 2;
LABEL_24:
    v26 = v11;
    v27 = v10;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v88 = v87;
      v89 = sub_14041F680;
      v90 = &v26;
      v91 = sub_140B036A0;
      v29 = 0;
      v30 = aCodexmateLibCo_18;
      v31[0] = 33;
      v31[1] = 0;
      v31[2] = aSrcCommandsAcc;
      v31[3] = 24;
      v31[4] = 2;
      v31[5] = aCodexmateLibCo_18;
      v31[6] = 33;
      v31[7] = 0x3000000001LL;
      v31[8] = &unk_1417514A8;
      v31[9] = &v88;
      sub_1412C36A0(v94, &v29);
    }
    return sub_14034ED40(&v26);
  }
  return result;
}