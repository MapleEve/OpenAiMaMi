// module: codexmate_lib/core/relay/quota
// addr: 0x140d03ad0
// name: sub_140D03AD0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D03AD0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // rcx
  char v8; // r11
  const char *v9; // r10
  int v10; // r13d
  char result; // al
  char v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdi
  void *v15; // r15
  int v16; // eax
  _QWORD *v17; // rbx
  char v18; // al
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  void *v24; // r9
  void *v25; // rax
  void *v26; // rax
  char v27; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v28[7]; // [rsp+29h] [rbp-57h]
  __int64 v29; // [rsp+30h] [rbp-50h]
  __int64 v30; // [rsp+38h] [rbp-48h]
  void *v31; // [rsp+40h] [rbp-40h]
  __int64 v32; // [rsp+48h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+58h] [rbp-28h]
  void *v35; // [rsp+60h] [rbp-20h]
  __int64 v36; // [rsp+68h] [rbp-18h]
  __int64 **v37; // [rsp+70h] [rbp-10h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+78h] [rbp-8h]
  __int64 *v39; // [rsp+80h] [rbp+0h] BYREF
  __int64 v40; // [rsp+88h] [rbp+8h] BYREF
  __int64 v41; // [rsp+90h] [rbp+10h] BYREF
  __int64 v42; // [rsp+98h] [rbp+18h]
  __int64 v43; // [rsp+A0h] [rbp+20h]
  void *v44; // [rsp+A8h] [rbp+28h]
  _BYTE v45[7]; // [rsp+B0h] [rbp+30h]
  char v46; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v47; // [rsp+B8h] [rbp+38h]
  __int64 v48; // [rsp+C0h] [rbp+40h]

  v48 = -2;
  switch ( *(_BYTE *)(a2 + 801) )
  {
    case 0:
      v5 = *(_QWORD *)(a2 + 784);
      v6 = *(_OWORD *)(a2 + 768);
      v7 = *(_QWORD *)(a2 + 792);
      v8 = *(_BYTE *)(a2 + 802);
      *(_BYTE *)(a2 + 800) = v8;
      v9 = "https://api.moonshot.ai/v1/users/me/balancehttps://api.moonshot.cn/v1/users/me/balance";
      if ( v8 )
        v9 = "https://api.moonshot.cn/v1/users/me/balance";
      *(_QWORD *)a2 = v5;
      *(_QWORD *)(a2 + 8) = v9;
      *(_QWORD *)(a2 + 16) = 43;
      *(_OWORD *)(a2 + 24) = v6;
      *(_QWORD *)(a2 + 40) = v7;
      *(_BYTE *)(a2 + 48) = 0;
      break;
    case 1:
      sub_1416C3400(&off_1417BBC30, a2, a3, a4);
    case 2:
      sub_1416C3420(&off_1417BBC30, a2, a3, a4);
    case 3:
      break;
  }
  v47 = a2;
  sub_140D04E20(&v40);
  v10 = v40;
  if ( v40 != 2 )
  {
    v12 = v41;
    *(_DWORD *)v45 = *(_DWORD *)((char *)&v41 + 1);
    *(_DWORD *)&v45[3] = HIDWORD(v41);
    v13 = v42;
    v14 = v43;
    v15 = v44;
    v16 = *(unsigned __int8 *)(v47 + 48);
    if ( v16 == 4 )
    {
      if ( *(_BYTE *)(v47 + 760) == 3 )
      {
        sub_140BE80E0(v47 + 336);
      }
      else if ( !*(_BYTE *)(v47 + 760) )
      {
        sub_140BA5F10(v47 + 200);
        v17 = *(_QWORD **)(v47 + 328);
        if ( *v17 )
          sub_140001660(v17[1], *v17, 1);
        sub_140001660(v17, 88, 8);
      }
    }
    else if ( v16 == 3 )
    {
      sub_140BF25D0(*(_QWORD *)(v47 + 56), *(_QWORD *)(v47 + 64));
    }
    if ( v10 == 1 )
    {
      LOBYTE(v40) = v12;
      *(_DWORD *)((char *)&v40 + 1) = *(_DWORD *)v45;
      HIDWORD(v40) = *(_DWORD *)&v45[3];
      v41 = v13;
      v42 = v14;
      v43 = (__int64)v15;
      v33 = 0;
      v34 = 1;
      v35 = nullptr;
      if ( (unsigned __int16)v40 == 2 )
      {
        v39 = &v41;
        v37 = &v39;
        v38 = sub_1406B5450;
        v18 = sub_1414A2FC0(&v33, &off_1417C41C0, &unk_14175EB07, &v37);
      }
      else if ( (unsigned __int16)v40 == 1 )
      {
        v39 = &v41;
        v37 = &v39;
        v38 = sub_1406B5450;
        v18 = sub_1414A2FC0(&v33, &off_1417C41C0, &unk_14175EAF4, &v37);
      }
      else
      {
        v39 = (__int64 *)((char *)&v40 + 2);
        v37 = &v39;
        v38 = sub_14041F6C0;
        v18 = sub_1414A2FC0(&v33, &off_1417C41C0, &unk_14175EAE8, &v37);
      }
      if ( v18 )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v46,
          (unsigned int)&unk_1417BC180,
          (__int64)&off_1417C4278);
      v13 = v33;
      v14 = v34;
      v15 = v35;
      if ( (_WORD)v40 && v41 )
        sub_140001660(v42, v41, 1);
      v19 = -1;
    }
    else
    {
      v19 = -1;
      if ( v12 != -1 )
      {
        *(_DWORD *)&v28[3] = *(_DWORD *)&v45[3];
        *(_DWORD *)v28 = *(_DWORD *)v45;
        v27 = v12;
        v29 = v13;
        v30 = v14;
        v31 = v15;
        v20 = sub_141433D50(aData_8, 4, &v27);
        if ( v20 )
        {
          v22 = (unsigned __int8 *)sub_141433D50(aAvailableBalan, 17, v20);
          sub_1404D16A0((__int64)&v40, v22);
          if ( v40 != -1 )
          {
            v36 = v40;
            v24 = &unk_1417BB860;
            if ( *(_BYTE *)(v47 + 800) )
              v24 = &unk_1417BB8C8;
            v32 = v41;
            sub_1404D13C0((__int64)&v40, v41, v42, (__int64)v24, 3);
            v19 = v40;
            v13 = v41;
            v14 = v42;
            if ( v36 )
              sub_140001660(v32, v36, 1);
            sub_1400104F0(&v27);
            v15 = &unk_1417BBC59;
            goto LABEL_40;
          }
          nullsub_1(v23);
          v13 = 47;
          v26 = (void *)sub_140001650(47, 1);
          if ( !v26 )
            sub_1416C2D4B(1, 47);
          v14 = (__int64)v26;
          qmemcpy(v26, "Kimi balance response missing available_balance", 47);
        }
        else
        {
          nullsub_1(v21);
          v13 = 34;
          v25 = (void *)sub_140001650(34, 1);
          if ( !v25 )
            sub_1416C2D4B(1, 34);
          v14 = (__int64)v25;
          qmemcpy(v25, "Kimi balance response missing data", 34);
        }
        sub_1400104F0(&v27);
        v15 = (void *)v13;
      }
    }
LABEL_40:
    *a1 = v19;
    a1[1] = v13;
    a1[2] = v14;
    a1[3] = (__int64)v15;
    a1[4] = 13;
    a1[5] = (__int64)aKimiE;
    a1[6] = 17;
    result = 1;
    goto LABEL_41;
  }
  *a1 = -2;
  result = 3;
LABEL_41:
  *(_BYTE *)(v47 + 801) = result;
  return result;
}