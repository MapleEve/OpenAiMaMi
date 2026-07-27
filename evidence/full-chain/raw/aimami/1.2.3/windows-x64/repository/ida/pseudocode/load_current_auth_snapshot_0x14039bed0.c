// module: codexmate_lib/core/repository
// addr: 0x14039bed0
// name: load_current_auth_snapshot
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::load_current_auth_snapshot | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load_current_auth_snapshot(_QWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE v7[176]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v9; // [rsp+D8h] [rbp+58h]
  __int128 v10; // [rsp+E8h] [rbp+68h]
  __int128 v11; // [rsp+F8h] [rbp+78h]
  __int128 v12; // [rsp+108h] [rbp+88h]
  __int128 v13; // [rsp+118h] [rbp+98h]
  __int128 v14; // [rsp+128h] [rbp+A8h]
  _OWORD v15[5]; // [rsp+180h] [rbp+100h] BYREF
  void *v16; // [rsp+1D0h] [rbp+150h]
  __int128 v17; // [rsp+1E0h] [rbp+160h] BYREF
  __int128 v18; // [rsp+1F0h] [rbp+170h]
  __int128 v19; // [rsp+200h] [rbp+180h]
  __int128 v20; // [rsp+210h] [rbp+190h]
  __int128 v21; // [rsp+220h] [rbp+1A0h]
  __int128 v22; // [rsp+230h] [rbp+1B0h]
  __int128 v23; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v24; // [rsp+250h] [rbp+1D0h]
  __int128 v25; // [rsp+260h] [rbp+1E0h]
  __int128 v26; // [rsp+270h] [rbp+1F0h]
  __int128 v27; // [rsp+280h] [rbp+200h]
  void *v28; // [rsp+290h] [rbp+210h]
  _OWORD *v29; // [rsp+298h] [rbp+218h]
  char v30; // [rsp+2A7h] [rbp+227h] BYREF
  __int64 v31; // [rsp+2A8h] [rbp+228h]

  v31 = -2;
  sub_1403C9010(&v8, a2, a3);
  if ( v8 == -2 )
  {
    v22 = v14;
    v21 = v13;
    v20 = v12;
    v19 = v11;
    v18 = v10;
    v17 = v9;
    sub_141486710(&v23, a2, a3);
    if ( (_DWORD)v23 == 2 )
    {
      *((_QWORD *)&v15[0] + 1) = *((_QWORD *)&v23 + 1);
      *(_QWORD *)&v15[0] = 2;
    }
    else
    {
      v15[0] = v23;
      v16 = v28;
      v15[4] = v27;
      v15[3] = v26;
      v15[2] = v25;
      v15[1] = v24;
      if ( (_QWORD)v23 != 2 )
      {
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v15[0] = &v17;
          *((_QWORD *)&v15[0] + 1) = sub_140B036A0;
          *(_QWORD *)&v23 = 0;
          *((_QWORD *)&v23 + 1) = aCodexmateLibCo_16;
          v24 = 0x1Fu;
          *(_QWORD *)&v25 = aSrcCoreReposit;
          *((_QWORD *)&v25 + 1) = 22;
          *(_QWORD *)&v26 = 2;
          *((_QWORD *)&v26 + 1) = aCodexmateLibCo_16;
          *(_QWORD *)&v27 = 31;
          *((_QWORD *)&v27 + 1) = 0x75100000001LL;
          v28 = &unk_14174F28C;
          v29 = v15;
          sub_1412C36A0(&v30, &v23);
        }
        goto LABEL_11;
      }
    }
    sub_140018650((char *)v15 + 8);
LABEL_11:
    *a1 = 2;
    return sub_14034ED40(&v17);
  }
  sub_141684120(v7, &v8, 176);
  if ( (unsigned __int8)sub_1403CBE70(v7) )
  {
    sub_1403C9DD0(&v8, v7, a2, a3);
    if ( (_DWORD)v8 == 2 )
    {
      v22 = v14;
      v21 = v13;
      v20 = v12;
      v19 = v11;
      v18 = v10;
      v17 = v9;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        *(_QWORD *)&v15[0] = &v17;
        *((_QWORD *)&v15[0] + 1) = sub_140B036A0;
        *(_QWORD *)&v23 = 0;
        *((_QWORD *)&v23 + 1) = aCodexmateLibCo_16;
        v24 = 0x1Fu;
        *(_QWORD *)&v25 = aSrcCoreReposit;
        *((_QWORD *)&v25 + 1) = 22;
        *(_QWORD *)&v26 = 2;
        *((_QWORD *)&v26 + 1) = aCodexmateLibCo_16;
        *(_QWORD *)&v27 = 31;
        *((_QWORD *)&v27 + 1) = 0x75C00000001LL;
        v28 = &unk_14174F25B;
        v29 = v15;
        sub_1412C36A0(&v30, &v23);
      }
      *a1 = 2;
      sub_14034ED40(&v17);
    }
    else
    {
      sub_141684120(a1, &v8, 152);
    }
  }
  else
  {
    *a1 = 2;
  }
  return sub_14034E960(v7);
}