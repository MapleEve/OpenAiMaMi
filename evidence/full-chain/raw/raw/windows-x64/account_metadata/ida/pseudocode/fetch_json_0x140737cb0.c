// module: codexmate_lib/core/account_metadata
// addr: 0x140737cb0
// name: fetch_json
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::account_metadata::fetch_json | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fetch_json(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  char v23; // al
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  _BYTE v27[328]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v28[24]; // [rsp+188h] [rbp+108h] BYREF
  _BYTE v29[40]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v30; // [rsp+1C8h] [rbp+148h]
  __int128 v31; // [rsp+1D8h] [rbp+158h]
  __int128 v32; // [rsp+1E8h] [rbp+168h]
  __int128 v33; // [rsp+1F8h] [rbp+178h]
  __int128 v34; // [rsp+208h] [rbp+188h]
  __int128 v35; // [rsp+218h] [rbp+198h]
  __int128 v36; // [rsp+228h] [rbp+1A8h]
  __int128 v37; // [rsp+238h] [rbp+1B8h]
  __int64 v38; // [rsp+248h] [rbp+1C8h]
  __int128 v39; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v40; // [rsp+300h] [rbp+280h]
  __int64 *v41; // [rsp+308h] [rbp+288h] BYREF
  _BYTE v42[96]; // [rsp+310h] [rbp+290h]
  __int128 v43; // [rsp+370h] [rbp+2F0h]
  __int128 v44; // [rsp+380h] [rbp+300h]
  __int128 v45; // [rsp+390h] [rbp+310h]
  __int128 v46; // [rsp+3A0h] [rbp+320h]
  __int64 v47; // [rsp+3B0h] [rbp+330h]
  __int64 v48; // [rsp+3B8h] [rbp+338h]
  __int64 v49; // [rsp+3C0h] [rbp+340h]
  __int64 v50; // [rsp+450h] [rbp+3D0h] BYREF
  __int64 v51; // [rsp+458h] [rbp+3D8h]
  __int128 v52; // [rsp+460h] [rbp+3E0h]
  __int128 v53; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v54; // [rsp+480h] [rbp+400h]
  __int64 v55; // [rsp+488h] [rbp+408h] BYREF
  __int64 v56; // [rsp+490h] [rbp+410h]
  unsigned __int64 v57; // [rsp+498h] [rbp+418h]
  char v58; // [rsp+4A6h] [rbp+426h]
  char v59; // [rsp+4A7h] [rbp+427h]
  __int64 v60; // [rsp+4A8h] [rbp+428h]

  v60 = -2;
  sub_1409D5FE0(&v41, a5);
  result = (__int64)v41;
  *(_OWORD *)v29 = *(_OWORD *)v42;
  *(_QWORD *)&v29[16] = *(_QWORD *)&v42[16];
  if ( v41 != (__int64 *)-1LL )
  {
    v11 = *(_OWORD *)&v42[24];
    v12 = *(_OWORD *)&v42[40];
    v13 = *(_OWORD *)&v42[56];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v42[72];
    *(_OWORD *)(a1 + 64) = v13;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)&v29[16];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v29;
    *(_QWORD *)a1 = result;
    return result;
  }
  v53 = *(_OWORD *)v29;
  v54 = *(_QWORD *)&v29[16];
  memset(v29, 1, 24);
  sub_14097F010((unsigned int)&v41, (unsigned int)&v53, (unsigned int)v29, a2, a3);
  sub_14103D060(v29, &v41, 5, 0);
  v41 = (__int64 *)a4;
  *(_QWORD *)v42 = sub_1400015F0;
  v58 = 1;
  sub_14149C0F0(v28, &unk_141786D00, &v41);
  v58 = 0;
  sub_1406C7390((unsigned int)&v41, (unsigned int)v29, (unsigned int)aAuthorization_1, 13, (__int64)v28, 0);
  sub_1406C77A0((unsigned int)v29, (unsigned int)&v41, (unsigned int)aChatgptAccount_1, 18, a4 + 24, 0);
  sub_1406C7070((unsigned int)&v41, (unsigned int)v29, (unsigned int)aAccept_0, 6, (__int64)"application/json", 16, 0);
  sub_1406C7070((unsigned int)v29, (unsigned int)&v41, (unsigned int)aOrigin_3, 6, (__int64)&unk_14178A565, 19, 0);
  sub_1406C7070((unsigned int)&v41, (unsigned int)v29, (unsigned int)aReferer, 7, (__int64)&unk_14178A57F, 20, 0);
  sub_1406C7070((unsigned int)v27, (unsigned int)&v41, (unsigned int)aUserAgent_1, 10, (__int64)&unk_14178A59D, 12, 0);
  if ( a6 )
  {
    v14 = *(_OWORD *)(a4 + 32);
    *(_QWORD *)v29 = aAccountId_1;
    *(_QWORD *)&v29[8] = 10;
    *(_OWORD *)&v29[16] = v14;
    sub_1406C8800(&v41, v27, v29);
    sub_141684120(v27, &v41, 328);
  }
  sub_14103CF70(&v41, v27);
  if ( v41 == (__int64 *)-1LL )
  {
    v19 = *(_QWORD *)v42;
    *(_QWORD *)a1 = 6;
    *(_QWORD *)(a1 + 8) = v19;
  }
  else
  {
    *(_OWORD *)&v29[24] = *(_OWORD *)&v42[16];
    v30 = *(_OWORD *)&v42[32];
    v31 = *(_OWORD *)&v42[48];
    v32 = *(_OWORD *)&v42[64];
    v33 = *(_OWORD *)&v42[80];
    v34 = v43;
    v35 = v44;
    v36 = v45;
    v37 = v46;
    v38 = v47;
    *(_QWORD *)v29 = v41;
    *(_OWORD *)&v29[8] = *(_OWORD *)v42;
    if ( (unsigned __int16)(v43 - 200) >= 0x64u )
    {
      LOWORD(v50) = v43;
      v41 = &v50;
      *(_QWORD *)v42 = sub_1414AAE30;
      v59 = 1;
      sub_14149C0F0(&v39, &unk_14178A5B3, &v41);
      *(_QWORD *)(a1 + 24) = v40;
      *(_OWORD *)(a1 + 8) = v39;
      *(_QWORD *)a1 = 10;
    }
    else
    {
      v59 = 1;
      v15 = sub_14101E130(v29);
      if ( ((v16 >= 0x40001) & v15) == 0 )
      {
        v55 = 0;
        v56 = 1;
        v57 = 0;
        sub_141684120(&v41, v29, 176);
        v48 = 262145;
        v49 = 262145;
        if ( sub_140352020(&v41, &v55, 0) == 1 )
        {
          *(_QWORD *)a1 = 2;
          *(_QWORD *)(a1 + 8) = v20;
          sub_1406CCBE0(&v41);
        }
        else
        {
          sub_1406CCBE0(&v41);
          if ( v57 <= 0x40000 )
          {
            v41 = (__int64 *)v56;
            *(_QWORD *)v42 = v57;
            *(_OWORD *)&v42[8] = 0;
            sub_1408A8DF0(&v50, &v41);
            v23 = v50;
            if ( (_BYTE)v50 == 0xFF )
            {
              v26 = v51;
              *(_QWORD *)a1 = 3;
              *(_QWORD *)(a1 + 8) = v26;
            }
            else
            {
              v24 = *(_DWORD *)((char *)&v50 + 1);
              *(_DWORD *)(a1 + 12) = HIDWORD(v50);
              *(_DWORD *)(a1 + 9) = v24;
              v25 = v51;
              *(_OWORD *)(a1 + 24) = v52;
              *(_BYTE *)(a1 + 8) = v23;
              *(_QWORD *)(a1 + 16) = v25;
              *(_QWORD *)a1 = -1;
            }
          }
          else
          {
            nullsub_1(v21);
            v22 = (void *)sub_140001650(49, 1);
            if ( !v22 )
              sub_1416C2D4B(1, 49);
            qmemcpy(v22, "account metadata response exceeded the size limit", 49);
            *(_QWORD *)a1 = 9;
            *(_QWORD *)(a1 + 8) = 49;
            *(_QWORD *)(a1 + 16) = v22;
            *(_QWORD *)(a1 + 24) = 49;
          }
        }
        if ( v55 )
          sub_140001660(v56, v55, 1);
        goto LABEL_13;
      }
      LOBYTE(v17) = v16 >= 0x40001;
      nullsub_1(v17);
      v18 = (void *)sub_140001650(49, 1);
      if ( !v18 )
      {
        v59 = 1;
        sub_1416C2D4B(1, 49);
      }
      qmemcpy(v18, "account metadata response exceeded the size limit", 49);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 49;
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)(a1 + 24) = 49;
    }
    sub_1406CCBE0(v29);
  }
LABEL_13:
  result = v53;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v53) )
    return sub_141018DA0(&v53);
  return result;
}
