// win 1.2.7 latest-exe | module src/core/relay/codex_writer.rs | ea 0x140415540 | successor of pre-update 0x140f0e1b0 | session <审计会话>
// match evidence: {"body_sim": 0.451, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_140415540(__int64 a1, __int64 a2, __int16 a3, _QWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // al
  __int128 v12; // xmm0
  _OWORD v14[4]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v15; // [rsp+80h] [rbp+0h] BYREF
  __int128 v16; // [rsp+90h] [rbp+10h]
  __int64 v17; // [rsp+A8h] [rbp+28h]
  __int64 v18; // [rsp+B0h] [rbp+30h]
  __int64 v19; // [rsp+B8h] [rbp+38h]
  __int64 v20; // [rsp+C0h] [rbp+40h]
  __int16 v21; // [rsp+CEh] [rbp+4Eh]
  __int128 v22; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+60h]
  __int128 v24; // [rsp+F0h] [rbp+70h]
  __int128 v25; // [rsp+100h] [rbp+80h]
  __int128 v26; // [rsp+110h] [rbp+90h] BYREF
  __int128 v27; // [rsp+120h] [rbp+A0h]
  _BYTE v28[48]; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD *v29; // [rsp+170h] [rbp+F0h]
  char v30; // [rsp+17Eh] [rbp+FEh]
  char v31; // [rsp+17Fh] [rbp+FFh]
  __int64 v32; // [rsp+180h] [rbp+100h]

  v32 = -2;
  v5 = a1;
  switch ( a3 )
  {
    case 1:
      v29 = a4;
      v31 = 0;
      sub_1414CB5A0(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 == -1 )
        goto LABEL_34;
      goto LABEL_33;
    case 2:
      v29 = a4;
      v31 = 0;
      sub_1414CB580(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 3:
      v29 = a4;
      v31 = 0;
      sub_1414CB510(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 4:
      v29 = a4;
      v31 = 0;
      sub_1414CB510(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 5:
      v29 = a4;
      v31 = 0;
      sub_1414CB580(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 6:
      v29 = a4;
      v31 = 0;
      sub_1414CB550(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 7:
      v29 = a4;
      v31 = 0;
      sub_1414CB560(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 8:
      v29 = a4;
      v31 = 0;
      sub_1414CB540(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 9:
      v29 = a4;
      v31 = 0;
      sub_1414CB520(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 10:
      v29 = a4;
      v31 = 0;
      sub_1414CB5B0(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 11:
      v29 = a4;
      v31 = 0;
      sub_140D28A30(v28);
      goto LABEL_35;
    case 12:
      v29 = a4;
      v31 = 0;
      sub_1416C2760(&v22);
      *(_OWORD *)&v28[24] = v23;
      *(_OWORD *)&v28[8] = v22;
      goto LABEL_40;
    case 13:
    case 14:
      v29 = a4;
      v31 = 0;
      sub_140D28920(v28);
      goto LABEL_35;
    case 15:
    case 16:
      v29 = a4;
      v31 = 0;
      sub_140D28CF0(v28);
      goto LABEL_35;
    case 17:
      v29 = a4;
      v31 = 0;
      sub_140D28790(v28);
      goto LABEL_35;
    case 18:
      v29 = a4;
      v31 = 0;
      sub_1414CB530(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 19:
    case 20:
    case 22:
      v6 = 0x8000000000000019uLL;
      goto LABEL_37;
    case 21:
      v29 = a4;
      v31 = 0;
      sub_1414CB590(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 != -1 )
        goto LABEL_33;
      goto LABEL_34;
    case 23:
      v29 = a4;
      v31 = 0;
      sub_1414CB570(&v26);
      *(_QWORD *)&v22 = 0x8000000000000019uLL;
      if ( (_QWORD)v26 == -1 )
      {
LABEL_34:
        *(_OWORD *)&v28[32] = v24;
        *(_OWORD *)&v28[16] = v23;
        *(_OWORD *)v28 = v22;
      }
      else
      {
LABEL_33:
        *(_OWORD *)&v28[24] = v27;
        *(_OWORD *)&v28[8] = v26;
        *(_QWORD *)v28 = -1;
        v31 = 0;
        sub_140CB79A0(&v22);
      }
LABEL_35:
      v6 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 == -1 )
      {
LABEL_40:
        v15 = *(_OWORD *)&v28[8];
        v16 = *(_OWORD *)&v28[24];
        if ( *v29 != -1 )
        {
          v20 = *v29;
          v9 = v29[1];
          v10 = v29[2];
          v21 = a3;
          v18 = v9;
          if ( a3 == 11 )
          {
            *(_QWORD *)&v26 = 0;
            *((_QWORD *)&v26 + 1) = 1;
            *(_QWORD *)&v27 = 0;
            BYTE8(v27) = 1;
            v30 = 1;
            sub_1416B0AC0(v14, v9, v10);
            v25 = v14[3];
            v24 = v14[2];
            v23 = v14[1];
            v22 = v14[0];
            while ( 1 )
            {
              v30 = 1;
              sub_1416D0C90(v28, &v22);
              if ( v28[0] == 0xFF )
                break;
              v11 = v28[0] - 5;
              if ( v28[0] < 5u )
                v11 = 0;
              switch ( v11 )
              {
                case 0:
                case 2:
                  continue;
                case 1:
                  v30 = 1;
                  sub_1416C0560(&v26, aRoot_0, 6);
                  break;
                case 3:
                  v30 = 1;
                  sub_1416C0560(&v26, aUp, 4);
                  break;
                case 4:
                  v30 = 1;
                  sub_1416C0560(&v26, *(_QWORD *)&v28[8], *(_QWORD *)&v28[16]);
                  break;
              }
            }
            v17 = *((_QWORD *)&v26 + 1);
            v19 = v26;
            sub_1416C0560(&v15, *((_QWORD *)&v26 + 1), v27);
            if ( v19 )
              sub_140001660(v17, v19, 1);
          }
          else
          {
            sub_1416C0560(&v15, v9, v10);
          }
          if ( v20 )
            sub_140001660(v18, v20, 1);
        }
        v12 = v15;
        *(_OWORD *)(v5 + 24) = v16;
        *(_OWORD *)(v5 + 8) = v12;
        *(_QWORD *)v5 = -1;
      }
      else
      {
        a1 = *(_QWORD *)&v28[40];
        a4 = v29;
LABEL_37:
        v7 = *(_OWORD *)&v28[8];
        *(_OWORD *)(v5 + 24) = *(_OWORD *)&v28[24];
        *(_OWORD *)(v5 + 8) = v7;
        *(_QWORD *)v5 = v6;
        *(_QWORD *)(v5 + 40) = a1;
        v8 = *a4;
        if ( *a4 != -1 && v8 )
          sub_140001660(a4[1], v8, 1);
      }
      return v5;
  }
}
