// module: codexmate_lib
// addr: 0x140caa1f0
// name: begin_chatgpt_oauth_login
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = begin_chatgpt_oauth_login | mapped via command-name string xref (win-native, ground-truth)
char __fastcall begin_chatgpt_oauth_login(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v15; // cl
  char result; // al
  __int64 v17; // rdi
  __int64 *v18; // rcx
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+68h] [rbp-18h]
  __int128 v30; // [rsp+78h] [rbp-8h]
  __int128 v31; // [rsp+88h] [rbp+8h]
  __int128 v32; // [rsp+98h] [rbp+18h]
  __int128 v33; // [rsp+A8h] [rbp+28h]
  __int128 v34; // [rsp+B8h] [rbp+38h]
  __int64 v35; // [rsp+198h] [rbp+118h] BYREF
  __int128 v36; // [rsp+1A0h] [rbp+120h]
  __int128 v37; // [rsp+1B0h] [rbp+130h]
  _QWORD v38[8]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v39; // [rsp+200h] [rbp+180h]
  __int128 v40; // [rsp+210h] [rbp+190h]
  __int128 v41; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v42; // [rsp+230h] [rbp+1B0h]
  __int128 v43; // [rsp+240h] [rbp+1C0h]
  __int128 v44; // [rsp+250h] [rbp+1D0h]
  __int128 v45; // [rsp+260h] [rbp+1E0h]
  __int128 v46; // [rsp+270h] [rbp+1F0h]
  __int128 v47; // [rsp+280h] [rbp+200h]
  __int128 v48; // [rsp+290h] [rbp+210h]
  __int128 v49; // [rsp+2A0h] [rbp+220h]
  __int128 v50; // [rsp+2B0h] [rbp+230h]
  __int128 v51; // [rsp+2C0h] [rbp+240h]
  __int64 v52; // [rsp+2D8h] [rbp+258h]
  _QWORD *v53; // [rsp+2E0h] [rbp+260h]
  __int64 v54; // [rsp+2E8h] [rbp+268h]
  __int64 v55; // [rsp+2F0h] [rbp+270h]
  __int64 *v56; // [rsp+2F8h] [rbp+278h]
  __int64 v57; // [rsp+300h] [rbp+280h]
  __int64 v58; // [rsp+308h] [rbp+288h]
  __int64 v59; // [rsp+310h] [rbp+290h]

  v59 = -2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 10544);
  v58 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 10545) = 257;
      *(_BYTE *)(a1 + 10547) = 1;
      v55 = a1 + 5464;
      sub_141684120(a1 + 5464, a1 + 392, 5072);
      switch ( *(_BYTE *)(v5 + 10528) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_6;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v55 = a1 + 5464;
      switch ( *(_BYTE *)(a1 + 10528) )
      {
        case 0:
LABEL_4:
          v7 = (__int64 *)(v5 + 5984);
          v38[6] = 0;
          v38[0] = aBeginChatgptOa;
          v38[1] = 25;
          v38[2] = aApp_2;
          v38[3] = 3;
          v38[4] = v55;
          v38[5] = v7;
          sub_1401C3650(&v25, v38);
          v50 = v26;
          v51 = v27;
          if ( v25 == -1 )
          {
            v56 = v7;
            v48 = v50;
            v49 = v51;
            sub_140BF0DE0(v55);
            if ( *v56 == -1 )
            {
              v13 = 1;
              v17 = v58;
              goto LABEL_21;
            }
            v53 = (_QWORD *)(v58 + 5992);
            v21 = *(_QWORD *)(v58 + 5992);
            v54 = *(_QWORD *)(v58 + 6000);
            v57 = 0;
            v52 = v21;
            while ( v54 != v57 )
            {
              ++v57;
              v22 = v21 + 96;
              sub_1402C7520();
              v21 = v22;
            }
            v20 = *v56;
            v13 = 1;
            v17 = v58;
            if ( !*v56 )
              goto LABEL_21;
LABEL_19:
            sub_140001660(*v53, 96 * v20, 8);
            goto LABEL_21;
          }
          v47 = v34;
          v46 = v33;
          v45 = v32;
          v44 = v31;
          v43 = v30;
          v42 = v29;
          v41 = v28;
          v5 = v58;
          v8 = v58 + 6008;
          *(_QWORD *)(v58 + 6008) = v25;
          v9 = v51;
          *(_OWORD *)(v5 + 6016) = v50;
          *(_OWORD *)(v5 + 6032) = v9;
          v10 = v42;
          v11 = v43;
          v12 = v44;
          *(_OWORD *)(v5 + 6048) = v41;
          *(_OWORD *)(v5 + 6064) = v10;
          *(_OWORD *)(v5 + 6080) = v11;
          *(_OWORD *)(v5 + 6096) = v12;
          *(_OWORD *)(v5 + 6112) = v45;
          *(_OWORD *)(v5 + 6128) = v46;
          *(_OWORD *)(v5 + 6144) = v47;
          *(_BYTE *)(v5 + 7504) = 0;
          sub_141684120(v5 + 7512, v8, 1504);
          *(_BYTE *)(v5 + 10520) = 0;
LABEL_6:
          v57 = v5 + 7512;
          sub_140BF3C60(&v25, v5 + 7512, a2);
          v13 = v25;
          if ( v25 == 2 )
          {
            v14 = v58;
            *(_BYTE *)(v58 + 10528) = 3;
            v15 = 3;
            result = 1;
            goto LABEL_22;
          }
          v49 = v27;
          v48 = v26;
          sub_140BC62C0(v57);
          sub_140BF0DE0(v55);
          v17 = v58;
          if ( *(_QWORD *)(v58 + 5984) != -1 )
          {
            v53 = (_QWORD *)(v58 + 5992);
            v18 = *(__int64 **)(v58 + 5992);
            v54 = *(_QWORD *)(v58 + 6000);
            v57 = 0;
            v56 = v18;
            while ( v54 != v57 )
            {
              ++v57;
              v19 = v18 + 12;
              sub_1402C7520();
              v18 = v19;
            }
            v17 = v58;
            v20 = *(_QWORD *)(v58 + 5984);
            if ( v20 )
              goto LABEL_19;
          }
LABEL_21:
          v40 = v49;
          v39 = v48;
          *(_BYTE *)(v17 + 10528) = 1;
          sub_140BE28C0(v55);
          v37 = v40;
          v36 = v39;
          v35 = v13;
          v23 = v58;
          *(_BYTE *)(v58 + 10547) = 0;
          sub_141684120(&v25, v23, 360);
          *(_BYTE *)(v23 + 10546) = 0;
          v24 = *(_QWORD *)(v23 + 384);
          *(_BYTE *)(v23 + 10545) = 0;
          *(_QWORD *)&v42 = *(_QWORD *)(v23 + 376);
          v41 = *(_OWORD *)(v23 + 360);
          sub_14047E370(
            (unsigned int)&v25,
            v24,
            (unsigned int)&v35,
            (unsigned int)&v41,
            *(_DWORD *)(v23 + 10536),
            *(_DWORD *)(v23 + 10540));
          v15 = 1;
          result = 0;
          v14 = v58;
LABEL_22:
          *(_BYTE *)(v14 + 10544) = v15;
          return result;
        case 1:
LABEL_26:
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_25:
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_6;
      }
  }
}