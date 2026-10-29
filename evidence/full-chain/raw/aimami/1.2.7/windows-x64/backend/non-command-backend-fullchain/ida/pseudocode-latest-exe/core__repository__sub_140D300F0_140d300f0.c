// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d300f0 | successor of pre-update 0x1402146b0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.922, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D300F0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5, __int128 a6)
{
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 *v13; // rbx
  __int64 (__fastcall *v14)(); // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  volatile signed __int64 *v23; // r12
  volatile signed __int64 *v24; // rdi
  __int64 v25; // rdi
  signed __int64 v26; // rt0
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  volatile signed __int64 *v33[2]; // [rsp+28h] [rbp-58h] BYREF
  char v34[584]; // [rsp+38h] [rbp-48h] BYREF
  __int128 *v35; // [rsp+280h] [rbp+200h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+288h] [rbp+208h] BYREF
  volatile signed __int64 *v37[76]; // [rsp+290h] [rbp+210h] BYREF
  __int128 *v38; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 (__fastcall *v39)(); // [rsp+4F8h] [rbp+478h] BYREF
  __int64 v40; // [rsp+500h] [rbp+480h] BYREF
  _QWORD v41[75]; // [rsp+508h] [rbp+488h] BYREF
  __int128 v42; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v43; // [rsp+770h] [rbp+6F0h]
  __int128 v44; // [rsp+778h] [rbp+6F8h] BYREF
  __int64 v45; // [rsp+788h] [rbp+708h]
  __int128 *v46; // [rsp+790h] [rbp+710h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+798h] [rbp+718h]
  volatile signed __int64 **v48; // [rsp+7A0h] [rbp+720h]
  __int64 (__fastcall *v49)(_QWORD, _QWORD); // [rsp+7A8h] [rbp+728h]
  __int128 v50; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v51; // [rsp+7C0h] [rbp+740h]
  __int64 v52; // [rsp+7C8h] [rbp+748h] BYREF
  const char *v53; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v54; // [rsp+7D8h] [rbp+758h]
  __int64 v55; // [rsp+7E0h] [rbp+760h]
  const char *v56; // [rsp+7E8h] [rbp+768h]
  __int64 v57; // [rsp+7F0h] [rbp+770h]
  __int64 v58; // [rsp+7F8h] [rbp+778h]
  const char *v59; // [rsp+800h] [rbp+780h]
  __int64 v60; // [rsp+808h] [rbp+788h]
  __int64 v61; // [rsp+810h] [rbp+790h]
  void *v62; // [rsp+818h] [rbp+798h]
  __int128 **v63; // [rsp+820h] [rbp+7A0h]
  __int64 v64; // [rsp+828h] [rbp+7A8h]
  __int64 v65; // [rsp+830h] [rbp+7B0h]
  __int64 v66; // [rsp+838h] [rbp+7B8h]
  volatile signed __int64 *v67; // [rsp+840h] [rbp+7C0h] BYREF
  int v68; // [rsp+848h] [rbp+7C8h] BYREF
  char v69; // [rsp+84Fh] [rbp+7CFh] BYREF
  __int64 v70; // [rsp+850h] [rbp+7D0h]

  v70 = -2;
  v50 = a6;
  sub_1416C49D0(&v38, a2, a3);
  if ( (_DWORD)v38 == 2 )
  {
    result = (__int64)v39;
    if ( ((unsigned __int8)v39 & 3u) - 2 >= 2 && ((unsigned __int8)v39 & 3) != 0 )
    {
      v39 = (__int64 (__fastcall *)())((char *)v39 - 1);
      LOBYTE(v38) = 3;
      result = sub_1416EBAD0(&v39);
    }
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_QWORD *)(a1 + 24) = 0;
  }
  else
  {
    sub_1416C4AC0(&v38, a2, a3);
    v13 = v38;
    v14 = v39;
    if ( v38 == (__int128 *)2 )
    {
      v33[0] = (volatile signed __int64 *)v39;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v35 = &v50;
        v36 = sub_140191200;
        v37[0] = (volatile signed __int64 *)v33;
        v37[1] = (volatile signed __int64 *)sub_1416EA080;
        v41[3] = 2;
        v41[4] = aCodexmateLibCo_44;
        v41[5] = 31;
        v41[7] = &unk_141A96341;
        v41[8] = &v35;
        v38 = nullptr;
        v39 = (__int64 (__fastcall *)())aCodexmateLibCo_44;
        v40 = 31;
        v41[0] = 0;
        v41[1] = aSrcCoreReposit;
        v41[2] = 22;
        v41[6] = 0x1CF00000001LL;
        sub_141503E20(&v69, &v38);
      }
      nullsub_1(v12, v11);
      v15 = sub_140001650(48, 8);
      if ( !v15 )
        sub_14196B2C1(8, 48);
      v66 = v15;
      nullsub_1(v17, v16);
      v18 = sub_140001650(a5, 1);
      if ( !v18 )
        sub_14196B2DB(1, a5);
      v64 = v18;
      sub_1419234B0(v18, a4, a5);
      v38 = &v50;
      v39 = sub_140191200;
      sub_1416DAFA0(&v44, &unk_141A96372, &v38);
      v19 = v66;
      *(_QWORD *)(v66 + 40) = v45;
      *(_OWORD *)(v19 + 24) = v44;
      *(_QWORD *)v19 = a5;
      *(_QWORD *)(v19 + 8) = v64;
      *(_QWORD *)(v19 + 16) = a5;
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = v19;
      *(_QWORD *)(a1 + 24) = 1;
      result = (__int64)v33[0];
      if ( (unsigned __int64)(((__int64)v33[0] & 3) - 2) >= 2 && ((__int64)v33[0] & 3) != 0 )
      {
        v39 = (__int64 (__fastcall *)())((char *)v33[0] - 1);
        LOBYTE(v38) = 3;
        return sub_1416EBAD0(&v39);
      }
    }
    else
    {
      v64 = a4;
      sub_1419234B0(v37, &v40, 608);
      v35 = v13;
      v36 = v14;
      v68 = 0;
      LODWORD(v66) = 0;
      v20 = off_14223FF10;
      while ( 1 )
      {
        sub_1416D21A0(&v38, &v35);
        if ( (_DWORD)v38 != 1 )
          break;
        v23 = (volatile signed __int64 *)v39;
        v24 = (volatile signed __int64 *)v40;
        if ( v39 )
        {
          sub_1419234B0(v34, v41, 584);
          v33[0] = v23;
          v33[1] = v24;
          sub_1416B9630(&v52, v33);
          v65 = (__int64)v53;
          v25 = sub_1416C4110(v53, v54);
          if ( v52 )
            sub_140001660(v65, v52, 1);
          if ( v25 )
          {
            ++v68;
            v67 = (volatile signed __int64 *)v25;
            if ( *v20 >= 2u )
            {
              v46 = &v50;
              v47 = sub_140191200;
              v48 = &v67;
              v49 = sub_1416EA080;
              v58 = 2;
              v59 = aCodexmateLibCo_44;
              v60 = 31;
              v62 = &unk_141A962D8;
              v63 = &v46;
              v52 = 0;
              v53 = aCodexmateLibCo_44;
              v54 = 31;
              v55 = 0;
              v56 = aSrcCoreReposit;
              v57 = 22;
              v61 = 0x1E900000001LL;
              sub_141503E20(&v69, &v52);
              v25 = (__int64)v67;
            }
            if ( (unsigned int)(v25 & 3) - 2 >= 2 && (v25 & 3) != 0 )
            {
              v53 = (const char *)(v25 - 1);
              LOBYTE(v52) = 3;
              sub_1416EBAD0(&v53);
            }
          }
          else
          {
            LODWORD(v66) = v66 + 1;
          }
          if ( !_InterlockedDecrement64(v33[0]) )
            sub_141141760(v33);
        }
        else
        {
          ++v68;
          v67 = (volatile signed __int64 *)v40;
          if ( *v20 >= 2u )
          {
            v46 = &v50;
            v47 = sub_140191200;
            v48 = &v67;
            v49 = sub_1416EA080;
            v58 = 2;
            v59 = aCodexmateLibCo_44;
            v60 = 31;
            v62 = &unk_141A9630C;
            v63 = &v46;
            v52 = 0;
            v53 = aCodexmateLibCo_44;
            v54 = 31;
            v55 = 0;
            v56 = aSrcCoreReposit;
            v57 = 22;
            v61 = 0x1E100000001LL;
            sub_141503E20(&v69, &v52);
            v24 = v67;
          }
          if ( ((unsigned __int8)v24 & 3u) - 2 >= 2 && ((unsigned __int8)v24 & 3) != 0 )
          {
            v53 = (char *)v24 - 1;
            LOBYTE(v52) = 3;
            sub_1416EBAD0(&v53);
          }
        }
      }
      if ( v35 )
        sub_1416CF740(&v36);
      v26 = _InterlockedDecrement64(v37[0]);
      v27 = v64;
      if ( !v26 )
        sub_141141760(v37);
      if ( v68 )
      {
        nullsub_1(v22, v21);
        v28 = sub_140001650(48, 8);
        if ( !v28 )
          sub_14196B2C1(8, 48);
        v65 = v28;
        nullsub_1(v30, v29);
        v31 = sub_140001650(a5, 1);
        if ( !v31 )
          sub_14196B2DB(1, a5);
        v51 = v31;
        sub_1419234B0(v31, v27, a5);
        v38 = (__int128 *)&v68;
        v39 = sub_1416EAE00;
        v40 = (__int64)&v50;
        v41[0] = sub_140191200;
        sub_1416DAFA0(&v42, &unk_141A962B2, &v38);
        v32 = v65;
        *(_QWORD *)(v65 + 40) = v43;
        *(_OWORD *)(v32 + 24) = v42;
        *(_QWORD *)v32 = a5;
        *(_QWORD *)(v32 + 8) = v51;
        *(_QWORD *)(v32 + 16) = a5;
        result = 1;
      }
      else
      {
        v32 = 8;
        result = 0;
      }
      *(_DWORD *)a1 = v66;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v32;
      *(_QWORD *)(a1 + 24) = result;
    }
  }
  return result;
}
