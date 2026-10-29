// win 1.2.7 latest-exe | module src/core/sessions.rs | ea 0x14087fe50 | successor of pre-update 0x1402d2f70 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.966, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_14087FE50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm6
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // rdi
  _QWORD v21[9]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+78h] [rbp-8h]
  __int128 v24; // [rsp+80h] [rbp+0h]
  __int128 v25; // [rsp+90h] [rbp+10h]
  __int128 v26; // [rsp+A0h] [rbp+20h]
  __int128 v27; // [rsp+B0h] [rbp+30h]
  _QWORD v28[2]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v29[56]; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v30; // [rsp+108h] [rbp+88h]
  __int64 v31; // [rsp+118h] [rbp+98h] BYREF
  __int64 v32; // [rsp+120h] [rbp+A0h]
  __int64 v33; // [rsp+128h] [rbp+A8h]
  __int128 v34; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v35; // [rsp+140h] [rbp+C0h]
  __int128 v36; // [rsp+150h] [rbp+D0h]
  __int128 v37; // [rsp+160h] [rbp+E0h]
  __int128 v38; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v39; // [rsp+180h] [rbp+100h]
  __int128 v40; // [rsp+190h] [rbp+110h]
  __int128 v41; // [rsp+1A0h] [rbp+120h]
  __int64 v42; // [rsp+1B8h] [rbp+138h]
  char v43; // [rsp+1C7h] [rbp+147h]
  __int64 v44; // [rsp+1C8h] [rbp+148h]

  v44 = -2;
  v28[0] = a3;
  v28[1] = a4;
  *(_QWORD *)&v38 = v28;
  *((_QWORD *)&v38 + 1) = sub_140191200;
  sub_1416DAFA0(&v31, &unk_141A536E0, &v38);
  v42 = v32;
  sub_14086B1B0(v29, a2, v32, v33);
  if ( *(_DWORD *)v29 == 1 )
  {
    v41 = v30;
    v40 = *(_OWORD *)&v29[40];
    v39 = *(_OWORD *)&v29[24];
    v38 = *(_OWORD *)&v29[8];
    *(_QWORD *)&v34 = v28;
    *((_QWORD *)&v34 + 1) = sub_140191200;
    *(_QWORD *)&v35 = &v38;
    *((_QWORD *)&v35 + 1) = sub_14142D4D0;
    sub_1416DAFA0(&v22, &unk_141A51FAC, &v34);
    v34 = v22;
    *(_QWORD *)&v35 = v23;
    sub_14084BC90(&v38);
    v6 = v34;
    v7 = v35;
    v8 = v36;
    v24 = v34;
    v25 = v35;
    v26 = v36;
    v27 = v37;
    *(_OWORD *)(a1 + 56) = v37;
    *(_OWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 24) = v7;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 10;
    if ( v31 )
      sub_140001660(v42, v31, 1);
  }
  else
  {
    v24 = *(_OWORD *)&v29[8];
    v25 = *(_OWORD *)&v29[24];
    v26 = *(_OWORD *)&v29[40];
    v27 = v30;
    v38 = *(_OWORD *)&v29[8];
    v39 = *(_OWORD *)&v29[24];
    v40 = *(_OWORD *)&v29[40];
    v41 = v30;
    if ( v31 )
      sub_140001660(v42, v31, 1);
    v9 = sub_1417D8600(*((_QWORD *)&v41 + 1));
    v11 = v9;
    if ( v9 )
    {
      *(_OWORD *)v29 = 0x8000000000000013uLL;
      *(_QWORD *)&v29[16] = v9;
      v21[0] = v29;
      v21[1] = sub_14142D4D0;
      sub_1416DAFA0(&v34, &unk_141A51FC1, v21);
      v12 = v34;
      v13 = v35;
      sub_14084BC90(v29);
      *(_QWORD *)a1 = 10;
      *(_OWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 24) = v13;
    }
    else
    {
      *(_QWORD *)&v34 = &v38;
      *((_QWORD *)&v34 + 1) = 0;
      v43 = 1;
      v14 = sub_1416AE140(v10);
      if ( *(_BYTE *)(v14 + 16) == 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(_QWORD *)(v14 + 8);
      }
      else
      {
        v43 = 1;
        v20 = v14;
        v15 = sub_1416C5230();
        v14 = v20;
        *(_QWORD *)v20 = v15;
        *(_QWORD *)(v20 + 8) = v16;
        *(_BYTE *)(v20 + 16) = 1;
      }
      *(_QWORD *)v14 = v15 + 1;
      *(_OWORD *)&v29[16] = xmmword_141A51860;
      *(_OWORD *)v29 = *(_OWORD *)&off_141A51850;
      *(_QWORD *)&v29[32] = v15;
      *(_QWORD *)&v29[40] = v16;
      sub_140861380(v29, &v38, v11);
      v17 = *(_OWORD *)v29;
      v18 = *(_OWORD *)&v29[16];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v29[32];
      *(_OWORD *)(a1 + 24) = v18;
      *(_OWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = -1;
    }
    sub_14084BE20(&v38);
  }
  return a1;
}
