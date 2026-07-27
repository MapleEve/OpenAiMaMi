// addr: 0x140852ff0
// name (owner-map): new
// module: core::relay::manager
// source: IDA remote IDA decompiler decompile, win AiMaMi.1.2.3 win64.exe, full single-pass (no truncation)

// win 1.2.1 | module src/core/relay/manager.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::manager::RelayManager::new | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall new(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  _BYTE *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r12d
  _OWORD *v11; // rbx
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // r12
  void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _BYTE *v25; // rcx
  _OWORD *v26; // rax
  __int64 v27; // rcx
  _OWORD *v28; // rdi
  __int64 v29; // r15
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // r14
  char v34; // of
  __int64 v35; // rax
  __int64 v36; // rt0
  __int64 v37; // rax
  _BYTE v39[296]; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v40[6]; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v41; // [rsp+1B0h] [rbp+130h]
  __int64 v42; // [rsp+1C0h] [rbp+140h]
  _BYTE v43[208]; // [rsp+280h] [rbp+200h] BYREF
  __int128 v44; // [rsp+3B0h] [rbp+330h] BYREF
  __int128 v45; // [rsp+3C0h] [rbp+340h] BYREF
  _BYTE v46[24]; // [rsp+3D0h] [rbp+350h]
  __int64 v47; // [rsp+3E8h] [rbp+368h]
  __int128 v48; // [rsp+3F0h] [rbp+370h]
  __int64 v49; // [rsp+400h] [rbp+380h]
  __int128 *v50; // [rsp+408h] [rbp+388h]
  __int128 v51; // [rsp+410h] [rbp+390h]
  __int64 v52; // [rsp+420h] [rbp+3A0h]
  __int16 v53; // [rsp+428h] [rbp+3A8h]
  char v54; // [rsp+42Ah] [rbp+3AAh]
  __int64 v55; // [rsp+430h] [rbp+3B0h]
  int v56; // [rsp+4D0h] [rbp+450h]
  __int16 v57; // [rsp+4D4h] [rbp+454h]
  __int128 v58; // [rsp+4F0h] [rbp+470h] BYREF
  __int128 v59; // [rsp+500h] [rbp+480h]
  __int128 v60; // [rsp+510h] [rbp+490h]
  __int128 v61; // [rsp+520h] [rbp+4A0h]
  __int128 v62; // [rsp+530h] [rbp+4B0h]
  __int128 v63; // [rsp+540h] [rbp+4C0h]
  __int64 v64; // [rsp+550h] [rbp+4D0h]
  _OWORD *v65; // [rsp+558h] [rbp+4D8h]
  _QWORD *v66; // [rsp+568h] [rbp+4E8h]
  __int64 v67; // [rsp+570h] [rbp+4F0h]
  _QWORD *v68; // [rsp+578h] [rbp+4F8h]
  _QWORD *v69; // [rsp+580h] [rbp+500h]
  _OWORD *v70; // [rsp+598h] [rbp+518h]
  __int128 v71; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v72; // [rsp+5B0h] [rbp+530h]
  __int64 v73; // [rsp+5B8h] [rbp+538h]
  _QWORD *v74; // [rsp+5C0h] [rbp+540h]
  __int64 v75; // [rsp+5C8h] [rbp+548h]
  _BYTE *v76; // [rsp+5D0h] [rbp+550h]
  _BYTE *v77; // [rsp+5D8h] [rbp+558h]
  bool v78; // [rsp+5E3h] [rbp+563h]
  char v79; // [rsp+5E4h] [rbp+564h]
  char v80; // [rsp+5E5h] [rbp+565h]
  _BYTE v81[3]; // [rsp+5E7h] [rbp+567h] BYREF
  char v82; // [rsp+5EAh] [rbp+56Ah]
  char v83; // [rsp+5EBh] [rbp+56Bh]
  char v84; // [rsp+5ECh] [rbp+56Ch]
  char v85; // [rsp+5EDh] [rbp+56Dh]
  char v86; // [rsp+5EEh] [rbp+56Eh]
  char v87; // [rsp+5EFh] [rbp+56Fh]
  __int64 v88; // [rsp+5F0h] [rbp+570h]

  v88 = -2; /*0x14085300b*/
  v69 = a2; /*0x14085301c*/
  v5 = a2 + 2; /*0x140853023*/
  v85 = 1; /*0x140853027*/
  load(v43, a2 + 2); /*0x14085303b*/
  if ( *(_QWORD *)v43 != -1 ) /*0x140853049*/
  {
    v6 = v43; /*0x140853053*/
    sub_141684120(v39, v43, 296); /*0x140853063*/
    sub_141684120(v40, v43, 296); /*0x140853078*/
LABEL_3:
    v76 = v6; /*0x14085307d*/
    v75 = -1; /*0x140853084*/
    v87 = 1; /*0x14085308f*/
    v86 = 1; /*0x140853096*/
    v7 = -1; /*0x1408530ad*/
    if ( (unsigned __int8)hydrate_secrets(v5, v40) ) /*0x1408530a7*/
    {
      v76 = v6; /*0x1408530bc*/
      v75 = -1; /*0x1408530c3*/
      v87 = 1; /*0x1408530ce*/
      v86 = 1; /*0x1408530d5*/
      sub_1404D8F10(&v58, v5, v40); /*0x1408530ed*/
      if ( (_DWORD)v58 != -1 ) /*0x1408530fa*/
      {
        *(_OWORD *)&v43[80] = v63; /*0x140853107*/
        *(_OWORD *)&v43[64] = v62; /*0x140853115*/
        *(_OWORD *)&v43[48] = v61; /*0x140853138*/
        *(_OWORD *)&v43[32] = v60; /*0x14085313f*/
        *(_OWORD *)&v43[16] = v59; /*0x140853146*/
        *(_OWORD *)v43 = v58; /*0x14085314d*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140853162*/
        {
          v77 = v6; /*0x140853168*/
          *(_QWORD *)&v71 = v43; /*0x14085316f*/
          *((_QWORD *)&v71 + 1) = sub_140B036A0; /*0x14085317d*/
          *(_QWORD *)&v44 = 0; /*0x140853184*/
          *((_QWORD *)&v44 + 1) = aCodexmateLibCo_5; /*0x140853196*/
          v45 = 0x23u; /*0x14085319d*/
          *(_QWORD *)v46 = aSrcCoreRelayMa_2; /*0x1408531ba*/
          *(_QWORD *)&v46[8] = 25; /*0x1408531c1*/
          *(_QWORD *)&v46[16] = 2; /*0x1408531cc*/
          v47 = (__int64)aCodexmateLibCo_5; /*0x1408531d7*/
          *(_QWORD *)&v48 = 35; /*0x1408531de*/
          *((_QWORD *)&v48 + 1) = 0x8800000001LL; /*0x1408531f3*/
          v49 = (__int64)&unk_14179783D; /*0x140853201*/
          v50 = &v71; /*0x14085320f*/
          sub_1412C36A0(v81, &v44); /*0x140853224*/
          v6 = v77; /*0x14085322a*/
        }
        v76 = v6; /*0x140853231*/
        v75 = -1; /*0x140853238*/
        v87 = 1; /*0x140853243*/
        v86 = 1; /*0x14085324a*/
        sub_1407DA310(v43); /*0x140853258*/
      }
    }
    goto LABEL_11; /*0x14085325e*/
  }
  v40[5] = *(_OWORD *)&v43[88]; /*0x14085326a*/
  v40[4] = *(_OWORD *)&v43[72]; /*0x140853278*/
  v40[3] = *(_OWORD *)&v43[56]; /*0x14085329b*/
  v40[2] = *(_OWORD *)&v43[40]; /*0x1408532a2*/
  v40[1] = *(_OWORD *)&v43[24]; /*0x1408532a9*/
  v40[0] = *(_OWORD *)&v43[8]; /*0x1408532b0*/
  *(_QWORD *)&v58 = v40; /*0x1408532be*/
  *((_QWORD *)&v58 + 1) = sub_140B036A0; /*0x1408532cc*/
  sub_14149C0F0(&v44, &unk_14179779D, &v58); /*0x1408532eb*/
  v71 = v44; /*0x1408532f8*/
  v72 = v45; /*0x140853306*/
  if ( *(_QWORD *)off_141EC8D80 ) /*0x140853314*/
  {
    *(_QWORD *)&v58 = &v71; /*0x140853327*/
    *((_QWORD *)&v58 + 1) = sub_1400015F0; /*0x140853335*/
    *(_QWORD *)&v44 = 0; /*0x14085333c*/
    *((_QWORD *)&v44 + 1) = aCodexmateLibCo_5; /*0x14085334e*/
    v45 = 0x23u; /*0x140853355*/
    *(_QWORD *)v46 = aSrcCoreRelayMa_2; /*0x140853372*/
    *(_QWORD *)&v46[8] = 25; /*0x140853379*/
    *(_QWORD *)&v46[16] = 1; /*0x140853384*/
    v47 = (__int64)aCodexmateLibCo_5; /*0x14085338f*/
    *(_QWORD *)&v48 = 35; /*0x140853396*/
    *((_QWORD *)&v48 + 1) = 0x7C00000001LL; /*0x1408533ab*/
    v49 = (__int64)&unk_141797824; /*0x1408533b9*/
    v50 = &v58; /*0x1408533c0*/
    sub_1412C36A0(v81, &v44); /*0x1408533d5*/
  }
  v56 = 10; /*0x1408533db*/
  *(_QWORD *)&v44 = 0; /*0x1408533e5*/
  *((_QWORD *)&v44 + 1) = 8; /*0x1408533f0*/
  v45 = 0; /*0x1408533fe*/
  *(_QWORD *)v46 = 8; /*0x140853405*/
  *(_OWORD *)&v46[8] = 0; /*0x140853410*/
  v47 = 1; /*0x140853417*/
  v48 = 0; /*0x140853422*/
  v49 = 1; /*0x140853429*/
  v50 = nullptr; /*0x140853434*/
  *(_QWORD *)&v51 = -1; /*0x14085343f*/
  v53 = 0; /*0x14085344a*/
  v54 = 0; /*0x140853453*/
  v57 = 0; /*0x14085345a*/
  v55 = -1; /*0x140853463*/
  sub_14149C500(&v58, &v71); /*0x14085347c*/
  v52 = v59; /*0x140853490*/
  v51 = v58; /*0x14085349b*/
  sub_141684120(v39, &v44, 296); /*0x1408534af*/
  v6 = *((_BYTE **)&v71 + 1); /*0x1408534bb*/
  v7 = v71; /*0x1408534bb*/
  v2 = v72; /*0x1408534c2*/
  v85 = 1; /*0x1408534c9*/
  sub_1407DA310(v40); /*0x1408534d7*/
  sub_141684120(v40, v39, 296); /*0x1408534ee*/
  if ( v7 == -1 ) /*0x1408534f7*/
    goto LABEL_3; /*0x1408534f7*/
LABEL_11:
  v76 = v6; /*0x1408534fd*/
  v75 = v7; /*0x140853504*/
  v87 = 1; /*0x14085350b*/
  v86 = 1; /*0x140853512*/
  sub_1412F4EC0(&v44); /*0x140853520*/
  v73 = v7; /*0x140853526*/
  v77 = v6; /*0x14085352d*/
  v8 = sub_1412F4E90(&v44, 2, &off_141797870); /*0x14085354d*/
  *(_WORD *)(v8 + 201) = 257; /*0x140853550*/
  sub_140425C70(v8, aAimamiRelayRt, 15); /*0x140853569*/
  sub_1412F50B0(&v58, v8); /*0x14085357c*/
  v10 = v58; /*0x140853582*/
  if ( (_QWORD)v58 == 2 ) /*0x14085358d*/
  {
    *(_QWORD *)&v43[8] = *((_QWORD *)&v58 + 1); /*0x14085359d*/
    *(_QWORD *)v43 = 1; /*0x1408535a4*/
    v70 = nullptr; /*0x1408535af*/
    sub_140018650(&v43[8]); /*0x1408535ba*/
    v11 = nullptr; /*0x1408535c0*/
  }
  else
  {
    *(_OWORD *)&v43[80] = v62; /*0x1408535ce*/
    *(_OWORD *)&v43[64] = v61; /*0x1408535f1*/
    *(_OWORD *)&v43[48] = v60; /*0x1408535f8*/
    *(_OWORD *)&v43[32] = v59; /*0x1408535ff*/
    *(_OWORD *)&v43[16] = v58; /*0x140853606*/
    *(_QWORD *)v43 = 1; /*0x14085360d*/
    *(_QWORD *)&v43[8] = 1; /*0x140853618*/
    nullsub_1(v9); /*0x140853623*/
    v12 = (_OWORD *)sub_140001650(96, 8); /*0x140853632*/
    if ( !v12 ) /*0x14085363a*/
      sub_1416C2D31(8, 96); /*0x140853adf*/
    v11 = v12; /*0x140853640*/
    v12[5] = *(_OWORD *)&v43[80]; /*0x14085364a*/
    v12[4] = *(_OWORD *)&v43[64]; /*0x140853655*/
    v13 = *(_OWORD *)v43; /*0x140853659*/
    v14 = *(_OWORD *)&v43[16]; /*0x140853660*/
    v15 = *(_OWORD *)&v43[32]; /*0x140853667*/
    v12[3] = *(_OWORD *)&v43[48]; /*0x140853675*/
    v12[2] = v15; /*0x140853679*/
    v12[1] = v14; /*0x14085367d*/
    *v12 = v13; /*0x140853681*/
    v70 = v12; /*0x140853684*/
  }
  v84 = 1; /*0x14085368b*/
  v83 = 1; /*0x140853692*/
  v82 = 1; /*0x140853699*/
  sub_140016A00(&v44); /*0x1408536a7*/
  v17 = v10 == 2; /*0x1408536ad*/
  v18 = v73; /*0x1408536b1*/
  if ( v17 ) /*0x1408536b8*/
  {
    nullsub_1(v16); /*0x1408536be*/
    v19 = (void *)sub_140001650(47, 1); /*0x1408536cd*/
    if ( !v19 ) /*0x1408536d5*/
    {
      v84 = 1; /*0x140853ae7*/
      v83 = 1; /*0x140853aee*/
      v82 = 1; /*0x140853af5*/
      sub_1416C2D4B(1, 47); /*0x140853b06*/
    }
    qmemcpy(v19, "relay tokio runtime init failed; proxy disabled", 47); /*0x1408536f8*/
    *(_QWORD *)v43 = 47; /*0x1408536fb*/
    *(_QWORD *)&v43[8] = v19; /*0x140853706*/
    *(_QWORD *)&v43[16] = 47; /*0x14085370d*/
    if ( *(_QWORD *)off_141EC8D80 ) /*0x14085371f*/
    {
      *(_QWORD *)&v58 = v43; /*0x14085372b*/
      *((_QWORD *)&v58 + 1) = sub_1400015F0; /*0x140853739*/
      *(_QWORD *)&v44 = 0; /*0x140853740*/
      *((_QWORD *)&v44 + 1) = aCodexmateLibCo_5; /*0x140853752*/
      v45 = 0x23u; /*0x140853759*/
      *(_QWORD *)v46 = aSrcCoreRelayMa_2; /*0x140853776*/
      *(_QWORD *)&v46[8] = 25; /*0x14085377d*/
      *(_QWORD *)&v46[16] = 1; /*0x140853788*/
      v47 = (__int64)aCodexmateLibCo_5; /*0x140853793*/
      *(_QWORD *)&v48 = 35; /*0x14085379a*/
      *((_QWORD *)&v48 + 1) = 0x9500000001LL; /*0x1408537af*/
      v49 = (__int64)&unk_1417978C6; /*0x1408537bd*/
      v50 = &v58; /*0x1408537c4*/
      sub_1412C36A0(v81, &v44); /*0x1408537d9*/
      v18 = v73; /*0x1408537df*/
    }
    if ( (_QWORD)v41 == -1 ) /*0x1408537ee*/
    {
      v42 = *(_QWORD *)&v43[16]; /*0x14085381e*/
      v41 = *(_OWORD *)v43; /*0x140853829*/
    }
    else if ( *(_QWORD *)v43 ) /*0x1408537fa*/
    {
      sub_140001660(*(_QWORD *)&v43[8], *(_QWORD *)v43, 1); /*0x140853809*/
    }
  }
  v68 = a2; /*0x14085382c*/
  sub_141684120(&v43[6], v40, 296); /*0x140853847*/
  *(_QWORD *)&v44 = 1; /*0x14085384c*/
  *((_QWORD *)&v44 + 1) = 1; /*0x140853857*/
  LOWORD(v45) = 0; /*0x140853862*/
  sub_141684120((char *)&v45 + 2, v43, 302); /*0x14085387f*/
  nullsub_1(v20); /*0x140853884*/
  v21 = sub_140001650(320, 8); /*0x140853893*/
  v78 = v21 == 0; /*0x14085389f*/
  if ( !v21 ) /*0x1408538a6*/
  {
    v74 = a2; /*0x140853a4b*/
    sub_1416C2D31(8, 320); /*0x140853a5c*/
  }
  v22 = v21; /*0x1408538ac*/
  sub_141684120(v21, &v44, 320); /*0x1408538bf*/
  v67 = v22; /*0x1408538c4*/
  nullsub_1(v23); /*0x1408538cb*/
  v24 = (_QWORD *)sub_140001650(40, 8); /*0x1408538da*/
  v25 = v77; /*0x1408538e2*/
  if ( !v24 ) /*0x1408538e9*/
  {
    v74 = (_QWORD *)v22; /*0x140853a67*/
    sub_1416C2D31(8, 40); /*0x140853a78*/
  }
  *v24 = 1; /*0x1408538ef*/
  v24[1] = 1; /*0x1408538f6*/
  v24[2] = v18; /*0x1408538fe*/
  v24[3] = v25; /*0x140853902*/
  v24[4] = v2; /*0x140853906*/
  v74 = v24; /*0x14085390a*/
  v66 = v24; /*0x140853911*/
  *(_QWORD *)&v44 = 1; /*0x140853918*/
  *((_QWORD *)&v44 + 1) = 1; /*0x140853923*/
  LOWORD(v45) = 0; /*0x14085392e*/
  *((_QWORD *)&v45 + 1) = 0; /*0x14085393c*/
  nullsub_1(v25); /*0x140853947*/
  v26 = (_OWORD *)sub_140001650(48, 8); /*0x140853956*/
  if ( !v26 ) /*0x14085395e*/
    sub_1416C2D31(8, 48); /*0x140853a8d*/
  v28 = v26; /*0x140853964*/
  v29 = v22; /*0x140853967*/
  v30 = v44; /*0x14085396a*/
  v31 = v45; /*0x140853971*/
  v26[2] = *(_OWORD *)v46; /*0x14085397f*/
  v26[1] = v31; /*0x140853983*/
  *v26 = v30; /*0x140853987*/
  *(_QWORD *)&v71 = v26; /*0x14085398a*/
  nullsub_1(v27); /*0x140853991*/
  v32 = sub_140001650(24, 8); /*0x1408539a0*/
  if ( !v32 ) /*0x1408539a8*/
  {
    v65 = v28; /*0x140853a95*/
    v80 = 1; /*0x140853a9c*/
    sub_1416C2D31(8, 24); /*0x140853aad*/
  }
  v33 = v32; /*0x1408539ae*/
  *(_QWORD *)v32 = 1; /*0x1408539b1*/
  *(_QWORD *)(v32 + 8) = 1; /*0x1408539b8*/
  *(_WORD *)(v32 + 16) = 0; /*0x1408539c0*/
  *(_QWORD *)&v58 = v32; /*0x1408539c6*/
  v34 = 0; /*0x1408539d3*/
  if ( dword_141EC2500 ) /*0x1408539d5*/
  {
    v64 = v32; /*0x140853ab5*/
    v79 = 1; /*0x140853abc*/
    sub_141697F24(&qword_141EC24F8); /*0x140853aca*/
  }
  v35 = qword_141EC24F8; /*0x1408539db*/
  v36 = _InterlockedIncrement64((volatile signed __int64 *)qword_141EC24F8); /*0x1408539e2*/
  if ( (v36 < 0) ^ v34 | (v36 == 0) ) /*0x1408539e6*/
    BUG(); /*0x140853b0c*/
  *(_QWORD *)v43 = v35; /*0x1408539ec*/
  *(_QWORD *)&v44 = v11; /*0x1408539f3*/
  v37 = sub_1404D4270(); /*0x1408539fa*/
  *a1 = a2; /*0x140853a00*/
  a1[1] = v29; /*0x140853a03*/
  a1[2] = v74; /*0x140853a0e*/
  a1[3] = v28; /*0x140853a12*/
  a1[4] = v33; /*0x140853a16*/
  a1[5] = *(_QWORD *)v43; /*0x140853a21*/
  a1[7] = v44; /*0x140853a2c*/
  a1[6] = v37; /*0x140853a30*/
  return a1; /*0x140853a37*/
}

// --- refs ---
// 0x1404d7630  load
// 0x141684120  sub_141684120
// 0x1404d8f10  sub_1404D8F10
// 0x140b036a0  sub_140B036A0
// 0x1417968aa  aCodexmateLibCo_5  // string: "codexmate_lib::core::relay::manager"
// 0x1417956b1  aSrcCoreRelayMa_2  // string: "src\core\relay\manager.rs"
// 0x14179783d  unk_14179783D
// 0x1412c36a0  sub_1412C36A0
// 0x141ec8d80  off_141EC8D80
// 0x1407da310  sub_1407DA310
// 0x1404d43a0  hydrate_secrets
// 0x14149c0f0  sub_14149C0F0
// 0x14179779d  unk_14179779D
// 0x1400015f0  sub_1400015F0
// 0x141797824  unk_141797824
// 0x14149c500  sub_14149C500
// 0x1412f4ec0  sub_1412F4EC0
// 0x1412f4e90  sub_1412F4E90
// 0x141797870  off_141797870
// 0x140425c70  sub_140425C70
// 0x141797888  aAimamiRelayRt  // string: "aimami-relay-rt"
// 0x1412f50b0  sub_1412F50B0
// 0x140018650  sub_140018650
// 0x140001690  nullsub_1
// 0x140001650  sub_140001650
// 0x1416c2d31  sub_1416C2D31
// 0x140016a00  sub_140016A00
// 0x1416c2d4b  sub_1416C2D4B
// 0x1417978c6  unk_1417978C6
// 0x140001660  sub_140001660
// 0x141697f24  sub_141697F24
// 0x141ec24f8  qword_141EC24F8
// 0x141ec2500  dword_141EC2500
// 0x1404d4270  sub_1404D4270
