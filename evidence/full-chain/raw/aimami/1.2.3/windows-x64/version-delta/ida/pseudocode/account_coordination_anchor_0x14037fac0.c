// win 1.2.3 delta | account_coordination_anchor @ 0x14037fac0 | changelog ①账号切换协调
// [FULL hexrays 4329B]
// win 1.2.1 | module src/core/account_coordination.rs | attributed via panic-Location xref (win-native)
int __fastcall sub_14037FAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  void *v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  int v14; // eax
  int v15; // edx
  unsigned __int64 v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  bool v22; // si
  unsigned __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *v28; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v30; // [rsp+4Ch] [rbp-34h]
  int v31; // [rsp+54h] [rbp-2Ch]
  _BYTE v32[13]; // [rsp+58h] [rbp-28h]
  _QWORD v33[2]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp-8h] BYREF
  HANDLE hObject; // [rsp+90h] [rbp+10h]
  __int128 v36; // [rsp+98h] [rbp+18h] BYREF
  void **v37; // [rsp+A8h] [rbp+28h]
  __int64 (__fastcall *v38)(); // [rsp+B0h] [rbp+30h]
  __int64 v39; // [rsp+B8h] [rbp+38h]
  void *v40; // [rsp+C0h] [rbp+40h] BYREF
  char v41; // [rsp+CFh] [rbp+4Fh]
  __int64 v42; // [rsp+D0h] [rbp+50h]

  v42 = -2;
  v39 = a1;
  v33[0] = a4;
  v33[1] = a5;
  v7 = sub_1414740B0(a2, a3);
  if ( v7 && (LOBYTE(v29) = 1, (v9 = (_QWORD *)sub_14147B9A0(&v29, v7, v8)) != nullptr) )
  {
    v10 = v39;
    *(_QWORD *)v39 = 2;
    *(_QWORD *)(v10 + 8) = v9;
  }
  else
  {
    v29 = 0;
    v30 = 0;
    v31 = 7;
    *(_QWORD *)v32 = 0x100000000LL;
    *(_QWORD *)&v32[5] = 16777217;
    if ( (sub_141481480(&v29, a2, a3) & 1) != 0 )
    {
      v40 = v11;
      *(_QWORD *)&v36 = v33;
      *((_QWORD *)&v36 + 1) = sub_14041F680;
      v37 = &v40;
      v38 = sub_141490720;
      sub_14149C0F0(v34, &unk_14174C9B6, &v36);
      v12 = *(_QWORD *)v34;
      v13 = (_QWORD *)v39;
      *(_OWORD *)(v39 + 16) = *(_OWORD *)&v34[8];
      LODWORD(v9) = sub_140018650(&v40);
      *v13 = 10;
      v13[1] = v12;
    }
    else
    {
      hObject = v11;
      v28 = v11;
      v14 = sub_141471910();
      v16 = sub_141491390(v14, v15, 20, 0, (__int64)&off_14174DE88);
      v18 = v17;
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = sub_141201840(&v28);
          v20 = v19;
          if ( !v19 )
          {
            v9 = (_QWORD *)v39;
            *(_QWORD *)(v39 + 8) = hObject;
            *v9 = -1;
            return (int)v9;
          }
          if ( (unsigned __int8)sub_1403887F0(v19) != 13 )
          {
            v21 = v20 & 3;
            if ( v21 >= 2 && (_DWORD)v21 == 2 )
            {
              *(_QWORD *)&v36 = 0x2100000002LL;
              v22 = HIDWORD(v20) == 33;
            }
            else
            {
              *(_QWORD *)&v36 = 0x2100000002LL;
              v22 = 0;
            }
            v41 = 1;
            sub_140018650(&v36);
            if ( !v22 )
              break;
          }
          v40 = (void *)v20;
          v23 = sub_141471910();
          if ( v23 == v16 )
          {
            if ( v24 >= v18 )
              goto LABEL_22;
          }
          else if ( v23 >= v16 )
          {
LABEL_22:
            *(_QWORD *)v34 = v33;
            *(_QWORD *)&v34[8] = sub_14041F680;
            sub_14149C0F0(&v36, &unk_14174DECB, v34);
            v25 = v39;
            *(_QWORD *)(v39 + 24) = v37;
            *(_OWORD *)(v25 + 8) = v36;
            *(_QWORD *)v25 = 10;
            v41 = 0;
            sub_140018650(&v40);
            goto LABEL_24;
          }
          sub_141487490(0, 25000000);
          v41 = 0;
          sub_140018650(&v40);
        }
        if ( (unsigned __int8)sub_1403887F0(v20) != 35 )
          break;
        *(_QWORD *)&v36 = v20;
        v41 = 0;
        sub_140018650(&v36);
      }
      v40 = (void *)v20;
      *(_QWORD *)&v36 = v33;
      *((_QWORD *)&v36 + 1) = sub_14041F680;
      v37 = &v40;
      v38 = sub_141490720;
      sub_14149C0F0(v34, &unk_14174DEA0, &v36);
      v26 = v39;
      *(_QWORD *)(v39 + 24) = *(_QWORD *)&v34[16];
      *(_OWORD *)(v26 + 8) = *(_OWORD *)v34;
      *(_QWORD *)v26 = 10;
      v41 = 0;
      sub_140018650(&v40);
LABEL_24:
      LODWORD(v9) = CloseHandle(hObject);
    }
  }
  return (int)v9;
}
