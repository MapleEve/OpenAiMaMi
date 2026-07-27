// module: codexmate_lib/platform/process
// addr: 0x140aed480
// name: sub_140AED480
// win 1.2.1 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140AED480(__int64 a1, DWORD a2)
{
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // r14d
  __int64 v6; // rdi
  WCHAR ExeName[1024]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v9; // [rsp+830h] [rbp+7B0h] BYREF
  __int128 v10; // [rsp+840h] [rbp+7C0h]
  __int128 v11; // [rsp+850h] [rbp+7D0h]
  __int128 v12; // [rsp+860h] [rbp+7E0h]
  __int128 v13; // [rsp+870h] [rbp+7F0h]
  __int64 v14; // [rsp+880h] [rbp+800h]
  __int128 v15; // [rsp+888h] [rbp+808h] BYREF
  __int128 v16; // [rsp+898h] [rbp+818h]
  __int128 v17; // [rsp+8A8h] [rbp+828h]
  __int128 v18; // [rsp+8B8h] [rbp+838h]
  __int128 v19; // [rsp+8C8h] [rbp+848h]
  __int64 v20; // [rsp+8D8h] [rbp+858h]
  __int64 v21; // [rsp+8E0h] [rbp+860h]
  __int64 v22; // [rsp+8E8h] [rbp+868h]
  DWORD dwSize; // [rsp+8F4h] [rbp+874h] BYREF
  __int64 v24; // [rsp+8F8h] [rbp+878h]

  v24 = -2;
  v3 = OpenProcess(0x1000u, 0, a2);
  if ( v3
    && (v4 = v3,
        sub_1416848B0(ExeName, 0, 2048),
        dwSize = 1024,
        v5 = QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize),
        CloseHandle(v4),
        v5)
    && dwSize )
  {
    if ( dwSize >= 0x401 )
      sub_1416C32F0(0, dwSize, 1024, &off_1417B0AD8);
    *(_QWORD *)&v9 = ExeName;
    *((_QWORD *)&v9 + 1) = &ExeName[dwSize];
    LOWORD(v10) = 0;
    *(_QWORD *)&v15 = 0;
    *((_QWORD *)&v15 + 1) = 1;
    *(_QWORD *)&v16 = 0;
    sub_141688D30((unsigned int)&v15, 0, dwSize - (dwSize >> 1), 1, 1);
    sub_140993900(&v9, &v15);
    v22 = v15;
    v6 = v16;
    v21 = *((_QWORD *)&v15 + 1);
    sub_141486710(&v15, *((_QWORD *)&v15 + 1), v16);
    if ( (_DWORD)v15 == 2 )
    {
      *((_QWORD *)&v9 + 1) = *((_QWORD *)&v15 + 1);
      *(_QWORD *)&v9 = 2;
    }
    else
    {
      v9 = v15;
      v14 = v20;
      v13 = v19;
      v12 = v18;
      v11 = v17;
      v10 = v16;
      if ( (_QWORD)v15 != 2 )
      {
        *(_QWORD *)a1 = v22;
        *(_QWORD *)(a1 + 8) = v21;
        *(_QWORD *)(a1 + 16) = v6;
        *(_BYTE *)(a1 + 24) = 1;
        return a1;
      }
    }
    sub_140018650((char *)&v9 + 8);
    *(_QWORD *)a1 = -1;
    if ( v22 )
      sub_140001660(v21, v22, 1);
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return a1;
}