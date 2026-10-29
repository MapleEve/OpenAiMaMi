// fn runtime_display_state_to_snapshot (0x140ED8380, 1650B) — state(880B @0x142239468) → snapshot DTO(880B)
// 输出布局: [0..384)=activeAccount(384B,首dword==2→None) [384..560)=paths(176B) [560..600)=autoSwitch区
// [600..736)=Option字段区 [736..760)=accounts Vec克隆 [760..880)=refreshReport Option克隆
__int64 __fastcall sub_140ED8380(__int64 a1, __int64 a2)
{
  __int16 v4; // ax
  char v5; // cl
  int v6; // ebx
  __int64 v7; // r14
  char v8; // r13
  char v9; // r12
  __m128 v10; // xmm6
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 result; // rax
  _BYTE v14[384]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v15[384]; // [rsp+1A0h] [rbp+120h] BYREF
  _BYTE v16[176]; // [rsp+320h] [rbp+2A0h] BYREF
  __int64 v17; // [rsp+3D0h] [rbp+350h]
  __int64 v18; // [rsp+3D8h] [rbp+358h]
  __int64 v19; // [rsp+3E0h] [rbp+360h]
  __int64 v20; // [rsp+3E8h] [rbp+368h] BYREF
  char v21; // [rsp+3F0h] [rbp+370h]
  char v22; // [rsp+3F1h] [rbp+371h]
  __int64 v23; // [rsp+3F8h] [rbp+378h]
  __int64 v24; // [rsp+400h] [rbp+380h]
  __int64 v25; // [rsp+408h] [rbp+388h]
  __int64 v26; // [rsp+410h] [rbp+390h]
  __int64 v27; // [rsp+418h] [rbp+398h]
  __int64 v28; // [rsp+420h] [rbp+3A0h]
  char v29; // [rsp+428h] [rbp+3A8h]
  __int64 v30; // [rsp+430h] [rbp+3B0h]
  __int64 v31; // [rsp+438h] [rbp+3B8h]
  __int64 v32; // [rsp+440h] [rbp+3C0h]
  char v33; // [rsp+448h] [rbp+3C8h]
  __int64 v34; // [rsp+450h] [rbp+3D0h]
  __int128 v35; // [rsp+458h] [rbp+3D8h]
  __int64 v36; // [rsp+468h] [rbp+3E8h]
  __int64 v37; // [rsp+470h] [rbp+3F0h]
  int v38; // [rsp+478h] [rbp+3F8h]
  char v39; // [rsp+47Ch] [rbp+3FCh]
  __int128 v40; // [rsp+480h] [rbp+400h]
  _BYTE v41[24]; // [rsp+490h] [rbp+410h] BYREF
  __int128 v42; // [rsp+4A8h] [rbp+428h]
  __int64 v43; // [rsp+4B8h] [rbp+438h]
  __int128 v44; // [rsp+4C0h] [rbp+440h]
  __int64 v45; // [rsp+4D0h] [rbp+450h]
  __int128 v46; // [rsp+4D8h] [rbp+458h]
  __int64 v47; // [rsp+4E8h] [rbp+468h]
  __int128 v48; // [rsp+4F0h] [rbp+470h]
  __int64 v49; // [rsp+500h] [rbp+480h]
  __int128 v50; // [rsp+508h] [rbp+488h]
  __int64 v51; // [rsp+518h] [rbp+498h]
  __int128 v52; // [rsp+520h] [rbp+4A0h]
  __int64 v53; // [rsp+530h] [rbp+4B0h]
  __int16 v54; // [rsp+538h] [rbp+4B8h]
  char v55; // [rsp+53Ah] [rbp+4BAh]
  __int128 v56; // [rsp+540h] [rbp+4C0h] BYREF
  __int64 v57; // [rsp+550h] [rbp+4D0h]
  __int64 v58; // [rsp+558h] [rbp+4D8h]
  __int64 v59; // [rsp+560h] [rbp+4E0h]
  __int64 v60; // [rsp+568h] [rbp+4E8h]
  __int64 v61; // [rsp+570h] [rbp+4F0h]
  __int64 v62; // [rsp+578h] [rbp+4F8h]
  __int128 v63; // [rsp+580h] [rbp+500h] BYREF
  __int64 v64; // [rsp+590h] [rbp+510h]
  __int128 v65; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v66; // [rsp+5B0h] [rbp+530h]
  __int128 v67; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v68; // [rsp+5D0h] [rbp+550h]
  __int64 v69; // [rsp+5E0h] [rbp+560h]
  __int64 v70; // [rsp+5E8h] [rbp+568h]
  __int64 v71; // [rsp+5F0h] [rbp+570h]
  __int64 v72; // [rsp+5F8h] [rbp+578h]
  __int128 v73; // [rsp+600h] [rbp+580h] BYREF
  __int64 v74; // [rsp+610h] [rbp+590h]
  __int64 v75; // [rsp+620h] [rbp+5A0h]
  __int64 v76; // [rsp+628h] [rbp+5A8h]
  __int64 v77; // [rsp+630h] [rbp+5B0h]
  __int64 v78; // [rsp+638h] [rbp+5B8h]
  char v79; // [rsp+645h] [rbp+5C5h]
  char v80; // [rsp+646h] [rbp+5C6h]
  char v81; // [rsp+647h] [rbp+5C7h]
  __int64 v82; // [rsp+648h] [rbp+5C8h]

  v82 = -2;
  sub_1416DB410(&v56, a2 + 384);       // paths.codexHome clone
  sub_1416DB410(&v67, a2 + 408);       // paths.accountsPath
  sub_1416DB410(&v65, a2 + 432);       // paths.authPath
  sub_1416DB410(&v63, a2 + 456);       // paths.registryPath
  sub_1416DB410(&v73, a2 + 480);       // paths.sessionsPath
  sub_1416DB410(v14, a2 + 504);        // paths.launchAgentPath
  sub_1416DB410(v15, a2 + 528);        // paths.autoSwitchLogPath
  v4 = *(_WORD *)(a2 + 552);           // authExists(+168)
  v5 = *(_BYTE *)(a2 + 554);           // sessionsExists(+170)
  *(_OWORD *)v41 = v56;
  *(_QWORD *)&v41[16] = v57;
  v42 = v67; v43 = v68; v44 = v65; v45 = v66; v46 = v63; v47 = v64;
  v49 = v74; v48 = v73;
  v51 = *(_QWORD *)&v14[16]; v50 = *(_OWORD *)v14;
  v53 = *(_QWORD *)&v15[16]; v52 = *(_OWORD *)v15;
  v54 = v4; v55 = v5;
  v6 = *(_DWORD *)(a2 + 728);          // accountCount
  if ( *(_QWORD *)(a2 + 600) == -1 )   // activeAccountKey None
  {
    v77 = -1;
    v7 = *(_QWORD *)(a2 + 720);        // lastScanAt
    if ( *(_DWORD *)a2 == 2 )          // activeAccount None niche
      goto LABEL_3;
  }
  else
  {
    sub_1416DB410(v15, a2 + 600);
    v70 = *(_QWORD *)&v15[8];
    v77 = *(_QWORD *)v15;
    v59 = *(_QWORD *)&v15[16];
    v7 = *(_QWORD *)(a2 + 720);
    if ( *(_DWORD *)a2 == 2 )
    {
LABEL_3:
      *(_QWORD *)v14 = 2;              // activeAccount = None
      goto LABEL_6;
    }
  }
  sub_140D74C80(v15, a2);              // build activeAccount (core/repository)
  sub_1419234B0(v14, v15, 384);
LABEL_6:
  v79 = *(_BYTE *)(a2 + 732);          // usageSource
  v8 = *(_BYTE *)(a2 + 592);           // autoSwitch.enabled
  v9 = *(_BYTE *)(a2 + 593);           // autoSwitch.serviceState
  v10 = (__m128)*(unsigned __int64 *)(a2 + 584);  // threshold5h/weekly (2×u32)
  sub_1416DB410(v15, a2 + 560);        // autoSwitch.serviceLabel
  v69 = *(_QWORD *)&v15[8];
  v75 = *(_QWORD *)v15;
  v58 = *(_QWORD *)&v15[16];
  v80 = *(_BYTE *)(a2 + 648);
  v76 = -1;
  if ( *(_QWORD *)(a2 + 624) != -1 )   // api Some
  {
    sub_1416DB410(v15, a2 + 624);
    v71 = *(_QWORD *)&v15[8];
    v78 = *(_QWORD *)v15;
    v60 = *(_QWORD *)&v15[16];
    v81 = *(_BYTE *)(a2 + 680);
    if ( *(_QWORD *)(a2 + 656) != -1 ) // apiConnectivity Some
      goto LABEL_8;
LABEL_11:
    if ( *(_QWORD *)(a2 + 688) != -1 ) // authRevision Some
      goto LABEL_9;
    goto LABEL_12;
  }
  v78 = -1;
  v81 = *(_BYTE *)(a2 + 680);
  if ( *(_QWORD *)(a2 + 656) == -1 )
    goto LABEL_11;
LABEL_8:
  sub_1416DB410(v15, a2 + 656);
  v72 = *(_QWORD *)&v15[8];
  v76 = *(_QWORD *)v15;
  v61 = *(_QWORD *)&v15[16];
  if ( *(_QWORD *)(a2 + 688) != -1 )
  {
LABEL_9:
    sub_1416DB410(v15, a2 + 688);
    v62 = *(_QWORD *)(a2 + 712);
    v11 = *(_QWORD *)v15;
    v73 = *(_OWORD *)&v15[8];
    goto LABEL_13;
  }
LABEL_12:
  v11 = -1;
LABEL_13:
  sub_1419234B0(v16, v41, 176);        // paths 结构
  v38 = v6;
  v23 = v77; v24 = v70; v25 = v59;
  v37 = v7;
  sub_1419234B0(v15, v14, 384);        // activeAccount
  v39 = v79;
  v17 = v75; v18 = v69; v19 = v58;
  _mm_storel_ps((double *)&v20, v10);
  v21 = v8; v22 = v9;
  v26 = v78; v27 = v71; v28 = v60;
  v29 = v80;
  v30 = v76; v31 = v72; v32 = v61;
  v33 = v81;
  v34 = v11; v35 = v73; v36 = v62;
  sub_14022D0E0(&v73, a2 + 736);       // accounts Vec clone
  if ( *(_QWORD *)(a2 + 760) == -1 )   // refreshReport None
  {
    v12 = -1;
  }
  else
  {
    sub_1416DB410(v41, a2 + 760);
    LOBYTE(v6) = *(_BYTE *)(a2 + 872);
    if ( *(_QWORD *)(a2 + 784) == -1 )
    {
      v7 = -1;
    }
    else
    {
      sub_1416DB410(v14, a2 + 784);
      v7 = *(_QWORD *)v14;
      v40 = *(_OWORD *)&v14[8];
    }
    v10 = *(__m128 *)(a2 + 856);
    v63 = *(_OWORD *)(a2 + 808);
    v65 = *(_OWORD *)(a2 + 824);
    v67 = *(_OWORD *)(a2 + 840);
    v12 = *(_QWORD *)v41;
    *(_OWORD *)v14 = *(_OWORD *)&v41[8];
  }
  sub_1419234B0(a1, v15, 736);         // snapshot[0..736]
  result = v74;
  *(_QWORD *)(a1 + 752) = v74;
  *(_OWORD *)(a1 + 736) = v73;         // accounts Vec
  *(_QWORD *)(a1 + 760) = v12;         // refreshReport
  *(_OWORD *)(a1 + 768) = *(_OWORD *)v14;
  *(_QWORD *)(a1 + 784) = v7;
  *(_OWORD *)(a1 + 792) = v40;
  *(_OWORD *)(a1 + 808) = v63;
  *(_OWORD *)(a1 + 824) = v65;
  *(_OWORD *)(a1 + 840) = v67;
  *(__m128 *)(a1 + 856) = v10;
  *(_BYTE *)(a1 + 872) = v6;
  return result;
}
