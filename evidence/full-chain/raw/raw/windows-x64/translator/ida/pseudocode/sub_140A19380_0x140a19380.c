// module: codexmate_lib/core/relay/translator
// addr: 0x140a19380
// name: sub_140A19380
// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140A19380(_BYTE *a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int8 *v6; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rcx
  void *v24; // rax
  _DWORD *v25; // rax
  _QWORD v26[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v27; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  _QWORD v29[3]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-8h]
  _BYTE v31[96]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+68h]
  __int128 v33; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v34; // [rsp+100h] [rbp+80h]
  __int64 v35; // [rsp+118h] [rbp+98h]
  __int64 v36; // [rsp+120h] [rbp+A0h]
  char v37; // [rsp+12Dh] [rbp+ADh]
  char v38; // [rsp+12Eh] [rbp+AEh]
  char v39; // [rsp+12Fh] [rbp+AFh]
  __int64 v40; // [rsp+130h] [rbp+B0h]

  v40 = -2;
  v2 = sub_141433D50(aTools_1, 5, a1);
  if ( !v2 || *(_BYTE *)v2 != 4 )
    return 0;
  v3 = *(_QWORD *)(v2 + 24);
  v4 = v2;
  sub_1402ADFC0(v2 + 8);
  v5 = *(_QWORD *)(v4 + 24);
  if ( !v5 && *a1 == 5 )
  {
    sub_1402B4580(v31, a1 + 8, aTools_1, 5);
    if ( v31[0] != 0xFF )
      sub_1400104F0(v31);
  }
  if ( v5 >= v3 )
    return 0;
  v6 = (unsigned __int8 *)sub_141433D50(aSystem_0, 6, a1);
  if ( !v6 )
    goto LABEL_39;
  v7 = v6;
  v8 = *v6;
  if ( v8 != 4 )
  {
    if ( v8 == 3 )
    {
      sub_1409EB070((__int64 *)v31, v7[2], v7[3]);
      v9 = v7[1];
      if ( v9 )
        sub_140001660(v7[2], v9, 1);
      v7[3] = *(_QWORD *)&v31[16];
      *(_OWORD *)(v7 + 1) = *(_OWORD *)v31;
    }
    goto LABEL_39;
  }
  v30 = v7 + 1;
  v11 = v7[2];
  v12 = v11 + 32LL * v7[3];
  while ( v11 != v12 )
  {
    v13 = v11;
    v11 += 32;
    v14 = sub_141433D50(aText_10, 4, v13);
    if ( v14 && *(_BYTE *)v14 == 3 )
    {
      v15 = *(_QWORD *)(v14 + 24);
      v11 = v13 + 32;
      if ( v15 < 0 )
        sub_1416C2D4B(0, v36);
      v36 = 1;
      if ( v15 )
      {
        v36 = *(_QWORD *)(v14 + 16);
        nullsub_1(1);
        v16 = sub_140001650(v15, 1);
        if ( !v16 )
        {
          v36 = v15;
          sub_1416C2D4B(1, v15);
        }
        v17 = v36;
        v36 = v16;
        sub_141684120(v16, v17, v15);
        v35 = v15;
        if ( (unsigned __int64)v15 < 0x26 )
        {
          if ( v15 == 37 && !(unsigned int)sub_1416847B0("You have a web_search tool available.", v36, 37) )
          {
LABEL_27:
            sub_1409EB070((__int64 *)&v33, v36, v35);
            *(_QWORD *)&v31[24] = v34;
            *(_OWORD *)&v31[8] = v33;
            v31[0] = 3;
            v38 = 1;
            v32 = sub_141433E50(aText_10, 4, v13);
            sub_1400104F0(v32);
            v18 = *(_OWORD *)v31;
            v19 = (_OWORD *)v32;
            *(_OWORD *)(v32 + 16) = *(_OWORD *)&v31[16];
            *v19 = v18;
          }
        }
        else
        {
          sub_1414A2990((unsigned int)v31, v36, v15, (unsigned int)"You have a web_search tool available.", 37);
          sub_140A6C6F0((__int64 *)&v33, (__int64)v31);
          if ( (_BYTE)v33 )
            goto LABEL_27;
        }
        sub_140001660(v36, v35, 1);
      }
    }
  }
  sub_1402AE1B0(v30);
  v20 = v7[3];
  if ( v20 )
  {
    v21 = v7[2];
    v22 = 32 * v20;
    if ( !sub_141433D50(aCacheControl, 13, v21 + v22 - 32) && *(_BYTE *)(v21 + v22 - 32) == 5 )
    {
      nullsub_1(v23);
      v24 = (void *)sub_140001650(13, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 13);
      qmemcpy(v24, "cache_control", 13);
      v29[0] = 13;
      v29[1] = v24;
      v29[2] = 13;
      *(_QWORD *)&v27 = 0;
      v28 = 0;
      nullsub_1(0x6F635F6568636163LL);
      v25 = (_DWORD *)sub_140001650(4, 1);
      if ( !v25 )
        sub_1416C2D4B(1, 4);
      *v25 = 1701869940;
      v26[0] = 4;
      v26[1] = v25;
      v26[2] = 4;
      v39 = 1;
      sub_140B56640(v31, &off_1417A8290);
      if ( v31[0] == 0xFF )
      {
        *(_QWORD *)&v33 = *(_QWORD *)&v31[8];
        sub_1416C3060(
          (unsigned int)aCalledResultUn_15,
          43,
          (unsigned int)&v33,
          (unsigned int)&off_1417A5560,
          (__int64)&off_1417A8498);
      }
      v34 = *(_OWORD *)&v31[16];
      v33 = *(_OWORD *)v31;
      v39 = 0;
      sub_140307860(v31, &v27, v26, &v33);
      if ( v31[0] != 0xFF )
        sub_1400104F0(v31);
      *(_OWORD *)&v31[8] = v27;
      *(_QWORD *)&v31[24] = v28;
      v31[0] = 5;
      v37 = 0;
      sub_140307860(&v33, v22 + v21 - 24, v29, v31);
      if ( (_BYTE)v33 != 0xFF )
        sub_1400104F0(&v33);
    }
  }
LABEL_39:
  sub_140A273E0(a1);
  return 1;
}