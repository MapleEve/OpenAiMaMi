// module: codexmate_lib/core/voice/runtime
// addr: 0x1400256a0
// name: sub_1400256A0
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1400256A0(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rsi
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h]
  __int64 v23; // [rsp+80h] [rbp+0h]
  __int64 v24; // [rsp+88h] [rbp+8h]
  __int16 v25; // [rsp+F9h] [rbp+79h]
  char v26; // [rsp+1CAh] [rbp+14Ah]
  _BYTE v27[24]; // [rsp+2D78h] [rbp+2CF8h] BYREF
  _OWORD v28[5]; // [rsp+2D90h] [rbp+2D10h] BYREF
  _OWORD v29[5]; // [rsp+2DE0h] [rbp+2D60h] BYREF
  _QWORD v30[2]; // [rsp+2E30h] [rbp+2DB0h] BYREF
  _QWORD *v31; // [rsp+2E40h] [rbp+2DC0h]
  _QWORD *v32; // [rsp+2E48h] [rbp+2DC8h]
  __int64 v33; // [rsp+2E50h] [rbp+2DD0h] BYREF
  _QWORD *v34; // [rsp+2E58h] [rbp+2DD8h]
  char v35; // [rsp+2E67h] [rbp+2DE7h]
  __int64 v36; // [rsp+2E68h] [rbp+2DE8h]
  char v37; // [rsp+2E77h] [rbp+2DF7h]
  __int64 v38; // [rsp+2E78h] [rbp+2DF8h]

  v38 = -2;
  v36 = a1;
  v37 = 1;
  sub_1412F4EE0(&v15);
  v25 = 257;
  sub_1412F50B0(v28, &v15);
  if ( LODWORD(v28[0]) == 2 )
  {
    v33 = *((_QWORD *)&v28[0] + 1);
    v1 = v36;
    v2 = *(_QWORD *)(v36 + 264);
    v3 = *(_QWORD *)(v36 + 272);
    v30[0] = &v33;
    v30[1] = sub_141490720;
    sub_14149C0F0(v27, &unk_1416CE508, v30);
    sub_140885540(v1, v2, 1, v3, (__int64)v27);
    sub_140018650(&v33);
    v37 = 1;
    sub_140016A00(&v15);
    sub_140014150(v36);
    v4 = (_QWORD *)v36;
    v5 = *(_QWORD *)(v36 + 168);
    if ( v5 )
      sub_140001660(*(_QWORD *)(v36 + 176), v5, 1);
    v6 = v4[24];
    if ( v6 )
      sub_140001660(v4[25], v6, 1);
    v7 = v4[27];
    if ( v7 )
      sub_140001660(v4[28], v7, 1);
    v8 = v4[30];
    if ( v8 )
      sub_140001660(v4[31], v8, 1);
    v9 = v4 + 19;
  }
  else
  {
    v29[4] = v28[4];
    v29[3] = v28[3];
    v29[2] = v28[2];
    v29[1] = v28[1];
    v29[0] = v28[0];
    v35 = 1;
    sub_140016A00(&v15);
    v10 = (_QWORD *)(v36 + 192);
    v11 = (_QWORD *)(v36 + 216);
    v12 = (_QWORD *)(v36 + 152);
    v16 = *(_QWORD *)(v36 + 184);
    v15 = *(_OWORD *)(v36 + 168);
    v19 = v36 + 192;
    v20 = v36 + 216;
    v17 = *(_OWORD *)(v36 + 240);
    v18 = *(_QWORD *)(v36 + 256);
    v21 = v36 + 264;
    v22 = v36;
    v23 = v36 + 272;
    v24 = v36 + 152;
    v26 = 0;
    v35 = 0;
    sub_140585F80(v29, &v15, &off_1416CE4F0);
    v32 = v10;
    v31 = v11;
    v34 = v12;
    v37 = 0;
    sub_140016C90(v29);
    sub_140014150(v36);
    v13 = v36;
    if ( *v32 )
      sub_140001660(*(_QWORD *)(v36 + 200), *v32, 1);
    if ( *v31 )
      sub_140001660(*(_QWORD *)(v13 + 224), *v31, 1);
    v9 = v34;
  }
  return sub_14026CD70(v9);
}