// module: codexmate_lib/platform/process/codex_bundled_cli_path
// addr: 0x140a19ac0
// name: codex_bundled_cli_path
// win 1.2.4 delta | full-chain decompile | [FULL decompile]
// truncation_check: PASS
// win 1.2.4 delta owner-map/relay-precision-propagation candidate (C-level, decompile-verified, NOT exact-name-confirmed) for platform::process module -- possible codex_bundled_cli_path counterpart. Address falls contiguously inside the already-attributed platform/process function range (between 0x140A18C90 and 0x140A1A7C0), and decompiled body builds 6 candidate path strings by concatenating a base dir with fragments 'app'/'codex' + registry-style App-Paths suffixes (matching the win strings at 0x141811cc0-0x1418120e1: HKCU/HKLM App Paths\\Codex.exe, Programs\\Codex\\Codex.exe, Programs\\OpenAI Codex\\Codex.exe, etc.), probes each via a path-exists-style helper (sub_1414E1680), returns the first hit or a -1/failure sentinel. Pure read-only path resolution, no destructive side effect -- matches mac dim of platform::process::codex_bundled_cli_path ('路径解析 | 无' risk). CAVEAT: semantically this reads like 'locate an externally-installed standalone Codex.exe via well-known OS install paths', which is subtl
// [tag] sha12 5b6aa827d6bd; session cc-aimami124-win-deep-layer3relay-owner-20260807; not gate promotion
__int64 __fastcall codex_bundled_cli_path(__int64 a1, int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rbx
  _OWORD v19[12]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+78h]
  __int64 v22; // [rsp+100h] [rbp+80h]
  _OWORD v23[2]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v24; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v25; // [rsp+138h] [rbp+B8h]
  __int64 v26; // [rsp+140h] [rbp+C0h]
  __int64 v27; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v28; // [rsp+158h] [rbp+D8h]
  __int64 v29; // [rsp+160h] [rbp+E0h]
  __int64 v30; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v31; // [rsp+178h] [rbp+F8h]
  __int64 v32; // [rsp+180h] [rbp+100h]
  __int64 v33; // [rsp+190h] [rbp+110h] BYREF
  __int64 v34; // [rsp+198h] [rbp+118h]
  __int64 v35; // [rsp+1A0h] [rbp+120h]
  __int64 v36; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v37; // [rsp+1B8h] [rbp+138h]
  __int64 v38; // [rsp+1C0h] [rbp+140h]
  __int64 v39; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v40; // [rsp+1D8h] [rbp+158h]
  __int64 v41; // [rsp+1E0h] [rbp+160h]
  __int128 v42; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v43; // [rsp+200h] [rbp+180h] BYREF
  __int64 v44; // [rsp+210h] [rbp+190h]
  __int64 v45; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v46; // [rsp+228h] [rbp+1A8h]
  __int64 v47; // [rsp+230h] [rbp+1B0h]
  __int64 v48; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v49; // [rsp+248h] [rbp+1C8h]
  __int64 v50; // [rsp+250h] [rbp+1D0h]
  __int64 v51; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v52; // [rsp+268h] [rbp+1E8h]
  __int64 v53; // [rsp+270h] [rbp+1F0h]
  __int64 v54; // [rsp+280h] [rbp+200h] BYREF
  __int64 v55; // [rsp+288h] [rbp+208h]
  __int64 v56; // [rsp+290h] [rbp+210h]
  __int64 v57; // [rsp+2A0h] [rbp+220h]
  __int128 v58; // [rsp+2A8h] [rbp+228h]
  __int64 v59; // [rsp+2B8h] [rbp+238h]
  _OWORD v60[2]; // [rsp+2C0h] [rbp+240h] BYREF
  _OWORD v61[2]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v62; // [rsp+300h] [rbp+280h]
  __int64 v63; // [rsp+308h] [rbp+288h]
  __int64 v64; // [rsp+310h] [rbp+290h]
  __int64 v65; // [rsp+318h] [rbp+298h]
  __int64 v66; // [rsp+320h] [rbp+2A0h]
  __int64 v67; // [rsp+328h] [rbp+2A8h]
  __int64 v68; // [rsp+330h] [rbp+2B0h]
  _OWORD v69[2]; // [rsp+338h] [rbp+2B8h] BYREF
  _OWORD v70[2]; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v71; // [rsp+378h] [rbp+2F8h]
  __int64 v72; // [rsp+380h] [rbp+300h]
  __int64 v73; // [rsp+388h] [rbp+308h]
  __int64 v74; // [rsp+390h] [rbp+310h]

  v74 = -2;
  sub_1414E1440((unsigned int)&v39, a2, a3, (unsigned int)&unk_141812293, 9);
  v62 = v40;
  sub_1414E1440((unsigned int)v70, v40, v41, (unsigned int)&unk_141811CC0, 9);
  sub_1414E1440((unsigned int)&v36, a2, a3, (unsigned int)&unk_141812293, 9);
  v63 = v37;
  sub_1414E1440((unsigned int)v69, v37, v38, (unsigned int)aCodex_2, 5);
  sub_1414E1440((unsigned int)&v30, a2, a3, (unsigned int)aApp_3, 3);
  v64 = v31;
  sub_1414E1440((unsigned int)&v33, v31, v32, (unsigned int)&unk_141812293, 9);
  v65 = v34;
  sub_1414E1440((unsigned int)v61, v34, v35, (unsigned int)&unk_141811CC0, 9);
  sub_1414E1440((unsigned int)&v24, a2, a3, (unsigned int)aApp_3, 3);
  v66 = v25;
  sub_1414E1440((unsigned int)&v27, v25, v26, (unsigned int)&unk_141812293, 9);
  v67 = v28;
  sub_1414E1440((unsigned int)v60, v28, v29, (unsigned int)aCodex_2, 5);
  sub_1414E1440((unsigned int)&v20, a2, a3, (unsigned int)aApp_3, 3);
  v68 = v21;
  sub_1414E1440((unsigned int)v23, v21, v22, (unsigned int)&unk_141811CC0, 9);
  sub_1414E1440((unsigned int)&v42, a2, a3, (unsigned int)&unk_141811CC0, 9);
  v19[1] = v70[1];
  v19[0] = v70[0];
  v19[2] = v69[0];
  v19[3] = v69[1];
  v19[4] = v61[0];
  v19[5] = v61[1];
  v19[6] = v60[0];
  v19[7] = v60[1];
  v19[9] = v23[1];
  v19[8] = v23[0];
  v19[11] = v43;
  v19[10] = v42;
  sub_1416F15C0(&v43, v19, 192);
  *((_QWORD *)&v42 + 1) = 6;
  v6 = *((_QWORD *)&v43 + 1);
  v7 = v43;
  v73 = 1;
  v71 = *((_QWORD *)&v43 + 1);
  v72 = v43;
  if ( (unsigned __int8)sub_1414E1680(*((_QWORD *)&v43 + 1), v44) )
  {
    v8 = 1;
    if ( v7 != -1 )
    {
      v9 = (__int64 *)&v43;
      goto LABEL_24;
    }
  }
  else if ( v7 )
  {
    sub_140001660(v6, v7, 1);
  }
  v7 = v45;
  v10 = v46;
  v73 = 2;
  v72 = v45;
  v71 = v46;
  if ( (unsigned __int8)sub_1414E1680(v46, v47) )
  {
    if ( v7 != -1 )
    {
      v9 = &v45;
      v8 = 2;
      goto LABEL_24;
    }
  }
  else if ( v7 )
  {
    sub_140001660(v10, v7, 1);
  }
  v7 = v48;
  v11 = v49;
  v73 = 3;
  v72 = v48;
  v71 = v49;
  if ( (unsigned __int8)sub_1414E1680(v49, v50) )
  {
    if ( v7 != -1 )
    {
      v9 = &v48;
      v8 = 3;
      goto LABEL_24;
    }
  }
  else if ( v7 )
  {
    sub_140001660(v11, v7, 1);
  }
  v7 = v51;
  v12 = v52;
  v73 = 4;
  v72 = v51;
  v71 = v52;
  if ( (unsigned __int8)sub_1414E1680(v52, v53) )
  {
    if ( v7 != -1 )
    {
      v9 = &v51;
      v8 = 4;
      goto LABEL_24;
    }
  }
  else if ( v7 )
  {
    sub_140001660(v12, v7, 1);
  }
  v7 = v54;
  v13 = v55;
  v73 = 5;
  v72 = v54;
  v71 = v55;
  if ( (unsigned __int8)sub_1414E1680(v55, v56) )
  {
    if ( v7 != -1 )
    {
      v9 = &v54;
      v8 = 5;
LABEL_24:
      *(_QWORD *)(a1 + 24) = v9[3];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)(v9 + 1);
      *(_QWORD *)a1 = v7;
      v14 = (unsigned int)(32 * v8);
      do
      {
        v15 = *(_QWORD *)((char *)&v43 + v14);
        if ( v15 )
          sub_140001660(*(_QWORD *)((char *)&v43 + v14 + 8), v15, 1);
        v14 += 32;
      }
      while ( v14 != 192 );
      goto LABEL_36;
    }
  }
  else if ( v7 )
  {
    sub_140001660(v13, v7, 1);
  }
  v16 = v57;
  v17 = v58;
  v73 = 6;
  v72 = v57;
  v71 = v58;
  if ( (unsigned __int8)sub_1414E1680(v58, *((_QWORD *)&v58 + 1)) )
  {
    if ( v16 != -1 )
    {
      *(_QWORD *)(a1 + 24) = v59;
      *(_OWORD *)(a1 + 8) = v58;
      *(_QWORD *)a1 = v16;
      goto LABEL_36;
    }
  }
  else if ( v16 )
  {
    sub_140001660(v17, v16, 1);
  }
  *(_QWORD *)a1 = -1;
LABEL_36:
  if ( v20 )
    sub_140001660(v68, v20, 1);
  if ( v27 )
    sub_140001660(v67, v27, 1);
  if ( v24 )
    sub_140001660(v66, v24, 1);
  if ( v33 )
    sub_140001660(v65, v33, 1);
  if ( v30 )
    sub_140001660(v64, v30, 1);
  if ( v36 )
    sub_140001660(v63, v36, 1);
  if ( v39 )
    sub_140001660(v62, v39, 1);
  return a1;
}
